/*+@@file@@----------------------------------------------------------------*//*!
 \file		EapTypes.h
 \par Description 
            IDL source for interaction with EAPHost supplicants.
 \par  Status: 
            
 \par Project: 
			PellesC Headers extension
 \date		Created  on Sat Mar 14 22:28:03 2015
 \date		Modified on Sat Mar 14 22:28:03 2015
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef EAPTYPES_H
#define EAPTYPES_H
#if __POCC__ >= 500
#pragma once
#endif
#include <guiddef.h>
#define eapPropCipherSuiteNegotiation      0x00000001
#define eapPropMutualAuth                  0x00000002
#define eapPropIntegrity                   0x00000004
#define eapPropReplayProtection            0x00000008
#define eapPropConfidentiality             0x00000010
#define eapPropKeyDerivation               0x00000020
#define eapPropKeyStrength64               0x00000040
#define eapPropKeyStrength128              0x00000080
#define eapPropKeyStrength256              0x00000100
#define eapPropKeyStrength512              0x00000200
#define eapPropKeyStrength1024             0x00000400
#define eapPropDictionaryAttackResistance  0x00000800
#define eapPropFastReconnect               0x00001000
#define eapPropCryptoBinding               0x00002000
#define eapPropSessionIndependence         0x00004000
#define eapPropFragmentation               0x00008000
#define eapPropChannelBinding              0x00010000
#define eapPropNap                         0x00020000
#define eapPropStandalone                  0x00040000
#define eapPropMppeEncryption              0x00080000
#define eapPropTunnelMethod                0x00100000
#define eapPropSupportsConfig              0x00200000
#define eapPropCertifiedMethod             0x00400000
#define eapPropHiddenMethod                0x00800000
#define eapPropMachineAuth                 0x01000000
#define eapPropUserAuth                    0x02000000
#define eapPropIdentityPrivacy             0x04000000
#define eapPropMethodChaining              0x08000000
#define eapPropSharedStateEquivalence      0x10000000
#define eapPropReserved                    0x80000000
#define EAP_VALUENAME_PROPERTIES L"Properties"
typedef DWORD EAP_SESSIONID;
typedef struct _EAP_TYPE
{
   BYTE type;
   DWORD dwVendorId;
   DWORD dwVendorType;
} EAP_TYPE;
typedef struct _EAP_METHOD_TYPE
{
   EAP_TYPE eapType;
   DWORD dwAuthorId;
} EAP_METHOD_TYPE;
typedef struct _EAP_METHOD_INFO
{
   EAP_METHOD_TYPE eaptype;
   LPWSTR pwszAuthorName;
   LPWSTR pwszFriendlyName;
   DWORD eapProperties;
   struct _EAP_METHOD_INFO* pInnerMethodInfo;
} EAP_METHOD_INFO;
struct _EAP_METHOD_INFO_ARRAY_EX;
typedef struct _EAP_METHOD_INFO_EX
{
   EAP_METHOD_TYPE eaptype;
   LPWSTR pwszAuthorName;
   LPWSTR pwszFriendlyName;
   DWORD eapProperties;
   struct _EAP_METHOD_INFO_ARRAY_EX* pInnerMethodInfoArray;
} EAP_METHOD_INFO_EX;
typedef struct _EAP_METHOD_INFO_ARRAY
{
   DWORD dwNumberOfMethods;
   EAP_METHOD_INFO* pEapMethods;
} EAP_METHOD_INFO_ARRAY;
typedef struct _EAP_METHOD_INFO_ARRAY_EX
{
   DWORD dwNumberOfMethods;
   EAP_METHOD_INFO_EX* pEapMethods;
} EAP_METHOD_INFO_ARRAY_EX;
typedef struct _EAP_ERROR
{
   DWORD dwWinError;
   EAP_METHOD_TYPE type;
   DWORD dwReasonCode;
   GUID   rootCauseGuid;
   GUID   repairGuid;
   GUID   helpLinkGuid;
   LPWSTR pRootCauseString;
   LPWSTR pRepairString;
} EAP_ERROR;
extern const CLSID GUID_EapHost_Default;
extern const CLSID GUID_EapHost_Cause_MethodDLLNotFound;
extern const CLSID GUID_EapHost_Cause_EapNegotiationFailed;    
extern const CLSID GUID_EapHost_Cause_ThirdPartyMethod_Host_Reset;
extern const CLSID GUID_EapHost_Cause_XmlMalformed;
extern const CLSID GUID_EapHost_Cause_MethodDoesNotSupportOperation;
extern const CLSID GUID_EapHost_Cause_EapQecInaccessible;
extern const CLSID GUID_EapHost_Cause_Generic_AuthFailure;
extern const CLSID GUID_EapHost_Cause_IdentityUnknown;
extern const CLSID GUID_EapHost_Cause_CertStoreInaccessible;
extern const CLSID GUID_EapHost_Cause_User_CertExpired;
extern const CLSID GUID_EapHost_Cause_User_CertInvalid;
extern const CLSID GUID_EapHost_Cause_User_CertNotFound;
extern const CLSID GUID_EapHost_Cause_User_CertOtherError;
extern const CLSID GUID_EapHost_Cause_User_CertRejected;
extern const CLSID GUID_EapHost_Cause_User_CertRevoked;
extern const CLSID GUID_EapHost_Cause_User_Account_OtherProblem;
extern const CLSID GUID_EapHost_Cause_User_CredsRejected;
extern const CLSID GUID_EapHost_Cause_Server_CertExpired;
extern const CLSID GUID_EapHost_Cause_Server_CertInvalid;
extern const CLSID GUID_EapHost_Cause_Server_CertNotFound;
extern const CLSID GUID_EapHost_Cause_Server_CertOtherError;
extern const CLSID GUID_EapHost_Cause_Server_CertRevoked;
extern const CLSID GUID_EapHost_Cause_User_Root_CertExpired;
extern const CLSID GUID_EapHost_Cause_User_Root_CertInvalid;
extern const CLSID GUID_EapHost_Cause_User_Root_CertNotFound;
extern const CLSID GUID_EapHost_Cause_Server_Root_CertNotFound;
extern const CLSID GUID_EapHost_Cause_Server_Root_CertNameRequired;
extern const CLSID GUID_EapHost_Cause_No_SmartCardReader_Found;
extern const CLSID GUID_EapHost_Repair_ContactSysadmin;
extern const CLSID GUID_EapHost_Repair_Retry_Authentication;
extern const CLSID GUID_EapHost_Repair_User_AuthFailure;
extern const CLSID GUID_EapHost_Repair_User_GetNewCert;
extern const CLSID GUID_EapHost_Repair_User_SelectValidCert;
extern const CLSID GUID_EapHost_Repair_Server_ClientSelectServerCert;
extern const CLSID GUID_EapHost_Repair_ContactAdmin_AuthFailure;
extern const CLSID GUID_EapHost_Repair_ContactAdmin_IdentityUnknown;
extern const CLSID GUID_EapHost_Repair_ContactAdmin_NegotiationFailed;
extern const CLSID GUID_EapHost_Repair_ContactAdmin_MethodNotFound;
extern const CLSID GUID_EapHost_Repair_RestartNap;
extern const CLSID GUID_EapHost_Repair_ContactAdmin_CertStoreInaccessible;
extern const CLSID GUID_EapHost_Repair_ContactAdmin_InvalidUserAccount;
extern const CLSID GUID_EapHost_Repair_ContactAdmin_InvalidUserCert;
extern const CLSID GUID_EapHost_Repair_ContactAdmin_RootCertInvalid;
extern const CLSID GUID_EapHost_Repair_ContactAdmin_RootCertNotFound;
extern const CLSID GUID_EapHost_Repair_ContactAdmin_RootExpired;
extern const CLSID GUID_EapHost_Repair_ContactAdmin_CertNameAbsent;
extern const CLSID GUID_EapHost_Repair_ContactAdmin_NoSmartCardReader;
extern const CLSID GUID_EapHost_Repair_Method_Not_Support_Sso;
extern const CLSID GUID_EapHost_Help_ObtainingCerts;
extern const CLSID GUID_EapHost_Help_Troubleshooting;
extern const CLSID GUID_EapHost_Cause_Method_Config_Does_Not_Support_Sso;
typedef enum _EAP_ATTRIBUTE_TYPE
{
    eatMinimum = 0,                
    eatUserName,                   
    eatUserPassword,               
    eatMD5CHAPPassword,            
    eatNASIPAddress,               
    eatNASPort,                    
    eatServiceType,                
    eatFramedProtocol,             
    eatFramedIPAddress,            
    eatFramedIPNetmask,            
    eatFramedRouting = 10,         
    eatFilterId,                   
    eatFramedMTU,                  
    eatFramedCompression,          
    eatLoginIPHost,                
    eatLoginService,               
    eatLoginTCPPort,               
    eatUnassigned17,               
    eatReplyMessage,               
    eatCallbackNumber,             
    eatCallbackId =20,             
    eatUnassigned21,               
    eatFramedRoute,                
    eatFramedIPXNetwork,           
    eatState,                      
    eatClass,                      
    eatVendorSpecific,             
    eatSessionTimeout,             
    eatIdleTimeout,                
    eatTerminationAction,          
    eatCalledStationId = 30,       
    eatCallingStationId,           
    eatNASIdentifier,              
    eatProxyState,                 
    eatLoginLATService,            
    eatLoginLATNode,               
    eatLoginLATGroup,              
    eatFramedAppleTalkLink,        
    eatFramedAppleTalkNetwork,     
    eatFramedAppleTalkZone,        
    eatAcctStatusType = 40,        
    eatAcctDelayTime,              
    eatAcctInputOctets,            
    eatAcctOutputOctets,           
    eatAcctSessionId,              
    eatAcctAuthentic,              
    eatAcctSessionTime,            
    eatAcctInputPackets,           
    eatAcctOutputPackets,          
    eatAcctTerminateCause,         
    eatAcctMultiSessionId = 50,    
    eatAcctLinkCount,              
    eatAcctEventTimeStamp = 55,    
    eatMD5CHAPChallenge = 60,      
    eatNASPortType,                
    eatPortLimit,                  
    eatLoginLATPort,               
    eatTunnelType,                 
    eatTunnelMediumType,           
    eatTunnelClientEndpoint,       
    eatTunnelServerEndpoint,       
    eatARAPPassword = 70,          
    eatARAPFeatures,               
    eatARAPZoneAccess,             
    eatARAPSecurity,               
    eatARAPSecurityData,           
    eatPasswordRetry,              
    eatPrompt,                     
    eatConnectInfo,                
    eatConfigurationToken,         
    eatEAPMessage,                 
    eatSignature = 80,             
    eatARAPChallengeResponse = 84, 
    eatAcctInterimInterval = 85,   
    eatNASIPv6Address = 95,  
    eatFramedInterfaceId, 
    eatFramedIPv6Prefix, 
    eatLoginIPv6Host, 
    eatFramedIPv6Route, 
    eatFramedIPv6Pool, 
    eatARAPGuestLogon = 8096,      
    eatCertificateOID,             
    eatEAPConfiguration,           
    eatPEAPEmbeddedEAPTypeId,      
    eatPEAPFastRoamedSession,      
    eatEAPTLV = 8102,              
    eatCredentialsChanged,
    eatInnerEapMethodType,
    eatClearTextPassword = 8107,
    eatQuarantineSoH     = 8150, 
    eatPeerId                 = 9000,  
    eatServerId,                          
    eatMethodId,                          
    eatEMSK,                               
    eatSessionId,                               
    eatReserved = 0xFFFFFFFF       
} EAP_ATTRIBUTE_TYPE, EapAttributeType;
typedef struct _EAP_ATTRIBUTE
{
        EAP_ATTRIBUTE_TYPE eaType;
        DWORD dwLength;
    BYTE *pValue;
} EAP_ATTRIBUTE, EapAttribute;
typedef struct _EAP_ATTRIBUTES
{
        DWORD dwNumberOfAttributes;
    EAP_ATTRIBUTE *pAttribs;
} EAP_ATTRIBUTES, EapAttributes;
#define EAP_FLAG_Reserved1              0x00000001
#define EAP_FLAG_NON_INTERACTIVE        0x00000002
#define EAP_FLAG_LOGON                  0x00000004
#define EAP_FLAG_PREVIEW                0x00000008
#define EAP_FLAG_Reserved2              0x00000010
#define EAP_FLAG_MACHINE_AUTH           0x00000020
#define EAP_FLAG_GUEST_ACCESS           0x00000040
#define EAP_FLAG_Reserved3              0x00000080
#define EAP_FLAG_Reserved4              0x00000100
#define EAP_FLAG_RESUME_FROM_HIBERNATE  0x00000200
#define EAP_FLAG_Reserved5              0x00000400
#define EAP_FLAG_Reserved6              0x00000800
#define EAP_FLAG_FULL_AUTH              0x00001000
#define EAP_FLAG_PREFER_ALT_CREDENTIALS     0x00002000
#define EAP_FLAG_Reserved7                  0x00004000
#define EAP_PEER_FLAG_HEALTH_STATE_CHANGE   0x00008000
#define EAP_FLAG_SUPRESS_UI                 0x00010000
#define EAP_FLAG_PRE_LOGON                  0x00020000
#define EAP_FLAG_USER_AUTH                  0x00040000
#define EAP_FLAG_CONFG_READONLY             0x00080000
#define EAP_FLAG_Reserved8                  0x00100000
#define EAP_CONFIG_INPUT_FIELD_PROPS_DEFAULT                0X00000000
#define EAP_CONFIG_INPUT_FIELD_PROPS_NON_DISPLAYABLE        0X00000001
#define EAP_CONFIG_INPUT_FIELD_PROPS_NON_PERSIST            0X00000002
#define EAP_UI_INPUT_FIELD_PROPS_DEFAULT          EAP_CONFIG_INPUT_FIELD_PROPS_DEFAULT
#define EAP_UI_INPUT_FIELD_PROPS_NON_DISPLAYABLE  EAP_CONFIG_INPUT_FIELD_PROPS_NON_DISPLAYABLE
#define EAP_UI_INPUT_FIELD_PROPS_NON_PERSIST            0X00000002
#define EAP_UI_INPUT_FIELD_PROPS_READ_ONLY              0X00000004
typedef enum _EAP_CONFIG_INPUT_FIELD_TYPE {
    EapConfigInputUsername,
    EapConfigInputPassword,
    EapConfigInputNetworkUsername,
    EapConfigInputNetworkPassword,
    EapConfigInputPin,
    EapConfigInputPSK,
    EapConfigInputEdit,
    EapConfigSmartCardUsername,
    EapConfigSmartCardError
} EAP_CONFIG_INPUT_FIELD_TYPE, *PEAP_CONFIG_INPUT_FIELD_TYPE;
#define EAP_CREDENTIAL_VERSION                     1
#define EAP_INTERACTIVE_UI_DATA_VERSION            1
#define EAPHOST_PEER_API_VERSION                   1
#define EAPHOST_METHOD_API_VERSION                 1
#define MAX_EAP_CONFIG_INPUT_FIELD_LENGTH          256
#define MAX_EAP_CONFIG_INPUT_FIELD_VALUE_LENGTH    1024
typedef struct _EAP_CONFIG_INPUT_FIELD_DATA {
    DWORD dwSize;
    EAP_CONFIG_INPUT_FIELD_TYPE Type;
    DWORD dwFlagProps;
    LPWSTR pwszLabel;
    LPWSTR pwszData;
    DWORD dwMinDataLength;
    DWORD dwMaxDataLength;
} EAP_CONFIG_INPUT_FIELD_DATA, *PEAP_CONFIG_INPUT_FIELD_DATA;
typedef struct _EAP_CONFIG_INPUT_FIELD_ARRAY {
    DWORD dwVersion; 
    DWORD dwNumberOfFields;
    EAP_CONFIG_INPUT_FIELD_DATA* pFields;
} EAP_CONFIG_INPUT_FIELD_ARRAY, *PEAP_CONFIG_INPUT_FIELD_ARRAY;
typedef enum _EAP_INTERACTIVE_UI_DATA_TYPE {
    EapCredReq,             
    EapCredResp,            
    EapCredExpiryReq,       
    EapCredExpiryResp,      
    EapCredLogonReq,        
    EapCredLogonResp,       
} EAP_INTERACTIVE_UI_DATA_TYPE;
typedef EAP_CONFIG_INPUT_FIELD_ARRAY EAP_CRED_REQ;
typedef EAP_CONFIG_INPUT_FIELD_ARRAY EAP_CRED_RESP;
typedef EAP_CONFIG_INPUT_FIELD_ARRAY EAP_CRED_LOGON_REQ;
typedef EAP_CONFIG_INPUT_FIELD_ARRAY EAP_CRED_LOGON_RESP;
typedef struct _EAP_CRED_EXPIRY_REQ {
    EAP_CONFIG_INPUT_FIELD_ARRAY curCreds;
    EAP_CONFIG_INPUT_FIELD_ARRAY newCreds;
} EAP_CRED_EXPIRY_REQ, EAP_CRED_EXPIRY_RESP;
typedef union {
   EAP_CRED_REQ*  credData;
   EAP_CRED_EXPIRY_REQ* credExpiryData;
   EAP_CRED_LOGON_REQ* credLogonData;
} EAP_UI_DATA_FORMAT;
typedef struct _EAP_INTERACTIVE_UI_DATA {
    DWORD dwVersion;
    DWORD dwSize;
    EAP_INTERACTIVE_UI_DATA_TYPE dwDataType;
    DWORD cbUiData;
    EAP_UI_DATA_FORMAT pbUiData;
} EAP_INTERACTIVE_UI_DATA ;
typedef enum _EAP_METHOD_PROPERTY_TYPE
{
    emptPropCipherSuiteNegotiation = 0,     
    emptPropMutualAuth,                     
    emptPropIntegrity,                      
    emptPropReplayProtection,               
    emptPropConfidentiality,                
    emptPropKeyDerivation,                  
    emptPropKeyStrength64,                  
    emptPropKeyStrength128,                 
    emptPropKeyStrength256,                 
    emptPropKeyStrength512,                 
    emptPropKeyStrength1024,                
    emptPropDictionaryAttackResistance,     
    emptPropFastReconnect,                  
    emptPropCryptoBinding,                  
    emptPropSessionIndependence,            
    emptPropFragmentation,                  
    emptPropChannelBinding,                 
    emptPropNap,                            
    emptPropStandalone,                     
    emptPropMppeEncryption,                 
    emptPropTunnelMethod,                   
    emptPropSupportsConfig,                 
    emptPropCertifiedMethod,                
    emptPropHiddenMethod,                   
    emptPropMachineAuth,                    
    emptPropUserAuth,                       
    emptPropIdentityPrivacy,                
    emptPropMethodChaining,                 
    emptPropSharedStateEquivalence,         
    emptLegacyMethodPropertyFlag = 31,      
    emptPropVendorSpecific = 255            
} EAP_METHOD_PROPERTY_TYPE;
typedef enum _EAP_METHOD_PROPERTY_VALUE_TYPE
{
    empvtBool = 0,      
    empvtDword,         
    empvtString         
} EAP_METHOD_PROPERTY_VALUE_TYPE;
typedef struct _EAP_METHOD_PROPERTY_VALUE_BOOL
{
    DWORD length;
    BOOL value;
} EAP_METHOD_PROPERTY_VALUE_BOOL;
typedef struct _EAP_METHOD_PROPERTY_VALUE_DWORD
{
    DWORD length;
    DWORD value;
} EAP_METHOD_PROPERTY_VALUE_DWORD;
typedef struct _EAP_METHOD_PROPERTY_VALUE_STRING
{
    DWORD length;
    BYTE* value;
} EAP_METHOD_PROPERTY_VALUE_STRING;
typedef union _EAP_METHOD_PROPERTY_VALUE {
    EAP_METHOD_PROPERTY_VALUE_BOOL empvBool;      
    EAP_METHOD_PROPERTY_VALUE_DWORD empvDword;    
    EAP_METHOD_PROPERTY_VALUE_STRING empvString;   
} EAP_METHOD_PROPERTY_VALUE;
typedef struct _EAP_METHOD_PROPERTY {
    EAP_METHOD_PROPERTY_TYPE eapMethodPropertyType;
    EAP_METHOD_PROPERTY_VALUE_TYPE eapMethodPropertyValueType;
    EAP_METHOD_PROPERTY_VALUE eapMethodPropertyValue;
} EAP_METHOD_PROPERTY;
typedef struct _EAP_METHOD_PROPERTY_ARRAY {
    DWORD dwNumberOfProperties;
    EAP_METHOD_PROPERTY* pMethodProperty;
} EAP_METHOD_PROPERTY_ARRAY;
#endif
