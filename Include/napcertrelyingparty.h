/*+@@file@@----------------------------------------------------------------*//*!
 \file		napcertrelyingparty.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:06:32 2016
 \date		Modified on Sun Sep 11 22:06:32 2016
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
#ifndef __napcertrelyingparty_h__
#define __napcertrelyingparty_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __INapCertRelyingParty_FWD_DEFINED__
#define __INapCertRelyingParty_FWD_DEFINED__
typedef interface INapCertRelyingParty INapCertRelyingParty;
#endif
#include "NapTypes.h"
#include <wincrypt.h>
static const UINT32 NapAfwZonePropId = CERT_FIRST_USER_PROP_ID;
static const UINT32 NapAfwProtectionLevelPropId = CERT_FIRST_USER_PROP_ID + 1;
extern RPC_IF_HANDLE __MIDL_itf_napcertrelyingparty_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_napcertrelyingparty_0000_0000_v0_0_s_ifspec;
#ifndef __INapCertRelyingParty_INTERFACE_DEFINED__
#define __INapCertRelyingParty_INTERFACE_DEFINED__
extern const IID IID_INapCertRelyingParty;
typedef struct INapCertRelyingPartyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INapCertRelyingParty * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INapCertRelyingParty * This);
	ULONG(STDMETHODCALLTYPE * Release) (INapCertRelyingParty * This);
	HRESULT(STDMETHODCALLTYPE * SubscribeCertByGroup) (INapCertRelyingParty * This, EnforcementEntityId id, const BSTR subscriberName, const VARIANT * reserved, BOOL * certExists);
	HRESULT(STDMETHODCALLTYPE * UnSubscribeCertByGroup) (INapCertRelyingParty * This, EnforcementEntityId id, const VARIANT * reserved);
	HRESULT(STDMETHODCALLTYPE * GetSubscribedRelyingParties) (INapCertRelyingParty * This, EnforcementEntityCount * count, EnforcementEntityId ** relyingParties);
	END_INTERFACE
}  INapCertRelyingPartyVtbl;
interface INapCertRelyingParty
{
	CONST_VTBL struct INapCertRelyingPartyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INapCertRelyingParty_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INapCertRelyingParty_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INapCertRelyingParty_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INapCertRelyingParty_SubscribeCertByGroup(This,id,subscriberName,reserved,certExists) ( (This)->lpVtbl -> SubscribeCertByGroup(This,id,subscriberName,reserved,certExists) )
#define INapCertRelyingParty_UnSubscribeCertByGroup(This,id,reserved) ( (This)->lpVtbl -> UnSubscribeCertByGroup(This,id,reserved) )
#define INapCertRelyingParty_GetSubscribedRelyingParties(This,count,relyingParties) ( (This)->lpVtbl -> GetSubscribedRelyingParties(This,count,relyingParties) )
#endif
#endif
extern const CLSID CLSID_NapCertRelyingParty;
extern RPC_IF_HANDLE __MIDL_itf_napcertrelyingparty_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_napcertrelyingparty_0000_0001_v0_0_s_ifspec;
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
