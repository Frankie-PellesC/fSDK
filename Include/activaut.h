/*+@@file@@----------------------------------------------------------------*//*!
 \file		activaut.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 14:23:12 2016
 \date		Modified on Fri Jul  1 14:23:12 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __activaut_h__
#define __activaut_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IScriptNode_FWD_DEFINED__
#define __IScriptNode_FWD_DEFINED__
typedef interface IScriptNode IScriptNode;
#endif
#ifndef __IScriptEntry_FWD_DEFINED__
#define __IScriptEntry_FWD_DEFINED__
typedef interface IScriptEntry IScriptEntry;
#endif
#ifndef __IScriptScriptlet_FWD_DEFINED__
#define __IScriptScriptlet_FWD_DEFINED__
typedef interface IScriptScriptlet IScriptScriptlet;
#endif
#ifndef __IActiveScriptAuthor_FWD_DEFINED__
#define __IActiveScriptAuthor_FWD_DEFINED__
typedef interface IActiveScriptAuthor IActiveScriptAuthor;
#endif
#ifndef __IActiveScriptAuthorProcedure_FWD_DEFINED__
#define __IActiveScriptAuthorProcedure_FWD_DEFINED__
typedef interface IActiveScriptAuthorProcedure IActiveScriptAuthorProcedure;
#endif
#include "ocidl.h"
#pragma comment(lib,"uuid.lib")
#ifndef __ActivAut_h
#define __ActivAut_h
#ifndef _NO_AUTHOR_GUIDS
DEFINE_GUID(CATID_ActiveScriptAuthor, 0xaee2a92, 0xbcbb, 0x11d0, 0x8c, 0x72, 0x0, 0xc0, 0x4f, 0xc2, 0xb0, 0x85);
DEFINE_GUID(IID_IActiveScriptAuthor, 0x9c109da0, 0x7006, 0x11d1, 0xb3, 0x6c, 0x00, 0xa0, 0xc9, 0x11, 0xe8, 0xb2);
DEFINE_GUID(IID_IScriptNode, 0xaee2a94, 0xbcbb, 0x11d0, 0x8c, 0x72, 0x0, 0xc0, 0x4f, 0xc2, 0xb0, 0x85);
DEFINE_GUID(IID_IScriptEntry, 0xaee2a95, 0xbcbb, 0x11d0, 0x8c, 0x72, 0x0, 0xc0, 0x4f, 0xc2, 0xb0, 0x85);
DEFINE_GUID(IID_IScriptScriptlet, 0xaee2a96, 0xbcbb, 0x11d0, 0x8c, 0x72, 0x0, 0xc0, 0x4f, 0xc2, 0xb0, 0x85);
DEFINE_GUID(IID_IActiveScriptAuthorProcedure, 0x7e2d4b70, 0xbd9a, 0x11d0, 0x93, 0x36, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);
#endif
const DWORD fasaPreferInternalHandler = 0x0001;
const DWORD fasaSupportInternalHandler = 0x0002;
const DWORD fasaCaseSensitive = 0x0004;
const DWORD SCRIPT_CMPL_NOLIST = 0x0000;
const DWORD SCRIPT_CMPL_MEMBERLIST = 0x0001;
const DWORD SCRIPT_CMPL_ENUMLIST = 0x0002;
const DWORD SCRIPT_CMPL_PARAMTIP = 0x0004;
const DWORD SCRIPT_CMPL_GLOBALLIST = 0x0008;
const DWORD SCRIPT_CMPL_ENUM_TRIGGER = 0x0001;
const DWORD SCRIPT_CMPL_MEMBER_TRIGGER = 0x0002;
const DWORD SCRIPT_CMPL_PARAM_TRIGGER = 0x0003;
const DWORD SCRIPT_CMPL_COMMIT = 0x0004;
const DWORD GETATTRTYPE_NORMAL = 0x0000;
const DWORD GETATTRTYPE_DEPSCAN = 0x0001;
const DWORD GETATTRFLAG_THIS = 0x0100;
const DWORD GETATTRFLAG_HUMANTEXT = 0x8000;
const DWORD SOURCETEXT_ATTR_HUMANTEXT = 0x8000;
const DWORD SOURCETEXT_ATTR_IDENTIFIER = 0x0100;
const DWORD SOURCETEXT_ATTR_MEMBERLOOKUP = 0x0200;
const DWORD SOURCETEXT_ATTR_THIS = 0x0400;
typedef WORD SOURCE_TEXT_ATTR;
extern RPC_IF_HANDLE __MIDL_itf_activaut_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activaut_0000_0000_v0_0_s_ifspec;
#ifndef __IScriptNode_INTERFACE_DEFINED__
#define __IScriptNode_INTERFACE_DEFINED__
extern const IID IID_IScriptNode;
typedef struct IScriptNodeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IScriptNode * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IScriptNode * This);
	ULONG(STDMETHODCALLTYPE * Release) (IScriptNode * This);
	HRESULT(STDMETHODCALLTYPE * Alive) (IScriptNode * This);
	HRESULT(STDMETHODCALLTYPE * Delete) (IScriptNode * This);
	HRESULT(STDMETHODCALLTYPE * GetParent) (IScriptNode * This, IScriptNode ** ppsnParent);
	HRESULT(STDMETHODCALLTYPE * GetIndexInParent) (IScriptNode * This, ULONG * pisn);
	HRESULT(STDMETHODCALLTYPE * GetCookie) (IScriptNode * This, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfChildren) (IScriptNode * This, ULONG * pcsn);
	HRESULT(STDMETHODCALLTYPE * GetChild) (IScriptNode * This, ULONG isn, IScriptNode ** ppsn);
	HRESULT(STDMETHODCALLTYPE * GetLanguage) (IScriptNode * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * CreateChildEntry) (IScriptNode * This, ULONG isn, DWORD dwCookie, LPCOLESTR pszDelimiter, IScriptEntry ** ppse);
	HRESULT(STDMETHODCALLTYPE * CreateChildHandler) (IScriptNode * This, LPCOLESTR pszDefaultName, LPCOLESTR * prgpszNames, ULONG cpszNames, LPCOLESTR pszEvent, LPCOLESTR pszDelimiter, ITypeInfo * ptiSignature, ULONG iMethodSignature, ULONG isn, DWORD dwCookie, IScriptEntry ** ppse);
	END_INTERFACE
}  IScriptNodeVtbl;
interface IScriptNode
{
	CONST_VTBL struct IScriptNodeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IScriptNode_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IScriptNode_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IScriptNode_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IScriptNode_Alive(This)    ( (This)->lpVtbl -> Alive(This) )
#define IScriptNode_Delete(This)    ( (This)->lpVtbl -> Delete(This) )
#define IScriptNode_GetParent(This,ppsnParent)    ( (This)->lpVtbl -> GetParent(This,ppsnParent) )
#define IScriptNode_GetIndexInParent(This,pisn)    ( (This)->lpVtbl -> GetIndexInParent(This,pisn) )
#define IScriptNode_GetCookie(This,pdwCookie)    ( (This)->lpVtbl -> GetCookie(This,pdwCookie) )
#define IScriptNode_GetNumberOfChildren(This,pcsn)    ( (This)->lpVtbl -> GetNumberOfChildren(This,pcsn) )
#define IScriptNode_GetChild(This,isn,ppsn)    ( (This)->lpVtbl -> GetChild(This,isn,ppsn) )
#define IScriptNode_GetLanguage(This,pbstr)    ( (This)->lpVtbl -> GetLanguage(This,pbstr) )
#define IScriptNode_CreateChildEntry(This,isn,dwCookie,pszDelimiter,ppse)    ( (This)->lpVtbl -> CreateChildEntry(This,isn,dwCookie,pszDelimiter,ppse) )
#define IScriptNode_CreateChildHandler(This,pszDefaultName,prgpszNames,cpszNames,pszEvent,pszDelimiter,ptiSignature,iMethodSignature,isn,dwCookie,ppse)    ( (This)->lpVtbl -> CreateChildHandler(This,pszDefaultName,prgpszNames,cpszNames,pszEvent,pszDelimiter,ptiSignature,iMethodSignature,isn,dwCookie,ppse) )
#endif
#endif
#ifndef __IScriptEntry_INTERFACE_DEFINED__
#define __IScriptEntry_INTERFACE_DEFINED__
extern const IID IID_IScriptEntry;
typedef struct IScriptEntryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IScriptEntry * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IScriptEntry * This);
	ULONG(STDMETHODCALLTYPE * Release) (IScriptEntry * This);
	HRESULT(STDMETHODCALLTYPE * Alive) (IScriptEntry * This);
	HRESULT(STDMETHODCALLTYPE * Delete) (IScriptEntry * This);
	HRESULT(STDMETHODCALLTYPE * GetParent) (IScriptEntry * This, IScriptNode ** ppsnParent);
	HRESULT(STDMETHODCALLTYPE * GetIndexInParent) (IScriptEntry * This, ULONG * pisn);
	HRESULT(STDMETHODCALLTYPE * GetCookie) (IScriptEntry * This, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfChildren) (IScriptEntry * This, ULONG * pcsn);
	HRESULT(STDMETHODCALLTYPE * GetChild) (IScriptEntry * This, ULONG isn, IScriptNode ** ppsn);
	HRESULT(STDMETHODCALLTYPE * GetLanguage) (IScriptEntry * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * CreateChildEntry) (IScriptEntry * This, ULONG isn, DWORD dwCookie, LPCOLESTR pszDelimiter, IScriptEntry ** ppse);
	HRESULT(STDMETHODCALLTYPE * CreateChildHandler) (IScriptEntry * This, LPCOLESTR pszDefaultName, LPCOLESTR * prgpszNames, ULONG cpszNames, LPCOLESTR pszEvent, LPCOLESTR pszDelimiter, ITypeInfo * ptiSignature, ULONG iMethodSignature, ULONG isn, DWORD dwCookie, IScriptEntry ** ppse);
	HRESULT(STDMETHODCALLTYPE * GetText) (IScriptEntry * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * SetText) (IScriptEntry * This, LPCOLESTR psz);
	HRESULT(STDMETHODCALLTYPE * GetBody) (IScriptEntry * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * SetBody) (IScriptEntry * This, LPCOLESTR psz);
	HRESULT(STDMETHODCALLTYPE * GetName) (IScriptEntry * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * SetName) (IScriptEntry * This, LPCOLESTR psz);
	HRESULT(STDMETHODCALLTYPE * GetItemName) (IScriptEntry * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * SetItemName) (IScriptEntry * This, LPCOLESTR psz);
	HRESULT(STDMETHODCALLTYPE * GetSignature) (IScriptEntry * This, ITypeInfo ** ppti, ULONG * piMethod);
	HRESULT(STDMETHODCALLTYPE * SetSignature) (IScriptEntry * This, ITypeInfo * pti, ULONG iMethod);
	HRESULT(STDMETHODCALLTYPE * GetRange) (IScriptEntry * This, ULONG * pichMin, ULONG * pcch);
	END_INTERFACE
}  IScriptEntryVtbl;
interface IScriptEntry
{
	CONST_VTBL struct IScriptEntryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IScriptEntry_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IScriptEntry_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IScriptEntry_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IScriptEntry_Alive(This)    ( (This)->lpVtbl -> Alive(This) )
#define IScriptEntry_Delete(This)    ( (This)->lpVtbl -> Delete(This) )
#define IScriptEntry_GetParent(This,ppsnParent)    ( (This)->lpVtbl -> GetParent(This,ppsnParent) )
#define IScriptEntry_GetIndexInParent(This,pisn)    ( (This)->lpVtbl -> GetIndexInParent(This,pisn) )
#define IScriptEntry_GetCookie(This,pdwCookie)    ( (This)->lpVtbl -> GetCookie(This,pdwCookie) )
#define IScriptEntry_GetNumberOfChildren(This,pcsn)    ( (This)->lpVtbl -> GetNumberOfChildren(This,pcsn) )
#define IScriptEntry_GetChild(This,isn,ppsn)    ( (This)->lpVtbl -> GetChild(This,isn,ppsn) )
#define IScriptEntry_GetLanguage(This,pbstr)    ( (This)->lpVtbl -> GetLanguage(This,pbstr) )
#define IScriptEntry_CreateChildEntry(This,isn,dwCookie,pszDelimiter,ppse)    ( (This)->lpVtbl -> CreateChildEntry(This,isn,dwCookie,pszDelimiter,ppse) )
#define IScriptEntry_CreateChildHandler(This,pszDefaultName,prgpszNames,cpszNames,pszEvent,pszDelimiter,ptiSignature,iMethodSignature,isn,dwCookie,ppse)    ( (This)->lpVtbl -> CreateChildHandler(This,pszDefaultName,prgpszNames,cpszNames,pszEvent,pszDelimiter,ptiSignature,iMethodSignature,isn,dwCookie,ppse) )
#define IScriptEntry_GetText(This,pbstr)    ( (This)->lpVtbl -> GetText(This,pbstr) )
#define IScriptEntry_SetText(This,psz)    ( (This)->lpVtbl -> SetText(This,psz) )
#define IScriptEntry_GetBody(This,pbstr)    ( (This)->lpVtbl -> GetBody(This,pbstr) )
#define IScriptEntry_SetBody(This,psz)    ( (This)->lpVtbl -> SetBody(This,psz) )
#define IScriptEntry_GetName(This,pbstr)    ( (This)->lpVtbl -> GetName(This,pbstr) )
#define IScriptEntry_SetName(This,psz)    ( (This)->lpVtbl -> SetName(This,psz) )
#define IScriptEntry_GetItemName(This,pbstr)    ( (This)->lpVtbl -> GetItemName(This,pbstr) )
#define IScriptEntry_SetItemName(This,psz)    ( (This)->lpVtbl -> SetItemName(This,psz) )
#define IScriptEntry_GetSignature(This,ppti,piMethod)    ( (This)->lpVtbl -> GetSignature(This,ppti,piMethod) )
#define IScriptEntry_SetSignature(This,pti,iMethod)    ( (This)->lpVtbl -> SetSignature(This,pti,iMethod) )
#define IScriptEntry_GetRange(This,pichMin,pcch)    ( (This)->lpVtbl -> GetRange(This,pichMin,pcch) )
#endif
#endif
#ifndef __IScriptScriptlet_INTERFACE_DEFINED__
#define __IScriptScriptlet_INTERFACE_DEFINED__
extern const IID IID_IScriptScriptlet;
typedef struct IScriptScriptletVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IScriptScriptlet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IScriptScriptlet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IScriptScriptlet * This);
	HRESULT(STDMETHODCALLTYPE * Alive) (IScriptScriptlet * This);
	HRESULT(STDMETHODCALLTYPE * Delete) (IScriptScriptlet * This);
	HRESULT(STDMETHODCALLTYPE * GetParent) (IScriptScriptlet * This, IScriptNode ** ppsnParent);
	HRESULT(STDMETHODCALLTYPE * GetIndexInParent) (IScriptScriptlet * This, ULONG * pisn);
	HRESULT(STDMETHODCALLTYPE * GetCookie) (IScriptScriptlet * This, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfChildren) (IScriptScriptlet * This, ULONG * pcsn);
	HRESULT(STDMETHODCALLTYPE * GetChild) (IScriptScriptlet * This, ULONG isn, IScriptNode ** ppsn);
	HRESULT(STDMETHODCALLTYPE * GetLanguage) (IScriptScriptlet * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * CreateChildEntry) (IScriptScriptlet * This, ULONG isn, DWORD dwCookie, LPCOLESTR pszDelimiter, IScriptEntry ** ppse);
	HRESULT(STDMETHODCALLTYPE * CreateChildHandler) (IScriptScriptlet * This, LPCOLESTR pszDefaultName, LPCOLESTR * prgpszNames, ULONG cpszNames, LPCOLESTR pszEvent, LPCOLESTR pszDelimiter, ITypeInfo * ptiSignature, ULONG iMethodSignature, ULONG isn, DWORD dwCookie, IScriptEntry ** ppse);
	HRESULT(STDMETHODCALLTYPE * GetText) (IScriptScriptlet * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * SetText) (IScriptScriptlet * This, LPCOLESTR psz);
	HRESULT(STDMETHODCALLTYPE * GetBody) (IScriptScriptlet * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * SetBody) (IScriptScriptlet * This, LPCOLESTR psz);
	HRESULT(STDMETHODCALLTYPE * GetName) (IScriptScriptlet * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * SetName) (IScriptScriptlet * This, LPCOLESTR psz);
	HRESULT(STDMETHODCALLTYPE * GetItemName) (IScriptScriptlet * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * SetItemName) (IScriptScriptlet * This, LPCOLESTR psz);
	HRESULT(STDMETHODCALLTYPE * GetSignature) (IScriptScriptlet * This, ITypeInfo ** ppti, ULONG * piMethod);
	HRESULT(STDMETHODCALLTYPE * SetSignature) (IScriptScriptlet * This, ITypeInfo * pti, ULONG iMethod);
	HRESULT(STDMETHODCALLTYPE * GetRange) (IScriptScriptlet * This, ULONG * pichMin, ULONG * pcch);
	HRESULT(STDMETHODCALLTYPE * GetSubItemName) (IScriptScriptlet * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * SetSubItemName) (IScriptScriptlet * This, LPCOLESTR psz);
	HRESULT(STDMETHODCALLTYPE * GetEventName) (IScriptScriptlet * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * SetEventName) (IScriptScriptlet * This, LPCOLESTR psz);
	HRESULT(STDMETHODCALLTYPE * GetSimpleEventName) (IScriptScriptlet * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * SetSimpleEventName) (IScriptScriptlet * This, LPCOLESTR psz);
	END_INTERFACE
}  IScriptScriptletVtbl;
interface IScriptScriptlet
{
	CONST_VTBL struct IScriptScriptletVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IScriptScriptlet_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IScriptScriptlet_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IScriptScriptlet_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IScriptScriptlet_Alive(This)    ( (This)->lpVtbl -> Alive(This) )
#define IScriptScriptlet_Delete(This)    ( (This)->lpVtbl -> Delete(This) )
#define IScriptScriptlet_GetParent(This,ppsnParent)    ( (This)->lpVtbl -> GetParent(This,ppsnParent) )
#define IScriptScriptlet_GetIndexInParent(This,pisn)    ( (This)->lpVtbl -> GetIndexInParent(This,pisn) )
#define IScriptScriptlet_GetCookie(This,pdwCookie)    ( (This)->lpVtbl -> GetCookie(This,pdwCookie) )
#define IScriptScriptlet_GetNumberOfChildren(This,pcsn)    ( (This)->lpVtbl -> GetNumberOfChildren(This,pcsn) )
#define IScriptScriptlet_GetChild(This,isn,ppsn)    ( (This)->lpVtbl -> GetChild(This,isn,ppsn) )
#define IScriptScriptlet_GetLanguage(This,pbstr)    ( (This)->lpVtbl -> GetLanguage(This,pbstr) )
#define IScriptScriptlet_CreateChildEntry(This,isn,dwCookie,pszDelimiter,ppse)    ( (This)->lpVtbl -> CreateChildEntry(This,isn,dwCookie,pszDelimiter,ppse) )
#define IScriptScriptlet_CreateChildHandler(This,pszDefaultName,prgpszNames,cpszNames,pszEvent,pszDelimiter,ptiSignature,iMethodSignature,isn,dwCookie,ppse)    ( (This)->lpVtbl -> CreateChildHandler(This,pszDefaultName,prgpszNames,cpszNames,pszEvent,pszDelimiter,ptiSignature,iMethodSignature,isn,dwCookie,ppse) )
#define IScriptScriptlet_GetText(This,pbstr)    ( (This)->lpVtbl -> GetText(This,pbstr) )
#define IScriptScriptlet_SetText(This,psz)    ( (This)->lpVtbl -> SetText(This,psz) )
#define IScriptScriptlet_GetBody(This,pbstr)    ( (This)->lpVtbl -> GetBody(This,pbstr) )
#define IScriptScriptlet_SetBody(This,psz)    ( (This)->lpVtbl -> SetBody(This,psz) )
#define IScriptScriptlet_GetName(This,pbstr)    ( (This)->lpVtbl -> GetName(This,pbstr) )
#define IScriptScriptlet_SetName(This,psz)    ( (This)->lpVtbl -> SetName(This,psz) )
#define IScriptScriptlet_GetItemName(This,pbstr)    ( (This)->lpVtbl -> GetItemName(This,pbstr) )
#define IScriptScriptlet_SetItemName(This,psz)    ( (This)->lpVtbl -> SetItemName(This,psz) )
#define IScriptScriptlet_GetSignature(This,ppti,piMethod)    ( (This)->lpVtbl -> GetSignature(This,ppti,piMethod) )
#define IScriptScriptlet_SetSignature(This,pti,iMethod)    ( (This)->lpVtbl -> SetSignature(This,pti,iMethod) )
#define IScriptScriptlet_GetRange(This,pichMin,pcch)    ( (This)->lpVtbl -> GetRange(This,pichMin,pcch) )
#define IScriptScriptlet_GetSubItemName(This,pbstr)    ( (This)->lpVtbl -> GetSubItemName(This,pbstr) )
#define IScriptScriptlet_SetSubItemName(This,psz)    ( (This)->lpVtbl -> SetSubItemName(This,psz) )
#define IScriptScriptlet_GetEventName(This,pbstr)    ( (This)->lpVtbl -> GetEventName(This,pbstr) )
#define IScriptScriptlet_SetEventName(This,psz)    ( (This)->lpVtbl -> SetEventName(This,psz) )
#define IScriptScriptlet_GetSimpleEventName(This,pbstr)    ( (This)->lpVtbl -> GetSimpleEventName(This,pbstr) )
#define IScriptScriptlet_SetSimpleEventName(This,psz)    ( (This)->lpVtbl -> SetSimpleEventName(This,psz) )
#endif
#endif
#ifndef __IActiveScriptAuthor_INTERFACE_DEFINED__
#define __IActiveScriptAuthor_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptAuthor;
typedef struct IActiveScriptAuthorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActiveScriptAuthor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IActiveScriptAuthor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IActiveScriptAuthor * This);
	HRESULT(STDMETHODCALLTYPE * AddNamedItem) (IActiveScriptAuthor * This, LPCOLESTR pszName, DWORD dwFlags, IDispatch * pdisp);
	HRESULT(STDMETHODCALLTYPE * AddScriptlet) (IActiveScriptAuthor * This, LPCOLESTR pszDefaultName, LPCOLESTR pszCode, LPCOLESTR pszItemName, LPCOLESTR pszSubItemName, LPCOLESTR pszEventName, LPCOLESTR pszDelimiter, DWORD dwCookie, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * ParseScriptText) (IActiveScriptAuthor * This, LPCOLESTR pszCode, LPCOLESTR pszItemName, LPCOLESTR pszDelimiter, DWORD dwCookie, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetScriptTextAttributes) (IActiveScriptAuthor * This, LPCOLESTR pszCode, ULONG cch, LPCOLESTR pszDelimiter, DWORD dwFlags, SOURCE_TEXT_ATTR * pattr);
	HRESULT(STDMETHODCALLTYPE * GetScriptletTextAttributes) (IActiveScriptAuthor * This, LPCOLESTR pszCode, ULONG cch, LPCOLESTR pszDelimiter, DWORD dwFlags, SOURCE_TEXT_ATTR * pattr);
	HRESULT(STDMETHODCALLTYPE * GetRoot) (IActiveScriptAuthor * This, IScriptNode ** ppsp);
	HRESULT(STDMETHODCALLTYPE * GetLanguageFlags) (IActiveScriptAuthor * This, DWORD * pgrfasa);
	HRESULT(STDMETHODCALLTYPE * GetEventHandler) (IActiveScriptAuthor * This, IDispatch * pdisp, LPCOLESTR pszItem, LPCOLESTR pszSubItem, LPCOLESTR pszEvent, IScriptEntry ** ppse);
	HRESULT(STDMETHODCALLTYPE * RemoveNamedItem) (IActiveScriptAuthor * This, LPCOLESTR pszName);
	HRESULT(STDMETHODCALLTYPE * AddTypeLib) (IActiveScriptAuthor * This, REFGUID rguidTypeLib, DWORD dwMajor, DWORD dwMinor, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * RemoveTypeLib) (IActiveScriptAuthor * This, REFGUID rguidTypeLib, DWORD dwMajor, DWORD dwMinor);
	HRESULT(STDMETHODCALLTYPE * GetChars) (IActiveScriptAuthor * This, DWORD fRequestedList, BSTR * pbstrChars);
	HRESULT(STDMETHODCALLTYPE * GetInfoFromContext) (IActiveScriptAuthor * This, LPCOLESTR pszCode, ULONG cchCode, ULONG ichCurrentPosition, DWORD dwListTypesRequested, DWORD * pdwListTypesProvided, ULONG * pichListAnchorPosition, ULONG * pichFuncAnchorPosition, MEMBERID * pmemid, LONG * piCurrentParameter, IUnknown ** ppunk);
	HRESULT(STDMETHODCALLTYPE * IsCommitChar) (IActiveScriptAuthor * This, OLECHAR ch, BOOL * pfcommit);
	END_INTERFACE
}  IActiveScriptAuthorVtbl;
interface IActiveScriptAuthor
{
	CONST_VTBL struct IActiveScriptAuthorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptAuthor_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptAuthor_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptAuthor_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptAuthor_AddNamedItem(This,pszName,dwFlags,pdisp)    ( (This)->lpVtbl -> AddNamedItem(This,pszName,dwFlags,pdisp) )
#define IActiveScriptAuthor_AddScriptlet(This,pszDefaultName,pszCode,pszItemName,pszSubItemName,pszEventName,pszDelimiter,dwCookie,dwFlags)    ( (This)->lpVtbl -> AddScriptlet(This,pszDefaultName,pszCode,pszItemName,pszSubItemName,pszEventName,pszDelimiter,dwCookie,dwFlags) )
#define IActiveScriptAuthor_ParseScriptText(This,pszCode,pszItemName,pszDelimiter,dwCookie,dwFlags)    ( (This)->lpVtbl -> ParseScriptText(This,pszCode,pszItemName,pszDelimiter,dwCookie,dwFlags) )
#define IActiveScriptAuthor_GetScriptTextAttributes(This,pszCode,cch,pszDelimiter,dwFlags,pattr)    ( (This)->lpVtbl -> GetScriptTextAttributes(This,pszCode,cch,pszDelimiter,dwFlags,pattr) )
#define IActiveScriptAuthor_GetScriptletTextAttributes(This,pszCode,cch,pszDelimiter,dwFlags,pattr)    ( (This)->lpVtbl -> GetScriptletTextAttributes(This,pszCode,cch,pszDelimiter,dwFlags,pattr) )
#define IActiveScriptAuthor_GetRoot(This,ppsp)    ( (This)->lpVtbl -> GetRoot(This,ppsp) )
#define IActiveScriptAuthor_GetLanguageFlags(This,pgrfasa)    ( (This)->lpVtbl -> GetLanguageFlags(This,pgrfasa) )
#define IActiveScriptAuthor_GetEventHandler(This,pdisp,pszItem,pszSubItem,pszEvent,ppse)    ( (This)->lpVtbl -> GetEventHandler(This,pdisp,pszItem,pszSubItem,pszEvent,ppse) )
#define IActiveScriptAuthor_RemoveNamedItem(This,pszName)    ( (This)->lpVtbl -> RemoveNamedItem(This,pszName) )
#define IActiveScriptAuthor_AddTypeLib(This,rguidTypeLib,dwMajor,dwMinor,dwFlags)    ( (This)->lpVtbl -> AddTypeLib(This,rguidTypeLib,dwMajor,dwMinor,dwFlags) )
#define IActiveScriptAuthor_RemoveTypeLib(This,rguidTypeLib,dwMajor,dwMinor)    ( (This)->lpVtbl -> RemoveTypeLib(This,rguidTypeLib,dwMajor,dwMinor) )
#define IActiveScriptAuthor_GetChars(This,fRequestedList,pbstrChars)    ( (This)->lpVtbl -> GetChars(This,fRequestedList,pbstrChars) )
#define IActiveScriptAuthor_GetInfoFromContext(This,pszCode,cchCode,ichCurrentPosition,dwListTypesRequested,pdwListTypesProvided,pichListAnchorPosition,pichFuncAnchorPosition,pmemid,piCurrentParameter,ppunk)    ( (This)->lpVtbl -> GetInfoFromContext(This,pszCode,cchCode,ichCurrentPosition,dwListTypesRequested,pdwListTypesProvided,pichListAnchorPosition,pichFuncAnchorPosition,pmemid,piCurrentParameter,ppunk) )
#define IActiveScriptAuthor_IsCommitChar(This,ch,pfcommit)    ( (This)->lpVtbl -> IsCommitChar(This,ch,pfcommit) )
#endif
#endif
#ifndef __IActiveScriptAuthorProcedure_INTERFACE_DEFINED__
#define __IActiveScriptAuthorProcedure_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptAuthorProcedure;
typedef struct IActiveScriptAuthorProcedureVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActiveScriptAuthorProcedure * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IActiveScriptAuthorProcedure * This);
	ULONG(STDMETHODCALLTYPE * Release) (IActiveScriptAuthorProcedure * This);
	HRESULT(STDMETHODCALLTYPE * ParseProcedureText) (IActiveScriptAuthorProcedure * This, LPCOLESTR pszCode, LPCOLESTR pszFormalParams, LPCOLESTR pszProcedureName, LPCOLESTR pszItemName, LPCOLESTR pszDelimiter, DWORD dwCookie, DWORD dwFlags, IDispatch * pdispFor);
	END_INTERFACE
}  IActiveScriptAuthorProcedureVtbl;
interface IActiveScriptAuthorProcedure
{
	CONST_VTBL struct IActiveScriptAuthorProcedureVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptAuthorProcedure_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptAuthorProcedure_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptAuthorProcedure_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptAuthorProcedure_ParseProcedureText(This,pszCode,pszFormalParams,pszProcedureName,pszItemName,pszDelimiter,dwCookie,dwFlags,pdispFor)    ( (This)->lpVtbl -> ParseProcedureText(This,pszCode,pszFormalParams,pszProcedureName,pszItemName,pszDelimiter,dwCookie,dwFlags,pdispFor) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_activaut_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activaut_0000_0005_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif
