/*+@@file@@----------------------------------------------------------------*//*!
 \file		EapHostError.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  8 17:08:06 2016
 \date		Modified on Fri Jul  8 17:08:06 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef EAPHOSTERROR_H
#define EAPHOSTERROR_H
#if __POCC__ >= 500
#pragma once
#endif
#define FACILITY_EAP                   0x0042
#define FACILITY_EAP_MESSAGE           0x0842
#define _EAP_CERT_FIRST     		  (+ 0x0)
#define _EAP_CERT_LAST      		  (+ 0xF)
#define _EAP_CERT_NOT_FOUND           (+ 0x1)
#define _EAP_CERT_INVALID             (+ 0x2)
#define _EAP_CERT_EXPIRED             (+ 0x3)
#define _EAP_CERT_REVOKED             (+ 0x4)
#define _EAP_CERT_OTHER_ERROR         (+ 0x5)
#define _EAP_CERT_REJECTED            (+ 0x6)
#define _EAP_CERT_NAME_REQUIRED       (+ 0x7)
#define _EAP_GENERAL_FIRST  		  (+ 0x10)
#define _EAP_GENERAL_LAST   		  (+ 0x3F)
#define EAP_GROUP_MASK       0x0000FF00L
#define EAP_E_EAPHOST_FIRST  0x80420000L
#define EAP_E_EAPHOST_LAST   0x804200FFL
#define EAP_I_EAPHOST_FIRST  0x80420000L
#define EAP_I_EAPHOST_LAST   0x804200FFL
#define EAP_E_CERT_STORE_INACCESSIBLE               0x80420010
#define EAP_E_EAPHOST_METHOD_NOT_INSTALLED          0x80420011
#define EAP_E_EAPHOST_THIRDPARTY_METHOD_HOST_RESET  0x80420012
#define EAP_E_EAPHOST_EAPQEC_INACCESSIBLE           0x80420013
#define EAP_E_EAPHOST_IDENTITY_UNKNOWN              0x80420014
#define EAP_E_AUTHENTICATION_FAILED                 0x80420015
#define EAP_I_EAPHOST_EAP_NEGOTIATION_FAILED        0x40420016
#define EAP_E_EAPHOST_METHOD_INVALID_PACKET         0x80420017
#define EAP_E_EAPHOST_REMOTE_INVALID_PACKET         0x80420018
#define EAP_E_EAPHOST_XML_MALFORMED                 0x80420019
#define EAP_E_METHOD_CONFIG_DOES_NOT_SUPPORT_SSO                  0x8042001A
#define EAP_E_EAPHOST_METHOD_OPERATION_NOT_SUPPORTED                 0x80420020
#define EAP_E_USER_FIRST  0x80420100L
#define EAP_E_USER_LAST   0x804201FFL
#define EAP_I_USER_FIRST  0x40420100L
#define EAP_I_USER_LAST   0x404201FFL
#define EAP_E_USER_CERT_NOT_FOUND           0x80420100
#define EAP_E_USER_CERT_INVALID             0x80420101
#define EAP_E_USER_CERT_EXPIRED             0x80420102
#define EAP_E_USER_CERT_REVOKED             0x80420103
#define EAP_E_USER_CERT_OTHER_ERROR         0x80420104
#define EAP_E_USER_CERT_REJECTED            0x80420105
#define EAP_I_USER_ACCOUNT_OTHER_ERROR      0x40420110
#define EAP_E_USER_CREDENTIALS_REJECTED     0x80420111
#define EAP_E_USER_NAME_PASSWORD_REJECTED   0x80420112
#define EAP_E_NO_SMART_CARD_READER       0x80420113
#define EAP_E_SERVER_FIRST  0x80420200L
#define EAP_E_SERVER_LAST   0x804202FFL
#define EAP_E_SERVER_CERT_NOT_FOUND         0x80420200
#define EAP_E_SERVER_CERT_INVALID           0x80420201
#define EAP_E_SERVER_CERT_EXPIRED           0x80420202
#define EAP_E_SERVER_CERT_REVOKED           0x80420203
#define EAP_E_SERVER_CERT_OTHER_ERROR       0x80420204
#define EAP_E_USER_ROOT_CERT_FIRST  0x80420300L
#define EAP_E_USER_ROOT_CERT_LAST   0x804203FFL
#define EAP_E_USER_ROOT_CERT_NOT_FOUND      0x80420300
#define EAP_E_USER_ROOT_CERT_INVALID        0x80420301
#define EAP_E_USER_ROOT_CERT_EXPIRED        0x80420302
#define EAP_E_SERVER_ROOT_CERT_FIRST  0x80420400L
#define EAP_E_SERVER_ROOT_CERT_LAST   0x804204FFL
#define EAP_E_SERVER_ROOT_CERT_NOT_FOUND        0x80420400
#define EAP_E_SERVER_ROOT_CERT_INVALID          0x80420401
#define EAP_E_SERVER_ROOT_CERT_NAME_REQUIRED    0x80420406
#define EAP_METHOD_INVALID_PACKET  EAP_E_EAPHOST_METHOD_INVALID_PACKET
#define EAP_INVALID_PACKET         EAP_E_EAPHOST_REMOTE_INVALID_PACKET
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Default = { 0x00000000, 0x0000, 0x0000, 0, 0, 0, 0, 0, 0, 0, 0 };
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_MethodDLLNotFound = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 1}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactSysadmin = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 2}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_CertStoreInaccessible = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 4}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Generic_AuthFailure = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 1, 4}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_IdentityUnknown = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 2, 4}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_CertExpired = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 5}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_CertInvalid = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 6}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_CertNotFound = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 7}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_CertRevoked = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 8}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_CertOtherError = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 1, 8}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CertExpired = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 9}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CertInvalid = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0xA}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CertNotFound = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0xB}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CertOtherError = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0xC}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CertRejected = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0xD}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CertRevoked = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0xE}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_Account_OtherProblem = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 1, 0xE}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CredsRejected = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 2, 0xE}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_Root_CertExpired = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0xF}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_Root_CertInvalid = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x10}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_Root_CertNotFound = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x11}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_Root_CertNameRequired = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x12}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_Root_CertNotFound = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 1, 0x12}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_ThirdPartyMethod_Host_Reset = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 2, 0x12}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_EapQecInaccessible = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 3, 0x12}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_Server_ClientSelectServerCert = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x18}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_User_AuthFailure = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x19}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_User_GetNewCert = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x1A}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_User_SelectValidCert = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x1B}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_Retry_Authentication = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 1, 0x1B}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_EapNegotiationFailed = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x1C}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_XmlMalformed = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x1D}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_MethodDoesNotSupportOperation = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x1E}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_AuthFailure = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x1F}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_IdentityUnknown = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x20}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_NegotiationFailed = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x21}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_MethodNotFound = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x22}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_RestartNap = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x23}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_CertStoreInaccessible = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x24}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_InvalidUserAccount = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x25}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_RootCertInvalid = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x26}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_RootCertNotFound = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x27}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_RootExpired = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x28}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_CertNameAbsent = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x29}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_NoSmartCardReader = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x2A}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_No_SmartCardReader_Found = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x2B}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_InvalidUserCert = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x2C}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_Method_Not_Support_Sso = { 0x9612fc67, 0x6150, 0x4209, {0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x2D}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Help_ObtainingCerts = { 0xf535eea3, 0x1bdd, 0x46ca, {0xa2, 0xfc, 0xa6, 0x65, 0x59, 0x39, 0xb7, 0xe8}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Help_Troubleshooting = { 0x33307acf, 0x0698, 0x41ba, {0xb0, 0x14, 0xea, 0x0a, 0x2e, 0xb8, 0xd0, 0xa8}};
extern const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Method_Config_Does_Not_Support_Sso = { 0xda18bd32, 0x004F, 0x41fa, {0xae, 0x08, 0x0b, 0xc8, 0x5e, 0x58, 0x45, 0xac}};
#endif
