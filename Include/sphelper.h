/*+@@file@@----------------------------------------------------------------*//*!
 \file		sphelper.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 01:00:55 2016
 \date		Modified on Sat Sep 17 01:00:55 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef SPHelper_h
#define SPHelper_h
#if __POCC__ >= 500
#pragma once
#endif
#error C++ only header!
#if 0
#ifndef _INC_MALLOC
#include <malloc.h>
#endif
#ifndef __sapi_h__
#include <sapi.h>
#endif
#ifndef __sapiddk_h__
#include <sapiddk.h>
#endif
#ifndef SPError_h
#include <SPError.h>
#endif
#ifndef _INC_LIMITS
#include <limits.h>
#endif
#ifndef _INC_MMSYSTEM
#include <mmsystem.h>
#endif
#ifndef __comcat_h__
#include <comcat.h>
#endif
#ifndef _INC_MMREG
#include <mmreg.h>
#endif
#ifndef __ATLBASE_H__
#include <atlbase.h>
#endif
#include <wchar.h>
#include <tchar.h>
#include <strsafe.h>
#include <intsafe.h>
#ifndef _PREFAST_ 
#pragma warning(disable:4068) 
#endif
#ifndef REG_MUI_STRING_TRUNCATE
#define REG_MUI_STRING_TRUNCATE     0x00000001
#endif
#define sp_countof(x) ((sizeof(x) / sizeof(*(x))))
class CSpDynamicString 
{
public
    WCHAR *     m_psz;
    CSpDynamicString()
    {
        m_psz = NULL;
    }
    CSpDynamicString(ULONG cchReserve)
    {
        ULONGLONG ullAllocSize = (ULONGLONG) cchReserve * sizeof(WCHAR);
        if ((ullAllocSize > cchReserve) && ((ULONG) ullAllocSize == ullAllocSize))
        {
            m_psz = (WCHAR *)::CoTaskMemAlloc((ULONG)ullAllocSize);
        }
    }
    WCHAR * operator=(const CSpDynamicString& src)
    {
        if(this != &src)
        {
            _ASSERT((m_psz == NULL) || (m_psz != src.m_psz));
            ::CoTaskMemFree(m_psz);
            m_psz = src.Copy();
        }
        return m_psz;
    }
    WCHAR * operator=(const WCHAR * pSrc)
    {
        if(pSrc != m_psz)
        {
            Clear();
            if (pSrc)
            {
                size_t cbNeeded = (wcslen(pSrc) + 1) * sizeof(WCHAR);
                
                if (cbNeeded == (ULONG) cbNeeded)
                {
                    m_psz = (WCHAR *)::CoTaskMemAlloc(cbNeeded);
                    if (m_psz == NULL)
                    {
                        SetLastError(ERROR_OUTOFMEMORY);
                    }
                    else
                    {
                        memcpy(m_psz, pSrc, cbNeeded);
                    }
                }
            }
        }
        return m_psz;
    }
    WCHAR * operator=(const char * pSrc)
    {
        Clear();
        if (pSrc)
        {
            size_t cbNeeded = (::lstrlenA(pSrc) + 1) * sizeof(WCHAR);
            if ((ULONG) cbNeeded == cbNeeded)
            {
                m_psz = (WCHAR *)::CoTaskMemAlloc(cbNeeded);
                if (m_psz == NULL)
                {
                    SetLastError(ERROR_OUTOFMEMORY);
                }
                else
                {
                    ::MultiByteToWideChar(CP_ACP, 0, pSrc, -1, m_psz, (ULONG) cbNeeded/sizeof(WCHAR));
                }
            }
        }
        return m_psz;
    }
    WCHAR * operator=(REFGUID rguid)
    {
        Clear();
        ::StringFromCLSID(rguid, &m_psz);
        return m_psz;
    } CSpDynamicString(const WCHAR * pSrc)
    {
        m_psz = NULL;
        operator=(pSrc);
    } CSpDynamicString(const char * pSrc)
    {
        m_psz = NULL;
        operator=(pSrc);
    } CSpDynamicString(const CSpDynamicString& src)
    {
        m_psz = src.Copy();
    } CSpDynamicString(REFGUID rguid)
    {
        ::StringFromCLSID(rguid, &m_psz);
    }
    ~CSpDynamicString()
    {
        ::CoTaskMemFree(m_psz);
    }
    unsigned int Length() const
    {
        if (m_psz == NULL)
            return 0;
        
        size_t cch = wcslen(m_psz);
        if ((unsigned int) cch != cch)
        {
            _ASSERT((unsigned int) cch == cch);
            SetLastError(ERROR_ARITHMETIC_OVERFLOW);
            return MAXDWORD;
        }
        return (unsigned int) cch;
    }
    operator WCHAR * () const
    {
        return m_psz;
    }
    WCHAR ** operator&()
    {
        _ASSERT(m_psz == NULL);
        return &m_psz;
    }
    HRESULT AppendHR(const WCHAR * pszSrc, const ULONG lenSrc)
    {
        HRESULT hr = S_OK;
        if (pszSrc && (lenSrc || !m_psz))
        {
            ULONG lenMe = Length();
            ULONGLONG ullcbNew = ((ULONGLONG) lenMe + lenSrc + 1) * sizeof(WCHAR);
            if (ullcbNew > ((ULONGLONG)lenMe + lenSrc + 1) && ((ULONG) ullcbNew == ullcbNew))
            {
                WCHAR *pszNew = (WCHAR *)::CoTaskMemAlloc((ULONG)ullcbNew);
                if (pszNew)
                {
                    if (m_psz)
                    {
                        if (lenMe)
                        {
                            memcpy(pszNew, m_psz, lenMe * sizeof(WCHAR));
                        }
                        ::CoTaskMemFree(m_psz);
                    }
                    memcpy(pszNew + lenMe, pszSrc, lenSrc * sizeof(WCHAR));
                    *(pszNew + lenMe + lenSrc) = L'\0';
                    m_psz = pszNew;
                }
                else
                {
                    hr = E_OUTOFMEMORY;
                }
            }
            else
            {
                hr = E_INVALIDARG;
            }
        }
        return hr;
    }
    HRESULT AppendHR(const WCHAR * pszSrc)
    {
        HRESULT hr = S_OK;
        if (pszSrc)
        {
            size_t lenSrc = wcslen(pszSrc);
            if ((ULONG) lenSrc != lenSrc)
                return E_OUTOFMEMORY;
            
            hr = AppendHR(pszSrc, (ULONG) lenSrc);
        }
        return hr;
    }
    WCHAR * Append(const WCHAR * pszSrc)
    {
        if(pszSrc && FAILED(AppendHR(pszSrc)))
        {
            _ASSERT(FALSE);
        }
        return m_psz;
    }
    WCHAR * Append(const WCHAR * pszSrc, const ULONG lenSrc)
    {
        if(FAILED(AppendHR(pszSrc, lenSrc)))
        {
            _ASSERT(FALSE);
        }
        return m_psz;
    }
    HRESULT Append2HR(const WCHAR * pszSrc1, const WCHAR * pszSrc2)
    {
        HRESULT hr = S_OK;
        size_t lenSrc1 = pszSrc1 ? wcslen(pszSrc1) : 0;
        size_t lenSrc2 = pszSrc2 ? wcslen(pszSrc2) : 0;
    
        if (lenSrc1 || lenSrc2 || !m_psz)
        {
            ULONG lenMe = Length();
            size_t cbNew = (lenMe + lenSrc1 + lenSrc2 + 1) * sizeof(WCHAR);
            if ((ULONG) cbNew != cbNew)
                return E_OUTOFMEMORY;
            
            WCHAR *pszNew = (WCHAR *)::CoTaskMemAlloc(cbNew);
            if (pszNew)
            {
                if (m_psz)
                {
                    if (lenMe)
                    {
                        memcpy(pszNew, m_psz, lenMe * sizeof(WCHAR));
                    }
                    ::CoTaskMemFree(m_psz);
                }
                if (lenSrc1)
                {
                    memcpy(pszNew + lenMe, pszSrc1, (lenSrc1 + 1) * sizeof(WCHAR));
                }
                if (lenSrc2)
                {
                    memcpy(pszNew + lenMe + lenSrc1, pszSrc2, (lenSrc2 + 1) * sizeof(WCHAR));
                }
                m_psz = pszNew;
            }
            else
            {
                hr = E_OUTOFMEMORY;
            }
        }
        return hr;
    }
    WCHAR * Append2(const WCHAR * pszSrc1, const WCHAR * pszSrc2)
    {
        if(FAILED(Append2HR(pszSrc1, pszSrc2)))
        {
            _ASSERT(FALSE);
        }
        return m_psz;
    }
    WCHAR * Copy() const
    {
        if (m_psz)
        {
            CSpDynamicString szNew(m_psz);
            return szNew.Detach();
        }
        return NULL;
    }
    CHAR * CopyToChar() const
    {
        if (m_psz)
        {
            CHAR* psz;
            ULONG cbNeeded = ::WideCharToMultiByte(CP_ACP, 0, m_psz, -1, NULL, NULL, NULL, NULL);
            psz = (CHAR *)::CoTaskMemAlloc(cbNeeded);
            if (psz == NULL)
            {
                SetLastError(ERROR_OUTOFMEMORY);
            }
            else
            {
                ::WideCharToMultiByte(CP_ACP, 0, m_psz, -1, psz, cbNeeded/sizeof(CHAR), NULL, NULL);
            }
            return psz;
        }
        return NULL;
    }
    void Attach(WCHAR * pszSrc)
    {
        _ASSERT(m_psz == NULL);
        m_psz = pszSrc;
    }
    WCHAR * Detach()
    {
        WCHAR * s = m_psz;
        m_psz = NULL;
        return s;
    }
    void Clear()
    {
        ::CoTaskMemFree(m_psz);
        m_psz = NULL;
    }
    bool operator!() const
    {
        return (m_psz == NULL);
    }
    HRESULT CopyToBSTR(BSTR * pbstr)
    {
        if (m_psz)
        {
            *pbstr = ::SysAllocString(m_psz);
            if (*pbstr == NULL)
            {
                return E_OUTOFMEMORY;
            }
        }
        else
        {
            *pbstr = NULL;
        }
        return S_OK;
    }
    void TrimToSize(ULONG ulNumChars)
    {
        if (m_psz && ulNumChars < Length())
        {
            m_psz[ulNumChars] = 0;
        }
    }
    WCHAR * Compact()
    {
        if (m_psz)
        {
            ULONG cch = (ULONG) wcslen(m_psz);
            m_psz = (WCHAR *)::CoTaskMemRealloc(m_psz, (cch + 1) * sizeof(WCHAR));
        }
        return m_psz;
    }
    WCHAR * ClearAndGrowTo(ULONG cch)
    {
        if (m_psz)
        {
            Clear();
        }
        
        ULONGLONG ullcbNew = (ULONGLONG) cch * sizeof(WCHAR);
        if ((ullcbNew > cch) && ((ULONG) ullcbNew == ullcbNew))
        {
            m_psz = (WCHAR *)::CoTaskMemAlloc((ULONG)ullcbNew);
            if (m_psz)
            {
                memset(m_psz, 0, (ULONG)ullcbNew);
            }
        }
        
        return m_psz;
    }
    WCHAR * LTrim()
    {
        if (m_psz)
        {
            WCHAR * pszRead = m_psz;
            while (iswspace(*pszRead))
            {
                pszRead++;
            }
            if (pszRead != m_psz)
            {
                WCHAR * pszWrite = m_psz;
                size_t length = wcslen(pszWrite);
                StringCchCopyW(pszWrite, length +1, pszRead);
            }
        }
        return m_psz;
    }
    WCHAR * RTrim()
    {
        if (m_psz)
        {
            WCHAR * pszTail = m_psz + wcslen(m_psz);
            WCHAR * pszZeroTerm = pszTail;
            while (pszZeroTerm > m_psz && iswspace(pszZeroTerm[-1]))
            {
                pszZeroTerm--;
            }
            if (pszZeroTerm != pszTail)
            {
                *pszZeroTerm = '\0';
            }
        }
        return m_psz;        
    }
    WCHAR * TrimBoth()
    {
        RTrim();
        return LTrim();
    }
};
inline void SpHexFromUlong(WCHAR * psz, ULONG ul)
{
#ifndef UNDER_CE
    if (_ultow_s(ul, psz, 9, 16))
    {
        psz[0] = L'0';
        psz[1] = 0;
    }
#else
    if (psz != NULL)
    {
        psz[0] = L'0';
        psz[1] = 0;
        _ultow(ul, psz, 16);
    }
#endif
}
inline HRESULT SpULongFromHex(const WCHAR *psz, unsigned *pResult)
{
    HRESULT hr = S_OK;
    *pResult = 0;
    size_t cLen = wcslen (psz);
    if (cLen > 8)
    {
        hr = E_FAIL;
    }
    if (SUCCEEDED(hr))
    {
        bool fFirst = true;
        for (size_t i = 0; i < cLen; i++)
        {
            int k = tolower (*psz);
            if (k >= L'a')
            {
                k = 10 + k - L'a';
            }
            else
            {
                if (k <= L'9')
                {
                    k -= L'0';
                }
                else
                {
                    k = -1;
                }
            }
            if (k < 0 || k > 15)
            {
                hr = E_FAIL;
                break;
            }
            if (fFirst)
                fFirst = false;
            else
                *pResult <<= 4;
            *pResult += (unsigned) k;
            psz++;
        }
    }
    return hr;
}
inline HRESULT SpGetTokenFromId(
    const WCHAR * pszTokenId, 
    ISpObjectToken ** ppToken,
    BOOL fCreateIfNotExist = FALSE)
{
    HRESULT hr;
    
    CComPtr<ISpObjectToken> cpToken;
    hr = cpToken.CoCreateInstance(CLSID_SpObjectToken);
    
    if (SUCCEEDED(hr))
    {
        hr = cpToken->SetId(NULL, pszTokenId, fCreateIfNotExist);
    }
    
    if (SUCCEEDED(hr))
    {
        *ppToken = cpToken.Detach();
    }
    
    return hr;
}
inline HRESULT SpGetCategoryFromId(
    const WCHAR * pszCategoryId,
    ISpObjectTokenCategory ** ppCategory,
    BOOL fCreateIfNotExist = FALSE)
{
    HRESULT hr;
    
    CComPtr<ISpObjectTokenCategory> cpTokenCategory;
    hr = cpTokenCategory.CoCreateInstance(CLSID_SpObjectTokenCategory);
    
    if (SUCCEEDED(hr))
    {
        hr = cpTokenCategory->SetId(pszCategoryId, fCreateIfNotExist);
    }
    
    if (SUCCEEDED(hr))
    {
        *ppCategory = cpTokenCategory.Detach();
    }
    
    return hr;
}
inline HRESULT SpGetDefaultTokenIdFromCategoryId(
    const WCHAR * pszCategoryId,
    WCHAR ** ppszTokenId)
{
    HRESULT hr;
    CComPtr<ISpObjectTokenCategory> cpCategory;
    hr = SpGetCategoryFromId(pszCategoryId, &cpCategory);
    
    if (SUCCEEDED(hr))
    {
        hr = cpCategory->GetDefaultTokenId(ppszTokenId);
    }
    return hr;
}
inline HRESULT SpSetDefaultTokenIdForCategoryId(
    const WCHAR * pszCategoryId,
    const WCHAR * pszTokenId)
{
    HRESULT hr;
    CComPtr<ISpObjectTokenCategory> cpCategory;
    hr = SpGetCategoryFromId(pszCategoryId, &cpCategory);
    
    if (SUCCEEDED(hr))
    {
        hr = cpCategory->SetDefaultTokenId(pszTokenId);
    }
    return hr;
}
inline HRESULT SpGetDefaultTokenFromCategoryId(
    const WCHAR * pszCategoryId,
    ISpObjectToken ** ppToken,
    BOOL fCreateCategoryIfNotExist = TRUE)
{
    HRESULT hr;
    CComPtr<ISpObjectTokenCategory> cpCategory;
    hr = SpGetCategoryFromId(pszCategoryId, &cpCategory, fCreateCategoryIfNotExist);
    if (SUCCEEDED(hr))
    {
        WCHAR * pszTokenId;
        hr = cpCategory->GetDefaultTokenId(&pszTokenId);
        if (SUCCEEDED(hr))
        {
            hr = SpGetTokenFromId(pszTokenId, ppToken);
            ::CoTaskMemFree(pszTokenId);
        }
    }
    return hr;
}
inline HRESULT SpSetDefaultTokenForCategoryId(
    const WCHAR * pszCategoryId,
    ISpObjectToken * pToken)
{
    HRESULT hr;
    WCHAR * pszTokenId;
    hr = pToken->GetId(&pszTokenId);
    if (SUCCEEDED(hr))
    {
        hr = SpSetDefaultTokenIdForCategoryId(pszCategoryId, pszTokenId);
        ::CoTaskMemFree(pszTokenId);
    }
    return hr;
}
inline HRESULT SpSetCommonTokenData(
    ISpObjectToken * pToken,
    const CLSID * pclsid,
    const WCHAR * pszLangIndependentName,
    LANGID langid,
    const WCHAR * pszLangDependentName,
    ISpDataKey ** ppDataKeyAttribs)
{
    HRESULT hr = S_OK;
    if (SUCCEEDED(hr) && pclsid)
    {
        CSpDynamicString dstrClsid;
        hr = StringFromCLSID(*pclsid, &dstrClsid);
    
        if (SUCCEEDED(hr))
        {
            hr = pToken->SetStringValue(SPTOKENVALUE_CLSID, dstrClsid);
        }
    }
    if (SUCCEEDED(hr) && pszLangIndependentName)
    {
        hr = pToken->SetStringValue(NULL, pszLangIndependentName);
    }
    if (SUCCEEDED(hr) && pszLangDependentName)
    {
        WCHAR szLangId[10];
        StringCbPrintfW (szLangId, sizeof (szLangId), L"%x", langid);
        hr = pToken->SetStringValue(szLangId, pszLangDependentName);
    }
    if (SUCCEEDED(hr) && ppDataKeyAttribs)
    {
        hr = pToken->CreateKey(L"Attributes", ppDataKeyAttribs);
    }
    return hr;
}
inline HRESULT SpCreateNewToken(
    const WCHAR * pszTokenId,
    ISpObjectToken ** ppToken)
{
    HRESULT hr;
    hr = SpGetTokenFromId(pszTokenId, ppToken, TRUE);
    
    return hr;
}
inline HRESULT SPCoCreateGuid(GUID *pGuid)
{
    HRESULT hr = S_OK;
    hr = CoCreateGuid(pGuid);
    return hr;
}
inline HRESULT SpCreateNewToken(
    const WCHAR * pszCategoryId,
    const WCHAR * pszTokenKeyName,
    ISpObjectToken ** ppToken)
{
    HRESULT hr;
    CComPtr<ISpObjectTokenCategory> cpCategory;
    hr = SpGetCategoryFromId(pszCategoryId, &cpCategory, TRUE);
    CSpDynamicString dstrTokenKeyName;
    if (SUCCEEDED(hr))
    {
        if (pszTokenKeyName == NULL)
        {
            GUID guidTokenKeyName;
            hr = SPCoCreateGuid(&guidTokenKeyName);
            if (SUCCEEDED(hr))
            {
                hr = StringFromCLSID(guidTokenKeyName, &dstrTokenKeyName);
            }
            if (SUCCEEDED(hr))
            {
                pszTokenKeyName = dstrTokenKeyName;
            }
        }
    }
    CSpDynamicString dstrTokenId;
    if (SUCCEEDED(hr))
    {
        dstrTokenId = pszCategoryId;
        dstrTokenId.Append2(L"\\Tokens\\", pszTokenKeyName);
    }
    if (SUCCEEDED(hr))
    {
        hr = SpGetTokenFromId(dstrTokenId, ppToken, TRUE);
    }
    
    return hr;
}
inline HRESULT SpCreateNewTokenEx(
    const WCHAR * pszCategoryId,
    const WCHAR * pszTokenKeyName,
    const CLSID * pclsid,
    const WCHAR * pszLangIndependentName,
    LANGID langid,
    const WCHAR * pszLangDependentName,
    ISpObjectToken ** ppToken,
    ISpDataKey ** ppDataKeyAttribs)
{
    HRESULT hr;
    hr = SpCreateNewToken(pszCategoryId, pszTokenKeyName, ppToken);
    if (SUCCEEDED(hr))
    {
        hr = SpSetCommonTokenData(
                    *ppToken, 
                    pclsid, 
                    pszLangIndependentName, 
                    langid, 
                    pszLangDependentName, 
                    ppDataKeyAttribs);
    }
    
    return hr;
}
inline HRESULT SpCreateNewTokenEx(
    const WCHAR * pszTokenId,
    const CLSID * pclsid,
    const WCHAR * pszLangIndependentName,
    LANGID langid,
    const WCHAR * pszLangDependentName,
    ISpObjectToken ** ppToken,
    ISpDataKey ** ppDataKeyAttribs)
{
    HRESULT hr;
    hr = SpCreateNewToken(pszTokenId, ppToken);
    if (SUCCEEDED(hr))
    {
        hr = SpSetCommonTokenData(
                    *ppToken, 
                    pclsid, 
                    pszLangIndependentName, 
                    langid, 
                    pszLangDependentName, 
                    ppDataKeyAttribs);
    }
    
    return hr;
}
inline HRESULT SpEnumTokens(
    const WCHAR * pszCategoryId, 
    const WCHAR * pszReqAttribs, 
    const WCHAR * pszOptAttribs, 
    IEnumSpObjectTokens ** ppEnum)
{
    HRESULT hr = S_OK;
    
    CComPtr<ISpObjectTokenCategory> cpCategory;
    hr = SpGetCategoryFromId(pszCategoryId, &cpCategory);
    
    if (SUCCEEDED(hr))
    {
        hr = cpCategory->EnumTokens(
                    pszReqAttribs,
                    pszOptAttribs,
                    ppEnum);
    }
    
    return hr;
}
inline HRESULT SpFindBestToken(
    const WCHAR * pszCategoryId, 
    const WCHAR * pszReqAttribs, 
    const WCHAR * pszOptAttribs, 
    ISpObjectToken **ppObjectToken)
{
    HRESULT hr = S_OK;
    
    const WCHAR *pszVendorPreferred = L"VendorPreferred";
    const ULONG ulLenVendorPreferred = (ULONG) wcslen(pszVendorPreferred);
    ULONG ulLen;
    if (pszOptAttribs)
    {
        hr = ULongAdd((ULONG)wcslen(pszOptAttribs), ulLenVendorPreferred, &ulLen);
        if (SUCCEEDED(hr))
        {
            hr = ULongAdd(ulLen, 1 + 1, &ulLen);
        }
    }
    else
    {
        hr = ULongAdd(ulLenVendorPreferred, 1, &ulLen);
    }
    if (FAILED(hr))
    {
        hr = E_INVALIDARG;
    }
    else
    {
        WCHAR *pszOptAttribsVendorPref = new WCHAR[ulLen];
        if (pszOptAttribsVendorPref)
        {
            if (pszOptAttribs)
            {
                StringCchCopyW (pszOptAttribsVendorPref, ulLen, pszOptAttribs);
                StringCchCatW (pszOptAttribsVendorPref, ulLen, L";");
                StringCchCatW (pszOptAttribsVendorPref, ulLen, pszVendorPreferred);
            }
            else
            {
                StringCchCopyW (pszOptAttribsVendorPref, ulLen, pszVendorPreferred);
            }
        }
        else
        {
            hr = E_OUTOFMEMORY;
        }
        CComPtr<IEnumSpObjectTokens> cpEnum;
        if (SUCCEEDED(hr))
        {
            hr = SpEnumTokens(pszCategoryId, pszReqAttribs, pszOptAttribsVendorPref, &cpEnum);
        }
        delete[] pszOptAttribsVendorPref;
        if (SUCCEEDED(hr))
        {
            hr = cpEnum->Next(1, ppObjectToken, NULL);
            if (hr == S_FALSE)
            {
                *ppObjectToken = NULL;
                hr = SPERR_NOT_FOUND;
            }
        }
    }
    return hr;
}
template<class T>
HRESULT SpCreateObjectFromToken(ISpObjectToken * pToken, T ** ppObject,
                       IUnknown * pUnkOuter = NULL, DWORD dwClsCtxt = CLSCTX_ALL)
{
    HRESULT hr;
    hr = pToken->CreateInstance(pUnkOuter, dwClsCtxt, __uuidof(T), (void **)ppObject);
    
    return hr;
}
template<class T>
HRESULT SpCreateObjectFromTokenId(const WCHAR * pszTokenId, T ** ppObject,
                       IUnknown * pUnkOuter = NULL, DWORD dwClsCtxt = CLSCTX_ALL)
{
    
    ISpObjectToken * pToken;
    HRESULT hr = SpGetTokenFromId(pszTokenId, &pToken);
    if (SUCCEEDED(hr))
    {
        hr = SpCreateObjectFromToken(pToken, ppObject, pUnkOuter, dwClsCtxt);
        pToken->Release();
    }
    return hr;
}
template<class T>
HRESULT SpCreateDefaultObjectFromCategoryId(const WCHAR * pszCategoryId, T ** ppObject,
                       IUnknown * pUnkOuter = NULL, DWORD dwClsCtxt = CLSCTX_ALL)
{
   
    ISpObjectToken * pToken;
    HRESULT hr = SpGetDefaultTokenFromCategoryId(pszCategoryId, &pToken);
    if (SUCCEEDED(hr))
    {
        hr = SpCreateObjectFromToken(pToken, ppObject, pUnkOuter, dwClsCtxt);
        pToken->Release();
    }
    return hr;
}
template<class T>
HRESULT SpCreateBestObject(
    const WCHAR * pszCategoryId, 
    const WCHAR * pszReqAttribs, 
    const WCHAR * pszOptAttribs, 
    T ** ppObject,
    IUnknown * pUnkOuter = NULL, 
    DWORD dwClsCtxt = CLSCTX_ALL)
{
    HRESULT hr;
    
    CComPtr<ISpObjectToken> cpToken;
    hr = SpFindBestToken(pszCategoryId, pszReqAttribs, pszOptAttribs, &cpToken);
    if (SUCCEEDED(hr))
    {
        hr = SpCreateObjectFromToken(cpToken, ppObject, pUnkOuter, dwClsCtxt);
    }
    return hr;
}
inline HRESULT SpCreatePhoneConverter(
    LANGID LangID,
    const WCHAR * pszReqAttribs,
    const WCHAR * pszOptAttribs,
    ISpPhoneConverter ** ppPhoneConverter)
{
    HRESULT hr = SPERR_NOT_FOUND;
    if (LangID != 0)
    {
        CSpDynamicString dstrReqAttribs;
        if (pszReqAttribs)
        {
            dstrReqAttribs = pszReqAttribs;
            dstrReqAttribs.Append(L";");
        }
        WCHAR szLang[MAX_PATH];
        SpHexFromUlong(szLang, LangID);
        WCHAR szLangCondition[MAX_PATH];
        StringCchCopyW(szLangCondition, MAX_PATH, L"Language=");
        StringCchCatW(szLangCondition, MAX_PATH, szLang);
        dstrReqAttribs.Append(szLangCondition);
        hr = SpCreateBestObject(SPCAT_PHONECONVERTERS, dstrReqAttribs, pszOptAttribs, ppPhoneConverter);
    }
#if _SAPI_VER >= 0x053
    if (hr == SPERR_NOT_FOUND)
    {
        hr =  CoCreateInstance(CLSID_SpPhoneConverter, NULL, CLSCTX_ALL, IID_ISpPhoneConverter, (LPVOID*)ppPhoneConverter);
        if (SUCCEEDED(hr))
        {
            ISpPhoneticAlphabetSelection * pAlphabetSelection = NULL;
            hr = (*ppPhoneConverter)->QueryInterface(IID_ISpPhoneticAlphabetSelection, (LPVOID*) &pAlphabetSelection);
            if (SUCCEEDED(hr))
            {
                hr = pAlphabetSelection->SetAlphabetToUPS(TRUE);
                pAlphabetSelection->Release();
            }
            else
            {
                hr = SPERR_NOT_FOUND;
            }
            if (FAILED(hr))
            {
                (*ppPhoneConverter)->Release();
                *ppPhoneConverter = NULL;
            }
        }
    }
#endif
    return hr;
}
inline HRESULT SpGetLanguageFromToken(ISpObjectToken * pToken, LANGID * plangid)
{
    HRESULT hr = S_OK;
    CComPtr<ISpDataKey> cpDataKeyAttribs;
    hr = pToken->OpenKey(SPTOKENKEY_ATTRIBUTES, &cpDataKeyAttribs);
    CSpDynamicString dstrLanguage;
    if (SUCCEEDED(hr))
    {
        hr = cpDataKeyAttribs->GetStringValue(L"Language", &dstrLanguage);
    }
    if (SUCCEEDED(hr))
    {
        const WCHAR *pszLangId = dstrLanguage;
        WCHAR achHexNumber [5];
        const WCHAR *pSemiColon = wcschr (pszLangId, L';');
        if (pSemiColon)
        {
            size_t cLen = pSemiColon - dstrLanguage;
            if (cLen <= 4)
            {
                StringCbCopyNW (achHexNumber, sizeof (achHexNumber), dstrLanguage, cLen * sizeof (achHexNumber [0]));
                pszLangId = achHexNumber;
            }
        }
        unsigned langid;
        if (FAILED (SpULongFromHex(pszLangId, &langid)))
        {
            hr = SPERR_INVALID_TOKEN_ID;
        }
        else
        {
            *plangid = (LANGID) langid;
        }
    }
    return hr;
}
inline HRESULT SpGetLanguageFromVoiceToken(ISpObjectToken * pToken, LANGID * plangid)
{
    return SpGetLanguageFromToken(pToken, plangid);
}
inline HRESULT SpHrFromWin32(DWORD dwErr)
{
    return HRESULT_FROM_WIN32(dwErr);
}
inline HRESULT SpHrFromLastWin32Error()
{
    HRESULT hr = SpHrFromWin32(::GetLastError());
    return FAILED(hr) ? hr : E_FAIL;
}
inline LANGID SpGetUserDefaultUILanguage(void) 
{
    return GetUserDefaultUILanguage() ;
}
inline HRESULT SpGetDescription(ISpObjectToken * pObjToken, WCHAR ** ppszDescription, LANGID Language = SpGetUserDefaultUILanguage())
{
    WCHAR szLangId[10];
    HRESULT hr = S_OK;
#if _SAPI_VER >= 0x053
    WCHAR* pRegKeyPath = 0;
    WCHAR* pszTemp = 0;
    HKEY   Handle = NULL;
    OSVERSIONINFO ver;
    ver.dwOSVersionInfoSize = sizeof( ver );
    if (ppszDescription == NULL)
    {
        return E_POINTER;
    }
    *ppszDescription = NULL;
    if( ( ::GetVersionEx( &ver ) == TRUE ) && ( ver.dwMajorVersion >= 6 ) )
    {
        HMODULE hmodAdvapi32Dll = NULL;
        typedef HRESULT (WINAPI* LPFN_RegLoadMUIStringW)(HKEY, LPCWSTR, LPWSTR, DWORD, LPDWORD, DWORD, LPCWSTR);
        LPFN_RegLoadMUIStringW pfnRegLoadMUIStringW = NULL;
        hmodAdvapi32Dll = ::LoadLibrary(TEXT("advapi32.dll"));
        if(hmodAdvapi32Dll)
        {
#ifdef UNDER_CE
            pfnRegLoadMUIStringW = (LPFN_RegLoadMUIStringW) ::GetProcAddress(hmodAdvapi32Dll, L"RegLoadMUIStringW");
#else
            pfnRegLoadMUIStringW = (LPFN_RegLoadMUIStringW) ::GetProcAddress(hmodAdvapi32Dll, "RegLoadMUIStringW");
#endif
            if (!pfnRegLoadMUIStringW)
            {
                _ASSERT (pfnRegLoadMUIStringW);
                hr = TYPE_E_DLLFUNCTIONNOTFOUND;
            }
        }
        else
        {
            hr = HRESULT_FROM_WIN32(ERROR_DLL_NOT_FOUND);
        }
        
        if (SUCCEEDED(hr))
        {
            hr = pObjToken->GetId(&pszTemp);
        }
        if (SUCCEEDED(hr))
        {
            LONG   lErrorCode = ERROR_SUCCESS;
            pRegKeyPath = wcschr(pszTemp, L'\\');
            if(pRegKeyPath)
            {
                *pRegKeyPath = L'\0';
                pRegKeyPath++;
                *ppszDescription = 0;
                if (wcsncmp(pszTemp, L"HKEY_LOCAL_MACHINE", MAX_PATH) == 0)
                {
                    lErrorCode = RegOpenKeyExW(HKEY_LOCAL_MACHINE, pRegKeyPath, 0, KEY_QUERY_VALUE, &Handle);
                }
                else if (wcsncmp(pszTemp, L"HKEY_CURRENT_USER", MAX_PATH) == 0)
                {
                    lErrorCode = RegOpenKeyExW(HKEY_CURRENT_USER, pRegKeyPath, 0, KEY_QUERY_VALUE, &Handle);
                }
                else
                {
                    lErrorCode = ERROR_BAD_ARGUMENTS;
                }
                if(ERROR_SUCCESS == lErrorCode)
                {
                    *ppszDescription = (WCHAR*) CoTaskMemAlloc(MAX_PATH * sizeof(WCHAR));
                    lErrorCode = (*pfnRegLoadMUIStringW) (Handle, SR_LOCALIZED_DESCRIPTION, *ppszDescription, MAX_PATH * sizeof(WCHAR), NULL, REG_MUI_STRING_TRUNCATE, NULL);
                }
            }
            else
            {
                lErrorCode = ERROR_BAD_ARGUMENTS;
            }
            hr = HRESULT_FROM_WIN32(lErrorCode);
        }
        if(Handle)
        {
            RegCloseKey(Handle);
        }
        if(pszTemp)
        {
            CoTaskMemFree(pszTemp);
        }
        if (hmodAdvapi32Dll)
        {
            ::FreeLibrary(hmodAdvapi32Dll);
        }
    }
    else
    {
        hr = HRESULT_FROM_WIN32(ERROR_NOT_SUPPORTED);
    }
    _ASSERT(FAILED(hr) || *ppszDescription != NULL);
#else
    hr = E_FAIL;
#endif
    if (FAILED(hr))
    {
        if (*ppszDescription != NULL)
        {
            CoTaskMemFree(*ppszDescription);
            *ppszDescription = NULL;
        }
        SpHexFromUlong(szLangId, Language);
        hr = pObjToken->GetStringValue(szLangId, ppszDescription);
        if (hr == SPERR_NOT_FOUND)
        {
            hr = pObjToken->GetStringValue(NULL, ppszDescription);
        }
    }
    return hr;
}
inline HRESULT SpSetDescription(ISpObjectToken * pObjToken, const WCHAR * pszDescription, LANGID Language = SpGetUserDefaultUILanguage(), BOOL fSetLangIndependentId = TRUE)
{
    WCHAR szLangId[10];
    SpHexFromUlong(szLangId, Language);
    HRESULT hr = pObjToken->SetStringValue(szLangId, pszDescription);
    if (SUCCEEDED(hr) && fSetLangIndependentId)
    {
        hr = pObjToken->SetStringValue(NULL, pszDescription);
    }
    return hr;
}
inline HRESULT SpConvertStreamFormatEnum(SPSTREAMFORMAT eFormat, GUID * pFormatId, WAVEFORMATEX ** ppCoMemWaveFormatEx)
{
    HRESULT hr = S_OK;
    if(pFormatId==NULL || ppCoMemWaveFormatEx==NULL)
    {
        return E_INVALIDARG;
    }
    const GUID * pFmtGuid = &GUID_NULL;
    if( eFormat >= SPSF_8kHz8BitMono && eFormat <= SPSF_48kHz16BitStereo )
    {
        WAVEFORMATEX * pwfex = (WAVEFORMATEX *)::CoTaskMemAlloc(sizeof(WAVEFORMATEX));
        *ppCoMemWaveFormatEx = pwfex;
        if (pwfex)
        {
            DWORD dwIndex = eFormat - SPSF_8kHz8BitMono;
            BOOL bIsStereo = dwIndex & 0x1;
            BOOL bIs16 = dwIndex & 0x2;
            DWORD dwKHZ = (dwIndex & 0x3c) >> 2;
            static const DWORD adwKHZ[] = { 8000, 11025, 12000, 16000, 22050, 24000, 32000, 44100, 48000 };
            pwfex->wFormatTag = WAVE_FORMAT_PCM;
            pwfex->nChannels = pwfex->nBlockAlign = (WORD)(bIsStereo ? 2 : 1);
            pwfex->nSamplesPerSec = (dwKHZ < sizeof(adwKHZ)/sizeof(adwKHZ[0])) ? adwKHZ[dwKHZ] : adwKHZ[0];
            pwfex->wBitsPerSample = 8;
            if (bIs16)
            {
                pwfex->wBitsPerSample *= 2;
                pwfex->nBlockAlign *= 2;
            }
                pwfex->nAvgBytesPerSec = pwfex->nSamplesPerSec * pwfex->nBlockAlign;
            pwfex->cbSize = 0;
            pFmtGuid = &SPDFID_WaveFormatEx;
        }
        else
        {
            hr = E_OUTOFMEMORY;
        }
    }
    else if( eFormat == SPSF_TrueSpeech_8kHz1BitMono )
    {
        int NumBytes = sizeof( WAVEFORMATEX ) + 32;
        WAVEFORMATEX * pwfex = (WAVEFORMATEX *)::CoTaskMemAlloc( NumBytes );
        *ppCoMemWaveFormatEx = pwfex;
        if( pwfex )
        {
            memset( pwfex, 0, NumBytes );
            pwfex->wFormatTag      = WAVE_FORMAT_DSPGROUP_TRUESPEECH;
            pwfex->nChannels       = 1;
            pwfex->nSamplesPerSec  = 8000;
            pwfex->nAvgBytesPerSec = 1067;
            pwfex->nBlockAlign     = 32;
            pwfex->wBitsPerSample  = 1;
            pwfex->cbSize          = 32;
            BYTE* pExtra = ((BYTE*)pwfex) + sizeof( WAVEFORMATEX );
            pExtra[0] = 1;
            pExtra[2] = 0xF0;
            pFmtGuid = &SPDFID_WaveFormatEx;
        }
        else
        {
            hr = E_OUTOFMEMORY;
        }
    }
    else if( (eFormat >= SPSF_CCITT_ALaw_8kHzMono    ) &&
             (eFormat <= SPSF_CCITT_ALaw_44kHzStereo ) )
    {
        WAVEFORMATEX * pwfex = (WAVEFORMATEX *)::CoTaskMemAlloc( sizeof(WAVEFORMATEX) );
        *ppCoMemWaveFormatEx = pwfex;
        if( pwfex )
        {
            memset( pwfex, 0, sizeof(WAVEFORMATEX) );
            DWORD dwIndex = eFormat - SPSF_CCITT_ALaw_8kHzMono;
            DWORD dwKHZ = dwIndex / 2;
            static const DWORD adwKHZ[] = { 8000, 11025, 22050, 44100 };
            BOOL bIsStereo    = dwIndex & 0x1;
            pwfex->wFormatTag = WAVE_FORMAT_ALAW;
            pwfex->nChannels  = pwfex->nBlockAlign = (WORD)(bIsStereo ? 2 : 1);
            pwfex->nSamplesPerSec = (dwKHZ < sizeof(adwKHZ)/sizeof(adwKHZ[0])) ? adwKHZ[dwKHZ] : adwKHZ[0];
            pwfex->wBitsPerSample  = 8;
            pwfex->nAvgBytesPerSec = pwfex->nSamplesPerSec * pwfex->nBlockAlign;
            pwfex->cbSize          = 0;
            pFmtGuid = &SPDFID_WaveFormatEx;
        }
        else
        {
            hr = E_OUTOFMEMORY;
        }
    }
    else if( (eFormat >= SPSF_CCITT_uLaw_8kHzMono    ) &&
             (eFormat <= SPSF_CCITT_uLaw_44kHzStereo ) )
    {
        WAVEFORMATEX * pwfex = (WAVEFORMATEX *)::CoTaskMemAlloc( sizeof(WAVEFORMATEX) );
        *ppCoMemWaveFormatEx = pwfex;
        if( pwfex )
        {
            memset( pwfex, 0, sizeof(WAVEFORMATEX) );
            DWORD dwIndex = eFormat - SPSF_CCITT_uLaw_8kHzMono;
            DWORD dwKHZ = dwIndex / 2;
            static const DWORD adwKHZ[] = { 8000, 11025, 22050, 44100 };
            BOOL bIsStereo    = dwIndex & 0x1;
            pwfex->wFormatTag = WAVE_FORMAT_MULAW;
            pwfex->nChannels  = pwfex->nBlockAlign = (WORD)(bIsStereo ? 2 : 1);
            pwfex->nSamplesPerSec = (dwKHZ < sizeof(adwKHZ)/sizeof(adwKHZ[0])) ? adwKHZ[dwKHZ] : adwKHZ[0];
            pwfex->wBitsPerSample  = 8;
            pwfex->nAvgBytesPerSec = pwfex->nSamplesPerSec * pwfex->nBlockAlign;
            pwfex->cbSize          = 0;
            pFmtGuid = &SPDFID_WaveFormatEx;
        }
        else
        {
            hr = E_OUTOFMEMORY;
        }
    }
    else if( (eFormat >= SPSF_ADPCM_8kHzMono    ) &&
             (eFormat <= SPSF_ADPCM_44kHzStereo ) )
    {
        int NumBytes = sizeof( WAVEFORMATEX ) + 32;
        WAVEFORMATEX * pwfex = (WAVEFORMATEX *)::CoTaskMemAlloc( NumBytes );
        *ppCoMemWaveFormatEx = pwfex;
        if( pwfex )
        {
            static const DWORD adwKHZ[] = { 8000, 11025, 22050, 44100 };
            static const DWORD BytesPerSec[] = { 4096, 8192, 5644, 11289, 11155, 22311, 22179, 44359 };
            static const DWORD BlockAlign[]  = { 256, 256, 512, 1024 };
            static const BYTE Extra811[32] =
            {
                0xF4, 0x01, 0x07, 0x00, 0x00, 0x01, 0x00, 0x00,
                0x00, 0x02, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00,
                0xC0, 0x00, 0x40, 0x00, 0xF0, 0x00, 0x00, 0x00,
                0xCC, 0x01, 0x30, 0xFF, 0x88, 0x01, 0x18, 0xFF
            };
            static const BYTE Extra22[32] =
            {
                0xF4, 0x03, 0x07, 0x00, 0x00, 0x01, 0x00, 0x00,
                0x00, 0x02, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00,
                0xC0, 0x00, 0x40, 0x00, 0xF0, 0x00, 0x00, 0x00,
                0xCC, 0x01, 0x30, 0xFF, 0x88, 0x01, 0x18, 0xFF
            };
            static const BYTE Extra44[32] =
            {
                0xF4, 0x07, 0x07, 0x00, 0x00, 0x01, 0x00, 0x00,
                0x00, 0x02, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00,
                0xC0, 0x00, 0x40, 0x00, 0xF0, 0x00, 0x00, 0x00,
                0xCC, 0x01, 0x30, 0xFF, 0x88, 0x01, 0x18, 0xFF
            };
            static const BYTE* Extra[4] = { Extra811, Extra811, Extra22, Extra44 };
            memset( pwfex, 0, NumBytes );
            DWORD dwIndex  = eFormat - SPSF_ADPCM_8kHzMono;
            DWORD dwKHZ    = dwIndex / 2;
            BOOL bIsStereo = dwIndex & 0x1;
            pwfex->wFormatTag      = WAVE_FORMAT_ADPCM;
            pwfex->nChannels       = (WORD)(bIsStereo ? 2 : 1);
            pwfex->nSamplesPerSec =  (dwKHZ < sizeof(adwKHZ)/sizeof(adwKHZ[0])) ? adwKHZ[dwKHZ] : adwKHZ[0];
            pwfex->nAvgBytesPerSec = (dwIndex < sizeof(BytesPerSec)/sizeof(BytesPerSec[0])) ? BytesPerSec[dwIndex] : BytesPerSec[0];
            pwfex->nBlockAlign     = (WORD)(((dwKHZ < sizeof(BlockAlign)/sizeof(BlockAlign[0])) ? BlockAlign[dwKHZ] : BlockAlign[0]) * pwfex->nChannels);
            pwfex->wBitsPerSample  = 4;
            pwfex->cbSize          = 32;
            BYTE* pExtra = ((BYTE*)pwfex) + sizeof( WAVEFORMATEX );
            memcpy( pExtra, (dwKHZ < sizeof(Extra)/sizeof(Extra[0])) ? Extra[dwKHZ] : Extra[0], 32 );
            pFmtGuid = &SPDFID_WaveFormatEx;
        }
        else
        {
            hr = E_OUTOFMEMORY;
        }
    }
    else if( (eFormat >= SPSF_GSM610_8kHzMono    ) &&
             (eFormat <= SPSF_GSM610_44kHzMono ) )
    {
        int NumBytes = sizeof( WAVEFORMATEX ) + 2;
        WAVEFORMATEX * pwfex = (WAVEFORMATEX *)::CoTaskMemAlloc( NumBytes );
        *ppCoMemWaveFormatEx = pwfex;
        if( pwfex )
        {
            static const DWORD adwKHZ[] = { 8000, 11025, 22050, 44100 };
            static const DWORD BytesPerSec[] = { 1625, 2239, 4478, 8957 };
            memset( pwfex, 0, NumBytes );
            DWORD dwIndex          = eFormat - SPSF_GSM610_8kHzMono;
            pwfex->wFormatTag      = WAVE_FORMAT_GSM610;
            pwfex->nChannels       = 1;
            pwfex->nSamplesPerSec = (dwIndex < sizeof(adwKHZ)/sizeof(adwKHZ[0])) ? adwKHZ[dwIndex] : adwKHZ[0];
            pwfex->nAvgBytesPerSec = BytesPerSec[dwIndex];
            pwfex->nBlockAlign     = 65;
            pwfex->wBitsPerSample  = 0;
            pwfex->cbSize          = 2;
            BYTE* pExtra = ((BYTE*)pwfex) + sizeof( WAVEFORMATEX );
            pExtra[0] = 0x40;
            pExtra[1] = 0x01;
            pFmtGuid = &SPDFID_WaveFormatEx;
        }
        else
        {
            hr = E_OUTOFMEMORY;
        }
    }
    else
    {
        *ppCoMemWaveFormatEx = NULL;
        switch (eFormat)
        {
        case SPSF_NoAssignedFormat
            break;
        case SPSF_Text
            pFmtGuid = &SPDFID_Text;
            break;
        default
            hr = E_INVALIDARG;
            break;
        }
    }
    *pFormatId = *pFmtGuid;
    return hr;
}
class CSpStreamFormat
{
public
    GUID            m_guidFormatId;
    WAVEFORMATEX  * m_pCoMemWaveFormatEx; 
    static HRESULT CoMemCopyWFEX(const WAVEFORMATEX * pSrc, WAVEFORMATEX ** ppCoMemWFEX)
    {
        if (pSrc == NULL ||
            pSrc->nAvgBytesPerSec == 0 ||
            pSrc->nBlockAlign == 0 ||
            pSrc->nChannels == 0)
        {
            return E_INVALIDARG;
        }
        ULONG cb = sizeof(WAVEFORMATEX);
        if (pSrc->wFormatTag != WAVE_FORMAT_PCM)
        {
            cb += pSrc->cbSize;
            if (cb < pSrc->cbSize)
            {
                return E_INVALIDARG;
            }
        }
        *ppCoMemWFEX = (WAVEFORMATEX *)::CoTaskMemAlloc(cb);
        if (*ppCoMemWFEX)
        {
            memcpy(*ppCoMemWFEX, pSrc, cb);
            if ((*ppCoMemWFEX)->wFormatTag == WAVE_FORMAT_PCM)
            {
                (*ppCoMemWFEX)->cbSize = 0;
            }
            return S_OK;
        }
        else
        {
            return E_OUTOFMEMORY;
        }
    }
    CSpStreamFormat()
    {
        m_guidFormatId = GUID_NULL;
        m_pCoMemWaveFormatEx = NULL;
    }
    CSpStreamFormat(SPSTREAMFORMAT eFormat, HRESULT * phr)
    {
        *phr = SpConvertStreamFormatEnum(eFormat, &m_guidFormatId, &m_pCoMemWaveFormatEx);
    }
    CSpStreamFormat(const WAVEFORMATEX * pWaveFormatEx, HRESULT * phr)
    {
        _ASSERT(pWaveFormatEx);
        *phr = CoMemCopyWFEX(pWaveFormatEx, &m_pCoMemWaveFormatEx);
        m_guidFormatId = SUCCEEDED(*phr) ? SPDFID_WaveFormatEx : GUID_NULL;
    }
    ~CSpStreamFormat()
    {
        ::CoTaskMemFree(m_pCoMemWaveFormatEx);
    }
    void Clear()
    {
        ::CoTaskMemFree(m_pCoMemWaveFormatEx);
        m_pCoMemWaveFormatEx = NULL;
        memset(&m_guidFormatId, 0, sizeof(m_guidFormatId));
    }
    const GUID & FormatId() const 
    {
        return m_guidFormatId;
    }
    const WAVEFORMATEX * WaveFormatExPtr() const
    {
        return m_pCoMemWaveFormatEx;
    }
    HRESULT AssignFormat(SPSTREAMFORMAT eFormat)
    {
        ::CoTaskMemFree(m_pCoMemWaveFormatEx);    
        return SpConvertStreamFormatEnum(eFormat, &m_guidFormatId, &m_pCoMemWaveFormatEx);
    }
    HRESULT AssignFormat(ISpStreamFormat * pStream)
    {
        ::CoTaskMemFree(m_pCoMemWaveFormatEx);
        m_pCoMemWaveFormatEx = NULL;
        HRESULT hr = pStream->GetFormat(&m_guidFormatId, &m_pCoMemWaveFormatEx);
        if (SUCCEEDED(hr) && m_pCoMemWaveFormatEx)
        {
            if (m_pCoMemWaveFormatEx->wFormatTag == WAVE_FORMAT_PCM)
            {
                m_pCoMemWaveFormatEx->cbSize = 0;
            }
            if (m_pCoMemWaveFormatEx->nAvgBytesPerSec == 0 ||
                m_pCoMemWaveFormatEx->nBlockAlign == 0 ||
                m_pCoMemWaveFormatEx->nChannels == 0)
            {
                Clear();
                hr = E_INVALIDARG;
            }
        }
        return hr;
    }
    HRESULT AssignFormat(const WAVEFORMATEX * pWaveFormatEx)
    {
        if (pWaveFormatEx->nBlockAlign == 0)
        {
            return E_INVALIDARG;
        }
        ::CoTaskMemFree(m_pCoMemWaveFormatEx);
        HRESULT hr = CoMemCopyWFEX(pWaveFormatEx, &m_pCoMemWaveFormatEx);
        m_guidFormatId = SUCCEEDED(hr) ? SPDFID_WaveFormatEx : GUID_NULL;
        return hr;
    }
    HRESULT AssignFormat(REFGUID rguidFormatId, const WAVEFORMATEX * pWaveFormatEx)
    {
        HRESULT hr = S_OK;
        m_guidFormatId = rguidFormatId;
        ::CoTaskMemFree(m_pCoMemWaveFormatEx);
        m_pCoMemWaveFormatEx = NULL;
        if (rguidFormatId == SPDFID_WaveFormatEx)
        {
            if (pWaveFormatEx == NULL)
            {
                hr = E_INVALIDARG;
            }
            else 
            {
                hr = CoMemCopyWFEX(pWaveFormatEx, &m_pCoMemWaveFormatEx);
            }
            if (FAILED(hr))
            {
                m_guidFormatId = GUID_NULL;
            }
        }
        return hr;
    }
    BOOL IsEqual(REFGUID rguidFormatId, const WAVEFORMATEX * pwfex) const
    {
        if (rguidFormatId == m_guidFormatId)
        {
            if (m_pCoMemWaveFormatEx)
            {
                if (pwfex &&
                    pwfex->cbSize == m_pCoMemWaveFormatEx->cbSize &&
                    memcmp(m_pCoMemWaveFormatEx, pwfex, sizeof(WAVEFORMATEX) + pwfex->cbSize) == 0)
                {
                    return TRUE;
                }
            }
            else
            {
                return (pwfex == NULL);
            }
        }
        return FALSE;
    }
    HRESULT ParamValidateAssignFormat(REFGUID rguidFormatId, const WAVEFORMATEX * pWaveFormatEx, BOOL fRequireWaveFormat = FALSE)
    {
        if ((pWaveFormatEx && (rguidFormatId != SPDFID_WaveFormatEx)) ||
            (fRequireWaveFormat && pWaveFormatEx == NULL))
        {
            return E_INVALIDARG;
        }
        return AssignFormat(rguidFormatId, pWaveFormatEx);
    }
    SPSTREAMFORMAT ComputeFormatEnum()
    {
        if (m_guidFormatId == GUID_NULL)
        {
            return SPSF_NoAssignedFormat;
        }
        if (m_guidFormatId == SPDFID_Text)
        {
            return SPSF_Text;
        }
        if ((m_guidFormatId != SPDFID_WaveFormatEx) || (m_pCoMemWaveFormatEx == NULL))
        {
            return SPSF_NonStandardFormat;
        }
        DWORD dwIndex = 0;
        switch (m_pCoMemWaveFormatEx->wFormatTag)
        {
          case WAVE_FORMAT_PCM
          {
            switch (m_pCoMemWaveFormatEx->nChannels)
            {
              case 1
                break;
              case 2
                dwIndex |= 1;
                break;
              default
                return SPSF_ExtendedAudioFormat;
            }
            switch (m_pCoMemWaveFormatEx->wBitsPerSample)
            {
              case 8
                break;
              case 16
                dwIndex |= 2;
                break;
              default
                return SPSF_ExtendedAudioFormat;
            }
            switch (m_pCoMemWaveFormatEx->nSamplesPerSec)
            {
              case 48000
                dwIndex += 4;
              case 44100
                dwIndex += 4;
              case 32000
                dwIndex += 4;
              case 24000
                dwIndex += 4;
              case 22050
                dwIndex += 4;
              case 16000
                dwIndex += 4;
              case 12000
                dwIndex += 4;
              case 11025
                dwIndex += 4;
              case 8000
                break;
              default
                return SPSF_ExtendedAudioFormat;
            }
            return static_cast<SPSTREAMFORMAT>(SPSF_8kHz8BitMono + dwIndex);
          }
          case WAVE_FORMAT_DSPGROUP_TRUESPEECH
          {
            return SPSF_TrueSpeech_8kHz1BitMono;
          }
          case WAVE_FORMAT_ALAW:
          case WAVE_FORMAT_MULAW
          case WAVE_FORMAT_ADPCM
          {
            switch (m_pCoMemWaveFormatEx->nChannels)
            {
              case 1
                break;
              case 2
                dwIndex |= 1;
                break;
              default
                return SPSF_ExtendedAudioFormat;
            }
            if(m_pCoMemWaveFormatEx->wFormatTag == WAVE_FORMAT_ADPCM)
            {
                if(m_pCoMemWaveFormatEx->wBitsPerSample != 4)
                {
                    return SPSF_ExtendedAudioFormat;
                }
            }
            else if(m_pCoMemWaveFormatEx->wBitsPerSample != 8)
            {
                return SPSF_ExtendedAudioFormat;
            }
            switch (m_pCoMemWaveFormatEx->nSamplesPerSec)
            {
              case 44100
                dwIndex += 2;
              case 22050
                dwIndex += 2;
              case 11025
                dwIndex += 2;
              case 8000
                break;
              default
                return SPSF_ExtendedAudioFormat;
            }
            switch( m_pCoMemWaveFormatEx->wFormatTag )
            {
              case WAVE_FORMAT_ALAW
                return static_cast<SPSTREAMFORMAT>(SPSF_CCITT_ALaw_8kHzMono + dwIndex);
              case WAVE_FORMAT_MULAW
                return static_cast<SPSTREAMFORMAT>(SPSF_CCITT_uLaw_8kHzMono + dwIndex);
              case WAVE_FORMAT_ADPCM
                return static_cast<SPSTREAMFORMAT>(SPSF_ADPCM_8kHzMono + dwIndex);
            }
          }
          case WAVE_FORMAT_GSM610
          {
            if( m_pCoMemWaveFormatEx->nChannels != 1 )
            {
                return SPSF_ExtendedAudioFormat;
            }
            switch (m_pCoMemWaveFormatEx->nSamplesPerSec)
            {
              case 44100
                dwIndex = 3;
                break;
              case 22050
                dwIndex = 2;
                break;
              case 11025
                dwIndex = 1;
                break;
              case 8000
                dwIndex = 0;
                break;
              default
                return SPSF_ExtendedAudioFormat;
            }
            return static_cast<SPSTREAMFORMAT>(SPSF_GSM610_8kHzMono + dwIndex);
          }
          default
            return SPSF_ExtendedAudioFormat;
            break;
        }
    }
    void DetachTo(CSpStreamFormat & Other)
    {
        ::CoTaskMemFree(Other.m_pCoMemWaveFormatEx);
        Other.m_guidFormatId = m_guidFormatId;
        Other.m_pCoMemWaveFormatEx = m_pCoMemWaveFormatEx;
        m_pCoMemWaveFormatEx = NULL;
        memset(&m_guidFormatId, 0, sizeof(m_guidFormatId));
    }
    void DetachTo(GUID * pFormatId, WAVEFORMATEX ** ppCoMemWaveFormatEx)
    {
        *pFormatId = m_guidFormatId;
        *ppCoMemWaveFormatEx = m_pCoMemWaveFormatEx;
        m_pCoMemWaveFormatEx = NULL;
        memset(&m_guidFormatId, 0, sizeof(m_guidFormatId));
    }
    HRESULT CopyTo(GUID * pFormatId, WAVEFORMATEX ** ppCoMemWFEX) const
    {
        HRESULT hr = S_OK;
        *pFormatId = m_guidFormatId;
        if (m_pCoMemWaveFormatEx)
        {
            hr = CoMemCopyWFEX(m_pCoMemWaveFormatEx, ppCoMemWFEX);
            if (FAILED(hr))
            {
                memset(pFormatId, 0, sizeof(*pFormatId));
            }
        }
        else
        {
            *ppCoMemWFEX = NULL;
        }
        return hr;
    }
    HRESULT CopyTo(CSpStreamFormat & Other) const
    {
        ::CoTaskMemFree(Other.m_pCoMemWaveFormatEx);
        return CopyTo(&Other.m_guidFormatId, &Other.m_pCoMemWaveFormatEx);
    }
    
    HRESULT AssignFormat(const CSpStreamFormat & Src)
    {
        return Src.CopyTo(*this);
    }
    HRESULT ParamValidateCopyTo(GUID * pFormatId, WAVEFORMATEX ** ppCoMemWFEX) const
    {
        if ((pFormatId == NULL) || (ppCoMemWFEX == NULL))
        {
            return E_POINTER;
        }
        return CopyTo(pFormatId, ppCoMemWFEX);
    }
    BOOL operator==(const CSpStreamFormat & Other) const
    {
        return IsEqual(Other.m_guidFormatId, Other.m_pCoMemWaveFormatEx);
    }
    BOOL operator!=(const CSpStreamFormat & Other) const
    {
        return !IsEqual(Other.m_guidFormatId, Other.m_pCoMemWaveFormatEx);
    }
    ULONG SerializeSize() const
    {
        ULONG cb = sizeof(ULONG) + sizeof(m_guidFormatId);
        if (m_pCoMemWaveFormatEx)
        {
            if (m_pCoMemWaveFormatEx->cbSize != 0 && m_pCoMemWaveFormatEx->wFormatTag == WAVE_FORMAT_PCM)
            {
                _ASSERT(!"PCM wave format");
                SetLastError(ERROR_INVALID_STATE);
                return 0;
            }
            cb += sizeof(WAVEFORMATEX) + m_pCoMemWaveFormatEx->cbSize + 3;
            cb -= cb % 4;
        }
        return cb;
    }
    ULONG Serialize(BYTE * pBuffer) const
    {
        ULONG cb = SerializeSize();
        *((UNALIGNED ULONG *)pBuffer) = cb;
        pBuffer += sizeof(ULONG);
        *((UNALIGNED GUID *)pBuffer) = m_guidFormatId;
        if (m_pCoMemWaveFormatEx)
        {
            pBuffer += sizeof(m_guidFormatId);
            memcpy(pBuffer, m_pCoMemWaveFormatEx, sizeof(WAVEFORMATEX) + m_pCoMemWaveFormatEx->cbSize);
        }
        return cb;
    }
    HRESULT Deserialize(const BYTE * pBuffer, ULONG * pcbUsed)
    {
        HRESULT hr = S_OK;
        if(pBuffer == NULL || pcbUsed == NULL)
        {
            return E_INVALIDARG;
        }
        *pcbUsed = *((UNALIGNED ULONG *)pBuffer);
        if(*pcbUsed < sizeof(GUID) + sizeof(ULONG))
        {
            return E_INVALIDARG;
        }
        pBuffer += sizeof(ULONG);
        ::CoTaskMemFree(m_pCoMemWaveFormatEx);
        m_pCoMemWaveFormatEx = NULL;
        memcpy(&m_guidFormatId, pBuffer, sizeof(GUID));
        if (*pcbUsed > sizeof(GUID) + sizeof(ULONG))
        {
            pBuffer += sizeof(m_guidFormatId);
            hr = CoMemCopyWFEX((const WAVEFORMATEX *)pBuffer, &m_pCoMemWaveFormatEx);
            if (FAILED(hr))
            {
                m_guidFormatId = GUID_NULL;
            }
        }
        return hr;
    }
};
inline UINT SpCodePageFromLcid(LCID lcid)
{
    WCHAR achCodePage[6];
    return (0 != GetLocaleInfoW(lcid, LOCALE_IDEFAULTANSICODEPAGE, achCodePage, sizeof(achCodePage) / sizeof(*achCodePage))) ? _wtoi(achCodePage) : 65001;
}
inline HRESULT SPBindToFile( LPCWSTR pFileName, SPFILEMODE eMode, ISpStream ** ppStream,
                            const GUID * pFormatId = NULL, const WAVEFORMATEX * pWaveFormatEx = NULL,
                            ULONGLONG ullEventInterest = SPFEI_ALL_EVENTS)
{
    HRESULT hr = ::CoCreateInstance(CLSID_SpStream, NULL, CLSCTX_ALL, __uuidof(*ppStream), (void **)ppStream);
    if (SUCCEEDED(hr))
    {
        hr = (*ppStream)->BindToFile(pFileName, eMode, pFormatId, pWaveFormatEx, ullEventInterest);
        if (FAILED(hr))
        {
            (*ppStream)->Release();
            *ppStream = NULL;
        }
    }
    return hr;
}
inline HRESULT SPBindToFile( const CHAR * pFileName, SPFILEMODE eMode, ISpStream** ppStream, 
                             const GUID * pFormatId = NULL, const WAVEFORMATEX * pWaveFormatEx = NULL,
                             ULONGLONG ullEventInterest = SPFEI_ALL_EVENTS)
{
    WCHAR szWcharFileName[MAX_PATH];
    ::MultiByteToWideChar(CP_ACP, 0, pFileName, -1, szWcharFileName, sp_countof(szWcharFileName));
    return SPBindToFile(szWcharFileName, eMode, ppStream, pFormatId, pWaveFormatEx, ullEventInterest);
}
inline HRESULT CheckStringSizeBytes(WCHAR const * psz, size_t cbMax, size_t* pcb)
{
    HRESULT hr = S_OK;
    size_t cchMax = cbMax / sizeof(WCHAR);
    while (cchMax && (*psz != L'\0'))
    {
        psz++;
        cchMax--;
    }
    if (cchMax == 0)
    {
        hr = E_INVALIDARG;
    }
    if (SUCCEEDED(hr) && pcb)
    {
        *pcb = cbMax - (cchMax - 1) * sizeof(WCHAR);
    }
    return hr;
}
inline void SpClearEvent(SPEVENT * pe)
{
    if( pe->elParamType != SPEI_UNDEFINED)
    {
        if( pe->elParamType == SPET_LPARAM_IS_POINTER ||
            pe->elParamType == SPET_LPARAM_IS_STRING)
        {
            ::CoTaskMemFree((void *)pe->lParam);
        }
        else if (pe->elParamType == SPET_LPARAM_IS_TOKEN ||
               pe->elParamType == SPET_LPARAM_IS_OBJECT)
        {
            ((IUnknown*)pe->lParam)->Release();
        }
    }
    memset(pe, 0, sizeof(*pe));
}
inline void SpInitEvent(SPEVENT * pe)
{
    memset(pe, 0, sizeof(*pe));
}
template <class T>
inline ULONG SpEventSerializeSize(const SPEVENT * pEvent)
{
    ULONG ulSize = sizeof(T);
    if( ( pEvent->elParamType == SPET_LPARAM_IS_POINTER ) && pEvent->lParam )
    {
        ulSize += ULONG(pEvent->wParam);
    }
    else if ((pEvent->elParamType == SPET_LPARAM_IS_STRING) && pEvent->lParam != NULL)
    {
        ulSize += ((ULONG) wcslen((WCHAR*)pEvent->lParam) + 1) * sizeof( WCHAR );
    }
    else if( pEvent->elParamType == SPET_LPARAM_IS_TOKEN )
    {
        CSpDynamicString dstrObjectId;
        if( ((ISpObjectToken*)(pEvent->lParam))->GetId( &dstrObjectId ) == S_OK )
        {
            ulSize += (dstrObjectId.Length() + 1) * sizeof( WCHAR );
        }
        else
        {
            return 0;
        }
    }
    ulSize += 3;
    ulSize -= ulSize % 4;
    return ulSize;
}
template <class T>
inline ULONG SpSerializedEventSize(const T * pSerEvent)
{
    ULONG ulSize = sizeof(T);
    if( ( pSerEvent->elParamType == SPET_LPARAM_IS_POINTER ) && pSerEvent->SerializedlParam )
    {
        ulSize += ULONG(pSerEvent->SerializedwParam);
    }
    else if ((pSerEvent->elParamType == SPET_LPARAM_IS_STRING || pSerEvent->elParamType == SPET_LPARAM_IS_TOKEN) &&
             pSerEvent->SerializedlParam != NULL)
    {
        ulSize += ((ULONG)wcslen((WCHAR*)(pSerEvent + 1)) + 1) * sizeof( WCHAR );
    }
    ulSize += 3;
    ulSize -= ulSize % 4;
    return ulSize;
}
class CSpEvent : public SPEVENT
{
public
    CSpEvent()
    {
        SpInitEvent(this);
    }
    ~CSpEvent()
    {
        SpClearEvent(this);
    }
    const SPEVENT * operator&()
        {
                return this;
        }
    CSpEvent * AddrOf()
    {
        return this;
    }
    void Clear()
    {
        SpClearEvent(this);
    }
    HRESULT CopyTo(SPEVENT * pDestEvent) const
    {
        memcpy(pDestEvent, this, sizeof(*pDestEvent));
        if ((elParamType == SPET_LPARAM_IS_POINTER) && lParam)
        {
            pDestEvent->lParam = (LPARAM)::CoTaskMemAlloc(wParam);
            if (pDestEvent->lParam)
            {
                memcpy((void *)pDestEvent->lParam, (void *)lParam, wParam);
            }
            else
            {
                pDestEvent->eEventId = SPEI_UNDEFINED;
                return E_OUTOFMEMORY;
            }
        }
        else if (elParamType == SPET_LPARAM_IS_STRING && lParam != NULL)
        {
            size_t cLen = wcslen((WCHAR*)lParam) + 1;
            pDestEvent->lParam = (LPARAM)::CoTaskMemAlloc(cLen * sizeof(WCHAR));
            if (pDestEvent->lParam)
            {
                StringCchCopyW ((WCHAR*)pDestEvent->lParam, cLen, (WCHAR*)lParam);
            }
            else
            {
                pDestEvent->eEventId = SPEI_UNDEFINED;
                return E_OUTOFMEMORY;
            }
        }
        else if (elParamType == SPET_LPARAM_IS_TOKEN ||
               elParamType == SPET_LPARAM_IS_OBJECT)
        {
            ((IUnknown*)lParam)->AddRef();
        }
        return S_OK;
    }
    HRESULT GetFrom(ISpEventSource * pEventSrc)
    {
        SpClearEvent(this);
        return pEventSrc->GetEvents(1, this, NULL);
    }
    HRESULT CopyFrom(const SPEVENT * pSrcEvent)
    {
        SpClearEvent(this);
        return static_cast<const CSpEvent *>(pSrcEvent)->CopyTo(this);
    }
    void Detach(SPEVENT * pDestEvent = NULL)
    {
        if (pDestEvent)
        {
            memcpy(pDestEvent, this, sizeof(*pDestEvent));
        }
        memset(this, 0, sizeof(*this));
    }
    template <class T>
    ULONG SerializeSize() const
    {
        return SpEventSerializeSize<T>(this);
    }
    template <class T>
    HRESULT Serialize(T * pSerEvent) const
    {
        if (elParamType == SPET_LPARAM_IS_OBJECT)
        {
            _ASSERT(elParamType != SPET_LPARAM_IS_OBJECT);
            return E_UNEXPECTED;
        }
        HRESULT hr = S_OK;
        pSerEvent->eEventId = this->eEventId;
        pSerEvent->elParamType = this->elParamType;
        pSerEvent->ulStreamNum = this->ulStreamNum;
        pSerEvent->ullAudioStreamOffset = this->ullAudioStreamOffset;
        pSerEvent->SerializedwParam = static_cast<ULONG>(this->wParam);
        pSerEvent->SerializedlParam = static_cast<LONG>(this->lParam);
        if (lParam)
        {
            switch(elParamType)
            {
            case SPET_LPARAM_IS_POINTER
                memcpy(pSerEvent + 1, (void *)lParam, wParam);
                pSerEvent->SerializedlParam = sizeof(T);
                break;
            case SPET_LPARAM_IS_STRING
                StringCchCopyW ((WCHAR *)(pSerEvent + 1), wcslen ((WCHAR*) lParam) + 1, (WCHAR*)lParam);
                pSerEvent->SerializedlParam = sizeof(T);
                break;
            case SPET_LPARAM_IS_TOKEN
                {
                    CSpDynamicString dstrObjectId;
                    hr = ((ISpObjectToken*)lParam)->GetId( &dstrObjectId );
                    if( SUCCEEDED( hr ) )
                    {
                        pSerEvent->SerializedwParam = (dstrObjectId.Length() + 1) * sizeof( WCHAR );;
                        memcpy( pSerEvent + 1, (void *)dstrObjectId.m_psz, static_cast<ULONG>(pSerEvent->SerializedwParam) );
                    }
                    pSerEvent->SerializedlParam = sizeof(T);
                }
                break;
            default
                break;
            }
        }
        return hr;
    }
    template <class T>
    HRESULT Serialize(T ** ppCoMemSerEvent, ULONG * pcbSerEvent) const 
    {
        *pcbSerEvent = SpEventSerializeSize<T>(this);
        if (*pcbSerEvent == 0)
        {
            return E_FAIL;
        }
        *ppCoMemSerEvent = (T *)::CoTaskMemAlloc(*pcbSerEvent);
        if (*ppCoMemSerEvent)
        {
            return Serialize(*ppCoMemSerEvent);
        }
        else
        {
            *pcbSerEvent = 0;
            return E_OUTOFMEMORY;
        }
    }
    template <class T>
    HRESULT Deserialize(const T * pSerEvent, ULONG * pcbUsed = NULL, ULONG cbMaxLength = 0xFFFF)
    {
        Clear();
        HRESULT hr = S_OK;
        const UNALIGNED T * pTemp = pSerEvent;
        if (cbMaxLength < sizeof(*pTemp))
        {
            return E_INVALIDARG;
        }
        size_t cbExtraSize = cbMaxLength - sizeof(*pTemp);
        this->eEventId = pTemp->eEventId;
        this->elParamType = pTemp->elParamType;
        this->ulStreamNum = pTemp->ulStreamNum;
        this->ullAudioStreamOffset = pTemp->ullAudioStreamOffset;
        this->wParam = static_cast<WPARAM>(pTemp->SerializedwParam);
        this->lParam = static_cast<LPARAM>(pTemp->SerializedlParam);
        if (pTemp->SerializedlParam)
        {
            size_t cbAlloc = 0;
            switch (pTemp->elParamType)
            {
            case SPET_LPARAM_IS_POINTER
                cbAlloc = static_cast<ULONG>(wParam);
                if (cbAlloc > cbExtraSize)
                {
                    hr = E_INVALIDARG;
                }
                break;
            case SPET_LPARAM_IS_STRING
                hr = CheckStringSizeBytes((WCHAR *)(pTemp + 1), cbExtraSize, &cbAlloc);
                break;
            case SPET_LPARAM_IS_TOKEN
                {
                    hr = CheckStringSizeBytes((WCHAR *)(pTemp + 1), cbExtraSize, NULL);
                    if (SUCCEEDED(hr))
                    {
                        hr = SpGetTokenFromId( (const WCHAR*)(pTemp + 1), (ISpObjectToken **)&lParam );
                        wParam = 0;
                    }
                }
                break;
            case SPET_LPARAM_IS_UNDEFINED
                break;
            case SPET_LPARAM_IS_OBJECT
                hr = E_INVALIDARG;
                break;
            default
                hr = E_INVALIDARG;
                break;
            }
            if (SUCCEEDED(hr) && cbAlloc)
            {
                void * pvBuff = ::CoTaskMemAlloc(cbAlloc);
                this->lParam = (LPARAM)pvBuff;
                if (pvBuff)
                {
                    memcpy(pvBuff, pTemp + 1, cbAlloc);
                }
                else
                {
                    hr = E_OUTOFMEMORY;
                }
            }
        }
        if( SUCCEEDED( hr ) && pcbUsed )
        {
            *pcbUsed = SpEventSerializeSize<T>(this);
            if(*pcbUsed == 0)
            {
                hr = E_FAIL;
            }
        }
        if (FAILED(hr))
        {
            memset(this, 0, sizeof(*this));
        }
        return hr;
    }
    SPPHONEID Phoneme() const 
    {
        _ASSERT(eEventId == SPEI_PHONEME);
        return (SPPHONEID)LOWORD(lParam);
    }
    SPVISEMES Viseme() const 
    {
        _ASSERT(eEventId == SPEI_VISEME);
        return (SPVISEMES)LOWORD(lParam);
    }
    ULONG InputWordPos() const
    {
        _ASSERT(eEventId == SPEI_WORD_BOUNDARY);
        return ULONG(lParam);
    }
    ULONG InputWordLen() const 
    {
        _ASSERT(eEventId == SPEI_WORD_BOUNDARY);
        return ULONG(wParam);
    }
    ULONG InputSentPos() const
    {
        _ASSERT(eEventId == SPEI_SENTENCE_BOUNDARY);
        return ULONG(lParam);
    }
    ULONG InputSentLen() const 
    {
        _ASSERT(eEventId == SPEI_SENTENCE_BOUNDARY);
        return ULONG(wParam);
    }
    ISpObjectToken * ObjectToken() const
    {
        _ASSERT(elParamType == SPET_LPARAM_IS_TOKEN);
        return (ISpObjectToken *)lParam;
    }
    ISpObjectToken * VoiceToken() const
    {
        _ASSERT(eEventId == SPEI_VOICE_CHANGE);
        return ObjectToken();
    }
    BOOL PersistVoiceChange() const
    {
        _ASSERT(eEventId == SPEI_VOICE_CHANGE);
        return (BOOL)wParam;
    }
    IUnknown * Object() const
    {
        _ASSERT(elParamType == SPET_LPARAM_IS_OBJECT);
        return (IUnknown*)lParam;
    }
    ISpRecoResult * RecoResult() const
    {
        return (ISpRecoResult *)Object();
    }
#if _SAPI_VER >= 0x053
    ULONG RetainedAudioSize() const
    {
        _ASSERT(eEventId == SPEI_SR_RETAINEDAUDIO);
        return ULONG(wParam);
    }
    ISpStreamFormat * RetainedAudioStream() const
    {
        _ASSERT(eEventId == SPEI_SR_RETAINEDAUDIO);
        return (ISpStreamFormat *)Object();
    }
#endif
    BOOL IsPaused()
    {
        return (BOOL)(wParam & SPREF_AutoPause);
    }
    BOOL IsEmulated()
    {
        return (BOOL)(wParam & SPREF_Emulated);
    }
#if _SAPI_VER >= 0x053
    BOOL IsSMLTimeout()
    {
        return (BOOL)(wParam & SPREF_SMLTimeout);
    }
#endif
    const WCHAR * String() const
    {
        _ASSERT(elParamType == SPET_LPARAM_IS_STRING);
        return (const WCHAR*)lParam;
    }
    const WCHAR * BookmarkName() const
    {
        _ASSERT(eEventId == SPEI_TTS_BOOKMARK);
        return String();
    }
    const WCHAR * RequestTypeOfUI() const
    {
        _ASSERT(eEventId == SPEI_REQUEST_UI);
        return String();
    }
    SPRECOSTATE RecoState() const
    {
        _ASSERT(eEventId == SPEI_RECO_STATE_CHANGE);
        return static_cast<SPRECOSTATE>(wParam);
    }
    const WCHAR * PropertyName() const
    {
        _ASSERT((eEventId == SPEI_PROPERTY_NUM_CHANGE && elParamType == SPET_LPARAM_IS_STRING) ||
                     (eEventId == SPEI_PROPERTY_STRING_CHANGE && elParamType == SPET_LPARAM_IS_POINTER));
        return (const WCHAR*)lParam;
    }
    const LONG PropertyNumValue() const 
    {
        _ASSERT(eEventId == SPEI_PROPERTY_NUM_CHANGE);
        return static_cast<LONG>(wParam);
    }
    const WCHAR * PropertyStringValue() const
    {
        _ASSERT(eEventId == SPEI_PROPERTY_STRING_CHANGE);
        const WCHAR * psz = (const WCHAR *)lParam;
        for (; *psz; psz++) {}
        return psz + 1;
    }
    SPINTERFERENCE Interference() const
    {
        _ASSERT(eEventId == SPEI_INTERFERENCE);
        return static_cast<SPINTERFERENCE>(lParam);
    }
    HRESULT EndStreamResult() const
    {
        _ASSERT(eEventId == SPEI_END_SR_STREAM);
        return static_cast<HRESULT>(lParam);
    }
    BOOL InputStreamReleased() const
    {
        _ASSERT(eEventId == SPEI_END_SR_STREAM);
        return (wParam & SPESF_STREAM_RELEASED) ? TRUE : FALSE;
    }
};
class CSpPhrasePtr
{
public
    SPPHRASE    *   m_pPhrase;
    CSpPhrasePtr() : m_pPhrase(NULL) {}
    CSpPhrasePtr(ISpPhrase * pPhraseObj, HRESULT * phr)
    {
        *phr = pPhraseObj->GetPhrase(&m_pPhrase);
    }
    ~CSpPhrasePtr()
    {
        ::CoTaskMemFree(m_pPhrase);
    }
        SPPHRASE ** operator&()
        {
            _ASSERT(m_pPhrase == NULL);
            return &m_pPhrase;
        }
    operator SPPHRASE *() const
    {
        return m_pPhrase;
    }
        SPPHRASE & operator*() const
        {
                _ASSERT(m_pPhrase);
                return *m_pPhrase;
        }
    SPPHRASE * operator->() const
    {
        return m_pPhrase;
    }
        bool operator!() const
        {
                return (m_pPhrase == NULL);
        }
    void Clear()
    {
        if (m_pPhrase)
        {
            ::CoTaskMemFree(m_pPhrase);
            m_pPhrase = NULL;
        }
    }
    HRESULT GetFrom(ISpPhrase * pPhraseObj)
    {
        Clear();
        return pPhraseObj->GetPhrase(&m_pPhrase);
    }
};
template <class T>
class CSpCoTaskMemPtr
{
public
    T       * m_pT;
    CSpCoTaskMemPtr() : m_pT(NULL) {}
    CSpCoTaskMemPtr(void * pv) : m_pT((T *)pv) {}
    CSpCoTaskMemPtr(ULONG cElements, HRESULT * phr)
    {
        m_pT = (T *)::CoTaskMemAlloc(cElements * sizeof(T));
        *phr = m_pT ? S_OK : E_OUTOFMEMORY;
    }
    ~CSpCoTaskMemPtr()
    {
        ::CoTaskMemFree(m_pT);
    }
    void Clear()
    {
        if (m_pT)
        {
            ::CoTaskMemFree(m_pT);
            m_pT = NULL;
        }
    }
    HRESULT Alloc(ULONG cArrayElements = 1)
    {
        T * pNewT = (T *)::CoTaskMemRealloc(m_pT, sizeof(T) * cArrayElements);
        if (pNewT == NULL)
        {
            Clear();
            return E_OUTOFMEMORY;
        }
        else
        {
            m_pT = pNewT;
            return S_OK;
        }
    }
    void Attach(void * pv)
    {
        Clear();
        m_pT = (T *)pv;
    }
    T * Detatch()
    {
        T * pT = m_pT;
        m_pT = NULL;
        return pT;
    }
        T ** operator&()
        {
            _ASSERT(m_pT == NULL);
            return &m_pT;
        }
    T * operator->()
    {
        _ASSERT(m_pT != NULL);
        return m_pT;
    }
    operator T *()
    {
        return m_pT;
    }
        bool operator!() const
        {
                return (m_pT == NULL);
        }
};
inline HRESULT CreatePhraseFromWordArray(const WCHAR ** ppWords, ULONG cWords,
                             SPDISPLYATTRIBUTES * prgDispAttribs,
                             ISpPhraseBuilder **ppResultPhrase,
                             LANGID LangId = 0,
                             CComPtr<ISpPhoneConverter> cpPhoneConv = NULL,
                             BOOL fNoSpecialCharacters = FALSE)
{
    HRESULT hr = S_OK;
    if ( cWords == 0 || ppWords == NULL )
    {
        return E_INVALIDARG;
    }
    size_t   cTotalChars = 0;
    ULONG    i;
    WCHAR** pStringPtrArray = (WCHAR**)::CoTaskMemAlloc( cWords * sizeof(WCHAR *));
    if ( !pStringPtrArray )
    {
        return E_OUTOFMEMORY;
    }
    for (i = 0; i < cWords; i++)
    {
        cTotalChars += wcslen(ppWords[i])+1;
    }
    if ((ULONG) cTotalChars != cTotalChars)
    {
        ::CoTaskMemFree(pStringPtrArray);
        return E_OUTOFMEMORY;
    }
    CSpDynamicString dsText((ULONG) cTotalChars);
    if(dsText.m_psz == NULL)
    {
        ::CoTaskMemFree(pStringPtrArray);
        return E_OUTOFMEMORY;
    }
    CSpDynamicString dsPhoneId((ULONG) cTotalChars);
    if(dsPhoneId.m_psz == NULL)
    {
        ::CoTaskMemFree(pStringPtrArray);
        return E_OUTOFMEMORY;
    }
    SPPHONEID* pphoneId = dsPhoneId;
    SPPHRASE Phrase;
    memset(&Phrase, 0, sizeof(Phrase));
#ifdef SP_SPPHRASESIZE_500
        Phrase.cbSize = SP_SPPHRASESIZE_500;
#else
        Phrase.cbSize = sizeof(Phrase);
#endif
    if(LangId == 0)
    {
        LangId = SpGetUserDefaultUILanguage();
    }
    SPPHRASEELEMENT *pPhraseElement = new SPPHRASEELEMENT[cWords];
    if(pPhraseElement == NULL)
    {
        ::CoTaskMemFree(pStringPtrArray);
        return E_OUTOFMEMORY;
    }
    memset(pPhraseElement, 0, sizeof(SPPHRASEELEMENT) * cWords);
    
    WCHAR * pText = dsText;
    for (i = 0; SUCCEEDED(hr) && i < cWords; i++)
    {
        WCHAR *p = pText;
        pStringPtrArray[i] = pText;
        if (ppWords[i][0] == L'/' && !fNoSpecialCharacters)
        {
            const WCHAR *pszOriginalText = ppWords[i] + 1;
            WCHAR* pszFirstPart = p;
            WCHAR* pszSecondPart = NULL;
            WCHAR* pszThirdPart = NULL;
            while (*pszOriginalText)
            {
                if (*pszOriginalText == L'\\')
                {
                    pszOriginalText++;
                }
                else if (*pszOriginalText == L';' || *pszOriginalText == L'/')
                {
                    break;
                }
                *p++ = *pszOriginalText++;
            }
            if (*pszOriginalText == L'/')
            {
                *p = L'\0';
                pszSecondPart = ++p;
                pszOriginalText++;
                while (*pszOriginalText)
                {
                    if (*pszOriginalText == L'\\')
                    {
                        pszOriginalText++;
                    }
                    else if (*pszOriginalText == L';' || *pszOriginalText == L'/')
                    {
                        break;
                    }
                    *p++ = *pszOriginalText++;
                }
                if (*pszOriginalText == L'/')
                {
                    *p = L'\0';
                    pszThirdPart = ++p;
                    pszOriginalText++;
                }
                
            }
            WCHAR *pBound = (WCHAR*) pszOriginalText + wcslen(pszOriginalText);
            while (pszOriginalText < pBound && *pszOriginalText != L';')
            {
                *p++ = *pszOriginalText++;
            }
            *p = L'\0';
            pText = p + 1;
            pPhraseElement[i].pszDisplayText = pszFirstPart;
            pPhraseElement[i].pszLexicalForm = pszSecondPart ? pszSecondPart : pszFirstPart;
            if (pszThirdPart && *pszThirdPart != L'\0')
            {
                if(cpPhoneConv == NULL)
                {
                    hr = SpCreatePhoneConverter(LangId, NULL, NULL, &cpPhoneConv);
                    if(FAILED(hr))
                    {
                        break;
                    }
                }
                hr = cpPhoneConv->PhoneToId(pszThirdPart, pphoneId);
                if (SUCCEEDED(hr))
                {
                    pPhraseElement[i].pszPronunciation = pphoneId;
                    pphoneId += wcslen(pphoneId) + 1;
                }
            }
        }
        else
        {
            StringCchCopyW ( pText, cTotalChars - (pText - dsText), ppWords[i] );
            pText += wcslen( p ) + 1;
            pPhraseElement[i].pszDisplayText = NULL;
            pPhraseElement[i].pszLexicalForm = p;
            pPhraseElement[i].pszPronunciation = NULL;
        }
        pPhraseElement[i].bDisplayAttributes = (BYTE)(prgDispAttribs ? prgDispAttribs[i] : SPAF_ONE_TRAILING_SPACE);
        pPhraseElement[i].RequiredConfidence = SP_NORMAL_CONFIDENCE;
        pPhraseElement[i].ActualConfidence =  SP_NORMAL_CONFIDENCE;
        pPhraseElement[i].SREngineConfidence = 1.0f;
    }
    Phrase.Rule.ulCountOfElements = cWords;
    Phrase.Rule.SREngineConfidence = 1.0f;
    Phrase.pElements = pPhraseElement;
    Phrase.LangID = LangId;
    CComPtr<ISpPhraseBuilder> cpPhrase;
    if (SUCCEEDED(hr))
    {
        hr = cpPhrase.CoCreateInstance(CLSID_SpPhraseBuilder);
    }
    if (SUCCEEDED(hr))
    {
        hr = cpPhrase->InitFromPhrase(&Phrase);
    }
    if (SUCCEEDED(hr))
    {
        *ppResultPhrase = cpPhrase.Detach();
    }
    delete[] pPhraseElement;
    ::CoTaskMemFree(pStringPtrArray);
    return hr;
}
inline HRESULT CreatePhraseFromText(const WCHAR *pszOriginalText,
                             ISpPhraseBuilder **ppResultPhrase,
                             LANGID LangId = 0,
                             CComPtr<ISpPhoneConverter> cpPhoneConv = NULL,
                             BOOL fNoSpecialCharacters = FALSE)
{
    HRESULT hr = S_OK;
    CSpDynamicString dsText((ULONG)wcslen(pszOriginalText) + 1);
    if(dsText.m_psz == NULL)
    {
        return E_OUTOFMEMORY;
    }
    ULONG cWords = 0;
    WCHAR *p = dsText;
    while (*pszOriginalText != L'\0')
    {
        while (iswspace(*pszOriginalText))
        {
            *p++ = L'\0';
            pszOriginalText++;
        }
        if (*pszOriginalText != L'\0')
        {
            cWords++;
            if ((*pszOriginalText == L'/') && !fNoSpecialCharacters)
            {
                while (*pszOriginalText != L'\0')
                {
                    if (*pszOriginalText == L'\\')
                    {
                        *p++ = *pszOriginalText++;
                    }
                    else if (*pszOriginalText == L';')
                    {
                        break;
                    }
                    *p++ = *pszOriginalText++;
                }
                if (*pszOriginalText == L';')
                {
                    *p++ = *pszOriginalText++;
                }
            }
            else
            {
                while ((*pszOriginalText != L'\0') && !iswspace(*pszOriginalText))
                {
                    *p++ = *pszOriginalText++;
                }
            }
        }
    }
    *p = L'\0';
    WCHAR** pStringPtrArray = (WCHAR**)::CoTaskMemAlloc( cWords * sizeof(WCHAR *));
    if ( !pStringPtrArray )
    {
        hr = E_OUTOFMEMORY;
    }
    if ( SUCCEEDED( hr ) )
    {
        p = dsText;
        for (ULONG i=0; i<cWords; i++)
        {
            while (*p == L'\0') p++;
            pStringPtrArray[i] = p;
            p += wcslen(p);
        }
        hr = CreatePhraseFromWordArray((const WCHAR **)pStringPtrArray, cWords, NULL, ppResultPhrase, LangId, cpPhoneConv, fNoSpecialCharacters);
        ::CoTaskMemFree(pStringPtrArray);
    }
    return hr;
}
#endif
#endif
