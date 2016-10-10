/*+@@file@@----------------------------------------------------------------*//*!
 \file		WbemGlue.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 22:27:32 2016
 \date		Modified on Sun Jul 10 22:27:32 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WbemGlue_H_Included
#define _WbemGlue_H_Included
#if __POCC__ >= 500
#pragma once
#endif
#pragma message ("C++ Only!!")
#if 0
#undef PURE
#define PURE {return (ULONG)E_NOTIMPL;}
typedef LPVOID *PPVOID;
#include <wbemidl.h>
#include <map>
#include <set>
#include <provider.h>
#define DEFAULT_NAMESPACE       L"Root\\CimV2"
typedef std::map<CHString, LPVOID> STRING2LPVOID;
typedef std::map<LPCVOID, PLONG> PTR2PLONG;
typedef std::set<LPVOID> PROVIDERPTRS;
class CWbemGlueFactory;
class CWbemGlueImpersonation;
class POLARITY CWbemProviderGlue : public IWbemServices, public IWbemProviderInit
{
	friend class CWbemGlueImpersonation;
	public
    static HRESULT WINAPI GetAllInstances( LPCWSTR pszClassName, 
                                           TRefPointerCollection<CInstance> *pList, 
                                           LPCWSTR pszNamespace, 
                                           MethodContext *pMethodContext );
    static HRESULT WINAPI GetAllInstancesAsynch( LPCWSTR pszClassName, 
                                                 Provider *pRequester, 
                                                 LPProviderInstanceCallback pCallback, 
                                                 LPCWSTR pszNamespace, 
                                                 MethodContext *pMethodContext, 
                                                 void *pUserData );
    static HRESULT WINAPI GetAllDerivedInstancesAsynch( LPCWSTR pszBaseClassName, 
                                                        Provider *pRequester, 
                                                        LPProviderInstanceCallback pCallback, 
                                                        LPCWSTR pszNamespace, 
                                                        MethodContext *pMethodContext, 
                                                        void *pUserData );
    static HRESULT WINAPI GetAllDerivedInstances( LPCWSTR pszBaseClassName, 
                                                  TRefPointerCollection<CInstance> *pList, 
                                                  MethodContext *pMethodContext, 
#ifdef FRAMEWORK_ALLOW_DEPRECATED
                                                  LPCWSTR pszNamespace = NULL);
#else
                                                  LPCWSTR pszNamespace);
#endif
    static HRESULT WINAPI GetInstanceByPath( LPCWSTR pszObjectPath, 
                                             CInstance **ppInstance, 
#ifdef FRAMEWORK_ALLOW_DEPRECATED
                                             MethodContext *pMethodContext = NULL );
#else
                                             MethodContext *pMethodContext);
#endif
    static HRESULT WINAPI GetInstanceKeysByPath( LPCWSTR pszInstancePath,
                                                 CInstance **ppInstance,
                                                 MethodContext *pMethodContext);
    static HRESULT WINAPI GetInstancePropertiesByPath( LPCWSTR pszInstancePath,
                                                 CInstance **ppInstance,
                                                 MethodContext *pMethodContext,
                                                 CHStringArray &csaProperties);
    static HRESULT WINAPI GetInstancesByQuery( LPCWSTR query, 
                                               TRefPointerCollection<CInstance> *pList, 
                                               MethodContext *pMethodContext,  
#ifdef FRAMEWORK_ALLOW_DEPRECATED
                                               LPCWSTR pszNamespace = NULL);
#else
                                               LPCWSTR pszNamespace);
#endif
    static HRESULT WINAPI GetInstancesByQueryAsynch( LPCWSTR query, 
                                                     Provider *pRequester, 
                                                     LPProviderInstanceCallback pCallback, 
                                                     LPCWSTR pszNamespace, 
                                                     MethodContext *pMethodContext, 
                                                     void *pUserData );
#ifdef FRAMEWORK_ALLOW_DEPRECATED
    static HRESULT WINAPI GetEmptyInstance( LPCWSTR pszClassName, 
                                            CInstance **ppInstance, 
                                            LPCWSTR pszNamespace = NULL);
#endif
    static HRESULT WINAPI GetEmptyInstance( MethodContext *pMethodContext, 
                                            LPCWSTR pszClassName, 
                                            CInstance **ppInstance, 
#ifdef FRAMEWORK_ALLOW_DEPRECATED
                                            LPCWSTR pszNamespace = NULL);
#else
                                            LPCWSTR pszNamespace);
#endif
#ifdef FRAMEWORK_ALLOW_DEPRECATED
    static HRESULT WINAPI FillInstance( CInstance *pInstance, 
                                        LPCWSTR pszNamespace = NULL );
    static HRESULT WINAPI FillInstance( MethodContext *pMethodContext, 
                                        CInstance *pInstance );
#endif
    static bool  WINAPI IsDerivedFrom( LPCWSTR pszBaseClassName, 
                                       LPCWSTR pszDerivedClassName, 
                                       MethodContext *pMethodContext, 
#ifdef FRAMEWORK_ALLOW_DEPRECATED
                                       LPCWSTR pszNamespace = NULL );
#else
                                       LPCWSTR pszNamespace);
#endif
#ifdef FRAMEWORK_ALLOW_DEPRECATED
    static BOOL WINAPI FrameworkLoginDLL(LPCWSTR name);
    static BOOL WINAPI FrameworkLogoffDLL(LPCWSTR name);
#endif
    static BOOL WINAPI FrameworkLoginDLL(LPCWSTR name, PLONG plRefCount);
    static BOOL WINAPI FrameworkLogoffDLL(LPCWSTR name, PLONG plRefCount);
    static bool WINAPI SetStatusObject(MethodContext *pContext, LPCWSTR pNamespace, 
                                        LPCWSTR pDescription, HRESULT hr, 
                                        const SAFEARRAY *pPrivilegesNotHeld = NULL,
                                        const SAFEARRAY *pPrivilegesRequired = NULL);
#ifndef NO_BASEINTERFACE_FUNCS
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR *ppvObj) ;
    STDMETHOD_(ULONG, AddRef)(THIS) ;
    STDMETHOD_(ULONG, Release)(THIS) ;
#endif
    
   virtual HRESULT STDMETHODCALLTYPE Initialize( 
           LPWSTR pszUser, LONG lFlags,
            LPWSTR pszNamespace,
            LPWSTR pszLocale,
            IWbemServices __RPC_FAR *pNamespace,
            IWbemContext __RPC_FAR *pCtx,
            IWbemProviderInitSink __RPC_FAR *pInitSink
    );
    STDMETHOD(CreateInstanceEnumAsync)(THIS_ const BSTR Class, long lFlags, IWbemContext __RPC_FAR *pCtx, IWbemObjectSink __RPC_FAR *pResponseHandler
    );
    
    STDMETHOD(GetObjectAsync)( THIS_
            const BSTR ObjectPath, 
            long lFlags, 
            IWbemContext __RPC_FAR *pCtx, 
            IWbemObjectSink __RPC_FAR *pResponseHandler
    );
    
    STDMETHOD(ExecQueryAsync)(THIS_ const BSTR QueryLanguage, const BSTR Query, long lFlags, IWbemContext __RPC_FAR *pCtx, IWbemObjectSink __RPC_FAR *pResponseHandler
    );
    
    STDMETHOD(PutInstanceAsync)( THIS_ IWbemClassObject __RPC_FAR *pInst, long lFlags, IWbemContext __RPC_FAR *pCtx, IWbemObjectSink __RPC_FAR *pResponseHandler
    );
    
    STDMETHOD(DeleteInstanceAsync)( const BSTR ObjectPath, long lFlags, IWbemContext __RPC_FAR *pCtx, IWbemObjectSink __RPC_FAR *pResponseHandler
    );
    STDMETHOD(ExecMethodAsync)( const BSTR, 
                                const BSTR, 
                                long, 
                                IWbemContext*, 
                                IWbemClassObject*,
                                IWbemObjectSink*
    );
    STDMETHOD(OpenNamespace)(THIS_
            const BSTR Namespace, 
            long lFlags,  
            IWbemContext __RPC_FAR *pCtx,
            IWbemServices __RPC_FAR *__RPC_FAR *ppWorkingNamespace, 
            IWbemCallResult __RPC_FAR *__RPC_FAR *ppResult
    )
        { return E_NOTIMPL; }
    
    STDMETHOD(PutClass)(IWbemClassObject __RPC_FAR *pObject, 
                        long lFlags, 
                        IWbemContext __RPC_FAR *pCtx, 
                        IWbemCallResult __RPC_FAR *__RPC_FAR *ppCallResult
    )
         {return E_NOTIMPL;}
    STDMETHOD(PutClassAsync)( IWbemClassObject __RPC_FAR *pObject, long lFlags, IWbemContext __RPC_FAR *pCtx, IWbemObjectSink __RPC_FAR *pResponseHandler
    )
         {return E_NOTIMPL;}
    STDMETHOD(DeleteClass)( const BSTR Class, long lFlags, IWbemContext __RPC_FAR *pCtx, IWbemCallResult __RPC_FAR *__RPC_FAR *ppCallResult
    )
         {return E_NOTIMPL;}
    STDMETHOD(DeleteClassAsync)( const BSTR Class, long lFlags, IWbemContext __RPC_FAR *pCtx, IWbemObjectSink __RPC_FAR *pResponseHandler
    )
         {return E_NOTIMPL;}
    STDMETHOD(CreateClassEnum)( const BSTR Superclass, long lFlags, IWbemContext __RPC_FAR *pCtx, IEnumWbemClassObject __RPC_FAR *__RPC_FAR *ppEnum
    )
         {return E_NOTIMPL;}
    STDMETHOD(CreateClassEnumAsync)( const BSTR Superclass, long lFlags, IWbemContext __RPC_FAR *pCtx, IWbemObjectSink __RPC_FAR *pResponseHandler
    )
         {return E_NOTIMPL;}
    STDMETHOD(PutInstance)( IWbemClassObject __RPC_FAR *pInst, long lFlags, IWbemContext __RPC_FAR *pCtx, IWbemCallResult __RPC_FAR *__RPC_FAR *ppCallResult
    )
         {return E_NOTIMPL;}
    STDMETHOD(DeleteInstance)( const BSTR ObjectPath, long lFlags, IWbemContext __RPC_FAR *pCtx, IWbemCallResult __RPC_FAR *__RPC_FAR *ppCallResult
    )
         {return E_NOTIMPL;}
    STDMETHOD(CancelAsyncRequest)(THIS_ long lAsyncRequestHandle
    )
         {return E_NOTIMPL;}
    STDMETHOD(CancelAsyncCall)(IWbemObjectSink __RPC_FAR *pSink
    )
         {return E_NOTIMPL;}
    STDMETHOD(CreateInstanceEnum)( const BSTR Class, long lFlags, IWbemContext __RPC_FAR *pCtx, IEnumWbemClassObject __RPC_FAR *__RPC_FAR *ppEnum
    )
         {return E_NOTIMPL;}
  
    STDMETHOD(ExecQuery)( const BSTR QueryLanguage, const BSTR Query, long lFlags, IWbemContext __RPC_FAR *pCtx, IEnumWbemClassObject __RPC_FAR *__RPC_FAR *ppEnum
    )
         {return E_NOTIMPL;}
    STDMETHOD(QueryObjectSink)(long lFlags, 
                               IWbemObjectSink __RPC_FAR *__RPC_FAR *ppResponseHandler
    )
         {return E_NOTIMPL;}
    STDMETHOD(GetObject)( const BSTR ObjectPath, 
                          long lFlags, 
                          IWbemContext __RPC_FAR *pCtx, 
                          IWbemClassObject __RPC_FAR *__RPC_FAR *ppObject, 
                          IWbemCallResult __RPC_FAR *__RPC_FAR *ppCallResult
    )
         {return E_NOTIMPL;}
    STDMETHOD(ExecNotificationQuery)( const BSTR QueryLanguage, const BSTR Query, long lFlags, IWbemContext __RPC_FAR *pCtx, IEnumWbemClassObject __RPC_FAR *__RPC_FAR *ppEnum
    )
       {return E_NOTIMPL;}
        
        
    STDMETHOD(ExecNotificationQueryAsync)( const BSTR QueryLanguage, const BSTR Query, long lFlags, IWbemContext __RPC_FAR *pCtx, IWbemObjectSink __RPC_FAR *pResponseHandler
    )
       {return E_NOTIMPL;}
        
    STDMETHOD(ExecMethod)(const BSTR, 
                          const BSTR, 
                          long, 
                          IWbemContext*, 
                          IWbemClassObject*,
                          IWbemClassObject**, 
                          IWbemCallResult**
    )
       {return E_NOTIMPL;}
    CWbemProviderGlue();
    CWbemProviderGlue(PLONG pCount);
    ~CWbemProviderGlue();
    static IWbemServices *WINAPI GetNamespaceConnection( LPCWSTR NameSpace );
    static IWbemServices *WINAPI GetNamespaceConnection( LPCWSTR NameSpace, MethodContext *pMethodContext );
    static void WINAPI FrameworkLogin( LPCWSTR a_pszName, 
                                       Provider *a_pProvider, 
                                       LPCWSTR a_pszNameSpace );
    static void WINAPI FrameworkLogoff( LPCWSTR a_pszName, 
                                        LPCWSTR a_pszNameSpace );
    static void WINAPI IncrementObjectCount(void);
    static LONG WINAPI DecrementObjectCount(void);
    static DWORD WINAPI GetOSMajorVersion() { return s_dwMajorVersion; }
    static DWORD WINAPI GetPlatform() { return s_dwPlatform; }
    static LPCWSTR WINAPI GetCSDVersion() { return s_wstrCSDVersion; }
 private
    IWbemServices *WINAPI InternalGetNamespaceConnection( LPCWSTR NameSpace );
    static HRESULT WINAPI GetInstanceFromCIMOM( LPCWSTR pszObjectPath,
                                        LPCWSTR pszNameSpace,
                                        MethodContext *pMethodContext,
                                        CInstance **ppInstance );   
    void FlushAll(void);
    static Provider *WINAPI SearchMapForProvider( LPCWSTR a_pszProviderName, 
                                                  LPCWSTR a_pszNamespace );
    static Provider *WINAPI AddProviderToMap( LPCWSTR a_pszProviderName, 
                                              LPCWSTR a_strNamespace, 
                                              Provider *a_pProvider );
    static void WINAPI LockProviderMap( void );
    static void WINAPI UnlockProviderMap( void );
    static void WINAPI LockFactoryMap( void );
    static void WINAPI UnlockFactoryMap( void );
    static IWbemClassObject *WINAPI GetStatusObject( MethodContext *pContext, 
                                                     LPCWSTR pNamespace);
    static void WINAPI Init( void );
    static void WINAPI UnInit( void );
    static void WINAPI GetComputerName( CHString& strComputerName );
    
    static HRESULT WINAPI CheckImpersonationLevel();
    HRESULT PreProcessPutInstanceParms(IWbemClassObject __RPC_FAR *pInstIn, 
                                       IWbemClassObject __RPC_FAR **pInstOut, 
                                       IWbemContext __RPC_FAR *pCtx);    
    HRESULT NullOutUnsetProperties(IWbemClassObject __RPC_FAR *pInstIn, 
                                   IWbemClassObject __RPC_FAR **pInstOut, 
                                   const VARIANT& vValue);
    void AddFlushPtr(LPVOID pVoid);
    long    m_lRefCount; 
    CHString    m_strNamespace;
    IWbemServices *m_pServices;
    static long s_lObjects;
    PLONG m_pCount;
    static PROVIDERPTRS	m_FlushPtrs;
    static CCritSec		m_csFlushPtrs;
    static STRING2LPVOID    s_providersmap;
    static CCritSec s_csProviderMap;
    static CCritSec m_csStatusObject;
    static BOOL s_bInitted;
    static DWORD s_dwPlatform;
    static DWORD s_dwMajorVersion;
    static WCHAR s_wstrCSDVersion[_MAX_PATH];
    static IWbemClassObject *m_pStatusObject;
    static PTR2PLONG        s_factorymap;
    static CCritSec         s_csFactoryMap;
protected
    friend CWbemGlueFactory;
    static LONG IncrementMapCount(const CWbemGlueFactory *pGlue);
    static LONG IncrementMapCount(PLONG pCount);
    static LONG DecrementMapCount(const CWbemGlueFactory *pGlue);
    static LONG DecrementMapCount(PLONG pCount);
    static PLONG GetMapCountPtr(const CWbemGlueFactory *pGlue);
    static VOID AddToFactoryMap(const CWbemGlueFactory *pGlue, PLONG pdwRefCount);
    static VOID RemoveFromFactoryMap(const CWbemGlueFactory *pGlue);
};
inline void CWbemProviderGlue::LockProviderMap( void )
{
    EnterCriticalSection( &s_csProviderMap );
}
inline void CWbemProviderGlue::UnlockProviderMap( void )
{
    LeaveCriticalSection( &s_csProviderMap );
}
inline void CWbemProviderGlue::LockFactoryMap( void )
{
    EnterCriticalSection( &s_csFactoryMap );
}
inline void CWbemProviderGlue::UnlockFactoryMap( void )
{
    LeaveCriticalSection( &s_csFactoryMap );
}
class POLARITY CWbemGlueFactory : public IClassFactory
{
 protected
    long m_lRefCount;
 public
#ifdef FRAMEWORK_ALLOW_DEPRECATED
        CWbemGlueFactory(void);
        static CWbemGlueFactory * Create();
#endif
        CWbemGlueFactory(PLONG plRefCount);
        ~CWbemGlueFactory(void);
        static CWbemGlueFactory * Create(PLONG plRefCount);
        void Destroy();
        STDMETHODIMP         QueryInterface(REFIID, PPVOID);
        STDMETHODIMP_(ULONG) AddRef(void);
        STDMETHODIMP_(ULONG) Release(void);
        STDMETHODIMP         CreateInstance(LPUNKNOWN, REFIID, PPVOID);
        STDMETHODIMP         LockServer(BOOL);
    };
typedef CWbemGlueFactory *PCWbemGlueFactory;
#endif
#endif
