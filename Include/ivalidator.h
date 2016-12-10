/*+@@file@@----------------------------------------------------------------*//*!
 \file		ivalidator.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 21:36:00 2016
 \date		Modified on Sun Jul 17 21:36:00 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __ivalidator_h__
#define __ivalidator_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IValidator_FWD_DEFINED__
#define __IValidator_FWD_DEFINED__
typedef interface IValidator IValidator;
#endif
#ifndef __ICLRValidator_FWD_DEFINED__
#define __ICLRValidator_FWD_DEFINED__
typedef interface ICLRValidator ICLRValidator;
#endif
#include <ivehandler.h>
enum ValidatorFlags
{
	VALIDATOR_EXTRA_VERBOSE = 0x1,
	VALIDATOR_SHOW_SOURCE_LINES = 0x2,
	VALIDATOR_CHECK_ILONLY = 0x4,
	VALIDATOR_CHECK_PEFORMAT_ONLY = 0x8,
	VALIDATOR_NOCHECK_PEFORMAT = 0x10,
	VALIDATOR_TRANSPARENT_ONLY = 0x20
};
extern RPC_IF_HANDLE __MIDL_itf_ivalidator_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ivalidator_0000_0000_v0_0_s_ifspec;
#ifndef __IValidator_INTERFACE_DEFINED__
#define __IValidator_INTERFACE_DEFINED__
extern const IID IID_IValidator;
typedef struct IValidatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IValidator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IValidator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IValidator * This);
	HRESULT(STDMETHODCALLTYPE * Validate) (IValidator * This, IVEHandler * veh, IUnknown * pAppDomain, unsigned long ulFlags, unsigned long ulMaxError, unsigned long token, LPWSTR fileName, BYTE * pe, unsigned long ulSize);
	HRESULT(STDMETHODCALLTYPE * FormatEventInfo) (IValidator * This, HRESULT hVECode, VEContext Context, LPWSTR msg, unsigned long ulMaxLength, SAFEARRAY * psa);
	END_INTERFACE
}  IValidatorVtbl;
interface IValidator
{
	CONST_VTBL struct IValidatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IValidator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IValidator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IValidator_Release(This)( (This)->lpVtbl -> Release(This) )
#define IValidator_Validate(This,veh,pAppDomain,ulFlags,ulMaxError,token,fileName,pe,ulSize)( (This)->lpVtbl -> Validate(This,veh,pAppDomain,ulFlags,ulMaxError,token,fileName,pe,ulSize) )
#define IValidator_FormatEventInfo(This,hVECode,Context,msg,ulMaxLength,psa)( (This)->lpVtbl -> FormatEventInfo(This,hVECode,Context,msg,ulMaxLength,psa) )
#endif
#endif
#ifndef __ICLRValidator_INTERFACE_DEFINED__
#define __ICLRValidator_INTERFACE_DEFINED__
extern const IID IID_ICLRValidator;
typedef struct ICLRValidatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICLRValidator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICLRValidator * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICLRValidator * This);
	HRESULT(STDMETHODCALLTYPE * Validate) (ICLRValidator * This, IVEHandler * veh, unsigned long ulAppDomainId, unsigned long ulFlags, unsigned long ulMaxError, unsigned long token, LPWSTR fileName, BYTE * pe, unsigned long ulSize);
	HRESULT(STDMETHODCALLTYPE * FormatEventInfo) (ICLRValidator * This, HRESULT hVECode, VEContext Context, LPWSTR msg, unsigned long ulMaxLength, SAFEARRAY * psa);
	END_INTERFACE
}  ICLRValidatorVtbl;
interface ICLRValidator
{
	CONST_VTBL struct ICLRValidatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICLRValidator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICLRValidator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICLRValidator_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICLRValidator_Validate(This,veh,ulAppDomainId,ulFlags,ulMaxError,token,fileName,pe,ulSize)( (This)->lpVtbl -> Validate(This,veh,ulAppDomainId,ulFlags,ulMaxError,token,fileName,pe,ulSize) )
#define ICLRValidator_FormatEventInfo(This,hVECode,Context,msg,ulMaxLength,psa)( (This)->lpVtbl -> FormatEventInfo(This,hVECode,Context,msg,ulMaxLength,psa) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_ivalidator_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ivalidator_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
#endif
