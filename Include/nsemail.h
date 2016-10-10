/*+@@file@@----------------------------------------------------------------*//*!
 \file		nsemail.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 23:52:42 2016
 \date		Modified on Sun Sep  4 23:52:42 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _NSEMAIL_H_
#define _NSEMAIL_H_
#if __POCC__ >= 500
#pragma once
#endif
typedef enum napi_provider_type_tag
{ 
    ProviderType_Application = 1, 
    ProviderType_Service, 
} NAPI_PROVIDER_TYPE;
typedef enum napi_provider_level_tag
{ 
    ProviderLevel_None = 0,
    ProviderLevel_Secondary, 
    ProviderLevel_Primary
} NAPI_PROVIDER_LEVEL;
typedef struct napi_domain_description_blob_tag
{
    DWORD   AuthLevel;
    DWORD   cchDomainName;
    DWORD   OffsetNextDomainDescription;
    DWORD   OffsetThisDomainName;
} NAPI_DOMAIN_DESCRIPTION_BLOB;
typedef struct napi_provider_installation_blob_tag
{
    DWORD   dwVersion;
    DWORD   dwProviderType;
    DWORD   fSupportsWildCard;
    ULONG   cDomains;
    ULONG   OffsetFirstDomain;
} NAPI_PROVIDER_INSTALLATION_BLOB;
#endif
