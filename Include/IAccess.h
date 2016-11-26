/*+@@file@@----------------------------------------------------------------*//*!
 \file		IAccess.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Fri Jul 15 18:48:54 2016
 \date		Modified on Fri Jul 15 18:48:54 2016
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
#ifndef __iaccess_h__
#define __iaccess_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAccessControl_FWD_DEFINED__
#define __IAccessControl_FWD_DEFINED__
typedef interface IAccessControl IAccessControl;
#endif
#ifndef __IAuditControl_FWD_DEFINED__
#define __IAuditControl_FWD_DEFINED__
typedef interface IAuditControl IAuditControl;
#endif
#include <unknwn.h>
#include <accctrl.h>
#if ( _MSC_VER >= 1020 )
#pragma once
#endif
typedef PACTRL_ACCESSW PACTRL_ACCESSW_ALLOCATE_ALL_NODES;
typedef PACTRL_AUDITW PACTRL_AUDITW_ALLOCATE_ALL_NODES;
extern RPC_IF_HANDLE __MIDL_itf_iaccess_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iaccess_0000_0000_v0_0_s_ifspec;
#ifndef __IAccessControl_INTERFACE_DEFINED__
#define __IAccessControl_INTERFACE_DEFINED__
extern const IID IID_IAccessControl;
typedef struct IAccessControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAccessControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAccessControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAccessControl * This);
	HRESULT(STDMETHODCALLTYPE * GrantAccessRights) (IAccessControl * This, PACTRL_ACCESSW pAccessList);
	HRESULT(STDMETHODCALLTYPE * SetAccessRights) (IAccessControl * This, PACTRL_ACCESSW pAccessList);
	HRESULT(STDMETHODCALLTYPE * SetOwner) (IAccessControl * This, PTRUSTEEW pOwner, PTRUSTEEW pGroup);
	HRESULT(STDMETHODCALLTYPE * RevokeAccessRights) (IAccessControl * This, LPWSTR lpProperty, ULONG cTrustees, TRUSTEEW prgTrustees[]);
	HRESULT(STDMETHODCALLTYPE * GetAllAccessRights) (IAccessControl * This, LPWSTR lpProperty, PACTRL_ACCESSW_ALLOCATE_ALL_NODES * ppAccessList, PTRUSTEEW * ppOwner, PTRUSTEEW * ppGroup);
	HRESULT(STDMETHODCALLTYPE * IsAccessAllowed) (IAccessControl * This, PTRUSTEEW pTrustee, LPWSTR lpProperty, ACCESS_RIGHTS AccessRights, BOOL * pfAccessAllowed);
	END_INTERFACE
}  IAccessControlVtbl;
interface IAccessControl
{
	CONST_VTBL struct IAccessControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAccessControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAccessControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAccessControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAccessControl_GrantAccessRights(This,pAccessList)( (This)->lpVtbl -> GrantAccessRights(This,pAccessList) )
#define IAccessControl_SetAccessRights(This,pAccessList)( (This)->lpVtbl -> SetAccessRights(This,pAccessList) )
#define IAccessControl_SetOwner(This,pOwner,pGroup)( (This)->lpVtbl -> SetOwner(This,pOwner,pGroup) )
#define IAccessControl_RevokeAccessRights(This,lpProperty,cTrustees,prgTrustees)( (This)->lpVtbl -> RevokeAccessRights(This,lpProperty,cTrustees,prgTrustees) )
#define IAccessControl_GetAllAccessRights(This,lpProperty,ppAccessList,ppOwner,ppGroup)( (This)->lpVtbl -> GetAllAccessRights(This,lpProperty,ppAccessList,ppOwner,ppGroup) )
#define IAccessControl_IsAccessAllowed(This,pTrustee,lpProperty,AccessRights,pfAccessAllowed)( (This)->lpVtbl -> IsAccessAllowed(This,pTrustee,lpProperty,AccessRights,pfAccessAllowed) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_iaccess_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iaccess_0000_0001_v0_0_s_ifspec;
#ifndef __IAuditControl_INTERFACE_DEFINED__
#define __IAuditControl_INTERFACE_DEFINED__
extern const IID IID_IAuditControl;
typedef struct IAuditControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAuditControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAuditControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAuditControl * This);
	HRESULT(STDMETHODCALLTYPE * GrantAuditRights) (IAuditControl * This, PACTRL_AUDITW pAuditList);
	HRESULT(STDMETHODCALLTYPE * SetAuditRights) (IAuditControl * This, PACTRL_AUDITW pAuditList);
	HRESULT(STDMETHODCALLTYPE * RevokeAuditRights) (IAuditControl * This, LPWSTR lpProperty, ULONG cTrustees, TRUSTEEW prgTrustees[]);
	HRESULT(STDMETHODCALLTYPE * GetAllAuditRights) (IAuditControl * This, LPWSTR lpProperty, PACTRL_AUDITW * ppAuditList);
	HRESULT(STDMETHODCALLTYPE * IsAccessAudited) (IAuditControl * This, PTRUSTEEW pTrustee, ACCESS_RIGHTS AuditRights, BOOL * pfAccessAudited);
	END_INTERFACE
}  IAuditControlVtbl;
interface IAuditControl
{
	CONST_VTBL struct IAuditControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAuditControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAuditControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAuditControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAuditControl_GrantAuditRights(This,pAuditList)( (This)->lpVtbl -> GrantAuditRights(This,pAuditList) )
#define IAuditControl_SetAuditRights(This,pAuditList)( (This)->lpVtbl -> SetAuditRights(This,pAuditList) )
#define IAuditControl_RevokeAuditRights(This,lpProperty,cTrustees,prgTrustees)( (This)->lpVtbl -> RevokeAuditRights(This,lpProperty,cTrustees,prgTrustees) )
#define IAuditControl_GetAllAuditRights(This,lpProperty,ppAuditList)( (This)->lpVtbl -> GetAllAuditRights(This,lpProperty,ppAuditList) )
#define IAuditControl_IsAccessAudited(This,pTrustee,AuditRights,pfAccessAudited)( (This)->lpVtbl -> IsAccessAudited(This,pTrustee,AuditRights,pfAccessAudited) )
#endif
#endif
#endif
