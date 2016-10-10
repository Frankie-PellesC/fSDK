/*+@@file@@----------------------------------------------------------------*//*!
 \file		Provider.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 12 00:50:38 2016
 \date		Modified on Mon Sep 12 00:50:38 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _PROVIDER_H__
#define _PROVIDER_H__
#if __POCC__ >= 500
#pragma once
#endif
#error C++ file!
#if 0
class POLARITY Provider : public CThreadBase
{
    friend class CWbemProviderGlue;
public
    Provider( LPCWSTR a_pszName, LPCWSTR a_pszNameSpace = NULL );
    ~Provider();
    static BOOL initFailed();
protected
    virtual HRESULT PutInstance(const CInstance& newInstance, long lFlags = 0L);
    virtual HRESULT DeleteInstance(const CInstance& newInstance, long lFlags = 0L);
    virtual HRESULT ExecMethod(const CInstance& cInstance, 
        const BSTR bstrMethodName, 
        CInstance *pInParams, 
        CInstance *pOutParams, 
        long lFlags = 0L);
    virtual HRESULT EnumerateInstances(MethodContext *pMethodContext, long lFlags = 0L);
    virtual HRESULT GetObject(CInstance *pInstance, long lFlags = 0L);
    virtual HRESULT GetObject(CInstance *pInstance, long lFlags, CFrameworkQuery &Query);
    virtual HRESULT ExecQuery(MethodContext *pMethodContext, 
        CFrameworkQuery& cQuery, 
        long lFlags = 0L);
    virtual void Flush(void);
    CInstance *CreateNewInstance(MethodContext *pMethodContext);
    HRESULT Commit(CInstance *pInstance, bool bCache = false);
    bool GetLocalInstancePath( const CInstance *pInstance, CHString& strPath );
    CHString MakeLocalPath( const CHString &strRelPath );
    const CHString &GetLocalComputerName() {return s_strComputerName;}
    const CHString &GetNamespace() {return m_strNameSpace;}
    bool SetCreationClassName(CInstance *pInstance);
    const CHString &GetProviderName() {return m_name;}
    enum FlagDefs
    {
        EnumerationFlags = (WBEM_FLAG_DIRECT_READ | WBEM_FLAG_SEND_STATUS),
        GetObjFlags = (WBEM_FLAG_SEND_STATUS | WBEM_FLAG_DIRECT_READ),
        MethodFlags = WBEM_FLAG_SEND_STATUS,
        DeletionFlags = WBEM_FLAG_SEND_STATUS,
        PutInstanceFlags = (WBEM_FLAG_CREATE_ONLY | WBEM_FLAG_CREATE_OR_UPDATE | WBEM_FLAG_UPDATE_ONLY | WBEM_FLAG_SEND_STATUS),
        QueryFlags = WBEM_FLAG_SEND_STATUS | WBEM_FLAG_DIRECT_READ
    };
    HRESULT ValidateFlags(long lFlags, FlagDefs lAcceptableFlags);
    virtual HRESULT ValidateEnumerationFlags(long lFlags);
    virtual HRESULT ValidateGetObjFlags(long lFlags);
    virtual HRESULT ValidateMethodFlags(long lFlags);
    virtual HRESULT ValidateQueryFlags(long lFlags);
    virtual HRESULT ValidateDeletionFlags(long lFlags);
    virtual HRESULT ValidatePutInstanceFlags(long lFlags);
private
    static BOOL initFailed_;
    IWbemServices       *m_pIMosProvider;
    CHString            m_name;
    CHString            m_strNameSpace;
    IWbemClassObject    *m_piClassObject;
    static CHString     s_strComputerName;
    BOOL ValidateIMOSPointer( void );
    HRESULT GetObject(  ParsedObjectPath *pParsedObjectPath, 
        MethodContext *pContext, long lFlags = 0L );
    HRESULT ExecuteQuery( MethodContext *pContext, 
        CFrameworkQuery &pQuery, 
        long lFlags = 0L);
    HRESULT CreateInstanceEnum( MethodContext *pContext, long lFlags = 0L );
    HRESULT PutInstance( IWbemClassObject __RPC_FAR *pInst,
        long lFlags,
        MethodContext *pContext );
    HRESULT DeleteInstance( ParsedObjectPath *pParsedObjectPath,
        long lFlags,
        MethodContext *pContext );
    HRESULT ExecMethod( ParsedObjectPath *pParsedObjectPath,
        BSTR bstrMethodName,
        long lFlags,
        CInstance *pInParams,
        CInstance *pOutParams,
        MethodContext *pContext );
    static void WINAPI InitComputerName( void );
    BOOL SetKeyFromParsedObjectPath( CInstance *pInstance, 
        ParsedObjectPath *pParsedObjectPath );
    IWbemClassObject *GetClassObjectInterface(MethodContext *pMethodContext);
};
#endif
#endif


