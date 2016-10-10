/*+@@file@@----------------------------------------------------------------*//*!
 \file		certenroll.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 00:40:06 2016
 \date		Modified on Sun Jul  3 00:40:06 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __certenroll_h__
#define __certenroll_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IObjectId_FWD_DEFINED__
#define __IObjectId_FWD_DEFINED__
typedef interface IObjectId IObjectId;
#endif
#ifndef __IObjectIds_FWD_DEFINED__
#define __IObjectIds_FWD_DEFINED__
typedef interface IObjectIds IObjectIds;
#endif
#ifndef __IBinaryConverter_FWD_DEFINED__
#define __IBinaryConverter_FWD_DEFINED__
typedef interface IBinaryConverter IBinaryConverter;
#endif
#ifndef __IX500DistinguishedName_FWD_DEFINED__
#define __IX500DistinguishedName_FWD_DEFINED__
typedef interface IX500DistinguishedName IX500DistinguishedName;
#endif
#ifndef __IX509EnrollmentStatus_FWD_DEFINED__
#define __IX509EnrollmentStatus_FWD_DEFINED__
typedef interface IX509EnrollmentStatus IX509EnrollmentStatus;
#endif
#ifndef __ICspAlgorithm_FWD_DEFINED__
#define __ICspAlgorithm_FWD_DEFINED__
typedef interface ICspAlgorithm ICspAlgorithm;
#endif
#ifndef __ICspAlgorithms_FWD_DEFINED__
#define __ICspAlgorithms_FWD_DEFINED__
typedef interface ICspAlgorithms ICspAlgorithms;
#endif
#ifndef __ICspInformation_FWD_DEFINED__
#define __ICspInformation_FWD_DEFINED__
typedef interface ICspInformation ICspInformation;
#endif
#ifndef __ICspInformations_FWD_DEFINED__
#define __ICspInformations_FWD_DEFINED__
typedef interface ICspInformations ICspInformations;
#endif
#ifndef __ICspStatus_FWD_DEFINED__
#define __ICspStatus_FWD_DEFINED__
typedef interface ICspStatus ICspStatus;
#endif
#ifndef __ICspStatuses_FWD_DEFINED__
#define __ICspStatuses_FWD_DEFINED__
typedef interface ICspStatuses ICspStatuses;
#endif
#ifndef __IX509PublicKey_FWD_DEFINED__
#define __IX509PublicKey_FWD_DEFINED__
typedef interface IX509PublicKey IX509PublicKey;
#endif
#ifndef __IX509PrivateKey_FWD_DEFINED__
#define __IX509PrivateKey_FWD_DEFINED__
typedef interface IX509PrivateKey IX509PrivateKey;
#endif
#ifndef __IX509Extension_FWD_DEFINED__
#define __IX509Extension_FWD_DEFINED__
typedef interface IX509Extension IX509Extension;
#endif
#ifndef __IX509Extensions_FWD_DEFINED__
#define __IX509Extensions_FWD_DEFINED__
typedef interface IX509Extensions IX509Extensions;
#endif
#ifndef __IX509ExtensionKeyUsage_FWD_DEFINED__
#define __IX509ExtensionKeyUsage_FWD_DEFINED__
typedef interface IX509ExtensionKeyUsage IX509ExtensionKeyUsage;
#endif
#ifndef __IX509ExtensionEnhancedKeyUsage_FWD_DEFINED__
#define __IX509ExtensionEnhancedKeyUsage_FWD_DEFINED__
typedef interface IX509ExtensionEnhancedKeyUsage IX509ExtensionEnhancedKeyUsage;
#endif
#ifndef __IX509ExtensionTemplateName_FWD_DEFINED__
#define __IX509ExtensionTemplateName_FWD_DEFINED__
typedef interface IX509ExtensionTemplateName IX509ExtensionTemplateName;
#endif
#ifndef __IX509ExtensionTemplate_FWD_DEFINED__
#define __IX509ExtensionTemplate_FWD_DEFINED__
typedef interface IX509ExtensionTemplate IX509ExtensionTemplate;
#endif
#ifndef __IAlternativeName_FWD_DEFINED__
#define __IAlternativeName_FWD_DEFINED__
typedef interface IAlternativeName IAlternativeName;
#endif
#ifndef __IAlternativeNames_FWD_DEFINED__
#define __IAlternativeNames_FWD_DEFINED__
typedef interface IAlternativeNames IAlternativeNames;
#endif
#ifndef __IX509ExtensionAlternativeNames_FWD_DEFINED__
#define __IX509ExtensionAlternativeNames_FWD_DEFINED__
typedef interface IX509ExtensionAlternativeNames IX509ExtensionAlternativeNames;
#endif
#ifndef __IX509ExtensionBasicConstraints_FWD_DEFINED__
#define __IX509ExtensionBasicConstraints_FWD_DEFINED__
typedef interface IX509ExtensionBasicConstraints IX509ExtensionBasicConstraints;
#endif
#ifndef __IX509ExtensionSubjectKeyIdentifier_FWD_DEFINED__
#define __IX509ExtensionSubjectKeyIdentifier_FWD_DEFINED__
typedef interface IX509ExtensionSubjectKeyIdentifier IX509ExtensionSubjectKeyIdentifier;
#endif
#ifndef __IX509ExtensionAuthorityKeyIdentifier_FWD_DEFINED__
#define __IX509ExtensionAuthorityKeyIdentifier_FWD_DEFINED__
typedef interface IX509ExtensionAuthorityKeyIdentifier IX509ExtensionAuthorityKeyIdentifier;
#endif
#ifndef __ISmimeCapability_FWD_DEFINED__
#define __ISmimeCapability_FWD_DEFINED__
typedef interface ISmimeCapability ISmimeCapability;
#endif
#ifndef __ISmimeCapabilities_FWD_DEFINED__
#define __ISmimeCapabilities_FWD_DEFINED__
typedef interface ISmimeCapabilities ISmimeCapabilities;
#endif
#ifndef __IX509ExtensionSmimeCapabilities_FWD_DEFINED__
#define __IX509ExtensionSmimeCapabilities_FWD_DEFINED__
typedef interface IX509ExtensionSmimeCapabilities IX509ExtensionSmimeCapabilities;
#endif
#ifndef __IPolicyQualifier_FWD_DEFINED__
#define __IPolicyQualifier_FWD_DEFINED__
typedef interface IPolicyQualifier IPolicyQualifier;
#endif
#ifndef __IPolicyQualifiers_FWD_DEFINED__
#define __IPolicyQualifiers_FWD_DEFINED__
typedef interface IPolicyQualifiers IPolicyQualifiers;
#endif
#ifndef __ICertificatePolicy_FWD_DEFINED__
#define __ICertificatePolicy_FWD_DEFINED__
typedef interface ICertificatePolicy ICertificatePolicy;
#endif
#ifndef __ICertificatePolicies_FWD_DEFINED__
#define __ICertificatePolicies_FWD_DEFINED__
typedef interface ICertificatePolicies ICertificatePolicies;
#endif
#ifndef __IX509ExtensionCertificatePolicies_FWD_DEFINED__
#define __IX509ExtensionCertificatePolicies_FWD_DEFINED__
typedef interface IX509ExtensionCertificatePolicies IX509ExtensionCertificatePolicies;
#endif
#ifndef __IX509ExtensionMSApplicationPolicies_FWD_DEFINED__
#define __IX509ExtensionMSApplicationPolicies_FWD_DEFINED__
typedef interface IX509ExtensionMSApplicationPolicies IX509ExtensionMSApplicationPolicies;
#endif
#ifndef __IX509Attribute_FWD_DEFINED__
#define __IX509Attribute_FWD_DEFINED__
typedef interface IX509Attribute IX509Attribute;
#endif
#ifndef __IX509Attributes_FWD_DEFINED__
#define __IX509Attributes_FWD_DEFINED__
typedef interface IX509Attributes IX509Attributes;
#endif
#ifndef __IX509AttributeExtensions_FWD_DEFINED__
#define __IX509AttributeExtensions_FWD_DEFINED__
typedef interface IX509AttributeExtensions IX509AttributeExtensions;
#endif
#ifndef __IX509AttributeClientId_FWD_DEFINED__
#define __IX509AttributeClientId_FWD_DEFINED__
typedef interface IX509AttributeClientId IX509AttributeClientId;
#endif
#ifndef __IX509AttributeRenewalCertificate_FWD_DEFINED__
#define __IX509AttributeRenewalCertificate_FWD_DEFINED__
typedef interface IX509AttributeRenewalCertificate IX509AttributeRenewalCertificate;
#endif
#ifndef __IX509AttributeArchiveKey_FWD_DEFINED__
#define __IX509AttributeArchiveKey_FWD_DEFINED__
typedef interface IX509AttributeArchiveKey IX509AttributeArchiveKey;
#endif
#ifndef __IX509AttributeArchiveKeyHash_FWD_DEFINED__
#define __IX509AttributeArchiveKeyHash_FWD_DEFINED__
typedef interface IX509AttributeArchiveKeyHash IX509AttributeArchiveKeyHash;
#endif
#ifndef __IX509AttributeOSVersion_FWD_DEFINED__
#define __IX509AttributeOSVersion_FWD_DEFINED__
typedef interface IX509AttributeOSVersion IX509AttributeOSVersion;
#endif
#ifndef __IX509AttributeCspProvider_FWD_DEFINED__
#define __IX509AttributeCspProvider_FWD_DEFINED__
typedef interface IX509AttributeCspProvider IX509AttributeCspProvider;
#endif
#ifndef __ICryptAttribute_FWD_DEFINED__
#define __ICryptAttribute_FWD_DEFINED__
typedef interface ICryptAttribute ICryptAttribute;
#endif
#ifndef __ICryptAttributes_FWD_DEFINED__
#define __ICryptAttributes_FWD_DEFINED__
typedef interface ICryptAttributes ICryptAttributes;
#endif
#ifndef __ICertProperty_FWD_DEFINED__
#define __ICertProperty_FWD_DEFINED__
typedef interface ICertProperty ICertProperty;
#endif
#ifndef __ICertProperties_FWD_DEFINED__
#define __ICertProperties_FWD_DEFINED__
typedef interface ICertProperties ICertProperties;
#endif
#ifndef __ICertPropertyFriendlyName_FWD_DEFINED__
#define __ICertPropertyFriendlyName_FWD_DEFINED__
typedef interface ICertPropertyFriendlyName ICertPropertyFriendlyName;
#endif
#ifndef __ICertPropertyDescription_FWD_DEFINED__
#define __ICertPropertyDescription_FWD_DEFINED__
typedef interface ICertPropertyDescription ICertPropertyDescription;
#endif
#ifndef __ICertPropertyAutoEnroll_FWD_DEFINED__
#define __ICertPropertyAutoEnroll_FWD_DEFINED__
typedef interface ICertPropertyAutoEnroll ICertPropertyAutoEnroll;
#endif
#ifndef __ICertPropertyRequestOriginator_FWD_DEFINED__
#define __ICertPropertyRequestOriginator_FWD_DEFINED__
typedef interface ICertPropertyRequestOriginator ICertPropertyRequestOriginator;
#endif
#ifndef __ICertPropertySHA1Hash_FWD_DEFINED__
#define __ICertPropertySHA1Hash_FWD_DEFINED__
typedef interface ICertPropertySHA1Hash ICertPropertySHA1Hash;
#endif
#ifndef __ICertPropertyKeyProvInfo_FWD_DEFINED__
#define __ICertPropertyKeyProvInfo_FWD_DEFINED__
typedef interface ICertPropertyKeyProvInfo ICertPropertyKeyProvInfo;
#endif
#ifndef __ICertPropertyArchived_FWD_DEFINED__
#define __ICertPropertyArchived_FWD_DEFINED__
typedef interface ICertPropertyArchived ICertPropertyArchived;
#endif
#ifndef __ICertPropertyBackedUp_FWD_DEFINED__
#define __ICertPropertyBackedUp_FWD_DEFINED__
typedef interface ICertPropertyBackedUp ICertPropertyBackedUp;
#endif
#ifndef __ICertPropertyEnrollment_FWD_DEFINED__
#define __ICertPropertyEnrollment_FWD_DEFINED__
typedef interface ICertPropertyEnrollment ICertPropertyEnrollment;
#endif
#ifndef __ICertPropertyRenewal_FWD_DEFINED__
#define __ICertPropertyRenewal_FWD_DEFINED__
typedef interface ICertPropertyRenewal ICertPropertyRenewal;
#endif
#ifndef __ICertPropertyArchivedKeyHash_FWD_DEFINED__
#define __ICertPropertyArchivedKeyHash_FWD_DEFINED__
typedef interface ICertPropertyArchivedKeyHash ICertPropertyArchivedKeyHash;
#endif
#ifndef __ICertPropertyEnrollmentPolicyServer_FWD_DEFINED__
#define __ICertPropertyEnrollmentPolicyServer_FWD_DEFINED__
typedef interface ICertPropertyEnrollmentPolicyServer ICertPropertyEnrollmentPolicyServer;
#endif
#ifndef __IX509SignatureInformation_FWD_DEFINED__
#define __IX509SignatureInformation_FWD_DEFINED__
typedef interface IX509SignatureInformation IX509SignatureInformation;
#endif
#ifndef __ISignerCertificate_FWD_DEFINED__
#define __ISignerCertificate_FWD_DEFINED__
typedef interface ISignerCertificate ISignerCertificate;
#endif
#ifndef __ISignerCertificates_FWD_DEFINED__
#define __ISignerCertificates_FWD_DEFINED__
typedef interface ISignerCertificates ISignerCertificates;
#endif
#ifndef __IX509NameValuePair_FWD_DEFINED__
#define __IX509NameValuePair_FWD_DEFINED__
typedef interface IX509NameValuePair IX509NameValuePair;
#endif
#ifndef __IX509NameValuePairs_FWD_DEFINED__
#define __IX509NameValuePairs_FWD_DEFINED__
typedef interface IX509NameValuePairs IX509NameValuePairs;
#endif
#ifndef __IX509CertificateTemplate_FWD_DEFINED__
#define __IX509CertificateTemplate_FWD_DEFINED__
typedef interface IX509CertificateTemplate IX509CertificateTemplate;
#endif
#ifndef __IX509CertificateTemplates_FWD_DEFINED__
#define __IX509CertificateTemplates_FWD_DEFINED__
typedef interface IX509CertificateTemplates IX509CertificateTemplates;
#endif
#ifndef __IX509CertificateTemplateWritable_FWD_DEFINED__
#define __IX509CertificateTemplateWritable_FWD_DEFINED__
typedef interface IX509CertificateTemplateWritable IX509CertificateTemplateWritable;
#endif
#ifndef __ICertificationAuthority_FWD_DEFINED__
#define __ICertificationAuthority_FWD_DEFINED__
typedef interface ICertificationAuthority ICertificationAuthority;
#endif
#ifndef __ICertificationAuthorities_FWD_DEFINED__
#define __ICertificationAuthorities_FWD_DEFINED__
typedef interface ICertificationAuthorities ICertificationAuthorities;
#endif
#ifndef __IX509EnrollmentPolicyServer_FWD_DEFINED__
#define __IX509EnrollmentPolicyServer_FWD_DEFINED__
typedef interface IX509EnrollmentPolicyServer IX509EnrollmentPolicyServer;
#endif
#ifndef __IX509PolicyServerUrl_FWD_DEFINED__
#define __IX509PolicyServerUrl_FWD_DEFINED__
typedef interface IX509PolicyServerUrl IX509PolicyServerUrl;
#endif
#ifndef __IX509PolicyServerListManager_FWD_DEFINED__
#define __IX509PolicyServerListManager_FWD_DEFINED__
typedef interface IX509PolicyServerListManager IX509PolicyServerListManager;
#endif
#ifndef __IX509CertificateRequest_FWD_DEFINED__
#define __IX509CertificateRequest_FWD_DEFINED__
typedef interface IX509CertificateRequest IX509CertificateRequest;
#endif
#ifndef __IX509CertificateRequestPkcs10_FWD_DEFINED__
#define __IX509CertificateRequestPkcs10_FWD_DEFINED__
typedef interface IX509CertificateRequestPkcs10 IX509CertificateRequestPkcs10;
#endif
#ifndef __IX509CertificateRequestPkcs10V2_FWD_DEFINED__
#define __IX509CertificateRequestPkcs10V2_FWD_DEFINED__
typedef interface IX509CertificateRequestPkcs10V2 IX509CertificateRequestPkcs10V2;
#endif
#ifndef __IX509CertificateRequestCertificate_FWD_DEFINED__
#define __IX509CertificateRequestCertificate_FWD_DEFINED__
typedef interface IX509CertificateRequestCertificate IX509CertificateRequestCertificate;
#endif
#ifndef __IX509CertificateRequestCertificate2_FWD_DEFINED__
#define __IX509CertificateRequestCertificate2_FWD_DEFINED__
typedef interface IX509CertificateRequestCertificate2 IX509CertificateRequestCertificate2;
#endif
#ifndef __IX509CertificateRequestPkcs7_FWD_DEFINED__
#define __IX509CertificateRequestPkcs7_FWD_DEFINED__
typedef interface IX509CertificateRequestPkcs7 IX509CertificateRequestPkcs7;
#endif
#ifndef __IX509CertificateRequestPkcs7V2_FWD_DEFINED__
#define __IX509CertificateRequestPkcs7V2_FWD_DEFINED__
typedef interface IX509CertificateRequestPkcs7V2 IX509CertificateRequestPkcs7V2;
#endif
#ifndef __IX509CertificateRequestCmc_FWD_DEFINED__
#define __IX509CertificateRequestCmc_FWD_DEFINED__
typedef interface IX509CertificateRequestCmc IX509CertificateRequestCmc;
#endif
#ifndef __IX509CertificateRequestCmc2_FWD_DEFINED__
#define __IX509CertificateRequestCmc2_FWD_DEFINED__
typedef interface IX509CertificateRequestCmc2 IX509CertificateRequestCmc2;
#endif
#ifndef __IX509Enrollment_FWD_DEFINED__
#define __IX509Enrollment_FWD_DEFINED__
typedef interface IX509Enrollment IX509Enrollment;
#endif
#ifndef __IX509Enrollment2_FWD_DEFINED__
#define __IX509Enrollment2_FWD_DEFINED__
typedef interface IX509Enrollment2 IX509Enrollment2;
#endif
#ifndef __IX509EnrollmentHelper_FWD_DEFINED__
#define __IX509EnrollmentHelper_FWD_DEFINED__
typedef interface IX509EnrollmentHelper IX509EnrollmentHelper;
#endif
#ifndef __IX509EnrollmentWebClassFactory_FWD_DEFINED__
#define __IX509EnrollmentWebClassFactory_FWD_DEFINED__
typedef interface IX509EnrollmentWebClassFactory IX509EnrollmentWebClassFactory;
#endif
#ifndef __IX509MachineEnrollmentFactory_FWD_DEFINED__
#define __IX509MachineEnrollmentFactory_FWD_DEFINED__
typedef interface IX509MachineEnrollmentFactory IX509MachineEnrollmentFactory;
#endif
#ifndef __CObjectId_FWD_DEFINED__
#define __CObjectId_FWD_DEFINED__
typedef struct CObjectId CObjectId;
#endif
#ifndef __CObjectIds_FWD_DEFINED__
#define __CObjectIds_FWD_DEFINED__
typedef struct CObjectIds CObjectIds;
#endif
#ifndef __CBinaryConverter_FWD_DEFINED__
#define __CBinaryConverter_FWD_DEFINED__
typedef struct CBinaryConverter CBinaryConverter;
#endif
#ifndef __CX500DistinguishedName_FWD_DEFINED__
#define __CX500DistinguishedName_FWD_DEFINED__
typedef struct CX500DistinguishedName CX500DistinguishedName;
#endif
#ifndef __CCspInformation_FWD_DEFINED__
#define __CCspInformation_FWD_DEFINED__
typedef struct CCspInformation CCspInformation;
#endif
#ifndef __CCspInformations_FWD_DEFINED__
#define __CCspInformations_FWD_DEFINED__
typedef struct CCspInformations CCspInformations;
#endif
#ifndef __CCspStatus_FWD_DEFINED__
#define __CCspStatus_FWD_DEFINED__
typedef struct CCspStatus CCspStatus;
#endif
#ifndef __CX509PublicKey_FWD_DEFINED__
#define __CX509PublicKey_FWD_DEFINED__
typedef struct CX509PublicKey CX509PublicKey;
#endif
#ifndef __CX509PrivateKey_FWD_DEFINED__
#define __CX509PrivateKey_FWD_DEFINED__
typedef struct CX509PrivateKey CX509PrivateKey;
#endif
#ifndef __CX509Extension_FWD_DEFINED__
#define __CX509Extension_FWD_DEFINED__
typedef struct CX509Extension CX509Extension;
#endif
#ifndef __CX509Extensions_FWD_DEFINED__
#define __CX509Extensions_FWD_DEFINED__
typedef struct CX509Extensions CX509Extensions;
#endif
#ifndef __CX509ExtensionKeyUsage_FWD_DEFINED__
#define __CX509ExtensionKeyUsage_FWD_DEFINED__
typedef struct CX509ExtensionKeyUsage CX509ExtensionKeyUsage;
#endif
#ifndef __CX509ExtensionEnhancedKeyUsage_FWD_DEFINED__
#define __CX509ExtensionEnhancedKeyUsage_FWD_DEFINED__
typedef struct CX509ExtensionEnhancedKeyUsage CX509ExtensionEnhancedKeyUsage;
#endif
#ifndef __CX509ExtensionTemplateName_FWD_DEFINED__
#define __CX509ExtensionTemplateName_FWD_DEFINED__
typedef struct CX509ExtensionTemplateName CX509ExtensionTemplateName;
#endif
#ifndef __CX509ExtensionTemplate_FWD_DEFINED__
#define __CX509ExtensionTemplate_FWD_DEFINED__
typedef struct CX509ExtensionTemplate CX509ExtensionTemplate;
#endif
#ifndef __CAlternativeName_FWD_DEFINED__
#define __CAlternativeName_FWD_DEFINED__
typedef struct CAlternativeName CAlternativeName;
#endif
#ifndef __CAlternativeNames_FWD_DEFINED__
#define __CAlternativeNames_FWD_DEFINED__
typedef struct CAlternativeNames CAlternativeNames;
#endif
#ifndef __CX509ExtensionAlternativeNames_FWD_DEFINED__
#define __CX509ExtensionAlternativeNames_FWD_DEFINED__
typedef struct CX509ExtensionAlternativeNames CX509ExtensionAlternativeNames;
#endif
#ifndef __CX509ExtensionBasicConstraints_FWD_DEFINED__
#define __CX509ExtensionBasicConstraints_FWD_DEFINED__
typedef struct CX509ExtensionBasicConstraints CX509ExtensionBasicConstraints;
#endif
#ifndef __CX509ExtensionSubjectKeyIdentifier_FWD_DEFINED__
#define __CX509ExtensionSubjectKeyIdentifier_FWD_DEFINED__
typedef struct CX509ExtensionSubjectKeyIdentifier CX509ExtensionSubjectKeyIdentifier;
#endif
#ifndef __CX509ExtensionAuthorityKeyIdentifier_FWD_DEFINED__
#define __CX509ExtensionAuthorityKeyIdentifier_FWD_DEFINED__
typedef struct CX509ExtensionAuthorityKeyIdentifier CX509ExtensionAuthorityKeyIdentifier;
#endif
#ifndef __CSmimeCapability_FWD_DEFINED__
#define __CSmimeCapability_FWD_DEFINED__
typedef struct CSmimeCapability CSmimeCapability;
#endif
#ifndef __CSmimeCapabilities_FWD_DEFINED__
#define __CSmimeCapabilities_FWD_DEFINED__
typedef struct CSmimeCapabilities CSmimeCapabilities;
#endif
#ifndef __CX509ExtensionSmimeCapabilities_FWD_DEFINED__
#define __CX509ExtensionSmimeCapabilities_FWD_DEFINED__
typedef struct CX509ExtensionSmimeCapabilities CX509ExtensionSmimeCapabilities;
#endif
#ifndef __CPolicyQualifier_FWD_DEFINED__
#define __CPolicyQualifier_FWD_DEFINED__
typedef struct CPolicyQualifier CPolicyQualifier;
#endif
#ifndef __CPolicyQualifiers_FWD_DEFINED__
#define __CPolicyQualifiers_FWD_DEFINED__
typedef struct CPolicyQualifiers CPolicyQualifiers;
#endif
#ifndef __CCertificatePolicy_FWD_DEFINED__
#define __CCertificatePolicy_FWD_DEFINED__
typedef struct CCertificatePolicy CCertificatePolicy;
#endif
#ifndef __CCertificatePolicies_FWD_DEFINED__
#define __CCertificatePolicies_FWD_DEFINED__
typedef struct CCertificatePolicies CCertificatePolicies;
#endif
#ifndef __CX509ExtensionCertificatePolicies_FWD_DEFINED__
#define __CX509ExtensionCertificatePolicies_FWD_DEFINED__
typedef struct CX509ExtensionCertificatePolicies CX509ExtensionCertificatePolicies;
#endif
#ifndef __CX509ExtensionMSApplicationPolicies_FWD_DEFINED__
#define __CX509ExtensionMSApplicationPolicies_FWD_DEFINED__
typedef struct CX509ExtensionMSApplicationPolicies CX509ExtensionMSApplicationPolicies;
#endif
#ifndef __CX509Attribute_FWD_DEFINED__
#define __CX509Attribute_FWD_DEFINED__
typedef struct CX509Attribute CX509Attribute;
#endif
#ifndef __CX509Attributes_FWD_DEFINED__
#define __CX509Attributes_FWD_DEFINED__
typedef struct CX509Attributes CX509Attributes;
#endif
#ifndef __CX509AttributeExtensions_FWD_DEFINED__
#define __CX509AttributeExtensions_FWD_DEFINED__
typedef struct CX509AttributeExtensions CX509AttributeExtensions;
#endif
#ifndef __CX509AttributeClientId_FWD_DEFINED__
#define __CX509AttributeClientId_FWD_DEFINED__
typedef struct CX509AttributeClientId CX509AttributeClientId;
#endif
#ifndef __CX509AttributeRenewalCertificate_FWD_DEFINED__
#define __CX509AttributeRenewalCertificate_FWD_DEFINED__
typedef struct CX509AttributeRenewalCertificate CX509AttributeRenewalCertificate;
#endif
#ifndef __CX509AttributeArchiveKey_FWD_DEFINED__
#define __CX509AttributeArchiveKey_FWD_DEFINED__
typedef struct CX509AttributeArchiveKey CX509AttributeArchiveKey;
#endif
#ifndef __CX509AttributeArchiveKeyHash_FWD_DEFINED__
#define __CX509AttributeArchiveKeyHash_FWD_DEFINED__
typedef struct CX509AttributeArchiveKeyHash CX509AttributeArchiveKeyHash;
#endif
#ifndef __CX509AttributeOSVersion_FWD_DEFINED__
#define __CX509AttributeOSVersion_FWD_DEFINED__
typedef struct CX509AttributeOSVersion CX509AttributeOSVersion;
#endif
#ifndef __CX509AttributeCspProvider_FWD_DEFINED__
#define __CX509AttributeCspProvider_FWD_DEFINED__
typedef struct CX509AttributeCspProvider CX509AttributeCspProvider;
#endif
#ifndef __CCryptAttribute_FWD_DEFINED__
#define __CCryptAttribute_FWD_DEFINED__
typedef struct CCryptAttribute CCryptAttribute;
#endif
#ifndef __CCryptAttributes_FWD_DEFINED__
#define __CCryptAttributes_FWD_DEFINED__
typedef struct CCryptAttributes CCryptAttributes;
#endif
#ifndef __CCertProperty_FWD_DEFINED__
#define __CCertProperty_FWD_DEFINED__
typedef struct CCertProperty CCertProperty;
#endif
#ifndef __CCertProperties_FWD_DEFINED__
#define __CCertProperties_FWD_DEFINED__
typedef struct CCertProperties CCertProperties;
#endif
#ifndef __CCertPropertyFriendlyName_FWD_DEFINED__
#define __CCertPropertyFriendlyName_FWD_DEFINED__
typedef struct CCertPropertyFriendlyName CCertPropertyFriendlyName;
#endif
#ifndef __CCertPropertyDescription_FWD_DEFINED__
#define __CCertPropertyDescription_FWD_DEFINED__
typedef struct CCertPropertyDescription CCertPropertyDescription;
#endif
#ifndef __CCertPropertyAutoEnroll_FWD_DEFINED__
#define __CCertPropertyAutoEnroll_FWD_DEFINED__
typedef struct CCertPropertyAutoEnroll CCertPropertyAutoEnroll;
#endif
#ifndef __CCertPropertyRequestOriginator_FWD_DEFINED__
#define __CCertPropertyRequestOriginator_FWD_DEFINED__
typedef struct CCertPropertyRequestOriginator CCertPropertyRequestOriginator;
#endif
#ifndef __CCertPropertySHA1Hash_FWD_DEFINED__
#define __CCertPropertySHA1Hash_FWD_DEFINED__
typedef struct CCertPropertySHA1Hash CCertPropertySHA1Hash;
#endif
#ifndef __CCertPropertyKeyProvInfo_FWD_DEFINED__
#define __CCertPropertyKeyProvInfo_FWD_DEFINED__
typedef struct CCertPropertyKeyProvInfo CCertPropertyKeyProvInfo;
#endif
#ifndef __CCertPropertyArchived_FWD_DEFINED__
#define __CCertPropertyArchived_FWD_DEFINED__
typedef struct CCertPropertyArchived CCertPropertyArchived;
#endif
#ifndef __CCertPropertyBackedUp_FWD_DEFINED__
#define __CCertPropertyBackedUp_FWD_DEFINED__
typedef struct CCertPropertyBackedUp CCertPropertyBackedUp;
#endif
#ifndef __CCertPropertyEnrollment_FWD_DEFINED__
#define __CCertPropertyEnrollment_FWD_DEFINED__
typedef struct CCertPropertyEnrollment CCertPropertyEnrollment;
#endif
#ifndef __CCertPropertyRenewal_FWD_DEFINED__
#define __CCertPropertyRenewal_FWD_DEFINED__
typedef struct CCertPropertyRenewal CCertPropertyRenewal;
#endif
#ifndef __CCertPropertyArchivedKeyHash_FWD_DEFINED__
#define __CCertPropertyArchivedKeyHash_FWD_DEFINED__
typedef struct CCertPropertyArchivedKeyHash CCertPropertyArchivedKeyHash;
#endif
#ifndef __CCertPropertyEnrollmentPolicyServer_FWD_DEFINED__
#define __CCertPropertyEnrollmentPolicyServer_FWD_DEFINED__
typedef struct CCertPropertyEnrollmentPolicyServer CCertPropertyEnrollmentPolicyServer;
#endif
#ifndef __CSignerCertificate_FWD_DEFINED__
#define __CSignerCertificate_FWD_DEFINED__
typedef struct CSignerCertificate CSignerCertificate;
#endif
#ifndef __CX509NameValuePair_FWD_DEFINED__
#define __CX509NameValuePair_FWD_DEFINED__
typedef struct CX509NameValuePair CX509NameValuePair;
#endif
#ifndef __CX509CertificateRequestPkcs10_FWD_DEFINED__
#define __CX509CertificateRequestPkcs10_FWD_DEFINED__
typedef struct CX509CertificateRequestPkcs10 CX509CertificateRequestPkcs10;
#endif
#ifndef __CX509CertificateRequestCertificate_FWD_DEFINED__
#define __CX509CertificateRequestCertificate_FWD_DEFINED__
typedef struct CX509CertificateRequestCertificate CX509CertificateRequestCertificate;
#endif
#ifndef __CX509CertificateRequestPkcs7_FWD_DEFINED__
#define __CX509CertificateRequestPkcs7_FWD_DEFINED__
typedef struct CX509CertificateRequestPkcs7 CX509CertificateRequestPkcs7;
#endif
#ifndef __CX509CertificateRequestCmc_FWD_DEFINED__
#define __CX509CertificateRequestCmc_FWD_DEFINED__
typedef struct CX509CertificateRequestCmc CX509CertificateRequestCmc;
#endif
#ifndef __CX509Enrollment_FWD_DEFINED__
#define __CX509Enrollment_FWD_DEFINED__
typedef struct CX509Enrollment CX509Enrollment;
#endif
#ifndef __CX509EnrollmentWebClassFactory_FWD_DEFINED__
#define __CX509EnrollmentWebClassFactory_FWD_DEFINED__
typedef struct CX509EnrollmentWebClassFactory CX509EnrollmentWebClassFactory;
#endif
#ifndef __CX509EnrollmentHelper_FWD_DEFINED__
#define __CX509EnrollmentHelper_FWD_DEFINED__
typedef struct CX509EnrollmentHelper CX509EnrollmentHelper;
#endif
#ifndef __CX509MachineEnrollmentFactory_FWD_DEFINED__
#define __CX509MachineEnrollmentFactory_FWD_DEFINED__
typedef struct CX509MachineEnrollmentFactory CX509MachineEnrollmentFactory;
#endif
#ifndef __CX509EnrollmentPolicyActiveDirectory_FWD_DEFINED__
#define __CX509EnrollmentPolicyActiveDirectory_FWD_DEFINED__
typedef struct CX509EnrollmentPolicyActiveDirectory CX509EnrollmentPolicyActiveDirectory;
#endif
#ifndef __CX509EnrollmentPolicyWebService_FWD_DEFINED__
#define __CX509EnrollmentPolicyWebService_FWD_DEFINED__
typedef struct CX509EnrollmentPolicyWebService CX509EnrollmentPolicyWebService;
#endif
#ifndef __CX509PolicyServerListManager_FWD_DEFINED__
#define __CX509PolicyServerListManager_FWD_DEFINED__
typedef struct CX509PolicyServerListManager CX509PolicyServerListManager;
#endif
#ifndef __CX509PolicyServerUrl_FWD_DEFINED__
#define __CX509PolicyServerUrl_FWD_DEFINED__
typedef struct CX509PolicyServerUrl CX509PolicyServerUrl;
#endif
#ifndef __CX509CertificateTemplateADWritable_FWD_DEFINED__
#define __CX509CertificateTemplateADWritable_FWD_DEFINED__
typedef struct CX509CertificateTemplateADWritable CX509CertificateTemplateADWritable;
#endif
#include "wtypes.h"
#include "oaidl.h"
#include "certcli.h"
typedef enum CERTENROLL_OBJECTID
{
	XCN_OID_NONE = 0,
	XCN_OID_RSA = 1,
	XCN_OID_PKCS = 2,
	XCN_OID_RSA_HASH = 3,
	XCN_OID_RSA_ENCRYPT = 4,
	XCN_OID_PKCS_1 = 5,
	XCN_OID_PKCS_2 = 6,
	XCN_OID_PKCS_3 = 7,
	XCN_OID_PKCS_4 = 8,
	XCN_OID_PKCS_5 = 9,
	XCN_OID_PKCS_6 = 10,
	XCN_OID_PKCS_7 = 11,
	XCN_OID_PKCS_8 = 12,
	XCN_OID_PKCS_9 = 13,
	XCN_OID_PKCS_10 = 14,
	XCN_OID_PKCS_12 = 15,
	XCN_OID_RSA_RSA = 16,
	XCN_OID_RSA_MD2RSA = 17,
	XCN_OID_RSA_MD4RSA = 18,
	XCN_OID_RSA_MD5RSA = 19,
	XCN_OID_RSA_SHA1RSA = 20,
	XCN_OID_RSA_SETOAEP_RSA = 21,
	XCN_OID_RSA_DH = 22,
	XCN_OID_RSA_data = 23,
	XCN_OID_RSA_signedData = 24,
	XCN_OID_RSA_envelopedData = 25,
	XCN_OID_RSA_signEnvData = 26,
	XCN_OID_RSA_digestedData = 27,
	XCN_OID_RSA_hashedData = 28,
	XCN_OID_RSA_encryptedData = 29,
	XCN_OID_RSA_emailAddr = 30,
	XCN_OID_RSA_unstructName = 31,
	XCN_OID_RSA_contentType = 32,
	XCN_OID_RSA_messageDigest = 33,
	XCN_OID_RSA_signingTime = 34,
	XCN_OID_RSA_counterSign = 35,
	XCN_OID_RSA_challengePwd = 36,
	XCN_OID_RSA_unstructAddr = 37,
	XCN_OID_RSA_extCertAttrs = 38,
	XCN_OID_RSA_certExtensions = 39,
	XCN_OID_RSA_SMIMECapabilities = 40,
	XCN_OID_RSA_preferSignedData = 41,
	XCN_OID_RSA_SMIMEalg = 42,
	XCN_OID_RSA_SMIMEalgESDH = 43,
	XCN_OID_RSA_SMIMEalgCMS3DESwrap = 44,
	XCN_OID_RSA_SMIMEalgCMSRC2wrap = 45,
	XCN_OID_RSA_MD2 = 46,
	XCN_OID_RSA_MD4 = 47,
	XCN_OID_RSA_MD5 = 48,
	XCN_OID_RSA_RC2CBC = 49,
	XCN_OID_RSA_RC4 = 50,
	XCN_OID_RSA_DES_EDE3_CBC = 51,
	XCN_OID_RSA_RC5_CBCPad = 52,
	XCN_OID_ANSI_X942 = 53,
	XCN_OID_ANSI_X942_DH = 54,
	XCN_OID_X957 = 55,
	XCN_OID_X957_DSA = 56,
	XCN_OID_X957_SHA1DSA = 57,
	XCN_OID_DS = 58,
	XCN_OID_DSALG = 59,
	XCN_OID_DSALG_CRPT = 60,
	XCN_OID_DSALG_HASH = 61,
	XCN_OID_DSALG_SIGN = 62,
	XCN_OID_DSALG_RSA = 63,
	XCN_OID_OIW = 64,
	XCN_OID_OIWSEC = 65,
	XCN_OID_OIWSEC_md4RSA = 66,
	XCN_OID_OIWSEC_md5RSA = 67,
	XCN_OID_OIWSEC_md4RSA2 = 68,
	XCN_OID_OIWSEC_desECB = 69,
	XCN_OID_OIWSEC_desCBC = 70,
	XCN_OID_OIWSEC_desOFB = 71,
	XCN_OID_OIWSEC_desCFB = 72,
	XCN_OID_OIWSEC_desMAC = 73,
	XCN_OID_OIWSEC_rsaSign = 74,
	XCN_OID_OIWSEC_dsa = 75,
	XCN_OID_OIWSEC_shaDSA = 76,
	XCN_OID_OIWSEC_mdc2RSA = 77,
	XCN_OID_OIWSEC_shaRSA = 78,
	XCN_OID_OIWSEC_dhCommMod = 79,
	XCN_OID_OIWSEC_desEDE = 80,
	XCN_OID_OIWSEC_sha = 81,
	XCN_OID_OIWSEC_mdc2 = 82,
	XCN_OID_OIWSEC_dsaComm = 83,
	XCN_OID_OIWSEC_dsaCommSHA = 84,
	XCN_OID_OIWSEC_rsaXchg = 85,
	XCN_OID_OIWSEC_keyHashSeal = 86,
	XCN_OID_OIWSEC_md2RSASign = 87,
	XCN_OID_OIWSEC_md5RSASign = 88,
	XCN_OID_OIWSEC_sha1 = 89,
	XCN_OID_OIWSEC_dsaSHA1 = 90,
	XCN_OID_OIWSEC_dsaCommSHA1 = 91,
	XCN_OID_OIWSEC_sha1RSASign = 92,
	XCN_OID_OIWDIR = 93,
	XCN_OID_OIWDIR_CRPT = 94,
	XCN_OID_OIWDIR_HASH = 95,
	XCN_OID_OIWDIR_SIGN = 96,
	XCN_OID_OIWDIR_md2 = 97,
	XCN_OID_OIWDIR_md2RSA = 98,
	XCN_OID_INFOSEC = 99,
	XCN_OID_INFOSEC_sdnsSignature = 100,
	XCN_OID_INFOSEC_mosaicSignature = 101,
	XCN_OID_INFOSEC_sdnsConfidentiality = 102,
	XCN_OID_INFOSEC_mosaicConfidentiality = 103,
	XCN_OID_INFOSEC_sdnsIntegrity = 104,
	XCN_OID_INFOSEC_mosaicIntegrity = 105,
	XCN_OID_INFOSEC_sdnsTokenProtection = 106,
	XCN_OID_INFOSEC_mosaicTokenProtection = 107,
	XCN_OID_INFOSEC_sdnsKeyManagement = 108,
	XCN_OID_INFOSEC_mosaicKeyManagement = 109,
	XCN_OID_INFOSEC_sdnsKMandSig = 110,
	XCN_OID_INFOSEC_mosaicKMandSig = 111,
	XCN_OID_INFOSEC_SuiteASignature = 112,
	XCN_OID_INFOSEC_SuiteAConfidentiality = 113,
	XCN_OID_INFOSEC_SuiteAIntegrity = 114,
	XCN_OID_INFOSEC_SuiteATokenProtection = 115,
	XCN_OID_INFOSEC_SuiteAKeyManagement = 116,
	XCN_OID_INFOSEC_SuiteAKMandSig = 117,
	XCN_OID_INFOSEC_mosaicUpdatedSig = 118,
	XCN_OID_INFOSEC_mosaicKMandUpdSig = 119,
	XCN_OID_INFOSEC_mosaicUpdatedInteg = 120,
	XCN_OID_COMMON_NAME = 121,
	XCN_OID_SUR_NAME = 122,
	XCN_OID_DEVICE_SERIAL_NUMBER = 123,
	XCN_OID_COUNTRY_NAME = 124,
	XCN_OID_LOCALITY_NAME = 125,
	XCN_OID_STATE_OR_PROVINCE_NAME = 126,
	XCN_OID_STREET_ADDRESS = 127,
	XCN_OID_ORGANIZATION_NAME = 128,
	XCN_OID_ORGANIZATIONAL_UNIT_NAME = 129,
	XCN_OID_TITLE = 130,
	XCN_OID_DESCRIPTION = 131,
	XCN_OID_SEARCH_GUIDE = 132,
	XCN_OID_BUSINESS_CATEGORY = 133,
	XCN_OID_POSTAL_ADDRESS = 134,
	XCN_OID_POSTAL_CODE = 135,
	XCN_OID_POST_OFFICE_BOX = 136,
	XCN_OID_PHYSICAL_DELIVERY_OFFICE_NAME = 137,
	XCN_OID_TELEPHONE_NUMBER = 138,
	XCN_OID_TELEX_NUMBER = 139,
	XCN_OID_TELETEXT_TERMINAL_IDENTIFIER = 140,
	XCN_OID_FACSIMILE_TELEPHONE_NUMBER = 141,
	XCN_OID_X21_ADDRESS = 142,
	XCN_OID_INTERNATIONAL_ISDN_NUMBER = 143,
	XCN_OID_REGISTERED_ADDRESS = 144,
	XCN_OID_DESTINATION_INDICATOR = 145,
	XCN_OID_PREFERRED_DELIVERY_METHOD = 146,
	XCN_OID_PRESENTATION_ADDRESS = 147,
	XCN_OID_SUPPORTED_APPLICATION_CONTEXT = 148,
	XCN_OID_MEMBER = 149,
	XCN_OID_OWNER = 150,
	XCN_OID_ROLE_OCCUPANT = 151,
	XCN_OID_SEE_ALSO = 152,
	XCN_OID_USER_PASSWORD = 153,
	XCN_OID_USER_CERTIFICATE = 154,
	XCN_OID_CA_CERTIFICATE = 155,
	XCN_OID_AUTHORITY_REVOCATION_LIST = 156,
	XCN_OID_CERTIFICATE_REVOCATION_LIST = 157,
	XCN_OID_CROSS_CERTIFICATE_PAIR = 158,
	XCN_OID_GIVEN_NAME = 159,
	XCN_OID_INITIALS = 160,
	XCN_OID_DN_QUALIFIER = 161,
	XCN_OID_DOMAIN_COMPONENT = 162,
	XCN_OID_PKCS_12_FRIENDLY_NAME_ATTR = 163,
	XCN_OID_PKCS_12_LOCAL_KEY_ID = 164,
	XCN_OID_PKCS_12_KEY_PROVIDER_NAME_ATTR = 165,
	XCN_OID_LOCAL_MACHINE_KEYSET = 166,
	XCN_OID_PKCS_12_EXTENDED_ATTRIBUTES = 167,
	XCN_OID_KEYID_RDN = 168,
	XCN_OID_AUTHORITY_KEY_IDENTIFIER = 169,
	XCN_OID_KEY_ATTRIBUTES = 170,
	XCN_OID_CERT_POLICIES_95 = 171,
	XCN_OID_KEY_USAGE_RESTRICTION = 172,
	XCN_OID_SUBJECT_ALT_NAME = 173,
	XCN_OID_ISSUER_ALT_NAME = 174,
	XCN_OID_BASIC_CONSTRAINTS = 175,
	XCN_OID_KEY_USAGE = 176,
	XCN_OID_PRIVATEKEY_USAGE_PERIOD = 177,
	XCN_OID_BASIC_CONSTRAINTS2 = 178,
	XCN_OID_CERT_POLICIES = 179,
	XCN_OID_ANY_CERT_POLICY = 180,
	XCN_OID_AUTHORITY_KEY_IDENTIFIER2 = 181,
	XCN_OID_SUBJECT_KEY_IDENTIFIER = 182,
	XCN_OID_SUBJECT_ALT_NAME2 = 183,
	XCN_OID_ISSUER_ALT_NAME2 = 184,
	XCN_OID_CRL_REASON_CODE = 185,
	XCN_OID_REASON_CODE_HOLD = 186,
	XCN_OID_CRL_DIST_POINTS = 187,
	XCN_OID_ENHANCED_KEY_USAGE = 188,
	XCN_OID_CRL_NUMBER = 189,
	XCN_OID_DELTA_CRL_INDICATOR = 190,
	XCN_OID_ISSUING_DIST_POINT = 191,
	XCN_OID_FRESHEST_CRL = 192,
	XCN_OID_NAME_CONSTRAINTS = 193,
	XCN_OID_POLICY_MAPPINGS = 194,
	XCN_OID_LEGACY_POLICY_MAPPINGS = 195,
	XCN_OID_POLICY_CONSTRAINTS = 196,
	XCN_OID_RENEWAL_CERTIFICATE = 197,
	XCN_OID_ENROLLMENT_NAME_VALUE_PAIR = 198,
	XCN_OID_ENROLLMENT_CSP_PROVIDER = 199,
	XCN_OID_OS_VERSION = 200,
	XCN_OID_ENROLLMENT_AGENT = 201,
	XCN_OID_PKIX = 202,
	XCN_OID_PKIX_PE = 203,
	XCN_OID_AUTHORITY_INFO_ACCESS = 204,
	XCN_OID_BIOMETRIC_EXT = 205,
	XCN_OID_LOGOTYPE_EXT = 206,
	XCN_OID_CERT_EXTENSIONS = 207,
	XCN_OID_NEXT_UPDATE_LOCATION = 208,
	XCN_OID_REMOVE_CERTIFICATE = 209,
	XCN_OID_CROSS_CERT_DIST_POINTS = 210,
	XCN_OID_CTL = 211,
	XCN_OID_SORTED_CTL = 212,
	XCN_OID_SERIALIZED = 213,
	XCN_OID_NT_PRINCIPAL_NAME = 214,
	XCN_OID_PRODUCT_UPDATE = 215,
	XCN_OID_ANY_APPLICATION_POLICY = 216,
	XCN_OID_AUTO_ENROLL_CTL_USAGE = 217,
	XCN_OID_ENROLL_CERTTYPE_EXTENSION = 218,
	XCN_OID_CERT_MANIFOLD = 219,
	XCN_OID_CERTSRV_CA_VERSION = 220,
	XCN_OID_CERTSRV_PREVIOUS_CERT_HASH = 221,
	XCN_OID_CRL_VIRTUAL_BASE = 222,
	XCN_OID_CRL_NEXT_PUBLISH = 223,
	XCN_OID_KP_CA_EXCHANGE = 224,
	XCN_OID_KP_KEY_RECOVERY_AGENT = 225,
	XCN_OID_CERTIFICATE_TEMPLATE = 226,
	XCN_OID_ENTERPRISE_OID_ROOT = 227,
	XCN_OID_RDN_DUMMY_SIGNER = 228,
	XCN_OID_APPLICATION_CERT_POLICIES = 229,
	XCN_OID_APPLICATION_POLICY_MAPPINGS = 230,
	XCN_OID_APPLICATION_POLICY_CONSTRAINTS = 231,
	XCN_OID_ARCHIVED_KEY_ATTR = 232,
	XCN_OID_CRL_SELF_CDP = 233,
	XCN_OID_REQUIRE_CERT_CHAIN_POLICY = 234,
	XCN_OID_ARCHIVED_KEY_CERT_HASH = 235,
	XCN_OID_ISSUED_CERT_HASH = 236,
	XCN_OID_DS_EMAIL_REPLICATION = 237,
	XCN_OID_REQUEST_CLIENT_INFO = 238,
	XCN_OID_ENCRYPTED_KEY_HASH = 239,
	XCN_OID_CERTSRV_CROSSCA_VERSION = 240,
	XCN_OID_NTDS_REPLICATION = 241,
	XCN_OID_SUBJECT_DIR_ATTRS = 242,
	XCN_OID_PKIX_KP = 243,
	XCN_OID_PKIX_KP_SERVER_AUTH = 244,
	XCN_OID_PKIX_KP_CLIENT_AUTH = 245,
	XCN_OID_PKIX_KP_CODE_SIGNING = 246,
	XCN_OID_PKIX_KP_EMAIL_PROTECTION = 247,
	XCN_OID_PKIX_KP_IPSEC_END_SYSTEM = 248,
	XCN_OID_PKIX_KP_IPSEC_TUNNEL = 249,
	XCN_OID_PKIX_KP_IPSEC_USER = 250,
	XCN_OID_PKIX_KP_TIMESTAMP_SIGNING = 251,
	XCN_OID_PKIX_KP_OCSP_SIGNING = 252,
	XCN_OID_PKIX_OCSP_NOCHECK = 253,
	XCN_OID_IPSEC_KP_IKE_INTERMEDIATE = 254,
	XCN_OID_KP_CTL_USAGE_SIGNING = 255,
	XCN_OID_KP_TIME_STAMP_SIGNING = 256,
	XCN_OID_SERVER_GATED_CRYPTO = 257,
	XCN_OID_SGC_NETSCAPE = 258,
	XCN_OID_KP_EFS = 259,
	XCN_OID_EFS_RECOVERY = 260,
	XCN_OID_WHQL_CRYPTO = 261,
	XCN_OID_NT5_CRYPTO = 262,
	XCN_OID_OEM_WHQL_CRYPTO = 263,
	XCN_OID_EMBEDDED_NT_CRYPTO = 264,
	XCN_OID_ROOT_LIST_SIGNER = 265,
	XCN_OID_KP_QUALIFIED_SUBORDINATION = 266,
	XCN_OID_KP_KEY_RECOVERY = 267,
	XCN_OID_KP_DOCUMENT_SIGNING = 268,
	XCN_OID_KP_LIFETIME_SIGNING = 269,
	XCN_OID_KP_MOBILE_DEVICE_SOFTWARE = 270,
	XCN_OID_KP_SMART_DISPLAY = 271,
	XCN_OID_KP_CSP_SIGNATURE = 272,
	XCN_OID_DRM = 273,
	XCN_OID_DRM_INDIVIDUALIZATION = 274,
	XCN_OID_LICENSES = 275,
	XCN_OID_LICENSE_SERVER = 276,
	XCN_OID_KP_SMARTCARD_LOGON = 277,
	XCN_OID_YESNO_TRUST_ATTR = 278,
	XCN_OID_PKIX_POLICY_QUALIFIER_CPS = 279,
	XCN_OID_PKIX_POLICY_QUALIFIER_USERNOTICE = 280,
	XCN_OID_CERT_POLICIES_95_QUALIFIER1 = 281,
	XCN_OID_PKIX_ACC_DESCR = 282,
	XCN_OID_PKIX_OCSP = 283,
	XCN_OID_PKIX_CA_ISSUERS = 284,
	XCN_OID_VERISIGN_PRIVATE_6_9 = 285,
	XCN_OID_VERISIGN_ONSITE_JURISDICTION_HASH = 286,
	XCN_OID_VERISIGN_BITSTRING_6_13 = 287,
	XCN_OID_VERISIGN_ISS_STRONG_CRYPTO = 288,
	XCN_OID_NETSCAPE = 289,
	XCN_OID_NETSCAPE_CERT_EXTENSION = 290,
	XCN_OID_NETSCAPE_CERT_TYPE = 291,
	XCN_OID_NETSCAPE_BASE_URL = 292,
	XCN_OID_NETSCAPE_REVOCATION_URL = 293,
	XCN_OID_NETSCAPE_CA_REVOCATION_URL = 294,
	XCN_OID_NETSCAPE_CERT_RENEWAL_URL = 295,
	XCN_OID_NETSCAPE_CA_POLICY_URL = 296,
	XCN_OID_NETSCAPE_SSL_SERVER_NAME = 297,
	XCN_OID_NETSCAPE_COMMENT = 298,
	XCN_OID_NETSCAPE_DATA_TYPE = 299,
	XCN_OID_NETSCAPE_CERT_SEQUENCE = 300,
	XCN_OID_CT_PKI_DATA = 301,
	XCN_OID_CT_PKI_RESPONSE = 302,
	XCN_OID_PKIX_NO_SIGNATURE = 303,
	XCN_OID_CMC = 304,
	XCN_OID_CMC_STATUS_INFO = 305,
	XCN_OID_CMC_IDENTIFICATION = 306,
	XCN_OID_CMC_IDENTITY_PROOF = 307,
	XCN_OID_CMC_DATA_RETURN = 308,
	XCN_OID_CMC_TRANSACTION_ID = 309,
	XCN_OID_CMC_SENDER_NONCE = 310,
	XCN_OID_CMC_RECIPIENT_NONCE = 311,
	XCN_OID_CMC_ADD_EXTENSIONS = 312,
	XCN_OID_CMC_ENCRYPTED_POP = 313,
	XCN_OID_CMC_DECRYPTED_POP = 314,
	XCN_OID_CMC_LRA_POP_WITNESS = 315,
	XCN_OID_CMC_GET_CERT = 316,
	XCN_OID_CMC_GET_CRL = 317,
	XCN_OID_CMC_REVOKE_REQUEST = 318,
	XCN_OID_CMC_REG_INFO = 319,
	XCN_OID_CMC_RESPONSE_INFO = 320,
	XCN_OID_CMC_QUERY_PENDING = 321,
	XCN_OID_CMC_ID_POP_LINK_RANDOM = 322,
	XCN_OID_CMC_ID_POP_LINK_WITNESS = 323,
	XCN_OID_CMC_ID_CONFIRM_CERT_ACCEPTANCE = 324,
	XCN_OID_CMC_ADD_ATTRIBUTES = 325,
	XCN_OID_LOYALTY_OTHER_LOGOTYPE = 326,
	XCN_OID_BACKGROUND_OTHER_LOGOTYPE = 327,
	XCN_OID_PKIX_OCSP_BASIC_SIGNED_RESPONSE = 328,
	XCN_OID_PKCS_7_DATA = 329,
	XCN_OID_PKCS_7_SIGNED = 330,
	XCN_OID_PKCS_7_ENVELOPED = 331,
	XCN_OID_PKCS_7_SIGNEDANDENVELOPED = 332,
	XCN_OID_PKCS_7_DIGESTED = 333,
	XCN_OID_PKCS_7_ENCRYPTED = 334,
	XCN_OID_PKCS_9_CONTENT_TYPE = 335,
	XCN_OID_PKCS_9_MESSAGE_DIGEST = 336,
	XCN_OID_CERT_PROP_ID_PREFIX = 337,
	XCN_OID_CERT_KEY_IDENTIFIER_PROP_ID = 338,
	XCN_OID_CERT_ISSUER_SERIAL_NUMBER_MD5_HASH_PROP_ID = 339,
	XCN_OID_CERT_SUBJECT_NAME_MD5_HASH_PROP_ID = 340,
	XCN_OID_CERT_MD5_HASH_PROP_ID = 341,
	XCN_OID_RSA_SHA256RSA = 342,
	XCN_OID_RSA_SHA384RSA = 343,
	XCN_OID_RSA_SHA512RSA = 344,
	XCN_OID_NIST_sha256 = 345,
	XCN_OID_NIST_sha384 = 346,
	XCN_OID_NIST_sha512 = 347,
	XCN_OID_RSA_MGF1 = 348,
	XCN_OID_ECC_PUBLIC_KEY = 349,
	XCN_OID_RSA_SSA_PSS = 353,
	XCN_OID_ECDSA_SHA1 = 354,
	XCN_OID_ECDSA_SPECIFIED = 354
} CERTENROLL_OBJECTID;
typedef enum WebSecurityLevel
{
	LevelUnsafe = 0,
	LevelSafe = 1
} WebSecurityLevel;
#define	CERTENROLL_INDEX_BASE	( 0 )
typedef enum EncodingType
{
	XCN_CRYPT_STRING_BASE64HEADER = 0,
	XCN_CRYPT_STRING_BASE64 = 0x1,
	XCN_CRYPT_STRING_BINARY = 0x2,
	XCN_CRYPT_STRING_BASE64REQUESTHEADER = 0x3,
	XCN_CRYPT_STRING_HEX = 0x4,
	XCN_CRYPT_STRING_HEXASCII = 0x5,
	XCN_CRYPT_STRING_BASE64_ANY = 0x6,
	XCN_CRYPT_STRING_ANY = 0x7,
	XCN_CRYPT_STRING_HEX_ANY = 0x8,
	XCN_CRYPT_STRING_BASE64X509CRLHEADER = 0x9,
	XCN_CRYPT_STRING_HEXADDR = 0xa,
	XCN_CRYPT_STRING_HEXASCIIADDR = 0xb,
	XCN_CRYPT_STRING_HEXRAW = 0xc,
	XCN_CRYPT_STRING_HASHDATA = 0x10000000,
	XCN_CRYPT_STRING_STRICT = 0x20000000,
	XCN_CRYPT_STRING_NOCRLF = 0x40000000,
	XCN_CRYPT_STRING_NOCR = 0x80000000
} EncodingType;
typedef enum PFXExportOptions
{
	PFXExportEEOnly = 0,
	PFXExportChainNoRoot = 1,
	PFXExportChainWithRoot = 2
} PFXExportOptions;
typedef enum ObjectIdGroupId
{
	XCN_CRYPT_ANY_GROUP_ID = 0,
	XCN_CRYPT_HASH_ALG_OID_GROUP_ID = 1,
	XCN_CRYPT_ENCRYPT_ALG_OID_GROUP_ID = 2,
	XCN_CRYPT_PUBKEY_ALG_OID_GROUP_ID = 3,
	XCN_CRYPT_SIGN_ALG_OID_GROUP_ID = 4,
	XCN_CRYPT_RDN_ATTR_OID_GROUP_ID = 5,
	XCN_CRYPT_EXT_OR_ATTR_OID_GROUP_ID = 6,
	XCN_CRYPT_ENHKEY_USAGE_OID_GROUP_ID = 7,
	XCN_CRYPT_POLICY_OID_GROUP_ID = 8,
	XCN_CRYPT_TEMPLATE_OID_GROUP_ID = 9,
	XCN_CRYPT_LAST_OID_GROUP_ID = 10,
	XCN_CRYPT_FIRST_ALG_OID_GROUP_ID = 1,
	XCN_CRYPT_LAST_ALG_OID_GROUP_ID = 4,
	XCN_CRYPT_GROUP_ID_MASK = 0xffff,
	XCN_CRYPT_OID_PREFER_CNG_ALGID_FLAG = 0x40000000,
	XCN_CRYPT_OID_DISABLE_SEARCH_DS_FLAG = 0x80000000,
	XCN_CRYPT_OID_INFO_OID_GROUP_BIT_LEN_MASK = 0xfff0000,
	XCN_CRYPT_OID_INFO_OID_GROUP_BIT_LEN_SHIFT = 16,
	XCN_CRYPT_KEY_LENGTH_MASK = 0xfff0000
} ObjectIdGroupId;
typedef enum ObjectIdPublicKeyFlags
{
	XCN_CRYPT_OID_INFO_PUBKEY_ANY = 0,
	XCN_CRYPT_OID_INFO_PUBKEY_SIGN_KEY_FLAG = 0x80000000,
	XCN_CRYPT_OID_INFO_PUBKEY_ENCRYPT_KEY_FLAG = 0x40000000
} ObjectIdPublicKeyFlags;
typedef enum AlgorithmFlags
{
	AlgorithmFlagsNone = 0,
	AlgorithmFlagsWrap = 0x1
} AlgorithmFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0000_v0_0_s_ifspec;
#ifndef __IObjectId_INTERFACE_DEFINED__
#define __IObjectId_INTERFACE_DEFINED__
extern const IID IID_IObjectId;
typedef struct IObjectIdVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IObjectId * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IObjectId * This);
	ULONG(STDMETHODCALLTYPE * Release) (IObjectId * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IObjectId * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IObjectId * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IObjectId * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IObjectId * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromName) (IObjectId * This, CERTENROLL_OBJECTID Name);
	HRESULT(STDMETHODCALLTYPE * InitializeFromValue) (IObjectId * This, BSTR strValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromAlgorithmName) (IObjectId * This, ObjectIdGroupId GroupId, ObjectIdPublicKeyFlags KeyFlags, AlgorithmFlags AlgFlags, BSTR strAlgorithmName);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IObjectId * This, CERTENROLL_OBJECTID * pValue);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IObjectId * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IObjectId * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IObjectId * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetAlgorithmName) (IObjectId * This, ObjectIdGroupId GroupId, ObjectIdPublicKeyFlags KeyFlags, BSTR * pstrAlgorithmName);
	END_INTERFACE
}  IObjectIdVtbl;
interface IObjectId
{
	CONST_VTBL struct IObjectIdVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectId_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectId_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectId_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectId_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IObjectId_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IObjectId_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IObjectId_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IObjectId_InitializeFromName(This,Name)( (This)->lpVtbl -> InitializeFromName(This,Name) )
#define IObjectId_InitializeFromValue(This,strValue)( (This)->lpVtbl -> InitializeFromValue(This,strValue) )
#define IObjectId_InitializeFromAlgorithmName(This,GroupId,KeyFlags,AlgFlags,strAlgorithmName)( (This)->lpVtbl -> InitializeFromAlgorithmName(This,GroupId,KeyFlags,AlgFlags,strAlgorithmName) )
#define IObjectId_get_Name(This,pValue)( (This)->lpVtbl -> get_Name(This,pValue) )
#define IObjectId_get_FriendlyName(This,pValue)( (This)->lpVtbl -> get_FriendlyName(This,pValue) )
#define IObjectId_put_FriendlyName(This,Value)( (This)->lpVtbl -> put_FriendlyName(This,Value) )
#define IObjectId_get_Value(This,pValue)( (This)->lpVtbl -> get_Value(This,pValue) )
#define IObjectId_GetAlgorithmName(This,GroupId,KeyFlags,pstrAlgorithmName)( (This)->lpVtbl -> GetAlgorithmName(This,GroupId,KeyFlags,pstrAlgorithmName) )
#endif
#endif
#ifndef __IObjectIds_INTERFACE_DEFINED__
#define __IObjectIds_INTERFACE_DEFINED__
extern const IID IID_IObjectIds;
typedef struct IObjectIdsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IObjectIds * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IObjectIds * This);
	ULONG(STDMETHODCALLTYPE * Release) (IObjectIds * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IObjectIds * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IObjectIds * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IObjectIds * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IObjectIds * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (IObjectIds * This, LONG Index, IObjectId ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IObjectIds * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IObjectIds * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (IObjectIds * This, IObjectId * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (IObjectIds * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (IObjectIds * This);
	HRESULT(STDMETHODCALLTYPE * AddRange) (IObjectIds * This, IObjectIds * pValue);
	END_INTERFACE
}  IObjectIdsVtbl;
interface IObjectIds
{
	CONST_VTBL struct IObjectIdsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IObjectIds_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IObjectIds_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IObjectIds_Release(This)( (This)->lpVtbl -> Release(This) )
#define IObjectIds_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IObjectIds_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IObjectIds_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IObjectIds_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IObjectIds_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define IObjectIds_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IObjectIds_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IObjectIds_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define IObjectIds_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define IObjectIds_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define IObjectIds_AddRange(This,pValue)( (This)->lpVtbl -> AddRange(This,pValue) )
#endif
#endif
#ifndef __IBinaryConverter_INTERFACE_DEFINED__
#define __IBinaryConverter_INTERFACE_DEFINED__
extern const IID IID_IBinaryConverter;
typedef struct IBinaryConverterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBinaryConverter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBinaryConverter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBinaryConverter * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IBinaryConverter * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IBinaryConverter * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IBinaryConverter * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IBinaryConverter * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * StringToString) (IBinaryConverter * This, BSTR strEncodedIn, EncodingType EncodingIn, EncodingType Encoding, BSTR * pstrEncoded);
	HRESULT(STDMETHODCALLTYPE * VariantByteArrayToString) (IBinaryConverter * This, VARIANT * pvarByteArray, EncodingType Encoding, BSTR * pstrEncoded);
	HRESULT(STDMETHODCALLTYPE * StringToVariantByteArray) (IBinaryConverter * This, BSTR strEncoded, EncodingType Encoding, VARIANT * pvarByteArray);
	END_INTERFACE
}  IBinaryConverterVtbl;
interface IBinaryConverter
{
	CONST_VTBL struct IBinaryConverterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBinaryConverter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBinaryConverter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBinaryConverter_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBinaryConverter_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IBinaryConverter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IBinaryConverter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IBinaryConverter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IBinaryConverter_StringToString(This,strEncodedIn,EncodingIn,Encoding,pstrEncoded)( (This)->lpVtbl -> StringToString(This,strEncodedIn,EncodingIn,Encoding,pstrEncoded) )
#define IBinaryConverter_VariantByteArrayToString(This,pvarByteArray,Encoding,pstrEncoded)( (This)->lpVtbl -> VariantByteArrayToString(This,pvarByteArray,Encoding,pstrEncoded) )
#define IBinaryConverter_StringToVariantByteArray(This,strEncoded,Encoding,pvarByteArray)( (This)->lpVtbl -> StringToVariantByteArray(This,strEncoded,Encoding,pvarByteArray) )
#endif
#endif
typedef enum X500NameFlags
{
	XCN_CERT_NAME_STR_NONE = 0,
	XCN_CERT_SIMPLE_NAME_STR = 1,
	XCN_CERT_OID_NAME_STR = 2,
	XCN_CERT_X500_NAME_STR = 3,
	XCN_CERT_XML_NAME_STR = 4,
	XCN_CERT_NAME_STR_SEMICOLON_FLAG = 0x40000000,
	XCN_CERT_NAME_STR_NO_PLUS_FLAG = 0x20000000,
	XCN_CERT_NAME_STR_NO_QUOTING_FLAG = 0x10000000,
	XCN_CERT_NAME_STR_CRLF_FLAG = 0x8000000,
	XCN_CERT_NAME_STR_COMMA_FLAG = 0x4000000,
	XCN_CERT_NAME_STR_REVERSE_FLAG = 0x2000000,
	XCN_CERT_NAME_STR_FORWARD_FLAG = 0x1000000,
	XCN_CERT_NAME_STR_DISABLE_IE4_UTF8_FLAG = 0x10000,
	XCN_CERT_NAME_STR_ENABLE_T61_UNICODE_FLAG = 0x20000,
	XCN_CERT_NAME_STR_ENABLE_UTF8_UNICODE_FLAG = 0x40000,
	XCN_CERT_NAME_STR_FORCE_UTF8_DIR_STR_FLAG = 0x80000,
	XCN_CERT_NAME_STR_DISABLE_UTF8_DIR_STR_FLAG = 0x100000,
	XCN_CERT_NAME_STR_ENABLE_PUNYCODE_FLAG = 0x200000
} X500NameFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0003_v0_0_s_ifspec;
#ifndef __IX500DistinguishedName_INTERFACE_DEFINED__
#define __IX500DistinguishedName_INTERFACE_DEFINED__
extern const IID IID_IX500DistinguishedName;
typedef struct IX500DistinguishedNameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX500DistinguishedName * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX500DistinguishedName * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX500DistinguishedName * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX500DistinguishedName * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX500DistinguishedName * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX500DistinguishedName * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX500DistinguishedName * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Decode) (IX500DistinguishedName * This, BSTR strEncodedName, EncodingType Encoding, X500NameFlags NameFlags);
	HRESULT(STDMETHODCALLTYPE * Encode) (IX500DistinguishedName * This, BSTR strName, X500NameFlags NameFlags);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IX500DistinguishedName * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EncodedName) (IX500DistinguishedName * This, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  IX500DistinguishedNameVtbl;
interface IX500DistinguishedName
{
	CONST_VTBL struct IX500DistinguishedNameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX500DistinguishedName_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX500DistinguishedName_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX500DistinguishedName_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX500DistinguishedName_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX500DistinguishedName_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX500DistinguishedName_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX500DistinguishedName_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX500DistinguishedName_Decode(This,strEncodedName,Encoding,NameFlags)( (This)->lpVtbl -> Decode(This,strEncodedName,Encoding,NameFlags) )
#define IX500DistinguishedName_Encode(This,strName,NameFlags)( (This)->lpVtbl -> Encode(This,strName,NameFlags) )
#define IX500DistinguishedName_get_Name(This,pValue)( (This)->lpVtbl -> get_Name(This,pValue) )
#define IX500DistinguishedName_get_EncodedName(This,Encoding,pValue)( (This)->lpVtbl -> get_EncodedName(This,Encoding,pValue) )
#endif
#endif
typedef enum X509CertificateEnrollmentContext
{
	ContextUser = 0x1,
	ContextMachine = 0x2,
	ContextAdministratorForceMachine = 0x3
} X509CertificateEnrollmentContext;
typedef enum EnrollmentEnrollStatus
{
	Enrolled = 0x1,
	EnrollPended = 0x2,
	EnrollUIDeferredEnrollmentRequired = 0x4,
	EnrollError = 0x10,
	EnrollUnknown = 0x20,
	EnrollSkipped = 0x40,
	EnrollDenied = 0x100
} EnrollmentEnrollStatus;
typedef enum EnrollmentSelectionStatus
{
	SelectedNo = 0,
	SelectedYes = 1
} EnrollmentSelectionStatus;
typedef enum EnrollmentDisplayStatus
{
	DisplayNo = 0,
	DisplayYes = 1
} EnrollmentDisplayStatus;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0004_v0_0_s_ifspec;
#ifndef __IX509EnrollmentStatus_INTERFACE_DEFINED__
#define __IX509EnrollmentStatus_INTERFACE_DEFINED__
extern const IID IID_IX509EnrollmentStatus;
typedef struct IX509EnrollmentStatusVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509EnrollmentStatus * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509EnrollmentStatus * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509EnrollmentStatus * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509EnrollmentStatus * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509EnrollmentStatus * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509EnrollmentStatus * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509EnrollmentStatus * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * AppendText) (IX509EnrollmentStatus * This, BSTR strText);
	HRESULT(STDMETHODCALLTYPE * get_Text) (IX509EnrollmentStatus * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Text) (IX509EnrollmentStatus * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_Selected) (IX509EnrollmentStatus * This, EnrollmentSelectionStatus * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Selected) (IX509EnrollmentStatus * This, EnrollmentSelectionStatus Value);
	HRESULT(STDMETHODCALLTYPE * get_Display) (IX509EnrollmentStatus * This, EnrollmentDisplayStatus * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Display) (IX509EnrollmentStatus * This, EnrollmentDisplayStatus Value);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IX509EnrollmentStatus * This, EnrollmentEnrollStatus * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Status) (IX509EnrollmentStatus * This, EnrollmentEnrollStatus Value);
	HRESULT(STDMETHODCALLTYPE * get_Error) (IX509EnrollmentStatus * This, HRESULT * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Error) (IX509EnrollmentStatus * This, HRESULT Value);
	HRESULT(STDMETHODCALLTYPE * get_ErrorText) (IX509EnrollmentStatus * This, BSTR * pValue);
	END_INTERFACE
}  IX509EnrollmentStatusVtbl;
interface IX509EnrollmentStatus
{
	CONST_VTBL struct IX509EnrollmentStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509EnrollmentStatus_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509EnrollmentStatus_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509EnrollmentStatus_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509EnrollmentStatus_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509EnrollmentStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509EnrollmentStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509EnrollmentStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509EnrollmentStatus_AppendText(This,strText)( (This)->lpVtbl -> AppendText(This,strText) )
#define IX509EnrollmentStatus_get_Text(This,pValue)( (This)->lpVtbl -> get_Text(This,pValue) )
#define IX509EnrollmentStatus_put_Text(This,Value)( (This)->lpVtbl -> put_Text(This,Value) )
#define IX509EnrollmentStatus_get_Selected(This,pValue)( (This)->lpVtbl -> get_Selected(This,pValue) )
#define IX509EnrollmentStatus_put_Selected(This,Value)( (This)->lpVtbl -> put_Selected(This,Value) )
#define IX509EnrollmentStatus_get_Display(This,pValue)( (This)->lpVtbl -> get_Display(This,pValue) )
#define IX509EnrollmentStatus_put_Display(This,Value)( (This)->lpVtbl -> put_Display(This,Value) )
#define IX509EnrollmentStatus_get_Status(This,pValue)( (This)->lpVtbl -> get_Status(This,pValue) )
#define IX509EnrollmentStatus_put_Status(This,Value)( (This)->lpVtbl -> put_Status(This,Value) )
#define IX509EnrollmentStatus_get_Error(This,pValue)( (This)->lpVtbl -> get_Error(This,pValue) )
#define IX509EnrollmentStatus_put_Error(This,Value)( (This)->lpVtbl -> put_Error(This,Value) )
#define IX509EnrollmentStatus_get_ErrorText(This,pValue)( (This)->lpVtbl -> get_ErrorText(This,pValue) )
#endif
#endif
typedef enum X509ProviderType
{
	XCN_PROV_NONE = 0,
	XCN_PROV_RSA_FULL = 1,
	XCN_PROV_RSA_SIG = 2,
	XCN_PROV_DSS = 3,
	XCN_PROV_FORTEZZA = 4,
	XCN_PROV_MS_EXCHANGE = 5,
	XCN_PROV_SSL = 6,
	XCN_PROV_RSA_SCHANNEL = 12,
	XCN_PROV_DSS_DH = 13,
	XCN_PROV_EC_ECDSA_SIG = 14,
	XCN_PROV_EC_ECNRA_SIG = 15,
	XCN_PROV_EC_ECDSA_FULL = 16,
	XCN_PROV_EC_ECNRA_FULL = 17,
	XCN_PROV_DH_SCHANNEL = 18,
	XCN_PROV_SPYRUS_LYNKS = 20,
	XCN_PROV_RNG = 21,
	XCN_PROV_INTEL_SEC = 22,
	XCN_PROV_REPLACE_OWF = 23,
	XCN_PROV_RSA_AES = 24
} X509ProviderType;
typedef enum AlgorithmType
{
	XCN_BCRYPT_UNKNOWN_INTERFACE = 0,
	XCN_BCRYPT_SIGNATURE_INTERFACE = 0x5,
	XCN_BCRYPT_ASYMMETRIC_ENCRYPTION_INTERFACE = 0x3,
	XCN_BCRYPT_CIPHER_INTERFACE = 0x1,
	XCN_BCRYPT_HASH_INTERFACE = 0x2,
	XCN_BCRYPT_SECRET_AGREEMENT_INTERFACE = 0x4,
	XCN_BCRYPT_RNG_INTERFACE = 0x6
} AlgorithmType;
typedef enum AlgorithmOperationFlags
{
	XCN_NCRYPT_NO_OPERATION = 0,
	XCN_NCRYPT_CIPHER_OPERATION = 0x1,
	XCN_NCRYPT_HASH_OPERATION = 0x2,
	XCN_NCRYPT_ASYMMETRIC_ENCRYPTION_OPERATION = 0x4,
	XCN_NCRYPT_SECRET_AGREEMENT_OPERATION = 0x8,
	XCN_NCRYPT_SIGNATURE_OPERATION = 0x10,
	XCN_NCRYPT_RNG_OPERATION = 0x20,
	XCN_NCRYPT_ANY_ASYMMETRIC_OPERATION = ((0x4 | 0x8) | 0x10),
	XCN_NCRYPT_PREFER_SIGNATURE_ONLY_OPERATION = 0x200000,
	XCN_NCRYPT_PREFER_NON_SIGNATURE_OPERATION = 0x400000,
	XCN_NCRYPT_EXACT_MATCH_OPERATION = 0x800000,
	XCN_NCRYPT_PREFERENCE_MASK_OPERATION = 0xe00000
} AlgorithmOperationFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0005_v0_0_s_ifspec;
#ifndef __ICspAlgorithm_INTERFACE_DEFINED__
#define __ICspAlgorithm_INTERFACE_DEFINED__
extern const IID IID_ICspAlgorithm;
typedef struct ICspAlgorithmVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICspAlgorithm * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICspAlgorithm * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICspAlgorithm * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICspAlgorithm * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICspAlgorithm * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICspAlgorithm * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICspAlgorithm * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetAlgorithmOid) (ICspAlgorithm * This, LONG Length, AlgorithmFlags AlgFlags, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_DefaultLength) (ICspAlgorithm * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * get_IncrementLength) (ICspAlgorithm * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * get_LongName) (ICspAlgorithm * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Valid) (ICspAlgorithm * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_MaxLength) (ICspAlgorithm * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * get_MinLength) (ICspAlgorithm * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ICspAlgorithm * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Type) (ICspAlgorithm * This, AlgorithmType * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Operations) (ICspAlgorithm * This, AlgorithmOperationFlags * pValue);
	END_INTERFACE
}  ICspAlgorithmVtbl;
interface ICspAlgorithm
{
	CONST_VTBL struct ICspAlgorithmVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICspAlgorithm_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICspAlgorithm_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICspAlgorithm_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICspAlgorithm_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICspAlgorithm_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICspAlgorithm_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICspAlgorithm_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICspAlgorithm_GetAlgorithmOid(This,Length,AlgFlags,ppValue)( (This)->lpVtbl -> GetAlgorithmOid(This,Length,AlgFlags,ppValue) )
#define ICspAlgorithm_get_DefaultLength(This,pValue)( (This)->lpVtbl -> get_DefaultLength(This,pValue) )
#define ICspAlgorithm_get_IncrementLength(This,pValue)( (This)->lpVtbl -> get_IncrementLength(This,pValue) )
#define ICspAlgorithm_get_LongName(This,pValue)( (This)->lpVtbl -> get_LongName(This,pValue) )
#define ICspAlgorithm_get_Valid(This,pValue)( (This)->lpVtbl -> get_Valid(This,pValue) )
#define ICspAlgorithm_get_MaxLength(This,pValue)( (This)->lpVtbl -> get_MaxLength(This,pValue) )
#define ICspAlgorithm_get_MinLength(This,pValue)( (This)->lpVtbl -> get_MinLength(This,pValue) )
#define ICspAlgorithm_get_Name(This,pValue)( (This)->lpVtbl -> get_Name(This,pValue) )
#define ICspAlgorithm_get_Type(This,pValue)( (This)->lpVtbl -> get_Type(This,pValue) )
#define ICspAlgorithm_get_Operations(This,pValue)( (This)->lpVtbl -> get_Operations(This,pValue) )
#endif
#endif
#ifndef __ICspAlgorithms_INTERFACE_DEFINED__
#define __ICspAlgorithms_INTERFACE_DEFINED__
extern const IID IID_ICspAlgorithms;
typedef struct ICspAlgorithmsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICspAlgorithms * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICspAlgorithms * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICspAlgorithms * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICspAlgorithms * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICspAlgorithms * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICspAlgorithms * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICspAlgorithms * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (ICspAlgorithms * This, LONG Index, ICspAlgorithm ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ICspAlgorithms * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ICspAlgorithms * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (ICspAlgorithms * This, ICspAlgorithm * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (ICspAlgorithms * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (ICspAlgorithms * This);
	HRESULT(STDMETHODCALLTYPE * get_ItemByName) (ICspAlgorithms * This, BSTR strName, ICspAlgorithm ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_IndexByObjectId) (ICspAlgorithms * This, IObjectId * pObjectId, LONG * pIndex);
	END_INTERFACE
}  ICspAlgorithmsVtbl;
interface ICspAlgorithms
{
	CONST_VTBL struct ICspAlgorithmsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICspAlgorithms_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICspAlgorithms_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICspAlgorithms_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICspAlgorithms_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICspAlgorithms_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICspAlgorithms_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICspAlgorithms_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICspAlgorithms_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define ICspAlgorithms_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define ICspAlgorithms_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define ICspAlgorithms_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define ICspAlgorithms_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define ICspAlgorithms_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define ICspAlgorithms_get_ItemByName(This,strName,ppValue)( (This)->lpVtbl -> get_ItemByName(This,strName,ppValue) )
#define ICspAlgorithms_get_IndexByObjectId(This,pObjectId,pIndex)( (This)->lpVtbl -> get_IndexByObjectId(This,pObjectId,pIndex) )
#endif
#endif
typedef enum X509KeySpec
{
	XCN_AT_NONE = 0,
	XCN_AT_KEYEXCHANGE = 1,
	XCN_AT_SIGNATURE = 2
} X509KeySpec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0007_v0_0_s_ifspec;
#ifndef __ICspInformation_INTERFACE_DEFINED__
#define __ICspInformation_INTERFACE_DEFINED__
extern const IID IID_ICspInformation;
typedef struct ICspInformationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICspInformation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICspInformation * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICspInformation * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICspInformation * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICspInformation * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICspInformation * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICspInformation * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromName) (ICspInformation * This, BSTR strName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromType) (ICspInformation * This, X509ProviderType Type, IObjectId * pAlgorithm, VARIANT_BOOL MachineContext);
	HRESULT(STDMETHODCALLTYPE * get_CspAlgorithms) (ICspInformation * This, ICspAlgorithms ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_HasHardwareRandomNumberGenerator) (ICspInformation * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_IsHardwareDevice) (ICspInformation * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_IsRemovable) (ICspInformation * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_IsSoftwareDevice) (ICspInformation * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Valid) (ICspInformation * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_MaxKeyContainerNameLength) (ICspInformation * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ICspInformation * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Type) (ICspInformation * This, X509ProviderType * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Version) (ICspInformation * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * get_KeySpec) (ICspInformation * This, X509KeySpec * pValue);
	HRESULT(STDMETHODCALLTYPE * get_IsSmartCard) (ICspInformation * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * GetDefaultSecurityDescriptor) (ICspInformation * This, VARIANT_BOOL MachineContext, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_LegacyCsp) (ICspInformation * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * GetCspStatusFromOperations) (ICspInformation * This, IObjectId * pAlgorithm, AlgorithmOperationFlags Operations, ICspStatus ** ppValue);
	END_INTERFACE
}  ICspInformationVtbl;
interface ICspInformation
{
	CONST_VTBL struct ICspInformationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICspInformation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICspInformation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICspInformation_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICspInformation_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICspInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICspInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICspInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICspInformation_InitializeFromName(This,strName)( (This)->lpVtbl -> InitializeFromName(This,strName) )
#define ICspInformation_InitializeFromType(This,Type,pAlgorithm,MachineContext)( (This)->lpVtbl -> InitializeFromType(This,Type,pAlgorithm,MachineContext) )
#define ICspInformation_get_CspAlgorithms(This,ppValue)( (This)->lpVtbl -> get_CspAlgorithms(This,ppValue) )
#define ICspInformation_get_HasHardwareRandomNumberGenerator(This,pValue)( (This)->lpVtbl -> get_HasHardwareRandomNumberGenerator(This,pValue) )
#define ICspInformation_get_IsHardwareDevice(This,pValue)( (This)->lpVtbl -> get_IsHardwareDevice(This,pValue) )
#define ICspInformation_get_IsRemovable(This,pValue)( (This)->lpVtbl -> get_IsRemovable(This,pValue) )
#define ICspInformation_get_IsSoftwareDevice(This,pValue)( (This)->lpVtbl -> get_IsSoftwareDevice(This,pValue) )
#define ICspInformation_get_Valid(This,pValue)( (This)->lpVtbl -> get_Valid(This,pValue) )
#define ICspInformation_get_MaxKeyContainerNameLength(This,pValue)( (This)->lpVtbl -> get_MaxKeyContainerNameLength(This,pValue) )
#define ICspInformation_get_Name(This,pValue)( (This)->lpVtbl -> get_Name(This,pValue) )
#define ICspInformation_get_Type(This,pValue)( (This)->lpVtbl -> get_Type(This,pValue) )
#define ICspInformation_get_Version(This,pValue)( (This)->lpVtbl -> get_Version(This,pValue) )
#define ICspInformation_get_KeySpec(This,pValue)( (This)->lpVtbl -> get_KeySpec(This,pValue) )
#define ICspInformation_get_IsSmartCard(This,pValue)( (This)->lpVtbl -> get_IsSmartCard(This,pValue) )
#define ICspInformation_GetDefaultSecurityDescriptor(This,MachineContext,pValue)( (This)->lpVtbl -> GetDefaultSecurityDescriptor(This,MachineContext,pValue) )
#define ICspInformation_get_LegacyCsp(This,pValue)( (This)->lpVtbl -> get_LegacyCsp(This,pValue) )
#define ICspInformation_GetCspStatusFromOperations(This,pAlgorithm,Operations,ppValue)( (This)->lpVtbl -> GetCspStatusFromOperations(This,pAlgorithm,Operations,ppValue) )
#endif
#endif
#ifndef __ICspInformations_INTERFACE_DEFINED__
#define __ICspInformations_INTERFACE_DEFINED__
extern const IID IID_ICspInformations;
typedef struct ICspInformationsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICspInformations * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICspInformations * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICspInformations * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICspInformations * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICspInformations * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICspInformations * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICspInformations * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (ICspInformations * This, LONG Index, ICspInformation ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ICspInformations * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ICspInformations * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (ICspInformations * This, ICspInformation * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (ICspInformations * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (ICspInformations * This);
	HRESULT(STDMETHODCALLTYPE * AddAvailableCsps) (ICspInformations * This);
	HRESULT(STDMETHODCALLTYPE * get_ItemByName) (ICspInformations * This, BSTR strName, ICspInformation ** ppCspInformation);
	HRESULT(STDMETHODCALLTYPE * GetCspStatusFromProviderName) (ICspInformations * This, BSTR strProviderName, X509KeySpec LegacyKeySpec, ICspStatus ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetCspStatusesFromOperations) (ICspInformations * This, AlgorithmOperationFlags Operations, ICspInformation * pCspInformation, ICspStatuses ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetEncryptionCspAlgorithms) (ICspInformations * This, ICspInformation * pCspInformation, ICspAlgorithms ** ppValue);
	HRESULT(STDMETHODCALLTYPE * GetHashAlgorithms) (ICspInformations * This, ICspInformation * pCspInformation, IObjectIds ** ppValue);
	END_INTERFACE
}  ICspInformationsVtbl;
interface ICspInformations
{
	CONST_VTBL struct ICspInformationsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICspInformations_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICspInformations_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICspInformations_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICspInformations_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICspInformations_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICspInformations_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICspInformations_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICspInformations_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define ICspInformations_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define ICspInformations_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define ICspInformations_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define ICspInformations_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define ICspInformations_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define ICspInformations_AddAvailableCsps(This)( (This)->lpVtbl -> AddAvailableCsps(This) )
#define ICspInformations_get_ItemByName(This,strName,ppCspInformation)( (This)->lpVtbl -> get_ItemByName(This,strName,ppCspInformation) )
#define ICspInformations_GetCspStatusFromProviderName(This,strProviderName,LegacyKeySpec,ppValue)( (This)->lpVtbl -> GetCspStatusFromProviderName(This,strProviderName,LegacyKeySpec,ppValue) )
#define ICspInformations_GetCspStatusesFromOperations(This,Operations,pCspInformation,ppValue)( (This)->lpVtbl -> GetCspStatusesFromOperations(This,Operations,pCspInformation,ppValue) )
#define ICspInformations_GetEncryptionCspAlgorithms(This,pCspInformation,ppValue)( (This)->lpVtbl -> GetEncryptionCspAlgorithms(This,pCspInformation,ppValue) )
#define ICspInformations_GetHashAlgorithms(This,pCspInformation,ppValue)( (This)->lpVtbl -> GetHashAlgorithms(This,pCspInformation,ppValue) )
#endif
#endif
#ifndef __ICspStatus_INTERFACE_DEFINED__
#define __ICspStatus_INTERFACE_DEFINED__
extern const IID IID_ICspStatus;
typedef struct ICspStatusVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICspStatus * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICspStatus * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICspStatus * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICspStatus * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICspStatus * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICspStatus * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICspStatus * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICspStatus * This, ICspInformation * pCsp, ICspAlgorithm * pAlgorithm);
	HRESULT(STDMETHODCALLTYPE * get_Ordinal) (ICspStatus * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Ordinal) (ICspStatus * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_CspAlgorithm) (ICspStatus * This, ICspAlgorithm ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_CspInformation) (ICspStatus * This, ICspInformation ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_EnrollmentStatus) (ICspStatus * This, IX509EnrollmentStatus ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_DisplayName) (ICspStatus * This, BSTR * pValue);
	END_INTERFACE
}  ICspStatusVtbl;
interface ICspStatus
{
	CONST_VTBL struct ICspStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICspStatus_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICspStatus_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICspStatus_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICspStatus_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICspStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICspStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICspStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICspStatus_Initialize(This,pCsp,pAlgorithm)( (This)->lpVtbl -> Initialize(This,pCsp,pAlgorithm) )
#define ICspStatus_get_Ordinal(This,pValue)( (This)->lpVtbl -> get_Ordinal(This,pValue) )
#define ICspStatus_put_Ordinal(This,Value)( (This)->lpVtbl -> put_Ordinal(This,Value) )
#define ICspStatus_get_CspAlgorithm(This,ppValue)( (This)->lpVtbl -> get_CspAlgorithm(This,ppValue) )
#define ICspStatus_get_CspInformation(This,ppValue)( (This)->lpVtbl -> get_CspInformation(This,ppValue) )
#define ICspStatus_get_EnrollmentStatus(This,ppValue)( (This)->lpVtbl -> get_EnrollmentStatus(This,ppValue) )
#define ICspStatus_get_DisplayName(This,pValue)( (This)->lpVtbl -> get_DisplayName(This,pValue) )
#endif
#endif
#ifndef __ICspStatuses_INTERFACE_DEFINED__
#define __ICspStatuses_INTERFACE_DEFINED__
extern const IID IID_ICspStatuses;
typedef struct ICspStatusesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICspStatuses * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICspStatuses * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICspStatuses * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICspStatuses * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICspStatuses * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICspStatuses * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICspStatuses * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (ICspStatuses * This, LONG Index, ICspStatus ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ICspStatuses * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ICspStatuses * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (ICspStatuses * This, ICspStatus * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (ICspStatuses * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (ICspStatuses * This);
	HRESULT(STDMETHODCALLTYPE * get_ItemByName) (ICspStatuses * This, BSTR strCspName, BSTR strAlgorithmName, ICspStatus ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_ItemByOrdinal) (ICspStatuses * This, LONG Ordinal, ICspStatus ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_ItemByOperations) (ICspStatuses * This, BSTR strCspName, BSTR strAlgorithmName, AlgorithmOperationFlags Operations, ICspStatus ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_ItemByProvider) (ICspStatuses * This, ICspStatus * pCspStatus, ICspStatus ** ppValue);
	END_INTERFACE
}  ICspStatusesVtbl;
interface ICspStatuses
{
	CONST_VTBL struct ICspStatusesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICspStatuses_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICspStatuses_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICspStatuses_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICspStatuses_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICspStatuses_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICspStatuses_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICspStatuses_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICspStatuses_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define ICspStatuses_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define ICspStatuses_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define ICspStatuses_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define ICspStatuses_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define ICspStatuses_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define ICspStatuses_get_ItemByName(This,strCspName,strAlgorithmName,ppValue)( (This)->lpVtbl -> get_ItemByName(This,strCspName,strAlgorithmName,ppValue) )
#define ICspStatuses_get_ItemByOrdinal(This,Ordinal,ppValue)( (This)->lpVtbl -> get_ItemByOrdinal(This,Ordinal,ppValue) )
#define ICspStatuses_get_ItemByOperations(This,strCspName,strAlgorithmName,Operations,ppValue)( (This)->lpVtbl -> get_ItemByOperations(This,strCspName,strAlgorithmName,Operations,ppValue) )
#define ICspStatuses_get_ItemByProvider(This,pCspStatus,ppValue)( (This)->lpVtbl -> get_ItemByProvider(This,pCspStatus,ppValue) )
#endif
#endif
typedef enum KeyIdentifierHashAlgorithm
{
	SKIHashDefault = 0,
	SKIHashSha1 = 1,
	SKIHashCapiSha1 = 2
} KeyIdentifierHashAlgorithm;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0011_v0_0_s_ifspec;
#ifndef __IX509PublicKey_INTERFACE_DEFINED__
#define __IX509PublicKey_INTERFACE_DEFINED__
extern const IID IID_IX509PublicKey;
typedef struct IX509PublicKeyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509PublicKey * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509PublicKey * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509PublicKey * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509PublicKey * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509PublicKey * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509PublicKey * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509PublicKey * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509PublicKey * This, IObjectId * pObjectId, BSTR strEncodedKey, BSTR strEncodedParameters, EncodingType Encoding);
	HRESULT(STDMETHODCALLTYPE * InitializeFromEncodedPublicKeyInfo) (IX509PublicKey * This, BSTR strEncodedPublicKeyInfo, EncodingType Encoding);
	HRESULT(STDMETHODCALLTYPE * get_Algorithm) (IX509PublicKey * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Length) (IX509PublicKey * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EncodedKey) (IX509PublicKey * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EncodedParameters) (IX509PublicKey * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * ComputeKeyIdentifier) (IX509PublicKey * This, KeyIdentifierHashAlgorithm Algorithm, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  IX509PublicKeyVtbl;
interface IX509PublicKey
{
	CONST_VTBL struct IX509PublicKeyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509PublicKey_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509PublicKey_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509PublicKey_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509PublicKey_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509PublicKey_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509PublicKey_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509PublicKey_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509PublicKey_Initialize(This,pObjectId,strEncodedKey,strEncodedParameters,Encoding)( (This)->lpVtbl -> Initialize(This,pObjectId,strEncodedKey,strEncodedParameters,Encoding) )
#define IX509PublicKey_InitializeFromEncodedPublicKeyInfo(This,strEncodedPublicKeyInfo,Encoding)( (This)->lpVtbl -> InitializeFromEncodedPublicKeyInfo(This,strEncodedPublicKeyInfo,Encoding) )
#define IX509PublicKey_get_Algorithm(This,ppValue)( (This)->lpVtbl -> get_Algorithm(This,ppValue) )
#define IX509PublicKey_get_Length(This,pValue)( (This)->lpVtbl -> get_Length(This,pValue) )
#define IX509PublicKey_get_EncodedKey(This,Encoding,pValue)( (This)->lpVtbl -> get_EncodedKey(This,Encoding,pValue) )
#define IX509PublicKey_get_EncodedParameters(This,Encoding,pValue)( (This)->lpVtbl -> get_EncodedParameters(This,Encoding,pValue) )
#define IX509PublicKey_ComputeKeyIdentifier(This,Algorithm,Encoding,pValue)( (This)->lpVtbl -> ComputeKeyIdentifier(This,Algorithm,Encoding,pValue) )
#endif
#endif
typedef enum X509PrivateKeyExportFlags
{
	XCN_NCRYPT_ALLOW_EXPORT_NONE = 0,
	XCN_NCRYPT_ALLOW_EXPORT_FLAG = 0x1,
	XCN_NCRYPT_ALLOW_PLAINTEXT_EXPORT_FLAG = 0x2,
	XCN_NCRYPT_ALLOW_ARCHIVING_FLAG = 0x4,
	XCN_NCRYPT_ALLOW_PLAINTEXT_ARCHIVING_FLAG = 0x8
} X509PrivateKeyExportFlags;
typedef enum X509PrivateKeyUsageFlags
{
	XCN_NCRYPT_ALLOW_USAGES_NONE = 0,
	XCN_NCRYPT_ALLOW_DECRYPT_FLAG = 0x1,
	XCN_NCRYPT_ALLOW_SIGNING_FLAG = 0x2,
	XCN_NCRYPT_ALLOW_KEY_AGREEMENT_FLAG = 0x4,
	XCN_NCRYPT_ALLOW_ALL_USAGES = 0xffffff
} X509PrivateKeyUsageFlags;
typedef enum X509PrivateKeyProtection
{
	XCN_NCRYPT_UI_NO_PROTECTION_FLAG = 0,
	XCN_NCRYPT_UI_PROTECT_KEY_FLAG = 0x1,
	XCN_NCRYPT_UI_FORCE_HIGH_PROTECTION_FLAG = 0x2
} X509PrivateKeyProtection;
typedef enum X509PrivateKeyVerify
{
	VerifyNone = 0,
	VerifySilent = 1,
	VerifySmartCardNone = 2,
	VerifySmartCardSilent = 3,
	VerifyAllowUI = 4
} X509PrivateKeyVerify;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0012_v0_0_s_ifspec;
#ifndef __IX509PrivateKey_INTERFACE_DEFINED__
#define __IX509PrivateKey_INTERFACE_DEFINED__
extern const IID IID_IX509PrivateKey;
typedef struct IX509PrivateKeyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509PrivateKey * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509PrivateKey * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509PrivateKey * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509PrivateKey * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509PrivateKey * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509PrivateKey * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509PrivateKey * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Open) (IX509PrivateKey * This);
	HRESULT(STDMETHODCALLTYPE * Create) (IX509PrivateKey * This);
	HRESULT(STDMETHODCALLTYPE * Close) (IX509PrivateKey * This);
	HRESULT(STDMETHODCALLTYPE * Delete) (IX509PrivateKey * This);
	HRESULT(STDMETHODCALLTYPE * Verify) (IX509PrivateKey * This, X509PrivateKeyVerify VerifyType);
	HRESULT(STDMETHODCALLTYPE * Import) (IX509PrivateKey * This, BSTR strExportType, BSTR strEncodedKey, EncodingType Encoding);
	HRESULT(STDMETHODCALLTYPE * Export) (IX509PrivateKey * This, BSTR strExportType, EncodingType Encoding, BSTR * pstrEncodedKey);
	HRESULT(STDMETHODCALLTYPE * ExportPublicKey) (IX509PrivateKey * This, IX509PublicKey ** ppPublicKey);
	HRESULT(STDMETHODCALLTYPE * get_ContainerName) (IX509PrivateKey * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ContainerName) (IX509PrivateKey * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_ContainerNamePrefix) (IX509PrivateKey * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ContainerNamePrefix) (IX509PrivateKey * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_ReaderName) (IX509PrivateKey * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ReaderName) (IX509PrivateKey * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_CspInformations) (IX509PrivateKey * This, ICspInformations ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_CspInformations) (IX509PrivateKey * This, ICspInformations * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CspStatus) (IX509PrivateKey * This, ICspStatus ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_CspStatus) (IX509PrivateKey * This, ICspStatus * pValue);
	HRESULT(STDMETHODCALLTYPE * get_ProviderName) (IX509PrivateKey * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ProviderName) (IX509PrivateKey * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_ProviderType) (IX509PrivateKey * This, X509ProviderType * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ProviderType) (IX509PrivateKey * This, X509ProviderType Value);
	HRESULT(STDMETHODCALLTYPE * get_LegacyCsp) (IX509PrivateKey * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_LegacyCsp) (IX509PrivateKey * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_Algorithm) (IX509PrivateKey * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_Algorithm) (IX509PrivateKey * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_KeySpec) (IX509PrivateKey * This, X509KeySpec * pValue);
	HRESULT(STDMETHODCALLTYPE * put_KeySpec) (IX509PrivateKey * This, X509KeySpec Value);
	HRESULT(STDMETHODCALLTYPE * get_Length) (IX509PrivateKey * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Length) (IX509PrivateKey * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_ExportPolicy) (IX509PrivateKey * This, X509PrivateKeyExportFlags * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ExportPolicy) (IX509PrivateKey * This, X509PrivateKeyExportFlags Value);
	HRESULT(STDMETHODCALLTYPE * get_KeyUsage) (IX509PrivateKey * This, X509PrivateKeyUsageFlags * pValue);
	HRESULT(STDMETHODCALLTYPE * put_KeyUsage) (IX509PrivateKey * This, X509PrivateKeyUsageFlags Value);
	HRESULT(STDMETHODCALLTYPE * get_KeyProtection) (IX509PrivateKey * This, X509PrivateKeyProtection * pValue);
	HRESULT(STDMETHODCALLTYPE * put_KeyProtection) (IX509PrivateKey * This, X509PrivateKeyProtection Value);
	HRESULT(STDMETHODCALLTYPE * get_MachineContext) (IX509PrivateKey * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_MachineContext) (IX509PrivateKey * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_SecurityDescriptor) (IX509PrivateKey * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SecurityDescriptor) (IX509PrivateKey * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_Certificate) (IX509PrivateKey * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Certificate) (IX509PrivateKey * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_UniqueContainerName) (IX509PrivateKey * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Opened) (IX509PrivateKey * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_DefaultContainer) (IX509PrivateKey * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Existing) (IX509PrivateKey * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Existing) (IX509PrivateKey * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_Silent) (IX509PrivateKey * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Silent) (IX509PrivateKey * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IX509PrivateKey * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IX509PrivateKey * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_UIContextMessage) (IX509PrivateKey * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_UIContextMessage) (IX509PrivateKey * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * put_Pin) (IX509PrivateKey * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IX509PrivateKey * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IX509PrivateKey * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IX509PrivateKey * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IX509PrivateKey * This, BSTR Value);
	END_INTERFACE
}  IX509PrivateKeyVtbl;
interface IX509PrivateKey
{
	CONST_VTBL struct IX509PrivateKeyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509PrivateKey_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509PrivateKey_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509PrivateKey_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509PrivateKey_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509PrivateKey_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509PrivateKey_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509PrivateKey_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509PrivateKey_Open(This)( (This)->lpVtbl -> Open(This) )
#define IX509PrivateKey_Create(This)( (This)->lpVtbl -> Create(This) )
#define IX509PrivateKey_Close(This)( (This)->lpVtbl -> Close(This) )
#define IX509PrivateKey_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IX509PrivateKey_Verify(This,VerifyType)( (This)->lpVtbl -> Verify(This,VerifyType) )
#define IX509PrivateKey_Import(This,strExportType,strEncodedKey,Encoding)( (This)->lpVtbl -> Import(This,strExportType,strEncodedKey,Encoding) )
#define IX509PrivateKey_Export(This,strExportType,Encoding,pstrEncodedKey)( (This)->lpVtbl -> Export(This,strExportType,Encoding,pstrEncodedKey) )
#define IX509PrivateKey_ExportPublicKey(This,ppPublicKey)( (This)->lpVtbl -> ExportPublicKey(This,ppPublicKey) )
#define IX509PrivateKey_get_ContainerName(This,pValue)( (This)->lpVtbl -> get_ContainerName(This,pValue) )
#define IX509PrivateKey_put_ContainerName(This,Value)( (This)->lpVtbl -> put_ContainerName(This,Value) )
#define IX509PrivateKey_get_ContainerNamePrefix(This,pValue)( (This)->lpVtbl -> get_ContainerNamePrefix(This,pValue) )
#define IX509PrivateKey_put_ContainerNamePrefix(This,Value)( (This)->lpVtbl -> put_ContainerNamePrefix(This,Value) )
#define IX509PrivateKey_get_ReaderName(This,pValue)( (This)->lpVtbl -> get_ReaderName(This,pValue) )
#define IX509PrivateKey_put_ReaderName(This,Value)( (This)->lpVtbl -> put_ReaderName(This,Value) )
#define IX509PrivateKey_get_CspInformations(This,ppValue)( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
#define IX509PrivateKey_put_CspInformations(This,pValue)( (This)->lpVtbl -> put_CspInformations(This,pValue) )
#define IX509PrivateKey_get_CspStatus(This,ppValue)( (This)->lpVtbl -> get_CspStatus(This,ppValue) )
#define IX509PrivateKey_put_CspStatus(This,pValue)( (This)->lpVtbl -> put_CspStatus(This,pValue) )
#define IX509PrivateKey_get_ProviderName(This,pValue)( (This)->lpVtbl -> get_ProviderName(This,pValue) )
#define IX509PrivateKey_put_ProviderName(This,Value)( (This)->lpVtbl -> put_ProviderName(This,Value) )
#define IX509PrivateKey_get_ProviderType(This,pValue)( (This)->lpVtbl -> get_ProviderType(This,pValue) )
#define IX509PrivateKey_put_ProviderType(This,Value)( (This)->lpVtbl -> put_ProviderType(This,Value) )
#define IX509PrivateKey_get_LegacyCsp(This,pValue)( (This)->lpVtbl -> get_LegacyCsp(This,pValue) )
#define IX509PrivateKey_put_LegacyCsp(This,Value)( (This)->lpVtbl -> put_LegacyCsp(This,Value) )
#define IX509PrivateKey_get_Algorithm(This,ppValue)( (This)->lpVtbl -> get_Algorithm(This,ppValue) )
#define IX509PrivateKey_put_Algorithm(This,pValue)( (This)->lpVtbl -> put_Algorithm(This,pValue) )
#define IX509PrivateKey_get_KeySpec(This,pValue)( (This)->lpVtbl -> get_KeySpec(This,pValue) )
#define IX509PrivateKey_put_KeySpec(This,Value)( (This)->lpVtbl -> put_KeySpec(This,Value) )
#define IX509PrivateKey_get_Length(This,pValue)( (This)->lpVtbl -> get_Length(This,pValue) )
#define IX509PrivateKey_put_Length(This,Value)( (This)->lpVtbl -> put_Length(This,Value) )
#define IX509PrivateKey_get_ExportPolicy(This,pValue)( (This)->lpVtbl -> get_ExportPolicy(This,pValue) )
#define IX509PrivateKey_put_ExportPolicy(This,Value)( (This)->lpVtbl -> put_ExportPolicy(This,Value) )
#define IX509PrivateKey_get_KeyUsage(This,pValue)( (This)->lpVtbl -> get_KeyUsage(This,pValue) )
#define IX509PrivateKey_put_KeyUsage(This,Value)( (This)->lpVtbl -> put_KeyUsage(This,Value) )
#define IX509PrivateKey_get_KeyProtection(This,pValue)( (This)->lpVtbl -> get_KeyProtection(This,pValue) )
#define IX509PrivateKey_put_KeyProtection(This,Value)( (This)->lpVtbl -> put_KeyProtection(This,Value) )
#define IX509PrivateKey_get_MachineContext(This,pValue)( (This)->lpVtbl -> get_MachineContext(This,pValue) )
#define IX509PrivateKey_put_MachineContext(This,Value)( (This)->lpVtbl -> put_MachineContext(This,Value) )
#define IX509PrivateKey_get_SecurityDescriptor(This,pValue)( (This)->lpVtbl -> get_SecurityDescriptor(This,pValue) )
#define IX509PrivateKey_put_SecurityDescriptor(This,Value)( (This)->lpVtbl -> put_SecurityDescriptor(This,Value) )
#define IX509PrivateKey_get_Certificate(This,Encoding,pValue)( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) )
#define IX509PrivateKey_put_Certificate(This,Encoding,Value)( (This)->lpVtbl -> put_Certificate(This,Encoding,Value) )
#define IX509PrivateKey_get_UniqueContainerName(This,pValue)( (This)->lpVtbl -> get_UniqueContainerName(This,pValue) )
#define IX509PrivateKey_get_Opened(This,pValue)( (This)->lpVtbl -> get_Opened(This,pValue) )
#define IX509PrivateKey_get_DefaultContainer(This,pValue)( (This)->lpVtbl -> get_DefaultContainer(This,pValue) )
#define IX509PrivateKey_get_Existing(This,pValue)( (This)->lpVtbl -> get_Existing(This,pValue) )
#define IX509PrivateKey_put_Existing(This,Value)( (This)->lpVtbl -> put_Existing(This,Value) )
#define IX509PrivateKey_get_Silent(This,pValue)( (This)->lpVtbl -> get_Silent(This,pValue) )
#define IX509PrivateKey_put_Silent(This,Value)( (This)->lpVtbl -> put_Silent(This,Value) )
#define IX509PrivateKey_get_ParentWindow(This,pValue)( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
#define IX509PrivateKey_put_ParentWindow(This,Value)( (This)->lpVtbl -> put_ParentWindow(This,Value) )
#define IX509PrivateKey_get_UIContextMessage(This,pValue)( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
#define IX509PrivateKey_put_UIContextMessage(This,Value)( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
#define IX509PrivateKey_put_Pin(This,Value)( (This)->lpVtbl -> put_Pin(This,Value) )
#define IX509PrivateKey_get_FriendlyName(This,pValue)( (This)->lpVtbl -> get_FriendlyName(This,pValue) )
#define IX509PrivateKey_put_FriendlyName(This,Value)( (This)->lpVtbl -> put_FriendlyName(This,Value) )
#define IX509PrivateKey_get_Description(This,pValue)( (This)->lpVtbl -> get_Description(This,pValue) )
#define IX509PrivateKey_put_Description(This,Value)( (This)->lpVtbl -> put_Description(This,Value) )
#endif
#endif
#ifndef __IX509Extension_INTERFACE_DEFINED__
#define __IX509Extension_INTERFACE_DEFINED__
extern const IID IID_IX509Extension;
typedef struct IX509ExtensionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509Extension * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509Extension * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509Extension * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509Extension * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509Extension * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509Extension * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509Extension * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509Extension * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509Extension * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509Extension * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Critical) (IX509Extension * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Critical) (IX509Extension * This, VARIANT_BOOL Value);
	END_INTERFACE
}  IX509ExtensionVtbl;
interface IX509Extension
{
	CONST_VTBL struct IX509ExtensionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509Extension_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509Extension_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509Extension_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509Extension_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509Extension_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509Extension_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509Extension_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509Extension_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509Extension_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509Extension_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509Extension_get_Critical(This,pValue)( (This)->lpVtbl -> get_Critical(This,pValue) )
#define IX509Extension_put_Critical(This,Value)( (This)->lpVtbl -> put_Critical(This,Value) )
#endif
#endif
#ifndef __IX509Extensions_INTERFACE_DEFINED__
#define __IX509Extensions_INTERFACE_DEFINED__
extern const IID IID_IX509Extensions;
typedef struct IX509ExtensionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509Extensions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509Extensions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509Extensions * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509Extensions * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509Extensions * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509Extensions * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509Extensions * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (IX509Extensions * This, LONG Index, IX509Extension ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IX509Extensions * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IX509Extensions * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (IX509Extensions * This, IX509Extension * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (IX509Extensions * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (IX509Extensions * This);
	HRESULT(STDMETHODCALLTYPE * get_IndexByObjectId) (IX509Extensions * This, IObjectId * pObjectId, LONG * pIndex);
	HRESULT(STDMETHODCALLTYPE * AddRange) (IX509Extensions * This, IX509Extensions * pValue);
	END_INTERFACE
}  IX509ExtensionsVtbl;
interface IX509Extensions
{
	CONST_VTBL struct IX509ExtensionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509Extensions_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509Extensions_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509Extensions_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509Extensions_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509Extensions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509Extensions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509Extensions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509Extensions_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define IX509Extensions_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IX509Extensions_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IX509Extensions_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define IX509Extensions_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define IX509Extensions_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define IX509Extensions_get_IndexByObjectId(This,pObjectId,pIndex)( (This)->lpVtbl -> get_IndexByObjectId(This,pObjectId,pIndex) )
#define IX509Extensions_AddRange(This,pValue)( (This)->lpVtbl -> AddRange(This,pValue) )
#endif
#endif
typedef enum X509KeyUsageFlags
{
	XCN_CERT_NO_KEY_USAGE = 0,
	XCN_CERT_DIGITAL_SIGNATURE_KEY_USAGE = 0x80,
	XCN_CERT_NON_REPUDIATION_KEY_USAGE = 0x40,
	XCN_CERT_KEY_ENCIPHERMENT_KEY_USAGE = 0x20,
	XCN_CERT_DATA_ENCIPHERMENT_KEY_USAGE = 0x10,
	XCN_CERT_KEY_AGREEMENT_KEY_USAGE = 0x8,
	XCN_CERT_KEY_CERT_SIGN_KEY_USAGE = 0x4,
	XCN_CERT_OFFLINE_CRL_SIGN_KEY_USAGE = 0x2,
	XCN_CERT_CRL_SIGN_KEY_USAGE = 0x2,
	XCN_CERT_ENCIPHER_ONLY_KEY_USAGE = 0x1,
	XCN_CERT_DECIPHER_ONLY_KEY_USAGE = (0x80 << 8)
} X509KeyUsageFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0015_v0_0_s_ifspec;
#ifndef __IX509ExtensionKeyUsage_INTERFACE_DEFINED__
#define __IX509ExtensionKeyUsage_INTERFACE_DEFINED__
extern const IID IID_IX509ExtensionKeyUsage;
typedef struct IX509ExtensionKeyUsageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509ExtensionKeyUsage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509ExtensionKeyUsage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509ExtensionKeyUsage * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509ExtensionKeyUsage * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509ExtensionKeyUsage * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509ExtensionKeyUsage * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509ExtensionKeyUsage * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509ExtensionKeyUsage * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509ExtensionKeyUsage * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509ExtensionKeyUsage * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Critical) (IX509ExtensionKeyUsage * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Critical) (IX509ExtensionKeyUsage * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509ExtensionKeyUsage * This, X509KeyUsageFlags UsageFlags);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509ExtensionKeyUsage * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_KeyUsage) (IX509ExtensionKeyUsage * This, X509KeyUsageFlags * pValue);
	END_INTERFACE
}  IX509ExtensionKeyUsageVtbl;
interface IX509ExtensionKeyUsage
{
	CONST_VTBL struct IX509ExtensionKeyUsageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509ExtensionKeyUsage_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509ExtensionKeyUsage_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509ExtensionKeyUsage_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509ExtensionKeyUsage_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509ExtensionKeyUsage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509ExtensionKeyUsage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509ExtensionKeyUsage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509ExtensionKeyUsage_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509ExtensionKeyUsage_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509ExtensionKeyUsage_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509ExtensionKeyUsage_get_Critical(This,pValue)( (This)->lpVtbl -> get_Critical(This,pValue) )
#define IX509ExtensionKeyUsage_put_Critical(This,Value)( (This)->lpVtbl -> put_Critical(This,Value) )
#define IX509ExtensionKeyUsage_InitializeEncode(This,UsageFlags)( (This)->lpVtbl -> InitializeEncode(This,UsageFlags) )
#define IX509ExtensionKeyUsage_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509ExtensionKeyUsage_get_KeyUsage(This,pValue)( (This)->lpVtbl -> get_KeyUsage(This,pValue) )
#endif
#endif
#ifndef __IX509ExtensionEnhancedKeyUsage_INTERFACE_DEFINED__
#define __IX509ExtensionEnhancedKeyUsage_INTERFACE_DEFINED__
extern const IID IID_IX509ExtensionEnhancedKeyUsage;
typedef struct IX509ExtensionEnhancedKeyUsageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509ExtensionEnhancedKeyUsage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509ExtensionEnhancedKeyUsage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509ExtensionEnhancedKeyUsage * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509ExtensionEnhancedKeyUsage * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509ExtensionEnhancedKeyUsage * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509ExtensionEnhancedKeyUsage * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509ExtensionEnhancedKeyUsage * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509ExtensionEnhancedKeyUsage * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509ExtensionEnhancedKeyUsage * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509ExtensionEnhancedKeyUsage * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Critical) (IX509ExtensionEnhancedKeyUsage * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Critical) (IX509ExtensionEnhancedKeyUsage * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509ExtensionEnhancedKeyUsage * This, IObjectIds * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509ExtensionEnhancedKeyUsage * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_EnhancedKeyUsage) (IX509ExtensionEnhancedKeyUsage * This, IObjectIds ** ppValue);
	END_INTERFACE
}  IX509ExtensionEnhancedKeyUsageVtbl;
interface IX509ExtensionEnhancedKeyUsage
{
	CONST_VTBL struct IX509ExtensionEnhancedKeyUsageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509ExtensionEnhancedKeyUsage_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509ExtensionEnhancedKeyUsage_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509ExtensionEnhancedKeyUsage_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509ExtensionEnhancedKeyUsage_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509ExtensionEnhancedKeyUsage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509ExtensionEnhancedKeyUsage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509ExtensionEnhancedKeyUsage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509ExtensionEnhancedKeyUsage_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509ExtensionEnhancedKeyUsage_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509ExtensionEnhancedKeyUsage_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509ExtensionEnhancedKeyUsage_get_Critical(This,pValue)( (This)->lpVtbl -> get_Critical(This,pValue) )
#define IX509ExtensionEnhancedKeyUsage_put_Critical(This,Value)( (This)->lpVtbl -> put_Critical(This,Value) )
#define IX509ExtensionEnhancedKeyUsage_InitializeEncode(This,pValue)( (This)->lpVtbl -> InitializeEncode(This,pValue) )
#define IX509ExtensionEnhancedKeyUsage_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509ExtensionEnhancedKeyUsage_get_EnhancedKeyUsage(This,ppValue)( (This)->lpVtbl -> get_EnhancedKeyUsage(This,ppValue) )
#endif
#endif
#ifndef __IX509ExtensionTemplateName_INTERFACE_DEFINED__
#define __IX509ExtensionTemplateName_INTERFACE_DEFINED__
extern const IID IID_IX509ExtensionTemplateName;
typedef struct IX509ExtensionTemplateNameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509ExtensionTemplateName * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509ExtensionTemplateName * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509ExtensionTemplateName * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509ExtensionTemplateName * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509ExtensionTemplateName * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509ExtensionTemplateName * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509ExtensionTemplateName * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509ExtensionTemplateName * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509ExtensionTemplateName * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509ExtensionTemplateName * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Critical) (IX509ExtensionTemplateName * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Critical) (IX509ExtensionTemplateName * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509ExtensionTemplateName * This, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509ExtensionTemplateName * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_TemplateName) (IX509ExtensionTemplateName * This, BSTR * pValue);
	END_INTERFACE
}  IX509ExtensionTemplateNameVtbl;
interface IX509ExtensionTemplateName
{
	CONST_VTBL struct IX509ExtensionTemplateNameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509ExtensionTemplateName_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509ExtensionTemplateName_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509ExtensionTemplateName_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509ExtensionTemplateName_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509ExtensionTemplateName_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509ExtensionTemplateName_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509ExtensionTemplateName_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509ExtensionTemplateName_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509ExtensionTemplateName_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509ExtensionTemplateName_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509ExtensionTemplateName_get_Critical(This,pValue)( (This)->lpVtbl -> get_Critical(This,pValue) )
#define IX509ExtensionTemplateName_put_Critical(This,Value)( (This)->lpVtbl -> put_Critical(This,Value) )
#define IX509ExtensionTemplateName_InitializeEncode(This,strTemplateName)( (This)->lpVtbl -> InitializeEncode(This,strTemplateName) )
#define IX509ExtensionTemplateName_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509ExtensionTemplateName_get_TemplateName(This,pValue)( (This)->lpVtbl -> get_TemplateName(This,pValue) )
#endif
#endif
#ifndef __IX509ExtensionTemplate_INTERFACE_DEFINED__
#define __IX509ExtensionTemplate_INTERFACE_DEFINED__
extern const IID IID_IX509ExtensionTemplate;
typedef struct IX509ExtensionTemplateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509ExtensionTemplate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509ExtensionTemplate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509ExtensionTemplate * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509ExtensionTemplate * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509ExtensionTemplate * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509ExtensionTemplate * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509ExtensionTemplate * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509ExtensionTemplate * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509ExtensionTemplate * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509ExtensionTemplate * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Critical) (IX509ExtensionTemplate * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Critical) (IX509ExtensionTemplate * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509ExtensionTemplate * This, IObjectId * pTemplateOid, LONG MajorVersion, LONG MinorVersion);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509ExtensionTemplate * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_TemplateOid) (IX509ExtensionTemplate * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_MajorVersion) (IX509ExtensionTemplate * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * get_MinorVersion) (IX509ExtensionTemplate * This, LONG * pValue);
	END_INTERFACE
}  IX509ExtensionTemplateVtbl;
interface IX509ExtensionTemplate
{
	CONST_VTBL struct IX509ExtensionTemplateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509ExtensionTemplate_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509ExtensionTemplate_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509ExtensionTemplate_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509ExtensionTemplate_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509ExtensionTemplate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509ExtensionTemplate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509ExtensionTemplate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509ExtensionTemplate_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509ExtensionTemplate_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509ExtensionTemplate_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509ExtensionTemplate_get_Critical(This,pValue)( (This)->lpVtbl -> get_Critical(This,pValue) )
#define IX509ExtensionTemplate_put_Critical(This,Value)( (This)->lpVtbl -> put_Critical(This,Value) )
#define IX509ExtensionTemplate_InitializeEncode(This,pTemplateOid,MajorVersion,MinorVersion)( (This)->lpVtbl -> InitializeEncode(This,pTemplateOid,MajorVersion,MinorVersion) )
#define IX509ExtensionTemplate_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509ExtensionTemplate_get_TemplateOid(This,ppValue)( (This)->lpVtbl -> get_TemplateOid(This,ppValue) )
#define IX509ExtensionTemplate_get_MajorVersion(This,pValue)( (This)->lpVtbl -> get_MajorVersion(This,pValue) )
#define IX509ExtensionTemplate_get_MinorVersion(This,pValue)( (This)->lpVtbl -> get_MinorVersion(This,pValue) )
#endif
#endif
typedef enum AlternativeNameType
{
	XCN_CERT_ALT_NAME_UNKNOWN = 0,
	XCN_CERT_ALT_NAME_OTHER_NAME = 1,
	XCN_CERT_ALT_NAME_RFC822_NAME = 2,
	XCN_CERT_ALT_NAME_DNS_NAME = 3,
	XCN_CERT_ALT_NAME_DIRECTORY_NAME = 5,
	XCN_CERT_ALT_NAME_URL = 7,
	XCN_CERT_ALT_NAME_IP_ADDRESS = 8,
	XCN_CERT_ALT_NAME_REGISTERED_ID = 9,
	XCN_CERT_ALT_NAME_GUID = 10,
	XCN_CERT_ALT_NAME_USER_PRINCIPLE_NAME = 11
} AlternativeNameType;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0019_v0_0_s_ifspec;
#ifndef __IAlternativeName_INTERFACE_DEFINED__
#define __IAlternativeName_INTERFACE_DEFINED__
extern const IID IID_IAlternativeName;
typedef struct IAlternativeNameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAlternativeName * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAlternativeName * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAlternativeName * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAlternativeName * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAlternativeName * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAlternativeName * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAlternativeName * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromString) (IAlternativeName * This, AlternativeNameType Type, BSTR strValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromRawData) (IAlternativeName * This, AlternativeNameType Type, EncodingType Encoding, BSTR strRawData);
	HRESULT(STDMETHODCALLTYPE * InitializeFromOtherName) (IAlternativeName * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strRawData, VARIANT_BOOL ToBeWrapped);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IAlternativeName * This, AlternativeNameType * pValue);
	HRESULT(STDMETHODCALLTYPE * get_StrValue) (IAlternativeName * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IAlternativeName * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IAlternativeName * This, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  IAlternativeNameVtbl;
interface IAlternativeName
{
	CONST_VTBL struct IAlternativeNameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAlternativeName_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAlternativeName_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAlternativeName_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAlternativeName_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAlternativeName_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAlternativeName_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAlternativeName_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAlternativeName_InitializeFromString(This,Type,strValue)( (This)->lpVtbl -> InitializeFromString(This,Type,strValue) )
#define IAlternativeName_InitializeFromRawData(This,Type,Encoding,strRawData)( (This)->lpVtbl -> InitializeFromRawData(This,Type,Encoding,strRawData) )
#define IAlternativeName_InitializeFromOtherName(This,pObjectId,Encoding,strRawData,ToBeWrapped)( (This)->lpVtbl -> InitializeFromOtherName(This,pObjectId,Encoding,strRawData,ToBeWrapped) )
#define IAlternativeName_get_Type(This,pValue)( (This)->lpVtbl -> get_Type(This,pValue) )
#define IAlternativeName_get_StrValue(This,pValue)( (This)->lpVtbl -> get_StrValue(This,pValue) )
#define IAlternativeName_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IAlternativeName_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#endif
#endif
#ifndef __IAlternativeNames_INTERFACE_DEFINED__
#define __IAlternativeNames_INTERFACE_DEFINED__
extern const IID IID_IAlternativeNames;
typedef struct IAlternativeNamesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAlternativeNames * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAlternativeNames * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAlternativeNames * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAlternativeNames * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAlternativeNames * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAlternativeNames * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAlternativeNames * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (IAlternativeNames * This, LONG Index, IAlternativeName ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAlternativeNames * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IAlternativeNames * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (IAlternativeNames * This, IAlternativeName * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (IAlternativeNames * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (IAlternativeNames * This);
	END_INTERFACE
}  IAlternativeNamesVtbl;
interface IAlternativeNames
{
	CONST_VTBL struct IAlternativeNamesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAlternativeNames_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAlternativeNames_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAlternativeNames_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAlternativeNames_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAlternativeNames_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAlternativeNames_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAlternativeNames_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAlternativeNames_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define IAlternativeNames_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IAlternativeNames_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IAlternativeNames_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define IAlternativeNames_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define IAlternativeNames_Clear(This)( (This)->lpVtbl -> Clear(This) )
#endif
#endif
#ifndef __IX509ExtensionAlternativeNames_INTERFACE_DEFINED__
#define __IX509ExtensionAlternativeNames_INTERFACE_DEFINED__
extern const IID IID_IX509ExtensionAlternativeNames;
typedef struct IX509ExtensionAlternativeNamesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509ExtensionAlternativeNames * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509ExtensionAlternativeNames * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509ExtensionAlternativeNames * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509ExtensionAlternativeNames * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509ExtensionAlternativeNames * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509ExtensionAlternativeNames * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509ExtensionAlternativeNames * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509ExtensionAlternativeNames * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509ExtensionAlternativeNames * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509ExtensionAlternativeNames * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Critical) (IX509ExtensionAlternativeNames * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Critical) (IX509ExtensionAlternativeNames * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509ExtensionAlternativeNames * This, IAlternativeNames * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509ExtensionAlternativeNames * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_AlternativeNames) (IX509ExtensionAlternativeNames * This, IAlternativeNames ** ppValue);
	END_INTERFACE
}  IX509ExtensionAlternativeNamesVtbl;
interface IX509ExtensionAlternativeNames
{
	CONST_VTBL struct IX509ExtensionAlternativeNamesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509ExtensionAlternativeNames_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509ExtensionAlternativeNames_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509ExtensionAlternativeNames_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509ExtensionAlternativeNames_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509ExtensionAlternativeNames_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509ExtensionAlternativeNames_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509ExtensionAlternativeNames_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509ExtensionAlternativeNames_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509ExtensionAlternativeNames_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509ExtensionAlternativeNames_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509ExtensionAlternativeNames_get_Critical(This,pValue)( (This)->lpVtbl -> get_Critical(This,pValue) )
#define IX509ExtensionAlternativeNames_put_Critical(This,Value)( (This)->lpVtbl -> put_Critical(This,Value) )
#define IX509ExtensionAlternativeNames_InitializeEncode(This,pValue)( (This)->lpVtbl -> InitializeEncode(This,pValue) )
#define IX509ExtensionAlternativeNames_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509ExtensionAlternativeNames_get_AlternativeNames(This,ppValue)( (This)->lpVtbl -> get_AlternativeNames(This,ppValue) )
#endif
#endif
#ifndef __IX509ExtensionBasicConstraints_INTERFACE_DEFINED__
#define __IX509ExtensionBasicConstraints_INTERFACE_DEFINED__
extern const IID IID_IX509ExtensionBasicConstraints;
typedef struct IX509ExtensionBasicConstraintsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509ExtensionBasicConstraints * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509ExtensionBasicConstraints * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509ExtensionBasicConstraints * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509ExtensionBasicConstraints * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509ExtensionBasicConstraints * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509ExtensionBasicConstraints * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509ExtensionBasicConstraints * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509ExtensionBasicConstraints * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509ExtensionBasicConstraints * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509ExtensionBasicConstraints * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Critical) (IX509ExtensionBasicConstraints * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Critical) (IX509ExtensionBasicConstraints * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509ExtensionBasicConstraints * This, VARIANT_BOOL IsCA, LONG PathLenConstraint);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509ExtensionBasicConstraints * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_IsCA) (IX509ExtensionBasicConstraints * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_PathLenConstraint) (IX509ExtensionBasicConstraints * This, LONG * pValue);
	END_INTERFACE
}  IX509ExtensionBasicConstraintsVtbl;
interface IX509ExtensionBasicConstraints
{
	CONST_VTBL struct IX509ExtensionBasicConstraintsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509ExtensionBasicConstraints_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509ExtensionBasicConstraints_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509ExtensionBasicConstraints_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509ExtensionBasicConstraints_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509ExtensionBasicConstraints_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509ExtensionBasicConstraints_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509ExtensionBasicConstraints_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509ExtensionBasicConstraints_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509ExtensionBasicConstraints_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509ExtensionBasicConstraints_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509ExtensionBasicConstraints_get_Critical(This,pValue)( (This)->lpVtbl -> get_Critical(This,pValue) )
#define IX509ExtensionBasicConstraints_put_Critical(This,Value)( (This)->lpVtbl -> put_Critical(This,Value) )
#define IX509ExtensionBasicConstraints_InitializeEncode(This,IsCA,PathLenConstraint)( (This)->lpVtbl -> InitializeEncode(This,IsCA,PathLenConstraint) )
#define IX509ExtensionBasicConstraints_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509ExtensionBasicConstraints_get_IsCA(This,pValue)( (This)->lpVtbl -> get_IsCA(This,pValue) )
#define IX509ExtensionBasicConstraints_get_PathLenConstraint(This,pValue)( (This)->lpVtbl -> get_PathLenConstraint(This,pValue) )
#endif
#endif
#ifndef __IX509ExtensionSubjectKeyIdentifier_INTERFACE_DEFINED__
#define __IX509ExtensionSubjectKeyIdentifier_INTERFACE_DEFINED__
extern const IID IID_IX509ExtensionSubjectKeyIdentifier;
typedef struct IX509ExtensionSubjectKeyIdentifierVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509ExtensionSubjectKeyIdentifier * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509ExtensionSubjectKeyIdentifier * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509ExtensionSubjectKeyIdentifier * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509ExtensionSubjectKeyIdentifier * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509ExtensionSubjectKeyIdentifier * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509ExtensionSubjectKeyIdentifier * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509ExtensionSubjectKeyIdentifier * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509ExtensionSubjectKeyIdentifier * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509ExtensionSubjectKeyIdentifier * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509ExtensionSubjectKeyIdentifier * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Critical) (IX509ExtensionSubjectKeyIdentifier * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Critical) (IX509ExtensionSubjectKeyIdentifier * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509ExtensionSubjectKeyIdentifier * This, EncodingType Encoding, BSTR strKeyIdentifier);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509ExtensionSubjectKeyIdentifier * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_SubjectKeyIdentifier) (IX509ExtensionSubjectKeyIdentifier * This, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  IX509ExtensionSubjectKeyIdentifierVtbl;
interface IX509ExtensionSubjectKeyIdentifier
{
	CONST_VTBL struct IX509ExtensionSubjectKeyIdentifierVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509ExtensionSubjectKeyIdentifier_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509ExtensionSubjectKeyIdentifier_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509ExtensionSubjectKeyIdentifier_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509ExtensionSubjectKeyIdentifier_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509ExtensionSubjectKeyIdentifier_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509ExtensionSubjectKeyIdentifier_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509ExtensionSubjectKeyIdentifier_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509ExtensionSubjectKeyIdentifier_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509ExtensionSubjectKeyIdentifier_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509ExtensionSubjectKeyIdentifier_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509ExtensionSubjectKeyIdentifier_get_Critical(This,pValue)( (This)->lpVtbl -> get_Critical(This,pValue) )
#define IX509ExtensionSubjectKeyIdentifier_put_Critical(This,Value)( (This)->lpVtbl -> put_Critical(This,Value) )
#define IX509ExtensionSubjectKeyIdentifier_InitializeEncode(This,Encoding,strKeyIdentifier)( (This)->lpVtbl -> InitializeEncode(This,Encoding,strKeyIdentifier) )
#define IX509ExtensionSubjectKeyIdentifier_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509ExtensionSubjectKeyIdentifier_get_SubjectKeyIdentifier(This,Encoding,pValue)( (This)->lpVtbl -> get_SubjectKeyIdentifier(This,Encoding,pValue) )
#endif
#endif
#ifndef __IX509ExtensionAuthorityKeyIdentifier_INTERFACE_DEFINED__
#define __IX509ExtensionAuthorityKeyIdentifier_INTERFACE_DEFINED__
extern const IID IID_IX509ExtensionAuthorityKeyIdentifier;
typedef struct IX509ExtensionAuthorityKeyIdentifierVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509ExtensionAuthorityKeyIdentifier * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509ExtensionAuthorityKeyIdentifier * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509ExtensionAuthorityKeyIdentifier * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509ExtensionAuthorityKeyIdentifier * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509ExtensionAuthorityKeyIdentifier * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509ExtensionAuthorityKeyIdentifier * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509ExtensionAuthorityKeyIdentifier * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509ExtensionAuthorityKeyIdentifier * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509ExtensionAuthorityKeyIdentifier * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509ExtensionAuthorityKeyIdentifier * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Critical) (IX509ExtensionAuthorityKeyIdentifier * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Critical) (IX509ExtensionAuthorityKeyIdentifier * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509ExtensionAuthorityKeyIdentifier * This, EncodingType Encoding, BSTR strKeyIdentifier);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509ExtensionAuthorityKeyIdentifier * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_AuthorityKeyIdentifier) (IX509ExtensionAuthorityKeyIdentifier * This, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  IX509ExtensionAuthorityKeyIdentifierVtbl;
interface IX509ExtensionAuthorityKeyIdentifier
{
	CONST_VTBL struct IX509ExtensionAuthorityKeyIdentifierVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509ExtensionAuthorityKeyIdentifier_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509ExtensionAuthorityKeyIdentifier_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509ExtensionAuthorityKeyIdentifier_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509ExtensionAuthorityKeyIdentifier_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509ExtensionAuthorityKeyIdentifier_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509ExtensionAuthorityKeyIdentifier_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509ExtensionAuthorityKeyIdentifier_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509ExtensionAuthorityKeyIdentifier_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509ExtensionAuthorityKeyIdentifier_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509ExtensionAuthorityKeyIdentifier_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509ExtensionAuthorityKeyIdentifier_get_Critical(This,pValue)( (This)->lpVtbl -> get_Critical(This,pValue) )
#define IX509ExtensionAuthorityKeyIdentifier_put_Critical(This,Value)( (This)->lpVtbl -> put_Critical(This,Value) )
#define IX509ExtensionAuthorityKeyIdentifier_InitializeEncode(This,Encoding,strKeyIdentifier)( (This)->lpVtbl -> InitializeEncode(This,Encoding,strKeyIdentifier) )
#define IX509ExtensionAuthorityKeyIdentifier_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509ExtensionAuthorityKeyIdentifier_get_AuthorityKeyIdentifier(This,Encoding,pValue)( (This)->lpVtbl -> get_AuthorityKeyIdentifier(This,Encoding,pValue) )
#endif
#endif
#ifndef __ISmimeCapability_INTERFACE_DEFINED__
#define __ISmimeCapability_INTERFACE_DEFINED__
extern const IID IID_ISmimeCapability;
typedef struct ISmimeCapabilityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISmimeCapability * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISmimeCapability * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISmimeCapability * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISmimeCapability * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISmimeCapability * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISmimeCapability * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISmimeCapability * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ISmimeCapability * This, IObjectId * pObjectId, LONG BitCount);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (ISmimeCapability * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_BitCount) (ISmimeCapability * This, LONG * pValue);
	END_INTERFACE
}  ISmimeCapabilityVtbl;
interface ISmimeCapability
{
	CONST_VTBL struct ISmimeCapabilityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISmimeCapability_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISmimeCapability_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISmimeCapability_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISmimeCapability_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISmimeCapability_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISmimeCapability_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISmimeCapability_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISmimeCapability_Initialize(This,pObjectId,BitCount)( (This)->lpVtbl -> Initialize(This,pObjectId,BitCount) )
#define ISmimeCapability_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define ISmimeCapability_get_BitCount(This,pValue)( (This)->lpVtbl -> get_BitCount(This,pValue) )
#endif
#endif
#ifndef __ISmimeCapabilities_INTERFACE_DEFINED__
#define __ISmimeCapabilities_INTERFACE_DEFINED__
extern const IID IID_ISmimeCapabilities;
typedef struct ISmimeCapabilitiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISmimeCapabilities * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISmimeCapabilities * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISmimeCapabilities * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISmimeCapabilities * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISmimeCapabilities * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISmimeCapabilities * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISmimeCapabilities * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (ISmimeCapabilities * This, LONG Index, ISmimeCapability ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ISmimeCapabilities * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ISmimeCapabilities * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (ISmimeCapabilities * This, ISmimeCapability * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (ISmimeCapabilities * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (ISmimeCapabilities * This);
	HRESULT(STDMETHODCALLTYPE * AddFromCsp) (ISmimeCapabilities * This, ICspInformation * pValue);
	HRESULT(STDMETHODCALLTYPE * AddAvailableSmimeCapabilities) (ISmimeCapabilities * This, VARIANT_BOOL MachineContext);
	END_INTERFACE
}  ISmimeCapabilitiesVtbl;
interface ISmimeCapabilities
{
	CONST_VTBL struct ISmimeCapabilitiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISmimeCapabilities_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISmimeCapabilities_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISmimeCapabilities_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISmimeCapabilities_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISmimeCapabilities_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISmimeCapabilities_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISmimeCapabilities_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISmimeCapabilities_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define ISmimeCapabilities_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define ISmimeCapabilities_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define ISmimeCapabilities_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define ISmimeCapabilities_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define ISmimeCapabilities_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define ISmimeCapabilities_AddFromCsp(This,pValue)( (This)->lpVtbl -> AddFromCsp(This,pValue) )
#define ISmimeCapabilities_AddAvailableSmimeCapabilities(This,MachineContext)( (This)->lpVtbl -> AddAvailableSmimeCapabilities(This,MachineContext) )
#endif
#endif
#ifndef __IX509ExtensionSmimeCapabilities_INTERFACE_DEFINED__
#define __IX509ExtensionSmimeCapabilities_INTERFACE_DEFINED__
extern const IID IID_IX509ExtensionSmimeCapabilities;
typedef struct IX509ExtensionSmimeCapabilitiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509ExtensionSmimeCapabilities * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509ExtensionSmimeCapabilities * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509ExtensionSmimeCapabilities * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509ExtensionSmimeCapabilities * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509ExtensionSmimeCapabilities * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509ExtensionSmimeCapabilities * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509ExtensionSmimeCapabilities * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509ExtensionSmimeCapabilities * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509ExtensionSmimeCapabilities * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509ExtensionSmimeCapabilities * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Critical) (IX509ExtensionSmimeCapabilities * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Critical) (IX509ExtensionSmimeCapabilities * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509ExtensionSmimeCapabilities * This, ISmimeCapabilities * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509ExtensionSmimeCapabilities * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_SmimeCapabilities) (IX509ExtensionSmimeCapabilities * This, ISmimeCapabilities ** ppValue);
	END_INTERFACE
}  IX509ExtensionSmimeCapabilitiesVtbl;
interface IX509ExtensionSmimeCapabilities
{
	CONST_VTBL struct IX509ExtensionSmimeCapabilitiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509ExtensionSmimeCapabilities_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509ExtensionSmimeCapabilities_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509ExtensionSmimeCapabilities_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509ExtensionSmimeCapabilities_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509ExtensionSmimeCapabilities_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509ExtensionSmimeCapabilities_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509ExtensionSmimeCapabilities_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509ExtensionSmimeCapabilities_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509ExtensionSmimeCapabilities_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509ExtensionSmimeCapabilities_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509ExtensionSmimeCapabilities_get_Critical(This,pValue)( (This)->lpVtbl -> get_Critical(This,pValue) )
#define IX509ExtensionSmimeCapabilities_put_Critical(This,Value)( (This)->lpVtbl -> put_Critical(This,Value) )
#define IX509ExtensionSmimeCapabilities_InitializeEncode(This,pValue)( (This)->lpVtbl -> InitializeEncode(This,pValue) )
#define IX509ExtensionSmimeCapabilities_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509ExtensionSmimeCapabilities_get_SmimeCapabilities(This,ppValue)( (This)->lpVtbl -> get_SmimeCapabilities(This,ppValue) )
#endif
#endif
typedef enum PolicyQualifierType
{
	PolicyQualifierTypeUnknown = 0,
	PolicyQualifierTypeUrl = 1,
	PolicyQualifierTypeUserNotice = 2
} PolicyQualifierType;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0028_v0_0_s_ifspec;
#ifndef __IPolicyQualifier_INTERFACE_DEFINED__
#define __IPolicyQualifier_INTERFACE_DEFINED__
extern const IID IID_IPolicyQualifier;
typedef struct IPolicyQualifierVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPolicyQualifier * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPolicyQualifier * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPolicyQualifier * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IPolicyQualifier * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IPolicyQualifier * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IPolicyQualifier * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IPolicyQualifier * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IPolicyQualifier * This, BSTR strQualifier, PolicyQualifierType Type);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IPolicyQualifier * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Qualifier) (IPolicyQualifier * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IPolicyQualifier * This, PolicyQualifierType * pValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IPolicyQualifier * This, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  IPolicyQualifierVtbl;
interface IPolicyQualifier
{
	CONST_VTBL struct IPolicyQualifierVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPolicyQualifier_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPolicyQualifier_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPolicyQualifier_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPolicyQualifier_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IPolicyQualifier_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IPolicyQualifier_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IPolicyQualifier_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IPolicyQualifier_InitializeEncode(This,strQualifier,Type)( (This)->lpVtbl -> InitializeEncode(This,strQualifier,Type) )
#define IPolicyQualifier_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IPolicyQualifier_get_Qualifier(This,pValue)( (This)->lpVtbl -> get_Qualifier(This,pValue) )
#define IPolicyQualifier_get_Type(This,pValue)( (This)->lpVtbl -> get_Type(This,pValue) )
#define IPolicyQualifier_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#endif
#endif
#ifndef __IPolicyQualifiers_INTERFACE_DEFINED__
#define __IPolicyQualifiers_INTERFACE_DEFINED__
extern const IID IID_IPolicyQualifiers;
typedef struct IPolicyQualifiersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPolicyQualifiers * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPolicyQualifiers * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPolicyQualifiers * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IPolicyQualifiers * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IPolicyQualifiers * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IPolicyQualifiers * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IPolicyQualifiers * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (IPolicyQualifiers * This, LONG Index, IPolicyQualifier ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IPolicyQualifiers * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IPolicyQualifiers * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (IPolicyQualifiers * This, IPolicyQualifier * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (IPolicyQualifiers * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (IPolicyQualifiers * This);
	END_INTERFACE
}  IPolicyQualifiersVtbl;
interface IPolicyQualifiers
{
	CONST_VTBL struct IPolicyQualifiersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPolicyQualifiers_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPolicyQualifiers_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPolicyQualifiers_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPolicyQualifiers_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IPolicyQualifiers_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IPolicyQualifiers_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IPolicyQualifiers_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IPolicyQualifiers_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define IPolicyQualifiers_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IPolicyQualifiers_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IPolicyQualifiers_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define IPolicyQualifiers_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define IPolicyQualifiers_Clear(This)( (This)->lpVtbl -> Clear(This) )
#endif
#endif
#ifndef __ICertificatePolicy_INTERFACE_DEFINED__
#define __ICertificatePolicy_INTERFACE_DEFINED__
extern const IID IID_ICertificatePolicy;
typedef struct ICertificatePolicyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertificatePolicy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertificatePolicy * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertificatePolicy * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertificatePolicy * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertificatePolicy * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertificatePolicy * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertificatePolicy * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertificatePolicy * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (ICertificatePolicy * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_PolicyQualifiers) (ICertificatePolicy * This, IPolicyQualifiers ** ppValue);
	END_INTERFACE
}  ICertificatePolicyVtbl;
interface ICertificatePolicy
{
	CONST_VTBL struct ICertificatePolicyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertificatePolicy_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertificatePolicy_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertificatePolicy_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertificatePolicy_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertificatePolicy_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertificatePolicy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertificatePolicy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertificatePolicy_Initialize(This,pValue)( (This)->lpVtbl -> Initialize(This,pValue) )
#define ICertificatePolicy_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define ICertificatePolicy_get_PolicyQualifiers(This,ppValue)( (This)->lpVtbl -> get_PolicyQualifiers(This,ppValue) )
#endif
#endif
#ifndef __ICertificatePolicies_INTERFACE_DEFINED__
#define __ICertificatePolicies_INTERFACE_DEFINED__
extern const IID IID_ICertificatePolicies;
typedef struct ICertificatePoliciesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertificatePolicies * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertificatePolicies * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertificatePolicies * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertificatePolicies * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertificatePolicies * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertificatePolicies * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertificatePolicies * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (ICertificatePolicies * This, LONG Index, ICertificatePolicy ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ICertificatePolicies * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ICertificatePolicies * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (ICertificatePolicies * This, ICertificatePolicy * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (ICertificatePolicies * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (ICertificatePolicies * This);
	END_INTERFACE
}  ICertificatePoliciesVtbl;
interface ICertificatePolicies
{
	CONST_VTBL struct ICertificatePoliciesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertificatePolicies_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertificatePolicies_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertificatePolicies_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertificatePolicies_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertificatePolicies_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertificatePolicies_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertificatePolicies_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertificatePolicies_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define ICertificatePolicies_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define ICertificatePolicies_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define ICertificatePolicies_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define ICertificatePolicies_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define ICertificatePolicies_Clear(This)( (This)->lpVtbl -> Clear(This) )
#endif
#endif
#ifndef __IX509ExtensionCertificatePolicies_INTERFACE_DEFINED__
#define __IX509ExtensionCertificatePolicies_INTERFACE_DEFINED__
extern const IID IID_IX509ExtensionCertificatePolicies;
typedef struct IX509ExtensionCertificatePoliciesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509ExtensionCertificatePolicies * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509ExtensionCertificatePolicies * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509ExtensionCertificatePolicies * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509ExtensionCertificatePolicies * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509ExtensionCertificatePolicies * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509ExtensionCertificatePolicies * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509ExtensionCertificatePolicies * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509ExtensionCertificatePolicies * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509ExtensionCertificatePolicies * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509ExtensionCertificatePolicies * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Critical) (IX509ExtensionCertificatePolicies * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Critical) (IX509ExtensionCertificatePolicies * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509ExtensionCertificatePolicies * This, ICertificatePolicies * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509ExtensionCertificatePolicies * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_Policies) (IX509ExtensionCertificatePolicies * This, ICertificatePolicies ** ppValue);
	END_INTERFACE
}  IX509ExtensionCertificatePoliciesVtbl;
interface IX509ExtensionCertificatePolicies
{
	CONST_VTBL struct IX509ExtensionCertificatePoliciesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509ExtensionCertificatePolicies_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509ExtensionCertificatePolicies_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509ExtensionCertificatePolicies_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509ExtensionCertificatePolicies_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509ExtensionCertificatePolicies_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509ExtensionCertificatePolicies_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509ExtensionCertificatePolicies_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509ExtensionCertificatePolicies_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509ExtensionCertificatePolicies_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509ExtensionCertificatePolicies_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509ExtensionCertificatePolicies_get_Critical(This,pValue)( (This)->lpVtbl -> get_Critical(This,pValue) )
#define IX509ExtensionCertificatePolicies_put_Critical(This,Value)( (This)->lpVtbl -> put_Critical(This,Value) )
#define IX509ExtensionCertificatePolicies_InitializeEncode(This,pValue)( (This)->lpVtbl -> InitializeEncode(This,pValue) )
#define IX509ExtensionCertificatePolicies_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509ExtensionCertificatePolicies_get_Policies(This,ppValue)( (This)->lpVtbl -> get_Policies(This,ppValue) )
#endif
#endif
#ifndef __IX509ExtensionMSApplicationPolicies_INTERFACE_DEFINED__
#define __IX509ExtensionMSApplicationPolicies_INTERFACE_DEFINED__
extern const IID IID_IX509ExtensionMSApplicationPolicies;
typedef struct IX509ExtensionMSApplicationPoliciesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509ExtensionMSApplicationPolicies * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509ExtensionMSApplicationPolicies * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509ExtensionMSApplicationPolicies * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509ExtensionMSApplicationPolicies * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509ExtensionMSApplicationPolicies * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509ExtensionMSApplicationPolicies * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509ExtensionMSApplicationPolicies * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509ExtensionMSApplicationPolicies * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509ExtensionMSApplicationPolicies * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509ExtensionMSApplicationPolicies * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Critical) (IX509ExtensionMSApplicationPolicies * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Critical) (IX509ExtensionMSApplicationPolicies * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509ExtensionMSApplicationPolicies * This, ICertificatePolicies * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509ExtensionMSApplicationPolicies * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_Policies) (IX509ExtensionMSApplicationPolicies * This, ICertificatePolicies ** ppValue);
	END_INTERFACE
}  IX509ExtensionMSApplicationPoliciesVtbl;
interface IX509ExtensionMSApplicationPolicies
{
	CONST_VTBL struct IX509ExtensionMSApplicationPoliciesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509ExtensionMSApplicationPolicies_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509ExtensionMSApplicationPolicies_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509ExtensionMSApplicationPolicies_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509ExtensionMSApplicationPolicies_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509ExtensionMSApplicationPolicies_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509ExtensionMSApplicationPolicies_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509ExtensionMSApplicationPolicies_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509ExtensionMSApplicationPolicies_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509ExtensionMSApplicationPolicies_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509ExtensionMSApplicationPolicies_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509ExtensionMSApplicationPolicies_get_Critical(This,pValue)( (This)->lpVtbl -> get_Critical(This,pValue) )
#define IX509ExtensionMSApplicationPolicies_put_Critical(This,Value)( (This)->lpVtbl -> put_Critical(This,Value) )
#define IX509ExtensionMSApplicationPolicies_InitializeEncode(This,pValue)( (This)->lpVtbl -> InitializeEncode(This,pValue) )
#define IX509ExtensionMSApplicationPolicies_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509ExtensionMSApplicationPolicies_get_Policies(This,ppValue)( (This)->lpVtbl -> get_Policies(This,ppValue) )
#endif
#endif
#ifndef __IX509Attribute_INTERFACE_DEFINED__
#define __IX509Attribute_INTERFACE_DEFINED__
extern const IID IID_IX509Attribute;
typedef struct IX509AttributeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509Attribute * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509Attribute * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509Attribute * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509Attribute * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509Attribute * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509Attribute * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509Attribute * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509Attribute * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509Attribute * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509Attribute * This, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  IX509AttributeVtbl;
interface IX509Attribute
{
	CONST_VTBL struct IX509AttributeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509Attribute_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509Attribute_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509Attribute_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509Attribute_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509Attribute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509Attribute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509Attribute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509Attribute_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509Attribute_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509Attribute_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#endif
#endif
#ifndef __IX509Attributes_INTERFACE_DEFINED__
#define __IX509Attributes_INTERFACE_DEFINED__
extern const IID IID_IX509Attributes;
typedef struct IX509AttributesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509Attributes * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509Attributes * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509Attributes * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509Attributes * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509Attributes * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509Attributes * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509Attributes * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (IX509Attributes * This, LONG Index, IX509Attribute ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IX509Attributes * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IX509Attributes * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (IX509Attributes * This, IX509Attribute * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (IX509Attributes * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (IX509Attributes * This);
	END_INTERFACE
}  IX509AttributesVtbl;
interface IX509Attributes
{
	CONST_VTBL struct IX509AttributesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509Attributes_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509Attributes_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509Attributes_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509Attributes_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509Attributes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509Attributes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509Attributes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509Attributes_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define IX509Attributes_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IX509Attributes_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IX509Attributes_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define IX509Attributes_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define IX509Attributes_Clear(This)( (This)->lpVtbl -> Clear(This) )
#endif
#endif
#ifndef __IX509AttributeExtensions_INTERFACE_DEFINED__
#define __IX509AttributeExtensions_INTERFACE_DEFINED__
extern const IID IID_IX509AttributeExtensions;
typedef struct IX509AttributeExtensionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509AttributeExtensions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509AttributeExtensions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509AttributeExtensions * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509AttributeExtensions * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509AttributeExtensions * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509AttributeExtensions * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509AttributeExtensions * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509AttributeExtensions * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509AttributeExtensions * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509AttributeExtensions * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509AttributeExtensions * This, IX509Extensions * pExtensions);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509AttributeExtensions * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_X509Extensions) (IX509AttributeExtensions * This, IX509Extensions ** ppValue);
	END_INTERFACE
}  IX509AttributeExtensionsVtbl;
interface IX509AttributeExtensions
{
	CONST_VTBL struct IX509AttributeExtensionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509AttributeExtensions_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509AttributeExtensions_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509AttributeExtensions_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509AttributeExtensions_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509AttributeExtensions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509AttributeExtensions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509AttributeExtensions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509AttributeExtensions_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509AttributeExtensions_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509AttributeExtensions_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509AttributeExtensions_InitializeEncode(This,pExtensions)( (This)->lpVtbl -> InitializeEncode(This,pExtensions) )
#define IX509AttributeExtensions_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509AttributeExtensions_get_X509Extensions(This,ppValue)( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
#endif
#endif
typedef enum RequestClientInfoClientId
{
	ClientIdNone = 0,
	ClientIdXEnroll2003 = 1,
	ClientIdAutoEnroll2003 = 2,
	ClientIdWizard2003 = 3,
	ClientIdCertReq2003 = 4,
	ClientIdDefaultRequest = 5,
	ClientIdAutoEnroll = 6,
	ClientIdRequestWizard = 7,
	ClientIdEOBO = 8,
	ClientIdCertReq = 9,
	ClientIdTest = 10,
	ClientIdUserStart = 1000
} RequestClientInfoClientId;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0037_v0_0_s_ifspec;
#ifndef __IX509AttributeClientId_INTERFACE_DEFINED__
#define __IX509AttributeClientId_INTERFACE_DEFINED__
extern const IID IID_IX509AttributeClientId;
typedef struct IX509AttributeClientIdVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509AttributeClientId * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509AttributeClientId * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509AttributeClientId * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509AttributeClientId * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509AttributeClientId * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509AttributeClientId * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509AttributeClientId * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509AttributeClientId * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509AttributeClientId * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509AttributeClientId * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509AttributeClientId * This, RequestClientInfoClientId ClientId, BSTR strMachineDnsName, BSTR strUserSamName, BSTR strProcessName);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509AttributeClientId * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ClientId) (IX509AttributeClientId * This, RequestClientInfoClientId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_MachineDnsName) (IX509AttributeClientId * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_UserSamName) (IX509AttributeClientId * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_ProcessName) (IX509AttributeClientId * This, BSTR * pValue);
	END_INTERFACE
}  IX509AttributeClientIdVtbl;
interface IX509AttributeClientId
{
	CONST_VTBL struct IX509AttributeClientIdVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509AttributeClientId_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509AttributeClientId_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509AttributeClientId_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509AttributeClientId_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509AttributeClientId_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509AttributeClientId_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509AttributeClientId_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509AttributeClientId_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509AttributeClientId_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509AttributeClientId_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509AttributeClientId_InitializeEncode(This,ClientId,strMachineDnsName,strUserSamName,strProcessName)( (This)->lpVtbl -> InitializeEncode(This,ClientId,strMachineDnsName,strUserSamName,strProcessName) )
#define IX509AttributeClientId_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509AttributeClientId_get_ClientId(This,pValue)( (This)->lpVtbl -> get_ClientId(This,pValue) )
#define IX509AttributeClientId_get_MachineDnsName(This,pValue)( (This)->lpVtbl -> get_MachineDnsName(This,pValue) )
#define IX509AttributeClientId_get_UserSamName(This,pValue)( (This)->lpVtbl -> get_UserSamName(This,pValue) )
#define IX509AttributeClientId_get_ProcessName(This,pValue)( (This)->lpVtbl -> get_ProcessName(This,pValue) )
#endif
#endif
#ifndef __IX509AttributeRenewalCertificate_INTERFACE_DEFINED__
#define __IX509AttributeRenewalCertificate_INTERFACE_DEFINED__
extern const IID IID_IX509AttributeRenewalCertificate;
typedef struct IX509AttributeRenewalCertificateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509AttributeRenewalCertificate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509AttributeRenewalCertificate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509AttributeRenewalCertificate * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509AttributeRenewalCertificate * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509AttributeRenewalCertificate * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509AttributeRenewalCertificate * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509AttributeRenewalCertificate * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509AttributeRenewalCertificate * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509AttributeRenewalCertificate * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509AttributeRenewalCertificate * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509AttributeRenewalCertificate * This, EncodingType Encoding, BSTR strCert);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509AttributeRenewalCertificate * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_RenewalCertificate) (IX509AttributeRenewalCertificate * This, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  IX509AttributeRenewalCertificateVtbl;
interface IX509AttributeRenewalCertificate
{
	CONST_VTBL struct IX509AttributeRenewalCertificateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509AttributeRenewalCertificate_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509AttributeRenewalCertificate_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509AttributeRenewalCertificate_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509AttributeRenewalCertificate_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509AttributeRenewalCertificate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509AttributeRenewalCertificate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509AttributeRenewalCertificate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509AttributeRenewalCertificate_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509AttributeRenewalCertificate_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509AttributeRenewalCertificate_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509AttributeRenewalCertificate_InitializeEncode(This,Encoding,strCert)( (This)->lpVtbl -> InitializeEncode(This,Encoding,strCert) )
#define IX509AttributeRenewalCertificate_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509AttributeRenewalCertificate_get_RenewalCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
#endif
#endif
#ifndef __IX509AttributeArchiveKey_INTERFACE_DEFINED__
#define __IX509AttributeArchiveKey_INTERFACE_DEFINED__
extern const IID IID_IX509AttributeArchiveKey;
typedef struct IX509AttributeArchiveKeyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509AttributeArchiveKey * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509AttributeArchiveKey * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509AttributeArchiveKey * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509AttributeArchiveKey * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509AttributeArchiveKey * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509AttributeArchiveKey * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509AttributeArchiveKey * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509AttributeArchiveKey * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509AttributeArchiveKey * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509AttributeArchiveKey * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509AttributeArchiveKey * This, IX509PrivateKey * pKey, EncodingType Encoding, BSTR strCAXCert, IObjectId * pAlgorithm, LONG EncryptionStrength);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509AttributeArchiveKey * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_EncryptedKeyBlob) (IX509AttributeArchiveKey * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EncryptionAlgorithm) (IX509AttributeArchiveKey * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_EncryptionStrength) (IX509AttributeArchiveKey * This, LONG * pValue);
	END_INTERFACE
}  IX509AttributeArchiveKeyVtbl;
interface IX509AttributeArchiveKey
{
	CONST_VTBL struct IX509AttributeArchiveKeyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509AttributeArchiveKey_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509AttributeArchiveKey_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509AttributeArchiveKey_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509AttributeArchiveKey_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509AttributeArchiveKey_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509AttributeArchiveKey_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509AttributeArchiveKey_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509AttributeArchiveKey_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509AttributeArchiveKey_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509AttributeArchiveKey_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509AttributeArchiveKey_InitializeEncode(This,pKey,Encoding,strCAXCert,pAlgorithm,EncryptionStrength)( (This)->lpVtbl -> InitializeEncode(This,pKey,Encoding,strCAXCert,pAlgorithm,EncryptionStrength) )
#define IX509AttributeArchiveKey_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509AttributeArchiveKey_get_EncryptedKeyBlob(This,Encoding,pValue)( (This)->lpVtbl -> get_EncryptedKeyBlob(This,Encoding,pValue) )
#define IX509AttributeArchiveKey_get_EncryptionAlgorithm(This,ppValue)( (This)->lpVtbl -> get_EncryptionAlgorithm(This,ppValue) )
#define IX509AttributeArchiveKey_get_EncryptionStrength(This,pValue)( (This)->lpVtbl -> get_EncryptionStrength(This,pValue) )
#endif
#endif
#ifndef __IX509AttributeArchiveKeyHash_INTERFACE_DEFINED__
#define __IX509AttributeArchiveKeyHash_INTERFACE_DEFINED__
extern const IID IID_IX509AttributeArchiveKeyHash;
typedef struct IX509AttributeArchiveKeyHashVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509AttributeArchiveKeyHash * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509AttributeArchiveKeyHash * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509AttributeArchiveKeyHash * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509AttributeArchiveKeyHash * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509AttributeArchiveKeyHash * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509AttributeArchiveKeyHash * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509AttributeArchiveKeyHash * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509AttributeArchiveKeyHash * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509AttributeArchiveKeyHash * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509AttributeArchiveKeyHash * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeEncodeFromEncryptedKeyBlob) (IX509AttributeArchiveKeyHash * This, EncodingType Encoding, BSTR strEncryptedKeyBlob);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509AttributeArchiveKeyHash * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_EncryptedKeyHashBlob) (IX509AttributeArchiveKeyHash * This, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  IX509AttributeArchiveKeyHashVtbl;
interface IX509AttributeArchiveKeyHash
{
	CONST_VTBL struct IX509AttributeArchiveKeyHashVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509AttributeArchiveKeyHash_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509AttributeArchiveKeyHash_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509AttributeArchiveKeyHash_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509AttributeArchiveKeyHash_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509AttributeArchiveKeyHash_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509AttributeArchiveKeyHash_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509AttributeArchiveKeyHash_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509AttributeArchiveKeyHash_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509AttributeArchiveKeyHash_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509AttributeArchiveKeyHash_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509AttributeArchiveKeyHash_InitializeEncodeFromEncryptedKeyBlob(This,Encoding,strEncryptedKeyBlob)( (This)->lpVtbl -> InitializeEncodeFromEncryptedKeyBlob(This,Encoding,strEncryptedKeyBlob) )
#define IX509AttributeArchiveKeyHash_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509AttributeArchiveKeyHash_get_EncryptedKeyHashBlob(This,Encoding,pValue)( (This)->lpVtbl -> get_EncryptedKeyHashBlob(This,Encoding,pValue) )
#endif
#endif
#ifndef __IX509AttributeOSVersion_INTERFACE_DEFINED__
#define __IX509AttributeOSVersion_INTERFACE_DEFINED__
extern const IID IID_IX509AttributeOSVersion;
typedef struct IX509AttributeOSVersionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509AttributeOSVersion * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509AttributeOSVersion * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509AttributeOSVersion * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509AttributeOSVersion * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509AttributeOSVersion * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509AttributeOSVersion * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509AttributeOSVersion * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509AttributeOSVersion * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509AttributeOSVersion * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509AttributeOSVersion * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509AttributeOSVersion * This, BSTR strOSVersion);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509AttributeOSVersion * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_OSVersion) (IX509AttributeOSVersion * This, BSTR * pValue);
	END_INTERFACE
}  IX509AttributeOSVersionVtbl;
interface IX509AttributeOSVersion
{
	CONST_VTBL struct IX509AttributeOSVersionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509AttributeOSVersion_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509AttributeOSVersion_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509AttributeOSVersion_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509AttributeOSVersion_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509AttributeOSVersion_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509AttributeOSVersion_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509AttributeOSVersion_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509AttributeOSVersion_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509AttributeOSVersion_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509AttributeOSVersion_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509AttributeOSVersion_InitializeEncode(This,strOSVersion)( (This)->lpVtbl -> InitializeEncode(This,strOSVersion) )
#define IX509AttributeOSVersion_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509AttributeOSVersion_get_OSVersion(This,pValue)( (This)->lpVtbl -> get_OSVersion(This,pValue) )
#endif
#endif
#ifndef __IX509AttributeCspProvider_INTERFACE_DEFINED__
#define __IX509AttributeCspProvider_INTERFACE_DEFINED__
extern const IID IID_IX509AttributeCspProvider;
typedef struct IX509AttributeCspProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509AttributeCspProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509AttributeCspProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509AttributeCspProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509AttributeCspProvider * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509AttributeCspProvider * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509AttributeCspProvider * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509AttributeCspProvider * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509AttributeCspProvider * This, IObjectId * pObjectId, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (IX509AttributeCspProvider * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509AttributeCspProvider * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeEncode) (IX509AttributeCspProvider * This, X509KeySpec KeySpec, BSTR strProviderName, EncodingType Encoding, BSTR strSignature);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509AttributeCspProvider * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_KeySpec) (IX509AttributeCspProvider * This, X509KeySpec * pValue);
	HRESULT(STDMETHODCALLTYPE * get_ProviderName) (IX509AttributeCspProvider * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Signature) (IX509AttributeCspProvider * This, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  IX509AttributeCspProviderVtbl;
interface IX509AttributeCspProvider
{
	CONST_VTBL struct IX509AttributeCspProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509AttributeCspProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509AttributeCspProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509AttributeCspProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509AttributeCspProvider_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509AttributeCspProvider_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509AttributeCspProvider_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509AttributeCspProvider_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509AttributeCspProvider_Initialize(This,pObjectId,Encoding,strEncodedData)( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData) )
#define IX509AttributeCspProvider_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define IX509AttributeCspProvider_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509AttributeCspProvider_InitializeEncode(This,KeySpec,strProviderName,Encoding,strSignature)( (This)->lpVtbl -> InitializeEncode(This,KeySpec,strProviderName,Encoding,strSignature) )
#define IX509AttributeCspProvider_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define IX509AttributeCspProvider_get_KeySpec(This,pValue)( (This)->lpVtbl -> get_KeySpec(This,pValue) )
#define IX509AttributeCspProvider_get_ProviderName(This,pValue)( (This)->lpVtbl -> get_ProviderName(This,pValue) )
#define IX509AttributeCspProvider_get_Signature(This,Encoding,pValue)( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) )
#endif
#endif
#ifndef __ICryptAttribute_INTERFACE_DEFINED__
#define __ICryptAttribute_INTERFACE_DEFINED__
extern const IID IID_ICryptAttribute;
typedef struct ICryptAttributeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICryptAttribute * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICryptAttribute * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICryptAttribute * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICryptAttribute * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICryptAttribute * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICryptAttribute * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICryptAttribute * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromObjectId) (ICryptAttribute * This, IObjectId * pObjectId);
	HRESULT(STDMETHODCALLTYPE * InitializeFromValues) (ICryptAttribute * This, IX509Attributes * pAttributes);
	HRESULT(STDMETHODCALLTYPE * get_ObjectId) (ICryptAttribute * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Values) (ICryptAttribute * This, IX509Attributes ** ppValue);
	END_INTERFACE
}  ICryptAttributeVtbl;
interface ICryptAttribute
{
	CONST_VTBL struct ICryptAttributeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICryptAttribute_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICryptAttribute_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICryptAttribute_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICryptAttribute_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICryptAttribute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICryptAttribute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICryptAttribute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICryptAttribute_InitializeFromObjectId(This,pObjectId)( (This)->lpVtbl -> InitializeFromObjectId(This,pObjectId) )
#define ICryptAttribute_InitializeFromValues(This,pAttributes)( (This)->lpVtbl -> InitializeFromValues(This,pAttributes) )
#define ICryptAttribute_get_ObjectId(This,ppValue)( (This)->lpVtbl -> get_ObjectId(This,ppValue) )
#define ICryptAttribute_get_Values(This,ppValue)( (This)->lpVtbl -> get_Values(This,ppValue) )
#endif
#endif
#ifndef __ICryptAttributes_INTERFACE_DEFINED__
#define __ICryptAttributes_INTERFACE_DEFINED__
extern const IID IID_ICryptAttributes;
typedef struct ICryptAttributesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICryptAttributes * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICryptAttributes * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICryptAttributes * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICryptAttributes * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICryptAttributes * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICryptAttributes * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICryptAttributes * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (ICryptAttributes * This, LONG Index, ICryptAttribute ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ICryptAttributes * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ICryptAttributes * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (ICryptAttributes * This, ICryptAttribute * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (ICryptAttributes * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (ICryptAttributes * This);
	HRESULT(STDMETHODCALLTYPE * get_IndexByObjectId) (ICryptAttributes * This, IObjectId * pObjectId, LONG * pIndex);
	HRESULT(STDMETHODCALLTYPE * AddRange) (ICryptAttributes * This, ICryptAttributes * pValue);
	END_INTERFACE
}  ICryptAttributesVtbl;
interface ICryptAttributes
{
	CONST_VTBL struct ICryptAttributesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICryptAttributes_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICryptAttributes_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICryptAttributes_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICryptAttributes_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICryptAttributes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICryptAttributes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICryptAttributes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICryptAttributes_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define ICryptAttributes_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define ICryptAttributes_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define ICryptAttributes_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define ICryptAttributes_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define ICryptAttributes_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define ICryptAttributes_get_IndexByObjectId(This,pObjectId,pIndex)( (This)->lpVtbl -> get_IndexByObjectId(This,pObjectId,pIndex) )
#define ICryptAttributes_AddRange(This,pValue)( (This)->lpVtbl -> AddRange(This,pValue) )
#endif
#endif
typedef enum CERTENROLL_PROPERTYID
{
	XCN_PROPERTYID_NONE = 0,
	XCN_CERT_KEY_PROV_HANDLE_PROP_ID = 1,
	XCN_CERT_KEY_PROV_INFO_PROP_ID = 2,
	XCN_CERT_SHA1_HASH_PROP_ID = 3,
	XCN_CERT_MD5_HASH_PROP_ID = 4,
	XCN_CERT_HASH_PROP_ID = 3,
	XCN_CERT_KEY_CONTEXT_PROP_ID = 5,
	XCN_CERT_KEY_SPEC_PROP_ID = 6,
	XCN_CERT_IE30_RESERVED_PROP_ID = 7,
	XCN_CERT_PUBKEY_HASH_RESERVED_PROP_ID = 8,
	XCN_CERT_ENHKEY_USAGE_PROP_ID = 9,
	XCN_CERT_CTL_USAGE_PROP_ID = 9,
	XCN_CERT_NEXT_UPDATE_LOCATION_PROP_ID = 10,
	XCN_CERT_FRIENDLY_NAME_PROP_ID = 11,
	XCN_CERT_PVK_FILE_PROP_ID = 12,
	XCN_CERT_DESCRIPTION_PROP_ID = 13,
	XCN_CERT_ACCESS_STATE_PROP_ID = 14,
	XCN_CERT_SIGNATURE_HASH_PROP_ID = 15,
	XCN_CERT_SMART_CARD_DATA_PROP_ID = 16,
	XCN_CERT_EFS_PROP_ID = 17,
	XCN_CERT_FORTEZZA_DATA_PROP_ID = 18,
	XCN_CERT_ARCHIVED_PROP_ID = 19,
	XCN_CERT_KEY_IDENTIFIER_PROP_ID = 20,
	XCN_CERT_AUTO_ENROLL_PROP_ID = 21,
	XCN_CERT_PUBKEY_ALG_PARA_PROP_ID = 22,
	XCN_CERT_CROSS_CERT_DIST_POINTS_PROP_ID = 23,
	XCN_CERT_ISSUER_PUBLIC_KEY_MD5_HASH_PROP_ID = 24,
	XCN_CERT_SUBJECT_PUBLIC_KEY_MD5_HASH_PROP_ID = 25,
	XCN_CERT_ENROLLMENT_PROP_ID = 26,
	XCN_CERT_DATE_STAMP_PROP_ID = 27,
	XCN_CERT_ISSUER_SERIAL_NUMBER_MD5_HASH_PROP_ID = 28,
	XCN_CERT_SUBJECT_NAME_MD5_HASH_PROP_ID = 29,
	XCN_CERT_EXTENDED_ERROR_INFO_PROP_ID = 30,
	XCN_CERT_RENEWAL_PROP_ID = 64,
	XCN_CERT_ARCHIVED_KEY_HASH_PROP_ID = 65,
	XCN_CERT_AUTO_ENROLL_RETRY_PROP_ID = 66,
	XCN_CERT_AIA_URL_RETRIEVED_PROP_ID = 67,
	XCN_CERT_AUTHORITY_INFO_ACCESS_PROP_ID = 68,
	XCN_CERT_BACKED_UP_PROP_ID = 69,
	XCN_CERT_OCSP_RESPONSE_PROP_ID = 70,
	XCN_CERT_REQUEST_ORIGINATOR_PROP_ID = 71,
	XCN_CERT_SOURCE_LOCATION_PROP_ID = 72,
	XCN_CERT_SOURCE_URL_PROP_ID = 73,
	XCN_CERT_NEW_KEY_PROP_ID = 74,
	XCN_CERT_FIRST_RESERVED_PROP_ID = 92,
	XCN_CERT_LAST_RESERVED_PROP_ID = 0x7fff,
	XCN_CERT_FIRST_USER_PROP_ID = 0x8000,
	XCN_CERT_LAST_USER_PROP_ID = 0xffff,
	XCN_CERT_STORE_LOCALIZED_NAME_PROP_ID = 0x1000,
	XCN_CERT_CEP_PROP_ID = 87
} CERTENROLL_PROPERTYID;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0045_v0_0_s_ifspec;
#ifndef __ICertProperty_INTERFACE_DEFINED__
#define __ICertProperty_INTERFACE_DEFINED__
extern const IID IID_ICertProperty;
typedef struct ICertPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertProperty * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertProperty * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertProperty * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertProperty * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertProperty * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertProperty * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertProperty * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertProperty * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (ICertProperty * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (ICertProperty * This, CERTENROLL_PROPERTYID * pValue);
	HRESULT(STDMETHODCALLTYPE * put_PropertyId) (ICertProperty * This, CERTENROLL_PROPERTYID Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (ICertProperty * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * RemoveFromCertificate) (ICertProperty * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * SetValueOnCertificate) (ICertProperty * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	END_INTERFACE
}  ICertPropertyVtbl;
interface ICertProperty
{
	CONST_VTBL struct ICertPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertProperty_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertProperty_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertProperty_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertProperty_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertProperty_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertProperty_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define ICertProperty_get_PropertyId(This,pValue)( (This)->lpVtbl -> get_PropertyId(This,pValue) )
#define ICertProperty_put_PropertyId(This,Value)( (This)->lpVtbl -> put_PropertyId(This,Value) )
#define ICertProperty_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define ICertProperty_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertProperty_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
#endif
#endif
#ifndef __ICertProperties_INTERFACE_DEFINED__
#define __ICertProperties_INTERFACE_DEFINED__
extern const IID IID_ICertProperties;
typedef struct ICertPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertProperties * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertProperties * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertProperties * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertProperties * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertProperties * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (ICertProperties * This, LONG Index, ICertProperty ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ICertProperties * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ICertProperties * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (ICertProperties * This, ICertProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (ICertProperties * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (ICertProperties * This);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertProperties * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	END_INTERFACE
}  ICertPropertiesVtbl;
interface ICertProperties
{
	CONST_VTBL struct ICertPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertProperties_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertProperties_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertProperties_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertProperties_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertProperties_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertProperties_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertProperties_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertProperties_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define ICertProperties_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define ICertProperties_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define ICertProperties_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define ICertProperties_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define ICertProperties_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define ICertProperties_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#endif
#endif
#ifndef __ICertPropertyFriendlyName_INTERFACE_DEFINED__
#define __ICertPropertyFriendlyName_INTERFACE_DEFINED__
extern const IID IID_ICertPropertyFriendlyName;
typedef struct ICertPropertyFriendlyNameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPropertyFriendlyName * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPropertyFriendlyName * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPropertyFriendlyName * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPropertyFriendlyName * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPropertyFriendlyName * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPropertyFriendlyName * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPropertyFriendlyName * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertPropertyFriendlyName * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (ICertPropertyFriendlyName * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (ICertPropertyFriendlyName * This, CERTENROLL_PROPERTYID * pValue);
	HRESULT(STDMETHODCALLTYPE * put_PropertyId) (ICertPropertyFriendlyName * This, CERTENROLL_PROPERTYID Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (ICertPropertyFriendlyName * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * RemoveFromCertificate) (ICertPropertyFriendlyName * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * SetValueOnCertificate) (ICertPropertyFriendlyName * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPropertyFriendlyName * This, BSTR strFriendlyName);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (ICertPropertyFriendlyName * This, BSTR * pValue);
	END_INTERFACE
}  ICertPropertyFriendlyNameVtbl;
interface ICertPropertyFriendlyName
{
	CONST_VTBL struct ICertPropertyFriendlyNameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPropertyFriendlyName_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPropertyFriendlyName_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPropertyFriendlyName_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPropertyFriendlyName_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPropertyFriendlyName_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPropertyFriendlyName_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPropertyFriendlyName_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPropertyFriendlyName_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyFriendlyName_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define ICertPropertyFriendlyName_get_PropertyId(This,pValue)( (This)->lpVtbl -> get_PropertyId(This,pValue) )
#define ICertPropertyFriendlyName_put_PropertyId(This,Value)( (This)->lpVtbl -> put_PropertyId(This,Value) )
#define ICertPropertyFriendlyName_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define ICertPropertyFriendlyName_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyFriendlyName_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyFriendlyName_Initialize(This,strFriendlyName)( (This)->lpVtbl -> Initialize(This,strFriendlyName) )
#define ICertPropertyFriendlyName_get_FriendlyName(This,pValue)( (This)->lpVtbl -> get_FriendlyName(This,pValue) )
#endif
#endif
#ifndef __ICertPropertyDescription_INTERFACE_DEFINED__
#define __ICertPropertyDescription_INTERFACE_DEFINED__
extern const IID IID_ICertPropertyDescription;
typedef struct ICertPropertyDescriptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPropertyDescription * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPropertyDescription * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPropertyDescription * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPropertyDescription * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPropertyDescription * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPropertyDescription * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPropertyDescription * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertPropertyDescription * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (ICertPropertyDescription * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (ICertPropertyDescription * This, CERTENROLL_PROPERTYID * pValue);
	HRESULT(STDMETHODCALLTYPE * put_PropertyId) (ICertPropertyDescription * This, CERTENROLL_PROPERTYID Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (ICertPropertyDescription * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * RemoveFromCertificate) (ICertPropertyDescription * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * SetValueOnCertificate) (ICertPropertyDescription * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPropertyDescription * This, BSTR strDescription);
	HRESULT(STDMETHODCALLTYPE * get_Description) (ICertPropertyDescription * This, BSTR * pValue);
	END_INTERFACE
}  ICertPropertyDescriptionVtbl;
interface ICertPropertyDescription
{
	CONST_VTBL struct ICertPropertyDescriptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPropertyDescription_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPropertyDescription_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPropertyDescription_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPropertyDescription_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPropertyDescription_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPropertyDescription_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPropertyDescription_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPropertyDescription_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyDescription_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define ICertPropertyDescription_get_PropertyId(This,pValue)( (This)->lpVtbl -> get_PropertyId(This,pValue) )
#define ICertPropertyDescription_put_PropertyId(This,Value)( (This)->lpVtbl -> put_PropertyId(This,Value) )
#define ICertPropertyDescription_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define ICertPropertyDescription_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyDescription_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyDescription_Initialize(This,strDescription)( (This)->lpVtbl -> Initialize(This,strDescription) )
#define ICertPropertyDescription_get_Description(This,pValue)( (This)->lpVtbl -> get_Description(This,pValue) )
#endif
#endif
#ifndef __ICertPropertyAutoEnroll_INTERFACE_DEFINED__
#define __ICertPropertyAutoEnroll_INTERFACE_DEFINED__
extern const IID IID_ICertPropertyAutoEnroll;
typedef struct ICertPropertyAutoEnrollVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPropertyAutoEnroll * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPropertyAutoEnroll * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPropertyAutoEnroll * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPropertyAutoEnroll * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPropertyAutoEnroll * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPropertyAutoEnroll * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPropertyAutoEnroll * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertPropertyAutoEnroll * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (ICertPropertyAutoEnroll * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (ICertPropertyAutoEnroll * This, CERTENROLL_PROPERTYID * pValue);
	HRESULT(STDMETHODCALLTYPE * put_PropertyId) (ICertPropertyAutoEnroll * This, CERTENROLL_PROPERTYID Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (ICertPropertyAutoEnroll * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * RemoveFromCertificate) (ICertPropertyAutoEnroll * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * SetValueOnCertificate) (ICertPropertyAutoEnroll * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPropertyAutoEnroll * This, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * get_TemplateName) (ICertPropertyAutoEnroll * This, BSTR * pValue);
	END_INTERFACE
}  ICertPropertyAutoEnrollVtbl;
interface ICertPropertyAutoEnroll
{
	CONST_VTBL struct ICertPropertyAutoEnrollVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPropertyAutoEnroll_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPropertyAutoEnroll_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPropertyAutoEnroll_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPropertyAutoEnroll_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPropertyAutoEnroll_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPropertyAutoEnroll_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPropertyAutoEnroll_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPropertyAutoEnroll_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyAutoEnroll_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define ICertPropertyAutoEnroll_get_PropertyId(This,pValue)( (This)->lpVtbl -> get_PropertyId(This,pValue) )
#define ICertPropertyAutoEnroll_put_PropertyId(This,Value)( (This)->lpVtbl -> put_PropertyId(This,Value) )
#define ICertPropertyAutoEnroll_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define ICertPropertyAutoEnroll_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyAutoEnroll_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyAutoEnroll_Initialize(This,strTemplateName)( (This)->lpVtbl -> Initialize(This,strTemplateName) )
#define ICertPropertyAutoEnroll_get_TemplateName(This,pValue)( (This)->lpVtbl -> get_TemplateName(This,pValue) )
#endif
#endif
#ifndef __ICertPropertyRequestOriginator_INTERFACE_DEFINED__
#define __ICertPropertyRequestOriginator_INTERFACE_DEFINED__
extern const IID IID_ICertPropertyRequestOriginator;
typedef struct ICertPropertyRequestOriginatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPropertyRequestOriginator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPropertyRequestOriginator * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPropertyRequestOriginator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPropertyRequestOriginator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPropertyRequestOriginator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPropertyRequestOriginator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPropertyRequestOriginator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertPropertyRequestOriginator * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (ICertPropertyRequestOriginator * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (ICertPropertyRequestOriginator * This, CERTENROLL_PROPERTYID * pValue);
	HRESULT(STDMETHODCALLTYPE * put_PropertyId) (ICertPropertyRequestOriginator * This, CERTENROLL_PROPERTYID Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (ICertPropertyRequestOriginator * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * RemoveFromCertificate) (ICertPropertyRequestOriginator * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * SetValueOnCertificate) (ICertPropertyRequestOriginator * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPropertyRequestOriginator * This, BSTR strRequestOriginator);
	HRESULT(STDMETHODCALLTYPE * InitializeFromLocalRequestOriginator) (ICertPropertyRequestOriginator * This);
	HRESULT(STDMETHODCALLTYPE * get_RequestOriginator) (ICertPropertyRequestOriginator * This, BSTR * pValue);
	END_INTERFACE
}  ICertPropertyRequestOriginatorVtbl;
interface ICertPropertyRequestOriginator
{
	CONST_VTBL struct ICertPropertyRequestOriginatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPropertyRequestOriginator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPropertyRequestOriginator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPropertyRequestOriginator_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPropertyRequestOriginator_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPropertyRequestOriginator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPropertyRequestOriginator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPropertyRequestOriginator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPropertyRequestOriginator_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyRequestOriginator_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define ICertPropertyRequestOriginator_get_PropertyId(This,pValue)( (This)->lpVtbl -> get_PropertyId(This,pValue) )
#define ICertPropertyRequestOriginator_put_PropertyId(This,Value)( (This)->lpVtbl -> put_PropertyId(This,Value) )
#define ICertPropertyRequestOriginator_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define ICertPropertyRequestOriginator_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyRequestOriginator_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyRequestOriginator_Initialize(This,strRequestOriginator)( (This)->lpVtbl -> Initialize(This,strRequestOriginator) )
#define ICertPropertyRequestOriginator_InitializeFromLocalRequestOriginator(This)( (This)->lpVtbl -> InitializeFromLocalRequestOriginator(This) )
#define ICertPropertyRequestOriginator_get_RequestOriginator(This,pValue)( (This)->lpVtbl -> get_RequestOriginator(This,pValue) )
#endif
#endif
#ifndef __ICertPropertySHA1Hash_INTERFACE_DEFINED__
#define __ICertPropertySHA1Hash_INTERFACE_DEFINED__
extern const IID IID_ICertPropertySHA1Hash;
typedef struct ICertPropertySHA1HashVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPropertySHA1Hash * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPropertySHA1Hash * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPropertySHA1Hash * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPropertySHA1Hash * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPropertySHA1Hash * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPropertySHA1Hash * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPropertySHA1Hash * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertPropertySHA1Hash * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (ICertPropertySHA1Hash * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (ICertPropertySHA1Hash * This, CERTENROLL_PROPERTYID * pValue);
	HRESULT(STDMETHODCALLTYPE * put_PropertyId) (ICertPropertySHA1Hash * This, CERTENROLL_PROPERTYID Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (ICertPropertySHA1Hash * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * RemoveFromCertificate) (ICertPropertySHA1Hash * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * SetValueOnCertificate) (ICertPropertySHA1Hash * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPropertySHA1Hash * This, EncodingType Encoding, BSTR strRenewalValue);
	HRESULT(STDMETHODCALLTYPE * get_SHA1Hash) (ICertPropertySHA1Hash * This, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  ICertPropertySHA1HashVtbl;
interface ICertPropertySHA1Hash
{
	CONST_VTBL struct ICertPropertySHA1HashVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPropertySHA1Hash_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPropertySHA1Hash_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPropertySHA1Hash_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPropertySHA1Hash_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPropertySHA1Hash_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPropertySHA1Hash_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPropertySHA1Hash_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPropertySHA1Hash_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertySHA1Hash_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define ICertPropertySHA1Hash_get_PropertyId(This,pValue)( (This)->lpVtbl -> get_PropertyId(This,pValue) )
#define ICertPropertySHA1Hash_put_PropertyId(This,Value)( (This)->lpVtbl -> put_PropertyId(This,Value) )
#define ICertPropertySHA1Hash_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define ICertPropertySHA1Hash_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertySHA1Hash_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertySHA1Hash_Initialize(This,Encoding,strRenewalValue)( (This)->lpVtbl -> Initialize(This,Encoding,strRenewalValue) )
#define ICertPropertySHA1Hash_get_SHA1Hash(This,Encoding,pValue)( (This)->lpVtbl -> get_SHA1Hash(This,Encoding,pValue) )
#endif
#endif
#ifndef __ICertPropertyKeyProvInfo_INTERFACE_DEFINED__
#define __ICertPropertyKeyProvInfo_INTERFACE_DEFINED__
extern const IID IID_ICertPropertyKeyProvInfo;
typedef struct ICertPropertyKeyProvInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPropertyKeyProvInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPropertyKeyProvInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPropertyKeyProvInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPropertyKeyProvInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPropertyKeyProvInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPropertyKeyProvInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPropertyKeyProvInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertPropertyKeyProvInfo * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (ICertPropertyKeyProvInfo * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (ICertPropertyKeyProvInfo * This, CERTENROLL_PROPERTYID * pValue);
	HRESULT(STDMETHODCALLTYPE * put_PropertyId) (ICertPropertyKeyProvInfo * This, CERTENROLL_PROPERTYID Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (ICertPropertyKeyProvInfo * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * RemoveFromCertificate) (ICertPropertyKeyProvInfo * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * SetValueOnCertificate) (ICertPropertyKeyProvInfo * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPropertyKeyProvInfo * This, IX509PrivateKey * pValue);
	HRESULT(STDMETHODCALLTYPE * get_PrivateKey) (ICertPropertyKeyProvInfo * This, IX509PrivateKey ** ppValue);
	END_INTERFACE
}  ICertPropertyKeyProvInfoVtbl;
interface ICertPropertyKeyProvInfo
{
	CONST_VTBL struct ICertPropertyKeyProvInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPropertyKeyProvInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPropertyKeyProvInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPropertyKeyProvInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPropertyKeyProvInfo_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPropertyKeyProvInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPropertyKeyProvInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPropertyKeyProvInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPropertyKeyProvInfo_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyKeyProvInfo_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define ICertPropertyKeyProvInfo_get_PropertyId(This,pValue)( (This)->lpVtbl -> get_PropertyId(This,pValue) )
#define ICertPropertyKeyProvInfo_put_PropertyId(This,Value)( (This)->lpVtbl -> put_PropertyId(This,Value) )
#define ICertPropertyKeyProvInfo_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define ICertPropertyKeyProvInfo_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyKeyProvInfo_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyKeyProvInfo_Initialize(This,pValue)( (This)->lpVtbl -> Initialize(This,pValue) )
#define ICertPropertyKeyProvInfo_get_PrivateKey(This,ppValue)( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
#endif
#endif
#ifndef __ICertPropertyArchived_INTERFACE_DEFINED__
#define __ICertPropertyArchived_INTERFACE_DEFINED__
extern const IID IID_ICertPropertyArchived;
typedef struct ICertPropertyArchivedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPropertyArchived * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPropertyArchived * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPropertyArchived * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPropertyArchived * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPropertyArchived * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPropertyArchived * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPropertyArchived * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertPropertyArchived * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (ICertPropertyArchived * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (ICertPropertyArchived * This, CERTENROLL_PROPERTYID * pValue);
	HRESULT(STDMETHODCALLTYPE * put_PropertyId) (ICertPropertyArchived * This, CERTENROLL_PROPERTYID Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (ICertPropertyArchived * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * RemoveFromCertificate) (ICertPropertyArchived * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * SetValueOnCertificate) (ICertPropertyArchived * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPropertyArchived * This, VARIANT_BOOL ArchivedValue);
	HRESULT(STDMETHODCALLTYPE * get_Archived) (ICertPropertyArchived * This, VARIANT_BOOL * pValue);
	END_INTERFACE
}  ICertPropertyArchivedVtbl;
interface ICertPropertyArchived
{
	CONST_VTBL struct ICertPropertyArchivedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPropertyArchived_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPropertyArchived_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPropertyArchived_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPropertyArchived_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPropertyArchived_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPropertyArchived_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPropertyArchived_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPropertyArchived_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyArchived_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define ICertPropertyArchived_get_PropertyId(This,pValue)( (This)->lpVtbl -> get_PropertyId(This,pValue) )
#define ICertPropertyArchived_put_PropertyId(This,Value)( (This)->lpVtbl -> put_PropertyId(This,Value) )
#define ICertPropertyArchived_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define ICertPropertyArchived_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyArchived_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyArchived_Initialize(This,ArchivedValue)( (This)->lpVtbl -> Initialize(This,ArchivedValue) )
#define ICertPropertyArchived_get_Archived(This,pValue)( (This)->lpVtbl -> get_Archived(This,pValue) )
#endif
#endif
#ifndef __ICertPropertyBackedUp_INTERFACE_DEFINED__
#define __ICertPropertyBackedUp_INTERFACE_DEFINED__
extern const IID IID_ICertPropertyBackedUp;
typedef struct ICertPropertyBackedUpVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPropertyBackedUp * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPropertyBackedUp * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPropertyBackedUp * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPropertyBackedUp * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPropertyBackedUp * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPropertyBackedUp * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPropertyBackedUp * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertPropertyBackedUp * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (ICertPropertyBackedUp * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (ICertPropertyBackedUp * This, CERTENROLL_PROPERTYID * pValue);
	HRESULT(STDMETHODCALLTYPE * put_PropertyId) (ICertPropertyBackedUp * This, CERTENROLL_PROPERTYID Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (ICertPropertyBackedUp * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * RemoveFromCertificate) (ICertPropertyBackedUp * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * SetValueOnCertificate) (ICertPropertyBackedUp * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCurrentTime) (ICertPropertyBackedUp * This, VARIANT_BOOL BackedUpValue);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPropertyBackedUp * This, VARIANT_BOOL BackedUpValue, DATE Date);
	HRESULT(STDMETHODCALLTYPE * get_BackedUpValue) (ICertPropertyBackedUp * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_BackedUpTime) (ICertPropertyBackedUp * This, DATE * pDate);
	END_INTERFACE
}  ICertPropertyBackedUpVtbl;
interface ICertPropertyBackedUp
{
	CONST_VTBL struct ICertPropertyBackedUpVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPropertyBackedUp_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPropertyBackedUp_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPropertyBackedUp_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPropertyBackedUp_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPropertyBackedUp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPropertyBackedUp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPropertyBackedUp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPropertyBackedUp_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyBackedUp_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define ICertPropertyBackedUp_get_PropertyId(This,pValue)( (This)->lpVtbl -> get_PropertyId(This,pValue) )
#define ICertPropertyBackedUp_put_PropertyId(This,Value)( (This)->lpVtbl -> put_PropertyId(This,Value) )
#define ICertPropertyBackedUp_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define ICertPropertyBackedUp_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyBackedUp_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyBackedUp_InitializeFromCurrentTime(This,BackedUpValue)( (This)->lpVtbl -> InitializeFromCurrentTime(This,BackedUpValue) )
#define ICertPropertyBackedUp_Initialize(This,BackedUpValue,Date)( (This)->lpVtbl -> Initialize(This,BackedUpValue,Date) )
#define ICertPropertyBackedUp_get_BackedUpValue(This,pValue)( (This)->lpVtbl -> get_BackedUpValue(This,pValue) )
#define ICertPropertyBackedUp_get_BackedUpTime(This,pDate)( (This)->lpVtbl -> get_BackedUpTime(This,pDate) )
#endif
#endif
#ifndef __ICertPropertyEnrollment_INTERFACE_DEFINED__
#define __ICertPropertyEnrollment_INTERFACE_DEFINED__
extern const IID IID_ICertPropertyEnrollment;
typedef struct ICertPropertyEnrollmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPropertyEnrollment * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPropertyEnrollment * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPropertyEnrollment * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPropertyEnrollment * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPropertyEnrollment * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPropertyEnrollment * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPropertyEnrollment * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertPropertyEnrollment * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (ICertPropertyEnrollment * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (ICertPropertyEnrollment * This, CERTENROLL_PROPERTYID * pValue);
	HRESULT(STDMETHODCALLTYPE * put_PropertyId) (ICertPropertyEnrollment * This, CERTENROLL_PROPERTYID Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (ICertPropertyEnrollment * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * RemoveFromCertificate) (ICertPropertyEnrollment * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * SetValueOnCertificate) (ICertPropertyEnrollment * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPropertyEnrollment * This, LONG RequestId, BSTR strCADnsName, BSTR strCAName, BSTR strFriendlyName);
	HRESULT(STDMETHODCALLTYPE * get_RequestId) (ICertPropertyEnrollment * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CADnsName) (ICertPropertyEnrollment * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CAName) (ICertPropertyEnrollment * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (ICertPropertyEnrollment * This, BSTR * pValue);
	END_INTERFACE
}  ICertPropertyEnrollmentVtbl;
interface ICertPropertyEnrollment
{
	CONST_VTBL struct ICertPropertyEnrollmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPropertyEnrollment_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPropertyEnrollment_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPropertyEnrollment_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPropertyEnrollment_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPropertyEnrollment_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPropertyEnrollment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPropertyEnrollment_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPropertyEnrollment_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyEnrollment_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define ICertPropertyEnrollment_get_PropertyId(This,pValue)( (This)->lpVtbl -> get_PropertyId(This,pValue) )
#define ICertPropertyEnrollment_put_PropertyId(This,Value)( (This)->lpVtbl -> put_PropertyId(This,Value) )
#define ICertPropertyEnrollment_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define ICertPropertyEnrollment_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyEnrollment_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyEnrollment_Initialize(This,RequestId,strCADnsName,strCAName,strFriendlyName)( (This)->lpVtbl -> Initialize(This,RequestId,strCADnsName,strCAName,strFriendlyName) )
#define ICertPropertyEnrollment_get_RequestId(This,pValue)( (This)->lpVtbl -> get_RequestId(This,pValue) )
#define ICertPropertyEnrollment_get_CADnsName(This,pValue)( (This)->lpVtbl -> get_CADnsName(This,pValue) )
#define ICertPropertyEnrollment_get_CAName(This,pValue)( (This)->lpVtbl -> get_CAName(This,pValue) )
#define ICertPropertyEnrollment_get_FriendlyName(This,pValue)( (This)->lpVtbl -> get_FriendlyName(This,pValue) )
#endif
#endif
#ifndef __ICertPropertyRenewal_INTERFACE_DEFINED__
#define __ICertPropertyRenewal_INTERFACE_DEFINED__
extern const IID IID_ICertPropertyRenewal;
typedef struct ICertPropertyRenewalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPropertyRenewal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPropertyRenewal * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPropertyRenewal * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPropertyRenewal * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPropertyRenewal * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPropertyRenewal * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPropertyRenewal * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertPropertyRenewal * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (ICertPropertyRenewal * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (ICertPropertyRenewal * This, CERTENROLL_PROPERTYID * pValue);
	HRESULT(STDMETHODCALLTYPE * put_PropertyId) (ICertPropertyRenewal * This, CERTENROLL_PROPERTYID Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (ICertPropertyRenewal * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * RemoveFromCertificate) (ICertPropertyRenewal * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * SetValueOnCertificate) (ICertPropertyRenewal * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPropertyRenewal * This, EncodingType Encoding, BSTR strRenewalValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificateHash) (ICertPropertyRenewal * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * get_Renewal) (ICertPropertyRenewal * This, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  ICertPropertyRenewalVtbl;
interface ICertPropertyRenewal
{
	CONST_VTBL struct ICertPropertyRenewalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPropertyRenewal_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPropertyRenewal_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPropertyRenewal_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPropertyRenewal_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPropertyRenewal_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPropertyRenewal_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPropertyRenewal_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPropertyRenewal_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyRenewal_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define ICertPropertyRenewal_get_PropertyId(This,pValue)( (This)->lpVtbl -> get_PropertyId(This,pValue) )
#define ICertPropertyRenewal_put_PropertyId(This,Value)( (This)->lpVtbl -> put_PropertyId(This,Value) )
#define ICertPropertyRenewal_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define ICertPropertyRenewal_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyRenewal_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyRenewal_Initialize(This,Encoding,strRenewalValue)( (This)->lpVtbl -> Initialize(This,Encoding,strRenewalValue) )
#define ICertPropertyRenewal_InitializeFromCertificateHash(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificateHash(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyRenewal_get_Renewal(This,Encoding,pValue)( (This)->lpVtbl -> get_Renewal(This,Encoding,pValue) )
#endif
#endif
#ifndef __ICertPropertyArchivedKeyHash_INTERFACE_DEFINED__
#define __ICertPropertyArchivedKeyHash_INTERFACE_DEFINED__
extern const IID IID_ICertPropertyArchivedKeyHash;
typedef struct ICertPropertyArchivedKeyHashVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPropertyArchivedKeyHash * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPropertyArchivedKeyHash * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPropertyArchivedKeyHash * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPropertyArchivedKeyHash * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPropertyArchivedKeyHash * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPropertyArchivedKeyHash * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPropertyArchivedKeyHash * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertPropertyArchivedKeyHash * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (ICertPropertyArchivedKeyHash * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (ICertPropertyArchivedKeyHash * This, CERTENROLL_PROPERTYID * pValue);
	HRESULT(STDMETHODCALLTYPE * put_PropertyId) (ICertPropertyArchivedKeyHash * This, CERTENROLL_PROPERTYID Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (ICertPropertyArchivedKeyHash * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * RemoveFromCertificate) (ICertPropertyArchivedKeyHash * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * SetValueOnCertificate) (ICertPropertyArchivedKeyHash * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPropertyArchivedKeyHash * This, EncodingType Encoding, BSTR strArchivedKeyHashValue);
	HRESULT(STDMETHODCALLTYPE * get_ArchivedKeyHash) (ICertPropertyArchivedKeyHash * This, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  ICertPropertyArchivedKeyHashVtbl;
interface ICertPropertyArchivedKeyHash
{
	CONST_VTBL struct ICertPropertyArchivedKeyHashVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPropertyArchivedKeyHash_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPropertyArchivedKeyHash_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPropertyArchivedKeyHash_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPropertyArchivedKeyHash_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPropertyArchivedKeyHash_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPropertyArchivedKeyHash_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPropertyArchivedKeyHash_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPropertyArchivedKeyHash_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyArchivedKeyHash_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define ICertPropertyArchivedKeyHash_get_PropertyId(This,pValue)( (This)->lpVtbl -> get_PropertyId(This,pValue) )
#define ICertPropertyArchivedKeyHash_put_PropertyId(This,Value)( (This)->lpVtbl -> put_PropertyId(This,Value) )
#define ICertPropertyArchivedKeyHash_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define ICertPropertyArchivedKeyHash_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyArchivedKeyHash_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyArchivedKeyHash_Initialize(This,Encoding,strArchivedKeyHashValue)( (This)->lpVtbl -> Initialize(This,Encoding,strArchivedKeyHashValue) )
#define ICertPropertyArchivedKeyHash_get_ArchivedKeyHash(This,Encoding,pValue)( (This)->lpVtbl -> get_ArchivedKeyHash(This,Encoding,pValue) )
#endif
#endif
typedef enum EnrollmentPolicyServerPropertyFlags
{
	DefaultNone = 0,
	DefaultPolicyServer = 0x1
} EnrollmentPolicyServerPropertyFlags;
typedef enum PolicyServerUrlFlags
{
	PsfNone = 0,
	PsfLocationGroupPolicy = 1,
	PsfLocationRegistry = 2,
	PsfUseClientId = 4,
	PsfAutoEnrollmentEnabled = 16,
	PsfAllowUnTrustedCA = 32
} PolicyServerUrlFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0058_v0_0_s_ifspec;
#ifndef __ICertPropertyEnrollmentPolicyServer_INTERFACE_DEFINED__
#define __ICertPropertyEnrollmentPolicyServer_INTERFACE_DEFINED__
extern const IID IID_ICertPropertyEnrollmentPolicyServer;
typedef struct ICertPropertyEnrollmentPolicyServerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertPropertyEnrollmentPolicyServer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertPropertyEnrollmentPolicyServer * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertPropertyEnrollmentPolicyServer * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertPropertyEnrollmentPolicyServer * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertPropertyEnrollmentPolicyServer * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertPropertyEnrollmentPolicyServer * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertPropertyEnrollmentPolicyServer * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (ICertPropertyEnrollmentPolicyServer * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (ICertPropertyEnrollmentPolicyServer * This, EncodingType Encoding, BSTR strEncodedData);
	HRESULT(STDMETHODCALLTYPE * get_PropertyId) (ICertPropertyEnrollmentPolicyServer * This, CERTENROLL_PROPERTYID * pValue);
	HRESULT(STDMETHODCALLTYPE * put_PropertyId) (ICertPropertyEnrollmentPolicyServer * This, CERTENROLL_PROPERTYID Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (ICertPropertyEnrollmentPolicyServer * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * RemoveFromCertificate) (ICertPropertyEnrollmentPolicyServer * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * SetValueOnCertificate) (ICertPropertyEnrollmentPolicyServer * This, VARIANT_BOOL MachineContext, EncodingType Encoding, BSTR strCertificate);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICertPropertyEnrollmentPolicyServer * This, EnrollmentPolicyServerPropertyFlags PropertyFlags, X509EnrollmentAuthFlags AuthFlags, X509EnrollmentAuthFlags EnrollmentServerAuthFlags, PolicyServerUrlFlags UrlFlags, BSTR strRequestId, BSTR strUrl, BSTR strId, BSTR strEnrollmentServerUrl);
	HRESULT(STDMETHODCALLTYPE * GetPolicyServerUrl) (ICertPropertyEnrollmentPolicyServer * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetPolicyServerId) (ICertPropertyEnrollmentPolicyServer * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetEnrollmentServerUrl) (ICertPropertyEnrollmentPolicyServer * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetRequestIdString) (ICertPropertyEnrollmentPolicyServer * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetPropertyFlags) (ICertPropertyEnrollmentPolicyServer * This, EnrollmentPolicyServerPropertyFlags * pValue);
	HRESULT(STDMETHODCALLTYPE * GetUrlFlags) (ICertPropertyEnrollmentPolicyServer * This, PolicyServerUrlFlags * pValue);
	HRESULT(STDMETHODCALLTYPE * GetAuthentication) (ICertPropertyEnrollmentPolicyServer * This, X509EnrollmentAuthFlags * pValue);
	HRESULT(STDMETHODCALLTYPE * GetEnrollmentServerAuthentication) (ICertPropertyEnrollmentPolicyServer * This, X509EnrollmentAuthFlags * pValue);
	END_INTERFACE
}  ICertPropertyEnrollmentPolicyServerVtbl;
interface ICertPropertyEnrollmentPolicyServer
{
	CONST_VTBL struct ICertPropertyEnrollmentPolicyServerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertPropertyEnrollmentPolicyServer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertPropertyEnrollmentPolicyServer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertPropertyEnrollmentPolicyServer_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertPropertyEnrollmentPolicyServer_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertPropertyEnrollmentPolicyServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertPropertyEnrollmentPolicyServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertPropertyEnrollmentPolicyServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertPropertyEnrollmentPolicyServer_InitializeFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> InitializeFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyEnrollmentPolicyServer_InitializeDecode(This,Encoding,strEncodedData)( (This)->lpVtbl -> InitializeDecode(This,Encoding,strEncodedData) )
#define ICertPropertyEnrollmentPolicyServer_get_PropertyId(This,pValue)( (This)->lpVtbl -> get_PropertyId(This,pValue) )
#define ICertPropertyEnrollmentPolicyServer_put_PropertyId(This,Value)( (This)->lpVtbl -> put_PropertyId(This,Value) )
#define ICertPropertyEnrollmentPolicyServer_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define ICertPropertyEnrollmentPolicyServer_RemoveFromCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> RemoveFromCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyEnrollmentPolicyServer_SetValueOnCertificate(This,MachineContext,Encoding,strCertificate)( (This)->lpVtbl -> SetValueOnCertificate(This,MachineContext,Encoding,strCertificate) )
#define ICertPropertyEnrollmentPolicyServer_Initialize(This,PropertyFlags,AuthFlags,EnrollmentServerAuthFlags,UrlFlags,strRequestId,strUrl,strId,strEnrollmentServerUrl)( (This)->lpVtbl -> Initialize(This,PropertyFlags,AuthFlags,EnrollmentServerAuthFlags,UrlFlags,strRequestId,strUrl,strId,strEnrollmentServerUrl) )
#define ICertPropertyEnrollmentPolicyServer_GetPolicyServerUrl(This,pValue)( (This)->lpVtbl -> GetPolicyServerUrl(This,pValue) )
#define ICertPropertyEnrollmentPolicyServer_GetPolicyServerId(This,pValue)( (This)->lpVtbl -> GetPolicyServerId(This,pValue) )
#define ICertPropertyEnrollmentPolicyServer_GetEnrollmentServerUrl(This,pValue)( (This)->lpVtbl -> GetEnrollmentServerUrl(This,pValue) )
#define ICertPropertyEnrollmentPolicyServer_GetRequestIdString(This,pValue)( (This)->lpVtbl -> GetRequestIdString(This,pValue) )
#define ICertPropertyEnrollmentPolicyServer_GetPropertyFlags(This,pValue)( (This)->lpVtbl -> GetPropertyFlags(This,pValue) )
#define ICertPropertyEnrollmentPolicyServer_GetUrlFlags(This,pValue)( (This)->lpVtbl -> GetUrlFlags(This,pValue) )
#define ICertPropertyEnrollmentPolicyServer_GetAuthentication(This,pValue)( (This)->lpVtbl -> GetAuthentication(This,pValue) )
#define ICertPropertyEnrollmentPolicyServer_GetEnrollmentServerAuthentication(This,pValue)( (This)->lpVtbl -> GetEnrollmentServerAuthentication(This,pValue) )
#endif
#endif
#ifndef __IX509SignatureInformation_INTERFACE_DEFINED__
#define __IX509SignatureInformation_INTERFACE_DEFINED__
extern const IID IID_IX509SignatureInformation;
typedef struct IX509SignatureInformationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509SignatureInformation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509SignatureInformation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509SignatureInformation * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509SignatureInformation * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509SignatureInformation * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509SignatureInformation * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509SignatureInformation * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IX509SignatureInformation * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IX509SignatureInformation * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_PublicKeyAlgorithm) (IX509SignatureInformation * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_PublicKeyAlgorithm) (IX509SignatureInformation * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Parameters) (IX509SignatureInformation * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Parameters) (IX509SignatureInformation * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_AlternateSignatureAlgorithm) (IX509SignatureInformation * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_AlternateSignatureAlgorithm) (IX509SignatureInformation * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_AlternateSignatureAlgorithmSet) (IX509SignatureInformation * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_NullSigned) (IX509SignatureInformation * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_NullSigned) (IX509SignatureInformation * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * GetSignatureAlgorithm) (IX509SignatureInformation * This, VARIANT_BOOL Pkcs7Signature, VARIANT_BOOL SignatureKey, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * SetDefaultValues) (IX509SignatureInformation * This);
	END_INTERFACE
}  IX509SignatureInformationVtbl;
interface IX509SignatureInformation
{
	CONST_VTBL struct IX509SignatureInformationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509SignatureInformation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509SignatureInformation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509SignatureInformation_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509SignatureInformation_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509SignatureInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509SignatureInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509SignatureInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509SignatureInformation_get_HashAlgorithm(This,ppValue)( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
#define IX509SignatureInformation_put_HashAlgorithm(This,pValue)( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
#define IX509SignatureInformation_get_PublicKeyAlgorithm(This,ppValue)( (This)->lpVtbl -> get_PublicKeyAlgorithm(This,ppValue) )
#define IX509SignatureInformation_put_PublicKeyAlgorithm(This,pValue)( (This)->lpVtbl -> put_PublicKeyAlgorithm(This,pValue) )
#define IX509SignatureInformation_get_Parameters(This,Encoding,pValue)( (This)->lpVtbl -> get_Parameters(This,Encoding,pValue) )
#define IX509SignatureInformation_put_Parameters(This,Encoding,Value)( (This)->lpVtbl -> put_Parameters(This,Encoding,Value) )
#define IX509SignatureInformation_get_AlternateSignatureAlgorithm(This,pValue)( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
#define IX509SignatureInformation_put_AlternateSignatureAlgorithm(This,Value)( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
#define IX509SignatureInformation_get_AlternateSignatureAlgorithmSet(This,pValue)( (This)->lpVtbl -> get_AlternateSignatureAlgorithmSet(This,pValue) )
#define IX509SignatureInformation_get_NullSigned(This,pValue)( (This)->lpVtbl -> get_NullSigned(This,pValue) )
#define IX509SignatureInformation_put_NullSigned(This,Value)( (This)->lpVtbl -> put_NullSigned(This,Value) )
#define IX509SignatureInformation_GetSignatureAlgorithm(This,Pkcs7Signature,SignatureKey,ppValue)( (This)->lpVtbl -> GetSignatureAlgorithm(This,Pkcs7Signature,SignatureKey,ppValue) )
#define IX509SignatureInformation_SetDefaultValues(This)( (This)->lpVtbl -> SetDefaultValues(This) )
#endif
#endif
#ifndef __ISignerCertificate_INTERFACE_DEFINED__
#define __ISignerCertificate_INTERFACE_DEFINED__
extern const IID IID_ISignerCertificate;
typedef struct ISignerCertificateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISignerCertificate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISignerCertificate * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISignerCertificate * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISignerCertificate * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISignerCertificate * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISignerCertificate * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISignerCertificate * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ISignerCertificate * This, VARIANT_BOOL MachineContext, X509PrivateKeyVerify VerifyType, EncodingType Encoding, BSTR strCertifcate);
	HRESULT(STDMETHODCALLTYPE * get_Certificate) (ISignerCertificate * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_PrivateKey) (ISignerCertificate * This, IX509PrivateKey ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Silent) (ISignerCertificate * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Silent) (ISignerCertificate * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (ISignerCertificate * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (ISignerCertificate * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_UIContextMessage) (ISignerCertificate * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_UIContextMessage) (ISignerCertificate * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * put_Pin) (ISignerCertificate * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SignatureInformation) (ISignerCertificate * This, IX509SignatureInformation ** ppValue);
	END_INTERFACE
}  ISignerCertificateVtbl;
interface ISignerCertificate
{
	CONST_VTBL struct ISignerCertificateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISignerCertificate_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISignerCertificate_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISignerCertificate_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISignerCertificate_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISignerCertificate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISignerCertificate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISignerCertificate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISignerCertificate_Initialize(This,MachineContext,VerifyType,Encoding,strCertifcate)( (This)->lpVtbl -> Initialize(This,MachineContext,VerifyType,Encoding,strCertifcate) )
#define ISignerCertificate_get_Certificate(This,Encoding,pValue)( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) )
#define ISignerCertificate_get_PrivateKey(This,ppValue)( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
#define ISignerCertificate_get_Silent(This,pValue)( (This)->lpVtbl -> get_Silent(This,pValue) )
#define ISignerCertificate_put_Silent(This,Value)( (This)->lpVtbl -> put_Silent(This,Value) )
#define ISignerCertificate_get_ParentWindow(This,pValue)( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
#define ISignerCertificate_put_ParentWindow(This,Value)( (This)->lpVtbl -> put_ParentWindow(This,Value) )
#define ISignerCertificate_get_UIContextMessage(This,pValue)( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
#define ISignerCertificate_put_UIContextMessage(This,Value)( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
#define ISignerCertificate_put_Pin(This,Value)( (This)->lpVtbl -> put_Pin(This,Value) )
#define ISignerCertificate_get_SignatureInformation(This,ppValue)( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
#endif
#endif
#ifndef __ISignerCertificates_INTERFACE_DEFINED__
#define __ISignerCertificates_INTERFACE_DEFINED__
extern const IID IID_ISignerCertificates;
typedef struct ISignerCertificatesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISignerCertificates * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISignerCertificates * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISignerCertificates * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISignerCertificates * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISignerCertificates * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISignerCertificates * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISignerCertificates * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (ISignerCertificates * This, LONG Index, ISignerCertificate ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ISignerCertificates * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ISignerCertificates * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (ISignerCertificates * This, ISignerCertificate * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (ISignerCertificates * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (ISignerCertificates * This);
	HRESULT(STDMETHODCALLTYPE * Find) (ISignerCertificates * This, ISignerCertificate * pSignerCert, LONG * piSignerCert);
	END_INTERFACE
}  ISignerCertificatesVtbl;
interface ISignerCertificates
{
	CONST_VTBL struct ISignerCertificatesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISignerCertificates_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISignerCertificates_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISignerCertificates_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISignerCertificates_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISignerCertificates_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISignerCertificates_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISignerCertificates_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISignerCertificates_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define ISignerCertificates_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define ISignerCertificates_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define ISignerCertificates_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define ISignerCertificates_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define ISignerCertificates_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define ISignerCertificates_Find(This,pSignerCert,piSignerCert)( (This)->lpVtbl -> Find(This,pSignerCert,piSignerCert) )
#endif
#endif
#ifndef __IX509NameValuePair_INTERFACE_DEFINED__
#define __IX509NameValuePair_INTERFACE_DEFINED__
extern const IID IID_IX509NameValuePair;
typedef struct IX509NameValuePairVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509NameValuePair * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509NameValuePair * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509NameValuePair * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509NameValuePair * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509NameValuePair * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509NameValuePair * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509NameValuePair * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509NameValuePair * This, BSTR strName, BSTR strValue);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IX509NameValuePair * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IX509NameValuePair * This, BSTR * pValue);
	END_INTERFACE
}  IX509NameValuePairVtbl;
interface IX509NameValuePair
{
	CONST_VTBL struct IX509NameValuePairVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509NameValuePair_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509NameValuePair_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509NameValuePair_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509NameValuePair_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509NameValuePair_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509NameValuePair_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509NameValuePair_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509NameValuePair_Initialize(This,strName,strValue)( (This)->lpVtbl -> Initialize(This,strName,strValue) )
#define IX509NameValuePair_get_Value(This,pValue)( (This)->lpVtbl -> get_Value(This,pValue) )
#define IX509NameValuePair_get_Name(This,pValue)( (This)->lpVtbl -> get_Name(This,pValue) )
#endif
#endif
#ifndef __IX509NameValuePairs_INTERFACE_DEFINED__
#define __IX509NameValuePairs_INTERFACE_DEFINED__
extern const IID IID_IX509NameValuePairs;
typedef struct IX509NameValuePairsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509NameValuePairs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509NameValuePairs * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509NameValuePairs * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509NameValuePairs * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509NameValuePairs * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509NameValuePairs * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509NameValuePairs * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (IX509NameValuePairs * This, LONG Index, IX509NameValuePair ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IX509NameValuePairs * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IX509NameValuePairs * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (IX509NameValuePairs * This, IX509NameValuePair * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (IX509NameValuePairs * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (IX509NameValuePairs * This);
	END_INTERFACE
}  IX509NameValuePairsVtbl;
interface IX509NameValuePairs
{
	CONST_VTBL struct IX509NameValuePairsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509NameValuePairs_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509NameValuePairs_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509NameValuePairs_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509NameValuePairs_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509NameValuePairs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509NameValuePairs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509NameValuePairs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509NameValuePairs_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define IX509NameValuePairs_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IX509NameValuePairs_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IX509NameValuePairs_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define IX509NameValuePairs_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define IX509NameValuePairs_Clear(This)( (This)->lpVtbl -> Clear(This) )
#endif
#endif
typedef enum EnrollmentTemplateProperty
{
	TemplatePropCommonName = 1,
	TemplatePropFriendlyName = (TemplatePropCommonName + 1),
	TemplatePropEKUs = (TemplatePropFriendlyName + 1),
	TemplatePropCryptoProviders = (TemplatePropEKUs + 1),
	TemplatePropMajorRevision = (TemplatePropCryptoProviders + 1),
	TemplatePropDescription = (TemplatePropMajorRevision + 1),
	TemplatePropKeySpec = (TemplatePropDescription + 1),
	TemplatePropSchemaVersion = (TemplatePropKeySpec + 1),
	TemplatePropMinorRevision = (TemplatePropSchemaVersion + 1),
	TemplatePropRASignatureCount = (TemplatePropMinorRevision + 1),
	TemplatePropMinimumKeySize = (TemplatePropRASignatureCount + 1),
	TemplatePropOID = (TemplatePropMinimumKeySize + 1),
	TemplatePropSupersede = (TemplatePropOID + 1),
	TemplatePropRACertificatePolicies = (TemplatePropSupersede + 1),
	TemplatePropRAEKUs = (TemplatePropRACertificatePolicies + 1),
	TemplatePropCertificatePolicies = (TemplatePropRAEKUs + 1),
	TemplatePropV1ApplicationPolicy = (TemplatePropCertificatePolicies + 1),
	TemplatePropAsymmetricAlgorithm = (TemplatePropV1ApplicationPolicy + 1),
	TemplatePropKeySecurityDescriptor = (TemplatePropAsymmetricAlgorithm + 1),
	TemplatePropSymmetricAlgorithm = (TemplatePropKeySecurityDescriptor + 1),
	TemplatePropSymmetricKeyLength = (TemplatePropSymmetricAlgorithm + 1),
	TemplatePropHashAlgorithm = (TemplatePropSymmetricKeyLength + 1),
	TemplatePropKeyUsage = (TemplatePropHashAlgorithm + 1),
	TemplatePropEnrollmentFlags = (TemplatePropKeyUsage + 1),
	TemplatePropSubjectNameFlags = (TemplatePropEnrollmentFlags + 1),
	TemplatePropPrivateKeyFlags = (TemplatePropSubjectNameFlags + 1),
	TemplatePropGeneralFlags = (TemplatePropPrivateKeyFlags + 1),
	TemplatePropSecurityDescriptor = (TemplatePropGeneralFlags + 1),
	TemplatePropExtensions = (TemplatePropSecurityDescriptor + 1),
	TemplatePropValidityPeriod = (TemplatePropExtensions + 1),
	TemplatePropRenewalPeriod = (TemplatePropValidityPeriod + 1)
} EnrollmentTemplateProperty;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0064_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0064_v0_0_s_ifspec;
#ifndef __IX509CertificateTemplate_INTERFACE_DEFINED__
#define __IX509CertificateTemplate_INTERFACE_DEFINED__
extern const IID IID_IX509CertificateTemplate;
typedef struct IX509CertificateTemplateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509CertificateTemplate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509CertificateTemplate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509CertificateTemplate * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509CertificateTemplate * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509CertificateTemplate * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509CertificateTemplate * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509CertificateTemplate * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Property) (IX509CertificateTemplate * This, enum EnrollmentTemplateProperty property, VARIANT * pValue);
	END_INTERFACE
}  IX509CertificateTemplateVtbl;
interface IX509CertificateTemplate
{
	CONST_VTBL struct IX509CertificateTemplateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509CertificateTemplate_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509CertificateTemplate_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509CertificateTemplate_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509CertificateTemplate_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509CertificateTemplate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509CertificateTemplate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509CertificateTemplate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509CertificateTemplate_get_Property(This,property,pValue)( (This)->lpVtbl -> get_Property(This,property,pValue) )
#endif
#endif
#ifndef __IX509CertificateTemplates_INTERFACE_DEFINED__
#define __IX509CertificateTemplates_INTERFACE_DEFINED__
extern const IID IID_IX509CertificateTemplates;
typedef struct IX509CertificateTemplatesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509CertificateTemplates * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509CertificateTemplates * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509CertificateTemplates * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509CertificateTemplates * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509CertificateTemplates * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509CertificateTemplates * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509CertificateTemplates * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (IX509CertificateTemplates * This, LONG Index, IX509CertificateTemplate ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IX509CertificateTemplates * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IX509CertificateTemplates * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (IX509CertificateTemplates * This, IX509CertificateTemplate * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (IX509CertificateTemplates * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (IX509CertificateTemplates * This);
	HRESULT(STDMETHODCALLTYPE * get_ItemByName) (IX509CertificateTemplates * This, BSTR bstrName, IX509CertificateTemplate ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_ItemByOid) (IX509CertificateTemplates * This, IObjectId * pOid, IX509CertificateTemplate ** ppValue);
	END_INTERFACE
}  IX509CertificateTemplatesVtbl;
interface IX509CertificateTemplates
{
	CONST_VTBL struct IX509CertificateTemplatesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509CertificateTemplates_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509CertificateTemplates_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509CertificateTemplates_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509CertificateTemplates_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509CertificateTemplates_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509CertificateTemplates_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509CertificateTemplates_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509CertificateTemplates_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define IX509CertificateTemplates_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IX509CertificateTemplates_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IX509CertificateTemplates_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define IX509CertificateTemplates_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define IX509CertificateTemplates_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define IX509CertificateTemplates_get_ItemByName(This,bstrName,ppValue)( (This)->lpVtbl -> get_ItemByName(This,bstrName,ppValue) )
#define IX509CertificateTemplates_get_ItemByOid(This,pOid,ppValue)( (This)->lpVtbl -> get_ItemByOid(This,pOid,ppValue) )
#endif
#endif
typedef enum CommitTemplateFlags
{
	CommitFlagSaveTemplateGenerateOID = 1,
	CommitFlagSaveTemplateUseCurrentOID = 2,
	CommitFlagSaveTemplateOverwrite = 3,
	CommitFlagDeleteTemplate = 4
} CommitTemplateFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0066_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0066_v0_0_s_ifspec;
#ifndef __IX509CertificateTemplateWritable_INTERFACE_DEFINED__
#define __IX509CertificateTemplateWritable_INTERFACE_DEFINED__
extern const IID IID_IX509CertificateTemplateWritable;
typedef struct IX509CertificateTemplateWritableVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509CertificateTemplateWritable * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509CertificateTemplateWritable * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509CertificateTemplateWritable * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509CertificateTemplateWritable * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509CertificateTemplateWritable * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509CertificateTemplateWritable * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509CertificateTemplateWritable * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509CertificateTemplateWritable * This, IX509CertificateTemplate * pValue);
	HRESULT(STDMETHODCALLTYPE * Commit) (IX509CertificateTemplateWritable * This, CommitTemplateFlags commitFlags, BSTR strServerContext);
	HRESULT(STDMETHODCALLTYPE * get_Property) (IX509CertificateTemplateWritable * This, enum EnrollmentTemplateProperty property, VARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Property) (IX509CertificateTemplateWritable * This, enum EnrollmentTemplateProperty property, VARIANT value);
	HRESULT(STDMETHODCALLTYPE * get_Template) (IX509CertificateTemplateWritable * This, IX509CertificateTemplate ** ppValue);
	END_INTERFACE
}  IX509CertificateTemplateWritableVtbl;
interface IX509CertificateTemplateWritable
{
	CONST_VTBL struct IX509CertificateTemplateWritableVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509CertificateTemplateWritable_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509CertificateTemplateWritable_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509CertificateTemplateWritable_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509CertificateTemplateWritable_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509CertificateTemplateWritable_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509CertificateTemplateWritable_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509CertificateTemplateWritable_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509CertificateTemplateWritable_Initialize(This,pValue)( (This)->lpVtbl -> Initialize(This,pValue) )
#define IX509CertificateTemplateWritable_Commit(This,commitFlags,strServerContext)( (This)->lpVtbl -> Commit(This,commitFlags,strServerContext) )
#define IX509CertificateTemplateWritable_get_Property(This,property,pValue)( (This)->lpVtbl -> get_Property(This,property,pValue) )
#define IX509CertificateTemplateWritable_put_Property(This,property,value)( (This)->lpVtbl -> put_Property(This,property,value) )
#define IX509CertificateTemplateWritable_get_Template(This,ppValue)( (This)->lpVtbl -> get_Template(This,ppValue) )
#endif
#endif
typedef enum EnrollmentCAProperty
{
	CAPropCommonName = 1,
	CAPropDistinguishedName = (CAPropCommonName + 1),
	CAPropSanitizedName = (CAPropDistinguishedName + 1),
	CAPropSanitizedShortName = (CAPropSanitizedName + 1),
	CAPropDNSName = (CAPropSanitizedShortName + 1),
	CAPropCertificateTypes = (CAPropDNSName + 1),
	CAPropCertificate = (CAPropCertificateTypes + 1),
	CAPropDescription = (CAPropCertificate + 1),
	CAPropWebServers = (CAPropDescription + 1),
	CAPropSiteName = (CAPropWebServers + 1),
	CAPropSecurity = (CAPropSiteName + 1),
	CAPropRenewalOnly = (CAPropSecurity + 1)
} EnrollmentCAProperty;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0067_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0067_v0_0_s_ifspec;
#ifndef __ICertificationAuthority_INTERFACE_DEFINED__
#define __ICertificationAuthority_INTERFACE_DEFINED__
extern const IID IID_ICertificationAuthority;
typedef struct ICertificationAuthorityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertificationAuthority * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertificationAuthority * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertificationAuthority * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertificationAuthority * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertificationAuthority * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertificationAuthority * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertificationAuthority * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Property) (ICertificationAuthority * This, enum EnrollmentCAProperty property, VARIANT * pValue);
	END_INTERFACE
}  ICertificationAuthorityVtbl;
interface ICertificationAuthority
{
	CONST_VTBL struct ICertificationAuthorityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertificationAuthority_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertificationAuthority_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertificationAuthority_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertificationAuthority_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertificationAuthority_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertificationAuthority_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertificationAuthority_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertificationAuthority_get_Property(This,property,pValue)( (This)->lpVtbl -> get_Property(This,property,pValue) )
#endif
#endif
#ifndef __ICertificationAuthorities_INTERFACE_DEFINED__
#define __ICertificationAuthorities_INTERFACE_DEFINED__
extern const IID IID_ICertificationAuthorities;
typedef struct ICertificationAuthoritiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICertificationAuthorities * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICertificationAuthorities * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICertificationAuthorities * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICertificationAuthorities * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICertificationAuthorities * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICertificationAuthorities * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICertificationAuthorities * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (ICertificationAuthorities * This, LONG Index, ICertificationAuthority ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ICertificationAuthorities * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ICertificationAuthorities * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (ICertificationAuthorities * This, ICertificationAuthority * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (ICertificationAuthorities * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (ICertificationAuthorities * This);
	HRESULT(STDMETHODCALLTYPE * ComputeSiteCosts) (ICertificationAuthorities * This);
	HRESULT(STDMETHODCALLTYPE * get_ItemByName) (ICertificationAuthorities * This, BSTR strName, ICertificationAuthority ** ppValue);
	END_INTERFACE
}  ICertificationAuthoritiesVtbl;
interface ICertificationAuthorities
{
	CONST_VTBL struct ICertificationAuthoritiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICertificationAuthorities_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICertificationAuthorities_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICertificationAuthorities_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICertificationAuthorities_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICertificationAuthorities_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICertificationAuthorities_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICertificationAuthorities_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICertificationAuthorities_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define ICertificationAuthorities_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define ICertificationAuthorities_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define ICertificationAuthorities_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define ICertificationAuthorities_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define ICertificationAuthorities_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define ICertificationAuthorities_ComputeSiteCosts(This)( (This)->lpVtbl -> ComputeSiteCosts(This) )
#define ICertificationAuthorities_get_ItemByName(This,strName,ppValue)( (This)->lpVtbl -> get_ItemByName(This,strName,ppValue) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_certenroll_0000_0069_0001
{
	LoadOptionDefault = 0,
	LoadOptionCacheOnly = 1,
	LoadOptionReload = 2,
	LoadOptionRegisterForADChanges = 4
} X509EnrollmentPolicyLoadOption;
enum EnrollmentPolicyFlags
{ DisableGroupPolicyList = 0x2,
	DisableUserServerList = 0x4
};
typedef enum PolicyServerUrlPropertyID
{
	PsPolicyID = 0,
	PsFriendlyName = (PsPolicyID + 1)
} PolicyServerUrlPropertyID;
typedef enum X509EnrollmentPolicyExportFlags
{
	ExportTemplates = 0x1,
	ExportOIDs = 0x2,
	ExportCAs = 0x4
} X509EnrollmentPolicyExportFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0069_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0069_v0_0_s_ifspec;
#ifndef __IX509EnrollmentPolicyServer_INTERFACE_DEFINED__
#define __IX509EnrollmentPolicyServer_INTERFACE_DEFINED__
extern const IID IID_IX509EnrollmentPolicyServer;
typedef struct IX509EnrollmentPolicyServerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509EnrollmentPolicyServer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509EnrollmentPolicyServer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509EnrollmentPolicyServer * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509EnrollmentPolicyServer * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509EnrollmentPolicyServer * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509EnrollmentPolicyServer * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509EnrollmentPolicyServer * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509EnrollmentPolicyServer * This, BSTR bstrPolicyServerUrl, BSTR bstrPolicyServerId, X509EnrollmentAuthFlags authFlags, VARIANT_BOOL fIsUnTrusted, X509CertificateEnrollmentContext context);
	HRESULT(STDMETHODCALLTYPE * LoadPolicy) (IX509EnrollmentPolicyServer * This, X509EnrollmentPolicyLoadOption option);
	HRESULT(STDMETHODCALLTYPE * GetTemplates) (IX509EnrollmentPolicyServer * This, IX509CertificateTemplates ** pTemplates);
	HRESULT(STDMETHODCALLTYPE * GetCAsForTemplate) (IX509EnrollmentPolicyServer * This, IX509CertificateTemplate * pTemplate, ICertificationAuthorities ** ppCAs);
	HRESULT(STDMETHODCALLTYPE * GetCAs) (IX509EnrollmentPolicyServer * This, ICertificationAuthorities ** ppCAs);
	HRESULT(STDMETHODCALLTYPE * Validate) (IX509EnrollmentPolicyServer * This);
	HRESULT(STDMETHODCALLTYPE * GetCustomOids) (IX509EnrollmentPolicyServer * This, IObjectIds ** ppObjectIds);
	HRESULT(STDMETHODCALLTYPE * GetNextUpdateTime) (IX509EnrollmentPolicyServer * This, DATE * pDate);
	HRESULT(STDMETHODCALLTYPE * GetLastUpdateTime) (IX509EnrollmentPolicyServer * This, DATE * pDate);
	HRESULT(STDMETHODCALLTYPE * GetPolicyServerUrl) (IX509EnrollmentPolicyServer * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetPolicyServerId) (IX509EnrollmentPolicyServer * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetFriendlyName) (IX509EnrollmentPolicyServer * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetIsDefaultCEP) (IX509EnrollmentPolicyServer * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * GetUseClientId) (IX509EnrollmentPolicyServer * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * GetAllowUnTrustedCA) (IX509EnrollmentPolicyServer * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * GetCachePath) (IX509EnrollmentPolicyServer * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetCacheDir) (IX509EnrollmentPolicyServer * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetAuthFlags) (IX509EnrollmentPolicyServer * This, X509EnrollmentAuthFlags * pValue);
	HRESULT(STDMETHODCALLTYPE * SetCredential) (IX509EnrollmentPolicyServer * This, LONG hWndParent, X509EnrollmentAuthFlags flag, BSTR strCredential, BSTR strPassword);
	HRESULT(STDMETHODCALLTYPE * QueryChanges) (IX509EnrollmentPolicyServer * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeImport) (IX509EnrollmentPolicyServer * This, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * Export) (IX509EnrollmentPolicyServer * This, X509EnrollmentPolicyExportFlags exportFlags, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Cost) (IX509EnrollmentPolicyServer * This, DWORD * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Cost) (IX509EnrollmentPolicyServer * This, DWORD value);
	END_INTERFACE
}  IX509EnrollmentPolicyServerVtbl;
interface IX509EnrollmentPolicyServer
{
	CONST_VTBL struct IX509EnrollmentPolicyServerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509EnrollmentPolicyServer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509EnrollmentPolicyServer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509EnrollmentPolicyServer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509EnrollmentPolicyServer_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509EnrollmentPolicyServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509EnrollmentPolicyServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509EnrollmentPolicyServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509EnrollmentPolicyServer_Initialize(This,bstrPolicyServerUrl,bstrPolicyServerId,authFlags,fIsUnTrusted,context)( (This)->lpVtbl -> Initialize(This,bstrPolicyServerUrl,bstrPolicyServerId,authFlags,fIsUnTrusted,context) )
#define IX509EnrollmentPolicyServer_LoadPolicy(This,option)( (This)->lpVtbl -> LoadPolicy(This,option) )
#define IX509EnrollmentPolicyServer_GetTemplates(This,pTemplates)( (This)->lpVtbl -> GetTemplates(This,pTemplates) )
#define IX509EnrollmentPolicyServer_GetCAsForTemplate(This,pTemplate,ppCAs)( (This)->lpVtbl -> GetCAsForTemplate(This,pTemplate,ppCAs) )
#define IX509EnrollmentPolicyServer_GetCAs(This,ppCAs)( (This)->lpVtbl -> GetCAs(This,ppCAs) )
#define IX509EnrollmentPolicyServer_Validate(This)( (This)->lpVtbl -> Validate(This) )
#define IX509EnrollmentPolicyServer_GetCustomOids(This,ppObjectIds)( (This)->lpVtbl -> GetCustomOids(This,ppObjectIds) )
#define IX509EnrollmentPolicyServer_GetNextUpdateTime(This,pDate)( (This)->lpVtbl -> GetNextUpdateTime(This,pDate) )
#define IX509EnrollmentPolicyServer_GetLastUpdateTime(This,pDate)( (This)->lpVtbl -> GetLastUpdateTime(This,pDate) )
#define IX509EnrollmentPolicyServer_GetPolicyServerUrl(This,pValue)( (This)->lpVtbl -> GetPolicyServerUrl(This,pValue) )
#define IX509EnrollmentPolicyServer_GetPolicyServerId(This,pValue)( (This)->lpVtbl -> GetPolicyServerId(This,pValue) )
#define IX509EnrollmentPolicyServer_GetFriendlyName(This,pValue)( (This)->lpVtbl -> GetFriendlyName(This,pValue) )
#define IX509EnrollmentPolicyServer_GetIsDefaultCEP(This,pValue)( (This)->lpVtbl -> GetIsDefaultCEP(This,pValue) )
#define IX509EnrollmentPolicyServer_GetUseClientId(This,pValue)( (This)->lpVtbl -> GetUseClientId(This,pValue) )
#define IX509EnrollmentPolicyServer_GetAllowUnTrustedCA(This,pValue)( (This)->lpVtbl -> GetAllowUnTrustedCA(This,pValue) )
#define IX509EnrollmentPolicyServer_GetCachePath(This,pValue)( (This)->lpVtbl -> GetCachePath(This,pValue) )
#define IX509EnrollmentPolicyServer_GetCacheDir(This,pValue)( (This)->lpVtbl -> GetCacheDir(This,pValue) )
#define IX509EnrollmentPolicyServer_GetAuthFlags(This,pValue)( (This)->lpVtbl -> GetAuthFlags(This,pValue) )
#define IX509EnrollmentPolicyServer_SetCredential(This,hWndParent,flag,strCredential,strPassword)( (This)->lpVtbl -> SetCredential(This,hWndParent,flag,strCredential,strPassword) )
#define IX509EnrollmentPolicyServer_QueryChanges(This,pValue)( (This)->lpVtbl -> QueryChanges(This,pValue) )
#define IX509EnrollmentPolicyServer_InitializeImport(This,val)( (This)->lpVtbl -> InitializeImport(This,val) )
#define IX509EnrollmentPolicyServer_Export(This,exportFlags,pVal)( (This)->lpVtbl -> Export(This,exportFlags,pVal) )
#define IX509EnrollmentPolicyServer_get_Cost(This,pValue)( (This)->lpVtbl -> get_Cost(This,pValue) )
#define IX509EnrollmentPolicyServer_put_Cost(This,value)( (This)->lpVtbl -> put_Cost(This,value) )
#endif
#endif
#ifndef __IX509PolicyServerUrl_INTERFACE_DEFINED__
#define __IX509PolicyServerUrl_INTERFACE_DEFINED__
extern const IID IID_IX509PolicyServerUrl;
typedef struct IX509PolicyServerUrlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509PolicyServerUrl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509PolicyServerUrl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509PolicyServerUrl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509PolicyServerUrl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509PolicyServerUrl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509PolicyServerUrl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509PolicyServerUrl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509PolicyServerUrl * This, X509CertificateEnrollmentContext context);
	HRESULT(STDMETHODCALLTYPE * get_Url) (IX509PolicyServerUrl * This, BSTR * ppValue);
	HRESULT(STDMETHODCALLTYPE * put_Url) (IX509PolicyServerUrl * This, BSTR pValue);
	HRESULT(STDMETHODCALLTYPE * get_Default) (IX509PolicyServerUrl * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Default) (IX509PolicyServerUrl * This, VARIANT_BOOL value);
	HRESULT(STDMETHODCALLTYPE * get_Flags) (IX509PolicyServerUrl * This, PolicyServerUrlFlags * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Flags) (IX509PolicyServerUrl * This, PolicyServerUrlFlags Flags);
	HRESULT(STDMETHODCALLTYPE * get_AuthFlags) (IX509PolicyServerUrl * This, X509EnrollmentAuthFlags * pValue);
	HRESULT(STDMETHODCALLTYPE * put_AuthFlags) (IX509PolicyServerUrl * This, X509EnrollmentAuthFlags Flags);
	HRESULT(STDMETHODCALLTYPE * get_Cost) (IX509PolicyServerUrl * This, DWORD * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Cost) (IX509PolicyServerUrl * This, DWORD value);
	HRESULT(STDMETHODCALLTYPE * GetStringProperty) (IX509PolicyServerUrl * This, PolicyServerUrlPropertyID propertyId, BSTR * ppValue);
	HRESULT(STDMETHODCALLTYPE * SetStringProperty) (IX509PolicyServerUrl * This, PolicyServerUrlPropertyID propertyId, BSTR pValue);
	HRESULT(STDMETHODCALLTYPE * UpdateRegistry) (IX509PolicyServerUrl * This, X509CertificateEnrollmentContext context);
	HRESULT(STDMETHODCALLTYPE * RemoveFromRegistry) (IX509PolicyServerUrl * This, X509CertificateEnrollmentContext context);
	END_INTERFACE
}  IX509PolicyServerUrlVtbl;
interface IX509PolicyServerUrl
{
	CONST_VTBL struct IX509PolicyServerUrlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509PolicyServerUrl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509PolicyServerUrl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509PolicyServerUrl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509PolicyServerUrl_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509PolicyServerUrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509PolicyServerUrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509PolicyServerUrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509PolicyServerUrl_Initialize(This,context)( (This)->lpVtbl -> Initialize(This,context) )
#define IX509PolicyServerUrl_get_Url(This,ppValue)( (This)->lpVtbl -> get_Url(This,ppValue) )
#define IX509PolicyServerUrl_put_Url(This,pValue)( (This)->lpVtbl -> put_Url(This,pValue) )
#define IX509PolicyServerUrl_get_Default(This,pValue)( (This)->lpVtbl -> get_Default(This,pValue) )
#define IX509PolicyServerUrl_put_Default(This,value)( (This)->lpVtbl -> put_Default(This,value) )
#define IX509PolicyServerUrl_get_Flags(This,pValue)( (This)->lpVtbl -> get_Flags(This,pValue) )
#define IX509PolicyServerUrl_put_Flags(This,Flags)( (This)->lpVtbl -> put_Flags(This,Flags) )
#define IX509PolicyServerUrl_get_AuthFlags(This,pValue)( (This)->lpVtbl -> get_AuthFlags(This,pValue) )
#define IX509PolicyServerUrl_put_AuthFlags(This,Flags)( (This)->lpVtbl -> put_AuthFlags(This,Flags) )
#define IX509PolicyServerUrl_get_Cost(This,pValue)( (This)->lpVtbl -> get_Cost(This,pValue) )
#define IX509PolicyServerUrl_put_Cost(This,value)( (This)->lpVtbl -> put_Cost(This,value) )
#define IX509PolicyServerUrl_GetStringProperty(This,propertyId,ppValue)( (This)->lpVtbl -> GetStringProperty(This,propertyId,ppValue) )
#define IX509PolicyServerUrl_SetStringProperty(This,propertyId,pValue)( (This)->lpVtbl -> SetStringProperty(This,propertyId,pValue) )
#define IX509PolicyServerUrl_UpdateRegistry(This,context)( (This)->lpVtbl -> UpdateRegistry(This,context) )
#define IX509PolicyServerUrl_RemoveFromRegistry(This,context)( (This)->lpVtbl -> RemoveFromRegistry(This,context) )
#endif
#endif
#ifndef __IX509PolicyServerListManager_INTERFACE_DEFINED__
#define __IX509PolicyServerListManager_INTERFACE_DEFINED__
extern const IID IID_IX509PolicyServerListManager;
typedef struct IX509PolicyServerListManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509PolicyServerListManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509PolicyServerListManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509PolicyServerListManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509PolicyServerListManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509PolicyServerListManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509PolicyServerListManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509PolicyServerListManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ItemByIndex) (IX509PolicyServerListManager * This, LONG Index, IX509PolicyServerUrl ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IX509PolicyServerListManager * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IX509PolicyServerListManager * This, LPUNKNOWN * pVal);
	HRESULT(STDMETHODCALLTYPE * Add) (IX509PolicyServerListManager * This, IX509PolicyServerUrl * pVal);
	HRESULT(STDMETHODCALLTYPE * Remove) (IX509PolicyServerListManager * This, LONG Index);
	HRESULT(STDMETHODCALLTYPE * Clear) (IX509PolicyServerListManager * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509PolicyServerListManager * This, X509CertificateEnrollmentContext context, PolicyServerUrlFlags Flags);
	END_INTERFACE
}  IX509PolicyServerListManagerVtbl;
interface IX509PolicyServerListManager
{
	CONST_VTBL struct IX509PolicyServerListManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509PolicyServerListManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509PolicyServerListManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509PolicyServerListManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509PolicyServerListManager_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509PolicyServerListManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509PolicyServerListManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509PolicyServerListManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509PolicyServerListManager_get_ItemByIndex(This,Index,pVal)( (This)->lpVtbl -> get_ItemByIndex(This,Index,pVal) )
#define IX509PolicyServerListManager_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IX509PolicyServerListManager_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#define IX509PolicyServerListManager_Add(This,pVal)( (This)->lpVtbl -> Add(This,pVal) )
#define IX509PolicyServerListManager_Remove(This,Index)( (This)->lpVtbl -> Remove(This,Index) )
#define IX509PolicyServerListManager_Clear(This)( (This)->lpVtbl -> Clear(This) )
#define IX509PolicyServerListManager_Initialize(This,context,Flags)( (This)->lpVtbl -> Initialize(This,context,Flags) )
#endif
#endif
typedef enum X509RequestType
{
	TypeAny = 0,
	TypePkcs10 = 1,
	TypePkcs7 = 2,
	TypeCmc = 3,
	TypeCertificate = 4
} X509RequestType;
typedef enum X509RequestInheritOptions
{
	InheritDefault = 0,
	InheritNewDefaultKey = 0x1,
	InheritNewSimilarKey = 0x2,
	InheritPrivateKey = 0x3,
	InheritPublicKey = 0x4,
	InheritKeyMask = 0xf,
	InheritNone = 0x10,
	InheritRenewalCertificateFlag = 0x20,
	InheritTemplateFlag = 0x40,
	InheritSubjectFlag = 0x80,
	InheritExtensionsFlag = 0x100,
	InheritSubjectAltNameFlag = 0x200,
	InheritValidityPeriodFlag = 0x400
} X509RequestInheritOptions;
typedef enum InnerRequestLevel
{
	LevelInnermost = 0,
	LevelNext = 1
} InnerRequestLevel;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0072_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0072_v0_0_s_ifspec;
#ifndef __IX509CertificateRequest_INTERFACE_DEFINED__
#define __IX509CertificateRequest_INTERFACE_DEFINED__
extern const IID IID_IX509CertificateRequest;
typedef struct IX509CertificateRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509CertificateRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509CertificateRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509CertificateRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509CertificateRequest * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509CertificateRequest * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509CertificateRequest * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509CertificateRequest * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509CertificateRequest * This, X509CertificateEnrollmentContext Context);
	HRESULT(STDMETHODCALLTYPE * Encode) (IX509CertificateRequest * This);
	HRESULT(STDMETHODCALLTYPE * ResetForEncode) (IX509CertificateRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetInnerRequest) (IX509CertificateRequest * This, InnerRequestLevel Level, IX509CertificateRequest ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IX509CertificateRequest * This, X509RequestType * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EnrollmentContext) (IX509CertificateRequest * This, X509CertificateEnrollmentContext * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Silent) (IX509CertificateRequest * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Silent) (IX509CertificateRequest * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IX509CertificateRequest * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IX509CertificateRequest * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_UIContextMessage) (IX509CertificateRequest * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_UIContextMessage) (IX509CertificateRequest * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SuppressDefaults) (IX509CertificateRequest * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SuppressDefaults) (IX509CertificateRequest * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RenewalCertificate) (IX509CertificateRequest * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_RenewalCertificate) (IX509CertificateRequest * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_ClientId) (IX509CertificateRequest * This, RequestClientInfoClientId * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ClientId) (IX509CertificateRequest * This, RequestClientInfoClientId Value);
	HRESULT(STDMETHODCALLTYPE * get_CspInformations) (IX509CertificateRequest * This, ICspInformations ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_CspInformations) (IX509CertificateRequest * This, ICspInformations * pValue);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IX509CertificateRequest * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IX509CertificateRequest * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_AlternateSignatureAlgorithm) (IX509CertificateRequest * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_AlternateSignatureAlgorithm) (IX509CertificateRequest * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509CertificateRequest * This, EncodingType Encoding, BSTR * pValue);
	END_INTERFACE
}  IX509CertificateRequestVtbl;
interface IX509CertificateRequest
{
	CONST_VTBL struct IX509CertificateRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509CertificateRequest_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509CertificateRequest_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509CertificateRequest_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509CertificateRequest_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509CertificateRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509CertificateRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509CertificateRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509CertificateRequest_Initialize(This,Context)( (This)->lpVtbl -> Initialize(This,Context) )
#define IX509CertificateRequest_Encode(This)( (This)->lpVtbl -> Encode(This) )
#define IX509CertificateRequest_ResetForEncode(This)( (This)->lpVtbl -> ResetForEncode(This) )
#define IX509CertificateRequest_GetInnerRequest(This,Level,ppValue)( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
#define IX509CertificateRequest_get_Type(This,pValue)( (This)->lpVtbl -> get_Type(This,pValue) )
#define IX509CertificateRequest_get_EnrollmentContext(This,pValue)( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
#define IX509CertificateRequest_get_Silent(This,pValue)( (This)->lpVtbl -> get_Silent(This,pValue) )
#define IX509CertificateRequest_put_Silent(This,Value)( (This)->lpVtbl -> put_Silent(This,Value) )
#define IX509CertificateRequest_get_ParentWindow(This,pValue)( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
#define IX509CertificateRequest_put_ParentWindow(This,Value)( (This)->lpVtbl -> put_ParentWindow(This,Value) )
#define IX509CertificateRequest_get_UIContextMessage(This,pValue)( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
#define IX509CertificateRequest_put_UIContextMessage(This,Value)( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
#define IX509CertificateRequest_get_SuppressDefaults(This,pValue)( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
#define IX509CertificateRequest_put_SuppressDefaults(This,Value)( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
#define IX509CertificateRequest_get_RenewalCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
#define IX509CertificateRequest_put_RenewalCertificate(This,Encoding,Value)( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
#define IX509CertificateRequest_get_ClientId(This,pValue)( (This)->lpVtbl -> get_ClientId(This,pValue) )
#define IX509CertificateRequest_put_ClientId(This,Value)( (This)->lpVtbl -> put_ClientId(This,Value) )
#define IX509CertificateRequest_get_CspInformations(This,ppValue)( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
#define IX509CertificateRequest_put_CspInformations(This,pValue)( (This)->lpVtbl -> put_CspInformations(This,pValue) )
#define IX509CertificateRequest_get_HashAlgorithm(This,ppValue)( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
#define IX509CertificateRequest_put_HashAlgorithm(This,pValue)( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
#define IX509CertificateRequest_get_AlternateSignatureAlgorithm(This,pValue)( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
#define IX509CertificateRequest_put_AlternateSignatureAlgorithm(This,Value)( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
#define IX509CertificateRequest_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#endif
#endif
typedef enum Pkcs10AllowedSignatureTypes
{
	AllowedKeySignature = 0x1,
	AllowedNullSignature = 0x2
} Pkcs10AllowedSignatureTypes;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0073_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0073_v0_0_s_ifspec;
#ifndef __IX509CertificateRequestPkcs10_INTERFACE_DEFINED__
#define __IX509CertificateRequestPkcs10_INTERFACE_DEFINED__
extern const IID IID_IX509CertificateRequestPkcs10;
typedef struct IX509CertificateRequestPkcs10Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509CertificateRequestPkcs10 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509CertificateRequestPkcs10 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509CertificateRequestPkcs10 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509CertificateRequestPkcs10 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509CertificateRequestPkcs10 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509CertificateRequestPkcs10 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509CertificateRequestPkcs10 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509CertificateRequestPkcs10 * This, X509CertificateEnrollmentContext Context);
	HRESULT(STDMETHODCALLTYPE * Encode) (IX509CertificateRequestPkcs10 * This);
	HRESULT(STDMETHODCALLTYPE * ResetForEncode) (IX509CertificateRequestPkcs10 * This);
	HRESULT(STDMETHODCALLTYPE * GetInnerRequest) (IX509CertificateRequestPkcs10 * This, InnerRequestLevel Level, IX509CertificateRequest ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IX509CertificateRequestPkcs10 * This, X509RequestType * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EnrollmentContext) (IX509CertificateRequestPkcs10 * This, X509CertificateEnrollmentContext * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Silent) (IX509CertificateRequestPkcs10 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Silent) (IX509CertificateRequestPkcs10 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IX509CertificateRequestPkcs10 * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IX509CertificateRequestPkcs10 * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_UIContextMessage) (IX509CertificateRequestPkcs10 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_UIContextMessage) (IX509CertificateRequestPkcs10 * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SuppressDefaults) (IX509CertificateRequestPkcs10 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SuppressDefaults) (IX509CertificateRequestPkcs10 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RenewalCertificate) (IX509CertificateRequestPkcs10 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_RenewalCertificate) (IX509CertificateRequestPkcs10 * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_ClientId) (IX509CertificateRequestPkcs10 * This, RequestClientInfoClientId * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ClientId) (IX509CertificateRequestPkcs10 * This, RequestClientInfoClientId Value);
	HRESULT(STDMETHODCALLTYPE * get_CspInformations) (IX509CertificateRequestPkcs10 * This, ICspInformations ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_CspInformations) (IX509CertificateRequestPkcs10 * This, ICspInformations * pValue);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IX509CertificateRequestPkcs10 * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IX509CertificateRequestPkcs10 * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_AlternateSignatureAlgorithm) (IX509CertificateRequestPkcs10 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_AlternateSignatureAlgorithm) (IX509CertificateRequestPkcs10 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509CertificateRequestPkcs10 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplateName) (IX509CertificateRequestPkcs10 * This, X509CertificateEnrollmentContext Context, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromPrivateKey) (IX509CertificateRequestPkcs10 * This, X509CertificateEnrollmentContext Context, IX509PrivateKey * pPrivateKey, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromPublicKey) (IX509CertificateRequestPkcs10 * This, X509CertificateEnrollmentContext Context, IX509PublicKey * pPublicKey, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (IX509CertificateRequestPkcs10 * This, X509CertificateEnrollmentContext Context, BSTR strCertificate, EncodingType Encoding, X509RequestInheritOptions InheritOptions);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509CertificateRequestPkcs10 * This, BSTR strEncodedData, EncodingType Encoding);
	HRESULT(STDMETHODCALLTYPE * CheckSignature) (IX509CertificateRequestPkcs10 * This, Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
	HRESULT(STDMETHODCALLTYPE * IsSmartCard) (IX509CertificateRequestPkcs10 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_TemplateObjectId) (IX509CertificateRequestPkcs10 * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_PublicKey) (IX509CertificateRequestPkcs10 * This, IX509PublicKey ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_PrivateKey) (IX509CertificateRequestPkcs10 * This, IX509PrivateKey ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_NullSigned) (IX509CertificateRequestPkcs10 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_ReuseKey) (IX509CertificateRequestPkcs10 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_OldCertificate) (IX509CertificateRequestPkcs10 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Subject) (IX509CertificateRequestPkcs10 * This, IX500DistinguishedName ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_Subject) (IX509CertificateRequestPkcs10 * This, IX500DistinguishedName * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CspStatuses) (IX509CertificateRequestPkcs10 * This, ICspStatuses ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_SmimeCapabilities) (IX509CertificateRequestPkcs10 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SmimeCapabilities) (IX509CertificateRequestPkcs10 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_SignatureInformation) (IX509CertificateRequestPkcs10 * This, IX509SignatureInformation ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_KeyContainerNamePrefix) (IX509CertificateRequestPkcs10 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_KeyContainerNamePrefix) (IX509CertificateRequestPkcs10 * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_CryptAttributes) (IX509CertificateRequestPkcs10 * This, ICryptAttributes ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_X509Extensions) (IX509CertificateRequestPkcs10 * This, IX509Extensions ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_CriticalExtensions) (IX509CertificateRequestPkcs10 * This, IObjectIds ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_SuppressOids) (IX509CertificateRequestPkcs10 * This, IObjectIds ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawDataToBeSigned) (IX509CertificateRequestPkcs10 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Signature) (IX509CertificateRequestPkcs10 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetCspStatuses) (IX509CertificateRequestPkcs10 * This, X509KeySpec KeySpec, ICspStatuses ** ppCspStatuses);
	END_INTERFACE
}  IX509CertificateRequestPkcs10Vtbl;
interface IX509CertificateRequestPkcs10
{
	CONST_VTBL struct IX509CertificateRequestPkcs10Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509CertificateRequestPkcs10_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509CertificateRequestPkcs10_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509CertificateRequestPkcs10_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509CertificateRequestPkcs10_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509CertificateRequestPkcs10_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509CertificateRequestPkcs10_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509CertificateRequestPkcs10_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509CertificateRequestPkcs10_Initialize(This,Context)( (This)->lpVtbl -> Initialize(This,Context) )
#define IX509CertificateRequestPkcs10_Encode(This)( (This)->lpVtbl -> Encode(This) )
#define IX509CertificateRequestPkcs10_ResetForEncode(This)( (This)->lpVtbl -> ResetForEncode(This) )
#define IX509CertificateRequestPkcs10_GetInnerRequest(This,Level,ppValue)( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
#define IX509CertificateRequestPkcs10_get_Type(This,pValue)( (This)->lpVtbl -> get_Type(This,pValue) )
#define IX509CertificateRequestPkcs10_get_EnrollmentContext(This,pValue)( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
#define IX509CertificateRequestPkcs10_get_Silent(This,pValue)( (This)->lpVtbl -> get_Silent(This,pValue) )
#define IX509CertificateRequestPkcs10_put_Silent(This,Value)( (This)->lpVtbl -> put_Silent(This,Value) )
#define IX509CertificateRequestPkcs10_get_ParentWindow(This,pValue)( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
#define IX509CertificateRequestPkcs10_put_ParentWindow(This,Value)( (This)->lpVtbl -> put_ParentWindow(This,Value) )
#define IX509CertificateRequestPkcs10_get_UIContextMessage(This,pValue)( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
#define IX509CertificateRequestPkcs10_put_UIContextMessage(This,Value)( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
#define IX509CertificateRequestPkcs10_get_SuppressDefaults(This,pValue)( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
#define IX509CertificateRequestPkcs10_put_SuppressDefaults(This,Value)( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
#define IX509CertificateRequestPkcs10_get_RenewalCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs10_put_RenewalCertificate(This,Encoding,Value)( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
#define IX509CertificateRequestPkcs10_get_ClientId(This,pValue)( (This)->lpVtbl -> get_ClientId(This,pValue) )
#define IX509CertificateRequestPkcs10_put_ClientId(This,Value)( (This)->lpVtbl -> put_ClientId(This,Value) )
#define IX509CertificateRequestPkcs10_get_CspInformations(This,ppValue)( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
#define IX509CertificateRequestPkcs10_put_CspInformations(This,pValue)( (This)->lpVtbl -> put_CspInformations(This,pValue) )
#define IX509CertificateRequestPkcs10_get_HashAlgorithm(This,ppValue)( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
#define IX509CertificateRequestPkcs10_put_HashAlgorithm(This,pValue)( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
#define IX509CertificateRequestPkcs10_get_AlternateSignatureAlgorithm(This,pValue)( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
#define IX509CertificateRequestPkcs10_put_AlternateSignatureAlgorithm(This,Value)( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
#define IX509CertificateRequestPkcs10_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs10_InitializeFromTemplateName(This,Context,strTemplateName)( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
#define IX509CertificateRequestPkcs10_InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName)( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) )
#define IX509CertificateRequestPkcs10_InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName)( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) )
#define IX509CertificateRequestPkcs10_InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions)( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) )
#define IX509CertificateRequestPkcs10_InitializeDecode(This,strEncodedData,Encoding)( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
#define IX509CertificateRequestPkcs10_CheckSignature(This,AllowedSignatureTypes)( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) )
#define IX509CertificateRequestPkcs10_IsSmartCard(This,pValue)( (This)->lpVtbl -> IsSmartCard(This,pValue) )
#define IX509CertificateRequestPkcs10_get_TemplateObjectId(This,ppValue)( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
#define IX509CertificateRequestPkcs10_get_PublicKey(This,ppValue)( (This)->lpVtbl -> get_PublicKey(This,ppValue) )
#define IX509CertificateRequestPkcs10_get_PrivateKey(This,ppValue)( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
#define IX509CertificateRequestPkcs10_get_NullSigned(This,pValue)( (This)->lpVtbl -> get_NullSigned(This,pValue) )
#define IX509CertificateRequestPkcs10_get_ReuseKey(This,pValue)( (This)->lpVtbl -> get_ReuseKey(This,pValue) )
#define IX509CertificateRequestPkcs10_get_OldCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs10_get_Subject(This,ppValue)( (This)->lpVtbl -> get_Subject(This,ppValue) )
#define IX509CertificateRequestPkcs10_put_Subject(This,pValue)( (This)->lpVtbl -> put_Subject(This,pValue) )
#define IX509CertificateRequestPkcs10_get_CspStatuses(This,ppValue)( (This)->lpVtbl -> get_CspStatuses(This,ppValue) )
#define IX509CertificateRequestPkcs10_get_SmimeCapabilities(This,pValue)( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) )
#define IX509CertificateRequestPkcs10_put_SmimeCapabilities(This,Value)( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) )
#define IX509CertificateRequestPkcs10_get_SignatureInformation(This,ppValue)( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
#define IX509CertificateRequestPkcs10_get_KeyContainerNamePrefix(This,pValue)( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) )
#define IX509CertificateRequestPkcs10_put_KeyContainerNamePrefix(This,Value)( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) )
#define IX509CertificateRequestPkcs10_get_CryptAttributes(This,ppValue)( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
#define IX509CertificateRequestPkcs10_get_X509Extensions(This,ppValue)( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
#define IX509CertificateRequestPkcs10_get_CriticalExtensions(This,ppValue)( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
#define IX509CertificateRequestPkcs10_get_SuppressOids(This,ppValue)( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
#define IX509CertificateRequestPkcs10_get_RawDataToBeSigned(This,Encoding,pValue)( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs10_get_Signature(This,Encoding,pValue)( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs10_GetCspStatuses(This,KeySpec,ppCspStatuses)( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) )
#endif
#endif
#ifndef __IX509CertificateRequestPkcs10V2_INTERFACE_DEFINED__
#define __IX509CertificateRequestPkcs10V2_INTERFACE_DEFINED__
extern const IID IID_IX509CertificateRequestPkcs10V2;
typedef struct IX509CertificateRequestPkcs10V2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509CertificateRequestPkcs10V2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509CertificateRequestPkcs10V2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509CertificateRequestPkcs10V2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509CertificateRequestPkcs10V2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509CertificateRequestPkcs10V2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509CertificateRequestPkcs10V2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509CertificateRequestPkcs10V2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509CertificateRequestPkcs10V2 * This, X509CertificateEnrollmentContext Context);
	HRESULT(STDMETHODCALLTYPE * Encode) (IX509CertificateRequestPkcs10V2 * This);
	HRESULT(STDMETHODCALLTYPE * ResetForEncode) (IX509CertificateRequestPkcs10V2 * This);
	HRESULT(STDMETHODCALLTYPE * GetInnerRequest) (IX509CertificateRequestPkcs10V2 * This, InnerRequestLevel Level, IX509CertificateRequest ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IX509CertificateRequestPkcs10V2 * This, X509RequestType * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EnrollmentContext) (IX509CertificateRequestPkcs10V2 * This, X509CertificateEnrollmentContext * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Silent) (IX509CertificateRequestPkcs10V2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Silent) (IX509CertificateRequestPkcs10V2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IX509CertificateRequestPkcs10V2 * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IX509CertificateRequestPkcs10V2 * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_UIContextMessage) (IX509CertificateRequestPkcs10V2 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_UIContextMessage) (IX509CertificateRequestPkcs10V2 * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SuppressDefaults) (IX509CertificateRequestPkcs10V2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SuppressDefaults) (IX509CertificateRequestPkcs10V2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RenewalCertificate) (IX509CertificateRequestPkcs10V2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_RenewalCertificate) (IX509CertificateRequestPkcs10V2 * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_ClientId) (IX509CertificateRequestPkcs10V2 * This, RequestClientInfoClientId * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ClientId) (IX509CertificateRequestPkcs10V2 * This, RequestClientInfoClientId Value);
	HRESULT(STDMETHODCALLTYPE * get_CspInformations) (IX509CertificateRequestPkcs10V2 * This, ICspInformations ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_CspInformations) (IX509CertificateRequestPkcs10V2 * This, ICspInformations * pValue);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IX509CertificateRequestPkcs10V2 * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IX509CertificateRequestPkcs10V2 * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_AlternateSignatureAlgorithm) (IX509CertificateRequestPkcs10V2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_AlternateSignatureAlgorithm) (IX509CertificateRequestPkcs10V2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509CertificateRequestPkcs10V2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplateName) (IX509CertificateRequestPkcs10V2 * This, X509CertificateEnrollmentContext Context, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromPrivateKey) (IX509CertificateRequestPkcs10V2 * This, X509CertificateEnrollmentContext Context, IX509PrivateKey * pPrivateKey, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromPublicKey) (IX509CertificateRequestPkcs10V2 * This, X509CertificateEnrollmentContext Context, IX509PublicKey * pPublicKey, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (IX509CertificateRequestPkcs10V2 * This, X509CertificateEnrollmentContext Context, BSTR strCertificate, EncodingType Encoding, X509RequestInheritOptions InheritOptions);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509CertificateRequestPkcs10V2 * This, BSTR strEncodedData, EncodingType Encoding);
	HRESULT(STDMETHODCALLTYPE * CheckSignature) (IX509CertificateRequestPkcs10V2 * This, Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
	HRESULT(STDMETHODCALLTYPE * IsSmartCard) (IX509CertificateRequestPkcs10V2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_TemplateObjectId) (IX509CertificateRequestPkcs10V2 * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_PublicKey) (IX509CertificateRequestPkcs10V2 * This, IX509PublicKey ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_PrivateKey) (IX509CertificateRequestPkcs10V2 * This, IX509PrivateKey ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_NullSigned) (IX509CertificateRequestPkcs10V2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_ReuseKey) (IX509CertificateRequestPkcs10V2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_OldCertificate) (IX509CertificateRequestPkcs10V2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Subject) (IX509CertificateRequestPkcs10V2 * This, IX500DistinguishedName ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_Subject) (IX509CertificateRequestPkcs10V2 * This, IX500DistinguishedName * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CspStatuses) (IX509CertificateRequestPkcs10V2 * This, ICspStatuses ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_SmimeCapabilities) (IX509CertificateRequestPkcs10V2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SmimeCapabilities) (IX509CertificateRequestPkcs10V2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_SignatureInformation) (IX509CertificateRequestPkcs10V2 * This, IX509SignatureInformation ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_KeyContainerNamePrefix) (IX509CertificateRequestPkcs10V2 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_KeyContainerNamePrefix) (IX509CertificateRequestPkcs10V2 * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_CryptAttributes) (IX509CertificateRequestPkcs10V2 * This, ICryptAttributes ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_X509Extensions) (IX509CertificateRequestPkcs10V2 * This, IX509Extensions ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_CriticalExtensions) (IX509CertificateRequestPkcs10V2 * This, IObjectIds ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_SuppressOids) (IX509CertificateRequestPkcs10V2 * This, IObjectIds ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawDataToBeSigned) (IX509CertificateRequestPkcs10V2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Signature) (IX509CertificateRequestPkcs10V2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetCspStatuses) (IX509CertificateRequestPkcs10V2 * This, X509KeySpec KeySpec, ICspStatuses ** ppCspStatuses);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplate) (IX509CertificateRequestPkcs10V2 * This, X509CertificateEnrollmentContext context, IX509EnrollmentPolicyServer * pPolicyServer, IX509CertificateTemplate * pTemplate);
	HRESULT(STDMETHODCALLTYPE * InitializeFromPrivateKeyTemplate) (IX509CertificateRequestPkcs10V2 * This, X509CertificateEnrollmentContext Context, IX509PrivateKey * pPrivateKey, IX509EnrollmentPolicyServer * pPolicyServer, IX509CertificateTemplate * pTemplate);
	HRESULT(STDMETHODCALLTYPE * InitializeFromPublicKeyTemplate) (IX509CertificateRequestPkcs10V2 * This, X509CertificateEnrollmentContext Context, IX509PublicKey * pPublicKey, IX509EnrollmentPolicyServer * pPolicyServer, IX509CertificateTemplate * pTemplate);
	HRESULT(STDMETHODCALLTYPE * get_PolicyServer) (IX509CertificateRequestPkcs10V2 * This, IX509EnrollmentPolicyServer ** ppPolicyServer);
	HRESULT(STDMETHODCALLTYPE * get_Template) (IX509CertificateRequestPkcs10V2 * This, IX509CertificateTemplate ** ppTemplate);
	END_INTERFACE
}  IX509CertificateRequestPkcs10V2Vtbl;
interface IX509CertificateRequestPkcs10V2
{
	CONST_VTBL struct IX509CertificateRequestPkcs10V2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509CertificateRequestPkcs10V2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509CertificateRequestPkcs10V2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509CertificateRequestPkcs10V2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509CertificateRequestPkcs10V2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509CertificateRequestPkcs10V2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509CertificateRequestPkcs10V2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509CertificateRequestPkcs10V2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509CertificateRequestPkcs10V2_Initialize(This,Context)( (This)->lpVtbl -> Initialize(This,Context) )
#define IX509CertificateRequestPkcs10V2_Encode(This)( (This)->lpVtbl -> Encode(This) )
#define IX509CertificateRequestPkcs10V2_ResetForEncode(This)( (This)->lpVtbl -> ResetForEncode(This) )
#define IX509CertificateRequestPkcs10V2_GetInnerRequest(This,Level,ppValue)( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
#define IX509CertificateRequestPkcs10V2_get_Type(This,pValue)( (This)->lpVtbl -> get_Type(This,pValue) )
#define IX509CertificateRequestPkcs10V2_get_EnrollmentContext(This,pValue)( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
#define IX509CertificateRequestPkcs10V2_get_Silent(This,pValue)( (This)->lpVtbl -> get_Silent(This,pValue) )
#define IX509CertificateRequestPkcs10V2_put_Silent(This,Value)( (This)->lpVtbl -> put_Silent(This,Value) )
#define IX509CertificateRequestPkcs10V2_get_ParentWindow(This,pValue)( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
#define IX509CertificateRequestPkcs10V2_put_ParentWindow(This,Value)( (This)->lpVtbl -> put_ParentWindow(This,Value) )
#define IX509CertificateRequestPkcs10V2_get_UIContextMessage(This,pValue)( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
#define IX509CertificateRequestPkcs10V2_put_UIContextMessage(This,Value)( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
#define IX509CertificateRequestPkcs10V2_get_SuppressDefaults(This,pValue)( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
#define IX509CertificateRequestPkcs10V2_put_SuppressDefaults(This,Value)( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
#define IX509CertificateRequestPkcs10V2_get_RenewalCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs10V2_put_RenewalCertificate(This,Encoding,Value)( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
#define IX509CertificateRequestPkcs10V2_get_ClientId(This,pValue)( (This)->lpVtbl -> get_ClientId(This,pValue) )
#define IX509CertificateRequestPkcs10V2_put_ClientId(This,Value)( (This)->lpVtbl -> put_ClientId(This,Value) )
#define IX509CertificateRequestPkcs10V2_get_CspInformations(This,ppValue)( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
#define IX509CertificateRequestPkcs10V2_put_CspInformations(This,pValue)( (This)->lpVtbl -> put_CspInformations(This,pValue) )
#define IX509CertificateRequestPkcs10V2_get_HashAlgorithm(This,ppValue)( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
#define IX509CertificateRequestPkcs10V2_put_HashAlgorithm(This,pValue)( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
#define IX509CertificateRequestPkcs10V2_get_AlternateSignatureAlgorithm(This,pValue)( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
#define IX509CertificateRequestPkcs10V2_put_AlternateSignatureAlgorithm(This,Value)( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
#define IX509CertificateRequestPkcs10V2_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs10V2_InitializeFromTemplateName(This,Context,strTemplateName)( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
#define IX509CertificateRequestPkcs10V2_InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName)( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) )
#define IX509CertificateRequestPkcs10V2_InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName)( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) )
#define IX509CertificateRequestPkcs10V2_InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions)( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) )
#define IX509CertificateRequestPkcs10V2_InitializeDecode(This,strEncodedData,Encoding)( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
#define IX509CertificateRequestPkcs10V2_CheckSignature(This,AllowedSignatureTypes)( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) )
#define IX509CertificateRequestPkcs10V2_IsSmartCard(This,pValue)( (This)->lpVtbl -> IsSmartCard(This,pValue) )
#define IX509CertificateRequestPkcs10V2_get_TemplateObjectId(This,ppValue)( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
#define IX509CertificateRequestPkcs10V2_get_PublicKey(This,ppValue)( (This)->lpVtbl -> get_PublicKey(This,ppValue) )
#define IX509CertificateRequestPkcs10V2_get_PrivateKey(This,ppValue)( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
#define IX509CertificateRequestPkcs10V2_get_NullSigned(This,pValue)( (This)->lpVtbl -> get_NullSigned(This,pValue) )
#define IX509CertificateRequestPkcs10V2_get_ReuseKey(This,pValue)( (This)->lpVtbl -> get_ReuseKey(This,pValue) )
#define IX509CertificateRequestPkcs10V2_get_OldCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs10V2_get_Subject(This,ppValue)( (This)->lpVtbl -> get_Subject(This,ppValue) )
#define IX509CertificateRequestPkcs10V2_put_Subject(This,pValue)( (This)->lpVtbl -> put_Subject(This,pValue) )
#define IX509CertificateRequestPkcs10V2_get_CspStatuses(This,ppValue)( (This)->lpVtbl -> get_CspStatuses(This,ppValue) )
#define IX509CertificateRequestPkcs10V2_get_SmimeCapabilities(This,pValue)( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) )
#define IX509CertificateRequestPkcs10V2_put_SmimeCapabilities(This,Value)( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) )
#define IX509CertificateRequestPkcs10V2_get_SignatureInformation(This,ppValue)( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
#define IX509CertificateRequestPkcs10V2_get_KeyContainerNamePrefix(This,pValue)( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) )
#define IX509CertificateRequestPkcs10V2_put_KeyContainerNamePrefix(This,Value)( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) )
#define IX509CertificateRequestPkcs10V2_get_CryptAttributes(This,ppValue)( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
#define IX509CertificateRequestPkcs10V2_get_X509Extensions(This,ppValue)( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
#define IX509CertificateRequestPkcs10V2_get_CriticalExtensions(This,ppValue)( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
#define IX509CertificateRequestPkcs10V2_get_SuppressOids(This,ppValue)( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
#define IX509CertificateRequestPkcs10V2_get_RawDataToBeSigned(This,Encoding,pValue)( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs10V2_get_Signature(This,Encoding,pValue)( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs10V2_GetCspStatuses(This,KeySpec,ppCspStatuses)( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) )
#define IX509CertificateRequestPkcs10V2_InitializeFromTemplate(This,context,pPolicyServer,pTemplate)( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) )
#define IX509CertificateRequestPkcs10V2_InitializeFromPrivateKeyTemplate(This,Context,pPrivateKey,pPolicyServer,pTemplate)( (This)->lpVtbl -> InitializeFromPrivateKeyTemplate(This,Context,pPrivateKey,pPolicyServer,pTemplate) )
#define IX509CertificateRequestPkcs10V2_InitializeFromPublicKeyTemplate(This,Context,pPublicKey,pPolicyServer,pTemplate)( (This)->lpVtbl -> InitializeFromPublicKeyTemplate(This,Context,pPublicKey,pPolicyServer,pTemplate) )
#define IX509CertificateRequestPkcs10V2_get_PolicyServer(This,ppPolicyServer)( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) )
#define IX509CertificateRequestPkcs10V2_get_Template(This,ppTemplate)( (This)->lpVtbl -> get_Template(This,ppTemplate) )
#endif
#endif
#ifndef __IX509CertificateRequestCertificate_INTERFACE_DEFINED__
#define __IX509CertificateRequestCertificate_INTERFACE_DEFINED__
extern const IID IID_IX509CertificateRequestCertificate;
typedef struct IX509CertificateRequestCertificateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509CertificateRequestCertificate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509CertificateRequestCertificate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509CertificateRequestCertificate * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509CertificateRequestCertificate * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509CertificateRequestCertificate * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509CertificateRequestCertificate * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509CertificateRequestCertificate * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509CertificateRequestCertificate * This, X509CertificateEnrollmentContext Context);
	HRESULT(STDMETHODCALLTYPE * Encode) (IX509CertificateRequestCertificate * This);
	HRESULT(STDMETHODCALLTYPE * ResetForEncode) (IX509CertificateRequestCertificate * This);
	HRESULT(STDMETHODCALLTYPE * GetInnerRequest) (IX509CertificateRequestCertificate * This, InnerRequestLevel Level, IX509CertificateRequest ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IX509CertificateRequestCertificate * This, X509RequestType * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EnrollmentContext) (IX509CertificateRequestCertificate * This, X509CertificateEnrollmentContext * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Silent) (IX509CertificateRequestCertificate * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Silent) (IX509CertificateRequestCertificate * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IX509CertificateRequestCertificate * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IX509CertificateRequestCertificate * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_UIContextMessage) (IX509CertificateRequestCertificate * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_UIContextMessage) (IX509CertificateRequestCertificate * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SuppressDefaults) (IX509CertificateRequestCertificate * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SuppressDefaults) (IX509CertificateRequestCertificate * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RenewalCertificate) (IX509CertificateRequestCertificate * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_RenewalCertificate) (IX509CertificateRequestCertificate * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_ClientId) (IX509CertificateRequestCertificate * This, RequestClientInfoClientId * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ClientId) (IX509CertificateRequestCertificate * This, RequestClientInfoClientId Value);
	HRESULT(STDMETHODCALLTYPE * get_CspInformations) (IX509CertificateRequestCertificate * This, ICspInformations ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_CspInformations) (IX509CertificateRequestCertificate * This, ICspInformations * pValue);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IX509CertificateRequestCertificate * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IX509CertificateRequestCertificate * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_AlternateSignatureAlgorithm) (IX509CertificateRequestCertificate * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_AlternateSignatureAlgorithm) (IX509CertificateRequestCertificate * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509CertificateRequestCertificate * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplateName) (IX509CertificateRequestCertificate * This, X509CertificateEnrollmentContext Context, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromPrivateKey) (IX509CertificateRequestCertificate * This, X509CertificateEnrollmentContext Context, IX509PrivateKey * pPrivateKey, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromPublicKey) (IX509CertificateRequestCertificate * This, X509CertificateEnrollmentContext Context, IX509PublicKey * pPublicKey, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (IX509CertificateRequestCertificate * This, X509CertificateEnrollmentContext Context, BSTR strCertificate, EncodingType Encoding, X509RequestInheritOptions InheritOptions);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509CertificateRequestCertificate * This, BSTR strEncodedData, EncodingType Encoding);
	HRESULT(STDMETHODCALLTYPE * CheckSignature) (IX509CertificateRequestCertificate * This, Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
	HRESULT(STDMETHODCALLTYPE * IsSmartCard) (IX509CertificateRequestCertificate * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_TemplateObjectId) (IX509CertificateRequestCertificate * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_PublicKey) (IX509CertificateRequestCertificate * This, IX509PublicKey ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_PrivateKey) (IX509CertificateRequestCertificate * This, IX509PrivateKey ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_NullSigned) (IX509CertificateRequestCertificate * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_ReuseKey) (IX509CertificateRequestCertificate * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_OldCertificate) (IX509CertificateRequestCertificate * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Subject) (IX509CertificateRequestCertificate * This, IX500DistinguishedName ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_Subject) (IX509CertificateRequestCertificate * This, IX500DistinguishedName * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CspStatuses) (IX509CertificateRequestCertificate * This, ICspStatuses ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_SmimeCapabilities) (IX509CertificateRequestCertificate * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SmimeCapabilities) (IX509CertificateRequestCertificate * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_SignatureInformation) (IX509CertificateRequestCertificate * This, IX509SignatureInformation ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_KeyContainerNamePrefix) (IX509CertificateRequestCertificate * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_KeyContainerNamePrefix) (IX509CertificateRequestCertificate * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_CryptAttributes) (IX509CertificateRequestCertificate * This, ICryptAttributes ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_X509Extensions) (IX509CertificateRequestCertificate * This, IX509Extensions ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_CriticalExtensions) (IX509CertificateRequestCertificate * This, IObjectIds ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_SuppressOids) (IX509CertificateRequestCertificate * This, IObjectIds ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawDataToBeSigned) (IX509CertificateRequestCertificate * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Signature) (IX509CertificateRequestCertificate * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetCspStatuses) (IX509CertificateRequestCertificate * This, X509KeySpec KeySpec, ICspStatuses ** ppCspStatuses);
	HRESULT(STDMETHODCALLTYPE * CheckPublicKeySignature) (IX509CertificateRequestCertificate * This, IX509PublicKey * pPublicKey);
	HRESULT(STDMETHODCALLTYPE * get_Issuer) (IX509CertificateRequestCertificate * This, IX500DistinguishedName ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_Issuer) (IX509CertificateRequestCertificate * This, IX500DistinguishedName * pValue);
	HRESULT(STDMETHODCALLTYPE * get_NotBefore) (IX509CertificateRequestCertificate * This, DATE * pValue);
	HRESULT(STDMETHODCALLTYPE * put_NotBefore) (IX509CertificateRequestCertificate * This, DATE Value);
	HRESULT(STDMETHODCALLTYPE * get_NotAfter) (IX509CertificateRequestCertificate * This, DATE * pValue);
	HRESULT(STDMETHODCALLTYPE * put_NotAfter) (IX509CertificateRequestCertificate * This, DATE Value);
	HRESULT(STDMETHODCALLTYPE * get_SerialNumber) (IX509CertificateRequestCertificate * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SerialNumber) (IX509CertificateRequestCertificate * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SignerCertificate) (IX509CertificateRequestCertificate * This, ISignerCertificate ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_SignerCertificate) (IX509CertificateRequestCertificate * This, ISignerCertificate * pValue);
	END_INTERFACE
}  IX509CertificateRequestCertificateVtbl;
interface IX509CertificateRequestCertificate
{
	CONST_VTBL struct IX509CertificateRequestCertificateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509CertificateRequestCertificate_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509CertificateRequestCertificate_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509CertificateRequestCertificate_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509CertificateRequestCertificate_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509CertificateRequestCertificate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509CertificateRequestCertificate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509CertificateRequestCertificate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509CertificateRequestCertificate_Initialize(This,Context)( (This)->lpVtbl -> Initialize(This,Context) )
#define IX509CertificateRequestCertificate_Encode(This)( (This)->lpVtbl -> Encode(This) )
#define IX509CertificateRequestCertificate_ResetForEncode(This)( (This)->lpVtbl -> ResetForEncode(This) )
#define IX509CertificateRequestCertificate_GetInnerRequest(This,Level,ppValue)( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
#define IX509CertificateRequestCertificate_get_Type(This,pValue)( (This)->lpVtbl -> get_Type(This,pValue) )
#define IX509CertificateRequestCertificate_get_EnrollmentContext(This,pValue)( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
#define IX509CertificateRequestCertificate_get_Silent(This,pValue)( (This)->lpVtbl -> get_Silent(This,pValue) )
#define IX509CertificateRequestCertificate_put_Silent(This,Value)( (This)->lpVtbl -> put_Silent(This,Value) )
#define IX509CertificateRequestCertificate_get_ParentWindow(This,pValue)( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
#define IX509CertificateRequestCertificate_put_ParentWindow(This,Value)( (This)->lpVtbl -> put_ParentWindow(This,Value) )
#define IX509CertificateRequestCertificate_get_UIContextMessage(This,pValue)( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
#define IX509CertificateRequestCertificate_put_UIContextMessage(This,Value)( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
#define IX509CertificateRequestCertificate_get_SuppressDefaults(This,pValue)( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
#define IX509CertificateRequestCertificate_put_SuppressDefaults(This,Value)( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
#define IX509CertificateRequestCertificate_get_RenewalCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestCertificate_put_RenewalCertificate(This,Encoding,Value)( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
#define IX509CertificateRequestCertificate_get_ClientId(This,pValue)( (This)->lpVtbl -> get_ClientId(This,pValue) )
#define IX509CertificateRequestCertificate_put_ClientId(This,Value)( (This)->lpVtbl -> put_ClientId(This,Value) )
#define IX509CertificateRequestCertificate_get_CspInformations(This,ppValue)( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
#define IX509CertificateRequestCertificate_put_CspInformations(This,pValue)( (This)->lpVtbl -> put_CspInformations(This,pValue) )
#define IX509CertificateRequestCertificate_get_HashAlgorithm(This,ppValue)( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
#define IX509CertificateRequestCertificate_put_HashAlgorithm(This,pValue)( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
#define IX509CertificateRequestCertificate_get_AlternateSignatureAlgorithm(This,pValue)( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
#define IX509CertificateRequestCertificate_put_AlternateSignatureAlgorithm(This,Value)( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
#define IX509CertificateRequestCertificate_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509CertificateRequestCertificate_InitializeFromTemplateName(This,Context,strTemplateName)( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
#define IX509CertificateRequestCertificate_InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName)( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) )
#define IX509CertificateRequestCertificate_InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName)( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) )
#define IX509CertificateRequestCertificate_InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions)( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) )
#define IX509CertificateRequestCertificate_InitializeDecode(This,strEncodedData,Encoding)( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
#define IX509CertificateRequestCertificate_CheckSignature(This,AllowedSignatureTypes)( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) )
#define IX509CertificateRequestCertificate_IsSmartCard(This,pValue)( (This)->lpVtbl -> IsSmartCard(This,pValue) )
#define IX509CertificateRequestCertificate_get_TemplateObjectId(This,ppValue)( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
#define IX509CertificateRequestCertificate_get_PublicKey(This,ppValue)( (This)->lpVtbl -> get_PublicKey(This,ppValue) )
#define IX509CertificateRequestCertificate_get_PrivateKey(This,ppValue)( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
#define IX509CertificateRequestCertificate_get_NullSigned(This,pValue)( (This)->lpVtbl -> get_NullSigned(This,pValue) )
#define IX509CertificateRequestCertificate_get_ReuseKey(This,pValue)( (This)->lpVtbl -> get_ReuseKey(This,pValue) )
#define IX509CertificateRequestCertificate_get_OldCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestCertificate_get_Subject(This,ppValue)( (This)->lpVtbl -> get_Subject(This,ppValue) )
#define IX509CertificateRequestCertificate_put_Subject(This,pValue)( (This)->lpVtbl -> put_Subject(This,pValue) )
#define IX509CertificateRequestCertificate_get_CspStatuses(This,ppValue)( (This)->lpVtbl -> get_CspStatuses(This,ppValue) )
#define IX509CertificateRequestCertificate_get_SmimeCapabilities(This,pValue)( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) )
#define IX509CertificateRequestCertificate_put_SmimeCapabilities(This,Value)( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) )
#define IX509CertificateRequestCertificate_get_SignatureInformation(This,ppValue)( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
#define IX509CertificateRequestCertificate_get_KeyContainerNamePrefix(This,pValue)( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) )
#define IX509CertificateRequestCertificate_put_KeyContainerNamePrefix(This,Value)( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) )
#define IX509CertificateRequestCertificate_get_CryptAttributes(This,ppValue)( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
#define IX509CertificateRequestCertificate_get_X509Extensions(This,ppValue)( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
#define IX509CertificateRequestCertificate_get_CriticalExtensions(This,ppValue)( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
#define IX509CertificateRequestCertificate_get_SuppressOids(This,ppValue)( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
#define IX509CertificateRequestCertificate_get_RawDataToBeSigned(This,Encoding,pValue)( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) )
#define IX509CertificateRequestCertificate_get_Signature(This,Encoding,pValue)( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) )
#define IX509CertificateRequestCertificate_GetCspStatuses(This,KeySpec,ppCspStatuses)( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) )
#define IX509CertificateRequestCertificate_CheckPublicKeySignature(This,pPublicKey)( (This)->lpVtbl -> CheckPublicKeySignature(This,pPublicKey) )
#define IX509CertificateRequestCertificate_get_Issuer(This,ppValue)( (This)->lpVtbl -> get_Issuer(This,ppValue) )
#define IX509CertificateRequestCertificate_put_Issuer(This,pValue)( (This)->lpVtbl -> put_Issuer(This,pValue) )
#define IX509CertificateRequestCertificate_get_NotBefore(This,pValue)( (This)->lpVtbl -> get_NotBefore(This,pValue) )
#define IX509CertificateRequestCertificate_put_NotBefore(This,Value)( (This)->lpVtbl -> put_NotBefore(This,Value) )
#define IX509CertificateRequestCertificate_get_NotAfter(This,pValue)( (This)->lpVtbl -> get_NotAfter(This,pValue) )
#define IX509CertificateRequestCertificate_put_NotAfter(This,Value)( (This)->lpVtbl -> put_NotAfter(This,Value) )
#define IX509CertificateRequestCertificate_get_SerialNumber(This,Encoding,pValue)( (This)->lpVtbl -> get_SerialNumber(This,Encoding,pValue) )
#define IX509CertificateRequestCertificate_put_SerialNumber(This,Encoding,Value)( (This)->lpVtbl -> put_SerialNumber(This,Encoding,Value) )
#define IX509CertificateRequestCertificate_get_SignerCertificate(This,ppValue)( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
#define IX509CertificateRequestCertificate_put_SignerCertificate(This,pValue)( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
#endif
#endif
#ifndef __IX509CertificateRequestCertificate2_INTERFACE_DEFINED__
#define __IX509CertificateRequestCertificate2_INTERFACE_DEFINED__
extern const IID IID_IX509CertificateRequestCertificate2;
typedef struct IX509CertificateRequestCertificate2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509CertificateRequestCertificate2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509CertificateRequestCertificate2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509CertificateRequestCertificate2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509CertificateRequestCertificate2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509CertificateRequestCertificate2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509CertificateRequestCertificate2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509CertificateRequestCertificate2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509CertificateRequestCertificate2 * This, X509CertificateEnrollmentContext Context);
	HRESULT(STDMETHODCALLTYPE * Encode) (IX509CertificateRequestCertificate2 * This);
	HRESULT(STDMETHODCALLTYPE * ResetForEncode) (IX509CertificateRequestCertificate2 * This);
	HRESULT(STDMETHODCALLTYPE * GetInnerRequest) (IX509CertificateRequestCertificate2 * This, InnerRequestLevel Level, IX509CertificateRequest ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IX509CertificateRequestCertificate2 * This, X509RequestType * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EnrollmentContext) (IX509CertificateRequestCertificate2 * This, X509CertificateEnrollmentContext * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Silent) (IX509CertificateRequestCertificate2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Silent) (IX509CertificateRequestCertificate2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IX509CertificateRequestCertificate2 * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IX509CertificateRequestCertificate2 * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_UIContextMessage) (IX509CertificateRequestCertificate2 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_UIContextMessage) (IX509CertificateRequestCertificate2 * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SuppressDefaults) (IX509CertificateRequestCertificate2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SuppressDefaults) (IX509CertificateRequestCertificate2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RenewalCertificate) (IX509CertificateRequestCertificate2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_RenewalCertificate) (IX509CertificateRequestCertificate2 * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_ClientId) (IX509CertificateRequestCertificate2 * This, RequestClientInfoClientId * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ClientId) (IX509CertificateRequestCertificate2 * This, RequestClientInfoClientId Value);
	HRESULT(STDMETHODCALLTYPE * get_CspInformations) (IX509CertificateRequestCertificate2 * This, ICspInformations ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_CspInformations) (IX509CertificateRequestCertificate2 * This, ICspInformations * pValue);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IX509CertificateRequestCertificate2 * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IX509CertificateRequestCertificate2 * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_AlternateSignatureAlgorithm) (IX509CertificateRequestCertificate2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_AlternateSignatureAlgorithm) (IX509CertificateRequestCertificate2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509CertificateRequestCertificate2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplateName) (IX509CertificateRequestCertificate2 * This, X509CertificateEnrollmentContext Context, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromPrivateKey) (IX509CertificateRequestCertificate2 * This, X509CertificateEnrollmentContext Context, IX509PrivateKey * pPrivateKey, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromPublicKey) (IX509CertificateRequestCertificate2 * This, X509CertificateEnrollmentContext Context, IX509PublicKey * pPublicKey, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (IX509CertificateRequestCertificate2 * This, X509CertificateEnrollmentContext Context, BSTR strCertificate, EncodingType Encoding, X509RequestInheritOptions InheritOptions);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509CertificateRequestCertificate2 * This, BSTR strEncodedData, EncodingType Encoding);
	HRESULT(STDMETHODCALLTYPE * CheckSignature) (IX509CertificateRequestCertificate2 * This, Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
	HRESULT(STDMETHODCALLTYPE * IsSmartCard) (IX509CertificateRequestCertificate2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_TemplateObjectId) (IX509CertificateRequestCertificate2 * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_PublicKey) (IX509CertificateRequestCertificate2 * This, IX509PublicKey ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_PrivateKey) (IX509CertificateRequestCertificate2 * This, IX509PrivateKey ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_NullSigned) (IX509CertificateRequestCertificate2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_ReuseKey) (IX509CertificateRequestCertificate2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_OldCertificate) (IX509CertificateRequestCertificate2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Subject) (IX509CertificateRequestCertificate2 * This, IX500DistinguishedName ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_Subject) (IX509CertificateRequestCertificate2 * This, IX500DistinguishedName * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CspStatuses) (IX509CertificateRequestCertificate2 * This, ICspStatuses ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_SmimeCapabilities) (IX509CertificateRequestCertificate2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SmimeCapabilities) (IX509CertificateRequestCertificate2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_SignatureInformation) (IX509CertificateRequestCertificate2 * This, IX509SignatureInformation ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_KeyContainerNamePrefix) (IX509CertificateRequestCertificate2 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_KeyContainerNamePrefix) (IX509CertificateRequestCertificate2 * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_CryptAttributes) (IX509CertificateRequestCertificate2 * This, ICryptAttributes ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_X509Extensions) (IX509CertificateRequestCertificate2 * This, IX509Extensions ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_CriticalExtensions) (IX509CertificateRequestCertificate2 * This, IObjectIds ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_SuppressOids) (IX509CertificateRequestCertificate2 * This, IObjectIds ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_RawDataToBeSigned) (IX509CertificateRequestCertificate2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Signature) (IX509CertificateRequestCertificate2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * GetCspStatuses) (IX509CertificateRequestCertificate2 * This, X509KeySpec KeySpec, ICspStatuses ** ppCspStatuses);
	HRESULT(STDMETHODCALLTYPE * CheckPublicKeySignature) (IX509CertificateRequestCertificate2 * This, IX509PublicKey * pPublicKey);
	HRESULT(STDMETHODCALLTYPE * get_Issuer) (IX509CertificateRequestCertificate2 * This, IX500DistinguishedName ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_Issuer) (IX509CertificateRequestCertificate2 * This, IX500DistinguishedName * pValue);
	HRESULT(STDMETHODCALLTYPE * get_NotBefore) (IX509CertificateRequestCertificate2 * This, DATE * pValue);
	HRESULT(STDMETHODCALLTYPE * put_NotBefore) (IX509CertificateRequestCertificate2 * This, DATE Value);
	HRESULT(STDMETHODCALLTYPE * get_NotAfter) (IX509CertificateRequestCertificate2 * This, DATE * pValue);
	HRESULT(STDMETHODCALLTYPE * put_NotAfter) (IX509CertificateRequestCertificate2 * This, DATE Value);
	HRESULT(STDMETHODCALLTYPE * get_SerialNumber) (IX509CertificateRequestCertificate2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SerialNumber) (IX509CertificateRequestCertificate2 * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SignerCertificate) (IX509CertificateRequestCertificate2 * This, ISignerCertificate ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_SignerCertificate) (IX509CertificateRequestCertificate2 * This, ISignerCertificate * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplate) (IX509CertificateRequestCertificate2 * This, X509CertificateEnrollmentContext context, IX509EnrollmentPolicyServer * pPolicyServer, IX509CertificateTemplate * pTemplate);
	HRESULT(STDMETHODCALLTYPE * InitializeFromPrivateKeyTemplate) (IX509CertificateRequestCertificate2 * This, X509CertificateEnrollmentContext Context, IX509PrivateKey * pPrivateKey, IX509EnrollmentPolicyServer * pPolicyServer, IX509CertificateTemplate * pTemplate);
	HRESULT(STDMETHODCALLTYPE * get_PolicyServer) (IX509CertificateRequestCertificate2 * This, IX509EnrollmentPolicyServer ** ppPolicyServer);
	HRESULT(STDMETHODCALLTYPE * get_Template) (IX509CertificateRequestCertificate2 * This, IX509CertificateTemplate ** ppTemplate);
	END_INTERFACE
}  IX509CertificateRequestCertificate2Vtbl;
interface IX509CertificateRequestCertificate2
{
	CONST_VTBL struct IX509CertificateRequestCertificate2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509CertificateRequestCertificate2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509CertificateRequestCertificate2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509CertificateRequestCertificate2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509CertificateRequestCertificate2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509CertificateRequestCertificate2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509CertificateRequestCertificate2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509CertificateRequestCertificate2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509CertificateRequestCertificate2_Initialize(This,Context)( (This)->lpVtbl -> Initialize(This,Context) )
#define IX509CertificateRequestCertificate2_Encode(This)( (This)->lpVtbl -> Encode(This) )
#define IX509CertificateRequestCertificate2_ResetForEncode(This)( (This)->lpVtbl -> ResetForEncode(This) )
#define IX509CertificateRequestCertificate2_GetInnerRequest(This,Level,ppValue)( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
#define IX509CertificateRequestCertificate2_get_Type(This,pValue)( (This)->lpVtbl -> get_Type(This,pValue) )
#define IX509CertificateRequestCertificate2_get_EnrollmentContext(This,pValue)( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
#define IX509CertificateRequestCertificate2_get_Silent(This,pValue)( (This)->lpVtbl -> get_Silent(This,pValue) )
#define IX509CertificateRequestCertificate2_put_Silent(This,Value)( (This)->lpVtbl -> put_Silent(This,Value) )
#define IX509CertificateRequestCertificate2_get_ParentWindow(This,pValue)( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
#define IX509CertificateRequestCertificate2_put_ParentWindow(This,Value)( (This)->lpVtbl -> put_ParentWindow(This,Value) )
#define IX509CertificateRequestCertificate2_get_UIContextMessage(This,pValue)( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
#define IX509CertificateRequestCertificate2_put_UIContextMessage(This,Value)( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
#define IX509CertificateRequestCertificate2_get_SuppressDefaults(This,pValue)( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
#define IX509CertificateRequestCertificate2_put_SuppressDefaults(This,Value)( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
#define IX509CertificateRequestCertificate2_get_RenewalCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestCertificate2_put_RenewalCertificate(This,Encoding,Value)( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
#define IX509CertificateRequestCertificate2_get_ClientId(This,pValue)( (This)->lpVtbl -> get_ClientId(This,pValue) )
#define IX509CertificateRequestCertificate2_put_ClientId(This,Value)( (This)->lpVtbl -> put_ClientId(This,Value) )
#define IX509CertificateRequestCertificate2_get_CspInformations(This,ppValue)( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
#define IX509CertificateRequestCertificate2_put_CspInformations(This,pValue)( (This)->lpVtbl -> put_CspInformations(This,pValue) )
#define IX509CertificateRequestCertificate2_get_HashAlgorithm(This,ppValue)( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
#define IX509CertificateRequestCertificate2_put_HashAlgorithm(This,pValue)( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
#define IX509CertificateRequestCertificate2_get_AlternateSignatureAlgorithm(This,pValue)( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
#define IX509CertificateRequestCertificate2_put_AlternateSignatureAlgorithm(This,Value)( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
#define IX509CertificateRequestCertificate2_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509CertificateRequestCertificate2_InitializeFromTemplateName(This,Context,strTemplateName)( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
#define IX509CertificateRequestCertificate2_InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName)( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName) )
#define IX509CertificateRequestCertificate2_InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName)( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName) )
#define IX509CertificateRequestCertificate2_InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions)( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions) )
#define IX509CertificateRequestCertificate2_InitializeDecode(This,strEncodedData,Encoding)( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
#define IX509CertificateRequestCertificate2_CheckSignature(This,AllowedSignatureTypes)( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) )
#define IX509CertificateRequestCertificate2_IsSmartCard(This,pValue)( (This)->lpVtbl -> IsSmartCard(This,pValue) )
#define IX509CertificateRequestCertificate2_get_TemplateObjectId(This,ppValue)( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
#define IX509CertificateRequestCertificate2_get_PublicKey(This,ppValue)( (This)->lpVtbl -> get_PublicKey(This,ppValue) )
#define IX509CertificateRequestCertificate2_get_PrivateKey(This,ppValue)( (This)->lpVtbl -> get_PrivateKey(This,ppValue) )
#define IX509CertificateRequestCertificate2_get_NullSigned(This,pValue)( (This)->lpVtbl -> get_NullSigned(This,pValue) )
#define IX509CertificateRequestCertificate2_get_ReuseKey(This,pValue)( (This)->lpVtbl -> get_ReuseKey(This,pValue) )
#define IX509CertificateRequestCertificate2_get_OldCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_OldCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestCertificate2_get_Subject(This,ppValue)( (This)->lpVtbl -> get_Subject(This,ppValue) )
#define IX509CertificateRequestCertificate2_put_Subject(This,pValue)( (This)->lpVtbl -> put_Subject(This,pValue) )
#define IX509CertificateRequestCertificate2_get_CspStatuses(This,ppValue)( (This)->lpVtbl -> get_CspStatuses(This,ppValue) )
#define IX509CertificateRequestCertificate2_get_SmimeCapabilities(This,pValue)( (This)->lpVtbl -> get_SmimeCapabilities(This,pValue) )
#define IX509CertificateRequestCertificate2_put_SmimeCapabilities(This,Value)( (This)->lpVtbl -> put_SmimeCapabilities(This,Value) )
#define IX509CertificateRequestCertificate2_get_SignatureInformation(This,ppValue)( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
#define IX509CertificateRequestCertificate2_get_KeyContainerNamePrefix(This,pValue)( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,pValue) )
#define IX509CertificateRequestCertificate2_put_KeyContainerNamePrefix(This,Value)( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,Value) )
#define IX509CertificateRequestCertificate2_get_CryptAttributes(This,ppValue)( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
#define IX509CertificateRequestCertificate2_get_X509Extensions(This,ppValue)( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
#define IX509CertificateRequestCertificate2_get_CriticalExtensions(This,ppValue)( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
#define IX509CertificateRequestCertificate2_get_SuppressOids(This,ppValue)( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
#define IX509CertificateRequestCertificate2_get_RawDataToBeSigned(This,Encoding,pValue)( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,pValue) )
#define IX509CertificateRequestCertificate2_get_Signature(This,Encoding,pValue)( (This)->lpVtbl -> get_Signature(This,Encoding,pValue) )
#define IX509CertificateRequestCertificate2_GetCspStatuses(This,KeySpec,ppCspStatuses)( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,ppCspStatuses) )
#define IX509CertificateRequestCertificate2_CheckPublicKeySignature(This,pPublicKey)( (This)->lpVtbl -> CheckPublicKeySignature(This,pPublicKey) )
#define IX509CertificateRequestCertificate2_get_Issuer(This,ppValue)( (This)->lpVtbl -> get_Issuer(This,ppValue) )
#define IX509CertificateRequestCertificate2_put_Issuer(This,pValue)( (This)->lpVtbl -> put_Issuer(This,pValue) )
#define IX509CertificateRequestCertificate2_get_NotBefore(This,pValue)( (This)->lpVtbl -> get_NotBefore(This,pValue) )
#define IX509CertificateRequestCertificate2_put_NotBefore(This,Value)( (This)->lpVtbl -> put_NotBefore(This,Value) )
#define IX509CertificateRequestCertificate2_get_NotAfter(This,pValue)( (This)->lpVtbl -> get_NotAfter(This,pValue) )
#define IX509CertificateRequestCertificate2_put_NotAfter(This,Value)( (This)->lpVtbl -> put_NotAfter(This,Value) )
#define IX509CertificateRequestCertificate2_get_SerialNumber(This,Encoding,pValue)( (This)->lpVtbl -> get_SerialNumber(This,Encoding,pValue) )
#define IX509CertificateRequestCertificate2_put_SerialNumber(This,Encoding,Value)( (This)->lpVtbl -> put_SerialNumber(This,Encoding,Value) )
#define IX509CertificateRequestCertificate2_get_SignerCertificate(This,ppValue)( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
#define IX509CertificateRequestCertificate2_put_SignerCertificate(This,pValue)( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
#define IX509CertificateRequestCertificate2_InitializeFromTemplate(This,context,pPolicyServer,pTemplate)( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) )
#define IX509CertificateRequestCertificate2_InitializeFromPrivateKeyTemplate(This,Context,pPrivateKey,pPolicyServer,pTemplate)( (This)->lpVtbl -> InitializeFromPrivateKeyTemplate(This,Context,pPrivateKey,pPolicyServer,pTemplate) )
#define IX509CertificateRequestCertificate2_get_PolicyServer(This,ppPolicyServer)( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) )
#define IX509CertificateRequestCertificate2_get_Template(This,ppTemplate)( (This)->lpVtbl -> get_Template(This,ppTemplate) )
#endif
#endif
#ifndef __IX509CertificateRequestPkcs7_INTERFACE_DEFINED__
#define __IX509CertificateRequestPkcs7_INTERFACE_DEFINED__
extern const IID IID_IX509CertificateRequestPkcs7;
typedef struct IX509CertificateRequestPkcs7Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509CertificateRequestPkcs7 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509CertificateRequestPkcs7 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509CertificateRequestPkcs7 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509CertificateRequestPkcs7 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509CertificateRequestPkcs7 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509CertificateRequestPkcs7 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509CertificateRequestPkcs7 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509CertificateRequestPkcs7 * This, X509CertificateEnrollmentContext Context);
	HRESULT(STDMETHODCALLTYPE * Encode) (IX509CertificateRequestPkcs7 * This);
	HRESULT(STDMETHODCALLTYPE * ResetForEncode) (IX509CertificateRequestPkcs7 * This);
	HRESULT(STDMETHODCALLTYPE * GetInnerRequest) (IX509CertificateRequestPkcs7 * This, InnerRequestLevel Level, IX509CertificateRequest ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IX509CertificateRequestPkcs7 * This, X509RequestType * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EnrollmentContext) (IX509CertificateRequestPkcs7 * This, X509CertificateEnrollmentContext * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Silent) (IX509CertificateRequestPkcs7 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Silent) (IX509CertificateRequestPkcs7 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IX509CertificateRequestPkcs7 * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IX509CertificateRequestPkcs7 * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_UIContextMessage) (IX509CertificateRequestPkcs7 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_UIContextMessage) (IX509CertificateRequestPkcs7 * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SuppressDefaults) (IX509CertificateRequestPkcs7 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SuppressDefaults) (IX509CertificateRequestPkcs7 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RenewalCertificate) (IX509CertificateRequestPkcs7 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_RenewalCertificate) (IX509CertificateRequestPkcs7 * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_ClientId) (IX509CertificateRequestPkcs7 * This, RequestClientInfoClientId * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ClientId) (IX509CertificateRequestPkcs7 * This, RequestClientInfoClientId Value);
	HRESULT(STDMETHODCALLTYPE * get_CspInformations) (IX509CertificateRequestPkcs7 * This, ICspInformations ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_CspInformations) (IX509CertificateRequestPkcs7 * This, ICspInformations * pValue);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IX509CertificateRequestPkcs7 * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IX509CertificateRequestPkcs7 * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_AlternateSignatureAlgorithm) (IX509CertificateRequestPkcs7 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_AlternateSignatureAlgorithm) (IX509CertificateRequestPkcs7 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509CertificateRequestPkcs7 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplateName) (IX509CertificateRequestPkcs7 * This, X509CertificateEnrollmentContext Context, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (IX509CertificateRequestPkcs7 * This, X509CertificateEnrollmentContext Context, VARIANT_BOOL RenewalRequest, BSTR strCertificate, EncodingType Encoding, X509RequestInheritOptions InheritOptions);
	HRESULT(STDMETHODCALLTYPE * InitializeFromInnerRequest) (IX509CertificateRequestPkcs7 * This, IX509CertificateRequest * pInnerRequest);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509CertificateRequestPkcs7 * This, BSTR strEncodedData, EncodingType Encoding);
	HRESULT(STDMETHODCALLTYPE * get_RequesterName) (IX509CertificateRequestPkcs7 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_RequesterName) (IX509CertificateRequestPkcs7 * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SignerCertificate) (IX509CertificateRequestPkcs7 * This, ISignerCertificate ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_SignerCertificate) (IX509CertificateRequestPkcs7 * This, ISignerCertificate * pValue);
	END_INTERFACE
}  IX509CertificateRequestPkcs7Vtbl;
interface IX509CertificateRequestPkcs7
{
	CONST_VTBL struct IX509CertificateRequestPkcs7Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509CertificateRequestPkcs7_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509CertificateRequestPkcs7_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509CertificateRequestPkcs7_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509CertificateRequestPkcs7_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509CertificateRequestPkcs7_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509CertificateRequestPkcs7_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509CertificateRequestPkcs7_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509CertificateRequestPkcs7_Initialize(This,Context)( (This)->lpVtbl -> Initialize(This,Context) )
#define IX509CertificateRequestPkcs7_Encode(This)( (This)->lpVtbl -> Encode(This) )
#define IX509CertificateRequestPkcs7_ResetForEncode(This)( (This)->lpVtbl -> ResetForEncode(This) )
#define IX509CertificateRequestPkcs7_GetInnerRequest(This,Level,ppValue)( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
#define IX509CertificateRequestPkcs7_get_Type(This,pValue)( (This)->lpVtbl -> get_Type(This,pValue) )
#define IX509CertificateRequestPkcs7_get_EnrollmentContext(This,pValue)( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
#define IX509CertificateRequestPkcs7_get_Silent(This,pValue)( (This)->lpVtbl -> get_Silent(This,pValue) )
#define IX509CertificateRequestPkcs7_put_Silent(This,Value)( (This)->lpVtbl -> put_Silent(This,Value) )
#define IX509CertificateRequestPkcs7_get_ParentWindow(This,pValue)( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
#define IX509CertificateRequestPkcs7_put_ParentWindow(This,Value)( (This)->lpVtbl -> put_ParentWindow(This,Value) )
#define IX509CertificateRequestPkcs7_get_UIContextMessage(This,pValue)( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
#define IX509CertificateRequestPkcs7_put_UIContextMessage(This,Value)( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
#define IX509CertificateRequestPkcs7_get_SuppressDefaults(This,pValue)( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
#define IX509CertificateRequestPkcs7_put_SuppressDefaults(This,Value)( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
#define IX509CertificateRequestPkcs7_get_RenewalCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs7_put_RenewalCertificate(This,Encoding,Value)( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
#define IX509CertificateRequestPkcs7_get_ClientId(This,pValue)( (This)->lpVtbl -> get_ClientId(This,pValue) )
#define IX509CertificateRequestPkcs7_put_ClientId(This,Value)( (This)->lpVtbl -> put_ClientId(This,Value) )
#define IX509CertificateRequestPkcs7_get_CspInformations(This,ppValue)( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
#define IX509CertificateRequestPkcs7_put_CspInformations(This,pValue)( (This)->lpVtbl -> put_CspInformations(This,pValue) )
#define IX509CertificateRequestPkcs7_get_HashAlgorithm(This,ppValue)( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
#define IX509CertificateRequestPkcs7_put_HashAlgorithm(This,pValue)( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
#define IX509CertificateRequestPkcs7_get_AlternateSignatureAlgorithm(This,pValue)( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
#define IX509CertificateRequestPkcs7_put_AlternateSignatureAlgorithm(This,Value)( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
#define IX509CertificateRequestPkcs7_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs7_InitializeFromTemplateName(This,Context,strTemplateName)( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
#define IX509CertificateRequestPkcs7_InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions)( (This)->lpVtbl -> InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions) )
#define IX509CertificateRequestPkcs7_InitializeFromInnerRequest(This,pInnerRequest)( (This)->lpVtbl -> InitializeFromInnerRequest(This,pInnerRequest) )
#define IX509CertificateRequestPkcs7_InitializeDecode(This,strEncodedData,Encoding)( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
#define IX509CertificateRequestPkcs7_get_RequesterName(This,pValue)( (This)->lpVtbl -> get_RequesterName(This,pValue) )
#define IX509CertificateRequestPkcs7_put_RequesterName(This,Value)( (This)->lpVtbl -> put_RequesterName(This,Value) )
#define IX509CertificateRequestPkcs7_get_SignerCertificate(This,ppValue)( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
#define IX509CertificateRequestPkcs7_put_SignerCertificate(This,pValue)( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
#endif
#endif
#ifndef __IX509CertificateRequestPkcs7V2_INTERFACE_DEFINED__
#define __IX509CertificateRequestPkcs7V2_INTERFACE_DEFINED__
extern const IID IID_IX509CertificateRequestPkcs7V2;
typedef struct IX509CertificateRequestPkcs7V2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509CertificateRequestPkcs7V2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509CertificateRequestPkcs7V2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509CertificateRequestPkcs7V2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509CertificateRequestPkcs7V2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509CertificateRequestPkcs7V2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509CertificateRequestPkcs7V2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509CertificateRequestPkcs7V2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509CertificateRequestPkcs7V2 * This, X509CertificateEnrollmentContext Context);
	HRESULT(STDMETHODCALLTYPE * Encode) (IX509CertificateRequestPkcs7V2 * This);
	HRESULT(STDMETHODCALLTYPE * ResetForEncode) (IX509CertificateRequestPkcs7V2 * This);
	HRESULT(STDMETHODCALLTYPE * GetInnerRequest) (IX509CertificateRequestPkcs7V2 * This, InnerRequestLevel Level, IX509CertificateRequest ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IX509CertificateRequestPkcs7V2 * This, X509RequestType * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EnrollmentContext) (IX509CertificateRequestPkcs7V2 * This, X509CertificateEnrollmentContext * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Silent) (IX509CertificateRequestPkcs7V2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Silent) (IX509CertificateRequestPkcs7V2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IX509CertificateRequestPkcs7V2 * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IX509CertificateRequestPkcs7V2 * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_UIContextMessage) (IX509CertificateRequestPkcs7V2 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_UIContextMessage) (IX509CertificateRequestPkcs7V2 * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SuppressDefaults) (IX509CertificateRequestPkcs7V2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SuppressDefaults) (IX509CertificateRequestPkcs7V2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RenewalCertificate) (IX509CertificateRequestPkcs7V2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_RenewalCertificate) (IX509CertificateRequestPkcs7V2 * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_ClientId) (IX509CertificateRequestPkcs7V2 * This, RequestClientInfoClientId * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ClientId) (IX509CertificateRequestPkcs7V2 * This, RequestClientInfoClientId Value);
	HRESULT(STDMETHODCALLTYPE * get_CspInformations) (IX509CertificateRequestPkcs7V2 * This, ICspInformations ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_CspInformations) (IX509CertificateRequestPkcs7V2 * This, ICspInformations * pValue);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IX509CertificateRequestPkcs7V2 * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IX509CertificateRequestPkcs7V2 * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_AlternateSignatureAlgorithm) (IX509CertificateRequestPkcs7V2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_AlternateSignatureAlgorithm) (IX509CertificateRequestPkcs7V2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509CertificateRequestPkcs7V2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplateName) (IX509CertificateRequestPkcs7V2 * This, X509CertificateEnrollmentContext Context, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (IX509CertificateRequestPkcs7V2 * This, X509CertificateEnrollmentContext Context, VARIANT_BOOL RenewalRequest, BSTR strCertificate, EncodingType Encoding, X509RequestInheritOptions InheritOptions);
	HRESULT(STDMETHODCALLTYPE * InitializeFromInnerRequest) (IX509CertificateRequestPkcs7V2 * This, IX509CertificateRequest * pInnerRequest);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509CertificateRequestPkcs7V2 * This, BSTR strEncodedData, EncodingType Encoding);
	HRESULT(STDMETHODCALLTYPE * get_RequesterName) (IX509CertificateRequestPkcs7V2 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_RequesterName) (IX509CertificateRequestPkcs7V2 * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SignerCertificate) (IX509CertificateRequestPkcs7V2 * This, ISignerCertificate ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_SignerCertificate) (IX509CertificateRequestPkcs7V2 * This, ISignerCertificate * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplate) (IX509CertificateRequestPkcs7V2 * This, X509CertificateEnrollmentContext context, IX509EnrollmentPolicyServer * pPolicyServer, IX509CertificateTemplate * pTemplate);
	HRESULT(STDMETHODCALLTYPE * get_PolicyServer) (IX509CertificateRequestPkcs7V2 * This, IX509EnrollmentPolicyServer ** ppPolicyServer);
	HRESULT(STDMETHODCALLTYPE * get_Template) (IX509CertificateRequestPkcs7V2 * This, IX509CertificateTemplate ** ppTemplate);
	HRESULT(STDMETHODCALLTYPE * CheckCertificateSignature) (IX509CertificateRequestPkcs7V2 * This, VARIANT_BOOL ValidateCertificateChain);
	END_INTERFACE
}  IX509CertificateRequestPkcs7V2Vtbl;
interface IX509CertificateRequestPkcs7V2
{
	CONST_VTBL struct IX509CertificateRequestPkcs7V2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509CertificateRequestPkcs7V2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509CertificateRequestPkcs7V2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509CertificateRequestPkcs7V2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509CertificateRequestPkcs7V2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509CertificateRequestPkcs7V2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509CertificateRequestPkcs7V2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509CertificateRequestPkcs7V2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509CertificateRequestPkcs7V2_Initialize(This,Context)( (This)->lpVtbl -> Initialize(This,Context) )
#define IX509CertificateRequestPkcs7V2_Encode(This)( (This)->lpVtbl -> Encode(This) )
#define IX509CertificateRequestPkcs7V2_ResetForEncode(This)( (This)->lpVtbl -> ResetForEncode(This) )
#define IX509CertificateRequestPkcs7V2_GetInnerRequest(This,Level,ppValue)( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
#define IX509CertificateRequestPkcs7V2_get_Type(This,pValue)( (This)->lpVtbl -> get_Type(This,pValue) )
#define IX509CertificateRequestPkcs7V2_get_EnrollmentContext(This,pValue)( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
#define IX509CertificateRequestPkcs7V2_get_Silent(This,pValue)( (This)->lpVtbl -> get_Silent(This,pValue) )
#define IX509CertificateRequestPkcs7V2_put_Silent(This,Value)( (This)->lpVtbl -> put_Silent(This,Value) )
#define IX509CertificateRequestPkcs7V2_get_ParentWindow(This,pValue)( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
#define IX509CertificateRequestPkcs7V2_put_ParentWindow(This,Value)( (This)->lpVtbl -> put_ParentWindow(This,Value) )
#define IX509CertificateRequestPkcs7V2_get_UIContextMessage(This,pValue)( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
#define IX509CertificateRequestPkcs7V2_put_UIContextMessage(This,Value)( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
#define IX509CertificateRequestPkcs7V2_get_SuppressDefaults(This,pValue)( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
#define IX509CertificateRequestPkcs7V2_put_SuppressDefaults(This,Value)( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
#define IX509CertificateRequestPkcs7V2_get_RenewalCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs7V2_put_RenewalCertificate(This,Encoding,Value)( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
#define IX509CertificateRequestPkcs7V2_get_ClientId(This,pValue)( (This)->lpVtbl -> get_ClientId(This,pValue) )
#define IX509CertificateRequestPkcs7V2_put_ClientId(This,Value)( (This)->lpVtbl -> put_ClientId(This,Value) )
#define IX509CertificateRequestPkcs7V2_get_CspInformations(This,ppValue)( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
#define IX509CertificateRequestPkcs7V2_put_CspInformations(This,pValue)( (This)->lpVtbl -> put_CspInformations(This,pValue) )
#define IX509CertificateRequestPkcs7V2_get_HashAlgorithm(This,ppValue)( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
#define IX509CertificateRequestPkcs7V2_put_HashAlgorithm(This,pValue)( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
#define IX509CertificateRequestPkcs7V2_get_AlternateSignatureAlgorithm(This,pValue)( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
#define IX509CertificateRequestPkcs7V2_put_AlternateSignatureAlgorithm(This,Value)( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
#define IX509CertificateRequestPkcs7V2_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509CertificateRequestPkcs7V2_InitializeFromTemplateName(This,Context,strTemplateName)( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
#define IX509CertificateRequestPkcs7V2_InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions)( (This)->lpVtbl -> InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions) )
#define IX509CertificateRequestPkcs7V2_InitializeFromInnerRequest(This,pInnerRequest)( (This)->lpVtbl -> InitializeFromInnerRequest(This,pInnerRequest) )
#define IX509CertificateRequestPkcs7V2_InitializeDecode(This,strEncodedData,Encoding)( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
#define IX509CertificateRequestPkcs7V2_get_RequesterName(This,pValue)( (This)->lpVtbl -> get_RequesterName(This,pValue) )
#define IX509CertificateRequestPkcs7V2_put_RequesterName(This,Value)( (This)->lpVtbl -> put_RequesterName(This,Value) )
#define IX509CertificateRequestPkcs7V2_get_SignerCertificate(This,ppValue)( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
#define IX509CertificateRequestPkcs7V2_put_SignerCertificate(This,pValue)( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
#define IX509CertificateRequestPkcs7V2_InitializeFromTemplate(This,context,pPolicyServer,pTemplate)( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) )
#define IX509CertificateRequestPkcs7V2_get_PolicyServer(This,ppPolicyServer)( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) )
#define IX509CertificateRequestPkcs7V2_get_Template(This,ppTemplate)( (This)->lpVtbl -> get_Template(This,ppTemplate) )
#define IX509CertificateRequestPkcs7V2_CheckCertificateSignature(This,ValidateCertificateChain)( (This)->lpVtbl -> CheckCertificateSignature(This,ValidateCertificateChain) )
#endif
#endif
#ifndef __IX509CertificateRequestCmc_INTERFACE_DEFINED__
#define __IX509CertificateRequestCmc_INTERFACE_DEFINED__
extern const IID IID_IX509CertificateRequestCmc;
typedef struct IX509CertificateRequestCmcVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509CertificateRequestCmc * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509CertificateRequestCmc * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509CertificateRequestCmc * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509CertificateRequestCmc * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509CertificateRequestCmc * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509CertificateRequestCmc * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509CertificateRequestCmc * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509CertificateRequestCmc * This, X509CertificateEnrollmentContext Context);
	HRESULT(STDMETHODCALLTYPE * Encode) (IX509CertificateRequestCmc * This);
	HRESULT(STDMETHODCALLTYPE * ResetForEncode) (IX509CertificateRequestCmc * This);
	HRESULT(STDMETHODCALLTYPE * GetInnerRequest) (IX509CertificateRequestCmc * This, InnerRequestLevel Level, IX509CertificateRequest ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IX509CertificateRequestCmc * This, X509RequestType * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EnrollmentContext) (IX509CertificateRequestCmc * This, X509CertificateEnrollmentContext * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Silent) (IX509CertificateRequestCmc * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Silent) (IX509CertificateRequestCmc * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IX509CertificateRequestCmc * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IX509CertificateRequestCmc * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_UIContextMessage) (IX509CertificateRequestCmc * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_UIContextMessage) (IX509CertificateRequestCmc * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SuppressDefaults) (IX509CertificateRequestCmc * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SuppressDefaults) (IX509CertificateRequestCmc * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RenewalCertificate) (IX509CertificateRequestCmc * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_RenewalCertificate) (IX509CertificateRequestCmc * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_ClientId) (IX509CertificateRequestCmc * This, RequestClientInfoClientId * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ClientId) (IX509CertificateRequestCmc * This, RequestClientInfoClientId Value);
	HRESULT(STDMETHODCALLTYPE * get_CspInformations) (IX509CertificateRequestCmc * This, ICspInformations ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_CspInformations) (IX509CertificateRequestCmc * This, ICspInformations * pValue);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IX509CertificateRequestCmc * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IX509CertificateRequestCmc * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_AlternateSignatureAlgorithm) (IX509CertificateRequestCmc * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_AlternateSignatureAlgorithm) (IX509CertificateRequestCmc * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509CertificateRequestCmc * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplateName) (IX509CertificateRequestCmc * This, X509CertificateEnrollmentContext Context, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (IX509CertificateRequestCmc * This, X509CertificateEnrollmentContext Context, VARIANT_BOOL RenewalRequest, BSTR strCertificate, EncodingType Encoding, X509RequestInheritOptions InheritOptions);
	HRESULT(STDMETHODCALLTYPE * InitializeFromInnerRequest) (IX509CertificateRequestCmc * This, IX509CertificateRequest * pInnerRequest);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509CertificateRequestCmc * This, BSTR strEncodedData, EncodingType Encoding);
	HRESULT(STDMETHODCALLTYPE * get_RequesterName) (IX509CertificateRequestCmc * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_RequesterName) (IX509CertificateRequestCmc * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SignerCertificate) (IX509CertificateRequestCmc * This, ISignerCertificate ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_SignerCertificate) (IX509CertificateRequestCmc * This, ISignerCertificate * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromInnerRequestTemplateName) (IX509CertificateRequestCmc * This, IX509CertificateRequest * pInnerRequest, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * get_TemplateObjectId) (IX509CertificateRequestCmc * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_NullSigned) (IX509CertificateRequestCmc * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CryptAttributes) (IX509CertificateRequestCmc * This, ICryptAttributes ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_NameValuePairs) (IX509CertificateRequestCmc * This, IX509NameValuePairs ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_X509Extensions) (IX509CertificateRequestCmc * This, IX509Extensions ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_CriticalExtensions) (IX509CertificateRequestCmc * This, IObjectIds ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_SuppressOids) (IX509CertificateRequestCmc * This, IObjectIds ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_TransactionId) (IX509CertificateRequestCmc * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_TransactionId) (IX509CertificateRequestCmc * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_SenderNonce) (IX509CertificateRequestCmc * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SenderNonce) (IX509CertificateRequestCmc * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SignatureInformation) (IX509CertificateRequestCmc * This, IX509SignatureInformation ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_ArchivePrivateKey) (IX509CertificateRequestCmc * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ArchivePrivateKey) (IX509CertificateRequestCmc * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_KeyArchivalCertificate) (IX509CertificateRequestCmc * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_KeyArchivalCertificate) (IX509CertificateRequestCmc * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_EncryptionAlgorithm) (IX509CertificateRequestCmc * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_EncryptionAlgorithm) (IX509CertificateRequestCmc * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EncryptionStrength) (IX509CertificateRequestCmc * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_EncryptionStrength) (IX509CertificateRequestCmc * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_EncryptedKeyHash) (IX509CertificateRequestCmc * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_SignerCertificates) (IX509CertificateRequestCmc * This, ISignerCertificates ** ppValue);
	END_INTERFACE
}  IX509CertificateRequestCmcVtbl;
interface IX509CertificateRequestCmc
{
	CONST_VTBL struct IX509CertificateRequestCmcVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509CertificateRequestCmc_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509CertificateRequestCmc_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509CertificateRequestCmc_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509CertificateRequestCmc_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509CertificateRequestCmc_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509CertificateRequestCmc_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509CertificateRequestCmc_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509CertificateRequestCmc_Initialize(This,Context)( (This)->lpVtbl -> Initialize(This,Context) )
#define IX509CertificateRequestCmc_Encode(This)( (This)->lpVtbl -> Encode(This) )
#define IX509CertificateRequestCmc_ResetForEncode(This)( (This)->lpVtbl -> ResetForEncode(This) )
#define IX509CertificateRequestCmc_GetInnerRequest(This,Level,ppValue)( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
#define IX509CertificateRequestCmc_get_Type(This,pValue)( (This)->lpVtbl -> get_Type(This,pValue) )
#define IX509CertificateRequestCmc_get_EnrollmentContext(This,pValue)( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
#define IX509CertificateRequestCmc_get_Silent(This,pValue)( (This)->lpVtbl -> get_Silent(This,pValue) )
#define IX509CertificateRequestCmc_put_Silent(This,Value)( (This)->lpVtbl -> put_Silent(This,Value) )
#define IX509CertificateRequestCmc_get_ParentWindow(This,pValue)( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
#define IX509CertificateRequestCmc_put_ParentWindow(This,Value)( (This)->lpVtbl -> put_ParentWindow(This,Value) )
#define IX509CertificateRequestCmc_get_UIContextMessage(This,pValue)( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
#define IX509CertificateRequestCmc_put_UIContextMessage(This,Value)( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
#define IX509CertificateRequestCmc_get_SuppressDefaults(This,pValue)( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
#define IX509CertificateRequestCmc_put_SuppressDefaults(This,Value)( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
#define IX509CertificateRequestCmc_get_RenewalCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestCmc_put_RenewalCertificate(This,Encoding,Value)( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
#define IX509CertificateRequestCmc_get_ClientId(This,pValue)( (This)->lpVtbl -> get_ClientId(This,pValue) )
#define IX509CertificateRequestCmc_put_ClientId(This,Value)( (This)->lpVtbl -> put_ClientId(This,Value) )
#define IX509CertificateRequestCmc_get_CspInformations(This,ppValue)( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
#define IX509CertificateRequestCmc_put_CspInformations(This,pValue)( (This)->lpVtbl -> put_CspInformations(This,pValue) )
#define IX509CertificateRequestCmc_get_HashAlgorithm(This,ppValue)( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
#define IX509CertificateRequestCmc_put_HashAlgorithm(This,pValue)( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
#define IX509CertificateRequestCmc_get_AlternateSignatureAlgorithm(This,pValue)( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
#define IX509CertificateRequestCmc_put_AlternateSignatureAlgorithm(This,Value)( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
#define IX509CertificateRequestCmc_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509CertificateRequestCmc_InitializeFromTemplateName(This,Context,strTemplateName)( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
#define IX509CertificateRequestCmc_InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions)( (This)->lpVtbl -> InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions) )
#define IX509CertificateRequestCmc_InitializeFromInnerRequest(This,pInnerRequest)( (This)->lpVtbl -> InitializeFromInnerRequest(This,pInnerRequest) )
#define IX509CertificateRequestCmc_InitializeDecode(This,strEncodedData,Encoding)( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
#define IX509CertificateRequestCmc_get_RequesterName(This,pValue)( (This)->lpVtbl -> get_RequesterName(This,pValue) )
#define IX509CertificateRequestCmc_put_RequesterName(This,Value)( (This)->lpVtbl -> put_RequesterName(This,Value) )
#define IX509CertificateRequestCmc_get_SignerCertificate(This,ppValue)( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
#define IX509CertificateRequestCmc_put_SignerCertificate(This,pValue)( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
#define IX509CertificateRequestCmc_InitializeFromInnerRequestTemplateName(This,pInnerRequest,strTemplateName)( (This)->lpVtbl -> InitializeFromInnerRequestTemplateName(This,pInnerRequest,strTemplateName) )
#define IX509CertificateRequestCmc_get_TemplateObjectId(This,ppValue)( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
#define IX509CertificateRequestCmc_get_NullSigned(This,pValue)( (This)->lpVtbl -> get_NullSigned(This,pValue) )
#define IX509CertificateRequestCmc_get_CryptAttributes(This,ppValue)( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
#define IX509CertificateRequestCmc_get_NameValuePairs(This,ppValue)( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) )
#define IX509CertificateRequestCmc_get_X509Extensions(This,ppValue)( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
#define IX509CertificateRequestCmc_get_CriticalExtensions(This,ppValue)( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
#define IX509CertificateRequestCmc_get_SuppressOids(This,ppValue)( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
#define IX509CertificateRequestCmc_get_TransactionId(This,pValue)( (This)->lpVtbl -> get_TransactionId(This,pValue) )
#define IX509CertificateRequestCmc_put_TransactionId(This,Value)( (This)->lpVtbl -> put_TransactionId(This,Value) )
#define IX509CertificateRequestCmc_get_SenderNonce(This,Encoding,pValue)( (This)->lpVtbl -> get_SenderNonce(This,Encoding,pValue) )
#define IX509CertificateRequestCmc_put_SenderNonce(This,Encoding,Value)( (This)->lpVtbl -> put_SenderNonce(This,Encoding,Value) )
#define IX509CertificateRequestCmc_get_SignatureInformation(This,ppValue)( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
#define IX509CertificateRequestCmc_get_ArchivePrivateKey(This,pValue)( (This)->lpVtbl -> get_ArchivePrivateKey(This,pValue) )
#define IX509CertificateRequestCmc_put_ArchivePrivateKey(This,Value)( (This)->lpVtbl -> put_ArchivePrivateKey(This,Value) )
#define IX509CertificateRequestCmc_get_KeyArchivalCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_KeyArchivalCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestCmc_put_KeyArchivalCertificate(This,Encoding,Value)( (This)->lpVtbl -> put_KeyArchivalCertificate(This,Encoding,Value) )
#define IX509CertificateRequestCmc_get_EncryptionAlgorithm(This,ppValue)( (This)->lpVtbl -> get_EncryptionAlgorithm(This,ppValue) )
#define IX509CertificateRequestCmc_put_EncryptionAlgorithm(This,pValue)( (This)->lpVtbl -> put_EncryptionAlgorithm(This,pValue) )
#define IX509CertificateRequestCmc_get_EncryptionStrength(This,pValue)( (This)->lpVtbl -> get_EncryptionStrength(This,pValue) )
#define IX509CertificateRequestCmc_put_EncryptionStrength(This,Value)( (This)->lpVtbl -> put_EncryptionStrength(This,Value) )
#define IX509CertificateRequestCmc_get_EncryptedKeyHash(This,Encoding,pValue)( (This)->lpVtbl -> get_EncryptedKeyHash(This,Encoding,pValue) )
#define IX509CertificateRequestCmc_get_SignerCertificates(This,ppValue)( (This)->lpVtbl -> get_SignerCertificates(This,ppValue) )
#endif
#endif
#ifndef __IX509CertificateRequestCmc2_INTERFACE_DEFINED__
#define __IX509CertificateRequestCmc2_INTERFACE_DEFINED__
extern const IID IID_IX509CertificateRequestCmc2;
typedef struct IX509CertificateRequestCmc2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509CertificateRequestCmc2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509CertificateRequestCmc2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509CertificateRequestCmc2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509CertificateRequestCmc2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509CertificateRequestCmc2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509CertificateRequestCmc2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509CertificateRequestCmc2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509CertificateRequestCmc2 * This, X509CertificateEnrollmentContext Context);
	HRESULT(STDMETHODCALLTYPE * Encode) (IX509CertificateRequestCmc2 * This);
	HRESULT(STDMETHODCALLTYPE * ResetForEncode) (IX509CertificateRequestCmc2 * This);
	HRESULT(STDMETHODCALLTYPE * GetInnerRequest) (IX509CertificateRequestCmc2 * This, InnerRequestLevel Level, IX509CertificateRequest ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IX509CertificateRequestCmc2 * This, X509RequestType * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EnrollmentContext) (IX509CertificateRequestCmc2 * This, X509CertificateEnrollmentContext * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Silent) (IX509CertificateRequestCmc2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Silent) (IX509CertificateRequestCmc2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IX509CertificateRequestCmc2 * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IX509CertificateRequestCmc2 * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_UIContextMessage) (IX509CertificateRequestCmc2 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_UIContextMessage) (IX509CertificateRequestCmc2 * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SuppressDefaults) (IX509CertificateRequestCmc2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SuppressDefaults) (IX509CertificateRequestCmc2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RenewalCertificate) (IX509CertificateRequestCmc2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_RenewalCertificate) (IX509CertificateRequestCmc2 * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_ClientId) (IX509CertificateRequestCmc2 * This, RequestClientInfoClientId * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ClientId) (IX509CertificateRequestCmc2 * This, RequestClientInfoClientId Value);
	HRESULT(STDMETHODCALLTYPE * get_CspInformations) (IX509CertificateRequestCmc2 * This, ICspInformations ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_CspInformations) (IX509CertificateRequestCmc2 * This, ICspInformations * pValue);
	HRESULT(STDMETHODCALLTYPE * get_HashAlgorithm) (IX509CertificateRequestCmc2 * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_HashAlgorithm) (IX509CertificateRequestCmc2 * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_AlternateSignatureAlgorithm) (IX509CertificateRequestCmc2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_AlternateSignatureAlgorithm) (IX509CertificateRequestCmc2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_RawData) (IX509CertificateRequestCmc2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplateName) (IX509CertificateRequestCmc2 * This, X509CertificateEnrollmentContext Context, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromCertificate) (IX509CertificateRequestCmc2 * This, X509CertificateEnrollmentContext Context, VARIANT_BOOL RenewalRequest, BSTR strCertificate, EncodingType Encoding, X509RequestInheritOptions InheritOptions);
	HRESULT(STDMETHODCALLTYPE * InitializeFromInnerRequest) (IX509CertificateRequestCmc2 * This, IX509CertificateRequest * pInnerRequest);
	HRESULT(STDMETHODCALLTYPE * InitializeDecode) (IX509CertificateRequestCmc2 * This, BSTR strEncodedData, EncodingType Encoding);
	HRESULT(STDMETHODCALLTYPE * get_RequesterName) (IX509CertificateRequestCmc2 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_RequesterName) (IX509CertificateRequestCmc2 * This, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SignerCertificate) (IX509CertificateRequestCmc2 * This, ISignerCertificate ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_SignerCertificate) (IX509CertificateRequestCmc2 * This, ISignerCertificate * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromInnerRequestTemplateName) (IX509CertificateRequestCmc2 * This, IX509CertificateRequest * pInnerRequest, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * get_TemplateObjectId) (IX509CertificateRequestCmc2 * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_NullSigned) (IX509CertificateRequestCmc2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CryptAttributes) (IX509CertificateRequestCmc2 * This, ICryptAttributes ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_NameValuePairs) (IX509CertificateRequestCmc2 * This, IX509NameValuePairs ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_X509Extensions) (IX509CertificateRequestCmc2 * This, IX509Extensions ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_CriticalExtensions) (IX509CertificateRequestCmc2 * This, IObjectIds ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_SuppressOids) (IX509CertificateRequestCmc2 * This, IObjectIds ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_TransactionId) (IX509CertificateRequestCmc2 * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_TransactionId) (IX509CertificateRequestCmc2 * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_SenderNonce) (IX509CertificateRequestCmc2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_SenderNonce) (IX509CertificateRequestCmc2 * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_SignatureInformation) (IX509CertificateRequestCmc2 * This, IX509SignatureInformation ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_ArchivePrivateKey) (IX509CertificateRequestCmc2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ArchivePrivateKey) (IX509CertificateRequestCmc2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_KeyArchivalCertificate) (IX509CertificateRequestCmc2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_KeyArchivalCertificate) (IX509CertificateRequestCmc2 * This, EncodingType Encoding, BSTR Value);
	HRESULT(STDMETHODCALLTYPE * get_EncryptionAlgorithm) (IX509CertificateRequestCmc2 * This, IObjectId ** ppValue);
	HRESULT(STDMETHODCALLTYPE * put_EncryptionAlgorithm) (IX509CertificateRequestCmc2 * This, IObjectId * pValue);
	HRESULT(STDMETHODCALLTYPE * get_EncryptionStrength) (IX509CertificateRequestCmc2 * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_EncryptionStrength) (IX509CertificateRequestCmc2 * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_EncryptedKeyHash) (IX509CertificateRequestCmc2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_SignerCertificates) (IX509CertificateRequestCmc2 * This, ISignerCertificates ** ppValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplate) (IX509CertificateRequestCmc2 * This, X509CertificateEnrollmentContext context, IX509EnrollmentPolicyServer * pPolicyServer, IX509CertificateTemplate * pTemplate);
	HRESULT(STDMETHODCALLTYPE * InitializeFromInnerRequestTemplate) (IX509CertificateRequestCmc2 * This, IX509CertificateRequest * pInnerRequest, IX509EnrollmentPolicyServer * pPolicyServer, IX509CertificateTemplate * pTemplate);
	HRESULT(STDMETHODCALLTYPE * get_PolicyServer) (IX509CertificateRequestCmc2 * This, IX509EnrollmentPolicyServer ** ppPolicyServer);
	HRESULT(STDMETHODCALLTYPE * get_Template) (IX509CertificateRequestCmc2 * This, IX509CertificateTemplate ** ppTemplate);
	HRESULT(STDMETHODCALLTYPE * CheckSignature) (IX509CertificateRequestCmc2 * This, Pkcs10AllowedSignatureTypes AllowedSignatureTypes);
	HRESULT(STDMETHODCALLTYPE * CheckCertificateSignature) (IX509CertificateRequestCmc2 * This, ISignerCertificate * pSignerCertificate, VARIANT_BOOL ValidateCertificateChain);
	END_INTERFACE
}  IX509CertificateRequestCmc2Vtbl;
interface IX509CertificateRequestCmc2
{
	CONST_VTBL struct IX509CertificateRequestCmc2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509CertificateRequestCmc2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509CertificateRequestCmc2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509CertificateRequestCmc2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509CertificateRequestCmc2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509CertificateRequestCmc2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509CertificateRequestCmc2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509CertificateRequestCmc2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509CertificateRequestCmc2_Initialize(This,Context)( (This)->lpVtbl -> Initialize(This,Context) )
#define IX509CertificateRequestCmc2_Encode(This)( (This)->lpVtbl -> Encode(This) )
#define IX509CertificateRequestCmc2_ResetForEncode(This)( (This)->lpVtbl -> ResetForEncode(This) )
#define IX509CertificateRequestCmc2_GetInnerRequest(This,Level,ppValue)( (This)->lpVtbl -> GetInnerRequest(This,Level,ppValue) )
#define IX509CertificateRequestCmc2_get_Type(This,pValue)( (This)->lpVtbl -> get_Type(This,pValue) )
#define IX509CertificateRequestCmc2_get_EnrollmentContext(This,pValue)( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
#define IX509CertificateRequestCmc2_get_Silent(This,pValue)( (This)->lpVtbl -> get_Silent(This,pValue) )
#define IX509CertificateRequestCmc2_put_Silent(This,Value)( (This)->lpVtbl -> put_Silent(This,Value) )
#define IX509CertificateRequestCmc2_get_ParentWindow(This,pValue)( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
#define IX509CertificateRequestCmc2_put_ParentWindow(This,Value)( (This)->lpVtbl -> put_ParentWindow(This,Value) )
#define IX509CertificateRequestCmc2_get_UIContextMessage(This,pValue)( (This)->lpVtbl -> get_UIContextMessage(This,pValue) )
#define IX509CertificateRequestCmc2_put_UIContextMessage(This,Value)( (This)->lpVtbl -> put_UIContextMessage(This,Value) )
#define IX509CertificateRequestCmc2_get_SuppressDefaults(This,pValue)( (This)->lpVtbl -> get_SuppressDefaults(This,pValue) )
#define IX509CertificateRequestCmc2_put_SuppressDefaults(This,Value)( (This)->lpVtbl -> put_SuppressDefaults(This,Value) )
#define IX509CertificateRequestCmc2_get_RenewalCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestCmc2_put_RenewalCertificate(This,Encoding,Value)( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,Value) )
#define IX509CertificateRequestCmc2_get_ClientId(This,pValue)( (This)->lpVtbl -> get_ClientId(This,pValue) )
#define IX509CertificateRequestCmc2_put_ClientId(This,Value)( (This)->lpVtbl -> put_ClientId(This,Value) )
#define IX509CertificateRequestCmc2_get_CspInformations(This,ppValue)( (This)->lpVtbl -> get_CspInformations(This,ppValue) )
#define IX509CertificateRequestCmc2_put_CspInformations(This,pValue)( (This)->lpVtbl -> put_CspInformations(This,pValue) )
#define IX509CertificateRequestCmc2_get_HashAlgorithm(This,ppValue)( (This)->lpVtbl -> get_HashAlgorithm(This,ppValue) )
#define IX509CertificateRequestCmc2_put_HashAlgorithm(This,pValue)( (This)->lpVtbl -> put_HashAlgorithm(This,pValue) )
#define IX509CertificateRequestCmc2_get_AlternateSignatureAlgorithm(This,pValue)( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,pValue) )
#define IX509CertificateRequestCmc2_put_AlternateSignatureAlgorithm(This,Value)( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,Value) )
#define IX509CertificateRequestCmc2_get_RawData(This,Encoding,pValue)( (This)->lpVtbl -> get_RawData(This,Encoding,pValue) )
#define IX509CertificateRequestCmc2_InitializeFromTemplateName(This,Context,strTemplateName)( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
#define IX509CertificateRequestCmc2_InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions)( (This)->lpVtbl -> InitializeFromCertificate(This,Context,RenewalRequest,strCertificate,Encoding,InheritOptions) )
#define IX509CertificateRequestCmc2_InitializeFromInnerRequest(This,pInnerRequest)( (This)->lpVtbl -> InitializeFromInnerRequest(This,pInnerRequest) )
#define IX509CertificateRequestCmc2_InitializeDecode(This,strEncodedData,Encoding)( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding) )
#define IX509CertificateRequestCmc2_get_RequesterName(This,pValue)( (This)->lpVtbl -> get_RequesterName(This,pValue) )
#define IX509CertificateRequestCmc2_put_RequesterName(This,Value)( (This)->lpVtbl -> put_RequesterName(This,Value) )
#define IX509CertificateRequestCmc2_get_SignerCertificate(This,ppValue)( (This)->lpVtbl -> get_SignerCertificate(This,ppValue) )
#define IX509CertificateRequestCmc2_put_SignerCertificate(This,pValue)( (This)->lpVtbl -> put_SignerCertificate(This,pValue) )
#define IX509CertificateRequestCmc2_InitializeFromInnerRequestTemplateName(This,pInnerRequest,strTemplateName)( (This)->lpVtbl -> InitializeFromInnerRequestTemplateName(This,pInnerRequest,strTemplateName) )
#define IX509CertificateRequestCmc2_get_TemplateObjectId(This,ppValue)( (This)->lpVtbl -> get_TemplateObjectId(This,ppValue) )
#define IX509CertificateRequestCmc2_get_NullSigned(This,pValue)( (This)->lpVtbl -> get_NullSigned(This,pValue) )
#define IX509CertificateRequestCmc2_get_CryptAttributes(This,ppValue)( (This)->lpVtbl -> get_CryptAttributes(This,ppValue) )
#define IX509CertificateRequestCmc2_get_NameValuePairs(This,ppValue)( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) )
#define IX509CertificateRequestCmc2_get_X509Extensions(This,ppValue)( (This)->lpVtbl -> get_X509Extensions(This,ppValue) )
#define IX509CertificateRequestCmc2_get_CriticalExtensions(This,ppValue)( (This)->lpVtbl -> get_CriticalExtensions(This,ppValue) )
#define IX509CertificateRequestCmc2_get_SuppressOids(This,ppValue)( (This)->lpVtbl -> get_SuppressOids(This,ppValue) )
#define IX509CertificateRequestCmc2_get_TransactionId(This,pValue)( (This)->lpVtbl -> get_TransactionId(This,pValue) )
#define IX509CertificateRequestCmc2_put_TransactionId(This,Value)( (This)->lpVtbl -> put_TransactionId(This,Value) )
#define IX509CertificateRequestCmc2_get_SenderNonce(This,Encoding,pValue)( (This)->lpVtbl -> get_SenderNonce(This,Encoding,pValue) )
#define IX509CertificateRequestCmc2_put_SenderNonce(This,Encoding,Value)( (This)->lpVtbl -> put_SenderNonce(This,Encoding,Value) )
#define IX509CertificateRequestCmc2_get_SignatureInformation(This,ppValue)( (This)->lpVtbl -> get_SignatureInformation(This,ppValue) )
#define IX509CertificateRequestCmc2_get_ArchivePrivateKey(This,pValue)( (This)->lpVtbl -> get_ArchivePrivateKey(This,pValue) )
#define IX509CertificateRequestCmc2_put_ArchivePrivateKey(This,Value)( (This)->lpVtbl -> put_ArchivePrivateKey(This,Value) )
#define IX509CertificateRequestCmc2_get_KeyArchivalCertificate(This,Encoding,pValue)( (This)->lpVtbl -> get_KeyArchivalCertificate(This,Encoding,pValue) )
#define IX509CertificateRequestCmc2_put_KeyArchivalCertificate(This,Encoding,Value)( (This)->lpVtbl -> put_KeyArchivalCertificate(This,Encoding,Value) )
#define IX509CertificateRequestCmc2_get_EncryptionAlgorithm(This,ppValue)( (This)->lpVtbl -> get_EncryptionAlgorithm(This,ppValue) )
#define IX509CertificateRequestCmc2_put_EncryptionAlgorithm(This,pValue)( (This)->lpVtbl -> put_EncryptionAlgorithm(This,pValue) )
#define IX509CertificateRequestCmc2_get_EncryptionStrength(This,pValue)( (This)->lpVtbl -> get_EncryptionStrength(This,pValue) )
#define IX509CertificateRequestCmc2_put_EncryptionStrength(This,Value)( (This)->lpVtbl -> put_EncryptionStrength(This,Value) )
#define IX509CertificateRequestCmc2_get_EncryptedKeyHash(This,Encoding,pValue)( (This)->lpVtbl -> get_EncryptedKeyHash(This,Encoding,pValue) )
#define IX509CertificateRequestCmc2_get_SignerCertificates(This,ppValue)( (This)->lpVtbl -> get_SignerCertificates(This,ppValue) )
#define IX509CertificateRequestCmc2_InitializeFromTemplate(This,context,pPolicyServer,pTemplate)( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) )
#define IX509CertificateRequestCmc2_InitializeFromInnerRequestTemplate(This,pInnerRequest,pPolicyServer,pTemplate)( (This)->lpVtbl -> InitializeFromInnerRequestTemplate(This,pInnerRequest,pPolicyServer,pTemplate) )
#define IX509CertificateRequestCmc2_get_PolicyServer(This,ppPolicyServer)( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) )
#define IX509CertificateRequestCmc2_get_Template(This,ppTemplate)( (This)->lpVtbl -> get_Template(This,ppTemplate) )
#define IX509CertificateRequestCmc2_CheckSignature(This,AllowedSignatureTypes)( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes) )
#define IX509CertificateRequestCmc2_CheckCertificateSignature(This,pSignerCertificate,ValidateCertificateChain)( (This)->lpVtbl -> CheckCertificateSignature(This,pSignerCertificate,ValidateCertificateChain) )
#endif
#endif
typedef enum InstallResponseRestrictionFlags
{
	AllowNone = 0,
	AllowNoOutstandingRequest = 0x1,
	AllowUntrustedCertificate = 0x2,
	AllowUntrustedRoot = 0x4
} InstallResponseRestrictionFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0081_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0081_v0_0_s_ifspec;
#ifndef __IX509Enrollment_INTERFACE_DEFINED__
#define __IX509Enrollment_INTERFACE_DEFINED__
extern const IID IID_IX509Enrollment;
typedef struct IX509EnrollmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509Enrollment * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509Enrollment * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509Enrollment * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509Enrollment * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509Enrollment * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509Enrollment * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509Enrollment * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509Enrollment * This, X509CertificateEnrollmentContext Context);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplateName) (IX509Enrollment * This, X509CertificateEnrollmentContext Context, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromRequest) (IX509Enrollment * This, IX509CertificateRequest * pRequest);
	HRESULT(STDMETHODCALLTYPE * CreateRequest) (IX509Enrollment * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * Enroll) (IX509Enrollment * This);
	HRESULT(STDMETHODCALLTYPE * InstallResponse) (IX509Enrollment * This, InstallResponseRestrictionFlags Restrictions, BSTR strResponse, EncodingType Encoding, BSTR strPassword);
	HRESULT(STDMETHODCALLTYPE * CreatePFX) (IX509Enrollment * This, BSTR strPassword, PFXExportOptions ExportOptions, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Request) (IX509Enrollment * This, IX509CertificateRequest ** pValue);
	HRESULT(STDMETHODCALLTYPE * get_Silent) (IX509Enrollment * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Silent) (IX509Enrollment * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IX509Enrollment * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IX509Enrollment * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_NameValuePairs) (IX509Enrollment * This, IX509NameValuePairs ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_EnrollmentContext) (IX509Enrollment * This, X509CertificateEnrollmentContext * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IX509Enrollment * This, IX509EnrollmentStatus ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Certificate) (IX509Enrollment * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Response) (IX509Enrollment * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CertificateFriendlyName) (IX509Enrollment * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_CertificateFriendlyName) (IX509Enrollment * This, BSTR strValue);
	HRESULT(STDMETHODCALLTYPE * get_CertificateDescription) (IX509Enrollment * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_CertificateDescription) (IX509Enrollment * This, BSTR strValue);
	HRESULT(STDMETHODCALLTYPE * get_RequestId) (IX509Enrollment * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CAConfigString) (IX509Enrollment * This, BSTR * pValue);
	END_INTERFACE
}  IX509EnrollmentVtbl;
interface IX509Enrollment
{
	CONST_VTBL struct IX509EnrollmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509Enrollment_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509Enrollment_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509Enrollment_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509Enrollment_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509Enrollment_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509Enrollment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509Enrollment_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509Enrollment_Initialize(This,Context)( (This)->lpVtbl -> Initialize(This,Context) )
#define IX509Enrollment_InitializeFromTemplateName(This,Context,strTemplateName)( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
#define IX509Enrollment_InitializeFromRequest(This,pRequest)( (This)->lpVtbl -> InitializeFromRequest(This,pRequest) )
#define IX509Enrollment_CreateRequest(This,Encoding,pValue)( (This)->lpVtbl -> CreateRequest(This,Encoding,pValue) )
#define IX509Enrollment_Enroll(This)( (This)->lpVtbl -> Enroll(This) )
#define IX509Enrollment_InstallResponse(This,Restrictions,strResponse,Encoding,strPassword)( (This)->lpVtbl -> InstallResponse(This,Restrictions,strResponse,Encoding,strPassword) )
#define IX509Enrollment_CreatePFX(This,strPassword,ExportOptions,Encoding,pValue)( (This)->lpVtbl -> CreatePFX(This,strPassword,ExportOptions,Encoding,pValue) )
#define IX509Enrollment_get_Request(This,pValue)( (This)->lpVtbl -> get_Request(This,pValue) )
#define IX509Enrollment_get_Silent(This,pValue)( (This)->lpVtbl -> get_Silent(This,pValue) )
#define IX509Enrollment_put_Silent(This,Value)( (This)->lpVtbl -> put_Silent(This,Value) )
#define IX509Enrollment_get_ParentWindow(This,pValue)( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
#define IX509Enrollment_put_ParentWindow(This,Value)( (This)->lpVtbl -> put_ParentWindow(This,Value) )
#define IX509Enrollment_get_NameValuePairs(This,ppValue)( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) )
#define IX509Enrollment_get_EnrollmentContext(This,pValue)( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
#define IX509Enrollment_get_Status(This,ppValue)( (This)->lpVtbl -> get_Status(This,ppValue) )
#define IX509Enrollment_get_Certificate(This,Encoding,pValue)( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) )
#define IX509Enrollment_get_Response(This,Encoding,pValue)( (This)->lpVtbl -> get_Response(This,Encoding,pValue) )
#define IX509Enrollment_get_CertificateFriendlyName(This,pValue)( (This)->lpVtbl -> get_CertificateFriendlyName(This,pValue) )
#define IX509Enrollment_put_CertificateFriendlyName(This,strValue)( (This)->lpVtbl -> put_CertificateFriendlyName(This,strValue) )
#define IX509Enrollment_get_CertificateDescription(This,pValue)( (This)->lpVtbl -> get_CertificateDescription(This,pValue) )
#define IX509Enrollment_put_CertificateDescription(This,strValue)( (This)->lpVtbl -> put_CertificateDescription(This,strValue) )
#define IX509Enrollment_get_RequestId(This,pValue)( (This)->lpVtbl -> get_RequestId(This,pValue) )
#define IX509Enrollment_get_CAConfigString(This,pValue)( (This)->lpVtbl -> get_CAConfigString(This,pValue) )
#endif
#endif
#ifndef __IX509Enrollment2_INTERFACE_DEFINED__
#define __IX509Enrollment2_INTERFACE_DEFINED__
extern const IID IID_IX509Enrollment2;
typedef struct IX509Enrollment2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509Enrollment2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509Enrollment2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509Enrollment2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509Enrollment2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509Enrollment2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509Enrollment2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509Enrollment2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509Enrollment2 * This, X509CertificateEnrollmentContext Context);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplateName) (IX509Enrollment2 * This, X509CertificateEnrollmentContext Context, BSTR strTemplateName);
	HRESULT(STDMETHODCALLTYPE * InitializeFromRequest) (IX509Enrollment2 * This, IX509CertificateRequest * pRequest);
	HRESULT(STDMETHODCALLTYPE * CreateRequest) (IX509Enrollment2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * Enroll) (IX509Enrollment2 * This);
	HRESULT(STDMETHODCALLTYPE * InstallResponse) (IX509Enrollment2 * This, InstallResponseRestrictionFlags Restrictions, BSTR strResponse, EncodingType Encoding, BSTR strPassword);
	HRESULT(STDMETHODCALLTYPE * CreatePFX) (IX509Enrollment2 * This, BSTR strPassword, PFXExportOptions ExportOptions, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Request) (IX509Enrollment2 * This, IX509CertificateRequest ** pValue);
	HRESULT(STDMETHODCALLTYPE * get_Silent) (IX509Enrollment2 * This, VARIANT_BOOL * pValue);
	HRESULT(STDMETHODCALLTYPE * put_Silent) (IX509Enrollment2 * This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE * get_ParentWindow) (IX509Enrollment2 * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * put_ParentWindow) (IX509Enrollment2 * This, LONG Value);
	HRESULT(STDMETHODCALLTYPE * get_NameValuePairs) (IX509Enrollment2 * This, IX509NameValuePairs ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_EnrollmentContext) (IX509Enrollment2 * This, X509CertificateEnrollmentContext * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IX509Enrollment2 * This, IX509EnrollmentStatus ** ppValue);
	HRESULT(STDMETHODCALLTYPE * get_Certificate) (IX509Enrollment2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_Response) (IX509Enrollment2 * This, EncodingType Encoding, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CertificateFriendlyName) (IX509Enrollment2 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_CertificateFriendlyName) (IX509Enrollment2 * This, BSTR strValue);
	HRESULT(STDMETHODCALLTYPE * get_CertificateDescription) (IX509Enrollment2 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * put_CertificateDescription) (IX509Enrollment2 * This, BSTR strValue);
	HRESULT(STDMETHODCALLTYPE * get_RequestId) (IX509Enrollment2 * This, LONG * pValue);
	HRESULT(STDMETHODCALLTYPE * get_CAConfigString) (IX509Enrollment2 * This, BSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * InitializeFromTemplate) (IX509Enrollment2 * This, X509CertificateEnrollmentContext context, IX509EnrollmentPolicyServer * pPolicyServer, IX509CertificateTemplate * pTemplate);
	HRESULT(STDMETHODCALLTYPE * InstallResponse2) (IX509Enrollment2 * This, InstallResponseRestrictionFlags Restrictions, BSTR strResponse, EncodingType Encoding, BSTR strPassword, BSTR strEnrollmentPolicyServerUrl, BSTR strEnrollmentPolicyServerID, PolicyServerUrlFlags EnrollmentPolicyServerFlags, X509EnrollmentAuthFlags authFlags);
	HRESULT(STDMETHODCALLTYPE * get_PolicyServer) (IX509Enrollment2 * This, IX509EnrollmentPolicyServer ** ppPolicyServer);
	HRESULT(STDMETHODCALLTYPE * get_Template) (IX509Enrollment2 * This, IX509CertificateTemplate ** ppTemplate);
	HRESULT(STDMETHODCALLTYPE * get_RequestIdString) (IX509Enrollment2 * This, BSTR * pValue);
	END_INTERFACE
}  IX509Enrollment2Vtbl;
interface IX509Enrollment2
{
	CONST_VTBL struct IX509Enrollment2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509Enrollment2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509Enrollment2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509Enrollment2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509Enrollment2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509Enrollment2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509Enrollment2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509Enrollment2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509Enrollment2_Initialize(This,Context)( (This)->lpVtbl -> Initialize(This,Context) )
#define IX509Enrollment2_InitializeFromTemplateName(This,Context,strTemplateName)( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName) )
#define IX509Enrollment2_InitializeFromRequest(This,pRequest)( (This)->lpVtbl -> InitializeFromRequest(This,pRequest) )
#define IX509Enrollment2_CreateRequest(This,Encoding,pValue)( (This)->lpVtbl -> CreateRequest(This,Encoding,pValue) )
#define IX509Enrollment2_Enroll(This)( (This)->lpVtbl -> Enroll(This) )
#define IX509Enrollment2_InstallResponse(This,Restrictions,strResponse,Encoding,strPassword)( (This)->lpVtbl -> InstallResponse(This,Restrictions,strResponse,Encoding,strPassword) )
#define IX509Enrollment2_CreatePFX(This,strPassword,ExportOptions,Encoding,pValue)( (This)->lpVtbl -> CreatePFX(This,strPassword,ExportOptions,Encoding,pValue) )
#define IX509Enrollment2_get_Request(This,pValue)( (This)->lpVtbl -> get_Request(This,pValue) )
#define IX509Enrollment2_get_Silent(This,pValue)( (This)->lpVtbl -> get_Silent(This,pValue) )
#define IX509Enrollment2_put_Silent(This,Value)( (This)->lpVtbl -> put_Silent(This,Value) )
#define IX509Enrollment2_get_ParentWindow(This,pValue)( (This)->lpVtbl -> get_ParentWindow(This,pValue) )
#define IX509Enrollment2_put_ParentWindow(This,Value)( (This)->lpVtbl -> put_ParentWindow(This,Value) )
#define IX509Enrollment2_get_NameValuePairs(This,ppValue)( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) )
#define IX509Enrollment2_get_EnrollmentContext(This,pValue)( (This)->lpVtbl -> get_EnrollmentContext(This,pValue) )
#define IX509Enrollment2_get_Status(This,ppValue)( (This)->lpVtbl -> get_Status(This,ppValue) )
#define IX509Enrollment2_get_Certificate(This,Encoding,pValue)( (This)->lpVtbl -> get_Certificate(This,Encoding,pValue) )
#define IX509Enrollment2_get_Response(This,Encoding,pValue)( (This)->lpVtbl -> get_Response(This,Encoding,pValue) )
#define IX509Enrollment2_get_CertificateFriendlyName(This,pValue)( (This)->lpVtbl -> get_CertificateFriendlyName(This,pValue) )
#define IX509Enrollment2_put_CertificateFriendlyName(This,strValue)( (This)->lpVtbl -> put_CertificateFriendlyName(This,strValue) )
#define IX509Enrollment2_get_CertificateDescription(This,pValue)( (This)->lpVtbl -> get_CertificateDescription(This,pValue) )
#define IX509Enrollment2_put_CertificateDescription(This,strValue)( (This)->lpVtbl -> put_CertificateDescription(This,strValue) )
#define IX509Enrollment2_get_RequestId(This,pValue)( (This)->lpVtbl -> get_RequestId(This,pValue) )
#define IX509Enrollment2_get_CAConfigString(This,pValue)( (This)->lpVtbl -> get_CAConfigString(This,pValue) )
#define IX509Enrollment2_InitializeFromTemplate(This,context,pPolicyServer,pTemplate)( (This)->lpVtbl -> InitializeFromTemplate(This,context,pPolicyServer,pTemplate) )
#define IX509Enrollment2_InstallResponse2(This,Restrictions,strResponse,Encoding,strPassword,strEnrollmentPolicyServerUrl,strEnrollmentPolicyServerID,EnrollmentPolicyServerFlags,authFlags)( (This)->lpVtbl -> InstallResponse2(This,Restrictions,strResponse,Encoding,strPassword,strEnrollmentPolicyServerUrl,strEnrollmentPolicyServerID,EnrollmentPolicyServerFlags,authFlags) )
#define IX509Enrollment2_get_PolicyServer(This,ppPolicyServer)( (This)->lpVtbl -> get_PolicyServer(This,ppPolicyServer) )
#define IX509Enrollment2_get_Template(This,ppTemplate)( (This)->lpVtbl -> get_Template(This,ppTemplate) )
#define IX509Enrollment2_get_RequestIdString(This,pValue)( (This)->lpVtbl -> get_RequestIdString(This,pValue) )
#endif
#endif
typedef enum WebEnrollmentFlags
{
	EnrollPrompt = 0x1
} WebEnrollmentFlags;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0083_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenroll_0000_0083_v0_0_s_ifspec;
#ifndef __IX509EnrollmentHelper_INTERFACE_DEFINED__
#define __IX509EnrollmentHelper_INTERFACE_DEFINED__
extern const IID IID_IX509EnrollmentHelper;
typedef struct IX509EnrollmentHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509EnrollmentHelper * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509EnrollmentHelper * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509EnrollmentHelper * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509EnrollmentHelper * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509EnrollmentHelper * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509EnrollmentHelper * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509EnrollmentHelper * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * AddPolicyServer) (IX509EnrollmentHelper * This, BSTR strEnrollmentPolicyServerURI, BSTR strEnrollmentPolicyID, PolicyServerUrlFlags EnrollmentPolicyServerFlags, X509EnrollmentAuthFlags authFlags, BSTR strCredential, BSTR strPassword);
	HRESULT(STDMETHODCALLTYPE * AddEnrollmentServer) (IX509EnrollmentHelper * This, BSTR strEnrollmentServerURI, X509EnrollmentAuthFlags authFlags, BSTR strCredential, BSTR strPassword);
	HRESULT(STDMETHODCALLTYPE * Enroll) (IX509EnrollmentHelper * This, BSTR strEnrollmentPolicyServerURI, BSTR strTemplateName, EncodingType Encoding, WebEnrollmentFlags enrollFlags, BSTR * pstrCertificate);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IX509EnrollmentHelper * This, X509CertificateEnrollmentContext Context);
	END_INTERFACE
}  IX509EnrollmentHelperVtbl;
interface IX509EnrollmentHelper
{
	CONST_VTBL struct IX509EnrollmentHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509EnrollmentHelper_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509EnrollmentHelper_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509EnrollmentHelper_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509EnrollmentHelper_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509EnrollmentHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509EnrollmentHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509EnrollmentHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509EnrollmentHelper_AddPolicyServer(This,strEnrollmentPolicyServerURI,strEnrollmentPolicyID,EnrollmentPolicyServerFlags,authFlags,strCredential,strPassword)( (This)->lpVtbl -> AddPolicyServer(This,strEnrollmentPolicyServerURI,strEnrollmentPolicyID,EnrollmentPolicyServerFlags,authFlags,strCredential,strPassword) )
#define IX509EnrollmentHelper_AddEnrollmentServer(This,strEnrollmentServerURI,authFlags,strCredential,strPassword)( (This)->lpVtbl -> AddEnrollmentServer(This,strEnrollmentServerURI,authFlags,strCredential,strPassword) )
#define IX509EnrollmentHelper_Enroll(This,strEnrollmentPolicyServerURI,strTemplateName,Encoding,enrollFlags,pstrCertificate)( (This)->lpVtbl -> Enroll(This,strEnrollmentPolicyServerURI,strTemplateName,Encoding,enrollFlags,pstrCertificate) )
#define IX509EnrollmentHelper_Initialize(This,Context)( (This)->lpVtbl -> Initialize(This,Context) )
#endif
#endif
#ifndef __IX509EnrollmentWebClassFactory_INTERFACE_DEFINED__
#define __IX509EnrollmentWebClassFactory_INTERFACE_DEFINED__
extern const IID IID_IX509EnrollmentWebClassFactory;
typedef struct IX509EnrollmentWebClassFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509EnrollmentWebClassFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509EnrollmentWebClassFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509EnrollmentWebClassFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509EnrollmentWebClassFactory * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509EnrollmentWebClassFactory * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509EnrollmentWebClassFactory * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509EnrollmentWebClassFactory * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateObject) (IX509EnrollmentWebClassFactory * This, BSTR strProgID, IUnknown ** ppIUnknown);
	END_INTERFACE
}  IX509EnrollmentWebClassFactoryVtbl;
interface IX509EnrollmentWebClassFactory
{
	CONST_VTBL struct IX509EnrollmentWebClassFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509EnrollmentWebClassFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509EnrollmentWebClassFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509EnrollmentWebClassFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509EnrollmentWebClassFactory_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509EnrollmentWebClassFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509EnrollmentWebClassFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509EnrollmentWebClassFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509EnrollmentWebClassFactory_CreateObject(This,strProgID,ppIUnknown)( (This)->lpVtbl -> CreateObject(This,strProgID,ppIUnknown) )
#endif
#endif
#ifndef __IX509MachineEnrollmentFactory_INTERFACE_DEFINED__
#define __IX509MachineEnrollmentFactory_INTERFACE_DEFINED__
extern const IID IID_IX509MachineEnrollmentFactory;
typedef struct IX509MachineEnrollmentFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IX509MachineEnrollmentFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IX509MachineEnrollmentFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IX509MachineEnrollmentFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IX509MachineEnrollmentFactory * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IX509MachineEnrollmentFactory * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IX509MachineEnrollmentFactory * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IX509MachineEnrollmentFactory * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateObject) (IX509MachineEnrollmentFactory * This, BSTR strProgID, IX509EnrollmentHelper ** ppIHelper);
	END_INTERFACE
}  IX509MachineEnrollmentFactoryVtbl;
interface IX509MachineEnrollmentFactory
{
	CONST_VTBL struct IX509MachineEnrollmentFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IX509MachineEnrollmentFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IX509MachineEnrollmentFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IX509MachineEnrollmentFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define IX509MachineEnrollmentFactory_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IX509MachineEnrollmentFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IX509MachineEnrollmentFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IX509MachineEnrollmentFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IX509MachineEnrollmentFactory_CreateObject(This,strProgID,ppIHelper)( (This)->lpVtbl -> CreateObject(This,strProgID,ppIHelper) )
#endif
#endif
#ifndef __CERTENROLLLib_LIBRARY_DEFINED__
#define __CERTENROLLLib_LIBRARY_DEFINED__
typedef enum X509CertificateTemplateGeneralFlag
{
	GeneralMachineType = 0x40,
	GeneralCA = 0x80,
	GeneralCrossCA = 0x800,
	GeneralDefault = 0x10000,
	GeneralModified = 0x20000,
	GeneralDonotPersist = 0x1000
} X509CertificateTemplateGeneralFlag;
typedef enum X509CertificateTemplateEnrollmentFlag
{
	EnrollmentIncludeSymmetricAlgorithms = 0x1,
	EnrollmentPendAllRequests = 0x2,
	EnrollmentPublishToKRAContainer = 0x4,
	EnrollmentPublishToDS = 0x8,
	EnrollmentAutoEnrollmentCheckUserDSCertificate = 0x10,
	EnrollmentAutoEnrollment = 0x20,
	EnrollmentDomainAuthenticationNotRequired = 0x80,
	EnrollmentPreviousApprovalValidateReenrollment = 0x40,
	EnrollmentUserInteractionRequired = 0x100,
	EnrollmentAddTemplateName = 0x200,
	EnrollmentRemoveInvalidCertificateFromPersonalStore = 0x400,
	EnrollmentAllowEnrollOnBehalfOf = 0x800,
	EnrollmentAddOCSPNoCheck = 0x1000,
	EnrollmentReuseKeyOnFullSmartCard = 0x2000,
	EnrollmentNoRevocationInfoInCerts = 0x4000,
	EnrollmentIncludeBasicConstraintsForEECerts = 0x8000
} X509CertificateTemplateEnrollmentFlag;
typedef enum X509CertificateTemplateSubjectNameFlag
{
	SubjectNameEnrolleeSupplies = 0x1,
	SubjectNameRequireDirectoryPath = 0x80000000,
	SubjectNameRequireCommonName = 0x40000000,
	SubjectNameRequireEmail = 0x20000000,
	SubjectNameRequireDNS = 0x10000000,
	SubjectNameAndAlternativeNameOldCertSupplies = 0x8,
	SubjectAlternativeNameEnrolleeSupplies = 0x10000,
	SubjectAlternativeNameRequireDirectoryGUID = 0x1000000,
	SubjectAlternativeNameRequireUPN = 0x2000000,
	SubjectAlternativeNameRequireEmail = 0x4000000,
	SubjectAlternativeNameRequireSPN = 0x800000,
	SubjectAlternativeNameRequireDNS = 0x8000000,
	SubjectAlternativeNameRequireDomainDNS = 0x400000
} X509CertificateTemplateSubjectNameFlag;
typedef enum X509CertificateTemplatePrivateKeyFlag
{
	PrivateKeyRequireArchival = 0x1,
	PrivateKeyExportable = 0x10,
	PrivateKeyRequireStrongKeyProtection = 0x20,
	PrivateKeyRequireAlternateSignatureAlgorithm = 0x40
} X509CertificateTemplatePrivateKeyFlag;
extern const IID LIBID_CERTENROLLLib;
extern const CLSID CLSID_CObjectId;
extern const CLSID CLSID_CObjectIds;
extern const CLSID CLSID_CBinaryConverter;
extern const CLSID CLSID_CX500DistinguishedName;
extern const CLSID CLSID_CCspInformation;
extern const CLSID CLSID_CCspInformations;
extern const CLSID CLSID_CCspStatus;
extern const CLSID CLSID_CX509PublicKey;
extern const CLSID CLSID_CX509PrivateKey;
extern const CLSID CLSID_CX509Extension;
extern const CLSID CLSID_CX509Extensions;
extern const CLSID CLSID_CX509ExtensionKeyUsage;
extern const CLSID CLSID_CX509ExtensionEnhancedKeyUsage;
extern const CLSID CLSID_CX509ExtensionTemplateName;
extern const CLSID CLSID_CX509ExtensionTemplate;
extern const CLSID CLSID_CAlternativeName;
extern const CLSID CLSID_CAlternativeNames;
extern const CLSID CLSID_CX509ExtensionAlternativeNames;
extern const CLSID CLSID_CX509ExtensionBasicConstraints;
extern const CLSID CLSID_CX509ExtensionSubjectKeyIdentifier;
extern const CLSID CLSID_CX509ExtensionAuthorityKeyIdentifier;
extern const CLSID CLSID_CSmimeCapability;
extern const CLSID CLSID_CSmimeCapabilities;
extern const CLSID CLSID_CX509ExtensionSmimeCapabilities;
extern const CLSID CLSID_CPolicyQualifier;
extern const CLSID CLSID_CPolicyQualifiers;
extern const CLSID CLSID_CCertificatePolicy;
extern const CLSID CLSID_CCertificatePolicies;
extern const CLSID CLSID_CX509ExtensionCertificatePolicies;
extern const CLSID CLSID_CX509ExtensionMSApplicationPolicies;
extern const CLSID CLSID_CX509Attribute;
extern const CLSID CLSID_CX509Attributes;
extern const CLSID CLSID_CX509AttributeExtensions;
extern const CLSID CLSID_CX509AttributeClientId;
extern const CLSID CLSID_CX509AttributeRenewalCertificate;
extern const CLSID CLSID_CX509AttributeArchiveKey;
extern const CLSID CLSID_CX509AttributeArchiveKeyHash;
extern const CLSID CLSID_CX509AttributeOSVersion;
extern const CLSID CLSID_CX509AttributeCspProvider;
extern const CLSID CLSID_CCryptAttribute;
extern const CLSID CLSID_CCryptAttributes;
extern const CLSID CLSID_CCertProperty;
extern const CLSID CLSID_CCertProperties;
extern const CLSID CLSID_CCertPropertyFriendlyName;
extern const CLSID CLSID_CCertPropertyDescription;
extern const CLSID CLSID_CCertPropertyAutoEnroll;
extern const CLSID CLSID_CCertPropertyRequestOriginator;
extern const CLSID CLSID_CCertPropertySHA1Hash;
extern const CLSID CLSID_CCertPropertyKeyProvInfo;
extern const CLSID CLSID_CCertPropertyArchived;
extern const CLSID CLSID_CCertPropertyBackedUp;
extern const CLSID CLSID_CCertPropertyEnrollment;
extern const CLSID CLSID_CCertPropertyRenewal;
extern const CLSID CLSID_CCertPropertyArchivedKeyHash;
extern const CLSID CLSID_CCertPropertyEnrollmentPolicyServer;
extern const CLSID CLSID_CSignerCertificate;
extern const CLSID CLSID_CX509NameValuePair;
extern const CLSID CLSID_CX509CertificateRequestPkcs10;
extern const CLSID CLSID_CX509CertificateRequestCertificate;
extern const CLSID CLSID_CX509CertificateRequestPkcs7;
extern const CLSID CLSID_CX509CertificateRequestCmc;
extern const CLSID CLSID_CX509Enrollment;
extern const CLSID CLSID_CX509EnrollmentWebClassFactory;
extern const CLSID CLSID_CX509EnrollmentHelper;
extern const CLSID CLSID_CX509MachineEnrollmentFactory;
extern const CLSID CLSID_CX509EnrollmentPolicyActiveDirectory;
extern const CLSID CLSID_CX509EnrollmentPolicyWebService;
extern const CLSID CLSID_CX509PolicyServerListManager;
extern const CLSID CLSID_CX509PolicyServerUrl;
extern const CLSID CLSID_CX509CertificateTemplateADWritable;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
