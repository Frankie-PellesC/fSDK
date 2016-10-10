/*+@@file@@----------------------------------------------------------------*//*!
 \file		QosPol.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 19:12:32 2016
 \date		Modified on Fri Sep 16 19:12:32 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __QOSPOL_H_
#define __QOSPOL_H_
#if __POCC__ >= 500
#pragma once
#endif
#define PE_TYPE_APPID       3
#define PE_ATTRIB_TYPE_POLICY_LOCATOR            1
#define POLICY_LOCATOR_SUB_TYPE_ASCII_DN         1
#define POLICY_LOCATOR_SUB_TYPE_UNICODE_DN       2
#define POLICY_LOCATOR_SUB_TYPE_ASCII_DN_ENC     3
#define POLICY_LOCATOR_SUB_TYPE_UNICODE_DN_ENC   4
#define PE_ATTRIB_TYPE_CREDENTIAL        2
#define CREDENTIAL_SUB_TYPE_ASCII_ID     1
#define CREDENTIAL_SUB_TYPE_UNICODE_ID   2
#define CREDENTIAL_SUB_TYPE_KERBEROS_TKT 3
#define CREDENTIAL_SUB_TYPE_X509_V3_CERT 4
#define CREDENTIAL_SUB_TYPE_PGP_CERT     5
typedef struct _IDPE_ATTR
{
	USHORT PeAttribLength;
	UCHAR PeAttribType;
	UCHAR PeAttribSubType;
	UCHAR PeAttribValue[4];
} IDPE_ATTR, *LPIDPE_ATTR;
#define IDPE_ATTR_HDR_LEN		(sizeof(USHORT)+sizeof(UCHAR)+sizeof(UCHAR))
#define RSVP_BYTE_MULTIPLE(x)	(((x+3) / 4) * 4)
#endif
