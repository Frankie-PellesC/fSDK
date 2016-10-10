/*+@@file@@----------------------------------------------------------------*//*!
 \file		MAPIForm.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 24 19:56:34 2016
 \date		Modified on Sun Jul 24 19:56:34 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef MAPIFORM_H
#define MAPIFORM_H
#if __POCC__ >= 500
#pragma once
#endif
#ifndef MAPIDEFS_H
#include <mapidefs.h>
#include <mapicode.h>
#include <mapiguid.h>
#include <mapitags.h>
#endif
#ifndef BEGIN_INTERFACE
#define BEGIN_INTERFACE
#endif
typedef const RECT FAR *LPCRECT;
typedef ULONG HFRMREG;
#define HFRMREG_DEFAULT  0
#define HFRMREG_LOCAL    1
#define HFRMREG_PERSONAL 2
#define HFRMREG_FOLDER   3
DECLARE_MAPI_INTERFACE_PTR(IPersistMessage, LPPERSISTMESSAGE);
DECLARE_MAPI_INTERFACE_PTR(IMAPIMessageSite, LPMAPIMESSAGESITE);
DECLARE_MAPI_INTERFACE_PTR(IMAPISession, LPMAPISESSION);
DECLARE_MAPI_INTERFACE_PTR(IMAPIViewContext, LPMAPIVIEWCONTEXT);
DECLARE_MAPI_INTERFACE_PTR(IMAPIViewAdviseSink, LPMAPIVIEWADVISESINK);
DECLARE_MAPI_INTERFACE_PTR(IMAPIFormAdviseSink, LPMAPIFORMADVISESINK);
DECLARE_MAPI_INTERFACE_PTR(IMAPIFormInfo, LPMAPIFORMINFO);
DECLARE_MAPI_INTERFACE_PTR(IMAPIFormMgr, LPMAPIFORMMGR);
DECLARE_MAPI_INTERFACE_PTR(IMAPIFormContainer, LPMAPIFORMCONTAINER);
DECLARE_MAPI_INTERFACE_PTR(IMAPIForm, LPMAPIFORM);
DECLARE_MAPI_INTERFACE_PTR(IMAPIFormFactory, LPMAPIFORMFACTORY);
typedef const char FAR *FAR * LPPCSTR;
typedef LPMAPIFORMINFO FAR *LPPMAPIFORMINFO;
STDAPI MAPIOpenFormMgr(LPMAPISESSION pSession, LPMAPIFORMMGR FAR * ppmgr);
STDAPI MAPIOpenLocalFormContainer(LPMAPIFORMCONTAINER FAR * ppfcnt);
#define MAPI_GETLASTERROR_METHOD(IPURE)		MAPIMETHOD(GetLastError) (THIS_ HRESULT hResult, ULONG ulFlags, LPMAPIERROR FAR * lppMAPIError) IPURE;
#define MAPI_IPERSISTMESSAGE_METHODS(IPURE)	MAPIMETHOD(GetClassID) (THIS_ LPCLSID lpClassID) IPURE; \
    										MAPIMETHOD(IsDirty)(THIS) IPURE; \
    										MAPIMETHOD(InitNew)(THIS_ LPMAPIMESSAGESITE pMessageSite, LPMESSAGE pMessage) IPURE; \
											MAPIMETHOD(Load)(THIS_ LPMAPIMESSAGESITE pMessageSite, LPMESSAGE pMessage, ULONG ulMessageStatus, ULONG ulMessageFlags) IPURE; \
    										MAPIMETHOD(Save)(THIS_ LPMESSAGE pMessage, ULONG fSameAsLoad) IPURE; \
										    MAPIMETHOD(SaveCompleted)(THIS_ LPMESSAGE pMessage) IPURE; \
										    MAPIMETHOD(HandsOffMessage)(THIS) IPURE;
#undef INTERFACE
#define INTERFACE IPersistMessage
DECLARE_MAPI_INTERFACE_(IPersistMessage, IUnknown)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_GETLASTERROR_METHOD(PURE)
	MAPI_IPERSISTMESSAGE_METHODS(PURE)
};
#define MAPI_IMAPIMESSAGESITE_METHODS(IPURE) \
    MAPIMETHOD(GetSession) (THIS_ LPMAPISESSION FAR * ppSession) IPURE; \
    MAPIMETHOD(GetStore) (THIS_ LPMDB FAR * ppStore) IPURE; \
    MAPIMETHOD(GetFolder) (THIS_ LPMAPIFOLDER FAR * ppFolder) IPURE; \
    MAPIMETHOD(GetMessage) (THIS_ LPMESSAGE FAR * ppmsg) IPURE; \
    MAPIMETHOD(GetFormManager) (THIS_ LPMAPIFORMMGR FAR * ppFormMgr) IPURE; \
    MAPIMETHOD(NewMessage) (THIS_ ULONG fComposeInFolder, LPMAPIFOLDER pFolderFocus, LPPERSISTMESSAGE pPersistMessage, LPMESSAGE FAR * ppMessage, LPMAPIMESSAGESITE FAR * ppMessageSite, LPMAPIVIEWCONTEXT FAR * ppViewContext) IPURE; \
    MAPIMETHOD(CopyMessage) (THIS_ LPMAPIFOLDER pFolderDestination) IPURE; \
    MAPIMETHOD(MoveMessage) (THIS_ LPMAPIFOLDER pFolderDestination, LPMAPIVIEWCONTEXT pViewContext, LPCRECT prcPosRect) IPURE; \
    MAPIMETHOD(DeleteMessage) (THIS_ LPMAPIVIEWCONTEXT pViewContext, LPCRECT prcPosRect) IPURE; \
    MAPIMETHOD(SaveMessage) (THIS) IPURE; \
    MAPIMETHOD(SubmitMessage) (THIS_ ULONG ulFlags) IPURE; \
    MAPIMETHOD(GetSiteStatus) (THIS_ LPULONG lpulStatus) IPURE;
#undef INTERFACE
#define INTERFACE IMAPIMessageSite
DECLARE_MAPI_INTERFACE_(IMAPIMessageSite, IUnknown)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_GETLASTERROR_METHOD(PURE)
	MAPI_IMAPIMESSAGESITE_METHODS(PURE)
};
#define MAPI_IMAPIFORM_METHODS(IPURE) \
    MAPIMETHOD(SetViewContext) (THIS_ LPMAPIVIEWCONTEXT pViewContext) IPURE; \
    MAPIMETHOD(GetViewContext) (THIS_ LPMAPIVIEWCONTEXT FAR * ppViewContext) IPURE; \
    MAPIMETHOD(ShutdownForm)(THIS_ ULONG ulSaveOptions) IPURE; \
    MAPIMETHOD(DoVerb) (THIS_ LONG iVerb, LPMAPIVIEWCONTEXT lpViewContext, ULONG hwndParent, LPCRECT lprcPosRect) IPURE; \
    MAPIMETHOD(Advise)(THIS_ LPMAPIVIEWADVISESINK pAdvise, ULONG FAR * pdwStatus) IPURE; \
    MAPIMETHOD(Unadvise) (THIS_ ULONG ulConnection) IPURE;
#undef INTERFACE
#define INTERFACE IMAPIForm
DECLARE_MAPI_INTERFACE_(IMAPIForm, IUnknown)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_GETLASTERROR_METHOD(PURE)
	MAPI_IMAPIFORM_METHODS(PURE)
};
typedef enum tagSAVEOPTS
{
	SAVEOPTS_SAVEIFDIRTY = 0,
	SAVEOPTS_NOSAVE = 1,
	SAVEOPTS_PROMPTSAVE = 2
} SAVEOPTS;
typedef struct {
	ULONG ulFlags;
	HGLOBAL hDevMode;
	HGLOBAL hDevNames;
	ULONG ulFirstPageNumber;
	ULONG fPrintAttachments;
} FORMPRINTSETUP, FAR * LPFORMPRINTSETUP;
#define SAVE_FORMAT_TEXT                1
#define SAVE_FORMAT_RICHTEXT            2
#define MAPI_IMAPIVIEWCONTEXT_METHODS(IPURE) \
    MAPIMETHOD(SetAdviseSink)(THIS_ LPMAPIFORMADVISESINK pmvns) IPURE; \
    MAPIMETHOD(ActivateNext)(THIS_ ULONG ulDir, LPCRECT prcPosRect) IPURE; \
    MAPIMETHOD(GetPrintSetup)(THIS_ ULONG ulFlags, LPFORMPRINTSETUP FAR * lppFormPrintSetup) IPURE; \
    MAPIMETHOD(GetSaveStream)(THIS_ ULONG FAR * pulFlags, ULONG FAR * pulFormat, LPSTREAM FAR * ppstm) IPURE; \
    MAPIMETHOD(GetViewStatus) (THIS_ LPULONG lpulStatus) IPURE;
#undef INTERFACE
#define INTERFACE IMAPIViewContext
DECLARE_MAPI_INTERFACE_(IMAPIViewContext, IUnknown)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_GETLASTERROR_METHOD(PURE)
	MAPI_IMAPIVIEWCONTEXT_METHODS(PURE)
};
#define VCSTATUS_NEXT                           0x00000001
#define VCSTATUS_PREV                           0x00000002
#define VCSTATUS_MODAL                          0x00000004
#define VCSTATUS_INTERACTIVE                    0x00000008
#define VCSTATUS_READONLY                       0x00000010
#define VCSTATUS_DELETE                         0x00010000
#define VCSTATUS_COPY                           0x00020000
#define VCSTATUS_MOVE                           0x00040000
#define VCSTATUS_SUBMIT                         0x00080000
#define VCSTATUS_DELETE_IS_MOVE                 0x00100000
#define VCSTATUS_SAVE                           0x00200000
#define VCSTATUS_NEW_MESSAGE                    0x00400000
#define VCDIR_NEXT                              VCSTATUS_NEXT
#define VCDIR_PREV                              VCSTATUS_PREV
#define VCDIR_DELETE                            VCSTATUS_DELETE
#define VCDIR_MOVE                              VCSTATUS_MOVE
#define MAPI_IMAPIFORMADVISESINK_METHODS(IPURE) \
    STDMETHOD(OnChange)(THIS_ ULONG ulDir) IPURE; \
    STDMETHOD(OnActivateNext)(THIS_ LPCSTR lpszMessageClass, ULONG ulMessageStatus, ULONG ulMessageFlags, LPPERSISTMESSAGE FAR * ppPersistMessage) IPURE;
#undef INTERFACE
#define INTERFACE IMAPIFormAdviseSink
DECLARE_MAPI_INTERFACE_(IMAPIFormAdviseSink, IUnknown)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_IMAPIFORMADVISESINK_METHODS(PURE)
};
#define MAPI_IMAPIVIEWADVISESINK_METHODS(IPURE) \
    MAPIMETHOD(OnShutdown)(THIS) IPURE; \
    MAPIMETHOD(OnNewMessage)(THIS) IPURE; \
    MAPIMETHOD(OnPrint)(THIS_ ULONG dwPageNumber, HRESULT hrStatus) IPURE; \
    MAPIMETHOD(OnSubmitted) (THIS) IPURE; \
    MAPIMETHOD(OnSaved) (THIS) IPURE;
#undef INTERFACE
#define INTERFACE IMAPIViewAdviseSink
DECLARE_MAPI_INTERFACE_(IMAPIViewAdviseSink, IUnknown)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_IMAPIVIEWADVISESINK_METHODS(PURE)
};
typedef struct
{
	LPTSTR pszDisplayName;
	ULONG nVal;
} SMAPIFormPropEnumVal, FAR * LPMAPIFORMPROPENUMVAL;
typedef ULONG FORMPROPSPECIALTYPE;
#define FPST_VANILLA                    0
#define FPST_ENUM_PROP                  1
typedef struct
{
	ULONG ulFlags;
	ULONG nPropType;
	MAPINAMEID nmid;
	LPTSTR pszDisplayName;
	FORMPROPSPECIALTYPE nSpecialType;
	union
	{
		struct
		{
			MAPINAMEID nmidIdx;
			ULONG cfpevAvailable;
			LPMAPIFORMPROPENUMVAL pfpevAvailable;
		} s1;
	} u;
} SMAPIFormProp, FAR * LPMAPIFORMPROP;
typedef struct
{
	ULONG cProps;
	ULONG ulPad;
	SMAPIFormProp aFormProp[MAPI_DIM];
} SMAPIFormPropArray, FAR * LPMAPIFORMPROPARRAY;
#define CbMAPIFormPropArray(_c)    (offsetof(SMAPIFormPropArray, aFormProp) + (_c)*sizeof(SMAPIFormProp))
typedef struct
{
	LONG lVerb;
	LPTSTR szVerbname;
	DWORD fuFlags;
	DWORD grfAttribs;
	ULONG ulFlags;
} SMAPIVerb, FAR * LPMAPIVERB;
typedef struct
{
	ULONG cMAPIVerb;
	SMAPIVerb aMAPIVerb[MAPI_DIM];
} SMAPIVerbArray, FAR * LPMAPIVERBARRAY;
#define CbMAPIVerbArray(_c)         (offsetof(SMAPIVerbArray, aMAPIVerb) + (_c)*sizeof(SMAPIVerb))
#define MAPI_IMAPIFORMINFO_METHODS(IPURE) \
    MAPIMETHOD(CalcFormPropSet)(THIS_ ULONG ulFlags, LPMAPIFORMPROPARRAY FAR * ppFormPropArray) IPURE; \
    MAPIMETHOD(CalcVerbSet)(THIS_ ULONG ulFlags, LPMAPIVERBARRAY FAR * ppMAPIVerbArray) IPURE; \
    MAPIMETHOD(MakeIconFromBinary)(THIS_ ULONG nPropID, HICON FAR* phicon) IPURE; \
    MAPIMETHOD(SaveForm)(THIS_ LPCTSTR szFileName) IPURE; \
    MAPIMETHOD(OpenFormContainer)(THIS_ LPMAPIFORMCONTAINER FAR * ppformcontainer) IPURE;
#undef INTERFACE
#define INTERFACE IMAPIFormInfo
DECLARE_MAPI_INTERFACE_(IMAPIFormInfo, IMAPIProp)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_IMAPIPROP_METHODS(PURE)
	MAPI_IMAPIFORMINFO_METHODS(PURE)
};
#define	MAPI_MESSAGE_BEHAVIOR_IPM 0
#define	MAPI_MESSAGE_BEHAVIOR_FOLDER 1
typedef struct
{
	ULONG cValues;
	LPCSTR aMessageClass[MAPI_DIM];
} SMessageClassArray, FAR * LPSMESSAGECLASSARRAY;
#define CbMessageClassArray(_c) (offsetof(SMessageClassArray, aMessageClass) + (_c)*sizeof(LPCSTR))
typedef struct
{
	ULONG cForms;
	LPMAPIFORMINFO aFormInfo[MAPI_DIM];
} SMAPIFormInfoArray, FAR * LPSMAPIFORMINFOARRAY;
#define CbMAPIFormInfoArray(_c) (offsetof(SMAPIFormInfoArray, aFormInfo) + (_c)*sizeof(LPMAPIFORMINFO))
#define MAPIFORM_SELECT_ALL_REGISTRIES           0
#define MAPIFORM_SELECT_FOLDER_REGISTRY_ONLY     1
#define MAPIFORM_SELECT_NON_FOLDER_REGISTRY_ONLY 2
#define FORMPROPSET_UNION                 0
#define FORMPROPSET_INTERSECTION          1
#define MAPIFORM_EXACTMATCH             0x0020
#define MAPI_IMAPIFORMMGR_METHODS(IPURE) \
    MAPIMETHOD(LoadForm)(THIS_ ULONG ulUIParam, ULONG ulFlags, LPCSTR lpszMessageClass, ULONG ulMessageStatus, ULONG ulMessageFlags, LPMAPIFOLDER pFolderFocus, LPMAPIMESSAGESITE pMessageSite, LPMESSAGE pmsg, LPMAPIVIEWCONTEXT pViewContext, REFIID riid, LPVOID FAR *ppvObj) IPURE; \
    MAPIMETHOD(ResolveMessageClass)(THIS_ LPCSTR szMsgClass, ULONG ulFlags, LPMAPIFOLDER pFolderFocus, LPMAPIFORMINFO FAR* ppResult) IPURE; \
    MAPIMETHOD(ResolveMultipleMessageClasses)(THIS_ LPSMESSAGECLASSARRAY pMsgClasses, ULONG ulFlags, LPMAPIFOLDER pFolderFocus, LPSMAPIFORMINFOARRAY FAR * pfrminfoarray) IPURE; \
    MAPIMETHOD(CalcFormPropSet)(THIS_ LPSMAPIFORMINFOARRAY pfrminfoarray, ULONG ulFlags, LPMAPIFORMPROPARRAY FAR* ppResults) IPURE; \
    MAPIMETHOD(CreateForm)(THIS_ ULONG ulUIParam, ULONG ulFlags, LPMAPIFORMINFO pfrminfoToActivate, REFIID refiidToAsk, LPVOID FAR* ppvObj) IPURE; \
    MAPIMETHOD(SelectForm)(THIS_ ULONG ulUIParam, ULONG ulFlags, LPCTSTR pszTitle, LPMAPIFOLDER pfld, LPMAPIFORMINFO FAR * ppfrminfoReturned) IPURE; \
    MAPIMETHOD(SelectMultipleForms)(THIS_ ULONG ulUIParam, ULONG ulFlags, LPCTSTR pszTitle, LPMAPIFOLDER pfld, LPSMAPIFORMINFOARRAY pfrminfoarray, LPSMAPIFORMINFOARRAY FAR * ppfrminfoarray) IPURE; \
    MAPIMETHOD(SelectFormContainer)(THIS_ ULONG ulUIParam, ULONG ulFlags, LPMAPIFORMCONTAINER FAR * lppfcnt) IPURE; \
    MAPIMETHOD(OpenFormContainer)(THIS_ HFRMREG hfrmreg, LPUNKNOWN lpunk, LPMAPIFORMCONTAINER FAR * lppfcnt) IPURE; \
    MAPIMETHOD(PrepareForm)(THIS_ ULONG ulUIParam, ULONG ulFlags, LPMAPIFORMINFO pfrminfo) IPURE; \
    MAPIMETHOD(IsInConflict)(THIS_ ULONG ulMessageFlags, ULONG ulMessageStatus, LPCSTR szMessageClass, LPMAPIFOLDER pFolderFocus) IPURE;
#undef  INTERFACE
#define INTERFACE    IMAPIFormMgr
DECLARE_MAPI_INTERFACE_(IMAPIFormMgr, IUnknown)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_GETLASTERROR_METHOD(PURE)
	MAPI_IMAPIFORMMGR_METHODS(PURE)
};
#define MAPIFORM_CPU_X86                1
#define MAPIFORM_CPU_MIP                2
#define MAPIFORM_CPU_AXP                3
#define MAPIFORM_CPU_PPC                4
#define MAPIFORM_CPU_M68                5
#define MAPIFORM_OS_WIN_31              1
#define MAPIFORM_OS_WINNT_35            2
#define MAPIFORM_OS_WIN_95              3
#define MAPIFORM_OS_MAC_7x              4
#define MAPIFORM_OS_WINNT_40            5
#define MAPIFORM_PLATFORM(CPU, OS) ((ULONG) ((((ULONG) CPU) << 16) | OS))
#define MAPIFORM_INSTALL_DIALOG                 MAPI_DIALOG
#define MAPIFORM_INSTALL_OVERWRITEONCONFLICT    0x0010
#define MAPI_IMAPIFORMCONTAINER_METHODS(IPURE) \
    MAPIMETHOD(InstallForm)(THIS_ ULONG ulUIParam, ULONG ulFlags, LPCTSTR szCfgPathName) IPURE; \
    MAPIMETHOD(RemoveForm)(THIS_ LPCSTR szMessageClass) IPURE; \
    MAPIMETHOD(ResolveMessageClass) (THIS_ LPCSTR szMessageClass, ULONG ulFlags, LPMAPIFORMINFO FAR * pforminfo) IPURE; \
    MAPIMETHOD(ResolveMultipleMessageClasses) (THIS_ LPSMESSAGECLASSARRAY pMsgClassArray, ULONG ulFlags, LPSMAPIFORMINFOARRAY FAR * ppfrminfoarray) IPURE; \
    MAPIMETHOD(CalcFormPropSet)(THIS_ ULONG ulFlags, LPMAPIFORMPROPARRAY FAR * ppResults) IPURE; \
    MAPIMETHOD(GetDisplay)(THIS_ ULONG ulFlags, LPTSTR FAR * pszDisplayName) IPURE;
#undef INTERFACE
#define INTERFACE IMAPIFormContainer
DECLARE_MAPI_INTERFACE_(IMAPIFormContainer, IUnknown)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_GETLASTERROR_METHOD(PURE)
	MAPI_IMAPIFORMCONTAINER_METHODS(PURE)
};
#define MAPI_IMAPIFORMFACTORY_METHODS(IPURE) \
    MAPIMETHOD(CreateClassFactory) (THIS_ REFCLSID clsidForm, ULONG ulFlags, LPCLASSFACTORY FAR * lppClassFactory) IPURE; \
    MAPIMETHOD(LockServer) (THIS_ ULONG ulFlags, ULONG fLockServer) IPURE;
#undef INTERFACE
#define INTERFACE IMAPIFormFactory
DECLARE_MAPI_INTERFACE_(IMAPIFormFactory, IUnknown)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_GETLASTERROR_METHOD(PURE)
	MAPI_IMAPIFORMFACTORY_METHODS(PURE)
};
#endif
