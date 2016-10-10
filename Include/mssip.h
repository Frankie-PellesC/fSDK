/*+@@file@@----------------------------------------------------------------*//*!
 \file		mssip.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 23:25:47 2016
 \date		Modified on Sat Jul  2 23:25:47 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef MSSIP_H
#define MSSIP_H
#if __POCC__ >= 500
#pragma once
#endif
#pragma pack (8)
typedef CRYPT_HASH_BLOB CRYPT_DIGEST_DATA;
#define MSSIP_FLAGS_PROHIBIT_RESIZE_ON_CREATE   0x00010000
#define MSSIP_FLAGS_USE_CATALOG                 0x00020000
#define SPC_INC_PE_RESOURCES_FLAG               0x80
#define SPC_INC_PE_DEBUG_INFO_FLAG              0x40
#define SPC_INC_PE_IMPORT_ADDR_TABLE_FLAG       0x20
#define SPC_EXC_PE_PAGE_HASHES_FLAG             0x10
#define SPC_INC_PE_PAGE_HASHES_FLAG             0x100
typedef struct SIP_SUBJECTINFO_ {
	DWORD cbSize;
	GUID *pgSubjectType;
	HANDLE hFile;
	LPCWSTR pwsFileName;
	LPCWSTR pwsDisplayName;
	DWORD dwReserved1;
	DWORD dwIntVersion;
	HCRYPTPROV hProv;
	CRYPT_ALGORITHM_IDENTIFIER DigestAlgorithm;
	DWORD dwFlags;
	DWORD dwEncodingType;
	DWORD dwReserved2;
	DWORD fdwCAPISettings;
	DWORD fdwSecuritySettings;
	DWORD dwIndex;
	DWORD dwUnionChoice;
#   define                          MSSIP_ADDINFO_NONE          0
#   define                          MSSIP_ADDINFO_FLAT          1
#   define                          MSSIP_ADDINFO_CATMEMBER     2
#   define                          MSSIP_ADDINFO_BLOB          3
#   define                          MSSIP_ADDINFO_NONMSSIP      500
	union {
		struct MS_ADDINFO_FLAT_ *psFlat;
		struct MS_ADDINFO_CATALOGMEMBER_ *psCatMember;
		struct MS_ADDINFO_BLOB_ *psBlob;
	};
	LPVOID pClientData;
}
SIP_SUBJECTINFO, *LPSIP_SUBJECTINFO;
typedef struct MS_ADDINFO_FLAT_ {
	DWORD cbStruct;
	struct SIP_INDIRECT_DATA_ *pIndirectData;
} MS_ADDINFO_FLAT, *PMS_ADDINFO_FLAT;
typedef struct MS_ADDINFO_CATALOGMEMBER_ {
	DWORD cbStruct;
	struct CRYPTCATSTORE_ *pStore;
	struct CRYPTCATMEMBER_ *pMember;
} MS_ADDINFO_CATALOGMEMBER, *PMS_ADDINFO_CATALOGMEMBER;
typedef struct MS_ADDINFO_BLOB_ {
	DWORD cbStruct;
	DWORD cbMemObject;
	BYTE *pbMemObject;
	DWORD cbMemSignedMsg;
	BYTE *pbMemSignedMsg;
}
MS_ADDINFO_BLOB, *PMS_ADDINFO_BLOB;
typedef struct SIP_INDIRECT_DATA_ {
	CRYPT_ATTRIBUTE_TYPE_VALUE Data;
	CRYPT_ALGORITHM_IDENTIFIER DigestAlgorithm;
	CRYPT_HASH_BLOB Digest;
}
SIP_INDIRECT_DATA, *PSIP_INDIRECT_DATA;
#pragma pack()
extern BOOL WINAPI CryptSIPGetSignedDataMsg(SIP_SUBJECTINFO *pSubjectInfo, DWORD *pdwEncodingType, DWORD dwIndex, DWORD *pcbSignedDataMsg, BYTE *pbSignedDataMsg);
typedef BOOL(WINAPI *pCryptSIPGetSignedDataMsg) (SIP_SUBJECTINFO *pSubjectInfo, DWORD *pdwEncodingType, DWORD dwIndex, DWORD *pcbSignedDataMsg, BYTE *pbSignedDataMsg);
extern BOOL WINAPI CryptSIPPutSignedDataMsg(SIP_SUBJECTINFO *pSubjectInfo, DWORD dwEncodingType, DWORD *pdwIndex, DWORD cbSignedDataMsg, BYTE *pbSignedDataMsg);
typedef BOOL(WINAPI *pCryptSIPPutSignedDataMsg) (SIP_SUBJECTINFO *pSubjectInfo, DWORD dwEncodingType, DWORD *pdwIndex, DWORD cbSignedDataMsg, BYTE *pbSignedDataMsg);
extern BOOL WINAPI CryptSIPCreateIndirectData(SIP_SUBJECTINFO *pSubjectInfo, DWORD *pcbIndirectData, SIP_INDIRECT_DATA *pIndirectData);
typedef BOOL(WINAPI *pCryptSIPCreateIndirectData) (SIP_SUBJECTINFO *pSubjectInfo, DWORD *pcbIndirectData, SIP_INDIRECT_DATA *pIndirectData);
extern BOOL WINAPI CryptSIPVerifyIndirectData(SIP_SUBJECTINFO *pSubjectInfo, SIP_INDIRECT_DATA *pIndirectData);
typedef BOOL(WINAPI *pCryptSIPVerifyIndirectData) (SIP_SUBJECTINFO *pSubjectInfo, SIP_INDIRECT_DATA *pIndirectData);
extern BOOL WINAPI CryptSIPRemoveSignedDataMsg(SIP_SUBJECTINFO *pSubjectInfo, DWORD dwIndex);
typedef BOOL(WINAPI *pCryptSIPRemoveSignedDataMsg) (SIP_SUBJECTINFO *pSubjectInfo, DWORD dwIndex);
#pragma pack(8)
typedef struct SIP_DISPATCH_INFO_ {
	DWORD cbSize;
	HANDLE hSIP;
	pCryptSIPGetSignedDataMsg pfGet;
	pCryptSIPPutSignedDataMsg pfPut;
	pCryptSIPCreateIndirectData pfCreate;
	pCryptSIPVerifyIndirectData pfVerify;
	pCryptSIPRemoveSignedDataMsg pfRemove;
}
SIP_DISPATCH_INFO, *LPSIP_DISPATCH_INFO;
typedef BOOL(WINAPI *pfnIsFileSupported) (HANDLE hFile, GUID *pgSubject);
typedef BOOL(WINAPI *pfnIsFileSupportedName) (WCHAR *pwszFileName, GUID *pgSubject);
typedef struct SIP_ADD_NEWPROVIDER_ {
	DWORD cbStruct;
	GUID *pgSubject;
	WCHAR *pwszDLLFileName;
	WCHAR *pwszMagicNumber;
	WCHAR *pwszIsFunctionName;
	WCHAR *pwszGetFuncName;
	WCHAR *pwszPutFuncName;
	WCHAR *pwszCreateFuncName;
	WCHAR *pwszVerifyFuncName;
	WCHAR *pwszRemoveFuncName;
	WCHAR *pwszIsFunctionNameFmt2;
}
SIP_ADD_NEWPROVIDER, *PSIP_ADD_NEWPROVIDER;
#define SIP_MAX_MAGIC_NUMBER        4
#pragma pack()
extern BOOL WINAPI CryptSIPLoad(const GUID *pgSubject, DWORD dwFlags, SIP_DISPATCH_INFO *pSipDispatch);
extern BOOL WINAPI CryptSIPRetrieveSubjectGuid(LPCWSTR FileName, HANDLE hFileIn, GUID *pgSubject);
extern BOOL WINAPI CryptSIPRetrieveSubjectGuidForCatalogFile(LPCWSTR FileName, HANDLE hFileIn, GUID *pgSubject);
extern BOOL WINAPI CryptSIPAddProvider(SIP_ADD_NEWPROVIDER *psNewProv);
extern BOOL WINAPI CryptSIPRemoveProvider(GUID *pgProv);
#endif
