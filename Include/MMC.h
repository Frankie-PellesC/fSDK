/*+@@file@@----------------------------------------------------------------*//*!
 \file		MMC.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 22:03:18 2016
 \date		Modified on Sun Aug  7 22:03:18 2016
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
#ifndef __mmc_h__
#define __mmc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IComponentData_FWD_DEFINED__
#define __IComponentData_FWD_DEFINED__
typedef interface IComponentData IComponentData;
#endif
#ifndef __IComponent_FWD_DEFINED__
#define __IComponent_FWD_DEFINED__
typedef interface IComponent IComponent;
#endif
#ifndef __IResultDataCompare_FWD_DEFINED__
#define __IResultDataCompare_FWD_DEFINED__
typedef interface IResultDataCompare IResultDataCompare;
#endif
#ifndef __IResultOwnerData_FWD_DEFINED__
#define __IResultOwnerData_FWD_DEFINED__
typedef interface IResultOwnerData IResultOwnerData;
#endif
#ifndef __IConsole_FWD_DEFINED__
#define __IConsole_FWD_DEFINED__
typedef interface IConsole IConsole;
#endif
#ifndef __IHeaderCtrl_FWD_DEFINED__
#define __IHeaderCtrl_FWD_DEFINED__
typedef interface IHeaderCtrl IHeaderCtrl;
#endif
#ifndef __IContextMenuCallback_FWD_DEFINED__
#define __IContextMenuCallback_FWD_DEFINED__
typedef interface IContextMenuCallback IContextMenuCallback;
#endif
#ifndef __IContextMenuProvider_FWD_DEFINED__
#define __IContextMenuProvider_FWD_DEFINED__
typedef interface IContextMenuProvider IContextMenuProvider;
#endif
#ifndef __IExtendContextMenu_FWD_DEFINED__
#define __IExtendContextMenu_FWD_DEFINED__
typedef interface IExtendContextMenu IExtendContextMenu;
#endif
#ifndef __IImageList_FWD_DEFINED__
#define __IImageList_FWD_DEFINED__
typedef interface IImageList IImageList;
#endif
#ifndef __IResultData_FWD_DEFINED__
#define __IResultData_FWD_DEFINED__
typedef interface IResultData IResultData;
#endif
#ifndef __IConsoleNameSpace_FWD_DEFINED__
#define __IConsoleNameSpace_FWD_DEFINED__
typedef interface IConsoleNameSpace IConsoleNameSpace;
#endif
#ifndef __IConsoleNameSpace2_FWD_DEFINED__
#define __IConsoleNameSpace2_FWD_DEFINED__
typedef interface IConsoleNameSpace2 IConsoleNameSpace2;
#endif
#ifndef __IPropertySheetCallback_FWD_DEFINED__
#define __IPropertySheetCallback_FWD_DEFINED__
typedef interface IPropertySheetCallback IPropertySheetCallback;
#endif
#ifndef __IPropertySheetProvider_FWD_DEFINED__
#define __IPropertySheetProvider_FWD_DEFINED__
typedef interface IPropertySheetProvider IPropertySheetProvider;
#endif
#ifndef __IExtendPropertySheet_FWD_DEFINED__
#define __IExtendPropertySheet_FWD_DEFINED__
typedef interface IExtendPropertySheet IExtendPropertySheet;
#endif
#ifndef __IControlbar_FWD_DEFINED__
#define __IControlbar_FWD_DEFINED__
typedef interface IControlbar IControlbar;
#endif
#ifndef __IExtendControlbar_FWD_DEFINED__
#define __IExtendControlbar_FWD_DEFINED__
typedef interface IExtendControlbar IExtendControlbar;
#endif
#ifndef __IToolbar_FWD_DEFINED__
#define __IToolbar_FWD_DEFINED__
typedef interface IToolbar IToolbar;
#endif
#ifndef __IConsoleVerb_FWD_DEFINED__
#define __IConsoleVerb_FWD_DEFINED__
typedef interface IConsoleVerb IConsoleVerb;
#endif
#ifndef __ISnapinAbout_FWD_DEFINED__
#define __ISnapinAbout_FWD_DEFINED__
typedef interface ISnapinAbout ISnapinAbout;
#endif
#ifndef __IMenuButton_FWD_DEFINED__
#define __IMenuButton_FWD_DEFINED__
typedef interface IMenuButton IMenuButton;
#endif
#ifndef __ISnapinHelp_FWD_DEFINED__
#define __ISnapinHelp_FWD_DEFINED__
typedef interface ISnapinHelp ISnapinHelp;
#endif
#ifndef __IExtendPropertySheet2_FWD_DEFINED__
#define __IExtendPropertySheet2_FWD_DEFINED__
typedef interface IExtendPropertySheet2 IExtendPropertySheet2;
#endif
#ifndef __IHeaderCtrl2_FWD_DEFINED__
#define __IHeaderCtrl2_FWD_DEFINED__
typedef interface IHeaderCtrl2 IHeaderCtrl2;
#endif
#ifndef __ISnapinHelp2_FWD_DEFINED__
#define __ISnapinHelp2_FWD_DEFINED__
typedef interface ISnapinHelp2 ISnapinHelp2;
#endif
#ifndef __IEnumTASK_FWD_DEFINED__
#define __IEnumTASK_FWD_DEFINED__
typedef interface IEnumTASK IEnumTASK;
#endif
#ifndef __IExtendTaskPad_FWD_DEFINED__
#define __IExtendTaskPad_FWD_DEFINED__
typedef interface IExtendTaskPad IExtendTaskPad;
#endif
#ifndef __IConsole2_FWD_DEFINED__
#define __IConsole2_FWD_DEFINED__
typedef interface IConsole2 IConsole2;
#endif
#ifndef __IDisplayHelp_FWD_DEFINED__
#define __IDisplayHelp_FWD_DEFINED__
typedef interface IDisplayHelp IDisplayHelp;
#endif
#ifndef __IRequiredExtensions_FWD_DEFINED__
#define __IRequiredExtensions_FWD_DEFINED__
typedef interface IRequiredExtensions IRequiredExtensions;
#endif
#ifndef __IStringTable_FWD_DEFINED__
#define __IStringTable_FWD_DEFINED__
typedef interface IStringTable IStringTable;
#endif
#ifndef __IColumnData_FWD_DEFINED__
#define __IColumnData_FWD_DEFINED__
typedef interface IColumnData IColumnData;
#endif
#ifndef __IMessageView_FWD_DEFINED__
#define __IMessageView_FWD_DEFINED__
typedef interface IMessageView IMessageView;
#endif
#ifndef __IResultDataCompareEx_FWD_DEFINED__
#define __IResultDataCompareEx_FWD_DEFINED__
typedef interface IResultDataCompareEx IResultDataCompareEx;
#endif
#ifndef __IComponentData2_FWD_DEFINED__
#define __IComponentData2_FWD_DEFINED__
typedef interface IComponentData2 IComponentData2;
#endif
#ifndef __IComponent2_FWD_DEFINED__
#define __IComponent2_FWD_DEFINED__
typedef interface IComponent2 IComponent2;
#endif
#ifndef __IContextMenuCallback2_FWD_DEFINED__
#define __IContextMenuCallback2_FWD_DEFINED__
typedef interface IContextMenuCallback2 IContextMenuCallback2;
#endif
#ifndef __IMMCVersionInfo_FWD_DEFINED__
#define __IMMCVersionInfo_FWD_DEFINED__
typedef interface IMMCVersionInfo IMMCVersionInfo;
#endif
#ifndef __MMCVersionInfo_FWD_DEFINED__
#define __MMCVersionInfo_FWD_DEFINED__
typedef struct MMCVersionInfo MMCVersionInfo;
#endif
#ifndef __ConsolePower_FWD_DEFINED__
#define __ConsolePower_FWD_DEFINED__
typedef struct ConsolePower ConsolePower;
#endif
#ifndef __IExtendView_FWD_DEFINED__
#define __IExtendView_FWD_DEFINED__
typedef interface IExtendView IExtendView;
#endif
#ifndef __IViewExtensionCallback_FWD_DEFINED__
#define __IViewExtensionCallback_FWD_DEFINED__
typedef interface IViewExtensionCallback IViewExtensionCallback;
#endif
#ifndef __IConsolePower_FWD_DEFINED__
#define __IConsolePower_FWD_DEFINED__
typedef interface IConsolePower IConsolePower;
#endif
#ifndef __IConsolePowerSink_FWD_DEFINED__
#define __IConsolePowerSink_FWD_DEFINED__
typedef interface IConsolePowerSink IConsolePowerSink;
#endif
#ifndef __INodeProperties_FWD_DEFINED__
#define __INodeProperties_FWD_DEFINED__
typedef interface INodeProperties INodeProperties;
#endif
#ifndef __IConsole3_FWD_DEFINED__
#define __IConsole3_FWD_DEFINED__
typedef interface IConsole3 IConsole3;
#endif
#ifndef __IResultData2_FWD_DEFINED__
#define __IResultData2_FWD_DEFINED__
typedef interface IResultData2 IResultData2;
#endif
#include <basetsd.h>
#include <oaidl.h>
#ifndef MMC_VER
#define MMC_VER 0x0210
#endif
#if (MMC_VER >= 0x0110)
#endif
#if (MMC_VER >= 0x0120)
#endif
#if (MMC_VER >= 0x0200)
#endif
#if (MMC_VER >= 0x0110)
#endif
#if (MMC_VER >= 0x0120)
#endif
#if (MMC_VER >= 0x0200)
#endif
typedef IConsole *LPCONSOLE;
typedef IHeaderCtrl *LPHEADERCTRL;
typedef IToolbar *LPTOOLBAR;
typedef IImageList *LPIMAGELIST;
typedef IResultData *LPRESULTDATA;
typedef IConsoleNameSpace *LPCONSOLENAMESPACE;
typedef IPropertySheetProvider *LPPROPERTYSHEETPROVIDER;
typedef IPropertySheetCallback *LPPROPERTYSHEETCALLBACK;
typedef IContextMenuProvider *LPCONTEXTMENUPROVIDER;
typedef IContextMenuCallback *LPCONTEXTMENUCALLBACK;
typedef IControlbar *LPCONTROLBAR;
typedef IConsoleVerb *LPCONSOLEVERB;
typedef IMenuButton *LPMENUBUTTON;
#if (MMC_VER >= 0x0110)
typedef IConsole2 *LPCONSOLE2;
typedef IHeaderCtrl2 *LPHEADERCTRL2;
typedef IConsoleNameSpace2 *LPCONSOLENAMESPACE2;
typedef IDisplayHelp *LPDISPLAYHELP;
typedef IStringTable *LPSTRINGTABLE;
#endif
#if (MMC_VER >= 0x0120)
typedef IColumnData *LPCOLUMNDATA;
typedef IResultDataCompareEx *LPRESULTDATACOMPAREEX;
#endif
typedef IComponent *LPCOMPONENT;
typedef IComponentData *LPCOMPONENTDATA;
typedef IExtendPropertySheet *LPEXTENDPROPERTYSHEET;
typedef IExtendContextMenu *LPEXTENDCONTEXTMENU;
typedef IExtendControlbar *LPEXTENDCONTROLBAR;
typedef IResultDataCompare *LPRESULTDATACOMPARE;
typedef IResultOwnerData *LPRESULTOWNERDATA;
typedef ISnapinAbout *LPSNAPABOUT;
typedef ISnapinAbout *LPSNAPINABOUT;
typedef ISnapinHelp *LPSNAPHELP;
typedef ISnapinHelp *LPSNAPINHELP;
#if (MMC_VER >= 0x0110)
typedef IEnumTASK *LPENUMTASK;
typedef IExtendPropertySheet2 *LPEXTENDPROPERTYSHEET2;
typedef ISnapinHelp2 *LPSNAPINHELP2;
typedef IExtendTaskPad *LPEXTENDTASKPAD;
typedef IRequiredExtensions *LPREQUIREDEXTENSIONS;
#endif
#if (MMC_VER >= 0x0200)
typedef IComponent2 *LPCOMPONENT2;
typedef IComponentData2 *LPCOMPONENTDATA2;
typedef IExtendView *LPEXTENDVIEW;
typedef IViewExtensionCallback *LPVIEWEXTENSIONCALLBACK;
typedef IConsolePower *LPCONSOLEPOWER;
typedef IConsolePowerSink *LPCONSOLEPOWERSINK;
typedef IConsole3 *LPCONSOLE3;
typedef INodeProperties *LPNODEPROPERTIES;
typedef IResultData2 *LPRESULTDATA2;
#endif
typedef BSTR *PBSTR;
#define	MMCLV_AUTO	( -1 )
#define	MMCLV_NOPARAM	( -2 )
#define	MMCLV_NOICON	( -1 )
#define	MMCLV_VIEWSTYLE_ICON	( 0 )
#define	MMCLV_VIEWSTYLE_SMALLICON	( 0x2 )
#define	MMCLV_VIEWSTYLE_LIST	( 0x3 )
#define	MMCLV_VIEWSTYLE_REPORT	( 0x1 )
#define	MMCLV_VIEWSTYLE_FILTERED	( 0x4 )
#define	MMCLV_NOPTR	( 0 )
#define	MMCLV_UPDATE_NOINVALIDATEALL	( 0x1 )
#define	MMCLV_UPDATE_NOSCROLL	( 0x2 )
//static LPOLESTR MMC_CALLBACK = (LPOLESTR) - 1;
#define MMC_CALLBACK	((LPOLESTR) - 1)
#if (MMC_VER >= 0x0120)
#define MMC_IMAGECALLBACK (-1)
#define MMC_TEXTCALLBACK  MMC_CALLBACK
#endif
typedef LONG_PTR HSCOPEITEM;
typedef long COMPONENTID;
typedef LONG_PTR HRESULTITEM;
#define	RDI_STR	( 0x2 )
#define	RDI_IMAGE	( 0x4 )
#define	RDI_STATE	( 0x8 )
#define	RDI_PARAM	( 0x10 )
#define	RDI_INDEX	( 0x20 )
#define	RDI_INDENT	( 0x40 )
typedef enum _MMC_RESULT_VIEW_STYLE
{
	MMC_SINGLESEL = 0x0001,
	MMC_SHOWSELALWAYS = 0x0002,
	MMC_NOSORTHEADER = 0x0004,
#if (MMC_VER >= 0x0120)
	MMC_ENSUREFOCUSVISIBLE = 0x0008
#endif
} MMC_RESULT_VIEW_STYLE;
#if 0
typedef enum _MMC_RESULT_VIEW_STYLE
{
	_MMC_VIEW_STYLE__dummy_ = 0
} MMC_RESULT_VIEW_STYLE;
#endif
#define	MMC_VIEW_OPTIONS_NONE	( 0 )
#define	MMC_VIEW_OPTIONS_NOLISTVIEWS	( 0x1 )
#define	MMC_VIEW_OPTIONS_MULTISELECT	( 0x2 )
#define	MMC_VIEW_OPTIONS_OWNERDATALIST	( 0x4 )
#define	MMC_VIEW_OPTIONS_FILTERED	( 0x8 )
#define	MMC_VIEW_OPTIONS_CREATENEW	( 0x10 )
#if (MMC_VER >= 0x0110)
#define	MMC_VIEW_OPTIONS_USEFONTLINKING	( 0x20 )
#endif
#if (MMC_VER >= 0x0120)
#define	MMC_VIEW_OPTIONS_EXCLUDE_SCOPE_ITEMS_FROM_LIST	( 0x40 )
#define	MMC_VIEW_OPTIONS_LEXICAL_SORT	( 0x80 )
#endif
#define	MMC_PSO_NOAPPLYNOW	( 0x1 )
#define	MMC_PSO_HASHELP	( 0x2 )
#define	MMC_PSO_NEWWIZARDTYPE	( 0x4 )
#define	MMC_PSO_NO_PROPTITLE	( 0x8 )
typedef enum _MMC_CONTROL_TYPE
{
	TOOLBAR = 0,
	MENUBUTTON = (TOOLBAR + 1),
	COMBOBOXBAR = (MENUBUTTON + 1)
} MMC_CONTROL_TYPE;
typedef enum _MMC_CONSOLE_VERB
{
	MMC_VERB_NONE = 0x0000,
	MMC_VERB_OPEN = 0x8000,
	MMC_VERB_COPY = 0x8001,
	MMC_VERB_PASTE = 0x8002,
	MMC_VERB_DELETE = 0x8003,
	MMC_VERB_PROPERTIES = 0x8004,
	MMC_VERB_RENAME = 0x8005,
	MMC_VERB_REFRESH = 0x8006,
	MMC_VERB_PRINT = 0x8007,
#if (MMC_VER >= 0x0110)
	MMC_VERB_CUT = 0x8008,
	MMC_VERB_MAX,
	MMC_VERB_FIRST = MMC_VERB_OPEN,
	MMC_VERB_LAST = MMC_VERB_MAX - 1
#endif
} MMC_CONSOLE_VERB;
#if 0
typedef enum _MMC_CONSOLE_VERB
{
	MMC_VERB__dummy_ = 0
} MMC_CONSOLE_VERB;
#endif
#include <pshpack8.h>
typedef struct _MMCButton
{
	int nBitmap;
	int idCommand;
	BYTE fsState;
	BYTE fsType;
	LPOLESTR lpButtonText;
	LPOLESTR lpTooltipText;
} MMCBUTTON;
#include <poppack.h>
typedef MMCBUTTON *LPMMCBUTTON;
typedef enum _MMC_BUTTON_STATE
{
	ENABLED = 0x1,
	CHECKED = 0x2,
	HIDDEN = 0x4,
	INDETERMINATE = 0x8,
	BUTTONPRESSED = 0x10
} MMC_BUTTON_STATE;
typedef struct _RESULTDATAITEM
{
	DWORD mask;
	BOOL bScopeItem;
	HRESULTITEM itemID;
	int nIndex;
	int nCol;
	LPOLESTR str;
	int nImage;
	UINT nState;
	LPARAM lParam;
	int iIndent;
} RESULTDATAITEM;
typedef RESULTDATAITEM *LPRESULTDATAITEM;
#define	RFI_PARTIAL	( 0x1 )
#define	RFI_WRAP	( 0x2 )
typedef struct _RESULTFINDINFO
{
	LPOLESTR psz;
	int nStart;
	DWORD dwOptions;
} RESULTFINDINFO;
typedef RESULTFINDINFO *LPRESULTFINDINFO;
#define	RSI_DESCENDING	( 0x1 )
#define	RSI_NOSORTICON	( 0x2 )
#define	SDI_STR	( 0x2 )
#define	SDI_IMAGE	( 0x4 )
#define	SDI_OPENIMAGE	( 0x8 )
#define	SDI_STATE	( 0x10 )
#define	SDI_PARAM	( 0x20 )
#define	SDI_CHILDREN	( 0x40 )
#define	SDI_PARENT	( 0 )
#define	SDI_PREVIOUS	( 0x10000000 )
#define	SDI_NEXT	( 0x20000000 )
#define	SDI_FIRST	( 0x8000000 )
typedef struct _SCOPEDATAITEM
{
	DWORD mask;
	LPOLESTR displayname;
	int nImage;
	int nOpenImage;
	UINT nState;
	int cChildren;
	LPARAM lParam;
	HSCOPEITEM relativeID;
	HSCOPEITEM ID;
} SCOPEDATAITEM;
typedef SCOPEDATAITEM *LPSCOPEDATAITEM;
typedef enum _MMC_SCOPE_ITEM_STATE
{
	MMC_SCOPE_ITEM_STATE_NORMAL = 0x1,
	MMC_SCOPE_ITEM_STATE_BOLD = 0x2,
	MMC_SCOPE_ITEM_STATE_EXPANDEDONCE = 0x3
} MMC_SCOPE_ITEM_STATE;
typedef struct _CONTEXTMENUITEM
{
	LPWSTR strName;
	LPWSTR strStatusBarText;
	LONG lCommandID;
	LONG lInsertionPointID;
	LONG fFlags;
	LONG fSpecialFlags;
} CONTEXTMENUITEM;
typedef CONTEXTMENUITEM *LPCONTEXTMENUITEM;
typedef enum _MMC_MENU_COMMAND_IDS
{
	MMCC_STANDARD_VIEW_SELECT = -1
} MMC_MENU_COMMAND_IDS;
typedef struct _MENUBUTTONDATA
{
	int idCommand;
	int x;
	int y;
} MENUBUTTONDATA;
typedef MENUBUTTONDATA *LPMENUBUTTONDATA;
typedef LONG_PTR MMC_COOKIE;
#define	MMC_MULTI_SELECT_COOKIE	( -2 )
#define	MMC_WINDOW_COOKIE	( -3 )
#if (MMC_VER >= 0x0110)
#define	SPECIAL_COOKIE_MIN	( -10 )
#define	SPECIAL_COOKIE_MAX	( -1 )
typedef enum _MMC_FILTER_TYPE
{
	MMC_STRING_FILTER = 0,
	MMC_INT_FILTER = 0x1,
	MMC_FILTER_NOVALUE = 0x8000
} MMC_FILTER_TYPE;
typedef struct _MMC_FILTERDATA
{
	LPOLESTR pszText;
	INT cchTextMax;
	LONG lValue;
} MMC_FILTERDATA;
typedef enum _MMC_FILTER_CHANGE_CODE
{
	MFCC_DISABLE = 0,
	MFCC_ENABLE = 1,
	MFCC_VALUE_CHANGE = 2
} MMC_FILTER_CHANGE_CODE;
typedef struct _MMC_RESTORE_VIEW
{
	DWORD dwSize;
	MMC_COOKIE cookie;
	LPOLESTR pViewType;
	long lViewOptions;
} MMC_RESTORE_VIEW;
typedef struct _MMC_EXPANDSYNC_STRUCT
{
	BOOL bHandled;
	BOOL bExpanding;
	HSCOPEITEM hItem;
} MMC_EXPANDSYNC_STRUCT;
#endif
#if (MMC_VER >= 0x0120)
typedef struct _MMC_VISIBLE_COLUMNS
{
	INT nVisibleColumns;
	INT rgVisibleCols[1];
} MMC_VISIBLE_COLUMNS;
#endif
typedef enum _MMC_NOTIFY_TYPE
{
	MMCN_ACTIVATE = 0x8001,
	MMCN_ADD_IMAGES = 0x8002,
	MMCN_BTN_CLICK = 0x8003,
	MMCN_CLICK = 0x8004,
	MMCN_COLUMN_CLICK = 0x8005,
	MMCN_CONTEXTMENU = 0x8006,
	MMCN_CUTORMOVE = 0x8007,
	MMCN_DBLCLICK = 0x8008,
	MMCN_DELETE = 0x8009,
	MMCN_DESELECT_ALL = 0x800A,
	MMCN_EXPAND = 0x800B,
	MMCN_HELP = 0x800C,
	MMCN_MENU_BTNCLICK = 0x800D,
	MMCN_MINIMIZED = 0x800E,
	MMCN_PASTE = 0x800F,
	MMCN_PROPERTY_CHANGE = 0x8010,
	MMCN_QUERY_PASTE = 0x8011,
	MMCN_REFRESH = 0x8012,
	MMCN_REMOVE_CHILDREN = 0x8013,
	MMCN_RENAME = 0x8014,
	MMCN_SELECT = 0x8015,
	MMCN_SHOW = 0x8016,
	MMCN_VIEW_CHANGE = 0x8017,
	MMCN_SNAPINHELP = 0x8018,
	MMCN_CONTEXTHELP = 0x8019,
	MMCN_INITOCX = 0x801A,
#if (MMC_VER >= 0x0110)
	MMCN_FILTER_CHANGE = 0x801B,
	MMCN_FILTERBTN_CLICK = 0x801C,
	MMCN_RESTORE_VIEW = 0x801D,
	MMCN_PRINT = 0x801E,
	MMCN_PRELOAD = 0x801F,
	MMCN_LISTPAD = 0x8020,
	MMCN_EXPANDSYNC = 0x8021,
#if (MMC_VER >= 0x0120)
	MMCN_COLUMNS_CHANGED = 0x8022,
#if (MMC_VER >= 0x0200)
	MMCN_CANPASTE_OUTOFPROC = 0x8023,
#endif
#endif
#endif
} MMC_NOTIFY_TYPE;
#if 0
typedef enum _MMC_NOTIFY_TYPE
{
	MMCN__dummy_ = 0
} MMC_NOTIFY_TYPE;
#endif
typedef enum _DATA_OBJECT_TYPES
{
	CCT_SCOPE = 0x8000,
	CCT_RESULT = 0x8001,
	CCT_SNAPIN_MANAGER = 0x8002,
	CCT_UNINITIALIZED = 0xffff
} DATA_OBJECT_TYPES;
#define	MMC_NW_OPTION_NONE	( 0 )
#define	MMC_NW_OPTION_NOSCOPEPANE	( 0x1 )
#define	MMC_NW_OPTION_NOTOOLBARS	( 0x2 )
#define	MMC_NW_OPTION_SHORTTITLE	( 0x4 )
#define	MMC_NW_OPTION_CUSTOMTITLE	( 0x8 )
#define	MMC_NW_OPTION_NOPERSIST	( 0x10 )
#define	MMC_NW_OPTION_NOACTIONPANE	( 0x20 )
#define	CCF_NODETYPE	( L"CCF_NODETYPE" )
#define	CCF_SZNODETYPE	( L"CCF_SZNODETYPE" )
#define	CCF_DISPLAY_NAME	( L"CCF_DISPLAY_NAME" )
#define	CCF_SNAPIN_CLASSID	( L"CCF_SNAPIN_CLASSID" )
#if (MMC_VER >= 0x0210)
#define	CCF_SNAPIN_CLASS	( L"CCF_SNAPIN_CLASS" )
#endif
#define	CCF_WINDOW_TITLE	( L"CCF_WINDOW_TITLE" )
#define	CCF_MMC_MULTISELECT_DATAOBJECT	( L"CCF_MMC_MULTISELECT_DATAOBJECT" )
typedef struct _SMMCDataObjects
{
	DWORD count;
	LPDATAOBJECT lpDataObject[1];
} SMMCDataObjects;
#define	CCF_MULTI_SELECT_SNAPINS	( L"CCF_MULTI_SELECT_SNAPINS" )
typedef struct _SMMCObjectTypes
{
	DWORD count;
	GUID guid[1];
} SMMCObjectTypes;
#define	CCF_OBJECT_TYPES_IN_MULTI_SELECT	( L"CCF_OBJECT_TYPES_IN_MULTI_SELECT" )
#if (MMC_VER >= 0x0110)
typedef SMMCObjectTypes SMMCDynamicExtensions;
#define	CCF_MMC_DYNAMIC_EXTENSIONS	( L"CCF_MMC_DYNAMIC_EXTENSIONS" )
#define	CCF_SNAPIN_PRELOADS	( L"CCF_SNAPIN_PRELOADS" )
typedef struct _SNodeID
{
	DWORD cBytes;
	BYTE id[1];
} SNodeID;
#if (MMC_VER >= 0x0120)
typedef struct _SNodeID2
{
	DWORD dwFlags;
	DWORD cBytes;
	BYTE id[1];
} SNodeID2;
#define	MMC_NODEID_SLOW_RETRIEVAL	( 0x1 )
#define	CCF_NODEID2	( L"CCF_NODEID2" )
#endif
#define	CCF_NODEID	( L"CCF_NODEID" )
#if (MMC_VER >= 0x0120)
typedef struct _SColumnSetID
{
	DWORD dwFlags;
	DWORD cBytes;
	BYTE id[1];
} SColumnSetID;
#define	CCF_COLUMN_SET_ID	( L"CCF_COLUMN_SET_ID" )
#endif
#endif
STDAPI MMCPropertyChangeNotify(LONG_PTR lNotifyHandle, LPARAM param);
#if (MMC_VER >= 0x0110)
STDAPI MMCPropertyHelp(LPOLESTR pszHelpTopic);
#endif
STDAPI MMCFreeNotifyHandle(LONG_PTR lNotifyHandle);
STDAPI MMCPropPageCallback(void *vpsp);
extern const CLSID CLSID_NodeManager;
#if (MMC_VER >= 0x0120)
extern const CLSID CLSID_MessageView;
#endif
#if (MMC_VER >= 0x0210)
typedef void (STDAPICALLTYPE *PFNAfxManageStateCallback) ();
STDAPI MMCAfxPropPageCallback(void *vpsp, PFNAfxManageStateCallback pfnManageStateCallback);
#endif
#define DOBJ_NULL        (LPDATAOBJECT)   0
#define DOBJ_CUSTOMOCX   (LPDATAOBJECT)  -1
#define DOBJ_CUSTOMWEB   (LPDATAOBJECT)  -2
#if (MMC_VER >= 0x0110)
#if (MMC_VER >= 0x0120)
#define DOBJ_NOCONSOLE   (LPDATAOBJECT)  -3
#endif
#define SPECIAL_DOBJ_MIN                -10
#define SPECIAL_DOBJ_MAX                  0
#endif
#define IS_SPECIAL_DATAOBJECT(d) (((LONG_PTR)(d) >= SPECIAL_DOBJ_MIN)   && ((LONG_PTR)(d) <= SPECIAL_DOBJ_MAX))
#define IS_SPECIAL_COOKIE(c)     (((c)          >= SPECIAL_COOKIE_MIN) && ((c)          <= SPECIAL_COOKIE_MAX))
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0000_v0_0_s_ifspec;
#ifndef __IComponentData_INTERFACE_DEFINED__
#define __IComponentData_INTERFACE_DEFINED__
extern const IID IID_IComponentData;
typedef struct IComponentDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IComponentData *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IComponentData *This);
	ULONG(STDMETHODCALLTYPE *Release) (IComponentData *This);
	HRESULT(STDMETHODCALLTYPE *Initialize) (IComponentData *This, LPUNKNOWN pUnknown);
	HRESULT(STDMETHODCALLTYPE *CreateComponent) (IComponentData *This, LPCOMPONENT *ppComponent);
	HRESULT(STDMETHODCALLTYPE *Notify) (IComponentData *This, LPDATAOBJECT lpDataObject, MMC_NOTIFY_TYPE event, LPARAM arg, LPARAM param);
	HRESULT(STDMETHODCALLTYPE *Destroy) (IComponentData *This);
	HRESULT(STDMETHODCALLTYPE *QueryDataObject) (IComponentData *This, MMC_COOKIE cookie, DATA_OBJECT_TYPES type, LPDATAOBJECT *ppDataObject);
	HRESULT(STDMETHODCALLTYPE *GetDisplayInfo) (IComponentData *This, SCOPEDATAITEM *pScopeDataItem);
	HRESULT(STDMETHODCALLTYPE *CompareObjects) (IComponentData *This, LPDATAOBJECT lpDataObjectA, LPDATAOBJECT lpDataObjectB);
	END_INTERFACE
}  IComponentDataVtbl;
interface IComponentData
{
	CONST_VTBL struct IComponentDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComponentData_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComponentData_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IComponentData_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IComponentData_Initialize(This,pUnknown) ( (This)->lpVtbl -> Initialize(This,pUnknown) )
#define IComponentData_CreateComponent(This,ppComponent) ( (This)->lpVtbl -> CreateComponent(This,ppComponent) )
#define IComponentData_Notify(This,lpDataObject,event,arg,param) ( (This)->lpVtbl -> Notify(This,lpDataObject,event,arg,param) )
#define IComponentData_Destroy(This) ( (This)->lpVtbl -> Destroy(This) )
#define IComponentData_QueryDataObject(This,cookie,type,ppDataObject) ( (This)->lpVtbl -> QueryDataObject(This,cookie,type,ppDataObject) )
#define IComponentData_GetDisplayInfo(This,pScopeDataItem) ( (This)->lpVtbl -> GetDisplayInfo(This,pScopeDataItem) )
#define IComponentData_CompareObjects(This,lpDataObjectA,lpDataObjectB) ( (This)->lpVtbl -> CompareObjects(This,lpDataObjectA,lpDataObjectB) )
#endif
#endif
#ifndef __IComponent_INTERFACE_DEFINED__
#define __IComponent_INTERFACE_DEFINED__
extern const IID IID_IComponent;
typedef struct IComponentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IComponent *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IComponent *This);
	ULONG(STDMETHODCALLTYPE *Release) (IComponent *This);
	HRESULT(STDMETHODCALLTYPE *Initialize) (IComponent *This, LPCONSOLE lpConsole);
	HRESULT(STDMETHODCALLTYPE *Notify) (IComponent *This, LPDATAOBJECT lpDataObject, MMC_NOTIFY_TYPE event, LPARAM arg, LPARAM param);
	HRESULT(STDMETHODCALLTYPE *Destroy) (IComponent *This, MMC_COOKIE cookie);
	HRESULT(STDMETHODCALLTYPE *QueryDataObject) (IComponent *This, MMC_COOKIE cookie, DATA_OBJECT_TYPES type, LPDATAOBJECT *ppDataObject);
	HRESULT(STDMETHODCALLTYPE *GetResultViewType) (IComponent *This, MMC_COOKIE cookie, LPOLESTR *ppViewType, long *pViewOptions);
	HRESULT(STDMETHODCALLTYPE *GetDisplayInfo) (IComponent *This, RESULTDATAITEM *pResultDataItem);
	HRESULT(STDMETHODCALLTYPE *CompareObjects) (IComponent *This, LPDATAOBJECT lpDataObjectA, LPDATAOBJECT lpDataObjectB);
	END_INTERFACE
}  IComponentVtbl;
interface IComponent
{
	CONST_VTBL struct IComponentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComponent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComponent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IComponent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IComponent_Initialize(This,lpConsole) ( (This)->lpVtbl -> Initialize(This,lpConsole) )
#define IComponent_Notify(This,lpDataObject,event,arg,param) ( (This)->lpVtbl -> Notify(This,lpDataObject,event,arg,param) )
#define IComponent_Destroy(This,cookie) ( (This)->lpVtbl -> Destroy(This,cookie) )
#define IComponent_QueryDataObject(This,cookie,type,ppDataObject) ( (This)->lpVtbl -> QueryDataObject(This,cookie,type,ppDataObject) )
#define IComponent_GetResultViewType(This,cookie,ppViewType,pViewOptions) ( (This)->lpVtbl -> GetResultViewType(This,cookie,ppViewType,pViewOptions) )
#define IComponent_GetDisplayInfo(This,pResultDataItem) ( (This)->lpVtbl -> GetDisplayInfo(This,pResultDataItem) )
#define IComponent_CompareObjects(This,lpDataObjectA,lpDataObjectB) ( (This)->lpVtbl -> CompareObjects(This,lpDataObjectA,lpDataObjectB) )
#endif
#endif
#ifndef __IResultDataCompare_INTERFACE_DEFINED__
#define __IResultDataCompare_INTERFACE_DEFINED__
extern const IID IID_IResultDataCompare;
typedef struct IResultDataCompareVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IResultDataCompare *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IResultDataCompare *This);
	ULONG(STDMETHODCALLTYPE *Release) (IResultDataCompare *This);
	HRESULT(STDMETHODCALLTYPE *Compare) (IResultDataCompare *This, LPARAM lUserParam, MMC_COOKIE cookieA, MMC_COOKIE cookieB, int *pnResult);
	END_INTERFACE
}  IResultDataCompareVtbl;
interface IResultDataCompare
{
	CONST_VTBL struct IResultDataCompareVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResultDataCompare_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResultDataCompare_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IResultDataCompare_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IResultDataCompare_Compare(This,lUserParam,cookieA,cookieB,pnResult) ( (This)->lpVtbl -> Compare(This,lUserParam,cookieA,cookieB,pnResult) )
#endif
#endif
#ifndef __IResultOwnerData_INTERFACE_DEFINED__
#define __IResultOwnerData_INTERFACE_DEFINED__
extern const IID IID_IResultOwnerData;
typedef struct IResultOwnerDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IResultOwnerData *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IResultOwnerData *This);
	ULONG(STDMETHODCALLTYPE *Release) (IResultOwnerData *This);
	HRESULT(STDMETHODCALLTYPE *FindItem) (IResultOwnerData *This, LPRESULTFINDINFO pFindInfo, int *pnFoundIndex);
	HRESULT(STDMETHODCALLTYPE *CacheHint) (IResultOwnerData *This, int nStartIndex, int nEndIndex);
	HRESULT(STDMETHODCALLTYPE *SortItems) (IResultOwnerData *This, int nColumn, DWORD dwSortOptions, LPARAM lUserParam);
	END_INTERFACE
}  IResultOwnerDataVtbl;
interface IResultOwnerData
{
	CONST_VTBL struct IResultOwnerDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResultOwnerData_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResultOwnerData_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IResultOwnerData_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IResultOwnerData_FindItem(This,pFindInfo,pnFoundIndex) ( (This)->lpVtbl -> FindItem(This,pFindInfo,pnFoundIndex) )
#define IResultOwnerData_CacheHint(This,nStartIndex,nEndIndex) ( (This)->lpVtbl -> CacheHint(This,nStartIndex,nEndIndex) )
#define IResultOwnerData_SortItems(This,nColumn,dwSortOptions,lUserParam) ( (This)->lpVtbl -> SortItems(This,nColumn,dwSortOptions,lUserParam) )
#endif
#endif
#ifndef __IConsole_INTERFACE_DEFINED__
#define __IConsole_INTERFACE_DEFINED__
extern const IID IID_IConsole;
typedef struct IConsoleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IConsole *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IConsole *This);
	ULONG(STDMETHODCALLTYPE *Release) (IConsole *This);
	HRESULT(STDMETHODCALLTYPE *SetHeader) (IConsole *This, LPHEADERCTRL pHeader);
	HRESULT(STDMETHODCALLTYPE *SetToolbar) (IConsole *This, LPTOOLBAR pToolbar);
	HRESULT(STDMETHODCALLTYPE *QueryResultView) (IConsole *This, LPUNKNOWN *pUnknown);
	HRESULT(STDMETHODCALLTYPE *QueryScopeImageList) (IConsole *This, LPIMAGELIST *ppImageList);
	HRESULT(STDMETHODCALLTYPE *QueryResultImageList) (IConsole *This, LPIMAGELIST *ppImageList);
	HRESULT(STDMETHODCALLTYPE *UpdateAllViews) (IConsole *This, LPDATAOBJECT lpDataObject, LPARAM data, LONG_PTR hint);
	HRESULT(STDMETHODCALLTYPE *MessageBox) (IConsole *This, LPCWSTR lpszText, LPCWSTR lpszTitle, UINT fuStyle, int *piRetval);
	HRESULT(STDMETHODCALLTYPE *QueryConsoleVerb) (IConsole *This, LPCONSOLEVERB *ppConsoleVerb);
	HRESULT(STDMETHODCALLTYPE *SelectScopeItem) (IConsole *This, HSCOPEITEM hScopeItem);
	HRESULT(STDMETHODCALLTYPE *GetMainWindow) (IConsole *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *NewWindow) (IConsole *This, HSCOPEITEM hScopeItem, unsigned long lOptions);
	END_INTERFACE
}  IConsoleVtbl;
interface IConsole
{
	CONST_VTBL struct IConsoleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConsole_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConsole_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConsole_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConsole_SetHeader(This,pHeader) ( (This)->lpVtbl -> SetHeader(This,pHeader) )
#define IConsole_SetToolbar(This,pToolbar) ( (This)->lpVtbl -> SetToolbar(This,pToolbar) )
#define IConsole_QueryResultView(This,pUnknown) ( (This)->lpVtbl -> QueryResultView(This,pUnknown) )
#define IConsole_QueryScopeImageList(This,ppImageList) ( (This)->lpVtbl -> QueryScopeImageList(This,ppImageList) )
#define IConsole_QueryResultImageList(This,ppImageList) ( (This)->lpVtbl -> QueryResultImageList(This,ppImageList) )
#define IConsole_UpdateAllViews(This,lpDataObject,data,hint) ( (This)->lpVtbl -> UpdateAllViews(This,lpDataObject,data,hint) )
#define IConsole_MessageBox(This,lpszText,lpszTitle,fuStyle,piRetval) ( (This)->lpVtbl -> MessageBox(This,lpszText,lpszTitle,fuStyle,piRetval) )
#define IConsole_QueryConsoleVerb(This,ppConsoleVerb) ( (This)->lpVtbl -> QueryConsoleVerb(This,ppConsoleVerb) )
#define IConsole_SelectScopeItem(This,hScopeItem) ( (This)->lpVtbl -> SelectScopeItem(This,hScopeItem) )
#define IConsole_GetMainWindow(This,phwnd) ( (This)->lpVtbl -> GetMainWindow(This,phwnd) )
#define IConsole_NewWindow(This,hScopeItem,lOptions) ( (This)->lpVtbl -> NewWindow(This,hScopeItem,lOptions) )
#endif
#endif
#ifndef __IHeaderCtrl_INTERFACE_DEFINED__
#define __IHeaderCtrl_INTERFACE_DEFINED__
#define	AUTO_WIDTH	( -1 )
#if (MMC_VER >= 0x0120)
#define	HIDE_COLUMN	( -4 )
#endif
extern const IID IID_IHeaderCtrl;
typedef struct IHeaderCtrlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IHeaderCtrl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IHeaderCtrl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IHeaderCtrl *This);
	HRESULT(STDMETHODCALLTYPE *InsertColumn) (IHeaderCtrl *This, int nCol, LPCWSTR title, int nFormat, int nWidth);
	HRESULT(STDMETHODCALLTYPE *DeleteColumn) (IHeaderCtrl *This, int nCol);
	HRESULT(STDMETHODCALLTYPE *SetColumnText) (IHeaderCtrl *This, int nCol, LPCWSTR title);
	HRESULT(STDMETHODCALLTYPE *GetColumnText) (IHeaderCtrl *This, int nCol, LPOLESTR *pText);
	HRESULT(STDMETHODCALLTYPE *SetColumnWidth) (IHeaderCtrl *This, int nCol, int nWidth);
	HRESULT(STDMETHODCALLTYPE *GetColumnWidth) (IHeaderCtrl *This, int nCol, int *pWidth);
	END_INTERFACE
}  IHeaderCtrlVtbl;
interface IHeaderCtrl
{
	CONST_VTBL struct IHeaderCtrlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHeaderCtrl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHeaderCtrl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IHeaderCtrl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IHeaderCtrl_InsertColumn(This,nCol,title,nFormat,nWidth) ( (This)->lpVtbl -> InsertColumn(This,nCol,title,nFormat,nWidth) )
#define IHeaderCtrl_DeleteColumn(This,nCol) ( (This)->lpVtbl -> DeleteColumn(This,nCol) )
#define IHeaderCtrl_SetColumnText(This,nCol,title) ( (This)->lpVtbl -> SetColumnText(This,nCol,title) )
#define IHeaderCtrl_GetColumnText(This,nCol,pText) ( (This)->lpVtbl -> GetColumnText(This,nCol,pText) )
#define IHeaderCtrl_SetColumnWidth(This,nCol,nWidth) ( (This)->lpVtbl -> SetColumnWidth(This,nCol,nWidth) )
#define IHeaderCtrl_GetColumnWidth(This,nCol,pWidth) ( (This)->lpVtbl -> GetColumnWidth(This,nCol,pWidth) )
#endif
#endif
enum __MIDL___MIDL_itf_mmc_0000_0006_0001
{
	CCM_INSERTIONPOINTID_MASK_SPECIAL = 0xffff0000,
	CCM_INSERTIONPOINTID_MASK_SHARED = 0x80000000,
	CCM_INSERTIONPOINTID_MASK_CREATE_PRIMARY = 0x40000000,
	CCM_INSERTIONPOINTID_MASK_ADD_PRIMARY = 0x20000000,
	CCM_INSERTIONPOINTID_MASK_ADD_3RDPARTY = 0x10000000,
	CCM_INSERTIONPOINTID_MASK_RESERVED = 0xfff0000,
	CCM_INSERTIONPOINTID_MASK_FLAGINDEX = 0x1f,
	CCM_INSERTIONPOINTID_PRIMARY_TOP = 0xa0000000,
	CCM_INSERTIONPOINTID_PRIMARY_NEW = 0xa0000001,
	CCM_INSERTIONPOINTID_PRIMARY_TASK = 0xa0000002,
	CCM_INSERTIONPOINTID_PRIMARY_VIEW = 0xa0000003,
	CCM_INSERTIONPOINTID_PRIMARY_HELP = 0xa0000004,
	CCM_INSERTIONPOINTID_3RDPARTY_NEW = 0x90000001,
	CCM_INSERTIONPOINTID_3RDPARTY_TASK = 0x90000002,
	CCM_INSERTIONPOINTID_ROOT_MENU = 0x80000000
};
enum __MIDL___MIDL_itf_mmc_0000_0006_0002
{
	CCM_INSERTIONALLOWED_TOP = (1L << ((CCM_INSERTIONPOINTID_PRIMARY_TOP & CCM_INSERTIONPOINTID_MASK_FLAGINDEX))),
	CCM_INSERTIONALLOWED_NEW = (1L << ((CCM_INSERTIONPOINTID_PRIMARY_NEW & CCM_INSERTIONPOINTID_MASK_FLAGINDEX))),
	CCM_INSERTIONALLOWED_TASK = (1L << ((CCM_INSERTIONPOINTID_PRIMARY_TASK & CCM_INSERTIONPOINTID_MASK_FLAGINDEX))),
	CCM_INSERTIONALLOWED_VIEW = (1L << ((CCM_INSERTIONPOINTID_PRIMARY_VIEW & CCM_INSERTIONPOINTID_MASK_FLAGINDEX)))
};
enum __MIDL___MIDL_itf_mmc_0000_0006_0003
{
	CCM_COMMANDID_MASK_RESERVED = 0xffff0000
};
enum __MIDL___MIDL_itf_mmc_0000_0006_0004
{
	CCM_SPECIAL_SEPARATOR = 0x1,
	CCM_SPECIAL_SUBMENU = 0x2,
	CCM_SPECIAL_DEFAULT_ITEM = 0x4,
	CCM_SPECIAL_INSERTION_POINT = 0x8,
	CCM_SPECIAL_TESTONLY = 0x10
};
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0006_v0_0_s_ifspec;
#ifndef __IContextMenuCallback_INTERFACE_DEFINED__
#define __IContextMenuCallback_INTERFACE_DEFINED__
extern const IID IID_IContextMenuCallback;
typedef struct IContextMenuCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContextMenuCallback *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContextMenuCallback *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContextMenuCallback *This);
	HRESULT(STDMETHODCALLTYPE *AddItem) (IContextMenuCallback *This, CONTEXTMENUITEM *pItem);
	END_INTERFACE
}  IContextMenuCallbackVtbl;
interface IContextMenuCallback
{
	CONST_VTBL struct IContextMenuCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextMenuCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContextMenuCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IContextMenuCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IContextMenuCallback_AddItem(This,pItem) ( (This)->lpVtbl -> AddItem(This,pItem) )
#endif
#endif
#ifndef __IContextMenuProvider_INTERFACE_DEFINED__
#define __IContextMenuProvider_INTERFACE_DEFINED__
extern const IID IID_IContextMenuProvider;
typedef struct IContextMenuProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContextMenuProvider *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContextMenuProvider *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContextMenuProvider *This);
	HRESULT(STDMETHODCALLTYPE *AddItem) (IContextMenuProvider *This, CONTEXTMENUITEM *pItem);
	HRESULT(STDMETHODCALLTYPE *EmptyMenuList) (IContextMenuProvider *This);
	HRESULT(STDMETHODCALLTYPE *AddPrimaryExtensionItems) (IContextMenuProvider *This, LPUNKNOWN piExtension, LPDATAOBJECT piDataObject);
	HRESULT(STDMETHODCALLTYPE *AddThirdPartyExtensionItems) (IContextMenuProvider *This, LPDATAOBJECT piDataObject);
	HRESULT(STDMETHODCALLTYPE *ShowContextMenu) (IContextMenuProvider *This, HWND hwndParent, long xPos, long yPos, long *plSelected);
	END_INTERFACE
}  IContextMenuProviderVtbl;
interface IContextMenuProvider
{
	CONST_VTBL struct IContextMenuProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextMenuProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContextMenuProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IContextMenuProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IContextMenuProvider_AddItem(This,pItem) ( (This)->lpVtbl -> AddItem(This,pItem) )
#define IContextMenuProvider_EmptyMenuList(This) ( (This)->lpVtbl -> EmptyMenuList(This) )
#define IContextMenuProvider_AddPrimaryExtensionItems(This,piExtension,piDataObject) ( (This)->lpVtbl -> AddPrimaryExtensionItems(This,piExtension,piDataObject) )
#define IContextMenuProvider_AddThirdPartyExtensionItems(This,piDataObject) ( (This)->lpVtbl -> AddThirdPartyExtensionItems(This,piDataObject) )
#define IContextMenuProvider_ShowContextMenu(This,hwndParent,xPos,yPos,plSelected) ( (This)->lpVtbl -> ShowContextMenu(This,hwndParent,xPos,yPos,plSelected) )
#endif
#endif
#ifndef __IExtendContextMenu_INTERFACE_DEFINED__
#define __IExtendContextMenu_INTERFACE_DEFINED__
extern const IID IID_IExtendContextMenu;
typedef struct IExtendContextMenuVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IExtendContextMenu *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IExtendContextMenu *This);
	ULONG(STDMETHODCALLTYPE *Release) (IExtendContextMenu *This);
	HRESULT(STDMETHODCALLTYPE *AddMenuItems) (IExtendContextMenu *This, LPDATAOBJECT piDataObject, LPCONTEXTMENUCALLBACK piCallback, long *pInsertionAllowed);
	HRESULT(STDMETHODCALLTYPE *Command) (IExtendContextMenu *This, long lCommandID, LPDATAOBJECT piDataObject);
	END_INTERFACE
}  IExtendContextMenuVtbl;
interface IExtendContextMenu
{
	CONST_VTBL struct IExtendContextMenuVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExtendContextMenu_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExtendContextMenu_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IExtendContextMenu_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IExtendContextMenu_AddMenuItems(This,piDataObject,piCallback,pInsertionAllowed) ( (This)->lpVtbl -> AddMenuItems(This,piDataObject,piCallback,pInsertionAllowed) )
#define IExtendContextMenu_Command(This,lCommandID,piDataObject) ( (This)->lpVtbl -> Command(This,lCommandID,piDataObject) )
#endif
#endif
#if (MMC_VER >= 0x0120)
#define ILSIF_LEAVE_LARGE_ICON  0x40000000
#define ILSIF_LEAVE_SMALL_ICON  0x20000000
#define ILSIF_LEAVE_MASK        (ILSIF_LEAVE_LARGE_ICON | ILSIF_LEAVE_SMALL_ICON)
#define ILSI_LARGE_ICON(nLoc)   (nLoc | ILSIF_LEAVE_SMALL_ICON)
#define ILSI_SMALL_ICON(nLoc)   (nLoc | ILSIF_LEAVE_LARGE_ICON)
#endif
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0009_v0_0_s_ifspec;
#ifndef __IImageList_INTERFACE_DEFINED__
#define __IImageList_INTERFACE_DEFINED__
extern const IID IID_IImageList;
typedef struct IImageListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IImageList *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IImageList *This);
	ULONG(STDMETHODCALLTYPE *Release) (IImageList *This);
	HRESULT(STDMETHODCALLTYPE *ImageListSetIcon) (IImageList *This, LONG_PTR *pIcon, long nLoc);
	HRESULT(STDMETHODCALLTYPE *ImageListSetStrip) (IImageList *This, LONG_PTR *pBMapSm, LONG_PTR *pBMapLg, long nStartLoc, COLORREF cMask);
	END_INTERFACE
}  IImageListVtbl;
interface IImageList
{
	CONST_VTBL struct IImageListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IImageList_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IImageList_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IImageList_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IImageList_ImageListSetIcon(This,pIcon,nLoc) ( (This)->lpVtbl -> ImageListSetIcon(This,pIcon,nLoc) )
#define IImageList_ImageListSetStrip(This,pBMapSm,pBMapLg,nStartLoc,cMask) ( (This)->lpVtbl -> ImageListSetStrip(This,pBMapSm,pBMapLg,nStartLoc,cMask) )
#endif
#endif
#ifndef __IResultData_INTERFACE_DEFINED__
#define __IResultData_INTERFACE_DEFINED__
extern const IID IID_IResultData;
typedef struct IResultDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IResultData *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IResultData *This);
	ULONG(STDMETHODCALLTYPE *Release) (IResultData *This);
	HRESULT(STDMETHODCALLTYPE *InsertItem) (IResultData *This, LPRESULTDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *DeleteItem) (IResultData *This, HRESULTITEM itemID, int nCol);
	HRESULT(STDMETHODCALLTYPE *FindItemByLParam) (IResultData *This, LPARAM lParam, HRESULTITEM *pItemID);
	HRESULT(STDMETHODCALLTYPE *DeleteAllRsltItems) (IResultData *This);
	HRESULT(STDMETHODCALLTYPE *SetItem) (IResultData *This, LPRESULTDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *GetItem) (IResultData *This, LPRESULTDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *GetNextItem) (IResultData *This, LPRESULTDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *ModifyItemState) (IResultData *This, int nIndex, HRESULTITEM itemID, UINT uAdd, UINT uRemove);
	HRESULT(STDMETHODCALLTYPE *ModifyViewStyle) (IResultData *This, MMC_RESULT_VIEW_STYLE add, MMC_RESULT_VIEW_STYLE remove);
	HRESULT(STDMETHODCALLTYPE *SetViewMode) (IResultData *This, long lViewMode);
	HRESULT(STDMETHODCALLTYPE *GetViewMode) (IResultData *This, long *lViewMode);
	HRESULT(STDMETHODCALLTYPE *UpdateItem) (IResultData *This, HRESULTITEM itemID);
	HRESULT(STDMETHODCALLTYPE *Sort) (IResultData *This, int nColumn, DWORD dwSortOptions, LPARAM lUserParam);
	HRESULT(STDMETHODCALLTYPE *SetDescBarText) (IResultData *This, LPOLESTR DescText);
	HRESULT(STDMETHODCALLTYPE *SetItemCount) (IResultData *This, int nItemCount, DWORD dwOptions);
	END_INTERFACE
}  IResultDataVtbl;
interface IResultData
{
	CONST_VTBL struct IResultDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResultData_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResultData_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IResultData_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IResultData_InsertItem(This,item) ( (This)->lpVtbl -> InsertItem(This,item) )
#define IResultData_DeleteItem(This,itemID,nCol) ( (This)->lpVtbl -> DeleteItem(This,itemID,nCol) )
#define IResultData_FindItemByLParam(This,lParam,pItemID) ( (This)->lpVtbl -> FindItemByLParam(This,lParam,pItemID) )
#define IResultData_DeleteAllRsltItems(This) ( (This)->lpVtbl -> DeleteAllRsltItems(This) )
#define IResultData_SetItem(This,item) ( (This)->lpVtbl -> SetItem(This,item) )
#define IResultData_GetItem(This,item) ( (This)->lpVtbl -> GetItem(This,item) )
#define IResultData_GetNextItem(This,item) ( (This)->lpVtbl -> GetNextItem(This,item) )
#define IResultData_ModifyItemState(This,nIndex,itemID,uAdd,uRemove) ( (This)->lpVtbl -> ModifyItemState(This,nIndex,itemID,uAdd,uRemove) )
#define IResultData_ModifyViewStyle(This,add,remove) ( (This)->lpVtbl -> ModifyViewStyle(This,add,remove) )
#define IResultData_SetViewMode(This,lViewMode) ( (This)->lpVtbl -> SetViewMode(This,lViewMode) )
#define IResultData_GetViewMode(This,lViewMode) ( (This)->lpVtbl -> GetViewMode(This,lViewMode) )
#define IResultData_UpdateItem(This,itemID) ( (This)->lpVtbl -> UpdateItem(This,itemID) )
#define IResultData_Sort(This,nColumn,dwSortOptions,lUserParam) ( (This)->lpVtbl -> Sort(This,nColumn,dwSortOptions,lUserParam) )
#define IResultData_SetDescBarText(This,DescText) ( (This)->lpVtbl -> SetDescBarText(This,DescText) )
#define IResultData_SetItemCount(This,nItemCount,dwOptions) ( (This)->lpVtbl -> SetItemCount(This,nItemCount,dwOptions) )
#endif
#endif
#ifndef __IConsoleNameSpace_INTERFACE_DEFINED__
#define __IConsoleNameSpace_INTERFACE_DEFINED__
extern const IID IID_IConsoleNameSpace;
typedef struct IConsoleNameSpaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IConsoleNameSpace *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IConsoleNameSpace *This);
	ULONG(STDMETHODCALLTYPE *Release) (IConsoleNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *InsertItem) (IConsoleNameSpace *This, LPSCOPEDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *DeleteItem) (IConsoleNameSpace *This, HSCOPEITEM hItem, long fDeleteThis);
	HRESULT(STDMETHODCALLTYPE *SetItem) (IConsoleNameSpace *This, LPSCOPEDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *GetItem) (IConsoleNameSpace *This, LPSCOPEDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *GetChildItem) (IConsoleNameSpace *This, HSCOPEITEM item, HSCOPEITEM *pItemChild, MMC_COOKIE *pCookie);
	HRESULT(STDMETHODCALLTYPE *GetNextItem) (IConsoleNameSpace *This, HSCOPEITEM item, HSCOPEITEM *pItemNext, MMC_COOKIE *pCookie);
	HRESULT(STDMETHODCALLTYPE *GetParentItem) (IConsoleNameSpace *This, HSCOPEITEM item, HSCOPEITEM *pItemParent, MMC_COOKIE *pCookie);
	END_INTERFACE
}  IConsoleNameSpaceVtbl;
interface IConsoleNameSpace
{
	CONST_VTBL struct IConsoleNameSpaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConsoleNameSpace_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConsoleNameSpace_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConsoleNameSpace_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConsoleNameSpace_InsertItem(This,item) ( (This)->lpVtbl -> InsertItem(This,item) )
#define IConsoleNameSpace_DeleteItem(This,hItem,fDeleteThis) ( (This)->lpVtbl -> DeleteItem(This,hItem,fDeleteThis) )
#define IConsoleNameSpace_SetItem(This,item) ( (This)->lpVtbl -> SetItem(This,item) )
#define IConsoleNameSpace_GetItem(This,item) ( (This)->lpVtbl -> GetItem(This,item) )
#define IConsoleNameSpace_GetChildItem(This,item,pItemChild,pCookie) ( (This)->lpVtbl -> GetChildItem(This,item,pItemChild,pCookie) )
#define IConsoleNameSpace_GetNextItem(This,item,pItemNext,pCookie) ( (This)->lpVtbl -> GetNextItem(This,item,pItemNext,pCookie) )
#define IConsoleNameSpace_GetParentItem(This,item,pItemParent,pCookie) ( (This)->lpVtbl -> GetParentItem(This,item,pItemParent,pCookie) )
#endif
#endif
#ifndef __IConsoleNameSpace2_INTERFACE_DEFINED__
#define __IConsoleNameSpace2_INTERFACE_DEFINED__
extern const IID IID_IConsoleNameSpace2;
typedef struct IConsoleNameSpace2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IConsoleNameSpace2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IConsoleNameSpace2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IConsoleNameSpace2 *This);
	HRESULT(STDMETHODCALLTYPE *InsertItem) (IConsoleNameSpace2 *This, LPSCOPEDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *DeleteItem) (IConsoleNameSpace2 *This, HSCOPEITEM hItem, long fDeleteThis);
	HRESULT(STDMETHODCALLTYPE *SetItem) (IConsoleNameSpace2 *This, LPSCOPEDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *GetItem) (IConsoleNameSpace2 *This, LPSCOPEDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *GetChildItem) (IConsoleNameSpace2 *This, HSCOPEITEM item, HSCOPEITEM *pItemChild, MMC_COOKIE *pCookie);
	HRESULT(STDMETHODCALLTYPE *GetNextItem) (IConsoleNameSpace2 *This, HSCOPEITEM item, HSCOPEITEM *pItemNext, MMC_COOKIE *pCookie);
	HRESULT(STDMETHODCALLTYPE *GetParentItem) (IConsoleNameSpace2 *This, HSCOPEITEM item, HSCOPEITEM *pItemParent, MMC_COOKIE *pCookie);
	HRESULT(STDMETHODCALLTYPE *Expand) (IConsoleNameSpace2 *This, HSCOPEITEM hItem);
	HRESULT(STDMETHODCALLTYPE *AddExtension) (IConsoleNameSpace2 *This, HSCOPEITEM hItem, LPCLSID lpClsid);
	END_INTERFACE
}  IConsoleNameSpace2Vtbl;
interface IConsoleNameSpace2
{
	CONST_VTBL struct IConsoleNameSpace2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConsoleNameSpace2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConsoleNameSpace2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConsoleNameSpace2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConsoleNameSpace2_InsertItem(This,item) ( (This)->lpVtbl -> InsertItem(This,item) )
#define IConsoleNameSpace2_DeleteItem(This,hItem,fDeleteThis) ( (This)->lpVtbl -> DeleteItem(This,hItem,fDeleteThis) )
#define IConsoleNameSpace2_SetItem(This,item) ( (This)->lpVtbl -> SetItem(This,item) )
#define IConsoleNameSpace2_GetItem(This,item) ( (This)->lpVtbl -> GetItem(This,item) )
#define IConsoleNameSpace2_GetChildItem(This,item,pItemChild,pCookie) ( (This)->lpVtbl -> GetChildItem(This,item,pItemChild,pCookie) )
#define IConsoleNameSpace2_GetNextItem(This,item,pItemNext,pCookie) ( (This)->lpVtbl -> GetNextItem(This,item,pItemNext,pCookie) )
#define IConsoleNameSpace2_GetParentItem(This,item,pItemParent,pCookie) ( (This)->lpVtbl -> GetParentItem(This,item,pItemParent,pCookie) )
#define IConsoleNameSpace2_Expand(This,hItem) ( (This)->lpVtbl -> Expand(This,hItem) )
#define IConsoleNameSpace2_AddExtension(This,hItem,lpClsid) ( (This)->lpVtbl -> AddExtension(This,hItem,lpClsid) )
#endif
#endif
typedef struct _PSP *HPROPSHEETPAGE;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0013_v0_0_s_ifspec;
#ifndef __IPropertySheetCallback_INTERFACE_DEFINED__
#define __IPropertySheetCallback_INTERFACE_DEFINED__
extern const IID IID_IPropertySheetCallback;
typedef struct IPropertySheetCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPropertySheetCallback *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPropertySheetCallback *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPropertySheetCallback *This);
	HRESULT(STDMETHODCALLTYPE *AddPage) (IPropertySheetCallback *This, HPROPSHEETPAGE hPage);
	HRESULT(STDMETHODCALLTYPE *RemovePage) (IPropertySheetCallback *This, HPROPSHEETPAGE hPage);
	END_INTERFACE
}  IPropertySheetCallbackVtbl;
interface IPropertySheetCallback
{
	CONST_VTBL struct IPropertySheetCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertySheetCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertySheetCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPropertySheetCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPropertySheetCallback_AddPage(This,hPage) ( (This)->lpVtbl -> AddPage(This,hPage) )
#define IPropertySheetCallback_RemovePage(This,hPage) ( (This)->lpVtbl -> RemovePage(This,hPage) )
#endif
#endif
#ifndef __IPropertySheetProvider_INTERFACE_DEFINED__
#define __IPropertySheetProvider_INTERFACE_DEFINED__
extern const IID IID_IPropertySheetProvider;
typedef struct IPropertySheetProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPropertySheetProvider *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPropertySheetProvider *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPropertySheetProvider *This);
	HRESULT(STDMETHODCALLTYPE *CreatePropertySheet) (IPropertySheetProvider *This, LPCWSTR title, boolean type, MMC_COOKIE cookie, LPDATAOBJECT pIDataObjectm, DWORD dwOptions);
	HRESULT(STDMETHODCALLTYPE *FindPropertySheet) (IPropertySheetProvider *This, HSCOPEITEM hItem, LPCOMPONENT lpComponent, LPDATAOBJECT lpDataObject);
	HRESULT(STDMETHODCALLTYPE *AddPrimaryPages) (IPropertySheetProvider *This, LPUNKNOWN lpUnknown, BOOL bCreateHandle, HWND hNotifyWindow, BOOL bScopePane);
	HRESULT(STDMETHODCALLTYPE *AddExtensionPages) (IPropertySheetProvider *This);
	HRESULT(STDMETHODCALLTYPE *Show) (IPropertySheetProvider *This, LONG_PTR window, int page);
	END_INTERFACE
}  IPropertySheetProviderVtbl;
interface IPropertySheetProvider
{
	CONST_VTBL struct IPropertySheetProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertySheetProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertySheetProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPropertySheetProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPropertySheetProvider_CreatePropertySheet(This,title,type,cookie,pIDataObjectm,dwOptions) ( (This)->lpVtbl -> CreatePropertySheet(This,title,type,cookie,pIDataObjectm,dwOptions) )
#define IPropertySheetProvider_FindPropertySheet(This,hItem,lpComponent,lpDataObject) ( (This)->lpVtbl -> FindPropertySheet(This,hItem,lpComponent,lpDataObject) )
#define IPropertySheetProvider_AddPrimaryPages(This,lpUnknown,bCreateHandle,hNotifyWindow,bScopePane) ( (This)->lpVtbl -> AddPrimaryPages(This,lpUnknown,bCreateHandle,hNotifyWindow,bScopePane) )
#define IPropertySheetProvider_AddExtensionPages(This) ( (This)->lpVtbl -> AddExtensionPages(This) )
#define IPropertySheetProvider_Show(This,window,page) ( (This)->lpVtbl -> Show(This,window,page) )
#endif
#endif
#ifndef __IExtendPropertySheet_INTERFACE_DEFINED__
#define __IExtendPropertySheet_INTERFACE_DEFINED__
extern const IID IID_IExtendPropertySheet;
typedef struct IExtendPropertySheetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IExtendPropertySheet *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IExtendPropertySheet *This);
	ULONG(STDMETHODCALLTYPE *Release) (IExtendPropertySheet *This);
	HRESULT(STDMETHODCALLTYPE *CreatePropertyPages) (IExtendPropertySheet *This, LPPROPERTYSHEETCALLBACK lpProvider, LONG_PTR handle, LPDATAOBJECT lpIDataObject);
	HRESULT(STDMETHODCALLTYPE *QueryPagesFor) (IExtendPropertySheet *This, LPDATAOBJECT lpDataObject);
	END_INTERFACE
}  IExtendPropertySheetVtbl;
interface IExtendPropertySheet
{
	CONST_VTBL struct IExtendPropertySheetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExtendPropertySheet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExtendPropertySheet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IExtendPropertySheet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IExtendPropertySheet_CreatePropertyPages(This,lpProvider,handle,lpIDataObject) ( (This)->lpVtbl -> CreatePropertyPages(This,lpProvider,handle,lpIDataObject) )
#define IExtendPropertySheet_QueryPagesFor(This,lpDataObject) ( (This)->lpVtbl -> QueryPagesFor(This,lpDataObject) )
#endif
#endif
#ifndef __IControlbar_INTERFACE_DEFINED__
#define __IControlbar_INTERFACE_DEFINED__
extern const IID IID_IControlbar;
typedef struct IControlbarVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IControlbar *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IControlbar *This);
	ULONG(STDMETHODCALLTYPE *Release) (IControlbar *This);
	HRESULT(STDMETHODCALLTYPE *Create) (IControlbar *This, MMC_CONTROL_TYPE nType, LPEXTENDCONTROLBAR pExtendControlbar, LPUNKNOWN *ppUnknown);
	HRESULT(STDMETHODCALLTYPE *Attach) (IControlbar *This, MMC_CONTROL_TYPE nType, LPUNKNOWN lpUnknown);
	HRESULT(STDMETHODCALLTYPE *Detach) (IControlbar *This, LPUNKNOWN lpUnknown);
	END_INTERFACE
}  IControlbarVtbl;
interface IControlbar
{
	CONST_VTBL struct IControlbarVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IControlbar_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IControlbar_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IControlbar_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IControlbar_Create(This,nType,pExtendControlbar,ppUnknown) ( (This)->lpVtbl -> Create(This,nType,pExtendControlbar,ppUnknown) )
#define IControlbar_Attach(This,nType,lpUnknown) ( (This)->lpVtbl -> Attach(This,nType,lpUnknown) )
#define IControlbar_Detach(This,lpUnknown) ( (This)->lpVtbl -> Detach(This,lpUnknown) )
#endif
#endif
#ifndef __IExtendControlbar_INTERFACE_DEFINED__
#define __IExtendControlbar_INTERFACE_DEFINED__
extern const IID IID_IExtendControlbar;
typedef struct IExtendControlbarVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IExtendControlbar *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IExtendControlbar *This);
	ULONG(STDMETHODCALLTYPE *Release) (IExtendControlbar *This);
	HRESULT(STDMETHODCALLTYPE *SetControlbar) (IExtendControlbar *This, LPCONTROLBAR pControlbar);
	HRESULT(STDMETHODCALLTYPE *ControlbarNotify) (IExtendControlbar *This, MMC_NOTIFY_TYPE event, LPARAM arg, LPARAM param);
	END_INTERFACE
}  IExtendControlbarVtbl;
interface IExtendControlbar
{
	CONST_VTBL struct IExtendControlbarVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExtendControlbar_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExtendControlbar_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IExtendControlbar_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IExtendControlbar_SetControlbar(This,pControlbar) ( (This)->lpVtbl -> SetControlbar(This,pControlbar) )
#define IExtendControlbar_ControlbarNotify(This,event,arg,param) ( (This)->lpVtbl -> ControlbarNotify(This,event,arg,param) )
#endif
#endif
#ifndef __IToolbar_INTERFACE_DEFINED__
#define __IToolbar_INTERFACE_DEFINED__
extern const IID IID_IToolbar;
typedef struct IToolbarVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IToolbar *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IToolbar *This);
	ULONG(STDMETHODCALLTYPE *Release) (IToolbar *This);
	HRESULT(STDMETHODCALLTYPE *AddBitmap) (IToolbar *This, int nImages, HBITMAP hbmp, int cxSize, int cySize, COLORREF crMask);
	HRESULT(STDMETHODCALLTYPE *AddButtons) (IToolbar *This, int nButtons, LPMMCBUTTON lpButtons);
	HRESULT(STDMETHODCALLTYPE *InsertButton) (IToolbar *This, int nIndex, LPMMCBUTTON lpButton);
	HRESULT(STDMETHODCALLTYPE *DeleteButton) (IToolbar *This, int nIndex);
	HRESULT(STDMETHODCALLTYPE *GetButtonState) (IToolbar *This, int idCommand, MMC_BUTTON_STATE nState, BOOL *pState);
	HRESULT(STDMETHODCALLTYPE *SetButtonState) (IToolbar *This, int idCommand, MMC_BUTTON_STATE nState, BOOL bState);
	END_INTERFACE
}  IToolbarVtbl;
interface IToolbar
{
	CONST_VTBL struct IToolbarVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IToolbar_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IToolbar_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IToolbar_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IToolbar_AddBitmap(This,nImages,hbmp,cxSize,cySize,crMask) ( (This)->lpVtbl -> AddBitmap(This,nImages,hbmp,cxSize,cySize,crMask) )
#define IToolbar_AddButtons(This,nButtons,lpButtons) ( (This)->lpVtbl -> AddButtons(This,nButtons,lpButtons) )
#define IToolbar_InsertButton(This,nIndex,lpButton) ( (This)->lpVtbl -> InsertButton(This,nIndex,lpButton) )
#define IToolbar_DeleteButton(This,nIndex) ( (This)->lpVtbl -> DeleteButton(This,nIndex) )
#define IToolbar_GetButtonState(This,idCommand,nState,pState) ( (This)->lpVtbl -> GetButtonState(This,idCommand,nState,pState) )
#define IToolbar_SetButtonState(This,idCommand,nState,bState) ( (This)->lpVtbl -> SetButtonState(This,idCommand,nState,bState) )
#endif
#endif
#ifndef __IConsoleVerb_INTERFACE_DEFINED__
#define __IConsoleVerb_INTERFACE_DEFINED__
extern const IID IID_IConsoleVerb;
typedef struct IConsoleVerbVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IConsoleVerb *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IConsoleVerb *This);
	ULONG(STDMETHODCALLTYPE *Release) (IConsoleVerb *This);
	HRESULT(STDMETHODCALLTYPE *GetVerbState) (IConsoleVerb *This, MMC_CONSOLE_VERB eCmdID, MMC_BUTTON_STATE nState, BOOL *pState);
	HRESULT(STDMETHODCALLTYPE *SetVerbState) (IConsoleVerb *This, MMC_CONSOLE_VERB eCmdID, MMC_BUTTON_STATE nState, BOOL bState);
	HRESULT(STDMETHODCALLTYPE *SetDefaultVerb) (IConsoleVerb *This, MMC_CONSOLE_VERB eCmdID);
	HRESULT(STDMETHODCALLTYPE *GetDefaultVerb) (IConsoleVerb *This, MMC_CONSOLE_VERB *peCmdID);
	END_INTERFACE
}  IConsoleVerbVtbl;
interface IConsoleVerb
{
	CONST_VTBL struct IConsoleVerbVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConsoleVerb_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConsoleVerb_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConsoleVerb_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConsoleVerb_GetVerbState(This,eCmdID,nState,pState) ( (This)->lpVtbl -> GetVerbState(This,eCmdID,nState,pState) )
#define IConsoleVerb_SetVerbState(This,eCmdID,nState,bState) ( (This)->lpVtbl -> SetVerbState(This,eCmdID,nState,bState) )
#define IConsoleVerb_SetDefaultVerb(This,eCmdID) ( (This)->lpVtbl -> SetDefaultVerb(This,eCmdID) )
#define IConsoleVerb_GetDefaultVerb(This,peCmdID) ( (This)->lpVtbl -> GetDefaultVerb(This,peCmdID) )
#endif
#endif
#ifndef __ISnapinAbout_INTERFACE_DEFINED__
#define __ISnapinAbout_INTERFACE_DEFINED__
extern const IID IID_ISnapinAbout;
typedef struct ISnapinAboutVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISnapinAbout *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISnapinAbout *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISnapinAbout *This);
	HRESULT(STDMETHODCALLTYPE *GetSnapinDescription) (ISnapinAbout *This, LPOLESTR *lpDescription);
	HRESULT(STDMETHODCALLTYPE *GetProvider) (ISnapinAbout *This, LPOLESTR *lpName);
	HRESULT(STDMETHODCALLTYPE *GetSnapinVersion) (ISnapinAbout *This, LPOLESTR *lpVersion);
	HRESULT(STDMETHODCALLTYPE *GetSnapinImage) (ISnapinAbout *This, HICON *hAppIcon);
	HRESULT(STDMETHODCALLTYPE *GetStaticFolderImage) (ISnapinAbout *This, HBITMAP *hSmallImage, HBITMAP *hSmallImageOpen, HBITMAP *hLargeImage, COLORREF *cMask);
	END_INTERFACE
}  ISnapinAboutVtbl;
interface ISnapinAbout
{
	CONST_VTBL struct ISnapinAboutVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISnapinAbout_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISnapinAbout_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISnapinAbout_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISnapinAbout_GetSnapinDescription(This,lpDescription) ( (This)->lpVtbl -> GetSnapinDescription(This,lpDescription) )
#define ISnapinAbout_GetProvider(This,lpName) ( (This)->lpVtbl -> GetProvider(This,lpName) )
#define ISnapinAbout_GetSnapinVersion(This,lpVersion) ( (This)->lpVtbl -> GetSnapinVersion(This,lpVersion) )
#define ISnapinAbout_GetSnapinImage(This,hAppIcon) ( (This)->lpVtbl -> GetSnapinImage(This,hAppIcon) )
#define ISnapinAbout_GetStaticFolderImage(This,hSmallImage,hSmallImageOpen,hLargeImage,cMask) ( (This)->lpVtbl -> GetStaticFolderImage(This,hSmallImage,hSmallImageOpen,hLargeImage,cMask) )
#endif
#endif
#ifndef __IMenuButton_INTERFACE_DEFINED__
#define __IMenuButton_INTERFACE_DEFINED__
extern const IID IID_IMenuButton;
typedef struct IMenuButtonVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMenuButton *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMenuButton *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMenuButton *This);
	HRESULT(STDMETHODCALLTYPE *AddButton) (IMenuButton *This, int idCommand, LPOLESTR lpButtonText, LPOLESTR lpTooltipText);
	HRESULT(STDMETHODCALLTYPE *SetButton) (IMenuButton *This, int idCommand, LPOLESTR lpButtonText, LPOLESTR lpTooltipText);
	HRESULT(STDMETHODCALLTYPE *SetButtonState) (IMenuButton *This, int idCommand, MMC_BUTTON_STATE nState, BOOL bState);
	END_INTERFACE
}  IMenuButtonVtbl;
interface IMenuButton
{
	CONST_VTBL struct IMenuButtonVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMenuButton_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMenuButton_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMenuButton_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMenuButton_AddButton(This,idCommand,lpButtonText,lpTooltipText) ( (This)->lpVtbl -> AddButton(This,idCommand,lpButtonText,lpTooltipText) )
#define IMenuButton_SetButton(This,idCommand,lpButtonText,lpTooltipText) ( (This)->lpVtbl -> SetButton(This,idCommand,lpButtonText,lpTooltipText) )
#define IMenuButton_SetButtonState(This,idCommand,nState,bState) ( (This)->lpVtbl -> SetButtonState(This,idCommand,nState,bState) )
#endif
#endif
#ifndef __ISnapinHelp_INTERFACE_DEFINED__
#define __ISnapinHelp_INTERFACE_DEFINED__
extern const IID IID_ISnapinHelp;
typedef struct ISnapinHelpVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISnapinHelp *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISnapinHelp *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISnapinHelp *This);
	HRESULT(STDMETHODCALLTYPE *GetHelpTopic) (ISnapinHelp *This, LPOLESTR *lpCompiledHelpFile);
	END_INTERFACE
}  ISnapinHelpVtbl;
interface ISnapinHelp
{
	CONST_VTBL struct ISnapinHelpVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISnapinHelp_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISnapinHelp_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISnapinHelp_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISnapinHelp_GetHelpTopic(This,lpCompiledHelpFile) ( (This)->lpVtbl -> GetHelpTopic(This,lpCompiledHelpFile) )
#endif
#endif
#if (MMC_VER >= 0x0110)
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0023_v0_0_s_ifspec;
#ifndef __IExtendPropertySheet2_INTERFACE_DEFINED__
#define __IExtendPropertySheet2_INTERFACE_DEFINED__
extern const IID IID_IExtendPropertySheet2;
typedef struct IExtendPropertySheet2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IExtendPropertySheet2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IExtendPropertySheet2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IExtendPropertySheet2 *This);
	HRESULT(STDMETHODCALLTYPE *CreatePropertyPages) (IExtendPropertySheet2 *This, LPPROPERTYSHEETCALLBACK lpProvider, LONG_PTR handle, LPDATAOBJECT lpIDataObject);
	HRESULT(STDMETHODCALLTYPE *QueryPagesFor) (IExtendPropertySheet2 *This, LPDATAOBJECT lpDataObject);
	HRESULT(STDMETHODCALLTYPE *GetWatermarks) (IExtendPropertySheet2 *This, LPDATAOBJECT lpIDataObject, HBITMAP *lphWatermark, HBITMAP *lphHeader, HPALETTE *lphPalette, BOOL *bStretch);
	END_INTERFACE
}  IExtendPropertySheet2Vtbl;
interface IExtendPropertySheet2
{
	CONST_VTBL struct IExtendPropertySheet2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExtendPropertySheet2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExtendPropertySheet2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IExtendPropertySheet2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IExtendPropertySheet2_CreatePropertyPages(This,lpProvider,handle,lpIDataObject) ( (This)->lpVtbl -> CreatePropertyPages(This,lpProvider,handle,lpIDataObject) )
#define IExtendPropertySheet2_QueryPagesFor(This,lpDataObject) ( (This)->lpVtbl -> QueryPagesFor(This,lpDataObject) )
#define IExtendPropertySheet2_GetWatermarks(This,lpIDataObject,lphWatermark,lphHeader,lphPalette,bStretch) ( (This)->lpVtbl -> GetWatermarks(This,lpIDataObject,lphWatermark,lphHeader,lphPalette,bStretch) )
#endif
#endif
#ifndef __IHeaderCtrl2_INTERFACE_DEFINED__
#define __IHeaderCtrl2_INTERFACE_DEFINED__
extern const IID IID_IHeaderCtrl2;
typedef struct IHeaderCtrl2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IHeaderCtrl2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IHeaderCtrl2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IHeaderCtrl2 *This);
	HRESULT(STDMETHODCALLTYPE *InsertColumn) (IHeaderCtrl2 *This, int nCol, LPCWSTR title, int nFormat, int nWidth);
	HRESULT(STDMETHODCALLTYPE *DeleteColumn) (IHeaderCtrl2 *This, int nCol);
	HRESULT(STDMETHODCALLTYPE *SetColumnText) (IHeaderCtrl2 *This, int nCol, LPCWSTR title);
	HRESULT(STDMETHODCALLTYPE *GetColumnText) (IHeaderCtrl2 *This, int nCol, LPOLESTR *pText);
	HRESULT(STDMETHODCALLTYPE *SetColumnWidth) (IHeaderCtrl2 *This, int nCol, int nWidth);
	HRESULT(STDMETHODCALLTYPE *GetColumnWidth) (IHeaderCtrl2 *This, int nCol, int *pWidth);
	HRESULT(STDMETHODCALLTYPE *SetChangeTimeOut) (IHeaderCtrl2 *This, unsigned long uTimeout);
	HRESULT(STDMETHODCALLTYPE *SetColumnFilter) (IHeaderCtrl2 *This, UINT nColumn, DWORD dwType, MMC_FILTERDATA *pFilterData);
	HRESULT(STDMETHODCALLTYPE *GetColumnFilter) (IHeaderCtrl2 *This, UINT nColumn, LPDWORD pdwType, MMC_FILTERDATA *pFilterData);
	END_INTERFACE
}  IHeaderCtrl2Vtbl;
interface IHeaderCtrl2
{
	CONST_VTBL struct IHeaderCtrl2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHeaderCtrl2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHeaderCtrl2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IHeaderCtrl2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IHeaderCtrl2_InsertColumn(This,nCol,title,nFormat,nWidth) ( (This)->lpVtbl -> InsertColumn(This,nCol,title,nFormat,nWidth) )
#define IHeaderCtrl2_DeleteColumn(This,nCol) ( (This)->lpVtbl -> DeleteColumn(This,nCol) )
#define IHeaderCtrl2_SetColumnText(This,nCol,title) ( (This)->lpVtbl -> SetColumnText(This,nCol,title) )
#define IHeaderCtrl2_GetColumnText(This,nCol,pText) ( (This)->lpVtbl -> GetColumnText(This,nCol,pText) )
#define IHeaderCtrl2_SetColumnWidth(This,nCol,nWidth) ( (This)->lpVtbl -> SetColumnWidth(This,nCol,nWidth) )
#define IHeaderCtrl2_GetColumnWidth(This,nCol,pWidth) ( (This)->lpVtbl -> GetColumnWidth(This,nCol,pWidth) )
#define IHeaderCtrl2_SetChangeTimeOut(This,uTimeout) ( (This)->lpVtbl -> SetChangeTimeOut(This,uTimeout) )
#define IHeaderCtrl2_SetColumnFilter(This,nColumn,dwType,pFilterData) ( (This)->lpVtbl -> SetColumnFilter(This,nColumn,dwType,pFilterData) )
#define IHeaderCtrl2_GetColumnFilter(This,nColumn,pdwType,pFilterData) ( (This)->lpVtbl -> GetColumnFilter(This,nColumn,pdwType,pFilterData) )
#endif
#endif
#ifndef __ISnapinHelp2_INTERFACE_DEFINED__
#define __ISnapinHelp2_INTERFACE_DEFINED__
extern const IID IID_ISnapinHelp2;
typedef struct ISnapinHelp2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISnapinHelp2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISnapinHelp2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISnapinHelp2 *This);
	HRESULT(STDMETHODCALLTYPE *GetHelpTopic) (ISnapinHelp2 *This, LPOLESTR *lpCompiledHelpFile);
	HRESULT(STDMETHODCALLTYPE *GetLinkedTopics) (ISnapinHelp2 *This, LPOLESTR *lpCompiledHelpFiles);
	END_INTERFACE
}  ISnapinHelp2Vtbl;
interface ISnapinHelp2
{
	CONST_VTBL struct ISnapinHelp2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISnapinHelp2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISnapinHelp2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISnapinHelp2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISnapinHelp2_GetHelpTopic(This,lpCompiledHelpFile) ( (This)->lpVtbl -> GetHelpTopic(This,lpCompiledHelpFile) )
#define ISnapinHelp2_GetLinkedTopics(This,lpCompiledHelpFiles) ( (This)->lpVtbl -> GetLinkedTopics(This,lpCompiledHelpFiles) )
#endif
#endif
typedef enum _MMC_TASK_DISPLAY_TYPE
{
	MMC_TASK_DISPLAY_UNINITIALIZED = 0,
	MMC_TASK_DISPLAY_TYPE_SYMBOL = (MMC_TASK_DISPLAY_UNINITIALIZED + 1),
	MMC_TASK_DISPLAY_TYPE_VANILLA_GIF = (MMC_TASK_DISPLAY_TYPE_SYMBOL + 1),
	MMC_TASK_DISPLAY_TYPE_CHOCOLATE_GIF = (MMC_TASK_DISPLAY_TYPE_VANILLA_GIF + 1),
	MMC_TASK_DISPLAY_TYPE_BITMAP = (MMC_TASK_DISPLAY_TYPE_CHOCOLATE_GIF + 1)
} MMC_TASK_DISPLAY_TYPE;
typedef struct _MMC_TASK_DISPLAY_SYMBOL
{
	LPOLESTR szFontFamilyName;
	LPOLESTR szURLtoEOT;
	LPOLESTR szSymbolString;
} MMC_TASK_DISPLAY_SYMBOL;
typedef struct _MMC_TASK_DISPLAY_BITMAP
{
	LPOLESTR szMouseOverBitmap;
	LPOLESTR szMouseOffBitmap;
} MMC_TASK_DISPLAY_BITMAP;
typedef struct _MMC_TASK_DISPLAY_OBJECT
{
	MMC_TASK_DISPLAY_TYPE eDisplayType;
	union
	{
		MMC_TASK_DISPLAY_BITMAP uBitmap;
		MMC_TASK_DISPLAY_SYMBOL uSymbol;
	};
} MMC_TASK_DISPLAY_OBJECT;
typedef enum _MMC_ACTION_TYPE
{
	MMC_ACTION_UNINITIALIZED = -1,
	MMC_ACTION_ID = (MMC_ACTION_UNINITIALIZED + 1),
	MMC_ACTION_LINK = (MMC_ACTION_ID + 1),
	MMC_ACTION_SCRIPT = (MMC_ACTION_LINK + 1)
} MMC_ACTION_TYPE;
typedef struct _MMC_TASK
{
	MMC_TASK_DISPLAY_OBJECT sDisplayObject;
	LPOLESTR szText;
	LPOLESTR szHelpString;
	MMC_ACTION_TYPE eActionType;
	union
	{
		LONG_PTR nCommandID;
		LPOLESTR szActionURL;
		LPOLESTR szScript;
	};
} MMC_TASK;
typedef struct _MMC_LISTPAD_INFO
{
	LPOLESTR szTitle;
	LPOLESTR szButtonText;
	LONG_PTR nCommandID;
} MMC_LISTPAD_INFO;
typedef DWORD MMC_STRING_ID;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0026_v0_0_s_ifspec;
#ifndef __IEnumTASK_INTERFACE_DEFINED__
#define __IEnumTASK_INTERFACE_DEFINED__
extern const IID IID_IEnumTASK;
typedef struct IEnumTASKVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumTASK *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumTASK *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumTASK *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumTASK *This, ULONG celt, MMC_TASK *rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumTASK *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumTASK *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumTASK *This, IEnumTASK **ppenum);
	END_INTERFACE
}  IEnumTASKVtbl;
interface IEnumTASK
{
	CONST_VTBL struct IEnumTASKVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTASK_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTASK_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumTASK_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumTASK_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumTASK_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumTASK_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumTASK_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __IExtendTaskPad_INTERFACE_DEFINED__
#define __IExtendTaskPad_INTERFACE_DEFINED__
extern const IID IID_IExtendTaskPad;
typedef struct IExtendTaskPadVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IExtendTaskPad *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IExtendTaskPad *This);
	ULONG(STDMETHODCALLTYPE *Release) (IExtendTaskPad *This);
	HRESULT(STDMETHODCALLTYPE *TaskNotify) (IExtendTaskPad *This, IDataObject *pdo, VARIANT *arg, VARIANT *param);
	HRESULT(STDMETHODCALLTYPE *EnumTasks) (IExtendTaskPad *This, IDataObject *pdo, LPOLESTR szTaskGroup, IEnumTASK **ppEnumTASK);
	HRESULT(STDMETHODCALLTYPE *GetTitle) (IExtendTaskPad *This, LPOLESTR pszGroup, LPOLESTR *pszTitle);
	HRESULT(STDMETHODCALLTYPE *GetDescriptiveText) (IExtendTaskPad *This, LPOLESTR pszGroup, LPOLESTR *pszDescriptiveText);
	HRESULT(STDMETHODCALLTYPE *GetBackground) (IExtendTaskPad *This, LPOLESTR pszGroup, MMC_TASK_DISPLAY_OBJECT *pTDO);
	HRESULT(STDMETHODCALLTYPE *GetListPadInfo) (IExtendTaskPad *This, LPOLESTR pszGroup, MMC_LISTPAD_INFO *lpListPadInfo);
	END_INTERFACE
}  IExtendTaskPadVtbl;
interface IExtendTaskPad
{
	CONST_VTBL struct IExtendTaskPadVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExtendTaskPad_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExtendTaskPad_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IExtendTaskPad_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IExtendTaskPad_TaskNotify(This,pdo,arg,param) ( (This)->lpVtbl -> TaskNotify(This,pdo,arg,param) )
#define IExtendTaskPad_EnumTasks(This,pdo,szTaskGroup,ppEnumTASK) ( (This)->lpVtbl -> EnumTasks(This,pdo,szTaskGroup,ppEnumTASK) )
#define IExtendTaskPad_GetTitle(This,pszGroup,pszTitle) ( (This)->lpVtbl -> GetTitle(This,pszGroup,pszTitle) )
#define IExtendTaskPad_GetDescriptiveText(This,pszGroup,pszDescriptiveText) ( (This)->lpVtbl -> GetDescriptiveText(This,pszGroup,pszDescriptiveText) )
#define IExtendTaskPad_GetBackground(This,pszGroup,pTDO) ( (This)->lpVtbl -> GetBackground(This,pszGroup,pTDO) )
#define IExtendTaskPad_GetListPadInfo(This,pszGroup,lpListPadInfo) ( (This)->lpVtbl -> GetListPadInfo(This,pszGroup,lpListPadInfo) )
#endif
#endif
#ifndef __IConsole2_INTERFACE_DEFINED__
#define __IConsole2_INTERFACE_DEFINED__
extern const IID IID_IConsole2;
typedef struct IConsole2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IConsole2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IConsole2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IConsole2 *This);
	HRESULT(STDMETHODCALLTYPE *SetHeader) (IConsole2 *This, LPHEADERCTRL pHeader);
	HRESULT(STDMETHODCALLTYPE *SetToolbar) (IConsole2 *This, LPTOOLBAR pToolbar);
	HRESULT(STDMETHODCALLTYPE *QueryResultView) (IConsole2 *This, LPUNKNOWN *pUnknown);
	HRESULT(STDMETHODCALLTYPE *QueryScopeImageList) (IConsole2 *This, LPIMAGELIST *ppImageList);
	HRESULT(STDMETHODCALLTYPE *QueryResultImageList) (IConsole2 *This, LPIMAGELIST *ppImageList);
	HRESULT(STDMETHODCALLTYPE *UpdateAllViews) (IConsole2 *This, LPDATAOBJECT lpDataObject, LPARAM data, LONG_PTR hint);
	HRESULT(STDMETHODCALLTYPE *MessageBox) (IConsole2 *This, LPCWSTR lpszText, LPCWSTR lpszTitle, UINT fuStyle, int *piRetval);
	HRESULT(STDMETHODCALLTYPE *QueryConsoleVerb) (IConsole2 *This, LPCONSOLEVERB *ppConsoleVerb);
	HRESULT(STDMETHODCALLTYPE *SelectScopeItem) (IConsole2 *This, HSCOPEITEM hScopeItem);
	HRESULT(STDMETHODCALLTYPE *GetMainWindow) (IConsole2 *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *NewWindow) (IConsole2 *This, HSCOPEITEM hScopeItem, unsigned long lOptions);
	HRESULT(STDMETHODCALLTYPE *Expand) (IConsole2 *This, HSCOPEITEM hItem, BOOL bExpand);
	HRESULT(STDMETHODCALLTYPE *IsTaskpadViewPreferred) (IConsole2 *This);
	HRESULT(STDMETHODCALLTYPE *SetStatusText) (IConsole2 *This, LPOLESTR pszStatusText);
	END_INTERFACE
}  IConsole2Vtbl;
interface IConsole2
{
	CONST_VTBL struct IConsole2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConsole2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConsole2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConsole2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConsole2_SetHeader(This,pHeader) ( (This)->lpVtbl -> SetHeader(This,pHeader) )
#define IConsole2_SetToolbar(This,pToolbar) ( (This)->lpVtbl -> SetToolbar(This,pToolbar) )
#define IConsole2_QueryResultView(This,pUnknown) ( (This)->lpVtbl -> QueryResultView(This,pUnknown) )
#define IConsole2_QueryScopeImageList(This,ppImageList) ( (This)->lpVtbl -> QueryScopeImageList(This,ppImageList) )
#define IConsole2_QueryResultImageList(This,ppImageList) ( (This)->lpVtbl -> QueryResultImageList(This,ppImageList) )
#define IConsole2_UpdateAllViews(This,lpDataObject,data,hint) ( (This)->lpVtbl -> UpdateAllViews(This,lpDataObject,data,hint) )
#define IConsole2_MessageBox(This,lpszText,lpszTitle,fuStyle,piRetval) ( (This)->lpVtbl -> MessageBox(This,lpszText,lpszTitle,fuStyle,piRetval) )
#define IConsole2_QueryConsoleVerb(This,ppConsoleVerb) ( (This)->lpVtbl -> QueryConsoleVerb(This,ppConsoleVerb) )
#define IConsole2_SelectScopeItem(This,hScopeItem) ( (This)->lpVtbl -> SelectScopeItem(This,hScopeItem) )
#define IConsole2_GetMainWindow(This,phwnd) ( (This)->lpVtbl -> GetMainWindow(This,phwnd) )
#define IConsole2_NewWindow(This,hScopeItem,lOptions) ( (This)->lpVtbl -> NewWindow(This,hScopeItem,lOptions) )
#define IConsole2_Expand(This,hItem,bExpand) ( (This)->lpVtbl -> Expand(This,hItem,bExpand) )
#define IConsole2_IsTaskpadViewPreferred(This) ( (This)->lpVtbl -> IsTaskpadViewPreferred(This) )
#define IConsole2_SetStatusText(This,pszStatusText) ( (This)->lpVtbl -> SetStatusText(This,pszStatusText) )
#endif
#endif
#ifndef __IDisplayHelp_INTERFACE_DEFINED__
#define __IDisplayHelp_INTERFACE_DEFINED__
extern const IID IID_IDisplayHelp;
typedef struct IDisplayHelpVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDisplayHelp *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDisplayHelp *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDisplayHelp *This);
	HRESULT(STDMETHODCALLTYPE *ShowTopic) (IDisplayHelp *This, LPOLESTR pszHelpTopic);
	END_INTERFACE
}  IDisplayHelpVtbl;
interface IDisplayHelp
{
	CONST_VTBL struct IDisplayHelpVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDisplayHelp_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDisplayHelp_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDisplayHelp_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDisplayHelp_ShowTopic(This,pszHelpTopic) ( (This)->lpVtbl -> ShowTopic(This,pszHelpTopic) )
#endif
#endif
#ifndef __IRequiredExtensions_INTERFACE_DEFINED__
#define __IRequiredExtensions_INTERFACE_DEFINED__
extern const IID IID_IRequiredExtensions;
typedef struct IRequiredExtensionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRequiredExtensions *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRequiredExtensions *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRequiredExtensions *This);
	HRESULT(STDMETHODCALLTYPE *EnableAllExtensions) (IRequiredExtensions *This);
	HRESULT(STDMETHODCALLTYPE *GetFirstExtension) (IRequiredExtensions *This, LPCLSID pExtCLSID);
	HRESULT(STDMETHODCALLTYPE *GetNextExtension) (IRequiredExtensions *This, LPCLSID pExtCLSID);
	END_INTERFACE
}  IRequiredExtensionsVtbl;
interface IRequiredExtensions
{
	CONST_VTBL struct IRequiredExtensionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRequiredExtensions_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRequiredExtensions_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRequiredExtensions_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRequiredExtensions_EnableAllExtensions(This) ( (This)->lpVtbl -> EnableAllExtensions(This) )
#define IRequiredExtensions_GetFirstExtension(This,pExtCLSID) ( (This)->lpVtbl -> GetFirstExtension(This,pExtCLSID) )
#define IRequiredExtensions_GetNextExtension(This,pExtCLSID) ( (This)->lpVtbl -> GetNextExtension(This,pExtCLSID) )
#endif
#endif
#ifndef __IStringTable_INTERFACE_DEFINED__
#define __IStringTable_INTERFACE_DEFINED__
extern const IID IID_IStringTable;
typedef struct IStringTableVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IStringTable *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IStringTable *This);
	ULONG(STDMETHODCALLTYPE *Release) (IStringTable *This);
	HRESULT(STDMETHODCALLTYPE *AddString) (IStringTable *This, LPCOLESTR pszAdd, MMC_STRING_ID *pStringID);
	HRESULT(STDMETHODCALLTYPE *GetString) (IStringTable *This, MMC_STRING_ID StringID, ULONG cchBuffer, LPOLESTR lpBuffer, ULONG *pcchOut);
	HRESULT(STDMETHODCALLTYPE *GetStringLength) (IStringTable *This, MMC_STRING_ID StringID, ULONG *pcchString);
	HRESULT(STDMETHODCALLTYPE *DeleteString) (IStringTable *This, MMC_STRING_ID StringID);
	HRESULT(STDMETHODCALLTYPE *DeleteAllStrings) (IStringTable *This);
	HRESULT(STDMETHODCALLTYPE *FindString) (IStringTable *This, LPCOLESTR pszFind, MMC_STRING_ID *pStringID);
	HRESULT(STDMETHODCALLTYPE *Enumerate) (IStringTable *This, IEnumString **ppEnum);
	END_INTERFACE
}  IStringTableVtbl;
interface IStringTable
{
	CONST_VTBL struct IStringTableVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStringTable_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStringTable_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStringTable_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStringTable_AddString(This,pszAdd,pStringID) ( (This)->lpVtbl -> AddString(This,pszAdd,pStringID) )
#define IStringTable_GetString(This,StringID,cchBuffer,lpBuffer,pcchOut) ( (This)->lpVtbl -> GetString(This,StringID,cchBuffer,lpBuffer,pcchOut) )
#define IStringTable_GetStringLength(This,StringID,pcchString) ( (This)->lpVtbl -> GetStringLength(This,StringID,pcchString) )
#define IStringTable_DeleteString(This,StringID) ( (This)->lpVtbl -> DeleteString(This,StringID) )
#define IStringTable_DeleteAllStrings(This) ( (This)->lpVtbl -> DeleteAllStrings(This) )
#define IStringTable_FindString(This,pszFind,pStringID) ( (This)->lpVtbl -> FindString(This,pszFind,pStringID) )
#define IStringTable_Enumerate(This,ppEnum) ( (This)->lpVtbl -> Enumerate(This,ppEnum) )
#endif
#endif
#endif
#if (MMC_VER >= 0x0120)
#define	HDI_HIDDEN	( 0x1 )
typedef struct _MMC_COLUMN_DATA
{
	int nColIndex;
	DWORD dwFlags;
	int nWidth;
	ULONG_PTR ulReserved;
} MMC_COLUMN_DATA;
typedef struct _MMC_COLUMN_SET_DATA
{
	int cbSize;
	int nNumCols;
	MMC_COLUMN_DATA *pColData;
} MMC_COLUMN_SET_DATA;
typedef struct _MMC_SORT_DATA
{
	int nColIndex;
	DWORD dwSortOptions;
	ULONG_PTR ulReserved;
} MMC_SORT_DATA;
typedef struct _MMC_SORT_SET_DATA
{
	int cbSize;
	int nNumItems;
	MMC_SORT_DATA *pSortData;
} MMC_SORT_SET_DATA;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0032_v0_0_s_ifspec;
#ifndef __IColumnData_INTERFACE_DEFINED__
#define __IColumnData_INTERFACE_DEFINED__
extern const IID IID_IColumnData;
typedef struct IColumnDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IColumnData *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IColumnData *This);
	ULONG(STDMETHODCALLTYPE *Release) (IColumnData *This);
	HRESULT(STDMETHODCALLTYPE *SetColumnConfigData) (IColumnData *This, SColumnSetID *pColID, MMC_COLUMN_SET_DATA *pColSetData);
	HRESULT(STDMETHODCALLTYPE *GetColumnConfigData) (IColumnData *This, SColumnSetID *pColID, MMC_COLUMN_SET_DATA **ppColSetData);
	HRESULT(STDMETHODCALLTYPE *SetColumnSortData) (IColumnData *This, SColumnSetID *pColID, MMC_SORT_SET_DATA *pColSortData);
	HRESULT(STDMETHODCALLTYPE *GetColumnSortData) (IColumnData *This, SColumnSetID *pColID, MMC_SORT_SET_DATA **ppColSortData);
	END_INTERFACE
}  IColumnDataVtbl;
interface IColumnData
{
	CONST_VTBL struct IColumnDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IColumnData_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IColumnData_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IColumnData_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IColumnData_SetColumnConfigData(This,pColID,pColSetData) ( (This)->lpVtbl -> SetColumnConfigData(This,pColID,pColSetData) )
#define IColumnData_GetColumnConfigData(This,pColID,ppColSetData) ( (This)->lpVtbl -> GetColumnConfigData(This,pColID,ppColSetData) )
#define IColumnData_SetColumnSortData(This,pColID,pColSortData) ( (This)->lpVtbl -> SetColumnSortData(This,pColID,pColSortData) )
#define IColumnData_GetColumnSortData(This,pColID,ppColSortData) ( (This)->lpVtbl -> GetColumnSortData(This,pColID,ppColSortData) )
#endif
#endif
#ifndef __IMessageView_INTERFACE_DEFINED__
#define __IMessageView_INTERFACE_DEFINED__
typedef enum tagIconIdentifier
{
	Icon_None = 0,
	Icon_Error = 32513,
	Icon_Question = 32514,
	Icon_Warning = 32515,
	Icon_Information = 32516,
	Icon_First = Icon_Error,
	Icon_Last = Icon_Information
} IconIdentifier;
extern const IID IID_IMessageView;
typedef struct IMessageViewVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMessageView *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMessageView *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMessageView *This);
	HRESULT(STDMETHODCALLTYPE *SetTitleText) (IMessageView *This, LPCOLESTR pszTitleText);
	HRESULT(STDMETHODCALLTYPE *SetBodyText) (IMessageView *This, LPCOLESTR pszBodyText);
	HRESULT(STDMETHODCALLTYPE *SetIcon) (IMessageView *This, IconIdentifier id);
	HRESULT(STDMETHODCALLTYPE *Clear) (IMessageView *This);
	END_INTERFACE
}  IMessageViewVtbl;
interface IMessageView
{
	CONST_VTBL struct IMessageViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMessageView_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMessageView_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMessageView_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMessageView_SetTitleText(This,pszTitleText) ( (This)->lpVtbl -> SetTitleText(This,pszTitleText) )
#define IMessageView_SetBodyText(This,pszBodyText) ( (This)->lpVtbl -> SetBodyText(This,pszBodyText) )
#define IMessageView_SetIcon(This,id) ( (This)->lpVtbl -> SetIcon(This,id) )
#define IMessageView_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#endif
#endif
typedef struct _RDCITEMHDR
{
	DWORD dwFlags;
	MMC_COOKIE cookie;
	LPARAM lpReserved;
} RDITEMHDR;
#define	RDCI_ScopeItem	( 0x80000000 )
typedef struct _RDCOMPARE
{
	DWORD cbSize;
	DWORD dwFlags;
	int nColumn;
	LPARAM lUserParam;
	RDITEMHDR *prdch1;
	RDITEMHDR *prdch2;
} RDCOMPARE;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0034_v0_0_s_ifspec;
#ifndef __IResultDataCompareEx_INTERFACE_DEFINED__
#define __IResultDataCompareEx_INTERFACE_DEFINED__
extern const IID IID_IResultDataCompareEx;
typedef struct IResultDataCompareExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IResultDataCompareEx *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IResultDataCompareEx *This);
	ULONG(STDMETHODCALLTYPE *Release) (IResultDataCompareEx *This);
	HRESULT(STDMETHODCALLTYPE *Compare) (IResultDataCompareEx *This, RDCOMPARE *prdc, int *pnResult);
	END_INTERFACE
}  IResultDataCompareExVtbl;
interface IResultDataCompareEx
{
	CONST_VTBL struct IResultDataCompareExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResultDataCompareEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResultDataCompareEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IResultDataCompareEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IResultDataCompareEx_Compare(This,prdc,pnResult) ( (This)->lpVtbl -> Compare(This,prdc,pnResult) )
#endif
#endif
#endif
#if (MMC_VER >= 0x0200)
typedef enum _MMC_VIEW_TYPE
{
	MMC_VIEW_TYPE_LIST = 0,
	MMC_VIEW_TYPE_HTML = (MMC_VIEW_TYPE_LIST + 1),
	MMC_VIEW_TYPE_OCX = (MMC_VIEW_TYPE_HTML + 1)
} MMC_VIEW_TYPE;
#define	RVTI_MISC_OPTIONS_NOLISTVIEWS	( 0x1 )
#define	RVTI_LIST_OPTIONS_NONE	( 0 )
#define	RVTI_LIST_OPTIONS_OWNERDATALIST	( 0x2 )
#define	RVTI_LIST_OPTIONS_MULTISELECT	( 0x4 )
#define	RVTI_LIST_OPTIONS_FILTERED	( 0x8 )
#define	RVTI_LIST_OPTIONS_USEFONTLINKING	( 0x20 )
#define	RVTI_LIST_OPTIONS_EXCLUDE_SCOPE_ITEMS_FROM_LIST	( 0x40 )
#define	RVTI_LIST_OPTIONS_LEXICAL_SORT	( 0x80 )
#define	RVTI_LIST_OPTIONS_ALLOWPASTE	( 0x100 )
#define	RVTI_HTML_OPTIONS_NONE	( 0 )
#define	RVTI_HTML_OPTIONS_NOLISTVIEW	( 0x1 )
#define	RVTI_OCX_OPTIONS_NONE	( 0 )
#define	RVTI_OCX_OPTIONS_NOLISTVIEW	( 0x1 )
#define	RVTI_OCX_OPTIONS_CACHE_OCX	( 0x2 )
typedef struct _RESULT_VIEW_TYPE_INFO
{
	LPOLESTR pstrPersistableViewDescription;
	MMC_VIEW_TYPE eViewType;
	DWORD dwMiscOptions;
	union
	{
		DWORD dwListOptions;
		struct
		{
			DWORD dwHTMLOptions;
			LPOLESTR pstrURL;
		};
		struct
		{
			DWORD dwOCXOptions;
			LPUNKNOWN pUnkControl;
		};
	};
} RESULT_VIEW_TYPE_INFO;
typedef struct _RESULT_VIEW_TYPE_INFO *PRESULT_VIEW_TYPE_INFO;
#define	CCF_DESCRIPTION	( L"CCF_DESCRIPTION" )
#define	CCF_HTML_DETAILS	( L"CCF_HTML_DETAILS" )
typedef struct _CONTEXTMENUITEM2
{
	LPWSTR strName;
	LPWSTR strStatusBarText;
	LONG lCommandID;
	LONG lInsertionPointID;
	LONG fFlags;
	LONG fSpecialFlags;
	LPWSTR strLanguageIndependentName;
} CONTEXTMENUITEM2;
typedef CONTEXTMENUITEM2 *LPCONTEXTMENUITEM2;
typedef struct _MMC_EXT_VIEW_DATA
{
	GUID viewID;
	LPCOLESTR pszURL;
	LPCOLESTR pszViewTitle;
	LPCOLESTR pszTooltipText;
	BOOL bReplacesDefaultView;
} MMC_EXT_VIEW_DATA;
typedef struct _MMC_EXT_VIEW_DATA *PMMC_EXT_VIEW_DATA;
#define	MMC_DEFAULT_OPERATION_COPY	( 0x1 )
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0035_v0_0_s_ifspec;
#ifndef __IComponentData2_INTERFACE_DEFINED__
#define __IComponentData2_INTERFACE_DEFINED__
extern const IID IID_IComponentData2;
typedef struct IComponentData2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IComponentData2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IComponentData2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IComponentData2 *This);
	HRESULT(STDMETHODCALLTYPE *Initialize) (IComponentData2 *This, LPUNKNOWN pUnknown);
	HRESULT(STDMETHODCALLTYPE *CreateComponent) (IComponentData2 *This, LPCOMPONENT *ppComponent);
	HRESULT(STDMETHODCALLTYPE *Notify) (IComponentData2 *This, LPDATAOBJECT lpDataObject, MMC_NOTIFY_TYPE event, LPARAM arg, LPARAM param);
	HRESULT(STDMETHODCALLTYPE *Destroy) (IComponentData2 *This);
	HRESULT(STDMETHODCALLTYPE *QueryDataObject) (IComponentData2 *This, MMC_COOKIE cookie, DATA_OBJECT_TYPES type, LPDATAOBJECT *ppDataObject);
	HRESULT(STDMETHODCALLTYPE *GetDisplayInfo) (IComponentData2 *This, SCOPEDATAITEM *pScopeDataItem);
	HRESULT(STDMETHODCALLTYPE *CompareObjects) (IComponentData2 *This, LPDATAOBJECT lpDataObjectA, LPDATAOBJECT lpDataObjectB);
	HRESULT(STDMETHODCALLTYPE *QueryDispatch) (IComponentData2 *This, MMC_COOKIE cookie, DATA_OBJECT_TYPES type, LPDISPATCH *ppDispatch);
	END_INTERFACE
}  IComponentData2Vtbl;
interface IComponentData2
{
	CONST_VTBL struct IComponentData2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComponentData2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComponentData2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IComponentData2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IComponentData2_Initialize(This,pUnknown) ( (This)->lpVtbl -> Initialize(This,pUnknown) )
#define IComponentData2_CreateComponent(This,ppComponent) ( (This)->lpVtbl -> CreateComponent(This,ppComponent) )
#define IComponentData2_Notify(This,lpDataObject,event,arg,param) ( (This)->lpVtbl -> Notify(This,lpDataObject,event,arg,param) )
#define IComponentData2_Destroy(This) ( (This)->lpVtbl -> Destroy(This) )
#define IComponentData2_QueryDataObject(This,cookie,type,ppDataObject) ( (This)->lpVtbl -> QueryDataObject(This,cookie,type,ppDataObject) )
#define IComponentData2_GetDisplayInfo(This,pScopeDataItem) ( (This)->lpVtbl -> GetDisplayInfo(This,pScopeDataItem) )
#define IComponentData2_CompareObjects(This,lpDataObjectA,lpDataObjectB) ( (This)->lpVtbl -> CompareObjects(This,lpDataObjectA,lpDataObjectB) )
#define IComponentData2_QueryDispatch(This,cookie,type,ppDispatch) ( (This)->lpVtbl -> QueryDispatch(This,cookie,type,ppDispatch) )
#endif
#endif
#ifndef __IComponent2_INTERFACE_DEFINED__
#define __IComponent2_INTERFACE_DEFINED__
extern const IID IID_IComponent2;
typedef struct IComponent2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IComponent2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IComponent2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IComponent2 *This);
	HRESULT(STDMETHODCALLTYPE *Initialize) (IComponent2 *This, LPCONSOLE lpConsole);
	HRESULT(STDMETHODCALLTYPE *Notify) (IComponent2 *This, LPDATAOBJECT lpDataObject, MMC_NOTIFY_TYPE event, LPARAM arg, LPARAM param);
	HRESULT(STDMETHODCALLTYPE *Destroy) (IComponent2 *This, MMC_COOKIE cookie);
	HRESULT(STDMETHODCALLTYPE *QueryDataObject) (IComponent2 *This, MMC_COOKIE cookie, DATA_OBJECT_TYPES type, LPDATAOBJECT *ppDataObject);
	HRESULT(STDMETHODCALLTYPE *GetResultViewType) (IComponent2 *This, MMC_COOKIE cookie, LPOLESTR *ppViewType, long *pViewOptions);
	HRESULT(STDMETHODCALLTYPE *GetDisplayInfo) (IComponent2 *This, RESULTDATAITEM *pResultDataItem);
	HRESULT(STDMETHODCALLTYPE *CompareObjects) (IComponent2 *This, LPDATAOBJECT lpDataObjectA, LPDATAOBJECT lpDataObjectB);
	HRESULT(STDMETHODCALLTYPE *QueryDispatch) (IComponent2 *This, MMC_COOKIE cookie, DATA_OBJECT_TYPES type, LPDISPATCH *ppDispatch);
	HRESULT(STDMETHODCALLTYPE *GetResultViewType2) (IComponent2 *This, MMC_COOKIE cookie, PRESULT_VIEW_TYPE_INFO pResultViewType);
	HRESULT(STDMETHODCALLTYPE *RestoreResultView) (IComponent2 *This, MMC_COOKIE cookie, PRESULT_VIEW_TYPE_INFO pResultViewType);
	END_INTERFACE
}  IComponent2Vtbl;
interface IComponent2
{
	CONST_VTBL struct IComponent2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComponent2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComponent2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IComponent2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IComponent2_Initialize(This,lpConsole) ( (This)->lpVtbl -> Initialize(This,lpConsole) )
#define IComponent2_Notify(This,lpDataObject,event,arg,param) ( (This)->lpVtbl -> Notify(This,lpDataObject,event,arg,param) )
#define IComponent2_Destroy(This,cookie) ( (This)->lpVtbl -> Destroy(This,cookie) )
#define IComponent2_QueryDataObject(This,cookie,type,ppDataObject) ( (This)->lpVtbl -> QueryDataObject(This,cookie,type,ppDataObject) )
#define IComponent2_GetResultViewType(This,cookie,ppViewType,pViewOptions) ( (This)->lpVtbl -> GetResultViewType(This,cookie,ppViewType,pViewOptions) )
#define IComponent2_GetDisplayInfo(This,pResultDataItem) ( (This)->lpVtbl -> GetDisplayInfo(This,pResultDataItem) )
#define IComponent2_CompareObjects(This,lpDataObjectA,lpDataObjectB) ( (This)->lpVtbl -> CompareObjects(This,lpDataObjectA,lpDataObjectB) )
#define IComponent2_QueryDispatch(This,cookie,type,ppDispatch) ( (This)->lpVtbl -> QueryDispatch(This,cookie,type,ppDispatch) )
#define IComponent2_GetResultViewType2(This,cookie,pResultViewType) ( (This)->lpVtbl -> GetResultViewType2(This,cookie,pResultViewType) )
#define IComponent2_RestoreResultView(This,cookie,pResultViewType) ( (This)->lpVtbl -> RestoreResultView(This,cookie,pResultViewType) )
#endif
#endif
#ifndef __IContextMenuCallback2_INTERFACE_DEFINED__
#define __IContextMenuCallback2_INTERFACE_DEFINED__
extern const IID IID_IContextMenuCallback2;
typedef struct IContextMenuCallback2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContextMenuCallback2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContextMenuCallback2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContextMenuCallback2 *This);
	HRESULT(STDMETHODCALLTYPE *AddItem) (IContextMenuCallback2 *This, CONTEXTMENUITEM2 *pItem);
	END_INTERFACE
}  IContextMenuCallback2Vtbl;
interface IContextMenuCallback2
{
	CONST_VTBL struct IContextMenuCallback2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextMenuCallback2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContextMenuCallback2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IContextMenuCallback2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IContextMenuCallback2_AddItem(This,pItem) ( (This)->lpVtbl -> AddItem(This,pItem) )
#endif
#endif
#ifndef __IMMCVersionInfo_INTERFACE_DEFINED__
#define __IMMCVersionInfo_INTERFACE_DEFINED__
extern const IID IID_IMMCVersionInfo;
typedef struct IMMCVersionInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMMCVersionInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMMCVersionInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMMCVersionInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetMMCVersion) (IMMCVersionInfo *This, long *pVersionMajor, long *pVersionMinor);
	END_INTERFACE
}  IMMCVersionInfoVtbl;
interface IMMCVersionInfo
{
	CONST_VTBL struct IMMCVersionInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMMCVersionInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMMCVersionInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMMCVersionInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMMCVersionInfo_GetMMCVersion(This,pVersionMajor,pVersionMinor) ( (This)->lpVtbl -> GetMMCVersion(This,pVersionMajor,pVersionMinor) )
#endif
#endif
#ifndef __MMCVersionLib_LIBRARY_DEFINED__
#define __MMCVersionLib_LIBRARY_DEFINED__
extern const IID LIBID_MMCVersionLib;
extern const CLSID CLSID_MMCVersionInfo;
extern const CLSID CLSID_ConsolePower;
#endif
#ifndef __IExtendView_INTERFACE_DEFINED__
#define __IExtendView_INTERFACE_DEFINED__
extern const IID IID_IExtendView;
typedef struct IExtendViewVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IExtendView *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IExtendView *This);
	ULONG(STDMETHODCALLTYPE *Release) (IExtendView *This);
	HRESULT(STDMETHODCALLTYPE *GetViews) (IExtendView *This, LPDATAOBJECT pDataObject, LPVIEWEXTENSIONCALLBACK pViewExtensionCallback);
	END_INTERFACE
}  IExtendViewVtbl;
interface IExtendView
{
	CONST_VTBL struct IExtendViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExtendView_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExtendView_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IExtendView_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IExtendView_GetViews(This,pDataObject,pViewExtensionCallback) ( (This)->lpVtbl -> GetViews(This,pDataObject,pViewExtensionCallback) )
#endif
#endif
#ifndef __IViewExtensionCallback_INTERFACE_DEFINED__
#define __IViewExtensionCallback_INTERFACE_DEFINED__
extern const IID IID_IViewExtensionCallback;
typedef struct IViewExtensionCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IViewExtensionCallback *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IViewExtensionCallback *This);
	ULONG(STDMETHODCALLTYPE *Release) (IViewExtensionCallback *This);
	HRESULT(STDMETHODCALLTYPE *AddView) (IViewExtensionCallback *This, PMMC_EXT_VIEW_DATA pExtViewData);
	END_INTERFACE
}  IViewExtensionCallbackVtbl;
interface IViewExtensionCallback
{
	CONST_VTBL struct IViewExtensionCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IViewExtensionCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IViewExtensionCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IViewExtensionCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IViewExtensionCallback_AddView(This,pExtViewData) ( (This)->lpVtbl -> AddView(This,pExtViewData) )
#endif
#endif
#ifndef __IConsolePower_INTERFACE_DEFINED__
#define __IConsolePower_INTERFACE_DEFINED__
extern const IID IID_IConsolePower;
typedef struct IConsolePowerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IConsolePower *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IConsolePower *This);
	ULONG(STDMETHODCALLTYPE *Release) (IConsolePower *This);
	HRESULT(STDMETHODCALLTYPE *SetExecutionState) (IConsolePower *This, DWORD dwAdd, DWORD dwRemove);
	HRESULT(STDMETHODCALLTYPE *ResetIdleTimer) (IConsolePower *This, DWORD dwFlags);
	END_INTERFACE
}  IConsolePowerVtbl;
interface IConsolePower
{
	CONST_VTBL struct IConsolePowerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConsolePower_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConsolePower_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConsolePower_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConsolePower_SetExecutionState(This,dwAdd,dwRemove) ( (This)->lpVtbl -> SetExecutionState(This,dwAdd,dwRemove) )
#define IConsolePower_ResetIdleTimer(This,dwFlags) ( (This)->lpVtbl -> ResetIdleTimer(This,dwFlags) )
#endif
#endif
#ifndef __IConsolePowerSink_INTERFACE_DEFINED__
#define __IConsolePowerSink_INTERFACE_DEFINED__
extern const IID IID_IConsolePowerSink;
typedef struct IConsolePowerSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IConsolePowerSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IConsolePowerSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (IConsolePowerSink *This);
	HRESULT(STDMETHODCALLTYPE *OnPowerBroadcast) (IConsolePowerSink *This, UINT nEvent, LPARAM lParam, LRESULT *plReturn);
	END_INTERFACE
}  IConsolePowerSinkVtbl;
interface IConsolePowerSink
{
	CONST_VTBL struct IConsolePowerSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConsolePowerSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConsolePowerSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConsolePowerSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConsolePowerSink_OnPowerBroadcast(This,nEvent,lParam,plReturn) ( (This)->lpVtbl -> OnPowerBroadcast(This,nEvent,lParam,plReturn) )
#endif
#endif
#ifndef __INodeProperties_INTERFACE_DEFINED__
#define __INodeProperties_INTERFACE_DEFINED__
extern const IID IID_INodeProperties;
typedef struct INodePropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INodeProperties *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INodeProperties *This);
	ULONG(STDMETHODCALLTYPE *Release) (INodeProperties *This);
	HRESULT(STDMETHODCALLTYPE *GetProperty) (INodeProperties *This, LPDATAOBJECT pDataObject, BSTR szPropertyName, PBSTR pbstrProperty);
	END_INTERFACE
}  INodePropertiesVtbl;
interface INodeProperties
{
	CONST_VTBL struct INodePropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INodeProperties_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INodeProperties_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INodeProperties_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INodeProperties_GetProperty(This,pDataObject,szPropertyName,pbstrProperty) ( (This)->lpVtbl -> GetProperty(This,pDataObject,szPropertyName,pbstrProperty) )
#endif
#endif
#ifndef __IConsole3_INTERFACE_DEFINED__
#define __IConsole3_INTERFACE_DEFINED__
extern const IID IID_IConsole3;
typedef struct IConsole3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IConsole3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IConsole3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IConsole3 *This);
	HRESULT(STDMETHODCALLTYPE *SetHeader) (IConsole3 *This, LPHEADERCTRL pHeader);
	HRESULT(STDMETHODCALLTYPE *SetToolbar) (IConsole3 *This, LPTOOLBAR pToolbar);
	HRESULT(STDMETHODCALLTYPE *QueryResultView) (IConsole3 *This, LPUNKNOWN *pUnknown);
	HRESULT(STDMETHODCALLTYPE *QueryScopeImageList) (IConsole3 *This, LPIMAGELIST *ppImageList);
	HRESULT(STDMETHODCALLTYPE *QueryResultImageList) (IConsole3 *This, LPIMAGELIST *ppImageList);
	HRESULT(STDMETHODCALLTYPE *UpdateAllViews) (IConsole3 *This, LPDATAOBJECT lpDataObject, LPARAM data, LONG_PTR hint);
	HRESULT(STDMETHODCALLTYPE *MessageBox) (IConsole3 *This, LPCWSTR lpszText, LPCWSTR lpszTitle, UINT fuStyle, int *piRetval);
	HRESULT(STDMETHODCALLTYPE *QueryConsoleVerb) (IConsole3 *This, LPCONSOLEVERB *ppConsoleVerb);
	HRESULT(STDMETHODCALLTYPE *SelectScopeItem) (IConsole3 *This, HSCOPEITEM hScopeItem);
	HRESULT(STDMETHODCALLTYPE *GetMainWindow) (IConsole3 *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *NewWindow) (IConsole3 *This, HSCOPEITEM hScopeItem, unsigned long lOptions);
	HRESULT(STDMETHODCALLTYPE *Expand) (IConsole3 *This, HSCOPEITEM hItem, BOOL bExpand);
	HRESULT(STDMETHODCALLTYPE *IsTaskpadViewPreferred) (IConsole3 *This);
	HRESULT(STDMETHODCALLTYPE *SetStatusText) (IConsole3 *This, LPOLESTR pszStatusText);
	HRESULT(STDMETHODCALLTYPE *RenameScopeItem) (IConsole3 *This, HSCOPEITEM hScopeItem);
	END_INTERFACE
}  IConsole3Vtbl;
interface IConsole3
{
	CONST_VTBL struct IConsole3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConsole3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConsole3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConsole3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConsole3_SetHeader(This,pHeader) ( (This)->lpVtbl -> SetHeader(This,pHeader) )
#define IConsole3_SetToolbar(This,pToolbar) ( (This)->lpVtbl -> SetToolbar(This,pToolbar) )
#define IConsole3_QueryResultView(This,pUnknown) ( (This)->lpVtbl -> QueryResultView(This,pUnknown) )
#define IConsole3_QueryScopeImageList(This,ppImageList) ( (This)->lpVtbl -> QueryScopeImageList(This,ppImageList) )
#define IConsole3_QueryResultImageList(This,ppImageList) ( (This)->lpVtbl -> QueryResultImageList(This,ppImageList) )
#define IConsole3_UpdateAllViews(This,lpDataObject,data,hint) ( (This)->lpVtbl -> UpdateAllViews(This,lpDataObject,data,hint) )
#define IConsole3_MessageBox(This,lpszText,lpszTitle,fuStyle,piRetval) ( (This)->lpVtbl -> MessageBox(This,lpszText,lpszTitle,fuStyle,piRetval) )
#define IConsole3_QueryConsoleVerb(This,ppConsoleVerb) ( (This)->lpVtbl -> QueryConsoleVerb(This,ppConsoleVerb) )
#define IConsole3_SelectScopeItem(This,hScopeItem) ( (This)->lpVtbl -> SelectScopeItem(This,hScopeItem) )
#define IConsole3_GetMainWindow(This,phwnd) ( (This)->lpVtbl -> GetMainWindow(This,phwnd) )
#define IConsole3_NewWindow(This,hScopeItem,lOptions) ( (This)->lpVtbl -> NewWindow(This,hScopeItem,lOptions) )
#define IConsole3_Expand(This,hItem,bExpand) ( (This)->lpVtbl -> Expand(This,hItem,bExpand) )
#define IConsole3_IsTaskpadViewPreferred(This) ( (This)->lpVtbl -> IsTaskpadViewPreferred(This) )
#define IConsole3_SetStatusText(This,pszStatusText) ( (This)->lpVtbl -> SetStatusText(This,pszStatusText) )
#define IConsole3_RenameScopeItem(This,hScopeItem) ( (This)->lpVtbl -> RenameScopeItem(This,hScopeItem) )
#endif
#endif
#ifndef __IResultData2_INTERFACE_DEFINED__
#define __IResultData2_INTERFACE_DEFINED__
extern const IID IID_IResultData2;
typedef struct IResultData2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IResultData2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IResultData2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IResultData2 *This);
	HRESULT(STDMETHODCALLTYPE *InsertItem) (IResultData2 *This, LPRESULTDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *DeleteItem) (IResultData2 *This, HRESULTITEM itemID, int nCol);
	HRESULT(STDMETHODCALLTYPE *FindItemByLParam) (IResultData2 *This, LPARAM lParam, HRESULTITEM *pItemID);
	HRESULT(STDMETHODCALLTYPE *DeleteAllRsltItems) (IResultData2 *This);
	HRESULT(STDMETHODCALLTYPE *SetItem) (IResultData2 *This, LPRESULTDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *GetItem) (IResultData2 *This, LPRESULTDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *GetNextItem) (IResultData2 *This, LPRESULTDATAITEM item);
	HRESULT(STDMETHODCALLTYPE *ModifyItemState) (IResultData2 *This, int nIndex, HRESULTITEM itemID, UINT uAdd, UINT uRemove);
	HRESULT(STDMETHODCALLTYPE *ModifyViewStyle) (IResultData2 *This, MMC_RESULT_VIEW_STYLE add, MMC_RESULT_VIEW_STYLE remove);
	HRESULT(STDMETHODCALLTYPE *SetViewMode) (IResultData2 *This, long lViewMode);
	HRESULT(STDMETHODCALLTYPE *GetViewMode) (IResultData2 *This, long *lViewMode);
	HRESULT(STDMETHODCALLTYPE *UpdateItem) (IResultData2 *This, HRESULTITEM itemID);
	HRESULT(STDMETHODCALLTYPE *Sort) (IResultData2 *This, int nColumn, DWORD dwSortOptions, LPARAM lUserParam);
	HRESULT(STDMETHODCALLTYPE *SetDescBarText) (IResultData2 *This, LPOLESTR DescText);
	HRESULT(STDMETHODCALLTYPE *SetItemCount) (IResultData2 *This, int nItemCount, DWORD dwOptions);
	HRESULT(STDMETHODCALLTYPE *RenameResultItem) (IResultData2 *This, HRESULTITEM itemID);
	END_INTERFACE
}  IResultData2Vtbl;
interface IResultData2
{
	CONST_VTBL struct IResultData2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResultData2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResultData2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IResultData2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IResultData2_InsertItem(This,item) ( (This)->lpVtbl -> InsertItem(This,item) )
#define IResultData2_DeleteItem(This,itemID,nCol) ( (This)->lpVtbl -> DeleteItem(This,itemID,nCol) )
#define IResultData2_FindItemByLParam(This,lParam,pItemID) ( (This)->lpVtbl -> FindItemByLParam(This,lParam,pItemID) )
#define IResultData2_DeleteAllRsltItems(This) ( (This)->lpVtbl -> DeleteAllRsltItems(This) )
#define IResultData2_SetItem(This,item) ( (This)->lpVtbl -> SetItem(This,item) )
#define IResultData2_GetItem(This,item) ( (This)->lpVtbl -> GetItem(This,item) )
#define IResultData2_GetNextItem(This,item) ( (This)->lpVtbl -> GetNextItem(This,item) )
#define IResultData2_ModifyItemState(This,nIndex,itemID,uAdd,uRemove) ( (This)->lpVtbl -> ModifyItemState(This,nIndex,itemID,uAdd,uRemove) )
#define IResultData2_ModifyViewStyle(This,add,remove) ( (This)->lpVtbl -> ModifyViewStyle(This,add,remove) )
#define IResultData2_SetViewMode(This,lViewMode) ( (This)->lpVtbl -> SetViewMode(This,lViewMode) )
#define IResultData2_GetViewMode(This,lViewMode) ( (This)->lpVtbl -> GetViewMode(This,lViewMode) )
#define IResultData2_UpdateItem(This,itemID) ( (This)->lpVtbl -> UpdateItem(This,itemID) )
#define IResultData2_Sort(This,nColumn,dwSortOptions,lUserParam) ( (This)->lpVtbl -> Sort(This,nColumn,dwSortOptions,lUserParam) )
#define IResultData2_SetDescBarText(This,DescText) ( (This)->lpVtbl -> SetDescBarText(This,DescText) )
#define IResultData2_SetItemCount(This,nItemCount,dwOptions) ( (This)->lpVtbl -> SetItemCount(This,nItemCount,dwOptions) )
#define IResultData2_RenameResultItem(This,itemID) ( (This)->lpVtbl -> RenameResultItem(This,itemID) )
#endif
#endif
#endif
#if (MMC_VER >= 0x0210)
typedef enum _MMC_ITEM_OVERLAY
{
	MMC_ITEM_OVERLAY_NONE = 0,
	MMC_ITEM_OVERLAY_ERROR = 1,
	MMC_ITEM_OVERLAY_WARNING = 2,
	MMC_ITEM_OVERLAY_INFO = 3,
	MMC_ITEM_OVERLAY_BUSY = 4,
	MMC_ITEM_OVERLAY_UNAVAILABLE = 5,
	MMC_ITEM_OVERLAY_SHORTCUT = 6,
	MMC_ITEM_OVERLAY_RUNNING = 7,
	MMC_ITEM_OVERLAY_PAUSED = 8,
	MMC_ITEM_OVERLAY_STOPPED = 9,
	MMC_ITEM_OVERLAY_COMPLETE = 10
} MMC_ITEM_OVERLAY;
#define	MMC_ITEM_OVERLAY_STATE_MASK	( 0xf00 )
#define	MMC_ITEM_OVERLAY_STATE_SHIFT	( 8 )
#define MMC_OVERLAY_ITEM_INDEX_TO_ITEM_STATE(i) (((i) << MMC_ITEM_OVERLAY_STATE_SHIFT) & MMC_ITEM_OVERLAY_STATE_MASK)
#define MMC_OVERLAY_ITEM_INDEX_FROM_ITEM_STATE(state) (((state) & MMC_ITEM_OVERLAY_STATE_MASK) >> MMC_ITEM_OVERLAY_STATE_SHIFT)
#define	MMC_ITEM_STATE_MASK	( 0xff )
#endif
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0046_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HBITMAP_UserSize(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree(unsigned long *, HBITMAP *);
unsigned long __RPC_USER HICON_UserSize(unsigned long *, unsigned long, HICON *);
unsigned char *__RPC_USER HICON_UserMarshal(unsigned long *, unsigned char *, HICON *);
unsigned char *__RPC_USER HICON_UserUnmarshal(unsigned long *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree(unsigned long *, HICON *);
unsigned long __RPC_USER HPALETTE_UserSize(unsigned long *, unsigned long, HPALETTE *);
unsigned char *__RPC_USER HPALETTE_UserMarshal(unsigned long *, unsigned char *, HPALETTE *);
unsigned char *__RPC_USER HPALETTE_UserUnmarshal(unsigned long *, unsigned char *, HPALETTE *);
void __RPC_USER HPALETTE_UserFree(unsigned long *, HPALETTE *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HBITMAP_UserSize64(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal64(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal64(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree64(unsigned long *, HBITMAP *);
unsigned long __RPC_USER HICON_UserSize64(unsigned long *, unsigned long, HICON *);
unsigned char *__RPC_USER HICON_UserMarshal64(unsigned long *, unsigned char *, HICON *);
unsigned char *__RPC_USER HICON_UserUnmarshal64(unsigned long *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree64(unsigned long *, HICON *);
unsigned long __RPC_USER HPALETTE_UserSize64(unsigned long *, unsigned long, HPALETTE *);
unsigned char *__RPC_USER HPALETTE_UserMarshal64(unsigned long *, unsigned char *, HPALETTE *);
unsigned char *__RPC_USER HPALETTE_UserUnmarshal64(unsigned long *, unsigned char *, HPALETTE *);
void __RPC_USER HPALETTE_UserFree64(unsigned long *, HPALETTE *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
#endif
