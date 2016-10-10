/*+@@file@@----------------------------------------------------------------*//*!
 \file		DskQuota.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 17:03:20 2016
 \date		Modified on Wed Jul  6 17:03:20 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __DSKQUOTA_H
#define __DSKQUOTA_H
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _WINDOWS_
#include <windows.h>
#endif
#ifndef _OLE2_H_
#include <ole2.h>
#endif
#ifndef _OLECTL_H_
#include <olectl.h>
#endif
#ifdef INITGUIDS
#include <initguid.h>
#endif
DEFINE_GUID(CLSID_DiskQuotaControl, 0x7988b571, 0xec89, 0x11cf, 0x9c, 0x0, 0x0, 0xaa, 0x0, 0xa1, 0x4f, 0x56);
DEFINE_GUID(IID_IDiskQuotaControl, 0x7988b572, 0xec89, 0x11cf, 0x9c, 0x0, 0x0, 0xaa, 0x0, 0xa1, 0x4f, 0x56);
DEFINE_GUID(IID_IDiskQuotaUser, 0x7988b574, 0xec89, 0x11cf, 0x9c, 0x0, 0x0, 0xaa, 0x0, 0xa1, 0x4f, 0x56);
DEFINE_GUID(IID_IDiskQuotaUserBatch, 0x7988b576, 0xec89, 0x11cf, 0x9c, 0x0, 0x0, 0xaa, 0x0, 0xa1, 0x4f, 0x56);
DEFINE_GUID(IID_IEnumDiskQuotaUsers, 0x7988b577, 0xec89, 0x11cf, 0x9c, 0x0, 0x0, 0xaa, 0x0, 0xa1, 0x4f, 0x56);
DEFINE_GUID(IID_IDiskQuotaEvents, 0x7988b579, 0xec89, 0x11cf, 0x9c, 0x0, 0x0, 0xaa, 0x0, 0xa1, 0x4f, 0x56);
#define DISKQUOTA_STATE_DISABLED				0x00000000
#define DISKQUOTA_STATE_TRACK					0x00000001
#define DISKQUOTA_STATE_ENFORCE 				0x00000002
#define DISKQUOTA_STATE_MASK					0x00000003
#define DISKQUOTA_FILESTATE_INCOMPLETE			0x00000100
#define DISKQUOTA_FILESTATE_REBUILDING			0x00000200
#define DISKQUOTA_FILESTATE_MASK				0x00000300
#define DISKQUOTA_SET_DISABLED(s)			 	((s) &= ~DISKQUOTA_STATE_MASK)
#define DISKQUOTA_SET_TRACKED(s)			 	((s) |= (DISKQUOTA_STATE_MASK & DISKQUOTA_STATE_TRACK))
#define DISKQUOTA_SET_ENFORCED(s)			 	((s) |= (DISKQUOTA_STATE_ENFORCE & DISKQUOTA_STATE_ENFORCE))
#define DISKQUOTA_IS_DISABLED(s)			 	(DISKQUOTA_STATE_DISABLED == ((s) & DISKQUOTA_STATE_MASK))
#define DISKQUOTA_IS_TRACKED(s) 			 	(DISKQUOTA_STATE_TRACK == ((s) & DISKQUOTA_STATE_MASK))
#define DISKQUOTA_IS_ENFORCED(s)			 	(DISKQUOTA_STATE_ENFORCE == ((s) & DISKQUOTA_STATE_MASK))
#define DISKQUOTA_FILE_INCOMPLETE(s)		 	(0 != ((s) & DISKQUOTA_FILESTATE_INCOMPLETE))
#define DISKQUOTA_FILE_REBUILDING(s)		 	(0 != ((s) & DISKQUOTA_FILESTATE_REBUILDING))
#define DISKQUOTA_LOGFLAG_USER_THRESHOLD	 	0x00000001
#define DISKQUOTA_LOGFLAG_USER_LIMIT		 	0x00000002
#define DISKQUOTA_IS_LOGGED_USER_THRESHOLD(f) 	(0 != ((f) & DISKQUOTA_LOGFLAG_USER_THRESHOLD))
#define DISKQUOTA_IS_LOGGED_USER_LIMIT(f)		(0 != ((f) & DISKQUOTA_LOGFLAG_USER_LIMIT))
#define DISKQUOTA_SET_LOG_USER_THRESHOLD(f,yn) 	((f &= ~DISKQUOTA_LOGFLAG_USER_THRESHOLD) |= ((yn) ? DISKQUOTA_LOGFLAG_USER_THRESHOLD : 0))
#define DISKQUOTA_SET_LOG_USER_LIMIT(f,yn)		((f &= ~DISKQUOTA_LOGFLAG_USER_LIMIT) |= ((yn) ? DISKQUOTA_LOGFLAG_USER_LIMIT : 0))
typedef struct DiskQuotaUserInformation
{
    LONGLONG QuotaUsed;
    LONGLONG QuotaThreshold;
    LONGLONG QuotaLimit;
} DISKQUOTA_USER_INFORMATION, *PDISKQUOTA_USER_INFORMATION;
#define DISKQUOTA_USERNAME_RESOLVE_NONE     0
#define DISKQUOTA_USERNAME_RESOLVE_SYNC     1
#define DISKQUOTA_USERNAME_RESOLVE_ASYNC    2
#define DISKQUOTA_USER_ACCOUNT_RESOLVED     0
#define DISKQUOTA_USER_ACCOUNT_UNAVAILABLE  1
#define DISKQUOTA_USER_ACCOUNT_DELETED      2
#define DISKQUOTA_USER_ACCOUNT_INVALID      3
#define DISKQUOTA_USER_ACCOUNT_UNKNOWN      4
#define DISKQUOTA_USER_ACCOUNT_UNRESOLVED   5
#undef  INTERFACE
#define INTERFACE IDiskQuotaUser
DECLARE_INTERFACE_IID_(IDiskQuotaUser, IUnknown, "7988B574-EC89-11cf-9C00-00AA00A14F56")
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetID) (THIS_ ULONG * pulID);
	STDMETHOD(GetName) (THIS_ LPWSTR pszAccountContainer, DWORD cchAccountContainer, LPWSTR pszLogonName, DWORD cchLogonName, LPWSTR pszDisplayName, DWORD cchDisplayName);
	STDMETHOD(GetSidLength) (THIS_ LPDWORD pdwLength);
	STDMETHOD(GetSid) (THIS_ LPBYTE pbSidBuffer, DWORD cbSidBuffer);
	STDMETHOD(GetQuotaThreshold) (THIS_ PLONGLONG pllThreshold);
	STDMETHOD(GetQuotaThresholdText) (THIS_ LPWSTR pszText, DWORD cchText);
	STDMETHOD(GetQuotaLimit) (THIS_ PLONGLONG pllLimit);
	STDMETHOD(GetQuotaLimitText) (THIS_ LPWSTR pszText, DWORD cchText);
	STDMETHOD(GetQuotaUsed) (THIS_ PLONGLONG pllUsed);
	STDMETHOD(GetQuotaUsedText) (THIS_ LPWSTR pszText, DWORD cchText);
	STDMETHOD(GetQuotaInformation) (THIS_ LPVOID pbQuotaInfo, DWORD cbQuotaInfo);
	STDMETHOD(SetQuotaThreshold) (THIS_ LONGLONG llThreshold, BOOL fWriteThrough);
	STDMETHOD(SetQuotaLimit) (THIS_ LONGLONG llLimit, BOOL fWriteThrough);
	STDMETHOD(Invalidate) (THIS);
	STDMETHOD(GetAccountStatus) (THIS_ LPDWORD pdwStatus);
};
typedef IDiskQuotaUser DISKQUOTA_USER, *PDISKQUOTA_USER;
#undef  INTERFACE
#define INTERFACE IEnumDiskQuotaUsers
DECLARE_INTERFACE_IID_(IEnumDiskQuotaUsers, IUnknown, "7988B577-EC89-11cf-9C00-00AA00A14F56")
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Next) (THIS_ DWORD cUsers, PDISKQUOTA_USER * rgUsers, LPDWORD pcUsersFetched);
	STDMETHOD(Skip) (THIS_ DWORD cUsers);
	STDMETHOD(Reset) (THIS);
	STDMETHOD(Clone) (THIS_ IEnumDiskQuotaUsers ** ppEnum);
};
typedef IEnumDiskQuotaUsers ENUM_DISKQUOTA_USERS, *PENUM_DISKQUOTA_USERS;
#undef  INTERFACE
#define INTERFACE IDiskQuotaUserBatch
DECLARE_INTERFACE_IID_(IDiskQuotaUserBatch, IUnknown, "7988B576-EC89-11cf-9C00-00AA00A14F56")
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Add) (THIS_ PDISKQUOTA_USER pUser);
	STDMETHOD(Remove) (THIS_ PDISKQUOTA_USER pUser);
	STDMETHOD(RemoveAll) (THIS);
	STDMETHOD(FlushToDisk) (THIS);
};
typedef IDiskQuotaUserBatch DISKQUOTA_USER_BATCH, *PDISKQUOTA_USER_BATCH;
#undef INTERFACE
#define INTERFACE IDiskQuotaControl
DECLARE_INTERFACE_IID_(IDiskQuotaControl, IConnectionPointContainer, "7988B572-EC89-11cf-9C00-00AA00A14F56")
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetConnectionInterface) (THIS_ IID *pIID);
	STDMETHOD(GetConnectionPointContainer) (THIS_ IConnectionPointContainer **ppCPC);
	STDMETHOD(Advise) (THIS_ IUnknown *pUnkSink, DWORD *pdwCookie);
	STDMETHOD(Unadvise) (THIS_ DWORD dwCookie);
	STDMETHOD(EnumConnections) (THIS_ IEnumConnections **ppEnum);
	STDMETHOD(Initialize) (THIS_ LPCWSTR pszPath, BOOL bReadWrite);
	STDMETHOD(SetQuotaState) (THIS_ DWORD dwState);
	STDMETHOD(GetQuotaState) (THIS_ LPDWORD pdwState);
	STDMETHOD(SetQuotaLogFlags) (THIS_ DWORD dwFlags);
	STDMETHOD(GetQuotaLogFlags) (THIS_ LPDWORD pdwFlags);
	STDMETHOD(SetDefaultQuotaThreshold) (THIS_ LONGLONG llThreshold);
	STDMETHOD(GetDefaultQuotaThreshold) (THIS_ PLONGLONG pllThreshold);
	STDMETHOD(GetDefaultQuotaThresholdText) (THIS_ LPWSTR pszText, DWORD cchText);
	STDMETHOD(SetDefaultQuotaLimit) (THIS_ LONGLONG llLimit);
	STDMETHOD(GetDefaultQuotaLimit) (THIS_ PLONGLONG pllLimit);
	STDMETHOD(GetDefaultQuotaLimitText) (THIS_ LPWSTR pszText, DWORD cchText);
	STDMETHOD(AddUserSid) (THIS_ PSID pUserSid, DWORD fNameResolution, PDISKQUOTA_USER * ppUser);
	STDMETHOD(AddUserName) (THIS_ LPCWSTR pszLogonName, DWORD fNameResolution, PDISKQUOTA_USER * ppUser);
	STDMETHOD(DeleteUser) (THIS_ PDISKQUOTA_USER pUser);
	STDMETHOD(FindUserSid) (THIS_ PSID pUserSid, DWORD fNameResolution, PDISKQUOTA_USER * ppUser);
	STDMETHOD(FindUserName) (THIS_ LPCWSTR pszLogonName, PDISKQUOTA_USER * ppUser);
	STDMETHOD(CreateEnumUsers) (THIS_ PSID * rgpUserSids, DWORD cpSids, DWORD fNameResolution, PENUM_DISKQUOTA_USERS * ppEnum);
	STDMETHOD(CreateUserBatch) (THIS_ PDISKQUOTA_USER_BATCH * ppBatch);
	STDMETHOD(InvalidateSidNameCache) (THIS);
	STDMETHOD(GiveUserNameResolutionPriority) (THIS_ PDISKQUOTA_USER pUser);
	STDMETHOD(ShutdownNameResolution) (THIS);
};
typedef IDiskQuotaControl DISKQUOTA_CONTROL, *PDISKQUOTA_CONTROL;
#undef  INTERFACE
#define INTERFACE IDiskQuotaEvents
DECLARE_INTERFACE_IID_(IDiskQuotaEvents, IUnknown, "7988B579-EC89-11cf-9C00-00AA00A14F56")
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(OnUserNameChanged) (THIS_ PDISKQUOTA_USER pUser);
};
typedef IDiskQuotaEvents DISKQUOTA_EVENTS, *PDISKQUOTA_EVENTS;
#endif
