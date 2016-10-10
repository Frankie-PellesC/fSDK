/*+@@file@@----------------------------------------------------------------*//*!
 \file		httpcach.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul 15 15:15:09 2016
 \date		Modified on Fri Jul 15 15:15:09 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef _HTTPCACH_H_
#define _HTTPCACH_H_
#define URI_CACHE_NAME             L"URI"
#if __POCC__ >= 500
#pragma once
#endif
#error C++ Only!
#if 0
class __declspec(uuid("f1bc4f8c-6bf8-42c0-b745-4fbe1a67e5a7"))
IUriKey : public IHttpCacheKey
{
 public
    PCWSTR
    GetCacheName(
        VOID
    ) const
    {
        return URI_CACHE_NAME;
    }
    virtual
    PCWSTR
    GetUrl(
        VOID
    ) const = 0;
    virtual
    PCWSTR
    GetSiteName(
        VOID
    ) const = 0;
    virtual
    DWORD
    GetSiteId(
        VOID
    ) const = 0;
    virtual
    VOID
    UpdateFrequentlyHitTickCount(
        DWORD   dwTicks
    ) = 0;
    virtual
    PCWSTR
    GetConfigPath(
        VOID
    ) const = 0;
};
#define FILE_CACHE_NAME             L"FILE"
class __declspec(uuid("7377f6a4-266c-4043-b62a-9ea955a5e97a"))
IFileKey : public IHttpCacheKey
{
public
    PCWSTR
    GetCacheName(
        VOID
    ) const
    {
        return FILE_CACHE_NAME;
    }
    virtual
    PCWSTR
    GetPath(
        VOID
    ) const = 0;
};
#define TOKEN_CACHE_NAME            L"TOKEN"
class __declspec(uuid("1d3dc8cb-fc52-42bc-97e1-1bf02136e8ba"))
IHttpTokenKey : public IHttpCacheKey
{
 public
    PCWSTR
    GetCacheName(
        VOID
    ) const
    {
        return TOKEN_CACHE_NAME;
    }
    virtual
    PCWSTR
    GetUserName(
        VOID
    ) const = 0;
    virtual
    PCWSTR
    GetPasswordHash(
        VOID
    ) const = 0;
    
    virtual
    DWORD
    GetLogonMethod(
        VOID
    ) const = 0;
};
#endif
#endif
