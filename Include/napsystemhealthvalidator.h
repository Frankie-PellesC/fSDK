/*+@@file@@----------------------------------------------------------------*//*!
 \file		napsystemhealthvalidator.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:31:11 2016
 \date		Modified on Sun Sep 11 22:31:11 2016
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
#ifndef __napsystemhealthvalidator_h__
#define __napsystemhealthvalidator_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __INapSystemHealthValidator_FWD_DEFINED__
#define __INapSystemHealthValidator_FWD_DEFINED__
typedef interface INapSystemHealthValidator INapSystemHealthValidator;
#endif
#ifndef __AsyncINapSystemHealthValidator_FWD_DEFINED__
#define __AsyncINapSystemHealthValidator_FWD_DEFINED__
typedef interface AsyncINapSystemHealthValidator AsyncINapSystemHealthValidator;
#endif
#ifndef __INapServerCallback_FWD_DEFINED__
#define __INapServerCallback_FWD_DEFINED__
typedef interface INapServerCallback INapServerCallback;
#endif
#ifndef __INapSystemHealthValidationRequest_FWD_DEFINED__
#define __INapSystemHealthValidationRequest_FWD_DEFINED__
typedef interface INapSystemHealthValidationRequest INapSystemHealthValidationRequest;
#endif
#ifndef __INapSystemHealthValidationRequest2_FWD_DEFINED__
#define __INapSystemHealthValidationRequest2_FWD_DEFINED__
typedef interface INapSystemHealthValidationRequest2 INapSystemHealthValidationRequest2;
#endif
#include <NapTypes.h>
extern RPC_IF_HANDLE __MIDL_itf_napsystemhealthvalidator_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_napsystemhealthvalidator_0000_0000_v0_0_s_ifspec;
#ifndef __INapSystemHealthValidator_INTERFACE_DEFINED__
#define __INapSystemHealthValidator_INTERFACE_DEFINED__
extern const IID IID_INapSystemHealthValidator;
typedef struct INapSystemHealthValidatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapSystemHealthValidator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapSystemHealthValidator * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapSystemHealthValidator * This);
	HRESULT(STDMETHODCALLTYPE * Validate) (INapSystemHealthValidator * This, INapSystemHealthValidationRequest * request, UINT32 hintTimeOutInMsec, INapServerCallback * callback);
	END_INTERFACE
}  INapSystemHealthValidatorVtbl;
interface INapSystemHealthValidator
{
	CONST_VTBL struct INapSystemHealthValidatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapSystemHealthValidator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapSystemHealthValidator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapSystemHealthValidator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapSystemHealthValidator_Validate(This,request,hintTimeOutInMsec,callback) ( (This)->lpVtbl -> Validate(This,request,hintTimeOutInMsec,callback) )
#endif
#endif
#ifndef __AsyncINapSystemHealthValidator_INTERFACE_DEFINED__
#define __AsyncINapSystemHealthValidator_INTERFACE_DEFINED__
extern const IID IID_AsyncINapSystemHealthValidator;
typedef struct AsyncINapSystemHealthValidatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (AsyncINapSystemHealthValidator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (AsyncINapSystemHealthValidator * This);
	ULONG(STDMETHODCALLTYPE * Release) (AsyncINapSystemHealthValidator * This);
	HRESULT(STDMETHODCALLTYPE * Begin_Validate) (AsyncINapSystemHealthValidator * This, INapSystemHealthValidationRequest * request, UINT32 hintTimeOutInMsec, INapServerCallback * callback);
	HRESULT(STDMETHODCALLTYPE * Finish_Validate) (AsyncINapSystemHealthValidator * This);
	END_INTERFACE
}  AsyncINapSystemHealthValidatorVtbl;
interface AsyncINapSystemHealthValidator
{
	CONST_VTBL struct AsyncINapSystemHealthValidatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncINapSystemHealthValidator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncINapSystemHealthValidator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define AsyncINapSystemHealthValidator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define AsyncINapSystemHealthValidator_Begin_Validate(This,request,hintTimeOutInMsec,callback) ( (This)->lpVtbl -> Begin_Validate(This,request,hintTimeOutInMsec,callback) )
#define AsyncINapSystemHealthValidator_Finish_Validate(This) ( (This)->lpVtbl -> Finish_Validate(This) )
#endif
#endif
#ifndef __INapServerCallback_INTERFACE_DEFINED__
#define __INapServerCallback_INTERFACE_DEFINED__
extern const IID IID_INapServerCallback;
typedef struct INapServerCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapServerCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapServerCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapServerCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnComplete) (INapServerCallback * This, INapSystemHealthValidationRequest * request, HRESULT errorCode);
	END_INTERFACE
}  INapServerCallbackVtbl;
interface INapServerCallback
{
	CONST_VTBL struct INapServerCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapServerCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapServerCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapServerCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapServerCallback_OnComplete(This,request,errorCode) ( (This)->lpVtbl -> OnComplete(This,request,errorCode) )
#endif
#endif
#ifndef __INapSystemHealthValidationRequest_INTERFACE_DEFINED__
#define __INapSystemHealthValidationRequest_INTERFACE_DEFINED__
extern const IID IID_INapSystemHealthValidationRequest;
typedef struct INapSystemHealthValidationRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapSystemHealthValidationRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapSystemHealthValidationRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapSystemHealthValidationRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetCorrelationId) (INapSystemHealthValidationRequest * This, CorrelationId * correlationId);
	HRESULT(STDMETHODCALLTYPE * GetStringCorrelationId) (INapSystemHealthValidationRequest * This, StringCorrelationId ** correlationId);
	HRESULT(STDMETHODCALLTYPE * GetMachineName) (INapSystemHealthValidationRequest * This, CountedString ** machineName);
	HRESULT(STDMETHODCALLTYPE * GetSoHRequest) (INapSystemHealthValidationRequest * This, SoHRequest ** sohRequest, BOOL * napSystemGenerated);
	HRESULT(STDMETHODCALLTYPE * SetSoHResponse) (INapSystemHealthValidationRequest * This, const SoHResponse * sohResponse);
	HRESULT(STDMETHODCALLTYPE * GetSoHResponse) (INapSystemHealthValidationRequest * This, SoHResponse ** sohResponse);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (INapSystemHealthValidationRequest * This, const PrivateData * privateData);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (INapSystemHealthValidationRequest * This, PrivateData ** privateData);
	END_INTERFACE
}  INapSystemHealthValidationRequestVtbl;
interface INapSystemHealthValidationRequest
{
	CONST_VTBL struct INapSystemHealthValidationRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapSystemHealthValidationRequest_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapSystemHealthValidationRequest_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapSystemHealthValidationRequest_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapSystemHealthValidationRequest_GetCorrelationId(This,correlationId) ( (This)->lpVtbl -> GetCorrelationId(This,correlationId) )
#define INapSystemHealthValidationRequest_GetStringCorrelationId(This,correlationId) ( (This)->lpVtbl -> GetStringCorrelationId(This,correlationId) )
#define INapSystemHealthValidationRequest_GetMachineName(This,machineName) ( (This)->lpVtbl -> GetMachineName(This,machineName) )
#define INapSystemHealthValidationRequest_GetSoHRequest(This,sohRequest,napSystemGenerated) ( (This)->lpVtbl -> GetSoHRequest(This,sohRequest,napSystemGenerated) )
#define INapSystemHealthValidationRequest_SetSoHResponse(This,sohResponse) ( (This)->lpVtbl -> SetSoHResponse(This,sohResponse) )
#define INapSystemHealthValidationRequest_GetSoHResponse(This,sohResponse) ( (This)->lpVtbl -> GetSoHResponse(This,sohResponse) )
#define INapSystemHealthValidationRequest_SetPrivateData(This,privateData) ( (This)->lpVtbl -> SetPrivateData(This,privateData) )
#define INapSystemHealthValidationRequest_GetPrivateData(This,privateData) ( (This)->lpVtbl -> GetPrivateData(This,privateData) )
#endif
#endif
#ifndef __INapSystemHealthValidationRequest2_INTERFACE_DEFINED__
#define __INapSystemHealthValidationRequest2_INTERFACE_DEFINED__
extern const IID IID_INapSystemHealthValidationRequest2;
typedef struct INapSystemHealthValidationRequest2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapSystemHealthValidationRequest2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapSystemHealthValidationRequest2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapSystemHealthValidationRequest2 * This);
	HRESULT(STDMETHODCALLTYPE * GetCorrelationId) (INapSystemHealthValidationRequest2 * This, CorrelationId * correlationId);
	HRESULT(STDMETHODCALLTYPE * GetStringCorrelationId) (INapSystemHealthValidationRequest2 * This, StringCorrelationId ** correlationId);
	HRESULT(STDMETHODCALLTYPE * GetMachineName) (INapSystemHealthValidationRequest2 * This, CountedString ** machineName);
	HRESULT(STDMETHODCALLTYPE * GetSoHRequest) (INapSystemHealthValidationRequest2 * This, SoHRequest ** sohRequest, BOOL * napSystemGenerated);
	HRESULT(STDMETHODCALLTYPE * SetSoHResponse) (INapSystemHealthValidationRequest2 * This, const SoHResponse * sohResponse);
	HRESULT(STDMETHODCALLTYPE * GetSoHResponse) (INapSystemHealthValidationRequest2 * This, SoHResponse ** sohResponse);
	HRESULT(STDMETHODCALLTYPE * SetPrivateData) (INapSystemHealthValidationRequest2 * This, const PrivateData * privateData);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (INapSystemHealthValidationRequest2 * This, PrivateData ** privateData);
	HRESULT(STDMETHODCALLTYPE * GetConfigID) (INapSystemHealthValidationRequest2 * This, UINT32 * configID);
	END_INTERFACE
}  INapSystemHealthValidationRequest2Vtbl;
interface INapSystemHealthValidationRequest2
{
	CONST_VTBL struct INapSystemHealthValidationRequest2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapSystemHealthValidationRequest2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapSystemHealthValidationRequest2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapSystemHealthValidationRequest2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapSystemHealthValidationRequest2_GetCorrelationId(This,correlationId) ( (This)->lpVtbl -> GetCorrelationId(This,correlationId) )
#define INapSystemHealthValidationRequest2_GetStringCorrelationId(This,correlationId) ( (This)->lpVtbl -> GetStringCorrelationId(This,correlationId) )
#define INapSystemHealthValidationRequest2_GetMachineName(This,machineName) ( (This)->lpVtbl -> GetMachineName(This,machineName) )
#define INapSystemHealthValidationRequest2_GetSoHRequest(This,sohRequest,napSystemGenerated) ( (This)->lpVtbl -> GetSoHRequest(This,sohRequest,napSystemGenerated) )
#define INapSystemHealthValidationRequest2_SetSoHResponse(This,sohResponse) ( (This)->lpVtbl -> SetSoHResponse(This,sohResponse) )
#define INapSystemHealthValidationRequest2_GetSoHResponse(This,sohResponse) ( (This)->lpVtbl -> GetSoHResponse(This,sohResponse) )
#define INapSystemHealthValidationRequest2_SetPrivateData(This,privateData) ( (This)->lpVtbl -> SetPrivateData(This,privateData) )
#define INapSystemHealthValidationRequest2_GetPrivateData(This,privateData) ( (This)->lpVtbl -> GetPrivateData(This,privateData) )
#define INapSystemHealthValidationRequest2_GetConfigID(This,configID) ( (This)->lpVtbl -> GetConfigID(This,configID) )
#endif
#endif
#endif
