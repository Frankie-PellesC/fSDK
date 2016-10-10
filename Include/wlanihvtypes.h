/*+@@file@@----------------------------------------------------------------*//*!
 \file		wlanihvtypes.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 23:19:51 2016
 \date		Modified on Sun Sep  4 23:19:51 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __WLANIHVTYPES_H__
#define __WLANIHVTYPES_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <EapTypes.h>
#include <WlanTypes.h>
typedef struct _DOT11_MSSECURITY_SETTINGS
{
	DOT11_AUTH_ALGORITHM dot11AuthAlgorithm;
	DOT11_CIPHER_ALGORITHM dot11CipherAlgorithm;
	BOOL fOneXEnabled;
	EAP_METHOD_TYPE eapMethodType;
	DWORD dwEapConnectionDataLen;
	BYTE *pEapConnectionData;
} DOT11_MSSECURITY_SETTINGS, *PDOT11_MSSECURITY_SETTINGS;
typedef struct _DOT11EXT_IHV_SSID_LIST
{
    ULONG                                   ulCount;
    DOT11_SSID                              SSIDs[1];
} DOT11EXT_IHV_SSID_LIST, * PDOT11EXT_IHV_SSID_LIST;
typedef struct _DOT11EXT_IHV_PROFILE_PARAMS
{
   PDOT11EXT_IHV_SSID_LIST      pSsidList;
   DOT11_BSS_TYPE               BssType;
   PDOT11_MSSECURITY_SETTINGS   pMSSecuritySettings;
} DOT11EXT_IHV_PROFILE_PARAMS, *PDOT11EXT_IHV_PROFILE_PARAMS;
#define MS_MAX_PROFILE_NAME_LENGTH 256
#define MS_PROFILE_GROUP_POLICY    0x00000001
#define MS_PROFILE_USER            0x00000002
typedef struct _DOT11EXT_IHV_PARAMS
{
   DOT11EXT_IHV_PROFILE_PARAMS  dot11ExtIhvProfileParams;
   WCHAR                        wstrProfileName[MS_MAX_PROFILE_NAME_LENGTH];
   DWORD                        dwProfileTypeFlags;
   GUID                         interfaceGuid;
} DOT11EXT_IHV_PARAMS, *PDOT11EXT_IHV_PARAMS;
#endif
