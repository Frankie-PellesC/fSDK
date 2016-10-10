/*+@@file@@----------------------------------------------------------------*//*!
 \file		LsaLookup.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 01:37:15 2016
 \date		Modified on Sun Jul  3 01:37:15 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _LSALOOKUP_
#define _LSALOOKUP_
#if __POCC__ >= 500
#pragma once
#endif
#ifdef _NTDEF_
typedef UNICODE_STRING LSA_UNICODE_STRING, *PLSA_UNICODE_STRING;
typedef STRING LSA_STRING, *PLSA_STRING;
typedef OBJECT_ATTRIBUTES LSA_OBJECT_ATTRIBUTES, *PLSA_OBJECT_ATTRIBUTES;
#else
typedef struct _LSA_UNICODE_STRING
{
	USHORT Length;
	USHORT MaximumLength;
	PWSTR Buffer;
} LSA_UNICODE_STRING, *PLSA_UNICODE_STRING;
typedef struct _LSA_STRING
{
	USHORT Length;
	USHORT MaximumLength;
	PCHAR Buffer;
} LSA_STRING, *PLSA_STRING;
typedef struct _LSA_OBJECT_ATTRIBUTES
{
	ULONG Length;
	HANDLE RootDirectory;
	PLSA_UNICODE_STRING ObjectName;
	ULONG Attributes;
	PVOID SecurityDescriptor;
	PVOID SecurityQualityOfService;
} LSA_OBJECT_ATTRIBUTES, *PLSA_OBJECT_ATTRIBUTES;
#endif
typedef struct _LSA_TRUST_INFORMATION
{
	LSA_UNICODE_STRING Name;
	PSID Sid;
} LSA_TRUST_INFORMATION, *PLSA_TRUST_INFORMATION;
typedef struct _LSA_REFERENCED_DOMAIN_LIST
{
	ULONG Entries;
	PLSA_TRUST_INFORMATION Domains;
} LSA_REFERENCED_DOMAIN_LIST, *PLSA_REFERENCED_DOMAIN_LIST;
#if (_WIN32_WINNT >= 0x0501)
typedef struct _LSA_TRANSLATED_SID2
{
	SID_NAME_USE Use;
	PSID Sid;
	LONG DomainIndex;
	ULONG Flags;
} LSA_TRANSLATED_SID2, *PLSA_TRANSLATED_SID2;
#endif
typedef struct _LSA_TRANSLATED_NAME
{
	SID_NAME_USE Use;
	LSA_UNICODE_STRING Name;
	LONG DomainIndex;
} LSA_TRANSLATED_NAME, *PLSA_TRANSLATED_NAME;
typedef struct _POLICY_ACCOUNT_DOMAIN_INFO {
	LSA_UNICODE_STRING DomainName;
	PSID DomainSid;
} POLICY_ACCOUNT_DOMAIN_INFO, *PPOLICY_ACCOUNT_DOMAIN_INFO;
typedef struct _POLICY_DNS_DOMAIN_INFO
{
	LSA_UNICODE_STRING Name;
	LSA_UNICODE_STRING DnsDomainName;
	LSA_UNICODE_STRING DnsForestName;
	GUID DomainGuid;
	PSID Sid;
} POLICY_DNS_DOMAIN_INFO, *PPOLICY_DNS_DOMAIN_INFO;
#define LOOKUP_VIEW_LOCAL_INFORMATION       0x00000001
#define LOOKUP_TRANSLATE_NAMES              0x00000800
typedef enum _LSA_LOOKUP_DOMAIN_INFO_CLASS
{
	AccountDomainInformation = 5,
	DnsDomainInformation = 12
} LSA_LOOKUP_DOMAIN_INFO_CLASS, *PLSA_LOOKUP_DOMAIN_INFO_CLASS;
typedef PVOID LSA_LOOKUP_HANDLE, *PLSA_LOOKUP_HANDLE;
NTSTATUS LsaLookupOpenLocalPolicy(PLSA_OBJECT_ATTRIBUTES ObjectAttributes, ACCESS_MASK AccessMask, PLSA_LOOKUP_HANDLE PolicyHandle);
NTSTATUS LsaLookupClose(LSA_LOOKUP_HANDLE ObjectHandle);
NTSTATUS LsaLookupTranslateSids(LSA_LOOKUP_HANDLE PolicyHandle, ULONG Count, PSID *Sids, PLSA_REFERENCED_DOMAIN_LIST *ReferencedDomains, PLSA_TRANSLATED_NAME *Names);
#if (_WIN32_WINNT >= 0x0501)
NTSTATUS LsaLookupTranslateNames(LSA_LOOKUP_HANDLE PolicyHandle, ULONG Flags, ULONG Count, PLSA_UNICODE_STRING Names, PLSA_REFERENCED_DOMAIN_LIST *ReferencedDomains, PLSA_TRANSLATED_SID2 *Sids);
#endif
NTSTATUS LsaLookupGetDomainInfo(LSA_LOOKUP_HANDLE PolicyHandle, LSA_LOOKUP_DOMAIN_INFO_CLASS DomainInfoClass, PVOID *DomainInfo);
NTSTATUS LsaLookupFreeMemory(PVOID Buffer);
#endif
