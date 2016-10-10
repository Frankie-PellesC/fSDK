/*+@@file@@----------------------------------------------------------------*//*!
 \file		MAPIWin.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 31 15:37:14 2016
 \date		Modified on Sun Jul 31 15:37:14 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __MAPIWIN_H__
#define __MAPIWIN_H__
#if __POCC__ >= 500
#pragma once
#endif
#if defined (WIN32) && !defined (_WIN32)
#define _WIN32
#endif
#include "mapinls.h"
#ifdef	WIN16
#define	MULDIV(x,y,z)				MulDiv32(x,y,z)
#define IsBadReadPtr(lp,cb)			FBadReadPtr(lp,cb)
#define cInstMax					50
LPVOID FAR PASCAL PvGetInstanceGlobals(void);
LONG FAR PASCAL ScSetInstanceGlobals(LPVOID pv);
LONG FAR PASCAL ScSetVerifyInstanceGlobals(LPVOID pv, DWORD dwPid);
LPVOID FAR PASCAL PvGetVerifyInstanceGlobals(DWORD dwPid);
LPVOID FAR PASCAL PvSlowGetInstanceGlobals(DWORD dwPid);
BOOL __export FAR PASCAL FCleanupInstanceGlobals(WORD, DWORD);
#else
#define	MULDIV(x,y,z)				MulDiv(x,y,z)
extern LPVOID pinstX;
#define PvGetInstanceGlobals()					pinstX
#define ScSetInstanceGlobals(_pv)				(pinstX = _pv, 0)
#define PvGetVerifyInstanceGlobals(_pid)		pinstX
#define ScSetVerifyInstanceGlobals(_pv,_pid)	(pinstX = _pv, 0)
#define PvSlowGetInstanceGlobals(_pid)			pinstX
#endif
#if defined(_WIN32)
#define szMAPIDLLSuffix		"32"
#elif defined(WIN16) || defined(DOS)
#define szMAPIDLLSuffix		""
#else
#error "Don't know the suffix for DLLs on this platform"
#endif
#if !defined(_WIN32)
#define	ZeroMemory(pb,cb)			memset((pb),0,(cb))
#define FillMemory(pb,cb,b)			memset((pb),(b),(cb))
#define CopyMemory(pbDst,pbSrc,cb)	do								\
									{								\
										size_t _cb = (size_t)(cb);	\
										if (_cb)					\
											memcpy(pbDst,pbSrc,_cb);\
									} while (FALSE)
#define MoveMemory(pbDst,pbSrc,cb)	memmove((pbDst),(pbSrc),(cb))
#define UNALIGNED
#endif
#if defined(WIN16)
#include <error.h>
typedef	int					INT;
typedef	unsigned long		ULONG;
typedef	short				SHORT;
typedef	unsigned short		USHORT;
typedef double 				LONGLONG;
typedef double 				DWORDLONG;
typedef unsigned char		UCHAR;
typedef unsigned char FAR*	PUCHAR;
typedef int					BOOL;
typedef char				BOOLEAN;
#ifndef _FILETIME_
#define _FILETIME_
typedef struct tagFILETIME
{
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
} FILETIME;
#endif
typedef struct _SYSTEMTIME
{
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
} SYSTEMTIME, *PSYSTEMTIME, FAR *LPSYSTEMTIME;
typedef struct _TIME_ZONE_INFORMATION
{
    LONG Bias;
    CHAR StandardName[ 32 ];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    CHAR DaylightName[ 32 ];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
} TIME_ZONE_INFORMATION, *PTIME_ZONE_INFORMATION, FAR *LPTIME_ZONE_INFORMATION;
#if defined(DOS) || defined(WIN16)
#define __T(x)		x
#define _T(x)		__T(x)
#define TEXT		_T
#endif
#define APIENTRY		WINAPI
#define	SetForegroundWindow			SetActiveWindow
#define wsprintfA					wsprintf
#define GetWindowsDirectoryA		GetWindowsDirectory
#define GetSystemDirectoryA			GetSystemDirectory
#define GetPrivateProfileStringA 	GetPrivateProfileString
#define GetPrivateProfileIntA		GetPrivateProfileInt
#define GetProfileStringA			GetProfileString
#define GetModuleFileNameA			GetModuleFileName
#define CharUpperBuffA				CharUpperBuff
#define LoadLibraryA				LoadLibrary
#define lstrcatA					lstrcat
#define RegisterWindowMessageA		RegisterWindowMessage
#define MAKEINTRESOURCEA			MAKEINTRESOURCE
#define WNDCLASSA					WNDCLASS									
#define InterlockedIncrement(plong)	(++(*(plong)))
#define InterlockedDecrement(plong) (--(*(plong)))
#ifndef CreateMutex
#define CreateMutexA	CreateMutex
#define CreateMutexW	CreateMutex
#define CreateMutex(pv, bool, sz)	(INVALID_HANDLE_VALUE)
#endif
#define WaitForSingleObject(hObj, dw)	((void)0)
#define ReleaseMutex(hObj)				((BOOL)1)
#define CloseMutexHandle(hObj)			TRUE
#define	CRITICAL_SECTION			ULONG
#define	InitializeCriticalSection(_pcs)	((void)0)
#define	DeleteCriticalSection(_pcs)		((void)0)
#define	EnterCriticalSection(_pcs)		((void)0)
#define	LeaveCriticalSection(_pcs)		((void)0)
#define MAX_PATH					260
#define GENERIC_READ				(0x80000000)
#define GENERIC_WRITE				(0x40000000)
#define FILE_SHARE_READ				(0x00000001)
#define FILE_SHARE_WRITE			(0x00000002)
#define FILE_FLAG_SEQUENTIAL_SCAN	0x08000000
#define CREATE_NEW          1
#define CREATE_ALWAYS       2
#define OPEN_EXISTING       3
#define OPEN_ALWAYS         4
#define TRUNCATE_EXISTING   5
#define INVALID_HANDLE_VALUE		((HANDLE)(-1))
#define DELETE						0x00010000L
#define FILE_BEGIN					0
#define FILE_CURRENT				1
#define FILE_END					2
#define FILE_ATTRIBUTE_READONLY         0x00000001
#define FILE_ATTRIBUTE_HIDDEN           0x00000002
#define FILE_ATTRIBUTE_SYSTEM           0x00000004
#define FILE_ATTRIBUTE_DIRECTORY        0x00000010
#define FILE_ATTRIBUTE_ARCHIVE          0x00000020
#define FILE_ATTRIBUTE_NORMAL           0x00000080
#define	FILE_ATTRIBUTE_TEMPORARY		0x00000100
#define FILE_FLAG_WRITE_THROUGH     0x80000000
#define FILE_FLAG_RANDOM_ACCESS     0x10000000
typedef struct _WIN32_FIND_DATA
{
    DWORD		dwFileAttributes;
    FILETIME	ftCreationTime;
    FILETIME	ftLastAccessTime;
    FILETIME	ftLastWriteTime;
    DWORD		nFileSizeHigh;
    DWORD		nFileSizeLow;
    DWORD		dwReserved0;
    DWORD		dwReserved1;
    CHAR		cFileName[ MAX_PATH ];
    CHAR		cAlternateFileName[ 16 ];
} WIN32_FIND_DATA, *PWIN32_FIND_DATA, *LPWIN32_FIND_DATA;
#define TIME_ZONE_ID_INVALID		0xFFFFFFFF
#define TIME_ZONE_ID_UNKNOWN		0
#define TIME_ZONE_ID_STANDARD		1
#define TIME_ZONE_ID_DAYLIGHT		2
DWORD WINAPI GetLastError(void);
DWORD WINAPI GetFileAttributes(LPCSTR lpFileName);
DWORD WINAPI GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh);
BOOL WINAPI GetFileTime(HANDLE hFile, FILETIME FAR *lpftCreation, FILETIME FAR *lpftLastAccess, FILETIME FAR *lpftLastWrite);
BOOL WINAPI SetFileTime(HANDLE hFile, const FILETIME FAR *lpftCreation, const FILETIME FAR *lpftLastAccess, const FILETIME FAR *lpftLastWrite);
BOOL WINAPI FIsTask(HTASK hTask);
HANDLE WINAPI CreateFile(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPVOID lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
BOOL WINAPI ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPVOID lpOverlapped);
BOOL WINAPI WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPVOID lpOverlapped);
DWORD WINAPI SetFilePointer(HANDLE hFile, LONG lDistanceToMove, LONG FAR *lpDistanceToMoveHigh, DWORD dwMoveMethod);
BOOL WINAPI SetEndOfFile(HANDLE hFile);
BOOL WINAPI CloseHandle(HANDLE hObject);
DWORD WINAPI GetTempPath(DWORD nBufferLength, LPSTR lpBuffer);
UINT WINAPI GetTempFileName32(LPCSTR lpPathName, LPCSTR lpPrefixString, UINT uUnique, LPSTR lpTempFileName);
BOOL WINAPI DeleteFile(LPCSTR lpFileName);
BOOL WINAPI CreateDirectory(LPCSTR lpPathName, LPVOID lpSecurityAttributes);
BOOL WINAPI RemoveDirectory(LPCSTR lpPathName);
BOOL WINAPI CopyFile(LPCSTR szSrc, LPCSTR szDst, BOOL fFailIfExists);
BOOL WINAPI MoveFile(LPCSTR lpExistingFileName, LPCSTR lpNewFileName);
HANDLE WINAPI FindFirstFile(LPCSTR lpFileName, LPWIN32_FIND_DATA lpFindFileData);
BOOL WINAPI FindNextFile(HANDLE hFindFile, LPWIN32_FIND_DATA lpFindFileData);
BOOL WINAPI FindClose(HANDLE hFindFile);
DWORD WINAPI GetFullPathName(LPCSTR lpFileName, DWORD nBufferLength, LPSTR lpBuffer, LPSTR *lpFilePart);
void WINAPI Sleep(DWORD dwMilliseconds);
LONG WINAPI CompareFileTime(const FILETIME FAR *, const FILETIME FAR *);
BOOL WINAPI LocalFileTimeToFileTime(const FILETIME FAR *, FILETIME FAR *);
BOOL WINAPI FileTimeToLocalFileTime(const FILETIME FAR *, FILETIME FAR *);
BOOL WINAPI FileTimeToSystemTime(const FILETIME FAR *, SYSTEMTIME FAR *);
BOOL WINAPI SystemTimeToFileTime(const SYSTEMTIME FAR *, FILETIME FAR *);
void WINAPI GetSystemTime(SYSTEMTIME FAR *);
void WINAPI GetLocalTime(SYSTEMTIME FAR *);
BOOL WINAPI FileTimeToDosDateTime(const FILETIME FAR *lpFileTime, WORD FAR *lpFatDate, WORD FAR *lpFatTime);
BOOL WINAPI DosDateTimeToFileTime(WORD wFatDate, WORD wFatTime, FILETIME FAR *lpFileTime);
DWORD WINAPI GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation);
BOOL WINAPI SetTimeZoneInformation(const TIME_ZONE_INFORMATION FAR *lpTimeZoneInformation);
DWORD WINAPI GetCurrentProcessId(void);
long WINAPI MulDiv32(long, long, long);
BOOL WINAPI FBadReadPtr(const void FAR *lp, UINT cb);
#else
#define GetTempFileName32(_szPath,_szPfx,_n,_lpbuf)	GetTempFileName(_szPath,_szPfx,_n,_lpbuf)
#define CloseMutexHandle	CloseHandle
#endif
#define	Cbtszsize(_a)	((lstrlen(_a)+1)*sizeof(TCHAR))
#define	CbtszsizeA(_a)	((lstrlenA(_a) + 1))
#define	CbtszsizeW(_a)	((lstrlenW(_a) + 1) * sizeof(WCHAR))
#define HexCchOf(_s)	(sizeof(_s)*2+1)
#define HexSizeOf(_s)	(HexCchOf(_s)*sizeof(TCHAR))
BOOL WINAPI IsBadBoundedStringPtr(const void FAR* lpsz, UINT cchMax);
#endif
