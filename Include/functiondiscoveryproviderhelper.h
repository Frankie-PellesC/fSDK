/*+@@file@@----------------------------------------------------------------*//*!
 \file		functiondiscoveryproviderhelper.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 19:46:49 2016
 \date		Modified on Sun Jul 10 19:46:49 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __functiondiscoveryproviderhelper_h__
#define __functiondiscoveryproviderhelper_h__
#if __POCC__ >= 500
#pragma once
#endif
#error C++ Only!!
#if 0

class CFDProviderHelper
{
public
    CFDProviderHelper() : m_hToken(NULL), m_dwSessionId((DWORD) -1)
    {
        InitializeSRWLock(&srwTokenLock);
    }
    ~CFDProviderHelper()
    {
        if ( NULL != m_hToken )
            CloseHandle( m_hToken );
    }
public
    static HRESULT CoSetProxyBlanket( IUnknown *pIUnk )
    {
        HRESULT hr = S_OK;
        IUnknown* pRealUnknown;
        ULONG_PTR ulRpcOptions = GetRpcOptions( pIUnk );
        
        if ( SERVER_LOCALITY_PROCESS_LOCAL != ulRpcOptions )
        {
            hr = CoImpersonateClient();
            if ( S_OK == hr )
            {
                hr = pIUnk->QueryInterface(IID_IUnknown, (LPVOID*)&pRealUnknown );
                if ( S_OK == hr )
                {
                    hr = ::CoSetProxyBlanket( pRealUnknown, RPC_C_AUTHN_DEFAULT, RPC_C_AUTHZ_NONE, COLE_DEFAULT_PRINCIPAL, RPC_C_AUTHN_LEVEL_DEFAULT, RPC_C_IMP_LEVEL_IMPERSONATE, NULL, EOAC_STATIC_CLOAKING );
                    if ( S_OK == hr )
                    {
                        hr = ::CoSetProxyBlanket( pIUnk, RPC_C_AUTHN_DEFAULT, RPC_C_AUTHZ_NONE, COLE_DEFAULT_PRINCIPAL,
                                              RPC_C_AUTHN_LEVEL_DEFAULT, RPC_C_IMP_LEVEL_IMPERSONATE, NULL, EOAC_STATIC_CLOAKING );
                    }
                    if ( E_NOINTERFACE == hr )
                        hr = S_OK;
                    pRealUnknown->Release();
                }
                if ( S_OK == hr )
                    hr = CoRevertToSelf();
                else
                    CoRevertToSelf();
            }
        }
        return hr;
    }
    HRESULT CoSetProxyBlanketWithThreadToken( IUnknown *pIUnk )
    {
        if ( NULL == m_hToken )
            return S_OK;
        IUnknown* pRealUnknown;
        HRESULT hr = S_OK;
        AcquireSRWLockShared(&srwTokenLock);
        if ( !SetThreadToken( NULL, m_hToken ))
            hr = HRESULT_FROM_WIN32( GetLastError() );
        ReleaseSRWLockShared(&srwTokenLock);
        
        if ( S_OK == hr )
        {
            hr = pIUnk->QueryInterface(IID_IUnknown, (LPVOID*)&pRealUnknown );
            if ( S_OK == hr )
            {
                hr = ::CoSetProxyBlanket( pRealUnknown, RPC_C_AUTHN_DEFAULT, RPC_C_AUTHZ_NONE, COLE_DEFAULT_PRINCIPAL, RPC_C_AUTHN_LEVEL_DEFAULT, RPC_C_IMP_LEVEL_IMPERSONATE, NULL, EOAC_STATIC_CLOAKING );
                if (S_OK == hr)
                    hr = ::CoSetProxyBlanket( pIUnk, RPC_C_AUTHN_DEFAULT, RPC_C_AUTHZ_NONE, COLE_DEFAULT_PRINCIPAL, RPC_C_AUTHN_LEVEL_DEFAULT, RPC_C_IMP_LEVEL_IMPERSONATE, NULL, EOAC_STATIC_CLOAKING );
                if ( E_NOINTERFACE == hr )
                    hr = S_OK;
                pRealUnknown->Release();
            }
            if ( !SetThreadToken( NULL, NULL ))
            {
                if ( S_OK == hr )
                    hr = HRESULT_FROM_WIN32( GetLastError() );
            }
        }
        return hr;
    }
    HRESULT Initialize( IUnknown *pIUnk )
    {
        if ( NULL != m_hToken )
            return S_FALSE;
        const SID LOCAL_SYSTEM_SID = { SID_REVISION, 1, {0,0,0,0,0,5}, SECURITY_LOCAL_SYSTEM_RID };
        HRESULT hr = CoImpersonateClient();
        if ( S_OK == hr )
        {
            BOOL isLocalSystem = FALSE;
            BOOL isLocalCall = (GetRpcOptions( pIUnk ) == SERVER_LOCALITY_PROCESS_LOCAL);
            if (!isLocalCall)
            {
                if ( !CheckTokenMembership( NULL, (PSID)&LOCAL_SYSTEM_SID, &isLocalSystem ))
                {
                    hr = HRESULT_FROM_WIN32( GetLastError() );
                }
            }
            if ( (S_OK == hr) && (!isLocalCall) && (!isLocalSystem) )
            {
                AcquireSRWLockExclusive(&srwTokenLock);
                if ( !OpenThreadToken( GetCurrentThread(), TOKEN_IMPERSONATE | TOKEN_QUERY, FALSE, &m_hToken ))
                    hr = HRESULT_FROM_WIN32( GetLastError() );
                if ( S_OK == hr )
                {
                    DWORD dwSizeReturned;
                    if ( !GetTokenInformation(m_hToken, TokenSessionId, &m_dwSessionId, sizeof(m_dwSessionId), &dwSizeReturned ))
                        hr = HRESULT_FROM_WIN32( GetLastError() );
                }
                ReleaseSRWLockExclusive(&srwTokenLock);
            }
            if ( S_OK == hr )
                hr = CoRevertToSelf();
            else
                CoRevertToSelf();
        }
        else if ( RPC_E_CALL_COMPLETE == hr )
        {
            hr = S_OK;
        }
        return hr;
    }
    BOOL ReleaseToken(DWORD dwSessionId)
    {
        BOOL bMatch = FALSE;
        
        AcquireSRWLockExclusive( &srwTokenLock );
        if ( NULL != m_hToken && dwSessionId == m_dwSessionId )
        {
            CloseHandle( m_hToken );
            m_hToken = NULL;
            bMatch = TRUE;
        }
        ReleaseSRWLockExclusive( &srwTokenLock );
        return bMatch;
    }
    VOID ReleaseToken()
    {
        AcquireSRWLockExclusive( &srwTokenLock );
        if ( NULL != m_hToken)
        {
            CloseHandle( m_hToken );
            m_hToken = NULL;
            m_dwSessionId = (DWORD) -1;
        }
        ReleaseSRWLockExclusive( &srwTokenLock );
    }
protected
    static ULONG_PTR GetRpcOptions( IUnknown *pIUnk )
    {
        ULONG_PTR ulOptions = SERVER_LOCALITY_PROCESS_LOCAL;
        IRpcOptions* pRpcOptions;
        
        HRESULT hr = pIUnk->QueryInterface( __uuidof( IRpcOptions ), reinterpret_cast<LPVOID*>( &pRpcOptions ) );
        if ( S_OK == hr )
        {
            hr = pRpcOptions->Query( pIUnk, COMBND_SERVER_LOCALITY, &ulOptions );
            pRpcOptions->Release();
        }
        return ulOptions;
    }
protected
    DWORD   m_dwSessionId;
    HANDLE  m_hToken;
    SRWLOCK srwTokenLock;
};
#endif
#endif
