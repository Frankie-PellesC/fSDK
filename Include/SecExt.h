/*+@@file@@----------------------------------------------------------------*//*!
 \file		SecExt.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 23:57:11 2016
 \date		Modified on Sat Sep  3 23:57:11 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __SECEXT_H__
#define __SECEXT_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef enum
{
    NameUnknown = 0,
    NameFullyQualifiedDN = 1,
    NameSamCompatible = 2,
    NameDisplay = 3,
    NameUniqueId = 6,
    NameCanonical = 7,
    NameUserPrincipal = 8,
    NameCanonicalEx = 9,
    NameServicePrincipal = 10,
    NameDnsDomain = 12
} EXTENDED_NAME_FORMAT, * PEXTENDED_NAME_FORMAT ;
BOOLEAN SEC_ENTRY GetUserNameExA(EXTENDED_NAME_FORMAT NameFormat, LPSTR lpNameBuffer, PULONG nSize);
BOOLEAN SEC_ENTRY GetUserNameExW(EXTENDED_NAME_FORMAT NameFormat, LPWSTR lpNameBuffer, PULONG nSize);
#ifdef UNICODE
#define GetUserNameEx   GetUserNameExW
#else
#define GetUserNameEx   GetUserNameExA
#endif
BOOLEAN SEC_ENTRY GetComputerObjectNameA(EXTENDED_NAME_FORMAT NameFormat, LPSTR lpNameBuffer, PULONG nSize);
BOOLEAN SEC_ENTRY GetComputerObjectNameW(EXTENDED_NAME_FORMAT NameFormat, LPWSTR lpNameBuffer, PULONG nSize);
#ifdef UNICODE
#define GetComputerObjectName   GetComputerObjectNameW
#else
#define GetComputerObjectName   GetComputerObjectNameA
#endif
BOOLEAN SEC_ENTRY TranslateNameA(LPCSTR lpAccountName, EXTENDED_NAME_FORMAT AccountNameFormat, EXTENDED_NAME_FORMAT DesiredNameFormat, LPSTR lpTranslatedName, PULONG nSize);
BOOLEAN SEC_ENTRY TranslateNameW(LPCWSTR lpAccountName, EXTENDED_NAME_FORMAT AccountNameFormat, EXTENDED_NAME_FORMAT DesiredNameFormat, LPWSTR lpTranslatedName, PULONG nSize);
#ifdef UNICODE
#define TranslateName   TranslateNameW
#else
#define TranslateName   TranslateNameA
#endif
#endif
