/*+@@file@@----------------------------------------------------------------*//*!
 \file		contentpartner.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 21:55:05 2016
 \date		Modified on Sun Jul  3 21:55:05 2016
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
#ifndef __contentpartner_h__
#define __contentpartner_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMPContentContainer_FWD_DEFINED__
#define __IWMPContentContainer_FWD_DEFINED__
typedef interface IWMPContentContainer IWMPContentContainer;
#endif
#ifndef __IWMPContentContainerList_FWD_DEFINED__
#define __IWMPContentContainerList_FWD_DEFINED__
typedef interface IWMPContentContainerList IWMPContentContainerList;
#endif
#ifndef __IWMPContentPartnerCallback_FWD_DEFINED__
#define __IWMPContentPartnerCallback_FWD_DEFINED__
typedef interface IWMPContentPartnerCallback IWMPContentPartnerCallback;
#endif
#ifndef __IWMPContentPartner_FWD_DEFINED__
#define __IWMPContentPartner_FWD_DEFINED__
typedef interface IWMPContentPartner IWMPContentPartner;
#endif
#include "oaidl.h"
#include "ocidl.h"
static const WCHAR g_szContentPartnerInfo_LoginState[] = L"LoginState";
static const WCHAR g_szContentPartnerInfo_MediaPlayerAccountType[] = L"MediaPlayerAccountType";
static const WCHAR g_szContentPartnerInfo_AccountType[] = L"AccountType";
static const WCHAR g_szContentPartnerInfo_HasCachedCredentials[] = L"HasCachedCredentials";
static const WCHAR g_szContentPartnerInfo_LicenseRefreshAdvanceWarning[] = L"LicenseRefreshAdvanceWarning";
static const WCHAR g_szContentPartnerInfo_PurchasedTrackRequiresReDownload[] = L"PurchasedTrackRequiresReDownload";
static const WCHAR g_szContentPartnerInfo_MaximumTrackPurchasePerPurchase[] = L"MaximumNumberOfTracksPerPurchase";
static const WCHAR g_szContentPartnerInfo_AccountBalance[] = L"AccountBalance";
static const WCHAR g_szContentPartnerInfo_UserName[] = L"UserName";
static const WCHAR g_szMediaPlayerTask_Burn[] = L"Burn";
static const WCHAR g_szMediaPlayerTask_Browse[] = L"Browse";
static const WCHAR g_szMediaPlayerTask_Sync[] = L"Sync";
static const WCHAR g_szItemInfo_PopupURL[] = L"Popup";
static const WCHAR g_szItemInfo_AuthenticationSuccessURL[] = L"AuthenticationSuccessURL";
static const WCHAR g_szItemInfo_LoginFailureURL[] = L"LoginFailureURL";
static const WCHAR g_szItemInfo_HTMLViewURL[] = L"HTMLViewURL";
static const WCHAR g_szItemInfo_PopupCaption[] = L"PopupCaption";
static const WCHAR g_szItemInfo_ALTLoginURL[] = L"ALTLoginURL";
static const WCHAR g_szItemInfo_ALTLoginCaption[] = L"ALTLoginCaption";
static const WCHAR g_szItemInfo_ForgetPasswordURL[] = L"ForgotPassword";
static const WCHAR g_szItemInfo_CreateAccountURL[] = L"CreateAccount";
static const WCHAR g_szItemInfo_ArtistArtURL[] = L"ArtistArt";
static const WCHAR g_szItemInfo_AlbumArtURL[] = L"AlbumArt";
static const WCHAR g_szItemInfo_ListArtURL[] = L"ListArt";
static const WCHAR g_szItemInfo_GenreArtURL[] = L"GenreArt";
static const WCHAR g_szItemInfo_SubGenreArtURL[] = L"SubGenreArt";
static const WCHAR g_szItemInfo_RadioArtURL[] = L"RadioArt";
static const WCHAR g_szItemInfo_TreeListIconURL[] = L"CPListIDIcon";
static const WCHAR g_szItemInfo_ErrorDescription[] = L"CPErrorDescription";
static const WCHAR g_szItemInfo_ErrorURL[] = L"CPErrorURL";
static const WCHAR g_szItemInfo_ErrorURLLinkText[] = L"CPErrorURLLinkText";
static const WCHAR g_szUnknownLocation[] = L"UnknownLocation";
static const WCHAR g_szRootLocation[] = L"RootLocation";
static const WCHAR g_szFlyoutMenu[] = L"FlyoutMenu";
static const WCHAR g_szOnlineStore[] = L"OnlineStore";
static const WCHAR g_szVideoRecent[] = L"VideoRecent";
static const WCHAR g_szVideoRoot[] = L"VideoRoot";
static const WCHAR g_szCPListID[] = L"CPListID";
static const WCHAR g_szAllCPListIDs[] = L"AllCPListIDs";
static const WCHAR g_szCPTrackID[] = L"CPTrackID";
static const WCHAR g_szAllCPTrackIDs[] = L"AllCPTrackIDs";
static const WCHAR g_szCPArtistID[] = L"CPArtistID";
static const WCHAR g_szAllCPArtistIDs[] = L"AllCPArtistIDs";
static const WCHAR g_szCPAlbumID[] = L"CPAlbumID";
static const WCHAR g_szAllCPAlbumIDs[] = L"AllCPAlbumIDs";
static const WCHAR g_szCPGenreID[] = L"CPGenreID";
static const WCHAR g_szAllCPGenreIDs[] = L"AllCPGenreIDs";
static const WCHAR g_szCPAlbumSubGenreID[] = L"CPAlbumSubGenreID";
static const WCHAR g_szAllCPAlbumSubGenreIDs[] = L"AllCPAlbumSubGenreIDs";
static const WCHAR g_szReleaseDateYear[] = L"ReleaseDateYear";
static const WCHAR g_szAllReleaseDateYears[] = L"AllReleaseDateYears";
static const WCHAR g_szCPRadioID[] = L"CPRadioID";
static const WCHAR g_szAllCPRadioIDs[] = L"AllCPRadioIDs";
static const WCHAR g_szAuthor[] = L"Author";
static const WCHAR g_szAllAuthors[] = L"AllAuthors";
static const WCHAR g_szWMParentalRating[] = L"WMParentalRating";
static const WCHAR g_szAllWMParentalRatings[] = L"AllWMParentalRatings";
static const WCHAR g_szAllUserEffectiveRatingStarss[] = L"AllUserEffectiveRatingStarss";
static const WCHAR g_szUserEffectiveRatingStars[] = L"UserEffectiveRatingStars";
static const WCHAR g_szUserPlaylist[] = L"UserPlaylist";
static ULONG g_knReservedCPTrackID_NotFound = (DWORD) - 1;
static const WCHAR g_szViewMode_Report[] = L"ViewModeReport";
static const WCHAR g_szViewMode_Details[] = L"ViewModeDetails";
static const WCHAR g_szViewMode_Icon[] = L"ViewModeIcon";
static const WCHAR g_szViewMode_Tile[] = L"ViewModeTile";
static const WCHAR g_szViewMode_OrderedList[] = L"ViewModeOrderedList";
static const WCHAR g_szContentPrice_Unknown[] = L"PriceUnknown";
static const WCHAR g_szContentPrice_CannotBuy[] = L"PriceCannotBuy";
static const WCHAR g_szContentPrice_Free[] = L"PriceFree";
#ifndef SUBSCRIPTION_CAP_DEVICEAVAILABLE
#define SUBSCRIPTION_CAP_DEVICEAVAILABLE        0x00000010
#endif
#ifndef SUBSCRIPTION_CAP_BACKGROUNDPROCESSING
#define SUBSCRIPTION_CAP_BACKGROUNDPROCESSING   0x00000008
#endif
#ifndef SUBSCRIPTION_CAP_IS_CONTENTPARTNER
#define SUBSCRIPTION_CAP_IS_CONTENTPARTNER      0x00000040
#endif
#ifndef SUBSCRIPTION_CAP_ALTLOGIN
#define SUBSCRIPTION_CAP_ALTLOGIN      			0x00000080
#endif
static const WCHAR g_szRefreshLicensePlay[] = L"RefreshForPlay";
static const WCHAR g_szRefreshLicenseBurn[] = L"RefreshForBurn";
static const WCHAR g_szRefreshLicenseSync[] = L"RefreshForSync";
static const WCHAR g_szVerifyPermissionSync[] = L"VerifyPermissionSync";
#ifndef __WMPNotifySubscriptionPluginAddRemove
#define __WMPNotifySubscriptionPluginAddRemove
__inline BOOL WMPNotifySubscriptionPluginAddRemove(void)
{
	BOOL fRet = FALSE;
	UINT msg = RegisterWindowMessageA("WMPlayer_PluginAddRemove");
	if (0 != msg)
	{
		fRet = PostMessage(HWND_BROADCAST, msg, 1, 0);
	}
	return fRet;
}
#endif
typedef enum WMPPartnerNotification
{
	wmpsnBackgroundProcessingBegin = 1,
	wmpsnBackgroundProcessingEnd = 2,
	wmpsnCatalogDownloadFailure = 3,
	wmpsnCatalogDownloadComplete = 4
} WMPPartnerNotification;
typedef enum WMPCallbackNotification
{
	wmpcnLoginStateChange = 1,
	wmpcnAuthResult = 2,
	wmpcnLicenseUpdated = 3,
	wmpcnNewCatalogAvailable = 4,
	wmpcnNewPluginAvailable = 5,
	wmpcnDisableRadioSkipping = 6
} WMPCallbackNotification;
typedef enum WMPTaskType
{
	wmpttBrowse = 1,
	wmpttSync = 2,
	wmpttBurn = 3,
	wmpttCurrent = 4
} WMPTaskType;
typedef struct WMPContextMenuInfo
{
	DWORD dwID;
	BSTR bstrMenuText;
	BSTR bstrHelpText;
} WMPContextMenuInfo;
static const WCHAR g_szStationEvent_Started[] = L"TrackStarted";
static const WCHAR g_szStationEvent_Complete[] = L"TrackComplete";
static const WCHAR g_szStationEvent_Skipped[] = L"TrackSkipped";
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0000_v0_0_s_ifspec;
#ifndef __IWMPContentContainer_INTERFACE_DEFINED__
#define __IWMPContentContainer_INTERFACE_DEFINED__
extern const IID IID_IWMPContentContainer;
typedef struct IWMPContentContainerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMPContentContainer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMPContentContainer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMPContentContainer *This);
	HRESULT(STDMETHODCALLTYPE *GetID) (IWMPContentContainer *This, ULONG *pContentID);
	HRESULT(STDMETHODCALLTYPE *GetPrice) (IWMPContentContainer *This, BSTR *pbstrPrice);
	HRESULT(STDMETHODCALLTYPE *GetType) (IWMPContentContainer *This, BSTR *pbstrType);
	HRESULT(STDMETHODCALLTYPE *GetContentCount) (IWMPContentContainer *This, ULONG *pcContent);
	HRESULT(STDMETHODCALLTYPE *GetContentPrice) (IWMPContentContainer *This, ULONG idxContent, BSTR *pbstrPrice);
	HRESULT(STDMETHODCALLTYPE *GetContentID) (IWMPContentContainer *This, ULONG idxContent, ULONG *pContentID);
	END_INTERFACE
}  IWMPContentContainerVtbl;
interface IWMPContentContainer
{
	CONST_VTBL struct IWMPContentContainerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPContentContainer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPContentContainer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPContentContainer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPContentContainer_GetID(This,pContentID)( (This)->lpVtbl -> GetID(This,pContentID) )
#define IWMPContentContainer_GetPrice(This,pbstrPrice)( (This)->lpVtbl -> GetPrice(This,pbstrPrice) )
#define IWMPContentContainer_GetType(This,pbstrType)( (This)->lpVtbl -> GetType(This,pbstrType) )
#define IWMPContentContainer_GetContentCount(This,pcContent)( (This)->lpVtbl -> GetContentCount(This,pcContent) )
#define IWMPContentContainer_GetContentPrice(This,idxContent,pbstrPrice)( (This)->lpVtbl -> GetContentPrice(This,idxContent,pbstrPrice) )
#define IWMPContentContainer_GetContentID(This,idxContent,pContentID)( (This)->lpVtbl -> GetContentID(This,idxContent,pContentID) )
#endif
#endif
typedef enum WMPTransactionType
{
	wmpttNoTransaction = 0,
	wmpttDownload = 1,
	wmpttBuy = 2
} WMPTransactionType;
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0001_v0_0_s_ifspec;
#ifndef __IWMPContentContainerList_INTERFACE_DEFINED__
#define __IWMPContentContainerList_INTERFACE_DEFINED__
extern const IID IID_IWMPContentContainerList;
typedef struct IWMPContentContainerListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMPContentContainerList *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMPContentContainerList *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMPContentContainerList *This);
	HRESULT(STDMETHODCALLTYPE *GetTransactionType) (IWMPContentContainerList *This, WMPTransactionType *pwmptt);
	HRESULT(STDMETHODCALLTYPE *GetContainerCount) (IWMPContentContainerList *This, ULONG *pcContainer);
	HRESULT(STDMETHODCALLTYPE *GetContainer) (IWMPContentContainerList *This, ULONG idxContainer, IWMPContentContainer **ppContent);
	END_INTERFACE
}  IWMPContentContainerListVtbl;
interface IWMPContentContainerList
{
	CONST_VTBL struct IWMPContentContainerListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPContentContainerList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPContentContainerList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPContentContainerList_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPContentContainerList_GetTransactionType(This,pwmptt)( (This)->lpVtbl -> GetTransactionType(This,pwmptt) )
#define IWMPContentContainerList_GetContainerCount(This,pcContainer)( (This)->lpVtbl -> GetContainerCount(This,pcContainer) )
#define IWMPContentContainerList_GetContainer(This,idxContainer,ppContent)( (This)->lpVtbl -> GetContainer(This,idxContainer,ppContent) )
#endif
#endif
typedef enum WMPTemplateSize
{
	wmptsSmall = 0,
	wmptsMedium = (wmptsSmall + 1),
	wmptsLarge = (wmptsMedium + 1)
} WMPTemplateSize;
typedef enum WMPStreamingType
{
	wmpstUnknown = 0,
	wmpstMusic = 1,
	wmpstVideo = 2,
	wmpstRadio = 3
} WMPStreamingType;
typedef enum WMPAccountType
{
	wmpatBuyOnly = 1,
	wmpatSubscription = 2,
	wmpatJanus = 3
} WMPAccountType;
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0002_v0_0_s_ifspec;
#ifndef __IWMPContentPartnerCallback_INTERFACE_DEFINED__
#define __IWMPContentPartnerCallback_INTERFACE_DEFINED__
extern const IID IID_IWMPContentPartnerCallback;
typedef struct IWMPContentPartnerCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMPContentPartnerCallback *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMPContentPartnerCallback *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMPContentPartnerCallback *This);
	HRESULT(STDMETHODCALLTYPE *Notify) (IWMPContentPartnerCallback *This, WMPCallbackNotification type, VARIANT *pContext);
	HRESULT(STDMETHODCALLTYPE *BuyComplete) (IWMPContentPartnerCallback *This, HRESULT hrResult, DWORD dwBuyCookie);
	HRESULT(STDMETHODCALLTYPE *DownloadTrack) (IWMPContentPartnerCallback *This, DWORD cookie, BSTR bstrTrackURL, DWORD dwServiceTrackID, BSTR bstrDownloadParams, HRESULT hrDownload);
	HRESULT(STDMETHODCALLTYPE *GetCatalogVersion) (IWMPContentPartnerCallback *This, DWORD *pdwVersion, DWORD *pdwSchemaVersion, LCID *plcid);
	HRESULT(STDMETHODCALLTYPE *UpdateDeviceComplete) (IWMPContentPartnerCallback *This, BSTR bstrDeviceName);
	HRESULT(STDMETHODCALLTYPE *ChangeView) (IWMPContentPartnerCallback *This, BSTR bstrType, BSTR bstrID, BSTR bstrFilter);
	HRESULT(STDMETHODCALLTYPE *AddListContents) (IWMPContentPartnerCallback *This, DWORD dwListCookie, DWORD cItems, DWORD *prgItems);
	HRESULT(STDMETHODCALLTYPE *ListContentsComplete) (IWMPContentPartnerCallback *This, DWORD dwListCookie, HRESULT hrSuccess);
	HRESULT(STDMETHODCALLTYPE *SendMessageComplete) (IWMPContentPartnerCallback *This, BSTR bstrMsg, BSTR bstrParam, BSTR bstrResult);
	HRESULT(STDMETHODCALLTYPE *GetContentIDsInLibrary) (IWMPContentPartnerCallback *This, ULONG *pcContentIDs, ULONG **pprgIDs);
	HRESULT(STDMETHODCALLTYPE *RefreshLicenseComplete) (IWMPContentPartnerCallback *This, DWORD dwCookie, ULONG contentID, HRESULT hrRefresh);
	HRESULT(STDMETHODCALLTYPE *ShowPopup) (IWMPContentPartnerCallback *This, long lIndex, BSTR bstrParameters);
	HRESULT(STDMETHODCALLTYPE *VerifyPermissionComplete) (IWMPContentPartnerCallback *This, BSTR bstrPermission, VARIANT *pContext, HRESULT hrPermission);
	END_INTERFACE
}  IWMPContentPartnerCallbackVtbl;
interface IWMPContentPartnerCallback
{
	CONST_VTBL struct IWMPContentPartnerCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPContentPartnerCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPContentPartnerCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPContentPartnerCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPContentPartnerCallback_Notify(This,type,pContext)( (This)->lpVtbl -> Notify(This,type,pContext) )
#define IWMPContentPartnerCallback_BuyComplete(This,hrResult,dwBuyCookie)( (This)->lpVtbl -> BuyComplete(This,hrResult,dwBuyCookie) )
#define IWMPContentPartnerCallback_DownloadTrack(This,cookie,bstrTrackURL,dwServiceTrackID,bstrDownloadParams,hrDownload)( (This)->lpVtbl -> DownloadTrack(This,cookie,bstrTrackURL,dwServiceTrackID,bstrDownloadParams,hrDownload) )
#define IWMPContentPartnerCallback_GetCatalogVersion(This,pdwVersion,pdwSchemaVersion,plcid)( (This)->lpVtbl -> GetCatalogVersion(This,pdwVersion,pdwSchemaVersion,plcid) )
#define IWMPContentPartnerCallback_UpdateDeviceComplete(This,bstrDeviceName)( (This)->lpVtbl -> UpdateDeviceComplete(This,bstrDeviceName) )
#define IWMPContentPartnerCallback_ChangeView(This,bstrType,bstrID,bstrFilter)( (This)->lpVtbl -> ChangeView(This,bstrType,bstrID,bstrFilter) )
#define IWMPContentPartnerCallback_AddListContents(This,dwListCookie,cItems,prgItems)( (This)->lpVtbl -> AddListContents(This,dwListCookie,cItems,prgItems) )
#define IWMPContentPartnerCallback_ListContentsComplete(This,dwListCookie,hrSuccess)( (This)->lpVtbl -> ListContentsComplete(This,dwListCookie,hrSuccess) )
#define IWMPContentPartnerCallback_SendMessageComplete(This,bstrMsg,bstrParam,bstrResult)( (This)->lpVtbl -> SendMessageComplete(This,bstrMsg,bstrParam,bstrResult) )
#define IWMPContentPartnerCallback_GetContentIDsInLibrary(This,pcContentIDs,pprgIDs)( (This)->lpVtbl -> GetContentIDsInLibrary(This,pcContentIDs,pprgIDs) )
#define IWMPContentPartnerCallback_RefreshLicenseComplete(This,dwCookie,contentID,hrRefresh)( (This)->lpVtbl -> RefreshLicenseComplete(This,dwCookie,contentID,hrRefresh) )
#define IWMPContentPartnerCallback_ShowPopup(This,lIndex,bstrParameters)( (This)->lpVtbl -> ShowPopup(This,lIndex,bstrParameters) )
#define IWMPContentPartnerCallback_VerifyPermissionComplete(This,bstrPermission,pContext,hrPermission)( (This)->lpVtbl -> VerifyPermissionComplete(This,bstrPermission,pContext,hrPermission) )
#endif
#endif
#ifndef __IWMPContentPartner_INTERFACE_DEFINED__
#define __IWMPContentPartner_INTERFACE_DEFINED__
extern const IID IID_IWMPContentPartner;
typedef struct IWMPContentPartnerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMPContentPartner *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMPContentPartner *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMPContentPartner *This);
	HRESULT(STDMETHODCALLTYPE *SetCallback) (IWMPContentPartner *This, IWMPContentPartnerCallback *pCallback);
	HRESULT(STDMETHODCALLTYPE *Notify) (IWMPContentPartner *This, WMPPartnerNotification type, VARIANT *pContext);
	HRESULT(STDMETHODCALLTYPE *GetItemInfo) (IWMPContentPartner *This, BSTR bstrInfoName, VARIANT *pContext, VARIANT *pData);
	HRESULT(STDMETHODCALLTYPE *GetContentPartnerInfo) (IWMPContentPartner *This, BSTR bstrInfoName, VARIANT *pData);
	HRESULT(STDMETHODCALLTYPE *GetCommands) (IWMPContentPartner *This, BSTR location, VARIANT *pLocationContext, BSTR itemLocation, ULONG cItemIDs, ULONG *prgItemIDs, ULONG *pcItemIDs, WMPContextMenuInfo **pprgItems);
	HRESULT(STDMETHODCALLTYPE *InvokeCommand) (IWMPContentPartner *This, DWORD dwCommandID, BSTR location, VARIANT *pLocationContext, BSTR itemLocation, ULONG cItemIDs, ULONG *rgItemIDs);
	HRESULT(STDMETHODCALLTYPE *CanBuySilent) (IWMPContentPartner *This, IWMPContentContainerList *pInfo, BSTR *pbstrTotalPrice, VARIANT_BOOL *pSilentOK);
	HRESULT(STDMETHODCALLTYPE *Buy) (IWMPContentPartner *This, IWMPContentContainerList *pInfo, DWORD cookie);
	HRESULT(STDMETHODCALLTYPE *GetStreamingURL) (IWMPContentPartner *This, WMPStreamingType st, VARIANT *pStreamContext, BSTR *pbstrURL);
	HRESULT(STDMETHODCALLTYPE *Download) (IWMPContentPartner *This, IWMPContentContainerList *pInfo, DWORD cookie);
	HRESULT(STDMETHODCALLTYPE *DownloadTrackComplete) (IWMPContentPartner *This, HRESULT hrResult, ULONG contentID, BSTR downloadTrackParam);
	HRESULT(STDMETHODCALLTYPE *RefreshLicense) (IWMPContentPartner *This, DWORD dwCookie, VARIANT_BOOL fLocal, BSTR bstrURL, WMPStreamingType type, ULONG contentID, BSTR bstrRefreshReason, VARIANT *pReasonContext);
	HRESULT(STDMETHODCALLTYPE *GetCatalogURL) (IWMPContentPartner *This, DWORD dwCatalogVersion, DWORD dwCatalogSchemaVersion, LCID catalogLCID, DWORD *pdwNewCatalogVersion, BSTR *pbstrCatalogURL, VARIANT *pExpirationDate);
	HRESULT(STDMETHODCALLTYPE *GetTemplate) (IWMPContentPartner *This, WMPTaskType task, BSTR location, VARIANT *pContext, BSTR clickLocation, VARIANT *pClickContext, BSTR bstrFilter, BSTR bstrViewParams, BSTR *pbstrTemplateURL, WMPTemplateSize *pTemplateSize);
	HRESULT(STDMETHODCALLTYPE *UpdateDevice) (IWMPContentPartner *This, BSTR bstrDeviceName);
	HRESULT(STDMETHODCALLTYPE *GetListContents) (IWMPContentPartner *This, BSTR location, VARIANT *pContext, BSTR bstrListType, BSTR bstrParams, DWORD dwListCookie);
	HRESULT(STDMETHODCALLTYPE *Login) (IWMPContentPartner *This, BLOB userInfo, BLOB pwdInfo, VARIANT_BOOL fUsedCachedCreds, VARIANT_BOOL fOkToCache);
	HRESULT(STDMETHODCALLTYPE *Authenticate) (IWMPContentPartner *This, BLOB userInfo, BLOB pwdInfo);
	HRESULT(STDMETHODCALLTYPE *Logout) (IWMPContentPartner *This);
	HRESULT(STDMETHODCALLTYPE *SendMessage) (IWMPContentPartner *This, BSTR bstrMsg, BSTR bstrParam);
	HRESULT(STDMETHODCALLTYPE *StationEvent) (IWMPContentPartner *This, BSTR bstrStationEventType, ULONG StationId, ULONG PlaylistIndex, ULONG TrackID, BSTR TrackData, DWORD dwSecondsPlayed);
	HRESULT(STDMETHODCALLTYPE *CompareContainerListPrices) (IWMPContentPartner *This, IWMPContentContainerList *pListBase, IWMPContentContainerList *pListCompare, long *pResult);
	HRESULT(STDMETHODCALLTYPE *VerifyPermission) (IWMPContentPartner *This, BSTR bstrPermission, VARIANT *pContext);
	END_INTERFACE
}  IWMPContentPartnerVtbl;
interface IWMPContentPartner
{
	CONST_VTBL struct IWMPContentPartnerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMPContentPartner_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMPContentPartner_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMPContentPartner_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMPContentPartner_SetCallback(This,pCallback)( (This)->lpVtbl -> SetCallback(This,pCallback) )
#define IWMPContentPartner_Notify(This,type,pContext)( (This)->lpVtbl -> Notify(This,type,pContext) )
#define IWMPContentPartner_GetItemInfo(This,bstrInfoName,pContext,pData)( (This)->lpVtbl -> GetItemInfo(This,bstrInfoName,pContext,pData) )
#define IWMPContentPartner_GetContentPartnerInfo(This,bstrInfoName,pData)( (This)->lpVtbl -> GetContentPartnerInfo(This,bstrInfoName,pData) )
#define IWMPContentPartner_GetCommands(This,location,pLocationContext,itemLocation,cItemIDs,prgItemIDs,pcItemIDs,pprgItems)( (This)->lpVtbl -> GetCommands(This,location,pLocationContext,itemLocation,cItemIDs,prgItemIDs,pcItemIDs,pprgItems) )
#define IWMPContentPartner_InvokeCommand(This,dwCommandID,location,pLocationContext,itemLocation,cItemIDs,rgItemIDs)( (This)->lpVtbl -> InvokeCommand(This,dwCommandID,location,pLocationContext,itemLocation,cItemIDs,rgItemIDs) )
#define IWMPContentPartner_CanBuySilent(This,pInfo,pbstrTotalPrice,pSilentOK)( (This)->lpVtbl -> CanBuySilent(This,pInfo,pbstrTotalPrice,pSilentOK) )
#define IWMPContentPartner_Buy(This,pInfo,cookie)( (This)->lpVtbl -> Buy(This,pInfo,cookie) )
#define IWMPContentPartner_GetStreamingURL(This,st,pStreamContext,pbstrURL)( (This)->lpVtbl -> GetStreamingURL(This,st,pStreamContext,pbstrURL) )
#define IWMPContentPartner_Download(This,pInfo,cookie)( (This)->lpVtbl -> Download(This,pInfo,cookie) )
#define IWMPContentPartner_DownloadTrackComplete(This,hrResult,contentID,downloadTrackParam)( (This)->lpVtbl -> DownloadTrackComplete(This,hrResult,contentID,downloadTrackParam) )
#define IWMPContentPartner_RefreshLicense(This,dwCookie,fLocal,bstrURL,type,contentID,bstrRefreshReason,pReasonContext)( (This)->lpVtbl -> RefreshLicense(This,dwCookie,fLocal,bstrURL,type,contentID,bstrRefreshReason,pReasonContext) )
#define IWMPContentPartner_GetCatalogURL(This,dwCatalogVersion,dwCatalogSchemaVersion,catalogLCID,pdwNewCatalogVersion,pbstrCatalogURL,pExpirationDate)( (This)->lpVtbl -> GetCatalogURL(This,dwCatalogVersion,dwCatalogSchemaVersion,catalogLCID,pdwNewCatalogVersion,pbstrCatalogURL,pExpirationDate) )
#define IWMPContentPartner_GetTemplate(This,task,location,pContext,clickLocation,pClickContext,bstrFilter,bstrViewParams,pbstrTemplateURL,pTemplateSize)( (This)->lpVtbl -> GetTemplate(This,task,location,pContext,clickLocation,pClickContext,bstrFilter,bstrViewParams,pbstrTemplateURL,pTemplateSize) )
#define IWMPContentPartner_UpdateDevice(This,bstrDeviceName)( (This)->lpVtbl -> UpdateDevice(This,bstrDeviceName) )
#define IWMPContentPartner_GetListContents(This,location,pContext,bstrListType,bstrParams,dwListCookie)( (This)->lpVtbl -> GetListContents(This,location,pContext,bstrListType,bstrParams,dwListCookie) )
#define IWMPContentPartner_Login(This,userInfo,pwdInfo,fUsedCachedCreds,fOkToCache)( (This)->lpVtbl -> Login(This,userInfo,pwdInfo,fUsedCachedCreds,fOkToCache) )
#define IWMPContentPartner_Authenticate(This,userInfo,pwdInfo)( (This)->lpVtbl -> Authenticate(This,userInfo,pwdInfo) )
#define IWMPContentPartner_Logout(This)( (This)->lpVtbl -> Logout(This) )
#define IWMPContentPartner_SendMessage(This,bstrMsg,bstrParam)( (This)->lpVtbl -> SendMessage(This,bstrMsg,bstrParam) )
#define IWMPContentPartner_StationEvent(This,bstrStationEventType,StationId,PlaylistIndex,TrackID,TrackData,dwSecondsPlayed)( (This)->lpVtbl -> StationEvent(This,bstrStationEventType,StationId,PlaylistIndex,TrackID,TrackData,dwSecondsPlayed) )
#define IWMPContentPartner_CompareContainerListPrices(This,pListBase,pListCompare,pResult)( (This)->lpVtbl -> CompareContainerListPrices(This,pListBase,pListCompare,pResult) )
#define IWMPContentPartner_VerifyPermission(This,bstrPermission,pContext)( (This)->lpVtbl -> VerifyPermission(This,bstrPermission,pContext) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
