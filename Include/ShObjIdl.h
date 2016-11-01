/*+@@file@@----------------------------------------------------------------*//*!
 \file		ShObjIdl.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 12:49:22 2016
 \date		Modified on Mon Jul  4 12:49:22 2016
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
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __shobjidl_h__
#define __shobjidl_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IContextMenu_FWD_DEFINED__
#define __IContextMenu_FWD_DEFINED__
typedef interface IContextMenu IContextMenu;
#endif
#ifndef __IContextMenu2_FWD_DEFINED__
#define __IContextMenu2_FWD_DEFINED__
typedef interface IContextMenu2 IContextMenu2;
#endif
#ifndef __IContextMenu3_FWD_DEFINED__
#define __IContextMenu3_FWD_DEFINED__
typedef interface IContextMenu3 IContextMenu3;
#endif
#ifndef __IExecuteCommand_FWD_DEFINED__
#define __IExecuteCommand_FWD_DEFINED__
typedef interface IExecuteCommand IExecuteCommand;
#endif
#ifndef __IPersistFolder_FWD_DEFINED__
#define __IPersistFolder_FWD_DEFINED__
typedef interface IPersistFolder IPersistFolder;
#endif
#ifndef __IRunnableTask_FWD_DEFINED__
#define __IRunnableTask_FWD_DEFINED__
typedef interface IRunnableTask IRunnableTask;
#endif
#ifndef __IShellTaskScheduler_FWD_DEFINED__
#define __IShellTaskScheduler_FWD_DEFINED__
typedef interface IShellTaskScheduler IShellTaskScheduler;
#endif
#ifndef __IQueryCodePage_FWD_DEFINED__
#define __IQueryCodePage_FWD_DEFINED__
typedef interface IQueryCodePage IQueryCodePage;
#endif
#ifndef __IPersistFolder2_FWD_DEFINED__
#define __IPersistFolder2_FWD_DEFINED__
typedef interface IPersistFolder2 IPersistFolder2;
#endif
#ifndef __IPersistFolder3_FWD_DEFINED__
#define __IPersistFolder3_FWD_DEFINED__
typedef interface IPersistFolder3 IPersistFolder3;
#endif
#ifndef __IPersistIDList_FWD_DEFINED__
#define __IPersistIDList_FWD_DEFINED__
typedef interface IPersistIDList IPersistIDList;
#endif
#ifndef __IEnumIDList_FWD_DEFINED__
#define __IEnumIDList_FWD_DEFINED__
typedef interface IEnumIDList IEnumIDList;
#endif
#ifndef __IEnumFullIDList_FWD_DEFINED__
#define __IEnumFullIDList_FWD_DEFINED__
typedef interface IEnumFullIDList IEnumFullIDList;
#endif
#ifndef __IObjectWithFolderEnumMode_FWD_DEFINED__
#define __IObjectWithFolderEnumMode_FWD_DEFINED__
typedef interface IObjectWithFolderEnumMode IObjectWithFolderEnumMode;
#endif
#ifndef __IParseAndCreateItem_FWD_DEFINED__
#define __IParseAndCreateItem_FWD_DEFINED__
typedef interface IParseAndCreateItem IParseAndCreateItem;
#endif
#ifndef __IShellFolder_FWD_DEFINED__
#define __IShellFolder_FWD_DEFINED__
typedef interface IShellFolder IShellFolder;
#endif
#ifndef __IEnumExtraSearch_FWD_DEFINED__
#define __IEnumExtraSearch_FWD_DEFINED__
typedef interface IEnumExtraSearch IEnumExtraSearch;
#endif
#ifndef __IShellFolder2_FWD_DEFINED__
#define __IShellFolder2_FWD_DEFINED__
typedef interface IShellFolder2 IShellFolder2;
#endif
#ifndef __IFolderViewOptions_FWD_DEFINED__
#define __IFolderViewOptions_FWD_DEFINED__
typedef interface IFolderViewOptions IFolderViewOptions;
#endif
#ifndef __IShellView_FWD_DEFINED__
#define __IShellView_FWD_DEFINED__
typedef interface IShellView IShellView;
#endif
#ifndef __IShellView2_FWD_DEFINED__
#define __IShellView2_FWD_DEFINED__
typedef interface IShellView2 IShellView2;
#endif
#ifndef __IShellView3_FWD_DEFINED__
#define __IShellView3_FWD_DEFINED__
typedef interface IShellView3 IShellView3;
#endif
#ifndef __IFolderView_FWD_DEFINED__
#define __IFolderView_FWD_DEFINED__
typedef interface IFolderView IFolderView;
#endif
#ifndef __ISearchBoxInfo_FWD_DEFINED__
#define __ISearchBoxInfo_FWD_DEFINED__
typedef interface ISearchBoxInfo ISearchBoxInfo;
#endif
#ifndef __IFolderView2_FWD_DEFINED__
#define __IFolderView2_FWD_DEFINED__
typedef interface IFolderView2 IFolderView2;
#endif
#ifndef __IFolderViewSettings_FWD_DEFINED__
#define __IFolderViewSettings_FWD_DEFINED__
typedef interface IFolderViewSettings IFolderViewSettings;
#endif
#ifndef __IPreviewHandlerVisuals_FWD_DEFINED__
#define __IPreviewHandlerVisuals_FWD_DEFINED__
typedef interface IPreviewHandlerVisuals IPreviewHandlerVisuals;
#endif
#ifndef __IVisualProperties_FWD_DEFINED__
#define __IVisualProperties_FWD_DEFINED__
typedef interface IVisualProperties IVisualProperties;
#endif
#ifndef __ICommDlgBrowser_FWD_DEFINED__
#define __ICommDlgBrowser_FWD_DEFINED__
typedef interface ICommDlgBrowser ICommDlgBrowser;
#endif
#ifndef __ICommDlgBrowser2_FWD_DEFINED__
#define __ICommDlgBrowser2_FWD_DEFINED__
typedef interface ICommDlgBrowser2 ICommDlgBrowser2;
#endif
#ifndef __ICommDlgBrowser3_FWD_DEFINED__
#define __ICommDlgBrowser3_FWD_DEFINED__
typedef interface ICommDlgBrowser3 ICommDlgBrowser3;
#endif
#ifndef __IColumnManager_FWD_DEFINED__
#define __IColumnManager_FWD_DEFINED__
typedef interface IColumnManager IColumnManager;
#endif
#ifndef __IFolderFilterSite_FWD_DEFINED__
#define __IFolderFilterSite_FWD_DEFINED__
typedef interface IFolderFilterSite IFolderFilterSite;
#endif
#ifndef __IFolderFilter_FWD_DEFINED__
#define __IFolderFilter_FWD_DEFINED__
typedef interface IFolderFilter IFolderFilter;
#endif
#ifndef __IInputObjectSite_FWD_DEFINED__
#define __IInputObjectSite_FWD_DEFINED__
typedef interface IInputObjectSite IInputObjectSite;
#endif
#ifndef __IInputObject_FWD_DEFINED__
#define __IInputObject_FWD_DEFINED__
typedef interface IInputObject IInputObject;
#endif
#ifndef __IInputObject2_FWD_DEFINED__
#define __IInputObject2_FWD_DEFINED__
typedef interface IInputObject2 IInputObject2;
#endif
#ifndef __IShellIcon_FWD_DEFINED__
#define __IShellIcon_FWD_DEFINED__
typedef interface IShellIcon IShellIcon;
#endif
#ifndef __IShellBrowser_FWD_DEFINED__
#define __IShellBrowser_FWD_DEFINED__
typedef interface IShellBrowser IShellBrowser;
#endif
#ifndef __IProfferService_FWD_DEFINED__
#define __IProfferService_FWD_DEFINED__
typedef interface IProfferService IProfferService;
#endif
#ifndef __IShellItem_FWD_DEFINED__
#define __IShellItem_FWD_DEFINED__
typedef interface IShellItem IShellItem;
#endif
#ifndef __IShellItem2_FWD_DEFINED__
#define __IShellItem2_FWD_DEFINED__
typedef interface IShellItem2 IShellItem2;
#endif
#ifndef __IShellItemImageFactory_FWD_DEFINED__
#define __IShellItemImageFactory_FWD_DEFINED__
typedef interface IShellItemImageFactory IShellItemImageFactory;
#endif
#ifndef __IUserAccountChangeCallback_FWD_DEFINED__
#define __IUserAccountChangeCallback_FWD_DEFINED__
typedef interface IUserAccountChangeCallback IUserAccountChangeCallback;
#endif
#ifndef __IEnumShellItems_FWD_DEFINED__
#define __IEnumShellItems_FWD_DEFINED__
typedef interface IEnumShellItems IEnumShellItems;
#endif
#ifndef __ITransferAdviseSink_FWD_DEFINED__
#define __ITransferAdviseSink_FWD_DEFINED__
typedef interface ITransferAdviseSink ITransferAdviseSink;
#endif
#ifndef __ITransferSource_FWD_DEFINED__
#define __ITransferSource_FWD_DEFINED__
typedef interface ITransferSource ITransferSource;
#endif
#ifndef __IEnumResources_FWD_DEFINED__
#define __IEnumResources_FWD_DEFINED__
typedef interface IEnumResources IEnumResources;
#endif
#ifndef __IShellItemResources_FWD_DEFINED__
#define __IShellItemResources_FWD_DEFINED__
typedef interface IShellItemResources IShellItemResources;
#endif
#ifndef __ITransferDestination_FWD_DEFINED__
#define __ITransferDestination_FWD_DEFINED__
typedef interface ITransferDestination ITransferDestination;
#endif
#ifndef __IStreamAsync_FWD_DEFINED__
#define __IStreamAsync_FWD_DEFINED__
typedef interface IStreamAsync IStreamAsync;
#endif
#ifndef __IStreamUnbufferedInfo_FWD_DEFINED__
#define __IStreamUnbufferedInfo_FWD_DEFINED__
typedef interface IStreamUnbufferedInfo IStreamUnbufferedInfo;
#endif
#ifndef __IFileOperationProgressSink_FWD_DEFINED__
#define __IFileOperationProgressSink_FWD_DEFINED__
typedef interface IFileOperationProgressSink IFileOperationProgressSink;
#endif
#ifndef __IShellItemArray_FWD_DEFINED__
#define __IShellItemArray_FWD_DEFINED__
typedef interface IShellItemArray IShellItemArray;
#endif
#ifndef __IInitializeWithItem_FWD_DEFINED__
#define __IInitializeWithItem_FWD_DEFINED__
typedef interface IInitializeWithItem IInitializeWithItem;
#endif
#ifndef __IObjectWithSelection_FWD_DEFINED__
#define __IObjectWithSelection_FWD_DEFINED__
typedef interface IObjectWithSelection IObjectWithSelection;
#endif
#ifndef __IObjectWithBackReferences_FWD_DEFINED__
#define __IObjectWithBackReferences_FWD_DEFINED__
typedef interface IObjectWithBackReferences IObjectWithBackReferences;
#endif
#ifndef __IPropertyUI_FWD_DEFINED__
#define __IPropertyUI_FWD_DEFINED__
typedef interface IPropertyUI IPropertyUI;
#endif
#ifndef __ICategoryProvider_FWD_DEFINED__
#define __ICategoryProvider_FWD_DEFINED__
typedef interface ICategoryProvider ICategoryProvider;
#endif
#ifndef __ICategorizer_FWD_DEFINED__
#define __ICategorizer_FWD_DEFINED__
typedef interface ICategorizer ICategorizer;
#endif
#ifndef __IDropTargetHelper_FWD_DEFINED__
#define __IDropTargetHelper_FWD_DEFINED__
typedef interface IDropTargetHelper IDropTargetHelper;
#endif
#ifndef __IDragSourceHelper_FWD_DEFINED__
#define __IDragSourceHelper_FWD_DEFINED__
typedef interface IDragSourceHelper IDragSourceHelper;
#endif
#ifndef __IDragSourceHelper2_FWD_DEFINED__
#define __IDragSourceHelper2_FWD_DEFINED__
typedef interface IDragSourceHelper2 IDragSourceHelper2;
#endif
#ifndef __IShellLinkA_FWD_DEFINED__
#define __IShellLinkA_FWD_DEFINED__
typedef interface IShellLinkA IShellLinkA;
#endif
#ifndef __IShellLinkW_FWD_DEFINED__
#define __IShellLinkW_FWD_DEFINED__
typedef interface IShellLinkW IShellLinkW;
#endif
#ifndef __IShellLinkDataList_FWD_DEFINED__
#define __IShellLinkDataList_FWD_DEFINED__
typedef interface IShellLinkDataList IShellLinkDataList;
#endif
#ifndef __IResolveShellLink_FWD_DEFINED__
#define __IResolveShellLink_FWD_DEFINED__
typedef interface IResolveShellLink IResolveShellLink;
#endif
#ifndef __IActionProgressDialog_FWD_DEFINED__
#define __IActionProgressDialog_FWD_DEFINED__
typedef interface IActionProgressDialog IActionProgressDialog;
#endif
#ifndef __IHWEventHandler_FWD_DEFINED__
#define __IHWEventHandler_FWD_DEFINED__
typedef interface IHWEventHandler IHWEventHandler;
#endif
#ifndef __IHWEventHandler2_FWD_DEFINED__
#define __IHWEventHandler2_FWD_DEFINED__
typedef interface IHWEventHandler2 IHWEventHandler2;
#endif
#ifndef __IQueryCancelAutoPlay_FWD_DEFINED__
#define __IQueryCancelAutoPlay_FWD_DEFINED__
typedef interface IQueryCancelAutoPlay IQueryCancelAutoPlay;
#endif
#ifndef __IDynamicHWHandler_FWD_DEFINED__
#define __IDynamicHWHandler_FWD_DEFINED__
typedef interface IDynamicHWHandler IDynamicHWHandler;
#endif
#ifndef __IActionProgress_FWD_DEFINED__
#define __IActionProgress_FWD_DEFINED__
typedef interface IActionProgress IActionProgress;
#endif
#ifndef __IShellExtInit_FWD_DEFINED__
#define __IShellExtInit_FWD_DEFINED__
typedef interface IShellExtInit IShellExtInit;
#endif
#ifndef __IShellPropSheetExt_FWD_DEFINED__
#define __IShellPropSheetExt_FWD_DEFINED__
typedef interface IShellPropSheetExt IShellPropSheetExt;
#endif
#ifndef __IRemoteComputer_FWD_DEFINED__
#define __IRemoteComputer_FWD_DEFINED__
typedef interface IRemoteComputer IRemoteComputer;
#endif
#ifndef __IQueryContinue_FWD_DEFINED__
#define __IQueryContinue_FWD_DEFINED__
typedef interface IQueryContinue IQueryContinue;
#endif
#ifndef __IObjectWithCancelEvent_FWD_DEFINED__
#define __IObjectWithCancelEvent_FWD_DEFINED__
typedef interface IObjectWithCancelEvent IObjectWithCancelEvent;
#endif
#ifndef __IUserNotification_FWD_DEFINED__
#define __IUserNotification_FWD_DEFINED__
typedef interface IUserNotification IUserNotification;
#endif
#ifndef __IUserNotificationCallback_FWD_DEFINED__
#define __IUserNotificationCallback_FWD_DEFINED__
typedef interface IUserNotificationCallback IUserNotificationCallback;
#endif
#ifndef __IUserNotification2_FWD_DEFINED__
#define __IUserNotification2_FWD_DEFINED__
typedef interface IUserNotification2 IUserNotification2;
#endif
#ifndef __IItemNameLimits_FWD_DEFINED__
#define __IItemNameLimits_FWD_DEFINED__
typedef interface IItemNameLimits IItemNameLimits;
#endif
#ifndef __ISearchFolderItemFactory_FWD_DEFINED__
#define __ISearchFolderItemFactory_FWD_DEFINED__
typedef interface ISearchFolderItemFactory ISearchFolderItemFactory;
#endif
#ifndef __IExtractImage_FWD_DEFINED__
#define __IExtractImage_FWD_DEFINED__
typedef interface IExtractImage IExtractImage;
#endif
#ifndef __IExtractImage2_FWD_DEFINED__
#define __IExtractImage2_FWD_DEFINED__
typedef interface IExtractImage2 IExtractImage2;
#endif
#ifndef __IThumbnailHandlerFactory_FWD_DEFINED__
#define __IThumbnailHandlerFactory_FWD_DEFINED__
typedef interface IThumbnailHandlerFactory IThumbnailHandlerFactory;
#endif
#ifndef __IParentAndItem_FWD_DEFINED__
#define __IParentAndItem_FWD_DEFINED__
typedef interface IParentAndItem IParentAndItem;
#endif
#ifndef __IDockingWindow_FWD_DEFINED__
#define __IDockingWindow_FWD_DEFINED__
typedef interface IDockingWindow IDockingWindow;
#endif
#ifndef __IDeskBand_FWD_DEFINED__
#define __IDeskBand_FWD_DEFINED__
typedef interface IDeskBand IDeskBand;
#endif
#ifndef __IDeskBandInfo_FWD_DEFINED__
#define __IDeskBandInfo_FWD_DEFINED__
typedef interface IDeskBandInfo IDeskBandInfo;
#endif
#ifndef __IDeskBand2_FWD_DEFINED__
#define __IDeskBand2_FWD_DEFINED__
typedef interface IDeskBand2 IDeskBand2;
#endif
#ifndef __ITaskbarList_FWD_DEFINED__
#define __ITaskbarList_FWD_DEFINED__
typedef interface ITaskbarList ITaskbarList;
#endif
#ifndef __ITaskbarList2_FWD_DEFINED__
#define __ITaskbarList2_FWD_DEFINED__
typedef interface ITaskbarList2 ITaskbarList2;
#endif
#ifndef __ITaskbarList3_FWD_DEFINED__
#define __ITaskbarList3_FWD_DEFINED__
typedef interface ITaskbarList3 ITaskbarList3;
#endif
#ifndef __ITaskbarList4_FWD_DEFINED__
#define __ITaskbarList4_FWD_DEFINED__
typedef interface ITaskbarList4 ITaskbarList4;
#endif
#ifndef __IStartMenuPinnedList_FWD_DEFINED__
#define __IStartMenuPinnedList_FWD_DEFINED__
typedef interface IStartMenuPinnedList IStartMenuPinnedList;
#endif
#ifndef __ICDBurn_FWD_DEFINED__
#define __ICDBurn_FWD_DEFINED__
typedef interface ICDBurn ICDBurn;
#endif
#ifndef __IWizardSite_FWD_DEFINED__
#define __IWizardSite_FWD_DEFINED__
typedef interface IWizardSite IWizardSite;
#endif
#ifndef __IWizardExtension_FWD_DEFINED__
#define __IWizardExtension_FWD_DEFINED__
typedef interface IWizardExtension IWizardExtension;
#endif
#ifndef __IWebWizardExtension_FWD_DEFINED__
#define __IWebWizardExtension_FWD_DEFINED__
typedef interface IWebWizardExtension IWebWizardExtension;
#endif
#ifndef __IPublishingWizard_FWD_DEFINED__
#define __IPublishingWizard_FWD_DEFINED__
typedef interface IPublishingWizard IPublishingWizard;
#endif
#ifndef __IFolderViewHost_FWD_DEFINED__
#define __IFolderViewHost_FWD_DEFINED__
typedef interface IFolderViewHost IFolderViewHost;
#endif
#ifndef __IExplorerBrowserEvents_FWD_DEFINED__
#define __IExplorerBrowserEvents_FWD_DEFINED__
typedef interface IExplorerBrowserEvents IExplorerBrowserEvents;
#endif
#ifndef __IExplorerBrowser_FWD_DEFINED__
#define __IExplorerBrowser_FWD_DEFINED__
typedef interface IExplorerBrowser IExplorerBrowser;
#endif
#ifndef __IAccessibleObject_FWD_DEFINED__
#define __IAccessibleObject_FWD_DEFINED__
typedef interface IAccessibleObject IAccessibleObject;
#endif
#ifndef __IResultsFolder_FWD_DEFINED__
#define __IResultsFolder_FWD_DEFINED__
typedef interface IResultsFolder IResultsFolder;
#endif
#ifndef __IEnumObjects_FWD_DEFINED__
#define __IEnumObjects_FWD_DEFINED__
typedef interface IEnumObjects IEnumObjects;
#endif
#ifndef __IOperationsProgressDialog_FWD_DEFINED__
#define __IOperationsProgressDialog_FWD_DEFINED__
typedef interface IOperationsProgressDialog IOperationsProgressDialog;
#endif
#ifndef __IIOCancelInformation_FWD_DEFINED__
#define __IIOCancelInformation_FWD_DEFINED__
typedef interface IIOCancelInformation IIOCancelInformation;
#endif
#ifndef __IFileOperation_FWD_DEFINED__
#define __IFileOperation_FWD_DEFINED__
typedef interface IFileOperation IFileOperation;
#endif
#ifndef __IObjectProvider_FWD_DEFINED__
#define __IObjectProvider_FWD_DEFINED__
typedef interface IObjectProvider IObjectProvider;
#endif
#ifndef __INamespaceWalkCB_FWD_DEFINED__
#define __INamespaceWalkCB_FWD_DEFINED__
typedef interface INamespaceWalkCB INamespaceWalkCB;
#endif
#ifndef __INamespaceWalkCB2_FWD_DEFINED__
#define __INamespaceWalkCB2_FWD_DEFINED__
typedef interface INamespaceWalkCB2 INamespaceWalkCB2;
#endif
#ifndef __INamespaceWalk_FWD_DEFINED__
#define __INamespaceWalk_FWD_DEFINED__
typedef interface INamespaceWalk INamespaceWalk;
#endif
#ifndef __IAutoCompleteDropDown_FWD_DEFINED__
#define __IAutoCompleteDropDown_FWD_DEFINED__
typedef interface IAutoCompleteDropDown IAutoCompleteDropDown;
#endif
#ifndef __IBandSite_FWD_DEFINED__
#define __IBandSite_FWD_DEFINED__
typedef interface IBandSite IBandSite;
#endif
#ifndef __IModalWindow_FWD_DEFINED__
#define __IModalWindow_FWD_DEFINED__
typedef interface IModalWindow IModalWindow;
#endif
#ifndef __ICDBurnExt_FWD_DEFINED__
#define __ICDBurnExt_FWD_DEFINED__
typedef interface ICDBurnExt ICDBurnExt;
#endif
#ifndef __IContextMenuSite_FWD_DEFINED__
#define __IContextMenuSite_FWD_DEFINED__
typedef interface IContextMenuSite IContextMenuSite;
#endif
#ifndef __IEnumReadyCallback_FWD_DEFINED__
#define __IEnumReadyCallback_FWD_DEFINED__
typedef interface IEnumReadyCallback IEnumReadyCallback;
#endif
#ifndef __IEnumerableView_FWD_DEFINED__
#define __IEnumerableView_FWD_DEFINED__
typedef interface IEnumerableView IEnumerableView;
#endif
#ifndef __IInsertItem_FWD_DEFINED__
#define __IInsertItem_FWD_DEFINED__
typedef interface IInsertItem IInsertItem;
#endif
#ifndef __IMenuBand_FWD_DEFINED__
#define __IMenuBand_FWD_DEFINED__
typedef interface IMenuBand IMenuBand;
#endif
#ifndef __IFolderBandPriv_FWD_DEFINED__
#define __IFolderBandPriv_FWD_DEFINED__
typedef interface IFolderBandPriv IFolderBandPriv;
#endif
#ifndef __IRegTreeItem_FWD_DEFINED__
#define __IRegTreeItem_FWD_DEFINED__
typedef interface IRegTreeItem IRegTreeItem;
#endif
#ifndef __IImageRecompress_FWD_DEFINED__
#define __IImageRecompress_FWD_DEFINED__
typedef interface IImageRecompress IImageRecompress;
#endif
#ifndef __IDeskBar_FWD_DEFINED__
#define __IDeskBar_FWD_DEFINED__
typedef interface IDeskBar IDeskBar;
#endif
#ifndef __IMenuPopup_FWD_DEFINED__
#define __IMenuPopup_FWD_DEFINED__
typedef interface IMenuPopup IMenuPopup;
#endif
#ifndef __IFileIsInUse_FWD_DEFINED__
#define __IFileIsInUse_FWD_DEFINED__
typedef interface IFileIsInUse IFileIsInUse;
#endif
#ifndef __IFileDialogEvents_FWD_DEFINED__
#define __IFileDialogEvents_FWD_DEFINED__
typedef interface IFileDialogEvents IFileDialogEvents;
#endif
#ifndef __IFileDialog_FWD_DEFINED__
#define __IFileDialog_FWD_DEFINED__
typedef interface IFileDialog IFileDialog;
#endif
#ifndef __IFileSaveDialog_FWD_DEFINED__
#define __IFileSaveDialog_FWD_DEFINED__
typedef interface IFileSaveDialog IFileSaveDialog;
#endif
#ifndef __IFileOpenDialog_FWD_DEFINED__
#define __IFileOpenDialog_FWD_DEFINED__
typedef interface IFileOpenDialog IFileOpenDialog;
#endif
#ifndef __IFileDialogCustomize_FWD_DEFINED__
#define __IFileDialogCustomize_FWD_DEFINED__
typedef interface IFileDialogCustomize IFileDialogCustomize;
#endif
#ifndef __IFileDialogControlEvents_FWD_DEFINED__
#define __IFileDialogControlEvents_FWD_DEFINED__
typedef interface IFileDialogControlEvents IFileDialogControlEvents;
#endif
#ifndef __IFileDialog2_FWD_DEFINED__
#define __IFileDialog2_FWD_DEFINED__
typedef interface IFileDialog2 IFileDialog2;
#endif
#ifndef __IApplicationAssociationRegistration_FWD_DEFINED__
#define __IApplicationAssociationRegistration_FWD_DEFINED__
typedef interface IApplicationAssociationRegistration IApplicationAssociationRegistration;
#endif
#ifndef __IApplicationAssociationRegistrationUI_FWD_DEFINED__
#define __IApplicationAssociationRegistrationUI_FWD_DEFINED__
typedef interface IApplicationAssociationRegistrationUI IApplicationAssociationRegistrationUI;
#endif
#ifndef __IDelegateFolder_FWD_DEFINED__
#define __IDelegateFolder_FWD_DEFINED__
typedef interface IDelegateFolder IDelegateFolder;
#endif
#ifndef __IBrowserFrameOptions_FWD_DEFINED__
#define __IBrowserFrameOptions_FWD_DEFINED__
typedef interface IBrowserFrameOptions IBrowserFrameOptions;
#endif
#ifndef __INewWindowManager_FWD_DEFINED__
#define __INewWindowManager_FWD_DEFINED__
typedef interface INewWindowManager INewWindowManager;
#endif
#ifndef __IAttachmentExecute_FWD_DEFINED__
#define __IAttachmentExecute_FWD_DEFINED__
typedef interface IAttachmentExecute IAttachmentExecute;
#endif
#ifndef __IShellMenuCallback_FWD_DEFINED__
#define __IShellMenuCallback_FWD_DEFINED__
typedef interface IShellMenuCallback IShellMenuCallback;
#endif
#ifndef __IShellMenu_FWD_DEFINED__
#define __IShellMenu_FWD_DEFINED__
typedef interface IShellMenu IShellMenu;
#endif
#ifndef __IShellRunDll_FWD_DEFINED__
#define __IShellRunDll_FWD_DEFINED__
typedef interface IShellRunDll IShellRunDll;
#endif
#ifndef __IKnownFolder_FWD_DEFINED__
#define __IKnownFolder_FWD_DEFINED__
typedef interface IKnownFolder IKnownFolder;
#endif
#ifndef __IKnownFolderManager_FWD_DEFINED__
#define __IKnownFolderManager_FWD_DEFINED__
typedef interface IKnownFolderManager IKnownFolderManager;
#endif
#ifndef __ISharingConfigurationManager_FWD_DEFINED__
#define __ISharingConfigurationManager_FWD_DEFINED__
typedef interface ISharingConfigurationManager ISharingConfigurationManager;
#endif
#ifndef __IPreviousVersionsInfo_FWD_DEFINED__
#define __IPreviousVersionsInfo_FWD_DEFINED__
typedef interface IPreviousVersionsInfo IPreviousVersionsInfo;
#endif
#ifndef __IRelatedItem_FWD_DEFINED__
#define __IRelatedItem_FWD_DEFINED__
typedef interface IRelatedItem IRelatedItem;
#endif
#ifndef __IIdentityName_FWD_DEFINED__
#define __IIdentityName_FWD_DEFINED__
typedef interface IIdentityName IIdentityName;
#endif
#ifndef __IDelegateItem_FWD_DEFINED__
#define __IDelegateItem_FWD_DEFINED__
typedef interface IDelegateItem IDelegateItem;
#endif
#ifndef __ICurrentItem_FWD_DEFINED__
#define __ICurrentItem_FWD_DEFINED__
typedef interface ICurrentItem ICurrentItem;
#endif
#ifndef __ITransferMediumItem_FWD_DEFINED__
#define __ITransferMediumItem_FWD_DEFINED__
typedef interface ITransferMediumItem ITransferMediumItem;
#endif
#ifndef __IUseToBrowseItem_FWD_DEFINED__
#define __IUseToBrowseItem_FWD_DEFINED__
typedef interface IUseToBrowseItem IUseToBrowseItem;
#endif
#ifndef __IDisplayItem_FWD_DEFINED__
#define __IDisplayItem_FWD_DEFINED__
typedef interface IDisplayItem IDisplayItem;
#endif
#ifndef __IViewStateIdentityItem_FWD_DEFINED__
#define __IViewStateIdentityItem_FWD_DEFINED__
typedef interface IViewStateIdentityItem IViewStateIdentityItem;
#endif
#ifndef __IPreviewItem_FWD_DEFINED__
#define __IPreviewItem_FWD_DEFINED__
typedef interface IPreviewItem IPreviewItem;
#endif
#ifndef __IDestinationStreamFactory_FWD_DEFINED__
#define __IDestinationStreamFactory_FWD_DEFINED__
typedef interface IDestinationStreamFactory IDestinationStreamFactory;
#endif
#ifndef __INewMenuClient_FWD_DEFINED__
#define __INewMenuClient_FWD_DEFINED__
typedef interface INewMenuClient INewMenuClient;
#endif
#ifndef __IInitializeWithBindCtx_FWD_DEFINED__
#define __IInitializeWithBindCtx_FWD_DEFINED__
typedef interface IInitializeWithBindCtx IInitializeWithBindCtx;
#endif
#ifndef __IShellItemFilter_FWD_DEFINED__
#define __IShellItemFilter_FWD_DEFINED__
typedef interface IShellItemFilter IShellItemFilter;
#endif
#ifndef __INameSpaceTreeControl_FWD_DEFINED__
#define __INameSpaceTreeControl_FWD_DEFINED__
typedef interface INameSpaceTreeControl INameSpaceTreeControl;
#endif
#ifndef __INameSpaceTreeControl2_FWD_DEFINED__
#define __INameSpaceTreeControl2_FWD_DEFINED__
typedef interface INameSpaceTreeControl2 INameSpaceTreeControl2;
#endif
#ifndef __INameSpaceTreeControlEvents_FWD_DEFINED__
#define __INameSpaceTreeControlEvents_FWD_DEFINED__
typedef interface INameSpaceTreeControlEvents INameSpaceTreeControlEvents;
#endif
#ifndef __INameSpaceTreeControlDropHandler_FWD_DEFINED__
#define __INameSpaceTreeControlDropHandler_FWD_DEFINED__
typedef interface INameSpaceTreeControlDropHandler INameSpaceTreeControlDropHandler;
#endif
#ifndef __INameSpaceTreeAccessible_FWD_DEFINED__
#define __INameSpaceTreeAccessible_FWD_DEFINED__
typedef interface INameSpaceTreeAccessible INameSpaceTreeAccessible;
#endif
#ifndef __INameSpaceTreeControlCustomDraw_FWD_DEFINED__
#define __INameSpaceTreeControlCustomDraw_FWD_DEFINED__
typedef interface INameSpaceTreeControlCustomDraw INameSpaceTreeControlCustomDraw;
#endif
#ifndef __INameSpaceTreeControlFolderCapabilities_FWD_DEFINED__
#define __INameSpaceTreeControlFolderCapabilities_FWD_DEFINED__
typedef interface INameSpaceTreeControlFolderCapabilities INameSpaceTreeControlFolderCapabilities;
#endif
#ifndef __IPreviewHandler_FWD_DEFINED__
#define __IPreviewHandler_FWD_DEFINED__
typedef interface IPreviewHandler IPreviewHandler;
#endif
#ifndef __IPreviewHandlerFrame_FWD_DEFINED__
#define __IPreviewHandlerFrame_FWD_DEFINED__
typedef interface IPreviewHandlerFrame IPreviewHandlerFrame;
#endif
#ifndef __ITrayDeskBand_FWD_DEFINED__
#define __ITrayDeskBand_FWD_DEFINED__
typedef interface ITrayDeskBand ITrayDeskBand;
#endif
#ifndef __IBandHost_FWD_DEFINED__
#define __IBandHost_FWD_DEFINED__
typedef interface IBandHost IBandHost;
#endif
#ifndef __IExplorerPaneVisibility_FWD_DEFINED__
#define __IExplorerPaneVisibility_FWD_DEFINED__
typedef interface IExplorerPaneVisibility IExplorerPaneVisibility;
#endif
#ifndef __IContextMenuCB_FWD_DEFINED__
#define __IContextMenuCB_FWD_DEFINED__
typedef interface IContextMenuCB IContextMenuCB;
#endif
#ifndef __IDefaultExtractIconInit_FWD_DEFINED__
#define __IDefaultExtractIconInit_FWD_DEFINED__
typedef interface IDefaultExtractIconInit IDefaultExtractIconInit;
#endif
#ifndef __IExplorerCommand_FWD_DEFINED__
#define __IExplorerCommand_FWD_DEFINED__
typedef interface IExplorerCommand IExplorerCommand;
#endif
#ifndef __IExplorerCommandState_FWD_DEFINED__
#define __IExplorerCommandState_FWD_DEFINED__
typedef interface IExplorerCommandState IExplorerCommandState;
#endif
#ifndef __IInitializeCommand_FWD_DEFINED__
#define __IInitializeCommand_FWD_DEFINED__
typedef interface IInitializeCommand IInitializeCommand;
#endif
#ifndef __IEnumExplorerCommand_FWD_DEFINED__
#define __IEnumExplorerCommand_FWD_DEFINED__
typedef interface IEnumExplorerCommand IEnumExplorerCommand;
#endif
#ifndef __IExplorerCommandProvider_FWD_DEFINED__
#define __IExplorerCommandProvider_FWD_DEFINED__
typedef interface IExplorerCommandProvider IExplorerCommandProvider;
#endif
#ifndef __IMarkupCallback_FWD_DEFINED__
#define __IMarkupCallback_FWD_DEFINED__
typedef interface IMarkupCallback IMarkupCallback;
#endif
#ifndef __IControlMarkup_FWD_DEFINED__
#define __IControlMarkup_FWD_DEFINED__
typedef interface IControlMarkup IControlMarkup;
#endif
#ifndef __IInitializeNetworkFolder_FWD_DEFINED__
#define __IInitializeNetworkFolder_FWD_DEFINED__
typedef interface IInitializeNetworkFolder IInitializeNetworkFolder;
#endif
#ifndef __IOpenControlPanel_FWD_DEFINED__
#define __IOpenControlPanel_FWD_DEFINED__
typedef interface IOpenControlPanel IOpenControlPanel;
#endif
#ifndef __IComputerInfoChangeNotify_FWD_DEFINED__
#define __IComputerInfoChangeNotify_FWD_DEFINED__
typedef interface IComputerInfoChangeNotify IComputerInfoChangeNotify;
#endif
#ifndef __IFileSystemBindData_FWD_DEFINED__
#define __IFileSystemBindData_FWD_DEFINED__
typedef interface IFileSystemBindData IFileSystemBindData;
#endif
#ifndef __IFileSystemBindData2_FWD_DEFINED__
#define __IFileSystemBindData2_FWD_DEFINED__
typedef interface IFileSystemBindData2 IFileSystemBindData2;
#endif
#ifndef __ICustomDestinationList_FWD_DEFINED__
#define __ICustomDestinationList_FWD_DEFINED__
typedef interface ICustomDestinationList ICustomDestinationList;
#endif
#ifndef __IApplicationDestinations_FWD_DEFINED__
#define __IApplicationDestinations_FWD_DEFINED__
typedef interface IApplicationDestinations IApplicationDestinations;
#endif
#ifndef __IApplicationDocumentLists_FWD_DEFINED__
#define __IApplicationDocumentLists_FWD_DEFINED__
typedef interface IApplicationDocumentLists IApplicationDocumentLists;
#endif
#ifndef __IObjectWithAppUserModelID_FWD_DEFINED__
#define __IObjectWithAppUserModelID_FWD_DEFINED__
typedef interface IObjectWithAppUserModelID IObjectWithAppUserModelID;
#endif
#ifndef __IObjectWithProgID_FWD_DEFINED__
#define __IObjectWithProgID_FWD_DEFINED__
typedef interface IObjectWithProgID IObjectWithProgID;
#endif
#ifndef __IUpdateIDList_FWD_DEFINED__
#define __IUpdateIDList_FWD_DEFINED__
typedef interface IUpdateIDList IUpdateIDList;
#endif
#ifndef __IDesktopGadget_FWD_DEFINED__
#define __IDesktopGadget_FWD_DEFINED__
typedef interface IDesktopGadget IDesktopGadget;
#endif
#ifndef __IHomeGroup_FWD_DEFINED__
#define __IHomeGroup_FWD_DEFINED__
typedef interface IHomeGroup IHomeGroup;
#endif
#ifndef __IInitializeWithPropertyStore_FWD_DEFINED__
#define __IInitializeWithPropertyStore_FWD_DEFINED__
typedef interface IInitializeWithPropertyStore IInitializeWithPropertyStore;
#endif
#ifndef __IOpenSearchSource_FWD_DEFINED__
#define __IOpenSearchSource_FWD_DEFINED__
typedef interface IOpenSearchSource IOpenSearchSource;
#endif
#ifndef __IShellLibrary_FWD_DEFINED__
#define __IShellLibrary_FWD_DEFINED__
typedef interface IShellLibrary IShellLibrary;
#endif
#ifndef __ShellDesktop_FWD_DEFINED__
#define __ShellDesktop_FWD_DEFINED__
typedef struct ShellDesktop ShellDesktop;
#endif
#ifndef __ShellFSFolder_FWD_DEFINED__
#define __ShellFSFolder_FWD_DEFINED__
typedef struct ShellFSFolder ShellFSFolder;
#endif
#ifndef __NetworkPlaces_FWD_DEFINED__
#define __NetworkPlaces_FWD_DEFINED__
typedef struct NetworkPlaces NetworkPlaces;
#endif
#ifndef __ShellLink_FWD_DEFINED__
#define __ShellLink_FWD_DEFINED__
typedef struct ShellLink ShellLink;
#endif
#ifndef __QueryCancelAutoPlay_FWD_DEFINED__
#define __QueryCancelAutoPlay_FWD_DEFINED__
typedef struct QueryCancelAutoPlay QueryCancelAutoPlay;
#endif
#ifndef __DriveSizeCategorizer_FWD_DEFINED__
#define __DriveSizeCategorizer_FWD_DEFINED__
typedef struct DriveSizeCategorizer DriveSizeCategorizer;
#endif
#ifndef __DriveTypeCategorizer_FWD_DEFINED__
#define __DriveTypeCategorizer_FWD_DEFINED__
typedef struct DriveTypeCategorizer DriveTypeCategorizer;
#endif
#ifndef __FreeSpaceCategorizer_FWD_DEFINED__
#define __FreeSpaceCategorizer_FWD_DEFINED__
typedef struct FreeSpaceCategorizer FreeSpaceCategorizer;
#endif
#ifndef __TimeCategorizer_FWD_DEFINED__
#define __TimeCategorizer_FWD_DEFINED__
typedef struct TimeCategorizer TimeCategorizer;
#endif
#ifndef __SizeCategorizer_FWD_DEFINED__
#define __SizeCategorizer_FWD_DEFINED__
typedef struct SizeCategorizer SizeCategorizer;
#endif
#ifndef __AlphabeticalCategorizer_FWD_DEFINED__
#define __AlphabeticalCategorizer_FWD_DEFINED__
typedef struct AlphabeticalCategorizer AlphabeticalCategorizer;
#endif
#ifndef __MergedCategorizer_FWD_DEFINED__
#define __MergedCategorizer_FWD_DEFINED__
typedef struct MergedCategorizer MergedCategorizer;
#endif
#ifndef __ImageProperties_FWD_DEFINED__
#define __ImageProperties_FWD_DEFINED__
typedef struct ImageProperties ImageProperties;
#endif
#ifndef __PropertiesUI_FWD_DEFINED__
#define __PropertiesUI_FWD_DEFINED__
typedef struct PropertiesUI PropertiesUI;
#endif
#ifndef __UserNotification_FWD_DEFINED__
#define __UserNotification_FWD_DEFINED__
typedef struct UserNotification UserNotification;
#endif
#ifndef __CDBurn_FWD_DEFINED__
#define __CDBurn_FWD_DEFINED__
typedef struct CDBurn CDBurn;
#endif
#ifndef __TaskbarList_FWD_DEFINED__
#define __TaskbarList_FWD_DEFINED__
typedef struct TaskbarList TaskbarList;
#endif
#ifndef __StartMenuPin_FWD_DEFINED__
#define __StartMenuPin_FWD_DEFINED__
typedef struct StartMenuPin StartMenuPin;
#endif
#ifndef __WebWizardHost_FWD_DEFINED__
#define __WebWizardHost_FWD_DEFINED__
typedef struct WebWizardHost WebWizardHost;
#endif
#ifndef __PublishDropTarget_FWD_DEFINED__
#define __PublishDropTarget_FWD_DEFINED__
typedef struct PublishDropTarget PublishDropTarget;
#endif
#ifndef __PublishingWizard_FWD_DEFINED__
#define __PublishingWizard_FWD_DEFINED__
typedef struct PublishingWizard PublishingWizard;
#endif
#ifndef __InternetPrintOrdering_FWD_DEFINED__
#define __InternetPrintOrdering_FWD_DEFINED__
typedef struct InternetPrintOrdering InternetPrintOrdering;
#endif
#ifndef __FolderViewHost_FWD_DEFINED__
#define __FolderViewHost_FWD_DEFINED__
typedef struct FolderViewHost FolderViewHost;
#endif
#ifndef __ExplorerBrowser_FWD_DEFINED__
#define __ExplorerBrowser_FWD_DEFINED__
typedef struct ExplorerBrowser ExplorerBrowser;
#endif
#ifndef __ImageRecompress_FWD_DEFINED__
#define __ImageRecompress_FWD_DEFINED__
typedef struct ImageRecompress ImageRecompress;
#endif
#ifndef __TrayBandSiteService_FWD_DEFINED__
#define __TrayBandSiteService_FWD_DEFINED__
typedef struct TrayBandSiteService TrayBandSiteService;
#endif
#ifndef __TrayDeskBand_FWD_DEFINED__
#define __TrayDeskBand_FWD_DEFINED__
typedef struct TrayDeskBand TrayDeskBand;
#endif
#ifndef __AttachmentServices_FWD_DEFINED__
#define __AttachmentServices_FWD_DEFINED__
typedef struct AttachmentServices AttachmentServices;
#endif
#ifndef __DocPropShellExtension_FWD_DEFINED__
#define __DocPropShellExtension_FWD_DEFINED__
typedef struct DocPropShellExtension DocPropShellExtension;
#endif
#ifndef __ShellItem_FWD_DEFINED__
#define __ShellItem_FWD_DEFINED__
typedef struct ShellItem ShellItem;
#endif
#ifndef __NamespaceWalker_FWD_DEFINED__
#define __NamespaceWalker_FWD_DEFINED__
typedef struct NamespaceWalker NamespaceWalker;
#endif
#ifndef __FileOperation_FWD_DEFINED__
#define __FileOperation_FWD_DEFINED__
typedef struct FileOperation FileOperation;
#endif
#ifndef __FileOpenDialog_FWD_DEFINED__
#define __FileOpenDialog_FWD_DEFINED__
typedef struct FileOpenDialog FileOpenDialog;
#endif
#ifndef __FileSaveDialog_FWD_DEFINED__
#define __FileSaveDialog_FWD_DEFINED__
typedef struct FileSaveDialog FileSaveDialog;
#endif
#ifndef __KnownFolderManager_FWD_DEFINED__
#define __KnownFolderManager_FWD_DEFINED__
typedef struct KnownFolderManager KnownFolderManager;
#endif
#ifndef __FSCopyHandler_FWD_DEFINED__
#define __FSCopyHandler_FWD_DEFINED__
typedef struct FSCopyHandler FSCopyHandler;
#endif
#ifndef __SharingConfigurationManager_FWD_DEFINED__
#define __SharingConfigurationManager_FWD_DEFINED__
typedef struct SharingConfigurationManager SharingConfigurationManager;
#endif
#ifndef __PreviousVersions_FWD_DEFINED__
#define __PreviousVersions_FWD_DEFINED__
typedef struct PreviousVersions PreviousVersions;
#endif
#ifndef __NetworkConnections_FWD_DEFINED__
#define __NetworkConnections_FWD_DEFINED__
typedef struct NetworkConnections NetworkConnections;
#endif
#ifndef __NamespaceTreeControl_FWD_DEFINED__
#define __NamespaceTreeControl_FWD_DEFINED__
typedef struct NamespaceTreeControl NamespaceTreeControl;
#endif
#ifndef __IENamespaceTreeControl_FWD_DEFINED__
#define __IENamespaceTreeControl_FWD_DEFINED__
typedef struct IENamespaceTreeControl IENamespaceTreeControl;
#endif
#ifndef __ScheduledTasks_FWD_DEFINED__
#define __ScheduledTasks_FWD_DEFINED__
typedef struct ScheduledTasks ScheduledTasks;
#endif
#ifndef __ApplicationAssociationRegistration_FWD_DEFINED__
#define __ApplicationAssociationRegistration_FWD_DEFINED__
typedef struct ApplicationAssociationRegistration ApplicationAssociationRegistration;
#endif
#ifndef __ApplicationAssociationRegistrationUI_FWD_DEFINED__
#define __ApplicationAssociationRegistrationUI_FWD_DEFINED__
typedef struct ApplicationAssociationRegistrationUI ApplicationAssociationRegistrationUI;
#endif
#ifndef __SearchFolderItemFactory_FWD_DEFINED__
#define __SearchFolderItemFactory_FWD_DEFINED__
typedef struct SearchFolderItemFactory SearchFolderItemFactory;
#endif
#ifndef __OpenControlPanel_FWD_DEFINED__
#define __OpenControlPanel_FWD_DEFINED__
typedef struct OpenControlPanel OpenControlPanel;
#endif
#ifndef __MailRecipient_FWD_DEFINED__
#define __MailRecipient_FWD_DEFINED__
typedef struct MailRecipient MailRecipient;
#endif
#ifndef __NetworkExplorerFolder_FWD_DEFINED__
#define __NetworkExplorerFolder_FWD_DEFINED__
typedef struct NetworkExplorerFolder NetworkExplorerFolder;
#endif
#ifndef __DestinationList_FWD_DEFINED__
#define __DestinationList_FWD_DEFINED__
typedef struct DestinationList DestinationList;
#endif
#ifndef __ApplicationDestinations_FWD_DEFINED__
#define __ApplicationDestinations_FWD_DEFINED__
typedef struct ApplicationDestinations ApplicationDestinations;
#endif
#ifndef __ApplicationDocumentLists_FWD_DEFINED__
#define __ApplicationDocumentLists_FWD_DEFINED__
typedef struct ApplicationDocumentLists ApplicationDocumentLists;
#endif
#ifndef __HomeGroup_FWD_DEFINED__
#define __HomeGroup_FWD_DEFINED__
typedef struct HomeGroup HomeGroup;
#endif
#ifndef __ShellLibrary_FWD_DEFINED__
#define __ShellLibrary_FWD_DEFINED__
typedef struct ShellLibrary ShellLibrary;
#endif
#ifndef __AppStartupLink_FWD_DEFINED__
#define __AppStartupLink_FWD_DEFINED__
typedef struct AppStartupLink AppStartupLink;
#endif
#ifndef __EnumerableObjectCollection_FWD_DEFINED__
#define __EnumerableObjectCollection_FWD_DEFINED__
typedef struct EnumerableObjectCollection EnumerableObjectCollection;
#endif
#ifndef __DesktopGadget_FWD_DEFINED__
#define __DesktopGadget_FWD_DEFINED__
typedef struct DesktopGadget DesktopGadget;
#endif
#ifndef __IAssocHandlerInvoker_FWD_DEFINED__
#define __IAssocHandlerInvoker_FWD_DEFINED__
typedef interface IAssocHandlerInvoker IAssocHandlerInvoker;
#endif
#ifndef __IAssocHandler_FWD_DEFINED__
#define __IAssocHandler_FWD_DEFINED__
typedef interface IAssocHandler IAssocHandler;
#endif
#ifndef __IEnumAssocHandlers_FWD_DEFINED__
#define __IEnumAssocHandlers_FWD_DEFINED__
typedef interface IEnumAssocHandlers IEnumAssocHandlers;
#endif
#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "docobj.h"
#include "shtypes.h"
#include "comcat.h"
#include "propidl.h"
#include "prsht.h"
#include "propsys.h"
#include "ObjectArray.h"
#include <sherrors.h>
#ifndef SHSTDAPI
#if defined(_SHELL32_)
#define SHSTDAPI          STDAPI
#define SHSTDAPI_(type)   STDAPI_(type)
#else
#define SHSTDAPI          extern DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define SHSTDAPI_(type)   extern DECLSPEC_IMPORT type STDAPICALLTYPE
#endif
#endif
#define CMF_NORMAL              0x00000000
#define CMF_DEFAULTONLY         0x00000001
#define CMF_VERBSONLY           0x00000002
#define CMF_EXPLORE             0x00000004
#define CMF_NOVERBS             0x00000008
#define CMF_CANRENAME           0x00000010
#define CMF_NODEFAULT           0x00000020
#if (NTDDI_VERSION < NTDDI_VISTA)
#define CMF_INCLUDESTATIC       0x00000040
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define CMF_ITEMMENU            0x00000080
#endif
#define CMF_EXTENDEDVERBS       0x00000100
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define CMF_DISABLEDVERBS       0x00000200
#endif
#define CMF_ASYNCVERBSTATE      0x00000400
#define CMF_OPTIMIZEFORINVOKE   0x00000800
#define CMF_SYNCCASCADEMENU     0x00001000
#define CMF_DONOTPICKDEFAULT    0x00002000
#define CMF_RESERVED            0xffff0000
#define GCS_VERBA        0x00000000
#define GCS_HELPTEXTA    0x00000001
#define GCS_VALIDATEA    0x00000002
#define GCS_VERBW        0x00000004
#define GCS_HELPTEXTW    0x00000005
#define GCS_VALIDATEW    0x00000006
#define GCS_VERBICONW    0x00000014
#define GCS_UNICODE      0x00000004
#ifdef UNICODE
#define GCS_VERB        GCS_VERBW
#define GCS_HELPTEXT    GCS_HELPTEXTW
#define GCS_VALIDATE    GCS_VALIDATEW
#else
#define GCS_VERB        GCS_VERBA
#define GCS_HELPTEXT    GCS_HELPTEXTA
#define GCS_VALIDATE    GCS_VALIDATEA
#endif
#define CMDSTR_NEWFOLDERA   "NewFolder"
#define CMDSTR_VIEWLISTA    "ViewList"
#define CMDSTR_VIEWDETAILSA "ViewDetails"
#define CMDSTR_NEWFOLDERW   L"NewFolder"
#define CMDSTR_VIEWLISTW    L"ViewList"
#define CMDSTR_VIEWDETAILSW L"ViewDetails"
#ifdef UNICODE
#define CMDSTR_NEWFOLDER    CMDSTR_NEWFOLDERW
#define CMDSTR_VIEWLIST     CMDSTR_VIEWLISTW
#define CMDSTR_VIEWDETAILS  CMDSTR_VIEWDETAILSW
#else
#define CMDSTR_NEWFOLDER    CMDSTR_NEWFOLDERA
#define CMDSTR_VIEWLIST     CMDSTR_VIEWLISTA
#define CMDSTR_VIEWDETAILS  CMDSTR_VIEWDETAILSA
#endif
#define CMIC_MASK_HOTKEY        SEE_MASK_HOTKEY
#define CMIC_MASK_ICON          SEE_MASK_ICON
#define CMIC_MASK_FLAG_NO_UI    SEE_MASK_FLAG_NO_UI
#define CMIC_MASK_UNICODE       SEE_MASK_UNICODE
#define CMIC_MASK_NO_CONSOLE    SEE_MASK_NO_CONSOLE
#if (NTDDI_VERSION < NTDDI_VISTA)
#define CMIC_MASK_HASLINKNAME   SEE_MASK_HASLINKNAME
#define CMIC_MASK_HASTITLE      SEE_MASK_HASTITLE
#endif
#define CMIC_MASK_FLAG_SEP_VDM  SEE_MASK_FLAG_SEPVDM
#define CMIC_MASK_ASYNCOK       SEE_MASK_ASYNCOK
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define CMIC_MASK_NOASYNC       SEE_MASK_NOASYNC
#endif
#if (_WIN32_IE >= _WIN32_IE_IE501)
#define CMIC_MASK_SHIFT_DOWN    0x10000000
#define CMIC_MASK_CONTROL_DOWN  0x40000000
#endif
#if (_WIN32_IE >= 0x0560)
#define CMIC_MASK_FLAG_LOG_USAGE SEE_MASK_FLAG_LOG_USAGE
#define CMIC_MASK_NOZONECHECKS  SEE_MASK_NOZONECHECKS
#endif
#if (_WIN32_IE >= _WIN32_IE_IE40)
#define CMIC_MASK_PTINVOKE      0x20000000
#endif
#include <pshpack8.h>
typedef struct _CMINVOKECOMMANDINFO
{
	DWORD cbSize;
	DWORD fMask;
	HWND hwnd;
	LPCSTR lpVerb;
	LPCSTR lpParameters;
	LPCSTR lpDirectory;
	int nShow;
	DWORD dwHotKey;
	HANDLE hIcon;
} CMINVOKECOMMANDINFO;
typedef CMINVOKECOMMANDINFO *LPCMINVOKECOMMANDINFO;
typedef const CMINVOKECOMMANDINFO *PCCMINVOKECOMMANDINFO;
#if (_WIN32_IE >= _WIN32_IE_IE40)
typedef struct _CMINVOKECOMMANDINFOEX
{
	DWORD cbSize;
	DWORD fMask;
	HWND hwnd;
	LPCSTR lpVerb;
	LPCSTR lpParameters;
	LPCSTR lpDirectory;
	int nShow;
	DWORD dwHotKey;
	HANDLE hIcon;
	LPCSTR lpTitle;
	LPCWSTR lpVerbW;
	LPCWSTR lpParametersW;
	LPCWSTR lpDirectoryW;
	LPCWSTR lpTitleW;
	POINT ptInvoke;
} CMINVOKECOMMANDINFOEX;
#else
typedef struct _PRE_IE4_CMINVOKECOMMANDINFOEX
{
	DWORD cbSize;
	DWORD fMask;
	HWND hwnd;
	LPCSTR lpVerb;
	LPCSTR lpParameters;
	LPCSTR lpDirectory;
	int nShow;
	DWORD dwHotKey;
	HANDLE hIcon;
	LPCSTR lpTitle;
	LPCWSTR lpVerbW;
	LPCWSTR lpParametersW;
	LPCWSTR lpDirectoryW;
	LPCWSTR lpTitleW;
} CMINVOKECOMMANDINFOEX;
#endif
typedef CMINVOKECOMMANDINFOEX *LPCMINVOKECOMMANDINFOEX;
typedef const CMINVOKECOMMANDINFOEX *PCCMINVOKECOMMANDINFOEX;
#include <poppack.h>
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0000_v0_0_s_ifspec;
#ifndef __IContextMenu_INTERFACE_DEFINED__
#define __IContextMenu_INTERFACE_DEFINED__
extern const IID IID_IContextMenu;
typedef struct IContextMenuVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IContextMenu * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IContextMenu * This);
	ULONG(STDMETHODCALLTYPE * Release) (IContextMenu * This);
	HRESULT(STDMETHODCALLTYPE * QueryContextMenu) (IContextMenu * This, HMENU hmenu, UINT indexMenu, UINT idCmdFirst, UINT idCmdLast, UINT uFlags);
	HRESULT(STDMETHODCALLTYPE * InvokeCommand) (IContextMenu * This, CMINVOKECOMMANDINFO * pici);
	HRESULT(STDMETHODCALLTYPE * GetCommandString) (IContextMenu * This, UINT_PTR idCmd, UINT uType, UINT * pReserved, LPSTR pszName, UINT cchMax);
	END_INTERFACE
}  IContextMenuVtbl;
interface IContextMenu
{
	CONST_VTBL struct IContextMenuVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextMenu_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContextMenu_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IContextMenu_Release(This)( (This)->lpVtbl -> Release(This) )
#define IContextMenu_QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags)( (This)->lpVtbl -> QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags) )
#define IContextMenu_InvokeCommand(This,pici)( (This)->lpVtbl -> InvokeCommand(This,pici) )
#define IContextMenu_GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax)( (This)->lpVtbl -> GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax) )
#endif
#endif
typedef IContextMenu *LPCONTEXTMENU;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0001_v0_0_s_ifspec;
#ifndef __IContextMenu2_INTERFACE_DEFINED__
#define __IContextMenu2_INTERFACE_DEFINED__
extern const IID IID_IContextMenu2;
typedef struct IContextMenu2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IContextMenu2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IContextMenu2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IContextMenu2 * This);
	HRESULT(STDMETHODCALLTYPE * QueryContextMenu) (IContextMenu2 * This, HMENU hmenu, UINT indexMenu, UINT idCmdFirst, UINT idCmdLast, UINT uFlags);
	HRESULT(STDMETHODCALLTYPE * InvokeCommand) (IContextMenu2 * This, CMINVOKECOMMANDINFO * pici);
	HRESULT(STDMETHODCALLTYPE * GetCommandString) (IContextMenu2 * This, UINT_PTR idCmd, UINT uType, UINT * pReserved, LPSTR pszName, UINT cchMax);
	HRESULT(STDMETHODCALLTYPE * HandleMenuMsg) (IContextMenu2 * This, UINT uMsg, WPARAM wParam, LPARAM lParam);
	END_INTERFACE
}  IContextMenu2Vtbl;
interface IContextMenu2
{
	CONST_VTBL struct IContextMenu2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextMenu2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContextMenu2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IContextMenu2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IContextMenu2_QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags)( (This)->lpVtbl -> QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags) )
#define IContextMenu2_InvokeCommand(This,pici)( (This)->lpVtbl -> InvokeCommand(This,pici) )
#define IContextMenu2_GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax)( (This)->lpVtbl -> GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax) )
#define IContextMenu2_HandleMenuMsg(This,uMsg,wParam,lParam)( (This)->lpVtbl -> HandleMenuMsg(This,uMsg,wParam,lParam) )
#endif
#endif
typedef IContextMenu2 *LPCONTEXTMENU2;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0002_v0_0_s_ifspec;
#ifndef __IContextMenu3_INTERFACE_DEFINED__
#define __IContextMenu3_INTERFACE_DEFINED__
extern const IID IID_IContextMenu3;
typedef struct IContextMenu3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IContextMenu3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IContextMenu3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IContextMenu3 * This);
	HRESULT(STDMETHODCALLTYPE * QueryContextMenu) (IContextMenu3 * This, HMENU hmenu, UINT indexMenu, UINT idCmdFirst, UINT idCmdLast, UINT uFlags);
	HRESULT(STDMETHODCALLTYPE * InvokeCommand) (IContextMenu3 * This, CMINVOKECOMMANDINFO * pici);
	HRESULT(STDMETHODCALLTYPE * GetCommandString) (IContextMenu3 * This, UINT_PTR idCmd, UINT uType, UINT * pReserved, LPSTR pszName, UINT cchMax);
	HRESULT(STDMETHODCALLTYPE * HandleMenuMsg) (IContextMenu3 * This, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * HandleMenuMsg2) (IContextMenu3 * This, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT * plResult);
	END_INTERFACE
}  IContextMenu3Vtbl;
interface IContextMenu3
{
	CONST_VTBL struct IContextMenu3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextMenu3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContextMenu3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IContextMenu3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IContextMenu3_QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags)( (This)->lpVtbl -> QueryContextMenu(This,hmenu,indexMenu,idCmdFirst,idCmdLast,uFlags) )
#define IContextMenu3_InvokeCommand(This,pici)( (This)->lpVtbl -> InvokeCommand(This,pici) )
#define IContextMenu3_GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax)( (This)->lpVtbl -> GetCommandString(This,idCmd,uType,pReserved,pszName,cchMax) )
#define IContextMenu3_HandleMenuMsg(This,uMsg,wParam,lParam)( (This)->lpVtbl -> HandleMenuMsg(This,uMsg,wParam,lParam) )
#define IContextMenu3_HandleMenuMsg2(This,uMsg,wParam,lParam,plResult)( (This)->lpVtbl -> HandleMenuMsg2(This,uMsg,wParam,lParam,plResult) )
#endif
#endif
typedef IContextMenu3 *LPCONTEXTMENU3;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0003_v0_0_s_ifspec;
#ifndef __IExecuteCommand_INTERFACE_DEFINED__
#define __IExecuteCommand_INTERFACE_DEFINED__
extern const IID IID_IExecuteCommand;
typedef struct IExecuteCommandVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IExecuteCommand * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExecuteCommand * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExecuteCommand * This);
	HRESULT(STDMETHODCALLTYPE * SetKeyState) (IExecuteCommand * This, DWORD grfKeyState);
	HRESULT(STDMETHODCALLTYPE * SetParameters) (IExecuteCommand * This, LPCWSTR pszParameters);
	HRESULT(STDMETHODCALLTYPE * SetPosition) (IExecuteCommand * This, POINT pt);
	HRESULT(STDMETHODCALLTYPE * SetShowWindow) (IExecuteCommand * This, int nShow);
	HRESULT(STDMETHODCALLTYPE * SetNoShowUI) (IExecuteCommand * This, BOOL fNoShowUI);
	HRESULT(STDMETHODCALLTYPE * SetDirectory) (IExecuteCommand * This, LPCWSTR pszDirectory);
	HRESULT(STDMETHODCALLTYPE * Execute) (IExecuteCommand * This);
	END_INTERFACE
}  IExecuteCommandVtbl;
interface IExecuteCommand
{
	CONST_VTBL struct IExecuteCommandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExecuteCommand_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExecuteCommand_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IExecuteCommand_Release(This)( (This)->lpVtbl -> Release(This) )
#define IExecuteCommand_SetKeyState(This,grfKeyState)( (This)->lpVtbl -> SetKeyState(This,grfKeyState) )
#define IExecuteCommand_SetParameters(This,pszParameters)( (This)->lpVtbl -> SetParameters(This,pszParameters) )
#define IExecuteCommand_SetPosition(This,pt)( (This)->lpVtbl -> SetPosition(This,pt) )
#define IExecuteCommand_SetShowWindow(This,nShow)( (This)->lpVtbl -> SetShowWindow(This,nShow) )
#define IExecuteCommand_SetNoShowUI(This,fNoShowUI)( (This)->lpVtbl -> SetNoShowUI(This,fNoShowUI) )
#define IExecuteCommand_SetDirectory(This,pszDirectory)( (This)->lpVtbl -> SetDirectory(This,pszDirectory) )
#define IExecuteCommand_Execute(This)( (This)->lpVtbl -> Execute(This) )
#endif
#endif
#ifndef __IPersistFolder_INTERFACE_DEFINED__
#define __IPersistFolder_INTERFACE_DEFINED__
extern const IID IID_IPersistFolder;
typedef struct IPersistFolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPersistFolder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPersistFolder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPersistFolder * This);
	HRESULT(STDMETHODCALLTYPE * GetClassID) (IPersistFolder * This, CLSID * pClassID);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IPersistFolder * This, PCIDLIST_ABSOLUTE pidl);
	END_INTERFACE
}  IPersistFolderVtbl;
interface IPersistFolder
{
	CONST_VTBL struct IPersistFolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistFolder_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistFolder_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPersistFolder_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPersistFolder_GetClassID(This,pClassID)( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IPersistFolder_Initialize(This,pidl)( (This)->lpVtbl -> Initialize(This,pidl) )
#endif
#endif
typedef IPersistFolder *LPPERSISTFOLDER;
#if (_WIN32_IE >= 0x0400)
#define IRTIR_TASK_NOT_RUNNING   0
#define IRTIR_TASK_RUNNING       1
#define IRTIR_TASK_SUSPENDED     2
#define IRTIR_TASK_PENDING       3
#define IRTIR_TASK_FINISHED      4
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0005_v0_0_s_ifspec;
#ifndef __IRunnableTask_INTERFACE_DEFINED__
#define __IRunnableTask_INTERFACE_DEFINED__
extern const IID IID_IRunnableTask;
typedef struct IRunnableTaskVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRunnableTask * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRunnableTask * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRunnableTask * This);
	HRESULT(STDMETHODCALLTYPE * Run) (IRunnableTask * This);
	HRESULT(STDMETHODCALLTYPE * Kill) (IRunnableTask * This, BOOL bWait);
	HRESULT(STDMETHODCALLTYPE * Suspend) (IRunnableTask * This);
	HRESULT(STDMETHODCALLTYPE * Resume) (IRunnableTask * This);
	ULONG(STDMETHODCALLTYPE * IsRunning) (IRunnableTask * This);
	END_INTERFACE
}  IRunnableTaskVtbl;
interface IRunnableTask
{
	CONST_VTBL struct IRunnableTaskVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRunnableTask_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRunnableTask_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IRunnableTask_Release(This)( (This)->lpVtbl -> Release(This) )
#define IRunnableTask_Run(This)( (This)->lpVtbl -> Run(This) )
#define IRunnableTask_Kill(This,bWait)( (This)->lpVtbl -> Kill(This,bWait) )
#define IRunnableTask_Suspend(This)( (This)->lpVtbl -> Suspend(This) )
#define IRunnableTask_Resume(This)( (This)->lpVtbl -> Resume(This) )
#define IRunnableTask_IsRunning(This)( (This)->lpVtbl -> IsRunning(This) )
#endif
#endif
#define TOID_NULL                    GUID_NULL
#define ITSAT_DEFAULT_LPARAM         ((DWORD_PTR)-1)
#define ITSAT_DEFAULT_PRIORITY       0x10000000
#define ITSAT_MAX_PRIORITY           0x7fffffff
#define ITSAT_MIN_PRIORITY           0x00000000
#define ITSSFLAG_COMPLETE_ON_DESTROY 0x0000
#define ITSSFLAG_KILL_ON_DESTROY     0x0001
#define ITSSFLAG_FLAGS_MASK          0x0003
#define ITSS_THREAD_DESTROY_DEFAULT_TIMEOUT  (10*1000)
#define ITSS_THREAD_TERMINATE_TIMEOUT        (INFINITE)
#define ITSS_THREAD_TIMEOUT_NO_CHANGE        (INFINITE - 1)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0006_v0_0_s_ifspec;
#ifndef __IShellTaskScheduler_INTERFACE_DEFINED__
#define __IShellTaskScheduler_INTERFACE_DEFINED__
extern const IID IID_IShellTaskScheduler;
typedef struct IShellTaskSchedulerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellTaskScheduler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellTaskScheduler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellTaskScheduler * This);
	HRESULT(STDMETHODCALLTYPE * AddTask) (IShellTaskScheduler * This, IRunnableTask * prt, REFTASKOWNERID rtoid, DWORD_PTR lParam, DWORD dwPriority);
	HRESULT(STDMETHODCALLTYPE * RemoveTasks) (IShellTaskScheduler * This, REFTASKOWNERID rtoid, DWORD_PTR lParam, BOOL bWaitIfRunning);
	UINT(STDMETHODCALLTYPE * CountTasks) (IShellTaskScheduler * This, REFTASKOWNERID rtoid);
	HRESULT(STDMETHODCALLTYPE * Status) (IShellTaskScheduler * This, DWORD dwReleaseStatus, DWORD dwThreadTimeout);
	END_INTERFACE
}  IShellTaskSchedulerVtbl;
interface IShellTaskScheduler
{
	CONST_VTBL struct IShellTaskSchedulerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellTaskScheduler_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellTaskScheduler_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellTaskScheduler_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellTaskScheduler_AddTask(This,prt,rtoid,lParam,dwPriority)( (This)->lpVtbl -> AddTask(This,prt,rtoid,lParam,dwPriority) )
#define IShellTaskScheduler_RemoveTasks(This,rtoid,lParam,bWaitIfRunning)( (This)->lpVtbl -> RemoveTasks(This,rtoid,lParam,bWaitIfRunning) )
#define IShellTaskScheduler_CountTasks(This,rtoid)( (This)->lpVtbl -> CountTasks(This,rtoid) )
#define IShellTaskScheduler_Status(This,dwReleaseStatus,dwThreadTimeout)( (This)->lpVtbl -> Status(This,dwReleaseStatus,dwThreadTimeout) )
#endif
#endif
#define SID_ShellTaskScheduler IID_IShellTaskScheduler
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0007_v0_0_s_ifspec;
#ifndef __IQueryCodePage_INTERFACE_DEFINED__
#define __IQueryCodePage_INTERFACE_DEFINED__
extern const IID IID_IQueryCodePage;
typedef struct IQueryCodePageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IQueryCodePage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IQueryCodePage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IQueryCodePage * This);
	HRESULT(STDMETHODCALLTYPE * GetCodePage) (IQueryCodePage * This, UINT * puiCodePage);
	HRESULT(STDMETHODCALLTYPE * SetCodePage) (IQueryCodePage * This, UINT uiCodePage);
	END_INTERFACE
}  IQueryCodePageVtbl;
interface IQueryCodePage
{
	CONST_VTBL struct IQueryCodePageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IQueryCodePage_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IQueryCodePage_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IQueryCodePage_Release(This)( (This)->lpVtbl -> Release(This) )
#define IQueryCodePage_GetCodePage(This,puiCodePage)( (This)->lpVtbl -> GetCodePage(This,puiCodePage) )
#define IQueryCodePage_SetCodePage(This,uiCodePage)( (This)->lpVtbl -> SetCodePage(This,uiCodePage) )
#endif
#endif
#ifndef __IPersistFolder2_INTERFACE_DEFINED__
#define __IPersistFolder2_INTERFACE_DEFINED__
extern const IID IID_IPersistFolder2;
typedef struct IPersistFolder2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPersistFolder2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPersistFolder2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPersistFolder2 * This);
	HRESULT(STDMETHODCALLTYPE * GetClassID) (IPersistFolder2 * This, CLSID * pClassID);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IPersistFolder2 * This, PCIDLIST_ABSOLUTE pidl);
	HRESULT(STDMETHODCALLTYPE * GetCurFolder) (IPersistFolder2 * This, PIDLIST_ABSOLUTE * ppidl);
	END_INTERFACE
}  IPersistFolder2Vtbl;
interface IPersistFolder2
{
	CONST_VTBL struct IPersistFolder2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistFolder2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistFolder2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPersistFolder2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPersistFolder2_GetClassID(This,pClassID)( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IPersistFolder2_Initialize(This,pidl)( (This)->lpVtbl -> Initialize(This,pidl) )
#define IPersistFolder2_GetCurFolder(This,ppidl)( (This)->lpVtbl -> GetCurFolder(This,ppidl) )
#endif
#endif
#endif
#if (_WIN32_IE >= 0x0500)
#define CSIDL_FLAG_PFTI_TRACKTARGET CSIDL_FLAG_DONT_VERIFY
#include <pshpack8.h>
typedef struct _PERSIST_FOLDER_TARGET_INFO
{
	PIDLIST_ABSOLUTE pidlTargetFolder;
	WCHAR szTargetParsingName[260];
	WCHAR szNetworkProvider[260];
	DWORD dwAttributes;
	int csidl;
} PERSIST_FOLDER_TARGET_INFO;
#include <poppack.h>
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0009_v0_0_s_ifspec;
#ifndef __IPersistFolder3_INTERFACE_DEFINED__
#define __IPersistFolder3_INTERFACE_DEFINED__
extern const IID IID_IPersistFolder3;
typedef struct IPersistFolder3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPersistFolder3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPersistFolder3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPersistFolder3 * This);
	HRESULT(STDMETHODCALLTYPE * GetClassID) (IPersistFolder3 * This, CLSID * pClassID);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IPersistFolder3 * This, PCIDLIST_ABSOLUTE pidl);
	HRESULT(STDMETHODCALLTYPE * GetCurFolder) (IPersistFolder3 * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * InitializeEx) (IPersistFolder3 * This, IBindCtx * pbc, PCIDLIST_ABSOLUTE pidlRoot, const PERSIST_FOLDER_TARGET_INFO * ppfti);
	HRESULT(STDMETHODCALLTYPE * GetFolderTargetInfo) (IPersistFolder3 * This, PERSIST_FOLDER_TARGET_INFO * ppfti);
	END_INTERFACE
}  IPersistFolder3Vtbl;
interface IPersistFolder3
{
	CONST_VTBL struct IPersistFolder3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistFolder3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistFolder3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPersistFolder3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPersistFolder3_GetClassID(This,pClassID)( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IPersistFolder3_Initialize(This,pidl)( (This)->lpVtbl -> Initialize(This,pidl) )
#define IPersistFolder3_GetCurFolder(This,ppidl)( (This)->lpVtbl -> GetCurFolder(This,ppidl) )
#define IPersistFolder3_InitializeEx(This,pbc,pidlRoot,ppfti)( (This)->lpVtbl -> InitializeEx(This,pbc,pidlRoot,ppfti) )
#define IPersistFolder3_GetFolderTargetInfo(This,ppfti)( (This)->lpVtbl -> GetFolderTargetInfo(This,ppfti) )
#endif
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0010_v0_0_s_ifspec;
#ifndef __IPersistIDList_INTERFACE_DEFINED__
#define __IPersistIDList_INTERFACE_DEFINED__
extern const IID IID_IPersistIDList;
typedef struct IPersistIDListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPersistIDList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPersistIDList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPersistIDList * This);
	HRESULT(STDMETHODCALLTYPE * GetClassID) (IPersistIDList * This, CLSID * pClassID);
	HRESULT(STDMETHODCALLTYPE * SetIDList) (IPersistIDList * This, PCIDLIST_ABSOLUTE pidl);
	HRESULT(STDMETHODCALLTYPE * GetIDList) (IPersistIDList * This, PIDLIST_ABSOLUTE * ppidl);
	END_INTERFACE
}  IPersistIDListVtbl;
interface IPersistIDList
{
	CONST_VTBL struct IPersistIDListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistIDList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistIDList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPersistIDList_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPersistIDList_GetClassID(This,pClassID)( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IPersistIDList_SetIDList(This,pidl)( (This)->lpVtbl -> SetIDList(This,pidl) )
#define IPersistIDList_GetIDList(This,ppidl)( (This)->lpVtbl -> GetIDList(This,ppidl) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0011_v0_0_s_ifspec;
#ifndef __IEnumIDList_INTERFACE_DEFINED__
#define __IEnumIDList_INTERFACE_DEFINED__
extern const IID IID_IEnumIDList;
typedef struct IEnumIDListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumIDList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumIDList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumIDList * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumIDList * This, ULONG celt, PITEMID_CHILD * rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumIDList * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumIDList * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumIDList * This, IEnumIDList ** ppenum);
	END_INTERFACE
}  IEnumIDListVtbl;
interface IEnumIDList
{
	CONST_VTBL struct IEnumIDListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumIDList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumIDList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumIDList_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumIDList_Next(This,celt,rgelt,pceltFetched)( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumIDList_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumIDList_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumIDList_Clone(This,ppenum)( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumIDList_RemoteNext_Proxy(IEnumIDList *This, ULONG celt, PITEMID_CHILD *rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumIDList_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
typedef IEnumIDList *LPENUMIDLIST;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0012_v0_0_s_ifspec;
#ifndef __IEnumFullIDList_INTERFACE_DEFINED__
#define __IEnumFullIDList_INTERFACE_DEFINED__
extern const IID IID_IEnumFullIDList;
typedef struct IEnumFullIDListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumFullIDList *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumFullIDList *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumFullIDList *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumFullIDList *This, ULONG celt, PIDLIST_ABSOLUTE *rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumFullIDList *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumFullIDList *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumFullIDList *This, IEnumFullIDList **ppenum);
	END_INTERFACE
}  IEnumFullIDListVtbl;
interface IEnumFullIDList
{
	CONST_VTBL struct IEnumFullIDListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumFullIDList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumFullIDList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumFullIDList_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumFullIDList_Next(This,celt,rgelt,pceltFetched)( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumFullIDList_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumFullIDList_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumFullIDList_Clone(This,ppenum)( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumFullIDList_RemoteNext_Proxy(IEnumFullIDList *This, ULONG celt, PIDLIST_ABSOLUTE *rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumFullIDList_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
enum _SHGDNF
{
	SHGDN_NORMAL = 0,
	SHGDN_INFOLDER = 0x1,
	SHGDN_FOREDITING = 0x1000,
	SHGDN_FORADDRESSBAR = 0x4000,
	SHGDN_FORPARSING = 0x8000
};
typedef DWORD SHGDNF;
enum _SHCONTF
{
	SHCONTF_CHECKING_FOR_CHILDREN = 0x10,
	SHCONTF_FOLDERS = 0x20,
	SHCONTF_NONFOLDERS = 0x40,
	SHCONTF_INCLUDEHIDDEN = 0x80,
	SHCONTF_INIT_ON_FIRST_NEXT = 0x100,
	SHCONTF_NETPRINTERSRCH = 0x200,
	SHCONTF_SHAREABLE = 0x400,
	SHCONTF_STORAGE = 0x800,
	SHCONTF_NAVIGATION_ENUM = 0x1000,
	SHCONTF_FASTITEMS = 0x2000,
	SHCONTF_FLATLIST = 0x4000,
	SHCONTF_ENABLE_ASYNC = 0x8000,
	SHCONTF_INCLUDESUPERHIDDEN = 0x10000
};
typedef DWORD SHCONTF;
#define SHCIDS_ALLFIELDS        0x80000000L
#define SHCIDS_CANONICALONLY    0x10000000L
#define SHCIDS_BITMASK          0xFFFF0000L
#define SHCIDS_COLUMNMASK       0x0000FFFFL
#define SFGAO_CANCOPY           DROPEFFECT_COPY
#define SFGAO_CANMOVE           DROPEFFECT_MOVE
#define SFGAO_CANLINK           DROPEFFECT_LINK
#define SFGAO_STORAGE           0x00000008L
#define SFGAO_CANRENAME         0x00000010L
#define SFGAO_CANDELETE         0x00000020L
#define SFGAO_HASPROPSHEET      0x00000040L
#define SFGAO_DROPTARGET        0x00000100L
#define SFGAO_CAPABILITYMASK    0x00000177L
#define SFGAO_SYSTEM            0x00001000L
#define SFGAO_ENCRYPTED         0x00002000L
#define SFGAO_ISSLOW            0x00004000L
#define SFGAO_GHOSTED           0x00008000L
#define SFGAO_LINK              0x00010000L
#define SFGAO_SHARE             0x00020000L
#define SFGAO_READONLY          0x00040000L
#define SFGAO_HIDDEN            0x00080000L
#define SFGAO_DISPLAYATTRMASK   0x000FC000L
#define SFGAO_FILESYSANCESTOR   0x10000000L
#define SFGAO_FOLDER            0x20000000L
#define SFGAO_FILESYSTEM        0x40000000L
#define SFGAO_HASSUBFOLDER      0x80000000L
#define SFGAO_CONTENTSMASK      0x80000000L
#define SFGAO_VALIDATE          0x01000000L
#define SFGAO_REMOVABLE         0x02000000L
#define SFGAO_COMPRESSED        0x04000000L
#define SFGAO_BROWSABLE         0x08000000L
#define SFGAO_NONENUMERATED     0x00100000L
#define SFGAO_NEWCONTENT        0x00200000L
#define SFGAO_CANMONIKER        0x00400000L
#define SFGAO_HASSTORAGE        0x00400000L
#define SFGAO_STREAM            0x00400000L
#define SFGAO_STORAGEANCESTOR   0x00800000L
#define SFGAO_STORAGECAPMASK    0x70C50008L
#define SFGAO_PKEYSFGAOMASK     0x81044000L
typedef ULONG SFGAOF;
#define STR_BIND_FORCE_FOLDER_SHORTCUT_RESOLVE   L"Force Folder Shortcut Resolve"
#define STR_AVOID_DRIVE_RESTRICTION_POLICY   L"Avoid Drive Restriction Policy"
#define STR_AVOID_DRIVE_RESTRICTION_POLICY   L"Avoid Drive Restriction Policy"
#define STR_SKIP_BINDING_CLSID      L"Skip Binding CLSID"
#define STR_PARSE_PREFER_FOLDER_BROWSING     L"Parse Prefer Folder Browsing"
#define STR_DONT_PARSE_RELATIVE              L"Don't Parse Relative"
#define STR_PARSE_TRANSLATE_ALIASES          L"Parse Translate Aliases"
#define STR_PARSE_SKIP_NET_CACHE             L"Skip Net Resource Cache"
#define STR_PARSE_SHELL_PROTOCOL_TO_FILE_OBJECTS     L"Parse Shell Protocol To File Objects"
#if (_WIN32_IE >= 0x0700)
#define STR_TRACK_CLSID                      L"Track the CLSID"
#define STR_INTERNAL_NAVIGATE                L"Internal Navigation"
#define STR_PARSE_PROPERTYSTORE             L"DelegateNamedProperties"
#define STR_NO_VALIDATE_FILENAME_CHARS      L"NoValidateFilenameChars"
#define STR_BIND_DELEGATE_CREATE_OBJECT L"Delegate Object Creation"
#define STR_PARSE_ALLOW_INTERNET_SHELL_FOLDERS   L"Allow binding to Internet shell folder handlers and negate STR_PARSE_PREFER_WEB_BROWSING"
#define STR_PARSE_PREFER_WEB_BROWSING   L"Do not bind to Internet shell folder handlers"
#define STR_PARSE_SHOW_NET_DIAGNOSTICS_UI  L"Show network diagnostics UI"
#define STR_PARSE_DONT_REQUIRE_VALIDATED_URLS  L"Do not require validated URLs"
#define STR_INTERNETFOLDER_PARSE_ONLY_URLMON_BINDABLE  L"Validate URL"
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define STR_BIND_FOLDERS_READ_ONLY L"Folders As Read Only"
#define STR_BIND_FOLDER_ENUM_MODE L"Folder Enum Mode"
typedef enum FOLDER_ENUM_MODE
{
	FEM_VIEWRESULT = 0,
	FEM_NAVIGATION = 1
} FOLDER_ENUM_MODE;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0013_v0_0_s_ifspec;
#ifndef __IObjectWithFolderEnumMode_INTERFACE_DEFINED__
#define __IObjectWithFolderEnumMode_INTERFACE_DEFINED__
extern const IID IID_IObjectWithFolderEnumMode;
typedef struct IObjectWithFolderEnumModeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IObjectWithFolderEnumMode *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IObjectWithFolderEnumMode *This);
	ULONG(STDMETHODCALLTYPE *Release) (IObjectWithFolderEnumMode *This);
	HRESULT(STDMETHODCALLTYPE *SetMode) (IObjectWithFolderEnumMode *This, FOLDER_ENUM_MODE feMode);
	HRESULT(STDMETHODCALLTYPE *GetMode) (IObjectWithFolderEnumMode *This, FOLDER_ENUM_MODE *pfeMode);
	END_INTERFACE
}  IObjectWithFolderEnumModeVtbl;
interface IObjectWithFolderEnumMode
{
	CONST_VTBL struct IObjectWithFolderEnumModeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectWithFolderEnumMode_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectWithFolderEnumMode_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectWithFolderEnumMode_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectWithFolderEnumMode_SetMode(This,feMode)( (This)->lpVtbl -> SetMode(This,feMode) )
#define IObjectWithFolderEnumMode_GetMode(This,pfeMode)( (This)->lpVtbl -> GetMode(This,pfeMode) )
#endif
#endif
#define STR_PARSE_WITH_EXPLICIT_PROGID L"ExplicitProgid"
#define STR_PARSE_WITH_EXPLICIT_ASSOCAPP L"ExplicitAssociationApp"
#define STR_PARSE_EXPLICIT_ASSOCIATION_SUCCESSFUL L"ExplicitAssociationSuccessful"
#define STR_PARSE_AND_CREATE_ITEM    L"ParseAndCreateItem"
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0014_v0_0_s_ifspec;
#ifndef __IParseAndCreateItem_INTERFACE_DEFINED__
#define __IParseAndCreateItem_INTERFACE_DEFINED__
extern const IID IID_IParseAndCreateItem;
typedef struct IParseAndCreateItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IParseAndCreateItem *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IParseAndCreateItem *This);
	ULONG(STDMETHODCALLTYPE *Release) (IParseAndCreateItem *This);
	HRESULT(STDMETHODCALLTYPE *SetItem) (IParseAndCreateItem *This, IShellItem *psi);
	HRESULT(STDMETHODCALLTYPE *GetItem) (IParseAndCreateItem *This, REFIID riid, void **ppv);
	END_INTERFACE
}  IParseAndCreateItemVtbl;
interface IParseAndCreateItem
{
	CONST_VTBL struct IParseAndCreateItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IParseAndCreateItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IParseAndCreateItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IParseAndCreateItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IParseAndCreateItem_SetItem(This,psi)( (This)->lpVtbl -> SetItem(This,psi) )
#define IParseAndCreateItem_GetItem(This,riid,ppv)( (This)->lpVtbl -> GetItem(This,riid,ppv) )
#endif
#endif
#define STR_ITEM_CACHE_CONTEXT       L"ItemCacheContext"
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0015_v0_0_s_ifspec;
#ifndef __IShellFolder_INTERFACE_DEFINED__
#define __IShellFolder_INTERFACE_DEFINED__
extern const IID IID_IShellFolder;
typedef struct IShellFolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellFolder *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellFolder *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellFolder *This);
	HRESULT(STDMETHODCALLTYPE *ParseDisplayName) (IShellFolder *This, HWND hwnd, IBindCtx *pbc, LPWSTR pszDisplayName, ULONG *pchEaten, PIDLIST_RELATIVE *ppidl, ULONG *pdwAttributes);
	HRESULT(STDMETHODCALLTYPE *EnumObjects) (IShellFolder *This, HWND hwnd, SHCONTF grfFlags, IEnumIDList **ppenumIDList);
	HRESULT(STDMETHODCALLTYPE *BindToObject) (IShellFolder *This, PCUIDLIST_RELATIVE pidl, IBindCtx *pbc, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE *BindToStorage) (IShellFolder *This, PCUIDLIST_RELATIVE pidl, IBindCtx *pbc, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE *CompareIDs) (IShellFolder *This, LPARAM lParam, PCUIDLIST_RELATIVE pidl1, PCUIDLIST_RELATIVE pidl2);
	HRESULT(STDMETHODCALLTYPE *CreateViewObject) (IShellFolder *This, HWND hwndOwner, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE *GetAttributesOf) (IShellFolder *This, UINT cidl, PCUITEMID_CHILD_ARRAY apidl, SFGAOF *rgfInOut);
	HRESULT(STDMETHODCALLTYPE *GetUIObjectOf) (IShellFolder *This, HWND hwndOwner, UINT cidl, PCUITEMID_CHILD_ARRAY apidl, REFIID riid, UINT *rgfReserved, void **ppv);
	HRESULT(STDMETHODCALLTYPE *GetDisplayNameOf) (IShellFolder *This, PCUITEMID_CHILD pidl, SHGDNF uFlags, STRRET *pName);
	HRESULT(STDMETHODCALLTYPE *SetNameOf) (IShellFolder *This, HWND hwnd, PCUITEMID_CHILD pidl, LPCWSTR pszName, SHGDNF uFlags, PITEMID_CHILD *ppidlOut);
	END_INTERFACE
}  IShellFolderVtbl;
interface IShellFolder
{
	CONST_VTBL struct IShellFolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellFolder_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellFolder_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellFolder_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellFolder_ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes)( (This)->lpVtbl -> ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes) )
#define IShellFolder_EnumObjects(This,hwnd,grfFlags,ppenumIDList)( (This)->lpVtbl -> EnumObjects(This,hwnd,grfFlags,ppenumIDList) )
#define IShellFolder_BindToObject(This,pidl,pbc,riid,ppv)( (This)->lpVtbl -> BindToObject(This,pidl,pbc,riid,ppv) )
#define IShellFolder_BindToStorage(This,pidl,pbc,riid,ppv)( (This)->lpVtbl -> BindToStorage(This,pidl,pbc,riid,ppv) )
#define IShellFolder_CompareIDs(This,lParam,pidl1,pidl2)( (This)->lpVtbl -> CompareIDs(This,lParam,pidl1,pidl2) )
#define IShellFolder_CreateViewObject(This,hwndOwner,riid,ppv)( (This)->lpVtbl -> CreateViewObject(This,hwndOwner,riid,ppv) )
#define IShellFolder_GetAttributesOf(This,cidl,apidl,rgfInOut)( (This)->lpVtbl -> GetAttributesOf(This,cidl,apidl,rgfInOut) )
#define IShellFolder_GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv)( (This)->lpVtbl -> GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv) )
#define IShellFolder_GetDisplayNameOf(This,pidl,uFlags,pName)( (This)->lpVtbl -> GetDisplayNameOf(This,pidl,uFlags,pName) )
#define IShellFolder_SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut)( (This)->lpVtbl -> SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut) )
#endif
HRESULT STDMETHODCALLTYPE IShellFolder_RemoteSetNameOf_Proxy(IShellFolder *This, HWND hwnd, PCUITEMID_CHILD pidl, LPCWSTR pszName, SHGDNF uFlags, PITEMID_CHILD *ppidlOut);
void __RPC_STUB IShellFolder_RemoteSetNameOf_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
typedef IShellFolder *LPSHELLFOLDER;
typedef struct EXTRASEARCH
{
	GUID guidSearch;
	WCHAR wszFriendlyName[80];
	WCHAR wszUrl[2084];
} EXTRASEARCH;
typedef struct EXTRASEARCH *LPEXTRASEARCH;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0016_v0_0_s_ifspec;
#ifndef __IEnumExtraSearch_INTERFACE_DEFINED__
#define __IEnumExtraSearch_INTERFACE_DEFINED__
extern const IID IID_IEnumExtraSearch;
typedef struct IEnumExtraSearchVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumExtraSearch *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumExtraSearch *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumExtraSearch *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumExtraSearch *This, ULONG celt, EXTRASEARCH *rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumExtraSearch *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumExtraSearch *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumExtraSearch *This, IEnumExtraSearch **ppenum);
	END_INTERFACE
}  IEnumExtraSearchVtbl;
interface IEnumExtraSearch
{
	CONST_VTBL struct IEnumExtraSearchVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumExtraSearch_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumExtraSearch_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumExtraSearch_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumExtraSearch_Next(This,celt,rgelt,pceltFetched)( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumExtraSearch_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumExtraSearch_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumExtraSearch_Clone(This,ppenum)( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
typedef IEnumExtraSearch *LPENUMEXTRASEARCH;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0017_v0_0_s_ifspec;
#ifndef __IShellFolder2_INTERFACE_DEFINED__
#define __IShellFolder2_INTERFACE_DEFINED__
extern const IID IID_IShellFolder2;
typedef struct IShellFolder2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellFolder2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellFolder2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellFolder2 *This);
	HRESULT(STDMETHODCALLTYPE *ParseDisplayName) (IShellFolder2 *This, HWND hwnd, IBindCtx *pbc, LPWSTR pszDisplayName, ULONG *pchEaten, PIDLIST_RELATIVE *ppidl, ULONG *pdwAttributes);
	HRESULT(STDMETHODCALLTYPE *EnumObjects) (IShellFolder2 *This, HWND hwnd, SHCONTF grfFlags, IEnumIDList **ppenumIDList);
	HRESULT(STDMETHODCALLTYPE *BindToObject) (IShellFolder2 *This, PCUIDLIST_RELATIVE pidl, IBindCtx *pbc, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE *BindToStorage) (IShellFolder2 *This, PCUIDLIST_RELATIVE pidl, IBindCtx *pbc, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE *CompareIDs) (IShellFolder2 *This, LPARAM lParam, PCUIDLIST_RELATIVE pidl1, PCUIDLIST_RELATIVE pidl2);
	HRESULT(STDMETHODCALLTYPE *CreateViewObject) (IShellFolder2 *This, HWND hwndOwner, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE *GetAttributesOf) (IShellFolder2 *This, UINT cidl, PCUITEMID_CHILD_ARRAY apidl, SFGAOF *rgfInOut);
	HRESULT(STDMETHODCALLTYPE *GetUIObjectOf) (IShellFolder2 *This, HWND hwndOwner, UINT cidl, PCUITEMID_CHILD_ARRAY apidl, REFIID riid, UINT *rgfReserved, void **ppv);
	HRESULT(STDMETHODCALLTYPE *GetDisplayNameOf) (IShellFolder2 *This, PCUITEMID_CHILD pidl, SHGDNF uFlags, STRRET *pName);
	HRESULT(STDMETHODCALLTYPE *SetNameOf) (IShellFolder2 *This, HWND hwnd, PCUITEMID_CHILD pidl, LPCWSTR pszName, SHGDNF uFlags, PITEMID_CHILD *ppidlOut);
	HRESULT(STDMETHODCALLTYPE *GetDefaultSearchGUID) (IShellFolder2 *This, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *EnumSearches) (IShellFolder2 *This, IEnumExtraSearch **ppenum);
	HRESULT(STDMETHODCALLTYPE *GetDefaultColumn) (IShellFolder2 *This, DWORD dwRes, ULONG *pSort, ULONG *pDisplay);
	HRESULT(STDMETHODCALLTYPE *GetDefaultColumnState) (IShellFolder2 *This, UINT iColumn, SHCOLSTATEF *pcsFlags);
	HRESULT(STDMETHODCALLTYPE *GetDetailsEx) (IShellFolder2 *This, PCUITEMID_CHILD pidl, const SHCOLUMNID *pscid, VARIANT *pv);
	HRESULT(STDMETHODCALLTYPE *GetDetailsOf) (IShellFolder2 *This, PCUITEMID_CHILD pidl, UINT iColumn, SHELLDETAILS *psd);
	HRESULT(STDMETHODCALLTYPE *MapColumnToSCID) (IShellFolder2 *This, UINT iColumn, SHCOLUMNID *pscid);
	END_INTERFACE
}  IShellFolder2Vtbl;
interface IShellFolder2
{
	CONST_VTBL struct IShellFolder2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellFolder2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellFolder2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellFolder2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellFolder2_ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes)( (This)->lpVtbl -> ParseDisplayName(This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes) )
#define IShellFolder2_EnumObjects(This,hwnd,grfFlags,ppenumIDList)( (This)->lpVtbl -> EnumObjects(This,hwnd,grfFlags,ppenumIDList) )
#define IShellFolder2_BindToObject(This,pidl,pbc,riid,ppv)( (This)->lpVtbl -> BindToObject(This,pidl,pbc,riid,ppv) )
#define IShellFolder2_BindToStorage(This,pidl,pbc,riid,ppv)( (This)->lpVtbl -> BindToStorage(This,pidl,pbc,riid,ppv) )
#define IShellFolder2_CompareIDs(This,lParam,pidl1,pidl2)( (This)->lpVtbl -> CompareIDs(This,lParam,pidl1,pidl2) )
#define IShellFolder2_CreateViewObject(This,hwndOwner,riid,ppv)( (This)->lpVtbl -> CreateViewObject(This,hwndOwner,riid,ppv) )
#define IShellFolder2_GetAttributesOf(This,cidl,apidl,rgfInOut)( (This)->lpVtbl -> GetAttributesOf(This,cidl,apidl,rgfInOut) )
#define IShellFolder2_GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv)( (This)->lpVtbl -> GetUIObjectOf(This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv) )
#define IShellFolder2_GetDisplayNameOf(This,pidl,uFlags,pName)( (This)->lpVtbl -> GetDisplayNameOf(This,pidl,uFlags,pName) )
#define IShellFolder2_SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut)( (This)->lpVtbl -> SetNameOf(This,hwnd,pidl,pszName,uFlags,ppidlOut) )
#define IShellFolder2_GetDefaultSearchGUID(This,pguid)( (This)->lpVtbl -> GetDefaultSearchGUID(This,pguid) )
#define IShellFolder2_EnumSearches(This,ppenum)( (This)->lpVtbl -> EnumSearches(This,ppenum) )
#define IShellFolder2_GetDefaultColumn(This,dwRes,pSort,pDisplay)( (This)->lpVtbl -> GetDefaultColumn(This,dwRes,pSort,pDisplay) )
#define IShellFolder2_GetDefaultColumnState(This,iColumn,pcsFlags)( (This)->lpVtbl -> GetDefaultColumnState(This,iColumn,pcsFlags) )
#define IShellFolder2_GetDetailsEx(This,pidl,pscid,pv)( (This)->lpVtbl -> GetDetailsEx(This,pidl,pscid,pv) )
#define IShellFolder2_GetDetailsOf(This,pidl,iColumn,psd)( (This)->lpVtbl -> GetDetailsOf(This,pidl,iColumn,psd) )
#define IShellFolder2_MapColumnToSCID(This,iColumn,pscid)( (This)->lpVtbl -> MapColumnToSCID(This,iColumn,pscid) )
#endif
#endif
typedef char *LPVIEWSETTINGS;
typedef enum FOLDERFLAGS
{
	FWF_NONE = 0,
	FWF_AUTOARRANGE = 0x1,
	FWF_ABBREVIATEDNAMES = 0x2,
	FWF_SNAPTOGRID = 0x4,
	FWF_OWNERDATA = 0x8,
	FWF_BESTFITWINDOW = 0x10,
	FWF_DESKTOP = 0x20,
	FWF_SINGLESEL = 0x40,
	FWF_NOSUBFOLDERS = 0x80,
	FWF_TRANSPARENT = 0x100,
	FWF_NOCLIENTEDGE = 0x200,
	FWF_NOSCROLL = 0x400,
	FWF_ALIGNLEFT = 0x800,
	FWF_NOICONS = 0x1000,
	FWF_SHOWSELALWAYS = 0x2000,
	FWF_NOVISIBLE = 0x4000,
	FWF_SINGLECLICKACTIVATE = 0x8000,
	FWF_NOWEBVIEW = 0x10000,
	FWF_HIDEFILENAMES = 0x20000,
	FWF_CHECKSELECT = 0x40000,
	FWF_NOENUMREFRESH = 0x80000,
	FWF_NOGROUPING = 0x100000,
	FWF_FULLROWSELECT = 0x200000,
	FWF_NOFILTERS = 0x400000,
	FWF_NOCOLUMNHEADER = 0x800000,
	FWF_NOHEADERINALLVIEWS = 0x1000000,
	FWF_EXTENDEDTILES = 0x2000000,
	FWF_TRICHECKSELECT = 0x4000000,
	FWF_AUTOCHECKSELECT = 0x8000000,
	FWF_NOBROWSERVIEWSTATE = 0x10000000,
	FWF_SUBSETGROUPS = 0x20000000,
	FWF_USESEARCHFOLDER = 0x40000000,
	FWF_ALLOWRTLREADING = 0x80000000
} FOLDERFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(FOLDERFLAGS)
typedef enum FOLDERVIEWMODE
{
	FVM_AUTO = -1,
		FVM_FIRST = 1,
		FVM_ICON = 1,
		FVM_SMALLICON = 2,
		FVM_LIST = 3,
		FVM_DETAILS = 4,
		FVM_THUMBNAIL = 5,
		FVM_TILE = 6,
		FVM_THUMBSTRIP = 7,
		FVM_CONTENT = 8,
		FVM_LAST = 8
	} FOLDERVIEWMODE;
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef enum FOLDERLOGICALVIEWMODE
{
	FLVM_UNSPECIFIED = -1,
		FLVM_FIRST = 1,
		FLVM_DETAILS = 1,
		FLVM_TILES = 2,
		FLVM_ICONS = 3,
		FLVM_LIST = 4,
		FLVM_CONTENT = 5,
		FLVM_LAST = 5
	} FOLDERLOGICALVIEWMODE;
#endif
typedef struct FOLDERSETTINGS
{
		UINT ViewMode;
		UINT fFlags;
} FOLDERSETTINGS;
typedef FOLDERSETTINGS *LPFOLDERSETTINGS;
typedef const FOLDERSETTINGS *LPCFOLDERSETTINGS;
typedef FOLDERSETTINGS *PFOLDERSETTINGS;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0018_v0_0_s_ifspec;
#ifndef __IFolderViewOptions_INTERFACE_DEFINED__
#define __IFolderViewOptions_INTERFACE_DEFINED__
typedef enum FOLDERVIEWOPTIONS
{
	FVO_DEFAULT = 0,
		FVO_VISTALAYOUT = 0x1,
		FVO_CUSTOMPOSITION = 0x2,
		FVO_CUSTOMORDERING = 0x4,
		FVO_SUPPORTHYPERLINKS = 0x8,
		FVO_NOANIMATIONS = 0x10,
		FVO_NOSCROLLTIPS = 0x20
	} FOLDERVIEWOPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(FOLDERVIEWOPTIONS)
extern const IID IID_IFolderViewOptions;
typedef struct IFolderViewOptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFolderViewOptions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFolderViewOptions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFolderViewOptions * This);
	HRESULT(STDMETHODCALLTYPE * SetFolderViewOptions) (IFolderViewOptions * This, FOLDERVIEWOPTIONS fvoMask, FOLDERVIEWOPTIONS fvoFlags);
	HRESULT(STDMETHODCALLTYPE * GetFolderViewOptions) (IFolderViewOptions * This, FOLDERVIEWOPTIONS * pfvoFlags);
	END_INTERFACE
}  IFolderViewOptionsVtbl;
interface IFolderViewOptions
{
	CONST_VTBL struct IFolderViewOptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFolderViewOptions_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFolderViewOptions_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFolderViewOptions_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFolderViewOptions_SetFolderViewOptions(This,fvoMask,fvoFlags)( (This)->lpVtbl -> SetFolderViewOptions(This,fvoMask,fvoFlags) )
#define IFolderViewOptions_GetFolderViewOptions(This,pfvoFlags)( (This)->lpVtbl -> GetFolderViewOptions(This,pfvoFlags) )
#endif
#endif
typedef enum _SVSIF
{
	SVSI_DESELECT = 0,
	SVSI_SELECT = 0x1,
	SVSI_EDIT = 0x3,
	SVSI_DESELECTOTHERS = 0x4,
	SVSI_ENSUREVISIBLE = 0x8,
	SVSI_FOCUSED = 0x10,
	SVSI_TRANSLATEPT = 0x20,
	SVSI_SELECTIONMARK = 0x40,
	SVSI_POSITIONITEM = 0x80,
	SVSI_CHECK = 0x100,
	SVSI_CHECK2 = 0x200,
	SVSI_KEYBOARDSELECT = 0x401,
	SVSI_NOTAKEFOCUS = 0x40000000
} _SVSIF;
#define SVSI_NOSTATECHANGE   ((UINT)0x80000000)
	typedef UINT SVSIF;
typedef enum _SVGIO
{
	SVGIO_BACKGROUND = 0,
	SVGIO_SELECTION = 0x1,
	SVGIO_ALLVIEW = 0x2,
	SVGIO_CHECKED = 0x3,
	SVGIO_TYPE_MASK = 0xf,
	SVGIO_FLAG_VIEWORDER = 0x80000000
} _SVGIO;
DEFINE_ENUM_FLAG_OPERATORS(_SVGIO)
	typedef int SVGIO;
typedef enum SVUIA_STATUS
{
	SVUIA_DEACTIVATE = 0,
	SVUIA_ACTIVATE_NOFOCUS = 1,
	SVUIA_ACTIVATE_FOCUS = 2,
	SVUIA_INPLACEACTIVATE = 3
} SVUIA_STATUS;
#ifdef _FIX_ENABLEMODELESS_CONFLICT
#define    EnableModeless EnableModelessSV
#endif
#ifdef _NEVER_
typedef LPARAM LPFNSVADDPROPSHEETPAGE;
#else
#include <prsht.h>
typedef LPFNADDPROPSHEETPAGE LPFNSVADDPROPSHEETPAGE;
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0019_v0_0_s_ifspec;
#ifndef __IShellView_INTERFACE_DEFINED__
#define __IShellView_INTERFACE_DEFINED__
typedef IShellView *LPSHELLVIEW;
extern const IID IID_IShellView;
typedef struct IShellViewVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellView * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellView * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellView * This);
	HRESULT(STDMETHODCALLTYPE * GetWindow) (IShellView * This, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * ContextSensitiveHelp) (IShellView * This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE * TranslateAccelerator) (IShellView * This, MSG * pmsg);
	HRESULT(STDMETHODCALLTYPE * EnableModeless) (IShellView * This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * UIActivate) (IShellView * This, UINT uState);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IShellView * This);
	HRESULT(STDMETHODCALLTYPE * CreateViewWindow) (IShellView * This, IShellView * psvPrevious, LPCFOLDERSETTINGS pfs, IShellBrowser * psb, RECT * prcView, HWND * phWnd);
	HRESULT(STDMETHODCALLTYPE * DestroyViewWindow) (IShellView * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentInfo) (IShellView * This, LPFOLDERSETTINGS pfs);
	HRESULT(STDMETHODCALLTYPE * AddPropertySheetPages) (IShellView * This, DWORD dwReserved, LPFNSVADDPROPSHEETPAGE pfn, LPARAM lparam);
	HRESULT(STDMETHODCALLTYPE * SaveViewState) (IShellView * This);
	HRESULT(STDMETHODCALLTYPE * SelectItem) (IShellView * This, PCUITEMID_CHILD pidlItem, SVSIF uFlags);
	HRESULT(STDMETHODCALLTYPE * GetItemObject) (IShellView * This, UINT uItem, REFIID riid, void **ppv);
	END_INTERFACE
}  IShellViewVtbl;
interface IShellView
{
	CONST_VTBL struct IShellViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellView_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellView_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellView_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellView_GetWindow(This,phwnd)( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IShellView_ContextSensitiveHelp(This,fEnterMode)( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IShellView_TranslateAccelerator(This,pmsg)( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) )
#define IShellView_EnableModeless(This,fEnable)( (This)->lpVtbl -> EnableModeless(This,fEnable) )
#define IShellView_UIActivate(This,uState)( (This)->lpVtbl -> UIActivate(This,uState) )
#define IShellView_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IShellView_CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd)( (This)->lpVtbl -> CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd) )
#define IShellView_DestroyViewWindow(This)( (This)->lpVtbl -> DestroyViewWindow(This) )
#define IShellView_GetCurrentInfo(This,pfs)( (This)->lpVtbl -> GetCurrentInfo(This,pfs) )
#define IShellView_AddPropertySheetPages(This,dwReserved,pfn,lparam)( (This)->lpVtbl -> AddPropertySheetPages(This,dwReserved,pfn,lparam) )
#define IShellView_SaveViewState(This)( (This)->lpVtbl -> SaveViewState(This) )
#define IShellView_SelectItem(This,pidlItem,uFlags)( (This)->lpVtbl -> SelectItem(This,pidlItem,uFlags) )
#define IShellView_GetItemObject(This,uItem,riid,ppv)( (This)->lpVtbl -> GetItemObject(This,uItem,riid,ppv) )
#endif
#endif
#ifndef __IShellView2_INTERFACE_DEFINED__
#define __IShellView2_INTERFACE_DEFINED__
typedef GUID SHELLVIEWID;
#define SV2GV_CURRENTVIEW ((UINT)-1)
#define SV2GV_DEFAULTVIEW ((UINT)-2)
#include <pshpack8.h>
typedef struct _SV2CVW2_PARAMS
{
	DWORD cbSize;
	IShellView *psvPrev;
	LPCFOLDERSETTINGS pfs;
	IShellBrowser *psbOwner;
	RECT *prcView;
	const SHELLVIEWID *pvid;
	HWND hwndView;
} SV2CVW2_PARAMS;
typedef struct _SV2CVW2_PARAMS *LPSV2CVW2_PARAMS;
#include <poppack.h>
extern const IID IID_IShellView2;
typedef struct IShellView2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellView2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellView2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellView2 * This);
	HRESULT(STDMETHODCALLTYPE * GetWindow) (IShellView2 * This, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * ContextSensitiveHelp) (IShellView2 * This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE * TranslateAccelerator) (IShellView2 * This, MSG * pmsg);
	HRESULT(STDMETHODCALLTYPE * EnableModeless) (IShellView2 * This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * UIActivate) (IShellView2 * This, UINT uState);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IShellView2 * This);
	HRESULT(STDMETHODCALLTYPE * CreateViewWindow) (IShellView2 * This, IShellView * psvPrevious, LPCFOLDERSETTINGS pfs, IShellBrowser * psb, RECT * prcView, HWND * phWnd);
	HRESULT(STDMETHODCALLTYPE * DestroyViewWindow) (IShellView2 * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentInfo) (IShellView2 * This, LPFOLDERSETTINGS pfs);
	HRESULT(STDMETHODCALLTYPE * AddPropertySheetPages) (IShellView2 * This, DWORD dwReserved, LPFNSVADDPROPSHEETPAGE pfn, LPARAM lparam);
	HRESULT(STDMETHODCALLTYPE * SaveViewState) (IShellView2 * This);
	HRESULT(STDMETHODCALLTYPE * SelectItem) (IShellView2 * This, PCUITEMID_CHILD pidlItem, SVSIF uFlags);
	HRESULT(STDMETHODCALLTYPE * GetItemObject) (IShellView2 * This, UINT uItem, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetView) (IShellView2 * This, SHELLVIEWID * pvid, ULONG uView);
	HRESULT(STDMETHODCALLTYPE * CreateViewWindow2) (IShellView2 * This, LPSV2CVW2_PARAMS lpParams);
	HRESULT(STDMETHODCALLTYPE * HandleRename) (IShellView2 * This, PCUITEMID_CHILD pidlNew);
	HRESULT(STDMETHODCALLTYPE * SelectAndPositionItem) (IShellView2 * This, PCUITEMID_CHILD pidlItem, UINT uFlags, POINT * ppt);
	END_INTERFACE
}  IShellView2Vtbl;
interface IShellView2
{
	CONST_VTBL struct IShellView2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellView2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellView2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellView2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellView2_GetWindow(This,phwnd)( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IShellView2_ContextSensitiveHelp(This,fEnterMode)( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IShellView2_TranslateAccelerator(This,pmsg)( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) )
#define IShellView2_EnableModeless(This,fEnable)( (This)->lpVtbl -> EnableModeless(This,fEnable) )
#define IShellView2_UIActivate(This,uState)( (This)->lpVtbl -> UIActivate(This,uState) )
#define IShellView2_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IShellView2_CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd)( (This)->lpVtbl -> CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd) )
#define IShellView2_DestroyViewWindow(This)( (This)->lpVtbl -> DestroyViewWindow(This) )
#define IShellView2_GetCurrentInfo(This,pfs)( (This)->lpVtbl -> GetCurrentInfo(This,pfs) )
#define IShellView2_AddPropertySheetPages(This,dwReserved,pfn,lparam)( (This)->lpVtbl -> AddPropertySheetPages(This,dwReserved,pfn,lparam) )
#define IShellView2_SaveViewState(This)( (This)->lpVtbl -> SaveViewState(This) )
#define IShellView2_SelectItem(This,pidlItem,uFlags)( (This)->lpVtbl -> SelectItem(This,pidlItem,uFlags) )
#define IShellView2_GetItemObject(This,uItem,riid,ppv)( (This)->lpVtbl -> GetItemObject(This,uItem,riid,ppv) )
#define IShellView2_GetView(This,pvid,uView)( (This)->lpVtbl -> GetView(This,pvid,uView) )
#define IShellView2_CreateViewWindow2(This,lpParams)( (This)->lpVtbl -> CreateViewWindow2(This,lpParams) )
#define IShellView2_HandleRename(This,pidlNew)( (This)->lpVtbl -> HandleRename(This,pidlNew) )
#define IShellView2_SelectAndPositionItem(This,pidlItem,uFlags,ppt)( (This)->lpVtbl -> SelectAndPositionItem(This,pidlItem,uFlags,ppt) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0021_v0_0_s_ifspec;
#ifndef __IShellView3_INTERFACE_DEFINED__
#define __IShellView3_INTERFACE_DEFINED__
enum _SV3CVW3_FLAGS
{
SV3CVW3_DEFAULT = 0,
	SV3CVW3_NONINTERACTIVE = 0x1,
	SV3CVW3_FORCEVIEWMODE = 0x2,
	SV3CVW3_FORCEFOLDERFLAGS = 0x4
};
typedef DWORD SV3CVW3_FLAGS;
extern const IID IID_IShellView3;
typedef struct IShellView3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellView3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellView3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellView3 * This);
	HRESULT(STDMETHODCALLTYPE * GetWindow) (IShellView3 * This, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * ContextSensitiveHelp) (IShellView3 * This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE * TranslateAccelerator) (IShellView3 * This, MSG * pmsg);
	HRESULT(STDMETHODCALLTYPE * EnableModeless) (IShellView3 * This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * UIActivate) (IShellView3 * This, UINT uState);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IShellView3 * This);
	HRESULT(STDMETHODCALLTYPE * CreateViewWindow) (IShellView3 * This, IShellView * psvPrevious, LPCFOLDERSETTINGS pfs, IShellBrowser * psb, RECT * prcView, HWND * phWnd);
	HRESULT(STDMETHODCALLTYPE * DestroyViewWindow) (IShellView3 * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentInfo) (IShellView3 * This, LPFOLDERSETTINGS pfs);
	HRESULT(STDMETHODCALLTYPE * AddPropertySheetPages) (IShellView3 * This, DWORD dwReserved, LPFNSVADDPROPSHEETPAGE pfn, LPARAM lparam);
	HRESULT(STDMETHODCALLTYPE * SaveViewState) (IShellView3 * This);
	HRESULT(STDMETHODCALLTYPE * SelectItem) (IShellView3 * This, PCUITEMID_CHILD pidlItem, SVSIF uFlags);
	HRESULT(STDMETHODCALLTYPE * GetItemObject) (IShellView3 * This, UINT uItem, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetView) (IShellView3 * This, SHELLVIEWID * pvid, ULONG uView);
	HRESULT(STDMETHODCALLTYPE * CreateViewWindow2) (IShellView3 * This, LPSV2CVW2_PARAMS lpParams);
	HRESULT(STDMETHODCALLTYPE * HandleRename) (IShellView3 * This, PCUITEMID_CHILD pidlNew);
	HRESULT(STDMETHODCALLTYPE * SelectAndPositionItem) (IShellView3 * This, PCUITEMID_CHILD pidlItem, UINT uFlags, POINT * ppt);
	HRESULT(STDMETHODCALLTYPE * CreateViewWindow3) (IShellView3 * This, IShellBrowser * psbOwner, IShellView * psvPrev, SV3CVW3_FLAGS dwViewFlags, FOLDERFLAGS dwMask, FOLDERFLAGS dwFlags, FOLDERVIEWMODE fvMode, const SHELLVIEWID * pvid, const RECT * prcView, HWND * phwndView);
	END_INTERFACE
}  IShellView3Vtbl;
interface IShellView3
{
	CONST_VTBL struct IShellView3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellView3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellView3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellView3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellView3_GetWindow(This,phwnd)( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IShellView3_ContextSensitiveHelp(This,fEnterMode)( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IShellView3_TranslateAccelerator(This,pmsg)( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) )
#define IShellView3_EnableModeless(This,fEnable)( (This)->lpVtbl -> EnableModeless(This,fEnable) )
#define IShellView3_UIActivate(This,uState)( (This)->lpVtbl -> UIActivate(This,uState) )
#define IShellView3_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IShellView3_CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd)( (This)->lpVtbl -> CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd) )
#define IShellView3_DestroyViewWindow(This)( (This)->lpVtbl -> DestroyViewWindow(This) )
#define IShellView3_GetCurrentInfo(This,pfs)( (This)->lpVtbl -> GetCurrentInfo(This,pfs) )
#define IShellView3_AddPropertySheetPages(This,dwReserved,pfn,lparam)( (This)->lpVtbl -> AddPropertySheetPages(This,dwReserved,pfn,lparam) )
#define IShellView3_SaveViewState(This)( (This)->lpVtbl -> SaveViewState(This) )
#define IShellView3_SelectItem(This,pidlItem,uFlags)( (This)->lpVtbl -> SelectItem(This,pidlItem,uFlags) )
#define IShellView3_GetItemObject(This,uItem,riid,ppv)( (This)->lpVtbl -> GetItemObject(This,uItem,riid,ppv) )
#define IShellView3_GetView(This,pvid,uView)( (This)->lpVtbl -> GetView(This,pvid,uView) )
#define IShellView3_CreateViewWindow2(This,lpParams)( (This)->lpVtbl -> CreateViewWindow2(This,lpParams) )
#define IShellView3_HandleRename(This,pidlNew)( (This)->lpVtbl -> HandleRename(This,pidlNew) )
#define IShellView3_SelectAndPositionItem(This,pidlItem,uFlags,ppt)( (This)->lpVtbl -> SelectAndPositionItem(This,pidlItem,uFlags,ppt) )
#define IShellView3_CreateViewWindow3(This,psbOwner,psvPrev,dwViewFlags,dwMask,dwFlags,fvMode,pvid,prcView,phwndView)( (This)->lpVtbl -> CreateViewWindow3(This,psbOwner,psvPrev,dwViewFlags,dwMask,dwFlags,fvMode,pvid,prcView,phwndView) )
#endif
#endif
#endif
#ifdef _FIX_ENABLEMODELESS_CONFLICT
#undef    EnableModeless
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0022_v0_0_s_ifspec;
#ifndef __IFolderView_INTERFACE_DEFINED__
#define __IFolderView_INTERFACE_DEFINED__
extern const IID IID_IFolderView;
typedef struct IFolderViewVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFolderView * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFolderView * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFolderView * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentViewMode) (IFolderView * This, UINT * pViewMode);
	HRESULT(STDMETHODCALLTYPE * SetCurrentViewMode) (IFolderView * This, UINT ViewMode);
	HRESULT(STDMETHODCALLTYPE * GetFolder) (IFolderView * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * Item) (IFolderView * This, int iItemIndex, PITEMID_CHILD * ppidl);
	HRESULT(STDMETHODCALLTYPE * ItemCount) (IFolderView * This, UINT uFlags, int *pcItems);
	HRESULT(STDMETHODCALLTYPE * Items) (IFolderView * This, UINT uFlags, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetSelectionMarkedItem) (IFolderView * This, int *piItem);
	HRESULT(STDMETHODCALLTYPE * GetFocusedItem) (IFolderView * This, int *piItem);
	HRESULT(STDMETHODCALLTYPE * GetItemPosition) (IFolderView * This, PCUITEMID_CHILD pidl, POINT * ppt);
	HRESULT(STDMETHODCALLTYPE * GetSpacing) (IFolderView * This, POINT * ppt);
	HRESULT(STDMETHODCALLTYPE * GetDefaultSpacing) (IFolderView * This, POINT * ppt);
	HRESULT(STDMETHODCALLTYPE * GetAutoArrange) (IFolderView * This);
	HRESULT(STDMETHODCALLTYPE * SelectItem) (IFolderView * This, int iItem, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * SelectAndPositionItems) (IFolderView * This, UINT cidl, PCUITEMID_CHILD_ARRAY apidl, POINT * apt, DWORD dwFlags);
	END_INTERFACE
}  IFolderViewVtbl;
interface IFolderView
{
	CONST_VTBL struct IFolderViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFolderView_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFolderView_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFolderView_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFolderView_GetCurrentViewMode(This,pViewMode)( (This)->lpVtbl -> GetCurrentViewMode(This,pViewMode) )
#define IFolderView_SetCurrentViewMode(This,ViewMode)( (This)->lpVtbl -> SetCurrentViewMode(This,ViewMode) )
#define IFolderView_GetFolder(This,riid,ppv)( (This)->lpVtbl -> GetFolder(This,riid,ppv) )
#define IFolderView_Item(This,iItemIndex,ppidl)( (This)->lpVtbl -> Item(This,iItemIndex,ppidl) )
#define IFolderView_ItemCount(This,uFlags,pcItems)( (This)->lpVtbl -> ItemCount(This,uFlags,pcItems) )
#define IFolderView_Items(This,uFlags,riid,ppv)( (This)->lpVtbl -> Items(This,uFlags,riid,ppv) )
#define IFolderView_GetSelectionMarkedItem(This,piItem)( (This)->lpVtbl -> GetSelectionMarkedItem(This,piItem) )
#define IFolderView_GetFocusedItem(This,piItem)( (This)->lpVtbl -> GetFocusedItem(This,piItem) )
#define IFolderView_GetItemPosition(This,pidl,ppt)( (This)->lpVtbl -> GetItemPosition(This,pidl,ppt) )
#define IFolderView_GetSpacing(This,ppt)( (This)->lpVtbl -> GetSpacing(This,ppt) )
#define IFolderView_GetDefaultSpacing(This,ppt)( (This)->lpVtbl -> GetDefaultSpacing(This,ppt) )
#define IFolderView_GetAutoArrange(This)( (This)->lpVtbl -> GetAutoArrange(This) )
#define IFolderView_SelectItem(This,iItem,dwFlags)( (This)->lpVtbl -> SelectItem(This,iItem,dwFlags) )
#define IFolderView_SelectAndPositionItems(This,cidl,apidl,apt,dwFlags)( (This)->lpVtbl -> SelectAndPositionItems(This,cidl,apidl,apt,dwFlags) )
#endif
#endif
#define SID_SFolderView IID_IFolderView
#if (NTDDI_VERSION >= NTDDI_WIN7)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0023_v0_0_s_ifspec;
#ifndef __ISearchBoxInfo_INTERFACE_DEFINED__
#define __ISearchBoxInfo_INTERFACE_DEFINED__
extern const IID IID_ISearchBoxInfo;
typedef struct ISearchBoxInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchBoxInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchBoxInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchBoxInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetCondition) (ISearchBoxInfo * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetText) (ISearchBoxInfo * This, LPWSTR * ppsz);
	END_INTERFACE
}  ISearchBoxInfoVtbl;
interface ISearchBoxInfo
{
	CONST_VTBL struct ISearchBoxInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchBoxInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchBoxInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISearchBoxInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISearchBoxInfo_GetCondition(This,riid,ppv)( (This)->lpVtbl -> GetCondition(This,riid,ppv) )
#define ISearchBoxInfo_GetText(This,ppsz)( (This)->lpVtbl -> GetText(This,ppsz) )
#endif
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA) || (_WIN32_IE >= _WIN32_IE_IE70)
#ifndef NO_SHOBJIDL_SORTDIRECTION
enum tagSORTDIRECTION
{
	SORT_DESCENDING = -1,
	SORT_ASCENDING = 1
};
#endif
typedef int SORTDIRECTION;
typedef struct SORTCOLUMN
{
	PROPERTYKEY propkey;
	SORTDIRECTION direction;
} SORTCOLUMN;
typedef enum FVTEXTTYPE
{
	FVST_EMPTYTEXT = 0
} FVTEXTTYPE;
typedef HRESULT DEPRECATED_HRESULT;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0024_v0_0_s_ifspec;
#ifndef __IFolderView2_INTERFACE_DEFINED__
#define __IFolderView2_INTERFACE_DEFINED__
extern const IID IID_IFolderView2;
typedef struct IFolderView2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFolderView2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFolderView2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFolderView2 * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentViewMode) (IFolderView2 * This, UINT * pViewMode);
	HRESULT(STDMETHODCALLTYPE * SetCurrentViewMode) (IFolderView2 * This, UINT ViewMode);
	HRESULT(STDMETHODCALLTYPE * GetFolder) (IFolderView2 * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * Item) (IFolderView2 * This, int iItemIndex, PITEMID_CHILD * ppidl);
	HRESULT(STDMETHODCALLTYPE * ItemCount) (IFolderView2 * This, UINT uFlags, int *pcItems);
	HRESULT(STDMETHODCALLTYPE * Items) (IFolderView2 * This, UINT uFlags, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetSelectionMarkedItem) (IFolderView2 * This, int *piItem);
	HRESULT(STDMETHODCALLTYPE * GetFocusedItem) (IFolderView2 * This, int *piItem);
	HRESULT(STDMETHODCALLTYPE * GetItemPosition) (IFolderView2 * This, PCUITEMID_CHILD pidl, POINT * ppt);
	HRESULT(STDMETHODCALLTYPE * GetSpacing) (IFolderView2 * This, POINT * ppt);
	HRESULT(STDMETHODCALLTYPE * GetDefaultSpacing) (IFolderView2 * This, POINT * ppt);
	HRESULT(STDMETHODCALLTYPE * GetAutoArrange) (IFolderView2 * This);
	HRESULT(STDMETHODCALLTYPE * SelectItem) (IFolderView2 * This, int iItem, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * SelectAndPositionItems) (IFolderView2 * This, UINT cidl, PCUITEMID_CHILD_ARRAY apidl, POINT * apt, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * SetGroupBy) (IFolderView2 * This, REFPROPERTYKEY key, BOOL fAscending);
	HRESULT(STDMETHODCALLTYPE * GetGroupBy) (IFolderView2 * This, PROPERTYKEY * pkey, BOOL * pfAscending);
	DEPRECATED_HRESULT(STDMETHODCALLTYPE * SetViewProperty) (IFolderView2 * This, PCUITEMID_CHILD pidl, REFPROPERTYKEY propkey, REFPROPVARIANT propvar);
	DEPRECATED_HRESULT(STDMETHODCALLTYPE * GetViewProperty) (IFolderView2 * This, PCUITEMID_CHILD pidl, REFPROPERTYKEY propkey, PROPVARIANT * ppropvar);
	DEPRECATED_HRESULT(STDMETHODCALLTYPE * SetTileViewProperties) (IFolderView2 * This, PCUITEMID_CHILD pidl, LPCWSTR pszPropList);
	DEPRECATED_HRESULT(STDMETHODCALLTYPE * SetExtendedTileViewProperties) (IFolderView2 * This, PCUITEMID_CHILD pidl, LPCWSTR pszPropList);
	HRESULT(STDMETHODCALLTYPE * SetText) (IFolderView2 * This, FVTEXTTYPE iType, LPCWSTR pwszText);
	HRESULT(STDMETHODCALLTYPE * SetCurrentFolderFlags) (IFolderView2 * This, DWORD dwMask, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetCurrentFolderFlags) (IFolderView2 * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * GetSortColumnCount) (IFolderView2 * This, int *pcColumns);
	HRESULT(STDMETHODCALLTYPE * SetSortColumns) (IFolderView2 * This, const SORTCOLUMN * rgSortColumns, int cColumns);
	HRESULT(STDMETHODCALLTYPE * GetSortColumns) (IFolderView2 * This, SORTCOLUMN * rgSortColumns, int cColumns);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IFolderView2 * This, int iItem, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetVisibleItem) (IFolderView2 * This, int iStart, BOOL fPrevious, int *piItem);
	HRESULT(STDMETHODCALLTYPE * GetSelectedItem) (IFolderView2 * This, int iStart, int *piItem);
	HRESULT(STDMETHODCALLTYPE * GetSelection) (IFolderView2 * This, BOOL fNoneImpliesFolder, IShellItemArray ** ppsia);
	HRESULT(STDMETHODCALLTYPE * GetSelectionState) (IFolderView2 * This, PCUITEMID_CHILD pidl, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * InvokeVerbOnSelection) (IFolderView2 * This, LPCSTR pszVerb);
	HRESULT(STDMETHODCALLTYPE * SetViewModeAndIconSize) (IFolderView2 * This, FOLDERVIEWMODE uViewMode, int iImageSize);
	HRESULT(STDMETHODCALLTYPE * GetViewModeAndIconSize) (IFolderView2 * This, FOLDERVIEWMODE * puViewMode, int *piImageSize);
	HRESULT(STDMETHODCALLTYPE * SetGroupSubsetCount) (IFolderView2 * This, UINT cVisibleRows);
	HRESULT(STDMETHODCALLTYPE * GetGroupSubsetCount) (IFolderView2 * This, UINT * pcVisibleRows);
	HRESULT(STDMETHODCALLTYPE * SetRedraw) (IFolderView2 * This, BOOL fRedrawOn);
	HRESULT(STDMETHODCALLTYPE * IsMoveInSameFolder) (IFolderView2 * This);
	HRESULT(STDMETHODCALLTYPE * DoRename) (IFolderView2 * This);
	END_INTERFACE
}  IFolderView2Vtbl;
	interface IFolderView2
{
	CONST_VTBL struct IFolderView2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFolderView2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFolderView2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFolderView2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFolderView2_GetCurrentViewMode(This,pViewMode)( (This)->lpVtbl -> GetCurrentViewMode(This,pViewMode) )
#define IFolderView2_SetCurrentViewMode(This,ViewMode)( (This)->lpVtbl -> SetCurrentViewMode(This,ViewMode) )
#define IFolderView2_GetFolder(This,riid,ppv)( (This)->lpVtbl -> GetFolder(This,riid,ppv) )
#define IFolderView2_Item(This,iItemIndex,ppidl)( (This)->lpVtbl -> Item(This,iItemIndex,ppidl) )
#define IFolderView2_ItemCount(This,uFlags,pcItems)( (This)->lpVtbl -> ItemCount(This,uFlags,pcItems) )
#define IFolderView2_Items(This,uFlags,riid,ppv)( (This)->lpVtbl -> Items(This,uFlags,riid,ppv) )
#define IFolderView2_GetSelectionMarkedItem(This,piItem)( (This)->lpVtbl -> GetSelectionMarkedItem(This,piItem) )
#define IFolderView2_GetFocusedItem(This,piItem)( (This)->lpVtbl -> GetFocusedItem(This,piItem) )
#define IFolderView2_GetItemPosition(This,pidl,ppt)( (This)->lpVtbl -> GetItemPosition(This,pidl,ppt) )
#define IFolderView2_GetSpacing(This,ppt)( (This)->lpVtbl -> GetSpacing(This,ppt) )
#define IFolderView2_GetDefaultSpacing(This,ppt)( (This)->lpVtbl -> GetDefaultSpacing(This,ppt) )
#define IFolderView2_GetAutoArrange(This)( (This)->lpVtbl -> GetAutoArrange(This) )
#define IFolderView2_SelectItem(This,iItem,dwFlags)( (This)->lpVtbl -> SelectItem(This,iItem,dwFlags) )
#define IFolderView2_SelectAndPositionItems(This,cidl,apidl,apt,dwFlags)( (This)->lpVtbl -> SelectAndPositionItems(This,cidl,apidl,apt,dwFlags) )
#define IFolderView2_SetGroupBy(This,key,fAscending)( (This)->lpVtbl -> SetGroupBy(This,key,fAscending) )
#define IFolderView2_GetGroupBy(This,pkey,pfAscending)( (This)->lpVtbl -> GetGroupBy(This,pkey,pfAscending) )
#define IFolderView2_SetViewProperty(This,pidl,propkey,propvar)( (This)->lpVtbl -> SetViewProperty(This,pidl,propkey,propvar) )
#define IFolderView2_GetViewProperty(This,pidl,propkey,ppropvar)( (This)->lpVtbl -> GetViewProperty(This,pidl,propkey,ppropvar) )
#define IFolderView2_SetTileViewProperties(This,pidl,pszPropList)( (This)->lpVtbl -> SetTileViewProperties(This,pidl,pszPropList) )
#define IFolderView2_SetExtendedTileViewProperties(This,pidl,pszPropList)( (This)->lpVtbl -> SetExtendedTileViewProperties(This,pidl,pszPropList) )
#define IFolderView2_SetText(This,iType,pwszText)( (This)->lpVtbl -> SetText(This,iType,pwszText) )
#define IFolderView2_SetCurrentFolderFlags(This,dwMask,dwFlags)( (This)->lpVtbl -> SetCurrentFolderFlags(This,dwMask,dwFlags) )
#define IFolderView2_GetCurrentFolderFlags(This,pdwFlags)( (This)->lpVtbl -> GetCurrentFolderFlags(This,pdwFlags) )
#define IFolderView2_GetSortColumnCount(This,pcColumns)( (This)->lpVtbl -> GetSortColumnCount(This,pcColumns) )
#define IFolderView2_SetSortColumns(This,rgSortColumns,cColumns)( (This)->lpVtbl -> SetSortColumns(This,rgSortColumns,cColumns) )
#define IFolderView2_GetSortColumns(This,rgSortColumns,cColumns)( (This)->lpVtbl -> GetSortColumns(This,rgSortColumns,cColumns) )
#define IFolderView2_GetItem(This,iItem,riid,ppv)( (This)->lpVtbl -> GetItem(This,iItem,riid,ppv) )
#define IFolderView2_GetVisibleItem(This,iStart,fPrevious,piItem)( (This)->lpVtbl -> GetVisibleItem(This,iStart,fPrevious,piItem) )
#define IFolderView2_GetSelectedItem(This,iStart,piItem)( (This)->lpVtbl -> GetSelectedItem(This,iStart,piItem) )
#define IFolderView2_GetSelection(This,fNoneImpliesFolder,ppsia)( (This)->lpVtbl -> GetSelection(This,fNoneImpliesFolder,ppsia) )
#define IFolderView2_GetSelectionState(This,pidl,pdwFlags)( (This)->lpVtbl -> GetSelectionState(This,pidl,pdwFlags) )
#define IFolderView2_InvokeVerbOnSelection(This,pszVerb)( (This)->lpVtbl -> InvokeVerbOnSelection(This,pszVerb) )
#define IFolderView2_SetViewModeAndIconSize(This,uViewMode,iImageSize)( (This)->lpVtbl -> SetViewModeAndIconSize(This,uViewMode,iImageSize) )
#define IFolderView2_GetViewModeAndIconSize(This,puViewMode,piImageSize)( (This)->lpVtbl -> GetViewModeAndIconSize(This,puViewMode,piImageSize) )
#define IFolderView2_SetGroupSubsetCount(This,cVisibleRows)( (This)->lpVtbl -> SetGroupSubsetCount(This,cVisibleRows) )
#define IFolderView2_GetGroupSubsetCount(This,pcVisibleRows)( (This)->lpVtbl -> GetGroupSubsetCount(This,pcVisibleRows) )
#define IFolderView2_SetRedraw(This,fRedrawOn)( (This)->lpVtbl -> SetRedraw(This,fRedrawOn) )
#define IFolderView2_IsMoveInSameFolder(This)( (This)->lpVtbl -> IsMoveInSameFolder(This) )
#define IFolderView2_DoRename(This)( (This)->lpVtbl -> DoRename(This) )
#endif
HRESULT STDMETHODCALLTYPE IFolderView2_RemoteGetGroupBy_Proxy(IFolderView2 * This, PROPERTYKEY * pkey, BOOL * pfAscending);
void __RPC_STUB IFolderView2_RemoteGetGroupBy_Stub(IRpcStubBuffer * This, IRpcChannelBuffer * _pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD * _pdwStubPhase);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0025_v0_0_s_ifspec;
#ifndef __IFolderViewSettings_INTERFACE_DEFINED__
#define __IFolderViewSettings_INTERFACE_DEFINED__
extern const IID IID_IFolderViewSettings;
typedef struct IFolderViewSettingsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFolderViewSettings * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFolderViewSettings * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFolderViewSettings * This);
	HRESULT(STDMETHODCALLTYPE * GetColumnPropertyList) (IFolderViewSettings * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetGroupByProperty) (IFolderViewSettings * This, PROPERTYKEY * pkey, BOOL * pfGroupAscending);
	HRESULT(STDMETHODCALLTYPE * GetViewMode) (IFolderViewSettings * This, FOLDERLOGICALVIEWMODE * plvm);
	HRESULT(STDMETHODCALLTYPE * GetIconSize) (IFolderViewSettings * This, UINT * puIconSize);
	HRESULT(STDMETHODCALLTYPE * GetFolderFlags) (IFolderViewSettings * This, FOLDERFLAGS * pfolderMask, FOLDERFLAGS * pfolderFlags);
	HRESULT(STDMETHODCALLTYPE * GetSortColumns) (IFolderViewSettings * This, SORTCOLUMN * rgSortColumns, UINT cColumnsIn, UINT * pcColumnsOut);
	HRESULT(STDMETHODCALLTYPE * GetGroupSubsetCount) (IFolderViewSettings * This, UINT * pcVisibleRows);
	END_INTERFACE
}  IFolderViewSettingsVtbl;
interface IFolderViewSettings
{
	CONST_VTBL struct IFolderViewSettingsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFolderViewSettings_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFolderViewSettings_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFolderViewSettings_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFolderViewSettings_GetColumnPropertyList(This,riid,ppv)( (This)->lpVtbl -> GetColumnPropertyList(This,riid,ppv) )
#define IFolderViewSettings_GetGroupByProperty(This,pkey,pfGroupAscending)( (This)->lpVtbl -> GetGroupByProperty(This,pkey,pfGroupAscending) )
#define IFolderViewSettings_GetViewMode(This,plvm)( (This)->lpVtbl -> GetViewMode(This,plvm) )
#define IFolderViewSettings_GetIconSize(This,puIconSize)( (This)->lpVtbl -> GetIconSize(This,puIconSize) )
#define IFolderViewSettings_GetFolderFlags(This,pfolderMask,pfolderFlags)( (This)->lpVtbl -> GetFolderFlags(This,pfolderMask,pfolderFlags) )
#define IFolderViewSettings_GetSortColumns(This,rgSortColumns,cColumnsIn,pcColumnsOut)( (This)->lpVtbl -> GetSortColumns(This,rgSortColumns,cColumnsIn,pcColumnsOut) )
#define IFolderViewSettings_GetGroupSubsetCount(This,pcVisibleRows)( (This)->lpVtbl -> GetGroupSubsetCount(This,pcVisibleRows) )
#endif
#endif
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0026_v0_0_s_ifspec;
#ifndef __IPreviewHandlerVisuals_INTERFACE_DEFINED__
#define __IPreviewHandlerVisuals_INTERFACE_DEFINED__
extern const IID IID_IPreviewHandlerVisuals;
typedef struct IPreviewHandlerVisualsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPreviewHandlerVisuals * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPreviewHandlerVisuals * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPreviewHandlerVisuals * This);
	HRESULT(STDMETHODCALLTYPE * SetBackgroundColor) (IPreviewHandlerVisuals * This, COLORREF color);
	HRESULT(STDMETHODCALLTYPE * SetFont) (IPreviewHandlerVisuals * This, const LOGFONTW * plf);
	HRESULT(STDMETHODCALLTYPE * SetTextColor) (IPreviewHandlerVisuals * This, COLORREF color);
	END_INTERFACE
}  IPreviewHandlerVisualsVtbl;
interface IPreviewHandlerVisuals
{
	CONST_VTBL struct IPreviewHandlerVisualsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPreviewHandlerVisuals_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPreviewHandlerVisuals_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPreviewHandlerVisuals_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPreviewHandlerVisuals_SetBackgroundColor(This,color)( (This)->lpVtbl -> SetBackgroundColor(This,color) )
#define IPreviewHandlerVisuals_SetFont(This,plf)( (This)->lpVtbl -> SetFont(This,plf) )
#define IPreviewHandlerVisuals_SetTextColor(This,color)( (This)->lpVtbl -> SetTextColor(This,color) )
#endif
#endif
#ifndef __IVisualProperties_INTERFACE_DEFINED__
#define __IVisualProperties_INTERFACE_DEFINED__
typedef enum VPWATERMARKFLAGS
{
	VPWF_DEFAULT = 0,
	VPWF_ALPHABLEND = 0x1
} VPWATERMARKFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(VPWATERMARKFLAGS)
typedef enum VPCOLORFLAGS
{
	VPCF_TEXT = 1,
	VPCF_BACKGROUND = 2,
	VPCF_SORTCOLUMN = 3,
	VPCF_SUBTEXT = 4,
	VPCF_TEXTBACKGROUND = 5
} VPCOLORFLAGS;
extern const IID IID_IVisualProperties;
typedef struct IVisualPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVisualProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVisualProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVisualProperties * This);
	HRESULT(STDMETHODCALLTYPE * SetWatermark) (IVisualProperties * This, HBITMAP hbmp, VPWATERMARKFLAGS vpwf);
	HRESULT(STDMETHODCALLTYPE * SetColor) (IVisualProperties * This, VPCOLORFLAGS vpcf, COLORREF cr);
	HRESULT(STDMETHODCALLTYPE * GetColor) (IVisualProperties * This, VPCOLORFLAGS vpcf, COLORREF * pcr);
	HRESULT(STDMETHODCALLTYPE * SetItemHeight) (IVisualProperties * This, int cyItemInPixels);
	HRESULT(STDMETHODCALLTYPE * GetItemHeight) (IVisualProperties * This, int *cyItemInPixels);
	HRESULT(STDMETHODCALLTYPE * SetFont) (IVisualProperties * This, const LOGFONTW * plf, BOOL bRedraw);
	HRESULT(STDMETHODCALLTYPE * GetFont) (IVisualProperties * This, LOGFONTW * plf);
	HRESULT(STDMETHODCALLTYPE * SetTheme) (IVisualProperties * This, LPCWSTR pszSubAppName, LPCWSTR pszSubIdList);
	END_INTERFACE
}  IVisualPropertiesVtbl;
interface IVisualProperties
{
	CONST_VTBL struct IVisualPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVisualProperties_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVisualProperties_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IVisualProperties_Release(This)( (This)->lpVtbl -> Release(This) )
#define IVisualProperties_SetWatermark(This,hbmp,vpwf)( (This)->lpVtbl -> SetWatermark(This,hbmp,vpwf) )
#define IVisualProperties_SetColor(This,vpcf,cr)( (This)->lpVtbl -> SetColor(This,vpcf,cr) )
#define IVisualProperties_GetColor(This,vpcf,pcr)( (This)->lpVtbl -> GetColor(This,vpcf,pcr) )
#define IVisualProperties_SetItemHeight(This,cyItemInPixels)( (This)->lpVtbl -> SetItemHeight(This,cyItemInPixels) )
#define IVisualProperties_GetItemHeight(This,cyItemInPixels)( (This)->lpVtbl -> GetItemHeight(This,cyItemInPixels) )
#define IVisualProperties_SetFont(This,plf,bRedraw)( (This)->lpVtbl -> SetFont(This,plf,bRedraw) )
#define IVisualProperties_GetFont(This,plf)( (This)->lpVtbl -> GetFont(This,plf) )
#define IVisualProperties_SetTheme(This,pszSubAppName,pszSubIdList)( (This)->lpVtbl -> SetTheme(This,pszSubAppName,pszSubIdList) )
#endif
#endif
#endif
#define CDBOSC_SETFOCUS     0x00000000
#define CDBOSC_KILLFOCUS    0x00000001
#define CDBOSC_SELCHANGE    0x00000002
#define CDBOSC_RENAME       0x00000003
#define CDBOSC_STATECHANGE  0x00000004
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0028_v0_0_s_ifspec;
#ifndef __ICommDlgBrowser_INTERFACE_DEFINED__
#define __ICommDlgBrowser_INTERFACE_DEFINED__
extern const IID IID_ICommDlgBrowser;
typedef struct ICommDlgBrowserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICommDlgBrowser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICommDlgBrowser * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICommDlgBrowser * This);
	HRESULT(STDMETHODCALLTYPE * OnDefaultCommand) (ICommDlgBrowser * This, IShellView * ppshv);
	HRESULT(STDMETHODCALLTYPE * OnStateChange) (ICommDlgBrowser * This, IShellView * ppshv, ULONG uChange);
	HRESULT(STDMETHODCALLTYPE * IncludeObject) (ICommDlgBrowser * This, IShellView * ppshv, PCUITEMID_CHILD pidl);
	END_INTERFACE
}  ICommDlgBrowserVtbl;
interface ICommDlgBrowser
{
	CONST_VTBL struct ICommDlgBrowserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICommDlgBrowser_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICommDlgBrowser_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICommDlgBrowser_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICommDlgBrowser_OnDefaultCommand(This,ppshv)( (This)->lpVtbl -> OnDefaultCommand(This,ppshv) )
#define ICommDlgBrowser_OnStateChange(This,ppshv,uChange)( (This)->lpVtbl -> OnStateChange(This,ppshv,uChange) )
#define ICommDlgBrowser_IncludeObject(This,ppshv,pidl)( (This)->lpVtbl -> IncludeObject(This,ppshv,pidl) )
#endif
#endif
typedef ICommDlgBrowser *LPCOMMDLGBROWSER;
#define SID_SExplorerBrowserFrame IID_ICommDlgBrowser
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#define CDB2N_CONTEXTMENU_DONE  0x00000001
#define CDB2N_CONTEXTMENU_START 0x00000002
#define CDB2GVF_SHOWALLFILES        0x00000001
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define CDB2GVF_ISFILESAVE          0x00000002
#define CDB2GVF_ALLOWPREVIEWPANE    0x00000004
#define CDB2GVF_NOSELECTVERB        0x00000008
#define CDB2GVF_NOINCLUDEITEM       0x00000010
#define CDB2GVF_ISFOLDERPICKER      0x00000020
#define CDB2GVF_ADDSHIELD           0x00000040
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0029_v0_0_s_ifspec;
#ifndef __ICommDlgBrowser2_INTERFACE_DEFINED__
#define __ICommDlgBrowser2_INTERFACE_DEFINED__
extern const IID IID_ICommDlgBrowser2;
typedef struct ICommDlgBrowser2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICommDlgBrowser2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICommDlgBrowser2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICommDlgBrowser2 * This);
	HRESULT(STDMETHODCALLTYPE * OnDefaultCommand) (ICommDlgBrowser2 * This, IShellView * ppshv);
	HRESULT(STDMETHODCALLTYPE * OnStateChange) (ICommDlgBrowser2 * This, IShellView * ppshv, ULONG uChange);
	HRESULT(STDMETHODCALLTYPE * IncludeObject) (ICommDlgBrowser2 * This, IShellView * ppshv, PCUITEMID_CHILD pidl);
	HRESULT(STDMETHODCALLTYPE * Notify) (ICommDlgBrowser2 * This, IShellView * ppshv, DWORD dwNotifyType);
	HRESULT(STDMETHODCALLTYPE * GetDefaultMenuText) (ICommDlgBrowser2 * This, IShellView * ppshv, LPWSTR pszText, int cchMax);
	HRESULT(STDMETHODCALLTYPE * GetViewFlags) (ICommDlgBrowser2 * This, DWORD * pdwFlags);
	END_INTERFACE
}  ICommDlgBrowser2Vtbl;
interface ICommDlgBrowser2
{
	CONST_VTBL struct ICommDlgBrowser2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICommDlgBrowser2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICommDlgBrowser2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICommDlgBrowser2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICommDlgBrowser2_OnDefaultCommand(This,ppshv)( (This)->lpVtbl -> OnDefaultCommand(This,ppshv) )
#define ICommDlgBrowser2_OnStateChange(This,ppshv,uChange)( (This)->lpVtbl -> OnStateChange(This,ppshv,uChange) )
#define ICommDlgBrowser2_IncludeObject(This,ppshv,pidl)( (This)->lpVtbl -> IncludeObject(This,ppshv,pidl) )
#define ICommDlgBrowser2_Notify(This,ppshv,dwNotifyType)( (This)->lpVtbl -> Notify(This,ppshv,dwNotifyType) )
#define ICommDlgBrowser2_GetDefaultMenuText(This,ppshv,pszText,cchMax)( (This)->lpVtbl -> GetDefaultMenuText(This,ppshv,pszText,cchMax) )
#define ICommDlgBrowser2_GetViewFlags(This,pdwFlags)( (This)->lpVtbl -> GetViewFlags(This,pdwFlags) )
#endif
#endif
typedef ICommDlgBrowser2 *LPCOMMDLGBROWSER2;
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0030_v0_0_s_ifspec;
#ifndef __ICommDlgBrowser3_INTERFACE_DEFINED__
#define __ICommDlgBrowser3_INTERFACE_DEFINED__
extern const IID IID_ICommDlgBrowser3;
typedef struct ICommDlgBrowser3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICommDlgBrowser3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICommDlgBrowser3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICommDlgBrowser3 * This);
	HRESULT(STDMETHODCALLTYPE * OnDefaultCommand) (ICommDlgBrowser3 * This, IShellView * ppshv);
	HRESULT(STDMETHODCALLTYPE * OnStateChange) (ICommDlgBrowser3 * This, IShellView * ppshv, ULONG uChange);
	HRESULT(STDMETHODCALLTYPE * IncludeObject) (ICommDlgBrowser3 * This, IShellView * ppshv, PCUITEMID_CHILD pidl);
	HRESULT(STDMETHODCALLTYPE * Notify) (ICommDlgBrowser3 * This, IShellView * ppshv, DWORD dwNotifyType);
	HRESULT(STDMETHODCALLTYPE * GetDefaultMenuText) (ICommDlgBrowser3 * This, IShellView * ppshv, LPWSTR pszText, int cchMax);
	HRESULT(STDMETHODCALLTYPE * GetViewFlags) (ICommDlgBrowser3 * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * OnColumnClicked) (ICommDlgBrowser3 * This, IShellView * ppshv, int iColumn);
	HRESULT(STDMETHODCALLTYPE * GetCurrentFilter) (ICommDlgBrowser3 * This, LPWSTR pszFileSpec, int cchFileSpec);
	HRESULT(STDMETHODCALLTYPE * OnPreViewCreated) (ICommDlgBrowser3 * This, IShellView * ppshv);
	END_INTERFACE
}  ICommDlgBrowser3Vtbl;
interface ICommDlgBrowser3
{
	CONST_VTBL struct ICommDlgBrowser3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICommDlgBrowser3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICommDlgBrowser3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICommDlgBrowser3_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICommDlgBrowser3_OnDefaultCommand(This,ppshv)( (This)->lpVtbl -> OnDefaultCommand(This,ppshv) )
#define ICommDlgBrowser3_OnStateChange(This,ppshv,uChange)( (This)->lpVtbl -> OnStateChange(This,ppshv,uChange) )
#define ICommDlgBrowser3_IncludeObject(This,ppshv,pidl)( (This)->lpVtbl -> IncludeObject(This,ppshv,pidl) )
#define ICommDlgBrowser3_Notify(This,ppshv,dwNotifyType)( (This)->lpVtbl -> Notify(This,ppshv,dwNotifyType) )
#define ICommDlgBrowser3_GetDefaultMenuText(This,ppshv,pszText,cchMax)( (This)->lpVtbl -> GetDefaultMenuText(This,ppshv,pszText,cchMax) )
#define ICommDlgBrowser3_GetViewFlags(This,pdwFlags)( (This)->lpVtbl -> GetViewFlags(This,pdwFlags) )
#define ICommDlgBrowser3_OnColumnClicked(This,ppshv,iColumn)( (This)->lpVtbl -> OnColumnClicked(This,ppshv,iColumn) )
#define ICommDlgBrowser3_GetCurrentFilter(This,pszFileSpec,cchFileSpec)( (This)->lpVtbl -> GetCurrentFilter(This,pszFileSpec,cchFileSpec) )
#define ICommDlgBrowser3_OnPreViewCreated(This,ppshv)( (This)->lpVtbl -> OnPreViewCreated(This,ppshv) )
#endif
#endif
typedef enum CM_MASK
{
	CM_MASK_WIDTH = 0x1,
	CM_MASK_DEFAULTWIDTH = 0x2,
	CM_MASK_IDEALWIDTH = 0x4,
	CM_MASK_NAME = 0x8,
	CM_MASK_STATE = 0x10
} CM_MASK;
DEFINE_ENUM_FLAG_OPERATORS(CM_MASK)
typedef enum CM_STATE
{
	CM_STATE_NONE = 0,
	CM_STATE_VISIBLE = 0x1,
	CM_STATE_FIXEDWIDTH = 0x2,
	CM_STATE_NOSORTBYFOLDERNESS = 0x4,
	CM_STATE_ALWAYSVISIBLE = 0x8
} CM_STATE;
DEFINE_ENUM_FLAG_OPERATORS(CM_STATE)
typedef enum CM_ENUM_FLAGS
{
	CM_ENUM_ALL = 0x1,
	CM_ENUM_VISIBLE = 0x2
} CM_ENUM_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(CM_ENUM_FLAGS)
typedef enum CM_SET_WIDTH_VALUE
{
	CM_WIDTH_USEDEFAULT = -1,
	CM_WIDTH_AUTOSIZE = -2
} CM_SET_WIDTH_VALUE;
typedef struct CM_COLUMNINFO
{
	DWORD cbSize;
	DWORD dwMask;
	DWORD dwState;
	UINT uWidth;
	UINT uDefaultWidth;
	UINT uIdealWidth;
	WCHAR wszName[80];
} CM_COLUMNINFO;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0031_v0_0_s_ifspec;
#ifndef __IColumnManager_INTERFACE_DEFINED__
#define __IColumnManager_INTERFACE_DEFINED__
extern const IID IID_IColumnManager;
typedef struct IColumnManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IColumnManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IColumnManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IColumnManager * This);
	HRESULT(STDMETHODCALLTYPE * SetColumnInfo) (IColumnManager * This, REFPROPERTYKEY propkey, const CM_COLUMNINFO * pcmci);
	HRESULT(STDMETHODCALLTYPE * GetColumnInfo) (IColumnManager * This, REFPROPERTYKEY propkey, CM_COLUMNINFO * pcmci);
	HRESULT(STDMETHODCALLTYPE * GetColumnCount) (IColumnManager * This, CM_ENUM_FLAGS dwFlags, UINT * puCount);
	HRESULT(STDMETHODCALLTYPE * GetColumns) (IColumnManager * This, CM_ENUM_FLAGS dwFlags, PROPERTYKEY * rgkeyOrder, UINT cColumns);
	HRESULT(STDMETHODCALLTYPE * SetColumns) (IColumnManager * This, const PROPERTYKEY * rgkeyOrder, UINT cVisible);
	END_INTERFACE
}  IColumnManagerVtbl;
interface IColumnManager
{
	CONST_VTBL struct IColumnManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IColumnManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IColumnManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IColumnManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IColumnManager_SetColumnInfo(This,propkey,pcmci)( (This)->lpVtbl -> SetColumnInfo(This,propkey,pcmci) )
#define IColumnManager_GetColumnInfo(This,propkey,pcmci)( (This)->lpVtbl -> GetColumnInfo(This,propkey,pcmci) )
#define IColumnManager_GetColumnCount(This,dwFlags,puCount)( (This)->lpVtbl -> GetColumnCount(This,dwFlags,puCount) )
#define IColumnManager_GetColumns(This,dwFlags,rgkeyOrder,cColumns)( (This)->lpVtbl -> GetColumns(This,dwFlags,rgkeyOrder,cColumns) )
#define IColumnManager_SetColumns(This,rgkeyOrder,cVisible)( (This)->lpVtbl -> SetColumns(This,rgkeyOrder,cVisible) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0032_v0_0_s_ifspec;
#ifndef __IFolderFilterSite_INTERFACE_DEFINED__
#define __IFolderFilterSite_INTERFACE_DEFINED__
extern const IID IID_IFolderFilterSite;
typedef struct IFolderFilterSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFolderFilterSite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFolderFilterSite * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFolderFilterSite * This);
	HRESULT(STDMETHODCALLTYPE * SetFilter) (IFolderFilterSite * This, IUnknown * punk);
	END_INTERFACE
}  IFolderFilterSiteVtbl;
interface IFolderFilterSite
{
	CONST_VTBL struct IFolderFilterSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFolderFilterSite_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFolderFilterSite_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFolderFilterSite_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFolderFilterSite_SetFilter(This,punk)( (This)->lpVtbl -> SetFilter(This,punk) )
#endif
#endif
#ifndef __IFolderFilter_INTERFACE_DEFINED__
#define __IFolderFilter_INTERFACE_DEFINED__
extern const IID IID_IFolderFilter;
typedef struct IFolderFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFolderFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFolderFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFolderFilter * This);
	HRESULT(STDMETHODCALLTYPE * ShouldShow) (IFolderFilter * This, IShellFolder * psf, PCIDLIST_ABSOLUTE pidlFolder, PCUITEMID_CHILD pidlItem);
	HRESULT(STDMETHODCALLTYPE * GetEnumFlags) (IFolderFilter * This, IShellFolder * psf, PCIDLIST_ABSOLUTE pidlFolder, HWND * phwnd, DWORD * pgrfFlags);
	END_INTERFACE
}  IFolderFilterVtbl;
interface IFolderFilter
{
	CONST_VTBL struct IFolderFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFolderFilter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFolderFilter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFolderFilter_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFolderFilter_ShouldShow(This,psf,pidlFolder,pidlItem)( (This)->lpVtbl -> ShouldShow(This,psf,pidlFolder,pidlItem) )
#define IFolderFilter_GetEnumFlags(This,psf,pidlFolder,phwnd,pgrfFlags)( (This)->lpVtbl -> GetEnumFlags(This,psf,pidlFolder,phwnd,pgrfFlags) )
#endif
#endif
#ifndef __IInputObjectSite_INTERFACE_DEFINED__
#define __IInputObjectSite_INTERFACE_DEFINED__
extern const IID IID_IInputObjectSite;
typedef struct IInputObjectSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInputObjectSite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInputObjectSite * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInputObjectSite * This);
	HRESULT(STDMETHODCALLTYPE * OnFocusChangeIS) (IInputObjectSite * This, IUnknown * punkObj, BOOL fSetFocus);
	END_INTERFACE
}  IInputObjectSiteVtbl;
interface IInputObjectSite
{
	CONST_VTBL struct IInputObjectSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInputObjectSite_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInputObjectSite_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInputObjectSite_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInputObjectSite_OnFocusChangeIS(This,punkObj,fSetFocus)( (This)->lpVtbl -> OnFocusChangeIS(This,punkObj,fSetFocus) )
#endif
#endif
#ifndef __IInputObject_INTERFACE_DEFINED__
#define __IInputObject_INTERFACE_DEFINED__
extern const IID IID_IInputObject;
typedef struct IInputObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInputObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInputObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInputObject * This);
	HRESULT(STDMETHODCALLTYPE * UIActivateIO) (IInputObject * This, BOOL fActivate, MSG * pMsg);
	HRESULT(STDMETHODCALLTYPE * HasFocusIO) (IInputObject * This);
	HRESULT(STDMETHODCALLTYPE * TranslateAcceleratorIO) (IInputObject * This, MSG * pMsg);
	END_INTERFACE
}  IInputObjectVtbl;
interface IInputObject
{
	CONST_VTBL struct IInputObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInputObject_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInputObject_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInputObject_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInputObject_UIActivateIO(This,fActivate,pMsg)( (This)->lpVtbl -> UIActivateIO(This,fActivate,pMsg) )
#define IInputObject_HasFocusIO(This)( (This)->lpVtbl -> HasFocusIO(This) )
#define IInputObject_TranslateAcceleratorIO(This,pMsg)( (This)->lpVtbl -> TranslateAcceleratorIO(This,pMsg) )
#endif
#endif
#ifndef __IInputObject2_INTERFACE_DEFINED__
#define __IInputObject2_INTERFACE_DEFINED__
extern const IID IID_IInputObject2;
typedef struct IInputObject2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInputObject2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInputObject2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInputObject2 * This);
	HRESULT(STDMETHODCALLTYPE * UIActivateIO) (IInputObject2 * This, BOOL fActivate, MSG * pMsg);
	HRESULT(STDMETHODCALLTYPE * HasFocusIO) (IInputObject2 * This);
	HRESULT(STDMETHODCALLTYPE * TranslateAcceleratorIO) (IInputObject2 * This, MSG * pMsg);
	HRESULT(STDMETHODCALLTYPE * TranslateAcceleratorGlobal) (IInputObject2 * This, MSG * pMsg);
	END_INTERFACE
}  IInputObject2Vtbl;
interface IInputObject2
{
	CONST_VTBL struct IInputObject2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInputObject2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInputObject2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInputObject2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInputObject2_UIActivateIO(This,fActivate,pMsg)( (This)->lpVtbl -> UIActivateIO(This,fActivate,pMsg) )
#define IInputObject2_HasFocusIO(This)( (This)->lpVtbl -> HasFocusIO(This) )
#define IInputObject2_TranslateAcceleratorIO(This,pMsg)( (This)->lpVtbl -> TranslateAcceleratorIO(This,pMsg) )
#define IInputObject2_TranslateAcceleratorGlobal(This,pMsg)( (This)->lpVtbl -> TranslateAcceleratorGlobal(This,pMsg) )
#endif
#endif
#ifndef __IShellIcon_INTERFACE_DEFINED__
#define __IShellIcon_INTERFACE_DEFINED__
extern const IID IID_IShellIcon;
typedef struct IShellIconVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellIcon * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellIcon * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellIcon * This);
	HRESULT(STDMETHODCALLTYPE * GetIconOf) (IShellIcon * This, PCUITEMID_CHILD pidl, UINT flags, int *pIconIndex);
	END_INTERFACE
}  IShellIconVtbl;
interface IShellIcon
{
	CONST_VTBL struct IShellIconVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellIcon_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellIcon_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellIcon_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellIcon_GetIconOf(This,pidl,flags,pIconIndex)( (This)->lpVtbl -> GetIconOf(This,pidl,flags,pIconIndex) )
#endif
#endif
#define SBSP_DEFBROWSER         0x0000
#define SBSP_SAMEBROWSER        0x0001
#define SBSP_NEWBROWSER         0x0002
#define SBSP_DEFMODE            0x0000
#define SBSP_OPENMODE           0x0010
#define SBSP_EXPLOREMODE        0x0020
#define SBSP_HELPMODE           0x0040
#define SBSP_NOTRANSFERHIST     0x0080
#define SBSP_ABSOLUTE           0x0000
#define SBSP_RELATIVE           0x1000
#define SBSP_PARENT             0x2000
#define SBSP_NAVIGATEBACK       0x4000
#define SBSP_NAVIGATEFORWARD    0x8000
#define SBSP_ALLOW_AUTONAVIGATE   0x00010000
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define SBSP_KEEPSAMETEMPLATE     0x00020000
#define SBSP_KEEPWORDWHEELTEXT    0x00040000
#define SBSP_ACTIVATE_NOFOCUS     0x00080000
#define SBSP_CREATENOHISTORY      0x00100000
#define SBSP_PLAYNOSOUND          0x00200000
#endif
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define SBSP_CALLERUNTRUSTED      0x00800000
#define SBSP_TRUSTFIRSTDOWNLOAD   0x01000000
#define SBSP_UNTRUSTEDFORDOWNLOAD 0x02000000
#endif
#define SBSP_NOAUTOSELECT         0x04000000
#define SBSP_WRITENOHISTORY       0x08000000
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
#define SBSP_TRUSTEDFORACTIVEX    0x10000000
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SBSP_FEEDNAVIGATION       0x20000000
#endif
#define SBSP_REDIRECT                     0x40000000
#define SBSP_INITIATEDBYHLINKFRAME        0x80000000
#define FCW_STATUS         0x0001
#define FCW_TOOLBAR        0x0002
#define FCW_TREE           0x0003
#define FCW_INTERNETBAR    0x0006
#define FCW_PROGRESS       0x0008
#if (_WIN32_IE >= 0x0700)
#endif
#define FCT_MERGE       0x0001
#define FCT_CONFIGABLE  0x0002
#define FCT_ADDTOEND    0x0004
#ifdef _NEVER_
typedef LPARAM LPTBBUTTONSB;
#else
#include <commctrl.h>
typedef LPTBBUTTON LPTBBUTTONSB;
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0038_v0_0_s_ifspec;
#ifndef __IShellBrowser_INTERFACE_DEFINED__
#define __IShellBrowser_INTERFACE_DEFINED__
extern const IID IID_IShellBrowser;
typedef struct IShellBrowserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellBrowser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellBrowser * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellBrowser * This);
	HRESULT(STDMETHODCALLTYPE * GetWindow) (IShellBrowser * This, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * ContextSensitiveHelp) (IShellBrowser * This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE * InsertMenusSB) (IShellBrowser * This, HMENU hmenuShared, LPOLEMENUGROUPWIDTHS lpMenuWidths);
	HRESULT(STDMETHODCALLTYPE * SetMenuSB) (IShellBrowser * This, HMENU hmenuShared, HOLEMENU holemenuRes, HWND hwndActiveObject);
	HRESULT(STDMETHODCALLTYPE * RemoveMenusSB) (IShellBrowser * This, HMENU hmenuShared);
	HRESULT(STDMETHODCALLTYPE * SetStatusTextSB) (IShellBrowser * This, LPCWSTR pszStatusText);
	HRESULT(STDMETHODCALLTYPE * EnableModelessSB) (IShellBrowser * This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * TranslateAcceleratorSB) (IShellBrowser * This, MSG * pmsg, WORD wID);
	HRESULT(STDMETHODCALLTYPE * BrowseObject) (IShellBrowser * This, PCUIDLIST_RELATIVE pidl, UINT wFlags);
	HRESULT(STDMETHODCALLTYPE * GetViewStateStream) (IShellBrowser * This, DWORD grfMode, IStream ** ppStrm);
	HRESULT(STDMETHODCALLTYPE * GetControlWindow) (IShellBrowser * This, UINT id, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * SendControlMsg) (IShellBrowser * This, UINT id, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT * pret);
	HRESULT(STDMETHODCALLTYPE * QueryActiveShellView) (IShellBrowser * This, IShellView ** ppshv);
	HRESULT(STDMETHODCALLTYPE * OnViewWindowActive) (IShellBrowser * This, IShellView * pshv);
	HRESULT(STDMETHODCALLTYPE * SetToolbarItems) (IShellBrowser * This, LPTBBUTTONSB lpButtons, UINT nButtons, UINT uFlags);
	END_INTERFACE
}  IShellBrowserVtbl;
interface IShellBrowser
{
	CONST_VTBL struct IShellBrowserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellBrowser_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellBrowser_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellBrowser_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellBrowser_GetWindow(This,phwnd)( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IShellBrowser_ContextSensitiveHelp(This,fEnterMode)( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IShellBrowser_InsertMenusSB(This,hmenuShared,lpMenuWidths)( (This)->lpVtbl -> InsertMenusSB(This,hmenuShared,lpMenuWidths) )
#define IShellBrowser_SetMenuSB(This,hmenuShared,holemenuRes,hwndActiveObject)( (This)->lpVtbl -> SetMenuSB(This,hmenuShared,holemenuRes,hwndActiveObject) )
#define IShellBrowser_RemoveMenusSB(This,hmenuShared)( (This)->lpVtbl -> RemoveMenusSB(This,hmenuShared) )
#define IShellBrowser_SetStatusTextSB(This,pszStatusText)( (This)->lpVtbl -> SetStatusTextSB(This,pszStatusText) )
#define IShellBrowser_EnableModelessSB(This,fEnable)( (This)->lpVtbl -> EnableModelessSB(This,fEnable) )
#define IShellBrowser_TranslateAcceleratorSB(This,pmsg,wID)( (This)->lpVtbl -> TranslateAcceleratorSB(This,pmsg,wID) )
#define IShellBrowser_BrowseObject(This,pidl,wFlags)( (This)->lpVtbl -> BrowseObject(This,pidl,wFlags) )
#define IShellBrowser_GetViewStateStream(This,grfMode,ppStrm)( (This)->lpVtbl -> GetViewStateStream(This,grfMode,ppStrm) )
#define IShellBrowser_GetControlWindow(This,id,phwnd)( (This)->lpVtbl -> GetControlWindow(This,id,phwnd) )
#define IShellBrowser_SendControlMsg(This,id,uMsg,wParam,lParam,pret)( (This)->lpVtbl -> SendControlMsg(This,id,uMsg,wParam,lParam,pret) )
#define IShellBrowser_QueryActiveShellView(This,ppshv)( (This)->lpVtbl -> QueryActiveShellView(This,ppshv) )
#define IShellBrowser_OnViewWindowActive(This,pshv)( (This)->lpVtbl -> OnViewWindowActive(This,pshv) )
#define IShellBrowser_SetToolbarItems(This,lpButtons,nButtons,uFlags)( (This)->lpVtbl -> SetToolbarItems(This,lpButtons,nButtons,uFlags) )
#endif
#endif
typedef IShellBrowser *LPSHELLBROWSER;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0039_v0_0_s_ifspec;
#ifndef __IProfferService_INTERFACE_DEFINED__
#define __IProfferService_INTERFACE_DEFINED__
extern const IID IID_IProfferService;
typedef struct IProfferServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProfferService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProfferService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProfferService * This);
	HRESULT(STDMETHODCALLTYPE * ProfferService) (IProfferService * This, REFGUID guidService, IServiceProvider * psp, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * RevokeService) (IProfferService * This, DWORD dwCookie);
	END_INTERFACE
}  IProfferServiceVtbl;
interface IProfferService
{
	CONST_VTBL struct IProfferServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProfferService_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProfferService_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IProfferService_Release(This)( (This)->lpVtbl -> Release(This) )
#define IProfferService_ProfferService(This,guidService,psp,pdwCookie)( (This)->lpVtbl -> ProfferService(This,guidService,psp,pdwCookie) )
#define IProfferService_RevokeService(This,dwCookie)( (This)->lpVtbl -> RevokeService(This,dwCookie) )
#endif
#endif
#define SID_SProfferService IID_IProfferService
#define STR_DONT_RESOLVE_LINK      L"Don't Resolve Link"
#define STR_GET_ASYNC_HANDLER L"GetAsyncHandler"
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0040_v0_0_s_ifspec;
#ifndef __IShellItem_INTERFACE_DEFINED__
#define __IShellItem_INTERFACE_DEFINED__
typedef enum _SIGDN
{
	SIGDN_NORMALDISPLAY = 0,
	SIGDN_PARENTRELATIVEPARSING = (int)0x80018001,
	SIGDN_DESKTOPABSOLUTEPARSING = (int)0x80028000,
	SIGDN_PARENTRELATIVEEDITING = (int)0x80031001,
	SIGDN_DESKTOPABSOLUTEEDITING = (int)0x8004c000,
	SIGDN_FILESYSPATH = (int)0x80058000,
	SIGDN_URL = (int)0x80068000,
	SIGDN_PARENTRELATIVEFORADDRESSBAR = (int)0x8007c001,
	SIGDN_PARENTRELATIVE = (int)0x80080001
} SIGDN;
enum _SICHINTF
{
	SICHINT_DISPLAY = 0,
	SICHINT_ALLFIELDS = (int)0x80000000,
	SICHINT_CANONICAL = 0x10000000,
	SICHINT_TEST_FILESYSPATH_IF_NOT_EQUAL = 0x20000000
};
typedef DWORD SICHINTF;
extern const IID IID_IShellItem;
typedef struct IShellItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellItem * This);
	HRESULT(STDMETHODCALLTYPE * BindToHandler) (IShellItem * This, IBindCtx * pbc, REFGUID bhid, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetParent) (IShellItem * This, IShellItem ** ppsi);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (IShellItem * This, SIGDN sigdnName, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (IShellItem * This, SFGAOF sfgaoMask, SFGAOF * psfgaoAttribs);
	HRESULT(STDMETHODCALLTYPE * Compare) (IShellItem * This, IShellItem * psi, SICHINTF hint, int *piOrder);
	END_INTERFACE
}  IShellItemVtbl;
interface IShellItem
{
	CONST_VTBL struct IShellItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellItem_BindToHandler(This,pbc,bhid,riid,ppv)( (This)->lpVtbl -> BindToHandler(This,pbc,bhid,riid,ppv) )
#define IShellItem_GetParent(This,ppsi)( (This)->lpVtbl -> GetParent(This,ppsi) )
#define IShellItem_GetDisplayName(This,sigdnName,ppszName)( (This)->lpVtbl -> GetDisplayName(This,sigdnName,ppszName) )
#define IShellItem_GetAttributes(This,sfgaoMask,psfgaoAttribs)( (This)->lpVtbl -> GetAttributes(This,sfgaoMask,psfgaoAttribs) )
#define IShellItem_Compare(This,psi,hint,piOrder)( (This)->lpVtbl -> Compare(This,psi,hint,piOrder) )
#endif
#endif
SHSTDAPI_(PIDLIST_ABSOLUTE)SHSimpleIDListFromPath(LPCWSTR pszPath);
#if (_WIN32_IE >= _WIN32_IE_IE70)
SHSTDAPI SHCreateItemFromIDList(PCIDLIST_ABSOLUTE pidl, REFIID riid, void **ppv);
SHSTDAPI SHCreateItemFromParsingName(PCWSTR pszPath, IBindCtx *pbc, REFIID riid, void **ppv);
SHSTDAPI SHCreateItemWithParent(PCIDLIST_ABSOLUTE pidlParent, IShellFolder *psfParent, PCUITEMID_CHILD pidl, REFIID riid, void **ppvItem);
SHSTDAPI SHCreateItemFromRelativeName(IShellItem *psiParent, PCWSTR pszName, IBindCtx *pbc, REFIID riid, void **ppv);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI SHCreateItemInKnownFolder(REFKNOWNFOLDERID kfid, DWORD dwKFFlags, PCWSTR pszItem, REFIID riid, void **ppv);
SHSTDAPI SHGetIDListFromObject(IUnknown *punk, PIDLIST_ABSOLUTE *ppidl);
SHSTDAPI SHGetItemFromObject(IUnknown *punk, REFIID riid, void **ppv);
SHSTDAPI SHGetPropertyStoreFromIDList(PCIDLIST_ABSOLUTE pidl, GETPROPERTYSTOREFLAGS flags, REFIID riid, void **ppv);
SHSTDAPI SHGetPropertyStoreFromParsingName(PCWSTR pszPath, IBindCtx *pbc, GETPROPERTYSTOREFLAGS flags, REFIID riid, void **ppv);
SHSTDAPI SHGetNameFromIDList(PCIDLIST_ABSOLUTE pidl, SIGDN sigdnName, PWSTR *ppszName);
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
typedef enum DATAOBJ_GET_ITEM_FLAGS
{
	DOGIF_DEFAULT = 0,
	DOGIF_TRAVERSE_LINK = 0x1,
	DOGIF_NO_HDROP = 0x2,
	DOGIF_NO_URL = 0x4,
	DOGIF_ONLY_IF_ONE = 0x8
} DATAOBJ_GET_ITEM_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(DATAOBJ_GET_ITEM_FLAGS)
STDAPI SHGetItemFromDataObject(IDataObject * pdtobj, DATAOBJ_GET_ITEM_FLAGS dwFlags, REFIID riid, void **ppv);
#endif
#define STR_GPS_HANDLERPROPERTIESONLY      L"GPS_HANDLERPROPERTIESONLY"
#define STR_GPS_FASTPROPERTIESONLY         L"GPS_FASTPROPERTIESONLY"
#define STR_GPS_OPENSLOWITEM               L"GPS_OPENSLOWITEM"
#define STR_GPS_DELAYCREATION              L"GPS_DELAYCREATION"
#define STR_GPS_BESTEFFORT                 L"GPS_BESTEFFORT"
#define STR_GPS_NO_OPLOCK                  L"GPS_NO_OPLOCK"
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0041_v0_0_s_ifspec;
#ifndef __IShellItem2_INTERFACE_DEFINED__
#define __IShellItem2_INTERFACE_DEFINED__
extern const IID IID_IShellItem2;
typedef struct IShellItem2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellItem2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellItem2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellItem2 * This);
	HRESULT(STDMETHODCALLTYPE * BindToHandler) (IShellItem2 * This, IBindCtx * pbc, REFGUID bhid, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetParent) (IShellItem2 * This, IShellItem ** ppsi);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (IShellItem2 * This, SIGDN sigdnName, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (IShellItem2 * This, SFGAOF sfgaoMask, SFGAOF * psfgaoAttribs);
	HRESULT(STDMETHODCALLTYPE * Compare) (IShellItem2 * This, IShellItem * psi, SICHINTF hint, int *piOrder);
	HRESULT(STDMETHODCALLTYPE * GetPropertyStore) (IShellItem2 * This, GETPROPERTYSTOREFLAGS flags, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetPropertyStoreWithCreateObject) (IShellItem2 * This, GETPROPERTYSTOREFLAGS flags, IUnknown * punkCreateObject, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetPropertyStoreForKeys) (IShellItem2 * This, const PROPERTYKEY * rgKeys, UINT cKeys, GETPROPERTYSTOREFLAGS flags, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetPropertyDescriptionList) (IShellItem2 * This, REFPROPERTYKEY keyType, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * Update) (IShellItem2 * This, IBindCtx * pbc);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IShellItem2 * This, REFPROPERTYKEY key, PROPVARIANT * ppropvar);
	HRESULT(STDMETHODCALLTYPE * GetCLSID) (IShellItem2 * This, REFPROPERTYKEY key, CLSID * pclsid);
	HRESULT(STDMETHODCALLTYPE * GetFileTime) (IShellItem2 * This, REFPROPERTYKEY key, FILETIME * pft);
	HRESULT(STDMETHODCALLTYPE * GetInt32) (IShellItem2 * This, REFPROPERTYKEY key, int *pi);
	HRESULT(STDMETHODCALLTYPE * GetString) (IShellItem2 * This, REFPROPERTYKEY key, LPWSTR * ppsz);
	HRESULT(STDMETHODCALLTYPE * GetUInt32) (IShellItem2 * This, REFPROPERTYKEY key, ULONG * pui);
	HRESULT(STDMETHODCALLTYPE * GetUInt64) (IShellItem2 * This, REFPROPERTYKEY key, ULONGLONG * pull);
	HRESULT(STDMETHODCALLTYPE * GetBool) (IShellItem2 * This, REFPROPERTYKEY key, BOOL * pf);
	END_INTERFACE
}  IShellItem2Vtbl;
interface IShellItem2
{
	CONST_VTBL struct IShellItem2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellItem2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellItem2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellItem2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellItem2_BindToHandler(This,pbc,bhid,riid,ppv)( (This)->lpVtbl -> BindToHandler(This,pbc,bhid,riid,ppv) )
#define IShellItem2_GetParent(This,ppsi)( (This)->lpVtbl -> GetParent(This,ppsi) )
#define IShellItem2_GetDisplayName(This,sigdnName,ppszName)( (This)->lpVtbl -> GetDisplayName(This,sigdnName,ppszName) )
#define IShellItem2_GetAttributes(This,sfgaoMask,psfgaoAttribs)( (This)->lpVtbl -> GetAttributes(This,sfgaoMask,psfgaoAttribs) )
#define IShellItem2_Compare(This,psi,hint,piOrder)( (This)->lpVtbl -> Compare(This,psi,hint,piOrder) )
#define IShellItem2_GetPropertyStore(This,flags,riid,ppv)( (This)->lpVtbl -> GetPropertyStore(This,flags,riid,ppv) )
#define IShellItem2_GetPropertyStoreWithCreateObject(This,flags,punkCreateObject,riid,ppv)( (This)->lpVtbl -> GetPropertyStoreWithCreateObject(This,flags,punkCreateObject,riid,ppv) )
#define IShellItem2_GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv)( (This)->lpVtbl -> GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv) )
#define IShellItem2_GetPropertyDescriptionList(This,keyType,riid,ppv)( (This)->lpVtbl -> GetPropertyDescriptionList(This,keyType,riid,ppv) )
#define IShellItem2_Update(This,pbc)( (This)->lpVtbl -> Update(This,pbc) )
#define IShellItem2_GetProperty(This,key,ppropvar)( (This)->lpVtbl -> GetProperty(This,key,ppropvar) )
#define IShellItem2_GetCLSID(This,key,pclsid)( (This)->lpVtbl -> GetCLSID(This,key,pclsid) )
#define IShellItem2_GetFileTime(This,key,pft)( (This)->lpVtbl -> GetFileTime(This,key,pft) )
#define IShellItem2_GetInt32(This,key,pi)( (This)->lpVtbl -> GetInt32(This,key,pi) )
#define IShellItem2_GetString(This,key,ppsz)( (This)->lpVtbl -> GetString(This,key,ppsz) )
#define IShellItem2_GetUInt32(This,key,pui)( (This)->lpVtbl -> GetUInt32(This,key,pui) )
#define IShellItem2_GetUInt64(This,key,pull)( (This)->lpVtbl -> GetUInt64(This,key,pull) )
#define IShellItem2_GetBool(This,key,pf)( (This)->lpVtbl -> GetBool(This,key,pf) )
#endif
#endif
enum _SIIGBF
{
	SIIGBF_RESIZETOFIT = 0,
	SIIGBF_BIGGERSIZEOK = 0x1,
	SIIGBF_MEMORYONLY = 0x2,
	SIIGBF_ICONONLY = 0x4,
	SIIGBF_THUMBNAILONLY = 0x8,
	SIIGBF_INCACHEONLY = 0x10
};
typedef int SIIGBF;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0042_v0_0_s_ifspec;
#ifndef __IShellItemImageFactory_INTERFACE_DEFINED__
#define __IShellItemImageFactory_INTERFACE_DEFINED__
extern const IID IID_IShellItemImageFactory;
typedef struct IShellItemImageFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellItemImageFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellItemImageFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellItemImageFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetImage) (IShellItemImageFactory * This, SIZE size, SIIGBF flags, HBITMAP * phbm);
	END_INTERFACE
}  IShellItemImageFactoryVtbl;
interface IShellItemImageFactory
{
	CONST_VTBL struct IShellItemImageFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellItemImageFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellItemImageFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellItemImageFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellItemImageFactory_GetImage(This,size,flags,phbm)( (This)->lpVtbl -> GetImage(This,size,flags,phbm) )
#endif
#endif
#ifndef __IUserAccountChangeCallback_INTERFACE_DEFINED__
#define __IUserAccountChangeCallback_INTERFACE_DEFINED__
extern const IID IID_IUserAccountChangeCallback;
typedef struct IUserAccountChangeCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUserAccountChangeCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUserAccountChangeCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUserAccountChangeCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnPictureChange) (IUserAccountChangeCallback * This, LPCWSTR pszUserName);
	END_INTERFACE
}  IUserAccountChangeCallbackVtbl;
interface IUserAccountChangeCallback
{
	CONST_VTBL struct IUserAccountChangeCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUserAccountChangeCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUserAccountChangeCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IUserAccountChangeCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IUserAccountChangeCallback_OnPictureChange(This,pszUserName)( (This)->lpVtbl -> OnPictureChange(This,pszUserName) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0044_v0_0_s_ifspec;
#ifndef __IEnumShellItems_INTERFACE_DEFINED__
#define __IEnumShellItems_INTERFACE_DEFINED__
extern const IID IID_IEnumShellItems;
typedef struct IEnumShellItemsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumShellItems * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumShellItems * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumShellItems * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumShellItems * This, ULONG celt, IShellItem ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumShellItems * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumShellItems * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumShellItems * This, IEnumShellItems ** ppenum);
	END_INTERFACE
}  IEnumShellItemsVtbl;
interface IEnumShellItems
{
	CONST_VTBL struct IEnumShellItemsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumShellItems_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumShellItems_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumShellItems_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumShellItems_Next(This,celt,rgelt,pceltFetched)( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumShellItems_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumShellItems_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumShellItems_Clone(This,ppenum)( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumShellItems_RemoteNext_Proxy(IEnumShellItems * This, ULONG celt, IShellItem ** rgelt, ULONG * pceltFetched);
void __RPC_STUB IEnumShellItems_RemoteNext_Stub(IRpcStubBuffer * This, IRpcChannelBuffer * _pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD * _pdwStubPhase);
#endif
typedef GUID STGTRANSCONFIRMATION;
	typedef GUID *LPSTGTRANSCONFIRMATION;
typedef enum STGOP
{
	STGOP_MOVE = 1,
	STGOP_COPY = 2,
	STGOP_SYNC = 3,
	STGOP_REMOVE = 5,
	STGOP_RENAME = 6,
	STGOP_APPLYPROPERTIES = 8,
	STGOP_NEW = 10
} STGOP;
#endif
enum _TRANSFER_SOURCE_FLAGS
{
	TSF_NORMAL = 0,
	TSF_FAIL_EXIST = 0,
	TSF_RENAME_EXIST = 0x1,
	TSF_OVERWRITE_EXIST = 0x2,
	TSF_ALLOW_DECRYPTION = 0x4,
	TSF_NO_SECURITY = 0x8,
	TSF_COPY_CREATION_TIME = 0x10,
	TSF_COPY_WRITE_TIME = 0x20,
	TSF_USE_FULL_ACCESS = 0x40,
	TSF_DELETE_RECYCLE_IF_POSSIBLE = 0x80,
	TSF_COPY_HARD_LINK = 0x100,
	TSF_COPY_LOCALIZED_NAME = 0x200,
	TSF_MOVE_AS_COPY_DELETE = 0x400,
	TSF_SUSPEND_SHELLEVENTS = 0x800
};
typedef DWORD TRANSFER_SOURCE_FLAGS;
#if (_WIN32_IE >= _WIN32_IE_IE70)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0045_v0_0_s_ifspec;
#ifndef __ITransferAdviseSink_INTERFACE_DEFINED__
#define __ITransferAdviseSink_INTERFACE_DEFINED__
enum _TRANSFER_ADVISE_STATE
{
	TS_NONE = 0,
	TS_PERFORMING = 0x1,
	TS_PREPARING = 0x2,
	TS_INDETERMINATE = 0x4
};
typedef DWORD TRANSFER_ADVISE_STATE;
extern const IID IID_ITransferAdviseSink;
typedef struct ITransferAdviseSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransferAdviseSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransferAdviseSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransferAdviseSink * This);
	HRESULT(STDMETHODCALLTYPE * UpdateProgress) (ITransferAdviseSink * This, ULONGLONG ullSizeCurrent, ULONGLONG ullSizeTotal, int nFilesCurrent, int nFilesTotal, int nFoldersCurrent, int nFoldersTotal);
	HRESULT(STDMETHODCALLTYPE * UpdateTransferState) (ITransferAdviseSink * This, TRANSFER_ADVISE_STATE ts);
	HRESULT(STDMETHODCALLTYPE * ConfirmOverwrite) (ITransferAdviseSink * This, IShellItem * psiSource, IShellItem * psiDestParent, LPCWSTR pszName);
	HRESULT(STDMETHODCALLTYPE * ConfirmEncryptionLoss) (ITransferAdviseSink * This, IShellItem * psiSource);
	HRESULT(STDMETHODCALLTYPE * FileFailure) (ITransferAdviseSink * This, IShellItem * psi, LPCWSTR pszItem, HRESULT hrError, LPWSTR pszRename, ULONG cchRename);
	HRESULT(STDMETHODCALLTYPE * SubStreamFailure) (ITransferAdviseSink * This, IShellItem * psi, LPCWSTR pszStreamName, HRESULT hrError);
	HRESULT(STDMETHODCALLTYPE * PropertyFailure) (ITransferAdviseSink * This, IShellItem * psi, const PROPERTYKEY * pkey, HRESULT hrError);
	END_INTERFACE
}  ITransferAdviseSinkVtbl;
interface ITransferAdviseSink
{
	CONST_VTBL struct ITransferAdviseSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransferAdviseSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransferAdviseSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransferAdviseSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransferAdviseSink_UpdateProgress(This,ullSizeCurrent,ullSizeTotal,nFilesCurrent,nFilesTotal,nFoldersCurrent,nFoldersTotal)( (This)->lpVtbl -> UpdateProgress(This,ullSizeCurrent,ullSizeTotal,nFilesCurrent,nFilesTotal,nFoldersCurrent,nFoldersTotal) )
#define ITransferAdviseSink_UpdateTransferState(This,ts)( (This)->lpVtbl -> UpdateTransferState(This,ts) )
#define ITransferAdviseSink_ConfirmOverwrite(This,psiSource,psiDestParent,pszName)( (This)->lpVtbl -> ConfirmOverwrite(This,psiSource,psiDestParent,pszName) )
#define ITransferAdviseSink_ConfirmEncryptionLoss(This,psiSource)( (This)->lpVtbl -> ConfirmEncryptionLoss(This,psiSource) )
#define ITransferAdviseSink_FileFailure(This,psi,pszItem,hrError,pszRename,cchRename)( (This)->lpVtbl -> FileFailure(This,psi,pszItem,hrError,pszRename,cchRename) )
#define ITransferAdviseSink_SubStreamFailure(This,psi,pszStreamName,hrError)( (This)->lpVtbl -> SubStreamFailure(This,psi,pszStreamName,hrError) )
#define ITransferAdviseSink_PropertyFailure(This,psi,pkey,hrError)( (This)->lpVtbl -> PropertyFailure(This,psi,pkey,hrError) )
#endif
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0046_v0_0_s_ifspec;
#ifndef __ITransferSource_INTERFACE_DEFINED__
#define __ITransferSource_INTERFACE_DEFINED__
extern const IID IID_ITransferSource;
typedef struct ITransferSourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransferSource * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransferSource * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransferSource * This);
	HRESULT(STDMETHODCALLTYPE * Advise) (ITransferSource * This, ITransferAdviseSink * psink, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (ITransferSource * This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * SetProperties) (ITransferSource * This, IPropertyChangeArray * pproparray);
	HRESULT(STDMETHODCALLTYPE * OpenItem) (ITransferSource * This, IShellItem * psi, TRANSFER_SOURCE_FLAGS flags, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * MoveItem) (ITransferSource * This, IShellItem * psi, IShellItem * psiParentDst, LPCWSTR pszNameDst, TRANSFER_SOURCE_FLAGS flags, IShellItem ** ppsiNew);
	HRESULT(STDMETHODCALLTYPE * RecycleItem) (ITransferSource * This, IShellItem * psiSource, IShellItem * psiParentDest, TRANSFER_SOURCE_FLAGS flags, IShellItem ** ppsiNewDest);
	HRESULT(STDMETHODCALLTYPE * RemoveItem) (ITransferSource * This, IShellItem * psiSource, TRANSFER_SOURCE_FLAGS flags);
	HRESULT(STDMETHODCALLTYPE * RenameItem) (ITransferSource * This, IShellItem * psiSource, LPCWSTR pszNewName, TRANSFER_SOURCE_FLAGS flags, IShellItem ** ppsiNewDest);
	HRESULT(STDMETHODCALLTYPE * LinkItem) (ITransferSource * This, IShellItem * psiSource, IShellItem * psiParentDest, LPCWSTR pszNewName, TRANSFER_SOURCE_FLAGS flags, IShellItem ** ppsiNewDest);
	HRESULT(STDMETHODCALLTYPE * ApplyPropertiesToItem) (ITransferSource * This, IShellItem * psiSource, IShellItem ** ppsiNew);
	HRESULT(STDMETHODCALLTYPE * GetDefaultDestinationName) (ITransferSource * This, IShellItem * psiSource, IShellItem * psiParentDest, LPWSTR * ppszDestinationName);
	HRESULT(STDMETHODCALLTYPE * EnterFolder) (ITransferSource * This, IShellItem * psiChildFolderDest);
	HRESULT(STDMETHODCALLTYPE * LeaveFolder) (ITransferSource * This, IShellItem * psiChildFolderDest);
	END_INTERFACE
}  ITransferSourceVtbl;
interface ITransferSource
{
	CONST_VTBL struct ITransferSourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransferSource_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransferSource_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransferSource_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransferSource_Advise(This,psink,pdwCookie)( (This)->lpVtbl -> Advise(This,psink,pdwCookie) )
#define ITransferSource_Unadvise(This,dwCookie)( (This)->lpVtbl -> Unadvise(This,dwCookie) )
#define ITransferSource_SetProperties(This,pproparray)( (This)->lpVtbl -> SetProperties(This,pproparray) )
#define ITransferSource_OpenItem(This,psi,flags,riid,ppv)( (This)->lpVtbl -> OpenItem(This,psi,flags,riid,ppv) )
#define ITransferSource_MoveItem(This,psi,psiParentDst,pszNameDst,flags,ppsiNew)( (This)->lpVtbl -> MoveItem(This,psi,psiParentDst,pszNameDst,flags,ppsiNew) )
#define ITransferSource_RecycleItem(This,psiSource,psiParentDest,flags,ppsiNewDest)( (This)->lpVtbl -> RecycleItem(This,psiSource,psiParentDest,flags,ppsiNewDest) )
#define ITransferSource_RemoveItem(This,psiSource,flags)( (This)->lpVtbl -> RemoveItem(This,psiSource,flags) )
#define ITransferSource_RenameItem(This,psiSource,pszNewName,flags,ppsiNewDest)( (This)->lpVtbl -> RenameItem(This,psiSource,pszNewName,flags,ppsiNewDest) )
#define ITransferSource_LinkItem(This,psiSource,psiParentDest,pszNewName,flags,ppsiNewDest)( (This)->lpVtbl -> LinkItem(This,psiSource,psiParentDest,pszNewName,flags,ppsiNewDest) )
#define ITransferSource_ApplyPropertiesToItem(This,psiSource,ppsiNew)( (This)->lpVtbl -> ApplyPropertiesToItem(This,psiSource,ppsiNew) )
#define ITransferSource_GetDefaultDestinationName(This,psiSource,psiParentDest,ppszDestinationName)( (This)->lpVtbl -> GetDefaultDestinationName(This,psiSource,psiParentDest,ppszDestinationName) )
#define ITransferSource_EnterFolder(This,psiChildFolderDest)( (This)->lpVtbl -> EnterFolder(This,psiChildFolderDest) )
#define ITransferSource_LeaveFolder(This,psiChildFolderDest)( (This)->lpVtbl -> LeaveFolder(This,psiChildFolderDest) )
#endif
#endif
#endif
typedef struct SHELL_ITEM_RESOURCE
{
	GUID guidType;
	WCHAR szName[260];
} SHELL_ITEM_RESOURCE;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0047_v0_0_s_ifspec;
#ifndef __IEnumResources_INTERFACE_DEFINED__
#define __IEnumResources_INTERFACE_DEFINED__
extern const IID IID_IEnumResources;
typedef struct IEnumResourcesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumResources * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumResources * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumResources * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumResources * This, ULONG celt, SHELL_ITEM_RESOURCE * psir, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumResources * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumResources * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumResources * This, IEnumResources ** ppenumr);
	END_INTERFACE
}  IEnumResourcesVtbl;
interface IEnumResources
{
	CONST_VTBL struct IEnumResourcesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumResources_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumResources_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumResources_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumResources_Next(This,celt,psir,pceltFetched)( (This)->lpVtbl -> Next(This,celt,psir,pceltFetched) )
#define IEnumResources_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumResources_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumResources_Clone(This,ppenumr)( (This)->lpVtbl -> Clone(This,ppenumr) )
#endif
#endif
#ifndef __IShellItemResources_INTERFACE_DEFINED__
#define __IShellItemResources_INTERFACE_DEFINED__
extern const IID IID_IShellItemResources;
typedef struct IShellItemResourcesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellItemResources * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellItemResources * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellItemResources * This);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (IShellItemResources * This, DWORD * pdwAttributes);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IShellItemResources * This, ULONGLONG * pullSize);
	HRESULT(STDMETHODCALLTYPE * GetTimes) (IShellItemResources * This, FILETIME * pftCreation, FILETIME * pftWrite, FILETIME * pftAccess);
	HRESULT(STDMETHODCALLTYPE * SetTimes) (IShellItemResources * This, const FILETIME * pftCreation, const FILETIME * pftWrite, const FILETIME * pftAccess);
	HRESULT(STDMETHODCALLTYPE * GetResourceDescription) (IShellItemResources * This, const SHELL_ITEM_RESOURCE * pcsir, LPWSTR * ppszDescription);
	HRESULT(STDMETHODCALLTYPE * EnumResources) (IShellItemResources * This, IEnumResources ** ppenumr);
	HRESULT(STDMETHODCALLTYPE * SupportsResource) (IShellItemResources * This, const SHELL_ITEM_RESOURCE * pcsir);
	HRESULT(STDMETHODCALLTYPE * OpenResource) (IShellItemResources * This, const SHELL_ITEM_RESOURCE * pcsir, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CreateResource) (IShellItemResources * This, const SHELL_ITEM_RESOURCE * pcsir, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * MarkForDelete) (IShellItemResources * This);
	END_INTERFACE
}  IShellItemResourcesVtbl;
interface IShellItemResources
{
	CONST_VTBL struct IShellItemResourcesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellItemResources_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellItemResources_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellItemResources_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellItemResources_GetAttributes(This,pdwAttributes)( (This)->lpVtbl -> GetAttributes(This,pdwAttributes) )
#define IShellItemResources_GetSize(This,pullSize)( (This)->lpVtbl -> GetSize(This,pullSize) )
#define IShellItemResources_GetTimes(This,pftCreation,pftWrite,pftAccess)( (This)->lpVtbl -> GetTimes(This,pftCreation,pftWrite,pftAccess) )
#define IShellItemResources_SetTimes(This,pftCreation,pftWrite,pftAccess)( (This)->lpVtbl -> SetTimes(This,pftCreation,pftWrite,pftAccess) )
#define IShellItemResources_GetResourceDescription(This,pcsir,ppszDescription)( (This)->lpVtbl -> GetResourceDescription(This,pcsir,ppszDescription) )
#define IShellItemResources_EnumResources(This,ppenumr)( (This)->lpVtbl -> EnumResources(This,ppenumr) )
#define IShellItemResources_SupportsResource(This,pcsir)( (This)->lpVtbl -> SupportsResource(This,pcsir) )
#define IShellItemResources_OpenResource(This,pcsir,riid,ppv)( (This)->lpVtbl -> OpenResource(This,pcsir,riid,ppv) )
#define IShellItemResources_CreateResource(This,pcsir,riid,ppv)( (This)->lpVtbl -> CreateResource(This,pcsir,riid,ppv) )
#define IShellItemResources_MarkForDelete(This)( (This)->lpVtbl -> MarkForDelete(This) )
#endif
#endif
#ifndef __ITransferDestination_INTERFACE_DEFINED__
#define __ITransferDestination_INTERFACE_DEFINED__
extern const IID IID_ITransferDestination;
typedef struct ITransferDestinationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransferDestination * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransferDestination * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransferDestination * This);
	HRESULT(STDMETHODCALLTYPE * Advise) (ITransferDestination * This, ITransferAdviseSink * psink, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (ITransferDestination * This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * CreateItem) (ITransferDestination * This, LPCWSTR pszName, DWORD dwAttributes, ULONGLONG ullSize, TRANSFER_SOURCE_FLAGS flags, REFIID riidItem, void **ppvItem, REFIID riidResources, void **ppvResources);
	END_INTERFACE
}  ITransferDestinationVtbl;
interface ITransferDestination
{
	CONST_VTBL struct ITransferDestinationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransferDestination_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransferDestination_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransferDestination_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransferDestination_Advise(This,psink,pdwCookie)( (This)->lpVtbl -> Advise(This,psink,pdwCookie) )
#define ITransferDestination_Unadvise(This,dwCookie)( (This)->lpVtbl -> Unadvise(This,dwCookie) )
#define ITransferDestination_CreateItem(This,pszName,dwAttributes,ullSize,flags,riidItem,ppvItem,riidResources,ppvResources)( (This)->lpVtbl -> CreateItem(This,pszName,dwAttributes,ullSize,flags,riidItem,ppvItem,riidResources,ppvResources) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0050_v0_0_s_ifspec;
#ifndef __IStreamAsync_INTERFACE_DEFINED__
#define __IStreamAsync_INTERFACE_DEFINED__
extern const IID IID_IStreamAsync;
typedef struct IStreamAsyncVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStreamAsync * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStreamAsync * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStreamAsync * This);
	HRESULT(STDMETHODCALLTYPE * Read) (IStreamAsync * This, void *pv, ULONG cb, ULONG * pcbRead);
	HRESULT(STDMETHODCALLTYPE * Write) (IStreamAsync * This, const void *pv, ULONG cb, ULONG * pcbWritten);
	HRESULT(STDMETHODCALLTYPE * Seek) (IStreamAsync * This, LARGE_INTEGER dlibMove, DWORD dwOrigin, ULARGE_INTEGER * plibNewPosition);
	HRESULT(STDMETHODCALLTYPE * SetSize) (IStreamAsync * This, ULARGE_INTEGER libNewSize);
	HRESULT(STDMETHODCALLTYPE * CopyTo) (IStreamAsync * This, IStream * pstm, ULARGE_INTEGER cb, ULARGE_INTEGER * pcbRead, ULARGE_INTEGER * pcbWritten);
	HRESULT(STDMETHODCALLTYPE * Commit) (IStreamAsync * This, DWORD grfCommitFlags);
	HRESULT(STDMETHODCALLTYPE * Revert) (IStreamAsync * This);
	HRESULT(STDMETHODCALLTYPE * LockRegion) (IStreamAsync * This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
	HRESULT(STDMETHODCALLTYPE * UnlockRegion) (IStreamAsync * This, ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
	HRESULT(STDMETHODCALLTYPE * Stat) (IStreamAsync * This, STATSTG * pstatstg, DWORD grfStatFlag);
	HRESULT(STDMETHODCALLTYPE * Clone) (IStreamAsync * This, IStream ** ppstm);
	HRESULT(STDMETHODCALLTYPE * ReadAsync) (IStreamAsync * This, void *pv, DWORD cb, LPDWORD pcbRead, LPOVERLAPPED lpOverlapped);
	HRESULT(STDMETHODCALLTYPE * WriteAsync) (IStreamAsync * This, const void *lpBuffer, DWORD cb, LPDWORD pcbWritten, LPOVERLAPPED lpOverlapped);
	HRESULT(STDMETHODCALLTYPE * OverlappedResult) (IStreamAsync * This, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait);
	HRESULT(STDMETHODCALLTYPE * CancelIo) (IStreamAsync * This);
	END_INTERFACE
}  IStreamAsyncVtbl;
interface IStreamAsync
{
	CONST_VTBL struct IStreamAsyncVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamAsync_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamAsync_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IStreamAsync_Release(This)( (This)->lpVtbl -> Release(This) )
#define IStreamAsync_Read(This,pv,cb,pcbRead)( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
#define IStreamAsync_Write(This,pv,cb,pcbWritten)( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
#define IStreamAsync_Seek(This,dlibMove,dwOrigin,plibNewPosition)( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
#define IStreamAsync_SetSize(This,libNewSize)( (This)->lpVtbl -> SetSize(This,libNewSize) )
#define IStreamAsync_CopyTo(This,pstm,cb,pcbRead,pcbWritten)( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
#define IStreamAsync_Commit(This,grfCommitFlags)( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
#define IStreamAsync_Revert(This)( (This)->lpVtbl -> Revert(This) )
#define IStreamAsync_LockRegion(This,libOffset,cb,dwLockType)( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
#define IStreamAsync_UnlockRegion(This,libOffset,cb,dwLockType)( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
#define IStreamAsync_Stat(This,pstatstg,grfStatFlag)( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
#define IStreamAsync_Clone(This,ppstm)( (This)->lpVtbl -> Clone(This,ppstm) )
#define IStreamAsync_ReadAsync(This,pv,cb,pcbRead,lpOverlapped)( (This)->lpVtbl -> ReadAsync(This,pv,cb,pcbRead,lpOverlapped) )
#define IStreamAsync_WriteAsync(This,lpBuffer,cb,pcbWritten,lpOverlapped)( (This)->lpVtbl -> WriteAsync(This,lpBuffer,cb,pcbWritten,lpOverlapped) )
#define IStreamAsync_OverlappedResult(This,lpOverlapped,lpNumberOfBytesTransferred,bWait)( (This)->lpVtbl -> OverlappedResult(This,lpOverlapped,lpNumberOfBytesTransferred,bWait) )
#define IStreamAsync_CancelIo(This)( (This)->lpVtbl -> CancelIo(This) )
#endif
#endif
#ifndef __IStreamUnbufferedInfo_INTERFACE_DEFINED__
#define __IStreamUnbufferedInfo_INTERFACE_DEFINED__
extern const IID IID_IStreamUnbufferedInfo;
typedef struct IStreamUnbufferedInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStreamUnbufferedInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStreamUnbufferedInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStreamUnbufferedInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetSectorSize) (IStreamUnbufferedInfo * This, ULONG * pcbSectorSize);
	END_INTERFACE
}  IStreamUnbufferedInfoVtbl;
interface IStreamUnbufferedInfo
{
	CONST_VTBL struct IStreamUnbufferedInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamUnbufferedInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamUnbufferedInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IStreamUnbufferedInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IStreamUnbufferedInfo_GetSectorSize(This,pcbSectorSize)( (This)->lpVtbl -> GetSectorSize(This,pcbSectorSize) )
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0052_v0_0_s_ifspec;
#ifndef __IFileOperationProgressSink_INTERFACE_DEFINED__
#define __IFileOperationProgressSink_INTERFACE_DEFINED__
extern const IID IID_IFileOperationProgressSink;
typedef struct IFileOperationProgressSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFileOperationProgressSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFileOperationProgressSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFileOperationProgressSink * This);
	HRESULT(STDMETHODCALLTYPE * StartOperations) (IFileOperationProgressSink * This);
	HRESULT(STDMETHODCALLTYPE * FinishOperations) (IFileOperationProgressSink * This, HRESULT hrResult);
	HRESULT(STDMETHODCALLTYPE * PreRenameItem) (IFileOperationProgressSink * This, DWORD dwFlags, IShellItem * psiItem, LPCWSTR pszNewName);
	HRESULT(STDMETHODCALLTYPE * PostRenameItem) (IFileOperationProgressSink * This, DWORD dwFlags, IShellItem * psiItem, LPCWSTR pszNewName, HRESULT hrRename, IShellItem * psiNewlyCreated);
	HRESULT(STDMETHODCALLTYPE * PreMoveItem) (IFileOperationProgressSink * This, DWORD dwFlags, IShellItem * psiItem, IShellItem * psiDestinationFolder, LPCWSTR pszNewName);
	HRESULT(STDMETHODCALLTYPE * PostMoveItem) (IFileOperationProgressSink * This, DWORD dwFlags, IShellItem * psiItem, IShellItem * psiDestinationFolder, LPCWSTR pszNewName, HRESULT hrMove, IShellItem * psiNewlyCreated);
	HRESULT(STDMETHODCALLTYPE * PreCopyItem) (IFileOperationProgressSink * This, DWORD dwFlags, IShellItem * psiItem, IShellItem * psiDestinationFolder, LPCWSTR pszNewName);
	HRESULT(STDMETHODCALLTYPE * PostCopyItem) (IFileOperationProgressSink * This, DWORD dwFlags, IShellItem * psiItem, IShellItem * psiDestinationFolder, LPCWSTR pszNewName, HRESULT hrCopy, IShellItem * psiNewlyCreated);
	HRESULT(STDMETHODCALLTYPE * PreDeleteItem) (IFileOperationProgressSink * This, DWORD dwFlags, IShellItem * psiItem);
	HRESULT(STDMETHODCALLTYPE * PostDeleteItem) (IFileOperationProgressSink * This, DWORD dwFlags, IShellItem * psiItem, HRESULT hrDelete, IShellItem * psiNewlyCreated);
	HRESULT(STDMETHODCALLTYPE * PreNewItem) (IFileOperationProgressSink * This, DWORD dwFlags, IShellItem * psiDestinationFolder, LPCWSTR pszNewName);
	HRESULT(STDMETHODCALLTYPE * PostNewItem) (IFileOperationProgressSink * This, DWORD dwFlags, IShellItem * psiDestinationFolder, LPCWSTR pszNewName, LPCWSTR pszTemplateName, DWORD dwFileAttributes, HRESULT hrNew, IShellItem * psiNewItem);
	HRESULT(STDMETHODCALLTYPE * UpdateProgress) (IFileOperationProgressSink * This, UINT iWorkTotal, UINT iWorkSoFar);
	HRESULT(STDMETHODCALLTYPE * ResetTimer) (IFileOperationProgressSink * This);
	HRESULT(STDMETHODCALLTYPE * PauseTimer) (IFileOperationProgressSink * This);
	HRESULT(STDMETHODCALLTYPE * ResumeTimer) (IFileOperationProgressSink * This);
	END_INTERFACE
}  IFileOperationProgressSinkVtbl;
interface IFileOperationProgressSink
{
	CONST_VTBL struct IFileOperationProgressSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileOperationProgressSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileOperationProgressSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileOperationProgressSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileOperationProgressSink_StartOperations(This)( (This)->lpVtbl -> StartOperations(This) )
#define IFileOperationProgressSink_FinishOperations(This,hrResult)( (This)->lpVtbl -> FinishOperations(This,hrResult) )
#define IFileOperationProgressSink_PreRenameItem(This,dwFlags,psiItem,pszNewName)( (This)->lpVtbl -> PreRenameItem(This,dwFlags,psiItem,pszNewName) )
#define IFileOperationProgressSink_PostRenameItem(This,dwFlags,psiItem,pszNewName,hrRename,psiNewlyCreated)( (This)->lpVtbl -> PostRenameItem(This,dwFlags,psiItem,pszNewName,hrRename,psiNewlyCreated) )
#define IFileOperationProgressSink_PreMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName)( (This)->lpVtbl -> PreMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName) )
#define IFileOperationProgressSink_PostMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrMove,psiNewlyCreated)( (This)->lpVtbl -> PostMoveItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrMove,psiNewlyCreated) )
#define IFileOperationProgressSink_PreCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName)( (This)->lpVtbl -> PreCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName) )
#define IFileOperationProgressSink_PostCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrCopy,psiNewlyCreated)( (This)->lpVtbl -> PostCopyItem(This,dwFlags,psiItem,psiDestinationFolder,pszNewName,hrCopy,psiNewlyCreated) )
#define IFileOperationProgressSink_PreDeleteItem(This,dwFlags,psiItem)( (This)->lpVtbl -> PreDeleteItem(This,dwFlags,psiItem) )
#define IFileOperationProgressSink_PostDeleteItem(This,dwFlags,psiItem,hrDelete,psiNewlyCreated)( (This)->lpVtbl -> PostDeleteItem(This,dwFlags,psiItem,hrDelete,psiNewlyCreated) )
#define IFileOperationProgressSink_PreNewItem(This,dwFlags,psiDestinationFolder,pszNewName)( (This)->lpVtbl -> PreNewItem(This,dwFlags,psiDestinationFolder,pszNewName) )
#define IFileOperationProgressSink_PostNewItem(This,dwFlags,psiDestinationFolder,pszNewName,pszTemplateName,dwFileAttributes,hrNew,psiNewItem)( (This)->lpVtbl -> PostNewItem(This,dwFlags,psiDestinationFolder,pszNewName,pszTemplateName,dwFileAttributes,hrNew,psiNewItem) )
#define IFileOperationProgressSink_UpdateProgress(This,iWorkTotal,iWorkSoFar)( (This)->lpVtbl -> UpdateProgress(This,iWorkTotal,iWorkSoFar) )
#define IFileOperationProgressSink_ResetTimer(This)( (This)->lpVtbl -> ResetTimer(This) )
#define IFileOperationProgressSink_PauseTimer(This)( (This)->lpVtbl -> PauseTimer(This) )
#define IFileOperationProgressSink_ResumeTimer(This)( (This)->lpVtbl -> ResumeTimer(This) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0053_v0_0_s_ifspec;
#ifndef __IShellItemArray_INTERFACE_DEFINED__
#define __IShellItemArray_INTERFACE_DEFINED__
typedef enum SIATTRIBFLAGS
{
	SIATTRIBFLAGS_AND = 0x1,
	SIATTRIBFLAGS_OR = 0x2,
	SIATTRIBFLAGS_APPCOMPAT = 0x3,
	SIATTRIBFLAGS_MASK = 0x3,
	SIATTRIBFLAGS_ALLITEMS = 0x4000
} SIATTRIBFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(SIATTRIBFLAGS)
extern const IID IID_IShellItemArray;
typedef struct IShellItemArrayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellItemArray * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellItemArray * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellItemArray * This);
	HRESULT(STDMETHODCALLTYPE * BindToHandler) (IShellItemArray * This, IBindCtx * pbc, REFGUID bhid, REFIID riid, void **ppvOut);
	HRESULT(STDMETHODCALLTYPE * GetPropertyStore) (IShellItemArray * This, GETPROPERTYSTOREFLAGS flags, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetPropertyDescriptionList) (IShellItemArray * This, REFPROPERTYKEY keyType, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (IShellItemArray * This, SIATTRIBFLAGS AttribFlags, SFGAOF sfgaoMask, SFGAOF * psfgaoAttribs);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IShellItemArray * This, DWORD * pdwNumItems);
	HRESULT(STDMETHODCALLTYPE * GetItemAt) (IShellItemArray * This, DWORD dwIndex, IShellItem ** ppsi);
	HRESULT(STDMETHODCALLTYPE * EnumItems) (IShellItemArray * This, IEnumShellItems ** ppenumShellItems);
	END_INTERFACE
}  IShellItemArrayVtbl;
interface IShellItemArray
{
	CONST_VTBL struct IShellItemArrayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellItemArray_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellItemArray_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellItemArray_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellItemArray_BindToHandler(This,pbc,bhid,riid,ppvOut)( (This)->lpVtbl -> BindToHandler(This,pbc,bhid,riid,ppvOut) )
#define IShellItemArray_GetPropertyStore(This,flags,riid,ppv)( (This)->lpVtbl -> GetPropertyStore(This,flags,riid,ppv) )
#define IShellItemArray_GetPropertyDescriptionList(This,keyType,riid,ppv)( (This)->lpVtbl -> GetPropertyDescriptionList(This,keyType,riid,ppv) )
#define IShellItemArray_GetAttributes(This,AttribFlags,sfgaoMask,psfgaoAttribs)( (This)->lpVtbl -> GetAttributes(This,AttribFlags,sfgaoMask,psfgaoAttribs) )
#define IShellItemArray_GetCount(This,pdwNumItems)( (This)->lpVtbl -> GetCount(This,pdwNumItems) )
#define IShellItemArray_GetItemAt(This,dwIndex,ppsi)( (This)->lpVtbl -> GetItemAt(This,dwIndex,ppsi) )
#define IShellItemArray_EnumItems(This,ppenumShellItems)( (This)->lpVtbl -> EnumItems(This,ppenumShellItems) )
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
SHSTDAPI SHCreateShellItemArray(PCIDLIST_ABSOLUTE pidlParent, IShellFolder * psf, UINT cidl, PCUITEMID_CHILD_ARRAY ppidl, IShellItemArray ** ppsiItemArray);
SHSTDAPI SHCreateShellItemArrayFromDataObject(IDataObject * pdo, REFIID riid, void **ppv);
SHSTDAPI SHCreateShellItemArrayFromIDLists(UINT cidl, PCIDLIST_ABSOLUTE_ARRAY rgpidl, IShellItemArray ** ppsiItemArray);
SHSTDAPI SHCreateShellItemArrayFromShellItem(IShellItem * psi, REFIID riid, void **ppv);
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0054_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0054_v0_0_s_ifspec;
#ifndef __IInitializeWithItem_INTERFACE_DEFINED__
#define __IInitializeWithItem_INTERFACE_DEFINED__
extern const IID IID_IInitializeWithItem;
typedef struct IInitializeWithItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInitializeWithItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInitializeWithItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInitializeWithItem * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IInitializeWithItem * This, IShellItem * psi, DWORD grfMode);
	END_INTERFACE
}  IInitializeWithItemVtbl;
interface IInitializeWithItem
{
	CONST_VTBL struct IInitializeWithItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInitializeWithItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInitializeWithItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInitializeWithItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInitializeWithItem_Initialize(This,psi,grfMode)( (This)->lpVtbl -> Initialize(This,psi,grfMode) )
#endif
#endif
#ifndef __IObjectWithSelection_INTERFACE_DEFINED__
#define __IObjectWithSelection_INTERFACE_DEFINED__
extern const IID IID_IObjectWithSelection;
typedef struct IObjectWithSelectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IObjectWithSelection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IObjectWithSelection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IObjectWithSelection * This);
	HRESULT(STDMETHODCALLTYPE * SetSelection) (IObjectWithSelection * This, IShellItemArray * psia);
	HRESULT(STDMETHODCALLTYPE * GetSelection) (IObjectWithSelection * This, REFIID riid, void **ppv);
	END_INTERFACE
}  IObjectWithSelectionVtbl;
interface IObjectWithSelection
{
	CONST_VTBL struct IObjectWithSelectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectWithSelection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectWithSelection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectWithSelection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectWithSelection_SetSelection(This,psia)( (This)->lpVtbl -> SetSelection(This,psia) )
#define IObjectWithSelection_GetSelection(This,riid,ppv)( (This)->lpVtbl -> GetSelection(This,riid,ppv) )
#endif
#endif
#ifndef __IObjectWithBackReferences_INTERFACE_DEFINED__
#define __IObjectWithBackReferences_INTERFACE_DEFINED__
extern const IID IID_IObjectWithBackReferences;
typedef struct IObjectWithBackReferencesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IObjectWithBackReferences * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IObjectWithBackReferences * This);
	ULONG(STDMETHODCALLTYPE * Release) (IObjectWithBackReferences * This);
	HRESULT(STDMETHODCALLTYPE * RemoveBackReferences) (IObjectWithBackReferences * This);
	END_INTERFACE
}  IObjectWithBackReferencesVtbl;
interface IObjectWithBackReferences
{
	CONST_VTBL struct IObjectWithBackReferencesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectWithBackReferences_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectWithBackReferences_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectWithBackReferences_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectWithBackReferences_RemoveBackReferences(This)( (This)->lpVtbl -> RemoveBackReferences(This) )
#endif
#endif
enum _PROPERTYUI_NAME_FLAGS
{
	PUIFNF_DEFAULT = 0,
	PUIFNF_MNEMONIC = 0x1
};
typedef DWORD PROPERTYUI_NAME_FLAGS;
enum _PROPERTYUI_FLAGS
{
	PUIF_DEFAULT = 0,
	PUIF_RIGHTALIGN = 0x1,
	PUIF_NOLABELININFOTIP = 0x2
};
typedef DWORD PROPERTYUI_FLAGS;
enum _PROPERTYUI_FORMAT_FLAGS
{
	PUIFFDF_DEFAULT = 0,
	PUIFFDF_RIGHTTOLEFT = 0x1,
	PUIFFDF_SHORTFORMAT = 0x2,
	PUIFFDF_NOTIME = 0x4,
	PUIFFDF_FRIENDLYDATE = 0x8
};
typedef DWORD PROPERTYUI_FORMAT_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0057_v0_0_s_ifspec;
#ifndef __IPropertyUI_INTERFACE_DEFINED__
#define __IPropertyUI_INTERFACE_DEFINED__
extern const IID IID_IPropertyUI;
typedef struct IPropertyUIVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPropertyUI * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPropertyUI * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPropertyUI * This);
	HRESULT(STDMETHODCALLTYPE * ParsePropertyName) (IPropertyUI * This, LPCWSTR pszName, FMTID * pfmtid, PROPID * ppid, ULONG * pchEaten);
	HRESULT(STDMETHODCALLTYPE * GetCannonicalName) (IPropertyUI * This, REFFMTID fmtid, PROPID pid, LPWSTR pwszText, DWORD cchText);
	HRESULT(STDMETHODCALLTYPE * GetDisplayName) (IPropertyUI * This, REFFMTID fmtid, PROPID pid, PROPERTYUI_NAME_FLAGS flags, LPWSTR pwszText, DWORD cchText);
	HRESULT(STDMETHODCALLTYPE * GetPropertyDescription) (IPropertyUI * This, REFFMTID fmtid, PROPID pid, LPWSTR pwszText, DWORD cchText);
	HRESULT(STDMETHODCALLTYPE * GetDefaultWidth) (IPropertyUI * This, REFFMTID fmtid, PROPID pid, ULONG * pcxChars);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IPropertyUI * This, REFFMTID fmtid, PROPID pid, PROPERTYUI_FLAGS * pflags);
	HRESULT(STDMETHODCALLTYPE * FormatForDisplay) (IPropertyUI * This, REFFMTID fmtid, PROPID pid, const PROPVARIANT * ppropvar, PROPERTYUI_FORMAT_FLAGS puiff, LPWSTR pwszText, DWORD cchText);
	HRESULT(STDMETHODCALLTYPE * GetHelpInfo) (IPropertyUI * This, REFFMTID fmtid, PROPID pid, LPWSTR pwszHelpFile, DWORD cch, UINT * puHelpID);
	END_INTERFACE
}  IPropertyUIVtbl;
interface IPropertyUI
{
	CONST_VTBL struct IPropertyUIVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyUI_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyUI_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPropertyUI_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPropertyUI_ParsePropertyName(This,pszName,pfmtid,ppid,pchEaten)( (This)->lpVtbl -> ParsePropertyName(This,pszName,pfmtid,ppid,pchEaten) )
#define IPropertyUI_GetCannonicalName(This,fmtid,pid,pwszText,cchText)( (This)->lpVtbl -> GetCannonicalName(This,fmtid,pid,pwszText,cchText) )
#define IPropertyUI_GetDisplayName(This,fmtid,pid,flags,pwszText,cchText)( (This)->lpVtbl -> GetDisplayName(This,fmtid,pid,flags,pwszText,cchText) )
#define IPropertyUI_GetPropertyDescription(This,fmtid,pid,pwszText,cchText)( (This)->lpVtbl -> GetPropertyDescription(This,fmtid,pid,pwszText,cchText) )
#define IPropertyUI_GetDefaultWidth(This,fmtid,pid,pcxChars)( (This)->lpVtbl -> GetDefaultWidth(This,fmtid,pid,pcxChars) )
#define IPropertyUI_GetFlags(This,fmtid,pid,pflags)( (This)->lpVtbl -> GetFlags(This,fmtid,pid,pflags) )
#define IPropertyUI_FormatForDisplay(This,fmtid,pid,ppropvar,puiff,pwszText,cchText)( (This)->lpVtbl -> FormatForDisplay(This,fmtid,pid,ppropvar,puiff,pwszText,cchText) )
#define IPropertyUI_GetHelpInfo(This,fmtid,pid,pwszHelpFile,cch,puHelpID)( (This)->lpVtbl -> GetHelpInfo(This,fmtid,pid,pwszHelpFile,cch,puHelpID) )
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
SHSTDAPI SHRemovePersonalPropertyValues(IShellItemArray * psia);
SHSTDAPI SHAddDefaultPropertiesByExt(PCWSTR pszExt, IPropertyStore * pPropStore);
SHSTDAPI SHCreateDefaultPropertiesOp(IShellItem * psi, IFileOperation ** ppFileOp);
SHSTDAPI SHSetDefaultProperties(HWND hwnd, IShellItem * psi, DWORD dwFileOpFlags, IFileOperationProgressSink * pfops);
#endif
#if (_WIN32_IE >= 0x0500)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0058_v0_0_s_ifspec;
#ifndef __ICategoryProvider_INTERFACE_DEFINED__
#define __ICategoryProvider_INTERFACE_DEFINED__
extern const IID IID_ICategoryProvider;
typedef struct ICategoryProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICategoryProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICategoryProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICategoryProvider * This);
	HRESULT(STDMETHODCALLTYPE * CanCategorizeOnSCID) (ICategoryProvider * This, const SHCOLUMNID * pscid);
	HRESULT(STDMETHODCALLTYPE * GetDefaultCategory) (ICategoryProvider * This, GUID * pguid, SHCOLUMNID * pscid);
	HRESULT(STDMETHODCALLTYPE * GetCategoryForSCID) (ICategoryProvider * This, const SHCOLUMNID * pscid, GUID * pguid);
	HRESULT(STDMETHODCALLTYPE * EnumCategories) (ICategoryProvider * This, IEnumGUID ** penum);
	HRESULT(STDMETHODCALLTYPE * GetCategoryName) (ICategoryProvider * This, const GUID * pguid, LPWSTR pszName, UINT cch);
	HRESULT(STDMETHODCALLTYPE * CreateCategory) (ICategoryProvider * This, const GUID * pguid, REFIID riid, void **ppv);
	END_INTERFACE
}  ICategoryProviderVtbl;
interface ICategoryProvider
{
	CONST_VTBL struct ICategoryProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICategoryProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICategoryProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICategoryProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICategoryProvider_CanCategorizeOnSCID(This,pscid)( (This)->lpVtbl -> CanCategorizeOnSCID(This,pscid) )
#define ICategoryProvider_GetDefaultCategory(This,pguid,pscid)( (This)->lpVtbl -> GetDefaultCategory(This,pguid,pscid) )
#define ICategoryProvider_GetCategoryForSCID(This,pscid,pguid)( (This)->lpVtbl -> GetCategoryForSCID(This,pscid,pguid) )
#define ICategoryProvider_EnumCategories(This,penum)( (This)->lpVtbl -> EnumCategories(This,penum) )
#define ICategoryProvider_GetCategoryName(This,pguid,pszName,cch)( (This)->lpVtbl -> GetCategoryName(This,pguid,pszName,cch) )
#define ICategoryProvider_CreateCategory(This,pguid,riid,ppv)( (This)->lpVtbl -> CreateCategory(This,pguid,riid,ppv) )
#endif
#endif
typedef enum CATEGORYINFO_FLAGS
{
	CATINFO_NORMAL = 0,
	CATINFO_COLLAPSED = 0x1,
	CATINFO_HIDDEN = 0x2,
	CATINFO_EXPANDED = 0x4,
	CATINFO_NOHEADER = 0x8,
	CATINFO_NOTCOLLAPSIBLE = 0x10,
	CATINFO_NOHEADERCOUNT = 0x20,
	CATINFO_SUBSETTED = 0x40
} CATEGORYINFO_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(CATEGORYINFO_FLAGS)
typedef enum CATSORT_FLAGS
{
	CATSORT_DEFAULT = 0,
	CATSORT_NAME = 0x1
} CATSORT_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(CATSORT_FLAGS)
typedef struct CATEGORY_INFO
{
	CATEGORYINFO_FLAGS cif;
	WCHAR wszName[260];
} CATEGORY_INFO;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0059_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0059_v0_0_s_ifspec;
#ifndef __ICategorizer_INTERFACE_DEFINED__
#define __ICategorizer_INTERFACE_DEFINED__
extern const IID IID_ICategorizer;
typedef struct ICategorizerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICategorizer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICategorizer * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICategorizer * This);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (ICategorizer * This, LPWSTR pszDesc, UINT cch);
	HRESULT(STDMETHODCALLTYPE * GetCategory) (ICategorizer * This, UINT cidl, PCUITEMID_CHILD_ARRAY apidl, DWORD * rgCategoryIds);
	HRESULT(STDMETHODCALLTYPE * GetCategoryInfo) (ICategorizer * This, DWORD dwCategoryId, CATEGORY_INFO * pci);
	HRESULT(STDMETHODCALLTYPE * CompareCategory) (ICategorizer * This, CATSORT_FLAGS csfFlags, DWORD dwCategoryId1, DWORD dwCategoryId2);
	END_INTERFACE
}  ICategorizerVtbl;
interface ICategorizer
{
	CONST_VTBL struct ICategorizerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICategorizer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICategorizer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICategorizer_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICategorizer_GetDescription(This,pszDesc,cch)( (This)->lpVtbl -> GetDescription(This,pszDesc,cch) )
#define ICategorizer_GetCategory(This,cidl,apidl,rgCategoryIds)( (This)->lpVtbl -> GetCategory(This,cidl,apidl,rgCategoryIds) )
#define ICategorizer_GetCategoryInfo(This,dwCategoryId,pci)( (This)->lpVtbl -> GetCategoryInfo(This,dwCategoryId,pci) )
#define ICategorizer_CompareCategory(This,csfFlags,dwCategoryId1,dwCategoryId2)( (This)->lpVtbl -> CompareCategory(This,csfFlags,dwCategoryId1,dwCategoryId2) )
#endif
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#include <pshpack8.h>
typedef struct SHDRAGIMAGE
{
	SIZE sizeDragImage;
	POINT ptOffset;
	HBITMAP hbmpDragImage;
	COLORREF crColorKey;
} SHDRAGIMAGE;
typedef struct SHDRAGIMAGE *LPSHDRAGIMAGE;
#include <poppack.h>
#define DI_GETDRAGIMAGE     TEXT("ShellGetDragImage")
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0060_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0060_v0_0_s_ifspec;
#ifndef __IDropTargetHelper_INTERFACE_DEFINED__
#define __IDropTargetHelper_INTERFACE_DEFINED__
extern const IID IID_IDropTargetHelper;
typedef struct IDropTargetHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDropTargetHelper * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDropTargetHelper * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDropTargetHelper * This);
	HRESULT(STDMETHODCALLTYPE * DragEnter) (IDropTargetHelper * This, HWND hwndTarget, IDataObject * pDataObject, POINT * ppt, DWORD dwEffect);
	HRESULT(STDMETHODCALLTYPE * DragLeave) (IDropTargetHelper * This);
	HRESULT(STDMETHODCALLTYPE * DragOver) (IDropTargetHelper * This, POINT * ppt, DWORD dwEffect);
	HRESULT(STDMETHODCALLTYPE * Drop) (IDropTargetHelper * This, IDataObject * pDataObject, POINT * ppt, DWORD dwEffect);
	HRESULT(STDMETHODCALLTYPE * Show) (IDropTargetHelper * This, BOOL fShow);
	END_INTERFACE
}  IDropTargetHelperVtbl;
interface IDropTargetHelper
{
	CONST_VTBL struct IDropTargetHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDropTargetHelper_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDropTargetHelper_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDropTargetHelper_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDropTargetHelper_DragEnter(This,hwndTarget,pDataObject,ppt,dwEffect)( (This)->lpVtbl -> DragEnter(This,hwndTarget,pDataObject,ppt,dwEffect) )
#define IDropTargetHelper_DragLeave(This)( (This)->lpVtbl -> DragLeave(This) )
#define IDropTargetHelper_DragOver(This,ppt,dwEffect)( (This)->lpVtbl -> DragOver(This,ppt,dwEffect) )
#define IDropTargetHelper_Drop(This,pDataObject,ppt,dwEffect)( (This)->lpVtbl -> Drop(This,pDataObject,ppt,dwEffect) )
#define IDropTargetHelper_Show(This,fShow)( (This)->lpVtbl -> Show(This,fShow) )
#endif
#endif
#ifndef __IDragSourceHelper_INTERFACE_DEFINED__
#define __IDragSourceHelper_INTERFACE_DEFINED__
extern const IID IID_IDragSourceHelper;
typedef struct IDragSourceHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDragSourceHelper * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDragSourceHelper * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDragSourceHelper * This);
	HRESULT(STDMETHODCALLTYPE * InitializeFromBitmap) (IDragSourceHelper * This, LPSHDRAGIMAGE pshdi, IDataObject * pDataObject);
	HRESULT(STDMETHODCALLTYPE * InitializeFromWindow) (IDragSourceHelper * This, HWND hwnd, POINT * ppt, IDataObject * pDataObject);
	END_INTERFACE
}  IDragSourceHelperVtbl;
interface IDragSourceHelper
{
	CONST_VTBL struct IDragSourceHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDragSourceHelper_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDragSourceHelper_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDragSourceHelper_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDragSourceHelper_InitializeFromBitmap(This,pshdi,pDataObject)( (This)->lpVtbl -> InitializeFromBitmap(This,pshdi,pDataObject) )
#define IDragSourceHelper_InitializeFromWindow(This,hwnd,ppt,pDataObject)( (This)->lpVtbl -> InitializeFromWindow(This,hwnd,ppt,pDataObject) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef enum DSH_FLAGS
{
	DSH_ALLOWDROPDESCRIPTIONTEXT = 0x1
} DSH_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(DSH_FLAGS)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0062_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0062_v0_0_s_ifspec;
#ifndef __IDragSourceHelper2_INTERFACE_DEFINED__
#define __IDragSourceHelper2_INTERFACE_DEFINED__
extern const IID IID_IDragSourceHelper2;
typedef struct IDragSourceHelper2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDragSourceHelper2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDragSourceHelper2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDragSourceHelper2 * This);
	HRESULT(STDMETHODCALLTYPE * InitializeFromBitmap) (IDragSourceHelper2 * This, LPSHDRAGIMAGE pshdi, IDataObject * pDataObject);
	HRESULT(STDMETHODCALLTYPE * InitializeFromWindow) (IDragSourceHelper2 * This, HWND hwnd, POINT * ppt, IDataObject * pDataObject);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IDragSourceHelper2 * This, DWORD dwFlags);
	END_INTERFACE
}  IDragSourceHelper2Vtbl;
interface IDragSourceHelper2
{
	CONST_VTBL struct IDragSourceHelper2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDragSourceHelper2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDragSourceHelper2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDragSourceHelper2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDragSourceHelper2_InitializeFromBitmap(This,pshdi,pDataObject)( (This)->lpVtbl -> InitializeFromBitmap(This,pshdi,pDataObject) )
#define IDragSourceHelper2_InitializeFromWindow(This,hwnd,ppt,pDataObject)( (This)->lpVtbl -> InitializeFromWindow(This,hwnd,ppt,pDataObject) )
#define IDragSourceHelper2_SetFlags(This,dwFlags)( (This)->lpVtbl -> SetFlags(This,dwFlags) )
#endif
#endif
#endif
#endif
#ifdef UNICODE
#define IShellLink      IShellLinkW
#else
#define IShellLink      IShellLinkA
#endif
typedef enum SLR_FLAGS
{
	SLR_NO_UI = 0x1,
	SLR_ANY_MATCH = 0x2,
	SLR_UPDATE = 0x4,
	SLR_NOUPDATE = 0x8,
	SLR_NOSEARCH = 0x10,
	SLR_NOTRACK = 0x20,
	SLR_NOLINKINFO = 0x40,
	SLR_INVOKE_MSI = 0x80,
	SLR_NO_UI_WITH_MSG_PUMP = 0x101,
	SLR_OFFER_DELETE_WITHOUT_FILE = 0x200,
	SLR_KNOWNFOLDER = 0x400,
	SLR_MACHINE_IN_LOCAL_TARGET = 0x800,
	SLR_UPDATE_MACHINE_AND_SID = 0x1000
} SLR_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(SLR_FLAGS)
typedef enum SLGP_FLAGS
{
	SLGP_SHORTPATH = 0x1,
	SLGP_UNCPRIORITY = 0x2,
	SLGP_RAWPATH = 0x4,
	SLGP_RELATIVEPRIORITY = 0x8
} SLGP_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(SLGP_FLAGS)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0063_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0063_v0_0_s_ifspec;
#ifndef __IShellLinkA_INTERFACE_DEFINED__
#define __IShellLinkA_INTERFACE_DEFINED__
extern const IID IID_IShellLinkA;
typedef struct IShellLinkAVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellLinkA * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellLinkA * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellLinkA * This);
	HRESULT(STDMETHODCALLTYPE * GetPath) (IShellLinkA * This, LPSTR pszFile, int cch, WIN32_FIND_DATAA * pfd, DWORD fFlags);
	HRESULT(STDMETHODCALLTYPE * GetIDList) (IShellLinkA * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * SetIDList) (IShellLinkA * This, PCIDLIST_ABSOLUTE pidl);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (IShellLinkA * This, LPSTR pszName, int cch);
	HRESULT(STDMETHODCALLTYPE * SetDescription) (IShellLinkA * This, LPCSTR pszName);
	HRESULT(STDMETHODCALLTYPE * GetWorkingDirectory) (IShellLinkA * This, LPSTR pszDir, int cch);
	HRESULT(STDMETHODCALLTYPE * SetWorkingDirectory) (IShellLinkA * This, LPCSTR pszDir);
	HRESULT(STDMETHODCALLTYPE * GetArguments) (IShellLinkA * This, LPSTR pszArgs, int cch);
	HRESULT(STDMETHODCALLTYPE * SetArguments) (IShellLinkA * This, LPCSTR pszArgs);
	HRESULT(STDMETHODCALLTYPE * GetHotkey) (IShellLinkA * This, WORD * pwHotkey);
	HRESULT(STDMETHODCALLTYPE * SetHotkey) (IShellLinkA * This, WORD wHotkey);
	HRESULT(STDMETHODCALLTYPE * GetShowCmd) (IShellLinkA * This, int *piShowCmd);
	HRESULT(STDMETHODCALLTYPE * SetShowCmd) (IShellLinkA * This, int iShowCmd);
	HRESULT(STDMETHODCALLTYPE * GetIconLocation) (IShellLinkA * This, LPSTR pszIconPath, int cch, int *piIcon);
	HRESULT(STDMETHODCALLTYPE * SetIconLocation) (IShellLinkA * This, LPCSTR pszIconPath, int iIcon);
	HRESULT(STDMETHODCALLTYPE * SetRelativePath) (IShellLinkA * This, LPCSTR pszPathRel, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * Resolve) (IShellLinkA * This, HWND hwnd, DWORD fFlags);
	HRESULT(STDMETHODCALLTYPE * SetPath) (IShellLinkA * This, LPCSTR pszFile);
	END_INTERFACE
}  IShellLinkAVtbl;
interface IShellLinkA
{
	CONST_VTBL struct IShellLinkAVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellLinkA_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellLinkA_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellLinkA_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellLinkA_GetPath(This,pszFile,cch,pfd,fFlags)( (This)->lpVtbl -> GetPath(This,pszFile,cch,pfd,fFlags) )
#define IShellLinkA_GetIDList(This,ppidl)( (This)->lpVtbl -> GetIDList(This,ppidl) )
#define IShellLinkA_SetIDList(This,pidl)( (This)->lpVtbl -> SetIDList(This,pidl) )
#define IShellLinkA_GetDescription(This,pszName,cch)( (This)->lpVtbl -> GetDescription(This,pszName,cch) )
#define IShellLinkA_SetDescription(This,pszName)( (This)->lpVtbl -> SetDescription(This,pszName) )
#define IShellLinkA_GetWorkingDirectory(This,pszDir,cch)( (This)->lpVtbl -> GetWorkingDirectory(This,pszDir,cch) )
#define IShellLinkA_SetWorkingDirectory(This,pszDir)( (This)->lpVtbl -> SetWorkingDirectory(This,pszDir) )
#define IShellLinkA_GetArguments(This,pszArgs,cch)( (This)->lpVtbl -> GetArguments(This,pszArgs,cch) )
#define IShellLinkA_SetArguments(This,pszArgs)( (This)->lpVtbl -> SetArguments(This,pszArgs) )
#define IShellLinkA_GetHotkey(This,pwHotkey)( (This)->lpVtbl -> GetHotkey(This,pwHotkey) )
#define IShellLinkA_SetHotkey(This,wHotkey)( (This)->lpVtbl -> SetHotkey(This,wHotkey) )
#define IShellLinkA_GetShowCmd(This,piShowCmd)( (This)->lpVtbl -> GetShowCmd(This,piShowCmd) )
#define IShellLinkA_SetShowCmd(This,iShowCmd)( (This)->lpVtbl -> SetShowCmd(This,iShowCmd) )
#define IShellLinkA_GetIconLocation(This,pszIconPath,cch,piIcon)( (This)->lpVtbl -> GetIconLocation(This,pszIconPath,cch,piIcon) )
#define IShellLinkA_SetIconLocation(This,pszIconPath,iIcon)( (This)->lpVtbl -> SetIconLocation(This,pszIconPath,iIcon) )
#define IShellLinkA_SetRelativePath(This,pszPathRel,dwReserved)( (This)->lpVtbl -> SetRelativePath(This,pszPathRel,dwReserved) )
#define IShellLinkA_Resolve(This,hwnd,fFlags)( (This)->lpVtbl -> Resolve(This,hwnd,fFlags) )
#define IShellLinkA_SetPath(This,pszFile)( (This)->lpVtbl -> SetPath(This,pszFile) )
#endif
#endif
#ifndef __IShellLinkW_INTERFACE_DEFINED__
#define __IShellLinkW_INTERFACE_DEFINED__
extern const IID IID_IShellLinkW;
typedef struct IShellLinkWVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellLinkW * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellLinkW * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellLinkW * This);
	HRESULT(STDMETHODCALLTYPE * GetPath) (IShellLinkW * This, LPWSTR pszFile, int cch, WIN32_FIND_DATAW * pfd, DWORD fFlags);
	HRESULT(STDMETHODCALLTYPE * GetIDList) (IShellLinkW * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * SetIDList) (IShellLinkW * This, PCIDLIST_ABSOLUTE pidl);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (IShellLinkW * This, LPWSTR pszName, int cch);
	HRESULT(STDMETHODCALLTYPE * SetDescription) (IShellLinkW * This, LPCWSTR pszName);
	HRESULT(STDMETHODCALLTYPE * GetWorkingDirectory) (IShellLinkW * This, LPWSTR pszDir, int cch);
	HRESULT(STDMETHODCALLTYPE * SetWorkingDirectory) (IShellLinkW * This, LPCWSTR pszDir);
	HRESULT(STDMETHODCALLTYPE * GetArguments) (IShellLinkW * This, LPWSTR pszArgs, int cch);
	HRESULT(STDMETHODCALLTYPE * SetArguments) (IShellLinkW * This, LPCWSTR pszArgs);
	HRESULT(STDMETHODCALLTYPE * GetHotkey) (IShellLinkW * This, WORD * pwHotkey);
	HRESULT(STDMETHODCALLTYPE * SetHotkey) (IShellLinkW * This, WORD wHotkey);
	HRESULT(STDMETHODCALLTYPE * GetShowCmd) (IShellLinkW * This, int *piShowCmd);
	HRESULT(STDMETHODCALLTYPE * SetShowCmd) (IShellLinkW * This, int iShowCmd);
	HRESULT(STDMETHODCALLTYPE * GetIconLocation) (IShellLinkW * This, LPWSTR pszIconPath, int cch, int *piIcon);
	HRESULT(STDMETHODCALLTYPE * SetIconLocation) (IShellLinkW * This, LPCWSTR pszIconPath, int iIcon);
	HRESULT(STDMETHODCALLTYPE * SetRelativePath) (IShellLinkW * This, LPCWSTR pszPathRel, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * Resolve) (IShellLinkW * This, HWND hwnd, DWORD fFlags);
	HRESULT(STDMETHODCALLTYPE * SetPath) (IShellLinkW * This, LPCWSTR pszFile);
	END_INTERFACE
}  IShellLinkWVtbl;
interface IShellLinkW
{
	CONST_VTBL struct IShellLinkWVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellLinkW_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellLinkW_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellLinkW_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellLinkW_GetPath(This,pszFile,cch,pfd,fFlags)( (This)->lpVtbl -> GetPath(This,pszFile,cch,pfd,fFlags) )
#define IShellLinkW_GetIDList(This,ppidl)( (This)->lpVtbl -> GetIDList(This,ppidl) )
#define IShellLinkW_SetIDList(This,pidl)( (This)->lpVtbl -> SetIDList(This,pidl) )
#define IShellLinkW_GetDescription(This,pszName,cch)( (This)->lpVtbl -> GetDescription(This,pszName,cch) )
#define IShellLinkW_SetDescription(This,pszName)( (This)->lpVtbl -> SetDescription(This,pszName) )
#define IShellLinkW_GetWorkingDirectory(This,pszDir,cch)( (This)->lpVtbl -> GetWorkingDirectory(This,pszDir,cch) )
#define IShellLinkW_SetWorkingDirectory(This,pszDir)( (This)->lpVtbl -> SetWorkingDirectory(This,pszDir) )
#define IShellLinkW_GetArguments(This,pszArgs,cch)( (This)->lpVtbl -> GetArguments(This,pszArgs,cch) )
#define IShellLinkW_SetArguments(This,pszArgs)( (This)->lpVtbl -> SetArguments(This,pszArgs) )
#define IShellLinkW_GetHotkey(This,pwHotkey)( (This)->lpVtbl -> GetHotkey(This,pwHotkey) )
#define IShellLinkW_SetHotkey(This,wHotkey)( (This)->lpVtbl -> SetHotkey(This,wHotkey) )
#define IShellLinkW_GetShowCmd(This,piShowCmd)( (This)->lpVtbl -> GetShowCmd(This,piShowCmd) )
#define IShellLinkW_SetShowCmd(This,iShowCmd)( (This)->lpVtbl -> SetShowCmd(This,iShowCmd) )
#define IShellLinkW_GetIconLocation(This,pszIconPath,cch,piIcon)( (This)->lpVtbl -> GetIconLocation(This,pszIconPath,cch,piIcon) )
#define IShellLinkW_SetIconLocation(This,pszIconPath,iIcon)( (This)->lpVtbl -> SetIconLocation(This,pszIconPath,iIcon) )
#define IShellLinkW_SetRelativePath(This,pszPathRel,dwReserved)( (This)->lpVtbl -> SetRelativePath(This,pszPathRel,dwReserved) )
#define IShellLinkW_Resolve(This,hwnd,fFlags)( (This)->lpVtbl -> Resolve(This,hwnd,fFlags) )
#define IShellLinkW_SetPath(This,pszFile)( (This)->lpVtbl -> SetPath(This,pszFile) )
#endif
#endif
#ifndef __IShellLinkDataList_INTERFACE_DEFINED__
#define __IShellLinkDataList_INTERFACE_DEFINED__
extern const IID IID_IShellLinkDataList;
typedef struct IShellLinkDataListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellLinkDataList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellLinkDataList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellLinkDataList * This);
	HRESULT(STDMETHODCALLTYPE * AddDataBlock) (IShellLinkDataList * This, void *pDataBlock);
	HRESULT(STDMETHODCALLTYPE * CopyDataBlock) (IShellLinkDataList * This, DWORD dwSig, void **ppDataBlock);
	HRESULT(STDMETHODCALLTYPE * RemoveDataBlock) (IShellLinkDataList * This, DWORD dwSig);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IShellLinkDataList * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IShellLinkDataList * This, DWORD dwFlags);
	END_INTERFACE
}  IShellLinkDataListVtbl;
interface IShellLinkDataList
{
	CONST_VTBL struct IShellLinkDataListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellLinkDataList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellLinkDataList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellLinkDataList_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellLinkDataList_AddDataBlock(This,pDataBlock)( (This)->lpVtbl -> AddDataBlock(This,pDataBlock) )
#define IShellLinkDataList_CopyDataBlock(This,dwSig,ppDataBlock)( (This)->lpVtbl -> CopyDataBlock(This,dwSig,ppDataBlock) )
#define IShellLinkDataList_RemoveDataBlock(This,dwSig)( (This)->lpVtbl -> RemoveDataBlock(This,dwSig) )
#define IShellLinkDataList_GetFlags(This,pdwFlags)( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
#define IShellLinkDataList_SetFlags(This,dwFlags)( (This)->lpVtbl -> SetFlags(This,dwFlags) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WIN2K)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0066_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0066_v0_0_s_ifspec;
#ifndef __IResolveShellLink_INTERFACE_DEFINED__
#define __IResolveShellLink_INTERFACE_DEFINED__
extern const IID IID_IResolveShellLink;
typedef struct IResolveShellLinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IResolveShellLink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IResolveShellLink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IResolveShellLink * This);
	HRESULT(STDMETHODCALLTYPE * ResolveShellLink) (IResolveShellLink * This, IUnknown * punkLink, HWND hwnd, DWORD fFlags);
	END_INTERFACE
}  IResolveShellLinkVtbl;
interface IResolveShellLink
{
	CONST_VTBL struct IResolveShellLinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResolveShellLink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResolveShellLink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IResolveShellLink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IResolveShellLink_ResolveShellLink(This,punkLink,hwnd,fFlags)( (This)->lpVtbl -> ResolveShellLink(This,punkLink,hwnd,fFlags) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0067_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0067_v0_0_s_ifspec;
#ifndef __IActionProgressDialog_INTERFACE_DEFINED__
#define __IActionProgressDialog_INTERFACE_DEFINED__
enum _SPINITF
{
	SPINITF_NORMAL = 0,
	SPINITF_MODAL = 0x1,
	SPINITF_NOMINIMIZE = 0x8
};
typedef DWORD SPINITF;
extern const IID IID_IActionProgressDialog;
typedef struct IActionProgressDialogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActionProgressDialog * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IActionProgressDialog * This);
	ULONG(STDMETHODCALLTYPE * Release) (IActionProgressDialog * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IActionProgressDialog * This, SPINITF flags, LPCWSTR pszTitle, LPCWSTR pszCancel);
	HRESULT(STDMETHODCALLTYPE * Stop) (IActionProgressDialog * This);
	END_INTERFACE
}  IActionProgressDialogVtbl;
interface IActionProgressDialog
{
	CONST_VTBL struct IActionProgressDialogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActionProgressDialog_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActionProgressDialog_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IActionProgressDialog_Release(This)( (This)->lpVtbl -> Release(This) )
#define IActionProgressDialog_Initialize(This,flags,pszTitle,pszCancel)( (This)->lpVtbl -> Initialize(This,flags,pszTitle,pszCancel) )
#define IActionProgressDialog_Stop(This)( (This)->lpVtbl -> Stop(This) )
#endif
#endif
#ifndef __IHWEventHandler_INTERFACE_DEFINED__
#define __IHWEventHandler_INTERFACE_DEFINED__
extern const IID IID_IHWEventHandler;
typedef struct IHWEventHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IHWEventHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHWEventHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHWEventHandler * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IHWEventHandler * This, LPCWSTR pszParams);
	HRESULT(STDMETHODCALLTYPE * HandleEvent) (IHWEventHandler * This, LPCWSTR pszDeviceID, LPCWSTR pszAltDeviceID, LPCWSTR pszEventType);
	HRESULT(STDMETHODCALLTYPE * HandleEventWithContent) (IHWEventHandler * This, LPCWSTR pszDeviceID, LPCWSTR pszAltDeviceID, LPCWSTR pszEventType, LPCWSTR pszContentTypeHandler, IDataObject * pdataobject);
	END_INTERFACE
}  IHWEventHandlerVtbl;
interface IHWEventHandler
{
	CONST_VTBL struct IHWEventHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHWEventHandler_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHWEventHandler_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IHWEventHandler_Release(This)( (This)->lpVtbl -> Release(This) )
#define IHWEventHandler_Initialize(This,pszParams)( (This)->lpVtbl -> Initialize(This,pszParams) )
#define IHWEventHandler_HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType)( (This)->lpVtbl -> HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType) )
#define IHWEventHandler_HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject)( (This)->lpVtbl -> HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject) )
#endif
#endif
#ifndef __IHWEventHandler2_INTERFACE_DEFINED__
#define __IHWEventHandler2_INTERFACE_DEFINED__
extern const IID IID_IHWEventHandler2;
typedef struct IHWEventHandler2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IHWEventHandler2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHWEventHandler2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHWEventHandler2 * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IHWEventHandler2 * This, LPCWSTR pszParams);
	HRESULT(STDMETHODCALLTYPE * HandleEvent) (IHWEventHandler2 * This, LPCWSTR pszDeviceID, LPCWSTR pszAltDeviceID, LPCWSTR pszEventType);
	HRESULT(STDMETHODCALLTYPE * HandleEventWithContent) (IHWEventHandler2 * This, LPCWSTR pszDeviceID, LPCWSTR pszAltDeviceID, LPCWSTR pszEventType, LPCWSTR pszContentTypeHandler, IDataObject * pdataobject);
	HRESULT(STDMETHODCALLTYPE * HandleEventWithHWND) (IHWEventHandler2 * This, LPCWSTR pszDeviceID, LPCWSTR pszAltDeviceID, LPCWSTR pszEventType, HWND hwndOwner);
	END_INTERFACE
}  IHWEventHandler2Vtbl;
interface IHWEventHandler2
{
	CONST_VTBL struct IHWEventHandler2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHWEventHandler2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHWEventHandler2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IHWEventHandler2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IHWEventHandler2_Initialize(This,pszParams)( (This)->lpVtbl -> Initialize(This,pszParams) )
#define IHWEventHandler2_HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType)( (This)->lpVtbl -> HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType) )
#define IHWEventHandler2_HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject)( (This)->lpVtbl -> HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject) )
#define IHWEventHandler2_HandleEventWithHWND(This,pszDeviceID,pszAltDeviceID,pszEventType,hwndOwner)( (This)->lpVtbl -> HandleEventWithHWND(This,pszDeviceID,pszAltDeviceID,pszEventType,hwndOwner) )
#endif
#endif
#define ARCONTENT_AUTORUNINF             0x00000002
#define ARCONTENT_AUDIOCD                0x00000004
#define ARCONTENT_DVDMOVIE               0x00000008
#define ARCONTENT_BLANKCD                0x00000010
#define ARCONTENT_BLANKDVD               0x00000020
#define ARCONTENT_UNKNOWNCONTENT         0x00000040
#define ARCONTENT_AUTOPLAYPIX            0x00000080
#define ARCONTENT_AUTOPLAYMUSIC          0x00000100
#define ARCONTENT_AUTOPLAYVIDEO          0x00000200
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define ARCONTENT_VCD                    0x00000400
#define ARCONTENT_SVCD                   0x00000800
#define ARCONTENT_DVDAUDIO               0x00001000
#define ARCONTENT_BLANKBD                0x00002000
#define ARCONTENT_BLURAY                 0x00004000
#define ARCONTENT_NONE                   0x00000000
#define ARCONTENT_MASK                   0x00007FFE
#define ARCONTENT_PHASE_UNKNOWN          0x00000000
#define ARCONTENT_PHASE_PRESNIFF         0x10000000
#define ARCONTENT_PHASE_SNIFFING         0x20000000
#define ARCONTENT_PHASE_FINAL            0x40000000
#define ARCONTENT_PHASE_MASK             0x70000000
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0070_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0070_v0_0_s_ifspec;
#ifndef __IQueryCancelAutoPlay_INTERFACE_DEFINED__
#define __IQueryCancelAutoPlay_INTERFACE_DEFINED__
extern const IID IID_IQueryCancelAutoPlay;
typedef struct IQueryCancelAutoPlayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IQueryCancelAutoPlay * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IQueryCancelAutoPlay * This);
	ULONG(STDMETHODCALLTYPE * Release) (IQueryCancelAutoPlay * This);
	HRESULT(STDMETHODCALLTYPE * AllowAutoPlay) (IQueryCancelAutoPlay * This, LPCWSTR pszPath, DWORD dwContentType, LPCWSTR pszLabel, DWORD dwSerialNumber);
	END_INTERFACE
}  IQueryCancelAutoPlayVtbl;
interface IQueryCancelAutoPlay
{
	CONST_VTBL struct IQueryCancelAutoPlayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IQueryCancelAutoPlay_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IQueryCancelAutoPlay_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IQueryCancelAutoPlay_Release(This)( (This)->lpVtbl -> Release(This) )
#define IQueryCancelAutoPlay_AllowAutoPlay(This,pszPath,dwContentType,pszLabel,dwSerialNumber)( (This)->lpVtbl -> AllowAutoPlay(This,pszPath,dwContentType,pszLabel,dwSerialNumber) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0071_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0071_v0_0_s_ifspec;
#ifndef __IDynamicHWHandler_INTERFACE_DEFINED__
#define __IDynamicHWHandler_INTERFACE_DEFINED__
extern const IID IID_IDynamicHWHandler;
typedef struct IDynamicHWHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDynamicHWHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDynamicHWHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDynamicHWHandler * This);
	HRESULT(STDMETHODCALLTYPE * GetDynamicInfo) (IDynamicHWHandler * This, LPCWSTR pszDeviceID, DWORD dwContentType, LPWSTR * ppszAction);
	END_INTERFACE
}  IDynamicHWHandlerVtbl;
interface IDynamicHWHandler
{
	CONST_VTBL struct IDynamicHWHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDynamicHWHandler_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDynamicHWHandler_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDynamicHWHandler_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDynamicHWHandler_GetDynamicInfo(This,pszDeviceID,dwContentType,ppszAction)( (This)->lpVtbl -> GetDynamicInfo(This,pszDeviceID,dwContentType,ppszAction) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0072_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0072_v0_0_s_ifspec;
#ifndef __IActionProgress_INTERFACE_DEFINED__
#define __IActionProgress_INTERFACE_DEFINED__
enum _SPBEGINF
{
	SPBEGINF_NORMAL = 0,
	SPBEGINF_AUTOTIME = 0x2,
	SPBEGINF_NOPROGRESSBAR = 0x10,
	SPBEGINF_MARQUEEPROGRESS = 0x20,
	SPBEGINF_NOCANCELBUTTON = 0x40
};
typedef DWORD SPBEGINF;
typedef enum _SPACTION
{
	SPACTION_NONE = 0,
	SPACTION_MOVING = (SPACTION_NONE + 1),
	SPACTION_COPYING = (SPACTION_MOVING + 1),
	SPACTION_RECYCLING = (SPACTION_COPYING + 1),
	SPACTION_APPLYINGATTRIBS = (SPACTION_RECYCLING + 1),
	SPACTION_DOWNLOADING = (SPACTION_APPLYINGATTRIBS + 1),
	SPACTION_SEARCHING_INTERNET = (SPACTION_DOWNLOADING + 1),
	SPACTION_CALCULATING = (SPACTION_SEARCHING_INTERNET + 1),
	SPACTION_UPLOADING = (SPACTION_CALCULATING + 1),
	SPACTION_SEARCHING_FILES = (SPACTION_UPLOADING + 1),
	SPACTION_DELETING = (SPACTION_SEARCHING_FILES + 1),
	SPACTION_RENAMING = (SPACTION_DELETING + 1),
	SPACTION_FORMATTING = (SPACTION_RENAMING + 1),
	SPACTION_COPY_MOVING = (SPACTION_FORMATTING + 1)
} SPACTION;
typedef enum _SPTEXT
{
	SPTEXT_ACTIONDESCRIPTION = 1,
	SPTEXT_ACTIONDETAIL = (SPTEXT_ACTIONDESCRIPTION + 1)
} SPTEXT;
extern const IID IID_IActionProgress;
typedef struct IActionProgressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActionProgress * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IActionProgress * This);
	ULONG(STDMETHODCALLTYPE * Release) (IActionProgress * This);
	HRESULT(STDMETHODCALLTYPE * Begin) (IActionProgress * This, SPACTION action, SPBEGINF flags);
	HRESULT(STDMETHODCALLTYPE * UpdateProgress) (IActionProgress * This, ULONGLONG ulCompleted, ULONGLONG ulTotal);
	HRESULT(STDMETHODCALLTYPE * UpdateText) (IActionProgress * This, SPTEXT sptext, LPCWSTR pszText, BOOL fMayCompact);
	HRESULT(STDMETHODCALLTYPE * QueryCancel) (IActionProgress * This, BOOL * pfCancelled);
	HRESULT(STDMETHODCALLTYPE * ResetCancel) (IActionProgress * This);
	HRESULT(STDMETHODCALLTYPE * End) (IActionProgress * This);
	END_INTERFACE
}  IActionProgressVtbl;
interface IActionProgress
{
	CONST_VTBL struct IActionProgressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActionProgress_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActionProgress_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IActionProgress_Release(This)( (This)->lpVtbl -> Release(This) )
#define IActionProgress_Begin(This,action,flags)( (This)->lpVtbl -> Begin(This,action,flags) )
#define IActionProgress_UpdateProgress(This,ulCompleted,ulTotal)( (This)->lpVtbl -> UpdateProgress(This,ulCompleted,ulTotal) )
#define IActionProgress_UpdateText(This,sptext,pszText,fMayCompact)( (This)->lpVtbl -> UpdateText(This,sptext,pszText,fMayCompact) )
#define IActionProgress_QueryCancel(This,pfCancelled)( (This)->lpVtbl -> QueryCancel(This,pfCancelled) )
#define IActionProgress_ResetCancel(This)( (This)->lpVtbl -> ResetCancel(This) )
#define IActionProgress_End(This)( (This)->lpVtbl -> End(This) )
#endif
#endif
#ifndef __IShellExtInit_INTERFACE_DEFINED__
#define __IShellExtInit_INTERFACE_DEFINED__
extern const IID IID_IShellExtInit;
typedef struct IShellExtInitVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellExtInit * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellExtInit * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellExtInit * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IShellExtInit * This, PCIDLIST_ABSOLUTE pidlFolder, IDataObject * pdtobj, HKEY hkeyProgID);
	END_INTERFACE
}  IShellExtInitVtbl;
interface IShellExtInit
{
	CONST_VTBL struct IShellExtInitVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellExtInit_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellExtInit_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellExtInit_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellExtInit_Initialize(This,pidlFolder,pdtobj,hkeyProgID)( (This)->lpVtbl -> Initialize(This,pidlFolder,pdtobj,hkeyProgID) )
#endif
#endif
typedef IShellExtInit *LPSHELLEXTINIT;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0074_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0074_v0_0_s_ifspec;
#ifndef __IShellPropSheetExt_INTERFACE_DEFINED__
#define __IShellPropSheetExt_INTERFACE_DEFINED__
enum _EXPPS
{
	EXPPS_FILETYPES = 0x1
};
typedef UINT EXPPS;
extern const IID IID_IShellPropSheetExt;
typedef struct IShellPropSheetExtVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellPropSheetExt * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellPropSheetExt * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellPropSheetExt * This);
	HRESULT(STDMETHODCALLTYPE * AddPages) (IShellPropSheetExt * This, LPFNSVADDPROPSHEETPAGE pfnAddPage, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * ReplacePage) (IShellPropSheetExt * This, EXPPS uPageID, LPFNSVADDPROPSHEETPAGE pfnReplaceWith, LPARAM lParam);
	END_INTERFACE
}  IShellPropSheetExtVtbl;
interface IShellPropSheetExt
{
	CONST_VTBL struct IShellPropSheetExtVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellPropSheetExt_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellPropSheetExt_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellPropSheetExt_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellPropSheetExt_AddPages(This,pfnAddPage,lParam)( (This)->lpVtbl -> AddPages(This,pfnAddPage,lParam) )
#define IShellPropSheetExt_ReplacePage(This,uPageID,pfnReplaceWith,lParam)( (This)->lpVtbl -> ReplacePage(This,uPageID,pfnReplaceWith,lParam) )
#endif
#endif
typedef IShellPropSheetExt *LPSHELLPROPSHEETEXT;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0075_v0_0_s_ifspec;
#ifndef __IRemoteComputer_INTERFACE_DEFINED__
#define __IRemoteComputer_INTERFACE_DEFINED__
extern const IID IID_IRemoteComputer;
typedef struct IRemoteComputerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRemoteComputer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRemoteComputer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRemoteComputer * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IRemoteComputer * This, LPCWSTR pszMachine, BOOL bEnumerating);
	END_INTERFACE
}  IRemoteComputerVtbl;
interface IRemoteComputer
{
	CONST_VTBL struct IRemoteComputerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRemoteComputer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRemoteComputer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IRemoteComputer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IRemoteComputer_Initialize(This,pszMachine,bEnumerating)( (This)->lpVtbl -> Initialize(This,pszMachine,bEnumerating) )
#endif
#endif
#ifndef __IQueryContinue_INTERFACE_DEFINED__
#define __IQueryContinue_INTERFACE_DEFINED__
extern const IID IID_IQueryContinue;
typedef struct IQueryContinueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IQueryContinue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IQueryContinue * This);
	ULONG(STDMETHODCALLTYPE * Release) (IQueryContinue * This);
	HRESULT(STDMETHODCALLTYPE * QueryContinue) (IQueryContinue * This);
	END_INTERFACE
}  IQueryContinueVtbl;
interface IQueryContinue
{
	CONST_VTBL struct IQueryContinueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IQueryContinue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IQueryContinue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IQueryContinue_Release(This)( (This)->lpVtbl -> Release(This) )
#define IQueryContinue_QueryContinue(This)( (This)->lpVtbl -> QueryContinue(This) )
#endif
#endif
#ifndef __IObjectWithCancelEvent_INTERFACE_DEFINED__
#define __IObjectWithCancelEvent_INTERFACE_DEFINED__
extern const IID IID_IObjectWithCancelEvent;
typedef struct IObjectWithCancelEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IObjectWithCancelEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IObjectWithCancelEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IObjectWithCancelEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetCancelEvent) (IObjectWithCancelEvent * This, HANDLE * phEvent);
	END_INTERFACE
}  IObjectWithCancelEventVtbl;
interface IObjectWithCancelEvent
{
	CONST_VTBL struct IObjectWithCancelEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectWithCancelEvent_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectWithCancelEvent_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectWithCancelEvent_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectWithCancelEvent_GetCancelEvent(This,phEvent)( (This)->lpVtbl -> GetCancelEvent(This,phEvent) )
#endif
#endif
#ifndef __IUserNotification_INTERFACE_DEFINED__
#define __IUserNotification_INTERFACE_DEFINED__
extern const IID IID_IUserNotification;
typedef struct IUserNotificationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUserNotification * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUserNotification * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUserNotification * This);
	HRESULT(STDMETHODCALLTYPE * SetBalloonInfo) (IUserNotification * This, LPCWSTR pszTitle, LPCWSTR pszText, DWORD dwInfoFlags);
	HRESULT(STDMETHODCALLTYPE * SetBalloonRetry) (IUserNotification * This, DWORD dwShowTime, DWORD dwInterval, UINT cRetryCount);
	HRESULT(STDMETHODCALLTYPE * SetIconInfo) (IUserNotification * This, HICON hIcon, LPCWSTR pszToolTip);
	HRESULT(STDMETHODCALLTYPE * Show) (IUserNotification * This, IQueryContinue * pqc, DWORD dwContinuePollInterval);
	HRESULT(STDMETHODCALLTYPE * PlaySound) (IUserNotification * This, LPCWSTR pszSoundName);
	END_INTERFACE
}  IUserNotificationVtbl;
interface IUserNotification
{
	CONST_VTBL struct IUserNotificationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUserNotification_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUserNotification_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IUserNotification_Release(This)( (This)->lpVtbl -> Release(This) )
#define IUserNotification_SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags)( (This)->lpVtbl -> SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags) )
#define IUserNotification_SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount)( (This)->lpVtbl -> SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount) )
#define IUserNotification_SetIconInfo(This,hIcon,pszToolTip)( (This)->lpVtbl -> SetIconInfo(This,hIcon,pszToolTip) )
#define IUserNotification_Show(This,pqc,dwContinuePollInterval)( (This)->lpVtbl -> Show(This,pqc,dwContinuePollInterval) )
#define IUserNotification_PlaySound(This,pszSoundName)( (This)->lpVtbl -> PlaySound(This,pszSoundName) )
#endif
#endif
#ifndef __IUserNotificationCallback_INTERFACE_DEFINED__
#define __IUserNotificationCallback_INTERFACE_DEFINED__
extern const IID IID_IUserNotificationCallback;
typedef struct IUserNotificationCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUserNotificationCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUserNotificationCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUserNotificationCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnBalloonUserClick) (IUserNotificationCallback * This, POINT * pt);
	HRESULT(STDMETHODCALLTYPE * OnLeftClick) (IUserNotificationCallback * This, POINT * pt);
	HRESULT(STDMETHODCALLTYPE * OnContextMenu) (IUserNotificationCallback * This, POINT * pt);
	END_INTERFACE
}  IUserNotificationCallbackVtbl;
interface IUserNotificationCallback
{
	CONST_VTBL struct IUserNotificationCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUserNotificationCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUserNotificationCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IUserNotificationCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IUserNotificationCallback_OnBalloonUserClick(This,pt)( (This)->lpVtbl -> OnBalloonUserClick(This,pt) )
#define IUserNotificationCallback_OnLeftClick(This,pt)( (This)->lpVtbl -> OnLeftClick(This,pt) )
#define IUserNotificationCallback_OnContextMenu(This,pt)( (This)->lpVtbl -> OnContextMenu(This,pt) )
#endif
#endif
#ifndef __IUserNotification2_INTERFACE_DEFINED__
#define __IUserNotification2_INTERFACE_DEFINED__
extern const IID IID_IUserNotification2;
typedef struct IUserNotification2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUserNotification2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUserNotification2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUserNotification2 * This);
	HRESULT(STDMETHODCALLTYPE * SetBalloonInfo) (IUserNotification2 * This, LPCWSTR pszTitle, LPCWSTR pszText, DWORD dwInfoFlags);
	HRESULT(STDMETHODCALLTYPE * SetBalloonRetry) (IUserNotification2 * This, DWORD dwShowTime, DWORD dwInterval, UINT cRetryCount);
	HRESULT(STDMETHODCALLTYPE * SetIconInfo) (IUserNotification2 * This, HICON hIcon, LPCWSTR pszToolTip);
	HRESULT(STDMETHODCALLTYPE * Show) (IUserNotification2 * This, IQueryContinue * pqc, DWORD dwContinuePollInterval, IUserNotificationCallback * pSink);
	HRESULT(STDMETHODCALLTYPE * PlaySound) (IUserNotification2 * This, LPCWSTR pszSoundName);
	END_INTERFACE
}  IUserNotification2Vtbl;
interface IUserNotification2
{
	CONST_VTBL struct IUserNotification2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUserNotification2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUserNotification2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IUserNotification2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IUserNotification2_SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags)( (This)->lpVtbl -> SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags) )
#define IUserNotification2_SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount)( (This)->lpVtbl -> SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount) )
#define IUserNotification2_SetIconInfo(This,hIcon,pszToolTip)( (This)->lpVtbl -> SetIconInfo(This,hIcon,pszToolTip) )
#define IUserNotification2_Show(This,pqc,dwContinuePollInterval,pSink)( (This)->lpVtbl -> Show(This,pqc,dwContinuePollInterval,pSink) )
#define IUserNotification2_PlaySound(This,pszSoundName)( (This)->lpVtbl -> PlaySound(This,pszSoundName) )
#endif
#endif
#ifndef __IItemNameLimits_INTERFACE_DEFINED__
#define __IItemNameLimits_INTERFACE_DEFINED__
extern const IID IID_IItemNameLimits;
typedef struct IItemNameLimitsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IItemNameLimits * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IItemNameLimits * This);
	ULONG(STDMETHODCALLTYPE * Release) (IItemNameLimits * This);
	HRESULT(STDMETHODCALLTYPE * GetValidCharacters) (IItemNameLimits * This, LPWSTR * ppwszValidChars, LPWSTR * ppwszInvalidChars);
	HRESULT(STDMETHODCALLTYPE * GetMaxLength) (IItemNameLimits * This, LPCWSTR pszName, int *piMaxNameLen);
	END_INTERFACE
}  IItemNameLimitsVtbl;
interface IItemNameLimits
{
	CONST_VTBL struct IItemNameLimitsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IItemNameLimits_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IItemNameLimits_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IItemNameLimits_Release(This)( (This)->lpVtbl -> Release(This) )
#define IItemNameLimits_GetValidCharacters(This,ppwszValidChars,ppwszInvalidChars)( (This)->lpVtbl -> GetValidCharacters(This,ppwszValidChars,ppwszInvalidChars) )
#define IItemNameLimits_GetMaxLength(This,pszName,piMaxNameLen)( (This)->lpVtbl -> GetMaxLength(This,pszName,piMaxNameLen) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0082_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0082_v0_0_s_ifspec;
#ifndef __ISearchFolderItemFactory_INTERFACE_DEFINED__
#define __ISearchFolderItemFactory_INTERFACE_DEFINED__
extern const IID IID_ISearchFolderItemFactory;
typedef struct ISearchFolderItemFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchFolderItemFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchFolderItemFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchFolderItemFactory * This);
	HRESULT(STDMETHODCALLTYPE * SetDisplayName) (ISearchFolderItemFactory * This, LPCWSTR pszDisplayName);
	HRESULT(STDMETHODCALLTYPE * SetFolderTypeID) (ISearchFolderItemFactory * This, FOLDERTYPEID ftid);
	HRESULT(STDMETHODCALLTYPE * SetFolderLogicalViewMode) (ISearchFolderItemFactory * This, FOLDERLOGICALVIEWMODE flvm);
	HRESULT(STDMETHODCALLTYPE * SetIconSize) (ISearchFolderItemFactory * This, int iIconSize);
	HRESULT(STDMETHODCALLTYPE * SetVisibleColumns) (ISearchFolderItemFactory * This, UINT cVisibleColumns, PROPERTYKEY * rgKey);
	HRESULT(STDMETHODCALLTYPE * SetSortColumns) (ISearchFolderItemFactory * This, UINT cSortColumns, SORTCOLUMN * rgSortColumns);
	HRESULT(STDMETHODCALLTYPE * SetGroupColumn) (ISearchFolderItemFactory * This, REFPROPERTYKEY keyGroup);
	HRESULT(STDMETHODCALLTYPE * SetStacks) (ISearchFolderItemFactory * This, UINT cStackKeys, PROPERTYKEY * rgStackKeys);
	HRESULT(STDMETHODCALLTYPE * SetScope) (ISearchFolderItemFactory * This, IShellItemArray * psiaScope);
	HRESULT(STDMETHODCALLTYPE * SetCondition) (ISearchFolderItemFactory * This, ICondition * pCondition);
	HRESULT(STDMETHODCALLTYPE * GetShellItem) (ISearchFolderItemFactory * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetIDList) (ISearchFolderItemFactory * This, PIDLIST_ABSOLUTE * ppidl);
	END_INTERFACE
}  ISearchFolderItemFactoryVtbl;
interface ISearchFolderItemFactory
{
	CONST_VTBL struct ISearchFolderItemFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchFolderItemFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchFolderItemFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISearchFolderItemFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISearchFolderItemFactory_SetDisplayName(This,pszDisplayName)( (This)->lpVtbl -> SetDisplayName(This,pszDisplayName) )
#define ISearchFolderItemFactory_SetFolderTypeID(This,ftid)( (This)->lpVtbl -> SetFolderTypeID(This,ftid) )
#define ISearchFolderItemFactory_SetFolderLogicalViewMode(This,flvm)( (This)->lpVtbl -> SetFolderLogicalViewMode(This,flvm) )
#define ISearchFolderItemFactory_SetIconSize(This,iIconSize)( (This)->lpVtbl -> SetIconSize(This,iIconSize) )
#define ISearchFolderItemFactory_SetVisibleColumns(This,cVisibleColumns,rgKey)( (This)->lpVtbl -> SetVisibleColumns(This,cVisibleColumns,rgKey) )
#define ISearchFolderItemFactory_SetSortColumns(This,cSortColumns,rgSortColumns)( (This)->lpVtbl -> SetSortColumns(This,cSortColumns,rgSortColumns) )
#define ISearchFolderItemFactory_SetGroupColumn(This,keyGroup)( (This)->lpVtbl -> SetGroupColumn(This,keyGroup) )
#define ISearchFolderItemFactory_SetStacks(This,cStackKeys,rgStackKeys)( (This)->lpVtbl -> SetStacks(This,cStackKeys,rgStackKeys) )
#define ISearchFolderItemFactory_SetScope(This,psiaScope)( (This)->lpVtbl -> SetScope(This,psiaScope) )
#define ISearchFolderItemFactory_SetCondition(This,pCondition)( (This)->lpVtbl -> SetCondition(This,pCondition) )
#define ISearchFolderItemFactory_GetShellItem(This,riid,ppv)( (This)->lpVtbl -> GetShellItem(This,riid,ppv) )
#define ISearchFolderItemFactory_GetIDList(This,ppidl)( (This)->lpVtbl -> GetIDList(This,ppidl) )
#endif
#endif
#endif
#if (_WIN32_IE >= 0x0400)
#define IEI_PRIORITY_MAX        ITSAT_MAX_PRIORITY
#define IEI_PRIORITY_MIN        ITSAT_MIN_PRIORITY
#define IEIT_PRIORITY_NORMAL     ITSAT_DEFAULT_PRIORITY
#define IEIFLAG_ASYNC       0x0001
#define IEIFLAG_CACHE       0x0002
#define IEIFLAG_ASPECT      0x0004
#define IEIFLAG_OFFLINE     0x0008
#define IEIFLAG_GLEAM       0x0010
#define IEIFLAG_SCREEN      0x0020
#define IEIFLAG_ORIGSIZE    0x0040
#define IEIFLAG_NOSTAMP     0x0080
#define IEIFLAG_NOBORDER    0x0100
#define IEIFLAG_QUALITY     0x0200
#define IEIFLAG_REFRESH     0x0400
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0083_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0083_v0_0_s_ifspec;
#ifndef __IExtractImage_INTERFACE_DEFINED__
#define __IExtractImage_INTERFACE_DEFINED__
extern const IID IID_IExtractImage;
typedef struct IExtractImageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IExtractImage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExtractImage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExtractImage * This);
	HRESULT(STDMETHODCALLTYPE * GetLocation) (IExtractImage * This, LPWSTR pszPathBuffer, DWORD cch, DWORD * pdwPriority, const SIZE * prgSize, DWORD dwRecClrDepth, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * Extract) (IExtractImage * This, HBITMAP * phBmpThumbnail);
	END_INTERFACE
}  IExtractImageVtbl;
interface IExtractImage
{
	CONST_VTBL struct IExtractImageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExtractImage_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExtractImage_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IExtractImage_Release(This)( (This)->lpVtbl -> Release(This) )
#define IExtractImage_GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags)( (This)->lpVtbl -> GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags) )
#define IExtractImage_Extract(This,phBmpThumbnail)( (This)->lpVtbl -> Extract(This,phBmpThumbnail) )
#endif
#endif
typedef IExtractImage *LPEXTRACTIMAGE;
#endif
#if (_WIN32_IE >= 0x0500)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0084_v0_0_s_ifspec;
#ifndef __IExtractImage2_INTERFACE_DEFINED__
#define __IExtractImage2_INTERFACE_DEFINED__
extern const IID IID_IExtractImage2;
typedef struct IExtractImage2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IExtractImage2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExtractImage2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExtractImage2 * This);
	HRESULT(STDMETHODCALLTYPE * GetLocation) (IExtractImage2 * This, LPWSTR pszPathBuffer, DWORD cch, DWORD * pdwPriority, const SIZE * prgSize, DWORD dwRecClrDepth, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * Extract) (IExtractImage2 * This, HBITMAP * phBmpThumbnail);
	HRESULT(STDMETHODCALLTYPE * GetDateStamp) (IExtractImage2 * This, FILETIME * pDateStamp);
	END_INTERFACE
}  IExtractImage2Vtbl;
interface IExtractImage2
{
	CONST_VTBL struct IExtractImage2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExtractImage2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExtractImage2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IExtractImage2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IExtractImage2_GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags)( (This)->lpVtbl -> GetLocation(This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags) )
#define IExtractImage2_Extract(This,phBmpThumbnail)( (This)->lpVtbl -> Extract(This,phBmpThumbnail) )
#define IExtractImage2_GetDateStamp(This,pDateStamp)( (This)->lpVtbl -> GetDateStamp(This,pDateStamp) )
#endif
#endif
typedef IExtractImage2 *LPEXTRACTIMAGE2;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0085_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0085_v0_0_s_ifspec;
#ifndef __IThumbnailHandlerFactory_INTERFACE_DEFINED__
#define __IThumbnailHandlerFactory_INTERFACE_DEFINED__
extern const IID IID_IThumbnailHandlerFactory;
typedef struct IThumbnailHandlerFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IThumbnailHandlerFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IThumbnailHandlerFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IThumbnailHandlerFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetThumbnailHandler) (IThumbnailHandlerFactory * This, PCUITEMID_CHILD pidlChild, IBindCtx * pbc, REFIID riid, void **ppv);
	END_INTERFACE
}  IThumbnailHandlerFactoryVtbl;
interface IThumbnailHandlerFactory
{
	CONST_VTBL struct IThumbnailHandlerFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IThumbnailHandlerFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IThumbnailHandlerFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IThumbnailHandlerFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define IThumbnailHandlerFactory_GetThumbnailHandler(This,pidlChild,pbc,riid,ppv)( (This)->lpVtbl -> GetThumbnailHandler(This,pidlChild,pbc,riid,ppv) )
#endif
#endif
#ifndef __IParentAndItem_INTERFACE_DEFINED__
#define __IParentAndItem_INTERFACE_DEFINED__
extern const IID IID_IParentAndItem;
typedef struct IParentAndItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IParentAndItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IParentAndItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IParentAndItem * This);
	HRESULT(STDMETHODCALLTYPE * SetParentAndItem) (IParentAndItem * This, PCIDLIST_ABSOLUTE pidlParent, IShellFolder * psf, PCUITEMID_CHILD pidlChild);
	HRESULT(STDMETHODCALLTYPE * GetParentAndItem) (IParentAndItem * This, PIDLIST_ABSOLUTE * ppidlParent, IShellFolder ** ppsf, PITEMID_CHILD * ppidlChild);
	END_INTERFACE
}  IParentAndItemVtbl;
interface IParentAndItem
{
	CONST_VTBL struct IParentAndItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IParentAndItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IParentAndItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IParentAndItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IParentAndItem_SetParentAndItem(This,pidlParent,psf,pidlChild)( (This)->lpVtbl -> SetParentAndItem(This,pidlParent,psf,pidlChild) )
#define IParentAndItem_GetParentAndItem(This,ppidlParent,ppsf,ppidlChild)( (This)->lpVtbl -> GetParentAndItem(This,ppidlParent,ppsf,ppidlChild) )
#endif
HRESULT STDMETHODCALLTYPE IParentAndItem_RemoteGetParentAndItem_Proxy(IParentAndItem * This, PIDLIST_ABSOLUTE * ppidlParent, IShellFolder ** ppsf, PITEMID_CHILD * ppidlChild);
void __RPC_STUB IParentAndItem_RemoteGetParentAndItem_Stub(IRpcStubBuffer * This, IRpcChannelBuffer * _pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD * _pdwStubPhase);
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0087_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0087_v0_0_s_ifspec;
#ifndef __IDockingWindow_INTERFACE_DEFINED__
#define __IDockingWindow_INTERFACE_DEFINED__
extern const IID IID_IDockingWindow;
typedef struct IDockingWindowVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDockingWindow * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDockingWindow * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDockingWindow * This);
	HRESULT(STDMETHODCALLTYPE * GetWindow) (IDockingWindow * This, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * ContextSensitiveHelp) (IDockingWindow * This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE * ShowDW) (IDockingWindow * This, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE * CloseDW) (IDockingWindow * This, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * ResizeBorderDW) (IDockingWindow * This, LPCRECT prcBorder, IUnknown * punkToolbarSite, BOOL fReserved);
	END_INTERFACE
}  IDockingWindowVtbl;
interface IDockingWindow
{
	CONST_VTBL struct IDockingWindowVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDockingWindow_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDockingWindow_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDockingWindow_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDockingWindow_GetWindow(This,phwnd)( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IDockingWindow_ContextSensitiveHelp(This,fEnterMode)( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IDockingWindow_ShowDW(This,fShow)( (This)->lpVtbl -> ShowDW(This,fShow) )
#define IDockingWindow_CloseDW(This,dwReserved)( (This)->lpVtbl -> CloseDW(This,dwReserved) )
#define IDockingWindow_ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved)( (This)->lpVtbl -> ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved) )
#endif
#endif
#define DBIM_MINSIZE    0x0001
#define DBIM_MAXSIZE    0x0002
#define DBIM_INTEGRAL   0x0004
#define DBIM_ACTUAL     0x0008
#define DBIM_TITLE      0x0010
#define DBIM_MODEFLAGS  0x0020
#define DBIM_BKCOLOR    0x0040
#include <pshpack8.h>
typedef struct DESKBANDINFO
{
	DWORD dwMask;
	POINTL ptMinSize;
	POINTL ptMaxSize;
	POINTL ptIntegral;
	POINTL ptActual;
	WCHAR wszTitle[256];
	DWORD dwModeFlags;
	COLORREF crBkgnd;
} DESKBANDINFO;
#include <poppack.h>
#define DBIMF_NORMAL            0x0000
#define DBIMF_FIXED             0x0001
#define DBIMF_FIXEDBMP          0x0004
#define DBIMF_VARIABLEHEIGHT    0x0008
#define DBIMF_UNDELETEABLE      0x0010
#define DBIMF_DEBOSSED          0x0020
#define DBIMF_BKCOLOR           0x0040
#define DBIMF_USECHEVRON        0x0080
#define DBIMF_BREAK             0x0100
#define DBIMF_ADDTOFRONT        0x0200
#define DBIMF_TOPALIGN          0x0400
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define DBIMF_NOGRIPPER         0x0800
#define DBIMF_ALWAYSGRIPPER     0x1000
#define DBIMF_NOMARGINS         0x2000
#endif
#define DBIF_VIEWMODE_NORMAL         0x0000
#define DBIF_VIEWMODE_VERTICAL       0x0001
#define DBIF_VIEWMODE_FLOATING       0x0002
#define DBIF_VIEWMODE_TRANSPARENT    0x0004
enum tagDESKBANDCID
{
	DBID_BANDINFOCHANGED = 0,
	DBID_SHOWONLY = 1,
	DBID_MAXIMIZEBAND = 2,
	DBID_PUSHCHEVRON = 3,
	DBID_DELAYINIT = 4,
	DBID_FINISHINIT = 5,
	DBID_SETWINDOWTHEME = 6,
	DBID_PERMITAUTOHIDE = 7
};
#define DBPC_SELECTFIRST    (DWORD)-1
#define DBPC_SELECTLAST     (DWORD)-2
#define CGID_DeskBand IID_IDeskBand
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0088_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0088_v0_0_s_ifspec;
#ifndef __IDeskBand_INTERFACE_DEFINED__
#define __IDeskBand_INTERFACE_DEFINED__
extern const IID IID_IDeskBand;
typedef struct IDeskBandVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDeskBand * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDeskBand * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDeskBand * This);
	HRESULT(STDMETHODCALLTYPE * GetWindow) (IDeskBand * This, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * ContextSensitiveHelp) (IDeskBand * This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE * ShowDW) (IDeskBand * This, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE * CloseDW) (IDeskBand * This, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * ResizeBorderDW) (IDeskBand * This, LPCRECT prcBorder, IUnknown * punkToolbarSite, BOOL fReserved);
	HRESULT(STDMETHODCALLTYPE * GetBandInfo) (IDeskBand * This, DWORD dwBandID, DWORD dwViewMode, DESKBANDINFO * pdbi);
	END_INTERFACE
}  IDeskBandVtbl;
interface IDeskBand
{
	CONST_VTBL struct IDeskBandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDeskBand_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDeskBand_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDeskBand_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDeskBand_GetWindow(This,phwnd)( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IDeskBand_ContextSensitiveHelp(This,fEnterMode)( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IDeskBand_ShowDW(This,fShow)( (This)->lpVtbl -> ShowDW(This,fShow) )
#define IDeskBand_CloseDW(This,dwReserved)( (This)->lpVtbl -> CloseDW(This,dwReserved) )
#define IDeskBand_ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved)( (This)->lpVtbl -> ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved) )
#define IDeskBand_GetBandInfo(This,dwBandID,dwViewMode,pdbi)( (This)->lpVtbl -> GetBandInfo(This,dwBandID,dwViewMode,pdbi) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0089_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0089_v0_0_s_ifspec;
#ifndef __IDeskBandInfo_INTERFACE_DEFINED__
#define __IDeskBandInfo_INTERFACE_DEFINED__
extern const IID IID_IDeskBandInfo;
typedef struct IDeskBandInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDeskBandInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDeskBandInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDeskBandInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetDefaultBandWidth) (IDeskBandInfo * This, DWORD dwBandID, DWORD dwViewMode, int *pnWidth);
	END_INTERFACE
}  IDeskBandInfoVtbl;
interface IDeskBandInfo
{
	CONST_VTBL struct IDeskBandInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDeskBandInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDeskBandInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDeskBandInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDeskBandInfo_GetDefaultBandWidth(This,dwBandID,dwViewMode,pnWidth)( (This)->lpVtbl -> GetDefaultBandWidth(This,dwBandID,dwViewMode,pnWidth) )
#endif
#endif
#ifndef __IDeskBand2_INTERFACE_DEFINED__
#define __IDeskBand2_INTERFACE_DEFINED__
extern const IID IID_IDeskBand2;
typedef struct IDeskBand2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDeskBand2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDeskBand2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDeskBand2 * This);
	HRESULT(STDMETHODCALLTYPE * GetWindow) (IDeskBand2 * This, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * ContextSensitiveHelp) (IDeskBand2 * This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE * ShowDW) (IDeskBand2 * This, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE * CloseDW) (IDeskBand2 * This, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * ResizeBorderDW) (IDeskBand2 * This, LPCRECT prcBorder, IUnknown * punkToolbarSite, BOOL fReserved);
	HRESULT(STDMETHODCALLTYPE * GetBandInfo) (IDeskBand2 * This, DWORD dwBandID, DWORD dwViewMode, DESKBANDINFO * pdbi);
	HRESULT(STDMETHODCALLTYPE * CanRenderComposited) (IDeskBand2 * This, BOOL * pfCanRenderComposited);
	HRESULT(STDMETHODCALLTYPE * SetCompositionState) (IDeskBand2 * This, BOOL fCompositionEnabled);
	HRESULT(STDMETHODCALLTYPE * GetCompositionState) (IDeskBand2 * This, BOOL * pfCompositionEnabled);
	END_INTERFACE
}  IDeskBand2Vtbl;
interface IDeskBand2
{
	CONST_VTBL struct IDeskBand2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDeskBand2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDeskBand2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDeskBand2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDeskBand2_GetWindow(This,phwnd)( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IDeskBand2_ContextSensitiveHelp(This,fEnterMode)( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IDeskBand2_ShowDW(This,fShow)( (This)->lpVtbl -> ShowDW(This,fShow) )
#define IDeskBand2_CloseDW(This,dwReserved)( (This)->lpVtbl -> CloseDW(This,dwReserved) )
#define IDeskBand2_ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved)( (This)->lpVtbl -> ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved) )
#define IDeskBand2_GetBandInfo(This,dwBandID,dwViewMode,pdbi)( (This)->lpVtbl -> GetBandInfo(This,dwBandID,dwViewMode,pdbi) )
#define IDeskBand2_CanRenderComposited(This,pfCanRenderComposited)( (This)->lpVtbl -> CanRenderComposited(This,pfCanRenderComposited) )
#define IDeskBand2_SetCompositionState(This,fCompositionEnabled)( (This)->lpVtbl -> SetCompositionState(This,fCompositionEnabled) )
#define IDeskBand2_GetCompositionState(This,pfCompositionEnabled)( (This)->lpVtbl -> GetCompositionState(This,pfCompositionEnabled) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0091_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0091_v0_0_s_ifspec;
#ifndef __ITaskbarList_INTERFACE_DEFINED__
#define __ITaskbarList_INTERFACE_DEFINED__
extern const IID IID_ITaskbarList;
typedef struct ITaskbarListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITaskbarList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITaskbarList * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITaskbarList * This);
	HRESULT(STDMETHODCALLTYPE * HrInit) (ITaskbarList * This);
	HRESULT(STDMETHODCALLTYPE * AddTab) (ITaskbarList * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * DeleteTab) (ITaskbarList * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * ActivateTab) (ITaskbarList * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * SetActiveAlt) (ITaskbarList * This, HWND hwnd);
	END_INTERFACE
}  ITaskbarListVtbl;
interface ITaskbarList
{
	CONST_VTBL struct ITaskbarListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITaskbarList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITaskbarList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITaskbarList_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITaskbarList_HrInit(This)( (This)->lpVtbl -> HrInit(This) )
#define ITaskbarList_AddTab(This,hwnd)( (This)->lpVtbl -> AddTab(This,hwnd) )
#define ITaskbarList_DeleteTab(This,hwnd)( (This)->lpVtbl -> DeleteTab(This,hwnd) )
#define ITaskbarList_ActivateTab(This,hwnd)( (This)->lpVtbl -> ActivateTab(This,hwnd) )
#define ITaskbarList_SetActiveAlt(This,hwnd)( (This)->lpVtbl -> SetActiveAlt(This,hwnd) )
#endif
#endif
#ifndef __ITaskbarList2_INTERFACE_DEFINED__
#define __ITaskbarList2_INTERFACE_DEFINED__
extern const IID IID_ITaskbarList2;
typedef struct ITaskbarList2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITaskbarList2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITaskbarList2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITaskbarList2 * This);
	HRESULT(STDMETHODCALLTYPE * HrInit) (ITaskbarList2 * This);
	HRESULT(STDMETHODCALLTYPE * AddTab) (ITaskbarList2 * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * DeleteTab) (ITaskbarList2 * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * ActivateTab) (ITaskbarList2 * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * SetActiveAlt) (ITaskbarList2 * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * MarkFullscreenWindow) (ITaskbarList2 * This, HWND hwnd, BOOL fFullscreen);
	END_INTERFACE
}  ITaskbarList2Vtbl;
interface ITaskbarList2
{
	CONST_VTBL struct ITaskbarList2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITaskbarList2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITaskbarList2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITaskbarList2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITaskbarList2_HrInit(This)( (This)->lpVtbl -> HrInit(This) )
#define ITaskbarList2_AddTab(This,hwnd)( (This)->lpVtbl -> AddTab(This,hwnd) )
#define ITaskbarList2_DeleteTab(This,hwnd)( (This)->lpVtbl -> DeleteTab(This,hwnd) )
#define ITaskbarList2_ActivateTab(This,hwnd)( (This)->lpVtbl -> ActivateTab(This,hwnd) )
#define ITaskbarList2_SetActiveAlt(This,hwnd)( (This)->lpVtbl -> SetActiveAlt(This,hwnd) )
#define ITaskbarList2_MarkFullscreenWindow(This,hwnd,fFullscreen)( (This)->lpVtbl -> MarkFullscreenWindow(This,hwnd,fFullscreen) )
#endif
#endif
typedef enum THUMBBUTTONFLAGS
{
	THBF_ENABLED = 0,
	THBF_DISABLED = 0x1,
	THBF_DISMISSONCLICK = 0x2,
	THBF_NOBACKGROUND = 0x4,
	THBF_HIDDEN = 0x8,
	THBF_NONINTERACTIVE = 0x10
} THUMBBUTTONFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(THUMBBUTTONFLAGS)
typedef enum THUMBBUTTONMASK
{
	THB_BITMAP = 0x1,
	THB_ICON = 0x2,
	THB_TOOLTIP = 0x4,
	THB_FLAGS = 0x8
} THUMBBUTTONMASK;
DEFINE_ENUM_FLAG_OPERATORS(THUMBBUTTONMASK)
#include <pshpack8.h>
typedef struct THUMBBUTTON
{
	THUMBBUTTONMASK dwMask;
	UINT iId;
	UINT iBitmap;
	HICON hIcon;
	WCHAR szTip[260];
	THUMBBUTTONFLAGS dwFlags;
} THUMBBUTTON;
typedef struct THUMBBUTTON *LPTHUMBBUTTON;
#include <poppack.h>
#define THBN_CLICKED        0x1800
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0093_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0093_v0_0_s_ifspec;
#ifndef __ITaskbarList3_INTERFACE_DEFINED__
#define __ITaskbarList3_INTERFACE_DEFINED__
typedef enum TBPFLAG
{
	TBPF_NOPROGRESS = 0,
	TBPF_INDETERMINATE = 0x1,
	TBPF_NORMAL = 0x2,
	TBPF_ERROR = 0x4,
	TBPF_PAUSED = 0x8
} TBPFLAG;
DEFINE_ENUM_FLAG_OPERATORS(TBPFLAG)
extern const IID IID_ITaskbarList3;
typedef struct ITaskbarList3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITaskbarList3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITaskbarList3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITaskbarList3 * This);
	HRESULT(STDMETHODCALLTYPE * HrInit) (ITaskbarList3 * This);
	HRESULT(STDMETHODCALLTYPE * AddTab) (ITaskbarList3 * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * DeleteTab) (ITaskbarList3 * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * ActivateTab) (ITaskbarList3 * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * SetActiveAlt) (ITaskbarList3 * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * MarkFullscreenWindow) (ITaskbarList3 * This, HWND hwnd, BOOL fFullscreen);
	HRESULT(STDMETHODCALLTYPE * SetProgressValue) (ITaskbarList3 * This, HWND hwnd, ULONGLONG ullCompleted, ULONGLONG ullTotal);
	HRESULT(STDMETHODCALLTYPE * SetProgressState) (ITaskbarList3 * This, HWND hwnd, TBPFLAG tbpFlags);
	HRESULT(STDMETHODCALLTYPE * RegisterTab) (ITaskbarList3 * This, HWND hwndTab, HWND hwndMDI);
	HRESULT(STDMETHODCALLTYPE * UnregisterTab) (ITaskbarList3 * This, HWND hwndTab);
	HRESULT(STDMETHODCALLTYPE * SetTabOrder) (ITaskbarList3 * This, HWND hwndTab, HWND hwndInsertBefore);
	HRESULT(STDMETHODCALLTYPE * SetTabActive) (ITaskbarList3 * This, HWND hwndTab, HWND hwndMDI, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * ThumbBarAddButtons) (ITaskbarList3 * This, HWND hwnd, UINT cButtons, LPTHUMBBUTTON pButton);
	HRESULT(STDMETHODCALLTYPE * ThumbBarUpdateButtons) (ITaskbarList3 * This, HWND hwnd, UINT cButtons, LPTHUMBBUTTON pButton);
	HRESULT(STDMETHODCALLTYPE * ThumbBarSetImageList) (ITaskbarList3 * This, HWND hwnd, HIMAGELIST himl);
	HRESULT(STDMETHODCALLTYPE * SetOverlayIcon) (ITaskbarList3 * This, HWND hwnd, HICON hIcon, LPCWSTR pszDescription);
	HRESULT(STDMETHODCALLTYPE * SetThumbnailTooltip) (ITaskbarList3 * This, HWND hwnd, LPCWSTR pszTip);
	HRESULT(STDMETHODCALLTYPE * SetThumbnailClip) (ITaskbarList3 * This, HWND hwnd, RECT * prcClip);
	END_INTERFACE
}  ITaskbarList3Vtbl;
interface ITaskbarList3
{
	CONST_VTBL struct ITaskbarList3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITaskbarList3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITaskbarList3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITaskbarList3_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITaskbarList3_HrInit(This)( (This)->lpVtbl -> HrInit(This) )
#define ITaskbarList3_AddTab(This,hwnd)( (This)->lpVtbl -> AddTab(This,hwnd) )
#define ITaskbarList3_DeleteTab(This,hwnd)( (This)->lpVtbl -> DeleteTab(This,hwnd) )
#define ITaskbarList3_ActivateTab(This,hwnd)( (This)->lpVtbl -> ActivateTab(This,hwnd) )
#define ITaskbarList3_SetActiveAlt(This,hwnd)( (This)->lpVtbl -> SetActiveAlt(This,hwnd) )
#define ITaskbarList3_MarkFullscreenWindow(This,hwnd,fFullscreen)( (This)->lpVtbl -> MarkFullscreenWindow(This,hwnd,fFullscreen) )
#define ITaskbarList3_SetProgressValue(This,hwnd,ullCompleted,ullTotal)( (This)->lpVtbl -> SetProgressValue(This,hwnd,ullCompleted,ullTotal) )
#define ITaskbarList3_SetProgressState(This,hwnd,tbpFlags)( (This)->lpVtbl -> SetProgressState(This,hwnd,tbpFlags) )
#define ITaskbarList3_RegisterTab(This,hwndTab,hwndMDI)( (This)->lpVtbl -> RegisterTab(This,hwndTab,hwndMDI) )
#define ITaskbarList3_UnregisterTab(This,hwndTab)( (This)->lpVtbl -> UnregisterTab(This,hwndTab) )
#define ITaskbarList3_SetTabOrder(This,hwndTab,hwndInsertBefore)( (This)->lpVtbl -> SetTabOrder(This,hwndTab,hwndInsertBefore) )
#define ITaskbarList3_SetTabActive(This,hwndTab,hwndMDI,dwReserved)( (This)->lpVtbl -> SetTabActive(This,hwndTab,hwndMDI,dwReserved) )
#define ITaskbarList3_ThumbBarAddButtons(This,hwnd,cButtons,pButton)( (This)->lpVtbl -> ThumbBarAddButtons(This,hwnd,cButtons,pButton) )
#define ITaskbarList3_ThumbBarUpdateButtons(This,hwnd,cButtons,pButton)( (This)->lpVtbl -> ThumbBarUpdateButtons(This,hwnd,cButtons,pButton) )
#define ITaskbarList3_ThumbBarSetImageList(This,hwnd,himl)( (This)->lpVtbl -> ThumbBarSetImageList(This,hwnd,himl) )
#define ITaskbarList3_SetOverlayIcon(This,hwnd,hIcon,pszDescription)( (This)->lpVtbl -> SetOverlayIcon(This,hwnd,hIcon,pszDescription) )
#define ITaskbarList3_SetThumbnailTooltip(This,hwnd,pszTip)( (This)->lpVtbl -> SetThumbnailTooltip(This,hwnd,pszTip) )
#define ITaskbarList3_SetThumbnailClip(This,hwnd,prcClip)( (This)->lpVtbl -> SetThumbnailClip(This,hwnd,prcClip) )
#endif
#endif
#ifndef __ITaskbarList4_INTERFACE_DEFINED__
#define __ITaskbarList4_INTERFACE_DEFINED__
typedef enum STPFLAG
{
	STPF_NONE = 0,
	STPF_USEAPPTHUMBNAILALWAYS = 0x1,
	STPF_USEAPPTHUMBNAILWHENACTIVE = 0x2,
	STPF_USEAPPPEEKALWAYS = 0x4,
	STPF_USEAPPPEEKWHENACTIVE = 0x8
} STPFLAG;
DEFINE_ENUM_FLAG_OPERATORS(STPFLAG)
extern const IID IID_ITaskbarList4;
typedef struct ITaskbarList4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITaskbarList4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITaskbarList4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITaskbarList4 * This);
	HRESULT(STDMETHODCALLTYPE * HrInit) (ITaskbarList4 * This);
	HRESULT(STDMETHODCALLTYPE * AddTab) (ITaskbarList4 * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * DeleteTab) (ITaskbarList4 * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * ActivateTab) (ITaskbarList4 * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * SetActiveAlt) (ITaskbarList4 * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * MarkFullscreenWindow) (ITaskbarList4 * This, HWND hwnd, BOOL fFullscreen);
	HRESULT(STDMETHODCALLTYPE * SetProgressValue) (ITaskbarList4 * This, HWND hwnd, ULONGLONG ullCompleted, ULONGLONG ullTotal);
	HRESULT(STDMETHODCALLTYPE * SetProgressState) (ITaskbarList4 * This, HWND hwnd, TBPFLAG tbpFlags);
	HRESULT(STDMETHODCALLTYPE * RegisterTab) (ITaskbarList4 * This, HWND hwndTab, HWND hwndMDI);
	HRESULT(STDMETHODCALLTYPE * UnregisterTab) (ITaskbarList4 * This, HWND hwndTab);
	HRESULT(STDMETHODCALLTYPE * SetTabOrder) (ITaskbarList4 * This, HWND hwndTab, HWND hwndInsertBefore);
	HRESULT(STDMETHODCALLTYPE * SetTabActive) (ITaskbarList4 * This, HWND hwndTab, HWND hwndMDI, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * ThumbBarAddButtons) (ITaskbarList4 * This, HWND hwnd, UINT cButtons, LPTHUMBBUTTON pButton);
	HRESULT(STDMETHODCALLTYPE * ThumbBarUpdateButtons) (ITaskbarList4 * This, HWND hwnd, UINT cButtons, LPTHUMBBUTTON pButton);
	HRESULT(STDMETHODCALLTYPE * ThumbBarSetImageList) (ITaskbarList4 * This, HWND hwnd, HIMAGELIST himl);
	HRESULT(STDMETHODCALLTYPE * SetOverlayIcon) (ITaskbarList4 * This, HWND hwnd, HICON hIcon, LPCWSTR pszDescription);
	HRESULT(STDMETHODCALLTYPE * SetThumbnailTooltip) (ITaskbarList4 * This, HWND hwnd, LPCWSTR pszTip);
	HRESULT(STDMETHODCALLTYPE * SetThumbnailClip) (ITaskbarList4 * This, HWND hwnd, RECT * prcClip);
	HRESULT(STDMETHODCALLTYPE * SetTabProperties) (ITaskbarList4 * This, HWND hwndTab, STPFLAG stpFlags);
	END_INTERFACE
}  ITaskbarList4Vtbl;
interface ITaskbarList4
{
	CONST_VTBL struct ITaskbarList4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITaskbarList4_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITaskbarList4_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITaskbarList4_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITaskbarList4_HrInit(This)( (This)->lpVtbl -> HrInit(This) )
#define ITaskbarList4_AddTab(This,hwnd)( (This)->lpVtbl -> AddTab(This,hwnd) )
#define ITaskbarList4_DeleteTab(This,hwnd)( (This)->lpVtbl -> DeleteTab(This,hwnd) )
#define ITaskbarList4_ActivateTab(This,hwnd)( (This)->lpVtbl -> ActivateTab(This,hwnd) )
#define ITaskbarList4_SetActiveAlt(This,hwnd)( (This)->lpVtbl -> SetActiveAlt(This,hwnd) )
#define ITaskbarList4_MarkFullscreenWindow(This,hwnd,fFullscreen)( (This)->lpVtbl -> MarkFullscreenWindow(This,hwnd,fFullscreen) )
#define ITaskbarList4_SetProgressValue(This,hwnd,ullCompleted,ullTotal)( (This)->lpVtbl -> SetProgressValue(This,hwnd,ullCompleted,ullTotal) )
#define ITaskbarList4_SetProgressState(This,hwnd,tbpFlags)( (This)->lpVtbl -> SetProgressState(This,hwnd,tbpFlags) )
#define ITaskbarList4_RegisterTab(This,hwndTab,hwndMDI)( (This)->lpVtbl -> RegisterTab(This,hwndTab,hwndMDI) )
#define ITaskbarList4_UnregisterTab(This,hwndTab)( (This)->lpVtbl -> UnregisterTab(This,hwndTab) )
#define ITaskbarList4_SetTabOrder(This,hwndTab,hwndInsertBefore)( (This)->lpVtbl -> SetTabOrder(This,hwndTab,hwndInsertBefore) )
#define ITaskbarList4_SetTabActive(This,hwndTab,hwndMDI,dwReserved)( (This)->lpVtbl -> SetTabActive(This,hwndTab,hwndMDI,dwReserved) )
#define ITaskbarList4_ThumbBarAddButtons(This,hwnd,cButtons,pButton)( (This)->lpVtbl -> ThumbBarAddButtons(This,hwnd,cButtons,pButton) )
#define ITaskbarList4_ThumbBarUpdateButtons(This,hwnd,cButtons,pButton)( (This)->lpVtbl -> ThumbBarUpdateButtons(This,hwnd,cButtons,pButton) )
#define ITaskbarList4_ThumbBarSetImageList(This,hwnd,himl)( (This)->lpVtbl -> ThumbBarSetImageList(This,hwnd,himl) )
#define ITaskbarList4_SetOverlayIcon(This,hwnd,hIcon,pszDescription)( (This)->lpVtbl -> SetOverlayIcon(This,hwnd,hIcon,pszDescription) )
#define ITaskbarList4_SetThumbnailTooltip(This,hwnd,pszTip)( (This)->lpVtbl -> SetThumbnailTooltip(This,hwnd,pszTip) )
#define ITaskbarList4_SetThumbnailClip(This,hwnd,prcClip)( (This)->lpVtbl -> SetThumbnailClip(This,hwnd,prcClip) )
#define ITaskbarList4_SetTabProperties(This,hwndTab,stpFlags)( (This)->lpVtbl -> SetTabProperties(This,hwndTab,stpFlags) )
#endif
#endif
#ifndef __IStartMenuPinnedList_INTERFACE_DEFINED__
#define __IStartMenuPinnedList_INTERFACE_DEFINED__
extern const IID IID_IStartMenuPinnedList;
typedef struct IStartMenuPinnedListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStartMenuPinnedList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStartMenuPinnedList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStartMenuPinnedList * This);
	HRESULT(STDMETHODCALLTYPE * RemoveFromList) (IStartMenuPinnedList * This, IShellItem * pitem);
	END_INTERFACE
}  IStartMenuPinnedListVtbl;
interface IStartMenuPinnedList
{
	CONST_VTBL struct IStartMenuPinnedListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStartMenuPinnedList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStartMenuPinnedList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IStartMenuPinnedList_Release(This)( (This)->lpVtbl -> Release(This) )
#define IStartMenuPinnedList_RemoveFromList(This,pitem)( (This)->lpVtbl -> RemoveFromList(This,pitem) )
#endif
#endif
#ifndef __ICDBurn_INTERFACE_DEFINED__
#define __ICDBurn_INTERFACE_DEFINED__
extern const IID IID_ICDBurn;
typedef struct ICDBurnVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICDBurn * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICDBurn * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICDBurn * This);
	HRESULT(STDMETHODCALLTYPE * GetRecorderDriveLetter) (ICDBurn * This, LPWSTR pszDrive, UINT cch);
	HRESULT(STDMETHODCALLTYPE * Burn) (ICDBurn * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * HasRecordableDrive) (ICDBurn * This, BOOL * pfHasRecorder);
	END_INTERFACE
}  ICDBurnVtbl;
interface ICDBurn
{
	CONST_VTBL struct ICDBurnVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICDBurn_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICDBurn_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICDBurn_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICDBurn_GetRecorderDriveLetter(This,pszDrive,cch)( (This)->lpVtbl -> GetRecorderDriveLetter(This,pszDrive,cch) )
#define ICDBurn_Burn(This,hwnd)( (This)->lpVtbl -> Burn(This,hwnd) )
#define ICDBurn_HasRecordableDrive(This,pfHasRecorder)( (This)->lpVtbl -> HasRecordableDrive(This,pfHasRecorder) )
#endif
#endif
#define IDD_WIZEXTN_FIRST    0x5000
#define IDD_WIZEXTN_LAST     0x5100
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0097_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0097_v0_0_s_ifspec;
#ifndef __IWizardSite_INTERFACE_DEFINED__
#define __IWizardSite_INTERFACE_DEFINED__
extern const IID IID_IWizardSite;
typedef struct IWizardSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWizardSite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWizardSite * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWizardSite * This);
	HRESULT(STDMETHODCALLTYPE * GetPreviousPage) (IWizardSite * This, HPROPSHEETPAGE * phpage);
	HRESULT(STDMETHODCALLTYPE * GetNextPage) (IWizardSite * This, HPROPSHEETPAGE * phpage);
	HRESULT(STDMETHODCALLTYPE * GetCancelledPage) (IWizardSite * This, HPROPSHEETPAGE * phpage);
	END_INTERFACE
}  IWizardSiteVtbl;
interface IWizardSite
{
	CONST_VTBL struct IWizardSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWizardSite_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWizardSite_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWizardSite_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWizardSite_GetPreviousPage(This,phpage)( (This)->lpVtbl -> GetPreviousPage(This,phpage) )
#define IWizardSite_GetNextPage(This,phpage)( (This)->lpVtbl -> GetNextPage(This,phpage) )
#define IWizardSite_GetCancelledPage(This,phpage)( (This)->lpVtbl -> GetCancelledPage(This,phpage) )
#endif
#endif
#define SID_WizardSite IID_IWizardSite
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0098_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0098_v0_0_s_ifspec;
#ifndef __IWizardExtension_INTERFACE_DEFINED__
#define __IWizardExtension_INTERFACE_DEFINED__
extern const IID IID_IWizardExtension;
typedef struct IWizardExtensionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWizardExtension * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWizardExtension * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWizardExtension * This);
	HRESULT(STDMETHODCALLTYPE * AddPages) (IWizardExtension * This, HPROPSHEETPAGE * aPages, UINT cPages, UINT * pnPagesAdded);
	HRESULT(STDMETHODCALLTYPE * GetFirstPage) (IWizardExtension * This, HPROPSHEETPAGE * phpage);
	HRESULT(STDMETHODCALLTYPE * GetLastPage) (IWizardExtension * This, HPROPSHEETPAGE * phpage);
	END_INTERFACE
}  IWizardExtensionVtbl;
interface IWizardExtension
{
	CONST_VTBL struct IWizardExtensionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWizardExtension_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWizardExtension_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWizardExtension_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWizardExtension_AddPages(This,aPages,cPages,pnPagesAdded)( (This)->lpVtbl -> AddPages(This,aPages,cPages,pnPagesAdded) )
#define IWizardExtension_GetFirstPage(This,phpage)( (This)->lpVtbl -> GetFirstPage(This,phpage) )
#define IWizardExtension_GetLastPage(This,phpage)( (This)->lpVtbl -> GetLastPage(This,phpage) )
#endif
#endif
#ifndef __IWebWizardExtension_INTERFACE_DEFINED__
#define __IWebWizardExtension_INTERFACE_DEFINED__
extern const IID IID_IWebWizardExtension;
typedef struct IWebWizardExtensionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWebWizardExtension * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWebWizardExtension * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWebWizardExtension * This);
	HRESULT(STDMETHODCALLTYPE * AddPages) (IWebWizardExtension * This, HPROPSHEETPAGE * aPages, UINT cPages, UINT * pnPagesAdded);
	HRESULT(STDMETHODCALLTYPE * GetFirstPage) (IWebWizardExtension * This, HPROPSHEETPAGE * phpage);
	HRESULT(STDMETHODCALLTYPE * GetLastPage) (IWebWizardExtension * This, HPROPSHEETPAGE * phpage);
	HRESULT(STDMETHODCALLTYPE * SetInitialURL) (IWebWizardExtension * This, LPCWSTR pszURL);
	HRESULT(STDMETHODCALLTYPE * SetErrorURL) (IWebWizardExtension * This, LPCWSTR pszErrorURL);
	END_INTERFACE
}  IWebWizardExtensionVtbl;
interface IWebWizardExtension
{
	CONST_VTBL struct IWebWizardExtensionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWebWizardExtension_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWebWizardExtension_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWebWizardExtension_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWebWizardExtension_AddPages(This,aPages,cPages,pnPagesAdded)( (This)->lpVtbl -> AddPages(This,aPages,cPages,pnPagesAdded) )
#define IWebWizardExtension_GetFirstPage(This,phpage)( (This)->lpVtbl -> GetFirstPage(This,phpage) )
#define IWebWizardExtension_GetLastPage(This,phpage)( (This)->lpVtbl -> GetLastPage(This,phpage) )
#define IWebWizardExtension_SetInitialURL(This,pszURL)( (This)->lpVtbl -> SetInitialURL(This,pszURL) )
#define IWebWizardExtension_SetErrorURL(This,pszErrorURL)( (This)->lpVtbl -> SetErrorURL(This,pszErrorURL) )
#endif
#endif
#define SID_WebWizardHost IID_IWebWizardExtension
#define SHPWHF_NORECOMPRESS             0x00000001
#define SHPWHF_NONETPLACECREATE         0x00000002
#define SHPWHF_NOFILESELECTOR           0x00000004
#define SHPWHF_USEMRU                   0x00000008
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define SHPWHF_ANYLOCATION              0x00000100
#endif
#define SHPWHF_VALIDATEVIAWEBFOLDERS    0x00010000
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0100_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0100_v0_0_s_ifspec;
#ifndef __IPublishingWizard_INTERFACE_DEFINED__
#define __IPublishingWizard_INTERFACE_DEFINED__
extern const IID IID_IPublishingWizard;
typedef struct IPublishingWizardVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPublishingWizard * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPublishingWizard * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPublishingWizard * This);
	HRESULT(STDMETHODCALLTYPE * AddPages) (IPublishingWizard * This, HPROPSHEETPAGE * aPages, UINT cPages, UINT * pnPagesAdded);
	HRESULT(STDMETHODCALLTYPE * GetFirstPage) (IPublishingWizard * This, HPROPSHEETPAGE * phpage);
	HRESULT(STDMETHODCALLTYPE * GetLastPage) (IPublishingWizard * This, HPROPSHEETPAGE * phpage);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IPublishingWizard * This, IDataObject * pdo, DWORD dwOptions, LPCWSTR pszServiceScope);
	HRESULT(STDMETHODCALLTYPE * GetTransferManifest) (IPublishingWizard * This, HRESULT * phrFromTransfer, IXMLDOMDocument ** pdocManifest);
	END_INTERFACE
}  IPublishingWizardVtbl;
interface IPublishingWizard
{
	CONST_VTBL struct IPublishingWizardVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPublishingWizard_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPublishingWizard_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPublishingWizard_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPublishingWizard_AddPages(This,aPages,cPages,pnPagesAdded)( (This)->lpVtbl -> AddPages(This,aPages,cPages,pnPagesAdded) )
#define IPublishingWizard_GetFirstPage(This,phpage)( (This)->lpVtbl -> GetFirstPage(This,phpage) )
#define IPublishingWizard_GetLastPage(This,phpage)( (This)->lpVtbl -> GetLastPage(This,phpage) )
#define IPublishingWizard_Initialize(This,pdo,dwOptions,pszServiceScope)( (This)->lpVtbl -> Initialize(This,pdo,dwOptions,pszServiceScope) )
#define IPublishingWizard_GetTransferManifest(This,phrFromTransfer,pdocManifest)( (This)->lpVtbl -> GetTransferManifest(This,phrFromTransfer,pdocManifest) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0101_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0101_v0_0_s_ifspec;
#ifndef __IFolderViewHost_INTERFACE_DEFINED__
#define __IFolderViewHost_INTERFACE_DEFINED__
extern const IID IID_IFolderViewHost;
typedef struct IFolderViewHostVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFolderViewHost * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFolderViewHost * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFolderViewHost * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IFolderViewHost * This, HWND hwndParent, IDataObject * pdo, RECT * prc);
	END_INTERFACE
}  IFolderViewHostVtbl;
interface IFolderViewHost
{
	CONST_VTBL struct IFolderViewHostVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFolderViewHost_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFolderViewHost_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFolderViewHost_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFolderViewHost_Initialize(This,hwndParent,pdo,prc)( (This)->lpVtbl -> Initialize(This,hwndParent,pdo,prc) )
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0102_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0102_v0_0_s_ifspec;
#ifndef __IExplorerBrowserEvents_INTERFACE_DEFINED__
#define __IExplorerBrowserEvents_INTERFACE_DEFINED__
extern const IID IID_IExplorerBrowserEvents;
typedef struct IExplorerBrowserEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IExplorerBrowserEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExplorerBrowserEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExplorerBrowserEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnNavigationPending) (IExplorerBrowserEvents * This, PCIDLIST_ABSOLUTE pidlFolder);
	HRESULT(STDMETHODCALLTYPE * OnViewCreated) (IExplorerBrowserEvents * This, IShellView * psv);
	HRESULT(STDMETHODCALLTYPE * OnNavigationComplete) (IExplorerBrowserEvents * This, PCIDLIST_ABSOLUTE pidlFolder);
	HRESULT(STDMETHODCALLTYPE * OnNavigationFailed) (IExplorerBrowserEvents * This, PCIDLIST_ABSOLUTE pidlFolder);
	END_INTERFACE
}  IExplorerBrowserEventsVtbl;
interface IExplorerBrowserEvents
{
	CONST_VTBL struct IExplorerBrowserEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExplorerBrowserEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExplorerBrowserEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IExplorerBrowserEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IExplorerBrowserEvents_OnNavigationPending(This,pidlFolder)( (This)->lpVtbl -> OnNavigationPending(This,pidlFolder) )
#define IExplorerBrowserEvents_OnViewCreated(This,psv)( (This)->lpVtbl -> OnViewCreated(This,psv) )
#define IExplorerBrowserEvents_OnNavigationComplete(This,pidlFolder)( (This)->lpVtbl -> OnNavigationComplete(This,pidlFolder) )
#define IExplorerBrowserEvents_OnNavigationFailed(This,pidlFolder)( (This)->lpVtbl -> OnNavigationFailed(This,pidlFolder) )
#endif
#endif
typedef enum EXPLORER_BROWSER_OPTIONS
{
	EBO_NONE = 0,
	EBO_NAVIGATEONCE = 0x1,
	EBO_SHOWFRAMES = 0x2,
	EBO_ALWAYSNAVIGATE = 0x4,
	EBO_NOTRAVELLOG = 0x8,
	EBO_NOWRAPPERWINDOW = 0x10,
	EBO_HTMLSHAREPOINTVIEW = 0x20
} EXPLORER_BROWSER_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(EXPLORER_BROWSER_OPTIONS)
typedef enum EXPLORER_BROWSER_FILL_FLAGS
{
	EBF_NONE = 0,
	EBF_SELECTFROMDATAOBJECT = 0x100,
	EBF_NODROPTARGET = 0x200
} EXPLORER_BROWSER_FILL_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(EXPLORER_BROWSER_FILL_FLAGS)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0103_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0103_v0_0_s_ifspec;
#ifndef __IExplorerBrowser_INTERFACE_DEFINED__
#define __IExplorerBrowser_INTERFACE_DEFINED__
extern const IID IID_IExplorerBrowser;
typedef struct IExplorerBrowserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IExplorerBrowser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExplorerBrowser * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExplorerBrowser * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IExplorerBrowser * This, HWND hwndParent, const RECT * prc, const FOLDERSETTINGS * pfs);
	HRESULT(STDMETHODCALLTYPE * Destroy) (IExplorerBrowser * This);
	HRESULT(STDMETHODCALLTYPE * SetRect) (IExplorerBrowser * This, HDWP * phdwp, RECT rcBrowser);
	HRESULT(STDMETHODCALLTYPE * SetPropertyBag) (IExplorerBrowser * This, LPCWSTR pszPropertyBag);
	HRESULT(STDMETHODCALLTYPE * SetEmptyText) (IExplorerBrowser * This, LPCWSTR pszEmptyText);
	HRESULT(STDMETHODCALLTYPE * SetFolderSettings) (IExplorerBrowser * This, const FOLDERSETTINGS * pfs);
	HRESULT(STDMETHODCALLTYPE * Advise) (IExplorerBrowser * This, IExplorerBrowserEvents * psbe, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (IExplorerBrowser * This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * SetOptions) (IExplorerBrowser * This, EXPLORER_BROWSER_OPTIONS dwFlag);
	HRESULT(STDMETHODCALLTYPE * GetOptions) (IExplorerBrowser * This, EXPLORER_BROWSER_OPTIONS * pdwFlag);
	HRESULT(STDMETHODCALLTYPE * BrowseToIDList) (IExplorerBrowser * This, PCUIDLIST_RELATIVE pidl, UINT uFlags);
	HRESULT(STDMETHODCALLTYPE * BrowseToObject) (IExplorerBrowser * This, IUnknown * punk, UINT uFlags);
	HRESULT(STDMETHODCALLTYPE * FillFromObject) (IExplorerBrowser * This, IUnknown * punk, EXPLORER_BROWSER_FILL_FLAGS dwFlags);
	HRESULT(STDMETHODCALLTYPE * RemoveAll) (IExplorerBrowser * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentView) (IExplorerBrowser * This, REFIID riid, void **ppv);
	END_INTERFACE
}  IExplorerBrowserVtbl;
interface IExplorerBrowser
{
	CONST_VTBL struct IExplorerBrowserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExplorerBrowser_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExplorerBrowser_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IExplorerBrowser_Release(This)( (This)->lpVtbl -> Release(This) )
#define IExplorerBrowser_Initialize(This,hwndParent,prc,pfs)( (This)->lpVtbl -> Initialize(This,hwndParent,prc,pfs) )
#define IExplorerBrowser_Destroy(This)( (This)->lpVtbl -> Destroy(This) )
#define IExplorerBrowser_SetRect(This,phdwp,rcBrowser)( (This)->lpVtbl -> SetRect(This,phdwp,rcBrowser) )
#define IExplorerBrowser_SetPropertyBag(This,pszPropertyBag)( (This)->lpVtbl -> SetPropertyBag(This,pszPropertyBag) )
#define IExplorerBrowser_SetEmptyText(This,pszEmptyText)( (This)->lpVtbl -> SetEmptyText(This,pszEmptyText) )
#define IExplorerBrowser_SetFolderSettings(This,pfs)( (This)->lpVtbl -> SetFolderSettings(This,pfs) )
#define IExplorerBrowser_Advise(This,psbe,pdwCookie)( (This)->lpVtbl -> Advise(This,psbe,pdwCookie) )
#define IExplorerBrowser_Unadvise(This,dwCookie)( (This)->lpVtbl -> Unadvise(This,dwCookie) )
#define IExplorerBrowser_SetOptions(This,dwFlag)( (This)->lpVtbl -> SetOptions(This,dwFlag) )
#define IExplorerBrowser_GetOptions(This,pdwFlag)( (This)->lpVtbl -> GetOptions(This,pdwFlag) )
#define IExplorerBrowser_BrowseToIDList(This,pidl,uFlags)( (This)->lpVtbl -> BrowseToIDList(This,pidl,uFlags) )
#define IExplorerBrowser_BrowseToObject(This,punk,uFlags)( (This)->lpVtbl -> BrowseToObject(This,punk,uFlags) )
#define IExplorerBrowser_FillFromObject(This,punk,dwFlags)( (This)->lpVtbl -> FillFromObject(This,punk,dwFlags) )
#define IExplorerBrowser_RemoveAll(This)( (This)->lpVtbl -> RemoveAll(This) )
#define IExplorerBrowser_GetCurrentView(This,riid,ppv)( (This)->lpVtbl -> GetCurrentView(This,riid,ppv) )
#endif
#endif
#ifndef __IAccessibleObject_INTERFACE_DEFINED__
#define __IAccessibleObject_INTERFACE_DEFINED__
extern const IID IID_IAccessibleObject;
typedef struct IAccessibleObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAccessibleObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAccessibleObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAccessibleObject * This);
	HRESULT(STDMETHODCALLTYPE * SetAccessibleName) (IAccessibleObject * This, LPCWSTR pszName);
	END_INTERFACE
}  IAccessibleObjectVtbl;
interface IAccessibleObject
{
	CONST_VTBL struct IAccessibleObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAccessibleObject_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAccessibleObject_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAccessibleObject_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAccessibleObject_SetAccessibleName(This,pszName)( (This)->lpVtbl -> SetAccessibleName(This,pszName) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0105_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0105_v0_0_s_ifspec;
#ifndef __IResultsFolder_INTERFACE_DEFINED__
#define __IResultsFolder_INTERFACE_DEFINED__
extern const IID IID_IResultsFolder;
typedef struct IResultsFolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IResultsFolder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IResultsFolder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IResultsFolder * This);
	HRESULT(STDMETHODCALLTYPE * AddItem) (IResultsFolder * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * AddIDList) (IResultsFolder * This, PCIDLIST_ABSOLUTE pidl, PITEMID_CHILD * ppidlAdded);
	HRESULT(STDMETHODCALLTYPE * RemoveItem) (IResultsFolder * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * RemoveIDList) (IResultsFolder * This, PCIDLIST_ABSOLUTE pidl);
	HRESULT(STDMETHODCALLTYPE * RemoveAll) (IResultsFolder * This);
	END_INTERFACE
}  IResultsFolderVtbl;
interface IResultsFolder
{
	CONST_VTBL struct IResultsFolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResultsFolder_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResultsFolder_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IResultsFolder_Release(This)( (This)->lpVtbl -> Release(This) )
#define IResultsFolder_AddItem(This,psi)( (This)->lpVtbl -> AddItem(This,psi) )
#define IResultsFolder_AddIDList(This,pidl,ppidlAdded)( (This)->lpVtbl -> AddIDList(This,pidl,ppidlAdded) )
#define IResultsFolder_RemoveItem(This,psi)( (This)->lpVtbl -> RemoveItem(This,psi) )
#define IResultsFolder_RemoveIDList(This,pidl)( (This)->lpVtbl -> RemoveIDList(This,pidl) )
#define IResultsFolder_RemoveAll(This)( (This)->lpVtbl -> RemoveAll(This) )
#endif
HRESULT STDMETHODCALLTYPE IResultsFolder_RemoteAddIDList_Proxy(IResultsFolder * This, PCIDLIST_ABSOLUTE pidl, PITEMID_CHILD * ppidlAdded);
void __RPC_STUB IResultsFolder_RemoteAddIDList_Stub(IRpcStubBuffer * This, IRpcChannelBuffer * _pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD * _pdwStubPhase);
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0106_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0106_v0_0_s_ifspec;
#ifndef __IEnumObjects_INTERFACE_DEFINED__
#define __IEnumObjects_INTERFACE_DEFINED__
extern const IID IID_IEnumObjects;
typedef struct IEnumObjectsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumObjects * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumObjects * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumObjects * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumObjects * This, ULONG celt, REFIID riid, void **rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumObjects * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumObjects * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumObjects * This, IEnumObjects ** ppenum);
	END_INTERFACE
}  IEnumObjectsVtbl;
interface IEnumObjects
{
	CONST_VTBL struct IEnumObjectsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumObjects_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumObjects_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumObjects_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumObjects_Next(This,celt,riid,rgelt,pceltFetched)( (This)->lpVtbl -> Next(This,celt,riid,rgelt,pceltFetched) )
#define IEnumObjects_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumObjects_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumObjects_Clone(This,ppenum)( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumObjects_RemoteNext_Proxy(IEnumObjects * This, ULONG celt, REFIID riid, void **rgelt, ULONG * pceltFetched);
void __RPC_STUB IEnumObjects_RemoteNext_Stub(IRpcStubBuffer * This, IRpcChannelBuffer * _pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD * _pdwStubPhase);
#endif
enum _OPPROGDLGF
{
	OPPROGDLG_DEFAULT = 0,
	OPPROGDLG_ENABLEPAUSE = 0x80,
	OPPROGDLG_ALLOWUNDO = 0x100,
	OPPROGDLG_DONTDISPLAYSOURCEPATH = 0x200,
	OPPROGDLG_DONTDISPLAYDESTPATH = 0x400,
	OPPROGDLG_NOMULTIDAYESTIMATES = 0x800,
	OPPROGDLG_DONTDISPLAYLOCATIONS = 0x1000
};
typedef DWORD OPPROGDLGF;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0107_v0_0_s_ifspec;
#ifndef __IOperationsProgressDialog_INTERFACE_DEFINED__
#define __IOperationsProgressDialog_INTERFACE_DEFINED__
enum _PDMODE
{
	PDM_DEFAULT = 0,
	PDM_RUN = 0x1,
	PDM_PREFLIGHT = 0x2,
	PDM_UNDOING = 0x4,
	PDM_ERRORSBLOCKING = 0x8,
	PDM_INDETERMINATE = 0x10
};
typedef DWORD PDMODE;
typedef enum PDOPSTATUS
{
	PDOPS_RUNNING = 1,
	PDOPS_PAUSED = 2,
	PDOPS_CANCELLED = 3,
	PDOPS_STOPPED = 4,
	PDOPS_ERRORS = 5
} PDOPSTATUS;
extern const IID IID_IOperationsProgressDialog;
typedef struct IOperationsProgressDialogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOperationsProgressDialog * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOperationsProgressDialog * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOperationsProgressDialog * This);
	HRESULT(STDMETHODCALLTYPE * StartProgressDialog) (IOperationsProgressDialog * This, HWND hwndOwner, OPPROGDLGF flags);
	HRESULT(STDMETHODCALLTYPE * StopProgressDialog) (IOperationsProgressDialog * This);
	HRESULT(STDMETHODCALLTYPE * SetOperation) (IOperationsProgressDialog * This, SPACTION action);
	HRESULT(STDMETHODCALLTYPE * SetMode) (IOperationsProgressDialog * This, PDMODE mode);
	HRESULT(STDMETHODCALLTYPE * UpdateProgress) (IOperationsProgressDialog * This, ULONGLONG ullPointsCurrent, ULONGLONG ullPointsTotal, ULONGLONG ullSizeCurrent, ULONGLONG ullSizeTotal, ULONGLONG ullItemsCurrent, ULONGLONG ullItemsTotal);
	HRESULT(STDMETHODCALLTYPE * UpdateLocations) (IOperationsProgressDialog * This, IShellItem * psiSource, IShellItem * psiTarget, IShellItem * psiItem);
	HRESULT(STDMETHODCALLTYPE * ResetTimer) (IOperationsProgressDialog * This);
	HRESULT(STDMETHODCALLTYPE * PauseTimer) (IOperationsProgressDialog * This);
	HRESULT(STDMETHODCALLTYPE * ResumeTimer) (IOperationsProgressDialog * This);
	HRESULT(STDMETHODCALLTYPE * GetMilliseconds) (IOperationsProgressDialog * This, ULONGLONG * pullElapsed, ULONGLONG * pullRemaining);
	HRESULT(STDMETHODCALLTYPE * GetOperationStatus) (IOperationsProgressDialog * This, PDOPSTATUS * popstatus);
	END_INTERFACE
}  IOperationsProgressDialogVtbl;
interface IOperationsProgressDialog
{
	CONST_VTBL struct IOperationsProgressDialogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOperationsProgressDialog_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOperationsProgressDialog_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IOperationsProgressDialog_Release(This)( (This)->lpVtbl -> Release(This) )
#define IOperationsProgressDialog_StartProgressDialog(This,hwndOwner,flags)( (This)->lpVtbl -> StartProgressDialog(This,hwndOwner,flags) )
#define IOperationsProgressDialog_StopProgressDialog(This)( (This)->lpVtbl -> StopProgressDialog(This) )
#define IOperationsProgressDialog_SetOperation(This,action)( (This)->lpVtbl -> SetOperation(This,action) )
#define IOperationsProgressDialog_SetMode(This,mode)( (This)->lpVtbl -> SetMode(This,mode) )
#define IOperationsProgressDialog_UpdateProgress(This,ullPointsCurrent,ullPointsTotal,ullSizeCurrent,ullSizeTotal,ullItemsCurrent,ullItemsTotal)( (This)->lpVtbl -> UpdateProgress(This,ullPointsCurrent,ullPointsTotal,ullSizeCurrent,ullSizeTotal,ullItemsCurrent,ullItemsTotal) )
#define IOperationsProgressDialog_UpdateLocations(This,psiSource,psiTarget,psiItem)( (This)->lpVtbl -> UpdateLocations(This,psiSource,psiTarget,psiItem) )
#define IOperationsProgressDialog_ResetTimer(This)( (This)->lpVtbl -> ResetTimer(This) )
#define IOperationsProgressDialog_PauseTimer(This)( (This)->lpVtbl -> PauseTimer(This) )
#define IOperationsProgressDialog_ResumeTimer(This)( (This)->lpVtbl -> ResumeTimer(This) )
#define IOperationsProgressDialog_GetMilliseconds(This,pullElapsed,pullRemaining)( (This)->lpVtbl -> GetMilliseconds(This,pullElapsed,pullRemaining) )
#define IOperationsProgressDialog_GetOperationStatus(This,popstatus)( (This)->lpVtbl -> GetOperationStatus(This,popstatus) )
#endif
#endif
#ifndef __IIOCancelInformation_INTERFACE_DEFINED__
#define __IIOCancelInformation_INTERFACE_DEFINED__
extern const IID IID_IIOCancelInformation;
typedef struct IIOCancelInformationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIOCancelInformation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIOCancelInformation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIOCancelInformation * This);
	HRESULT(STDMETHODCALLTYPE * SetCancelInformation) (IIOCancelInformation * This, DWORD dwThreadID, UINT uMsgCancel);
	HRESULT(STDMETHODCALLTYPE * GetCancelInformation) (IIOCancelInformation * This, DWORD * pdwThreadID, UINT * puMsgCancel);
	END_INTERFACE
}  IIOCancelInformationVtbl;
interface IIOCancelInformation
{
	CONST_VTBL struct IIOCancelInformationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIOCancelInformation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IIOCancelInformation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IIOCancelInformation_Release(This)( (This)->lpVtbl -> Release(This) )
#define IIOCancelInformation_SetCancelInformation(This,dwThreadID,uMsgCancel)( (This)->lpVtbl -> SetCancelInformation(This,dwThreadID,uMsgCancel) )
#define IIOCancelInformation_GetCancelInformation(This,pdwThreadID,puMsgCancel)( (This)->lpVtbl -> GetCancelInformation(This,pdwThreadID,puMsgCancel) )
#endif
#endif
#define FOFX_NOSKIPJUNCTIONS         0x00010000
#define FOFX_PREFERHARDLINK          0x00020000
#define FOFX_SHOWELEVATIONPROMPT     0x00040000
#define FOFX_EARLYFAILURE            0x00100000
#define FOFX_PRESERVEFILEEXTENSIONS  0x00200000
#define FOFX_KEEPNEWERFILE           0x00400000
#define FOFX_NOCOPYHOOKS             0x00800000
#define FOFX_NOMINIMIZEBOX           0x01000000
#define FOFX_MOVEACLSACROSSVOLUMES   0x02000000
#define FOFX_DONTDISPLAYSOURCEPATH   0x04000000
#define FOFX_DONTDISPLAYDESTPATH     0x08000000
#define FOFX_REQUIREELEVATION        0x10000000
#define FOFX_COPYASDOWNLOAD          0x40000000
#define FOFX_DONTDISPLAYLOCATIONS    0x80000000
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0109_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0109_v0_0_s_ifspec;
#ifndef __IFileOperation_INTERFACE_DEFINED__
#define __IFileOperation_INTERFACE_DEFINED__
extern const IID IID_IFileOperation;
typedef struct IFileOperationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFileOperation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFileOperation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFileOperation * This);
	HRESULT(STDMETHODCALLTYPE * Advise) (IFileOperation * This, IFileOperationProgressSink * pfops, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (IFileOperation * This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * SetOperationFlags) (IFileOperation * This, DWORD dwOperationFlags);
	HRESULT(STDMETHODCALLTYPE * SetProgressMessage) (IFileOperation * This, LPCWSTR pszMessage);
	HRESULT(STDMETHODCALLTYPE * SetProgressDialog) (IFileOperation * This, IOperationsProgressDialog * popd);
	HRESULT(STDMETHODCALLTYPE * SetProperties) (IFileOperation * This, IPropertyChangeArray * pproparray);
	HRESULT(STDMETHODCALLTYPE * SetOwnerWindow) (IFileOperation * This, HWND hwndOwner);
	HRESULT(STDMETHODCALLTYPE * ApplyPropertiesToItem) (IFileOperation * This, IShellItem * psiItem);
	HRESULT(STDMETHODCALLTYPE * ApplyPropertiesToItems) (IFileOperation * This, IUnknown * punkItems);
	HRESULT(STDMETHODCALLTYPE * RenameItem) (IFileOperation * This, IShellItem * psiItem, LPCWSTR pszNewName, IFileOperationProgressSink * pfopsItem);
	HRESULT(STDMETHODCALLTYPE * RenameItems) (IFileOperation * This, IUnknown * pUnkItems, LPCWSTR pszNewName);
	HRESULT(STDMETHODCALLTYPE * MoveItem) (IFileOperation * This, IShellItem * psiItem, IShellItem * psiDestinationFolder, LPCWSTR pszNewName, IFileOperationProgressSink * pfopsItem);
	HRESULT(STDMETHODCALLTYPE * MoveItems) (IFileOperation * This, IUnknown * punkItems, IShellItem * psiDestinationFolder);
	HRESULT(STDMETHODCALLTYPE * CopyItem) (IFileOperation * This, IShellItem * psiItem, IShellItem * psiDestinationFolder, LPCWSTR pszCopyName, IFileOperationProgressSink * pfopsItem);
	HRESULT(STDMETHODCALLTYPE * CopyItems) (IFileOperation * This, IUnknown * punkItems, IShellItem * psiDestinationFolder);
	HRESULT(STDMETHODCALLTYPE * DeleteItem) (IFileOperation * This, IShellItem * psiItem, IFileOperationProgressSink * pfopsItem);
	HRESULT(STDMETHODCALLTYPE * DeleteItems) (IFileOperation * This, IUnknown * punkItems);
	HRESULT(STDMETHODCALLTYPE * NewItem) (IFileOperation * This, IShellItem * psiDestinationFolder, DWORD dwFileAttributes, LPCWSTR pszName, LPCWSTR pszTemplateName, IFileOperationProgressSink * pfopsItem);
	HRESULT(STDMETHODCALLTYPE * PerformOperations) (IFileOperation * This);
	HRESULT(STDMETHODCALLTYPE * GetAnyOperationsAborted) (IFileOperation * This, BOOL * pfAnyOperationsAborted);
	END_INTERFACE
}  IFileOperationVtbl;
interface IFileOperation
{
	CONST_VTBL struct IFileOperationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileOperation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileOperation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileOperation_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileOperation_Advise(This,pfops,pdwCookie)( (This)->lpVtbl -> Advise(This,pfops,pdwCookie) )
#define IFileOperation_Unadvise(This,dwCookie)( (This)->lpVtbl -> Unadvise(This,dwCookie) )
#define IFileOperation_SetOperationFlags(This,dwOperationFlags)( (This)->lpVtbl -> SetOperationFlags(This,dwOperationFlags) )
#define IFileOperation_SetProgressMessage(This,pszMessage)( (This)->lpVtbl -> SetProgressMessage(This,pszMessage) )
#define IFileOperation_SetProgressDialog(This,popd)( (This)->lpVtbl -> SetProgressDialog(This,popd) )
#define IFileOperation_SetProperties(This,pproparray)( (This)->lpVtbl -> SetProperties(This,pproparray) )
#define IFileOperation_SetOwnerWindow(This,hwndOwner)( (This)->lpVtbl -> SetOwnerWindow(This,hwndOwner) )
#define IFileOperation_ApplyPropertiesToItem(This,psiItem)( (This)->lpVtbl -> ApplyPropertiesToItem(This,psiItem) )
#define IFileOperation_ApplyPropertiesToItems(This,punkItems)( (This)->lpVtbl -> ApplyPropertiesToItems(This,punkItems) )
#define IFileOperation_RenameItem(This,psiItem,pszNewName,pfopsItem)( (This)->lpVtbl -> RenameItem(This,psiItem,pszNewName,pfopsItem) )
#define IFileOperation_RenameItems(This,pUnkItems,pszNewName)( (This)->lpVtbl -> RenameItems(This,pUnkItems,pszNewName) )
#define IFileOperation_MoveItem(This,psiItem,psiDestinationFolder,pszNewName,pfopsItem)( (This)->lpVtbl -> MoveItem(This,psiItem,psiDestinationFolder,pszNewName,pfopsItem) )
#define IFileOperation_MoveItems(This,punkItems,psiDestinationFolder)( (This)->lpVtbl -> MoveItems(This,punkItems,psiDestinationFolder) )
#define IFileOperation_CopyItem(This,psiItem,psiDestinationFolder,pszCopyName,pfopsItem)( (This)->lpVtbl -> CopyItem(This,psiItem,psiDestinationFolder,pszCopyName,pfopsItem) )
#define IFileOperation_CopyItems(This,punkItems,psiDestinationFolder)( (This)->lpVtbl -> CopyItems(This,punkItems,psiDestinationFolder) )
#define IFileOperation_DeleteItem(This,psiItem,pfopsItem)( (This)->lpVtbl -> DeleteItem(This,psiItem,pfopsItem) )
#define IFileOperation_DeleteItems(This,punkItems)( (This)->lpVtbl -> DeleteItems(This,punkItems) )
#define IFileOperation_NewItem(This,psiDestinationFolder,dwFileAttributes,pszName,pszTemplateName,pfopsItem)( (This)->lpVtbl -> NewItem(This,psiDestinationFolder,dwFileAttributes,pszName,pszTemplateName,pfopsItem) )
#define IFileOperation_PerformOperations(This)( (This)->lpVtbl -> PerformOperations(This) )
#define IFileOperation_GetAnyOperationsAborted(This,pfAnyOperationsAborted)( (This)->lpVtbl -> GetAnyOperationsAborted(This,pfAnyOperationsAborted) )
#endif
#endif
#ifndef __IObjectProvider_INTERFACE_DEFINED__
#define __IObjectProvider_INTERFACE_DEFINED__
extern const IID IID_IObjectProvider;
typedef struct IObjectProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IObjectProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IObjectProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IObjectProvider * This);
	HRESULT(STDMETHODCALLTYPE * QueryObject) (IObjectProvider * This, REFGUID guidObject, REFIID riid, void **ppvOut);
	END_INTERFACE
}  IObjectProviderVtbl;
interface IObjectProvider
{
	CONST_VTBL struct IObjectProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectProvider_QueryObject(This,guidObject,riid,ppvOut)( (This)->lpVtbl -> QueryObject(This,guidObject,riid,ppvOut) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0111_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0111_v0_0_s_ifspec;
#ifndef __INamespaceWalkCB_INTERFACE_DEFINED__
#define __INamespaceWalkCB_INTERFACE_DEFINED__
extern const IID IID_INamespaceWalkCB;
typedef struct INamespaceWalkCBVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INamespaceWalkCB * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INamespaceWalkCB * This);
	ULONG(STDMETHODCALLTYPE * Release) (INamespaceWalkCB * This);
	HRESULT(STDMETHODCALLTYPE * FoundItem) (INamespaceWalkCB * This, IShellFolder * psf, PCUITEMID_CHILD pidl);
	HRESULT(STDMETHODCALLTYPE * EnterFolder) (INamespaceWalkCB * This, IShellFolder * psf, PCUITEMID_CHILD pidl);
	HRESULT(STDMETHODCALLTYPE * LeaveFolder) (INamespaceWalkCB * This, IShellFolder * psf, PCUITEMID_CHILD pidl);
	HRESULT(STDMETHODCALLTYPE * InitializeProgressDialog) (INamespaceWalkCB * This, LPWSTR * ppszTitle, LPWSTR * ppszCancel);
	END_INTERFACE
}  INamespaceWalkCBVtbl;
interface INamespaceWalkCB
{
	CONST_VTBL struct INamespaceWalkCBVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INamespaceWalkCB_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INamespaceWalkCB_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INamespaceWalkCB_Release(This)( (This)->lpVtbl -> Release(This) )
#define INamespaceWalkCB_FoundItem(This,psf,pidl)( (This)->lpVtbl -> FoundItem(This,psf,pidl) )
#define INamespaceWalkCB_EnterFolder(This,psf,pidl)( (This)->lpVtbl -> EnterFolder(This,psf,pidl) )
#define INamespaceWalkCB_LeaveFolder(This,psf,pidl)( (This)->lpVtbl -> LeaveFolder(This,psf,pidl) )
#define INamespaceWalkCB_InitializeProgressDialog(This,ppszTitle,ppszCancel)( (This)->lpVtbl -> InitializeProgressDialog(This,ppszTitle,ppszCancel) )
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE70)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0112_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0112_v0_0_s_ifspec;
#ifndef __INamespaceWalkCB2_INTERFACE_DEFINED__
#define __INamespaceWalkCB2_INTERFACE_DEFINED__
extern const IID IID_INamespaceWalkCB2;
typedef struct INamespaceWalkCB2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INamespaceWalkCB2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INamespaceWalkCB2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (INamespaceWalkCB2 * This);
	HRESULT(STDMETHODCALLTYPE * FoundItem) (INamespaceWalkCB2 * This, IShellFolder * psf, PCUITEMID_CHILD pidl);
	HRESULT(STDMETHODCALLTYPE * EnterFolder) (INamespaceWalkCB2 * This, IShellFolder * psf, PCUITEMID_CHILD pidl);
	HRESULT(STDMETHODCALLTYPE * LeaveFolder) (INamespaceWalkCB2 * This, IShellFolder * psf, PCUITEMID_CHILD pidl);
	HRESULT(STDMETHODCALLTYPE * InitializeProgressDialog) (INamespaceWalkCB2 * This, LPWSTR * ppszTitle, LPWSTR * ppszCancel);
	HRESULT(STDMETHODCALLTYPE * WalkComplete) (INamespaceWalkCB2 * This, HRESULT hr);
	END_INTERFACE
}  INamespaceWalkCB2Vtbl;
interface INamespaceWalkCB2
{
	CONST_VTBL struct INamespaceWalkCB2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INamespaceWalkCB2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INamespaceWalkCB2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INamespaceWalkCB2_Release(This)( (This)->lpVtbl -> Release(This) )
#define INamespaceWalkCB2_FoundItem(This,psf,pidl)( (This)->lpVtbl -> FoundItem(This,psf,pidl) )
#define INamespaceWalkCB2_EnterFolder(This,psf,pidl)( (This)->lpVtbl -> EnterFolder(This,psf,pidl) )
#define INamespaceWalkCB2_LeaveFolder(This,psf,pidl)( (This)->lpVtbl -> LeaveFolder(This,psf,pidl) )
#define INamespaceWalkCB2_InitializeProgressDialog(This,ppszTitle,ppszCancel)( (This)->lpVtbl -> InitializeProgressDialog(This,ppszTitle,ppszCancel) )
#define INamespaceWalkCB2_WalkComplete(This,hr)( (This)->lpVtbl -> WalkComplete(This,hr) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0113_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0113_v0_0_s_ifspec;
#ifndef __INamespaceWalk_INTERFACE_DEFINED__
#define __INamespaceWalk_INTERFACE_DEFINED__
typedef enum __MIDL_INamespaceWalk_0001
{
	NSWF_DEFAULT = 0,
	NSWF_NONE_IMPLIES_ALL = 0x1,
	NSWF_ONE_IMPLIES_ALL = 0x2,
	NSWF_DONT_TRAVERSE_LINKS = 0x4,
	NSWF_DONT_ACCUMULATE_RESULT = 0x8,
	NSWF_TRAVERSE_STREAM_JUNCTIONS = 0x10,
	NSWF_FILESYSTEM_ONLY = 0x20,
	NSWF_SHOW_PROGRESS = 0x40,
	NSWF_FLAG_VIEWORDER = 0x80,
	NSWF_IGNORE_AUTOPLAY_HIDA = 0x100,
	NSWF_ASYNC = 0x200,
	NSWF_DONT_RESOLVE_LINKS = 0x400,
	NSWF_ACCUMULATE_FOLDERS = 0x800,
	NSWF_DONT_SORT = 0x1000,
	NSWF_USE_TRANSFER_MEDIUM = 0x2000,
	NSWF_DONT_TRAVERSE_STREAM_JUNCTIONS = 0x4000
} NAMESPACEWALKFLAG;
DEFINE_ENUM_FLAG_OPERATORS(NAMESPACEWALKFLAG)
extern const IID IID_INamespaceWalk;
typedef struct INamespaceWalkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INamespaceWalk * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INamespaceWalk * This);
	ULONG(STDMETHODCALLTYPE * Release) (INamespaceWalk * This);
	HRESULT(STDMETHODCALLTYPE * Walk) (INamespaceWalk * This, IUnknown * punkToWalk, DWORD dwFlags, int cDepth, INamespaceWalkCB * pnswcb);
	HRESULT(STDMETHODCALLTYPE * GetIDArrayResult) (INamespaceWalk * This, UINT * pcItems, PIDLIST_ABSOLUTE ** prgpidl);
	END_INTERFACE
}  INamespaceWalkVtbl;
interface INamespaceWalk
{
	CONST_VTBL struct INamespaceWalkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INamespaceWalk_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INamespaceWalk_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INamespaceWalk_Release(This)( (This)->lpVtbl -> Release(This) )
#define INamespaceWalk_Walk(This,punkToWalk,dwFlags,cDepth,pnswcb)( (This)->lpVtbl -> Walk(This,punkToWalk,dwFlags,cDepth,pnswcb) )
#define INamespaceWalk_GetIDArrayResult(This,pcItems,prgpidl)( (This)->lpVtbl -> GetIDArrayResult(This,pcItems,prgpidl) )
#endif
#endif
#endif
__inline void FreeIDListArray(PIDLIST_RELATIVE *ppidls, UINT cItems)
{
	UINT i;
	for (i = 0; i < cItems; i++)
	{
		CoTaskMemFree(ppidls[i]);
	}
	CoTaskMemFree(ppidls);
}
#define FreeIDListArrayFull FreeIDListArray
#define FreeIDListArrayChild FreeIDListArray
#define ACDD_VISIBLE        0x0001
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0114_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0114_v0_0_s_ifspec;
#ifndef __IAutoCompleteDropDown_INTERFACE_DEFINED__
#define __IAutoCompleteDropDown_INTERFACE_DEFINED__
extern const IID IID_IAutoCompleteDropDown;
typedef struct IAutoCompleteDropDownVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAutoCompleteDropDown * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAutoCompleteDropDown * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAutoCompleteDropDown * This);
	HRESULT(STDMETHODCALLTYPE * GetDropDownStatus) (IAutoCompleteDropDown * This, DWORD * pdwFlags, LPWSTR * ppwszString);
	HRESULT(STDMETHODCALLTYPE * ResetEnumerator) (IAutoCompleteDropDown * This);
	END_INTERFACE
}  IAutoCompleteDropDownVtbl;
interface IAutoCompleteDropDown
{
	CONST_VTBL struct IAutoCompleteDropDownVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAutoCompleteDropDown_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAutoCompleteDropDown_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAutoCompleteDropDown_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAutoCompleteDropDown_GetDropDownStatus(This,pdwFlags,ppwszString)( (This)->lpVtbl -> GetDropDownStatus(This,pdwFlags,ppwszString) )
#define IAutoCompleteDropDown_ResetEnumerator(This)( (This)->lpVtbl -> ResetEnumerator(This) )
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE40)
#include <pshpack8.h>
typedef struct tagBANDSITEINFO
{
	DWORD dwMask;
	DWORD dwState;
	DWORD dwStyle;
} BANDSITEINFO;
#include <poppack.h>
enum tagBANDSITECID
{
	BSID_BANDADDED = 0,
	BSID_BANDREMOVED = (BSID_BANDADDED + 1)
};
#define BSIM_STATE          0x00000001
#define BSIM_STYLE          0x00000002
#define BSSF_VISIBLE        0x00000001
#define BSSF_NOTITLE        0x00000002
#define BSSF_UNDELETEABLE   0x00001000
#define BSIS_AUTOGRIPPER               0x00000000
#define BSIS_NOGRIPPER                 0x00000001
#define BSIS_ALWAYSGRIPPER             0x00000002
#define BSIS_LEFTALIGN                 0x00000004
#define BSIS_SINGLECLICK               0x00000008
#define BSIS_NOCONTEXTMENU             0x00000010
#define BSIS_NODROPTARGET              0x00000020
#define BSIS_NOCAPTION                 0x00000040
#define BSIS_PREFERNOLINEBREAK         0x00000080
#define BSIS_LOCKED                    0x00000100
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define BSIS_PRESERVEORDERDURINGLAYOUT 0x00000200
#define BSIS_FIXEDORDER                0x00000400
#endif
#define SID_SBandSite IID_IBandSite
#define CGID_BandSite IID_IBandSite
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0115_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0115_v0_0_s_ifspec;
#ifndef __IBandSite_INTERFACE_DEFINED__
#define __IBandSite_INTERFACE_DEFINED__
extern const IID IID_IBandSite;
typedef struct IBandSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBandSite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBandSite * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBandSite * This);
	HRESULT(STDMETHODCALLTYPE * AddBand) (IBandSite * This, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * EnumBands) (IBandSite * This, UINT uBand, DWORD * pdwBandID);
	HRESULT(STDMETHODCALLTYPE * QueryBand) (IBandSite * This, DWORD dwBandID, IDeskBand ** ppstb, DWORD * pdwState, LPWSTR pszName, int cchName);
	HRESULT(STDMETHODCALLTYPE * SetBandState) (IBandSite * This, DWORD dwBandID, DWORD dwMask, DWORD dwState);
	HRESULT(STDMETHODCALLTYPE * RemoveBand) (IBandSite * This, DWORD dwBandID);
	HRESULT(STDMETHODCALLTYPE * GetBandObject) (IBandSite * This, DWORD dwBandID, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * SetBandSiteInfo) (IBandSite * This, const BANDSITEINFO * pbsinfo);
	HRESULT(STDMETHODCALLTYPE * GetBandSiteInfo) (IBandSite * This, BANDSITEINFO * pbsinfo);
	END_INTERFACE
}  IBandSiteVtbl;
interface IBandSite
{
	CONST_VTBL struct IBandSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBandSite_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBandSite_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBandSite_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBandSite_AddBand(This,punk)( (This)->lpVtbl -> AddBand(This,punk) )
#define IBandSite_EnumBands(This,uBand,pdwBandID)( (This)->lpVtbl -> EnumBands(This,uBand,pdwBandID) )
#define IBandSite_QueryBand(This,dwBandID,ppstb,pdwState,pszName,cchName)( (This)->lpVtbl -> QueryBand(This,dwBandID,ppstb,pdwState,pszName,cchName) )
#define IBandSite_SetBandState(This,dwBandID,dwMask,dwState)( (This)->lpVtbl -> SetBandState(This,dwBandID,dwMask,dwState) )
#define IBandSite_RemoveBand(This,dwBandID)( (This)->lpVtbl -> RemoveBand(This,dwBandID) )
#define IBandSite_GetBandObject(This,dwBandID,riid,ppv)( (This)->lpVtbl -> GetBandObject(This,dwBandID,riid,ppv) )
#define IBandSite_SetBandSiteInfo(This,pbsinfo)( (This)->lpVtbl -> SetBandSiteInfo(This,pbsinfo) )
#define IBandSite_GetBandSiteInfo(This,pbsinfo)( (This)->lpVtbl -> GetBandSiteInfo(This,pbsinfo) )
#endif
HRESULT STDMETHODCALLTYPE IBandSite_RemoteQueryBand_Proxy(IBandSite *This, DWORD dwBandID, IDeskBand **ppstb, DWORD *pdwState, LPWSTR pszName, int cchName);
void __RPC_STUB IBandSite_RemoteQueryBand_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0116_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0116_v0_0_s_ifspec;
#ifndef __IModalWindow_INTERFACE_DEFINED__
#define __IModalWindow_INTERFACE_DEFINED__
extern const IID IID_IModalWindow;
typedef struct IModalWindowVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IModalWindow *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IModalWindow *This);
	ULONG(STDMETHODCALLTYPE *Release) (IModalWindow *This);
	HRESULT(STDMETHODCALLTYPE *Show) (IModalWindow *This, HWND hwndOwner);
	END_INTERFACE
}  IModalWindowVtbl;
interface IModalWindow
{
	CONST_VTBL struct IModalWindowVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IModalWindow_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IModalWindow_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IModalWindow_Release(This)( (This)->lpVtbl -> Release(This) )
#define IModalWindow_Show(This,hwndOwner)( (This)->lpVtbl -> Show(This,hwndOwner) )
#endif
HRESULT STDMETHODCALLTYPE IModalWindow_RemoteShow_Proxy(IModalWindow *This, HWND hwndOwner);
void __RPC_STUB IModalWindow_RemoteShow_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#define PROPSTR_EXTENSIONCOMPLETIONSTATE L"ExtensionCompletionState"
enum tagCDBURNINGEXTENSIONRET
{
	CDBE_RET_DEFAULT = 0,
	CDBE_RET_DONTRUNOTHEREXTS = 0x1,
	CDBE_RET_STOPWIZARD = 0x2
};
#define SID_CDWizardHost IID_ICDBurnExt
enum _CDBE_ACTIONS
{
	CDBE_TYPE_MUSIC = 0x1,
	CDBE_TYPE_DATA = 0x2,
	CDBE_TYPE_ALL = (int)0xffffffff
};
typedef DWORD CDBE_ACTIONS;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0117_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0117_v0_0_s_ifspec;
#ifndef __ICDBurnExt_INTERFACE_DEFINED__
#define __ICDBurnExt_INTERFACE_DEFINED__
extern const IID IID_ICDBurnExt;
typedef struct ICDBurnExtVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICDBurnExt *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICDBurnExt *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICDBurnExt *This);
	HRESULT(STDMETHODCALLTYPE *GetSupportedActionTypes) (ICDBurnExt *This, CDBE_ACTIONS *pdwActions);
	END_INTERFACE
}  ICDBurnExtVtbl;
interface ICDBurnExt
{
	CONST_VTBL struct ICDBurnExtVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICDBurnExt_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICDBurnExt_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICDBurnExt_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICDBurnExt_GetSupportedActionTypes(This,pdwActions)( (This)->lpVtbl -> GetSupportedActionTypes(This,pdwActions) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0118_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0118_v0_0_s_ifspec;
#ifndef __IContextMenuSite_INTERFACE_DEFINED__
#define __IContextMenuSite_INTERFACE_DEFINED__
extern const IID IID_IContextMenuSite;
typedef struct IContextMenuSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContextMenuSite *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContextMenuSite *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContextMenuSite *This);
	HRESULT(STDMETHODCALLTYPE *DoContextMenuPopup) (IContextMenuSite *This, IUnknown *punkContextMenu, UINT fFlags, POINT pt);
	END_INTERFACE
}  IContextMenuSiteVtbl;
interface IContextMenuSite
{
	CONST_VTBL struct IContextMenuSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextMenuSite_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContextMenuSite_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IContextMenuSite_Release(This)( (This)->lpVtbl -> Release(This) )
#define IContextMenuSite_DoContextMenuPopup(This,punkContextMenu,fFlags,pt)( (This)->lpVtbl -> DoContextMenuPopup(This,punkContextMenu,fFlags,pt) )
#endif
#endif
#ifndef __IEnumReadyCallback_INTERFACE_DEFINED__
#define __IEnumReadyCallback_INTERFACE_DEFINED__
extern const IID IID_IEnumReadyCallback;
typedef struct IEnumReadyCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumReadyCallback *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumReadyCallback *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumReadyCallback *This);
	HRESULT(STDMETHODCALLTYPE *EnumReady) (IEnumReadyCallback *This);
	END_INTERFACE
}  IEnumReadyCallbackVtbl;
interface IEnumReadyCallback
{
	CONST_VTBL struct IEnumReadyCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumReadyCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumReadyCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumReadyCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumReadyCallback_EnumReady(This)( (This)->lpVtbl -> EnumReady(This) )
#endif
#endif
#ifndef __IEnumerableView_INTERFACE_DEFINED__
#define __IEnumerableView_INTERFACE_DEFINED__
extern const IID IID_IEnumerableView;
typedef struct IEnumerableViewVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumerableView *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumerableView *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumerableView *This);
	HRESULT(STDMETHODCALLTYPE *SetEnumReadyCallback) (IEnumerableView *This, IEnumReadyCallback *percb);
	HRESULT(STDMETHODCALLTYPE *CreateEnumIDListFromContents) (IEnumerableView *This, PCIDLIST_ABSOLUTE pidlFolder, DWORD dwEnumFlags, IEnumIDList **ppEnumIDList);
	END_INTERFACE
}  IEnumerableViewVtbl;
interface IEnumerableView
{
	CONST_VTBL struct IEnumerableViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumerableView_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumerableView_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumerableView_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumerableView_SetEnumReadyCallback(This,percb)( (This)->lpVtbl -> SetEnumReadyCallback(This,percb) )
#define IEnumerableView_CreateEnumIDListFromContents(This,pidlFolder,dwEnumFlags,ppEnumIDList)( (This)->lpVtbl -> CreateEnumIDListFromContents(This,pidlFolder,dwEnumFlags,ppEnumIDList) )
#endif
#endif
#define SID_EnumerableView IID_IEnumerableView
#if (NTDDI_VERSION >= NTDDI_WINXP) || (_WIN32_IE >= _WIN32_IE_IE70)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0121_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0121_v0_0_s_ifspec;
#ifndef __IInsertItem_INTERFACE_DEFINED__
#define __IInsertItem_INTERFACE_DEFINED__
extern const IID IID_IInsertItem;
typedef struct IInsertItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IInsertItem *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IInsertItem *This);
	ULONG(STDMETHODCALLTYPE *Release) (IInsertItem *This);
	HRESULT(STDMETHODCALLTYPE *InsertItem) (IInsertItem *This, PCUIDLIST_RELATIVE pidl);
	END_INTERFACE
}  IInsertItemVtbl;
interface IInsertItem
{
	CONST_VTBL struct IInsertItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInsertItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInsertItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInsertItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInsertItem_InsertItem(This,pidl)( (This)->lpVtbl -> InsertItem(This,pidl) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0122_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0122_v0_0_s_ifspec;
#ifndef __IMenuBand_INTERFACE_DEFINED__
#define __IMenuBand_INTERFACE_DEFINED__
enum tagMENUBANDHANDLERCID
{
	MBHANDCID_PIDLSELECT = 0
};
extern const IID IID_IMenuBand;
typedef struct IMenuBandVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMenuBand *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMenuBand *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMenuBand *This);
	HRESULT(STDMETHODCALLTYPE *IsMenuMessage) (IMenuBand *This, MSG *pmsg);
	HRESULT(STDMETHODCALLTYPE *TranslateMenuMessage) (IMenuBand *This, MSG *pmsg, LRESULT *plRet);
	END_INTERFACE
}  IMenuBandVtbl;
interface IMenuBand
{
	CONST_VTBL struct IMenuBandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMenuBand_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMenuBand_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMenuBand_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMenuBand_IsMenuMessage(This,pmsg)( (This)->lpVtbl -> IsMenuMessage(This,pmsg) )
#define IMenuBand_TranslateMenuMessage(This,pmsg,plRet)( (This)->lpVtbl -> TranslateMenuMessage(This,pmsg,plRet) )
#endif
#endif
#ifndef __IFolderBandPriv_INTERFACE_DEFINED__
#define __IFolderBandPriv_INTERFACE_DEFINED__
extern const IID IID_IFolderBandPriv;
typedef struct IFolderBandPrivVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFolderBandPriv *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFolderBandPriv *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFolderBandPriv *This);
	HRESULT(STDMETHODCALLTYPE *SetCascade) (IFolderBandPriv *This, BOOL fCascade);
	HRESULT(STDMETHODCALLTYPE *SetAccelerators) (IFolderBandPriv *This, BOOL fAccelerators);
	HRESULT(STDMETHODCALLTYPE *SetNoIcons) (IFolderBandPriv *This, BOOL fNoIcons);
	HRESULT(STDMETHODCALLTYPE *SetNoText) (IFolderBandPriv *This, BOOL fNoText);
	END_INTERFACE
}  IFolderBandPrivVtbl;
interface IFolderBandPriv
{
	CONST_VTBL struct IFolderBandPrivVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFolderBandPriv_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFolderBandPriv_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFolderBandPriv_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFolderBandPriv_SetCascade(This,fCascade)( (This)->lpVtbl -> SetCascade(This,fCascade) )
#define IFolderBandPriv_SetAccelerators(This,fAccelerators)( (This)->lpVtbl -> SetAccelerators(This,fAccelerators) )
#define IFolderBandPriv_SetNoIcons(This,fNoIcons)( (This)->lpVtbl -> SetNoIcons(This,fNoIcons) )
#define IFolderBandPriv_SetNoText(This,fNoText)( (This)->lpVtbl -> SetNoText(This,fNoText) )
#endif
#endif
#ifndef __IRegTreeItem_INTERFACE_DEFINED__
#define __IRegTreeItem_INTERFACE_DEFINED__
extern const IID IID_IRegTreeItem;
typedef struct IRegTreeItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRegTreeItem *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRegTreeItem *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRegTreeItem *This);
	HRESULT(STDMETHODCALLTYPE *GetCheckState) (IRegTreeItem *This, BOOL *pbCheck);
	HRESULT(STDMETHODCALLTYPE *SetCheckState) (IRegTreeItem *This, BOOL bCheck);
	END_INTERFACE
}  IRegTreeItemVtbl;
interface IRegTreeItem
{
	CONST_VTBL struct IRegTreeItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRegTreeItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRegTreeItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IRegTreeItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IRegTreeItem_GetCheckState(This,pbCheck)( (This)->lpVtbl -> GetCheckState(This,pbCheck) )
#define IRegTreeItem_SetCheckState(This,bCheck)( (This)->lpVtbl -> SetCheckState(This,bCheck) )
#endif
#endif
#ifndef __IImageRecompress_INTERFACE_DEFINED__
#define __IImageRecompress_INTERFACE_DEFINED__
extern const IID IID_IImageRecompress;
typedef struct IImageRecompressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IImageRecompress *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IImageRecompress *This);
	ULONG(STDMETHODCALLTYPE *Release) (IImageRecompress *This);
	HRESULT(STDMETHODCALLTYPE *RecompressImage) (IImageRecompress *This, IShellItem *psi, int cx, int cy, int iQuality, IStorage *pstg, IStream **ppstrmOut);
	END_INTERFACE
}  IImageRecompressVtbl;
interface IImageRecompress
{
	CONST_VTBL struct IImageRecompressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IImageRecompress_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IImageRecompress_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IImageRecompress_Release(This)( (This)->lpVtbl -> Release(This) )
#define IImageRecompress_RecompressImage(This,psi,cx,cy,iQuality,pstg,ppstrmOut)( (This)->lpVtbl -> RecompressImage(This,psi,cx,cy,iQuality,pstg,ppstrmOut) )
#endif
#endif
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE60)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0126_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0126_v0_0_s_ifspec;
#ifndef __IDeskBar_INTERFACE_DEFINED__
#define __IDeskBar_INTERFACE_DEFINED__
extern const IID IID_IDeskBar;
typedef struct IDeskBarVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDeskBar *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDeskBar *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDeskBar *This);
	HRESULT(STDMETHODCALLTYPE *GetWindow) (IDeskBar *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *ContextSensitiveHelp) (IDeskBar *This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE *SetClient) (IDeskBar *This, IUnknown *punkClient);
	HRESULT(STDMETHODCALLTYPE *GetClient) (IDeskBar *This, IUnknown **ppunkClient);
	HRESULT(STDMETHODCALLTYPE *OnPosRectChangeDB) (IDeskBar *This, RECT *prc);
	END_INTERFACE
}  IDeskBarVtbl;
interface IDeskBar
{
	CONST_VTBL struct IDeskBarVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDeskBar_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDeskBar_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDeskBar_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDeskBar_GetWindow(This,phwnd)( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IDeskBar_ContextSensitiveHelp(This,fEnterMode)( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IDeskBar_SetClient(This,punkClient)( (This)->lpVtbl -> SetClient(This,punkClient) )
#define IDeskBar_GetClient(This,ppunkClient)( (This)->lpVtbl -> GetClient(This,ppunkClient) )
#define IDeskBar_OnPosRectChangeDB(This,prc)( (This)->lpVtbl -> OnPosRectChangeDB(This,prc) )
#endif
#endif
#ifndef __IMenuPopup_INTERFACE_DEFINED__
#define __IMenuPopup_INTERFACE_DEFINED__
enum tagMENUPOPUPSELECT
{
	MPOS_EXECUTE = 0,
	MPOS_FULLCANCEL = (MPOS_EXECUTE + 1),
	MPOS_CANCELLEVEL = (MPOS_FULLCANCEL + 1),
	MPOS_SELECTLEFT = (MPOS_CANCELLEVEL + 1),
	MPOS_SELECTRIGHT = (MPOS_SELECTLEFT + 1),
	MPOS_CHILDTRACKING = (MPOS_SELECTRIGHT + 1)
};
enum tagMENUPOPUPPOPUPFLAGS
{
	MPPF_SETFOCUS = 0x1,
	MPPF_INITIALSELECT = 0x2,
	MPPF_NOANIMATE = 0x4,
	MPPF_KEYBOARD = 0x10,
	MPPF_REPOSITION = 0x20,
	MPPF_FORCEZORDER = 0x40,
	MPPF_FINALSELECT = 0x80,
	MPPF_TOP = 0x20000000,
	MPPF_LEFT = 0x40000000,
	MPPF_RIGHT = 0x60000000,
	MPPF_BOTTOM = (int)0x80000000,
	MPPF_POS_MASK = (int)0xe0000000,
	MPPF_ALIGN_LEFT = 0x2000000,
	MPPF_ALIGN_RIGHT = 0x4000000
};
typedef int MP_POPUPFLAGS;
extern const IID IID_IMenuPopup;
typedef struct IMenuPopupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMenuPopup *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMenuPopup *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMenuPopup *This);
	HRESULT(STDMETHODCALLTYPE *GetWindow) (IMenuPopup *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *ContextSensitiveHelp) (IMenuPopup *This, BOOL fEnterMode);
	HRESULT(STDMETHODCALLTYPE *SetClient) (IMenuPopup *This, IUnknown *punkClient);
	HRESULT(STDMETHODCALLTYPE *GetClient) (IMenuPopup *This, IUnknown **ppunkClient);
	HRESULT(STDMETHODCALLTYPE *OnPosRectChangeDB) (IMenuPopup *This, RECT *prc);
	HRESULT(STDMETHODCALLTYPE *Popup) (IMenuPopup *This, POINTL *ppt, RECTL *prcExclude, MP_POPUPFLAGS dwFlags);
	HRESULT(STDMETHODCALLTYPE *OnSelect) (IMenuPopup *This, DWORD dwSelectType);
	HRESULT(STDMETHODCALLTYPE *SetSubMenu) (IMenuPopup *This, IMenuPopup *pmp, BOOL fSet);
	END_INTERFACE
}  IMenuPopupVtbl;
interface IMenuPopup
{
	CONST_VTBL struct IMenuPopupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMenuPopup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMenuPopup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMenuPopup_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMenuPopup_GetWindow(This,phwnd)( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IMenuPopup_ContextSensitiveHelp(This,fEnterMode)( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
#define IMenuPopup_SetClient(This,punkClient)( (This)->lpVtbl -> SetClient(This,punkClient) )
#define IMenuPopup_GetClient(This,ppunkClient)( (This)->lpVtbl -> GetClient(This,ppunkClient) )
#define IMenuPopup_OnPosRectChangeDB(This,prc)( (This)->lpVtbl -> OnPosRectChangeDB(This,prc) )
#define IMenuPopup_Popup(This,ppt,prcExclude,dwFlags)( (This)->lpVtbl -> Popup(This,ppt,prcExclude,dwFlags) )
#define IMenuPopup_OnSelect(This,dwSelectType)( (This)->lpVtbl -> OnSelect(This,dwSelectType) )
#define IMenuPopup_SetSubMenu(This,pmp,fSet)( (This)->lpVtbl -> SetSubMenu(This,pmp,fSet) )
#endif
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef enum FILE_USAGE_TYPE
{
	FUT_PLAYING = 0,
	FUT_EDITING = (FUT_PLAYING + 1),
	FUT_GENERIC = (FUT_EDITING + 1)
} FILE_USAGE_TYPE;
#define OF_CAP_CANSWITCHTO     0x0001
#define OF_CAP_CANCLOSE        0x0002
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0128_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0128_v0_0_s_ifspec;
#ifndef __IFileIsInUse_INTERFACE_DEFINED__
#define __IFileIsInUse_INTERFACE_DEFINED__
extern const IID IID_IFileIsInUse;
typedef struct IFileIsInUseVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFileIsInUse *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFileIsInUse *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFileIsInUse *This);
	HRESULT(STDMETHODCALLTYPE *GetAppName) (IFileIsInUse *This, LPWSTR *ppszName);
	HRESULT(STDMETHODCALLTYPE *GetUsage) (IFileIsInUse *This, FILE_USAGE_TYPE *pfut);
	HRESULT(STDMETHODCALLTYPE *GetCapabilities) (IFileIsInUse *This, DWORD *pdwCapFlags);
	HRESULT(STDMETHODCALLTYPE *GetSwitchToHWND) (IFileIsInUse *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *CloseFile) (IFileIsInUse *This);
	END_INTERFACE
}  IFileIsInUseVtbl;
interface IFileIsInUse
{
	CONST_VTBL struct IFileIsInUseVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileIsInUse_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileIsInUse_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileIsInUse_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileIsInUse_GetAppName(This,ppszName)( (This)->lpVtbl -> GetAppName(This,ppszName) )
#define IFileIsInUse_GetUsage(This,pfut)( (This)->lpVtbl -> GetUsage(This,pfut) )
#define IFileIsInUse_GetCapabilities(This,pdwCapFlags)( (This)->lpVtbl -> GetCapabilities(This,pdwCapFlags) )
#define IFileIsInUse_GetSwitchToHWND(This,phwnd)( (This)->lpVtbl -> GetSwitchToHWND(This,phwnd) )
#define IFileIsInUse_CloseFile(This)( (This)->lpVtbl -> CloseFile(This) )
#endif
#endif
typedef enum FDE_OVERWRITE_RESPONSE
{
	FDEOR_DEFAULT = 0,
	FDEOR_ACCEPT = 1,
	FDEOR_REFUSE = 2
} FDE_OVERWRITE_RESPONSE;
typedef enum FDE_SHAREVIOLATION_RESPONSE
{
	FDESVR_DEFAULT = 0,
	FDESVR_ACCEPT = 1,
	FDESVR_REFUSE = 2
} FDE_SHAREVIOLATION_RESPONSE;
typedef enum FDAP
{
	FDAP_BOTTOM = 0,
	FDAP_TOP = 1
} FDAP;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0129_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0129_v0_0_s_ifspec;
#ifndef __IFileDialogEvents_INTERFACE_DEFINED__
#define __IFileDialogEvents_INTERFACE_DEFINED__
extern const IID IID_IFileDialogEvents;
typedef struct IFileDialogEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFileDialogEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFileDialogEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFileDialogEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnFileOk) (IFileDialogEvents *This, IFileDialog *pfd);
	HRESULT(STDMETHODCALLTYPE *OnFolderChanging) (IFileDialogEvents *This, IFileDialog *pfd, IShellItem *psiFolder);
	HRESULT(STDMETHODCALLTYPE *OnFolderChange) (IFileDialogEvents *This, IFileDialog *pfd);
	HRESULT(STDMETHODCALLTYPE *OnSelectionChange) (IFileDialogEvents *This, IFileDialog *pfd);
	HRESULT(STDMETHODCALLTYPE *OnShareViolation) (IFileDialogEvents *This, IFileDialog *pfd, IShellItem *psi, FDE_SHAREVIOLATION_RESPONSE *pResponse);
	HRESULT(STDMETHODCALLTYPE *OnTypeChange) (IFileDialogEvents *This, IFileDialog *pfd);
	HRESULT(STDMETHODCALLTYPE *OnOverwrite) (IFileDialogEvents *This, IFileDialog *pfd, IShellItem *psi, FDE_OVERWRITE_RESPONSE *pResponse);
	END_INTERFACE
}  IFileDialogEventsVtbl;
interface IFileDialogEvents
{
	CONST_VTBL struct IFileDialogEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileDialogEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileDialogEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileDialogEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileDialogEvents_OnFileOk(This,pfd)( (This)->lpVtbl -> OnFileOk(This,pfd) )
#define IFileDialogEvents_OnFolderChanging(This,pfd,psiFolder)( (This)->lpVtbl -> OnFolderChanging(This,pfd,psiFolder) )
#define IFileDialogEvents_OnFolderChange(This,pfd)( (This)->lpVtbl -> OnFolderChange(This,pfd) )
#define IFileDialogEvents_OnSelectionChange(This,pfd)( (This)->lpVtbl -> OnSelectionChange(This,pfd) )
#define IFileDialogEvents_OnShareViolation(This,pfd,psi,pResponse)( (This)->lpVtbl -> OnShareViolation(This,pfd,psi,pResponse) )
#define IFileDialogEvents_OnTypeChange(This,pfd)( (This)->lpVtbl -> OnTypeChange(This,pfd) )
#define IFileDialogEvents_OnOverwrite(This,pfd,psi,pResponse)( (This)->lpVtbl -> OnOverwrite(This,pfd,psi,pResponse) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0130_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0130_v0_0_s_ifspec;
#ifndef __IFileDialog_INTERFACE_DEFINED__
#define __IFileDialog_INTERFACE_DEFINED__
enum _FILEOPENDIALOGOPTIONS
{
	FOS_OVERWRITEPROMPT = 0x2,
	FOS_STRICTFILETYPES = 0x4,
	FOS_NOCHANGEDIR = 0x8,
	FOS_PICKFOLDERS = 0x20,
	FOS_FORCEFILESYSTEM = 0x40,
	FOS_ALLNONSTORAGEITEMS = 0x80,
	FOS_NOVALIDATE = 0x100,
	FOS_ALLOWMULTISELECT = 0x200,
	FOS_PATHMUSTEXIST = 0x800,
	FOS_FILEMUSTEXIST = 0x1000,
	FOS_CREATEPROMPT = 0x2000,
	FOS_SHAREAWARE = 0x4000,
	FOS_NOREADONLYRETURN = 0x8000,
	FOS_NOTESTFILECREATE = 0x10000,
	FOS_HIDEMRUPLACES = 0x20000,
	FOS_HIDEPINNEDPLACES = 0x40000,
	FOS_NODEREFERENCELINKS = 0x100000,
	FOS_DONTADDTORECENT = 0x2000000,
	FOS_FORCESHOWHIDDEN = 0x10000000,
	FOS_DEFAULTNOMINIMODE = 0x20000000,
	FOS_FORCEPREVIEWPANEON = 0x40000000
};
typedef DWORD FILEOPENDIALOGOPTIONS;
extern const IID IID_IFileDialog;
typedef struct IFileDialogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFileDialog *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFileDialog *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFileDialog *This);
	HRESULT(STDMETHODCALLTYPE *Show) (IFileDialog *This, HWND hwndOwner);
	HRESULT(STDMETHODCALLTYPE *SetFileTypes) (IFileDialog *This, UINT cFileTypes, const COMDLG_FILTERSPEC *rgFilterSpec);
	HRESULT(STDMETHODCALLTYPE *SetFileTypeIndex) (IFileDialog *This, UINT iFileType);
	HRESULT(STDMETHODCALLTYPE *GetFileTypeIndex) (IFileDialog *This, UINT *piFileType);
	HRESULT(STDMETHODCALLTYPE *Advise) (IFileDialog *This, IFileDialogEvents *pfde, DWORD *pdwCookie);
	HRESULT(STDMETHODCALLTYPE *Unadvise) (IFileDialog *This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE *SetOptions) (IFileDialog *This, FILEOPENDIALOGOPTIONS fos);
	HRESULT(STDMETHODCALLTYPE *GetOptions) (IFileDialog *This, FILEOPENDIALOGOPTIONS *pfos);
	HRESULT(STDMETHODCALLTYPE *SetDefaultFolder) (IFileDialog *This, IShellItem *psi);
	HRESULT(STDMETHODCALLTYPE *SetFolder) (IFileDialog *This, IShellItem *psi);
	HRESULT(STDMETHODCALLTYPE *GetFolder) (IFileDialog *This, IShellItem **ppsi);
	HRESULT(STDMETHODCALLTYPE *GetCurrentSelection) (IFileDialog *This, IShellItem **ppsi);
	HRESULT(STDMETHODCALLTYPE *SetFileName) (IFileDialog *This, LPCWSTR pszName);
	HRESULT(STDMETHODCALLTYPE *GetFileName) (IFileDialog *This, LPWSTR *pszName);
	HRESULT(STDMETHODCALLTYPE *SetTitle) (IFileDialog *This, LPCWSTR pszTitle);
	HRESULT(STDMETHODCALLTYPE *SetOkButtonLabel) (IFileDialog *This, LPCWSTR pszText);
	HRESULT(STDMETHODCALLTYPE *SetFileNameLabel) (IFileDialog *This, LPCWSTR pszLabel);
	HRESULT(STDMETHODCALLTYPE *GetResult) (IFileDialog *This, IShellItem **ppsi);
	HRESULT(STDMETHODCALLTYPE *AddPlace) (IFileDialog *This, IShellItem *psi, FDAP fdap);
	HRESULT(STDMETHODCALLTYPE *SetDefaultExtension) (IFileDialog *This, LPCWSTR pszDefaultExtension);
	HRESULT(STDMETHODCALLTYPE *Close) (IFileDialog *This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE *SetClientGuid) (IFileDialog *This, REFGUID guid);
	HRESULT(STDMETHODCALLTYPE *ClearClientData) (IFileDialog *This);
	HRESULT(STDMETHODCALLTYPE *SetFilter) (IFileDialog *This, IShellItemFilter *pFilter);
	END_INTERFACE
}  IFileDialogVtbl;
interface IFileDialog
{
	CONST_VTBL struct IFileDialogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileDialog_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileDialog_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileDialog_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileDialog_Show(This,hwndOwner)( (This)->lpVtbl -> Show(This,hwndOwner) )
#define IFileDialog_SetFileTypes(This,cFileTypes,rgFilterSpec)( (This)->lpVtbl -> SetFileTypes(This,cFileTypes,rgFilterSpec) )
#define IFileDialog_SetFileTypeIndex(This,iFileType)( (This)->lpVtbl -> SetFileTypeIndex(This,iFileType) )
#define IFileDialog_GetFileTypeIndex(This,piFileType)( (This)->lpVtbl -> GetFileTypeIndex(This,piFileType) )
#define IFileDialog_Advise(This,pfde,pdwCookie)( (This)->lpVtbl -> Advise(This,pfde,pdwCookie) )
#define IFileDialog_Unadvise(This,dwCookie)( (This)->lpVtbl -> Unadvise(This,dwCookie) )
#define IFileDialog_SetOptions(This,fos)( (This)->lpVtbl -> SetOptions(This,fos) )
#define IFileDialog_GetOptions(This,pfos)( (This)->lpVtbl -> GetOptions(This,pfos) )
#define IFileDialog_SetDefaultFolder(This,psi)( (This)->lpVtbl -> SetDefaultFolder(This,psi) )
#define IFileDialog_SetFolder(This,psi)( (This)->lpVtbl -> SetFolder(This,psi) )
#define IFileDialog_GetFolder(This,ppsi)( (This)->lpVtbl -> GetFolder(This,ppsi) )
#define IFileDialog_GetCurrentSelection(This,ppsi)( (This)->lpVtbl -> GetCurrentSelection(This,ppsi) )
#define IFileDialog_SetFileName(This,pszName)( (This)->lpVtbl -> SetFileName(This,pszName) )
#define IFileDialog_GetFileName(This,pszName)( (This)->lpVtbl -> GetFileName(This,pszName) )
#define IFileDialog_SetTitle(This,pszTitle)( (This)->lpVtbl -> SetTitle(This,pszTitle) )
#define IFileDialog_SetOkButtonLabel(This,pszText)( (This)->lpVtbl -> SetOkButtonLabel(This,pszText) )
#define IFileDialog_SetFileNameLabel(This,pszLabel)( (This)->lpVtbl -> SetFileNameLabel(This,pszLabel) )
#define IFileDialog_GetResult(This,ppsi)( (This)->lpVtbl -> GetResult(This,ppsi) )
#define IFileDialog_AddPlace(This,psi,fdap)( (This)->lpVtbl -> AddPlace(This,psi,fdap) )
#define IFileDialog_SetDefaultExtension(This,pszDefaultExtension)( (This)->lpVtbl -> SetDefaultExtension(This,pszDefaultExtension) )
#define IFileDialog_Close(This,hr)( (This)->lpVtbl -> Close(This,hr) )
#define IFileDialog_SetClientGuid(This,guid)( (This)->lpVtbl -> SetClientGuid(This,guid) )
#define IFileDialog_ClearClientData(This)( (This)->lpVtbl -> ClearClientData(This) )
#define IFileDialog_SetFilter(This,pFilter)( (This)->lpVtbl -> SetFilter(This,pFilter) )
#endif
#endif
#ifndef __IFileSaveDialog_INTERFACE_DEFINED__
#define __IFileSaveDialog_INTERFACE_DEFINED__
extern const IID IID_IFileSaveDialog;
typedef struct IFileSaveDialogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFileSaveDialog *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFileSaveDialog *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFileSaveDialog *This);
	HRESULT(STDMETHODCALLTYPE *Show) (IFileSaveDialog *This, HWND hwndOwner);
	HRESULT(STDMETHODCALLTYPE *SetFileTypes) (IFileSaveDialog *This, UINT cFileTypes, const COMDLG_FILTERSPEC *rgFilterSpec);
	HRESULT(STDMETHODCALLTYPE *SetFileTypeIndex) (IFileSaveDialog *This, UINT iFileType);
	HRESULT(STDMETHODCALLTYPE *GetFileTypeIndex) (IFileSaveDialog *This, UINT *piFileType);
	HRESULT(STDMETHODCALLTYPE *Advise) (IFileSaveDialog *This, IFileDialogEvents *pfde, DWORD *pdwCookie);
	HRESULT(STDMETHODCALLTYPE *Unadvise) (IFileSaveDialog *This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE *SetOptions) (IFileSaveDialog *This, FILEOPENDIALOGOPTIONS fos);
	HRESULT(STDMETHODCALLTYPE *GetOptions) (IFileSaveDialog *This, FILEOPENDIALOGOPTIONS *pfos);
	HRESULT(STDMETHODCALLTYPE *SetDefaultFolder) (IFileSaveDialog *This, IShellItem *psi);
	HRESULT(STDMETHODCALLTYPE *SetFolder) (IFileSaveDialog *This, IShellItem *psi);
	HRESULT(STDMETHODCALLTYPE *GetFolder) (IFileSaveDialog *This, IShellItem **ppsi);
	HRESULT(STDMETHODCALLTYPE *GetCurrentSelection) (IFileSaveDialog *This, IShellItem **ppsi);
	HRESULT(STDMETHODCALLTYPE *SetFileName) (IFileSaveDialog *This, LPCWSTR pszName);
	HRESULT(STDMETHODCALLTYPE *GetFileName) (IFileSaveDialog *This, LPWSTR *pszName);
	HRESULT(STDMETHODCALLTYPE *SetTitle) (IFileSaveDialog *This, LPCWSTR pszTitle);
	HRESULT(STDMETHODCALLTYPE *SetOkButtonLabel) (IFileSaveDialog *This, LPCWSTR pszText);
	HRESULT(STDMETHODCALLTYPE *SetFileNameLabel) (IFileSaveDialog *This, LPCWSTR pszLabel);
	HRESULT(STDMETHODCALLTYPE *GetResult) (IFileSaveDialog *This, IShellItem **ppsi);
	HRESULT(STDMETHODCALLTYPE *AddPlace) (IFileSaveDialog *This, IShellItem *psi, FDAP fdap);
	HRESULT(STDMETHODCALLTYPE *SetDefaultExtension) (IFileSaveDialog *This, LPCWSTR pszDefaultExtension);
	HRESULT(STDMETHODCALLTYPE *Close) (IFileSaveDialog *This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE *SetClientGuid) (IFileSaveDialog *This, REFGUID guid);
	HRESULT(STDMETHODCALLTYPE *ClearClientData) (IFileSaveDialog *This);
	HRESULT(STDMETHODCALLTYPE *SetFilter) (IFileSaveDialog *This, IShellItemFilter *pFilter);
	HRESULT(STDMETHODCALLTYPE *SetSaveAsItem) (IFileSaveDialog *This, IShellItem *psi);
	HRESULT(STDMETHODCALLTYPE *SetProperties) (IFileSaveDialog *This, IPropertyStore *pStore);
	HRESULT(STDMETHODCALLTYPE *SetCollectedProperties) (IFileSaveDialog *This, IPropertyDescriptionList *pList, BOOL fAppendDefault);
	HRESULT(STDMETHODCALLTYPE *GetProperties) (IFileSaveDialog *This, IPropertyStore **ppStore);
	HRESULT(STDMETHODCALLTYPE *ApplyProperties) (IFileSaveDialog *This, IShellItem *psi, IPropertyStore *pStore, HWND hwnd, IFileOperationProgressSink *pSink);
	END_INTERFACE
}  IFileSaveDialogVtbl;
interface IFileSaveDialog
{
	CONST_VTBL struct IFileSaveDialogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileSaveDialog_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileSaveDialog_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileSaveDialog_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileSaveDialog_Show(This,hwndOwner)( (This)->lpVtbl -> Show(This,hwndOwner) )
#define IFileSaveDialog_SetFileTypes(This,cFileTypes,rgFilterSpec)( (This)->lpVtbl -> SetFileTypes(This,cFileTypes,rgFilterSpec) )
#define IFileSaveDialog_SetFileTypeIndex(This,iFileType)( (This)->lpVtbl -> SetFileTypeIndex(This,iFileType) )
#define IFileSaveDialog_GetFileTypeIndex(This,piFileType)( (This)->lpVtbl -> GetFileTypeIndex(This,piFileType) )
#define IFileSaveDialog_Advise(This,pfde,pdwCookie)( (This)->lpVtbl -> Advise(This,pfde,pdwCookie) )
#define IFileSaveDialog_Unadvise(This,dwCookie)( (This)->lpVtbl -> Unadvise(This,dwCookie) )
#define IFileSaveDialog_SetOptions(This,fos)( (This)->lpVtbl -> SetOptions(This,fos) )
#define IFileSaveDialog_GetOptions(This,pfos)( (This)->lpVtbl -> GetOptions(This,pfos) )
#define IFileSaveDialog_SetDefaultFolder(This,psi)( (This)->lpVtbl -> SetDefaultFolder(This,psi) )
#define IFileSaveDialog_SetFolder(This,psi)( (This)->lpVtbl -> SetFolder(This,psi) )
#define IFileSaveDialog_GetFolder(This,ppsi)( (This)->lpVtbl -> GetFolder(This,ppsi) )
#define IFileSaveDialog_GetCurrentSelection(This,ppsi)( (This)->lpVtbl -> GetCurrentSelection(This,ppsi) )
#define IFileSaveDialog_SetFileName(This,pszName)( (This)->lpVtbl -> SetFileName(This,pszName) )
#define IFileSaveDialog_GetFileName(This,pszName)( (This)->lpVtbl -> GetFileName(This,pszName) )
#define IFileSaveDialog_SetTitle(This,pszTitle)( (This)->lpVtbl -> SetTitle(This,pszTitle) )
#define IFileSaveDialog_SetOkButtonLabel(This,pszText)( (This)->lpVtbl -> SetOkButtonLabel(This,pszText) )
#define IFileSaveDialog_SetFileNameLabel(This,pszLabel)( (This)->lpVtbl -> SetFileNameLabel(This,pszLabel) )
#define IFileSaveDialog_GetResult(This,ppsi)( (This)->lpVtbl -> GetResult(This,ppsi) )
#define IFileSaveDialog_AddPlace(This,psi,fdap)( (This)->lpVtbl -> AddPlace(This,psi,fdap) )
#define IFileSaveDialog_SetDefaultExtension(This,pszDefaultExtension)( (This)->lpVtbl -> SetDefaultExtension(This,pszDefaultExtension) )
#define IFileSaveDialog_Close(This,hr)( (This)->lpVtbl -> Close(This,hr) )
#define IFileSaveDialog_SetClientGuid(This,guid)( (This)->lpVtbl -> SetClientGuid(This,guid) )
#define IFileSaveDialog_ClearClientData(This)( (This)->lpVtbl -> ClearClientData(This) )
#define IFileSaveDialog_SetFilter(This,pFilter)( (This)->lpVtbl -> SetFilter(This,pFilter) )
#define IFileSaveDialog_SetSaveAsItem(This,psi)( (This)->lpVtbl -> SetSaveAsItem(This,psi) )
#define IFileSaveDialog_SetProperties(This,pStore)( (This)->lpVtbl -> SetProperties(This,pStore) )
#define IFileSaveDialog_SetCollectedProperties(This,pList,fAppendDefault)( (This)->lpVtbl -> SetCollectedProperties(This,pList,fAppendDefault) )
#define IFileSaveDialog_GetProperties(This,ppStore)( (This)->lpVtbl -> GetProperties(This,ppStore) )
#define IFileSaveDialog_ApplyProperties(This,psi,pStore,hwnd,pSink)( (This)->lpVtbl -> ApplyProperties(This,psi,pStore,hwnd,pSink) )
#endif
#endif
#ifndef __IFileOpenDialog_INTERFACE_DEFINED__
#define __IFileOpenDialog_INTERFACE_DEFINED__
extern const IID IID_IFileOpenDialog;
typedef struct IFileOpenDialogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFileOpenDialog *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFileOpenDialog *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFileOpenDialog *This);
	HRESULT(STDMETHODCALLTYPE *Show) (IFileOpenDialog *This, HWND hwndOwner);
	HRESULT(STDMETHODCALLTYPE *SetFileTypes) (IFileOpenDialog *This, UINT cFileTypes, const COMDLG_FILTERSPEC *rgFilterSpec);
	HRESULT(STDMETHODCALLTYPE *SetFileTypeIndex) (IFileOpenDialog *This, UINT iFileType);
	HRESULT(STDMETHODCALLTYPE *GetFileTypeIndex) (IFileOpenDialog *This, UINT *piFileType);
	HRESULT(STDMETHODCALLTYPE *Advise) (IFileOpenDialog *This, IFileDialogEvents *pfde, DWORD *pdwCookie);
	HRESULT(STDMETHODCALLTYPE *Unadvise) (IFileOpenDialog *This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE *SetOptions) (IFileOpenDialog *This, FILEOPENDIALOGOPTIONS fos);
	HRESULT(STDMETHODCALLTYPE *GetOptions) (IFileOpenDialog *This, FILEOPENDIALOGOPTIONS *pfos);
	HRESULT(STDMETHODCALLTYPE *SetDefaultFolder) (IFileOpenDialog *This, IShellItem *psi);
	HRESULT(STDMETHODCALLTYPE *SetFolder) (IFileOpenDialog *This, IShellItem *psi);
	HRESULT(STDMETHODCALLTYPE *GetFolder) (IFileOpenDialog *This, IShellItem **ppsi);
	HRESULT(STDMETHODCALLTYPE *GetCurrentSelection) (IFileOpenDialog *This, IShellItem **ppsi);
	HRESULT(STDMETHODCALLTYPE *SetFileName) (IFileOpenDialog *This, LPCWSTR pszName);
	HRESULT(STDMETHODCALLTYPE *GetFileName) (IFileOpenDialog *This, LPWSTR *pszName);
	HRESULT(STDMETHODCALLTYPE *SetTitle) (IFileOpenDialog *This, LPCWSTR pszTitle);
	HRESULT(STDMETHODCALLTYPE *SetOkButtonLabel) (IFileOpenDialog *This, LPCWSTR pszText);
	HRESULT(STDMETHODCALLTYPE *SetFileNameLabel) (IFileOpenDialog *This, LPCWSTR pszLabel);
	HRESULT(STDMETHODCALLTYPE *GetResult) (IFileOpenDialog *This, IShellItem **ppsi);
	HRESULT(STDMETHODCALLTYPE *AddPlace) (IFileOpenDialog *This, IShellItem *psi, FDAP fdap);
	HRESULT(STDMETHODCALLTYPE *SetDefaultExtension) (IFileOpenDialog *This, LPCWSTR pszDefaultExtension);
	HRESULT(STDMETHODCALLTYPE *Close) (IFileOpenDialog *This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE *SetClientGuid) (IFileOpenDialog *This, REFGUID guid);
	HRESULT(STDMETHODCALLTYPE *ClearClientData) (IFileOpenDialog *This);
	HRESULT(STDMETHODCALLTYPE *SetFilter) (IFileOpenDialog *This, IShellItemFilter *pFilter);
	HRESULT(STDMETHODCALLTYPE *GetResults) (IFileOpenDialog *This, IShellItemArray **ppenum);
	HRESULT(STDMETHODCALLTYPE *GetSelectedItems) (IFileOpenDialog *This, IShellItemArray **ppsai);
	END_INTERFACE
}  IFileOpenDialogVtbl;
interface IFileOpenDialog
{
	CONST_VTBL struct IFileOpenDialogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileOpenDialog_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileOpenDialog_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileOpenDialog_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileOpenDialog_Show(This,hwndOwner)( (This)->lpVtbl -> Show(This,hwndOwner) )
#define IFileOpenDialog_SetFileTypes(This,cFileTypes,rgFilterSpec)( (This)->lpVtbl -> SetFileTypes(This,cFileTypes,rgFilterSpec) )
#define IFileOpenDialog_SetFileTypeIndex(This,iFileType)( (This)->lpVtbl -> SetFileTypeIndex(This,iFileType) )
#define IFileOpenDialog_GetFileTypeIndex(This,piFileType)( (This)->lpVtbl -> GetFileTypeIndex(This,piFileType) )
#define IFileOpenDialog_Advise(This,pfde,pdwCookie)( (This)->lpVtbl -> Advise(This,pfde,pdwCookie) )
#define IFileOpenDialog_Unadvise(This,dwCookie)( (This)->lpVtbl -> Unadvise(This,dwCookie) )
#define IFileOpenDialog_SetOptions(This,fos)( (This)->lpVtbl -> SetOptions(This,fos) )
#define IFileOpenDialog_GetOptions(This,pfos)( (This)->lpVtbl -> GetOptions(This,pfos) )
#define IFileOpenDialog_SetDefaultFolder(This,psi)( (This)->lpVtbl -> SetDefaultFolder(This,psi) )
#define IFileOpenDialog_SetFolder(This,psi)( (This)->lpVtbl -> SetFolder(This,psi) )
#define IFileOpenDialog_GetFolder(This,ppsi)( (This)->lpVtbl -> GetFolder(This,ppsi) )
#define IFileOpenDialog_GetCurrentSelection(This,ppsi)( (This)->lpVtbl -> GetCurrentSelection(This,ppsi) )
#define IFileOpenDialog_SetFileName(This,pszName)( (This)->lpVtbl -> SetFileName(This,pszName) )
#define IFileOpenDialog_GetFileName(This,pszName)( (This)->lpVtbl -> GetFileName(This,pszName) )
#define IFileOpenDialog_SetTitle(This,pszTitle)( (This)->lpVtbl -> SetTitle(This,pszTitle) )
#define IFileOpenDialog_SetOkButtonLabel(This,pszText)( (This)->lpVtbl -> SetOkButtonLabel(This,pszText) )
#define IFileOpenDialog_SetFileNameLabel(This,pszLabel)( (This)->lpVtbl -> SetFileNameLabel(This,pszLabel) )
#define IFileOpenDialog_GetResult(This,ppsi)( (This)->lpVtbl -> GetResult(This,ppsi) )
#define IFileOpenDialog_AddPlace(This,psi,fdap)( (This)->lpVtbl -> AddPlace(This,psi,fdap) )
#define IFileOpenDialog_SetDefaultExtension(This,pszDefaultExtension)( (This)->lpVtbl -> SetDefaultExtension(This,pszDefaultExtension) )
#define IFileOpenDialog_Close(This,hr)( (This)->lpVtbl -> Close(This,hr) )
#define IFileOpenDialog_SetClientGuid(This,guid)( (This)->lpVtbl -> SetClientGuid(This,guid) )
#define IFileOpenDialog_ClearClientData(This)( (This)->lpVtbl -> ClearClientData(This) )
#define IFileOpenDialog_SetFilter(This,pFilter)( (This)->lpVtbl -> SetFilter(This,pFilter) )
#define IFileOpenDialog_GetResults(This,ppenum)( (This)->lpVtbl -> GetResults(This,ppenum) )
#define IFileOpenDialog_GetSelectedItems(This,ppsai)( (This)->lpVtbl -> GetSelectedItems(This,ppsai) )
#endif
#endif
typedef enum CDCONTROLSTATEF
{
	CDCS_INACTIVE = 0,
	CDCS_ENABLED = 0x1,
	CDCS_VISIBLE = 0x2,
	CDCS_ENABLEDVISIBLE = 0x3
} CDCONTROLSTATEF;
DEFINE_ENUM_FLAG_OPERATORS(CDCONTROLSTATEF)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0133_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0133_v0_0_s_ifspec;
#ifndef __IFileDialogCustomize_INTERFACE_DEFINED__
#define __IFileDialogCustomize_INTERFACE_DEFINED__
extern const IID IID_IFileDialogCustomize;
typedef struct IFileDialogCustomizeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFileDialogCustomize * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFileDialogCustomize * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFileDialogCustomize * This);
	HRESULT(STDMETHODCALLTYPE * EnableOpenDropDown) (IFileDialogCustomize * This, DWORD dwIDCtl);
	HRESULT(STDMETHODCALLTYPE * AddMenu) (IFileDialogCustomize * This, DWORD dwIDCtl, LPCWSTR pszLabel);
	HRESULT(STDMETHODCALLTYPE * AddPushButton) (IFileDialogCustomize * This, DWORD dwIDCtl, LPCWSTR pszLabel);
	HRESULT(STDMETHODCALLTYPE * AddComboBox) (IFileDialogCustomize * This, DWORD dwIDCtl);
	HRESULT(STDMETHODCALLTYPE * AddRadioButtonList) (IFileDialogCustomize * This, DWORD dwIDCtl);
	HRESULT(STDMETHODCALLTYPE * AddCheckButton) (IFileDialogCustomize * This, DWORD dwIDCtl, LPCWSTR pszLabel, BOOL bChecked);
	HRESULT(STDMETHODCALLTYPE * AddEditBox) (IFileDialogCustomize * This, DWORD dwIDCtl, LPCWSTR pszText);
	HRESULT(STDMETHODCALLTYPE * AddSeparator) (IFileDialogCustomize * This, DWORD dwIDCtl);
	HRESULT(STDMETHODCALLTYPE * AddText) (IFileDialogCustomize * This, DWORD dwIDCtl, LPCWSTR pszText);
	HRESULT(STDMETHODCALLTYPE * SetControlLabel) (IFileDialogCustomize * This, DWORD dwIDCtl, LPCWSTR pszLabel);
	HRESULT(STDMETHODCALLTYPE * GetControlState) (IFileDialogCustomize * This, DWORD dwIDCtl, CDCONTROLSTATEF * pdwState);
	HRESULT(STDMETHODCALLTYPE * SetControlState) (IFileDialogCustomize * This, DWORD dwIDCtl, CDCONTROLSTATEF dwState);
	HRESULT(STDMETHODCALLTYPE * GetEditBoxText) (IFileDialogCustomize * This, DWORD dwIDCtl, WCHAR ** ppszText);
	HRESULT(STDMETHODCALLTYPE * SetEditBoxText) (IFileDialogCustomize * This, DWORD dwIDCtl, LPCWSTR pszText);
	HRESULT(STDMETHODCALLTYPE * GetCheckButtonState) (IFileDialogCustomize * This, DWORD dwIDCtl, BOOL * pbChecked);
	HRESULT(STDMETHODCALLTYPE * SetCheckButtonState) (IFileDialogCustomize * This, DWORD dwIDCtl, BOOL bChecked);
	HRESULT(STDMETHODCALLTYPE * AddControlItem) (IFileDialogCustomize * This, DWORD dwIDCtl, DWORD dwIDItem, LPCWSTR pszLabel);
	HRESULT(STDMETHODCALLTYPE * RemoveControlItem) (IFileDialogCustomize * This, DWORD dwIDCtl, DWORD dwIDItem);
	HRESULT(STDMETHODCALLTYPE * RemoveAllControlItems) (IFileDialogCustomize * This, DWORD dwIDCtl);
	HRESULT(STDMETHODCALLTYPE * GetControlItemState) (IFileDialogCustomize * This, DWORD dwIDCtl, DWORD dwIDItem, CDCONTROLSTATEF * pdwState);
	HRESULT(STDMETHODCALLTYPE * SetControlItemState) (IFileDialogCustomize * This, DWORD dwIDCtl, DWORD dwIDItem, CDCONTROLSTATEF dwState);
	HRESULT(STDMETHODCALLTYPE * GetSelectedControlItem) (IFileDialogCustomize * This, DWORD dwIDCtl, DWORD * pdwIDItem);
	HRESULT(STDMETHODCALLTYPE * SetSelectedControlItem) (IFileDialogCustomize * This, DWORD dwIDCtl, DWORD dwIDItem);
	HRESULT(STDMETHODCALLTYPE * StartVisualGroup) (IFileDialogCustomize * This, DWORD dwIDCtl, LPCWSTR pszLabel);
	HRESULT(STDMETHODCALLTYPE * EndVisualGroup) (IFileDialogCustomize * This);
	HRESULT(STDMETHODCALLTYPE * MakeProminent) (IFileDialogCustomize * This, DWORD dwIDCtl);
	HRESULT(STDMETHODCALLTYPE * SetControlItemText) (IFileDialogCustomize * This, DWORD dwIDCtl, DWORD dwIDItem, LPCWSTR pszLabel);
	END_INTERFACE
}  IFileDialogCustomizeVtbl;
interface IFileDialogCustomize
{
	CONST_VTBL struct IFileDialogCustomizeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileDialogCustomize_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileDialogCustomize_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileDialogCustomize_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileDialogCustomize_EnableOpenDropDown(This,dwIDCtl)( (This)->lpVtbl -> EnableOpenDropDown(This,dwIDCtl) )
#define IFileDialogCustomize_AddMenu(This,dwIDCtl,pszLabel)( (This)->lpVtbl -> AddMenu(This,dwIDCtl,pszLabel) )
#define IFileDialogCustomize_AddPushButton(This,dwIDCtl,pszLabel)( (This)->lpVtbl -> AddPushButton(This,dwIDCtl,pszLabel) )
#define IFileDialogCustomize_AddComboBox(This,dwIDCtl)( (This)->lpVtbl -> AddComboBox(This,dwIDCtl) )
#define IFileDialogCustomize_AddRadioButtonList(This,dwIDCtl)( (This)->lpVtbl -> AddRadioButtonList(This,dwIDCtl) )
#define IFileDialogCustomize_AddCheckButton(This,dwIDCtl,pszLabel,bChecked)( (This)->lpVtbl -> AddCheckButton(This,dwIDCtl,pszLabel,bChecked) )
#define IFileDialogCustomize_AddEditBox(This,dwIDCtl,pszText)( (This)->lpVtbl -> AddEditBox(This,dwIDCtl,pszText) )
#define IFileDialogCustomize_AddSeparator(This,dwIDCtl)( (This)->lpVtbl -> AddSeparator(This,dwIDCtl) )
#define IFileDialogCustomize_AddText(This,dwIDCtl,pszText)( (This)->lpVtbl -> AddText(This,dwIDCtl,pszText) )
#define IFileDialogCustomize_SetControlLabel(This,dwIDCtl,pszLabel)( (This)->lpVtbl -> SetControlLabel(This,dwIDCtl,pszLabel) )
#define IFileDialogCustomize_GetControlState(This,dwIDCtl,pdwState)( (This)->lpVtbl -> GetControlState(This,dwIDCtl,pdwState) )
#define IFileDialogCustomize_SetControlState(This,dwIDCtl,dwState)( (This)->lpVtbl -> SetControlState(This,dwIDCtl,dwState) )
#define IFileDialogCustomize_GetEditBoxText(This,dwIDCtl,ppszText)( (This)->lpVtbl -> GetEditBoxText(This,dwIDCtl,ppszText) )
#define IFileDialogCustomize_SetEditBoxText(This,dwIDCtl,pszText)( (This)->lpVtbl -> SetEditBoxText(This,dwIDCtl,pszText) )
#define IFileDialogCustomize_GetCheckButtonState(This,dwIDCtl,pbChecked)( (This)->lpVtbl -> GetCheckButtonState(This,dwIDCtl,pbChecked) )
#define IFileDialogCustomize_SetCheckButtonState(This,dwIDCtl,bChecked)( (This)->lpVtbl -> SetCheckButtonState(This,dwIDCtl,bChecked) )
#define IFileDialogCustomize_AddControlItem(This,dwIDCtl,dwIDItem,pszLabel)( (This)->lpVtbl -> AddControlItem(This,dwIDCtl,dwIDItem,pszLabel) )
#define IFileDialogCustomize_RemoveControlItem(This,dwIDCtl,dwIDItem)( (This)->lpVtbl -> RemoveControlItem(This,dwIDCtl,dwIDItem) )
#define IFileDialogCustomize_RemoveAllControlItems(This,dwIDCtl)( (This)->lpVtbl -> RemoveAllControlItems(This,dwIDCtl) )
#define IFileDialogCustomize_GetControlItemState(This,dwIDCtl,dwIDItem,pdwState)( (This)->lpVtbl -> GetControlItemState(This,dwIDCtl,dwIDItem,pdwState) )
#define IFileDialogCustomize_SetControlItemState(This,dwIDCtl,dwIDItem,dwState)( (This)->lpVtbl -> SetControlItemState(This,dwIDCtl,dwIDItem,dwState) )
#define IFileDialogCustomize_GetSelectedControlItem(This,dwIDCtl,pdwIDItem)( (This)->lpVtbl -> GetSelectedControlItem(This,dwIDCtl,pdwIDItem) )
#define IFileDialogCustomize_SetSelectedControlItem(This,dwIDCtl,dwIDItem)( (This)->lpVtbl -> SetSelectedControlItem(This,dwIDCtl,dwIDItem) )
#define IFileDialogCustomize_StartVisualGroup(This,dwIDCtl,pszLabel)( (This)->lpVtbl -> StartVisualGroup(This,dwIDCtl,pszLabel) )
#define IFileDialogCustomize_EndVisualGroup(This)( (This)->lpVtbl -> EndVisualGroup(This) )
#define IFileDialogCustomize_MakeProminent(This,dwIDCtl)( (This)->lpVtbl -> MakeProminent(This,dwIDCtl) )
#define IFileDialogCustomize_SetControlItemText(This,dwIDCtl,dwIDItem,pszLabel)( (This)->lpVtbl -> SetControlItemText(This,dwIDCtl,dwIDItem,pszLabel) )
#endif
#endif
#ifndef __IFileDialogControlEvents_INTERFACE_DEFINED__
#define __IFileDialogControlEvents_INTERFACE_DEFINED__
extern const IID IID_IFileDialogControlEvents;
typedef struct IFileDialogControlEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFileDialogControlEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFileDialogControlEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFileDialogControlEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnItemSelected) (IFileDialogControlEvents * This, IFileDialogCustomize * pfdc, DWORD dwIDCtl, DWORD dwIDItem);
	HRESULT(STDMETHODCALLTYPE * OnButtonClicked) (IFileDialogControlEvents * This, IFileDialogCustomize * pfdc, DWORD dwIDCtl);
	HRESULT(STDMETHODCALLTYPE * OnCheckButtonToggled) (IFileDialogControlEvents * This, IFileDialogCustomize * pfdc, DWORD dwIDCtl, BOOL bChecked);
	HRESULT(STDMETHODCALLTYPE * OnControlActivating) (IFileDialogControlEvents * This, IFileDialogCustomize * pfdc, DWORD dwIDCtl);
	END_INTERFACE
}  IFileDialogControlEventsVtbl;
interface IFileDialogControlEvents
{
	CONST_VTBL struct IFileDialogControlEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileDialogControlEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileDialogControlEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileDialogControlEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileDialogControlEvents_OnItemSelected(This,pfdc,dwIDCtl,dwIDItem)( (This)->lpVtbl -> OnItemSelected(This,pfdc,dwIDCtl,dwIDItem) )
#define IFileDialogControlEvents_OnButtonClicked(This,pfdc,dwIDCtl)( (This)->lpVtbl -> OnButtonClicked(This,pfdc,dwIDCtl) )
#define IFileDialogControlEvents_OnCheckButtonToggled(This,pfdc,dwIDCtl,bChecked)( (This)->lpVtbl -> OnCheckButtonToggled(This,pfdc,dwIDCtl,bChecked) )
#define IFileDialogControlEvents_OnControlActivating(This,pfdc,dwIDCtl)( (This)->lpVtbl -> OnControlActivating(This,pfdc,dwIDCtl) )
#endif
#endif
#ifndef __IFileDialog2_INTERFACE_DEFINED__
#define __IFileDialog2_INTERFACE_DEFINED__
extern const IID IID_IFileDialog2;
typedef struct IFileDialog2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFileDialog2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFileDialog2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFileDialog2 * This);
	HRESULT(STDMETHODCALLTYPE * Show) (IFileDialog2 * This, HWND hwndOwner);
	HRESULT(STDMETHODCALLTYPE * SetFileTypes) (IFileDialog2 * This, UINT cFileTypes, const COMDLG_FILTERSPEC * rgFilterSpec);
	HRESULT(STDMETHODCALLTYPE * SetFileTypeIndex) (IFileDialog2 * This, UINT iFileType);
	HRESULT(STDMETHODCALLTYPE * GetFileTypeIndex) (IFileDialog2 * This, UINT * piFileType);
	HRESULT(STDMETHODCALLTYPE * Advise) (IFileDialog2 * This, IFileDialogEvents * pfde, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (IFileDialog2 * This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * SetOptions) (IFileDialog2 * This, FILEOPENDIALOGOPTIONS fos);
	HRESULT(STDMETHODCALLTYPE * GetOptions) (IFileDialog2 * This, FILEOPENDIALOGOPTIONS * pfos);
	HRESULT(STDMETHODCALLTYPE * SetDefaultFolder) (IFileDialog2 * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * SetFolder) (IFileDialog2 * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * GetFolder) (IFileDialog2 * This, IShellItem ** ppsi);
	HRESULT(STDMETHODCALLTYPE * GetCurrentSelection) (IFileDialog2 * This, IShellItem ** ppsi);
	HRESULT(STDMETHODCALLTYPE * SetFileName) (IFileDialog2 * This, LPCWSTR pszName);
	HRESULT(STDMETHODCALLTYPE * GetFileName) (IFileDialog2 * This, LPWSTR * pszName);
	HRESULT(STDMETHODCALLTYPE * SetTitle) (IFileDialog2 * This, LPCWSTR pszTitle);
	HRESULT(STDMETHODCALLTYPE * SetOkButtonLabel) (IFileDialog2 * This, LPCWSTR pszText);
	HRESULT(STDMETHODCALLTYPE * SetFileNameLabel) (IFileDialog2 * This, LPCWSTR pszLabel);
	HRESULT(STDMETHODCALLTYPE * GetResult) (IFileDialog2 * This, IShellItem ** ppsi);
	HRESULT(STDMETHODCALLTYPE * AddPlace) (IFileDialog2 * This, IShellItem * psi, FDAP fdap);
	HRESULT(STDMETHODCALLTYPE * SetDefaultExtension) (IFileDialog2 * This, LPCWSTR pszDefaultExtension);
	HRESULT(STDMETHODCALLTYPE * Close) (IFileDialog2 * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * SetClientGuid) (IFileDialog2 * This, REFGUID guid);
	HRESULT(STDMETHODCALLTYPE * ClearClientData) (IFileDialog2 * This);
	HRESULT(STDMETHODCALLTYPE * SetFilter) (IFileDialog2 * This, IShellItemFilter * pFilter);
	HRESULT(STDMETHODCALLTYPE * SetCancelButtonLabel) (IFileDialog2 * This, LPCWSTR pszLabel);
	HRESULT(STDMETHODCALLTYPE * SetNavigationRoot) (IFileDialog2 * This, IShellItem * psi);
	END_INTERFACE
}  IFileDialog2Vtbl;
interface IFileDialog2
{
	CONST_VTBL struct IFileDialog2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileDialog2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileDialog2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileDialog2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileDialog2_Show(This,hwndOwner)( (This)->lpVtbl -> Show(This,hwndOwner) )
#define IFileDialog2_SetFileTypes(This,cFileTypes,rgFilterSpec)( (This)->lpVtbl -> SetFileTypes(This,cFileTypes,rgFilterSpec) )
#define IFileDialog2_SetFileTypeIndex(This,iFileType)( (This)->lpVtbl -> SetFileTypeIndex(This,iFileType) )
#define IFileDialog2_GetFileTypeIndex(This,piFileType)( (This)->lpVtbl -> GetFileTypeIndex(This,piFileType) )
#define IFileDialog2_Advise(This,pfde,pdwCookie)( (This)->lpVtbl -> Advise(This,pfde,pdwCookie) )
#define IFileDialog2_Unadvise(This,dwCookie)( (This)->lpVtbl -> Unadvise(This,dwCookie) )
#define IFileDialog2_SetOptions(This,fos)( (This)->lpVtbl -> SetOptions(This,fos) )
#define IFileDialog2_GetOptions(This,pfos)( (This)->lpVtbl -> GetOptions(This,pfos) )
#define IFileDialog2_SetDefaultFolder(This,psi)( (This)->lpVtbl -> SetDefaultFolder(This,psi) )
#define IFileDialog2_SetFolder(This,psi)( (This)->lpVtbl -> SetFolder(This,psi) )
#define IFileDialog2_GetFolder(This,ppsi)( (This)->lpVtbl -> GetFolder(This,ppsi) )
#define IFileDialog2_GetCurrentSelection(This,ppsi)( (This)->lpVtbl -> GetCurrentSelection(This,ppsi) )
#define IFileDialog2_SetFileName(This,pszName)( (This)->lpVtbl -> SetFileName(This,pszName) )
#define IFileDialog2_GetFileName(This,pszName)( (This)->lpVtbl -> GetFileName(This,pszName) )
#define IFileDialog2_SetTitle(This,pszTitle)( (This)->lpVtbl -> SetTitle(This,pszTitle) )
#define IFileDialog2_SetOkButtonLabel(This,pszText)( (This)->lpVtbl -> SetOkButtonLabel(This,pszText) )
#define IFileDialog2_SetFileNameLabel(This,pszLabel)( (This)->lpVtbl -> SetFileNameLabel(This,pszLabel) )
#define IFileDialog2_GetResult(This,ppsi)( (This)->lpVtbl -> GetResult(This,ppsi) )
#define IFileDialog2_AddPlace(This,psi,fdap)( (This)->lpVtbl -> AddPlace(This,psi,fdap) )
#define IFileDialog2_SetDefaultExtension(This,pszDefaultExtension)( (This)->lpVtbl -> SetDefaultExtension(This,pszDefaultExtension) )
#define IFileDialog2_Close(This,hr)( (This)->lpVtbl -> Close(This,hr) )
#define IFileDialog2_SetClientGuid(This,guid)( (This)->lpVtbl -> SetClientGuid(This,guid) )
#define IFileDialog2_ClearClientData(This)( (This)->lpVtbl -> ClearClientData(This) )
#define IFileDialog2_SetFilter(This,pFilter)( (This)->lpVtbl -> SetFilter(This,pFilter) )
#define IFileDialog2_SetCancelButtonLabel(This,pszLabel)( (This)->lpVtbl -> SetCancelButtonLabel(This,pszLabel) )
#define IFileDialog2_SetNavigationRoot(This,psi)( (This)->lpVtbl -> SetNavigationRoot(This,psi) )
#endif
#endif
typedef enum ASSOCIATIONLEVEL
{
	AL_MACHINE = 0,
	AL_EFFECTIVE = (AL_MACHINE + 1),
	AL_USER = (AL_EFFECTIVE + 1)
} ASSOCIATIONLEVEL;
typedef enum ASSOCIATIONTYPE
{
	AT_FILEEXTENSION = 0,
	AT_URLPROTOCOL = (AT_FILEEXTENSION + 1),
	AT_STARTMENUCLIENT = (AT_URLPROTOCOL + 1),
	AT_MIMETYPE = (AT_STARTMENUCLIENT + 1)
} ASSOCIATIONTYPE;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0136_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0136_v0_0_s_ifspec;
#ifndef __IApplicationAssociationRegistration_INTERFACE_DEFINED__
#define __IApplicationAssociationRegistration_INTERFACE_DEFINED__
extern const IID IID_IApplicationAssociationRegistration;
typedef struct IApplicationAssociationRegistrationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IApplicationAssociationRegistration * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IApplicationAssociationRegistration * This);
	ULONG(STDMETHODCALLTYPE * Release) (IApplicationAssociationRegistration * This);
	HRESULT(STDMETHODCALLTYPE * QueryCurrentDefault) (IApplicationAssociationRegistration * This, LPCWSTR pszQuery, ASSOCIATIONTYPE atQueryType, ASSOCIATIONLEVEL alQueryLevel, LPWSTR * ppszAssociation);
	HRESULT(STDMETHODCALLTYPE * QueryAppIsDefault) (IApplicationAssociationRegistration * This, LPCWSTR pszQuery, ASSOCIATIONTYPE atQueryType, ASSOCIATIONLEVEL alQueryLevel, LPCWSTR pszAppRegistryName, BOOL * pfDefault);
	HRESULT(STDMETHODCALLTYPE * QueryAppIsDefaultAll) (IApplicationAssociationRegistration * This, ASSOCIATIONLEVEL alQueryLevel, LPCWSTR pszAppRegistryName, BOOL * pfDefault);
	HRESULT(STDMETHODCALLTYPE * SetAppAsDefault) (IApplicationAssociationRegistration * This, LPCWSTR pszAppRegistryName, LPCWSTR pszSet, ASSOCIATIONTYPE atSetType);
	HRESULT(STDMETHODCALLTYPE * SetAppAsDefaultAll) (IApplicationAssociationRegistration * This, LPCWSTR pszAppRegistryName);
	HRESULT(STDMETHODCALLTYPE * ClearUserAssociations) (IApplicationAssociationRegistration * This);
	END_INTERFACE
}  IApplicationAssociationRegistrationVtbl;
interface IApplicationAssociationRegistration
{
	CONST_VTBL struct IApplicationAssociationRegistrationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IApplicationAssociationRegistration_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IApplicationAssociationRegistration_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IApplicationAssociationRegistration_Release(This)( (This)->lpVtbl -> Release(This) )
#define IApplicationAssociationRegistration_QueryCurrentDefault(This,pszQuery,atQueryType,alQueryLevel,ppszAssociation)( (This)->lpVtbl -> QueryCurrentDefault(This,pszQuery,atQueryType,alQueryLevel,ppszAssociation) )
#define IApplicationAssociationRegistration_QueryAppIsDefault(This,pszQuery,atQueryType,alQueryLevel,pszAppRegistryName,pfDefault)( (This)->lpVtbl -> QueryAppIsDefault(This,pszQuery,atQueryType,alQueryLevel,pszAppRegistryName,pfDefault) )
#define IApplicationAssociationRegistration_QueryAppIsDefaultAll(This,alQueryLevel,pszAppRegistryName,pfDefault)( (This)->lpVtbl -> QueryAppIsDefaultAll(This,alQueryLevel,pszAppRegistryName,pfDefault) )
#define IApplicationAssociationRegistration_SetAppAsDefault(This,pszAppRegistryName,pszSet,atSetType)( (This)->lpVtbl -> SetAppAsDefault(This,pszAppRegistryName,pszSet,atSetType) )
#define IApplicationAssociationRegistration_SetAppAsDefaultAll(This,pszAppRegistryName)( (This)->lpVtbl -> SetAppAsDefaultAll(This,pszAppRegistryName) )
#define IApplicationAssociationRegistration_ClearUserAssociations(This)( (This)->lpVtbl -> ClearUserAssociations(This) )
#endif
#endif
SHSTDAPI SHCreateAssociationRegistration(REFIID riid, void **ppv);
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0137_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0137_v0_0_s_ifspec;
#ifndef __IApplicationAssociationRegistrationUI_INTERFACE_DEFINED__
#define __IApplicationAssociationRegistrationUI_INTERFACE_DEFINED__
extern const IID IID_IApplicationAssociationRegistrationUI;
typedef struct IApplicationAssociationRegistrationUIVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IApplicationAssociationRegistrationUI * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IApplicationAssociationRegistrationUI * This);
	ULONG(STDMETHODCALLTYPE * Release) (IApplicationAssociationRegistrationUI * This);
	HRESULT(STDMETHODCALLTYPE * LaunchAdvancedAssociationUI) (IApplicationAssociationRegistrationUI * This, LPCWSTR pszAppRegistryName);
	END_INTERFACE
}  IApplicationAssociationRegistrationUIVtbl;
interface IApplicationAssociationRegistrationUI
{
	CONST_VTBL struct IApplicationAssociationRegistrationUIVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IApplicationAssociationRegistrationUI_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IApplicationAssociationRegistrationUI_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IApplicationAssociationRegistrationUI_Release(This)( (This)->lpVtbl -> Release(This) )
#define IApplicationAssociationRegistrationUI_LaunchAdvancedAssociationUI(This,pszAppRegistryName)( (This)->lpVtbl -> LaunchAdvancedAssociationUI(This,pszAppRegistryName) )
#endif
#endif
#endif
#include <pshpack1.h>
typedef struct DELEGATEITEMID
{
	WORD cbSize;
	WORD wOuter;
	WORD cbInner;
	BYTE rgb[1];
} DELEGATEITEMID;
#include <poppack.h>
typedef const UNALIGNED DELEGATEITEMID *PCDELEGATEITEMID;
typedef UNALIGNED DELEGATEITEMID *PDELEGATEITEMID;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0138_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0138_v0_0_s_ifspec;
#ifndef __IDelegateFolder_INTERFACE_DEFINED__
#define __IDelegateFolder_INTERFACE_DEFINED__
extern const IID IID_IDelegateFolder;
typedef struct IDelegateFolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDelegateFolder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDelegateFolder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDelegateFolder * This);
	HRESULT(STDMETHODCALLTYPE * SetItemAlloc) (IDelegateFolder * This, IMalloc * pmalloc);
	END_INTERFACE
}  IDelegateFolderVtbl;
interface IDelegateFolder
{
	CONST_VTBL struct IDelegateFolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDelegateFolder_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDelegateFolder_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDelegateFolder_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDelegateFolder_SetItemAlloc(This,pmalloc)( (This)->lpVtbl -> SetItemAlloc(This,pmalloc) )
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE60)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0139_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0139_v0_0_s_ifspec;
#ifndef __IBrowserFrameOptions_INTERFACE_DEFINED__
#define __IBrowserFrameOptions_INTERFACE_DEFINED__
typedef IBrowserFrameOptions *LPBROWSERFRAMEOPTIONS;
enum _BROWSERFRAMEOPTIONS
{
	BFO_NONE = 0,
	BFO_BROWSER_PERSIST_SETTINGS = 0x1,
	BFO_RENAME_FOLDER_OPTIONS_TOINTERNET = 0x2,
	BFO_BOTH_OPTIONS = 0x4,
	BIF_PREFER_INTERNET_SHORTCUT = 0x8,
	BFO_BROWSE_NO_IN_NEW_PROCESS = 0x10,
	BFO_ENABLE_HYPERLINK_TRACKING = 0x20,
	BFO_USE_IE_OFFLINE_SUPPORT = 0x40,
	BFO_SUBSTITUE_INTERNET_START_PAGE = 0x80,
	BFO_USE_IE_LOGOBANDING = 0x100,
	BFO_ADD_IE_TOCAPTIONBAR = 0x200,
	BFO_USE_DIALUP_REF = 0x400,
	BFO_USE_IE_TOOLBAR = 0x800,
	BFO_NO_PARENT_FOLDER_SUPPORT = 0x1000,
	BFO_NO_REOPEN_NEXT_RESTART = 0x2000,
	BFO_GO_HOME_PAGE = 0x4000,
	BFO_PREFER_IEPROCESS = 0x8000,
	BFO_SHOW_NAVIGATION_CANCELLED = 0x10000,
	BFO_USE_IE_STATUSBAR = 0x20000,
	BFO_QUERY_ALL = (int)0xffffffff
};
typedef DWORD BROWSERFRAMEOPTIONS;
extern const IID IID_IBrowserFrameOptions;
typedef struct IBrowserFrameOptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBrowserFrameOptions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBrowserFrameOptions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBrowserFrameOptions * This);
	HRESULT(STDMETHODCALLTYPE * GetFrameOptions) (IBrowserFrameOptions * This, BROWSERFRAMEOPTIONS dwMask, BROWSERFRAMEOPTIONS * pdwOptions);
	END_INTERFACE
}  IBrowserFrameOptionsVtbl;
interface IBrowserFrameOptions
{
	CONST_VTBL struct IBrowserFrameOptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBrowserFrameOptions_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBrowserFrameOptions_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBrowserFrameOptions_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBrowserFrameOptions_GetFrameOptions(This,dwMask,pdwOptions)( (This)->lpVtbl -> GetFrameOptions(This,dwMask,pdwOptions) )
#endif
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
typedef enum NWMF
{
	NWMF_UNLOADING = 0x1,
	NWMF_USERINITED = 0x2,
	NWMF_FIRST = 0x4,
	NWMF_OVERRIDEKEY = 0x8,
	NWMF_SHOWHELP = 0x10,
	NWMF_HTMLDIALOG = 0x20,
	NWMF_FROMDIALOGCHILD = 0x40,
	NWMF_USERREQUESTED = 0x80,
	NWMF_USERALLOWED = 0x100,
	NWMF_FORCEWINDOW = 0x10000,
	NWMF_FORCETAB = 0x20000,
	NWMF_SUGGESTWINDOW = 0x40000,
	NWMF_SUGGESTTAB = 0x80000,
	NWMF_INACTIVETAB = 0x100000
} NWMF;
DEFINE_ENUM_FLAG_OPERATORS(NWMF)
#define SID_SNewWindowManager IID_INewWindowManager
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0140_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0140_v0_0_s_ifspec;
#ifndef __INewWindowManager_INTERFACE_DEFINED__
#define __INewWindowManager_INTERFACE_DEFINED__
extern const IID IID_INewWindowManager;
typedef struct INewWindowManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INewWindowManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INewWindowManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (INewWindowManager * This);
	HRESULT(STDMETHODCALLTYPE * EvaluateNewWindow) (INewWindowManager * This, LPCWSTR pszUrl, LPCWSTR pszName, LPCWSTR pszUrlContext, LPCWSTR pszFeatures, BOOL fReplace, DWORD dwFlags, DWORD dwUserActionTime);
	END_INTERFACE
}  INewWindowManagerVtbl;
interface INewWindowManager
{
	CONST_VTBL struct INewWindowManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INewWindowManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INewWindowManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INewWindowManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define INewWindowManager_EvaluateNewWindow(This,pszUrl,pszName,pszUrlContext,pszFeatures,fReplace,dwFlags,dwUserActionTime)( (This)->lpVtbl -> EvaluateNewWindow(This,pszUrl,pszName,pszUrlContext,pszFeatures,fReplace,dwFlags,dwUserActionTime) )
#endif
#endif
#ifndef __IAttachmentExecute_INTERFACE_DEFINED__
#define __IAttachmentExecute_INTERFACE_DEFINED__
typedef enum ATTACHMENT_PROMPT
{
	ATTACHMENT_PROMPT_NONE = 0,
	ATTACHMENT_PROMPT_SAVE = 0x1,
	ATTACHMENT_PROMPT_EXEC = 0x2,
	ATTACHMENT_PROMPT_EXEC_OR_SAVE = 0x3
} ATTACHMENT_PROMPT;
typedef enum ATTACHMENT_ACTION
{
	ATTACHMENT_ACTION_CANCEL = 0,
	ATTACHMENT_ACTION_SAVE = 0x1,
	ATTACHMENT_ACTION_EXEC = 0x2
} ATTACHMENT_ACTION;
extern const IID IID_IAttachmentExecute;
typedef struct IAttachmentExecuteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAttachmentExecute * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAttachmentExecute * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAttachmentExecute * This);
	HRESULT(STDMETHODCALLTYPE * SetClientTitle) (IAttachmentExecute * This, LPCWSTR pszTitle);
	HRESULT(STDMETHODCALLTYPE * SetClientGuid) (IAttachmentExecute * This, REFGUID guid);
	HRESULT(STDMETHODCALLTYPE * SetLocalPath) (IAttachmentExecute * This, LPCWSTR pszLocalPath);
	HRESULT(STDMETHODCALLTYPE * SetFileName) (IAttachmentExecute * This, LPCWSTR pszFileName);
	HRESULT(STDMETHODCALLTYPE * SetSource) (IAttachmentExecute * This, LPCWSTR pszSource);
	HRESULT(STDMETHODCALLTYPE * SetReferrer) (IAttachmentExecute * This, LPCWSTR pszReferrer);
	HRESULT(STDMETHODCALLTYPE * CheckPolicy) (IAttachmentExecute * This);
	HRESULT(STDMETHODCALLTYPE * Prompt) (IAttachmentExecute * This, HWND hwnd, ATTACHMENT_PROMPT prompt, ATTACHMENT_ACTION * paction);
	HRESULT(STDMETHODCALLTYPE * Save) (IAttachmentExecute * This);
	HRESULT(STDMETHODCALLTYPE * Execute) (IAttachmentExecute * This, HWND hwnd, LPCWSTR pszVerb, HANDLE * phProcess);
	HRESULT(STDMETHODCALLTYPE * SaveWithUI) (IAttachmentExecute * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * ClearClientState) (IAttachmentExecute * This);
	END_INTERFACE
}  IAttachmentExecuteVtbl;
interface IAttachmentExecute
{
	CONST_VTBL struct IAttachmentExecuteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAttachmentExecute_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAttachmentExecute_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAttachmentExecute_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAttachmentExecute_SetClientTitle(This,pszTitle)( (This)->lpVtbl -> SetClientTitle(This,pszTitle) )
#define IAttachmentExecute_SetClientGuid(This,guid)( (This)->lpVtbl -> SetClientGuid(This,guid) )
#define IAttachmentExecute_SetLocalPath(This,pszLocalPath)( (This)->lpVtbl -> SetLocalPath(This,pszLocalPath) )
#define IAttachmentExecute_SetFileName(This,pszFileName)( (This)->lpVtbl -> SetFileName(This,pszFileName) )
#define IAttachmentExecute_SetSource(This,pszSource)( (This)->lpVtbl -> SetSource(This,pszSource) )
#define IAttachmentExecute_SetReferrer(This,pszReferrer)( (This)->lpVtbl -> SetReferrer(This,pszReferrer) )
#define IAttachmentExecute_CheckPolicy(This)( (This)->lpVtbl -> CheckPolicy(This) )
#define IAttachmentExecute_Prompt(This,hwnd,prompt,paction)( (This)->lpVtbl -> Prompt(This,hwnd,prompt,paction) )
#define IAttachmentExecute_Save(This)( (This)->lpVtbl -> Save(This) )
#define IAttachmentExecute_Execute(This,hwnd,pszVerb,phProcess)( (This)->lpVtbl -> Execute(This,hwnd,pszVerb,phProcess) )
#define IAttachmentExecute_SaveWithUI(This,hwnd)( (This)->lpVtbl -> SaveWithUI(This,hwnd) )
#define IAttachmentExecute_ClearClientState(This)( (This)->lpVtbl -> ClearClientState(This) )
#endif
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE60)
#include <pshpack8.h>
typedef struct tagSMDATA
{
	DWORD dwMask;
	DWORD dwFlags;
	HMENU hmenu;
	HWND hwnd;
	UINT uId;
	UINT uIdParent;
	UINT uIdAncestor;
	IUnknown *punk;
	PIDLIST_ABSOLUTE pidlFolder;
	PUITEMID_CHILD pidlItem;
	IShellFolder *psf;
	void *pvUserData;
} SMDATA;
typedef struct tagSMDATA *LPSMDATA;
#define SMDM_SHELLFOLDER               0x00000001
#define SMDM_HMENU                     0x00000002
#define SMDM_TOOLBAR                   0x00000004
typedef struct tagSMINFO
{
	DWORD dwMask;
	DWORD dwType;
	DWORD dwFlags;
	int iIcon;
} SMINFO;
typedef struct tagSMINFO *PSMINFO;
typedef struct SHCSCHANGENOTIFYSTRUCT
{
	long lEvent;
	PCIDLIST_ABSOLUTE pidl1;
	PCIDLIST_ABSOLUTE pidl2;
} SMCSHCHANGENOTIFYSTRUCT;
typedef struct SHCSCHANGENOTIFYSTRUCT *PSMCSHCHANGENOTIFYSTRUCT;
#include <poppack.h>
enum tagSMINFOMASK
{
	SMIM_TYPE = 0x1,
	SMIM_FLAGS = 0x2,
	SMIM_ICON = 0x4
};
enum tagSMINFOTYPE
{
	SMIT_SEPARATOR = 0x1,
	SMIT_STRING = 0x2
};
enum tagSMINFOFLAGS
{
	SMIF_ICON = 0x1,
	SMIF_ACCELERATOR = 0x2,
	SMIF_DROPTARGET = 0x4,
	SMIF_SUBMENU = 0x8,
	SMIF_CHECKED = 0x20,
	SMIF_DROPCASCADE = 0x40,
	SMIF_HIDDEN = 0x80,
	SMIF_DISABLED = 0x100,
	SMIF_TRACKPOPUP = 0x200,
	SMIF_DEMOTED = 0x400,
	SMIF_ALTSTATE = 0x800,
	SMIF_DRAGNDROP = 0x1000,
	SMIF_NEW = 0x2000
};
#define SMC_INITMENU            0x00000001
#define SMC_CREATE              0x00000002
#define SMC_EXITMENU            0x00000003
#define SMC_GETINFO             0x00000005
#define SMC_GETSFINFO           0x00000006
#define SMC_GETOBJECT           0x00000007
#define SMC_GETSFOBJECT         0x00000008
#define SMC_SFEXEC              0x00000009
#define SMC_SFSELECTITEM        0x0000000A
#define SMC_REFRESH             0x00000010
#define SMC_DEMOTE              0x00000011
#define SMC_PROMOTE             0x00000012
#define SMC_DEFAULTICON         0x00000016
#define SMC_NEWITEM             0x00000017
#define SMC_CHEVRONEXPAND       0x00000019
#define SMC_DISPLAYCHEVRONTIP   0x0000002A
#define SMC_SETSFOBJECT         0x0000002D
#define SMC_SHCHANGENOTIFY      0x0000002E
#define SMC_CHEVRONGETTIP       0x0000002F
#define SMC_SFDDRESTRICTED      0x00000030
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SMC_SFEXEC_MIDDLE       0x00000031
#define SMC_GETAUTOEXPANDSTATE  0x00000041
#define SMC_AUTOEXPANDCHANGE    0x00000042
#define SMC_GETCONTEXTMENUMODIFIER 0x00000043
#define SMC_GETBKCONTEXTMENU    0x00000044
#define SMC_OPEN                0x00000045
#define SMAE_EXPANDED           0x00000001
#define SMAE_CONTRACTED         0x00000002
#define SMAE_USER               0x00000004
#define SMAE_VALID              0x00000007
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0142_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0142_v0_0_s_ifspec;
#ifndef __IShellMenuCallback_INTERFACE_DEFINED__
#define __IShellMenuCallback_INTERFACE_DEFINED__
extern const IID IID_IShellMenuCallback;
typedef struct IShellMenuCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellMenuCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellMenuCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellMenuCallback * This);
	HRESULT(STDMETHODCALLTYPE * CallbackSM) (IShellMenuCallback * This, LPSMDATA psmd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	END_INTERFACE
}  IShellMenuCallbackVtbl;
interface IShellMenuCallback
{
	CONST_VTBL struct IShellMenuCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellMenuCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellMenuCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellMenuCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellMenuCallback_CallbackSM(This,psmd,uMsg,wParam,lParam)( (This)->lpVtbl -> CallbackSM(This,psmd,uMsg,wParam,lParam) )
#endif
#endif
#define SMINIT_DEFAULT              0x00000000
#define SMINIT_RESTRICT_DRAGDROP    0x00000002
#define SMINIT_TOPLEVEL             0x00000004
#define SMINIT_CACHED               0x00000010
#if (_WIN32_IE >= _WIN32_IE_IE70)
#define SMINIT_AUTOEXPAND           0x00000100
#define SMINIT_AUTOTOOLTIP          0x00000200
#define SMINIT_DROPONCONTAINER      0x00000400
#endif
#define SMINIT_VERTICAL             0x10000000
#define SMINIT_HORIZONTAL           0x20000000
#define ANCESTORDEFAULT      (UINT)-1
#define SMSET_TOP                   0x10000000
#define SMSET_BOTTOM                0x20000000
#define SMSET_DONTOWN               0x00000001
#define SMINV_REFRESH        0x00000001
#define SMINV_ID             0x00000008
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0143_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0143_v0_0_s_ifspec;
#ifndef __IShellMenu_INTERFACE_DEFINED__
#define __IShellMenu_INTERFACE_DEFINED__
extern const IID IID_IShellMenu;
typedef struct IShellMenuVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellMenu * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellMenu * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellMenu * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IShellMenu * This, IShellMenuCallback * psmc, UINT uId, UINT uIdAncestor, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetMenuInfo) (IShellMenu * This, IShellMenuCallback ** ppsmc, UINT * puId, UINT * puIdAncestor, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * SetShellFolder) (IShellMenu * This, IShellFolder * psf, PCIDLIST_ABSOLUTE pidlFolder, HKEY hKey, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetShellFolder) (IShellMenu * This, DWORD * pdwFlags, PIDLIST_ABSOLUTE * ppidl, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * SetMenu) (IShellMenu * This, HMENU hmenu, HWND hwnd, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetMenu) (IShellMenu * This, HMENU * phmenu, HWND * phwnd, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * InvalidateItem) (IShellMenu * This, LPSMDATA psmd, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetState) (IShellMenu * This, LPSMDATA psmd);
	HRESULT(STDMETHODCALLTYPE * SetMenuToolbar) (IShellMenu * This, IUnknown * punk, DWORD dwFlags);
	END_INTERFACE
}  IShellMenuVtbl;
interface IShellMenu
{
	CONST_VTBL struct IShellMenuVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellMenu_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellMenu_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellMenu_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellMenu_Initialize(This,psmc,uId,uIdAncestor,dwFlags)( (This)->lpVtbl -> Initialize(This,psmc,uId,uIdAncestor,dwFlags) )
#define IShellMenu_GetMenuInfo(This,ppsmc,puId,puIdAncestor,pdwFlags)( (This)->lpVtbl -> GetMenuInfo(This,ppsmc,puId,puIdAncestor,pdwFlags) )
#define IShellMenu_SetShellFolder(This,psf,pidlFolder,hKey,dwFlags)( (This)->lpVtbl -> SetShellFolder(This,psf,pidlFolder,hKey,dwFlags) )
#define IShellMenu_GetShellFolder(This,pdwFlags,ppidl,riid,ppv)( (This)->lpVtbl -> GetShellFolder(This,pdwFlags,ppidl,riid,ppv) )
#define IShellMenu_SetMenu(This,hmenu,hwnd,dwFlags)( (This)->lpVtbl -> SetMenu(This,hmenu,hwnd,dwFlags) )
#define IShellMenu_GetMenu(This,phmenu,phwnd,pdwFlags)( (This)->lpVtbl -> GetMenu(This,phmenu,phwnd,pdwFlags) )
#define IShellMenu_InvalidateItem(This,psmd,dwFlags)( (This)->lpVtbl -> InvalidateItem(This,psmd,dwFlags) )
#define IShellMenu_GetState(This,psmd)( (This)->lpVtbl -> GetState(This,psmd) )
#define IShellMenu_SetMenuToolbar(This,punk,dwFlags)( (This)->lpVtbl -> SetMenuToolbar(This,punk,dwFlags) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0144_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0144_v0_0_s_ifspec;
#ifndef __IShellRunDll_INTERFACE_DEFINED__
#define __IShellRunDll_INTERFACE_DEFINED__
extern const IID IID_IShellRunDll;
typedef struct IShellRunDllVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellRunDll * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellRunDll * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellRunDll * This);
	HRESULT(STDMETHODCALLTYPE * Run) (IShellRunDll * This, LPCWSTR pszArgs);
	END_INTERFACE
}  IShellRunDllVtbl;
interface IShellRunDll
{
	CONST_VTBL struct IShellRunDllVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellRunDll_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellRunDll_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellRunDll_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellRunDll_Run(This,pszArgs)( (This)->lpVtbl -> Run(This,pszArgs) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef enum KF_CATEGORY
{
	KF_CATEGORY_VIRTUAL = 1,
	KF_CATEGORY_FIXED = 2,
	KF_CATEGORY_COMMON = 3,
	KF_CATEGORY_PERUSER = 4
} KF_CATEGORY;
enum _KF_DEFINITION_FLAGS
{
	KFDF_LOCAL_REDIRECT_ONLY = 0x2,
	KFDF_ROAMABLE = 0x4,
	KFDF_PRECREATE = 0x8,
	KFDF_STREAM = 0x10,
	KFDF_PUBLISHEXPANDEDPATH = 0x20
};
typedef DWORD KF_DEFINITION_FLAGS;
enum _KF_REDIRECT_FLAGS
{
	KF_REDIRECT_USER_EXCLUSIVE = 0x1,
	KF_REDIRECT_COPY_SOURCE_DACL = 0x2,
	KF_REDIRECT_OWNER_USER = 0x4,
	KF_REDIRECT_SET_OWNER_EXPLICIT = 0x8,
	KF_REDIRECT_CHECK_ONLY = 0x10,
	KF_REDIRECT_WITH_UI = 0x20,
	KF_REDIRECT_UNPIN = 0x40,
	KF_REDIRECT_PIN = 0x80,
	KF_REDIRECT_COPY_CONTENTS = 0x200,
	KF_REDIRECT_DEL_SOURCE_CONTENTS = 0x400,
	KF_REDIRECT_EXCLUDE_ALL_KNOWN_SUBFOLDERS = 0x800
};
typedef DWORD KF_REDIRECT_FLAGS;
enum _KF_REDIRECTION_CAPABILITIES
{
	KF_REDIRECTION_CAPABILITIES_ALLOW_ALL = 0xff,
	KF_REDIRECTION_CAPABILITIES_REDIRECTABLE = 0x1,
	KF_REDIRECTION_CAPABILITIES_DENY_ALL = 0xfff00,
	KF_REDIRECTION_CAPABILITIES_DENY_POLICY_REDIRECTED = 0x100,
	KF_REDIRECTION_CAPABILITIES_DENY_POLICY = 0x200,
	KF_REDIRECTION_CAPABILITIES_DENY_PERMISSIONS = 0x400
};
typedef DWORD KF_REDIRECTION_CAPABILITIES;
typedef struct KNOWNFOLDER_DEFINITION
{
	KF_CATEGORY category;
	LPWSTR pszName;
	LPWSTR pszDescription;
	KNOWNFOLDERID fidParent;
	LPWSTR pszRelativePath;
	LPWSTR pszParsingName;
	LPWSTR pszTooltip;
	LPWSTR pszLocalizedName;
	LPWSTR pszIcon;
	LPWSTR pszSecurity;
	DWORD dwAttributes;
	KF_DEFINITION_FLAGS kfdFlags;
	FOLDERTYPEID ftidType;
} KNOWNFOLDER_DEFINITION;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0145_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0145_v0_0_s_ifspec;
#ifndef __IKnownFolder_INTERFACE_DEFINED__
#define __IKnownFolder_INTERFACE_DEFINED__
extern const IID IID_IKnownFolder;
typedef struct IKnownFolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IKnownFolder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IKnownFolder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IKnownFolder * This);
	HRESULT(STDMETHODCALLTYPE * GetId) (IKnownFolder * This, KNOWNFOLDERID * pkfid);
	HRESULT(STDMETHODCALLTYPE * GetCategory) (IKnownFolder * This, KF_CATEGORY * pCategory);
	HRESULT(STDMETHODCALLTYPE * GetShellItem) (IKnownFolder * This, DWORD dwFlags, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetPath) (IKnownFolder * This, DWORD dwFlags, LPWSTR * ppszPath);
	HRESULT(STDMETHODCALLTYPE * SetPath) (IKnownFolder * This, DWORD dwFlags, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * GetIDList) (IKnownFolder * This, DWORD dwFlags, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * GetFolderType) (IKnownFolder * This, FOLDERTYPEID * pftid);
	HRESULT(STDMETHODCALLTYPE * GetRedirectionCapabilities) (IKnownFolder * This, KF_REDIRECTION_CAPABILITIES * pCapabilities);
	HRESULT(STDMETHODCALLTYPE * GetFolderDefinition) (IKnownFolder * This, KNOWNFOLDER_DEFINITION * pKFD);
	END_INTERFACE
}  IKnownFolderVtbl;
interface IKnownFolder
{
	CONST_VTBL struct IKnownFolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IKnownFolder_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IKnownFolder_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IKnownFolder_Release(This)( (This)->lpVtbl -> Release(This) )
#define IKnownFolder_GetId(This,pkfid)( (This)->lpVtbl -> GetId(This,pkfid) )
#define IKnownFolder_GetCategory(This,pCategory)( (This)->lpVtbl -> GetCategory(This,pCategory) )
#define IKnownFolder_GetShellItem(This,dwFlags,riid,ppv)( (This)->lpVtbl -> GetShellItem(This,dwFlags,riid,ppv) )
#define IKnownFolder_GetPath(This,dwFlags,ppszPath)( (This)->lpVtbl -> GetPath(This,dwFlags,ppszPath) )
#define IKnownFolder_SetPath(This,dwFlags,pszPath)( (This)->lpVtbl -> SetPath(This,dwFlags,pszPath) )
#define IKnownFolder_GetIDList(This,dwFlags,ppidl)( (This)->lpVtbl -> GetIDList(This,dwFlags,ppidl) )
#define IKnownFolder_GetFolderType(This,pftid)( (This)->lpVtbl -> GetFolderType(This,pftid) )
#define IKnownFolder_GetRedirectionCapabilities(This,pCapabilities)( (This)->lpVtbl -> GetRedirectionCapabilities(This,pCapabilities) )
#define IKnownFolder_GetFolderDefinition(This,pKFD)( (This)->lpVtbl -> GetFolderDefinition(This,pKFD) )
#endif
#endif
#ifndef __IKnownFolderManager_INTERFACE_DEFINED__
#define __IKnownFolderManager_INTERFACE_DEFINED__
typedef enum FFFP_MODE
{
FFFP_EXACTMATCH = 0,
	FFFP_NEARESTPARENTMATCH = (FFFP_EXACTMATCH + 1)
} FFFP_MODE;
extern const IID IID_IKnownFolderManager;
typedef struct IKnownFolderManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IKnownFolderManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IKnownFolderManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IKnownFolderManager * This);
	HRESULT(STDMETHODCALLTYPE * FolderIdFromCsidl) (IKnownFolderManager * This, int nCsidl, KNOWNFOLDERID * pfid);
	HRESULT(STDMETHODCALLTYPE * FolderIdToCsidl) (IKnownFolderManager * This, REFKNOWNFOLDERID rfid, int *pnCsidl);
	HRESULT(STDMETHODCALLTYPE * GetFolderIds) (IKnownFolderManager * This, KNOWNFOLDERID ** ppKFId, UINT * pCount);
	HRESULT(STDMETHODCALLTYPE * GetFolder) (IKnownFolderManager * This, REFKNOWNFOLDERID rfid, IKnownFolder ** ppkf);
	HRESULT(STDMETHODCALLTYPE * GetFolderByName) (IKnownFolderManager * This, LPCWSTR pszCanonicalName, IKnownFolder ** ppkf);
	HRESULT(STDMETHODCALLTYPE * RegisterFolder) (IKnownFolderManager * This, REFKNOWNFOLDERID rfid, const KNOWNFOLDER_DEFINITION * pKFD);
	HRESULT(STDMETHODCALLTYPE * UnregisterFolder) (IKnownFolderManager * This, REFKNOWNFOLDERID rfid);
	HRESULT(STDMETHODCALLTYPE * FindFolderFromPath) (IKnownFolderManager * This, LPCWSTR pszPath, FFFP_MODE mode, IKnownFolder ** ppkf);
	HRESULT(STDMETHODCALLTYPE * FindFolderFromIDList) (IKnownFolderManager * This, PCIDLIST_ABSOLUTE pidl, IKnownFolder ** ppkf);
	HRESULT(STDMETHODCALLTYPE * Redirect) (IKnownFolderManager * This, REFKNOWNFOLDERID rfid, HWND hwnd, KF_REDIRECT_FLAGS flags, LPCWSTR pszTargetPath, UINT cFolders, const KNOWNFOLDERID * pExclusion, LPWSTR * ppszError);
	END_INTERFACE
}  IKnownFolderManagerVtbl;
interface IKnownFolderManager
{
	CONST_VTBL struct IKnownFolderManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IKnownFolderManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IKnownFolderManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IKnownFolderManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IKnownFolderManager_FolderIdFromCsidl(This,nCsidl,pfid)( (This)->lpVtbl -> FolderIdFromCsidl(This,nCsidl,pfid) )
#define IKnownFolderManager_FolderIdToCsidl(This,rfid,pnCsidl)( (This)->lpVtbl -> FolderIdToCsidl(This,rfid,pnCsidl) )
#define IKnownFolderManager_GetFolderIds(This,ppKFId,pCount)( (This)->lpVtbl -> GetFolderIds(This,ppKFId,pCount) )
#define IKnownFolderManager_GetFolder(This,rfid,ppkf)( (This)->lpVtbl -> GetFolder(This,rfid,ppkf) )
#define IKnownFolderManager_GetFolderByName(This,pszCanonicalName,ppkf)( (This)->lpVtbl -> GetFolderByName(This,pszCanonicalName,ppkf) )
#define IKnownFolderManager_RegisterFolder(This,rfid,pKFD)( (This)->lpVtbl -> RegisterFolder(This,rfid,pKFD) )
#define IKnownFolderManager_UnregisterFolder(This,rfid)( (This)->lpVtbl -> UnregisterFolder(This,rfid) )
#define IKnownFolderManager_FindFolderFromPath(This,pszPath,mode,ppkf)( (This)->lpVtbl -> FindFolderFromPath(This,pszPath,mode,ppkf) )
#define IKnownFolderManager_FindFolderFromIDList(This,pidl,ppkf)( (This)->lpVtbl -> FindFolderFromIDList(This,pidl,ppkf) )
#define IKnownFolderManager_Redirect(This,rfid,hwnd,flags,pszTargetPath,cFolders,pExclusion,ppszError)( (This)->lpVtbl -> Redirect(This,rfid,hwnd,flags,pszTargetPath,cFolders,pExclusion,ppszError) )
#endif
HRESULT STDMETHODCALLTYPE IKnownFolderManager_RemoteRedirect_Proxy(IKnownFolderManager * This, REFKNOWNFOLDERID rfid, HWND hwnd, KF_REDIRECT_FLAGS flags, LPCWSTR pszTargetPath, UINT cFolders, const GUID * pExclusion, LPWSTR * ppszError);
void __RPC_STUB IKnownFolderManager_RemoteRedirect_Stub(IRpcStubBuffer * This, IRpcChannelBuffer * _pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD * _pdwStubPhase);
#endif
__inline void FreeKnownFolderDefinitionFields(KNOWNFOLDER_DEFINITION *pKFD)
{
	CoTaskMemFree(pKFD->pszName);
	CoTaskMemFree(pKFD->pszDescription);
	CoTaskMemFree(pKFD->pszRelativePath);
	CoTaskMemFree(pKFD->pszParsingName);
	CoTaskMemFree(pKFD->pszTooltip);
	CoTaskMemFree(pKFD->pszLocalizedName);
	CoTaskMemFree(pKFD->pszIcon);
	CoTaskMemFree(pKFD->pszSecurity);
}
typedef enum SHARE_ROLE
{
	SHARE_ROLE_INVALID = -1,
	SHARE_ROLE_READER = 0,
	SHARE_ROLE_CONTRIBUTOR = 1,
	SHARE_ROLE_CO_OWNER = 2,
	SHARE_ROLE_OWNER = 3,
	SHARE_ROLE_CUSTOM = 4,
	SHARE_ROLE_MIXED = 5
} SHARE_ROLE;
typedef enum DEF_SHARE_ID
{
	DEFSHAREID_USERS = 1,
	DEFSHAREID_PUBLIC = 2
} DEF_SHARE_ID;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0147_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0147_v0_0_s_ifspec;
#ifndef __ISharingConfigurationManager_INTERFACE_DEFINED__
#define __ISharingConfigurationManager_INTERFACE_DEFINED__
extern const IID IID_ISharingConfigurationManager;
typedef struct ISharingConfigurationManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISharingConfigurationManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISharingConfigurationManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISharingConfigurationManager * This);
	HRESULT(STDMETHODCALLTYPE * CreateShare) (ISharingConfigurationManager * This, DEF_SHARE_ID dsid, SHARE_ROLE role);
	HRESULT(STDMETHODCALLTYPE * DeleteShare) (ISharingConfigurationManager * This, DEF_SHARE_ID dsid);
	HRESULT(STDMETHODCALLTYPE * ShareExists) (ISharingConfigurationManager * This, DEF_SHARE_ID dsid);
	HRESULT(STDMETHODCALLTYPE * GetSharePermissions) (ISharingConfigurationManager * This, DEF_SHARE_ID dsid, SHARE_ROLE * pRole);
	HRESULT(STDMETHODCALLTYPE * SharePrinters) (ISharingConfigurationManager * This);
	HRESULT(STDMETHODCALLTYPE * StopSharingPrinters) (ISharingConfigurationManager * This);
	HRESULT(STDMETHODCALLTYPE * ArePrintersShared) (ISharingConfigurationManager * This);
	END_INTERFACE
}  ISharingConfigurationManagerVtbl;
interface ISharingConfigurationManager
{
	CONST_VTBL struct ISharingConfigurationManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISharingConfigurationManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISharingConfigurationManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISharingConfigurationManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISharingConfigurationManager_CreateShare(This,dsid,role)( (This)->lpVtbl -> CreateShare(This,dsid,role) )
#define ISharingConfigurationManager_DeleteShare(This,dsid)( (This)->lpVtbl -> DeleteShare(This,dsid) )
#define ISharingConfigurationManager_ShareExists(This,dsid)( (This)->lpVtbl -> ShareExists(This,dsid) )
#define ISharingConfigurationManager_GetSharePermissions(This,dsid,pRole)( (This)->lpVtbl -> GetSharePermissions(This,dsid,pRole) )
#define ISharingConfigurationManager_SharePrinters(This)( (This)->lpVtbl -> SharePrinters(This) )
#define ISharingConfigurationManager_StopSharingPrinters(This)( (This)->lpVtbl -> StopSharingPrinters(This) )
#define ISharingConfigurationManager_ArePrintersShared(This)( (This)->lpVtbl -> ArePrintersShared(This) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0148_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0148_v0_0_s_ifspec;
#ifndef __IPreviousVersionsInfo_INTERFACE_DEFINED__
#define __IPreviousVersionsInfo_INTERFACE_DEFINED__
extern const IID IID_IPreviousVersionsInfo;
typedef struct IPreviousVersionsInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPreviousVersionsInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPreviousVersionsInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPreviousVersionsInfo * This);
	HRESULT(STDMETHODCALLTYPE * AreSnapshotsAvailable) (IPreviousVersionsInfo * This, LPCWSTR pszPath, BOOL fOkToBeSlow, BOOL * pfAvailable);
	END_INTERFACE
}  IPreviousVersionsInfoVtbl;
interface IPreviousVersionsInfo
{
	CONST_VTBL struct IPreviousVersionsInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPreviousVersionsInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPreviousVersionsInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPreviousVersionsInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPreviousVersionsInfo_AreSnapshotsAvailable(This,pszPath,fOkToBeSlow,pfAvailable)( (This)->lpVtbl -> AreSnapshotsAvailable(This,pszPath,fOkToBeSlow,pfAvailable) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0149_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0149_v0_0_s_ifspec;
#ifndef __IRelatedItem_INTERFACE_DEFINED__
#define __IRelatedItem_INTERFACE_DEFINED__
extern const IID IID_IRelatedItem;
typedef struct IRelatedItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRelatedItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRelatedItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRelatedItem * This);
	HRESULT(STDMETHODCALLTYPE * GetItemIDList) (IRelatedItem * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IRelatedItem * This, IShellItem ** ppsi);
	END_INTERFACE
}  IRelatedItemVtbl;
interface IRelatedItem
{
	CONST_VTBL struct IRelatedItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRelatedItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRelatedItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IRelatedItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IRelatedItem_GetItemIDList(This,ppidl)( (This)->lpVtbl -> GetItemIDList(This,ppidl) )
#define IRelatedItem_GetItem(This,ppsi)( (This)->lpVtbl -> GetItem(This,ppsi) )
#endif
#endif
#ifndef __IIdentityName_INTERFACE_DEFINED__
#define __IIdentityName_INTERFACE_DEFINED__
extern const IID IID_IIdentityName;
typedef struct IIdentityNameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIdentityName * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIdentityName * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIdentityName * This);
	HRESULT(STDMETHODCALLTYPE * GetItemIDList) (IIdentityName * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IIdentityName * This, IShellItem ** ppsi);
	END_INTERFACE
}  IIdentityNameVtbl;
interface IIdentityName
{
	CONST_VTBL struct IIdentityNameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIdentityName_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IIdentityName_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IIdentityName_Release(This)( (This)->lpVtbl -> Release(This) )
#define IIdentityName_GetItemIDList(This,ppidl)( (This)->lpVtbl -> GetItemIDList(This,ppidl) )
#define IIdentityName_GetItem(This,ppsi)( (This)->lpVtbl -> GetItem(This,ppsi) )
#endif
#endif
#ifndef __IDelegateItem_INTERFACE_DEFINED__
#define __IDelegateItem_INTERFACE_DEFINED__
extern const IID IID_IDelegateItem;
typedef struct IDelegateItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDelegateItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDelegateItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDelegateItem * This);
	HRESULT(STDMETHODCALLTYPE * GetItemIDList) (IDelegateItem * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IDelegateItem * This, IShellItem ** ppsi);
	END_INTERFACE
}  IDelegateItemVtbl;
interface IDelegateItem
{
	CONST_VTBL struct IDelegateItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDelegateItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDelegateItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDelegateItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDelegateItem_GetItemIDList(This,ppidl)( (This)->lpVtbl -> GetItemIDList(This,ppidl) )
#define IDelegateItem_GetItem(This,ppsi)( (This)->lpVtbl -> GetItem(This,ppsi) )
#endif
#endif
#ifndef __ICurrentItem_INTERFACE_DEFINED__
#define __ICurrentItem_INTERFACE_DEFINED__
extern const IID IID_ICurrentItem;
typedef struct ICurrentItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICurrentItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICurrentItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICurrentItem * This);
	HRESULT(STDMETHODCALLTYPE * GetItemIDList) (ICurrentItem * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * GetItem) (ICurrentItem * This, IShellItem ** ppsi);
	END_INTERFACE
}  ICurrentItemVtbl;
interface ICurrentItem
{
	CONST_VTBL struct ICurrentItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICurrentItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICurrentItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICurrentItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICurrentItem_GetItemIDList(This,ppidl)( (This)->lpVtbl -> GetItemIDList(This,ppidl) )
#define ICurrentItem_GetItem(This,ppsi)( (This)->lpVtbl -> GetItem(This,ppsi) )
#endif
#endif
#ifndef __ITransferMediumItem_INTERFACE_DEFINED__
#define __ITransferMediumItem_INTERFACE_DEFINED__
extern const IID IID_ITransferMediumItem;
typedef struct ITransferMediumItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransferMediumItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransferMediumItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransferMediumItem * This);
	HRESULT(STDMETHODCALLTYPE * GetItemIDList) (ITransferMediumItem * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * GetItem) (ITransferMediumItem * This, IShellItem ** ppsi);
	END_INTERFACE
}  ITransferMediumItemVtbl;
interface ITransferMediumItem
{
	CONST_VTBL struct ITransferMediumItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransferMediumItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransferMediumItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransferMediumItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransferMediumItem_GetItemIDList(This,ppidl)( (This)->lpVtbl -> GetItemIDList(This,ppidl) )
#define ITransferMediumItem_GetItem(This,ppsi)( (This)->lpVtbl -> GetItem(This,ppsi) )
#endif
#endif
#ifndef __IUseToBrowseItem_INTERFACE_DEFINED__
#define __IUseToBrowseItem_INTERFACE_DEFINED__
extern const IID IID_IUseToBrowseItem;
typedef struct IUseToBrowseItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUseToBrowseItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUseToBrowseItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUseToBrowseItem * This);
	HRESULT(STDMETHODCALLTYPE * GetItemIDList) (IUseToBrowseItem * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IUseToBrowseItem * This, IShellItem ** ppsi);
	END_INTERFACE
}  IUseToBrowseItemVtbl;
interface IUseToBrowseItem
{
	CONST_VTBL struct IUseToBrowseItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUseToBrowseItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUseToBrowseItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IUseToBrowseItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IUseToBrowseItem_GetItemIDList(This,ppidl)( (This)->lpVtbl -> GetItemIDList(This,ppidl) )
#define IUseToBrowseItem_GetItem(This,ppsi)( (This)->lpVtbl -> GetItem(This,ppsi) )
#endif
#endif
#ifndef __IDisplayItem_INTERFACE_DEFINED__
#define __IDisplayItem_INTERFACE_DEFINED__
extern const IID IID_IDisplayItem;
typedef struct IDisplayItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDisplayItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDisplayItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDisplayItem * This);
	HRESULT(STDMETHODCALLTYPE * GetItemIDList) (IDisplayItem * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IDisplayItem * This, IShellItem ** ppsi);
	END_INTERFACE
}  IDisplayItemVtbl;
interface IDisplayItem
{
	CONST_VTBL struct IDisplayItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDisplayItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDisplayItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDisplayItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDisplayItem_GetItemIDList(This,ppidl)( (This)->lpVtbl -> GetItemIDList(This,ppidl) )
#define IDisplayItem_GetItem(This,ppsi)( (This)->lpVtbl -> GetItem(This,ppsi) )
#endif
#endif
#ifndef __IViewStateIdentityItem_INTERFACE_DEFINED__
#define __IViewStateIdentityItem_INTERFACE_DEFINED__
extern const IID IID_IViewStateIdentityItem;
typedef struct IViewStateIdentityItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IViewStateIdentityItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IViewStateIdentityItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IViewStateIdentityItem * This);
	HRESULT(STDMETHODCALLTYPE * GetItemIDList) (IViewStateIdentityItem * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IViewStateIdentityItem * This, IShellItem ** ppsi);
	END_INTERFACE
}  IViewStateIdentityItemVtbl;
interface IViewStateIdentityItem
{
	CONST_VTBL struct IViewStateIdentityItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IViewStateIdentityItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IViewStateIdentityItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IViewStateIdentityItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IViewStateIdentityItem_GetItemIDList(This,ppidl)( (This)->lpVtbl -> GetItemIDList(This,ppidl) )
#define IViewStateIdentityItem_GetItem(This,ppsi)( (This)->lpVtbl -> GetItem(This,ppsi) )
#endif
#endif
#ifndef __IPreviewItem_INTERFACE_DEFINED__
#define __IPreviewItem_INTERFACE_DEFINED__
extern const IID IID_IPreviewItem;
typedef struct IPreviewItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPreviewItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPreviewItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPreviewItem * This);
	HRESULT(STDMETHODCALLTYPE * GetItemIDList) (IPreviewItem * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IPreviewItem * This, IShellItem ** ppsi);
	END_INTERFACE
}  IPreviewItemVtbl;
interface IPreviewItem
{
	CONST_VTBL struct IPreviewItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPreviewItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPreviewItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPreviewItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPreviewItem_GetItemIDList(This,ppidl)( (This)->lpVtbl -> GetItemIDList(This,ppidl) )
#define IPreviewItem_GetItem(This,ppsi)( (This)->lpVtbl -> GetItem(This,ppsi) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0158_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0158_v0_0_s_ifspec;
#ifndef __IDestinationStreamFactory_INTERFACE_DEFINED__
#define __IDestinationStreamFactory_INTERFACE_DEFINED__
extern const IID IID_IDestinationStreamFactory;
typedef struct IDestinationStreamFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDestinationStreamFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDestinationStreamFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDestinationStreamFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetDestinationStream) (IDestinationStreamFactory * This, IStream ** ppstm);
	END_INTERFACE
}  IDestinationStreamFactoryVtbl;
interface IDestinationStreamFactory
{
	CONST_VTBL struct IDestinationStreamFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDestinationStreamFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDestinationStreamFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDestinationStreamFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDestinationStreamFactory_GetDestinationStream(This,ppstm)( (This)->lpVtbl -> GetDestinationStream(This,ppstm) )
#endif
#endif
enum _NMCII_FLAGS
{
	NMCII_ITEMS = 0x1,
	NMCII_FOLDERS = 0x2
};
typedef int NMCII_FLAGS;
enum _NMCSAEI_FLAGS
{
	NMCSAEI_SELECT = 0,
	NMCSAEI_EDIT = 0x1
};
typedef int NMCSAEI_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0159_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0159_v0_0_s_ifspec;
#ifndef __INewMenuClient_INTERFACE_DEFINED__
#define __INewMenuClient_INTERFACE_DEFINED__
extern const IID IID_INewMenuClient;
typedef struct INewMenuClientVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INewMenuClient * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INewMenuClient * This);
	ULONG(STDMETHODCALLTYPE * Release) (INewMenuClient * This);
	HRESULT(STDMETHODCALLTYPE * IncludeItems) (INewMenuClient * This, NMCII_FLAGS * pflags);
	HRESULT(STDMETHODCALLTYPE * SelectAndEditItem) (INewMenuClient * This, PCIDLIST_ABSOLUTE pidlItem, NMCSAEI_FLAGS flags);
	END_INTERFACE
}  INewMenuClientVtbl;
interface INewMenuClient
{
	CONST_VTBL struct INewMenuClientVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INewMenuClient_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INewMenuClient_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INewMenuClient_Release(This)( (This)->lpVtbl -> Release(This) )
#define INewMenuClient_IncludeItems(This,pflags)( (This)->lpVtbl -> IncludeItems(This,pflags) )
#define INewMenuClient_SelectAndEditItem(This,pidlItem,flags)( (This)->lpVtbl -> SelectAndEditItem(This,pidlItem,flags) )
#endif
#endif
#define SID_SNewMenuClient   IID_INewMenuClient
DEFINE_GUID(SID_SCommandBarState, 0xB99EAA5C, 0x3850, 0x4400, 0xBC, 0x33, 0x2C, 0xE5, 0x34, 0x04, 0x8B, 0xF8);
#if (_WIN32_IE >= _WIN32_IE_IE70)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0160_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0160_v0_0_s_ifspec;
#ifndef __IInitializeWithBindCtx_INTERFACE_DEFINED__
#define __IInitializeWithBindCtx_INTERFACE_DEFINED__
extern const IID IID_IInitializeWithBindCtx;
typedef struct IInitializeWithBindCtxVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInitializeWithBindCtx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInitializeWithBindCtx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInitializeWithBindCtx * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IInitializeWithBindCtx * This, IBindCtx * pbc);
	END_INTERFACE
}  IInitializeWithBindCtxVtbl;
interface IInitializeWithBindCtx
{
	CONST_VTBL struct IInitializeWithBindCtxVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInitializeWithBindCtx_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInitializeWithBindCtx_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInitializeWithBindCtx_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInitializeWithBindCtx_Initialize(This,pbc)( (This)->lpVtbl -> Initialize(This,pbc) )
#endif
#endif
#ifndef __IShellItemFilter_INTERFACE_DEFINED__
#define __IShellItemFilter_INTERFACE_DEFINED__
extern const IID IID_IShellItemFilter;
typedef struct IShellItemFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellItemFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellItemFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellItemFilter * This);
	HRESULT(STDMETHODCALLTYPE * IncludeItem) (IShellItemFilter * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * GetEnumFlagsForItem) (IShellItemFilter * This, IShellItem * psi, SHCONTF * pgrfFlags);
	END_INTERFACE
}  IShellItemFilterVtbl;
interface IShellItemFilter
{
	CONST_VTBL struct IShellItemFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellItemFilter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellItemFilter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellItemFilter_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellItemFilter_IncludeItem(This,psi)( (This)->lpVtbl -> IncludeItem(This,psi) )
#define IShellItemFilter_GetEnumFlagsForItem(This,psi,pgrfFlags)( (This)->lpVtbl -> GetEnumFlagsForItem(This,psi,pgrfFlags) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0162_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0162_v0_0_s_ifspec;
#ifndef __INameSpaceTreeControl_INTERFACE_DEFINED__
#define __INameSpaceTreeControl_INTERFACE_DEFINED__
enum _NSTCSTYLE
{
	NSTCS_HASEXPANDOS = 0x1,
	NSTCS_HASLINES = 0x2,
	NSTCS_SINGLECLICKEXPAND = 0x4,
	NSTCS_FULLROWSELECT = 0x8,
	NSTCS_SPRINGEXPAND = 0x10,
	NSTCS_HORIZONTALSCROLL = 0x20,
	NSTCS_ROOTHASEXPANDO = 0x40,
	NSTCS_SHOWSELECTIONALWAYS = 0x80,
	NSTCS_NOINFOTIP = 0x200,
	NSTCS_EVENHEIGHT = 0x400,
	NSTCS_NOREPLACEOPEN = 0x800,
	NSTCS_DISABLEDRAGDROP = 0x1000,
	NSTCS_NOORDERSTREAM = 0x2000,
	NSTCS_RICHTOOLTIP = 0x4000,
	NSTCS_BORDER = 0x8000,
	NSTCS_NOEDITLABELS = 0x10000,
	NSTCS_TABSTOP = 0x20000,
	NSTCS_FAVORITESMODE = 0x80000,
	NSTCS_AUTOHSCROLL = 0x100000,
	NSTCS_FADEINOUTEXPANDOS = 0x200000,
	NSTCS_EMPTYTEXT = 0x400000,
	NSTCS_CHECKBOXES = 0x800000,
	NSTCS_PARTIALCHECKBOXES = 0x1000000,
	NSTCS_EXCLUSIONCHECKBOXES = 0x2000000,
	NSTCS_DIMMEDCHECKBOXES = 0x4000000,
	NSTCS_NOINDENTCHECKS = 0x8000000,
	NSTCS_ALLOWJUNCTIONS = 0x10000000,
	NSTCS_SHOWTABSBUTTON = 0x20000000,
	NSTCS_SHOWDELETEBUTTON = 0x40000000,
	NSTCS_SHOWREFRESHBUTTON = (int)0x80000000
};
typedef DWORD NSTCSTYLE;
enum _NSTCROOTSTYLE
{
	NSTCRS_VISIBLE = 0,
	NSTCRS_HIDDEN = 0x1,
	NSTCRS_EXPANDED = 0x2
};
typedef DWORD NSTCROOTSTYLE;
enum _NSTCITEMSTATE
{
	NSTCIS_NONE = 0,
	NSTCIS_SELECTED = 0x1,
	NSTCIS_EXPANDED = 0x2,
	NSTCIS_BOLD = 0x4,
	NSTCIS_DISABLED = 0x8,
	NSTCIS_SELECTEDNOEXPAND = 0x10
};
typedef DWORD NSTCITEMSTATE;
typedef enum NSTCGNI
{
	NSTCGNI_NEXT = 0,
	NSTCGNI_NEXTVISIBLE = 1,
	NSTCGNI_PREV = 2,
	NSTCGNI_PREVVISIBLE = 3,
	NSTCGNI_PARENT = 4,
	NSTCGNI_CHILD = 5,
	NSTCGNI_FIRSTVISIBLE = 6,
	NSTCGNI_LASTVISIBLE = 7
} NSTCGNI;
extern const IID IID_INameSpaceTreeControl;
typedef struct INameSpaceTreeControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INameSpaceTreeControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INameSpaceTreeControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (INameSpaceTreeControl * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (INameSpaceTreeControl * This, HWND hwndParent, RECT * prc, NSTCSTYLE nsctsFlags);
	HRESULT(STDMETHODCALLTYPE * TreeAdvise) (INameSpaceTreeControl * This, IUnknown * punk, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * TreeUnadvise) (INameSpaceTreeControl * This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * AppendRoot) (INameSpaceTreeControl * This, IShellItem * psiRoot, SHCONTF grfEnumFlags, NSTCROOTSTYLE grfRootStyle, IShellItemFilter * pif);
	HRESULT(STDMETHODCALLTYPE * InsertRoot) (INameSpaceTreeControl * This, int iIndex, IShellItem * psiRoot, SHCONTF grfEnumFlags, NSTCROOTSTYLE grfRootStyle, IShellItemFilter * pif);
	HRESULT(STDMETHODCALLTYPE * RemoveRoot) (INameSpaceTreeControl * This, IShellItem * psiRoot);
	HRESULT(STDMETHODCALLTYPE * RemoveAllRoots) (INameSpaceTreeControl * This);
	HRESULT(STDMETHODCALLTYPE * GetRootItems) (INameSpaceTreeControl * This, IShellItemArray ** ppsiaRootItems);
	HRESULT(STDMETHODCALLTYPE * SetItemState) (INameSpaceTreeControl * This, IShellItem * psi, NSTCITEMSTATE nstcisMask, NSTCITEMSTATE nstcisFlags);
	HRESULT(STDMETHODCALLTYPE * GetItemState) (INameSpaceTreeControl * This, IShellItem * psi, NSTCITEMSTATE nstcisMask, NSTCITEMSTATE * pnstcisFlags);
	HRESULT(STDMETHODCALLTYPE * GetSelectedItems) (INameSpaceTreeControl * This, IShellItemArray ** psiaItems);
	HRESULT(STDMETHODCALLTYPE * GetItemCustomState) (INameSpaceTreeControl * This, IShellItem * psi, int *piStateNumber);
	HRESULT(STDMETHODCALLTYPE * SetItemCustomState) (INameSpaceTreeControl * This, IShellItem * psi, int iStateNumber);
	HRESULT(STDMETHODCALLTYPE * EnsureItemVisible) (INameSpaceTreeControl * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * SetTheme) (INameSpaceTreeControl * This, LPCWSTR pszTheme);
	HRESULT(STDMETHODCALLTYPE * GetNextItem) (INameSpaceTreeControl * This, IShellItem * psi, NSTCGNI nstcgi, IShellItem ** ppsiNext);
	HRESULT(STDMETHODCALLTYPE * HitTest) (INameSpaceTreeControl * This, POINT * ppt, IShellItem ** ppsiOut);
	HRESULT(STDMETHODCALLTYPE * GetItemRect) (INameSpaceTreeControl * This, IShellItem * psi, RECT * prect);
	HRESULT(STDMETHODCALLTYPE * CollapseAll) (INameSpaceTreeControl * This);
	END_INTERFACE
}  INameSpaceTreeControlVtbl;
interface INameSpaceTreeControl
{
	CONST_VTBL struct INameSpaceTreeControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INameSpaceTreeControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INameSpaceTreeControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INameSpaceTreeControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define INameSpaceTreeControl_Initialize(This,hwndParent,prc,nsctsFlags)( (This)->lpVtbl -> Initialize(This,hwndParent,prc,nsctsFlags) )
#define INameSpaceTreeControl_TreeAdvise(This,punk,pdwCookie)( (This)->lpVtbl -> TreeAdvise(This,punk,pdwCookie) )
#define INameSpaceTreeControl_TreeUnadvise(This,dwCookie)( (This)->lpVtbl -> TreeUnadvise(This,dwCookie) )
#define INameSpaceTreeControl_AppendRoot(This,psiRoot,grfEnumFlags,grfRootStyle,pif)( (This)->lpVtbl -> AppendRoot(This,psiRoot,grfEnumFlags,grfRootStyle,pif) )
#define INameSpaceTreeControl_InsertRoot(This,iIndex,psiRoot,grfEnumFlags,grfRootStyle,pif)( (This)->lpVtbl -> InsertRoot(This,iIndex,psiRoot,grfEnumFlags,grfRootStyle,pif) )
#define INameSpaceTreeControl_RemoveRoot(This,psiRoot)( (This)->lpVtbl -> RemoveRoot(This,psiRoot) )
#define INameSpaceTreeControl_RemoveAllRoots(This)( (This)->lpVtbl -> RemoveAllRoots(This) )
#define INameSpaceTreeControl_GetRootItems(This,ppsiaRootItems)( (This)->lpVtbl -> GetRootItems(This,ppsiaRootItems) )
#define INameSpaceTreeControl_SetItemState(This,psi,nstcisMask,nstcisFlags)( (This)->lpVtbl -> SetItemState(This,psi,nstcisMask,nstcisFlags) )
#define INameSpaceTreeControl_GetItemState(This,psi,nstcisMask,pnstcisFlags)( (This)->lpVtbl -> GetItemState(This,psi,nstcisMask,pnstcisFlags) )
#define INameSpaceTreeControl_GetSelectedItems(This,psiaItems)( (This)->lpVtbl -> GetSelectedItems(This,psiaItems) )
#define INameSpaceTreeControl_GetItemCustomState(This,psi,piStateNumber)( (This)->lpVtbl -> GetItemCustomState(This,psi,piStateNumber) )
#define INameSpaceTreeControl_SetItemCustomState(This,psi,iStateNumber)( (This)->lpVtbl -> SetItemCustomState(This,psi,iStateNumber) )
#define INameSpaceTreeControl_EnsureItemVisible(This,psi)( (This)->lpVtbl -> EnsureItemVisible(This,psi) )
#define INameSpaceTreeControl_SetTheme(This,pszTheme)( (This)->lpVtbl -> SetTheme(This,pszTheme) )
#define INameSpaceTreeControl_GetNextItem(This,psi,nstcgi,ppsiNext)( (This)->lpVtbl -> GetNextItem(This,psi,nstcgi,ppsiNext) )
#define INameSpaceTreeControl_HitTest(This,ppt,ppsiOut)( (This)->lpVtbl -> HitTest(This,ppt,ppsiOut) )
#define INameSpaceTreeControl_GetItemRect(This,psi,prect)( (This)->lpVtbl -> GetItemRect(This,psi,prect) )
#define INameSpaceTreeControl_CollapseAll(This)( (This)->lpVtbl -> CollapseAll(This) )
#endif
#endif
#ifndef __INameSpaceTreeControl2_INTERFACE_DEFINED__
#define __INameSpaceTreeControl2_INTERFACE_DEFINED__
typedef enum NSTCSTYLE2
{
	NSTCS2_DEFAULT = 0,
	NSTCS2_INTERRUPTNOTIFICATIONS = 0x1,
	NSTCS2_SHOWNULLSPACEMENU = 0x2,
	NSTCS2_DISPLAYPADDING = 0x4,
	NSTCS2_DISPLAYPINNEDONLY = 0x8,
	NTSCS2_NOSINGLETONAUTOEXPAND = 0x10,
	NTSCS2_NEVERINSERTNONENUMERATED = 0x20
} NSTCSTYLE2;
DEFINE_ENUM_FLAG_OPERATORS(NSTCSTYLE2)
extern const IID IID_INameSpaceTreeControl2;
typedef struct INameSpaceTreeControl2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INameSpaceTreeControl2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INameSpaceTreeControl2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (INameSpaceTreeControl2 * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (INameSpaceTreeControl2 * This, HWND hwndParent, RECT * prc, NSTCSTYLE nsctsFlags);
	HRESULT(STDMETHODCALLTYPE * TreeAdvise) (INameSpaceTreeControl2 * This, IUnknown * punk, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * TreeUnadvise) (INameSpaceTreeControl2 * This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * AppendRoot) (INameSpaceTreeControl2 * This, IShellItem * psiRoot, SHCONTF grfEnumFlags, NSTCROOTSTYLE grfRootStyle, IShellItemFilter * pif);
	HRESULT(STDMETHODCALLTYPE * InsertRoot) (INameSpaceTreeControl2 * This, int iIndex, IShellItem * psiRoot, SHCONTF grfEnumFlags, NSTCROOTSTYLE grfRootStyle, IShellItemFilter * pif);
	HRESULT(STDMETHODCALLTYPE * RemoveRoot) (INameSpaceTreeControl2 * This, IShellItem * psiRoot);
	HRESULT(STDMETHODCALLTYPE * RemoveAllRoots) (INameSpaceTreeControl2 * This);
	HRESULT(STDMETHODCALLTYPE * GetRootItems) (INameSpaceTreeControl2 * This, IShellItemArray ** ppsiaRootItems);
	HRESULT(STDMETHODCALLTYPE * SetItemState) (INameSpaceTreeControl2 * This, IShellItem * psi, NSTCITEMSTATE nstcisMask, NSTCITEMSTATE nstcisFlags);
	HRESULT(STDMETHODCALLTYPE * GetItemState) (INameSpaceTreeControl2 * This, IShellItem * psi, NSTCITEMSTATE nstcisMask, NSTCITEMSTATE * pnstcisFlags);
	HRESULT(STDMETHODCALLTYPE * GetSelectedItems) (INameSpaceTreeControl2 * This, IShellItemArray ** psiaItems);
	HRESULT(STDMETHODCALLTYPE * GetItemCustomState) (INameSpaceTreeControl2 * This, IShellItem * psi, int *piStateNumber);
	HRESULT(STDMETHODCALLTYPE * SetItemCustomState) (INameSpaceTreeControl2 * This, IShellItem * psi, int iStateNumber);
	HRESULT(STDMETHODCALLTYPE * EnsureItemVisible) (INameSpaceTreeControl2 * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * SetTheme) (INameSpaceTreeControl2 * This, LPCWSTR pszTheme);
	HRESULT(STDMETHODCALLTYPE * GetNextItem) (INameSpaceTreeControl2 * This, IShellItem * psi, NSTCGNI nstcgi, IShellItem ** ppsiNext);
	HRESULT(STDMETHODCALLTYPE * HitTest) (INameSpaceTreeControl2 * This, POINT * ppt, IShellItem ** ppsiOut);
	HRESULT(STDMETHODCALLTYPE * GetItemRect) (INameSpaceTreeControl2 * This, IShellItem * psi, RECT * prect);
	HRESULT(STDMETHODCALLTYPE * CollapseAll) (INameSpaceTreeControl2 * This);
	HRESULT(STDMETHODCALLTYPE * SetControlStyle) (INameSpaceTreeControl2 * This, NSTCSTYLE nstcsMask, NSTCSTYLE nstcsStyle);
	HRESULT(STDMETHODCALLTYPE * GetControlStyle) (INameSpaceTreeControl2 * This, NSTCSTYLE nstcsMask, NSTCSTYLE * pnstcsStyle);
	HRESULT(STDMETHODCALLTYPE * SetControlStyle2) (INameSpaceTreeControl2 * This, NSTCSTYLE2 nstcsMask, NSTCSTYLE2 nstcsStyle);
	HRESULT(STDMETHODCALLTYPE * GetControlStyle2) (INameSpaceTreeControl2 * This, NSTCSTYLE2 nstcsMask, NSTCSTYLE2 * pnstcsStyle);
	END_INTERFACE
}  INameSpaceTreeControl2Vtbl;
interface INameSpaceTreeControl2
{
	CONST_VTBL struct INameSpaceTreeControl2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INameSpaceTreeControl2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INameSpaceTreeControl2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INameSpaceTreeControl2_Release(This)( (This)->lpVtbl -> Release(This) )
#define INameSpaceTreeControl2_Initialize(This,hwndParent,prc,nsctsFlags)( (This)->lpVtbl -> Initialize(This,hwndParent,prc,nsctsFlags) )
#define INameSpaceTreeControl2_TreeAdvise(This,punk,pdwCookie)( (This)->lpVtbl -> TreeAdvise(This,punk,pdwCookie) )
#define INameSpaceTreeControl2_TreeUnadvise(This,dwCookie)( (This)->lpVtbl -> TreeUnadvise(This,dwCookie) )
#define INameSpaceTreeControl2_AppendRoot(This,psiRoot,grfEnumFlags,grfRootStyle,pif)( (This)->lpVtbl -> AppendRoot(This,psiRoot,grfEnumFlags,grfRootStyle,pif) )
#define INameSpaceTreeControl2_InsertRoot(This,iIndex,psiRoot,grfEnumFlags,grfRootStyle,pif)( (This)->lpVtbl -> InsertRoot(This,iIndex,psiRoot,grfEnumFlags,grfRootStyle,pif) )
#define INameSpaceTreeControl2_RemoveRoot(This,psiRoot)( (This)->lpVtbl -> RemoveRoot(This,psiRoot) )
#define INameSpaceTreeControl2_RemoveAllRoots(This)( (This)->lpVtbl -> RemoveAllRoots(This) )
#define INameSpaceTreeControl2_GetRootItems(This,ppsiaRootItems)( (This)->lpVtbl -> GetRootItems(This,ppsiaRootItems) )
#define INameSpaceTreeControl2_SetItemState(This,psi,nstcisMask,nstcisFlags)( (This)->lpVtbl -> SetItemState(This,psi,nstcisMask,nstcisFlags) )
#define INameSpaceTreeControl2_GetItemState(This,psi,nstcisMask,pnstcisFlags)( (This)->lpVtbl -> GetItemState(This,psi,nstcisMask,pnstcisFlags) )
#define INameSpaceTreeControl2_GetSelectedItems(This,psiaItems)( (This)->lpVtbl -> GetSelectedItems(This,psiaItems) )
#define INameSpaceTreeControl2_GetItemCustomState(This,psi,piStateNumber)( (This)->lpVtbl -> GetItemCustomState(This,psi,piStateNumber) )
#define INameSpaceTreeControl2_SetItemCustomState(This,psi,iStateNumber)( (This)->lpVtbl -> SetItemCustomState(This,psi,iStateNumber) )
#define INameSpaceTreeControl2_EnsureItemVisible(This,psi)( (This)->lpVtbl -> EnsureItemVisible(This,psi) )
#define INameSpaceTreeControl2_SetTheme(This,pszTheme)( (This)->lpVtbl -> SetTheme(This,pszTheme) )
#define INameSpaceTreeControl2_GetNextItem(This,psi,nstcgi,ppsiNext)( (This)->lpVtbl -> GetNextItem(This,psi,nstcgi,ppsiNext) )
#define INameSpaceTreeControl2_HitTest(This,ppt,ppsiOut)( (This)->lpVtbl -> HitTest(This,ppt,ppsiOut) )
#define INameSpaceTreeControl2_GetItemRect(This,psi,prect)( (This)->lpVtbl -> GetItemRect(This,psi,prect) )
#define INameSpaceTreeControl2_CollapseAll(This)( (This)->lpVtbl -> CollapseAll(This) )
#define INameSpaceTreeControl2_SetControlStyle(This,nstcsMask,nstcsStyle)( (This)->lpVtbl -> SetControlStyle(This,nstcsMask,nstcsStyle) )
#define INameSpaceTreeControl2_GetControlStyle(This,nstcsMask,pnstcsStyle)( (This)->lpVtbl -> GetControlStyle(This,nstcsMask,pnstcsStyle) )
#define INameSpaceTreeControl2_SetControlStyle2(This,nstcsMask,nstcsStyle)( (This)->lpVtbl -> SetControlStyle2(This,nstcsMask,nstcsStyle) )
#define INameSpaceTreeControl2_GetControlStyle2(This,nstcsMask,pnstcsStyle)( (This)->lpVtbl -> GetControlStyle2(This,nstcsMask,pnstcsStyle) )
#endif
#endif
#define NSTCS2_ALLMASK (NSTCS2_INTERRUPTNOTIFICATIONS | NSTCS2_SHOWNULLSPACEMENU | NSTCS2_DISPLAYPADDING)
#define SID_SNavigationPane IID_INameSpaceTreeControl
#define ISLBUTTON(x) (NSTCECT_LBUTTON == ((x) & NSTCECT_BUTTON))
#define ISMBUTTON(x) (NSTCECT_MBUTTON == ((x) & NSTCECT_BUTTON))
#define ISRBUTTON(x) (NSTCECT_RBUTTON == ((x) & NSTCECT_BUTTON))
#define ISDBLCLICK(x) (NSTCECT_DBLCLICK == ((x) & NSTCECT_DBLCLICK))
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0164_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0164_v0_0_s_ifspec;
#ifndef __INameSpaceTreeControlEvents_INTERFACE_DEFINED__
#define __INameSpaceTreeControlEvents_INTERFACE_DEFINED__
enum _NSTCEHITTEST
{
	NSTCEHT_NOWHERE = 0x1,
	NSTCEHT_ONITEMICON = 0x2,
	NSTCEHT_ONITEMLABEL = 0x4,
	NSTCEHT_ONITEMINDENT = 0x8,
	NSTCEHT_ONITEMBUTTON = 0x10,
	NSTCEHT_ONITEMRIGHT = 0x20,
	NSTCEHT_ONITEMSTATEICON = 0x40,
	NSTCEHT_ONITEM = 0x46,
	NSTCEHT_ONITEMTABBUTTON = 0x1000
};
typedef DWORD NSTCEHITTEST;
enum _NSTCECLICKTYPE
{
	NSTCECT_LBUTTON = 0x1,
	NSTCECT_MBUTTON = 0x2,
	NSTCECT_RBUTTON = 0x3,
	NSTCECT_BUTTON = 0x3,
	NSTCECT_DBLCLICK = 0x4
};
typedef DWORD NSTCECLICKTYPE;
extern const IID IID_INameSpaceTreeControlEvents;
typedef struct INameSpaceTreeControlEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INameSpaceTreeControlEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INameSpaceTreeControlEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (INameSpaceTreeControlEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnItemClick) (INameSpaceTreeControlEvents * This, IShellItem * psi, NSTCEHITTEST nstceHitTest, NSTCECLICKTYPE nstceClickType);
	HRESULT(STDMETHODCALLTYPE * OnPropertyItemCommit) (INameSpaceTreeControlEvents * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * OnItemStateChanging) (INameSpaceTreeControlEvents * This, IShellItem * psi, NSTCITEMSTATE nstcisMask, NSTCITEMSTATE nstcisState);
	HRESULT(STDMETHODCALLTYPE * OnItemStateChanged) (INameSpaceTreeControlEvents * This, IShellItem * psi, NSTCITEMSTATE nstcisMask, NSTCITEMSTATE nstcisState);
	HRESULT(STDMETHODCALLTYPE * OnSelectionChanged) (INameSpaceTreeControlEvents * This, IShellItemArray * psiaSelection);
	HRESULT(STDMETHODCALLTYPE * OnKeyboardInput) (INameSpaceTreeControlEvents * This, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * OnBeforeExpand) (INameSpaceTreeControlEvents * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * OnAfterExpand) (INameSpaceTreeControlEvents * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * OnBeginLabelEdit) (INameSpaceTreeControlEvents * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * OnEndLabelEdit) (INameSpaceTreeControlEvents * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * OnGetToolTip) (INameSpaceTreeControlEvents * This, IShellItem * psi, LPWSTR pszTip, int cchTip);
	HRESULT(STDMETHODCALLTYPE * OnBeforeItemDelete) (INameSpaceTreeControlEvents * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * OnItemAdded) (INameSpaceTreeControlEvents * This, IShellItem * psi, BOOL fIsRoot);
	HRESULT(STDMETHODCALLTYPE * OnItemDeleted) (INameSpaceTreeControlEvents * This, IShellItem * psi, BOOL fIsRoot);
	HRESULT(STDMETHODCALLTYPE * OnBeforeContextMenu) (INameSpaceTreeControlEvents * This, IShellItem * psi, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * OnAfterContextMenu) (INameSpaceTreeControlEvents * This, IShellItem * psi, IContextMenu * pcmIn, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * OnBeforeStateImageChange) (INameSpaceTreeControlEvents * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * OnGetDefaultIconIndex) (INameSpaceTreeControlEvents * This, IShellItem * psi, int *piDefaultIcon, int *piOpenIcon);
	END_INTERFACE
}  INameSpaceTreeControlEventsVtbl;
interface INameSpaceTreeControlEvents
{
	CONST_VTBL struct INameSpaceTreeControlEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INameSpaceTreeControlEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INameSpaceTreeControlEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INameSpaceTreeControlEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define INameSpaceTreeControlEvents_OnItemClick(This,psi,nstceHitTest,nstceClickType)( (This)->lpVtbl -> OnItemClick(This,psi,nstceHitTest,nstceClickType) )
#define INameSpaceTreeControlEvents_OnPropertyItemCommit(This,psi)( (This)->lpVtbl -> OnPropertyItemCommit(This,psi) )
#define INameSpaceTreeControlEvents_OnItemStateChanging(This,psi,nstcisMask,nstcisState)( (This)->lpVtbl -> OnItemStateChanging(This,psi,nstcisMask,nstcisState) )
#define INameSpaceTreeControlEvents_OnItemStateChanged(This,psi,nstcisMask,nstcisState)( (This)->lpVtbl -> OnItemStateChanged(This,psi,nstcisMask,nstcisState) )
#define INameSpaceTreeControlEvents_OnSelectionChanged(This,psiaSelection)( (This)->lpVtbl -> OnSelectionChanged(This,psiaSelection) )
#define INameSpaceTreeControlEvents_OnKeyboardInput(This,uMsg,wParam,lParam)( (This)->lpVtbl -> OnKeyboardInput(This,uMsg,wParam,lParam) )
#define INameSpaceTreeControlEvents_OnBeforeExpand(This,psi)( (This)->lpVtbl -> OnBeforeExpand(This,psi) )
#define INameSpaceTreeControlEvents_OnAfterExpand(This,psi)( (This)->lpVtbl -> OnAfterExpand(This,psi) )
#define INameSpaceTreeControlEvents_OnBeginLabelEdit(This,psi)( (This)->lpVtbl -> OnBeginLabelEdit(This,psi) )
#define INameSpaceTreeControlEvents_OnEndLabelEdit(This,psi)( (This)->lpVtbl -> OnEndLabelEdit(This,psi) )
#define INameSpaceTreeControlEvents_OnGetToolTip(This,psi,pszTip,cchTip)( (This)->lpVtbl -> OnGetToolTip(This,psi,pszTip,cchTip) )
#define INameSpaceTreeControlEvents_OnBeforeItemDelete(This,psi)( (This)->lpVtbl -> OnBeforeItemDelete(This,psi) )
#define INameSpaceTreeControlEvents_OnItemAdded(This,psi,fIsRoot)( (This)->lpVtbl -> OnItemAdded(This,psi,fIsRoot) )
#define INameSpaceTreeControlEvents_OnItemDeleted(This,psi,fIsRoot)( (This)->lpVtbl -> OnItemDeleted(This,psi,fIsRoot) )
#define INameSpaceTreeControlEvents_OnBeforeContextMenu(This,psi,riid,ppv)( (This)->lpVtbl -> OnBeforeContextMenu(This,psi,riid,ppv) )
#define INameSpaceTreeControlEvents_OnAfterContextMenu(This,psi,pcmIn,riid,ppv)( (This)->lpVtbl -> OnAfterContextMenu(This,psi,pcmIn,riid,ppv) )
#define INameSpaceTreeControlEvents_OnBeforeStateImageChange(This,psi)( (This)->lpVtbl -> OnBeforeStateImageChange(This,psi) )
#define INameSpaceTreeControlEvents_OnGetDefaultIconIndex(This,psi,piDefaultIcon,piOpenIcon)( (This)->lpVtbl -> OnGetDefaultIconIndex(This,psi,piDefaultIcon,piOpenIcon) )
#endif
#endif
#define NSTCDHPOS_ONTOP  -1
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0165_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0165_v0_0_s_ifspec;
#ifndef __INameSpaceTreeControlDropHandler_INTERFACE_DEFINED__
#define __INameSpaceTreeControlDropHandler_INTERFACE_DEFINED__
extern const IID IID_INameSpaceTreeControlDropHandler;
typedef struct INameSpaceTreeControlDropHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INameSpaceTreeControlDropHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INameSpaceTreeControlDropHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (INameSpaceTreeControlDropHandler * This);
	HRESULT(STDMETHODCALLTYPE * OnDragEnter) (INameSpaceTreeControlDropHandler * This, IShellItem * psiOver, IShellItemArray * psiaData, BOOL fOutsideSource, DWORD grfKeyState, DWORD * pdwEffect);
	HRESULT(STDMETHODCALLTYPE * OnDragOver) (INameSpaceTreeControlDropHandler * This, IShellItem * psiOver, IShellItemArray * psiaData, DWORD grfKeyState, DWORD * pdwEffect);
	HRESULT(STDMETHODCALLTYPE * OnDragPosition) (INameSpaceTreeControlDropHandler * This, IShellItem * psiOver, IShellItemArray * psiaData, int iNewPosition, int iOldPosition);
	HRESULT(STDMETHODCALLTYPE * OnDrop) (INameSpaceTreeControlDropHandler * This, IShellItem * psiOver, IShellItemArray * psiaData, int iPosition, DWORD grfKeyState, DWORD * pdwEffect);
	HRESULT(STDMETHODCALLTYPE * OnDropPosition) (INameSpaceTreeControlDropHandler * This, IShellItem * psiOver, IShellItemArray * psiaData, int iNewPosition, int iOldPosition);
	HRESULT(STDMETHODCALLTYPE * OnDragLeave) (INameSpaceTreeControlDropHandler * This, IShellItem * psiOver);
	END_INTERFACE
}  INameSpaceTreeControlDropHandlerVtbl;
interface INameSpaceTreeControlDropHandler
{
	CONST_VTBL struct INameSpaceTreeControlDropHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INameSpaceTreeControlDropHandler_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INameSpaceTreeControlDropHandler_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INameSpaceTreeControlDropHandler_Release(This)( (This)->lpVtbl -> Release(This) )
#define INameSpaceTreeControlDropHandler_OnDragEnter(This,psiOver,psiaData,fOutsideSource,grfKeyState,pdwEffect)( (This)->lpVtbl -> OnDragEnter(This,psiOver,psiaData,fOutsideSource,grfKeyState,pdwEffect) )
#define INameSpaceTreeControlDropHandler_OnDragOver(This,psiOver,psiaData,grfKeyState,pdwEffect)( (This)->lpVtbl -> OnDragOver(This,psiOver,psiaData,grfKeyState,pdwEffect) )
#define INameSpaceTreeControlDropHandler_OnDragPosition(This,psiOver,psiaData,iNewPosition,iOldPosition)( (This)->lpVtbl -> OnDragPosition(This,psiOver,psiaData,iNewPosition,iOldPosition) )
#define INameSpaceTreeControlDropHandler_OnDrop(This,psiOver,psiaData,iPosition,grfKeyState,pdwEffect)( (This)->lpVtbl -> OnDrop(This,psiOver,psiaData,iPosition,grfKeyState,pdwEffect) )
#define INameSpaceTreeControlDropHandler_OnDropPosition(This,psiOver,psiaData,iNewPosition,iOldPosition)( (This)->lpVtbl -> OnDropPosition(This,psiOver,psiaData,iNewPosition,iOldPosition) )
#define INameSpaceTreeControlDropHandler_OnDragLeave(This,psiOver)( (This)->lpVtbl -> OnDragLeave(This,psiOver) )
#endif
#endif
#ifndef __INameSpaceTreeAccessible_INTERFACE_DEFINED__
#define __INameSpaceTreeAccessible_INTERFACE_DEFINED__
extern const IID IID_INameSpaceTreeAccessible;
typedef struct INameSpaceTreeAccessibleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INameSpaceTreeAccessible * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INameSpaceTreeAccessible * This);
	ULONG(STDMETHODCALLTYPE * Release) (INameSpaceTreeAccessible * This);
	HRESULT(STDMETHODCALLTYPE * OnGetDefaultAccessibilityAction) (INameSpaceTreeAccessible * This, IShellItem * psi, BSTR * pbstrDefaultAction);
	HRESULT(STDMETHODCALLTYPE * OnDoDefaultAccessibilityAction) (INameSpaceTreeAccessible * This, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * OnGetAccessibilityRole) (INameSpaceTreeAccessible * This, IShellItem * psi, VARIANT * pvarRole);
	END_INTERFACE
}  INameSpaceTreeAccessibleVtbl;
interface INameSpaceTreeAccessible
{
	CONST_VTBL struct INameSpaceTreeAccessibleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INameSpaceTreeAccessible_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INameSpaceTreeAccessible_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INameSpaceTreeAccessible_Release(This)( (This)->lpVtbl -> Release(This) )
#define INameSpaceTreeAccessible_OnGetDefaultAccessibilityAction(This,psi,pbstrDefaultAction)( (This)->lpVtbl -> OnGetDefaultAccessibilityAction(This,psi,pbstrDefaultAction) )
#define INameSpaceTreeAccessible_OnDoDefaultAccessibilityAction(This,psi)( (This)->lpVtbl -> OnDoDefaultAccessibilityAction(This,psi) )
#define INameSpaceTreeAccessible_OnGetAccessibilityRole(This,psi,pvarRole)( (This)->lpVtbl -> OnGetAccessibilityRole(This,psi,pvarRole) )
#endif
#endif
#ifndef __INameSpaceTreeControlCustomDraw_INTERFACE_DEFINED__
#define __INameSpaceTreeControlCustomDraw_INTERFACE_DEFINED__
typedef struct NSTCCUSTOMDRAW
{
	IShellItem *psi;
	UINT uItemState;
	NSTCITEMSTATE nstcis;
	LPCWSTR pszText;
	int iImage;
	HIMAGELIST himl;
	int iLevel;
	int iIndent;
} NSTCCUSTOMDRAW;
extern const IID IID_INameSpaceTreeControlCustomDraw;
typedef struct INameSpaceTreeControlCustomDrawVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INameSpaceTreeControlCustomDraw * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INameSpaceTreeControlCustomDraw * This);
	ULONG(STDMETHODCALLTYPE * Release) (INameSpaceTreeControlCustomDraw * This);
	HRESULT(STDMETHODCALLTYPE * PrePaint) (INameSpaceTreeControlCustomDraw * This, HDC hdc, RECT * prc, LRESULT * plres);
	HRESULT(STDMETHODCALLTYPE * PostPaint) (INameSpaceTreeControlCustomDraw * This, HDC hdc, RECT * prc);
	HRESULT(STDMETHODCALLTYPE * ItemPrePaint) (INameSpaceTreeControlCustomDraw * This, HDC hdc, RECT * prc, NSTCCUSTOMDRAW * pnstccdItem, COLORREF * pclrText, COLORREF * pclrTextBk, LRESULT * plres);
	HRESULT(STDMETHODCALLTYPE * ItemPostPaint) (INameSpaceTreeControlCustomDraw * This, HDC hdc, RECT * prc, NSTCCUSTOMDRAW * pnstccdItem);
	END_INTERFACE
}  INameSpaceTreeControlCustomDrawVtbl;
interface INameSpaceTreeControlCustomDraw
{
	CONST_VTBL struct INameSpaceTreeControlCustomDrawVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INameSpaceTreeControlCustomDraw_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INameSpaceTreeControlCustomDraw_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INameSpaceTreeControlCustomDraw_Release(This)( (This)->lpVtbl -> Release(This) )
#define INameSpaceTreeControlCustomDraw_PrePaint(This,hdc,prc,plres)( (This)->lpVtbl -> PrePaint(This,hdc,prc,plres) )
#define INameSpaceTreeControlCustomDraw_PostPaint(This,hdc,prc)( (This)->lpVtbl -> PostPaint(This,hdc,prc) )
#define INameSpaceTreeControlCustomDraw_ItemPrePaint(This,hdc,prc,pnstccdItem,pclrText,pclrTextBk,plres)( (This)->lpVtbl -> ItemPrePaint(This,hdc,prc,pnstccdItem,pclrText,pclrTextBk,plres) )
#define INameSpaceTreeControlCustomDraw_ItemPostPaint(This,hdc,prc,pnstccdItem)( (This)->lpVtbl -> ItemPostPaint(This,hdc,prc,pnstccdItem) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0168_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0168_v0_0_s_ifspec;
#ifndef __INameSpaceTreeControlFolderCapabilities_INTERFACE_DEFINED__
#define __INameSpaceTreeControlFolderCapabilities_INTERFACE_DEFINED__
typedef enum NSTCFOLDERCAPABILITIES
{
	NSTCFC_NONE = 0,
	NSTCFC_PINNEDITEMFILTERING = 0x1,
	NSTCFC_DELAY_REGISTER_NOTIFY = 0x2
} NSTCFOLDERCAPABILITIES;
DEFINE_ENUM_FLAG_OPERATORS(NSTCFOLDERCAPABILITIES)
extern const IID IID_INameSpaceTreeControlFolderCapabilities;
typedef struct INameSpaceTreeControlFolderCapabilitiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INameSpaceTreeControlFolderCapabilities * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INameSpaceTreeControlFolderCapabilities * This);
	ULONG(STDMETHODCALLTYPE * Release) (INameSpaceTreeControlFolderCapabilities * This);
	HRESULT(STDMETHODCALLTYPE * GetFolderCapabilities) (INameSpaceTreeControlFolderCapabilities * This, NSTCFOLDERCAPABILITIES nfcMask, NSTCFOLDERCAPABILITIES * pnfcValue);
	END_INTERFACE
}  INameSpaceTreeControlFolderCapabilitiesVtbl;
interface INameSpaceTreeControlFolderCapabilities
{
	CONST_VTBL struct INameSpaceTreeControlFolderCapabilitiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INameSpaceTreeControlFolderCapabilities_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INameSpaceTreeControlFolderCapabilities_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INameSpaceTreeControlFolderCapabilities_Release(This)( (This)->lpVtbl -> Release(This) )
#define INameSpaceTreeControlFolderCapabilities_GetFolderCapabilities(This,nfcMask,pnfcValue)( (This)->lpVtbl -> GetFolderCapabilities(This,nfcMask,pnfcValue) )
#endif
#endif
#endif
#define E_PREVIEWHANDLER_DRM_FAIL _HRESULT_TYPEDEF_(0x86420001L)
#define E_PREVIEWHANDLER_NOAUTH   _HRESULT_TYPEDEF_(0x86420002L)
#define E_PREVIEWHANDLER_NOTFOUND _HRESULT_TYPEDEF_(0x86420003L)
#define E_PREVIEWHANDLER_CORRUPT  _HRESULT_TYPEDEF_(0x86420004L)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0169_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0169_v0_0_s_ifspec;
#ifndef __IPreviewHandler_INTERFACE_DEFINED__
#define __IPreviewHandler_INTERFACE_DEFINED__
extern const IID IID_IPreviewHandler;
typedef struct IPreviewHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPreviewHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPreviewHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPreviewHandler * This);
	HRESULT(STDMETHODCALLTYPE * SetWindow) (IPreviewHandler * This, HWND hwnd, const RECT * prc);
	HRESULT(STDMETHODCALLTYPE * SetRect) (IPreviewHandler * This, const RECT * prc);
	HRESULT(STDMETHODCALLTYPE * DoPreview) (IPreviewHandler * This);
	HRESULT(STDMETHODCALLTYPE * Unload) (IPreviewHandler * This);
	HRESULT(STDMETHODCALLTYPE * SetFocus) (IPreviewHandler * This);
	HRESULT(STDMETHODCALLTYPE * QueryFocus) (IPreviewHandler * This, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * TranslateAccelerator) (IPreviewHandler * This, MSG * pmsg);
	END_INTERFACE
}  IPreviewHandlerVtbl;
interface IPreviewHandler
{
	CONST_VTBL struct IPreviewHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPreviewHandler_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPreviewHandler_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPreviewHandler_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPreviewHandler_SetWindow(This,hwnd,prc)( (This)->lpVtbl -> SetWindow(This,hwnd,prc) )
#define IPreviewHandler_SetRect(This,prc)( (This)->lpVtbl -> SetRect(This,prc) )
#define IPreviewHandler_DoPreview(This)( (This)->lpVtbl -> DoPreview(This) )
#define IPreviewHandler_Unload(This)( (This)->lpVtbl -> Unload(This) )
#define IPreviewHandler_SetFocus(This)( (This)->lpVtbl -> SetFocus(This) )
#define IPreviewHandler_QueryFocus(This,phwnd)( (This)->lpVtbl -> QueryFocus(This,phwnd) )
#define IPreviewHandler_TranslateAccelerator(This,pmsg)( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) )
#endif
#endif
#ifndef __IPreviewHandlerFrame_INTERFACE_DEFINED__
#define __IPreviewHandlerFrame_INTERFACE_DEFINED__
typedef struct __MIDL_IPreviewHandlerFrame_0001
{
	HACCEL haccel;
	UINT cAccelEntries;
} PREVIEWHANDLERFRAMEINFO;
extern const IID IID_IPreviewHandlerFrame;
typedef struct IPreviewHandlerFrameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPreviewHandlerFrame * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPreviewHandlerFrame * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPreviewHandlerFrame * This);
	HRESULT(STDMETHODCALLTYPE * GetWindowContext) (IPreviewHandlerFrame * This, PREVIEWHANDLERFRAMEINFO * pinfo);
	HRESULT(STDMETHODCALLTYPE * TranslateAccelerator) (IPreviewHandlerFrame * This, MSG * pmsg);
	END_INTERFACE
}  IPreviewHandlerFrameVtbl;
interface IPreviewHandlerFrame
{
	CONST_VTBL struct IPreviewHandlerFrameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPreviewHandlerFrame_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPreviewHandlerFrame_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPreviewHandlerFrame_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPreviewHandlerFrame_GetWindowContext(This,pinfo)( (This)->lpVtbl -> GetWindowContext(This,pinfo) )
#define IPreviewHandlerFrame_TranslateAccelerator(This,pmsg)( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0171_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0171_v0_0_s_ifspec;
#ifndef __ITrayDeskBand_INTERFACE_DEFINED__
#define __ITrayDeskBand_INTERFACE_DEFINED__
extern const IID IID_ITrayDeskBand;
typedef struct ITrayDeskBandVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITrayDeskBand * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITrayDeskBand * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITrayDeskBand * This);
	HRESULT(STDMETHODCALLTYPE * ShowDeskBand) (ITrayDeskBand * This, REFCLSID clsid);
	HRESULT(STDMETHODCALLTYPE * HideDeskBand) (ITrayDeskBand * This, REFCLSID clsid);
	HRESULT(STDMETHODCALLTYPE * IsDeskBandShown) (ITrayDeskBand * This, REFCLSID clsid);
	HRESULT(STDMETHODCALLTYPE * DeskBandRegistrationChanged) (ITrayDeskBand * This);
	END_INTERFACE
}  ITrayDeskBandVtbl;
interface ITrayDeskBand
{
	CONST_VTBL struct ITrayDeskBandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITrayDeskBand_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITrayDeskBand_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITrayDeskBand_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITrayDeskBand_ShowDeskBand(This,clsid)( (This)->lpVtbl -> ShowDeskBand(This,clsid) )
#define ITrayDeskBand_HideDeskBand(This,clsid)( (This)->lpVtbl -> HideDeskBand(This,clsid) )
#define ITrayDeskBand_IsDeskBandShown(This,clsid)( (This)->lpVtbl -> IsDeskBandShown(This,clsid) )
#define ITrayDeskBand_DeskBandRegistrationChanged(This)( (This)->lpVtbl -> DeskBandRegistrationChanged(This) )
#endif
#endif
#ifndef __IBandHost_INTERFACE_DEFINED__
#define __IBandHost_INTERFACE_DEFINED__
extern const IID IID_IBandHost;
typedef struct IBandHostVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBandHost * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBandHost * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBandHost * This);
	HRESULT(STDMETHODCALLTYPE * CreateBand) (IBandHost * This, REFCLSID rclsidBand, BOOL fAvailable, BOOL fVisible, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * SetBandAvailability) (IBandHost * This, REFCLSID rclsidBand, BOOL fAvailable);
	HRESULT(STDMETHODCALLTYPE * DestroyBand) (IBandHost * This, REFCLSID rclsidBand);
	END_INTERFACE
}  IBandHostVtbl;
interface IBandHost
{
	CONST_VTBL struct IBandHostVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBandHost_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBandHost_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBandHost_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBandHost_CreateBand(This,rclsidBand,fAvailable,fVisible,riid,ppv)( (This)->lpVtbl -> CreateBand(This,rclsidBand,fAvailable,fVisible,riid,ppv) )
#define IBandHost_SetBandAvailability(This,rclsidBand,fAvailable)( (This)->lpVtbl -> SetBandAvailability(This,rclsidBand,fAvailable) )
#define IBandHost_DestroyBand(This,rclsidBand)( (This)->lpVtbl -> DestroyBand(This,rclsidBand) )
#endif
#endif
#define SID_SBandHost IID_IBandHost
typedef GUID EXPLORERPANE;
#if 0
typedef EXPLORERPANE *REFEXPLORERPANE;
#endif
#define REFEXPLORERPANE const EXPLORERPANE * __MIDL_CONST
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0173_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0173_v0_0_s_ifspec;
#ifndef __IExplorerPaneVisibility_INTERFACE_DEFINED__
#define __IExplorerPaneVisibility_INTERFACE_DEFINED__
enum _EXPLORERPANESTATE
{
	EPS_DONTCARE = 0,
	EPS_DEFAULT_ON = 0x1,
	EPS_DEFAULT_OFF = 0x2,
	EPS_STATEMASK = 0xffff,
	EPS_INITIALSTATE = 0x10000,
	EPS_FORCE = 0x20000
};
typedef DWORD EXPLORERPANESTATE;
extern const IID IID_IExplorerPaneVisibility;
typedef struct IExplorerPaneVisibilityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IExplorerPaneVisibility * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExplorerPaneVisibility * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExplorerPaneVisibility * This);
	HRESULT(STDMETHODCALLTYPE * GetPaneState) (IExplorerPaneVisibility * This, REFEXPLORERPANE ep, EXPLORERPANESTATE * peps);
	END_INTERFACE
}  IExplorerPaneVisibilityVtbl;
interface IExplorerPaneVisibility
{
	CONST_VTBL struct IExplorerPaneVisibilityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExplorerPaneVisibility_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExplorerPaneVisibility_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IExplorerPaneVisibility_Release(This)( (This)->lpVtbl -> Release(This) )
#define IExplorerPaneVisibility_GetPaneState(This,ep,peps)( (This)->lpVtbl -> GetPaneState(This,ep,peps) )
#endif
#endif
#define SID_ExplorerPaneVisibility IID_IExplorerPaneVisibility
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0174_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0174_v0_0_s_ifspec;
#ifndef __IContextMenuCB_INTERFACE_DEFINED__
#define __IContextMenuCB_INTERFACE_DEFINED__
extern const IID IID_IContextMenuCB;
typedef struct IContextMenuCBVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IContextMenuCB * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IContextMenuCB * This);
	ULONG(STDMETHODCALLTYPE * Release) (IContextMenuCB * This);
	HRESULT(STDMETHODCALLTYPE * CallBack) (IContextMenuCB * This, IShellFolder * psf, HWND hwndOwner, IDataObject * pdtobj, UINT uMsg, WPARAM wParam, LPARAM lParam);
	END_INTERFACE
}  IContextMenuCBVtbl;
interface IContextMenuCB
{
	CONST_VTBL struct IContextMenuCBVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextMenuCB_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IContextMenuCB_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IContextMenuCB_Release(This)( (This)->lpVtbl -> Release(This) )
#define IContextMenuCB_CallBack(This,psf,hwndOwner,pdtobj,uMsg,wParam,lParam)( (This)->lpVtbl -> CallBack(This,psf,hwndOwner,pdtobj,uMsg,wParam,lParam) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0175_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0175_v0_0_s_ifspec;
#ifndef __IDefaultExtractIconInit_INTERFACE_DEFINED__
#define __IDefaultExtractIconInit_INTERFACE_DEFINED__
extern const IID IID_IDefaultExtractIconInit;
typedef struct IDefaultExtractIconInitVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDefaultExtractIconInit * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDefaultExtractIconInit * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDefaultExtractIconInit * This);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IDefaultExtractIconInit * This, UINT uFlags);
	HRESULT(STDMETHODCALLTYPE * SetKey) (IDefaultExtractIconInit * This, HKEY hkey);
	HRESULT(STDMETHODCALLTYPE * SetNormalIcon) (IDefaultExtractIconInit * This, LPCWSTR pszFile, int iIcon);
	HRESULT(STDMETHODCALLTYPE * SetOpenIcon) (IDefaultExtractIconInit * This, LPCWSTR pszFile, int iIcon);
	HRESULT(STDMETHODCALLTYPE * SetShortcutIcon) (IDefaultExtractIconInit * This, LPCWSTR pszFile, int iIcon);
	HRESULT(STDMETHODCALLTYPE * SetDefaultIcon) (IDefaultExtractIconInit * This, LPCWSTR pszFile, int iIcon);
	END_INTERFACE
}  IDefaultExtractIconInitVtbl;
interface IDefaultExtractIconInit
{
	CONST_VTBL struct IDefaultExtractIconInitVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDefaultExtractIconInit_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDefaultExtractIconInit_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDefaultExtractIconInit_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDefaultExtractIconInit_SetFlags(This,uFlags)( (This)->lpVtbl -> SetFlags(This,uFlags) )
#define IDefaultExtractIconInit_SetKey(This,hkey)( (This)->lpVtbl -> SetKey(This,hkey) )
#define IDefaultExtractIconInit_SetNormalIcon(This,pszFile,iIcon)( (This)->lpVtbl -> SetNormalIcon(This,pszFile,iIcon) )
#define IDefaultExtractIconInit_SetOpenIcon(This,pszFile,iIcon)( (This)->lpVtbl -> SetOpenIcon(This,pszFile,iIcon) )
#define IDefaultExtractIconInit_SetShortcutIcon(This,pszFile,iIcon)( (This)->lpVtbl -> SetShortcutIcon(This,pszFile,iIcon) )
#define IDefaultExtractIconInit_SetDefaultIcon(This,pszFile,iIcon)( (This)->lpVtbl -> SetDefaultIcon(This,pszFile,iIcon) )
#endif
#endif
STDAPI SHCreateDefaultExtractIcon(REFIID riid, void **ppv);
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0176_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0176_v0_0_s_ifspec;
#ifndef __IExplorerCommand_INTERFACE_DEFINED__
#define __IExplorerCommand_INTERFACE_DEFINED__
enum _EXPCMDSTATE
{
	ECS_ENABLED = 0,
	ECS_DISABLED = 0x1,
	ECS_HIDDEN = 0x2,
	ECS_CHECKBOX = 0x4,
	ECS_CHECKED = 0x8,
	ECS_RADIOCHECK = 0x10
};
typedef DWORD EXPCMDSTATE;
enum _EXPCMDFLAGS
{
	ECF_DEFAULT = 0,
	ECF_HASSUBCOMMANDS = 0x1,
	ECF_HASSPLITBUTTON = 0x2,
	ECF_HIDELABEL = 0x4,
	ECF_ISSEPARATOR = 0x8,
	ECF_HASLUASHIELD = 0x10,
	ECF_SEPARATORBEFORE = 0x20,
	ECF_SEPARATORAFTER = 0x40,
	ECF_ISDROPDOWN = 0x80
};
typedef DWORD EXPCMDFLAGS;
extern const IID IID_IExplorerCommand;
typedef struct IExplorerCommandVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IExplorerCommand * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExplorerCommand * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExplorerCommand * This);
	HRESULT(STDMETHODCALLTYPE * GetTitle) (IExplorerCommand * This, IShellItemArray * psiItemArray, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetIcon) (IExplorerCommand * This, IShellItemArray * psiItemArray, LPWSTR * ppszIcon);
	HRESULT(STDMETHODCALLTYPE * GetToolTip) (IExplorerCommand * This, IShellItemArray * psiItemArray, LPWSTR * ppszInfotip);
	HRESULT(STDMETHODCALLTYPE * GetCanonicalName) (IExplorerCommand * This, GUID * pguidCommandName);
	HRESULT(STDMETHODCALLTYPE * GetState) (IExplorerCommand * This, IShellItemArray * psiItemArray, BOOL fOkToBeSlow, EXPCMDSTATE * pCmdState);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IExplorerCommand * This, IShellItemArray * psiItemArray, IBindCtx * pbc);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IExplorerCommand * This, EXPCMDFLAGS * pFlags);
	HRESULT(STDMETHODCALLTYPE * EnumSubCommands) (IExplorerCommand * This, IEnumExplorerCommand ** ppEnum);
	END_INTERFACE
}  IExplorerCommandVtbl;
interface IExplorerCommand
{
	CONST_VTBL struct IExplorerCommandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExplorerCommand_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExplorerCommand_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IExplorerCommand_Release(This)( (This)->lpVtbl -> Release(This) )
#define IExplorerCommand_GetTitle(This,psiItemArray,ppszName)( (This)->lpVtbl -> GetTitle(This,psiItemArray,ppszName) )
#define IExplorerCommand_GetIcon(This,psiItemArray,ppszIcon)( (This)->lpVtbl -> GetIcon(This,psiItemArray,ppszIcon) )
#define IExplorerCommand_GetToolTip(This,psiItemArray,ppszInfotip)( (This)->lpVtbl -> GetToolTip(This,psiItemArray,ppszInfotip) )
#define IExplorerCommand_GetCanonicalName(This,pguidCommandName)( (This)->lpVtbl -> GetCanonicalName(This,pguidCommandName) )
#define IExplorerCommand_GetState(This,psiItemArray,fOkToBeSlow,pCmdState)( (This)->lpVtbl -> GetState(This,psiItemArray,fOkToBeSlow,pCmdState) )
#define IExplorerCommand_Invoke(This,psiItemArray,pbc)( (This)->lpVtbl -> Invoke(This,psiItemArray,pbc) )
#define IExplorerCommand_GetFlags(This,pFlags)( (This)->lpVtbl -> GetFlags(This,pFlags) )
#define IExplorerCommand_EnumSubCommands(This,ppEnum)( (This)->lpVtbl -> EnumSubCommands(This,ppEnum) )
#endif
#endif
#ifndef __IExplorerCommandState_INTERFACE_DEFINED__
#define __IExplorerCommandState_INTERFACE_DEFINED__
extern const IID IID_IExplorerCommandState;
typedef struct IExplorerCommandStateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IExplorerCommandState * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExplorerCommandState * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExplorerCommandState * This);
	HRESULT(STDMETHODCALLTYPE * GetState) (IExplorerCommandState * This, IShellItemArray * psiItemArray, BOOL fOkToBeSlow, EXPCMDSTATE * pCmdState);
	END_INTERFACE
}  IExplorerCommandStateVtbl;
interface IExplorerCommandState
{
	CONST_VTBL struct IExplorerCommandStateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExplorerCommandState_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExplorerCommandState_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IExplorerCommandState_Release(This)( (This)->lpVtbl -> Release(This) )
#define IExplorerCommandState_GetState(This,psiItemArray,fOkToBeSlow,pCmdState)( (This)->lpVtbl -> GetState(This,psiItemArray,fOkToBeSlow,pCmdState) )
#endif
#endif
#ifndef __IInitializeCommand_INTERFACE_DEFINED__
#define __IInitializeCommand_INTERFACE_DEFINED__
extern const IID IID_IInitializeCommand;
typedef struct IInitializeCommandVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInitializeCommand * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInitializeCommand * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInitializeCommand * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IInitializeCommand * This, LPCWSTR pszCommandName, IPropertyBag * ppb);
	END_INTERFACE
}  IInitializeCommandVtbl;
interface IInitializeCommand
{
	CONST_VTBL struct IInitializeCommandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInitializeCommand_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInitializeCommand_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInitializeCommand_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInitializeCommand_Initialize(This,pszCommandName,ppb)( (This)->lpVtbl -> Initialize(This,pszCommandName,ppb) )
#endif
#endif
#ifndef __IEnumExplorerCommand_INTERFACE_DEFINED__
#define __IEnumExplorerCommand_INTERFACE_DEFINED__
extern const IID IID_IEnumExplorerCommand;
typedef struct IEnumExplorerCommandVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumExplorerCommand * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumExplorerCommand * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumExplorerCommand * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumExplorerCommand * This, ULONG celt, IExplorerCommand ** pUICommand, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumExplorerCommand * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumExplorerCommand * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumExplorerCommand * This, IEnumExplorerCommand ** ppenum);
	END_INTERFACE
}  IEnumExplorerCommandVtbl;
interface IEnumExplorerCommand
{
	CONST_VTBL struct IEnumExplorerCommandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumExplorerCommand_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumExplorerCommand_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumExplorerCommand_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumExplorerCommand_Next(This,celt,pUICommand,pceltFetched)( (This)->lpVtbl -> Next(This,celt,pUICommand,pceltFetched) )
#define IEnumExplorerCommand_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumExplorerCommand_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumExplorerCommand_Clone(This,ppenum)( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumExplorerCommand_RemoteNext_Proxy(IEnumExplorerCommand * This, ULONG celt, IExplorerCommand ** pUICommand, ULONG * pceltFetched);
void __RPC_STUB IEnumExplorerCommand_RemoteNext_Stub(IRpcStubBuffer * This, IRpcChannelBuffer * _pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD * _pdwStubPhase);
#endif
#ifndef __IExplorerCommandProvider_INTERFACE_DEFINED__
#define __IExplorerCommandProvider_INTERFACE_DEFINED__
extern const IID IID_IExplorerCommandProvider;
typedef struct IExplorerCommandProviderVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (IExplorerCommandProvider *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExplorerCommandProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExplorerCommandProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetCommands) (IExplorerCommandProvider * This, IUnknown * punkSite, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetCommand) (IExplorerCommandProvider * This, REFGUID rguidCommandId, REFIID riid, void **ppv);
	END_INTERFACE
}  IExplorerCommandProviderVtbl;
interface IExplorerCommandProvider
{
	CONST_VTBL struct IExplorerCommandProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExplorerCommandProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExplorerCommandProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IExplorerCommandProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IExplorerCommandProvider_GetCommands(This,punkSite,riid,ppv)( (This)->lpVtbl -> GetCommands(This,punkSite,riid,ppv) )
#define IExplorerCommandProvider_GetCommand(This,rguidCommandId,riid,ppv)( (This)->lpVtbl -> GetCommand(This,rguidCommandId,riid,ppv) )
#endif
#endif
#ifndef __IMarkupCallback_INTERFACE_DEFINED__
#define __IMarkupCallback_INTERFACE_DEFINED__
extern const IID IID_IMarkupCallback;
typedef struct IMarkupCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMarkupCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMarkupCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMarkupCallback * This);
	HRESULT(STDMETHODCALLTYPE * GetState) (IMarkupCallback * This, DWORD dwId, UINT uState);
	HRESULT(STDMETHODCALLTYPE * Notify) (IMarkupCallback * This, DWORD dwId, int nCode, int iLink);
	HRESULT(STDMETHODCALLTYPE * InvalidateRect) (IMarkupCallback * This, DWORD dwId, const RECT * prc);
	HRESULT(STDMETHODCALLTYPE * OnCustomDraw) (IMarkupCallback * This, DWORD dwDrawStage, HDC hdc, const RECT * prc, DWORD dwId, int iLink, UINT uItemState, LRESULT * pdwResult);
	HRESULT(STDMETHODCALLTYPE * CustomDrawText) (IMarkupCallback * This, HDC hDC, LPCWSTR lpString, int nCount, RECT * pRect, UINT uFormat, BOOL fLink);
	END_INTERFACE
}  IMarkupCallbackVtbl;
interface IMarkupCallback
{
	CONST_VTBL struct IMarkupCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMarkupCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMarkupCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMarkupCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMarkupCallback_GetState(This,dwId,uState)( (This)->lpVtbl -> GetState(This,dwId,uState) )
#define IMarkupCallback_Notify(This,dwId,nCode,iLink)( (This)->lpVtbl -> Notify(This,dwId,nCode,iLink) )
#define IMarkupCallback_InvalidateRect(This,dwId,prc)( (This)->lpVtbl -> InvalidateRect(This,dwId,prc) )
#define IMarkupCallback_OnCustomDraw(This,dwDrawStage,hdc,prc,dwId,iLink,uItemState,pdwResult)( (This)->lpVtbl -> OnCustomDraw(This,dwDrawStage,hdc,prc,dwId,iLink,uItemState,pdwResult) )
#define IMarkupCallback_CustomDrawText(This,hDC,lpString,nCount,pRect,uFormat,fLink)( (This)->lpVtbl -> CustomDrawText(This,hDC,lpString,nCount,pRect,uFormat,fLink) )
#endif
#endif
typedef HANDLE HTHEME;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0182_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0182_v0_0_s_ifspec;
#ifndef __IControlMarkup_INTERFACE_DEFINED__
#define __IControlMarkup_INTERFACE_DEFINED__
typedef enum MARKUPSIZE
{
	MARKUPSIZE_CALCWIDTH = 0,
	MARKUPSIZE_CALCHEIGHT = (MARKUPSIZE_CALCWIDTH + 1)
} MARKUPSIZE;
typedef enum MARKUPLINKTEXT
{
	MARKUPLINKTEXT_URL = 0,
	MARKUPLINKTEXT_ID = (MARKUPLINKTEXT_URL + 1),
	MARKUPLINKTEXT_TEXT = (MARKUPLINKTEXT_ID + 1)
} MARKUPLINKTEXT;
enum _MARKUPSTATE
{
	MARKUPSTATE_FOCUSED = 0x1,
	MARKUPSTATE_ENABLED = 0x2,
	MARKUPSTATE_VISITED = 0x4,
	MARKUPSTATE_HOT = 0x8,
	MARKUPSTATE_DEFAULTCOLORS = 0x10,
	MARKUPSTATE_ALLOWMARKUP = 0x40000000
};
typedef DWORD MARKUPSTATE;
typedef enum MARKUPMESSAGE
{
	MARKUPMESSAGE_KEYEXECUTE = 0,
	MARKUPMESSAGE_CLICKEXECUTE = (MARKUPMESSAGE_KEYEXECUTE + 1),
	MARKUPMESSAGE_WANTFOCUS = (MARKUPMESSAGE_CLICKEXECUTE + 1)
} MARKUPMESSAGE;
extern const IID IID_IControlMarkup;
typedef struct IControlMarkupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IControlMarkup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IControlMarkup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IControlMarkup * This);
	HRESULT(STDMETHODCALLTYPE * SetCallback) (IControlMarkup * This, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * GetCallback) (IControlMarkup * This, REFIID riid, void **ppvUnk);
	HRESULT(STDMETHODCALLTYPE * SetId) (IControlMarkup * This, DWORD dwId);
	HRESULT(STDMETHODCALLTYPE * GetId) (IControlMarkup * This, DWORD * pdwId);
	HRESULT(STDMETHODCALLTYPE * SetFonts) (IControlMarkup * This, HFONT hFont, HFONT hFontUnderline);
	HRESULT(STDMETHODCALLTYPE * GetFonts) (IControlMarkup * This, HFONT * phFont, HFONT * phFontUnderline);
	HRESULT(STDMETHODCALLTYPE * SetText) (IControlMarkup * This, LPCWSTR pwszText);
	HRESULT(STDMETHODCALLTYPE * GetText) (IControlMarkup * This, BOOL bRaw, LPWSTR pwszText, DWORD * pdwCch);
	HRESULT(STDMETHODCALLTYPE * SetLinkText) (IControlMarkup * This, int iLink, UINT uMarkupLinkText, LPCWSTR pwszText);
	HRESULT(STDMETHODCALLTYPE * GetLinkText) (IControlMarkup * This, int iLink, UINT uMarkupLinkText, LPWSTR pwszText, DWORD * pdwCch);
	HRESULT(STDMETHODCALLTYPE * SetRenderFlags) (IControlMarkup * This, UINT uDT);
	HRESULT(STDMETHODCALLTYPE * GetRenderFlags) (IControlMarkup * This, UINT * puDT, HTHEME * phTheme, int *piPartId, int *piStateIdNormal, int *piStateIdLink);
	HRESULT(STDMETHODCALLTYPE * SetThemeRenderFlags) (IControlMarkup * This, UINT uDT, HTHEME hTheme, int iPartId, int iStateIdNormal, int iStateIdLink);
	HRESULT(STDMETHODCALLTYPE * GetState) (IControlMarkup * This, int iLink, UINT uStateMask, UINT * puState);
	HRESULT(STDMETHODCALLTYPE * SetState) (IControlMarkup * This, int iLink, UINT uStateMask, UINT uState);
	HRESULT(STDMETHODCALLTYPE * DrawText) (IControlMarkup * This, HDC hdcClient, LPCRECT prcClient);
	HRESULT(STDMETHODCALLTYPE * SetLinkCursor) (IControlMarkup * This);
	HRESULT(STDMETHODCALLTYPE * CalcIdealSize) (IControlMarkup * This, HDC hdc, UINT uMarkUpCalc, RECT * prc);
	HRESULT(STDMETHODCALLTYPE * SetFocus) (IControlMarkup * This);
	HRESULT(STDMETHODCALLTYPE * KillFocus) (IControlMarkup * This);
	HRESULT(STDMETHODCALLTYPE * IsTabbable) (IControlMarkup * This);
	HRESULT(STDMETHODCALLTYPE * OnButtonDown) (IControlMarkup * This, POINT pt);
	HRESULT(STDMETHODCALLTYPE * OnButtonUp) (IControlMarkup * This, POINT pt);
	HRESULT(STDMETHODCALLTYPE * OnKeyDown) (IControlMarkup * This, UINT uVirtKey);
	HRESULT(STDMETHODCALLTYPE * HitTest) (IControlMarkup * This, POINT pt, int *piLink);
	HRESULT(STDMETHODCALLTYPE * GetLinkRect) (IControlMarkup * This, int iLink, RECT * prc);
	HRESULT(STDMETHODCALLTYPE * GetControlRect) (IControlMarkup * This, RECT * prcControl);
	HRESULT(STDMETHODCALLTYPE * GetLinkCount) (IControlMarkup * This, UINT * pcLinks);
	END_INTERFACE
}  IControlMarkupVtbl;
interface IControlMarkup
{
	CONST_VTBL struct IControlMarkupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IControlMarkup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IControlMarkup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IControlMarkup_Release(This)( (This)->lpVtbl -> Release(This) )
#define IControlMarkup_SetCallback(This,punk)( (This)->lpVtbl -> SetCallback(This,punk) )
#define IControlMarkup_GetCallback(This,riid,ppvUnk)( (This)->lpVtbl -> GetCallback(This,riid,ppvUnk) )
#define IControlMarkup_SetId(This,dwId)( (This)->lpVtbl -> SetId(This,dwId) )
#define IControlMarkup_GetId(This,pdwId)( (This)->lpVtbl -> GetId(This,pdwId) )
#define IControlMarkup_SetFonts(This,hFont,hFontUnderline)( (This)->lpVtbl -> SetFonts(This,hFont,hFontUnderline) )
#define IControlMarkup_GetFonts(This,phFont,phFontUnderline)( (This)->lpVtbl -> GetFonts(This,phFont,phFontUnderline) )
#define IControlMarkup_SetText(This,pwszText)( (This)->lpVtbl -> SetText(This,pwszText) )
#define IControlMarkup_GetText(This,bRaw,pwszText,pdwCch)( (This)->lpVtbl -> GetText(This,bRaw,pwszText,pdwCch) )
#define IControlMarkup_SetLinkText(This,iLink,uMarkupLinkText,pwszText)( (This)->lpVtbl -> SetLinkText(This,iLink,uMarkupLinkText,pwszText) )
#define IControlMarkup_GetLinkText(This,iLink,uMarkupLinkText,pwszText,pdwCch)( (This)->lpVtbl -> GetLinkText(This,iLink,uMarkupLinkText,pwszText,pdwCch) )
#define IControlMarkup_SetRenderFlags(This,uDT)( (This)->lpVtbl -> SetRenderFlags(This,uDT) )
#define IControlMarkup_GetRenderFlags(This,puDT,phTheme,piPartId,piStateIdNormal,piStateIdLink)( (This)->lpVtbl -> GetRenderFlags(This,puDT,phTheme,piPartId,piStateIdNormal,piStateIdLink) )
#define IControlMarkup_SetThemeRenderFlags(This,uDT,hTheme,iPartId,iStateIdNormal,iStateIdLink)( (This)->lpVtbl -> SetThemeRenderFlags(This,uDT,hTheme,iPartId,iStateIdNormal,iStateIdLink) )
#define IControlMarkup_GetState(This,iLink,uStateMask,puState)( (This)->lpVtbl -> GetState(This,iLink,uStateMask,puState) )
#define IControlMarkup_SetState(This,iLink,uStateMask,uState)( (This)->lpVtbl -> SetState(This,iLink,uStateMask,uState) )
#define IControlMarkup_DrawText(This,hdcClient,prcClient)( (This)->lpVtbl -> DrawText(This,hdcClient,prcClient) )
#define IControlMarkup_SetLinkCursor(This)( (This)->lpVtbl -> SetLinkCursor(This) )
#define IControlMarkup_CalcIdealSize(This,hdc,uMarkUpCalc,prc)( (This)->lpVtbl -> CalcIdealSize(This,hdc,uMarkUpCalc,prc) )
#define IControlMarkup_SetFocus(This)( (This)->lpVtbl -> SetFocus(This) )
#define IControlMarkup_KillFocus(This)( (This)->lpVtbl -> KillFocus(This) )
#define IControlMarkup_IsTabbable(This)( (This)->lpVtbl -> IsTabbable(This) )
#define IControlMarkup_OnButtonDown(This,pt)( (This)->lpVtbl -> OnButtonDown(This,pt) )
#define IControlMarkup_OnButtonUp(This,pt)( (This)->lpVtbl -> OnButtonUp(This,pt) )
#define IControlMarkup_OnKeyDown(This,uVirtKey)( (This)->lpVtbl -> OnKeyDown(This,uVirtKey) )
#define IControlMarkup_HitTest(This,pt,piLink)( (This)->lpVtbl -> HitTest(This,pt,piLink) )
#define IControlMarkup_GetLinkRect(This,iLink,prc)( (This)->lpVtbl -> GetLinkRect(This,iLink,prc) )
#define IControlMarkup_GetControlRect(This,prcControl)( (This)->lpVtbl -> GetControlRect(This,prcControl) )
#define IControlMarkup_GetLinkCount(This,pcLinks)( (This)->lpVtbl -> GetLinkCount(This,pcLinks) )
#endif
#endif
#ifndef __IInitializeNetworkFolder_INTERFACE_DEFINED__
#define __IInitializeNetworkFolder_INTERFACE_DEFINED__
extern const IID IID_IInitializeNetworkFolder;
typedef struct IInitializeNetworkFolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInitializeNetworkFolder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInitializeNetworkFolder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInitializeNetworkFolder * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IInitializeNetworkFolder * This, PCIDLIST_ABSOLUTE pidl, PCIDLIST_ABSOLUTE pidlTarget, UINT uDisplayType, LPCWSTR pszResName, LPCWSTR pszProvider);
	END_INTERFACE
}  IInitializeNetworkFolderVtbl;
interface IInitializeNetworkFolder
{
	CONST_VTBL struct IInitializeNetworkFolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInitializeNetworkFolder_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInitializeNetworkFolder_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInitializeNetworkFolder_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInitializeNetworkFolder_Initialize(This,pidl,pidlTarget,uDisplayType,pszResName,pszProvider)( (This)->lpVtbl -> Initialize(This,pidl,pidlTarget,uDisplayType,pszResName,pszProvider) )
#endif
#endif
typedef enum CPVIEW
{
	CPVIEW_CLASSIC = 0,
	CPVIEW_ALLITEMS = CPVIEW_CLASSIC,
	CPVIEW_CATEGORY = 1,
	CPVIEW_HOME = CPVIEW_CATEGORY
} CPVIEW;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0184_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0184_v0_0_s_ifspec;
#ifndef __IOpenControlPanel_INTERFACE_DEFINED__
#define __IOpenControlPanel_INTERFACE_DEFINED__
extern const IID IID_IOpenControlPanel;
typedef struct IOpenControlPanelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpenControlPanel * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpenControlPanel * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpenControlPanel * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IOpenControlPanel * This, LPCWSTR pszName, LPCWSTR pszPage, IUnknown * punkSite);
	HRESULT(STDMETHODCALLTYPE * GetPath) (IOpenControlPanel * This, LPCWSTR pszName, LPWSTR pszPath, UINT cchPath);
	HRESULT(STDMETHODCALLTYPE * GetCurrentView) (IOpenControlPanel * This, CPVIEW * pView);
	END_INTERFACE
}  IOpenControlPanelVtbl;
interface IOpenControlPanel
{
	CONST_VTBL struct IOpenControlPanelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpenControlPanel_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpenControlPanel_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IOpenControlPanel_Release(This)( (This)->lpVtbl -> Release(This) )
#define IOpenControlPanel_Open(This,pszName,pszPage,punkSite)( (This)->lpVtbl -> Open(This,pszName,pszPage,punkSite) )
#define IOpenControlPanel_GetPath(This,pszName,pszPath,cchPath)( (This)->lpVtbl -> GetPath(This,pszName,pszPath,cchPath) )
#define IOpenControlPanel_GetCurrentView(This,pView)( (This)->lpVtbl -> GetCurrentView(This,pView) )
#endif
#endif
#ifndef __IComputerInfoChangeNotify_INTERFACE_DEFINED__
#define __IComputerInfoChangeNotify_INTERFACE_DEFINED__
extern const IID IID_IComputerInfoChangeNotify;
typedef struct IComputerInfoChangeNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComputerInfoChangeNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComputerInfoChangeNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComputerInfoChangeNotify * This);
	HRESULT(STDMETHODCALLTYPE * ComputerInfoChanged) (IComputerInfoChangeNotify * This);
	END_INTERFACE
}  IComputerInfoChangeNotifyVtbl;
interface IComputerInfoChangeNotify
{
	CONST_VTBL struct IComputerInfoChangeNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComputerInfoChangeNotify_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComputerInfoChangeNotify_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IComputerInfoChangeNotify_Release(This)( (This)->lpVtbl -> Release(This) )
#define IComputerInfoChangeNotify_ComputerInfoChanged(This)( (This)->lpVtbl -> ComputerInfoChanged(This) )
#endif
#endif
#define STR_FILE_SYS_BIND_DATA      L"File System Bind Data"
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0186_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0186_v0_0_s_ifspec;
#ifndef __IFileSystemBindData_INTERFACE_DEFINED__
#define __IFileSystemBindData_INTERFACE_DEFINED__
extern const IID IID_IFileSystemBindData;
typedef struct IFileSystemBindDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFileSystemBindData * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFileSystemBindData * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFileSystemBindData * This);
	HRESULT(STDMETHODCALLTYPE * SetFindData) (IFileSystemBindData * This, const WIN32_FIND_DATAW * pfd);
	HRESULT(STDMETHODCALLTYPE * GetFindData) (IFileSystemBindData * This, WIN32_FIND_DATAW * pfd);
	END_INTERFACE
}  IFileSystemBindDataVtbl;
interface IFileSystemBindData
{
	CONST_VTBL struct IFileSystemBindDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileSystemBindData_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileSystemBindData_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileSystemBindData_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileSystemBindData_SetFindData(This,pfd)( (This)->lpVtbl -> SetFindData(This,pfd) )
#define IFileSystemBindData_GetFindData(This,pfd)( (This)->lpVtbl -> GetFindData(This,pfd) )
#endif
#endif
#ifndef __IFileSystemBindData2_INTERFACE_DEFINED__
#define __IFileSystemBindData2_INTERFACE_DEFINED__
extern const IID IID_IFileSystemBindData2;
typedef struct IFileSystemBindData2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFileSystemBindData2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFileSystemBindData2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFileSystemBindData2 * This);
	HRESULT(STDMETHODCALLTYPE * SetFindData) (IFileSystemBindData2 * This, const WIN32_FIND_DATAW * pfd);
	HRESULT(STDMETHODCALLTYPE * GetFindData) (IFileSystemBindData2 * This, WIN32_FIND_DATAW * pfd);
	HRESULT(STDMETHODCALLTYPE * SetFileID) (IFileSystemBindData2 * This, LARGE_INTEGER liFileID);
	HRESULT(STDMETHODCALLTYPE * GetFileID) (IFileSystemBindData2 * This, LARGE_INTEGER * pliFileID);
	HRESULT(STDMETHODCALLTYPE * SetJunctionCLSID) (IFileSystemBindData2 * This, REFCLSID clsid);
	HRESULT(STDMETHODCALLTYPE * GetJunctionCLSID) (IFileSystemBindData2 * This, CLSID * pclsid);
	END_INTERFACE
}  IFileSystemBindData2Vtbl;
interface IFileSystemBindData2
{
	CONST_VTBL struct IFileSystemBindData2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileSystemBindData2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileSystemBindData2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileSystemBindData2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileSystemBindData2_SetFindData(This,pfd)( (This)->lpVtbl -> SetFindData(This,pfd) )
#define IFileSystemBindData2_GetFindData(This,pfd)( (This)->lpVtbl -> GetFindData(This,pfd) )
#define IFileSystemBindData2_SetFileID(This,liFileID)( (This)->lpVtbl -> SetFileID(This,liFileID) )
#define IFileSystemBindData2_GetFileID(This,pliFileID)( (This)->lpVtbl -> GetFileID(This,pliFileID) )
#define IFileSystemBindData2_SetJunctionCLSID(This,clsid)( (This)->lpVtbl -> SetJunctionCLSID(This,clsid) )
#define IFileSystemBindData2_GetJunctionCLSID(This,pclsid)( (This)->lpVtbl -> GetJunctionCLSID(This,pclsid) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0188_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0188_v0_0_s_ifspec;
#ifndef __ICustomDestinationList_INTERFACE_DEFINED__
#define __ICustomDestinationList_INTERFACE_DEFINED__
typedef enum KNOWNDESTCATEGORY
{
	KDC_FREQUENT = 1,
	KDC_RECENT = (KDC_FREQUENT + 1)
} KNOWNDESTCATEGORY;
extern const IID IID_ICustomDestinationList;
typedef struct ICustomDestinationListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICustomDestinationList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICustomDestinationList * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICustomDestinationList * This);
	HRESULT(STDMETHODCALLTYPE * SetAppID) (ICustomDestinationList * This, LPCWSTR pszAppID);
	HRESULT(STDMETHODCALLTYPE * BeginList) (ICustomDestinationList * This, UINT * pcMinSlots, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * AppendCategory) (ICustomDestinationList * This, LPCWSTR pszCategory, IObjectArray * poa);
	HRESULT(STDMETHODCALLTYPE * AppendKnownCategory) (ICustomDestinationList * This, KNOWNDESTCATEGORY category);
	HRESULT(STDMETHODCALLTYPE * AddUserTasks) (ICustomDestinationList * This, IObjectArray * poa);
	HRESULT(STDMETHODCALLTYPE * CommitList) (ICustomDestinationList * This);
	HRESULT(STDMETHODCALLTYPE * GetRemovedDestinations) (ICustomDestinationList * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * DeleteList) (ICustomDestinationList * This, LPCWSTR pszAppID);
	HRESULT(STDMETHODCALLTYPE * AbortList) (ICustomDestinationList * This);
	END_INTERFACE
}  ICustomDestinationListVtbl;
interface ICustomDestinationList
{
	CONST_VTBL struct ICustomDestinationListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICustomDestinationList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICustomDestinationList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICustomDestinationList_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICustomDestinationList_SetAppID(This,pszAppID)( (This)->lpVtbl -> SetAppID(This,pszAppID) )
#define ICustomDestinationList_BeginList(This,pcMinSlots,riid,ppv)( (This)->lpVtbl -> BeginList(This,pcMinSlots,riid,ppv) )
#define ICustomDestinationList_AppendCategory(This,pszCategory,poa)( (This)->lpVtbl -> AppendCategory(This,pszCategory,poa) )
#define ICustomDestinationList_AppendKnownCategory(This,category)( (This)->lpVtbl -> AppendKnownCategory(This,category) )
#define ICustomDestinationList_AddUserTasks(This,poa)( (This)->lpVtbl -> AddUserTasks(This,poa) )
#define ICustomDestinationList_CommitList(This)( (This)->lpVtbl -> CommitList(This) )
#define ICustomDestinationList_GetRemovedDestinations(This,riid,ppv)( (This)->lpVtbl -> GetRemovedDestinations(This,riid,ppv) )
#define ICustomDestinationList_DeleteList(This,pszAppID)( (This)->lpVtbl -> DeleteList(This,pszAppID) )
#define ICustomDestinationList_AbortList(This)( (This)->lpVtbl -> AbortList(This) )
#endif
#endif
#ifndef __IApplicationDestinations_INTERFACE_DEFINED__
#define __IApplicationDestinations_INTERFACE_DEFINED__
extern const IID IID_IApplicationDestinations;
typedef struct IApplicationDestinationsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IApplicationDestinations * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IApplicationDestinations * This);
	ULONG(STDMETHODCALLTYPE * Release) (IApplicationDestinations * This);
	HRESULT(STDMETHODCALLTYPE * SetAppID) (IApplicationDestinations * This, LPCWSTR pszAppID);
	HRESULT(STDMETHODCALLTYPE * RemoveDestination) (IApplicationDestinations * This, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * RemoveAllDestinations) (IApplicationDestinations * This);
	END_INTERFACE
}  IApplicationDestinationsVtbl;
interface IApplicationDestinations
{
	CONST_VTBL struct IApplicationDestinationsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IApplicationDestinations_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IApplicationDestinations_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IApplicationDestinations_Release(This)( (This)->lpVtbl -> Release(This) )
#define IApplicationDestinations_SetAppID(This,pszAppID)( (This)->lpVtbl -> SetAppID(This,pszAppID) )
#define IApplicationDestinations_RemoveDestination(This,punk)( (This)->lpVtbl -> RemoveDestination(This,punk) )
#define IApplicationDestinations_RemoveAllDestinations(This)( (This)->lpVtbl -> RemoveAllDestinations(This) )
#endif
#endif
#ifndef __IApplicationDocumentLists_INTERFACE_DEFINED__
#define __IApplicationDocumentLists_INTERFACE_DEFINED__
typedef enum APPDOCLISTTYPE
{
	ADLT_RECENT = 0,
	ADLT_FREQUENT = (ADLT_RECENT + 1)
} APPDOCLISTTYPE;
extern const IID IID_IApplicationDocumentLists;
typedef struct IApplicationDocumentListsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IApplicationDocumentLists * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IApplicationDocumentLists * This);
	ULONG(STDMETHODCALLTYPE * Release) (IApplicationDocumentLists * This);
	HRESULT(STDMETHODCALLTYPE * SetAppID) (IApplicationDocumentLists * This, LPCWSTR pszAppID);
	HRESULT(STDMETHODCALLTYPE * GetList) (IApplicationDocumentLists * This, APPDOCLISTTYPE listtype, UINT cItemsDesired, REFIID riid, void **ppv);
	END_INTERFACE
}  IApplicationDocumentListsVtbl;
interface IApplicationDocumentLists
{
	CONST_VTBL struct IApplicationDocumentListsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IApplicationDocumentLists_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IApplicationDocumentLists_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IApplicationDocumentLists_Release(This)( (This)->lpVtbl -> Release(This) )
#define IApplicationDocumentLists_SetAppID(This,pszAppID)( (This)->lpVtbl -> SetAppID(This,pszAppID) )
#define IApplicationDocumentLists_GetList(This,listtype,cItemsDesired,riid,ppv)( (This)->lpVtbl -> GetList(This,listtype,cItemsDesired,riid,ppv) )
#endif
#endif
#ifndef __IObjectWithAppUserModelID_INTERFACE_DEFINED__
#define __IObjectWithAppUserModelID_INTERFACE_DEFINED__
extern const IID IID_IObjectWithAppUserModelID;
typedef struct IObjectWithAppUserModelIDVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IObjectWithAppUserModelID * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IObjectWithAppUserModelID * This);
	ULONG(STDMETHODCALLTYPE * Release) (IObjectWithAppUserModelID * This);
	HRESULT(STDMETHODCALLTYPE * SetAppID) (IObjectWithAppUserModelID * This, LPCWSTR pszAppID);
	HRESULT(STDMETHODCALLTYPE * GetAppID) (IObjectWithAppUserModelID * This, LPWSTR * ppszAppID);
	END_INTERFACE
}  IObjectWithAppUserModelIDVtbl;
interface IObjectWithAppUserModelID
{
	CONST_VTBL struct IObjectWithAppUserModelIDVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectWithAppUserModelID_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectWithAppUserModelID_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectWithAppUserModelID_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectWithAppUserModelID_SetAppID(This,pszAppID)( (This)->lpVtbl -> SetAppID(This,pszAppID) )
#define IObjectWithAppUserModelID_GetAppID(This,ppszAppID)( (This)->lpVtbl -> GetAppID(This,ppszAppID) )
#endif
#endif
#ifndef __IObjectWithProgID_INTERFACE_DEFINED__
#define __IObjectWithProgID_INTERFACE_DEFINED__
extern const IID IID_IObjectWithProgID;
typedef struct IObjectWithProgIDVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IObjectWithProgID * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IObjectWithProgID * This);
	ULONG(STDMETHODCALLTYPE * Release) (IObjectWithProgID * This);
	HRESULT(STDMETHODCALLTYPE * SetProgID) (IObjectWithProgID * This, LPCWSTR pszProgID);
	HRESULT(STDMETHODCALLTYPE * GetProgID) (IObjectWithProgID * This, LPWSTR * ppszProgID);
	END_INTERFACE
}  IObjectWithProgIDVtbl;
interface IObjectWithProgID
{
	CONST_VTBL struct IObjectWithProgIDVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectWithProgID_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectWithProgID_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectWithProgID_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectWithProgID_SetProgID(This,pszProgID)( (This)->lpVtbl -> SetProgID(This,pszProgID) )
#define IObjectWithProgID_GetProgID(This,ppszProgID)( (This)->lpVtbl -> GetProgID(This,ppszProgID) )
#endif
#endif
#ifndef __IUpdateIDList_INTERFACE_DEFINED__
#define __IUpdateIDList_INTERFACE_DEFINED__
extern const IID IID_IUpdateIDList;
typedef struct IUpdateIDListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUpdateIDList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUpdateIDList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUpdateIDList * This);
	HRESULT(STDMETHODCALLTYPE * Update) (IUpdateIDList * This, IBindCtx * pbc, PCUITEMID_CHILD pidlIn, PITEMID_CHILD * ppidlOut);
	END_INTERFACE
}  IUpdateIDListVtbl;
interface IUpdateIDList
{
	CONST_VTBL struct IUpdateIDListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUpdateIDList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUpdateIDList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IUpdateIDList_Release(This)( (This)->lpVtbl -> Release(This) )
#define IUpdateIDList_Update(This,pbc,pidlIn,ppidlOut)( (This)->lpVtbl -> Update(This,pbc,pidlIn,ppidlOut) )
#endif
#endif
SHSTDAPI SetCurrentProcessExplicitAppUserModelID(PCWSTR AppID);
SHSTDAPI GetCurrentProcessExplicitAppUserModelID(PWSTR * AppID);
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0194_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0194_v0_0_s_ifspec;
#ifndef __IDesktopGadget_INTERFACE_DEFINED__
#define __IDesktopGadget_INTERFACE_DEFINED__
extern const IID IID_IDesktopGadget;
typedef struct IDesktopGadgetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDesktopGadget * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDesktopGadget * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDesktopGadget * This);
	HRESULT(STDMETHODCALLTYPE * RunGadget) (IDesktopGadget * This, LPCWSTR gadgetPath);
	END_INTERFACE
}  IDesktopGadgetVtbl;
interface IDesktopGadget
{
	CONST_VTBL struct IDesktopGadgetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDesktopGadget_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDesktopGadget_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDesktopGadget_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDesktopGadget_RunGadget(This,gadgetPath)( (This)->lpVtbl -> RunGadget(This,gadgetPath) )
#endif
#endif
#define HOMEGROUP_SECURITY_GROUP L"HomeUsers"
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0195_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0195_v0_0_s_ifspec;
#ifndef __IHomeGroup_INTERFACE_DEFINED__
#define __IHomeGroup_INTERFACE_DEFINED__
typedef enum HOMEGROUPSHARINGCHOICES
{
	HGSC_NONE = 0,
	HGSC_MUSICLIBRARY = 0x1,
	HGSC_PICTURESLIBRARY = 0x2,
	HGSC_VIDEOSLIBRARY = 0x4,
	HGSC_DOCUMENTSLIBRARY = 0x8,
	HGSC_PRINTERS = 0x10
} HOMEGROUPSHARINGCHOICES;
DEFINE_ENUM_FLAG_OPERATORS(HOMEGROUPSHARINGCHOICES)
extern const IID IID_IHomeGroup;
typedef struct IHomeGroupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IHomeGroup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHomeGroup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHomeGroup * This);
	HRESULT(STDMETHODCALLTYPE * IsMember) (IHomeGroup * This, BOOL * member);
	HRESULT(STDMETHODCALLTYPE * ShowSharingWizard) (IHomeGroup * This, HWND owner, HOMEGROUPSHARINGCHOICES * sharingchoices);
	END_INTERFACE
}  IHomeGroupVtbl;
interface IHomeGroup
{
	CONST_VTBL struct IHomeGroupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHomeGroup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHomeGroup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IHomeGroup_Release(This)( (This)->lpVtbl -> Release(This) )
#define IHomeGroup_IsMember(This,member)( (This)->lpVtbl -> IsMember(This,member) )
#define IHomeGroup_ShowSharingWizard(This,owner,sharingchoices)( (This)->lpVtbl -> ShowSharingWizard(This,owner,sharingchoices) )
#endif
#endif
#ifndef __IInitializeWithPropertyStore_INTERFACE_DEFINED__
#define __IInitializeWithPropertyStore_INTERFACE_DEFINED__
extern const IID IID_IInitializeWithPropertyStore;
typedef struct IInitializeWithPropertyStoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInitializeWithPropertyStore * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInitializeWithPropertyStore * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInitializeWithPropertyStore * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IInitializeWithPropertyStore * This, IPropertyStore * pps);
	END_INTERFACE
}  IInitializeWithPropertyStoreVtbl;
interface IInitializeWithPropertyStore
{
	CONST_VTBL struct IInitializeWithPropertyStoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInitializeWithPropertyStore_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInitializeWithPropertyStore_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IInitializeWithPropertyStore_Release(This)( (This)->lpVtbl -> Release(This) )
#define IInitializeWithPropertyStore_Initialize(This,pps)( (This)->lpVtbl -> Initialize(This,pps) )
#endif
#endif
#ifndef __IOpenSearchSource_INTERFACE_DEFINED__
#define __IOpenSearchSource_INTERFACE_DEFINED__
extern const IID IID_IOpenSearchSource;
typedef struct IOpenSearchSourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpenSearchSource * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpenSearchSource * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpenSearchSource * This);
	HRESULT(STDMETHODCALLTYPE * GetResults) (IOpenSearchSource * This, HWND hwnd, LPCWSTR pszQuery, DWORD dwStartIndex, DWORD dwCount, REFIID riid, void **ppv);
	END_INTERFACE
}  IOpenSearchSourceVtbl;
interface IOpenSearchSource
{
	CONST_VTBL struct IOpenSearchSourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpenSearchSource_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpenSearchSource_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IOpenSearchSource_Release(This)( (This)->lpVtbl -> Release(This) )
#define IOpenSearchSource_GetResults(This,hwnd,pszQuery,dwStartIndex,dwCount,riid,ppv)( (This)->lpVtbl -> GetResults(This,hwnd,pszQuery,dwStartIndex,dwCount,riid,ppv) )
#endif
#endif
#ifndef __IShellLibrary_INTERFACE_DEFINED__
#define __IShellLibrary_INTERFACE_DEFINED__
typedef enum LIBRARYFOLDERFILTER
{
	LFF_FORCEFILESYSTEM = 1,
	LFF_STORAGEITEMS = 2,
	LFF_ALLITEMS = 3
} LIBRARYFOLDERFILTER;
typedef enum LIBRARYOPTIONFLAGS
{
	LOF_DEFAULT = 0,
	LOF_PINNEDTONAVPANE = 0x1,
	LOF_MASK_ALL = 0x1
} LIBRARYOPTIONFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(LIBRARYOPTIONFLAGS)
typedef enum DEFAULTSAVEFOLDERTYPE
{
	DSFT_DETECT = 1,
	DSFT_PRIVATE = (DSFT_DETECT + 1),
	DSFT_PUBLIC = (DSFT_PRIVATE + 1)
} DEFAULTSAVEFOLDERTYPE;
typedef enum LIBRARYSAVEFLAGS
{
	LSF_FAILIFTHERE = 0,
	LSF_OVERRIDEEXISTING = 0x1,
	LSF_MAKEUNIQUENAME = 0x2
} LIBRARYSAVEFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(LIBRARYSAVEFLAGS)
extern const IID IID_IShellLibrary;
typedef struct IShellLibraryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellLibrary * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellLibrary * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellLibrary * This);
	HRESULT(STDMETHODCALLTYPE * LoadLibraryFromItem) (IShellLibrary * This, IShellItem * psiLibrary, DWORD grfMode);
	HRESULT(STDMETHODCALLTYPE * LoadLibraryFromKnownFolder) (IShellLibrary * This, REFKNOWNFOLDERID kfidLibrary, DWORD grfMode);
	HRESULT(STDMETHODCALLTYPE * AddFolder) (IShellLibrary * This, IShellItem * psiLocation);
	HRESULT(STDMETHODCALLTYPE * RemoveFolder) (IShellLibrary * This, IShellItem * psiLocation);
	HRESULT(STDMETHODCALLTYPE * GetFolders) (IShellLibrary * This, LIBRARYFOLDERFILTER lff, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * ResolveFolder) (IShellLibrary * This, IShellItem * psiFolderToResolve, DWORD dwTimeout, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetDefaultSaveFolder) (IShellLibrary * This, DEFAULTSAVEFOLDERTYPE dsft, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * SetDefaultSaveFolder) (IShellLibrary * This, DEFAULTSAVEFOLDERTYPE dsft, IShellItem * psi);
	HRESULT(STDMETHODCALLTYPE * GetOptions) (IShellLibrary * This, LIBRARYOPTIONFLAGS * plofOptions);
	HRESULT(STDMETHODCALLTYPE * SetOptions) (IShellLibrary * This, LIBRARYOPTIONFLAGS lofMask, LIBRARYOPTIONFLAGS lofOptions);
	HRESULT(STDMETHODCALLTYPE * GetFolderType) (IShellLibrary * This, FOLDERTYPEID * pftid);
	HRESULT(STDMETHODCALLTYPE * SetFolderType) (IShellLibrary * This, REFFOLDERTYPEID ftid);
	HRESULT(STDMETHODCALLTYPE * GetIcon) (IShellLibrary * This, LPWSTR * ppszIcon);
	HRESULT(STDMETHODCALLTYPE * SetIcon) (IShellLibrary * This, LPCWSTR pszIcon);
	HRESULT(STDMETHODCALLTYPE * Commit) (IShellLibrary * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IShellLibrary * This, IShellItem * psiFolderToSaveIn, LPCWSTR pszLibraryName, LIBRARYSAVEFLAGS lsf, IShellItem ** ppsiSavedTo);
	HRESULT(STDMETHODCALLTYPE * SaveInKnownFolder) (IShellLibrary * This, REFKNOWNFOLDERID kfidToSaveIn, LPCWSTR pszLibraryName, LIBRARYSAVEFLAGS lsf, IShellItem ** ppsiSavedTo);
	END_INTERFACE
}  IShellLibraryVtbl;
interface IShellLibrary
{
	CONST_VTBL struct IShellLibraryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellLibrary_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellLibrary_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellLibrary_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellLibrary_LoadLibraryFromItem(This,psiLibrary,grfMode)( (This)->lpVtbl -> LoadLibraryFromItem(This,psiLibrary,grfMode) )
#define IShellLibrary_LoadLibraryFromKnownFolder(This,kfidLibrary,grfMode)( (This)->lpVtbl -> LoadLibraryFromKnownFolder(This,kfidLibrary,grfMode) )
#define IShellLibrary_AddFolder(This,psiLocation)( (This)->lpVtbl -> AddFolder(This,psiLocation) )
#define IShellLibrary_RemoveFolder(This,psiLocation)( (This)->lpVtbl -> RemoveFolder(This,psiLocation) )
#define IShellLibrary_GetFolders(This,lff,riid,ppv)( (This)->lpVtbl -> GetFolders(This,lff,riid,ppv) )
#define IShellLibrary_ResolveFolder(This,psiFolderToResolve,dwTimeout,riid,ppv)( (This)->lpVtbl -> ResolveFolder(This,psiFolderToResolve,dwTimeout,riid,ppv) )
#define IShellLibrary_GetDefaultSaveFolder(This,dsft,riid,ppv)( (This)->lpVtbl -> GetDefaultSaveFolder(This,dsft,riid,ppv) )
#define IShellLibrary_SetDefaultSaveFolder(This,dsft,psi)( (This)->lpVtbl -> SetDefaultSaveFolder(This,dsft,psi) )
#define IShellLibrary_GetOptions(This,plofOptions)( (This)->lpVtbl -> GetOptions(This,plofOptions) )
#define IShellLibrary_SetOptions(This,lofMask,lofOptions)( (This)->lpVtbl -> SetOptions(This,lofMask,lofOptions) )
#define IShellLibrary_GetFolderType(This,pftid)( (This)->lpVtbl -> GetFolderType(This,pftid) )
#define IShellLibrary_SetFolderType(This,ftid)( (This)->lpVtbl -> SetFolderType(This,ftid) )
#define IShellLibrary_GetIcon(This,ppszIcon)( (This)->lpVtbl -> GetIcon(This,ppszIcon) )
#define IShellLibrary_SetIcon(This,pszIcon)( (This)->lpVtbl -> SetIcon(This,pszIcon) )
#define IShellLibrary_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IShellLibrary_Save(This,psiFolderToSaveIn,pszLibraryName,lsf,ppsiSavedTo)( (This)->lpVtbl -> Save(This,psiFolderToSaveIn,pszLibraryName,lsf,ppsiSavedTo) )
#define IShellLibrary_SaveInKnownFolder(This,kfidToSaveIn,pszLibraryName,lsf,ppsiSavedTo)( (This)->lpVtbl -> SaveInKnownFolder(This,kfidToSaveIn,pszLibraryName,lsf,ppsiSavedTo) )
#endif
#endif
#ifndef __ShellObjects_LIBRARY_DEFINED__
#define __ShellObjects_LIBRARY_DEFINED__
#define SID_PublishingWizard CLSID_PublishingWizard
extern const IID LIBID_ShellObjects;
extern const CLSID CLSID_ShellDesktop;
extern const CLSID CLSID_ShellFSFolder;
extern const CLSID CLSID_NetworkPlaces;
extern const CLSID CLSID_ShellLink;
extern const CLSID CLSID_QueryCancelAutoPlay;
extern const CLSID CLSID_DriveSizeCategorizer;
extern const CLSID CLSID_DriveTypeCategorizer;
extern const CLSID CLSID_FreeSpaceCategorizer;
extern const CLSID CLSID_TimeCategorizer;
extern const CLSID CLSID_SizeCategorizer;
extern const CLSID CLSID_AlphabeticalCategorizer;
extern const CLSID CLSID_MergedCategorizer;
extern const CLSID CLSID_ImageProperties;
extern const CLSID CLSID_PropertiesUI;
extern const CLSID CLSID_UserNotification;
extern const CLSID CLSID_CDBurn;
extern const CLSID CLSID_TaskbarList;
extern const CLSID CLSID_StartMenuPin;
extern const CLSID CLSID_WebWizardHost;
extern const CLSID CLSID_PublishDropTarget;
extern const CLSID CLSID_PublishingWizard;
extern const CLSID CLSID_InternetPrintOrdering;
extern const CLSID CLSID_FolderViewHost;
extern const CLSID CLSID_ExplorerBrowser;
extern const CLSID CLSID_ImageRecompress;
extern const CLSID CLSID_TrayBandSiteService;
extern const CLSID CLSID_TrayDeskBand;
extern const CLSID CLSID_AttachmentServices;
extern const CLSID CLSID_DocPropShellExtension;
extern const CLSID CLSID_ShellItem;
extern const CLSID CLSID_NamespaceWalker;
extern const CLSID CLSID_FileOperation;
extern const CLSID CLSID_FileOpenDialog;
extern const CLSID CLSID_FileSaveDialog;
extern const CLSID CLSID_KnownFolderManager;
extern const CLSID CLSID_FSCopyHandler;
extern const CLSID CLSID_SharingConfigurationManager;
extern const CLSID CLSID_PreviousVersions;
extern const CLSID CLSID_NetworkConnections;
extern const CLSID CLSID_NamespaceTreeControl;
extern const CLSID CLSID_IENamespaceTreeControl;
extern const CLSID CLSID_ScheduledTasks;
extern const CLSID CLSID_ApplicationAssociationRegistration;
extern const CLSID CLSID_ApplicationAssociationRegistrationUI;
extern const CLSID CLSID_SearchFolderItemFactory;
extern const CLSID CLSID_OpenControlPanel;
extern const CLSID CLSID_MailRecipient;
extern const CLSID CLSID_NetworkExplorerFolder;
extern const CLSID CLSID_DestinationList;
extern const CLSID CLSID_ApplicationDestinations;
extern const CLSID CLSID_ApplicationDocumentLists;
extern const CLSID CLSID_HomeGroup;
extern const CLSID CLSID_ShellLibrary;
extern const CLSID CLSID_AppStartupLink;
extern const CLSID CLSID_EnumerableObjectCollection;
extern const CLSID CLSID_DesktopGadget;
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI SHGetTemporaryPropertyForItem(IShellItem * psi, REFPROPERTYKEY propkey, PROPVARIANT * ppropvar);
SHSTDAPI SHSetTemporaryPropertyForItem(IShellItem * psi, REFPROPERTYKEY propkey, REFPROPVARIANT propvar);
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
#if (_WIN32_IE >= _WIN32_IE_IE70)
typedef enum LIBRARYMANAGEDIALOGOPTIONS
{
	LMD_DEFAULT = 0,
	LMD_ALLOWUNINDEXABLENETWORKLOCATIONS = 0x1
} LIBRARYMANAGEDIALOGOPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(LIBRARYMANAGEDIALOGOPTIONS)
SHSTDAPI SHShowManageLibraryUI(IShellItem * psiLibrary, HWND hwndOwner, LPCWSTR pszTitle, LPCWSTR pszInstruction, LIBRARYMANAGEDIALOGOPTIONS lmdOptions);
SHSTDAPI SHResolveLibrary(IShellItem * psiLibrary);
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0199_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0199_v0_0_s_ifspec;
#ifndef __IAssocHandlerInvoker_INTERFACE_DEFINED__
#define __IAssocHandlerInvoker_INTERFACE_DEFINED__
extern const IID IID_IAssocHandlerInvoker;
typedef struct IAssocHandlerInvokerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAssocHandlerInvoker * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAssocHandlerInvoker * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAssocHandlerInvoker * This);
	HRESULT(STDMETHODCALLTYPE * SupportsSelection) (IAssocHandlerInvoker * This);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAssocHandlerInvoker * This);
	END_INTERFACE
}  IAssocHandlerInvokerVtbl;
interface IAssocHandlerInvoker
{
	CONST_VTBL struct IAssocHandlerInvokerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAssocHandlerInvoker_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAssocHandlerInvoker_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAssocHandlerInvoker_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAssocHandlerInvoker_SupportsSelection(This)( (This)->lpVtbl -> SupportsSelection(This) )
#define IAssocHandlerInvoker_Invoke(This)( (This)->lpVtbl -> Invoke(This) )
#endif
#endif
#ifndef __IAssocHandler_INTERFACE_DEFINED__
#define __IAssocHandler_INTERFACE_DEFINED__
extern const IID IID_IAssocHandler;
typedef struct IAssocHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAssocHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAssocHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAssocHandler * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (IAssocHandler * This, LPWSTR * ppsz);
	HRESULT(STDMETHODCALLTYPE * GetUIName) (IAssocHandler * This, LPWSTR * ppsz);
	HRESULT(STDMETHODCALLTYPE * GetIconLocation) (IAssocHandler * This, LPWSTR * ppszPath, int *pIndex);
	HRESULT(STDMETHODCALLTYPE * IsRecommended) (IAssocHandler * This);
	HRESULT(STDMETHODCALLTYPE * MakeDefault) (IAssocHandler * This, LPCWSTR pszDescription);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAssocHandler * This, IDataObject * pdo);
	HRESULT(STDMETHODCALLTYPE * CreateInvoker) (IAssocHandler * This, IDataObject * pdo, IAssocHandlerInvoker ** ppInvoker);
	END_INTERFACE
}  IAssocHandlerVtbl;
interface IAssocHandler
{
	CONST_VTBL struct IAssocHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAssocHandler_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAssocHandler_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAssocHandler_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAssocHandler_GetName(This,ppsz)( (This)->lpVtbl -> GetName(This,ppsz) )
#define IAssocHandler_GetUIName(This,ppsz)( (This)->lpVtbl -> GetUIName(This,ppsz) )
#define IAssocHandler_GetIconLocation(This,ppszPath,pIndex)( (This)->lpVtbl -> GetIconLocation(This,ppszPath,pIndex) )
#define IAssocHandler_IsRecommended(This)( (This)->lpVtbl -> IsRecommended(This) )
#define IAssocHandler_MakeDefault(This,pszDescription)( (This)->lpVtbl -> MakeDefault(This,pszDescription) )
#define IAssocHandler_Invoke(This,pdo)( (This)->lpVtbl -> Invoke(This,pdo) )
#define IAssocHandler_CreateInvoker(This,pdo,ppInvoker)( (This)->lpVtbl -> CreateInvoker(This,pdo,ppInvoker) )
#endif
#endif
#ifndef __IEnumAssocHandlers_INTERFACE_DEFINED__
#define __IEnumAssocHandlers_INTERFACE_DEFINED__
extern const IID IID_IEnumAssocHandlers;
typedef struct IEnumAssocHandlersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumAssocHandlers * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumAssocHandlers * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumAssocHandlers * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumAssocHandlers * This, ULONG celt, IAssocHandler ** rgelt, ULONG * pceltFetched);
	END_INTERFACE
}  IEnumAssocHandlersVtbl;
interface IEnumAssocHandlers
{
	CONST_VTBL struct IEnumAssocHandlersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumAssocHandlers_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumAssocHandlers_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumAssocHandlers_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumAssocHandlers_Next(This,celt,rgelt,pceltFetched)( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#endif
#endif
enum _ASSOC_FILTER
{
	ASSOC_FILTER_NONE = 0,
	ASSOC_FILTER_RECOMMENDED = 0x1
};
typedef int ASSOC_FILTER;
SHSTDAPI SHAssocEnumHandlers(LPCWSTR pszExtra, ASSOC_FILTER afFilter, IEnumAssocHandlers ** ppEnumHandler);
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
SHSTDAPI SHAssocEnumHandlersForProtocolByApplication(PCWSTR protocol, REFIID riid, void **enumHandlers);
#endif
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0202_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0202_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HACCEL_UserSize(unsigned long *, unsigned long, HACCEL *);
unsigned char *__RPC_USER HACCEL_UserMarshal(unsigned long *, unsigned char *, HACCEL *);
unsigned char *__RPC_USER HACCEL_UserUnmarshal(unsigned long *, unsigned char *, HACCEL *);
void __RPC_USER HACCEL_UserFree(unsigned long *, HACCEL *);
unsigned long __RPC_USER HBITMAP_UserSize(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree(unsigned long *, HBITMAP *);
unsigned long __RPC_USER HGLOBAL_UserSize(unsigned long *, unsigned long, HGLOBAL *);
unsigned char *__RPC_USER HGLOBAL_UserMarshal(unsigned long *, unsigned char *, HGLOBAL *);
unsigned char *__RPC_USER HGLOBAL_UserUnmarshal(unsigned long *, unsigned char *, HGLOBAL *);
void __RPC_USER HGLOBAL_UserFree(unsigned long *, HGLOBAL *);
unsigned long __RPC_USER HICON_UserSize(unsigned long *, unsigned long, HICON *);
unsigned char *__RPC_USER HICON_UserMarshal(unsigned long *, unsigned char *, HICON *);
unsigned char *__RPC_USER HICON_UserUnmarshal(unsigned long *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree(unsigned long *, HICON *);
unsigned long __RPC_USER HMENU_UserSize(unsigned long *, unsigned long, HMENU *);
unsigned char *__RPC_USER HMENU_UserMarshal(unsigned long *, unsigned char *, HMENU *);
unsigned char *__RPC_USER HMENU_UserUnmarshal(unsigned long *, unsigned char *, HMENU *);
void __RPC_USER HMENU_UserFree(unsigned long *, HMENU *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER PCIDLIST_ABSOLUTE_UserSize(unsigned long *, unsigned long, PCIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PCIDLIST_ABSOLUTE_UserMarshal(unsigned long *, unsigned char *, PCIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PCIDLIST_ABSOLUTE_UserUnmarshal(unsigned long *, unsigned char *, PCIDLIST_ABSOLUTE *);
void __RPC_USER PCIDLIST_ABSOLUTE_UserFree(unsigned long *, PCIDLIST_ABSOLUTE *);
unsigned long __RPC_USER PCUIDLIST_RELATIVE_UserSize(unsigned long *, unsigned long, PCUIDLIST_RELATIVE *);
unsigned char *__RPC_USER PCUIDLIST_RELATIVE_UserMarshal(unsigned long *, unsigned char *, PCUIDLIST_RELATIVE *);
unsigned char *__RPC_USER PCUIDLIST_RELATIVE_UserUnmarshal(unsigned long *, unsigned char *, PCUIDLIST_RELATIVE *);
void __RPC_USER PCUIDLIST_RELATIVE_UserFree(unsigned long *, PCUIDLIST_RELATIVE *);
unsigned long __RPC_USER PCUITEMID_CHILD_UserSize(unsigned long *, unsigned long, PCUITEMID_CHILD *);
unsigned char *__RPC_USER PCUITEMID_CHILD_UserMarshal(unsigned long *, unsigned char *, PCUITEMID_CHILD *);
unsigned char *__RPC_USER PCUITEMID_CHILD_UserUnmarshal(unsigned long *, unsigned char *, PCUITEMID_CHILD *);
void __RPC_USER PCUITEMID_CHILD_UserFree(unsigned long *, PCUITEMID_CHILD *);
unsigned long __RPC_USER PIDLIST_ABSOLUTE_UserSize(unsigned long *, unsigned long, PIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PIDLIST_ABSOLUTE_UserMarshal(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PIDLIST_ABSOLUTE_UserUnmarshal(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE *);
void __RPC_USER PIDLIST_ABSOLUTE_UserFree(unsigned long *, PIDLIST_ABSOLUTE *);
unsigned long __RPC_USER PIDLIST_RELATIVE_UserSize(unsigned long *, unsigned long, PIDLIST_RELATIVE *);
unsigned char *__RPC_USER PIDLIST_RELATIVE_UserMarshal(unsigned long *, unsigned char *, PIDLIST_RELATIVE *);
unsigned char *__RPC_USER PIDLIST_RELATIVE_UserUnmarshal(unsigned long *, unsigned char *, PIDLIST_RELATIVE *);
void __RPC_USER PIDLIST_RELATIVE_UserFree(unsigned long *, PIDLIST_RELATIVE *);
unsigned long __RPC_USER PITEMID_CHILD_UserSize(unsigned long *, unsigned long, PITEMID_CHILD *);
unsigned char *__RPC_USER PITEMID_CHILD_UserMarshal(unsigned long *, unsigned char *, PITEMID_CHILD *);
unsigned char *__RPC_USER PITEMID_CHILD_UserUnmarshal(unsigned long *, unsigned char *, PITEMID_CHILD *);
void __RPC_USER PITEMID_CHILD_UserFree(unsigned long *, PITEMID_CHILD *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HACCEL_UserSize64(unsigned long *, unsigned long, HACCEL *);
unsigned char *__RPC_USER HACCEL_UserMarshal64(unsigned long *, unsigned char *, HACCEL *);
unsigned char *__RPC_USER HACCEL_UserUnmarshal64(unsigned long *, unsigned char *, HACCEL *);
void __RPC_USER HACCEL_UserFree64(unsigned long *, HACCEL *);
unsigned long __RPC_USER HBITMAP_UserSize64(unsigned long *, unsigned long, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserMarshal64(unsigned long *, unsigned char *, HBITMAP *);
unsigned char *__RPC_USER HBITMAP_UserUnmarshal64(unsigned long *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree64(unsigned long *, HBITMAP *);
unsigned long __RPC_USER HGLOBAL_UserSize64(unsigned long *, unsigned long, HGLOBAL *);
unsigned char *__RPC_USER HGLOBAL_UserMarshal64(unsigned long *, unsigned char *, HGLOBAL *);
unsigned char *__RPC_USER HGLOBAL_UserUnmarshal64(unsigned long *, unsigned char *, HGLOBAL *);
void __RPC_USER HGLOBAL_UserFree64(unsigned long *, HGLOBAL *);
unsigned long __RPC_USER HICON_UserSize64(unsigned long *, unsigned long, HICON *);
unsigned char *__RPC_USER HICON_UserMarshal64(unsigned long *, unsigned char *, HICON *);
unsigned char *__RPC_USER HICON_UserUnmarshal64(unsigned long *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree64(unsigned long *, HICON *);
unsigned long __RPC_USER HMENU_UserSize64(unsigned long *, unsigned long, HMENU *);
unsigned char *__RPC_USER HMENU_UserMarshal64(unsigned long *, unsigned char *, HMENU *);
unsigned char *__RPC_USER HMENU_UserUnmarshal64(unsigned long *, unsigned char *, HMENU *);
void __RPC_USER HMENU_UserFree64(unsigned long *, HMENU *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER PCIDLIST_ABSOLUTE_UserSize64(unsigned long *, unsigned long, PCIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PCIDLIST_ABSOLUTE_UserMarshal64(unsigned long *, unsigned char *, PCIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PCIDLIST_ABSOLUTE_UserUnmarshal64(unsigned long *, unsigned char *, PCIDLIST_ABSOLUTE *);
void __RPC_USER PCIDLIST_ABSOLUTE_UserFree64(unsigned long *, PCIDLIST_ABSOLUTE *);
unsigned long __RPC_USER PCUIDLIST_RELATIVE_UserSize64(unsigned long *, unsigned long, PCUIDLIST_RELATIVE *);
unsigned char *__RPC_USER PCUIDLIST_RELATIVE_UserMarshal64(unsigned long *, unsigned char *, PCUIDLIST_RELATIVE *);
unsigned char *__RPC_USER PCUIDLIST_RELATIVE_UserUnmarshal64(unsigned long *, unsigned char *, PCUIDLIST_RELATIVE *);
void __RPC_USER PCUIDLIST_RELATIVE_UserFree64(unsigned long *, PCUIDLIST_RELATIVE *);
unsigned long __RPC_USER PCUITEMID_CHILD_UserSize64(unsigned long *, unsigned long, PCUITEMID_CHILD *);
unsigned char *__RPC_USER PCUITEMID_CHILD_UserMarshal64(unsigned long *, unsigned char *, PCUITEMID_CHILD *);
unsigned char *__RPC_USER PCUITEMID_CHILD_UserUnmarshal64(unsigned long *, unsigned char *, PCUITEMID_CHILD *);
void __RPC_USER PCUITEMID_CHILD_UserFree64(unsigned long *, PCUITEMID_CHILD *);
unsigned long __RPC_USER PIDLIST_ABSOLUTE_UserSize64(unsigned long *, unsigned long, PIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PIDLIST_ABSOLUTE_UserMarshal64(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PIDLIST_ABSOLUTE_UserUnmarshal64(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE *);
void __RPC_USER PIDLIST_ABSOLUTE_UserFree64(unsigned long *, PIDLIST_ABSOLUTE *);
unsigned long __RPC_USER PIDLIST_RELATIVE_UserSize64(unsigned long *, unsigned long, PIDLIST_RELATIVE *);
unsigned char *__RPC_USER PIDLIST_RELATIVE_UserMarshal64(unsigned long *, unsigned char *, PIDLIST_RELATIVE *);
unsigned char *__RPC_USER PIDLIST_RELATIVE_UserUnmarshal64(unsigned long *, unsigned char *, PIDLIST_RELATIVE *);
void __RPC_USER PIDLIST_RELATIVE_UserFree64(unsigned long *, PIDLIST_RELATIVE *);
unsigned long __RPC_USER PITEMID_CHILD_UserSize64(unsigned long *, unsigned long, PITEMID_CHILD *);
unsigned char *__RPC_USER PITEMID_CHILD_UserMarshal64(unsigned long *, unsigned char *, PITEMID_CHILD *);
unsigned char *__RPC_USER PITEMID_CHILD_UserUnmarshal64(unsigned long *, unsigned char *, PITEMID_CHILD *);
void __RPC_USER PITEMID_CHILD_UserFree64(unsigned long *, PITEMID_CHILD *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
HRESULT STDMETHODCALLTYPE IEnumIDList_Next_Proxy(IEnumIDList * This, ULONG celt, PITEMID_CHILD * rgelt, ULONG * pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumIDList_Next_Stub(IEnumIDList * This, ULONG celt, PITEMID_CHILD * rgelt, ULONG * pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumFullIDList_Next_Proxy(IEnumFullIDList * This, ULONG celt, PIDLIST_ABSOLUTE * rgelt, ULONG * pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumFullIDList_Next_Stub(IEnumFullIDList * This, ULONG celt, PIDLIST_ABSOLUTE * rgelt, ULONG * pceltFetched);
HRESULT STDMETHODCALLTYPE IShellFolder_SetNameOf_Proxy(IShellFolder * This, HWND hwnd, PCUITEMID_CHILD pidl, LPCWSTR pszName, SHGDNF uFlags, PITEMID_CHILD * ppidlOut);
HRESULT STDMETHODCALLTYPE IShellFolder_SetNameOf_Stub(IShellFolder * This, HWND hwnd, PCUITEMID_CHILD pidl, LPCWSTR pszName, SHGDNF uFlags, PITEMID_CHILD * ppidlOut);
HRESULT STDMETHODCALLTYPE IFolderView2_GetGroupBy_Proxy(IFolderView2 * This, PROPERTYKEY * pkey, BOOL * pfAscending);
HRESULT STDMETHODCALLTYPE IFolderView2_GetGroupBy_Stub(IFolderView2 * This, PROPERTYKEY * pkey, BOOL * pfAscending);
HRESULT STDMETHODCALLTYPE IEnumShellItems_Next_Proxy(IEnumShellItems * This, ULONG celt, IShellItem ** rgelt, ULONG * pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumShellItems_Next_Stub(IEnumShellItems * This, ULONG celt, IShellItem ** rgelt, ULONG * pceltFetched);
HRESULT STDMETHODCALLTYPE IParentAndItem_GetParentAndItem_Proxy(IParentAndItem * This, PIDLIST_ABSOLUTE * ppidlParent, IShellFolder ** ppsf, PITEMID_CHILD * ppidlChild);
HRESULT STDMETHODCALLTYPE IParentAndItem_GetParentAndItem_Stub(IParentAndItem * This, PIDLIST_ABSOLUTE * ppidlParent, IShellFolder ** ppsf, PITEMID_CHILD * ppidlChild);
HRESULT STDMETHODCALLTYPE IResultsFolder_AddIDList_Proxy(IResultsFolder * This, PCIDLIST_ABSOLUTE pidl, PITEMID_CHILD * ppidlAdded);
HRESULT STDMETHODCALLTYPE IResultsFolder_AddIDList_Stub(IResultsFolder * This, PCIDLIST_ABSOLUTE pidl, PITEMID_CHILD * ppidlAdded);
HRESULT STDMETHODCALLTYPE IEnumObjects_Next_Proxy(IEnumObjects * This, ULONG celt, REFIID riid, void **rgelt, ULONG * pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumObjects_Next_Stub(IEnumObjects * This, ULONG celt, REFIID riid, void **rgelt, ULONG * pceltFetched);
HRESULT STDMETHODCALLTYPE IBandSite_QueryBand_Proxy(IBandSite * This, DWORD dwBandID, IDeskBand ** ppstb, DWORD * pdwState, LPWSTR pszName, int cchName);
HRESULT STDMETHODCALLTYPE IBandSite_QueryBand_Stub(IBandSite * This, DWORD dwBandID, IDeskBand ** ppstb, DWORD * pdwState, LPWSTR pszName, int cchName);
HRESULT STDMETHODCALLTYPE IModalWindow_Show_Proxy(IModalWindow * This, HWND hwndOwner);
HRESULT STDMETHODCALLTYPE IModalWindow_Show_Stub(IModalWindow * This, HWND hwndOwner);
HRESULT STDMETHODCALLTYPE IKnownFolderManager_Redirect_Proxy(IKnownFolderManager * This, REFKNOWNFOLDERID rfid, HWND hwnd, KF_REDIRECT_FLAGS flags, LPCWSTR pszTargetPath, UINT cFolders, const KNOWNFOLDERID * pExclusion, LPWSTR * ppszError);
HRESULT STDMETHODCALLTYPE IKnownFolderManager_Redirect_Stub(IKnownFolderManager * This, REFKNOWNFOLDERID rfid, HWND hwnd, KF_REDIRECT_FLAGS flags, LPCWSTR pszTargetPath, UINT cFolders, const GUID * pExclusion, LPWSTR * ppszError);
HRESULT STDMETHODCALLTYPE IEnumExplorerCommand_Next_Proxy(IEnumExplorerCommand * This, ULONG celt, IExplorerCommand ** pUICommand, ULONG * pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumExplorerCommand_Next_Stub(IEnumExplorerCommand * This, ULONG celt, IExplorerCommand ** pUICommand, ULONG * pceltFetched);
#endif
