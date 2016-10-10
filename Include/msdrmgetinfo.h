/*+@@file@@----------------------------------------------------------------*//*!
 \file		msdrmgetinfo.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 19:36:37 2016
 \date		Modified on Sun Aug 14 19:36:37 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __MSDRMGETINFO_H_
#define __MSDRMGETINFO_H_
#if __POCC__ >= 500
#pragma once
#endif
#include "msdrm.h"
const PWSTR g_wszTAG_ASCII = L"ASCII Tag",
			g_wszTAG_XRML = L"XrML Tag",
			g_wszTAG_FILENAME = L"filename",
			g_wszTAG_MSGUID = L"MS-GUID",
			g_wszPLUG_STANDARDENABLINGPRINCIPAL = L"UDStdPlg Enabling Principal",
			g_wszPLUG_STANDARDRIGHTSINTERPRETER = L"XrMLv2a",
			g_wszPLUG_STANDARDEBDECRYPTOR = L"UDStdPlg Enabling Bits Decryptor",
			g_wszPLUG_STANDARDEBENCRYPTOR = L"UDStdPlg Enabling Bits Encryptor",
			g_wszPLUG_STANDARDEBCRYPTOPROVIDER = L"UDStdPlg Enabling Bits Crypto Provider",
			g_wszPLUG_STANDARDLIBRARY = L"UDStdPlg",
			g_wszALGORITHMID_DES = L"DES",
			g_wszALGORITHMID_COCKTAIL = L"COCKTAIL",
			g_wszALGORITHMID_AES = L"AES",
			g_wszALGORITHMID_RC4 = L"RC4",
			g_wszQUERY_OBJECTIDTYPE = L"object-id-type",
			g_wszQUERY_OBJECTID = L"object-id",
			g_wszQUERY_NAME = L"name",
			g_wszQUERY_CONTENTIDTYPE = L"content-id-type",
			g_wszQUERY_CONTENTIDVALUE = L"content-id-value",
			g_wszQUERY_CONTENTSKUTYPE = L"content-sku-type",
			g_wszQUERY_CONTENTSKUVALUE = L"content-sku-value",
			g_wszQUERY_MANIFESTSOURCE = L"manifest-xrml",
			g_wszQUERY_MACHINECERTSOURCE = L"machine-certificate-xrml",
			g_wszQUERY_APIVERSION = L"api-version",
			g_wszQUERY_SECREPVERSION = L"secrep-version",
			g_wszQUERY_BLOCKSIZE  = L"block-size",
			g_wszQUERY_SYMMETRICKEYTYPE  = L"symmetric-key-type";
const PWSTR g_wszQUERY_ACCESSCONDITION = L"access-condition",
			g_wszQUERY_ADDRESSTYPE = L"address-type",
			g_wszQUERY_ADDRESSVALUE = L"address-value",
			g_wszQUERY_APPDATANAME = L"appdata-name",
			g_wszQUERY_APPDATAVALUE = L"appdata-value",
			g_wszQUERY_CONDITIONLIST = L"condition-list",
			g_wszQUERY_DISTRIBUTIONPOINT = L"distribution-point",
			g_wszQUERY_OBJECTTYPE = L"object-type",
			g_wszQUERY_ENABLINGPRINCIPALIDTYPE = L"enabling-principal-id-type",
			g_wszQUERY_ENABLINGPRINCIPALIDVALUE = L"enabling-principal-id-value",
			g_wszQUERY_GROUPIDENTITYPRINCIPAL = L"group-identity-principal",
			g_wszQUERY_FIRSTUSETAG = L"first-use-tag",
			g_wszQUERY_FROMTIME = L"from-time",
			g_wszQUERY_IDTYPE = L"id-type",
			g_wszQUERY_IDVALUE = L"id-value",
			g_wszQUERY_ISSUEDPRINCIPAL = L"issued-principal",
			g_wszQUERY_ISSUEDTIME = L"issued-time",
			g_wszQUERY_ISSUER = L"issuer",
			g_wszQUERY_OWNER = L"owner",
			g_wszQUERY_PRINCIPAL = L"principal",
			g_wszQUERY_PRINCIPALIDVALUE = L"principal-id-value",
			g_wszQUERY_PRINCIPALIDTYPE = L"principal-id-type",
			g_wszQUERY_RANGETIMECONDITION = L"rangetime-condition",
			g_wszQUERY_OSEXCLUSIONCONDITION = L"os-exclusion-condition",
			g_wszQUERY_INTERVALTIMECONDITION = L"intervaltime-condition",
			g_wszQUERY_INTERVALTIMEINTERVAL = L"intervaltime-interval",
			g_wszQUERY_MAXVERSION = L"max-version",
			g_wszQUERY_MINVERSION = L"min-version",
			g_wszQUERY_REFRESHPERIOD = L"refresh-period",
			g_wszQUERY_REVOCATIONCONDITION = L"revocation-condition",
			g_wszQUERY_RIGHT = L"right",
			g_wszQUERY_RIGHTSGROUP = L"rights-group",
			g_wszQUERY_RIGHTSPARAMETERNAME = L"rights-parameter-name",
			g_wszQUERY_RIGHTSPARAMETERVALUE = L"rights-parameter-value",
			g_wszQUERY_SKUTYPE = L"sku-type",
			g_wszQUERY_SKUVALUE = L"sku-value",
			g_wszQUERY_TIMEINTERVAL = L"time-interval",
			g_wszQUERY_UNTILTIME = L"until-time",
			g_wszQUERY_VALIDITYFROMTIME = L"valid-from",
			g_wszQUERY_VALIDITYUNTILTIME = L"valid-until",
			g_wszQUERY_WORK = L"work";
#endif
