/*+@@file@@----------------------------------------------------------------*//*!
 \file		MAPIX.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 31 14:48:32 2016
 \date		Modified on Sun Jul 31 14:48:32 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef MAPIX_H
#define MAPIX_H
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
#ifndef BEGIN_INTERFACE
#define BEGIN_INTERFACE
#endif
DECLARE_MAPI_INTERFACE_PTR(IProfAdmin,			LPPROFADMIN);
DECLARE_MAPI_INTERFACE_PTR(IMsgServiceAdmin,	LPSERVICEADMIN);
DECLARE_MAPI_INTERFACE_PTR(IMAPISession,		LPMAPISESSION);
typedef ULONG       FLAGS;
#define MAPI_LOGON_UI           0x00000001
#define MAPI_NEW_SESSION        0x00000002
#define MAPI_ALLOW_OTHERS       0x00000008
#define MAPI_EXPLICIT_PROFILE   0x00000010
#define MAPI_EXTENDED           0x00000020
#define MAPI_FORCE_DOWNLOAD     0x00001000
#define MAPI_SERVICE_UI_ALWAYS	0x00002000
#define MAPI_NO_MAIL			0x00008000
#ifndef MAPI_PASSWORD_UI
#define MAPI_PASSWORD_UI		0x00020000
#endif
#define MAPI_TIMEOUT_SHORT		0x00100000
#define MAPI_SIMPLE_DEFAULT (MAPI_LOGON_UI | MAPI_FORCE_DOWNLOAD | MAPI_ALLOW_OTHERS)
#define MAPI_SIMPLE_EXPLICIT (MAPI_NEW_SESSION | MAPI_FORCE_DOWNLOAD | MAPI_EXPLICIT_PROFILE)
typedef struct
{
	ULONG			ulVersion;
	ULONG			ulFlags;
} MAPIINIT_0, FAR *LPMAPIINIT_0;
typedef MAPIINIT_0 MAPIINIT;
typedef MAPIINIT FAR *LPMAPIINIT;
#define MAPI_INIT_VERSION				0
#define MAPI_MULTITHREAD_NOTIFICATIONS	0x00000001
typedef HRESULT(STDAPICALLTYPE MAPIINITIALIZE) (LPVOID lpMapiInit);
typedef MAPIINITIALIZE FAR *LPMAPIINITIALIZE;
typedef void (STDAPICALLTYPE MAPIUNINITIALIZE) (void);
typedef MAPIUNINITIALIZE FAR *LPMAPIUNINITIALIZE;
MAPIINITIALIZE MAPIInitialize;
MAPIUNINITIALIZE MAPIUninitialize;
typedef HRESULT(STDMETHODCALLTYPE MAPILOGONEX) (ULONG_PTR ulUIParam, LPTSTR lpszProfileName, LPTSTR lpszPassword, ULONG ulFlags, LPMAPISESSION FAR *lppSession);
typedef MAPILOGONEX FAR *LPMAPILOGONEX;
MAPILOGONEX MAPILogonEx;
typedef SCODE(STDMETHODCALLTYPE MAPIALLOCATEBUFFER) (ULONG cbSize, LPVOID FAR *lppBuffer);
typedef SCODE(STDMETHODCALLTYPE MAPIALLOCATEMORE) (ULONG cbSize, LPVOID lpObject, LPVOID FAR *lppBuffer);
typedef ULONG(STDAPICALLTYPE MAPIFREEBUFFER) (LPVOID lpBuffer);
typedef MAPIALLOCATEBUFFER FAR *LPMAPIALLOCATEBUFFER;
typedef MAPIALLOCATEMORE FAR *LPMAPIALLOCATEMORE;
typedef MAPIFREEBUFFER FAR *LPMAPIFREEBUFFER;
MAPIALLOCATEBUFFER MAPIAllocateBuffer;
MAPIALLOCATEMORE MAPIAllocateMore;
MAPIFREEBUFFER MAPIFreeBuffer;
typedef HRESULT(STDMETHODCALLTYPE MAPIADMINPROFILES) (ULONG ulFlags, LPPROFADMIN FAR *lppProfAdmin);
typedef MAPIADMINPROFILES FAR *LPMAPIADMINPROFILES;
MAPIADMINPROFILES MAPIAdminProfiles;
#define MAPI_LOGOFF_SHARED      0x00000001
#define MAPI_LOGOFF_UI          0x00000002
#define MAPI_DEFAULT_STORE			0x00000001
#define MAPI_SIMPLE_STORE_TEMPORARY	0x00000002
#define MAPI_SIMPLE_STORE_PERMANENT	0x00000003
#define	MAPI_PRIMARY_STORE			0x00000004
#define	MAPI_SECONDARY_STORE		0x00000005
#define MAPI_POST_MESSAGE		0x00000001
#define MAPI_NEW_MESSAGE		0x00000002
#define MAPI_IMAPISESSION_METHODS(IPURE) \
	MAPIMETHOD(GetLastError) (THIS_ HRESULT hResult, ULONG ulFlags, LPMAPIERROR FAR *lppMAPIError); \
	MAPIMETHOD(GetMsgStoresTable) (THIS_ ULONG ulFlags, LPMAPITABLE FAR *lppTable); \
	MAPIMETHOD(OpenMsgStore) (THIS_ ULONG_PTR ulUIParam, ULONG cbEntryID, LPENTRYID lpEntryID, LPCIID lpInterface, ULONG ulFlags, LPMDB FAR *lppMDB); \
	MAPIMETHOD(OpenAddressBook) (THIS_ ULONG_PTR ulUIParam, LPCIID lpInterface, ULONG ulFlags, LPADRBOOK FAR *lppAdrBook); \
	MAPIMETHOD(OpenProfileSection) (THIS_ LPMAPIUID lpUID, LPCIID lpInterface, ULONG ulFlags, LPPROFSECT FAR *lppProfSect); \
	MAPIMETHOD(GetStatusTable) (THIS_ ULONG ulFlags, LPMAPITABLE FAR *lppTable); \
	MAPIMETHOD(OpenEntry) (THIS_ ULONG cbEntryID, LPENTRYID lpEntryID, LPCIID lpInterface, ULONG ulFlags, ULONG FAR *lpulObjType, LPUNKNOWN FAR *lppUnk); \
	MAPIMETHOD(CompareEntryIDs) (THIS_ ULONG cbEntryID1, LPENTRYID lpEntryID1, ULONG cbEntryID2, LPENTRYID lpEntryID2, ULONG ulFlags, ULONG FAR *lpulResult); \
	MAPIMETHOD(Advise) (THIS_ ULONG cbEntryID, LPENTRYID lpEntryID, ULONG ulEventMask, LPMAPIADVISESINK lpAdviseSink, ULONG FAR *lpulConnection); \
	MAPIMETHOD(Unadvise) (THIS_ ULONG ulConnection); \
	MAPIMETHOD(MessageOptions) (THIS_ ULONG_PTR ulUIParam, ULONG ulFlags, LPTSTR lpszAdrType, LPMESSAGE lpMessage); \
	MAPIMETHOD(QueryDefaultMessageOpt) (THIS_ LPTSTR lpszAdrType, ULONG ulFlags, ULONG FAR *lpcValues, LPSPropValue FAR *lppOptions); \
	MAPIMETHOD(EnumAdrTypes) (THIS_	ULONG ulFlags, ULONG FAR *lpcAdrTypes, LPTSTR FAR * FAR *lpppszAdrTypes); \
	MAPIMETHOD(QueryIdentity) (THIS_ ULONG FAR *lpcbEntryID, LPENTRYID FAR *lppEntryID); \
	MAPIMETHOD(Logoff) (THIS_ ULONG_PTR ulUIParam, ULONG ulFlags, ULONG ulReserved); \
	MAPIMETHOD(SetDefaultStore) (THIS_ ULONG ulFlags, ULONG cbEntryID, LPENTRYID lpEntryID); \
	MAPIMETHOD(AdminServices) (THIS_ ULONG ulFlags, LPSERVICEADMIN FAR *lppServiceAdmin); \
	MAPIMETHOD(ShowForm) (THIS_ ULONG_PTR ulUIParam, LPMDB lpMsgStore, LPMAPIFOLDER lpParentFolder, LPCIID lpInterface, ULONG ulMessageToken, LPMESSAGE lpMessageSent, ULONG ulFlags, ULONG ulMessageStatus, ULONG ulMessageFlags, ULONG ulAccess, LPSTR lpszMessageClass); \
	MAPIMETHOD(PrepareForm) (THIS_ LPCIID lpInterface, LPMESSAGE lpMessage, ULONG FAR *lpulMessageToken);
#undef		 INTERFACE
#define		 INTERFACE  IMAPISession
DECLARE_MAPI_INTERFACE_(IMAPISession, IUnknown)
{
	BEGIN_INTERFACE	
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_IMAPISESSION_METHODS(PURE)
};
#define MAPI_IADDRBOOK_METHODS(IPURE) \
	MAPIMETHOD(OpenEntry) (THIS_ ULONG cbEntryID, LPENTRYID lpEntryID, LPCIID lpInterface, ULONG ulFlags, ULONG FAR *lpulObjType, LPUNKNOWN FAR *lppUnk); \
	MAPIMETHOD(CompareEntryIDs) (THIS_ ULONG cbEntryID1, LPENTRYID lpEntryID1, ULONG cbEntryID2, LPENTRYID lpEntryID2, ULONG ulFlags, ULONG FAR *lpulResult); \
	MAPIMETHOD(Advise) (THIS_ ULONG cbEntryID, LPENTRYID lpEntryID, ULONG ulEventMask, LPMAPIADVISESINK lpAdviseSink, ULONG FAR *lpulConnection); \
	MAPIMETHOD(Unadvise) (THIS_ ULONG ulConnection); \
	MAPIMETHOD(CreateOneOff) (THIS_ LPTSTR lpszName, LPTSTR lpszAdrType, LPTSTR lpszAddress, ULONG ulFlags, ULONG FAR *lpcbEntryID, LPENTRYID FAR *lppEntryID); \
	MAPIMETHOD(NewEntry) (THIS_ ULONG_PTR ulUIParam, ULONG ulFlags, ULONG cbEIDContainer, LPENTRYID lpEIDContainer, ULONG cbEIDNewEntryTpl, LPENTRYID lpEIDNewEntryTpl, ULONG FAR *lpcbEIDNewEntry, LPENTRYID FAR *lppEIDNewEntry); \
	MAPIMETHOD(ResolveName) (THIS_ ULONG_PTR ulUIParam, ULONG ulFlags, LPTSTR lpszNewEntryTitle, LPADRLIST lpAdrList); \
	MAPIMETHOD(Address) (THIS_ ULONG_PTR FAR *lpulUIParam, LPADRPARM lpAdrParms, LPADRLIST FAR *lppAdrList); \
	MAPIMETHOD(Details) (THIS_ ULONG FAR *lpulUIParam, LPFNDISMISS lpfnDismiss, LPVOID lpvDismissContext, ULONG cbEntryID, LPENTRYID lpEntryID, LPFNBUTTON lpfButtonCallback, LPVOID lpvButtonContext, LPTSTR lpszButtonText, ULONG ulFlags); \
	MAPIMETHOD(RecipOptions) (THIS_ ULONG_PTR ulUIParam, ULONG ulFlags, LPADRENTRY lpRecip); \
	MAPIMETHOD(QueryDefaultRecipOpt) (THIS_ LPTSTR lpszAdrType, ULONG ulFlags, ULONG FAR *lpcValues, LPSPropValue FAR *lppOptions); \
	MAPIMETHOD(GetPAB) (THIS_ ULONG FAR *lpcbEntryID, LPENTRYID FAR *lppEntryID); \
	MAPIMETHOD(SetPAB) (THIS_ ULONG cbEntryID, LPENTRYID lpEntryID); \
	MAPIMETHOD(GetDefaultDir) (THIS_ ULONG FAR *lpcbEntryID, LPENTRYID FAR *lppEntryID);\
	MAPIMETHOD(SetDefaultDir) (THIS_ ULONG cbEntryID, LPENTRYID lpEntryID); \
	MAPIMETHOD(GetSearchPath) (THIS_ ULONG ulFlags, LPSRowSet FAR *lppSearchPath); \
	MAPIMETHOD(SetSearchPath) (THIS_ ULONG ulFlags, LPSRowSet lpSearchPath); \
	MAPIMETHOD(PrepareRecips) (THIS_ ULONG ulFlags, LPSPropTagArray lpPropTagArray, LPADRLIST lpRecipList);
#undef		 INTERFACE
#define		 INTERFACE  IAddrBook
DECLARE_MAPI_INTERFACE_(IAddrBook, IMAPIProp)
{
	BEGIN_INTERFACE	
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_IMAPIPROP_METHODS(PURE)
	MAPI_IADDRBOOK_METHODS(PURE)
};
DECLARE_MAPI_INTERFACE_PTR(IAddrBook, LPADRBOOK);
#define MAPI_DEFAULT_SERVICES			0x00000001
#define MAPI_IPROFADMIN_METHODS(IPURE) \
	MAPIMETHOD(GetLastError) (THIS_ HRESULT hResult, ULONG ulFlags, LPMAPIERROR FAR *lppMAPIError); \
	MAPIMETHOD(GetProfileTable) (THIS_ ULONG ulFlags, LPMAPITABLE FAR *lppTable); \
	MAPIMETHOD(CreateProfile) (THIS_ LPTSTR lpszProfileName, LPTSTR lpszPassword, ULONG_PTR ulUIParam, ULONG ulFlags); \
	MAPIMETHOD(DeleteProfile) (THIS_ LPTSTR lpszProfileName, ULONG ulFlags); \
	MAPIMETHOD(ChangeProfilePassword) (THIS_ LPTSTR lpszProfileName, LPTSTR lpszOldPassword, LPTSTR lpszNewPassword, ULONG ulFlags); \
	MAPIMETHOD(CopyProfile) (THIS_ LPTSTR lpszOldProfileName, LPTSTR lpszOldPassword, LPTSTR lpszNewProfileName, ULONG_PTR ulUIParam, ULONG ulFlags); \
	MAPIMETHOD(RenameProfile) (THIS_ LPTSTR lpszOldProfileName, LPTSTR lpszOldPassword, LPTSTR lpszNewProfileName, ULONG_PTR ulUIParam, ULONG ulFlags); \
	MAPIMETHOD(SetDefaultProfile) (THIS_ LPTSTR lpszProfileName, ULONG ulFlags); \
	MAPIMETHOD(AdminServices) (THIS_ LPTSTR lpszProfileName, LPTSTR lpszPassword, ULONG_PTR ulUIParam, ULONG ulFlags, LPSERVICEADMIN FAR *lppServiceAdmin);
#undef		 INTERFACE
#define		 INTERFACE  IProfAdmin
DECLARE_MAPI_INTERFACE_(IProfAdmin, IUnknown)
{
	BEGIN_INTERFACE	
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_IPROFADMIN_METHODS(PURE)
};
#define SERVICE_DEFAULT_STORE		0x00000001
#define SERVICE_SINGLE_COPY			0x00000002
#define SERVICE_CREATE_WITH_STORE	0x00000004
#define SERVICE_PRIMARY_IDENTITY	0x00000008
#define SERVICE_NO_PRIMARY_IDENTITY	0x00000020
#define MAPI_IMSGSERVICEADMIN_METHODS(IPURE) \
	MAPIMETHOD(GetLastError) (THIS_ HRESULT hResult, ULONG ulFlags, LPMAPIERROR FAR *lppMAPIError); \
	MAPIMETHOD(GetMsgServiceTable) (THIS_ ULONG ulFlags, LPMAPITABLE FAR *lppTable); \
	MAPIMETHOD(CreateMsgService) (THIS_ LPTSTR lpszService, LPTSTR lpszDisplayName, ULONG_PTR ulUIParam, ULONG ulFlags); \
	MAPIMETHOD(DeleteMsgService) (THIS_ LPMAPIUID lpUID); \
	MAPIMETHOD(CopyMsgService) (THIS_ LPMAPIUID lpUID, LPTSTR lpszDisplayName, LPCIID lpInterfaceToCopy, LPCIID lpInterfaceDst, LPVOID lpObjectDst, ULONG_PTR ulUIParam, ULONG ulFlags); \
	MAPIMETHOD(RenameMsgService) (THIS_ LPMAPIUID lpUID, ULONG ulFlags, LPTSTR lpszDisplayName); \
	MAPIMETHOD(ConfigureMsgService) (THIS_ LPMAPIUID lpUID, ULONG_PTR ulUIParam, ULONG ulFlags, ULONG cValues, LPSPropValue lpProps); \
	MAPIMETHOD(OpenProfileSection) (THIS_ LPMAPIUID lpUID, LPCIID lpInterface, ULONG ulFlags, LPPROFSECT FAR *lppProfSect); \
	MAPIMETHOD(MsgServiceTransportOrder) (THIS_ ULONG cUID, LPMAPIUID lpUIDList, ULONG ulFlags); \
	MAPIMETHOD(AdminProviders) (THIS_ LPMAPIUID lpUID, ULONG ulFlags, LPPROVIDERADMIN FAR *lppProviderAdmin); \
	MAPIMETHOD(SetPrimaryIdentity) (THIS_ LPMAPIUID lpUID, ULONG ulFlags); \
	MAPIMETHOD(GetProviderTable) (THIS_ ULONG ulFlags, LPMAPITABLE FAR *lppTable);
#undef 		 INTERFACE
#define 	 INTERFACE	IMsgServiceAdmin
DECLARE_MAPI_INTERFACE_(IMsgServiceAdmin, IUnknown)
{
	BEGIN_INTERFACE	
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_IMSGSERVICEADMIN_METHODS(PURE)
};
#endif
