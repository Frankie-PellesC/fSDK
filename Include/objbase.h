/*+@@file@@----------------------------------------------------------------*//*!
 \file		objbase.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 12:05:13 2016
 \date		Modified on Mon Jun 27 12:05:13 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#include <rpc.h>
#include <rpcndr.h>
#if(NTDDI_VERSION >= NTDDI_VISTA && !defined(_WIN32_WINNT))
#define _WIN32_WINNT 0x0600
#endif
#if(NTDDI_VERSION >= NTDDI_WS03 && !defined(_WIN32_WINNT))
#define _WIN32_WINNT 0x0502
#endif
#if(NTDDI_VERSION >= NTDDI_WINXP && !defined(_WIN32_WINNT))
#define _WIN32_WINNT 0x0501
#endif
#if(NTDDI_VERSION >= NTDDI_WIN2K && !defined(_WIN32_WINNT))
#define _WIN32_WINNT 0x0500
#endif
#if !defined( _OBJBASE_H_ )
#define _OBJBASE_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <pshpack8.h>
#ifdef _OLE32_
#define WINOLEAPI        STDAPI
#define WINOLEAPI_(type) STDAPI_(type)
#else
#define WINOLEAPI        extern DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define WINOLEAPI_(type) extern DECLSPEC_IMPORT type STDAPICALLTYPE
#endif
#define interface               struct
#define STDMETHOD(method)       HRESULT (STDMETHODCALLTYPE * method)
#define STDMETHOD_(type,method) type (STDMETHODCALLTYPE * method)
#define STDMETHODV(method)       HRESULT (STDMETHODVCALLTYPE * method)
#define STDMETHODV_(type,method) type (STDMETHODVCALLTYPE * method)
#define IFACEMETHOD(method)         __override STDMETHOD(method)
#define IFACEMETHOD_(type,method)   __override STDMETHOD_(type,method)
#define IFACEMETHODV(method)        __override STDMETHODV(method)
#define IFACEMETHODV_(type,method)  __override STDMETHODV_(type,method)
#if !defined(BEGIN_INTERFACE)
#define BEGIN_INTERFACE
#define END_INTERFACE
#endif
#define PURE
#define THIS_		INTERFACE FAR* This,
#define THIS		INTERFACE FAR* This
#ifdef CONST_VTABLE
#undef CONST_VTBL
#define CONST_VTBL const
#define DECLARE_INTERFACE(iface)	typedef interface iface { \
																const struct iface##Vtbl FAR* lpVtbl; \
															} iface; \
															typedef const struct iface##Vtbl iface##Vtbl; \
															const struct iface##Vtbl
#else
#undef CONST_VTBL
#define CONST_VTBL
#define DECLARE_INTERFACE(iface)	typedef interface iface { \
																struct iface##Vtbl FAR* lpVtbl; \
															} iface; \
															typedef struct iface##Vtbl iface##Vtbl; \
															struct iface##Vtbl
#endif
#define DECLARE_INTERFACE_(iface, baseiface)    DECLARE_INTERFACE(iface)
#define DECLARE_INTERFACE_IID(iface, iid)               DECLARE_INTERFACE(iface)
#define DECLARE_INTERFACE_IID_(iface, baseiface, iid)   DECLARE_INTERFACE_(iface, baseiface)

#ifndef FARSTRUCT

#define FARSTRUCT

#endif
#ifndef HUGEP
#if defined(_WIN32)
#define HUGEP
#else
#define HUGEP __huge
#endif
#endif
#include <stdlib.h>
#define LISet32(li, v) ((li).HighPart = ((LONG) (v)) < 0 ? -1 : 0, (li).LowPart = (v))
#define ULISet32(li, v) ((li).HighPart = 0, (li).LowPart = (v))
#define CLSCTX_INPROC           (CLSCTX_INPROC_SERVER|CLSCTX_INPROC_HANDLER)
#if (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM)
#define CLSCTX_ALL              (CLSCTX_INPROC_SERVER | CLSCTX_INPROC_HANDLER | CLSCTX_LOCAL_SERVER | CLSCTX_REMOTE_SERVER)
#define CLSCTX_SERVER           (CLSCTX_INPROC_SERVER|CLSCTX_LOCAL_SERVER|CLSCTX_REMOTE_SERVER)
#else
#define CLSCTX_ALL              (CLSCTX_INPROC_SERVER | CLSCTX_INPROC_HANDLER| CLSCTX_LOCAL_SERVER )
#define CLSCTX_SERVER           (CLSCTX_INPROC_SERVER|CLSCTX_LOCAL_SERVER)
#endif
typedef enum tagREGCLS
{
	REGCLS_SINGLEUSE = 0,
	REGCLS_MULTIPLEUSE = 1,
	REGCLS_MULTI_SEPARATE = 2,
	REGCLS_SUSPENDED = 4,
	REGCLS_SURROGATE = 8
} REGCLS;
#define MARSHALINTERFACE_MIN 500
#define CWCSTORAGENAME 32
#define STGM_DIRECT             0x00000000L
#define STGM_TRANSACTED         0x00010000L
#define STGM_SIMPLE             0x08000000L
#define STGM_READ               0x00000000L
#define STGM_WRITE              0x00000001L
#define STGM_READWRITE          0x00000002L
#define STGM_SHARE_DENY_NONE    0x00000040L
#define STGM_SHARE_DENY_READ    0x00000030L
#define STGM_SHARE_DENY_WRITE   0x00000020L
#define STGM_SHARE_EXCLUSIVE    0x00000010L
#define STGM_PRIORITY           0x00040000L
#define STGM_DELETEONRELEASE    0x04000000L
#if (WINVER >= 400)
#define STGM_NOSCRATCH          0x00100000L
#endif
#define STGM_CREATE             0x00001000L
#define STGM_CONVERT            0x00020000L
#define STGM_FAILIFTHERE        0x00000000L
#define STGM_NOSNAPSHOT         0x00200000L
#if (_WIN32_WINNT >= 0x0500)
#define STGM_DIRECT_SWMR        0x00400000L
#endif
#define ASYNC_MODE_COMPATIBILITY    0x00000001L
#define ASYNC_MODE_DEFAULT          0x00000000L
#define STGTY_REPEAT                0x00000100L
#define STG_TOEND                   0xFFFFFFFFL
#define STG_LAYOUT_SEQUENTIAL       0x00000000L
#define STG_LAYOUT_INTERLEAVED      0x00000001L
typedef DWORD STGFMT;
#define STGFMT_STORAGE          0
#define STGFMT_NATIVE           1
#define STGFMT_FILE             3
#define STGFMT_ANY              4
#define STGFMT_DOCFILE          5
#define STGFMT_DOCUMENT         0
typedef interface IRpcStubBuffer IRpcStubBuffer;
typedef interface IRpcChannelBuffer IRpcChannelBuffer;
#include <wtypes.h>
#include <unknwn.h>
#include <objidl.h>
#ifdef _OLE32_
#ifdef _OLE32PRIV_
BOOL _fastcall wIsEqualGUID(REFGUID rguid1, REFGUID rguid2);
#define IsEqualGUID(rguid1, rguid2) wIsEqualGUID(rguid1, rguid2)
#else
#define __INLINE_ISEQUAL_GUID
#endif
#endif
#include <guiddef.h>
#ifndef INITGUID
#include <cguid.h>
#endif
typedef enum tagCOINIT
{
	COINIT_APARTMENTTHREADED = 0x2,
#if  (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM)
	COINIT_MULTITHREADED = 0x0,
	COINIT_DISABLE_OLE1DDE = 0x4,
	COINIT_SPEED_OVER_MEMORY = 0x8,
	#endif
} COINIT;
WINOLEAPI_(DWORD)CoBuildVersion(VOID);
WINOLEAPI CoInitialize(LPVOID pvReserved);
WINOLEAPI_(void) CoUninitialize(void);
WINOLEAPI CoGetMalloc(DWORD dwMemContext, LPMALLOC FAR *ppMalloc);
WINOLEAPI_(DWORD)CoGetCurrentProcess(void);
WINOLEAPI CoRegisterMallocSpy(LPMALLOCSPY pMallocSpy);
WINOLEAPI CoRevokeMallocSpy(void);
WINOLEAPI CoCreateStandardMalloc(DWORD memctx, IMalloc FAR *FAR *ppMalloc);
#if (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM)
WINOLEAPI CoInitializeEx(LPVOID pvReserved, DWORD dwCoInit);
WINOLEAPI CoGetCallerTID(LPDWORD lpdwTID);
WINOLEAPI CoGetCurrentLogicalThreadId(GUID *pguid);
#endif
#if (_WIN32_WINNT >= 0x0501)
WINOLEAPI CoRegisterInitializeSpy(LPINITIALIZESPY pSpy, ULARGE_INTEGER *puliCookie);
WINOLEAPI CoRevokeInitializeSpy(ULARGE_INTEGER uliCookie);
WINOLEAPI CoGetContextToken(ULONG_PTR *pToken);
typedef enum tagCOMSD
{
	SD_LAUNCHPERMISSIONS = 0,
	SD_ACCESSPERMISSIONS = 1,
	SD_LAUNCHRESTRICTIONS = 2,
	SD_ACCESSRESTRICTIONS = 3
} COMSD;
WINOLEAPI CoGetSystemSecurityPermissions(COMSD comSDType, PSECURITY_DESCRIPTOR *ppSD);
#endif
#if (_WIN32_WINNT >= _NT_TARGET_VERSION_WIN7)
WINOLEAPI CoGetApartmentType(APTTYPE *pAptType, APTTYPEQUALIFIER *pAptQualifier);
#endif
#if DBG == 1
WINOLEAPI_(ULONG)DebugCoGetRpcFault(void);
WINOLEAPI_(void) DebugCoSetRpcFault(ULONG);
#endif
#if (_WIN32_WINNT >= 0x0500)
typedef struct tagSOleTlsDataPublic
{
	void *pvReserved0[2];
	DWORD dwReserved0[3];
	void *pvReserved1[1];
	DWORD dwReserved1[3];
	void *pvReserved2[4];
	DWORD dwReserved2[1];
	void *pCurrentCtx;
} SOleTlsDataPublic;
#endif
WINOLEAPI CoGetObjectContext(REFIID riid, LPVOID FAR *ppv);
WINOLEAPI CoGetClassObject(REFCLSID rclsid, DWORD dwClsContext, LPVOID pvReserved, REFIID riid, LPVOID FAR *ppv);
WINOLEAPI CoRegisterClassObject(REFCLSID rclsid, LPUNKNOWN pUnk, DWORD dwClsContext, DWORD flags, LPDWORD lpdwRegister);
WINOLEAPI CoRevokeClassObject(DWORD dwRegister);
WINOLEAPI CoResumeClassObjects(void);
WINOLEAPI CoSuspendClassObjects(void);
WINOLEAPI_(ULONG)CoAddRefServerProcess(void);
WINOLEAPI_(ULONG)CoReleaseServerProcess(void);
WINOLEAPI CoGetPSClsid(REFIID riid, CLSID *pClsid);
WINOLEAPI CoRegisterPSClsid(REFIID riid, REFCLSID rclsid);
WINOLEAPI CoRegisterSurrogate(LPSURROGATE pSurrogate);
WINOLEAPI CoGetMarshalSizeMax(ULONG *pulSize, REFIID riid, LPUNKNOWN pUnk, DWORD dwDestContext, LPVOID pvDestContext, DWORD mshlflags);
WINOLEAPI CoMarshalInterface(LPSTREAM pStm, REFIID riid, LPUNKNOWN pUnk, DWORD dwDestContext, LPVOID pvDestContext, DWORD mshlflags);
WINOLEAPI CoUnmarshalInterface(LPSTREAM pStm, REFIID riid, LPVOID FAR *ppv);
WINOLEAPI CoMarshalHresult(LPSTREAM pstm, HRESULT hresult);
WINOLEAPI CoUnmarshalHresult(LPSTREAM pstm, HRESULT FAR *phresult);
WINOLEAPI CoReleaseMarshalData(LPSTREAM pStm);
WINOLEAPI CoDisconnectObject(LPUNKNOWN pUnk, DWORD dwReserved);
WINOLEAPI CoLockObjectExternal(LPUNKNOWN pUnk, BOOL fLock, BOOL fLastUnlockReleases);
WINOLEAPI CoGetStandardMarshal(REFIID riid, LPUNKNOWN pUnk, DWORD dwDestContext, LPVOID pvDestContext, DWORD mshlflags, LPMARSHAL FAR *ppMarshal);
WINOLEAPI CoGetStdMarshalEx(LPUNKNOWN pUnkOuter, DWORD smexflags, LPUNKNOWN FAR *ppUnkInner);
typedef enum tagSTDMSHLFLAGS
{
	SMEXF_SERVER = 0x01,
	SMEXF_HANDLER = 0x02
} STDMSHLFLAGS;
WINOLEAPI_(BOOL)CoIsHandlerConnected(LPUNKNOWN pUnk);
WINOLEAPI CoMarshalInterThreadInterfaceInStream(REFIID riid, LPUNKNOWN pUnk, LPSTREAM *ppStm);
WINOLEAPI CoGetInterfaceAndReleaseStream(LPSTREAM pStm, REFIID iid, LPVOID FAR *ppv);
WINOLEAPI CoCreateFreeThreadedMarshaler(LPUNKNOWN punkOuter, LPUNKNOWN *ppunkMarshal);
WINOLEAPI_(HINSTANCE)CoLoadLibrary(LPOLESTR lpszLibName, BOOL bAutoFree);
WINOLEAPI_(void) CoFreeLibrary(HINSTANCE hInst);
WINOLEAPI_(void) CoFreeAllLibraries(void);
WINOLEAPI_(void) CoFreeUnusedLibraries(void);
#if  (_WIN32_WINNT >= 0x0501)
WINOLEAPI_(void) CoFreeUnusedLibrariesEx(DWORD dwUnloadDelay, DWORD dwReserved);
#endif
#if (_WIN32_WINNT >= 0x0600)
WINOLEAPI CoDisconnectContext(DWORD dwTimeout);
#endif
#if (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM)
WINOLEAPI CoInitializeSecurity(PSECURITY_DESCRIPTOR pSecDesc, LONG cAuthSvc, SOLE_AUTHENTICATION_SERVICE *asAuthSvc, void *pReserved1, DWORD dwAuthnLevel, DWORD dwImpLevel, void *pAuthList, DWORD dwCapabilities, void *pReserved3);
WINOLEAPI CoGetCallContext(REFIID riid, void **ppInterface);
WINOLEAPI CoQueryProxyBlanket(IUnknown *pProxy, DWORD *pwAuthnSvc, DWORD *pAuthzSvc, OLECHAR **pServerPrincName, DWORD *pAuthnLevel, DWORD *pImpLevel, RPC_AUTH_IDENTITY_HANDLE *pAuthInfo, DWORD *pCapabilites);
WINOLEAPI CoSetProxyBlanket(IUnknown *pProxy, DWORD dwAuthnSvc, DWORD dwAuthzSvc, OLECHAR *pServerPrincName, DWORD dwAuthnLevel, DWORD dwImpLevel, RPC_AUTH_IDENTITY_HANDLE pAuthInfo, DWORD dwCapabilities);
WINOLEAPI CoCopyProxy(IUnknown *pProxy, IUnknown **ppCopy);
WINOLEAPI CoQueryClientBlanket(DWORD *pAuthnSvc, DWORD *pAuthzSvc, OLECHAR **pServerPrincName, DWORD *pAuthnLevel, DWORD *pImpLevel, RPC_AUTHZ_HANDLE *pPrivs, DWORD *pCapabilities);
WINOLEAPI CoImpersonateClient(void);
WINOLEAPI CoRevertToSelf(void);
WINOLEAPI CoQueryAuthenticationServices(DWORD *pcAuthSvc, SOLE_AUTHENTICATION_SERVICE **asAuthSvc);
WINOLEAPI CoSwitchCallContext(IUnknown *pNewObject, IUnknown **ppOldObject);
#define COM_RIGHTS_EXECUTE 1
#define COM_RIGHTS_EXECUTE_LOCAL 2
#define COM_RIGHTS_EXECUTE_REMOTE 4
#define COM_RIGHTS_ACTIVATE_LOCAL 8
#define COM_RIGHTS_ACTIVATE_REMOTE 16
#endif
WINOLEAPI CoCreateInstance(REFCLSID rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, REFIID riid, LPVOID FAR *ppv);
#if (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM)
WINOLEAPI CoGetInstanceFromFile(COSERVERINFO *pServerInfo, CLSID *pClsid, IUnknown *punkOuter, DWORD dwClsCtx, DWORD grfMode, OLECHAR *pwszName, DWORD dwCount, MULTI_QI *pResults);
WINOLEAPI CoGetInstanceFromIStorage(COSERVERINFO *pServerInfo, CLSID *pClsid, IUnknown *punkOuter, DWORD dwClsCtx, struct IStorage *pstg, DWORD dwCount, MULTI_QI *pResults);
WINOLEAPI CoCreateInstanceEx(REFCLSID Clsid, IUnknown *punkOuter, DWORD dwClsCtx, COSERVERINFO *pServerInfo, DWORD dwCount, MULTI_QI *pResults);
#endif
#if (_WIN32_WINNT >= 0x0500 ) || defined(_WIN32_DCOM)
WINOLEAPI CoGetCancelObject(DWORD dwThreadId, REFIID iid, void **ppUnk);
WINOLEAPI CoSetCancelObject(IUnknown *pUnk);
WINOLEAPI CoCancelCall(DWORD dwThreadId, ULONG ulTimeout);
WINOLEAPI CoTestCancel(void);
WINOLEAPI CoEnableCallCancellation(LPVOID pReserved);
WINOLEAPI CoDisableCallCancellation(LPVOID pReserved);
WINOLEAPI CoAllowSetForegroundWindow(IUnknown *pUnk, LPVOID lpvReserved);
WINOLEAPI DcomChannelSetHResult(LPVOID pvReserved, ULONG *pulReserved, HRESULT appsHR);
#endif
WINOLEAPI StringFromCLSID(REFCLSID rclsid, LPOLESTR FAR *lplpsz);
WINOLEAPI CLSIDFromString(LPCOLESTR lpsz, LPCLSID pclsid);
WINOLEAPI StringFromIID(REFIID rclsid, LPOLESTR FAR *lplpsz);
WINOLEAPI IIDFromString(LPCOLESTR lpsz, LPIID lpiid);
WINOLEAPI_(BOOL)CoIsOle1Class(REFCLSID rclsid);
WINOLEAPI ProgIDFromCLSID(REFCLSID clsid, LPOLESTR FAR *lplpszProgID);
WINOLEAPI CLSIDFromProgID(LPCOLESTR lpszProgID, LPCLSID lpclsid);
WINOLEAPI CLSIDFromProgIDEx(LPCOLESTR lpszProgID, LPCLSID lpclsid);
WINOLEAPI_(int) StringFromGUID2(REFGUID rguid, LPOLESTR lpsz, int cchMax);
WINOLEAPI CoCreateGuid(GUID FAR *pguid);
WINOLEAPI_(BOOL)CoFileTimeToDosDateTime(FILETIME FAR * lpFileTime, LPWORD lpDosDate, LPWORD lpDosTime);
WINOLEAPI_(BOOL)CoDosDateTimeToFileTime(WORD nDosDate, WORD nDosTime, FILETIME FAR * lpFileTime);
WINOLEAPI CoFileTimeNow(FILETIME FAR *lpFileTime);
WINOLEAPI CoRegisterMessageFilter(LPMESSAGEFILTER lpMessageFilter, LPMESSAGEFILTER FAR *lplpMessageFilter);
#if (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM)
WINOLEAPI CoRegisterChannelHook(REFGUID ExtensionUuid, IChannelHook *pChannelHook);
#endif
#if (_WIN32_WINNT >= 0x0400 ) || defined(_WIN32_DCOM)
WINOLEAPI CoWaitForMultipleHandles(DWORD dwFlags, DWORD dwTimeout, ULONG cHandles, LPHANDLE pHandles, LPDWORD lpdwindex);
typedef enum tagCOWAIT_FLAGS
{
	COWAIT_WAITALL = 1,
	COWAIT_ALERTABLE = 2,
	COWAIT_INPUTAVAILABLE = 4
} COWAIT_FLAGS;
#endif
#if  (_WIN32_WINNT >= 0x0501)
WINOLEAPI CoInvalidateRemoteMachineBindings(LPOLESTR pszMachineName);
#endif
WINOLEAPI CoGetTreatAsClass(REFCLSID clsidOld, LPCLSID pClsidNew);
WINOLEAPI CoTreatAsClass(REFCLSID clsidOld, REFCLSID clsidNew);
typedef HRESULT(STDAPICALLTYPE *LPFNGETCLASSOBJECT) (REFCLSID, REFIID, LPVOID *);
typedef HRESULT(STDAPICALLTYPE *LPFNCANUNLOADNOW) (void);
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID FAR *ppv);
STDAPI DllCanUnloadNow(void);
WINOLEAPI_(LPVOID)CoTaskMemAlloc(SIZE_T cb);
WINOLEAPI_(LPVOID)CoTaskMemRealloc(LPVOID pv, SIZE_T cb);
WINOLEAPI_(void) CoTaskMemFree(LPVOID pv);
WINOLEAPI CreateDataAdviseHolder(LPDATAADVISEHOLDER FAR *ppDAHolder);
WINOLEAPI CreateDataCache(LPUNKNOWN pUnkOuter, REFCLSID rclsid, REFIID iid, LPVOID FAR *ppv);
WINOLEAPI StgCreateDocfile(const WCHAR *pwcsName, DWORD grfMode, DWORD reserved, IStorage **ppstgOpen);
WINOLEAPI StgCreateDocfileOnILockBytes(ILockBytes *plkbyt, DWORD grfMode, DWORD reserved, IStorage **ppstgOpen);
WINOLEAPI StgOpenStorage(const WCHAR *pwcsName, IStorage *pstgPriority, DWORD grfMode, SNB snbExclude, DWORD reserved, IStorage **ppstgOpen);
WINOLEAPI StgOpenStorageOnILockBytes(ILockBytes *plkbyt, IStorage *pstgPriority, DWORD grfMode, SNB snbExclude, DWORD reserved, IStorage **ppstgOpen);
WINOLEAPI StgIsStorageFile(const WCHAR *pwcsName);
WINOLEAPI StgIsStorageILockBytes(ILockBytes *plkbyt);
WINOLEAPI StgSetTimes(const WCHAR *lpszName, const FILETIME *pctime, const FILETIME *patime, const FILETIME *pmtime);
WINOLEAPI StgOpenAsyncDocfileOnIFillLockBytes(IFillLockBytes *pflb, DWORD grfMode, DWORD asyncFlags, IStorage **ppstgOpen);
WINOLEAPI StgGetIFillLockBytesOnILockBytes(ILockBytes *pilb, IFillLockBytes **ppflb);
WINOLEAPI StgGetIFillLockBytesOnFile(OLECHAR const *pwcsName, IFillLockBytes **ppflb);
WINOLEAPI StgOpenLayoutDocfile(OLECHAR const *pwcsDfName, DWORD grfMode, DWORD reserved, IStorage **ppstgOpen);
#if _WIN32_WINNT == 0x500
#define STGOPTIONS_VERSION 1
#elif _WIN32_WINNT > 0x500
#define STGOPTIONS_VERSION 2
#else
#define STGOPTIONS_VERSION 0
#endif
typedef struct tagSTGOPTIONS
{
	USHORT usVersion;
	USHORT reserved;
	ULONG ulSectorSize;
#if STGOPTIONS_VERSION >= 2
	const WCHAR *pwcsTemplateFile;
#endif
} STGOPTIONS;
WINOLEAPI StgCreateStorageEx(const WCHAR *pwcsName, DWORD grfMode, DWORD stgfmt, DWORD grfAttrs, STGOPTIONS *pStgOptions, PSECURITY_DESCRIPTOR pSecurityDescriptor, REFIID riid, void **ppObjectOpen);
WINOLEAPI StgOpenStorageEx(const WCHAR *pwcsName, DWORD grfMode, DWORD stgfmt, DWORD grfAttrs, STGOPTIONS *pStgOptions, PSECURITY_DESCRIPTOR pSecurityDescriptor, REFIID riid, void **ppObjectOpen);
WINOLEAPI BindMoniker(LPMONIKER pmk, DWORD grfOpt, REFIID iidResult, LPVOID FAR *ppvResult);
WINOLEAPI CoInstall(IBindCtx *pbc, DWORD dwFlags, uCLSSPEC *pClassSpec, QUERYCONTEXT *pQuery, LPWSTR pszCodeBase);
WINOLEAPI CoGetObject(LPCWSTR pszName, BIND_OPTS *pBindOptions, REFIID riid, void **ppv);
WINOLEAPI MkParseDisplayName(LPBC pbc, LPCOLESTR szUserName, ULONG FAR *pchEaten, LPMONIKER FAR *ppmk);
WINOLEAPI MonikerRelativePathTo(LPMONIKER pmkSrc, LPMONIKER pmkDest, LPMONIKER FAR *ppmkRelPath, BOOL dwReserved);
WINOLEAPI MonikerCommonPrefixWith(LPMONIKER pmkThis, LPMONIKER pmkOther, LPMONIKER FAR *ppmkCommon);
WINOLEAPI CreateBindCtx(DWORD reserved, LPBC FAR *ppbc);
WINOLEAPI CreateGenericComposite(LPMONIKER pmkFirst, LPMONIKER pmkRest, LPMONIKER FAR *ppmkComposite);
WINOLEAPI GetClassFile(LPCOLESTR szFilename, CLSID FAR *pclsid);
WINOLEAPI CreateClassMoniker(REFCLSID rclsid, LPMONIKER FAR *ppmk);
WINOLEAPI CreateFileMoniker(LPCOLESTR lpszPathName, LPMONIKER FAR *ppmk);
WINOLEAPI CreateItemMoniker(LPCOLESTR lpszDelim, LPCOLESTR lpszItem, LPMONIKER FAR *ppmk);
WINOLEAPI CreateAntiMoniker(LPMONIKER FAR *ppmk);
WINOLEAPI CreatePointerMoniker(LPUNKNOWN punk, LPMONIKER FAR *ppmk);
WINOLEAPI CreateObjrefMoniker(LPUNKNOWN punk, LPMONIKER FAR *ppmk);
WINOLEAPI GetRunningObjectTable(DWORD reserved, LPRUNNINGOBJECTTABLE FAR *pprot);
#include <urlmon.h>
#include <propidl.h>
WINOLEAPI CreateStdProgressIndicator(HWND hwndParent, LPCOLESTR pszTitle, IBindStatusCallback *pIbscCaller, IBindStatusCallback **ppIbsc);
#ifndef RC_INVOKED
#include <poppack.h>
#endif
//Frankie
#define __uuidof(x) &IID_##x
#endif
