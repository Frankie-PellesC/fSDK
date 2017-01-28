/*+@@file@@----------------------------------------------------------------*//*!
 \file		ndhelper.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 23:34:50 2016
 \date		Modified on Sun Sep  4 23:34:50 2016
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
#ifndef __ndhelper_h__
#define __ndhelper_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __INetDiagHelper_FWD_DEFINED__
#define __INetDiagHelper_FWD_DEFINED__
typedef interface INetDiagHelper INetDiagHelper;
#endif
#ifndef __INetDiagHelperUtilFactory_FWD_DEFINED__
#define __INetDiagHelperUtilFactory_FWD_DEFINED__
typedef interface INetDiagHelperUtilFactory INetDiagHelperUtilFactory;
#endif
#ifndef __INetDiagHelperEx_FWD_DEFINED__
#define __INetDiagHelperEx_FWD_DEFINED__
typedef interface INetDiagHelperEx INetDiagHelperEx;
#endif
#ifndef __INetDiagHelperInfo_FWD_DEFINED__
#define __INetDiagHelperInfo_FWD_DEFINED__
typedef interface INetDiagHelperInfo INetDiagHelperInfo;
#endif
#ifndef __INetDiagExtensibleHelper_FWD_DEFINED__
#define __INetDiagExtensibleHelper_FWD_DEFINED__
typedef interface INetDiagExtensibleHelper INetDiagExtensibleHelper;
#endif
#include <oaidl.h>
#include <ndattrib.h>
typedef enum tagDIAGNOSIS_STATUS
{
	DS_NOT_IMPLEMENTED = 0,
	DS_CONFIRMED = (DS_NOT_IMPLEMENTED + 1),
	DS_REJECTED = (DS_CONFIRMED + 1),
	DS_INDETERMINATE = (DS_REJECTED + 1),
	DS_DEFERRED = (DS_INDETERMINATE + 1),
	DS_PASSTHROUGH = (DS_DEFERRED + 1)
} DIAGNOSIS_STATUS;
typedef enum tagREPAIR_STATUS
{
	RS_NOT_IMPLEMENTED = 0,
	RS_REPAIRED = (RS_NOT_IMPLEMENTED + 1),
	RS_UNREPAIRED = (RS_REPAIRED + 1),
	RS_DEFERRED = (RS_UNREPAIRED + 1),
	RS_USER_ACTION = (RS_DEFERRED + 1)
} REPAIR_STATUS;
typedef enum tagPROBLEM_TYPE
{
	PT_INVALID = 0,
	PT_LOW_HEALTH = 1,
	PT_LOWER_HEALTH = 2,
	PT_DOWN_STREAM_HEALTH = 4,
	PT_HIGH_UTILIZATION = 8,
	PT_HIGHER_UTILIZATION = 16,
	PT_UP_STREAM_UTILIZATION = 32
} PROBLEM_TYPE;
typedef struct tagHYPOTHESIS
{
	LPWSTR pwszClassName;
	LPWSTR pwszDescription;
	ULONG celt;
	PHELPER_ATTRIBUTE rgAttributes;
} HYPOTHESIS;
typedef struct tagHYPOTHESIS *PHYPOTHESIS;
typedef struct tagHelperAttributeInfo
{
	LPWSTR pwszName;
	ATTRIBUTE_TYPE type;
} HelperAttributeInfo;
typedef struct tagHelperAttributeInfo *PHelperAttributeInfo;
#define DF_IMPERSONATION 0x80000000
#define DF_TRACELESS 0x40000000
typedef struct tagDiagnosticsInfo
{
	long cost;
	ULONG flags;
} DiagnosticsInfo;
typedef struct tagDiagnosticsInfo *PDiagnosticsInfo;
extern RPC_IF_HANDLE __MIDL_itf_ndhelper_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ndhelper_0000_0000_v0_0_s_ifspec;
#ifndef __INetDiagHelper_INTERFACE_DEFINED__
#define __INetDiagHelper_INTERFACE_DEFINED__
extern const IID IID_INetDiagHelper;
typedef struct INetDiagHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetDiagHelper * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetDiagHelper * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetDiagHelper * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (INetDiagHelper * This, ULONG celt, HELPER_ATTRIBUTE rgAttributes[]);
	HRESULT(STDMETHODCALLTYPE * GetDiagnosticsInfo) (INetDiagHelper * This, DiagnosticsInfo ** ppInfo);
	HRESULT(STDMETHODCALLTYPE * GetKeyAttributes) (INetDiagHelper * This, ULONG * pcelt, HELPER_ATTRIBUTE ** pprgAttributes);
	HRESULT(STDMETHODCALLTYPE * LowHealth) (INetDiagHelper * This, LPCWSTR pwszInstanceDescription, LPWSTR * ppwszDescription, long *pDeferredTime, DIAGNOSIS_STATUS * pStatus);
	HRESULT(STDMETHODCALLTYPE * HighUtilization) (INetDiagHelper * This, LPCWSTR pwszInstanceDescription, LPWSTR * ppwszDescription, long *pDeferredTime, DIAGNOSIS_STATUS * pStatus);
	HRESULT(STDMETHODCALLTYPE * GetLowerHypotheses) (INetDiagHelper * This, ULONG * pcelt, HYPOTHESIS ** pprgHypotheses);
	HRESULT(STDMETHODCALLTYPE * GetDownStreamHypotheses) (INetDiagHelper * This, ULONG * pcelt, HYPOTHESIS ** pprgHypotheses);
	HRESULT(STDMETHODCALLTYPE * GetHigherHypotheses) (INetDiagHelper * This, ULONG * pcelt, HYPOTHESIS ** pprgHypotheses);
	HRESULT(STDMETHODCALLTYPE * GetUpStreamHypotheses) (INetDiagHelper * This, ULONG * pcelt, HYPOTHESIS ** pprgHypotheses);
	HRESULT(STDMETHODCALLTYPE * Repair) (INetDiagHelper * This, RepairInfo * pInfo, long *pDeferredTime, REPAIR_STATUS * pStatus);
	HRESULT(STDMETHODCALLTYPE * Validate) (INetDiagHelper * This, PROBLEM_TYPE problem, long *pDeferredTime, REPAIR_STATUS * pStatus);
	HRESULT(STDMETHODCALLTYPE * GetRepairInfo) (INetDiagHelper * This, PROBLEM_TYPE problem, ULONG * pcelt, RepairInfo ** ppInfo);
	HRESULT(STDMETHODCALLTYPE * GetLifeTime) (INetDiagHelper * This, LIFE_TIME * pLifeTime);
	HRESULT(STDMETHODCALLTYPE * SetLifeTime) (INetDiagHelper * This, LIFE_TIME lifeTime);
	HRESULT(STDMETHODCALLTYPE * GetCacheTime) (INetDiagHelper * This, FILETIME * pCacheTime);
	HRESULT(STDMETHODCALLTYPE * GetAttributes) (INetDiagHelper * This, ULONG * pcelt, HELPER_ATTRIBUTE ** pprgAttributes);
	HRESULT(STDMETHODCALLTYPE * Cancel) (INetDiagHelper * This);
	HRESULT(STDMETHODCALLTYPE * Cleanup) (INetDiagHelper * This);
	END_INTERFACE
}  INetDiagHelperVtbl;
interface INetDiagHelper
{
	CONST_VTBL struct INetDiagHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetDiagHelper_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetDiagHelper_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetDiagHelper_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetDiagHelper_Initialize(This,celt,rgAttributes) ( (This)->lpVtbl -> Initialize(This,celt,rgAttributes) )
#define INetDiagHelper_GetDiagnosticsInfo(This,ppInfo) ( (This)->lpVtbl -> GetDiagnosticsInfo(This,ppInfo) )
#define INetDiagHelper_GetKeyAttributes(This,pcelt,pprgAttributes) ( (This)->lpVtbl -> GetKeyAttributes(This,pcelt,pprgAttributes) )
#define INetDiagHelper_LowHealth(This,pwszInstanceDescription,ppwszDescription,pDeferredTime,pStatus) ( (This)->lpVtbl -> LowHealth(This,pwszInstanceDescription,ppwszDescription,pDeferredTime,pStatus) )
#define INetDiagHelper_HighUtilization(This,pwszInstanceDescription,ppwszDescription,pDeferredTime,pStatus) ( (This)->lpVtbl -> HighUtilization(This,pwszInstanceDescription,ppwszDescription,pDeferredTime,pStatus) )
#define INetDiagHelper_GetLowerHypotheses(This,pcelt,pprgHypotheses) ( (This)->lpVtbl -> GetLowerHypotheses(This,pcelt,pprgHypotheses) )
#define INetDiagHelper_GetDownStreamHypotheses(This,pcelt,pprgHypotheses) ( (This)->lpVtbl -> GetDownStreamHypotheses(This,pcelt,pprgHypotheses) )
#define INetDiagHelper_GetHigherHypotheses(This,pcelt,pprgHypotheses) ( (This)->lpVtbl -> GetHigherHypotheses(This,pcelt,pprgHypotheses) )
#define INetDiagHelper_GetUpStreamHypotheses(This,pcelt,pprgHypotheses) ( (This)->lpVtbl -> GetUpStreamHypotheses(This,pcelt,pprgHypotheses) )
#define INetDiagHelper_Repair(This,pInfo,pDeferredTime,pStatus) ( (This)->lpVtbl -> Repair(This,pInfo,pDeferredTime,pStatus) )
#define INetDiagHelper_Validate(This,problem,pDeferredTime,pStatus) ( (This)->lpVtbl -> Validate(This,problem,pDeferredTime,pStatus) )
#define INetDiagHelper_GetRepairInfo(This,problem,pcelt,ppInfo) ( (This)->lpVtbl -> GetRepairInfo(This,problem,pcelt,ppInfo) )
#define INetDiagHelper_GetLifeTime(This,pLifeTime) ( (This)->lpVtbl -> GetLifeTime(This,pLifeTime) )
#define INetDiagHelper_SetLifeTime(This,lifeTime) ( (This)->lpVtbl -> SetLifeTime(This,lifeTime) )
#define INetDiagHelper_GetCacheTime(This,pCacheTime) ( (This)->lpVtbl -> GetCacheTime(This,pCacheTime) )
#define INetDiagHelper_GetAttributes(This,pcelt,pprgAttributes) ( (This)->lpVtbl -> GetAttributes(This,pcelt,pprgAttributes) )
#define INetDiagHelper_Cancel(This) ( (This)->lpVtbl -> Cancel(This) )
#define INetDiagHelper_Cleanup(This) ( (This)->lpVtbl -> Cleanup(This) )
#endif
#endif
typedef struct tagHypothesisResult
{
	HYPOTHESIS hypothesis;
	DIAGNOSIS_STATUS pathStatus;
} HypothesisResult;
extern RPC_IF_HANDLE __MIDL_itf_ndhelper_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ndhelper_0000_0001_v0_0_s_ifspec;
#ifndef __INetDiagHelperUtilFactory_INTERFACE_DEFINED__
#define __INetDiagHelperUtilFactory_INTERFACE_DEFINED__
extern const IID IID_INetDiagHelperUtilFactory;
typedef struct INetDiagHelperUtilFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetDiagHelperUtilFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetDiagHelperUtilFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetDiagHelperUtilFactory * This);
	HRESULT(STDMETHODCALLTYPE * CreateUtilityInstance) (INetDiagHelperUtilFactory * This, REFIID riid, void **ppvObject);
	END_INTERFACE
}  INetDiagHelperUtilFactoryVtbl;
interface INetDiagHelperUtilFactory
{
	CONST_VTBL struct INetDiagHelperUtilFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetDiagHelperUtilFactory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetDiagHelperUtilFactory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetDiagHelperUtilFactory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetDiagHelperUtilFactory_CreateUtilityInstance(This,riid,ppvObject) ( (This)->lpVtbl -> CreateUtilityInstance(This,riid,ppvObject) )
#endif
#endif
#ifndef __INetDiagHelperEx_INTERFACE_DEFINED__
#define __INetDiagHelperEx_INTERFACE_DEFINED__
extern const IID IID_INetDiagHelperEx;
typedef struct INetDiagHelperExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetDiagHelperEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetDiagHelperEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetDiagHelperEx * This);
	HRESULT(STDMETHODCALLTYPE * ReconfirmLowHealth) (INetDiagHelperEx * This, ULONG celt, HypothesisResult * pResults, LPWSTR * ppwszUpdatedDescription, DIAGNOSIS_STATUS * pUpdatedStatus);
	HRESULT(STDMETHODCALLTYPE * SetUtilities) (INetDiagHelperEx * This, INetDiagHelperUtilFactory * pUtilities);
	HRESULT(STDMETHODCALLTYPE * ReproduceFailure) (INetDiagHelperEx * This);
	END_INTERFACE
}  INetDiagHelperExVtbl;
interface INetDiagHelperEx
{
	CONST_VTBL struct INetDiagHelperExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetDiagHelperEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetDiagHelperEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetDiagHelperEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetDiagHelperEx_ReconfirmLowHealth(This,celt,pResults,ppwszUpdatedDescription,pUpdatedStatus) ( (This)->lpVtbl -> ReconfirmLowHealth(This,celt,pResults,ppwszUpdatedDescription,pUpdatedStatus) )
#define INetDiagHelperEx_SetUtilities(This,pUtilities) ( (This)->lpVtbl -> SetUtilities(This,pUtilities) )
#define INetDiagHelperEx_ReproduceFailure(This) ( (This)->lpVtbl -> ReproduceFailure(This) )
#endif
#endif
#ifndef __INetDiagHelperInfo_INTERFACE_DEFINED__
#define __INetDiagHelperInfo_INTERFACE_DEFINED__
extern const IID IID_INetDiagHelperInfo;
typedef struct INetDiagHelperInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetDiagHelperInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetDiagHelperInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetDiagHelperInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetAttributeInfo) (INetDiagHelperInfo * This, ULONG * pcelt, HelperAttributeInfo ** pprgAttributeInfos);
	END_INTERFACE
}  INetDiagHelperInfoVtbl;
interface INetDiagHelperInfo
{
	CONST_VTBL struct INetDiagHelperInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetDiagHelperInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetDiagHelperInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetDiagHelperInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetDiagHelperInfo_GetAttributeInfo(This,pcelt,pprgAttributeInfos) ( (This)->lpVtbl -> GetAttributeInfo(This,pcelt,pprgAttributeInfos) )
#endif
#endif
#ifndef __INetDiagExtensibleHelper_INTERFACE_DEFINED__
#define __INetDiagExtensibleHelper_INTERFACE_DEFINED__
extern const IID IID_INetDiagExtensibleHelper;
typedef struct INetDiagExtensibleHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INetDiagExtensibleHelper * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INetDiagExtensibleHelper * This);
	ULONG(STDMETHODCALLTYPE * Release) (INetDiagExtensibleHelper * This);
	HRESULT(STDMETHODCALLTYPE * ResolveAttributes) (INetDiagExtensibleHelper * This, ULONG celt, HELPER_ATTRIBUTE rgKeyAttributes[], ULONG * pcelt, HELPER_ATTRIBUTE ** prgMatchValues);
	END_INTERFACE
}  INetDiagExtensibleHelperVtbl;
interface INetDiagExtensibleHelper
{
	CONST_VTBL struct INetDiagExtensibleHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INetDiagExtensibleHelper_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INetDiagExtensibleHelper_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INetDiagExtensibleHelper_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INetDiagExtensibleHelper_ResolveAttributes(This,celt,rgKeyAttributes,pcelt,prgMatchValues) ( (This)->lpVtbl -> ResolveAttributes(This,celt,rgKeyAttributes,pcelt,prgMatchValues) )
#endif
#endif
#endif
