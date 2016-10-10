/*+@@file@@----------------------------------------------------------------*//*!
 \file		FileHC.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 17:44:36 2016
 \date		Modified on Sun Jul 10 17:44:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef	_FILEHC_H_
#define	_FILEHC_H_
#if __POCC__ >= 500
#pragma once
#endif
typedef VOID(*PFN_IO_COMPLETION) (struct FIO_CONTEXT *pContext, struct FH_OVERLAPPED *lpo, DWORD cb, DWORD dwCompletionStatus);
typedef struct FH_OVERLAPPED
{
	UINT_PTR Internal;
	UINT_PTR InternalHigh;
	DWORD Offset;
	DWORD OffsetHigh;
	HANDLE hEvent;
	PFN_IO_COMPLETION pfnCompletion;
	UINT_PTR Reserved1;
	UINT_PTR Reserved2;
	UINT_PTR Reserved3;
	UINT_PTR Reserved4;
} FH_OVERLAPPED;
typedef struct FH_OVERLAPPED *PFH_OVERLAPPED;
typedef struct FIO_CONTEXT
{
	DWORD m_dwTempHack;
	DWORD m_dwSignature;
	HANDLE m_hFile;
	DWORD m_dwLinesOffset;
	DWORD m_dwHeaderLength;
} FIO_CONTEXT;
typedef	FIO_CONTEXT * PFIO_CONTEXT ;
#ifdef	_FILEHC_IMPLEMENTATION_
#define	FILEHC_EXPORT	__declspec( dllexport )	
#else
#define	FILEHC_EXPORT	__declspec( dllimport )	
#endif
FILEHC_EXPORT BOOL __stdcall FIOInitialize(DWORD dwFlags);
FILEHC_EXPORT BOOL __stdcall FIOTerminate(VOID);
FILEHC_EXPORT BOOL __stdcall FIOReadFile(PFIO_CONTEXT pContext, LPVOID lpBuffer, DWORD BytesToRead, FH_OVERLAPPED *lpo);
FILEHC_EXPORT BOOL __stdcall FIOReadFileEx(PFIO_CONTEXT pContext, LPVOID lpBuffer, DWORD BytesToRead, DWORD BytesAvailable, FH_OVERLAPPED *lpo, BOOL fFinalWrite, BOOL fIncludeTerminator);
FILEHC_EXPORT BOOL __stdcall FIOWriteFile(PFIO_CONTEXT pContext, LPCVOID lpBuffer, DWORD BytesToWrite, FH_OVERLAPPED *lpo);
FILEHC_EXPORT BOOL __stdcall FIOWriteFileEx(PFIO_CONTEXT pContext, LPVOID lpBuffer, DWORD BytesToWrite, DWORD BytesAvailable, FH_OVERLAPPED *lpo, BOOL fFinalWrite, BOOL fIncludeTerminator);
typedef HANDLE(__stdcall *FCACHE_CREATE_CALLBACK) (LPSTR lpstrName, LPVOID lpvData, DWORD *cbFileSize, DWORD *cbFileSizeHigh);
typedef HANDLE(__stdcall *FCACHE_RICHCREATE_CALLBACK) (LPSTR lpstrName, LPVOID lpvData, DWORD *cbFileSize, DWORD *cbFileSizeHigh, BOOL *pfDidWeScanIt, BOOL *pfIsStuffed, BOOL *pfStoredWithDots, BOOL *pfStoredWithTerminatingDot);
FILEHC_EXPORT BOOL __stdcall InitializeCache();
FILEHC_EXPORT BOOL __stdcall TerminateCache();
FILEHC_EXPORT PFIO_CONTEXT __stdcall AssociateFile(HANDLE hFile);
FILEHC_EXPORT PFIO_CONTEXT __stdcall AssociateFileEx(HANDLE hFile, BOOL fStoreWithDots, BOOL fStoredWithTerminatingDot);
FILEHC_EXPORT void __stdcall AddRefContext(PFIO_CONTEXT);
FILEHC_EXPORT void __stdcall ReleaseContext(PFIO_CONTEXT);
FILEHC_EXPORT BOOL __stdcall CloseNonCachedFile(PFIO_CONTEXT);
FILEHC_EXPORT FIO_CONTEXT *__stdcall CacheCreateFile(LPSTR lpstrName, FCACHE_CREATE_CALLBACK pfnCallBack, LPVOID lpv, BOOL fAsyncContext);
FILEHC_EXPORT FIO_CONTEXT *__stdcall CacheRichCreateFile(LPSTR lpstrName, FCACHE_RICHCREATE_CALLBACK pfnCallBack, LPVOID lpv, BOOL fAsyncContext);
FILEHC_EXPORT void __stdcall CacheRemoveFiles(LPSTR lpstrName, BOOL fAllPrefixes);
FILEHC_EXPORT BOOL __stdcall InsertFile(LPSTR lpstrName, FIO_CONTEXT *pContext, BOOL fKeepReference);
FILEHC_EXPORT DWORD __stdcall GetFileSizeFromContext(FIO_CONTEXT *pContext, DWORD *pcbFileSizeHigh);
typedef int (__stdcall *CACHE_KEY_COMPARE) (DWORD cbKey1, LPBYTE lpbKey1, DWORD cbKey2, LPBYTE lpbKey2);
typedef DWORD(__stdcall *CACHE_KEY_HASH) (LPBYTE lpbKey, DWORD cbKey);
typedef BOOL(__stdcall *CACHE_READ_CALLBACK) (DWORD cb, LPBYTE lpb, LPVOID lpvContext);
typedef void (__stdcall *CACHE_DESTROY_CALLBACK) (DWORD cb, LPBYTE lpb);
typedef BOOL(WINAPI *CACHE_ACCESS_CHECK) (PSECURITY_DESCRIPTOR pSecurityDescriptor, HANDLE hClientToken, DWORD dwDesiredAccess, PGENERIC_MAPPING GenericMapping, PRIVILEGE_SET *PrivilegeSet, LPDWORD PrivilegeSetLength, LPDWORD GrantedAccess, LPBOOL AccessStatus);
struct NAME_CACHE_CONTEXT
{
	DWORD m_dwSignature;
};
typedef struct NAME_CACHE_CONTEXT *PNAME_CACHE_CONTEXT;
FILEHC_EXPORT PNAME_CACHE_CONTEXT __stdcall FindOrCreateNameCache(LPSTR lpstrName, CACHE_KEY_COMPARE pfnKeyCompare, CACHE_KEY_HASH pfnKeyHash, CACHE_DESTROY_CALLBACK pfnKeyDestroy, CACHE_DESTROY_CALLBACK pfnDataDestroy);
FILEHC_EXPORT long __stdcall ReleaseNameCache(PNAME_CACHE_CONTEXT pNameCache);
FILEHC_EXPORT BOOL __stdcall SetNameCacheSecurityFunction(PNAME_CACHE_CONTEXT pNameCache, CACHE_ACCESS_CHECK pfnAccessCheck);
FILEHC_EXPORT BOOL __stdcall FindContextFromName(PNAME_CACHE_CONTEXT pNameCache, LPBYTE lpbName, DWORD cbName, CACHE_READ_CALLBACK pfnCallback, LPVOID lpvClientContext, HANDLE hToken, ACCESS_MASK accessMask, FIO_CONTEXT **ppContext);
FILEHC_EXPORT BOOL __stdcall FindSyncContextFromName(PNAME_CACHE_CONTEXT pNameCache, LPBYTE lpbName, DWORD cbName, CACHE_READ_CALLBACK pfnCallback, LPVOID lpvClientContext, HANDLE hToken, ACCESS_MASK accessMask, FIO_CONTEXT **ppContext);
FILEHC_EXPORT BOOL __stdcall AssociateContextWithName(PNAME_CACHE_CONTEXT pNameCache, LPBYTE lpbName, DWORD cbName, LPBYTE lpbData, DWORD cbData, PGENERIC_MAPPING pGenericMapping, PSECURITY_DESCRIPTOR pSecurityDescriptor, FIO_CONTEXT *pContext, BOOL fKeepReference);
FILEHC_EXPORT BOOL __stdcall InvalidateName(PNAME_CACHE_CONTEXT pNameCache, LPBYTE lpbName, DWORD cbName);
FILEHC_EXPORT FIO_CONTEXT *__stdcall ProduceDotStuffedContext(FIO_CONTEXT *pContext, LPSTR lpstrName, BOOL fWantItDotStuffed);
FILEHC_EXPORT BOOL __stdcall ProduceDotStuffedContextInContext(FIO_CONTEXT *pContextSource, FIO_CONTEXT *pContextDestination, BOOL fWantItDotStuffed, BOOL *pfModified);
FILEHC_EXPORT BOOL __stdcall GetIsFileDotTerminated(FIO_CONTEXT *pContext);
FILEHC_EXPORT void __stdcall SetIsFileDotTerminated(FIO_CONTEXT *pContext, BOOL fIsDotTerminated);
FILEHC_EXPORT BOOL __stdcall SetDotStuffingOnWrites(FIO_CONTEXT *pContext, BOOL fEnable, BOOL fStripDots);
#if 0
FILEHC_EXPORT BOOL __stdcall SetDotStuffingOnReads(FIO_CONTEXT *pContext, BOOL fEnable, BOOL fStripDots);
#endif
FILEHC_EXPORT BOOL __stdcall SetDotScanningOnWrites(FIO_CONTEXT *pContext, BOOL fEnable);
FILEHC_EXPORT void __stdcall CompleteDotStuffingOnWrites(FIO_CONTEXT *pContext, BOOL fStripDots);
FILEHC_EXPORT BOOL __stdcall SetDotScanningOnReads(FIO_CONTEXT *pContext, BOOL fEnable);
FILEHC_EXPORT BOOL __stdcall GetDotStuffState(FIO_CONTEXT *pContext, BOOL fReads, BOOL *pfStuffed, BOOL *pfStoredWithDots);
FILEHC_EXPORT void __stdcall SetDotStuffState(FIO_CONTEXT *pContext, BOOL fKnown, BOOL fRequiresStuffing);
#endif
