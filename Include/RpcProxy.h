/*+@@file@@----------------------------------------------------------------*//*!
 \file		RpcProxy.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 23:11:33 2016
 \date		Modified on Sat Sep  3 23:11:33 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __RPCPROXY_H_VERSION__
#define __RPCPROXY_H_VERSION__      ( 475 )
#endif
#if !defined(_KRPCENV_)
#ifndef __RPCPROXY_H__
#define __RPCPROXY_H__
#if __POCC__ >= 500
#pragma once
#endif
#define __midl_proxy
#ifdef __REQUIRED_RPCPROXY_H_VERSION__
    #if ( __RPCPROXY_H_VERSION__ < __REQUIRED_RPCPROXY_H_VERSION__ )
        #error incorrect <rpcproxy.h> version. Use the header that matches with the MIDL compiler.
    #endif
#endif
#if defined(_M_IA64) || defined(_M_AMD64)
#include <pshpack8.h>
#endif
#include <basetsd.h>
#ifndef INC_OLE2
#define INC_OLE2
#endif
#if defined(WIN32) || defined(_M_AMD64)
#ifndef GUID_DEFINED
#include <guiddef.h>
#endif
struct tagCInterfaceStubVtbl;
struct tagCInterfaceProxyVtbl;
typedef struct tagCInterfaceStubVtbl *  PCInterfaceStubVtblList;
typedef struct tagCInterfaceProxyVtbl *  PCInterfaceProxyVtblList;
typedef const char *                    PCInterfaceName;
typedef int __stdcall IIDLookupRtn( const IID * pIID, int * pIndex );
typedef IIDLookupRtn * PIIDLookup;
typedef struct tagProxyFileInfo
{
    const PCInterfaceProxyVtblList *pProxyVtblList;
    const PCInterfaceStubVtblList  *pStubVtblList;
    const PCInterfaceName *         pNamesArray;
    const IID **                    pDelegatedIIDs;
    const PIIDLookup                pIIDLookupRtn;
    unsigned short                  TableSize;
    unsigned short                  TableVersion;
    const IID **                    pAsyncIIDLookup;
    LONG_PTR                        Filler2;
    LONG_PTR                        Filler3;
    LONG_PTR                        Filler4;
}ProxyFileInfo;
typedef ProxyFileInfo ExtendedProxyFileInfo;
#include <rpc.h>
#include <rpcndr.h>
#include <string.h>
typedef struct tagCInterfaceProxyHeader
{
#ifdef USE_STUBLESS_PROXY
    const void *    pStublessProxyInfo;
#endif
    const IID *     piid;
} CInterfaceProxyHeader;
#define CINTERFACE_PROXY_VTABLE( n )	struct \
										{                                     \
										    CInterfaceProxyHeader header;     \
										    void *Vtbl[ n ];                  \
										}
typedef struct tagCInterfaceProxyVtbl
{
    CInterfaceProxyHeader header;
#if defined( _MSC_VER )
    void *Vtbl[];
#else
    void *Vtbl[1];
#endif
} CInterfaceProxyVtbl;
typedef void (__RPC_STUB * PRPC_STUB_FUNCTION) (IRpcStubBuffer * This, IRpcChannelBuffer * _pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD * pdwStubPhase);
typedef struct tagCInterfaceStubHeader
{
    const IID               *   piid;
    const MIDL_SERVER_INFO  *   pServerInfo;
    unsigned long               DispatchTableCount;
    const PRPC_STUB_FUNCTION *  pDispatchTable;
} CInterfaceStubHeader;
typedef struct tagCInterfaceStubVtbl
{
    CInterfaceStubHeader        header;
    IRpcStubBufferVtbl          Vtbl;
} CInterfaceStubVtbl;
typedef struct tagCStdStubBuffer
{
	const struct IRpcStubBufferVtbl *lpVtbl;
	long RefCount;
	struct IUnknown *pvServerObject;
	const struct ICallFactoryVtbl *pCallFactoryVtbl;
	const IID *pAsyncIID;
	struct IPSFactoryBuffer *pPSFactory;
	const struct IReleaseMarshalBuffersVtbl *pRMBVtbl;
} CStdStubBuffer;
typedef struct tagCStdPSFactoryBuffer
{
	const IPSFactoryBufferVtbl *lpVtbl;
	long RefCount;
	const ProxyFileInfo **pProxyFileList;
	long Filler1;
} CStdPSFactoryBuffer;
RPCRTAPI void RPC_ENTRY NdrProxyInitialize(void *This, PRPC_MESSAGE pRpcMsg, PMIDL_STUB_MESSAGE pStubMsg, PMIDL_STUB_DESC pStubDescriptor, unsigned int ProcNum);
RPCRTAPI void RPC_ENTRY NdrProxyGetBuffer(void *This, PMIDL_STUB_MESSAGE pStubMsg);
RPCRTAPI void RPC_ENTRY NdrProxySendReceive(void *This, MIDL_STUB_MESSAGE *pStubMsg);
RPCRTAPI void RPC_ENTRY NdrProxyFreeBuffer(void *This, MIDL_STUB_MESSAGE *pStubMsg);
RPCRTAPI HRESULT RPC_ENTRY NdrProxyErrorHandler(DWORD dwExceptionCode);
RPCRTAPI void RPC_ENTRY NdrStubInitialize(PRPC_MESSAGE pRpcMsg, PMIDL_STUB_MESSAGE pStubMsg, PMIDL_STUB_DESC pStubDescriptor, IRpcChannelBuffer *pRpcChannelBuffer);
RPCRTAPI void RPC_ENTRY NdrStubInitializePartial(PRPC_MESSAGE pRpcMsg, PMIDL_STUB_MESSAGE pStubMsg, PMIDL_STUB_DESC pStubDescriptor, IRpcChannelBuffer *pRpcChannelBuffer, unsigned long RequestedBufferSize);
void __RPC_STUB NdrStubForwardingFunction(IRpcStubBuffer *This, IRpcChannelBuffer *pChannel, PRPC_MESSAGE pmsg, DWORD *pdwStubPhase);
RPCRTAPI void RPC_ENTRY NdrStubGetBuffer(IRpcStubBuffer *This, IRpcChannelBuffer *pRpcChannelBuffer, PMIDL_STUB_MESSAGE pStubMsg);
RPCRTAPI HRESULT RPC_ENTRY NdrStubErrorHandler(DWORD dwExceptionCode);
HRESULT STDMETHODCALLTYPE CStdStubBuffer_QueryInterface(IRpcStubBuffer *This, REFIID riid, void **ppvObject);
ULONG STDMETHODCALLTYPE CStdStubBuffer_AddRef(IRpcStubBuffer *This);
ULONG STDMETHODCALLTYPE CStdStubBuffer_Release(IRpcStubBuffer *This);
ULONG STDMETHODCALLTYPE NdrCStdStubBuffer_Release(IRpcStubBuffer *This, IPSFactoryBuffer *pPSF);
HRESULT STDMETHODCALLTYPE CStdStubBuffer_Connect(IRpcStubBuffer *This, IUnknown *pUnkServer);
void STDMETHODCALLTYPE CStdStubBuffer_Disconnect(IRpcStubBuffer *This);
HRESULT STDMETHODCALLTYPE CStdStubBuffer_Invoke(IRpcStubBuffer *This, RPCOLEMESSAGE *pRpcMsg, IRpcChannelBuffer *pRpcChannelBuffer);
IRpcStubBuffer *STDMETHODCALLTYPE CStdStubBuffer_IsIIDSupported(IRpcStubBuffer *This, REFIID riid);
ULONG STDMETHODCALLTYPE CStdStubBuffer_CountRefs(IRpcStubBuffer *This);
HRESULT STDMETHODCALLTYPE CStdStubBuffer_DebugServerQueryInterface(IRpcStubBuffer *This, void **ppv);
void STDMETHODCALLTYPE CStdStubBuffer_DebugServerRelease(IRpcStubBuffer *This, void *pv);
void ObjectStublessClient3(void);
void ObjectStublessClient4(void);
void ObjectStublessClient5(void);
void ObjectStublessClient6(void);
void ObjectStublessClient7(void);
void ObjectStublessClient8(void);
void ObjectStublessClient9(void);
void ObjectStublessClient10(void);
void ObjectStublessClient11(void);
void ObjectStublessClient12(void);
void ObjectStublessClient13(void);
void ObjectStublessClient14(void);
void ObjectStublessClient15(void);
void ObjectStublessClient16(void);
void ObjectStublessClient17(void);
void ObjectStublessClient18(void);
void ObjectStublessClient19(void);
void ObjectStublessClient20(void);
void ObjectStublessClient21(void);
void ObjectStublessClient22(void);
void ObjectStublessClient23(void);
void ObjectStublessClient24(void);
void ObjectStublessClient25(void);
void ObjectStublessClient26(void);
void ObjectStublessClient27(void);
void ObjectStublessClient28(void);
void ObjectStublessClient29(void);
void ObjectStublessClient30(void);
void ObjectStublessClient31(void);
void ObjectStublessClient32(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction3(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction4(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction5(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction6(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction7(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction8(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction9(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction10(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction11(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction12(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction13(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction14(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction15(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction16(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction17(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction18(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction19(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction20(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction21(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction22(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction23(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction24(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction25(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction26(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction27(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction28(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction29(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction30(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction31(void);
void STDMETHODCALLTYPE NdrProxyForwardingFunction32(void);
#define CStdStubBuffer_METHODS \
    CStdStubBuffer_QueryInterface,\
    CStdStubBuffer_AddRef, \
    CStdStubBuffer_Release, \
    CStdStubBuffer_Connect, \
    CStdStubBuffer_Disconnect, \
    CStdStubBuffer_Invoke, \
    CStdStubBuffer_IsIIDSupported, \
    CStdStubBuffer_CountRefs, \
    CStdStubBuffer_DebugServerQueryInterface, \
    CStdStubBuffer_DebugServerRelease
#define CStdAsyncStubBuffer_METHODS              0,0,0,0,0,0,0,0,0,0
#define CStdAsyncStubBuffer_DELEGATING_METHODS   0,0,0,0,0,0,0,0,0,0
#define IID_GENERIC_CHECK_IID(name,pIID,index) memcmp( pIID, name##_ProxyVtblList[ index ]->header.piid, 16 )
#define IID_BS_LOOKUP_SETUP     int result, low=-1;
#define IID_BS_LOOKUP_INITIAL_TEST(name, sz, split)   \
    result = name##_CHECK_IID( split );               \
    if ( result > 0 )                                 \
        { low = sz - split; }                         \
    else if ( !result )                               \
        { low = split; goto found_label; }
#define IID_BS_LOOKUP_NEXT_TEST(name, split )      \
        result = name##_CHECK_IID( low + split );  \
        if ( result >= 0 )                         \
        { low = low + split; if ( !result ) goto found_label; }
#define IID_BS_LOOKUP_RETURN_RESULT(name, sz, index )  \
    low = low + 1;                                     \
    if (low >= sz)                                     \
        goto not_found_label;                          \
    result = name##_CHECK_IID( low );                  \
    if (result)                                        \
        goto not_found_label;                          \
    found_label: (index) = low; return 1;              \
    not_found_label: return 0;
RPCRTAPI HRESULT RPC_ENTRY NdrDllGetClassObject(REFCLSID rclsid, REFIID riid, void **ppv, const ProxyFileInfo **pProxyFileList, const CLSID *pclsid, CStdPSFactoryBuffer *pPSFactoryBuffer);
RPCRTAPI HRESULT RPC_ENTRY NdrDllCanUnloadNow(CStdPSFactoryBuffer *pPSFactoryBuffer);
#ifndef ENTRY_PREFIX
#ifndef DllMain
#define DISABLE_THREAD_LIBRARY_CALLS(x) DisableThreadLibraryCalls(x)
#endif
#define ENTRY_PREFIX
#define DLLREGISTERSERVER_ENTRY DllRegisterServer
#define DLLUNREGISTERSERVER_ENTRY DllUnregisterServer
#define DLLMAIN_ENTRY DllMain
#define DLLGETCLASSOBJECT_ENTRY DllGetClassObject
#define DLLCANUNLOADNOW_ENTRY DllCanUnloadNow
#else
#define __rpc_macro_expand2(a, b) a##b
#define __rpc_macro_expand(a, b) __rpc_macro_expand2(a,b)
#define DLLREGISTERSERVER_ENTRY __rpc_macro_expand(ENTRY_PREFIX, DllRegisterServer)
#define DLLUNREGISTERSERVER_ENTRY __rpc_macro_expand(ENTRY_PREFIX, DllUnregisterServer)
#define DLLMAIN_ENTRY __rpc_macro_expand(ENTRY_PREFIX, DllMain)
#define DLLGETCLASSOBJECT_ENTRY __rpc_macro_expand(ENTRY_PREFIX, DllGetClassObject)
#define DLLCANUNLOADNOW_ENTRY __rpc_macro_expand(ENTRY_PREFIX, DllCanUnloadNow)
#endif
#ifndef DISABLE_THREAD_LIBRARY_CALLS
#define DISABLE_THREAD_LIBRARY_CALLS(x)
#endif
RPCRTAPI HRESULT RPC_ENTRY NdrDllRegisterProxy(HMODULE hDll, const ProxyFileInfo **pProxyFileList, const CLSID *pclsid);
RPCRTAPI HRESULT RPC_ENTRY NdrDllUnregisterProxy(HMODULE hDll, const ProxyFileInfo **pProxyFileList, const CLSID *pclsid);
#define REGISTER_PROXY_DLL_ROUTINES(pProxyFileList, pClsID) \
    \
    HINSTANCE hProxyDll = 0; \
    \ \
    BOOL WINAPI DLLMAIN_ENTRY( \
        HINSTANCE  hinstDLL, \
        DWORD  fdwReason, \
        LPVOID  lpvReserved) \
    { \
        UNREFERENCED_PARAMETER(lpvReserved); \
        if(fdwReason == DLL_PROCESS_ATTACH) \
            { \
            hProxyDll = hinstDLL; \
            DISABLE_THREAD_LIBRARY_CALLS(hinstDLL); \
            } \
        return TRUE; \
    } \
    \ \
    HRESULT STDAPICALLTYPE DLLREGISTERSERVER_ENTRY() \
    { \
        return NdrDllRegisterProxy(hProxyDll, pProxyFileList, pClsID); \
    }  \
    \ \
    HRESULT STDAPICALLTYPE DLLUNREGISTERSERVER_ENTRY() \
    { \
        return NdrDllUnregisterProxy(hProxyDll, pProxyFileList, pClsID); \
    }
#define STUB_FORWARDING_FUNCTION        NdrStubForwardingFunction
ULONG STDMETHODCALLTYPE
CStdStubBuffer2_Release(IRpcStubBuffer *This);
ULONG STDMETHODCALLTYPE
NdrCStdStubBuffer2_Release(IRpcStubBuffer *This,IPSFactoryBuffer * pPSF);
#define CStdStubBuffer_DELEGATING_METHODS 0, 0, CStdStubBuffer2_Release, 0, 0, 0, 0, 0, 0, 0
#ifdef PROXY_CLSID
#define CLSID_PSFACTORYBUFFER extern CLSID PROXY_CLSID;
#else
#ifdef PROXY_CLSID_IS
#define CLSID_PSFACTORYBUFFER const CLSID CLSID_PSFactoryBuffer = PROXY_CLSID_IS;
#define PROXY_CLSID     CLSID_PSFactoryBuffer
#else
#define CLSID_PSFACTORYBUFFER
#endif
#endif
#ifndef PROXY_CLSID
#define GET_DLL_CLSID	( aProxyFileList[0]->pStubVtblList[0] != 0 ? aProxyFileList[0]->pStubVtblList[0]->header.piid : 0)
#else
#define GET_DLL_CLSID   &PROXY_CLSID
#endif
#define EXTERN_PROXY_FILE(name)					const ProxyFileInfo name##_ProxyFileInfo;
#define PROXYFILE_LIST_START					const ProxyFileInfo  *  aProxyFileList[]    = {
#define REFERENCE_PROXY_FILE(name)				& name##_ProxyFileInfo
#define PROXYFILE_LIST_END						0 };
#define DLLDATA_GETPROXYDLLINFO(pPFList,pClsid)	void RPC_ENTRY GetProxyDllInfo( const ProxyFileInfo*** pInfo, const CLSID ** pId )  \
										        {   \
										        *pInfo  = pPFList;  \
										        *pId    = pClsid;   \
										        };
#define DLLGETCLASSOBJECTROUTINE(pPFlist, pClsid,pFactory)	HRESULT STDAPICALLTYPE DLLGETCLASSOBJECT_ENTRY ( \
															     REFCLSID rclsid, \
															     REFIID riid, \
															     void ** ppv ) \
															        { \
															        return  \
															            NdrDllGetClassObject(rclsid,riid,ppv,pPFlist,pClsid,pFactory ); \
															        }
#define DLLCANUNLOADNOW(pFactory)	HRESULT STDAPICALLTYPE DLLCANUNLOADNOW_ENTRY()    \
								    {   \
								    return NdrDllCanUnloadNow( pFactory );    \
								    }
#define DLLDUMMYPURECALL			void __cdecl _purecall(void)    \
							        {   \
							        }
#define CSTDSTUBBUFFERRELEASE(pFactory)	ULONG STDMETHODCALLTYPE CStdStubBuffer_Release(IRpcStubBuffer *This) \
									    {   \
									    return NdrCStdStubBuffer_Release(This,(IPSFactoryBuffer *)pFactory);   \
									    }   \
#ifdef PROXY_DELEGATION
#define CSTDSTUBBUFFER2RELEASE(pFactory)	LONG STDMETHODCALLTYPE CStdStubBuffer2_Release(IRpcStubBuffer *This) \
										    {   \
										    return NdrCStdStubBuffer2_Release(This,(IPSFactoryBuffer *)pFactory);   \
										    }
#else
#define CSTDSTUBBUFFER2RELEASE(pFactory)
#endif
#ifdef REGISTER_PROXY_DLL
#define DLLREGISTRY_ROUTINES(pProxyFileList,pClsID ) REGISTER_PROXY_DLL_ROUTINES(pProxyFileList,pClsID )
#else
#define DLLREGISTRY_ROUTINES(pProxyFileList,pClsID )
#endif
#define DLLDATA_ROUTINES(pProxyFileList,pClsID )    \
												    CLSID_PSFACTORYBUFFER \
												    CStdPSFactoryBuffer       gPFactory = {0,0,0,0};  \
												    DLLDATA_GETPROXYDLLINFO(pProxyFileList,pClsID) \
												    DLLGETCLASSOBJECTROUTINE(pProxyFileList,pClsID,&gPFactory)    \
												    DLLCANUNLOADNOW(&gPFactory)   \
												    CSTDSTUBBUFFERRELEASE(&gPFactory)   \
												    CSTDSTUBBUFFER2RELEASE(&gPFactory) \
												    DLLDUMMYPURECALL    \
												    DLLREGISTRY_ROUTINES(pProxyFileList, pClsID) \
#define DLLDATA_STANDARD_ROUTINES    DLLDATA_ROUTINES( (const ProxyFileInfo**) pProxyFileList, &CLSID_PSFactoryBuffer )  \
#endif
#if defined(_M_IA64) || defined(_M_AMD64)
#include <poppack.h>
#endif
#endif
#endif
