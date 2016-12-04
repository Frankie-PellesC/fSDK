/*+@@file@@----------------------------------------------------------------*//*!
 \file		MAPISPI.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 24 22:36:39 2016
 \date		Modified on Sun Jul 24 22:36:39 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef MAPISPI_H
#define MAPISPI_H
#if __POCC__ >= 500
#pragma once
#endif
#ifndef MAPIDEFS_H
#include <mapidefs.h>
#endif
#ifndef MAPICODE_H
#include <mapicode.h>
#endif
#ifndef MAPIGUID_H
#include <mapiguid.h>
#endif
#ifndef MAPITAGS_H
#include <mapitags.h>
#endif
#if defined (WIN16) || defined (DOS) || defined (DOS16)
#include <storage.h>
#endif
#ifndef BEGIN_INTERFACE
#define BEGIN_INTERFACE
#endif
#define	CURRENT_SPI_VERSION	0x00010010L
#define	PDK1_SPI_VERSION	0x00010000L
#define	PDK2_SPI_VERSION	0x00010008L
#define PDK3_SPI_VERSION	0x00010010L
DECLARE_MAPI_INTERFACE_PTR(IMAPISupport, LPMAPISUP);
typedef struct
{
	ULONG		cb;
	BYTE		ab[MAPI_DIM];
} NOTIFKEY, FAR * LPNOTIFKEY;
#define CbNewNOTIFKEY(_cb)		(offsetof(NOTIFKEY,ab) + (_cb))
#define CbNOTIFKEY(_lpkey)		(offsetof(NOTIFKEY,ab) + (_lpkey)->cb)
#define SizedNOTIFKEY(_cb, _name)	struct _NOTIFKEY_ ## _name \
									{ \
										ULONG		cb; \
										BYTE		ab[_cb]; \
									} _name
#define NOTIFY_SYNC				((ULONG) 0x40000000)
#define NOTIFY_CANCELED			((ULONG) 0x80000000)
#define CALLBACK_DISCONTINUE	((ULONG) 0x80000000)
#define NOTIFY_NEWMAIL			((ULONG) 0x00000001)
#define NOTIFY_READYTOSEND		((ULONG) 0x00000002)
#define NOTIFY_SENTDEFERRED		((ULONG) 0x00000004)
#define NOTIFY_CRITSEC			((ULONG) 0x00001000)
#define NOTIFY_NONCRIT			((ULONG) 0x00002000)
#define NOTIFY_CONFIG_CHANGE	((ULONG) 0x00004000)
#define NOTIFY_CRITICAL_ERROR	((ULONG) 0x10000000)
#define NOTIFY_NEWMAIL_RECEIVED	((ULONG) 0x20000000)
#define	STATUSROW_UPDATE		((ULONG) 0x10000000)
#define STGSTRM_RESET			((ULONG) 0x00000000)
#define STGSTRM_CURRENT			((ULONG) 0x10000000)
#define STGSTRM_MODIFY			((ULONG) 0x00000002)
#define STGSTRM_CREATE			((ULONG) 0x00001000)
#define MAPI_NON_READ			((ULONG) 0x00000001)
typedef HRESULT(STDMETHODCALLTYPE PREPROCESSMESSAGE) (LPVOID lpvSession, LPMESSAGE lpMessage, LPADRBOOK lpAdrBook, LPMAPIFOLDER lpFolder, LPALLOCATEBUFFER AllocateBuffer, LPALLOCATEMORE AllocateMore, LPFREEBUFFER FreeBuffer, ULONG FAR *lpcOutbound, LPMESSAGE FAR *FAR *lpppMessage, LPADRLIST FAR *lppRecipList);
typedef HRESULT (STDMETHODCALLTYPE REMOVEPREPROCESSINFO)(LPMESSAGE lpMessage);
#define MAPI_IMAPISUPPORT_METHODS1(IPURE) \
	MAPIMETHOD(GetLastError)(THIS_ HRESULT hResult, ULONG ulFlags, LPMAPIERROR FAR *lppMAPIError); \
	MAPIMETHOD(GetMemAllocRoutines)(THIS_ LPALLOCATEBUFFER FAR *lpAllocateBuffer, LPALLOCATEMORE FAR *lpAllocateMore, LPFREEBUFFER FAR *lpFreeBuffer); \
	MAPIMETHOD(Subscribe)(THIS_	LPNOTIFKEY lpKey, ULONG ulEventMask, ULONG ulFlags, LPMAPIADVISESINK lpAdviseSink, ULONG FAR *lpulConnection); \
	MAPIMETHOD(Unsubscribe)(THIS_ ULONG ulConnection); \
	MAPIMETHOD(Notify)(THIS_ LPNOTIFKEY lpKey, ULONG cNotification, LPNOTIFICATION lpNotifications, ULONG FAR *lpulFlags); \
	MAPIMETHOD(ModifyStatusRow)(THIS_ ULONG cValues, LPSPropValue lpColumnVals, ULONG ulFlags); \
	MAPIMETHOD(OpenProfileSection)(THIS_ LPMAPIUID lpUid, ULONG ulFlags, LPPROFSECT FAR *lppProfileObj); \
	MAPIMETHOD(RegisterPreprocessor)(THIS_ LPMAPIUID lpMuid, LPTSTR lpszAdrType, LPTSTR lpszDLLName, LPSTR lpszPreprocess, LPSTR lpszRemovePreprocessInfo, ULONG ulFlags); \
	MAPIMETHOD(NewUID)(THIS_ LPMAPIUID lpMuid); \
	MAPIMETHOD(MakeInvalid)(THIS_ ULONG ulFlags, LPVOID lpObject, ULONG ulRefCount, ULONG cMethods);
#define MAPI_IMAPISUPPORT_METHODS2(IPURE) \
	MAPIMETHOD(SpoolerYield)(THIS_ ULONG ulFlags); \
	MAPIMETHOD(SpoolerNotify)(THIS_ ULONG ulFlags, LPVOID lpvData); \
	MAPIMETHOD(CreateOneOff)(THIS_ LPTSTR lpszName, LPTSTR lpszAdrType, LPTSTR lpszAddress, ULONG ulFlags, ULONG FAR *lpcbEntryID, LPENTRYID FAR *lppEntryID); \
	MAPIMETHOD(SetProviderUID)(THIS_ LPMAPIUID lpProviderID, ULONG ulFlags); \
	MAPIMETHOD(CompareEntryIDs)(THIS_ ULONG cbEntry1, LPENTRYID lpEntry1, ULONG cbEntry2, LPENTRYID lpEntry2, ULONG ulCompareFlags, ULONG FAR *lpulResult); \
	MAPIMETHOD(OpenTemplateID)(THIS_ ULONG cbTemplateID, LPENTRYID lpTemplateID, ULONG ulTemplateFlags, LPMAPIPROP lpMAPIPropData, LPCIID lpInterface, LPMAPIPROP FAR *lppMAPIPropNew, LPMAPIPROP lpMAPIPropSibling); \
	MAPIMETHOD(OpenEntry)(THIS_ ULONG cbEntryID, LPENTRYID lpEntryID, LPCIID lpInterface, ULONG ulOpenFlags, ULONG FAR *lpulObjType, LPUNKNOWN FAR *lppUnk); \
	MAPIMETHOD(GetOneOffTable)(THIS_ ULONG ulFlags, LPMAPITABLE FAR *lppTable); \
	MAPIMETHOD(Address) (THIS_ ULONG FAR *lpulUIParam, LPADRPARM lpAdrParms, LPADRLIST FAR *lppAdrList); \
	MAPIMETHOD(Details)(THIS_	ULONG FAR *lpulUIParam, LPFNDISMISS lpfnDismiss, LPVOID lpvDismissContext, ULONG cbEntryID, LPENTRYID lpEntryID, LPFNBUTTON lpfButtonCallback, LPVOID lpvButtonContext, LPTSTR lpszButtonText, ULONG ulFlags); \
	MAPIMETHOD(NewEntry)(THIS_ ULONG ulUIParam, ULONG ulFlags, ULONG cbEIDContainer, LPENTRYID lpEIDContainer, ULONG cbEIDNewEntryTpl, LPENTRYID lpEIDNewEntryTpl, ULONG FAR *lpcbEIDNewEntry, LPENTRYID FAR *lppEIDNewEntry); \
	MAPIMETHOD(DoConfigPropsheet)(THIS_ ULONG ulUIParam, ULONG ulFlags, LPTSTR lpszTitle, LPMAPITABLE lpDisplayTable, LPMAPIPROP lpCOnfigData, ULONG ulTopPage); \
	MAPIMETHOD(CopyMessages) (THIS_ LPCIID lpSrcInterface, LPVOID lpSrcFolder, LPENTRYLIST lpMsgList, LPCIID lpDestInterface, LPVOID lpDestFolder, ULONG ulUIParam, LPMAPIPROGRESS lpProgress, ULONG ulFlags); \
	MAPIMETHOD(CopyFolder)(THIS_ LPCIID lpSrcInterface, LPVOID lpSrcFolder, ULONG cbEntryID, LPENTRYID lpEntryID, LPCIID lpDestInterface, LPVOID lpDestFolder, LPTSTR lszNewFolderName, ULONG ulUIParam, LPMAPIPROGRESS lpProgress, ULONG ulFlags);
#define MAPI_IMAPISUPPORT_METHODS3(IPURE)								\
	MAPIMETHOD(DoCopyTo)(THIS_ LPCIID lpSrcInterface, LPVOID lpSrcObj, ULONG ciidExclude, LPCIID rgiidExclude, LPSPropTagArray lpExcludeProps, ULONG ulUIParam, LPMAPIPROGRESS lpProgress, LPCIID lpDestInterface, LPVOID lpDestObj, ULONG ulFlags, LPSPropProblemArray FAR *lppProblems); \
	MAPIMETHOD(DoCopyProps)(THIS_ LPCIID lpSrcInterface, LPVOID lpSrcObj, LPSPropTagArray lpIncludeProps, ULONG ulUIParam, LPMAPIPROGRESS lpProgress, LPCIID lpDestInterface, LPVOID lpDestObj, ULONG ulFlags, LPSPropProblemArray FAR *lppProblems); \
	MAPIMETHOD(DoProgressDialog)(THIS_ ULONG ulUIParam, ULONG ulFlags, LPMAPIPROGRESS FAR *lppProgress); \
	MAPIMETHOD(ReadReceipt)(THIS_ ULONG ulFlags, LPMESSAGE lpReadMessage, LPMESSAGE FAR *lppEmptyMessage); \
	MAPIMETHOD(PrepareSubmit)(THIS_ LPMESSAGE lpMessage, ULONG FAR *lpulFlags); \
	MAPIMETHOD(ExpandRecips)(THIS_ LPMESSAGE lpMessage, ULONG FAR *lpulFlags); \
	MAPIMETHOD(UpdatePAB)(THIS_ ULONG ulFlags, LPMESSAGE lpMessage); \
	MAPIMETHOD(DoSentMail)(THIS_ ULONG ulFlags, LPMESSAGE lpMessage); \
	MAPIMETHOD(OpenAddressBook)(THIS_ LPCIID lpInterface, ULONG ulFlags, LPADRBOOK FAR *lppAdrBook); \
	MAPIMETHOD(Preprocess)(THIS_ ULONG ulFlags, ULONG cbEntryID, LPENTRYID lpEntryID); \
	MAPIMETHOD(CompleteMsg)(THIS_ ULONG ulFlags, ULONG cbEntryID, LPENTRYID lpEntryID); \
	MAPIMETHOD(StoreLogoffTransports)(THIS_ ULONG FAR *lpulFlags); \
	MAPIMETHOD(StatusRecips)(THIS_ LPMESSAGE lpMessage, LPADRLIST lpRecipList); \
	MAPIMETHOD(WrapStoreEntryID)(THIS_ ULONG cbOrigEntry, LPENTRYID lpOrigEntry, ULONG FAR *lpcbWrappedEntry, LPENTRYID FAR *lppWrappedEntry); \
	MAPIMETHOD(ModifyProfile)(THIS_ ULONG ulFlags); \
	MAPIMETHOD(IStorageFromStream)(THIS_ LPUNKNOWN lpUnkIn, LPCIID lpInterface, ULONG ulFlags, LPSTORAGE FAR *lppStorageOut); \
	MAPIMETHOD(GetSvcConfigSupportObj)(THIS_ ULONG ulFlags, LPMAPISUP FAR *lppSvcSupport);
#undef		 INTERFACE
#define		 INTERFACE  IMAPISupport
DECLARE_MAPI_INTERFACE_(IMAPISupport, IUnknown)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_IMAPISUPPORT_METHODS1(PURE)
	MAPI_IMAPISUPPORT_METHODS2(PURE)
	MAPI_IMAPISUPPORT_METHODS3(PURE)
};
#define FILL_ENTRY				((ULONG) 0x00000001)
DECLARE_MAPI_INTERFACE_PTR(IABProvider, LPABPROVIDER);
DECLARE_MAPI_INTERFACE_PTR(IABLogon,    LPABLOGON);
#define MAPI_IABPROVIDER_METHODS(IPURE)                                 \
	MAPIMETHOD(Shutdown)(THIS_ ULONG FAR *lpulFlags); \
    MAPIMETHOD(Logon)(THIS_ LPMAPISUP lpMAPISup, ULONG ulUIParam, LPTSTR lpszProfileName, ULONG ulFlags, ULONG FAR *lpulpcbSecurity, LPBYTE FAR *lppbSecurity, LPMAPIERROR FAR *lppMAPIError, LPABLOGON FAR *lppABLogon);
#undef       INTERFACE
#define      INTERFACE  IABProvider
DECLARE_MAPI_INTERFACE_(IABProvider, IUnknown)
{
	BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IABPROVIDER_METHODS(PURE)
};
#define MAPI_IABLOGON_METHODS(IPURE)                                    \
	MAPIMETHOD(GetLastError)(THIS_ HRESULT hResult, ULONG ulFlags, LPMAPIERROR FAR *lppMAPIError); \
	MAPIMETHOD(Logoff)(THIS_ ULONG ulFlags); \
    MAPIMETHOD(OpenEntry)(THIS_ ULONG cbEntryID, LPENTRYID lpEntryID, LPCIID lpInterface, ULONG ulFlags, ULONG FAR *lpulObjType, LPUNKNOWN FAR *lppUnk); \
    MAPIMETHOD(CompareEntryIDs)(THIS_ ULONG cbEntryID1, LPENTRYID lpEntryID1, ULONG cbEntryID2, LPENTRYID lpEntryID2, ULONG ulFlags, ULONG FAR *lpulResult); \
    MAPIMETHOD(Advise)(THIS_  ULONG cbEntryID, LPENTRYID lpEntryID, ULONG ulEventMask, LPMAPIADVISESINK lpAdviseSink, ULONG FAR *lpulConnection); \
	MAPIMETHOD(Unadvise)(THIS_	ULONG ulConnection); \
    MAPIMETHOD(OpenStatusEntry)(THIS_ LPCIID lpInterface, ULONG ulFlags, ULONG FAR *lpulObjType, LPMAPISTATUS FAR *lppEntry); \
    MAPIMETHOD(OpenTemplateID) (THIS_ ULONG cbTemplateID, LPENTRYID lpTemplateID, ULONG ulTemplateFlags, LPMAPIPROP lpMAPIPropData, LPCIID lpInterface, LPMAPIPROP FAR *lppMAPIPropNew, LPMAPIPROP lpMAPIPropSibling); \
    MAPIMETHOD(GetOneOffTable)(THIS_ ULONG ulFlags, LPMAPITABLE FAR *lppTable); \
	MAPIMETHOD(PrepareRecips)(THIS_ ULONG ulFlags, LPSPropTagArray lpPropTagArray, LPADRLIST lpRecipList);
#undef       INTERFACE
#define      INTERFACE  IABLogon
DECLARE_MAPI_INTERFACE_(IABLogon, IUnknown)
{
	BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IABLOGON_METHODS(PURE)
};
typedef HRESULT (STDMAPIINITCALLTYPE ABPROVIDERINIT)(
	HINSTANCE			hInstance,
	LPMALLOC			lpMalloc,
	LPALLOCATEBUFFER	lpAllocateBuffer,
	LPALLOCATEMORE 		lpAllocateMore,
	LPFREEBUFFER 		lpFreeBuffer,
    ULONG				ulFlags,
    ULONG				ulMAPIVer,
    ULONG FAR *			lpulProviderVer,
    LPABPROVIDER FAR *	lppABProvider
);
ABPROVIDERINIT ABProviderInit;
#define	DEINIT_NORMAL				((ULONG) 0x00000001)
#define	DEINIT_HURRY				((ULONG) 0x80000000)
#define LOGON_NO_DIALOG				((ULONG) 0x00000001)
#define	LOGON_NO_CONNECT			((ULONG) 0x00000004)
#define	LOGON_NO_INBOUND			((ULONG) 0x00000008)
#define	LOGON_NO_OUTBOUND			((ULONG) 0x00000010)
#define	LOGON_SP_IDLE				((ULONG) 0x00010000)
#define	LOGON_SP_POLL				((ULONG) 0x00020000)
#define	LOGON_SP_RESOLVE			((ULONG) 0x00040000)
DECLARE_MAPI_INTERFACE_PTR(IXPProvider, LPXPPROVIDER);
DECLARE_MAPI_INTERFACE_PTR(IXPLogon, LPXPLOGON);
#define MAPI_IXPPROVIDER_METHODS(IPURE)									\
	MAPIMETHOD(Shutdown)(THIS_ ULONG FAR *lpulFlags); \
	MAPIMETHOD(TransportLogon)(THIS_ LPMAPISUP lpMAPISup, ULONG ulUIParam, LPTSTR lpszProfileName, ULONG FAR *lpulFlags, LPMAPIERROR FAR *lppMAPIError, LPXPLOGON FAR *lppXPLogon);
#undef		 INTERFACE
#define		 INTERFACE  IXPProvider
DECLARE_MAPI_INTERFACE_(IXPProvider, IUnknown)
{
	BEGIN_INTERFACE	
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_IXPPROVIDER_METHODS(PURE)
};
#define OPTION_TYPE_RECIPIENT		((ULONG) 0x00000001)
#define OPTION_TYPE_MESSAGE			((ULONG) 0x00000002)
typedef struct _OPTIONDATA
{
	ULONG			ulFlags;
	LPGUID			lpRecipGUID;
	LPTSTR			lpszAdrType;
	LPTSTR			lpszDLLName;
	ULONG			ulOrdinal;
	ULONG			cbOptionsData;
	LPBYTE			lpbOptionsData;
	ULONG			cOptionsProps;
	LPSPropValue	lpOptionsProps;
} OPTIONDATA, FAR *LPOPTIONDATA;
typedef SCODE(STDMAPIINITCALLTYPE OPTIONCALLBACK) (HINSTANCE hInst, LPMALLOC lpMalloc, ULONG ulFlags, ULONG cbOptionData, LPBYTE lpbOptionData, LPMAPISUP lpMAPISup, LPMAPIPROP lpDataSource, LPMAPIPROP FAR *lppWrappedSource, LPMAPIERROR FAR *lppMAPIError);
#define NOTIFY_ABORT_DEFERRED		((ULONG) 0x40000000)
#define NOTIFY_CANCEL_MESSAGE		((ULONG) 0x80000000)
#define NOTIFY_BEGIN_INBOUND		((ULONG) 0x00000001)
#define NOTIFY_END_INBOUND			((ULONG) 0x00010000)
#define NOTIFY_BEGIN_OUTBOUND		((ULONG) 0x00000002)
#define NOTIFY_END_OUTBOUND			((ULONG) 0x00020000)
#define NOTIFY_BEGIN_INBOUND_FLUSH	((ULONG) 0x00000004)
#define NOTIFY_END_INBOUND_FLUSH	((ULONG) 0x00040000)
#define NOTIFY_BEGIN_OUTBOUND_FLUSH	((ULONG) 0x00000008)
#define NOTIFY_END_OUTBOUND_FLUSH	((ULONG) 0x00080000)
#define	LOGOFF_NORMAL				((ULONG) 0x00000001)
#define LOGOFF_HURRY				((ULONG) 0x80000000)
#define BEGIN_DEFERRED				((ULONG) 0x00000001)
#define END_RESEND_NOW				((ULONG) 0x00010000)
#define END_RESEND_LATER			((ULONG) 0x00020000)
#define END_DONT_RESEND				((ULONG) 0x00040000)
#define MAPI_IXPLOGON_METHODS(IPURE)									\
	MAPIMETHOD(AddressTypes)(THIS_ ULONG FAR *lpulFlags, ULONG FAR *lpcAdrType, LPTSTR FAR * FAR *lpppAdrTypeArray, ULONG FAR *lpcMAPIUID, LPMAPIUID FAR * FAR *lpppUIDArray); \
	MAPIMETHOD(RegisterOptions) (THIS_ ULONG FAR *lpulFlags, ULONG FAR *lpcOptions, LPOPTIONDATA FAR *lppOptions); \
	MAPIMETHOD(TransportNotify)(THIS_ ULONG FAR *lpulFlags, LPVOID FAR *lppvData); \
	MAPIMETHOD(Idle)(THIS_ ULONG ulFlags); \
	MAPIMETHOD(TransportLogoff)(THIS_ ULONG ulFlags); \
	MAPIMETHOD(SubmitMessage)(THIS_ ULONG ulFlags, LPMESSAGE lpMessage, ULONG FAR *lpulMsgRef, ULONG FAR *lpulReturnParm); \
	MAPIMETHOD(EndMessage)(THIS_ ULONG ulMsgRef, ULONG FAR *lpulFlags); \
	MAPIMETHOD(Poll)(THIS_ ULONG FAR *lpulIncoming); \
	MAPIMETHOD(StartMessage)(THIS_ ULONG ulFlags, LPMESSAGE lpMessage, ULONG FAR *lpulMsgRef); \
    MAPIMETHOD(OpenStatusEntry)(THIS_ LPCIID lpInterface, ULONG ulFlags, ULONG FAR *lpulObjType, LPMAPISTATUS FAR *lppEntry); \
	MAPIMETHOD(ValidateState)(THIS_ ULONG ulUIParam, ULONG ulFlags); \
	MAPIMETHOD(FlushQueues)(THIS_ ULONG ulUIParam, ULONG cbTargetTransport, LPENTRYID lpTargetTransport, ULONG ulFlags);
#undef       INTERFACE
#define      INTERFACE  IXPLogon
DECLARE_MAPI_INTERFACE_(IXPLogon, IUnknown)
{
	BEGIN_INTERFACE	
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IXPLOGON_METHODS(PURE)
};
typedef HRESULT(STDMAPIINITCALLTYPE XPPROVIDERINIT) (HINSTANCE hInstance, LPMALLOC lpMalloc, LPALLOCATEBUFFER lpAllocateBuffer, LPALLOCATEMORE lpAllocateMore, LPFREEBUFFER lpFreeBuffer, ULONG ulFlags, ULONG ulMAPIVer, ULONG FAR *lpulProviderVer, LPXPPROVIDER FAR *lppXPProvider);
XPPROVIDERINIT XPProviderInit;
#define LOGON_SP_TRANSPORT		((ULONG) 0x00000001)
#define LOGON_SP_PROMPT			((ULONG) 0x00000002)
#define LOGON_SP_NEWPW			((ULONG) 0x00000004)
#define LOGON_CHANGED			((ULONG) 0x00000008)
#define DIALOG_FOLDER			((ULONG) 0x00000001)
#define DIALOG_MESSAGE			((ULONG) 0x00000002)
#define DIALOG_PROP				((ULONG) 0x00000004)
#define DIALOG_ATTACH			((ULONG) 0x00000008)
#define DIALOG_MOVE				((ULONG) 0x00000010)
#define DIALOG_COPY				((ULONG) 0x00000020)
#define DIALOG_DELETE			((ULONG) 0x00000040)
#define DIALOG_ALLOW_CANCEL		((ULONG) 0x00000080)
#define DIALOG_CONFIRM_CANCEL	((ULONG) 0x00000100)
#define NEEDS_PREPROCESSING		((ULONG) 0x00000001)
#define NEEDS_SPOOLER			((ULONG) 0x00000002)
#define CHECK_SENDER			((ULONG) 0x00000001)
#define NON_STANDARD			((ULONG) 0x00010000)
DECLARE_MAPI_INTERFACE_PTR(IMSLogon, LPMSLOGON);
DECLARE_MAPI_INTERFACE_PTR(IMSProvider, LPMSPROVIDER);
#define MAPI_IMSPROVIDER_METHODS(IPURE)									\
	MAPIMETHOD(Shutdown) (THIS_ ULONG FAR *lpulFlags); \
	MAPIMETHOD(Logon)(THIS_ LPMAPISUP lpMAPISup, ULONG ulUIParam, LPTSTR lpszProfileName, ULONG cbEntryID, LPENTRYID 	lpEntryID, ULONG ulFlags, LPCIID lpInterface, ULONG FAR *lpcbSpoolSecurity, LPBYTE FAR *lppbSpoolSecurity, LPMAPIERROR FAR *lppMAPIError, LPMSLOGON FAR *lppMSLogon, LPMDB FAR *lppMDB); \
	MAPIMETHOD(SpoolerLogon)(THIS_ LPMAPISUP lpMAPISup, ULONG ulUIParam, LPTSTR lpszProfileName, ULONG cbEntryID, LPENTRYID lpEntryID, ULONG ulFlags, LPCIID lpInterface, ULONG cbSpoolSecurity, LPBYTE lpbSpoolSecurity, LPMAPIERROR FAR *lppMAPIError, LPMSLOGON FAR *lppMSLogon, LPMDB FAR *lppMDB); \
	MAPIMETHOD(CompareStoreIDs)(THIS_ ULONG cbEntryID1, LPENTRYID lpEntryID1, ULONG cbEntryID2, LPENTRYID lpEntryID2, ULONG ulFlags, ULONG FAR * lpulResult);
#undef		 INTERFACE
#define		 INTERFACE  IMSProvider
DECLARE_MAPI_INTERFACE_(IMSProvider, IUnknown)
{
	BEGIN_INTERFACE	
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_IMSPROVIDER_METHODS(PURE)
};
#define MAPI_IMSLOGON_METHODS(IPURE)									\
	MAPIMETHOD(GetLastError)(THIS_ HRESULT hResult, ULONG ulFlags, LPMAPIERROR FAR *lppMAPIError); \
	MAPIMETHOD(Logoff)(THIS_ ULONG FAR *lpulFlags); \
	MAPIMETHOD(OpenEntry)(THIS_ ULONG cbEntryID, LPENTRYID lpEntryID, LPCIID lpInterface, ULONG ulFlags, ULONG FAR *lpulObjType, LPUNKNOWN FAR *lppUnk); \
	MAPIMETHOD(CompareEntryIDs)(THIS_ ULONG cbEntryID1, LPENTRYID lpEntryID1, ULONG cbEntryID2, LPENTRYID lpEntryID2, ULONG ulFlags, ULONG FAR *lpulResult); \
	MAPIMETHOD(Advise)(THIS_ ULONG cbEntryID, LPENTRYID lpEntryID, ULONG ulEventMask, LPMAPIADVISESINK lpAdviseSink, ULONG FAR *lpulConnection); \
	MAPIMETHOD(Unadvise)(THIS_ ULONG ulConnection); \
	MAPIMETHOD(OpenStatusEntry)(THIS_ LPCIID lpInterface, ULONG ulFlags, ULONG FAR *lpulObjType, LPVOID FAR *lppEntry);
#undef		 INTERFACE
#define		 INTERFACE  IMSLogon
DECLARE_MAPI_INTERFACE_(IMSLogon, IUnknown)
{
	BEGIN_INTERFACE	
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_IMSLOGON_METHODS(PURE)
};
typedef HRESULT(STDMAPIINITCALLTYPE MSPROVIDERINIT) (HINSTANCE hInstance, LPMALLOC lpMalloc, LPALLOCATEBUFFER lpAllocateBuffer, LPALLOCATEMORE lpAllocateMore, LPFREEBUFFER lpFreeBuffer, ULONG ulFlags, ULONG ulMAPIVer, ULONG FAR *lpulProviderVer, LPMSPROVIDER FAR *lppMSProvider);
MSPROVIDERINIT MSProviderInit;
#define MSG_SERVICE_UI_READ_ONLY	 0x00000008
#define SERVICE_LOGON_FAILED		 0x00000020
#define MSG_SERVICE_INSTALL			0x00000001
#define MSG_SERVICE_CREATE			0x00000002
#define MSG_SERVICE_CONFIGURE		0x00000003
#define MSG_SERVICE_DELETE			0x00000004
#define MSG_SERVICE_UNINSTALL		0x00000005
#define MSG_SERVICE_PROVIDER_CREATE	0x00000006
#define MSG_SERVICE_PROVIDER_DELETE	0x00000007
typedef HRESULT(STDAPICALLTYPE MSGSERVICEENTRY) (HINSTANCE hInstance, LPMALLOC lpMalloc, LPMAPISUP lpMAPISup, ULONG ulUIParam, ULONG ulFlags, ULONG ulContext, ULONG cValues, LPSPropValue lpProps, LPPROVIDERADMIN lpProviderAdmin, LPMAPIERROR FAR *lppMapiError);
typedef MSGSERVICEENTRY FAR *LPMSGSERVICEENTRY;
#endif
