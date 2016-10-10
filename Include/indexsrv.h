/*+@@file@@----------------------------------------------------------------*//*!
 \file		indexsrv.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 23:37:46 2016
 \date		Modified on Sat Jul 16 23:37:46 2016
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
#ifndef __indexsrv_h__
#define __indexsrv_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IPhraseSink_FWD_DEFINED__
#define __IPhraseSink_FWD_DEFINED__
typedef interface IPhraseSink IPhraseSink;
#endif
#ifndef __IWordSink_FWD_DEFINED__
#define __IWordSink_FWD_DEFINED__
typedef interface IWordSink IWordSink;
#endif
#ifndef __IWordBreaker_FWD_DEFINED__
#define __IWordBreaker_FWD_DEFINED__
typedef interface IWordBreaker IWordBreaker;
#endif
#ifndef __IWordFormSink_FWD_DEFINED__
#define __IWordFormSink_FWD_DEFINED__
typedef interface IWordFormSink IWordFormSink;
#endif
#ifndef __IStemmer_FWD_DEFINED__
#define __IStemmer_FWD_DEFINED__
typedef interface IStemmer IStemmer;
#endif
#ifndef __ISimpleCommandCreator_FWD_DEFINED__
#define __ISimpleCommandCreator_FWD_DEFINED__
typedef interface ISimpleCommandCreator ISimpleCommandCreator;
#endif
#ifndef __IColumnMapper_FWD_DEFINED__
#define __IColumnMapper_FWD_DEFINED__
typedef interface IColumnMapper IColumnMapper;
#endif
#ifndef __IColumnMapperCreator_FWD_DEFINED__
#define __IColumnMapperCreator_FWD_DEFINED__
typedef interface IColumnMapperCreator IColumnMapperCreator;
#endif
#include "oaidl.h"
#include "filter.h"
#ifndef __IPhraseSink_INTERFACE_DEFINED__
#define __IPhraseSink_INTERFACE_DEFINED__
extern const IID IID_IPhraseSink;
typedef struct IPhraseSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPhraseSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPhraseSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPhraseSink * This);
	HRESULT(STDMETHODCALLTYPE * PutSmallPhrase) (IPhraseSink * This, const WCHAR * pwcNoun, ULONG cwcNoun, const WCHAR * pwcModifier, ULONG cwcModifier, ULONG ulAttachmentType);
	HRESULT(STDMETHODCALLTYPE * PutPhrase) (IPhraseSink * This, const WCHAR * pwcPhrase, ULONG cwcPhrase);
	END_INTERFACE
}  IPhraseSinkVtbl;
interface IPhraseSink
{
	CONST_VTBL struct IPhraseSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPhraseSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPhraseSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPhraseSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPhraseSink_PutSmallPhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType)( (This)->lpVtbl -> PutSmallPhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType) )
#define IPhraseSink_PutPhrase(This,pwcPhrase,cwcPhrase)( (This)->lpVtbl -> PutPhrase(This,pwcPhrase,cwcPhrase) )
#endif
#endif
#ifndef __IWordSink_INTERFACE_DEFINED__
#define __IWordSink_INTERFACE_DEFINED__
#ifndef _tagWORDREP_BREAK_TYPE_DEFINED
typedef enum tagWORDREP_BREAK_TYPE
{
	WORDREP_BREAK_EOW = 0,
	WORDREP_BREAK_EOS = 1,
	WORDREP_BREAK_EOP = 2,
	WORDREP_BREAK_EOC = 3
} WORDREP_BREAK_TYPE;
#define _tagWORDREP_BREAK_TYPE_DEFINED
#define _WORDREP_BREAK_TYPE_DEFINED
#endif
extern const IID IID_IWordSink;
typedef struct IWordSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWordSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWordSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWordSink * This);
	HRESULT(STDMETHODCALLTYPE * PutWord) (IWordSink * This, ULONG cwc, const WCHAR * pwcInBuf, ULONG cwcSrcLen, ULONG cwcSrcPos);
	HRESULT(STDMETHODCALLTYPE * PutAltWord) (IWordSink * This, ULONG cwc, const WCHAR * pwcInBuf, ULONG cwcSrcLen, ULONG cwcSrcPos);
	HRESULT(STDMETHODCALLTYPE * StartAltPhrase) (IWordSink * This);
	HRESULT(STDMETHODCALLTYPE * EndAltPhrase) (IWordSink * This);
	HRESULT(STDMETHODCALLTYPE * PutBreak) (IWordSink * This, WORDREP_BREAK_TYPE breakType);
	END_INTERFACE
}  IWordSinkVtbl;
interface IWordSink
{
	CONST_VTBL struct IWordSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWordSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWordSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWordSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWordSink_PutWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos)( (This)->lpVtbl -> PutWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos) )
#define IWordSink_PutAltWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos)( (This)->lpVtbl -> PutAltWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos) )
#define IWordSink_StartAltPhrase(This)( (This)->lpVtbl -> StartAltPhrase(This) )
#define IWordSink_EndAltPhrase(This)( (This)->lpVtbl -> EndAltPhrase(This) )
#define IWordSink_PutBreak(This,breakType)( (This)->lpVtbl -> PutBreak(This,breakType) )
#endif
#endif
#ifndef _tagTEXT_SOURCE_DEFINED
typedef HRESULT(__stdcall *PFNFILLTEXTBUFFER) (struct tagTEXT_SOURCE *pTextSource);
typedef struct tagTEXT_SOURCE
{
	PFNFILLTEXTBUFFER pfnFillTextBuffer;
	const WCHAR *awcBuffer;
	ULONG iEnd;
	ULONG iCur;
} TEXT_SOURCE;
#define _tagTEXT_SOURCE_DEFINED
#define _TEXT_SOURCE_DEFINED
#endif
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0002_v0_0_s_ifspec;
#ifndef __IWordBreaker_INTERFACE_DEFINED__
#define __IWordBreaker_INTERFACE_DEFINED__
extern const IID IID_IWordBreaker;
typedef struct IWordBreakerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWordBreaker *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWordBreaker *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWordBreaker *This);
	HRESULT(STDMETHODCALLTYPE *Init) (IWordBreaker *This, BOOL fQuery, ULONG ulMaxTokenSize, BOOL *pfLicense);
	HRESULT(STDMETHODCALLTYPE *BreakText) (IWordBreaker *This, TEXT_SOURCE *pTextSource, IWordSink *pWordSink, IPhraseSink *pPhraseSink);
	HRESULT(STDMETHODCALLTYPE *ComposePhrase) (IWordBreaker *This, const WCHAR *pwcNoun, ULONG cwcNoun, const WCHAR *pwcModifier, ULONG cwcModifier, ULONG ulAttachmentType, WCHAR *pwcPhrase, ULONG *pcwcPhrase);
	HRESULT(STDMETHODCALLTYPE *GetLicenseToUse) (IWordBreaker *This, const WCHAR **ppwcsLicense);
	END_INTERFACE
}  IWordBreakerVtbl;
interface IWordBreaker
{
	CONST_VTBL struct IWordBreakerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWordBreaker_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWordBreaker_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWordBreaker_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWordBreaker_Init(This,fQuery,ulMaxTokenSize,pfLicense)( (This)->lpVtbl -> Init(This,fQuery,ulMaxTokenSize,pfLicense) )
#define IWordBreaker_BreakText(This,pTextSource,pWordSink,pPhraseSink)( (This)->lpVtbl -> BreakText(This,pTextSource,pWordSink,pPhraseSink) )
#define IWordBreaker_ComposePhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType,pwcPhrase,pcwcPhrase)( (This)->lpVtbl -> ComposePhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType,pwcPhrase,pcwcPhrase) )
#define IWordBreaker_GetLicenseToUse(This,ppwcsLicense)( (This)->lpVtbl -> GetLicenseToUse(This,ppwcsLicense) )
#endif
#endif
#ifndef __IWordFormSink_INTERFACE_DEFINED__
#define __IWordFormSink_INTERFACE_DEFINED__
extern const IID IID_IWordFormSink;
typedef struct IWordFormSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWordFormSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWordFormSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWordFormSink *This);
	HRESULT(STDMETHODCALLTYPE *PutAltWord) (IWordFormSink *This, const WCHAR *pwcInBuf, ULONG cwc);
	HRESULT(STDMETHODCALLTYPE *PutWord) (IWordFormSink *This, const WCHAR *pwcInBuf, ULONG cwc);
	END_INTERFACE
}  IWordFormSinkVtbl;
interface IWordFormSink
{
	CONST_VTBL struct IWordFormSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWordFormSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWordFormSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWordFormSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWordFormSink_PutAltWord(This,pwcInBuf,cwc)( (This)->lpVtbl -> PutAltWord(This,pwcInBuf,cwc) )
#define IWordFormSink_PutWord(This,pwcInBuf,cwc)( (This)->lpVtbl -> PutWord(This,pwcInBuf,cwc) )
#endif
#endif
#ifndef __IStemmer_INTERFACE_DEFINED__
#define __IStemmer_INTERFACE_DEFINED__
extern const IID IID_IStemmer;
typedef struct IStemmerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IStemmer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IStemmer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IStemmer *This);
	HRESULT(STDMETHODCALLTYPE *Init) (IStemmer *This, ULONG ulMaxTokenSize, BOOL *pfLicense);
	HRESULT(STDMETHODCALLTYPE *GenerateWordForms) (IStemmer *This, const WCHAR *pwcInBuf, ULONG cwc, IWordFormSink *pStemSink);
	HRESULT(STDMETHODCALLTYPE *GetLicenseToUse) (IStemmer *This, const WCHAR **ppwcsLicense);
	END_INTERFACE
}  IStemmerVtbl;
interface IStemmer
{
	CONST_VTBL struct IStemmerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStemmer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStemmer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IStemmer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IStemmer_Init(This,ulMaxTokenSize,pfLicense)( (This)->lpVtbl -> Init(This,ulMaxTokenSize,pfLicense) )
#define IStemmer_GenerateWordForms(This,pwcInBuf,cwc,pStemSink)( (This)->lpVtbl -> GenerateWordForms(This,pwcInBuf,cwc,pStemSink) )
#define IStemmer_GetLicenseToUse(This,ppwcsLicense)( (This)->lpVtbl -> GetLicenseToUse(This,ppwcsLicense) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0005_v0_0_s_ifspec;
#ifndef __ISimpleCommandCreator_INTERFACE_DEFINED__
#define __ISimpleCommandCreator_INTERFACE_DEFINED__
extern const IID IID_ISimpleCommandCreator;
typedef struct ISimpleCommandCreatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISimpleCommandCreator *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISimpleCommandCreator *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISimpleCommandCreator *This);
	HRESULT(STDMETHODCALLTYPE *CreateICommand) (ISimpleCommandCreator *This, IUnknown **ppIUnknown, IUnknown *pOuterUnk);
	HRESULT(STDMETHODCALLTYPE *VerifyCatalog) (ISimpleCommandCreator *This, const WCHAR *pwszMachine, const WCHAR *pwszCatalogName);
	HRESULT(STDMETHODCALLTYPE *GetDefaultCatalog) (ISimpleCommandCreator *This, WCHAR *pwszCatalogName, ULONG cwcIn, ULONG *pcwcOut);
	END_INTERFACE
}  ISimpleCommandCreatorVtbl;
interface ISimpleCommandCreator
{
	CONST_VTBL struct ISimpleCommandCreatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISimpleCommandCreator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISimpleCommandCreator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISimpleCommandCreator_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISimpleCommandCreator_CreateICommand(This,ppIUnknown,pOuterUnk)( (This)->lpVtbl -> CreateICommand(This,ppIUnknown,pOuterUnk) )
#define ISimpleCommandCreator_VerifyCatalog(This,pwszMachine,pwszCatalogName)( (This)->lpVtbl -> VerifyCatalog(This,pwszMachine,pwszCatalogName) )
#define ISimpleCommandCreator_GetDefaultCatalog(This,pwszCatalogName,cwcIn,pcwcOut)( (This)->lpVtbl -> GetDefaultCatalog(This,pwszCatalogName,cwcIn,pcwcOut) )
#endif
#endif
#define CLSID_CISimpleCommandCreator {0xc7b6c04a, 0xcbb5, 0x11d0, {0xbb, 0x4c, 0x0, 0xc0, 0x4f, 0xc2, 0xf4, 0x10 } }
typedef struct tagDBID DBID;
typedef WORD DBTYPE;
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0006_v0_0_s_ifspec;
#ifndef __IColumnMapper_INTERFACE_DEFINED__
#define __IColumnMapper_INTERFACE_DEFINED__
extern const IID IID_IColumnMapper;
typedef struct IColumnMapperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IColumnMapper *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IColumnMapper *This);
	ULONG(STDMETHODCALLTYPE *Release) (IColumnMapper *This);
	HRESULT(STDMETHODCALLTYPE *GetPropInfoFromName) (IColumnMapper *This, const WCHAR *wcsPropName, DBID **ppPropId, DBTYPE *pPropType, unsigned int *puiWidth);
	HRESULT(STDMETHODCALLTYPE *GetPropInfoFromId) (IColumnMapper *This, const DBID *pPropId, WCHAR **pwcsName, DBTYPE *pPropType, unsigned int *puiWidth);
	HRESULT(STDMETHODCALLTYPE *EnumPropInfo) (IColumnMapper *This, ULONG iEntry, const WCHAR **pwcsName, DBID **ppPropId, DBTYPE *pPropType, unsigned int *puiWidth);
	HRESULT(STDMETHODCALLTYPE *IsMapUpToDate) (IColumnMapper *This);
	END_INTERFACE
}  IColumnMapperVtbl;
interface IColumnMapper
{
	CONST_VTBL struct IColumnMapperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IColumnMapper_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IColumnMapper_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IColumnMapper_Release(This)( (This)->lpVtbl -> Release(This) )
#define IColumnMapper_GetPropInfoFromName(This,wcsPropName,ppPropId,pPropType,puiWidth)( (This)->lpVtbl -> GetPropInfoFromName(This,wcsPropName,ppPropId,pPropType,puiWidth) )
#define IColumnMapper_GetPropInfoFromId(This,pPropId,pwcsName,pPropType,puiWidth)( (This)->lpVtbl -> GetPropInfoFromId(This,pPropId,pwcsName,pPropType,puiWidth) )
#define IColumnMapper_EnumPropInfo(This,iEntry,pwcsName,ppPropId,pPropType,puiWidth)( (This)->lpVtbl -> EnumPropInfo(This,iEntry,pwcsName,ppPropId,pPropType,puiWidth) )
#define IColumnMapper_IsMapUpToDate(This)( (This)->lpVtbl -> IsMapUpToDate(This) )
#endif
#endif
#define	LOCAL_MACHINE	( L"." )
#define	SYSTEM_DEFAULT_CAT	( L"__SystemDefault__" )
#define	INDEX_SERVER_DEFAULT_CAT	( L"__IndexServerDefault__" )
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0007_v0_0_s_ifspec;
#ifndef __IColumnMapperCreator_INTERFACE_DEFINED__
#define __IColumnMapperCreator_INTERFACE_DEFINED__
extern const IID IID_IColumnMapperCreator;
typedef struct IColumnMapperCreatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IColumnMapperCreator *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IColumnMapperCreator *This);
	ULONG(STDMETHODCALLTYPE *Release) (IColumnMapperCreator *This);
	HRESULT(STDMETHODCALLTYPE *GetColumnMapper) (IColumnMapperCreator *This, const WCHAR *wcsMachineName, const WCHAR *wcsCatalogName, IColumnMapper **ppColumnMapper);
	END_INTERFACE
}  IColumnMapperCreatorVtbl;
interface IColumnMapperCreator
{
	CONST_VTBL struct IColumnMapperCreatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IColumnMapperCreator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IColumnMapperCreator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IColumnMapperCreator_Release(This)( (This)->lpVtbl -> Release(This) )
#define IColumnMapperCreator_GetColumnMapper(This,wcsMachineName,wcsCatalogName,ppColumnMapper)( (This)->lpVtbl -> GetColumnMapper(This,wcsMachineName,wcsCatalogName,ppColumnMapper) )
#endif
#endif
#endif
