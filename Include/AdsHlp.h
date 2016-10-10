/*+@@file@@----------------------------------------------------------------*//*!
 \file		AdsHlp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 12:55:22 2016
 \date		Modified on Fri Jul  1 12:55:22 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _ADSHLP_
#define _ADSHLP_
#if __POCC__ >= 500
#pragma once
#endif
HRESULT WINAPI ADsGetObject(LPCWSTR lpszPathName, REFIID riid, VOID **ppObject);
HRESULT WINAPI ADsBuildEnumerator(IADsContainer *pADsContainer, IEnumVARIANT **ppEnumVariant);
HRESULT WINAPI ADsFreeEnumerator(IEnumVARIANT *pEnumVariant);
HRESULT WINAPI ADsEnumerateNext(IEnumVARIANT *pEnumVariant, ULONG cElements, VARIANT FAR *pvar, ULONG FAR *pcElementsFetched);
HRESULT WINAPI ADsBuildVarArrayStr(LPWSTR *lppPathNames, DWORD dwPathNames, VARIANT *pVar);
HRESULT WINAPI ADsBuildVarArrayInt(LPDWORD lpdwObjectTypes, DWORD dwObjectTypes, VARIANT *pVar);
HRESULT WINAPI ADsOpenObject(LPCWSTR lpszPathName, LPCWSTR lpszUserName, LPCWSTR lpszPassword, DWORD dwReserved, REFIID riid, void FAR *FAR *ppObject);
HRESULT WINAPI ADsGetLastError(LPDWORD lpError, LPWSTR lpErrorBuf, DWORD dwErrorBufLen, LPWSTR lpNameBuf, DWORD dwNameBufLen);
VOID WINAPI ADsSetLastError(DWORD dwErr, LPCWSTR pszError, LPCWSTR pszProvider);
VOID WINAPI ADsFreeAllErrorRecords(VOID);
LPVOID WINAPI AllocADsMem(DWORD cb);
BOOL WINAPI FreeADsMem(LPVOID pMem);
LPVOID WINAPI ReallocADsMem(LPVOID pOldMem, DWORD cbOld, DWORD cbNew);
LPWSTR WINAPI AllocADsStr(LPCWSTR pStr);
BOOL WINAPI FreeADsStr(LPWSTR pStr);
BOOL WINAPI ReallocADsStr(LPWSTR *ppStr, LPWSTR pStr);
HRESULT WINAPI ADsEncodeBinaryData(PBYTE pbSrcData, DWORD dwSrcLen, LPWSTR *ppszDestData);
HRESULT WINAPI ADsDecodeBinaryData(LPCWSTR szSrcData, PBYTE *ppbDestData, ULONG *pdwDestLen);
HRESULT WINAPI PropVariantToAdsType(VARIANT *pVariant, DWORD dwNumVariant, PADSVALUE *ppAdsValues, PDWORD pdwNumValues);
HRESULT WINAPI AdsTypeToPropVariant(PADSVALUE pAdsValues, DWORD dwNumValues, VARIANT *pVariant);
void WINAPI AdsFreeAdsValues(PADSVALUE pAdsValues, DWORD dwNumValues);
HRESULT WINAPI BinarySDToSecurityDescriptor(PSECURITY_DESCRIPTOR pSecurityDescriptor, VARIANT *pVarsec, LPCWSTR pszServerName, LPCWSTR userName, LPCWSTR passWord, DWORD dwFlags);
HRESULT WINAPI SecurityDescriptorToBinarySD(VARIANT vVarSecDes, PSECURITY_DESCRIPTOR *ppSecurityDescriptor, PDWORD pdwSDLength, LPCWSTR pszServerName, LPCWSTR userName, LPCWSTR passWord, DWORD dwFlags);
#if DBG
extern LIST_ENTRY ADsMemList;
extern CRITICAL_SECTION ADsMemCritSect;
VOID InitADsMem(VOID);
VOID AssertADsMemLeaks(VOID);
VOID DumpMemoryTracker();
#else
#define InitADsMem()
#define AssertADsMemLeaks()
#define DumpMemoryTracker()
#endif
#endif
