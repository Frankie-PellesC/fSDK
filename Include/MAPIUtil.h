/*+@@file@@----------------------------------------------------------------*//*!
 \file		MAPIUtil.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 31 14:35:49 2016
 \date		Modified on Sun Jul 31 14:35:49 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MAPIUTIL_H_
#define _MAPIUTIL_H_
#if __POCC__ >= 500
#pragma once
#endif
#if defined (WIN32) && !defined (_WIN32)
#define _WIN32
#endif
#ifndef MAPIX_H
#include <mapix.h>
#endif
#ifdef WIN16
#include <storage.h>
#endif
#ifndef BEGIN_INTERFACE
#define BEGIN_INTERFACE
#endif
DECLARE_MAPI_INTERFACE_PTR(ITableData, LPTABLEDATA);
typedef void (STDAPICALLTYPE CALLERRELEASE) (ULONG ulCallerData, LPTABLEDATA lpTblData, LPMAPITABLE lpVue);
#define MAPI_ITABLEDATA_METHODS(IPURE)									\
	MAPIMETHOD(HrGetView) (THIS_ LPSSortOrderSet lpSSortOrderSet, CALLERRELEASE FAR *lpfCallerRelease, ULONG ulCallerData, LPMAPITABLE FAR *lppMAPITable) IPURE;		\
	MAPIMETHOD(HrModifyRow) (THIS_ LPSRow) IPURE; \
	MAPIMETHOD(HrDeleteRow) (THIS_ LPSPropValue lpSPropValue) IPURE; \
	MAPIMETHOD(HrQueryRow) (THIS_ LPSPropValue lpsPropValue, LPSRow FAR *lppSRow, ULONG FAR *lpuliRow) IPURE; \
	MAPIMETHOD(HrEnumRow) (THIS_ ULONG ulRowNumber, LPSRow FAR *lppSRow) IPURE; \
	MAPIMETHOD(HrNotify) (THIS_ ULONG ulFlags, ULONG cValues, LPSPropValue lpSPropValue) IPURE; \
	MAPIMETHOD(HrInsertRow) (THIS_ ULONG uliRow, LPSRow lpSRow) IPURE; \
	MAPIMETHOD(HrModifyRows) (THIS_ ULONG ulFlags, LPSRowSet lpSRowSet) IPURE; \
	MAPIMETHOD(HrDeleteRows) (THIS_ ULONG ulFlags, LPSRowSet lprowsetToDelete, ULONG FAR *cRowsDeleted) IPURE;
#undef  INTERFACE
#define INTERFACE ITableData
DECLARE_MAPI_INTERFACE_(ITableData, IUnknown)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_ITABLEDATA_METHODS(PURE)
};
STDAPI_(SCODE)CreateTable(LPCIID lpInterface, ALLOCATEBUFFER FAR * lpAllocateBuffer, ALLOCATEMORE FAR * lpAllocateMore, FREEBUFFER FAR * lpFreeBuffer, LPVOID lpvReserved, ULONG ulTableType, ULONG ulPropTagIndexColumn, LPSPropTagArray lpSPropTagArrayColumns, LPTABLEDATA FAR * lppTableData);
#define	TAD_ALL_ROWS	1
#define MAPI_IPROPDATA_METHODS(IPURE) \
	MAPIMETHOD(HrSetObjAccess) (THIS_ ULONG ulAccess) IPURE; \
	MAPIMETHOD(HrSetPropAccess) (THIS_ LPSPropTagArray lpPropTagArray, ULONG FAR *rgulAccess) IPURE; \
	MAPIMETHOD(HrGetPropAccess) (THIS_ LPSPropTagArray FAR *lppPropTagArray, ULONG FAR * FAR * lprgulAccess) IPURE; \
	MAPIMETHOD(HrAddObjProps) (THIS_ LPSPropTagArray lppPropTagArray, LPSPropProblemArray FAR *	lprgulAccess) IPURE;
#undef  INTERFACE
#define INTERFACE IPropData
DECLARE_MAPI_INTERFACE_(IPropData, IMAPIProp)
{
	BEGIN_INTERFACE
	MAPI_IUNKNOWN_METHODS(PURE)
	MAPI_IMAPIPROP_METHODS(PURE)
	MAPI_IPROPDATA_METHODS(PURE)
};
DECLARE_MAPI_INTERFACE_PTR(IPropData, LPPROPDATA);
STDAPI_(SCODE)CreateIProp(LPCIID lpInterface, ALLOCATEBUFFER FAR * lpAllocateBuffer, ALLOCATEMORE FAR * lpAllocateMore, FREEBUFFER FAR * lpFreeBuffer, LPVOID lpvReserved, LPPROPDATA FAR * lppPropData);
#define IPROP_READONLY		((ULONG) 0x00000001)
#define IPROP_READWRITE		((ULONG) 0x00000002)
#define IPROP_CLEAN			((ULONG) 0x00010000)
#define IPROP_DIRTY			((ULONG) 0x00020000)
#ifndef NOIDLEENGINE
#define PRILOWEST	-32768
#define PRIHIGHEST	32767
#define PRIUSER		0
#define IRONULL			((USHORT) 0x0000)
#define FIROWAIT		((USHORT) 0x0001)
#define FIROINTERVAL	((USHORT) 0x0002)
#define FIROPERBLOCK	((USHORT) 0x0004)
#define FIRODISABLED	((USHORT) 0x0020)
#define FIROONCEONLY	((USHORT) 0x0040)
#define IRCNULL			((USHORT) 0x0000)
#define FIRCPFN			((USHORT) 0x0001)
#define FIRCPV			((USHORT) 0x0002)
#define FIRCPRI			((USHORT) 0x0004)
#define FIRCCSEC		((USHORT) 0x0008)
#define FIRCIRO			((USHORT) 0x0010)
typedef BOOL (STDAPICALLTYPE FNIDLE) (LPVOID);
typedef FNIDLE FAR *PFNIDLE;
typedef void FAR *FTG;
typedef FTG  FAR *PFTG;
#define FTGNULL			((FTG) NULL)
STDAPI_(LONG)MAPIInitIdle(LPVOID lpvReserved);
STDAPI_(VOID)MAPIDeinitIdle(VOID);
STDAPI_(FTG)FtgRegisterIdleRoutine(PFNIDLE lpfnIdle, LPVOID lpvIdleParam, short priIdle, ULONG csecIdle, USHORT iroIdle);
STDAPI_(void) DeregisterIdleRoutine(FTG ftg);
STDAPI_(void) EnableIdleRoutine(FTG ftg, BOOL fEnable);
STDAPI_(void) ChangeIdleRoutine(FTG ftg, PFNIDLE lpfnIdle, LPVOID lpvIdleParam, short priIdle, ULONG csecIdle, USHORT iroIdle, USHORT ircIdle);
#endif
STDAPI_(LPMALLOC) MAPIGetDefaultMalloc(VOID);
#define SOF_UNIQUEFILENAME	((ULONG) 0x80000000)
STDMETHODIMP OpenStreamOnFile(LPALLOCATEBUFFER lpAllocateBuffer, LPFREEBUFFER lpFreeBuffer, ULONG ulFlags, LPTSTR lpszFileName, LPTSTR lpszPrefix, LPSTREAM FAR *lppStream);
typedef HRESULT(STDMETHODCALLTYPE FAR *LPOPENSTREAMONFILE) (LPALLOCATEBUFFER lpAllocateBuffer, LPFREEBUFFER lpFreeBuffer, ULONG ulFlags, LPTSTR lpszFileName, LPTSTR lpszPrefix, LPSTREAM FAR *lppStream);
#ifdef	_WIN32
#define OPENSTREAMONFILE "OpenStreamOnFile"
#endif
#ifdef	WIN16
#define OPENSTREAMONFILE "_OPENSTREAMONFILE"
#endif
STDAPI_(SCODE)PropCopyMore(LPSPropValue lpSPropValueDest, LPSPropValue lpSPropValueSrc, ALLOCATEMORE * lpfAllocMore, LPVOID lpvObject);
STDAPI_(ULONG)UlPropSize(LPSPropValue lpSPropValue);
STDAPI_(BOOL)FEqualNames(LPMAPINAMEID lpName1, LPMAPINAMEID lpName2);
#if defined(_WIN32) && !defined(_WINNT) && !defined(_WIN95)
#define _WINNT
#endif
STDAPI_(void) GetInstance(LPSPropValue lpPropMv, LPSPropValue lpPropSv, ULONG uliInst);
extern char rgchCsds[];
extern char rgchCids[];
extern char rgchCsdi[];
extern char rgchCidi[];
STDAPI_(BOOL)FPropContainsProp(LPSPropValue lpSPropValueDst, LPSPropValue lpSPropValueSrc, ULONG ulFuzzyLevel);
STDAPI_(BOOL)FPropCompareProp(LPSPropValue lpSPropValue1, ULONG ulRelOp, LPSPropValue lpSPropValue2);
STDAPI_(LONG)LPropCompareProp(LPSPropValue lpSPropValueA, LPSPropValue lpSPropValueB);
STDAPI_(HRESULT)HrAddColumns(LPMAPITABLE lptbl, LPSPropTagArray lpproptagColumnsNew, LPALLOCATEBUFFER lpAllocateBuffer, LPFREEBUFFER lpFreeBuffer);
STDAPI_(HRESULT)HrAddColumnsEx(LPMAPITABLE lptbl, LPSPropTagArray lpproptagColumnsNew, LPALLOCATEBUFFER lpAllocateBuffer, LPFREEBUFFER lpFreeBuffer, void (FAR *lpfnFilterColumns) (LPSPropTagArray ptaga));
STDAPI HrAllocAdviseSink(LPNOTIFCALLBACK lpfnCallback, LPVOID lpvContext, LPMAPIADVISESINK FAR *lppAdviseSink);
STDAPI HrThisThreadAdviseSink(LPMAPIADVISESINK lpAdviseSink, LPMAPIADVISESINK FAR *lppAdviseSink);
STDAPI HrDispatchNotifications(ULONG ulFlags);
typedef struct
{
	ULONG ulCtlType;
	ULONG ulCtlFlags;
	LPBYTE lpbNotif;
	ULONG cbNotif;
	LPTSTR lpszFilter;
	ULONG ulItemID;
	union
	{
		LPVOID lpv;
		LPDTBLLABEL lplabel;
		LPDTBLEDIT lpedit;
		LPDTBLLBX lplbx;
		LPDTBLCOMBOBOX lpcombobox;
		LPDTBLDDLBX lpddlbx;
		LPDTBLCHECKBOX lpcheckbox;
		LPDTBLGROUPBOX lpgroupbox;
		LPDTBLBUTTON lpbutton;
		LPDTBLRADIOBUTTON lpradiobutton;
		LPDTBLMVLISTBOX lpmvlbx;
		LPDTBLMVDDLBX lpmvddlbx;
		LPDTBLPAGE lppage;
	}
	ctl;
} DTCTL, FAR * LPDTCTL;
typedef struct
{
	ULONG cctl;
	LPTSTR lpszResourceName;
	union
	{
		LPTSTR lpszComponent;
		ULONG ulItemID;
	};
	LPDTCTL lpctl;
} DTPAGE, FAR * LPDTPAGE;
STDAPI BuildDisplayTable(LPALLOCATEBUFFER lpAllocateBuffer, LPALLOCATEMORE lpAllocateMore, LPFREEBUFFER lpFreeBuffer, LPMALLOC lpMalloc, HINSTANCE hInstance, UINT cPages, LPDTPAGE lpPage, ULONG ulFlags, LPMAPITABLE *lppTable, LPTABLEDATA *lppTblData);
STDAPI_(SCODE)ScCountNotifications(int cNotifications, LPNOTIFICATION lpNotifications, ULONG FAR *lpcb);
STDAPI_(SCODE)ScCopyNotifications(int cNotification, LPNOTIFICATION lpNotifications, LPVOID lpvDst, ULONG FAR *lpcb);
STDAPI_(SCODE)ScRelocNotifications(int cNotification, LPNOTIFICATION lpNotifications, LPVOID lpvBaseOld, LPVOID lpvBaseNew, ULONG FAR *lpcb);
STDAPI_(SCODE)ScCountProps(int cValues, LPSPropValue lpPropArray, ULONG FAR *lpcb);
STDAPI_(LPSPropValue)LpValFindProp(ULONG ulPropTag, ULONG cValues, LPSPropValue lpPropArray);
STDAPI_(SCODE)ScCopyProps(int cValues, LPSPropValue lpPropArray, LPVOID lpvDst, ULONG FAR *lpcb);
STDAPI_(SCODE)ScRelocProps(int cValues, LPSPropValue lpPropArray, LPVOID lpvBaseOld, LPVOID lpvBaseNew, ULONG FAR *lpcb);
STDAPI_(SCODE)ScDupPropset(int cValues, LPSPropValue lpPropArray, LPALLOCATEBUFFER lpAllocateBuffer, LPSPropValue FAR *lppPropArray);
STDAPI_(ULONG)UlAddRef(LPVOID lpunk);
STDAPI_(ULONG)UlRelease(LPVOID lpunk);
STDAPI HrGetOneProp(LPMAPIPROP lpMapiProp, ULONG ulPropTag, LPSPropValue FAR *lppProp);
STDAPI HrSetOneProp(LPMAPIPROP lpMapiProp, LPSPropValue lpProp);
STDAPI_(BOOL)FPropExists(LPMAPIPROP lpMapiProp, ULONG ulPropTag);
STDAPI_(LPSPropValue)PpropFindProp(LPSPropValue lpPropArray, ULONG cValues, ULONG ulPropTag);
STDAPI_(void) FreePadrlist(LPADRLIST lpAdrlist);
STDAPI_(void) FreeProws(LPSRowSet lpRows);
STDAPI HrQueryAllRows(LPMAPITABLE lpTable, LPSPropTagArray lpPropTags, LPSRestriction lpRestriction, LPSSortOrderSet lpSortOrderSet, LONG crowsMax, LPSRowSet FAR *lppRows);
#define MAPI_FORCE_CREATE	1
#define MAPI_FULL_IPM_TREE	2
STDAPI HrValidateIPMSubtree(LPMDB lpMDB, ULONG ulFlags, ULONG FAR *lpcValues, LPSPropValue FAR *lppValues, LPMAPIERROR FAR *lpperr);
STDAPI_(BOOL)FBinFromHex(LPTSTR lpsz, LPBYTE lpb);
STDAPI_(SCODE)ScBinFromHexBounded(LPTSTR lpsz, LPBYTE lpb, ULONG cb);
STDAPI_(void) HexFromBin(LPBYTE lpb, int cb, LPTSTR lpsz);
STDAPI_(ULONG)UlFromSzHex(LPCTSTR lpsz);
STDAPI HrEntryIDFromSz(LPTSTR lpsz, ULONG FAR *lpcb, LPENTRYID FAR *lppEntryID);
STDAPI HrSzFromEntryID(ULONG cb, LPENTRYID lpEntryID, LPTSTR FAR *lpsz);
STDAPI HrComposeEID(LPMAPISESSION lpSession, ULONG cbStoreRecordKey, LPBYTE lpStoreRecordKey, ULONG cbMsgEntryID, LPENTRYID lpMsgEntryID, ULONG FAR *lpcbEID, LPENTRYID FAR *lppEntryID);
STDAPI HrDecomposeEID(LPMAPISESSION lpSession, ULONG cbEntryID, LPENTRYID lpEntryID, ULONG FAR *lpcbStoreEntryID, LPENTRYID FAR *lppStoreEntryID, ULONG FAR *lpcbMsgEntryID, LPENTRYID FAR *lppMsgEntryID);
STDAPI HrComposeMsgID(LPMAPISESSION lpSession, ULONG cbStoreSearchKey, LPBYTE pStoreSearchKey, ULONG cbMsgEntryID, LPENTRYID lpMsgEntryID, LPTSTR FAR *lpszMsgID);
STDAPI HrDecomposeMsgID(LPMAPISESSION lpSession, LPTSTR lpszMsgID, ULONG FAR *lpcbStoreEntryID, LPENTRYID FAR *lppStoreEntryID, ULONG FAR *lppcbMsgEntryID, LPENTRYID FAR *lppMsgEntryID);
STDAPI_(LPTSTR)SzFindCh(LPCTSTR lpsz, USHORT ch);
STDAPI_(LPTSTR)SzFindLastCh(LPCTSTR lpsz, USHORT ch);
STDAPI_(LPTSTR)SzFindSz(LPCTSTR lpsz, LPCTSTR lpszKey);
STDAPI_(unsigned int) UFromSz(LPCTSTR lpsz);
STDAPI_(SCODE)ScUNCFromLocalPath(LPSTR lpszLocal, LPSTR lpszUNC, UINT cchUNC);
STDAPI_(SCODE)ScLocalPathFromUNC(LPSTR lpszUNC, LPSTR lpszLocal, UINT cchLocal);
STDAPI_(FILETIME)FtAddFt(FILETIME ftAddend1, FILETIME ftAddend2);
STDAPI_(FILETIME)FtMulDwDw(DWORD ftMultiplicand, DWORD ftMultiplier);
STDAPI_(FILETIME)FtMulDw(DWORD ftMultiplier, FILETIME ftMultiplicand);
STDAPI_(FILETIME)FtSubFt(FILETIME ftMinuend, FILETIME ftSubtrahend);
STDAPI_(FILETIME)FtNegFt(FILETIME ft);
STDAPI_(SCODE)ScCreateConversationIndex(ULONG cbParent, LPBYTE lpbParent, ULONG FAR * lpcbConvIndex, LPBYTE FAR * lppbConvIndex);
STDAPI WrapStoreEntryID(ULONG ulFlags, LPTSTR lpszDLLName, ULONG cbOrigEntry, LPENTRYID lpOrigEntry, ULONG *lpcbWrappedEntry, LPENTRYID *lppWrappedEntry);
#define RTF_SYNC_RTF_CHANGED	((ULONG) 0x00000001)
#define RTF_SYNC_BODY_CHANGED	((ULONG) 0x00000002)
STDAPI_(HRESULT)RTFSync(LPMESSAGE lpMessage, ULONG ulFlags, BOOL FAR * lpfMessageUpdated);
STDAPI_(HRESULT)WrapCompressedRTFStream(LPSTREAM lpCompressedRTFStream, ULONG ulFlags, LPSTREAM FAR * lpUncompressedRTFStream);
#if defined(_WIN32) || defined(WIN16)
STDAPI_(HRESULT)HrIStorageFromStream(LPUNKNOWN lpUnkIn, LPCIID lpInterface, ULONG ulFlags, LPSTORAGE FAR * lppStorageOut);
#endif
STDAPI_(SCODE)ScInitMapiUtil(ULONG ulFlags);
STDAPI_(VOID)DeinitMapiUtil(VOID);
#if defined (WIN16)
#define szHrDispatchNotifications "HrDispatchNotifications"
#elif defined (_WIN32) && defined (_X86_)
#define szHrDispatchNotifications "_HrDispatchNotifications@4"
#elif defined (_ALPHA_) || defined (_MIPS_) || defined (_PPC_) || defined(_IA64_)
#define szHrDispatchNotifications "HrDispatchNotifications"
#endif
typedef HRESULT(STDAPICALLTYPE DISPATCHNOTIFICATIONS) (ULONG ulFlags);
typedef DISPATCHNOTIFICATIONS FAR *LPDISPATCHNOTIFICATIONS;
#if defined (WIN16)
#define szScCreateConversationIndex "ScCreateConversationIndex"
#elif defined (_WIN32) && defined (_X86_)
#define szScCreateConversationIndex "_ScCreateConversationIndex@16"
#elif defined (_ALPHA_) || defined (_MIPS_) || defined (_PPC_) || defined(_IA64_)
#define szScCreateConversationIndex "ScCreateConversationIndex"
#endif
typedef SCODE(STDAPICALLTYPE CREATECONVERSATIONINDEX) (ULONG cbParent, LPBYTE lpbParent, ULONG FAR *lpcbConvIndex, LPBYTE FAR *lppbConvIndex);
typedef CREATECONVERSATIONINDEX FAR *LPCREATECONVERSATIONINDEX;
#endif
