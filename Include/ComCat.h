/*+@@file@@----------------------------------------------------------------*//*!
 \file		ComCat.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 20:17:55 2016
 \date		Modified on Sun Jul  3 20:17:55 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __comcat_h__
#define __comcat_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IEnumGUID_FWD_DEFINED__
#define __IEnumGUID_FWD_DEFINED__
typedef interface IEnumGUID IEnumGUID;
#endif
#ifndef __IEnumCATEGORYINFO_FWD_DEFINED__
#define __IEnumCATEGORYINFO_FWD_DEFINED__
typedef interface IEnumCATEGORYINFO IEnumCATEGORYINFO;
#endif
#ifndef __ICatRegister_FWD_DEFINED__
#define __ICatRegister_FWD_DEFINED__
typedef interface ICatRegister ICatRegister;
#endif
#ifndef __ICatInformation_FWD_DEFINED__
#define __ICatInformation_FWD_DEFINED__
typedef interface ICatInformation ICatInformation;
#endif
#include <unknwn.h>
#pragma comment(lib,"uuid.lib")
extern const CLSID CLSID_StdComponentCategoriesMgr;
typedef GUID CATID;
typedef REFGUID REFCATID;
#define IID_IEnumCLSID              IID_IEnumGUID
#define IEnumCLSID                  IEnumGUID
#define LPENUMCLSID                 LPENUMGUID
#define CATID_NULL                   GUID_NULL
#define IsEqualCATID(rcatid1, rcatid2)       IsEqualGUID(rcatid1, rcatid2)
#define IID_IEnumCATID       IID_IEnumGUID
#define IEnumCATID           IEnumGUID
extern const CATID CATID_Insertable;
extern const CATID CATID_Control;
extern const CATID CATID_Programmable;
extern const CATID CATID_IsShortcut;
extern const CATID CATID_NeverShowExt;
extern const CATID CATID_DocObject;
extern const CATID CATID_Printable;
extern const CATID CATID_RequiresDataPathHost;
extern const CATID CATID_PersistsToMoniker;
extern const CATID CATID_PersistsToStorage;
extern const CATID CATID_PersistsToStreamInit;
extern const CATID CATID_PersistsToStream;
extern const CATID CATID_PersistsToMemory;
extern const CATID CATID_PersistsToFile;
extern const CATID CATID_PersistsToPropertyBag;
extern const CATID CATID_InternetAware;
extern const CATID CATID_DesignTimeUIActivatableControl;
#ifndef _LPENUMGUID_DEFINED
#define _LPENUMGUID_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0000_v0_0_s_ifspec;
#ifndef __IEnumGUID_INTERFACE_DEFINED__
#define __IEnumGUID_INTERFACE_DEFINED__
typedef IEnumGUID *LPENUMGUID;
extern const IID IID_IEnumGUID;
typedef struct IEnumGUIDVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumGUID * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumGUID * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumGUID * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumGUID * This, ULONG celt, GUID * rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumGUID * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumGUID * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumGUID * This, IEnumGUID ** ppenum);
	END_INTERFACE
}  IEnumGUIDVtbl;
interface IEnumGUID
{
	CONST_VTBL struct IEnumGUIDVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumGUID_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumGUID_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumGUID_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumGUID_Next(This,celt,rgelt,pceltFetched)( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumGUID_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumGUID_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumGUID_Clone(This,ppenum)( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumGUID_RemoteNext_Proxy(IEnumGUID *This, ULONG celt, GUID *rgelt, ULONG *pceltFetched);
void __RPC_STUB IEnumGUID_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
#ifndef _LPENUMCATEGORYINFO_DEFINED
#define _LPENUMCATEGORYINFO_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0001_v0_0_s_ifspec;
#ifndef __IEnumCATEGORYINFO_INTERFACE_DEFINED__
#define __IEnumCATEGORYINFO_INTERFACE_DEFINED__
typedef IEnumCATEGORYINFO *LPENUMCATEGORYINFO;
typedef struct tagCATEGORYINFO
{
	CATID catid;
	LCID lcid;
	OLECHAR szDescription[128];
} CATEGORYINFO;
typedef struct tagCATEGORYINFO *LPCATEGORYINFO;
extern const IID IID_IEnumCATEGORYINFO;
typedef struct IEnumCATEGORYINFOVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumCATEGORYINFO *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumCATEGORYINFO *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumCATEGORYINFO *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumCATEGORYINFO *This, ULONG celt, CATEGORYINFO *rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumCATEGORYINFO *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumCATEGORYINFO *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumCATEGORYINFO *This, IEnumCATEGORYINFO **ppenum);
	END_INTERFACE
}  IEnumCATEGORYINFOVtbl;
interface IEnumCATEGORYINFO
{
	CONST_VTBL struct IEnumCATEGORYINFOVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumCATEGORYINFO_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumCATEGORYINFO_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumCATEGORYINFO_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumCATEGORYINFO_Next(This,celt,rgelt,pceltFetched)( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumCATEGORYINFO_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumCATEGORYINFO_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumCATEGORYINFO_Clone(This,ppenum)( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#endif
#ifndef _LPCATREGISTER_DEFINED
#define _LPCATREGISTER_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0002_v0_0_s_ifspec;
#ifndef __ICatRegister_INTERFACE_DEFINED__
#define __ICatRegister_INTERFACE_DEFINED__
typedef ICatRegister *LPCATREGISTER;
extern const IID IID_ICatRegister;
typedef struct ICatRegisterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICatRegister *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICatRegister *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICatRegister *This);
	HRESULT(STDMETHODCALLTYPE *RegisterCategories) (ICatRegister *This, ULONG cCategories, CATEGORYINFO rgCategoryInfo[]);
	HRESULT(STDMETHODCALLTYPE *UnRegisterCategories) (ICatRegister *This, ULONG cCategories, CATID rgcatid[]);
	HRESULT(STDMETHODCALLTYPE *RegisterClassImplCategories) (ICatRegister *This, REFCLSID rclsid, ULONG cCategories, CATID rgcatid[]);
	HRESULT(STDMETHODCALLTYPE *UnRegisterClassImplCategories) (ICatRegister *This, REFCLSID rclsid, ULONG cCategories, CATID rgcatid[]);
	HRESULT(STDMETHODCALLTYPE *RegisterClassReqCategories) (ICatRegister *This, REFCLSID rclsid, ULONG cCategories, CATID rgcatid[]);
	HRESULT(STDMETHODCALLTYPE *UnRegisterClassReqCategories) (ICatRegister *This, REFCLSID rclsid, ULONG cCategories, CATID rgcatid[]);
	END_INTERFACE
}  ICatRegisterVtbl;
interface ICatRegister
{
	CONST_VTBL struct ICatRegisterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICatRegister_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICatRegister_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICatRegister_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICatRegister_RegisterCategories(This,cCategories,rgCategoryInfo)( (This)->lpVtbl -> RegisterCategories(This,cCategories,rgCategoryInfo) )
#define ICatRegister_UnRegisterCategories(This,cCategories,rgcatid)( (This)->lpVtbl -> UnRegisterCategories(This,cCategories,rgcatid) )
#define ICatRegister_RegisterClassImplCategories(This,rclsid,cCategories,rgcatid)( (This)->lpVtbl -> RegisterClassImplCategories(This,rclsid,cCategories,rgcatid) )
#define ICatRegister_UnRegisterClassImplCategories(This,rclsid,cCategories,rgcatid)( (This)->lpVtbl -> UnRegisterClassImplCategories(This,rclsid,cCategories,rgcatid) )
#define ICatRegister_RegisterClassReqCategories(This,rclsid,cCategories,rgcatid)( (This)->lpVtbl -> RegisterClassReqCategories(This,rclsid,cCategories,rgcatid) )
#define ICatRegister_UnRegisterClassReqCategories(This,rclsid,cCategories,rgcatid)( (This)->lpVtbl -> UnRegisterClassReqCategories(This,rclsid,cCategories,rgcatid) )
#endif
#endif
#endif
#ifndef _LPCATINFORMATION_DEFINED
#define _LPCATINFORMATION_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0003_v0_0_s_ifspec;
#ifndef __ICatInformation_INTERFACE_DEFINED__
#define __ICatInformation_INTERFACE_DEFINED__
typedef ICatInformation *LPCATINFORMATION;
extern const IID IID_ICatInformation;
typedef struct ICatInformationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICatInformation *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICatInformation *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICatInformation *This);
	HRESULT(STDMETHODCALLTYPE *EnumCategories) (ICatInformation *This, LCID lcid, IEnumCATEGORYINFO **ppenumCategoryInfo);
	HRESULT(STDMETHODCALLTYPE *GetCategoryDesc) (ICatInformation *This, REFCATID rcatid, LCID lcid, LPWSTR *pszDesc);
	HRESULT(STDMETHODCALLTYPE *EnumClassesOfCategories) (ICatInformation *This, ULONG cImplemented, const CATID rgcatidImpl[], ULONG cRequired, const CATID rgcatidReq[], IEnumGUID **ppenumClsid);
	HRESULT(STDMETHODCALLTYPE *IsClassOfCategories) (ICatInformation *This, REFCLSID rclsid, ULONG cImplemented, const CATID rgcatidImpl[], ULONG cRequired, const CATID rgcatidReq[]);
	HRESULT(STDMETHODCALLTYPE *EnumImplCategoriesOfClass) (ICatInformation *This, REFCLSID rclsid, IEnumGUID **ppenumCatid);
	HRESULT(STDMETHODCALLTYPE *EnumReqCategoriesOfClass) (ICatInformation *This, REFCLSID rclsid, IEnumGUID **ppenumCatid);
	END_INTERFACE
}  ICatInformationVtbl;
interface ICatInformation
{
	CONST_VTBL struct ICatInformationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICatInformation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICatInformation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICatInformation_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICatInformation_EnumCategories(This,lcid,ppenumCategoryInfo)( (This)->lpVtbl -> EnumCategories(This,lcid,ppenumCategoryInfo) )
#define ICatInformation_GetCategoryDesc(This,rcatid,lcid,pszDesc)( (This)->lpVtbl -> GetCategoryDesc(This,rcatid,lcid,pszDesc) )
#define ICatInformation_EnumClassesOfCategories(This,cImplemented,rgcatidImpl,cRequired,rgcatidReq,ppenumClsid)( (This)->lpVtbl -> EnumClassesOfCategories(This,cImplemented,rgcatidImpl,cRequired,rgcatidReq,ppenumClsid) )
#define ICatInformation_IsClassOfCategories(This,rclsid,cImplemented,rgcatidImpl,cRequired,rgcatidReq)( (This)->lpVtbl -> IsClassOfCategories(This,rclsid,cImplemented,rgcatidImpl,cRequired,rgcatidReq) )
#define ICatInformation_EnumImplCategoriesOfClass(This,rclsid,ppenumCatid)( (This)->lpVtbl -> EnumImplCategoriesOfClass(This,rclsid,ppenumCatid) )
#define ICatInformation_EnumReqCategoriesOfClass(This,rclsid,ppenumCatid)( (This)->lpVtbl -> EnumReqCategoriesOfClass(This,rclsid,ppenumCatid) )
#endif
HRESULT STDMETHODCALLTYPE ICatInformation_RemoteEnumClassesOfCategories_Proxy(ICatInformation *This, ULONG cImplemented, const CATID rgcatidImpl[], ULONG cRequired, const CATID rgcatidReq[], IEnumGUID **ppenumClsid);
void __RPC_STUB ICatInformation_RemoteEnumClassesOfCategories_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ICatInformation_RemoteIsClassOfCategories_Proxy(ICatInformation *This, REFCLSID rclsid, ULONG cImplemented, const CATID rgcatidImpl[], ULONG cRequired, const CATID rgcatidReq[]);
void __RPC_STUB ICatInformation_RemoteIsClassOfCategories_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comcat_0000_0004_v0_0_s_ifspec;
HRESULT STDMETHODCALLTYPE IEnumGUID_Next_Proxy(IEnumGUID *This, ULONG celt, GUID *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE IEnumGUID_Next_Stub(IEnumGUID *This, ULONG celt, GUID *rgelt, ULONG *pceltFetched);
HRESULT STDMETHODCALLTYPE ICatInformation_EnumClassesOfCategories_Proxy(ICatInformation *This, ULONG cImplemented, const CATID rgcatidImpl[], ULONG cRequired, const CATID rgcatidReq[], IEnumGUID **ppenumClsid);
HRESULT STDMETHODCALLTYPE ICatInformation_EnumClassesOfCategories_Stub(ICatInformation *This, ULONG cImplemented, const CATID rgcatidImpl[], ULONG cRequired, const CATID rgcatidReq[], IEnumGUID **ppenumClsid);
HRESULT STDMETHODCALLTYPE ICatInformation_IsClassOfCategories_Proxy(ICatInformation *This, REFCLSID rclsid, ULONG cImplemented, const CATID rgcatidImpl[], ULONG cRequired, const CATID rgcatidReq[]);
HRESULT STDMETHODCALLTYPE ICatInformation_IsClassOfCategories_Stub(ICatInformation *This, REFCLSID rclsid, ULONG cImplemented, const CATID rgcatidImpl[], ULONG cRequired, const CATID rgcatidReq[]);
#endif
