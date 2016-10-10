/*+@@file@@----------------------------------------------------------------*//*!
 \file		spddkhlp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 00:43:36 2016
 \date		Modified on Sat Sep 17 00:43:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef SPDDKHLP_h
#define SPDDKHLP_h
#if __POCC__ >= 500
#pragma once
#endif
#error C++ Onlly header!
#if 0
#include <tchar.h>
#ifndef SPHelper_h
#include <sphelper.h>
#endif
#include <sapiddk.h>
#define sp_countof(x) ((sizeof(x) / sizeof(*(x))))
#define SP_IS_BAD_WRITE_PTR(p)     ( !(p) || SPIsBadWritePtr( p, sizeof(*(p)) ))
#define SP_IS_BAD_READ_PTR(p)      ( !(p) || SPIsBadReadPtr(  p, sizeof(*(p)) ))
#define SP_IS_BAD_CODE_PTR(p)      ( (FARPROC)(p) == 0 )
#define SP_IS_BAD_INTERFACE_PTR(p) ( SPIsBadInterfacePtr( (p) )  )
#define SP_IS_BAD_VARIANT_PTR(p)   ( SPIsBadVARIANTPtr( (p) ) )
#define SP_IS_BAD_STRING_PTR(p)    ( SPIsBadStringPtr( (p) ) )
#define SP_IS_BAD_OPTIONAL_WRITE_PTR(p)     ((p) && SPIsBadWritePtr( p, sizeof(*(p)) ))
#define SP_IS_BAD_OPTIONAL_READ_PTR(p)      ((p) && SPIsBadReadPtr(  p, sizeof(*(p)) ))
#define SP_IS_BAD_OPTIONAL_INTERFACE_PTR(p) ((p) && SPIsBadInterfacePtr(p))
#define SP_IS_BAD_OPTIONAL_STRING_PTR(p)    ((p) && SPIsBadStringPtr(p))
#define SP_IS_BAD_READ_ARRAY(p,cElements)     ( SPIsBadReadArray( p, cElements, sizeof(*p) ) )
#define SP_IS_BAD_WRITE_ARRAY(p,cElements)     ( SPIsBadWriteArray( p, cElements, sizeof(*p) ) )
#define SP_DOES_PTR_ADDITION_WRAP(p)    ( SPDoesPtrAdditionWrap( p, sizeof(*p) ) )
#define SP_IS_PTR_OUT_OF_BOUNDS(p,pBound)    ( SPIsPtrOutOfBounds( p, sizeof(*p), pBound ) )
#define sp_sgn(x) ( (x) == 0 ? 0 : ( (x)>0 ? 1 : -1 ) )
inline BOOL SPIsBadStringPtr( const WCHAR * psz, ULONG cMaxChars = 0xFFFFF )
{
    return ((psz == NULL) || (wcslen(psz) + 1 > cMaxChars));
}
inline BOOL SPIsBadReadPtr( const void* pMem, size_t Size )
{
    return (pMem == NULL) && (Size != 0);
}
inline BOOL SPIsBadWritePtr( void* pMem, size_t Size )
{
    return (pMem == NULL) && (Size != 0);
}
inline BOOL SPIsBadInterfacePtr( const IUnknown* pUnknown )
{
    return (pUnknown == NULL);
}
inline BOOL SPIsBadVARIANTPtr( const VARIANT* pVar )
{
    return (pVar == NULL);
}
inline BOOL SPDoesPtrAdditionWrap( const void* pMem, size_t Size )
{
    return ((const BYTE*)pMem + Size) < (const BYTE*)pMem;
}
inline BOOL SPIsBadReadArray( const void* pMem, ULONG cElementCount, size_t cBytesPerElement)
{
    size_t cByteCount = cBytesPerElement * cElementCount;
    if (
         ( ( cByteCount / cBytesPerElement ) != cElementCount ) ||
         ( SPDoesPtrAdditionWrap ( pMem, cByteCount ) ) ||
         ( SPIsBadReadPtr ( pMem, cByteCount ) ) )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
inline BOOL SPIsBadWriteArray( void* pMem, ULONG cElementCount, size_t cBytesPerElement)
{
    size_t cByteCount = cBytesPerElement * cElementCount;
    if (
         ( ( cByteCount / cBytesPerElement ) != cElementCount ) ||
         ( SPDoesPtrAdditionWrap ( pMem, cByteCount ) ) ||
         ( SPIsBadWritePtr ( pMem, cByteCount ) ) )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
inline BOOL SPIsPtrOutOfBounds(const void* n_pStart,
                                  size_t n_cBytes, 
                                  const void* n_pBound)
{
    const void* pEnd = (const BYTE*)n_pStart + n_cBytes;
    if ( ( n_pStart <= pEnd ) &&
         ( pEnd <= n_pBound) )
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}
inline BOOL SPIsArrayOutOfBounds(const void* n_pStart,
                                 ULONG n_cElements,
                                 size_t n_cBytesPerElement,
                                 const void* n_pBound)
{
    size_t cBytesTotal = n_cElements * n_cBytesPerElement;
    if ( ( cBytesTotal / n_cElements ) != n_cBytesPerElement )
    {
        return FALSE;
    }
    else
    {
        return SPIsPtrOutOfBounds(n_pStart, cBytesTotal, n_pBound);
    }
}
inline BOOL SPIsStringOutOfBounds(const WCHAR* n_pwcszString,
                                  const void* n_pBound = NULL,
                                  const void* n_pLowerBound = NULL)
{
    BOOL br = FALSE;
    
    const WCHAR* pwcszBound = (const WCHAR*)n_pBound;
    const WCHAR* pwcszLowerBound = (const WCHAR*)n_pLowerBound;
    if ( (pwcszLowerBound && (pwcszLowerBound > n_pwcszString) ) ||
         (pwcszBound && (n_pwcszString >= pwcszBound) ) ||
         SP_IS_BAD_STRING_PTR(n_pwcszString) )
    {
        br = TRUE;
    }
    else if (pwcszBound)
    {
        const size_t cStrMaxLen = pwcszBound - n_pwcszString;
        const size_t cStrActualLen = wcslen(n_pwcszString);
        if (cStrActualLen > cStrMaxLen)
        {
            br = TRUE;
        }
    }
    else
    {
        br = FALSE;
    }
    return br;
}
template <class _C>
inline HRESULT SpSafePtrAdd (_C** n_ppBase, size_t n_cBytes, const void* n_pBound = NULL)
{
    HRESULT hr = S_OK;
    const BYTE* pByteCast = (const BYTE*)(*n_ppBase);
    const BYTE* pByteAdded = pByteCast + n_cBytes;
    if ( (pByteAdded < pByteCast) ||
         (n_pBound!=NULL && pByteAdded>n_pBound) )
    {
        hr = E_INVALIDARG;
    }
    else
    {
        *n_ppBase = (_C*)(pByteAdded);    
    }
    return hr;
}
template <class _C>
inline HRESULT SpSafePtrMultiplyAdd (_C** n_ppBase, 
                                     ULONG n_cElements,
                                     size_t n_cBytesPerElement, 
                                     const void* n_pBound = NULL)
{
    HRESULT hr = S_OK;
    ULONG cBytesTotal = n_cElements * n_cBytesPerElement;
    if ( ( cBytesTotal / n_cElements ) != n_cBytesPerElement )
    {
        hr = E_INVALIDARG;
    }
    else
    {
        hr = SpSafePtrAdd(n_ppBase, cBytesTotal, n_pBound);
    }
    return hr;
}
#ifdef __ATLCOM_H__
inline HRESULT SpGenericSetObjectToken(ISpObjectToken * pCallersToken, CComPtr<ISpObjectToken> & cpObjToken)
{
    HRESULT hr = S_OK;
    if (SP_IS_BAD_INTERFACE_PTR(pCallersToken))
    {
        hr = E_INVALIDARG;
    }
    else
    {
        if (cpObjToken)
        {
            hr = SPERR_ALREADY_INITIALIZED;
        }
        else
        {
            cpObjToken = pCallersToken;
        }
    }
    return hr;
}
inline HRESULT SpGenericGetObjectToken(ISpObjectToken ** ppCallersToken, CComPtr<ISpObjectToken> & cpObjToken)
{
    HRESULT hr = S_OK;
    if (SP_IS_BAD_WRITE_PTR(ppCallersToken))
    {
        hr = E_POINTER;
    }
    else
    {
        *ppCallersToken = cpObjToken;
        if (*ppCallersToken)
        {
            (*ppCallersToken)->AddRef();
        }
        else
        {
            hr = S_FALSE;
        }
    }
    return hr;
}
#endif
class CSpStateInfo : public SPSTATEINFO
{
public
    CSpStateInfo()
    {
        cAllocatedEntries = NULL;
        pTransitions = NULL;
    }
    ~CSpStateInfo()
    {
        ::CoTaskMemFree(pTransitions);
    }
    SPTRANSITIONENTRY * FirstEpsilon()
    {
        return pTransitions;
    }
    SPTRANSITIONENTRY * FirstRule()
    {
        return pTransitions + cEpsilons;
    }
    SPTRANSITIONENTRY * FirstWord()
    {
        return pTransitions + cEpsilons + cRules;
    }
    SPTRANSITIONENTRY * FirstSpecialTransition()
    {
        return pTransitions + cEpsilons + cRules + cWords;
    }
};
template <class T, BOOL bPurgeWhenDeleted> class CSpBasicList;
template <class T, BOOL bPurgeWhenDeleted = TRUE, BOOL bMaintainCount = FALSE>
class CSpBasicQueue
{
public
    T     * m_pHead;
    T     * m_pTail;
    ULONG   m_cElements;
    CSpBasicQueue() 
    {
        m_pHead = NULL;
        if (bMaintainCount)
        {
            m_cElements = 0;
        }
    }
    ~CSpBasicQueue()
    {
        if (bPurgeWhenDeleted)
        {
            Purge();
        }
    }
    HRESULT CreateNode(T ** ppNode)
    {
        *ppNode = new T;
        if (*ppNode)
        {
            return S_OK;
        }
        else
        {
            return E_OUTOFMEMORY;
        }
    }
    T * GetNext(const T * pNode)
    {
        return pNode->m_pNext;
    }
    T * Item(ULONG i)
    {
        T * pNode = m_pHead;
        while (pNode && i)
        {
            i--;
            pNode = pNode->m_pNext;
        }
        return pNode;
    }
    void InsertAfter(T * pPrev, T * pNewNode)
    {
        if (pPrev)
        {
            pNewNode->m_pNext = pPrev->m_pNext;
            pPrev->m_pNext = pNewNode;
            if (pNewNode->m_pNext == NULL)
            {
                m_pTail = pNewNode;
            }
            if (bMaintainCount) ++m_cElements;
        }
        else
        {
            InsertHead(pNewNode);
        }
    }
    void InsertTail(T * pNode)
    {
        pNode->m_pNext = NULL;
        if (m_pHead)
        {
            m_pTail->m_pNext = pNode;
        }
        else
        {
            m_pHead = pNode;
        }
        m_pTail = pNode;
        if (bMaintainCount) ++m_cElements;
    }
    void InsertHead(T * pNode)
    {
        pNode->m_pNext = m_pHead;
        if (m_pHead == NULL)
        {
            m_pTail = pNode;
        }
        m_pHead = pNode;
        if (bMaintainCount) ++m_cElements;
    }
    T * RemoveHead()
    {
        T * pNode = m_pHead;
        if (pNode)
        {
            m_pHead = pNode->m_pNext;
            if (bMaintainCount) --m_cElements;
        }
        return pNode;
    }
    T * RemoveTail()
    {
        T * pNode = m_pHead;
        if (pNode)
        {
            if (pNode == m_pTail)
            {
                m_pHead = NULL;
            }
            else
            {
                T * pPrev;
                do
                {
                    pPrev = pNode;
                    pNode = pNode->m_pNext;
                } while ( pNode != m_pTail );
                pPrev->m_pNext = NULL;
                m_pTail = pPrev;
            }
            if (bMaintainCount) --m_cElements;
        }
        return pNode;
    }
    void Purge()
    {
        while (m_pHead)
        {
            T * pDie = m_pHead;
            m_pHead = pDie->m_pNext;
            delete pDie;
        }
        if (bMaintainCount) m_cElements = 0;
    }
    void ExplicitPurge()
    {
        T * pDie;
        BYTE * pb;
        while (m_pHead)
        {
            pDie = m_pHead;
            m_pHead = pDie->m_pNext;
            pDie->~T();
            pb = reinterpret_cast<BYTE *>(pDie);
            delete [] pb;
        }
        if (bMaintainCount) m_cElements = 0;
    }
    T * GetTail() const
    {
        if (m_pHead)
        {
            return m_pTail;
        }
        return NULL;
    }
    T * GetHead() const
    {
        return m_pHead;
    }
    BOOL IsEmpty() const
    {
        return m_pHead == NULL; 
    }
    BOOL Remove(T * pNode)
    {
        if (m_pHead == pNode)
        {
            m_pHead = pNode->m_pNext;
            if (bMaintainCount) --m_cElements;
            return TRUE;
        }
        else
        {
            T * pCur = m_pHead;
            while (pCur)
            {
                T * pNext = pCur->m_pNext;
                if (pNext == pNode)
                {
                    if ((pCur->m_pNext = pNode->m_pNext) == NULL)
                    {
                        m_pTail = pCur;
                    }
                    if (bMaintainCount) --m_cElements;
                    return TRUE;
                }
                pCur = pNext;
            }
        }
        return FALSE;
    }
    void MoveAllToHeadOf(CSpBasicQueue & DestQueue)
    {
        if (m_pHead)
        {
            m_pTail->m_pNext = DestQueue.m_pHead;
            if (DestQueue.m_pHead == NULL)
            {
                DestQueue.m_pTail = m_pTail;
            }
            DestQueue.m_pHead = m_pHead;
            m_pHead = NULL;
            if (bMaintainCount)
            {
                DestQueue.m_cElements += m_cElements;
                m_cElements = 0;
            }
        }
    }
    void MoveAllToList(CSpBasicList<T, bPurgeWhenDeleted> & List)
    {
        if (m_pHead)
        {
            m_pTail->m_pNext = List.m_pFirst;
            List.m_pFirst = m_pHead;
            m_pHead = NULL;
        }
        if (bMaintainCount)
        {
            m_cElements = 0;
        }
    }
    BOOL MoveToList(T * pNode, CSpBasicList<T, bPurgeWhenDeleted> & List)
    {
        BOOL bFound = Remove(pNode);
        if (bFound)
        {
            List.AddNode(pNode);
        }
        return bFound;
    }
    ULONG GetCount() const
    {
        if (bMaintainCount)
        {
            return m_cElements;
        }
        else
        {
            ULONG c = 0;
            for (T * pNode = m_pHead;
                 pNode;
                 pNode = pNode->m_pNext, c++) {}
            return c;
        }
    }
    void InsertSorted(T * pNode)
    {
        if (m_pHead)
        {
            if (T::Compare(pNode, m_pTail) >= 0)
            {
                pNode->m_pNext = NULL;
                m_pTail->m_pNext = pNode;
                m_pTail = pNode;
            }
            else
            {
                T ** ppNext = &m_pHead;
                while (T::Compare(pNode, *ppNext) >= 0)
                {
                    ppNext = &((*ppNext)->m_pNext);
                }
                pNode->m_pNext = *ppNext;
                *ppNext = pNode;
            }
        }
        else
        {
            pNode->m_pNext = NULL;
            m_pHead = m_pTail = pNode;
        }
        if (bMaintainCount) ++m_cElements;
    }
    HRESULT InsertSortedUnique(T * pNode)
    {
        HRESULT hr = S_OK;
        if (m_pHead)
        {
            if (T::Compare(pNode, m_pTail) > 0)
            {
                pNode->m_pNext = NULL;
                m_pTail->m_pNext = pNode;
                m_pTail = pNode;
            }
            else
            {
                T ** ppNext = &m_pHead;
                while (T::Compare(pNode, *ppNext) > 0)
                {
                    ppNext = &((*ppNext)->m_pNext);
                }
                if (T::Compare(pNode, *ppNext) != 0)
                {
                    pNode->m_pNext = *ppNext;
                    *ppNext = pNode;
                }
                else
                {
                    delete pNode;
                    hr = S_FALSE;
                }
            }
        }
        else
        {
            pNode->m_pNext = NULL;
            m_pHead = m_pTail = pNode;
        }
        if (bMaintainCount) ++m_cElements;
        return hr;
    }
    template <class TFIND> 
    T * Find(TFIND & FindVal) const 
    {
        T * pNode = m_pHead;
        for (; pNode && (!(*pNode == FindVal)); pNode = pNode->m_pNext)
        {}
        return pNode;
    }
    template <class TFIND> 
    T * FindNext(const T * pCurNode, TFIND & FindVal) const 
    {
        for (T * pNode = pCurNode->m_pNext; pNode && (!(*pNode == FindVal)); pNode = pNode->m_pNext)
        {}
        return pNode;
    }
    template <class TFIND> 
    T * FindAndRemove(TFIND & FindVal)
    {
        T * pNode = m_pHead;
        if (pNode)
        {
            if (*pNode == FindVal)
            {
                m_pHead = pNode->m_pNext;
                if (bMaintainCount) --m_cElements;
            }
            else
            {
                T * pPrev = pNode;
                for (pNode = pNode->m_pNext;
                     pNode;
                     pPrev = pNode, pNode = pNode->m_pNext)
                {
                    if (*pNode == FindVal)
                    {
                        pPrev->m_pNext = pNode->m_pNext;
                        if (pNode->m_pNext == NULL)
                        {
                            m_pTail = pPrev;
                        }
                        if (bMaintainCount) --m_cElements;
                        break;
                    }
                }
            }
        }
        return pNode;
    }
    template <class TFIND> 
    void FindAndDeleteAll(TFIND & FindVal)
    {
        T * pNode = m_pHead;
        while (pNode && *pNode == FindVal)
        {
            m_pHead = pNode->m_pNext;
            delete pNode;
            if (bMaintainCount) --m_cElements;
            pNode = m_pHead;
        }
        T * pPrev = pNode;
        while (pNode)
        {
            T * pNext = pNode->m_pNext;
            if (*pNode == FindVal)
            {
                pPrev->m_pNext = pNext;
                delete pNode;
                if (bMaintainCount) --m_cElements;
            }
            else
            {
                pPrev = pNode;
            }
            pNode = pNext;
        }
        m_pTail = pPrev;
    }
};
template <class T, BOOL bPurgeWhenDeleted = TRUE>
class CSpBasicList
{
public
    T * m_pFirst;
    CSpBasicList() : m_pFirst(NULL) {}
    ~CSpBasicList()
    {
        if (bPurgeWhenDeleted)
        {
            Purge();
        }
    }
    void Purge()
    {
        while (m_pFirst)
        {
            T * pNext = m_pFirst->m_pNext;
            delete m_pFirst;
            m_pFirst = pNext;
        }
    }
    void ExplicitPurge()
    {
        T * pDie;
        BYTE * pb;
        while (m_pFirst)
        {
            pDie = m_pFirst;
            m_pFirst = pDie->m_pNext;
            pDie->~T();
            pb = reinterpret_cast<BYTE *>(pDie);
            delete [] pb;
        }
    }
    HRESULT RemoveFirstOrAllocateNew(T ** ppNode)
    {
        if (m_pFirst)
        {
            *ppNode = m_pFirst;
            m_pFirst = m_pFirst->m_pNext;
        }
        else
        {
            *ppNode = new T;
            if (*ppNode == NULL)
            {
                return E_OUTOFMEMORY;
            }
        }
        return S_OK;
    }
    void AddNode(T * pNode)
    {
        pNode->m_pNext = m_pFirst;
        m_pFirst = pNode;
    }
    T * GetFirst()
    {
        return m_pFirst;
    }
    T * RemoveFirst()
    {
        T * pNode = m_pFirst;
        if (pNode)
        {
            m_pFirst = pNode->m_pNext;
        }
        return pNode;
    }
};
#define STACK_ALLOC(TYPE, COUNT) (TYPE *)_alloca(sizeof(TYPE) * (COUNT))
#define STACK_ALLOC_AND_ZERO(TYPE, COUNT) (TYPE *)memset(_alloca(sizeof(TYPE) * (COUNT)), 0, (sizeof(TYPE) * (COUNT)))
#define STACK_ALLOC_AND_COPY(TYPE, COUNT, SOURCE) (TYPE *)memcpy(_alloca(sizeof(TYPE) * (COUNT)), (SOURCE), (sizeof(TYPE) * (COUNT)))
inline HRESULT SpGetSubTokenFromToken(
    ISpObjectToken * pToken,
    const WCHAR * pszSubKeyName,
    ISpObjectToken ** ppToken,
    BOOL fCreateIfNotExist = FALSE)
{
    HRESULT hr = S_OK;
    if (SP_IS_BAD_INTERFACE_PTR(pToken) ||
        SP_IS_BAD_STRING_PTR(pszSubKeyName) ||
        SP_IS_BAD_WRITE_PTR(ppToken))
    {
        hr = E_POINTER;
    }
    CComPtr<ISpDataKey> cpDataKeyForNewToken;
    if (SUCCEEDED(hr))
    {
        if (fCreateIfNotExist)
        {
            hr = pToken->CreateKey(pszSubKeyName, &cpDataKeyForNewToken);
        }
        else
        {
            hr = pToken->OpenKey(pszSubKeyName, &cpDataKeyForNewToken);
        }
    }
    CSpDynamicString dstrCategoryId;
    if (SUCCEEDED(hr))
    {
        hr = pToken->GetId(&dstrCategoryId);
    }
    CSpDynamicString dstrTokenId;
    if (SUCCEEDED(hr))
    {
        dstrTokenId = dstrCategoryId;
        dstrTokenId.Append2(L"\\", pszSubKeyName);
    }
    CComPtr<ISpObjectTokenInit> cpTokenInit;
    if (SUCCEEDED(hr))
    {
        hr = cpTokenInit.CoCreateInstance(CLSID_SpObjectToken);
    }
    if (SUCCEEDED(hr))
    {
        hr = cpTokenInit->InitFromDataKey(dstrCategoryId, dstrTokenId, cpDataKeyForNewToken);
    }
    if (SUCCEEDED(hr))
    {
        *ppToken = cpTokenInit.Detach();
    }
    return hr;
}
template<class T>
HRESULT SpCreateObjectFromSubToken(ISpObjectToken * pToken, const WCHAR * pszSubKeyName, T ** ppObject,
                       IUnknown * pUnkOuter = NULL, DWORD dwClsCtxt = CLSCTX_ALL)
{
    HRESULT hr;
    CComPtr<ISpObjectToken> cpSubToken;
    hr = SpGetSubTokenFromToken(pToken, pszSubKeyName, &cpSubToken);
    
    if (SUCCEEDED(hr))
    {
        hr = SpCreateObjectFromToken(cpSubToken, ppObject, pUnkOuter, dwClsCtxt);
    }
    return hr;
}
__inline HRESULT GetObjectToken(const WCHAR* pszTokenCat, 
                       const WCHAR* pszTokenName, 
                       CComPtr<ISpObjectToken> &cpToken)
{
    cpToken = NULL;
    CComPtr<IEnumSpObjectTokens> cpEnum;
    ISpObjectToken* pToken      = NULL;
    if (SUCCEEDED(SpEnumTokens(pszTokenCat, NULL, NULL, &cpEnum)))
    {
        while (cpEnum->Next(1, &pToken, NULL) == S_OK)
        {
            CSpDynamicString dstrDesc;
            if (SUCCEEDED(SpGetDescription(pToken, &dstrDesc)))
            {
                if (! wcscmp(dstrDesc.m_psz, pszTokenName))
                {
                    cpToken = pToken;
                    goto Exit;
                }
            }
            if (pToken)
            {
                pToken->Release();
                pToken = NULL;
            }
        }
    }
Exit
    if (pToken)
    {
        pToken->Release();
    }
    if (cpToken == NULL)
    {
        return E_FAIL;
    }
    return S_OK;
}
inline HRESULT SpEnumTokensMatchingPrimaryLangID(const LPCWSTR pszCategoryId, LANGID priLangID, LPCWSTR pszRequiredAtts,
                                                 IEnumSpObjectTokens **ppEnum)
{
    HRESULT hr = S_OK;
    CComPtr<ISpObjectTokenCategory> cpCategory;
    hr = SpGetCategoryFromId(pszCategoryId, &cpCategory);
    
    CComPtr<IEnumSpObjectTokens> cpEnum;
    if (SUCCEEDED(hr))
    {
        hr = cpCategory->EnumTokens(pszRequiredAtts, NULL, &cpEnum);
    }
    ULONG ulTokens;
    if (SUCCEEDED(hr))
    {
        hr = cpEnum->GetCount(&ulTokens);
    }
    CComPtr<ISpObjectTokenEnumBuilder> cpBuilder;
    if (SUCCEEDED(hr))
    {
        hr = cpBuilder.CoCreateInstance(CLSID_SpObjectTokenEnum);
    }
    if (SUCCEEDED(hr))
    {
        hr = cpBuilder->SetAttribs(NULL, NULL);
    }
    for (ULONG ul = 0; SUCCEEDED(hr) && ul < ulTokens; ul++)
    {
        LANGID tokenLangID;
        CComPtr<ISpObjectToken> cpToken;
        hr = cpEnum->Item(ul, &cpToken);
        if (SUCCEEDED(hr))
        {
            hr = SpGetLanguageFromToken(cpToken, &tokenLangID);
        }
        if (SUCCEEDED(hr) && PRIMARYLANGID(tokenLangID) == PRIMARYLANGID(priLangID))
        {
            hr = cpBuilder->AddTokens(1, &(cpToken.p));
        }
    }
    if (SUCCEEDED(hr))
    {
        hr = cpBuilder->Reset();
    }
    if (SUCCEEDED(hr))
    {
        *ppEnum = cpBuilder.Detach();
    }
    return hr;
}
#endif
#endif
