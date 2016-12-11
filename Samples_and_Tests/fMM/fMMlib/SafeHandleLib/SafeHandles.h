/*+@@file@@----------------------------------------------------------------*//*!
 \file		SafeHandles.h
 \par Description 
            Using handles as direct pointers to memory data is dangerous 
            because you can't determine easily if the value is correct and 
            safe to use.
            Safe handles use a mechanism that allows to identify each 
            handle and protectsdata memory.
            Added switch for embedded code
 \par  Status: 
            Under development
 \par Project: 
            Safe handles
 \date		Created  on Sat Jan  3 00:36:19 2015
 \date		Modified on Sun Dec 11 17:52:50 2016
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef __SAFEHANDLES_H__
#define __SAFEHANDLES_H__
#pragma once

#ifndef SAFEHANDLE_EMBEDDED
#if defined(_WIN32) && !defined(_WIN64)		// For broken implementations or flying around defs...
#pragma comment(lib, "SafeHandleLib.lib")
#elif defined(_WIN64)
#pragma comment(lib, "SafeHandleLib64.lib")
#else
#error SafeHandles: Unknown Processor bits!
#endif
#endif

#ifdef SH_DLL
	#ifndef SH_ATTR
		#define SH_ATTR		__declspec(dllimport)
	#endif
#else
	#define SH_ATTR
#endif
#define _SH_MAPI	__stdcall
#define SH_API		SH_ATTR __stdcall

/*!
 *	Definition for an SHANDLE to enforce type checking
 */
typedef struct SHANDLE *SHANDLE;

/*!
 *	Callback funtion used in user shutdown
 */
typedef BOOL _SH_MAPI (*SH_CALLBACKFN)(SHANDLE, void *);

/*!
 *	Statistical data structure that holds stats for current safe handles subsystem.
 */
typedef struct
{
	DWORD  cbSize;					//!< Size of statistical structure
	DWORD  dwFlags;					//!< Library flags
	DWORD  cTotHandlesCreated;		//!< Total number of handles created
	DWORD  cTotHandlesDuplicated;	//!< Total number of handles duplicated
	DWORD  cTotHandlesDeleted;		//!< Total number of handles released
	DWORD  cActiveHandles;			//!< Actual number of active handles
	DWORD  cActDuplications;		//!< Actual number of duplicated handles
	DWORD  cTotErrors;				//!< Total number of errors
	DWORD  cBrokenHandles;			//!< Total number of broken handles detected
	DWORD  SlotHint;				//!< Table slot hint (for debug purposes).
} SH_STATISTIC_DATA, *LP_SH_STATISTIC_DATA;

/*!
 *	This is the list of errors reported by the library.
 */
typedef enum
{
	SH_ERR_OK = 0,
	SH_ERR_UNINITIALIZED = 0x10000000 | 1,	//!< Library is not initialized
	SH_ERR_TABLEFULL,						//!< Table is full
	SH_ERR_INVALIDHANDLE,					//!< Invalid handle
	SH_ERR_SHUTTINGDOWN,					//!< Library is shutting down
	SH_ERR_INVALIDINDEX,					//!< The table index is invalid
	SH_ERR_BADPARAMETER,					//!< Wrong or invalid function parameter
	SH_ERR_HANDLELOCKED,					//!< The requested operation is not allowed because the handle is locked
	SH_ERR_NOMEM,							//!< No memory available
	SH_ERR_NOTALLOWED,						//!< Operation not allowed on this handle
	SH_ERR_INPROGRESS						//!< Operation already in progress
} SH_ERRORS;

LPCTSTR SH_API SH_GetVersion(VOID);
BOOL	SH_API SH_Initialize(VOID);
SHANDLE	SH_API SH_CreateHandle(LPVOID pData, INT_PTR ipType);
SHANDLE SH_API SH_CreateHandleAllocData(size_t cbData, INT_PTR ipType);
SHANDLE SH_API SH_CreateHandleEx(LPVOID pData, INT_PTR ipType, size_t cbSize, DWORD dwFlags);
SHANDLE	SH_API SH_DupHandle(SHANDLE hSrcHandle);
BOOL	SH_API SH_IsDupHandle(SHANDLE handle);
BOOL	SH_API SH_ReleaseHandle(SHANDLE handle);
LPVOID	SH_API SH_GetDataFromHandle(SHANDLE handle);
BOOL	SH_API SH_SetHandle(SHANDLE handle, LPVOID pData);
SHANDLE	SH_API SH_GetEntryHandle(INT_PTR idx);
INT_PTR	SH_API SH_GetEntriesNo(VOID);
INT_PTR	SH_API SH_GetTypesNo(VOID);
INT_PTR	SH_API SH_GetKeysNoBits(VOID);
BOOL    SH_API SH_UserShutDown(SH_CALLBACKFN fn, LPVOID lpArgs);
BOOL    SH_API SH_ShutDown(VOID);
BOOL	SH_API SH_SetShutDown(BOOL bAction);
BOOL	SH_API SH_IsValidHandle(SHANDLE handle);
INT_PTR SH_API SH_GetLastError(VOID);
INT_PTR	SH_API SH_GetHandleDuplicationCnt(SHANDLE handle);
BOOL	SH_API SH_GetStatisticData(LP_SH_STATISTIC_DATA lpShsd);
BOOL    SH_API SH_IsChildHandle(SHANDLE handle);
BOOL    SH_API SH_SetHandleFlags(SHANDLE handle, DWORD dwFlags);
DWORD   SH_API SH_GetHandleFlags(SHANDLE handle);
BOOL    SH_API SH_UnlockHandle(SHANDLE handle);
BOOL    SH_API SH_LockHandle(SHANDLE handle);

#ifdef UNICODE
#define SH_GetVersion	SH_GetVersionW
LPCWSTR SH_API SH_GetVersionW(VOID);
#else
#define SH_GetVersion	SH_GetVersionA
LPCSTR SH_API SH_GetVersionA(VOID);
#endif

#define SH_FLAG_NODUP		0x10000000	//!< The handle with this flag set cannot be duplicated
#define SH_FLAG_THREADLOCAL	0x20000000	//!< The handle is private to the creator threads. Other threads have no access to the data.
#define SH_FLAG_INHERITABLE	0x40000000	//!< The handle provide limited access to adata for threads different from creator

#endif	// __SAFEHANDLES_H__
