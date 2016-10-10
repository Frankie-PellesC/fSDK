/*+@@file@@----------------------------------------------------------------*//*!
 \file		TermMgr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:33:28 2016
 \date		Modified on Sat Sep 17 12:33:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __termmgr_h__
#define __termmgr_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITTerminalControl_FWD_DEFINED__
#define __ITTerminalControl_FWD_DEFINED__
typedef interface ITTerminalControl ITTerminalControl;
#endif
#ifndef __ITPluggableTerminalInitialization_FWD_DEFINED__
#define __ITPluggableTerminalInitialization_FWD_DEFINED__
typedef interface ITPluggableTerminalInitialization ITPluggableTerminalInitialization;
#endif
#ifndef __ITTerminalManager_FWD_DEFINED__
#define __ITTerminalManager_FWD_DEFINED__
typedef interface ITTerminalManager ITTerminalManager;
#endif
#ifndef __ITTerminalManager2_FWD_DEFINED__
#define __ITTerminalManager2_FWD_DEFINED__
typedef interface ITTerminalManager2 ITTerminalManager2;
#endif
#ifndef __ITPluggableTerminalClassRegistration_FWD_DEFINED__
#define __ITPluggableTerminalClassRegistration_FWD_DEFINED__
typedef interface ITPluggableTerminalClassRegistration ITPluggableTerminalClassRegistration;
#endif
#ifndef __ITPluggableTerminalSuperclassRegistration_FWD_DEFINED__
#define __ITPluggableTerminalSuperclassRegistration_FWD_DEFINED__
typedef interface ITPluggableTerminalSuperclassRegistration ITPluggableTerminalSuperclassRegistration;
#endif
#ifndef __TerminalManager_FWD_DEFINED__
#define __TerminalManager_FWD_DEFINED__
typedef struct TerminalManager TerminalManager;
#endif
#ifndef __PluggableSuperclassRegistration_FWD_DEFINED__
#define __PluggableSuperclassRegistration_FWD_DEFINED__
typedef struct PluggableSuperclassRegistration PluggableSuperclassRegistration;
#endif
#ifndef __PluggableTerminalRegistration_FWD_DEFINED__
#define __PluggableTerminalRegistration_FWD_DEFINED__
typedef struct PluggableTerminalRegistration PluggableTerminalRegistration;
#endif
#include "Objsafe.h"
#include "tapi3if.h"
#include "tapi3ds.h"
#include "msp.h"
typedef enum __MIDL___MIDL_itf_termmgr_0000_0000_0001
{
	TMGR_TD_CAPTURE = 1,
	TMGR_TD_RENDER = 2,
	TMGR_TD_BOTH = 3
} TMGR_DIRECTION;
#define	CLSID_String_VideoSuperclass	( L"{714C6F8C-6244-4685-87B3-B91F3F9EADA7}" )
#define	CLSID_String_StreamingSuperclass	( L"{214F4ACC-AE0B-4464-8405-07029003F8E2}" )
#define	CLSID_String_FileSuperclass	( L"{B4790031-56DB-4d3e-88C8-6FFAAFA08A91}" )
extern RPC_IF_HANDLE __MIDL_itf_termmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_termmgr_0000_0000_v0_0_s_ifspec;
#ifndef __ITTerminalControl_INTERFACE_DEFINED__
#define __ITTerminalControl_INTERFACE_DEFINED__
extern const IID IID_ITTerminalControl;
typedef struct ITTerminalControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITTerminalControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITTerminalControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITTerminalControl * This);
	HRESULT(STDMETHODCALLTYPE * get_AddressHandle) (ITTerminalControl * This, MSP_HANDLE * phtAddress);
	HRESULT(STDMETHODCALLTYPE * ConnectTerminal) (ITTerminalControl * This, IGraphBuilder * pGraph, DWORD dwTerminalDirection, DWORD * pdwNumPins, IPin ** ppPins);
	HRESULT(STDMETHODCALLTYPE * CompleteConnectTerminal) (ITTerminalControl * This);
	HRESULT(STDMETHODCALLTYPE * DisconnectTerminal) (ITTerminalControl * This, IGraphBuilder * pGraph, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * RunRenderFilter) (ITTerminalControl * This);
	HRESULT(STDMETHODCALLTYPE * StopRenderFilter) (ITTerminalControl * This);
	END_INTERFACE
}  ITTerminalControlVtbl;
interface ITTerminalControl
{
	CONST_VTBL struct ITTerminalControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITTerminalControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITTerminalControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITTerminalControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITTerminalControl_get_AddressHandle(This,phtAddress) ( (This)->lpVtbl -> get_AddressHandle(This,phtAddress) )
#define ITTerminalControl_ConnectTerminal(This,pGraph,dwTerminalDirection,pdwNumPins,ppPins) ( (This)->lpVtbl -> ConnectTerminal(This,pGraph,dwTerminalDirection,pdwNumPins,ppPins) )
#define ITTerminalControl_CompleteConnectTerminal(This) ( (This)->lpVtbl -> CompleteConnectTerminal(This) )
#define ITTerminalControl_DisconnectTerminal(This,pGraph,dwReserved) ( (This)->lpVtbl -> DisconnectTerminal(This,pGraph,dwReserved) )
#define ITTerminalControl_RunRenderFilter(This) ( (This)->lpVtbl -> RunRenderFilter(This) )
#define ITTerminalControl_StopRenderFilter(This) ( (This)->lpVtbl -> StopRenderFilter(This) )
#endif
#endif
#ifndef __ITPluggableTerminalInitialization_INTERFACE_DEFINED__
#define __ITPluggableTerminalInitialization_INTERFACE_DEFINED__
extern const IID IID_ITPluggableTerminalInitialization;
typedef struct ITPluggableTerminalInitializationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITPluggableTerminalInitialization * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITPluggableTerminalInitialization * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITPluggableTerminalInitialization * This);
	HRESULT(STDMETHODCALLTYPE * InitializeDynamic) (ITPluggableTerminalInitialization * This, IID iidTerminalClass, DWORD dwMediaType, TERMINAL_DIRECTION Direction, MSP_HANDLE htAddress);
	END_INTERFACE
}  ITPluggableTerminalInitializationVtbl;
interface ITPluggableTerminalInitialization
{
	CONST_VTBL struct ITPluggableTerminalInitializationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITPluggableTerminalInitialization_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITPluggableTerminalInitialization_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITPluggableTerminalInitialization_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITPluggableTerminalInitialization_InitializeDynamic(This,iidTerminalClass,dwMediaType,Direction,htAddress) ( (This)->lpVtbl -> InitializeDynamic(This,iidTerminalClass,dwMediaType,Direction,htAddress) )
#endif
#endif
#ifndef __ITTerminalManager_INTERFACE_DEFINED__
#define __ITTerminalManager_INTERFACE_DEFINED__
extern const IID IID_ITTerminalManager;
typedef struct ITTerminalManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITTerminalManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITTerminalManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITTerminalManager * This);
	HRESULT(STDMETHODCALLTYPE * GetDynamicTerminalClasses) (ITTerminalManager * This, DWORD dwMediaTypes, DWORD * pdwNumClasses, IID * pTerminalClasses);
	HRESULT(STDMETHODCALLTYPE * CreateDynamicTerminal) (ITTerminalManager * This, IUnknown * pOuterUnknown, IID iidTerminalClass, DWORD dwMediaType, TERMINAL_DIRECTION Direction, MSP_HANDLE htAddress, ITTerminal ** ppTerminal);
	END_INTERFACE
}  ITTerminalManagerVtbl;
interface ITTerminalManager
{
	CONST_VTBL struct ITTerminalManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITTerminalManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITTerminalManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITTerminalManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITTerminalManager_GetDynamicTerminalClasses(This,dwMediaTypes,pdwNumClasses,pTerminalClasses) ( (This)->lpVtbl -> GetDynamicTerminalClasses(This,dwMediaTypes,pdwNumClasses,pTerminalClasses) )
#define ITTerminalManager_CreateDynamicTerminal(This,pOuterUnknown,iidTerminalClass,dwMediaType,Direction,htAddress,ppTerminal) ( (This)->lpVtbl -> CreateDynamicTerminal(This,pOuterUnknown,iidTerminalClass,dwMediaType,Direction,htAddress,ppTerminal) )
#endif
#endif
#ifndef __ITTerminalManager2_INTERFACE_DEFINED__
#define __ITTerminalManager2_INTERFACE_DEFINED__
extern const IID IID_ITTerminalManager2;
typedef struct ITTerminalManager2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITTerminalManager2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITTerminalManager2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITTerminalManager2 * This);
	HRESULT(STDMETHODCALLTYPE * GetDynamicTerminalClasses) (ITTerminalManager2 * This, DWORD dwMediaTypes, DWORD * pdwNumClasses, IID * pTerminalClasses);
	HRESULT(STDMETHODCALLTYPE * CreateDynamicTerminal) (ITTerminalManager2 * This, IUnknown * pOuterUnknown, IID iidTerminalClass, DWORD dwMediaType, TERMINAL_DIRECTION Direction, MSP_HANDLE htAddress, ITTerminal ** ppTerminal);
	HRESULT(STDMETHODCALLTYPE * GetPluggableSuperclasses) (ITTerminalManager2 * This, DWORD * pdwNumSuperclasses, IID * pSuperclasses);
	HRESULT(STDMETHODCALLTYPE * GetPluggableTerminalClasses) (ITTerminalManager2 * This, IID iidSuperclass, DWORD dwMediaTypes, DWORD * pdwNumClasses, IID * pTerminalClasses);
	END_INTERFACE
}  ITTerminalManager2Vtbl;
interface ITTerminalManager2
{
	CONST_VTBL struct ITTerminalManager2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITTerminalManager2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITTerminalManager2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITTerminalManager2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITTerminalManager2_GetDynamicTerminalClasses(This,dwMediaTypes,pdwNumClasses,pTerminalClasses) ( (This)->lpVtbl -> GetDynamicTerminalClasses(This,dwMediaTypes,pdwNumClasses,pTerminalClasses) )
#define ITTerminalManager2_CreateDynamicTerminal(This,pOuterUnknown,iidTerminalClass,dwMediaType,Direction,htAddress,ppTerminal) ( (This)->lpVtbl -> CreateDynamicTerminal(This,pOuterUnknown,iidTerminalClass,dwMediaType,Direction,htAddress,ppTerminal) )
#define ITTerminalManager2_GetPluggableSuperclasses(This,pdwNumSuperclasses,pSuperclasses) ( (This)->lpVtbl -> GetPluggableSuperclasses(This,pdwNumSuperclasses,pSuperclasses) )
#define ITTerminalManager2_GetPluggableTerminalClasses(This,iidSuperclass,dwMediaTypes,pdwNumClasses,pTerminalClasses) ( (This)->lpVtbl -> GetPluggableTerminalClasses(This,iidSuperclass,dwMediaTypes,pdwNumClasses,pTerminalClasses) )
#endif
#endif
#ifndef __ITPluggableTerminalClassRegistration_INTERFACE_DEFINED__
#define __ITPluggableTerminalClassRegistration_INTERFACE_DEFINED__
extern const IID IID_ITPluggableTerminalClassRegistration;
typedef struct ITPluggableTerminalClassRegistrationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITPluggableTerminalClassRegistration * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITPluggableTerminalClassRegistration * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITPluggableTerminalClassRegistration * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITPluggableTerminalClassRegistration * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITPluggableTerminalClassRegistration * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITPluggableTerminalClassRegistration * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITPluggableTerminalClassRegistration * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ITPluggableTerminalClassRegistration * This, BSTR * pName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (ITPluggableTerminalClassRegistration * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Company) (ITPluggableTerminalClassRegistration * This, BSTR * pCompany);
	HRESULT(STDMETHODCALLTYPE * put_Company) (ITPluggableTerminalClassRegistration * This, BSTR bstrCompany);
	HRESULT(STDMETHODCALLTYPE * get_Version) (ITPluggableTerminalClassRegistration * This, BSTR * pVersion);
	HRESULT(STDMETHODCALLTYPE * put_Version) (ITPluggableTerminalClassRegistration * This, BSTR bstrVersion);
	HRESULT(STDMETHODCALLTYPE * get_TerminalClass) (ITPluggableTerminalClassRegistration * This, BSTR * pTerminalClass);
	HRESULT(STDMETHODCALLTYPE * put_TerminalClass) (ITPluggableTerminalClassRegistration * This, BSTR bstrTerminalClass);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (ITPluggableTerminalClassRegistration * This, BSTR * pCLSID);
	HRESULT(STDMETHODCALLTYPE * put_CLSID) (ITPluggableTerminalClassRegistration * This, BSTR bstrCLSID);
	HRESULT(STDMETHODCALLTYPE * get_Direction) (ITPluggableTerminalClassRegistration * This, TMGR_DIRECTION * pDirection);
	HRESULT(STDMETHODCALLTYPE * put_Direction) (ITPluggableTerminalClassRegistration * This, TMGR_DIRECTION nDirection);
	HRESULT(STDMETHODCALLTYPE * get_MediaTypes) (ITPluggableTerminalClassRegistration * This, long *pMediaTypes);
	HRESULT(STDMETHODCALLTYPE * put_MediaTypes) (ITPluggableTerminalClassRegistration * This, long nMediaTypes);
	HRESULT(STDMETHODCALLTYPE * Add) (ITPluggableTerminalClassRegistration * This, BSTR bstrSuperclass);
	HRESULT(STDMETHODCALLTYPE * Delete) (ITPluggableTerminalClassRegistration * This, BSTR bstrSuperclass);
	HRESULT(STDMETHODCALLTYPE * GetTerminalClassInfo) (ITPluggableTerminalClassRegistration * This, BSTR bstrSuperclass);
	END_INTERFACE
}  ITPluggableTerminalClassRegistrationVtbl;
interface ITPluggableTerminalClassRegistration
{
	CONST_VTBL struct ITPluggableTerminalClassRegistrationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITPluggableTerminalClassRegistration_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITPluggableTerminalClassRegistration_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITPluggableTerminalClassRegistration_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITPluggableTerminalClassRegistration_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITPluggableTerminalClassRegistration_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITPluggableTerminalClassRegistration_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITPluggableTerminalClassRegistration_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITPluggableTerminalClassRegistration_get_Name(This,pName) ( (This)->lpVtbl -> get_Name(This,pName) )
#define ITPluggableTerminalClassRegistration_put_Name(This,bstrName) ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define ITPluggableTerminalClassRegistration_get_Company(This,pCompany) ( (This)->lpVtbl -> get_Company(This,pCompany) )
#define ITPluggableTerminalClassRegistration_put_Company(This,bstrCompany) ( (This)->lpVtbl -> put_Company(This,bstrCompany) )
#define ITPluggableTerminalClassRegistration_get_Version(This,pVersion) ( (This)->lpVtbl -> get_Version(This,pVersion) )
#define ITPluggableTerminalClassRegistration_put_Version(This,bstrVersion) ( (This)->lpVtbl -> put_Version(This,bstrVersion) )
#define ITPluggableTerminalClassRegistration_get_TerminalClass(This,pTerminalClass) ( (This)->lpVtbl -> get_TerminalClass(This,pTerminalClass) )
#define ITPluggableTerminalClassRegistration_put_TerminalClass(This,bstrTerminalClass) ( (This)->lpVtbl -> put_TerminalClass(This,bstrTerminalClass) )
#define ITPluggableTerminalClassRegistration_get_CLSID(This,pCLSID) ( (This)->lpVtbl -> get_CLSID(This,pCLSID) )
#define ITPluggableTerminalClassRegistration_put_CLSID(This,bstrCLSID) ( (This)->lpVtbl -> put_CLSID(This,bstrCLSID) )
#define ITPluggableTerminalClassRegistration_get_Direction(This,pDirection) ( (This)->lpVtbl -> get_Direction(This,pDirection) )
#define ITPluggableTerminalClassRegistration_put_Direction(This,nDirection) ( (This)->lpVtbl -> put_Direction(This,nDirection) )
#define ITPluggableTerminalClassRegistration_get_MediaTypes(This,pMediaTypes) ( (This)->lpVtbl -> get_MediaTypes(This,pMediaTypes) )
#define ITPluggableTerminalClassRegistration_put_MediaTypes(This,nMediaTypes) ( (This)->lpVtbl -> put_MediaTypes(This,nMediaTypes) )
#define ITPluggableTerminalClassRegistration_Add(This,bstrSuperclass) ( (This)->lpVtbl -> Add(This,bstrSuperclass) )
#define ITPluggableTerminalClassRegistration_Delete(This,bstrSuperclass) ( (This)->lpVtbl -> Delete(This,bstrSuperclass) )
#define ITPluggableTerminalClassRegistration_GetTerminalClassInfo(This,bstrSuperclass) ( (This)->lpVtbl -> GetTerminalClassInfo(This,bstrSuperclass) )
#endif
#endif
#ifndef __ITPluggableTerminalSuperclassRegistration_INTERFACE_DEFINED__
#define __ITPluggableTerminalSuperclassRegistration_INTERFACE_DEFINED__
extern const IID IID_ITPluggableTerminalSuperclassRegistration;
typedef struct ITPluggableTerminalSuperclassRegistrationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITPluggableTerminalSuperclassRegistration * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITPluggableTerminalSuperclassRegistration * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITPluggableTerminalSuperclassRegistration * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITPluggableTerminalSuperclassRegistration * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITPluggableTerminalSuperclassRegistration * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITPluggableTerminalSuperclassRegistration * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITPluggableTerminalSuperclassRegistration * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ITPluggableTerminalSuperclassRegistration * This, BSTR * pName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (ITPluggableTerminalSuperclassRegistration * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (ITPluggableTerminalSuperclassRegistration * This, BSTR * pCLSID);
	HRESULT(STDMETHODCALLTYPE * put_CLSID) (ITPluggableTerminalSuperclassRegistration * This, BSTR bstrCLSID);
	HRESULT(STDMETHODCALLTYPE * Add) (ITPluggableTerminalSuperclassRegistration * This);
	HRESULT(STDMETHODCALLTYPE * Delete) (ITPluggableTerminalSuperclassRegistration * This);
	HRESULT(STDMETHODCALLTYPE * GetTerminalSuperclassInfo) (ITPluggableTerminalSuperclassRegistration * This);
	HRESULT(STDMETHODCALLTYPE * get_TerminalClasses) (ITPluggableTerminalSuperclassRegistration * This, VARIANT * pTerminals);
	HRESULT(STDMETHODCALLTYPE * EnumerateTerminalClasses) (ITPluggableTerminalSuperclassRegistration * This, IEnumTerminalClass ** ppTerminals);
	END_INTERFACE
}  ITPluggableTerminalSuperclassRegistrationVtbl;
interface ITPluggableTerminalSuperclassRegistration
{
	CONST_VTBL struct ITPluggableTerminalSuperclassRegistrationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITPluggableTerminalSuperclassRegistration_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITPluggableTerminalSuperclassRegistration_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITPluggableTerminalSuperclassRegistration_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITPluggableTerminalSuperclassRegistration_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITPluggableTerminalSuperclassRegistration_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITPluggableTerminalSuperclassRegistration_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITPluggableTerminalSuperclassRegistration_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITPluggableTerminalSuperclassRegistration_get_Name(This,pName) ( (This)->lpVtbl -> get_Name(This,pName) )
#define ITPluggableTerminalSuperclassRegistration_put_Name(This,bstrName) ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define ITPluggableTerminalSuperclassRegistration_get_CLSID(This,pCLSID) ( (This)->lpVtbl -> get_CLSID(This,pCLSID) )
#define ITPluggableTerminalSuperclassRegistration_put_CLSID(This,bstrCLSID) ( (This)->lpVtbl -> put_CLSID(This,bstrCLSID) )
#define ITPluggableTerminalSuperclassRegistration_Add(This) ( (This)->lpVtbl -> Add(This) )
#define ITPluggableTerminalSuperclassRegistration_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define ITPluggableTerminalSuperclassRegistration_GetTerminalSuperclassInfo(This) ( (This)->lpVtbl -> GetTerminalSuperclassInfo(This) )
#define ITPluggableTerminalSuperclassRegistration_get_TerminalClasses(This,pTerminals) ( (This)->lpVtbl -> get_TerminalClasses(This,pTerminals) )
#define ITPluggableTerminalSuperclassRegistration_EnumerateTerminalClasses(This,ppTerminals) ( (This)->lpVtbl -> EnumerateTerminalClasses(This,ppTerminals) )
#endif
#endif
#ifndef __TERMMGRLib_LIBRARY_DEFINED__
#define __TERMMGRLib_LIBRARY_DEFINED__
extern const IID LIBID_TERMMGRLib;
extern const CLSID CLSID_TerminalManager;
extern const CLSID CLSID_PluggableSuperclassRegistration;
extern const CLSID CLSID_PluggableTerminalRegistration;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
