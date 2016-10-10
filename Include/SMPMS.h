/*+@@file@@----------------------------------------------------------------*//*!
 \file		SMPMS.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 23:57:09 2016
 \date		Modified on Fri Sep 16 23:57:09 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _SMPMS_H_
#define _SMPMS_H_
#if __POCC__ >= 500
#pragma once
#endif
#define SMS_EXTERN_PROPID_BASE  0x6700
#define PR_SMS_PATH         PROP_TAG(PT_STRING8, SMS_EXTERN_PROPID_BASE + 0)
#define PR_SMS_PASSWORD     PROP_TAG(PT_STRING8, SMS_EXTERN_PROPID_BASE + 1)
#define PR_SMS_REMEMBER_PW  PROP_TAG(PT_BOOLEAN, SMS_EXTERN_PROPID_BASE + 2)
#define PR_SMS_CREATE       PROP_TAG(PT_BOOLEAN, SMS_EXTERN_PROPID_BASE + 3)
#define SMPMS_UID_PROVIDER  {0x38, 0x5d, 0x47, 0x5f, 0xec, 0xf1, 0xcd, 0x11, 0x93, 0xdc, 0x5a, 0xab, 0x3C, 0x47, 0x84, 0x37}
#endif
