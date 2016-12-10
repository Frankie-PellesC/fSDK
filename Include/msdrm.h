/*+@@file@@----------------------------------------------------------------*//*!
 \file		msdrm.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 19:26:33 2016
 \date		Modified on Sun Aug 14 19:26:33 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __MSDRM_H_
#define __MSDRM_H_
#include <msdrmdefs.h>
#if __POCC__ >= 500
#pragma once
#endif
DRMEXPORT HRESULT UDAPICALL DRMSetGlobalOptions(DRMGLOBALOPTIONS eGlobalOptions, LPVOID pvdata, DWORD dwlen);
DRMEXPORT HRESULT UDAPICALL DRMGetClientVersion(DRM_CLIENT_VERSION_INFO *pDRMClientVersionInfo);
DRMEXPORT HRESULT UDAPICALL DRMInitEnvironment(DRMSECURITYPROVIDERTYPE eSecurityProviderType, DRMSPECTYPE eSpecification, PWSTR wszSecurityProvider, PWSTR wszManifestCredentials, PWSTR wszMachineCredentials, DRMENVHANDLE *phEnv, DRMHANDLE *phDefaultLibrary);
DRMEXPORT HRESULT UDAPICALL DRMLoadLibrary(DRMENVHANDLE hEnv, DRMSPECTYPE eSpecification, PWSTR wszLibraryProvider, PWSTR wszCredentials, DRMHANDLE *phLibrary);
DRMEXPORT HRESULT UDAPICALL DRMCreateEnablingPrincipal(DRMENVHANDLE hEnv, DRMHANDLE hLibrary, PWSTR wszObject, DRMID *pidPrincipal, PWSTR wszCredentials, DRMHANDLE *phEnablingPrincipal);
DRMEXPORT HRESULT UDAPICALL DRMCloseHandle(DRMHANDLE handle);
DRMEXPORT HRESULT UDAPICALL DRMCloseEnvironmentHandle(DRMENVHANDLE hEnv);
DRMEXPORT HRESULT UDAPICALL DRMDuplicateHandle(DRMHANDLE hToCopy, DRMHANDLE *phCopy);
DRMEXPORT HRESULT UDAPICALL DRMDuplicateEnvironmentHandle(DRMENVHANDLE hToCopy, DRMENVHANDLE *phCopy);
DRMEXPORT HRESULT UDAPICALL DRMRegisterRevocationList(DRMENVHANDLE hEnv, PWSTR wszRevocationList);
DRMEXPORT HRESULT UDAPICALL DRMCheckSecurity(DRMENVHANDLE hEnv, UINT cLevel);
DRMEXPORT HRESULT UDAPICALL DRMRegisterContent(BOOL fRegister);
DRMEXPORT HRESULT UDAPICALL DRMEncrypt(DRMHANDLE hCryptoProvider, UINT iPosition, UINT cNumInBytes, BYTE *pbInData, UINT *pcNumOutBytes, BYTE *pbOutData);
DRMEXPORT HRESULT UDAPICALL DRMDecrypt(DRMHANDLE hCryptoProvider, UINT iPosition, UINT cNumInBytes, BYTE *pbInData, UINT *pcNumOutBytes, BYTE *pbOutData);
DRMEXPORT HRESULT UDAPICALL DRMCreateBoundLicense(DRMENVHANDLE hEnv, DRMBOUNDLICENSEPARAMS *pParams, PWSTR wszLicenseChain, DRMHANDLE *phBoundLicense, DRMHANDLE *phErrorLog);
DRMEXPORT HRESULT UDAPICALL DRMCreateEnablingBitsDecryptor(DRMHANDLE hBoundLicense, PWSTR wszRight, DRMHANDLE hAuxLib, PWSTR wszAuxPlug, DRMHANDLE *phDecryptor);
DRMEXPORT HRESULT UDAPICALL DRMCreateEnablingBitsEncryptor(DRMHANDLE hBoundLicense, PWSTR wszRight, DRMHANDLE hAuxLib, PWSTR wszAuxPlug, DRMHANDLE *phEncryptor);
DRMEXPORT HRESULT UDAPICALL DRMAttest(DRMHANDLE hEnablingPrincipal, PWSTR wszData, DRMATTESTTYPE eType, UINT *pcAttestedBlob, PWSTR wszAttestedBlob);
DRMEXPORT HRESULT UDAPICALL DRMGetTime(DRMENVHANDLE hEnv, DRMTIMETYPE eTimerIdType, SYSTEMTIME *poTimeObject);
DRMEXPORT HRESULT UDAPICALL DRMGetInfo(DRMHANDLE handle, PWSTR wszAttribute, DRMENCODINGTYPE *peEncoding, UINT *pcBuffer, BYTE *pbBuffer);
DRMEXPORT HRESULT UDAPICALL DRMGetEnvironmentInfo(DRMENVHANDLE handle, PWSTR wszAttribute, DRMENCODINGTYPE *peEncoding, UINT *pcBuffer, BYTE *pbBuffer);
DRMEXPORT HRESULT UDAPICALL DRMGetProcAddress(DRMHANDLE hLibrary, PWSTR wszProcName, FARPROC *ppfnProcAddress);
DRMEXPORT HRESULT UDAPICALL DRMGetBoundLicenseObjectCount(DRMHANDLE hQueryRoot, PWSTR wszSubObjectType, UINT *pcSubObjects);
DRMEXPORT HRESULT UDAPICALL DRMGetBoundLicenseObject(DRMHANDLE hQueryRoot, PWSTR wszSubObjectType, UINT iWhich, DRMHANDLE *phSubObject);
DRMEXPORT HRESULT UDAPICALL DRMGetBoundLicenseAttributeCount(DRMHANDLE hQueryRoot, PWSTR wszAttribute, UINT *pcAttributes);
DRMEXPORT HRESULT UDAPICALL DRMGetBoundLicenseAttribute(DRMHANDLE hQueryRoot, PWSTR wszAttribute, UINT iWhich, DRMENCODINGTYPE *peEncoding, UINT *pcBuffer, BYTE *pbBuffer);
DRMEXPORT HRESULT UDAPICALL DRMCreateClientSession(DRMCALLBACK pfnCallback, UINT uCallbackVersion, PWSTR wszGroupIDProviderType, PWSTR wszGroupID, DRMHSESSION *phClient);
DRMEXPORT HRESULT UDAPICALL DRMIsActivated(DRMHSESSION hClient, UINT uFlags, DRM_ACTSERV_INFO *pActServInfo);
DRMEXPORT HRESULT UDAPICALL DRMActivate(DRMHSESSION hClient, UINT uFlags, UINT uLangID, DRM_ACTSERV_INFO *pActServInfo, VOID *pvContext, HWND hParentWnd);
DRMEXPORT HRESULT UDAPICALL DRMGetServiceLocation(DRMHSESSION hClient, UINT uServiceType, UINT uServiceLocation, PWSTR wszIssuanceLicense, UINT *puServiceURLLength, PWSTR wszServiceURL);
DRMEXPORT HRESULT UDAPICALL DRMCreateLicenseStorageSession(DRMENVHANDLE hEnv, DRMHANDLE hDefaultLibrary, DRMHSESSION hClient, UINT uFlags, PWSTR wszIssuanceLicense, DRMHSESSION *phLicenseStorage);
DRMEXPORT HRESULT UDAPICALL DRMAddLicense(DRMHSESSION hLicenseStorage, UINT uFlags, PWSTR wszLicense);
DRMEXPORT HRESULT UDAPICALL DRMAcquireAdvisories(DRMHSESSION hLicenseStorage, PWSTR wszLicense, PWSTR wszURL, VOID *pvContext);
DRMEXPORT HRESULT UDAPICALL DRMEnumerateLicense(DRMHSESSION hSession, UINT uFlags, UINT uIndex, BOOL *pfSharedFlag, UINT *puCertificateDataLen, PWSTR wszCertificateData);
DRMEXPORT HRESULT UDAPICALL DRMAcquireLicense(DRMHSESSION hSession, UINT uFlags, PWSTR wszGroupIdentityCredential, PWSTR wszRequestedRights, PWSTR wszCustomData, PWSTR wszURL, VOID *pvContext);
DRMEXPORT HRESULT UDAPICALL DRMDeleteLicense(DRMHSESSION hSession, PWSTR wszLicenseId);
DRMEXPORT HRESULT UDAPICALL DRMCloseSession(DRMHSESSION hSession);
DRMEXPORT HRESULT UDAPICALL DRMDuplicateSession(DRMHSESSION hSessionIn, DRMHSESSION *phSessionOut);
DRMEXPORT HRESULT UDAPICALL DRMGetSecurityProvider(UINT uFlags, UINT *puTypeLen, PWSTR wszType, UINT *puPathLen, PWSTR wszPath);
DRMEXPORT HRESULT UDAPICALL DRMEncode(PWSTR wszAlgID, UINT uDataLen, BYTE *pbDecodedData, UINT *puEncodedStringLen, PWSTR wszEncodedString);
DRMEXPORT HRESULT UDAPICALL DRMDecode(PWSTR wszAlgID, PWSTR wszEncodedString, UINT *puDecodedDataLen, BYTE *pbDecodedData);
DRMEXPORT HRESULT UDAPICALL DRMConstructCertificateChain(UINT cCertificates, PWSTR *rgwszCertificates, UINT *pcChain, PWSTR wszChain);
DRMEXPORT HRESULT UDAPICALL DRMParseUnboundLicense(PWSTR wszCertificate, DRMQUERYHANDLE *phQueryRoot);
DRMEXPORT HRESULT UDAPICALL DRMCloseQueryHandle(DRMQUERYHANDLE hQuery);
DRMEXPORT HRESULT UDAPICALL DRMGetUnboundLicenseObjectCount(DRMQUERYHANDLE hQueryRoot, PWSTR wszSubObjectType, UINT *pcSubObjects);
DRMEXPORT HRESULT UDAPICALL DRMGetUnboundLicenseObject(DRMQUERYHANDLE hQueryRoot, PWSTR wszSubObjectType, UINT iIndex, DRMQUERYHANDLE *phSubQuery);
DRMEXPORT HRESULT UDAPICALL DRMGetUnboundLicenseAttributeCount(DRMQUERYHANDLE hQueryRoot, PWSTR wszAttributeType, UINT *pcAttributes);
DRMEXPORT HRESULT UDAPICALL DRMGetUnboundLicenseAttribute(DRMQUERYHANDLE hQueryRoot, PWSTR wszAttributeType, UINT iWhich, DRMENCODINGTYPE *peEncoding, UINT *pcBuffer, BYTE *pbBuffer);
DRMEXPORT HRESULT UDAPICALL DRMGetCertificateChainCount(PWSTR wszChain, UINT *pcCertCount);
DRMEXPORT HRESULT UDAPICALL DRMDeconstructCertificateChain(PWSTR wszChain, UINT iWhich, UINT *pcCert, PWSTR wszCert);
DRMEXPORT HRESULT UDAPICALL DRMVerify(PWSTR wszData, UINT *pcAttestedData, PWSTR wszAttestedData, DRMATTESTTYPE *peType, UINT *pcPrincipal, PWSTR wszPrincipal, UINT *pcManifest, PWSTR wszManifest);
DRMEXPORT HRESULT UDAPICALL DRMCreateUser(PWSTR wszUserName, PWSTR wszUserId, PWSTR wszUserIdType, DRMPUBHANDLE *phUser);
DRMEXPORT HRESULT UDAPICALL DRMCreateRight(PWSTR wszRightName, SYSTEMTIME *pstFrom, SYSTEMTIME *pstUntil, UINT cExtendedInfo, PWSTR *pwszExtendedInfoName, PWSTR *pwszExtendedInfoValue, DRMPUBHANDLE *phRight);
DRMEXPORT HRESULT UDAPICALL DRMCreateIssuanceLicense(SYSTEMTIME *pstTimeFrom, SYSTEMTIME *pstTimeUntil, PWSTR wszReferralInfoName, PWSTR wszReferralInfoURL, DRMPUBHANDLE hOwner, PWSTR wszIssuanceLicense, DRMHANDLE hBoundLicense, DRMPUBHANDLE *phIssuanceLicense);
DRMEXPORT HRESULT UDAPICALL DRMAddRightWithUser(DRMPUBHANDLE hIssuanceLicense, DRMPUBHANDLE hRight, DRMPUBHANDLE hUser);
DRMEXPORT HRESULT UDAPICALL DRMClearAllRights(DRMPUBHANDLE hIssuanceLicense);
DRMEXPORT HRESULT UDAPICALL DRMSetMetaData(DRMPUBHANDLE hIssuanceLicense, PWSTR wszContentId, PWSTR wszContentIdType, PWSTR wszSKUId, PWSTR wszSKUIdType, PWSTR wszContentType, PWSTR wszContentName);
DRMEXPORT HRESULT UDAPICALL DRMSetUsagePolicy(DRMPUBHANDLE hIssuanceLicense, DRM_USAGEPOLICY_TYPE eUsagePolicyType, BOOL fDelete, BOOL fExclusion, PWSTR wszName, PWSTR wszMinVersion, PWSTR wszMaxVersion, PWSTR wszPublicKey, PWSTR wszDigestAlgorithm, BYTE *pbDigest, UINT cbDigest);
DRMEXPORT HRESULT UDAPICALL DRMSetRevocationPoint(DRMPUBHANDLE hIssuanceLicense, BOOL fDelete, PWSTR wszId, PWSTR wszIdType, PWSTR wszURL, SYSTEMTIME *pstFrequency, PWSTR wszName, PWSTR wszPublicKey);
DRMEXPORT HRESULT UDAPICALL DRMSetApplicationSpecificData(DRMPUBHANDLE hIssuanceLicense, BOOL fDelete, PWSTR wszName, PWSTR wszValue);
DRMEXPORT HRESULT UDAPICALL DRMSetNameAndDescription(DRMPUBHANDLE hIssuanceLicense, BOOL fDelete, UINT lcid, PWSTR wszName, PWSTR wszDescription);
DRMEXPORT HRESULT UDAPICALL DRMSetIntervalTime(DRMPUBHANDLE hIssuanceLicense, UINT cDays);
DRMEXPORT HRESULT UDAPICALL DRMGetIssuanceLicenseTemplate(DRMPUBHANDLE hIssuanceLicense, UINT *puIssuanceLicenseTemplateLength, PWSTR wszIssuanceLicenseTemplate);
DRMEXPORT HRESULT UDAPICALL DRMGetSignedIssuanceLicense(DRMENVHANDLE hEnv, DRMPUBHANDLE hIssuanceLicense, UINT uFlags, BYTE *pbSymKey, UINT cbSymKey, PWSTR wszSymKeyType, PWSTR wszClientLicensorCertificate, DRMCALLBACK pfnCallback, PWSTR wszURL, VOID *pvContext);
DRMEXPORT HRESULT UDAPICALL DRMGetSignedIssuanceLicenseEx(DRMENVHANDLE hEnv, DRMPUBHANDLE hIssuanceLicense, UINT uFlags, BYTE *pbSymKey, UINT cbSymKey, PWSTR wszSymKeyType, PVOID pvReserved, DRMHANDLE hEnablingPrincipal, DRMHANDLE hBoundLicenseCLC, DRMCALLBACK pfnCallback, PVOID pvContext);
DRMEXPORT HRESULT UDAPICALL DRMClosePubHandle(DRMPUBHANDLE hPub);
DRMEXPORT HRESULT UDAPICALL DRMDuplicatePubHandle(DRMPUBHANDLE hPubIn, DRMPUBHANDLE *phPubOut);
DRMEXPORT HRESULT UDAPICALL DRMGetUserInfo(DRMPUBHANDLE hUser, UINT *puUserNameLength, PWSTR wszUserName, UINT *puUserIdLength, PWSTR wszUserId, UINT *puUserIdTypeLength, PWSTR wszUserIdType);
DRMEXPORT HRESULT UDAPICALL DRMGetRightInfo(DRMPUBHANDLE hRight, UINT *puRightNameLength, PWSTR wszRightName, SYSTEMTIME *pstFrom, SYSTEMTIME *pstUntil);
DRMEXPORT HRESULT UDAPICALL DRMGetRightExtendedInfo(DRMPUBHANDLE hRight, UINT uIndex, UINT *puExtendedInfoNameLength, PWSTR wszExtendedInfoName, UINT *puExtendedInfoValueLength, PWSTR wszExtendedInfoValue);
DRMEXPORT HRESULT UDAPICALL DRMGetUsers(DRMPUBHANDLE hIssuanceLicense, UINT uIndex, DRMPUBHANDLE *phUser);
DRMEXPORT HRESULT UDAPICALL DRMGetUserRights(DRMPUBHANDLE hIssuanceLicense, DRMPUBHANDLE hUser, UINT uIndex, DRMPUBHANDLE *phRight);
DRMEXPORT HRESULT UDAPICALL DRMGetMetaData(DRMPUBHANDLE hIssuanceLicense, UINT *puContentIdLength, PWSTR wszContentId, UINT *puContentIdTypeLength, PWSTR wszContentIdType, UINT *puSKUIdLength, PWSTR wszSKUId, UINT *puSKUIdTypeLength, PWSTR wszSKUIdType, UINT *puContentTypeLength, PWSTR wszContentType, UINT *puContentNameLength, PWSTR wszContentName);
DRMEXPORT HRESULT UDAPICALL DRMGetApplicationSpecificData(DRMPUBHANDLE hIssuanceLicense, UINT uIndex, UINT *puNameLength, PWSTR wszName, UINT *puValueLength, PWSTR wszValue);
DRMEXPORT HRESULT UDAPICALL DRMGetIssuanceLicenseInfo(DRMPUBHANDLE hIssuanceLicense, SYSTEMTIME *pstTimeFrom, SYSTEMTIME *pstTimeUntil, UINT uFlags, UINT *puDistributionPointNameLength, PWSTR wszDistributionPointName, UINT *puDistributionPointURLLength, PWSTR wszDistributionPointURL, DRMPUBHANDLE *phOwner, BOOL *pfOfficial);
DRMEXPORT HRESULT UDAPICALL DRMGetRevocationPoint(DRMPUBHANDLE hIssuanceLicense, UINT *puIdLength, PWSTR wszId, UINT *puIdTypeLength, PWSTR wszIdType, UINT *puURLLength, PWSTR wszRL, SYSTEMTIME *pstFrequency, UINT *puNameLength, PWSTR wszName, UINT *puPublicKeyLength, PWSTR wszPublicKey);
DRMEXPORT HRESULT UDAPICALL DRMGetUsagePolicy(DRMPUBHANDLE hIssuanceLicense, UINT uIndex, DRM_USAGEPOLICY_TYPE *peUsagePolicyType, BOOL *pfExclusion, UINT *puNameLength, PWSTR wszName, UINT *puMinVersionLength, PWSTR wszMinVersion, UINT *puMaxVersionLength, PWSTR wszMaxVersion, UINT *puPublicKeyLength, PWSTR wszPublicKey, UINT *puDigestAlgorithmLength, PWSTR wszDigestAlgorithm, UINT *pcbDigest, BYTE *pbDigest);
DRMEXPORT HRESULT UDAPICALL DRMGetNameAndDescription(DRMPUBHANDLE hIssuanceLicense, UINT uIndex, UINT *pulcid, UINT *puNameLength, PWSTR wszName, UINT *puDescriptionLength, PWSTR wszDescription);
DRMEXPORT HRESULT UDAPICALL DRMGetOwnerLicense(DRMPUBHANDLE hIssuanceLicense, UINT *puOwnerLicenseLength, PWSTR wszOwnerLicense);
DRMEXPORT HRESULT UDAPICALL DRMGetIntervalTime(DRMPUBHANDLE hIssuanceLicense, UINT *pcDays);
DRMEXPORT HRESULT UDAPICALL DRMRepair(void);
DRMEXPORT HRESULT UDAPICALL DRMRegisterProtectedWindow(DRMENVHANDLE hEnv, HWND hwnd);
DRMEXPORT HRESULT UDAPICALL DRMIsWindowProtected(HWND hwnd, BOOL *pfProtected);
DRMEXPORT HRESULT UDAPICALL DRMAcquireIssuanceLicenseTemplate(DRMHSESSION hClient, UINT uFlags, VOID *pvReserved, UINT cTemplates, PWSTR *pwszTemplateIds, PWSTR wszUrl, VOID *pvContext);
#endif
