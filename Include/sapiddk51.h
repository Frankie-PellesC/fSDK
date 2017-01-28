/*+@@file@@----------------------------------------------------------------*//*!
 \file		sapiddk51.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 21:39:38 2016
 \date		Modified on Fri Sep 16 21:39:38 2016
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
#ifndef __sapiddk51_h__
#define __sapiddk51_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ISpTokenUI_FWD_DEFINED__
#define __ISpTokenUI_FWD_DEFINED__
typedef interface ISpTokenUI ISpTokenUI;
#endif
#ifndef __ISpObjectTokenEnumBuilder_FWD_DEFINED__
#define __ISpObjectTokenEnumBuilder_FWD_DEFINED__
typedef interface ISpObjectTokenEnumBuilder ISpObjectTokenEnumBuilder;
#endif
#ifndef __ISpErrorLog_FWD_DEFINED__
#define __ISpErrorLog_FWD_DEFINED__
typedef interface ISpErrorLog ISpErrorLog;
#endif
#ifndef __ISpGrammarCompiler_FWD_DEFINED__
#define __ISpGrammarCompiler_FWD_DEFINED__
typedef interface ISpGrammarCompiler ISpGrammarCompiler;
#endif
#ifndef __ISpGramCompBackend_FWD_DEFINED__
#define __ISpGramCompBackend_FWD_DEFINED__
typedef interface ISpGramCompBackend ISpGramCompBackend;
#endif
#ifndef __ISpITNProcessor_FWD_DEFINED__
#define __ISpITNProcessor_FWD_DEFINED__
typedef interface ISpITNProcessor ISpITNProcessor;
#endif
#ifndef __ISpPhraseBuilder_FWD_DEFINED__
#define __ISpPhraseBuilder_FWD_DEFINED__
typedef interface ISpPhraseBuilder ISpPhraseBuilder;
#endif
#ifndef __ISpThreadControl_FWD_DEFINED__
#define __ISpThreadControl_FWD_DEFINED__
typedef interface ISpThreadControl ISpThreadControl;
#endif
#ifndef __ISpTaskManager_FWD_DEFINED__
#define __ISpTaskManager_FWD_DEFINED__
typedef interface ISpTaskManager ISpTaskManager;
#endif
#ifndef __ISpTTSEngineSite_FWD_DEFINED__
#define __ISpTTSEngineSite_FWD_DEFINED__
typedef interface ISpTTSEngineSite ISpTTSEngineSite;
#endif
#ifndef __ISpTTSEngine_FWD_DEFINED__
#define __ISpTTSEngine_FWD_DEFINED__
typedef interface ISpTTSEngine ISpTTSEngine;
#endif
#ifndef __ISpCFGInterpreterSite_FWD_DEFINED__
#define __ISpCFGInterpreterSite_FWD_DEFINED__
typedef interface ISpCFGInterpreterSite ISpCFGInterpreterSite;
#endif
#ifndef __ISpCFGInterpreter_FWD_DEFINED__
#define __ISpCFGInterpreter_FWD_DEFINED__
typedef interface ISpCFGInterpreter ISpCFGInterpreter;
#endif
#ifndef __ISpSREngineSite_FWD_DEFINED__
#define __ISpSREngineSite_FWD_DEFINED__
typedef interface ISpSREngineSite ISpSREngineSite;
#endif
#ifndef __ISpSREngine_FWD_DEFINED__
#define __ISpSREngine_FWD_DEFINED__
typedef interface ISpSREngine ISpSREngine;
#endif
#ifndef ___ISpPrivateEngineCall_FWD_DEFINED__
#define ___ISpPrivateEngineCall_FWD_DEFINED__
typedef interface _ISpPrivateEngineCall _ISpPrivateEngineCall;
#endif
#ifndef __SpDataKey_FWD_DEFINED__
#define __SpDataKey_FWD_DEFINED__
typedef struct SpDataKey SpDataKey;
#endif
#ifndef __SpObjectTokenEnum_FWD_DEFINED__
#define __SpObjectTokenEnum_FWD_DEFINED__
typedef struct SpObjectTokenEnum SpObjectTokenEnum;
#endif
#ifndef __SpPhraseBuilder_FWD_DEFINED__
#define __SpPhraseBuilder_FWD_DEFINED__
typedef struct SpPhraseBuilder SpPhraseBuilder;
#endif
#ifndef __SpITNProcessor_FWD_DEFINED__
#define __SpITNProcessor_FWD_DEFINED__
typedef struct SpITNProcessor SpITNProcessor;
#endif
#ifndef __SpGrammarCompiler_FWD_DEFINED__
#define __SpGrammarCompiler_FWD_DEFINED__
typedef struct SpGrammarCompiler SpGrammarCompiler;
#endif
#ifndef __SpGramCompBackend_FWD_DEFINED__
#define __SpGramCompBackend_FWD_DEFINED__
typedef struct SpGramCompBackend SpGramCompBackend;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <sapi.h>
#define SPRECOEXTENSION   L"RecoExtension"
#define SPALTERNATESCLSID L"AlternatesCLSID"
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0000_v0_0_s_ifspec;
#ifndef __ISpTokenUI_INTERFACE_DEFINED__
#define __ISpTokenUI_INTERFACE_DEFINED__
extern const IID IID_ISpTokenUI;
typedef struct ISpTokenUIVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpTokenUI * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpTokenUI * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpTokenUI * This);
	HRESULT(STDMETHODCALLTYPE * IsUISupported) (ISpTokenUI * This, LPCWSTR pszTypeOfUI, void *pvExtraData, ULONG cbExtraData, IUnknown * punkObject, BOOL * pfSupported);
	HRESULT(STDMETHODCALLTYPE * DisplayUI) (ISpTokenUI * This, HWND hwndParent, LPCWSTR pszTitle, LPCWSTR pszTypeOfUI, void *pvExtraData, ULONG cbExtraData, ISpObjectToken * pToken, IUnknown * punkObject);
	END_INTERFACE
}  ISpTokenUIVtbl;
interface ISpTokenUI
{
	CONST_VTBL struct ISpTokenUIVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpTokenUI_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpTokenUI_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpTokenUI_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpTokenUI_IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,punkObject,pfSupported) ( (This)->lpVtbl -> IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,punkObject,pfSupported) )
#define ISpTokenUI_DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData,pToken,punkObject) ( (This)->lpVtbl -> DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData,pToken,punkObject) )
#endif
#endif
#ifndef __ISpObjectTokenEnumBuilder_INTERFACE_DEFINED__
#define __ISpObjectTokenEnumBuilder_INTERFACE_DEFINED__
extern const IID IID_ISpObjectTokenEnumBuilder;
typedef struct ISpObjectTokenEnumBuilderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpObjectTokenEnumBuilder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpObjectTokenEnumBuilder * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpObjectTokenEnumBuilder * This);
	HRESULT(STDMETHODCALLTYPE * Next) (ISpObjectTokenEnumBuilder * This, ULONG celt, ISpObjectToken ** pelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (ISpObjectTokenEnumBuilder * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ISpObjectTokenEnumBuilder * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ISpObjectTokenEnumBuilder * This, IEnumSpObjectTokens ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * Item) (ISpObjectTokenEnumBuilder * This, ULONG Index, ISpObjectToken ** ppToken);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ISpObjectTokenEnumBuilder * This, ULONG * pCount);
	HRESULT(STDMETHODCALLTYPE * SetAttribs) (ISpObjectTokenEnumBuilder * This, LPCWSTR pszReqAttribs, LPCWSTR pszOptAttribs);
	HRESULT(STDMETHODCALLTYPE * AddTokens) (ISpObjectTokenEnumBuilder * This, ULONG cTokens, ISpObjectToken ** pToken);
	HRESULT(STDMETHODCALLTYPE * AddTokensFromDataKey) (ISpObjectTokenEnumBuilder * This, ISpDataKey * pDataKey, LPCWSTR pszSubKey, LPCWSTR pszCategoryId);
	HRESULT(STDMETHODCALLTYPE * AddTokensFromTokenEnum) (ISpObjectTokenEnumBuilder * This, IEnumSpObjectTokens * pTokenEnum);
	HRESULT(STDMETHODCALLTYPE * Sort) (ISpObjectTokenEnumBuilder * This, LPCWSTR pszTokenIdToListFirst);
	END_INTERFACE
}  ISpObjectTokenEnumBuilderVtbl;
interface ISpObjectTokenEnumBuilder
{
	CONST_VTBL struct ISpObjectTokenEnumBuilderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpObjectTokenEnumBuilder_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpObjectTokenEnumBuilder_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpObjectTokenEnumBuilder_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpObjectTokenEnumBuilder_Next(This,celt,pelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,pelt,pceltFetched) )
#define ISpObjectTokenEnumBuilder_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define ISpObjectTokenEnumBuilder_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define ISpObjectTokenEnumBuilder_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#define ISpObjectTokenEnumBuilder_Item(This,Index,ppToken) ( (This)->lpVtbl -> Item(This,Index,ppToken) )
#define ISpObjectTokenEnumBuilder_GetCount(This,pCount) ( (This)->lpVtbl -> GetCount(This,pCount) )
#define ISpObjectTokenEnumBuilder_SetAttribs(This,pszReqAttribs,pszOptAttribs) ( (This)->lpVtbl -> SetAttribs(This,pszReqAttribs,pszOptAttribs) )
#define ISpObjectTokenEnumBuilder_AddTokens(This,cTokens,pToken) ( (This)->lpVtbl -> AddTokens(This,cTokens,pToken) )
#define ISpObjectTokenEnumBuilder_AddTokensFromDataKey(This,pDataKey,pszSubKey,pszCategoryId) ( (This)->lpVtbl -> AddTokensFromDataKey(This,pDataKey,pszSubKey,pszCategoryId) )
#define ISpObjectTokenEnumBuilder_AddTokensFromTokenEnum(This,pTokenEnum) ( (This)->lpVtbl -> AddTokensFromTokenEnum(This,pTokenEnum) )
#define ISpObjectTokenEnumBuilder_Sort(This,pszTokenIdToListFirst) ( (This)->lpVtbl -> Sort(This,pszTokenIdToListFirst) )
#endif
#endif
#if 0
typedef void *SPWORDHANDLE;
typedef void *SPRULEHANDLE;
typedef void *SPGRAMMARHANDLE;
typedef void *SPRECOCONTEXTHANDLE;
typedef void *SPPHRASERULEHANDLE;
typedef void *SPPHRASEPROPERTYHANDLE;
typedef void *SPTRANSITIONID;
#else
DECLARE_HANDLE(SPWORDHANDLE);
DECLARE_HANDLE(SPRULEHANDLE);
DECLARE_HANDLE(SPGRAMMARHANDLE);
DECLARE_HANDLE(SPRECOCONTEXTHANDLE);
DECLARE_HANDLE(SPPHRASERULEHANDLE);
DECLARE_HANDLE(SPPHRASEPROPERTYHANDLE);
DECLARE_HANDLE(SPTRANSITIONID);
#endif
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0002_v0_0_s_ifspec;
#ifndef __ISpErrorLog_INTERFACE_DEFINED__
#define __ISpErrorLog_INTERFACE_DEFINED__
extern const IID IID_ISpErrorLog;
typedef struct ISpErrorLogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpErrorLog * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpErrorLog * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpErrorLog * This);
	HRESULT(STDMETHODCALLTYPE * AddError) (ISpErrorLog * This, const long lLineNumber, HRESULT hr, LPCWSTR pszDescription, LPCWSTR pszHelpFile, DWORD dwHelpContext);
	END_INTERFACE
}  ISpErrorLogVtbl;
interface ISpErrorLog
{
	CONST_VTBL struct ISpErrorLogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpErrorLog_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpErrorLog_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpErrorLog_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpErrorLog_AddError(This,lLineNumber,hr,pszDescription,pszHelpFile,dwHelpContext) ( (This)->lpVtbl -> AddError(This,lLineNumber,hr,pszDescription,pszHelpFile,dwHelpContext) )
#endif
#endif
#ifndef __ISpGrammarCompiler_INTERFACE_DEFINED__
#define __ISpGrammarCompiler_INTERFACE_DEFINED__
extern const IID IID_ISpGrammarCompiler;
typedef struct ISpGrammarCompilerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpGrammarCompiler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpGrammarCompiler * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpGrammarCompiler * This);
	HRESULT(STDMETHODCALLTYPE * CompileStream) (ISpGrammarCompiler * This, IStream * pSource, IStream * pDest, IStream * pHeader, IUnknown * pReserved, ISpErrorLog * pErrorLog, DWORD dwFlags);
	END_INTERFACE
}  ISpGrammarCompilerVtbl;
interface ISpGrammarCompiler
{
	CONST_VTBL struct ISpGrammarCompilerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpGrammarCompiler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpGrammarCompiler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpGrammarCompiler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpGrammarCompiler_CompileStream(This,pSource,pDest,pHeader,pReserved,pErrorLog,dwFlags) ( (This)->lpVtbl -> CompileStream(This,pSource,pDest,pHeader,pReserved,pErrorLog,dwFlags) )
#endif
#endif
#ifndef __ISpGramCompBackend_INTERFACE_DEFINED__
#define __ISpGramCompBackend_INTERFACE_DEFINED__
extern const IID IID_ISpGramCompBackend;
typedef struct ISpGramCompBackendVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpGramCompBackend * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpGramCompBackend * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpGramCompBackend * This);
	HRESULT(STDMETHODCALLTYPE * ResetGrammar) (ISpGramCompBackend * This, WORD NewLanguage);
	HRESULT(STDMETHODCALLTYPE * GetRule) (ISpGramCompBackend * This, LPCWSTR pszRuleName, DWORD dwRuleId, DWORD dwAttributes, BOOL fCreateIfNotExist, SPSTATEHANDLE * phInitialState);
	HRESULT(STDMETHODCALLTYPE * ClearRule) (ISpGramCompBackend * This, SPSTATEHANDLE hState);
	HRESULT(STDMETHODCALLTYPE * CreateNewState) (ISpGramCompBackend * This, SPSTATEHANDLE hState, SPSTATEHANDLE * phState);
	HRESULT(STDMETHODCALLTYPE * AddWordTransition) (ISpGramCompBackend * This, SPSTATEHANDLE hFromState, SPSTATEHANDLE hToState, LPCWSTR psz, LPCWSTR pszSeparators, SPGRAMMARWORDTYPE eWordType, float Weight, const SPPROPERTYINFO * pPropInfo);
	HRESULT(STDMETHODCALLTYPE * AddRuleTransition) (ISpGramCompBackend * This, SPSTATEHANDLE hFromState, SPSTATEHANDLE hToState, SPSTATEHANDLE hRule, float Weight, const SPPROPERTYINFO * pPropInfo);
	HRESULT(STDMETHODCALLTYPE * AddResource) (ISpGramCompBackend * This, SPSTATEHANDLE hRuleState, LPCWSTR pszResourceName, LPCWSTR pszResourceValue);
	HRESULT(STDMETHODCALLTYPE * Commit) (ISpGramCompBackend * This, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * SetSaveObjects) (ISpGramCompBackend * This, IStream * pStream, ISpErrorLog * pErrorLog);
	HRESULT(STDMETHODCALLTYPE * InitFromBinaryGrammar) (ISpGramCompBackend * This, const SPBINARYGRAMMAR * pBinaryData);
	END_INTERFACE
}  ISpGramCompBackendVtbl;
interface ISpGramCompBackend
{
	CONST_VTBL struct ISpGramCompBackendVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpGramCompBackend_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpGramCompBackend_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpGramCompBackend_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpGramCompBackend_ResetGrammar(This,NewLanguage) ( (This)->lpVtbl -> ResetGrammar(This,NewLanguage) )
#define ISpGramCompBackend_GetRule(This,pszRuleName,dwRuleId,dwAttributes,fCreateIfNotExist,phInitialState) ( (This)->lpVtbl -> GetRule(This,pszRuleName,dwRuleId,dwAttributes,fCreateIfNotExist,phInitialState) )
#define ISpGramCompBackend_ClearRule(This,hState) ( (This)->lpVtbl -> ClearRule(This,hState) )
#define ISpGramCompBackend_CreateNewState(This,hState,phState) ( (This)->lpVtbl -> CreateNewState(This,hState,phState) )
#define ISpGramCompBackend_AddWordTransition(This,hFromState,hToState,psz,pszSeparators,eWordType,Weight,pPropInfo) ( (This)->lpVtbl -> AddWordTransition(This,hFromState,hToState,psz,pszSeparators,eWordType,Weight,pPropInfo) )
#define ISpGramCompBackend_AddRuleTransition(This,hFromState,hToState,hRule,Weight,pPropInfo) ( (This)->lpVtbl -> AddRuleTransition(This,hFromState,hToState,hRule,Weight,pPropInfo) )
#define ISpGramCompBackend_AddResource(This,hRuleState,pszResourceName,pszResourceValue) ( (This)->lpVtbl -> AddResource(This,hRuleState,pszResourceName,pszResourceValue) )
#define ISpGramCompBackend_Commit(This,dwReserved) ( (This)->lpVtbl -> Commit(This,dwReserved) )
#define ISpGramCompBackend_SetSaveObjects(This,pStream,pErrorLog) ( (This)->lpVtbl -> SetSaveObjects(This,pStream,pErrorLog) )
#define ISpGramCompBackend_InitFromBinaryGrammar(This,pBinaryData) ( (This)->lpVtbl -> InitFromBinaryGrammar(This,pBinaryData) )
#endif
#endif
#ifndef __ISpITNProcessor_INTERFACE_DEFINED__
#define __ISpITNProcessor_INTERFACE_DEFINED__
extern const IID IID_ISpITNProcessor;
typedef struct ISpITNProcessorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpITNProcessor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpITNProcessor * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpITNProcessor * This);
	HRESULT(STDMETHODCALLTYPE * LoadITNGrammar) (ISpITNProcessor * This, LPWSTR pszCLSID);
	HRESULT(STDMETHODCALLTYPE * ITNPhrase) (ISpITNProcessor * This, ISpPhraseBuilder * pPhrase);
	END_INTERFACE
}  ISpITNProcessorVtbl;
interface ISpITNProcessor
{
	CONST_VTBL struct ISpITNProcessorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpITNProcessor_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpITNProcessor_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpITNProcessor_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpITNProcessor_LoadITNGrammar(This,pszCLSID) ( (This)->lpVtbl -> LoadITNGrammar(This,pszCLSID) )
#define ISpITNProcessor_ITNPhrase(This,pPhrase) ( (This)->lpVtbl -> ITNPhrase(This,pPhrase) )
#endif
#endif
#ifndef __ISpPhraseBuilder_INTERFACE_DEFINED__
#define __ISpPhraseBuilder_INTERFACE_DEFINED__
extern const IID IID_ISpPhraseBuilder;
typedef struct ISpPhraseBuilderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpPhraseBuilder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpPhraseBuilder * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpPhraseBuilder * This);
	HRESULT(STDMETHODCALLTYPE * GetPhrase) (ISpPhraseBuilder * This, SPPHRASE ** ppCoMemPhrase);
	HRESULT(STDMETHODCALLTYPE * GetSerializedPhrase) (ISpPhraseBuilder * This, SPSERIALIZEDPHRASE ** ppCoMemPhrase);
	HRESULT(STDMETHODCALLTYPE * GetText) (ISpPhraseBuilder * This, ULONG ulStart, ULONG ulCount, BOOL fUseTextReplacements, LPWSTR * ppszCoMemText, BYTE * pbDisplayAttributes);
	HRESULT(STDMETHODCALLTYPE * Discard) (ISpPhraseBuilder * This, DWORD dwValueTypes);
	HRESULT(STDMETHODCALLTYPE * InitFromPhrase) (ISpPhraseBuilder * This, const SPPHRASE * pPhrase);
	HRESULT(STDMETHODCALLTYPE * InitFromSerializedPhrase) (ISpPhraseBuilder * This, const SPSERIALIZEDPHRASE * pPhrase);
	HRESULT(STDMETHODCALLTYPE * AddElements) (ISpPhraseBuilder * This, ULONG cElements, const SPPHRASEELEMENT * pElement);
	HRESULT(STDMETHODCALLTYPE * AddRules) (ISpPhraseBuilder * This, const SPPHRASERULEHANDLE hParent, const SPPHRASERULE * pRule, SPPHRASERULEHANDLE * phNewRule);
	HRESULT(STDMETHODCALLTYPE * AddProperties) (ISpPhraseBuilder * This, const SPPHRASEPROPERTYHANDLE hParent, const SPPHRASEPROPERTY * pProperty, SPPHRASEPROPERTYHANDLE * phNewProperty);
	HRESULT(STDMETHODCALLTYPE * AddReplacements) (ISpPhraseBuilder * This, ULONG cReplacements, const SPPHRASEREPLACEMENT * pReplacements);
	END_INTERFACE
}  ISpPhraseBuilderVtbl;
interface ISpPhraseBuilder
{
	CONST_VTBL struct ISpPhraseBuilderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpPhraseBuilder_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpPhraseBuilder_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpPhraseBuilder_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpPhraseBuilder_GetPhrase(This,ppCoMemPhrase) ( (This)->lpVtbl -> GetPhrase(This,ppCoMemPhrase) )
#define ISpPhraseBuilder_GetSerializedPhrase(This,ppCoMemPhrase) ( (This)->lpVtbl -> GetSerializedPhrase(This,ppCoMemPhrase) )
#define ISpPhraseBuilder_GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) ( (This)->lpVtbl -> GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) )
#define ISpPhraseBuilder_Discard(This,dwValueTypes) ( (This)->lpVtbl -> Discard(This,dwValueTypes) )
#define ISpPhraseBuilder_InitFromPhrase(This,pPhrase) ( (This)->lpVtbl -> InitFromPhrase(This,pPhrase) )
#define ISpPhraseBuilder_InitFromSerializedPhrase(This,pPhrase) ( (This)->lpVtbl -> InitFromSerializedPhrase(This,pPhrase) )
#define ISpPhraseBuilder_AddElements(This,cElements,pElement) ( (This)->lpVtbl -> AddElements(This,cElements,pElement) )
#define ISpPhraseBuilder_AddRules(This,hParent,pRule,phNewRule) ( (This)->lpVtbl -> AddRules(This,hParent,pRule,phNewRule) )
#define ISpPhraseBuilder_AddProperties(This,hParent,pProperty,phNewProperty) ( (This)->lpVtbl -> AddProperties(This,hParent,pProperty,phNewProperty) )
#define ISpPhraseBuilder_AddReplacements(This,cReplacements,pReplacements) ( (This)->lpVtbl -> AddReplacements(This,cReplacements,pReplacements) )
#endif
#endif
typedef void *ISpTask;
typedef void *ISpThreadTask;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0007_v0_0_s_ifspec;
#ifndef __ISpThreadControl_INTERFACE_DEFINED__
#define __ISpThreadControl_INTERFACE_DEFINED__
extern const IID IID_ISpThreadControl;
typedef struct ISpThreadControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpThreadControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpThreadControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpThreadControl * This);
	HRESULT(STDMETHODCALLTYPE * Notify) (ISpThreadControl * This);
	HRESULT(STDMETHODCALLTYPE * StartThread) (ISpThreadControl * This, DWORD dwFlags, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * WaitForThreadDone) (ISpThreadControl * This, BOOL fForceStop, HRESULT * phrThreadResult, ULONG msTimeOut);
	HRESULT(STDMETHODCALLTYPE * TerminateThread) (ISpThreadControl * This);
	HANDLE(STDMETHODCALLTYPE * ThreadHandle) (ISpThreadControl * This);
	DWORD(STDMETHODCALLTYPE * ThreadId) (ISpThreadControl * This);
	HANDLE(STDMETHODCALLTYPE * NotifyEvent) (ISpThreadControl * This);
	HWND(STDMETHODCALLTYPE * WindowHandle) (ISpThreadControl * This);
	HANDLE(STDMETHODCALLTYPE * ThreadCompleteEvent) (ISpThreadControl * This);
	HANDLE(STDMETHODCALLTYPE * ExitThreadEvent) (ISpThreadControl * This);
	END_INTERFACE
}  ISpThreadControlVtbl;
interface ISpThreadControl
{
	CONST_VTBL struct ISpThreadControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpThreadControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpThreadControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpThreadControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpThreadControl_Notify(This) ( (This)->lpVtbl -> Notify(This) )
#define ISpThreadControl_StartThread(This,dwFlags,phwnd) ( (This)->lpVtbl -> StartThread(This,dwFlags,phwnd) )
#define ISpThreadControl_WaitForThreadDone(This,fForceStop,phrThreadResult,msTimeOut) ( (This)->lpVtbl -> WaitForThreadDone(This,fForceStop,phrThreadResult,msTimeOut) )
#define ISpThreadControl_TerminateThread(This) ( (This)->lpVtbl -> TerminateThread(This) )
#define ISpThreadControl_ThreadHandle(This) ( (This)->lpVtbl -> ThreadHandle(This) )
#define ISpThreadControl_ThreadId(This) ( (This)->lpVtbl -> ThreadId(This) )
#define ISpThreadControl_NotifyEvent(This) ( (This)->lpVtbl -> NotifyEvent(This) )
#define ISpThreadControl_WindowHandle(This) ( (This)->lpVtbl -> WindowHandle(This) )
#define ISpThreadControl_ThreadCompleteEvent(This) ( (This)->lpVtbl -> ThreadCompleteEvent(This) )
#define ISpThreadControl_ExitThreadEvent(This) ( (This)->lpVtbl -> ExitThreadEvent(This) )
#endif
#endif
typedef struct SPTMTHREADINFO
{
	long lPoolSize;
	long lPriority;
	ULONG ulConcurrencyLimit;
	ULONG ulMaxQuickAllocThreads;
} SPTMTHREADINFO;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0008_v0_0_s_ifspec;
#ifndef __ISpTaskManager_INTERFACE_DEFINED__
#define __ISpTaskManager_INTERFACE_DEFINED__
extern const IID IID_ISpTaskManager;
typedef struct ISpTaskManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpTaskManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpTaskManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpTaskManager * This);
	HRESULT(STDMETHODCALLTYPE * SetThreadPoolInfo) (ISpTaskManager * This, const SPTMTHREADINFO * pPoolInfo);
	HRESULT(STDMETHODCALLTYPE * GetThreadPoolInfo) (ISpTaskManager * This, SPTMTHREADINFO * pPoolInfo);
	HRESULT(STDMETHODCALLTYPE * QueueTask) (ISpTaskManager * This, ISpTask * pTask, void *pvTaskData, HANDLE hCompEvent, DWORD * pdwGroupId, DWORD * pTaskID);
	HRESULT(STDMETHODCALLTYPE * CreateReoccurringTask) (ISpTaskManager * This, ISpTask * pTask, void *pvTaskData, HANDLE hCompEvent, ISpNotifySink ** ppTaskCtrl);
	HRESULT(STDMETHODCALLTYPE * CreateThreadControl) (ISpTaskManager * This, ISpThreadTask * pTask, void *pvTaskData, long nPriority, ISpThreadControl ** ppTaskCtrl);
	HRESULT(STDMETHODCALLTYPE * TerminateTask) (ISpTaskManager * This, DWORD dwTaskId, ULONG ulWaitPeriod);
	HRESULT(STDMETHODCALLTYPE * TerminateTaskGroup) (ISpTaskManager * This, DWORD dwGroupId, ULONG ulWaitPeriod);
	END_INTERFACE
}  ISpTaskManagerVtbl;
interface ISpTaskManager
{
	CONST_VTBL struct ISpTaskManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpTaskManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpTaskManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpTaskManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpTaskManager_SetThreadPoolInfo(This,pPoolInfo) ( (This)->lpVtbl -> SetThreadPoolInfo(This,pPoolInfo) )
#define ISpTaskManager_GetThreadPoolInfo(This,pPoolInfo) ( (This)->lpVtbl -> GetThreadPoolInfo(This,pPoolInfo) )
#define ISpTaskManager_QueueTask(This,pTask,pvTaskData,hCompEvent,pdwGroupId,pTaskID) ( (This)->lpVtbl -> QueueTask(This,pTask,pvTaskData,hCompEvent,pdwGroupId,pTaskID) )
#define ISpTaskManager_CreateReoccurringTask(This,pTask,pvTaskData,hCompEvent,ppTaskCtrl) ( (This)->lpVtbl -> CreateReoccurringTask(This,pTask,pvTaskData,hCompEvent,ppTaskCtrl) )
#define ISpTaskManager_CreateThreadControl(This,pTask,pvTaskData,nPriority,ppTaskCtrl) ( (This)->lpVtbl -> CreateThreadControl(This,pTask,pvTaskData,nPriority,ppTaskCtrl) )
#define ISpTaskManager_TerminateTask(This,dwTaskId,ulWaitPeriod) ( (This)->lpVtbl -> TerminateTask(This,dwTaskId,ulWaitPeriod) )
#define ISpTaskManager_TerminateTaskGroup(This,dwGroupId,ulWaitPeriod) ( (This)->lpVtbl -> TerminateTaskGroup(This,dwGroupId,ulWaitPeriod) )
#endif
#endif
typedef enum SPVSKIPTYPE
{
	SPVST_SENTENCE = (1L << 0)
} SPVSKIPTYPE;
typedef enum SPVESACTIONS
{
	SPVES_CONTINUE = 0,
	SPVES_ABORT = (1L << 0),
	SPVES_SKIP = (1L << 1),
	SPVES_RATE = (1L << 2),
	SPVES_VOLUME = (1L << 3)
} SPVESACTIONS;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0009_v0_0_s_ifspec;
#ifndef __ISpTTSEngineSite_INTERFACE_DEFINED__
#define __ISpTTSEngineSite_INTERFACE_DEFINED__
extern const IID IID_ISpTTSEngineSite;
typedef struct ISpTTSEngineSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpTTSEngineSite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpTTSEngineSite * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpTTSEngineSite * This);
	HRESULT(STDMETHODCALLTYPE * AddEvents) (ISpTTSEngineSite * This, const SPEVENT * pEventArray, ULONG ulCount);
	HRESULT(STDMETHODCALLTYPE * GetEventInterest) (ISpTTSEngineSite * This, ULONGLONG * pullEventInterest);
	DWORD(STDMETHODCALLTYPE * GetActions) (ISpTTSEngineSite * This);
	HRESULT(STDMETHODCALLTYPE * Write) (ISpTTSEngineSite * This, const void *pBuff, ULONG cb, ULONG * pcbWritten);
	HRESULT(STDMETHODCALLTYPE * GetRate) (ISpTTSEngineSite * This, long *pRateAdjust);
	HRESULT(STDMETHODCALLTYPE * GetVolume) (ISpTTSEngineSite * This, USHORT * pusVolume);
	HRESULT(STDMETHODCALLTYPE * GetSkipInfo) (ISpTTSEngineSite * This, SPVSKIPTYPE * peType, long *plNumItems);
	HRESULT(STDMETHODCALLTYPE * CompleteSkip) (ISpTTSEngineSite * This, long ulNumSkipped);
	END_INTERFACE
}  ISpTTSEngineSiteVtbl;
interface ISpTTSEngineSite
{
	CONST_VTBL struct ISpTTSEngineSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpTTSEngineSite_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpTTSEngineSite_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpTTSEngineSite_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpTTSEngineSite_AddEvents(This,pEventArray,ulCount) ( (This)->lpVtbl -> AddEvents(This,pEventArray,ulCount) )
#define ISpTTSEngineSite_GetEventInterest(This,pullEventInterest) ( (This)->lpVtbl -> GetEventInterest(This,pullEventInterest) )
#define ISpTTSEngineSite_GetActions(This) ( (This)->lpVtbl -> GetActions(This) )
#define ISpTTSEngineSite_Write(This,pBuff,cb,pcbWritten) ( (This)->lpVtbl -> Write(This,pBuff,cb,pcbWritten) )
#define ISpTTSEngineSite_GetRate(This,pRateAdjust) ( (This)->lpVtbl -> GetRate(This,pRateAdjust) )
#define ISpTTSEngineSite_GetVolume(This,pusVolume) ( (This)->lpVtbl -> GetVolume(This,pusVolume) )
#define ISpTTSEngineSite_GetSkipInfo(This,peType,plNumItems) ( (This)->lpVtbl -> GetSkipInfo(This,peType,plNumItems) )
#define ISpTTSEngineSite_CompleteSkip(This,ulNumSkipped) ( (This)->lpVtbl -> CompleteSkip(This,ulNumSkipped) )
#endif
#endif
typedef struct SPVTEXTFRAG
{
	struct SPVTEXTFRAG *pNext;
	SPVSTATE State;
	LPCWSTR pTextStart;
	ULONG ulTextLen;
	ULONG ulTextSrcOffset;
} SPVTEXTFRAG;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0010_v0_0_s_ifspec;
#ifndef __ISpTTSEngine_INTERFACE_DEFINED__
#define __ISpTTSEngine_INTERFACE_DEFINED__
extern const IID IID_ISpTTSEngine;
typedef struct ISpTTSEngineVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpTTSEngine * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpTTSEngine * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpTTSEngine * This);
	HRESULT(STDMETHODCALLTYPE * Speak) (ISpTTSEngine * This, DWORD dwSpeakFlags, REFGUID rguidFormatId, const WAVEFORMATEX * pWaveFormatEx, const SPVTEXTFRAG * pTextFragList, ISpTTSEngineSite * pOutputSite);
	HRESULT(STDMETHODCALLTYPE * GetOutputFormat) (ISpTTSEngine * This, const GUID * pTargetFmtId, const WAVEFORMATEX * pTargetWaveFormatEx, GUID * pOutputFormatId, WAVEFORMATEX ** ppCoMemOutputWaveFormatEx);
	END_INTERFACE
}  ISpTTSEngineVtbl;
interface ISpTTSEngine
{
	CONST_VTBL struct ISpTTSEngineVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpTTSEngine_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpTTSEngine_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpTTSEngine_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpTTSEngine_Speak(This,dwSpeakFlags,rguidFormatId,pWaveFormatEx,pTextFragList,pOutputSite) ( (This)->lpVtbl -> Speak(This,dwSpeakFlags,rguidFormatId,pWaveFormatEx,pTextFragList,pOutputSite) )
#define ISpTTSEngine_GetOutputFormat(This,pTargetFmtId,pTargetWaveFormatEx,pOutputFormatId,ppCoMemOutputWaveFormatEx) ( (This)->lpVtbl -> GetOutputFormat(This,pTargetFmtId,pTargetWaveFormatEx,pOutputFormatId,ppCoMemOutputWaveFormatEx) )
#endif
#endif
typedef struct SPWORDENTRY
{
	SPWORDHANDLE hWord;
	WORD LangID;
	WCHAR *pszDisplayText;
	WCHAR *pszLexicalForm;
	SPPHONEID *aPhoneId;
	void *pvClientContext;
} SPWORDENTRY;
typedef struct SPRULEENTRY
{
	SPRULEHANDLE hRule;
	SPSTATEHANDLE hInitialState;
	DWORD Attributes;
	void *pvClientRuleContext;
	void *pvClientGrammarContext;
} SPRULEENTRY;
typedef enum SPTRANSITIONTYPE
{
	SPTRANSEPSILON = 0,
	SPTRANSWORD = (SPTRANSEPSILON + 1),
	SPTRANSRULE = (SPTRANSWORD + 1),
	SPTRANSTEXTBUF = (SPTRANSRULE + 1),
	SPTRANSWILDCARD = (SPTRANSTEXTBUF + 1),
	SPTRANSDICTATION = (SPTRANSWILDCARD + 1)
} SPTRANSITIONTYPE;
typedef struct SPTRANSITIONENTRY
{
	SPTRANSITIONID ID;
	SPSTATEHANDLE hNextState;
	BYTE Type;
	char RequiredConfidence;
	struct
	{
		DWORD fHasProperty;
	};
	float Weight;
	union
	{
		struct
		{
			SPSTATEHANDLE hRuleInitialState;
			SPRULEHANDLE hRule;
			void *pvClientRuleContext;
		};
		struct
		{
			SPWORDHANDLE hWord;
			void *pvClientWordContext;
		};
		struct
		{
			void *pvGrammarCookie;
		};
	};
} SPTRANSITIONENTRY;
typedef struct SPTRANSITIONPROPERTY
{
	LPCWSTR pszName;
	ULONG ulId;
	LPCWSTR pszValue;
	VARIANT vValue;
} SPTRANSITIONPROPERTY;
typedef struct SPSTATEINFO
{
	ULONG cAllocatedEntries;
	SPTRANSITIONENTRY *pTransitions;
	ULONG cEpsilons;
	ULONG cRules;
	ULONG cWords;
	ULONG cSpecialTransitions;
} SPSTATEINFO;
typedef struct SPPATHENTRY
{
	SPTRANSITIONID hTransition;
	SPPHRASEELEMENT elem;
} SPPATHENTRY;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0011_v0_0_s_ifspec;
#ifndef __ISpCFGInterpreterSite_INTERFACE_DEFINED__
#define __ISpCFGInterpreterSite_INTERFACE_DEFINED__
extern const IID IID_ISpCFGInterpreterSite;
typedef struct ISpCFGInterpreterSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpCFGInterpreterSite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpCFGInterpreterSite * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpCFGInterpreterSite * This);
	HRESULT(STDMETHODCALLTYPE * AddTextReplacement) (ISpCFGInterpreterSite * This, SPPHRASEREPLACEMENT * pReplace);
	HRESULT(STDMETHODCALLTYPE * AddProperty) (ISpCFGInterpreterSite * This, const SPPHRASEPROPERTY * pProperty);
	HRESULT(STDMETHODCALLTYPE * GetResourceValue) (ISpCFGInterpreterSite * This, LPCWSTR pszResourceName, LPWSTR * ppCoMemResource);
	END_INTERFACE
}  ISpCFGInterpreterSiteVtbl;
interface ISpCFGInterpreterSite
{
	CONST_VTBL struct ISpCFGInterpreterSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpCFGInterpreterSite_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpCFGInterpreterSite_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpCFGInterpreterSite_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpCFGInterpreterSite_AddTextReplacement(This,pReplace) ( (This)->lpVtbl -> AddTextReplacement(This,pReplace) )
#define ISpCFGInterpreterSite_AddProperty(This,pProperty) ( (This)->lpVtbl -> AddProperty(This,pProperty) )
#define ISpCFGInterpreterSite_GetResourceValue(This,pszResourceName,ppCoMemResource) ( (This)->lpVtbl -> GetResourceValue(This,pszResourceName,ppCoMemResource) )
#endif
#endif
#ifndef __ISpCFGInterpreter_INTERFACE_DEFINED__
#define __ISpCFGInterpreter_INTERFACE_DEFINED__
extern const IID IID_ISpCFGInterpreter;
typedef struct ISpCFGInterpreterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpCFGInterpreter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpCFGInterpreter * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpCFGInterpreter * This);
	HRESULT(STDMETHODCALLTYPE * InitGrammar) (ISpCFGInterpreter * This, LPCWSTR pszGrammarName, const void **pvGrammarData);
	HRESULT(STDMETHODCALLTYPE * Interpret) (ISpCFGInterpreter * This, ISpPhraseBuilder * pPhrase, const ULONG ulFirstElement, const ULONG ulCountOfElements, ISpCFGInterpreterSite * pSite);
	END_INTERFACE
}  ISpCFGInterpreterVtbl;
interface ISpCFGInterpreter
{
	CONST_VTBL struct ISpCFGInterpreterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpCFGInterpreter_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpCFGInterpreter_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpCFGInterpreter_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpCFGInterpreter_InitGrammar(This,pszGrammarName,pvGrammarData) ( (This)->lpVtbl -> InitGrammar(This,pszGrammarName,pvGrammarData) )
#define ISpCFGInterpreter_Interpret(This,pPhrase,ulFirstElement,ulCountOfElements,pSite) ( (This)->lpVtbl -> Interpret(This,pPhrase,ulFirstElement,ulCountOfElements,pSite) )
#endif
#endif
typedef enum SPCFGNOTIFY
{
	SPCFGN_ADD = 0,
	SPCFGN_REMOVE = (SPCFGN_ADD + 1),
	SPCFGN_INVALIDATE = (SPCFGN_REMOVE + 1),
	SPCFGN_ACTIVATE = (SPCFGN_INVALIDATE + 1),
	SPCFGN_DEACTIVATE = (SPCFGN_ACTIVATE + 1)
} SPCFGNOTIFY;
typedef enum SPRESULTTYPE
{
	SPRT_CFG = 0,
	SPRT_SLM = 1,
	SPRT_PROPRIETARY = 2,
	SPRT_FALSE_RECOGNITION = (1L << 2)
} SPRESULTTYPE;
typedef struct tagSPPHRASEALT
{
	ISpPhraseBuilder *pPhrase;
	ULONG ulStartElementInParent;
	ULONG cElementsInParent;
	ULONG cElementsInAlternate;
	void *pvAltExtra;
	ULONG cbAltExtra;
} SPPHRASEALT;
typedef struct SPRECORESULTINFO
{
	ULONG cbSize;
	SPRESULTTYPE eResultType;
	BOOL fHypothesis;
	BOOL fProprietaryAutoPause;
	ULONGLONG ullStreamPosStart;
	ULONGLONG ullStreamPosEnd;
	SPGRAMMARHANDLE hGrammar;
	ULONG ulSizeEngineData;
	void *pvEngineData;
	ISpPhraseBuilder *pPhrase;
	SPPHRASEALT *aPhraseAlts;
	ULONG ulNumAlts;
} SPRECORESULTINFO;
typedef enum SPWORDINFOOPT
{
	SPWIO_NONE = 0,
	SPWIO_WANT_TEXT = 1
} SPWORDINFOOPT;
typedef enum SPRULEINFOOPT
{
	SPRIO_NONE = 0
} SPRULEINFOOPT;
typedef struct SPPARSEINFO
{
	ULONG cbSize;
	SPRULEHANDLE hRule;
	ULONGLONG ullAudioStreamPosition;
	ULONG ulAudioSize;
	ULONG cTransitions;
	SPPATHENTRY *pPath;
	GUID SREngineID;
	ULONG ulSREnginePrivateDataSize;
	const BYTE *pSREnginePrivateData;
	BOOL fHypothesis;
} SPPARSEINFO;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0013_v0_0_s_ifspec;
#ifndef __ISpSREngineSite_INTERFACE_DEFINED__
#define __ISpSREngineSite_INTERFACE_DEFINED__
extern const IID IID_ISpSREngineSite;
typedef struct ISpSREngineSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpSREngineSite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpSREngineSite * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpSREngineSite * This);
	HRESULT(STDMETHODCALLTYPE * Read) (ISpSREngineSite * This, void *pv, ULONG cb, ULONG * pcbRead);
	HRESULT(STDMETHODCALLTYPE * DataAvailable) (ISpSREngineSite * This, ULONG * pcb);
	HRESULT(STDMETHODCALLTYPE * SetBufferNotifySize) (ISpSREngineSite * This, ULONG cbSize);
	HRESULT(STDMETHODCALLTYPE * ParseFromTransitions) (ISpSREngineSite * This, const SPPARSEINFO * pParseInfo, ISpPhraseBuilder ** ppNewPhrase);
	HRESULT(STDMETHODCALLTYPE * Recognition) (ISpSREngineSite * This, const SPRECORESULTINFO * pResultInfo);
	HRESULT(STDMETHODCALLTYPE * AddEvent) (ISpSREngineSite * This, const SPEVENT * pEvent, SPRECOCONTEXTHANDLE hSAPIRecoContext);
	HRESULT(STDMETHODCALLTYPE * Synchronize) (ISpSREngineSite * This, ULONGLONG ullProcessedThruPos);
	HRESULT(STDMETHODCALLTYPE * GetWordInfo) (ISpSREngineSite * This, SPWORDENTRY * pWordEntry, SPWORDINFOOPT Options);
	HRESULT(STDMETHODCALLTYPE * SetWordClientContext) (ISpSREngineSite * This, SPWORDHANDLE hWord, void *pvClientContext);
	HRESULT(STDMETHODCALLTYPE * GetRuleInfo) (ISpSREngineSite * This, SPRULEENTRY * pRuleEntry, SPRULEINFOOPT Options);
	HRESULT(STDMETHODCALLTYPE * SetRuleClientContext) (ISpSREngineSite * This, SPRULEHANDLE hRule, void *pvClientContext);
	HRESULT(STDMETHODCALLTYPE * GetStateInfo) (ISpSREngineSite * This, SPSTATEHANDLE hState, SPSTATEINFO * pStateInfo);
	HRESULT(STDMETHODCALLTYPE * GetResource) (ISpSREngineSite * This, SPRULEHANDLE hRule, LPCWSTR pszResourceName, LPWSTR * ppCoMemResource);
	HRESULT(STDMETHODCALLTYPE * GetTransitionProperty) (ISpSREngineSite * This, SPTRANSITIONID ID, SPTRANSITIONPROPERTY ** ppCoMemProperty);
	HRESULT(STDMETHODCALLTYPE * IsAlternate) (ISpSREngineSite * This, SPRULEHANDLE hRule, SPRULEHANDLE hAltRule);
	HRESULT(STDMETHODCALLTYPE * GetMaxAlternates) (ISpSREngineSite * This, SPRULEHANDLE hRule, ULONG * pulNumAlts);
	HRESULT(STDMETHODCALLTYPE * GetContextMaxAlternates) (ISpSREngineSite * This, SPRECOCONTEXTHANDLE hContext, ULONG * pulNumAlts);
	HRESULT(STDMETHODCALLTYPE * UpdateRecoPos) (ISpSREngineSite * This, ULONGLONG ullCurrentRecoPos);
	END_INTERFACE
}  ISpSREngineSiteVtbl;
interface ISpSREngineSite
{
	CONST_VTBL struct ISpSREngineSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpSREngineSite_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpSREngineSite_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpSREngineSite_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpSREngineSite_Read(This,pv,cb,pcbRead) ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
#define ISpSREngineSite_DataAvailable(This,pcb) ( (This)->lpVtbl -> DataAvailable(This,pcb) )
#define ISpSREngineSite_SetBufferNotifySize(This,cbSize) ( (This)->lpVtbl -> SetBufferNotifySize(This,cbSize) )
#define ISpSREngineSite_ParseFromTransitions(This,pParseInfo,ppNewPhrase) ( (This)->lpVtbl -> ParseFromTransitions(This,pParseInfo,ppNewPhrase) )
#define ISpSREngineSite_Recognition(This,pResultInfo) ( (This)->lpVtbl -> Recognition(This,pResultInfo) )
#define ISpSREngineSite_AddEvent(This,pEvent,hSAPIRecoContext) ( (This)->lpVtbl -> AddEvent(This,pEvent,hSAPIRecoContext) )
#define ISpSREngineSite_Synchronize(This,ullProcessedThruPos) ( (This)->lpVtbl -> Synchronize(This,ullProcessedThruPos) )
#define ISpSREngineSite_GetWordInfo(This,pWordEntry,Options) ( (This)->lpVtbl -> GetWordInfo(This,pWordEntry,Options) )
#define ISpSREngineSite_SetWordClientContext(This,hWord,pvClientContext) ( (This)->lpVtbl -> SetWordClientContext(This,hWord,pvClientContext) )
#define ISpSREngineSite_GetRuleInfo(This,pRuleEntry,Options) ( (This)->lpVtbl -> GetRuleInfo(This,pRuleEntry,Options) )
#define ISpSREngineSite_SetRuleClientContext(This,hRule,pvClientContext) ( (This)->lpVtbl -> SetRuleClientContext(This,hRule,pvClientContext) )
#define ISpSREngineSite_GetStateInfo(This,hState,pStateInfo) ( (This)->lpVtbl -> GetStateInfo(This,hState,pStateInfo) )
#define ISpSREngineSite_GetResource(This,hRule,pszResourceName,ppCoMemResource) ( (This)->lpVtbl -> GetResource(This,hRule,pszResourceName,ppCoMemResource) )
#define ISpSREngineSite_GetTransitionProperty(This,ID,ppCoMemProperty) ( (This)->lpVtbl -> GetTransitionProperty(This,ID,ppCoMemProperty) )
#define ISpSREngineSite_IsAlternate(This,hRule,hAltRule) ( (This)->lpVtbl -> IsAlternate(This,hRule,hAltRule) )
#define ISpSREngineSite_GetMaxAlternates(This,hRule,pulNumAlts) ( (This)->lpVtbl -> GetMaxAlternates(This,hRule,pulNumAlts) )
#define ISpSREngineSite_GetContextMaxAlternates(This,hContext,pulNumAlts) ( (This)->lpVtbl -> GetContextMaxAlternates(This,hContext,pulNumAlts) )
#define ISpSREngineSite_UpdateRecoPos(This,ullCurrentRecoPos) ( (This)->lpVtbl -> UpdateRecoPos(This,ullCurrentRecoPos) )
#endif
#endif
typedef enum SPPROPSRC
{
	SPPROPSRC_RECO_INST = 0,
	SPPROPSRC_RECO_CTX = (SPPROPSRC_RECO_INST + 1),
	SPPROPSRC_RECO_GRAMMAR = (SPPROPSRC_RECO_CTX + 1)
} SPPROPSRC;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0014_v0_0_s_ifspec;
#ifndef __ISpSREngine_INTERFACE_DEFINED__
#define __ISpSREngine_INTERFACE_DEFINED__
extern const IID IID_ISpSREngine;
typedef struct ISpSREngineVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISpSREngine * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISpSREngine * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISpSREngine * This);
	HRESULT(STDMETHODCALLTYPE * SetSite) (ISpSREngine * This, ISpSREngineSite * pSite);
	HRESULT(STDMETHODCALLTYPE * GetInputAudioFormat) (ISpSREngine * This, const GUID * pguidSourceFormatId, const WAVEFORMATEX * pSourceWaveFormatEx, GUID * pguidDesiredFormatId, WAVEFORMATEX ** ppCoMemDesiredWaveFormatEx);
	HRESULT(STDMETHODCALLTYPE * RecognizeStream) (ISpSREngine * This, REFGUID rguidFmtId, const WAVEFORMATEX * pWaveFormatEx, HANDLE hRequestSync, HANDLE hDataAvailable, HANDLE hExit, BOOL fNewAudioStream, BOOL fRealTimeAudio, ISpObjectToken * pAudioObjectToken);
	HRESULT(STDMETHODCALLTYPE * SetRecoProfile) (ISpSREngine * This, ISpObjectToken * pProfile);
	HRESULT(STDMETHODCALLTYPE * OnCreateGrammar) (ISpSREngine * This, void *pvEngineRecoContext, SPGRAMMARHANDLE hSAPIGrammar, void **ppvEngineGrammarContext);
	HRESULT(STDMETHODCALLTYPE * OnDeleteGrammar) (ISpSREngine * This, void *pvEngineGrammar);
	HRESULT(STDMETHODCALLTYPE * LoadProprietaryGrammar) (ISpSREngine * This, void *pvEngineGrammar, REFGUID rguidParam, LPCWSTR pszStringParam, const void *pvDataParam, ULONG ulDataSize, SPLOADOPTIONS Options);
	HRESULT(STDMETHODCALLTYPE * UnloadProprietaryGrammar) (ISpSREngine * This, void *pvEngineGrammar);
	HRESULT(STDMETHODCALLTYPE * SetProprietaryRuleState) (ISpSREngine * This, void *pvEngineGrammar, LPCWSTR pszName, void *pReserved, SPRULESTATE NewState, ULONG * pcRulesChanged);
	HRESULT(STDMETHODCALLTYPE * SetProprietaryRuleIdState) (ISpSREngine * This, void *pvEngineGrammar, DWORD dwRuleId, SPRULESTATE NewState);
	HRESULT(STDMETHODCALLTYPE * LoadSLM) (ISpSREngine * This, void *pvEngineGrammar, LPCWSTR pszTopicName);
	HRESULT(STDMETHODCALLTYPE * UnloadSLM) (ISpSREngine * This, void *pvEngineGrammar);
	HRESULT(STDMETHODCALLTYPE * SetSLMState) (ISpSREngine * This, void *pvEngineGrammar, SPRULESTATE NewState);
	HRESULT(STDMETHODCALLTYPE * SetWordSequenceData) (ISpSREngine * This, void *pvEngineGrammar, const WCHAR * pText, ULONG cchText, const SPTEXTSELECTIONINFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * SetTextSelection) (ISpSREngine * This, void *pvEngineGrammar, const SPTEXTSELECTIONINFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * IsPronounceable) (ISpSREngine * This, void *pvEngineGrammar, LPCWSTR pszWord, SPWORDPRONOUNCEABLE * pWordPronounceable);
	HRESULT(STDMETHODCALLTYPE * OnCreateRecoContext) (ISpSREngine * This, SPRECOCONTEXTHANDLE hSAPIRecoContext, void **ppvEngineContext);
	HRESULT(STDMETHODCALLTYPE * OnDeleteRecoContext) (ISpSREngine * This, void *pvEngineContext);
	HRESULT(STDMETHODCALLTYPE * PrivateCall) (ISpSREngine * This, void *pvEngineContext, PVOID pCallFrame, ULONG ulCallFrameSize);
	HRESULT(STDMETHODCALLTYPE * SetAdaptationData) (ISpSREngine * This, void *pvEngineContext, const WCHAR * pAdaptationData, const ULONG cch);
	HRESULT(STDMETHODCALLTYPE * SetPropertyNum) (ISpSREngine * This, SPPROPSRC eSrc, void *pvSrcObj, const WCHAR * pName, LONG lValue);
	HRESULT(STDMETHODCALLTYPE * GetPropertyNum) (ISpSREngine * This, SPPROPSRC eSrc, void *pvSrcObj, const WCHAR * pName, LONG * lValue);
	HRESULT(STDMETHODCALLTYPE * SetPropertyString) (ISpSREngine * This, SPPROPSRC eSrc, void *pvSrcObj, LPCWSTR pName, LPCWSTR pValue);
	HRESULT(STDMETHODCALLTYPE * GetPropertyString) (ISpSREngine * This, SPPROPSRC eSrc, void *pvSrcObj, LPCWSTR pName, LPWSTR * ppCoMemValue);
	HRESULT(STDMETHODCALLTYPE * SetGrammarState) (ISpSREngine * This, void *pvEngineGrammar, SPGRAMMARSTATE eGrammarState);
	HRESULT(STDMETHODCALLTYPE * WordNotify) (ISpSREngine * This, SPCFGNOTIFY Action, ULONG cWords, const SPWORDENTRY * pWords);
	HRESULT(STDMETHODCALLTYPE * RuleNotify) (ISpSREngine * This, SPCFGNOTIFY Action, ULONG cRules, const SPRULEENTRY * pRules);
	HRESULT(STDMETHODCALLTYPE * PrivateCallEx) (ISpSREngine * This, void *pvEngineContext, const void *pInCallFrame, ULONG ulInCallFrameSize, void **ppvCoMemResponse, ULONG * pulResponseSize);
	HRESULT(STDMETHODCALLTYPE * SetContextState) (ISpSREngine * This, void *pvEngineContext, SPCONTEXTSTATE eContextState);
	END_INTERFACE
}  ISpSREngineVtbl;
interface ISpSREngine
{
	CONST_VTBL struct ISpSREngineVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpSREngine_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpSREngine_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISpSREngine_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISpSREngine_SetSite(This,pSite) ( (This)->lpVtbl -> SetSite(This,pSite) )
#define ISpSREngine_GetInputAudioFormat(This,pguidSourceFormatId,pSourceWaveFormatEx,pguidDesiredFormatId,ppCoMemDesiredWaveFormatEx) ( (This)->lpVtbl -> GetInputAudioFormat(This,pguidSourceFormatId,pSourceWaveFormatEx,pguidDesiredFormatId,ppCoMemDesiredWaveFormatEx) )
#define ISpSREngine_RecognizeStream(This,rguidFmtId,pWaveFormatEx,hRequestSync,hDataAvailable,hExit,fNewAudioStream,fRealTimeAudio,pAudioObjectToken) ( (This)->lpVtbl -> RecognizeStream(This,rguidFmtId,pWaveFormatEx,hRequestSync,hDataAvailable,hExit,fNewAudioStream,fRealTimeAudio,pAudioObjectToken) )
#define ISpSREngine_SetRecoProfile(This,pProfile) ( (This)->lpVtbl -> SetRecoProfile(This,pProfile) )
#define ISpSREngine_OnCreateGrammar(This,pvEngineRecoContext,hSAPIGrammar,ppvEngineGrammarContext) ( (This)->lpVtbl -> OnCreateGrammar(This,pvEngineRecoContext,hSAPIGrammar,ppvEngineGrammarContext) )
#define ISpSREngine_OnDeleteGrammar(This,pvEngineGrammar) ( (This)->lpVtbl -> OnDeleteGrammar(This,pvEngineGrammar) )
#define ISpSREngine_LoadProprietaryGrammar(This,pvEngineGrammar,rguidParam,pszStringParam,pvDataParam,ulDataSize,Options) ( (This)->lpVtbl -> LoadProprietaryGrammar(This,pvEngineGrammar,rguidParam,pszStringParam,pvDataParam,ulDataSize,Options) )
#define ISpSREngine_UnloadProprietaryGrammar(This,pvEngineGrammar) ( (This)->lpVtbl -> UnloadProprietaryGrammar(This,pvEngineGrammar) )
#define ISpSREngine_SetProprietaryRuleState(This,pvEngineGrammar,pszName,pReserved,NewState,pcRulesChanged) ( (This)->lpVtbl -> SetProprietaryRuleState(This,pvEngineGrammar,pszName,pReserved,NewState,pcRulesChanged) )
#define ISpSREngine_SetProprietaryRuleIdState(This,pvEngineGrammar,dwRuleId,NewState) ( (This)->lpVtbl -> SetProprietaryRuleIdState(This,pvEngineGrammar,dwRuleId,NewState) )
#define ISpSREngine_LoadSLM(This,pvEngineGrammar,pszTopicName) ( (This)->lpVtbl -> LoadSLM(This,pvEngineGrammar,pszTopicName) )
#define ISpSREngine_UnloadSLM(This,pvEngineGrammar) ( (This)->lpVtbl -> UnloadSLM(This,pvEngineGrammar) )
#define ISpSREngine_SetSLMState(This,pvEngineGrammar,NewState) ( (This)->lpVtbl -> SetSLMState(This,pvEngineGrammar,NewState) )
#define ISpSREngine_SetWordSequenceData(This,pvEngineGrammar,pText,cchText,pInfo) ( (This)->lpVtbl -> SetWordSequenceData(This,pvEngineGrammar,pText,cchText,pInfo) )
#define ISpSREngine_SetTextSelection(This,pvEngineGrammar,pInfo) ( (This)->lpVtbl -> SetTextSelection(This,pvEngineGrammar,pInfo) )
#define ISpSREngine_IsPronounceable(This,pvEngineGrammar,pszWord,pWordPronounceable) ( (This)->lpVtbl -> IsPronounceable(This,pvEngineGrammar,pszWord,pWordPronounceable) )
#define ISpSREngine_OnCreateRecoContext(This,hSAPIRecoContext,ppvEngineContext) ( (This)->lpVtbl -> OnCreateRecoContext(This,hSAPIRecoContext,ppvEngineContext) )
#define ISpSREngine_OnDeleteRecoContext(This,pvEngineContext) ( (This)->lpVtbl -> OnDeleteRecoContext(This,pvEngineContext) )
#define ISpSREngine_PrivateCall(This,pvEngineContext,pCallFrame,ulCallFrameSize) ( (This)->lpVtbl -> PrivateCall(This,pvEngineContext,pCallFrame,ulCallFrameSize) )
#define ISpSREngine_SetAdaptationData(This,pvEngineContext,pAdaptationData,cch) ( (This)->lpVtbl -> SetAdaptationData(This,pvEngineContext,pAdaptationData,cch) )
#define ISpSREngine_SetPropertyNum(This,eSrc,pvSrcObj,pName,lValue) ( (This)->lpVtbl -> SetPropertyNum(This,eSrc,pvSrcObj,pName,lValue) )
#define ISpSREngine_GetPropertyNum(This,eSrc,pvSrcObj,pName,lValue) ( (This)->lpVtbl -> GetPropertyNum(This,eSrc,pvSrcObj,pName,lValue) )
#define ISpSREngine_SetPropertyString(This,eSrc,pvSrcObj,pName,pValue) ( (This)->lpVtbl -> SetPropertyString(This,eSrc,pvSrcObj,pName,pValue) )
#define ISpSREngine_GetPropertyString(This,eSrc,pvSrcObj,pName,ppCoMemValue) ( (This)->lpVtbl -> GetPropertyString(This,eSrc,pvSrcObj,pName,ppCoMemValue) )
#define ISpSREngine_SetGrammarState(This,pvEngineGrammar,eGrammarState) ( (This)->lpVtbl -> SetGrammarState(This,pvEngineGrammar,eGrammarState) )
#define ISpSREngine_WordNotify(This,Action,cWords,pWords) ( (This)->lpVtbl -> WordNotify(This,Action,cWords,pWords) )
#define ISpSREngine_RuleNotify(This,Action,cRules,pRules) ( (This)->lpVtbl -> RuleNotify(This,Action,cRules,pRules) )
#define ISpSREngine_PrivateCallEx(This,pvEngineContext,pInCallFrame,ulInCallFrameSize,ppvCoMemResponse,pulResponseSize) ( (This)->lpVtbl -> PrivateCallEx(This,pvEngineContext,pInCallFrame,ulInCallFrameSize,ppvCoMemResponse,pulResponseSize) )
#define ISpSREngine_SetContextState(This,pvEngineContext,eContextState) ( (This)->lpVtbl -> SetContextState(This,pvEngineContext,eContextState) )
#endif
#endif
typedef struct tagSPPHRASEALTREQUEST
{
	ULONG ulStartElement;
	ULONG cElements;
	ULONG ulRequestAltCount;
	void *pvResultExtra;
	ULONG cbResultExtra;
	ISpPhrase *pPhrase;
	ISpRecoContext *pRecoContext;
} SPPHRASEALTREQUEST;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapiddk51_0000_0015_v0_0_s_ifspec;
#ifndef ___ISpPrivateEngineCall_INTERFACE_DEFINED__
#define ___ISpPrivateEngineCall_INTERFACE_DEFINED__
extern const IID IID__ISpPrivateEngineCall;
typedef struct _ISpPrivateEngineCallVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_ISpPrivateEngineCall * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_ISpPrivateEngineCall * This);
	ULONG(STDMETHODCALLTYPE * Release) (_ISpPrivateEngineCall * This);
	HRESULT(STDMETHODCALLTYPE * CallEngine) (_ISpPrivateEngineCall * This, void *pCallFrame, ULONG ulCallFrameSize);
	HRESULT(STDMETHODCALLTYPE * CallEngineEx) (_ISpPrivateEngineCall * This, const void *pInFrame, ULONG ulInFrameSize, void **ppCoMemOutFrame, ULONG * pulOutFrameSize);
	END_INTERFACE
}  _ISpPrivateEngineCallVtbl;
interface _ISpPrivateEngineCall
{
	CONST_VTBL struct _ISpPrivateEngineCallVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _ISpPrivateEngineCall_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _ISpPrivateEngineCall_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define _ISpPrivateEngineCall_Release(This) ( (This)->lpVtbl -> Release(This) )
#define _ISpPrivateEngineCall_CallEngine(This,pCallFrame,ulCallFrameSize) ( (This)->lpVtbl -> CallEngine(This,pCallFrame,ulCallFrameSize) )
#define _ISpPrivateEngineCall_CallEngineEx(This,pInFrame,ulInFrameSize,ppCoMemOutFrame,pulOutFrameSize) ( (This)->lpVtbl -> CallEngineEx(This,pInFrame,ulInFrameSize,ppCoMemOutFrame,pulOutFrameSize) )
#endif
#endif
#ifndef __SpeechDDKLib_LIBRARY_DEFINED__
#define __SpeechDDKLib_LIBRARY_DEFINED__
extern const IID LIBID_SpeechDDKLib;
extern const CLSID CLSID_SpDataKey;
extern const CLSID CLSID_SpObjectTokenEnum;
extern const CLSID CLSID_SpPhraseBuilder;
extern const CLSID CLSID_SpITNProcessor;
extern const CLSID CLSID_SpGrammarCompiler;
extern const CLSID CLSID_SpGramCompBackend;
#endif
#endif
