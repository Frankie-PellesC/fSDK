/*+@@file@@----------------------------------------------------------------*//*!
 \file		structuredquery.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 20:13:14 2016
 \date		Modified on Sun Sep  4 20:13:14 2016
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
#ifndef __structuredquery_h__
#define __structuredquery_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IQueryParser_FWD_DEFINED__
#define __IQueryParser_FWD_DEFINED__
typedef interface IQueryParser IQueryParser;
#endif
#ifndef __IConditionFactory_FWD_DEFINED__
#define __IConditionFactory_FWD_DEFINED__
typedef interface IConditionFactory IConditionFactory;
#endif
#ifndef __IQuerySolution_FWD_DEFINED__
#define __IQuerySolution_FWD_DEFINED__
typedef interface IQuerySolution IQuerySolution;
#endif
#ifndef __IConditionFactory2_FWD_DEFINED__
#define __IConditionFactory2_FWD_DEFINED__
typedef interface IConditionFactory2 IConditionFactory2;
#endif
#ifndef __IConditionGenerator_FWD_DEFINED__
#define __IConditionGenerator_FWD_DEFINED__
typedef interface IConditionGenerator IConditionGenerator;
#endif
#ifndef __IInterval_FWD_DEFINED__
#define __IInterval_FWD_DEFINED__
typedef interface IInterval IInterval;
#endif
#ifndef __IMetaData_FWD_DEFINED__
#define __IMetaData_FWD_DEFINED__
typedef interface IMetaData IMetaData;
#endif
#ifndef __IEntity_FWD_DEFINED__
#define __IEntity_FWD_DEFINED__
typedef interface IEntity IEntity;
#endif
#ifndef __IRelationship_FWD_DEFINED__
#define __IRelationship_FWD_DEFINED__
typedef interface IRelationship IRelationship;
#endif
#ifndef __INamedEntity_FWD_DEFINED__
#define __INamedEntity_FWD_DEFINED__
typedef interface INamedEntity INamedEntity;
#endif
#ifndef __ISchemaProvider_FWD_DEFINED__
#define __ISchemaProvider_FWD_DEFINED__
typedef interface ISchemaProvider ISchemaProvider;
#endif
#ifndef __ITokenCollection_FWD_DEFINED__
#define __ITokenCollection_FWD_DEFINED__
typedef interface ITokenCollection ITokenCollection;
#endif
#ifndef __INamedEntityCollector_FWD_DEFINED__
#define __INamedEntityCollector_FWD_DEFINED__
typedef interface INamedEntityCollector INamedEntityCollector;
#endif
#ifndef __ISchemaLocalizerSupport_FWD_DEFINED__
#define __ISchemaLocalizerSupport_FWD_DEFINED__
typedef interface ISchemaLocalizerSupport ISchemaLocalizerSupport;
#endif
#ifndef __IQueryParserManager_FWD_DEFINED__
#define __IQueryParserManager_FWD_DEFINED__
typedef interface IQueryParserManager IQueryParserManager;
#endif
#ifndef __QueryParser_FWD_DEFINED__
#define __QueryParser_FWD_DEFINED__
typedef struct QueryParser QueryParser;
#endif
#ifndef __NegationCondition_FWD_DEFINED__
#define __NegationCondition_FWD_DEFINED__
typedef struct NegationCondition NegationCondition;
#endif
#ifndef __CompoundCondition_FWD_DEFINED__
#define __CompoundCondition_FWD_DEFINED__
typedef struct CompoundCondition CompoundCondition;
#endif
#ifndef __LeafCondition_FWD_DEFINED__
#define __LeafCondition_FWD_DEFINED__
typedef struct LeafCondition LeafCondition;
#endif
#ifndef __ConditionFactory_FWD_DEFINED__
#define __ConditionFactory_FWD_DEFINED__
typedef struct ConditionFactory ConditionFactory;
#endif
#ifndef __Interval_FWD_DEFINED__
#define __Interval_FWD_DEFINED__
typedef struct Interval Interval;
#endif
#ifndef __QueryParserManager_FWD_DEFINED__
#define __QueryParserManager_FWD_DEFINED__
typedef struct QueryParserManager QueryParserManager;
#endif
#include "StructuredQueryCondition.h"
#include "ObjectArray.h"
#if 0
typedef PROPERTYKEY *REFPROPERTYKEY;
#endif
#include <propkeydef.h>
typedef enum tagSTRUCTURED_QUERY_SYNTAX
{
	SQS_NO_SYNTAX = 0,
	SQS_ADVANCED_QUERY_SYNTAX = (SQS_NO_SYNTAX + 1),
	SQS_NATURAL_QUERY_SYNTAX = (SQS_ADVANCED_QUERY_SYNTAX + 1)
} STRUCTURED_QUERY_SYNTAX;
typedef enum tagSTRUCTURED_QUERY_SINGLE_OPTION
{
	SQSO_SCHEMA = 0,
	SQSO_LOCALE_WORD_BREAKING = (SQSO_SCHEMA + 1),
	SQSO_WORD_BREAKER = (SQSO_LOCALE_WORD_BREAKING + 1),
	SQSO_NATURAL_SYNTAX = (SQSO_WORD_BREAKER + 1),
	SQSO_AUTOMATIC_WILDCARD = (SQSO_NATURAL_SYNTAX + 1),
	SQSO_TRACE_LEVEL = (SQSO_AUTOMATIC_WILDCARD + 1),
	SQSO_LANGUAGE_KEYWORDS = (SQSO_TRACE_LEVEL + 1),
	SQSO_SYNTAX = (SQSO_LANGUAGE_KEYWORDS + 1),
	SQSO_TIME_ZONE = (SQSO_SYNTAX + 1),
	SQSO_IMPLICIT_CONNECTOR = (SQSO_TIME_ZONE + 1),
	SQSO_CONNECTOR_CASE = (SQSO_IMPLICIT_CONNECTOR + 1)
} STRUCTURED_QUERY_SINGLE_OPTION;
typedef enum tagSTRUCTURED_QUERY_MULTIOPTION
{
	SQMO_VIRTUAL_PROPERTY = 0,
	SQMO_DEFAULT_PROPERTY = (SQMO_VIRTUAL_PROPERTY + 1),
	SQMO_GENERATOR_FOR_TYPE = (SQMO_DEFAULT_PROPERTY + 1),
	SQMO_MAP_PROPERTY = (SQMO_GENERATOR_FOR_TYPE + 1)
} STRUCTURED_QUERY_MULTIOPTION;
typedef enum tagSTRUCTURED_QUERY_PARSE_ERROR
{
	SQPE_NONE = 0,
	SQPE_EXTRA_OPENING_PARENTHESIS = (SQPE_NONE + 1),
	SQPE_EXTRA_CLOSING_PARENTHESIS = (SQPE_EXTRA_OPENING_PARENTHESIS + 1),
	SQPE_IGNORED_MODIFIER = (SQPE_EXTRA_CLOSING_PARENTHESIS + 1),
	SQPE_IGNORED_CONNECTOR = (SQPE_IGNORED_MODIFIER + 1),
	SQPE_IGNORED_KEYWORD = (SQPE_IGNORED_CONNECTOR + 1),
	SQPE_UNHANDLED = (SQPE_IGNORED_KEYWORD + 1)
} STRUCTURED_QUERY_PARSE_ERROR;
typedef enum STRUCTURED_QUERY_RESOLVE_OPTION
{
	SQRO_DEFAULT = 0,
	SQRO_DONT_RESOLVE_DATETIME = 0x1,
	SQRO_ALWAYS_ONE_INTERVAL = 0x2,
	SQRO_DONT_SIMPLIFY_CONDITION_TREES = 0x4,
	SQRO_DONT_MAP_RELATIONS = 0x8,
	SQRO_DONT_RESOLVE_RANGES = 0x10,
	SQRO_DONT_REMOVE_UNRESTRICTED_KEYWORDS = 0x20,
	SQRO_DONT_SPLIT_WORDS = 0x40,
	SQRO_IGNORE_PHRASE_ORDER = 0x80,
	SQRO_ADD_VALUE_TYPE_FOR_PLAIN_VALUES = 0x100,
	SQRO_ADD_ROBUST_ITEM_NAME = 0x200
} STRUCTURED_QUERY_RESOLVE_OPTION;
DEFINE_ENUM_FLAG_OPERATORS(STRUCTURED_QUERY_RESOLVE_OPTION);
typedef enum CASE_REQUIREMENT
{
	CASE_REQUIREMENT_ANY = 0,
	CASE_REQUIREMENT_UPPER_IF_AQS = (CASE_REQUIREMENT_ANY + 1)
} CASE_REQUIREMENT;
typedef enum tagINTERVAL_LIMIT_KIND
{
	ILK_EXPLICIT_INCLUDED = 0,
	ILK_EXPLICIT_EXCLUDED = (ILK_EXPLICIT_INCLUDED + 1),
	ILK_NEGATIVE_INFINITY = (ILK_EXPLICIT_EXCLUDED + 1),
	ILK_POSITIVE_INFINITY = (ILK_NEGATIVE_INFINITY + 1)
} INTERVAL_LIMIT_KIND;
typedef enum tagQUERY_PARSER_MANAGER_OPTION
{
	QPMO_SCHEMA_BINARY_NAME = 0,
	QPMO_PRELOCALIZED_SCHEMA_BINARY_PATH = (QPMO_SCHEMA_BINARY_NAME + 1),
	QPMO_UNLOCALIZED_SCHEMA_BINARY_PATH = (QPMO_PRELOCALIZED_SCHEMA_BINARY_PATH + 1),
	QPMO_LOCALIZED_SCHEMA_BINARY_PATH = (QPMO_UNLOCALIZED_SCHEMA_BINARY_PATH + 1),
	QPMO_APPEND_LCID_TO_LOCALIZED_PATH = (QPMO_LOCALIZED_SCHEMA_BINARY_PATH + 1),
	QPMO_LOCALIZER_SUPPORT = (QPMO_APPEND_LCID_TO_LOCALIZED_PATH + 1)
} QUERY_PARSER_MANAGER_OPTION;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0000_v0_0_s_ifspec;
#ifndef __IQueryParser_INTERFACE_DEFINED__
#define __IQueryParser_INTERFACE_DEFINED__
extern const IID IID_IQueryParser;
typedef struct IQueryParserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IQueryParser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IQueryParser * This);
	ULONG(STDMETHODCALLTYPE * Release) (IQueryParser * This);
	HRESULT(STDMETHODCALLTYPE * Parse) (IQueryParser * This, LPCWSTR pszInputString, IEnumUnknown * pCustomProperties, IQuerySolution ** ppSolution);
	HRESULT(STDMETHODCALLTYPE * SetOption) (IQueryParser * This, STRUCTURED_QUERY_SINGLE_OPTION option, const PROPVARIANT * pOptionValue);
	HRESULT(STDMETHODCALLTYPE * GetOption) (IQueryParser * This, STRUCTURED_QUERY_SINGLE_OPTION option, PROPVARIANT * pOptionValue);
	HRESULT(STDMETHODCALLTYPE * SetMultiOption) (IQueryParser * This, STRUCTURED_QUERY_MULTIOPTION option, LPCWSTR pszOptionKey, const PROPVARIANT * pOptionValue);
	HRESULT(STDMETHODCALLTYPE * GetSchemaProvider) (IQueryParser * This, ISchemaProvider ** ppSchemaProvider);
	HRESULT(STDMETHODCALLTYPE * RestateToString) (IQueryParser * This, ICondition * pCondition, BOOL fUseEnglish, LPWSTR * ppszQueryString);
	HRESULT(STDMETHODCALLTYPE * ParsePropertyValue) (IQueryParser * This, LPCWSTR pszPropertyName, LPCWSTR pszInputString, IQuerySolution ** ppSolution);
	HRESULT(STDMETHODCALLTYPE * RestatePropertyValueToString) (IQueryParser * This, ICondition * pCondition, BOOL fUseEnglish, LPWSTR * ppszPropertyName, LPWSTR * ppszQueryString);
	END_INTERFACE
}  IQueryParserVtbl;
interface IQueryParser
{
	CONST_VTBL struct IQueryParserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IQueryParser_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IQueryParser_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IQueryParser_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IQueryParser_Parse(This,pszInputString,pCustomProperties,ppSolution) ( (This)->lpVtbl -> Parse(This,pszInputString,pCustomProperties,ppSolution) )
#define IQueryParser_SetOption(This,option,pOptionValue) ( (This)->lpVtbl -> SetOption(This,option,pOptionValue) )
#define IQueryParser_GetOption(This,option,pOptionValue) ( (This)->lpVtbl -> GetOption(This,option,pOptionValue) )
#define IQueryParser_SetMultiOption(This,option,pszOptionKey,pOptionValue) ( (This)->lpVtbl -> SetMultiOption(This,option,pszOptionKey,pOptionValue) )
#define IQueryParser_GetSchemaProvider(This,ppSchemaProvider) ( (This)->lpVtbl -> GetSchemaProvider(This,ppSchemaProvider) )
#define IQueryParser_RestateToString(This,pCondition,fUseEnglish,ppszQueryString) ( (This)->lpVtbl -> RestateToString(This,pCondition,fUseEnglish,ppszQueryString) )
#define IQueryParser_ParsePropertyValue(This,pszPropertyName,pszInputString,ppSolution) ( (This)->lpVtbl -> ParsePropertyValue(This,pszPropertyName,pszInputString,ppSolution) )
#define IQueryParser_RestatePropertyValueToString(This,pCondition,fUseEnglish,ppszPropertyName,ppszQueryString) ( (This)->lpVtbl -> RestatePropertyValueToString(This,pCondition,fUseEnglish,ppszPropertyName,ppszQueryString) )
#endif
#endif
#ifndef __IConditionFactory_INTERFACE_DEFINED__
#define __IConditionFactory_INTERFACE_DEFINED__
extern const IID IID_IConditionFactory;
typedef struct IConditionFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IConditionFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IConditionFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IConditionFactory * This);
	HRESULT(STDMETHODCALLTYPE * MakeNot) (IConditionFactory * This, ICondition * pcSub, BOOL fSimplify, ICondition ** ppcResult);
	HRESULT(STDMETHODCALLTYPE * MakeAndOr) (IConditionFactory * This, CONDITION_TYPE ct, IEnumUnknown * peuSubs, BOOL fSimplify, ICondition ** ppcResult);
	HRESULT(STDMETHODCALLTYPE * MakeLeaf) (IConditionFactory * This, LPCWSTR pszPropertyName, CONDITION_OPERATION cop, LPCWSTR pszValueType, const PROPVARIANT * ppropvar, IRichChunk * pPropertyNameTerm, IRichChunk * pOperationTerm, IRichChunk * pValueTerm, BOOL fExpand, ICondition ** ppcResult);
	HRESULT(STDMETHODCALLTYPE * Resolve) (IConditionFactory * This, ICondition * pc, STRUCTURED_QUERY_RESOLVE_OPTION sqro, const SYSTEMTIME * pstReferenceTime, ICondition ** ppcResolved);
	END_INTERFACE
}  IConditionFactoryVtbl;
interface IConditionFactory
{
	CONST_VTBL struct IConditionFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConditionFactory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConditionFactory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConditionFactory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConditionFactory_MakeNot(This,pcSub,fSimplify,ppcResult) ( (This)->lpVtbl -> MakeNot(This,pcSub,fSimplify,ppcResult) )
#define IConditionFactory_MakeAndOr(This,ct,peuSubs,fSimplify,ppcResult) ( (This)->lpVtbl -> MakeAndOr(This,ct,peuSubs,fSimplify,ppcResult) )
#define IConditionFactory_MakeLeaf(This,pszPropertyName,cop,pszValueType,ppropvar,pPropertyNameTerm,pOperationTerm,pValueTerm,fExpand,ppcResult) ( (This)->lpVtbl -> MakeLeaf(This,pszPropertyName,cop,pszValueType,ppropvar,pPropertyNameTerm,pOperationTerm,pValueTerm,fExpand,ppcResult) )
#define IConditionFactory_Resolve(This,pc,sqro,pstReferenceTime,ppcResolved) ( (This)->lpVtbl -> Resolve(This,pc,sqro,pstReferenceTime,ppcResolved) )
#endif
#endif
#ifndef __IQuerySolution_INTERFACE_DEFINED__
#define __IQuerySolution_INTERFACE_DEFINED__
extern const IID IID_IQuerySolution;
typedef struct IQuerySolutionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IQuerySolution * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IQuerySolution * This);
	ULONG(STDMETHODCALLTYPE * Release) (IQuerySolution * This);
	HRESULT(STDMETHODCALLTYPE * MakeNot) (IQuerySolution * This, ICondition * pcSub, BOOL fSimplify, ICondition ** ppcResult);
	HRESULT(STDMETHODCALLTYPE * MakeAndOr) (IQuerySolution * This, CONDITION_TYPE ct, IEnumUnknown * peuSubs, BOOL fSimplify, ICondition ** ppcResult);
	HRESULT(STDMETHODCALLTYPE * MakeLeaf) (IQuerySolution * This, LPCWSTR pszPropertyName, CONDITION_OPERATION cop, LPCWSTR pszValueType, const PROPVARIANT * ppropvar, IRichChunk * pPropertyNameTerm, IRichChunk * pOperationTerm, IRichChunk * pValueTerm, BOOL fExpand, ICondition ** ppcResult);
	HRESULT(STDMETHODCALLTYPE * Resolve) (IQuerySolution * This, ICondition * pc, STRUCTURED_QUERY_RESOLVE_OPTION sqro, const SYSTEMTIME * pstReferenceTime, ICondition ** ppcResolved);
	HRESULT(STDMETHODCALLTYPE * GetQuery) (IQuerySolution * This, ICondition ** ppQueryNode, IEntity ** ppMainType);
	HRESULT(STDMETHODCALLTYPE * GetErrors) (IQuerySolution * This, REFIID riid, void **ppParseErrors);
	HRESULT(STDMETHODCALLTYPE * GetLexicalData) (IQuerySolution * This, LPWSTR * ppszInputString, ITokenCollection ** ppTokens, LCID * plcid, IUnknown ** ppWordBreaker);
	END_INTERFACE
}  IQuerySolutionVtbl;
interface IQuerySolution
{
	CONST_VTBL struct IQuerySolutionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IQuerySolution_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IQuerySolution_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IQuerySolution_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IQuerySolution_MakeNot(This,pcSub,fSimplify,ppcResult) ( (This)->lpVtbl -> MakeNot(This,pcSub,fSimplify,ppcResult) )
#define IQuerySolution_MakeAndOr(This,ct,peuSubs,fSimplify,ppcResult) ( (This)->lpVtbl -> MakeAndOr(This,ct,peuSubs,fSimplify,ppcResult) )
#define IQuerySolution_MakeLeaf(This,pszPropertyName,cop,pszValueType,ppropvar,pPropertyNameTerm,pOperationTerm,pValueTerm,fExpand,ppcResult) ( (This)->lpVtbl -> MakeLeaf(This,pszPropertyName,cop,pszValueType,ppropvar,pPropertyNameTerm,pOperationTerm,pValueTerm,fExpand,ppcResult) )
#define IQuerySolution_Resolve(This,pc,sqro,pstReferenceTime,ppcResolved) ( (This)->lpVtbl -> Resolve(This,pc,sqro,pstReferenceTime,ppcResolved) )
#define IQuerySolution_GetQuery(This,ppQueryNode,ppMainType) ( (This)->lpVtbl -> GetQuery(This,ppQueryNode,ppMainType) )
#define IQuerySolution_GetErrors(This,riid,ppParseErrors) ( (This)->lpVtbl -> GetErrors(This,riid,ppParseErrors) )
#define IQuerySolution_GetLexicalData(This,ppszInputString,ppTokens,plcid,ppWordBreaker) ( (This)->lpVtbl -> GetLexicalData(This,ppszInputString,ppTokens,plcid,ppWordBreaker) )
#endif
#endif
typedef enum CONDITION_CREATION_OPTIONS
{
	CONDITION_CREATION_DEFAULT = 0,
	CONDITION_CREATION_NONE = 0,
	CONDITION_CREATION_SIMPLIFY = 0x1,
	CONDITION_CREATION_VECTOR_AND = 0x2,
	CONDITION_CREATION_VECTOR_OR = 0x4,
	CONDITION_CREATION_VECTOR_LEAF = 0x8,
	CONDITION_CREATION_USE_CONTENT_LOCALE = 0x10
} CONDITION_CREATION_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(CONDITION_CREATION_OPTIONS);
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0003_v0_0_s_ifspec;
#ifndef __IConditionFactory2_INTERFACE_DEFINED__
#define __IConditionFactory2_INTERFACE_DEFINED__
extern const IID IID_IConditionFactory2;
typedef struct IConditionFactory2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IConditionFactory2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IConditionFactory2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IConditionFactory2 * This);
	HRESULT(STDMETHODCALLTYPE * MakeNot) (IConditionFactory2 * This, ICondition * pcSub, BOOL fSimplify, ICondition ** ppcResult);
	HRESULT(STDMETHODCALLTYPE * MakeAndOr) (IConditionFactory2 * This, CONDITION_TYPE ct, IEnumUnknown * peuSubs, BOOL fSimplify, ICondition ** ppcResult);
	HRESULT(STDMETHODCALLTYPE * MakeLeaf) (IConditionFactory2 * This, LPCWSTR pszPropertyName, CONDITION_OPERATION cop, LPCWSTR pszValueType, const PROPVARIANT * ppropvar, IRichChunk * pPropertyNameTerm, IRichChunk * pOperationTerm, IRichChunk * pValueTerm, BOOL fExpand, ICondition ** ppcResult);
	HRESULT(STDMETHODCALLTYPE * Resolve) (IConditionFactory2 * This, ICondition * pc, STRUCTURED_QUERY_RESOLVE_OPTION sqro, const SYSTEMTIME * pstReferenceTime, ICondition ** ppcResolved);
	HRESULT(STDMETHODCALLTYPE * CreateTrueFalse) (IConditionFactory2 * This, BOOL fVal, CONDITION_CREATION_OPTIONS cco, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CreateNegation) (IConditionFactory2 * This, ICondition * pcSub, CONDITION_CREATION_OPTIONS cco, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CreateCompoundFromObjectArray) (IConditionFactory2 * This, CONDITION_TYPE ct, IObjectArray * poaSubs, CONDITION_CREATION_OPTIONS cco, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CreateCompoundFromArray) (IConditionFactory2 * This, CONDITION_TYPE ct, ICondition ** ppcondSubs, ULONG cSubs, CONDITION_CREATION_OPTIONS cco, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CreateStringLeaf) (IConditionFactory2 * This, REFPROPERTYKEY propkey, CONDITION_OPERATION cop, LPCWSTR pszValue, LPCWSTR pszLocaleName, CONDITION_CREATION_OPTIONS cco, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CreateIntegerLeaf) (IConditionFactory2 * This, REFPROPERTYKEY propkey, CONDITION_OPERATION cop, INT32 lValue, CONDITION_CREATION_OPTIONS cco, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CreateBooleanLeaf) (IConditionFactory2 * This, REFPROPERTYKEY propkey, CONDITION_OPERATION cop, BOOL fValue, CONDITION_CREATION_OPTIONS cco, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CreateLeaf) (IConditionFactory2 * This, REFPROPERTYKEY propkey, CONDITION_OPERATION cop, REFPROPVARIANT propvar, LPCWSTR pszSemanticType, LPCWSTR pszLocaleName, IRichChunk * pPropertyNameTerm, IRichChunk * pOperationTerm, IRichChunk * pValueTerm, CONDITION_CREATION_OPTIONS cco, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * ResolveCondition) (IConditionFactory2 * This, ICondition * pc, STRUCTURED_QUERY_RESOLVE_OPTION sqro, const SYSTEMTIME * pstReferenceTime, REFIID riid, void **ppv);
	END_INTERFACE
}  IConditionFactory2Vtbl;
interface IConditionFactory2
{
	CONST_VTBL struct IConditionFactory2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConditionFactory2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConditionFactory2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConditionFactory2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConditionFactory2_MakeNot(This,pcSub,fSimplify,ppcResult) ( (This)->lpVtbl -> MakeNot(This,pcSub,fSimplify,ppcResult) )
#define IConditionFactory2_MakeAndOr(This,ct,peuSubs,fSimplify,ppcResult) ( (This)->lpVtbl -> MakeAndOr(This,ct,peuSubs,fSimplify,ppcResult) )
#define IConditionFactory2_MakeLeaf(This,pszPropertyName,cop,pszValueType,ppropvar,pPropertyNameTerm,pOperationTerm,pValueTerm,fExpand,ppcResult) ( (This)->lpVtbl -> MakeLeaf(This,pszPropertyName,cop,pszValueType,ppropvar,pPropertyNameTerm,pOperationTerm,pValueTerm,fExpand,ppcResult) )
#define IConditionFactory2_Resolve(This,pc,sqro,pstReferenceTime,ppcResolved) ( (This)->lpVtbl -> Resolve(This,pc,sqro,pstReferenceTime,ppcResolved) )
#define IConditionFactory2_CreateTrueFalse(This,fVal,cco,riid,ppv) ( (This)->lpVtbl -> CreateTrueFalse(This,fVal,cco,riid,ppv) )
#define IConditionFactory2_CreateNegation(This,pcSub,cco,riid,ppv) ( (This)->lpVtbl -> CreateNegation(This,pcSub,cco,riid,ppv) )
#define IConditionFactory2_CreateCompoundFromObjectArray(This,ct,poaSubs,cco,riid,ppv) ( (This)->lpVtbl -> CreateCompoundFromObjectArray(This,ct,poaSubs,cco,riid,ppv) )
#define IConditionFactory2_CreateCompoundFromArray(This,ct,ppcondSubs,cSubs,cco,riid,ppv) ( (This)->lpVtbl -> CreateCompoundFromArray(This,ct,ppcondSubs,cSubs,cco,riid,ppv) )
#define IConditionFactory2_CreateStringLeaf(This,propkey,cop,pszValue,pszLocaleName,cco,riid,ppv) ( (This)->lpVtbl -> CreateStringLeaf(This,propkey,cop,pszValue,pszLocaleName,cco,riid,ppv) )
#define IConditionFactory2_CreateIntegerLeaf(This,propkey,cop,lValue,cco,riid,ppv) ( (This)->lpVtbl -> CreateIntegerLeaf(This,propkey,cop,lValue,cco,riid,ppv) )
#define IConditionFactory2_CreateBooleanLeaf(This,propkey,cop,fValue,cco,riid,ppv) ( (This)->lpVtbl -> CreateBooleanLeaf(This,propkey,cop,fValue,cco,riid,ppv) )
#define IConditionFactory2_CreateLeaf(This,propkey,cop,propvar,pszSemanticType,pszLocaleName,pPropertyNameTerm,pOperationTerm,pValueTerm,cco,riid,ppv) ( (This)->lpVtbl -> CreateLeaf(This,propkey,cop,propvar,pszSemanticType,pszLocaleName,pPropertyNameTerm,pOperationTerm,pValueTerm,cco,riid,ppv) )
#define IConditionFactory2_ResolveCondition(This,pc,sqro,pstReferenceTime,riid,ppv) ( (This)->lpVtbl -> ResolveCondition(This,pc,sqro,pstReferenceTime,riid,ppv) )
#endif
#endif
#ifndef __IConditionGenerator_INTERFACE_DEFINED__
#define __IConditionGenerator_INTERFACE_DEFINED__
extern const IID IID_IConditionGenerator;
typedef struct IConditionGeneratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IConditionGenerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IConditionGenerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IConditionGenerator * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IConditionGenerator * This, ISchemaProvider * pSchemaProvider);
	HRESULT(STDMETHODCALLTYPE * RecognizeNamedEntities) (IConditionGenerator * This, LPCWSTR pszInputString, LCID lcidUserLocale, ITokenCollection * pTokenCollection, INamedEntityCollector * pNamedEntities);
	HRESULT(STDMETHODCALLTYPE * GenerateForLeaf) (IConditionGenerator * This, IConditionFactory * pConditionFactory, LPCWSTR pszPropertyName, CONDITION_OPERATION cop, LPCWSTR pszValueType, LPCWSTR pszValue, LPCWSTR pszValue2, IRichChunk * pPropertyNameTerm, IRichChunk * pOperationTerm, IRichChunk * pValueTerm, BOOL automaticWildcard, BOOL * pNoStringQuery, ICondition ** ppQueryExpression);
	HRESULT(STDMETHODCALLTYPE * DefaultPhrase) (IConditionGenerator * This, LPCWSTR pszValueType, const PROPVARIANT * ppropvar, BOOL fUseEnglish, LPWSTR * ppszPhrase);
	END_INTERFACE
}  IConditionGeneratorVtbl;
interface IConditionGenerator
{
	CONST_VTBL struct IConditionGeneratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConditionGenerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConditionGenerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConditionGenerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConditionGenerator_Initialize(This,pSchemaProvider) ( (This)->lpVtbl -> Initialize(This,pSchemaProvider) )
#define IConditionGenerator_RecognizeNamedEntities(This,pszInputString,lcidUserLocale,pTokenCollection,pNamedEntities) ( (This)->lpVtbl -> RecognizeNamedEntities(This,pszInputString,lcidUserLocale,pTokenCollection,pNamedEntities) )
#define IConditionGenerator_GenerateForLeaf(This,pConditionFactory,pszPropertyName,cop,pszValueType,pszValue,pszValue2,pPropertyNameTerm,pOperationTerm,pValueTerm,automaticWildcard,pNoStringQuery,ppQueryExpression) ( (This)->lpVtbl -> GenerateForLeaf(This,pConditionFactory,pszPropertyName,cop,pszValueType,pszValue,pszValue2,pPropertyNameTerm,pOperationTerm,pValueTerm,automaticWildcard,pNoStringQuery,ppQueryExpression) )
#define IConditionGenerator_DefaultPhrase(This,pszValueType,ppropvar,fUseEnglish,ppszPhrase) ( (This)->lpVtbl -> DefaultPhrase(This,pszValueType,ppropvar,fUseEnglish,ppszPhrase) )
#endif
#endif
#ifndef __IInterval_INTERFACE_DEFINED__
#define __IInterval_INTERFACE_DEFINED__
extern const IID IID_IInterval;
typedef struct IIntervalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IInterval * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IInterval * This);
	ULONG(STDMETHODCALLTYPE * Release) (IInterval * This);
	HRESULT(STDMETHODCALLTYPE * GetLimits) (IInterval * This, INTERVAL_LIMIT_KIND * pilkLower, PROPVARIANT * ppropvarLower, INTERVAL_LIMIT_KIND * pilkUpper, PROPVARIANT * ppropvarUpper);
	END_INTERFACE
}  IIntervalVtbl;
interface IInterval
{
	CONST_VTBL struct IIntervalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInterval_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IInterval_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IInterval_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IInterval_GetLimits(This,pilkLower,ppropvarLower,pilkUpper,ppropvarUpper) ( (This)->lpVtbl -> GetLimits(This,pilkLower,ppropvarLower,pilkUpper,ppropvarUpper) )
#endif
#endif
#ifndef __IMetaData_INTERFACE_DEFINED__
#define __IMetaData_INTERFACE_DEFINED__
extern const IID IID_IMetaData;
typedef struct IMetaDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMetaData * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMetaData * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMetaData * This);
	HRESULT(STDMETHODCALLTYPE * GetData) (IMetaData * This, LPWSTR * ppszKey, LPWSTR * ppszValue);
	END_INTERFACE
}  IMetaDataVtbl;
interface IMetaData
{
	CONST_VTBL struct IMetaDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMetaData_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMetaData_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMetaData_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMetaData_GetData(This,ppszKey,ppszValue) ( (This)->lpVtbl -> GetData(This,ppszKey,ppszValue) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0007_v0_0_s_ifspec;
#ifndef __IEntity_INTERFACE_DEFINED__
#define __IEntity_INTERFACE_DEFINED__
extern const IID IID_IEntity;
typedef struct IEntityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEntity * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEntity * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEntity * This);
	HRESULT(STDMETHODCALLTYPE * Name) (IEntity * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * Base) (IEntity * This, IEntity ** pBaseEntity);
	HRESULT(STDMETHODCALLTYPE * Relationships) (IEntity * This, REFIID riid, void **pRelationships);
	HRESULT(STDMETHODCALLTYPE * GetRelationship) (IEntity * This, LPCWSTR pszRelationName, IRelationship ** pRelationship);
	HRESULT(STDMETHODCALLTYPE * MetaData) (IEntity * This, REFIID riid, void **pMetaData);
	HRESULT(STDMETHODCALLTYPE * NamedEntities) (IEntity * This, REFIID riid, void **pNamedEntities);
	HRESULT(STDMETHODCALLTYPE * GetNamedEntity) (IEntity * This, LPCWSTR pszValue, INamedEntity ** ppNamedEntity);
	HRESULT(STDMETHODCALLTYPE * DefaultPhrase) (IEntity * This, LPWSTR * ppszPhrase);
	END_INTERFACE
}  IEntityVtbl;
interface IEntity
{
	CONST_VTBL struct IEntityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEntity_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEntity_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEntity_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEntity_Name(This,ppszName) ( (This)->lpVtbl -> Name(This,ppszName) )
#define IEntity_Base(This,pBaseEntity) ( (This)->lpVtbl -> Base(This,pBaseEntity) )
#define IEntity_Relationships(This,riid,pRelationships) ( (This)->lpVtbl -> Relationships(This,riid,pRelationships) )
#define IEntity_GetRelationship(This,pszRelationName,pRelationship) ( (This)->lpVtbl -> GetRelationship(This,pszRelationName,pRelationship) )
#define IEntity_MetaData(This,riid,pMetaData) ( (This)->lpVtbl -> MetaData(This,riid,pMetaData) )
#define IEntity_NamedEntities(This,riid,pNamedEntities) ( (This)->lpVtbl -> NamedEntities(This,riid,pNamedEntities) )
#define IEntity_GetNamedEntity(This,pszValue,ppNamedEntity) ( (This)->lpVtbl -> GetNamedEntity(This,pszValue,ppNamedEntity) )
#define IEntity_DefaultPhrase(This,ppszPhrase) ( (This)->lpVtbl -> DefaultPhrase(This,ppszPhrase) )
#endif
#endif
#ifndef __IRelationship_INTERFACE_DEFINED__
#define __IRelationship_INTERFACE_DEFINED__
extern const IID IID_IRelationship;
typedef struct IRelationshipVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRelationship * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRelationship * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRelationship * This);
	HRESULT(STDMETHODCALLTYPE * Name) (IRelationship * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * IsReal) (IRelationship * This, BOOL * pIsReal);
	HRESULT(STDMETHODCALLTYPE * Destination) (IRelationship * This, IEntity ** pDestinationEntity);
	HRESULT(STDMETHODCALLTYPE * MetaData) (IRelationship * This, REFIID riid, void **pMetaData);
	HRESULT(STDMETHODCALLTYPE * DefaultPhrase) (IRelationship * This, LPWSTR * ppszPhrase);
	END_INTERFACE
}  IRelationshipVtbl;
interface IRelationship
{
	CONST_VTBL struct IRelationshipVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRelationship_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRelationship_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRelationship_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRelationship_Name(This,ppszName) ( (This)->lpVtbl -> Name(This,ppszName) )
#define IRelationship_IsReal(This,pIsReal) ( (This)->lpVtbl -> IsReal(This,pIsReal) )
#define IRelationship_Destination(This,pDestinationEntity) ( (This)->lpVtbl -> Destination(This,pDestinationEntity) )
#define IRelationship_MetaData(This,riid,pMetaData) ( (This)->lpVtbl -> MetaData(This,riid,pMetaData) )
#define IRelationship_DefaultPhrase(This,ppszPhrase) ( (This)->lpVtbl -> DefaultPhrase(This,ppszPhrase) )
#endif
#endif
#ifndef __INamedEntity_INTERFACE_DEFINED__
#define __INamedEntity_INTERFACE_DEFINED__
extern const IID IID_INamedEntity;
typedef struct INamedEntityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INamedEntity * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INamedEntity * This);
	ULONG(STDMETHODCALLTYPE * Release) (INamedEntity * This);
	HRESULT(STDMETHODCALLTYPE * GetValue) (INamedEntity * This, LPWSTR * ppszValue);
	HRESULT(STDMETHODCALLTYPE * DefaultPhrase) (INamedEntity * This, LPWSTR * ppszPhrase);
	END_INTERFACE
}  INamedEntityVtbl;
interface INamedEntity
{
	CONST_VTBL struct INamedEntityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INamedEntity_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INamedEntity_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INamedEntity_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INamedEntity_GetValue(This,ppszValue) ( (This)->lpVtbl -> GetValue(This,ppszValue) )
#define INamedEntity_DefaultPhrase(This,ppszPhrase) ( (This)->lpVtbl -> DefaultPhrase(This,ppszPhrase) )
#endif
#endif
#ifndef __ISchemaProvider_INTERFACE_DEFINED__
#define __ISchemaProvider_INTERFACE_DEFINED__
extern const IID IID_ISchemaProvider;
typedef struct ISchemaProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISchemaProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISchemaProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISchemaProvider * This);
	HRESULT(STDMETHODCALLTYPE * Entities) (ISchemaProvider * This, REFIID riid, void **pEntities);
	HRESULT(STDMETHODCALLTYPE * RootEntity) (ISchemaProvider * This, IEntity ** pRootEntity);
	HRESULT(STDMETHODCALLTYPE * GetEntity) (ISchemaProvider * This, LPCWSTR pszEntityName, IEntity ** pEntity);
	HRESULT(STDMETHODCALLTYPE * MetaData) (ISchemaProvider * This, REFIID riid, void **pMetaData);
	HRESULT(STDMETHODCALLTYPE * Localize) (ISchemaProvider * This, LCID lcid, ISchemaLocalizerSupport * pSchemaLocalizerSupport);
	HRESULT(STDMETHODCALLTYPE * SaveBinary) (ISchemaProvider * This, LPCWSTR pszSchemaBinaryPath);
	HRESULT(STDMETHODCALLTYPE * LookupAuthoredNamedEntity) (ISchemaProvider * This, IEntity * pEntity, LPCWSTR pszInputString, ITokenCollection * pTokenCollection, ULONG cTokensBegin, ULONG * pcTokensLength, LPWSTR * ppszValue);
	END_INTERFACE
}  ISchemaProviderVtbl;
interface ISchemaProvider
{
	CONST_VTBL struct ISchemaProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISchemaProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISchemaProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISchemaProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISchemaProvider_Entities(This,riid,pEntities) ( (This)->lpVtbl -> Entities(This,riid,pEntities) )
#define ISchemaProvider_RootEntity(This,pRootEntity) ( (This)->lpVtbl -> RootEntity(This,pRootEntity) )
#define ISchemaProvider_GetEntity(This,pszEntityName,pEntity) ( (This)->lpVtbl -> GetEntity(This,pszEntityName,pEntity) )
#define ISchemaProvider_MetaData(This,riid,pMetaData) ( (This)->lpVtbl -> MetaData(This,riid,pMetaData) )
#define ISchemaProvider_Localize(This,lcid,pSchemaLocalizerSupport) ( (This)->lpVtbl -> Localize(This,lcid,pSchemaLocalizerSupport) )
#define ISchemaProvider_SaveBinary(This,pszSchemaBinaryPath) ( (This)->lpVtbl -> SaveBinary(This,pszSchemaBinaryPath) )
#define ISchemaProvider_LookupAuthoredNamedEntity(This,pEntity,pszInputString,pTokenCollection,cTokensBegin,pcTokensLength,ppszValue) ( (This)->lpVtbl -> LookupAuthoredNamedEntity(This,pEntity,pszInputString,pTokenCollection,cTokensBegin,pcTokensLength,ppszValue) )
#endif
#endif
#ifndef __ITokenCollection_INTERFACE_DEFINED__
#define __ITokenCollection_INTERFACE_DEFINED__
extern const IID IID_ITokenCollection;
typedef struct ITokenCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITokenCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITokenCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITokenCollection * This);
	HRESULT(STDMETHODCALLTYPE * NumberOfTokens) (ITokenCollection * This, ULONG * pCount);
	HRESULT(STDMETHODCALLTYPE * GetToken) (ITokenCollection * This, ULONG i, ULONG * pBegin, ULONG * pLength, LPWSTR * ppsz);
	END_INTERFACE
}  ITokenCollectionVtbl;
interface ITokenCollection
{
	CONST_VTBL struct ITokenCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITokenCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITokenCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITokenCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITokenCollection_NumberOfTokens(This,pCount) ( (This)->lpVtbl -> NumberOfTokens(This,pCount) )
#define ITokenCollection_GetToken(This,i,pBegin,pLength,ppsz) ( (This)->lpVtbl -> GetToken(This,i,pBegin,pLength,ppsz) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_structuredquery_0000_0012_0001
{
	NEC_LOW = 0,
	NEC_MEDIUM = (NEC_LOW + 1),
	NEC_HIGH = (NEC_MEDIUM + 1)
} NAMED_ENTITY_CERTAINTY;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0012_v0_0_s_ifspec;
#ifndef __INamedEntityCollector_INTERFACE_DEFINED__
#define __INamedEntityCollector_INTERFACE_DEFINED__
extern const IID IID_INamedEntityCollector;
typedef struct INamedEntityCollectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INamedEntityCollector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INamedEntityCollector * This);
	ULONG(STDMETHODCALLTYPE * Release) (INamedEntityCollector * This);
	HRESULT(STDMETHODCALLTYPE * Add) (INamedEntityCollector * This, ULONG beginSpan, ULONG endSpan, ULONG beginActual, ULONG endActual, IEntity * pType, LPCWSTR pszValue, NAMED_ENTITY_CERTAINTY certainty);
	END_INTERFACE
}  INamedEntityCollectorVtbl;
interface INamedEntityCollector
{
	CONST_VTBL struct INamedEntityCollectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INamedEntityCollector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INamedEntityCollector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define INamedEntityCollector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define INamedEntityCollector_Add(This,beginSpan,endSpan,beginActual,endActual,pType,pszValue,certainty) ( (This)->lpVtbl -> Add(This,beginSpan,endSpan,beginActual,endActual,pType,pszValue,certainty) )
#endif
#endif
#ifndef __ISchemaLocalizerSupport_INTERFACE_DEFINED__
#define __ISchemaLocalizerSupport_INTERFACE_DEFINED__
extern const IID IID_ISchemaLocalizerSupport;
typedef struct ISchemaLocalizerSupportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISchemaLocalizerSupport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISchemaLocalizerSupport * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISchemaLocalizerSupport * This);
	HRESULT(STDMETHODCALLTYPE * Localize) (ISchemaLocalizerSupport * This, LPCWSTR pszGlobalString, LPWSTR * ppszLocalString);
	END_INTERFACE
}  ISchemaLocalizerSupportVtbl;
interface ISchemaLocalizerSupport
{
	CONST_VTBL struct ISchemaLocalizerSupportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISchemaLocalizerSupport_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISchemaLocalizerSupport_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISchemaLocalizerSupport_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISchemaLocalizerSupport_Localize(This,pszGlobalString,ppszLocalString) ( (This)->lpVtbl -> Localize(This,pszGlobalString,ppszLocalString) )
#endif
#endif
#ifndef __IQueryParserManager_INTERFACE_DEFINED__
#define __IQueryParserManager_INTERFACE_DEFINED__
extern const IID IID_IQueryParserManager;
typedef struct IQueryParserManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IQueryParserManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IQueryParserManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IQueryParserManager * This);
	HRESULT(STDMETHODCALLTYPE * CreateLoadedParser) (IQueryParserManager * This, LPCWSTR pszCatalog, LANGID langidForKeywords, REFIID riid, void **ppQueryParser);
	HRESULT(STDMETHODCALLTYPE * InitializeOptions) (IQueryParserManager * This, BOOL fUnderstandNQS, BOOL fAutoWildCard, IQueryParser * pQueryParser);
	HRESULT(STDMETHODCALLTYPE * SetOption) (IQueryParserManager * This, QUERY_PARSER_MANAGER_OPTION option, const PROPVARIANT * pOptionValue);
	END_INTERFACE
}  IQueryParserManagerVtbl;
interface IQueryParserManager
{
	CONST_VTBL struct IQueryParserManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IQueryParserManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IQueryParserManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IQueryParserManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IQueryParserManager_CreateLoadedParser(This,pszCatalog,langidForKeywords,riid,ppQueryParser) ( (This)->lpVtbl -> CreateLoadedParser(This,pszCatalog,langidForKeywords,riid,ppQueryParser) )
#define IQueryParserManager_InitializeOptions(This,fUnderstandNQS,fAutoWildCard,pQueryParser) ( (This)->lpVtbl -> InitializeOptions(This,fUnderstandNQS,fAutoWildCard,pQueryParser) )
#define IQueryParserManager_SetOption(This,option,pOptionValue) ( (This)->lpVtbl -> SetOption(This,option,pOptionValue) )
#endif
#endif
typedef struct tagHITRANGE
{
	ULONG iPosition;
	ULONG cLength;
} HITRANGE;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0015_v0_0_s_ifspec;
#ifndef __StructuredQuery1_LIBRARY_DEFINED__
#define __StructuredQuery1_LIBRARY_DEFINED__
extern const IID LIBID_StructuredQuery1;
extern const CLSID CLSID_QueryParser;
extern const CLSID CLSID_NegationCondition;
extern const CLSID CLSID_CompoundCondition;
extern const CLSID CLSID_LeafCondition;
extern const CLSID CLSID_ConditionFactory;
extern const CLSID CLSID_Interval;
extern const CLSID CLSID_QueryParserManager;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
#endif
