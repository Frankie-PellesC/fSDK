/*+@@file@@----------------------------------------------------------------*//*!
 \file		mscat.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 23:30:29 2016
 \date		Modified on Sat Jul  2 23:30:29 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef MSCAT_H
#define MSCAT_H
#if __POCC__ >= 500
#pragma once
#endif
#include <mssip.h>

#define     szOID_CATALOG_LIST                  "1.3.6.1.4.1.311.12.1.1"
#define     szOID_CATALOG_LIST_MEMBER           "1.3.6.1.4.1.311.12.1.2"
#define     CRYPTCAT_FILEEXT                    L"CAT"
#define     CRYPTCAT_MAX_MEMBERTAG              64
#define     CRYPTCAT_OPEN_CREATENEW             0x00000001
#define     CRYPTCAT_OPEN_ALWAYS                0x00000002
#define     CRYPTCAT_OPEN_EXISTING              0x00000004
#define     CRYPTCAT_OPEN_EXCLUDE_PAGE_HASHES   0x00010000
#define     CRYPTCAT_OPEN_INCLUDE_PAGE_HASHES   0x00020000
#define     CRYPTCAT_OPEN_VERIFYSIGHASH         0x10000000
#define     CRYPTCAT_OPEN_NO_CONTENT_HCRYPTMSG  0x20000000
#define     CRYPTCAT_OPEN_SORTED                0x40000000
#define     CRYPTCAT_OPEN_FLAGS_MASK            0xffff0000
#define     CRYPTCAT_MEMBER_SORTED              0x40000000
#define     CRYPTCAT_ATTR_AUTHENTICATED         0x10000000
#define     CRYPTCAT_ATTR_UNAUTHENTICATED       0x20000000
#define     CRYPTCAT_ATTR_NAMEASCII             0x00000001
#define     CRYPTCAT_ATTR_NAMEOBJID             0x00000002
#define     CRYPTCAT_ATTR_DATAASCII             0x00010000
#define     CRYPTCAT_ATTR_DATABASE64            0x00020000
#define     CRYPTCAT_ATTR_DATAREPLACE           0x00040000
#define     CRYPTCAT_E_AREA_HEADER              0x00000000
#define     CRYPTCAT_E_AREA_MEMBER              0x00010000
#define     CRYPTCAT_E_AREA_ATTRIBUTE           0x00020000
#define     CRYPTCAT_E_CDF_UNSUPPORTED          0x00000001
#define     CRYPTCAT_E_CDF_DUPLICATE            0x00000002
#define     CRYPTCAT_E_CDF_TAGNOTFOUND          0x00000004
#define     CRYPTCAT_E_CDF_MEMBER_FILE_PATH     0x00010001
#define     CRYPTCAT_E_CDF_MEMBER_INDIRECTDATA  0x00010002
#define     CRYPTCAT_E_CDF_MEMBER_FILENOTFOUND  0x00010004
#define     CRYPTCAT_E_CDF_BAD_GUID_CONV        0x00020001
#define     CRYPTCAT_E_CDF_ATTR_TOOFEWVALUES    0x00020002
#define     CRYPTCAT_E_CDF_ATTR_TYPECOMBO       0x00020004
#include <pshpack8.h>
typedef struct CRYPTCATSTORE_ {
	DWORD cbStruct;
	DWORD dwPublicVersion;
	LPWSTR pwszP7File;
	HCRYPTPROV hProv;
	DWORD dwEncodingType;
	DWORD fdwStoreFlags;
	HANDLE hReserved;
	HANDLE hAttrs;
	HCRYPTMSG hCryptMsg;
	HANDLE hSorted;
} CRYPTCATSTORE;
typedef struct CRYPTCATMEMBER_ {
	DWORD cbStruct;
	LPWSTR pwszReferenceTag;
	LPWSTR pwszFileName;
	GUID gSubjectType;
	DWORD fdwMemberFlags;
	struct SIP_INDIRECT_DATA_ *pIndirectData;
	DWORD dwCertVersion;
	DWORD dwReserved;
	HANDLE hReserved;
	CRYPT_ATTR_BLOB sEncodedIndirectData;
	CRYPT_ATTR_BLOB sEncodedMemberInfo;
} CRYPTCATMEMBER;
typedef struct CRYPTCATATTRIBUTE_ {
	DWORD cbStruct;
	LPWSTR pwszReferenceTag;
	DWORD dwAttrTypeAndAction;
	DWORD cbValue;
	BYTE *pbValue;
	DWORD dwReserved;
} CRYPTCATATTRIBUTE;
typedef struct CRYPTCATCDF_ {
	DWORD cbStruct;
	HANDLE hFile;
	DWORD dwCurFilePos;
	DWORD dwLastMemberOffset;
	BOOL fEOF;
	LPWSTR pwszResultDir;
	HANDLE hCATStore;
} CRYPTCATCDF;
typedef struct CATALOG_INFO_ {
	DWORD cbStruct;
	WCHAR wszCatalogFile[MAX_PATH];
} CATALOG_INFO;
typedef HANDLE HCATADMIN;
typedef HANDLE HCATINFO;
#include <poppack.h>
typedef void (WINAPI * PFN_CDF_PARSE_ERROR_CALLBACK) (DWORD dwErrorArea, DWORD dwLocalError, WCHAR * pwszLine);
extern HANDLE WINAPI CryptCATOpen(LPWSTR pwszFileName, DWORD fdwOpenFlags, HCRYPTPROV hProv, DWORD dwPublicVersion, DWORD dwEncodingType);
extern void WINAPI CryptCATSetCreatePageHashesFlag(HANDLE hCatalog, BOOL newCreatePageHashesFlag);
extern BOOL WINAPI CryptCATClose(HANDLE hCatalog);
extern CRYPTCATSTORE *WINAPI CryptCATStoreFromHandle(HANDLE hCatalog);
extern HANDLE WINAPI CryptCATHandleFromStore(CRYPTCATSTORE *pCatStore);
extern BOOL WINAPI CryptCATPersistStore(HANDLE hCatalog);
extern CRYPTCATATTRIBUTE *WINAPI CryptCATGetCatAttrInfo(HANDLE hCatalog, LPWSTR pwszReferenceTag);
extern CRYPTCATATTRIBUTE *WINAPI CryptCATPutCatAttrInfo(HANDLE hCatalog, LPWSTR pwszReferenceTag, DWORD dwAttrTypeAndAction, DWORD cbData, BYTE *pbData);
extern CRYPTCATATTRIBUTE *WINAPI CryptCATEnumerateCatAttr(HANDLE hCatalog, CRYPTCATATTRIBUTE *pPrevAttr);
extern CRYPTCATMEMBER *WINAPI CryptCATGetMemberInfo(HANDLE hCatalog, LPWSTR pwszReferenceTag);
extern CRYPTCATMEMBER *WINAPI CryptCATAllocSortedMemberInfo(HANDLE hCatalog, LPWSTR pwszReferenceTag);
extern void WINAPI CryptCATFreeSortedMemberInfo(HANDLE hCatalog, CRYPTCATMEMBER *pCatMember);
extern CRYPTCATATTRIBUTE *WINAPI CryptCATGetAttrInfo(HANDLE hCatalog, CRYPTCATMEMBER *pCatMember, LPWSTR pwszReferenceTag);
extern CRYPTCATMEMBER *WINAPI CryptCATPutMemberInfo(HANDLE hCatalog, LPWSTR pwszFileName, LPWSTR pwszReferenceTag, GUID *pgSubjectType, DWORD dwCertVersion, DWORD cbSIPIndirectData, BYTE *pbSIPIndirectData);
extern CRYPTCATATTRIBUTE *WINAPI CryptCATPutAttrInfo(HANDLE hCatalog, CRYPTCATMEMBER *pCatMember, LPWSTR pwszReferenceTag, DWORD dwAttrTypeAndAction, DWORD cbData, BYTE *pbData);
extern CRYPTCATMEMBER *WINAPI CryptCATEnumerateMember(HANDLE hCatalog, CRYPTCATMEMBER *pPrevMember);
extern CRYPTCATATTRIBUTE *WINAPI CryptCATEnumerateAttr(HANDLE hCatalog, CRYPTCATMEMBER *pCatMember, CRYPTCATATTRIBUTE *pPrevAttr);
extern CRYPTCATCDF *WINAPI CryptCATCDFOpen(LPWSTR pwszFilePath, PFN_CDF_PARSE_ERROR_CALLBACK pfnParseError);
extern BOOL WINAPI CryptCATCDFClose(CRYPTCATCDF *pCDF);
extern CRYPTCATATTRIBUTE *WINAPI CryptCATCDFEnumCatAttributes(CRYPTCATCDF *pCDF, CRYPTCATATTRIBUTE *pPrevAttr, PFN_CDF_PARSE_ERROR_CALLBACK pfnParseError);
extern CRYPTCATMEMBER *WINAPI CryptCATCDFEnumMembers(CRYPTCATCDF *pCDF, CRYPTCATMEMBER *pPrevMember, PFN_CDF_PARSE_ERROR_CALLBACK pfnParseError);
extern CRYPTCATATTRIBUTE *WINAPI CryptCATCDFEnumAttributes(CRYPTCATCDF *pCDF, CRYPTCATMEMBER *pMember, CRYPTCATATTRIBUTE *pPrevAttr, PFN_CDF_PARSE_ERROR_CALLBACK pfnParseError);
extern BOOL WINAPI IsCatalogFile(HANDLE hFile, WCHAR *pwszFileName);
extern BOOL WINAPI CryptCATAdminAcquireContext(HCATADMIN *phCatAdmin, const GUID *pgSubsystem, DWORD dwFlags);
extern BOOL WINAPI CryptCATAdminReleaseContext(HCATADMIN hCatAdmin, DWORD dwFlags);
extern BOOL WINAPI CryptCATAdminReleaseCatalogContext(HCATADMIN hCatAdmin, HCATINFO hCatInfo, DWORD dwFlags);
extern HCATINFO WINAPI CryptCATAdminEnumCatalogFromHash(HCATADMIN hCatAdmin, BYTE *pbHash, DWORD cbHash, DWORD dwFlags, HCATINFO *phPrevCatInfo);
extern BOOL WINAPI CryptCATAdminCalcHashFromFileHandle(HANDLE hFile, DWORD *pcbHash, BYTE *pbHash, DWORD dwFlags);
extern HCATINFO WINAPI CryptCATAdminAddCatalog(HCATADMIN hCatAdmin, PWSTR pwszCatalogFile, PWSTR pwszSelectBaseName, DWORD dwFlags);
extern BOOL WINAPI CryptCATAdminRemoveCatalog(HCATADMIN hCatAdmin, LPCWSTR pwszCatalogFile, DWORD dwFlags);
extern BOOL WINAPI CryptCATCatalogInfoFromContext(HCATINFO hCatInfo, CATALOG_INFO *psCatInfo, DWORD dwFlags);
extern BOOL WINAPI CryptCATAdminResolveCatalogPath(HCATADMIN hCatAdmin, WCHAR *pwszCatalogFile, CATALOG_INFO *psCatInfo, DWORD dwFlags);
extern BOOL WINAPI CryptCATAdminPauseServiceForBackup(DWORD dwFlags, BOOL fResume);

#endif
