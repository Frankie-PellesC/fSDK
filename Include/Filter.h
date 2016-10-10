/*+@@file@@----------------------------------------------------------------*//*!
 \file		Filter.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 17:50:57 2016
 \date		Modified on Sun Jul 10 17:50:57 2016
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
#ifndef __filter_h__
#define __filter_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IFilter_FWD_DEFINED__
#define __IFilter_FWD_DEFINED__
typedef interface IFilter IFilter;
#endif
#include "unknwn.h"
#include "objidl.h"
#include "propidl.h"

#if !defined(_TAGFULLPROPSPEC_DEFINED_)
#define _TAGFULLPROPSPEC_DEFINED_
typedef struct tagFULLPROPSPEC
    {
    GUID guidPropSet;
    PROPSPEC psProperty;
    } 	FULLPROPSPEC;
#endif
extern RPC_IF_HANDLE __MIDL_itf_filter_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_filter_0000_0000_v0_0_s_ifspec;
#ifndef __IFilter_INTERFACE_DEFINED__
#define __IFilter_INTERFACE_DEFINED__ 
#ifndef _tagIFILTER_INIT_DEFINED
typedef enum tagIFILTER_INIT
{
	IFILTER_INIT_CANON_PARAGRAPHS	= 1,
	IFILTER_INIT_HARD_LINE_BREAKS	= 2,
	IFILTER_INIT_CANON_HYPHENS	= 4,
	IFILTER_INIT_CANON_SPACES	= 8,
	IFILTER_INIT_APPLY_INDEX_ATTRIBUTES	= 16,
	IFILTER_INIT_APPLY_OTHER_ATTRIBUTES	= 32,
	IFILTER_INIT_APPLY_CRAWL_ATTRIBUTES	= 256,
	IFILTER_INIT_INDEXING_ONLY	= 64,
	IFILTER_INIT_SEARCH_LINKS	= 128,
	IFILTER_INIT_FILTER_OWNED_VALUE_OK	= 512,
	IFILTER_INIT_FILTER_AGGRESSIVE_BREAK	= 1024,
	IFILTER_INIT_DISABLE_EMBEDDED	= 2048,
	IFILTER_INIT_EMIT_FORMATTING	= 4096
} 	IFILTER_INIT;
#define _tagIFILTER_INIT_DEFINED
#define _IFILTER_INIT_DEFINED
#endif
#ifndef _tagIFILTER_FLAGS_DEFINED
typedef enum tagIFILTER_FLAGS
{
	IFILTER_FLAGS_OLE_PROPERTIES	= 1
} 	IFILTER_FLAGS;
#define _tagIFILTER_FLAGS_DEFINED
#define _IFILTER_FLAGS_DEFINED
#endif
#ifndef _tagCHUNKSTATE_DEFINED
typedef enum tagCHUNKSTATE
{
	CHUNK_TEXT	= 0x1,
	CHUNK_VALUE	= 0x2,
	CHUNK_FILTER_OWNED_VALUE	= 0x4
} 	CHUNKSTATE;
#define _tagCHUNKSTATE_DEFINED
#define _CHUNKSTATE_DEFINED
#endif
#ifndef _tagCHUNK_BREAKTYPE_DEFINED
typedef enum tagCHUNK_BREAKTYPE
{
	CHUNK_NO_BREAK	= 0,
	CHUNK_EOW	= 1,
	CHUNK_EOS	= 2,
	CHUNK_EOP	= 3,
	CHUNK_EOC	= 4
} 	CHUNK_BREAKTYPE;
#define _tagCHUNK_BREAKTYPE_DEFINED
#define _CHUNK_BREAKTYPE_DEFINED
#endif
#ifndef _tagFILTERREGION_DEFINED
typedef struct tagFILTERREGION
{
	ULONG idChunk;
	ULONG cwcStart;
	ULONG cwcExtent;
} 	FILTERREGION;
#define _tagFILTERREGION_DEFINED
#define _FILTERREGION_DEFINED
#endif
#ifndef _tagSTAT_CHUNK_DEFINED
typedef struct tagSTAT_CHUNK
{
	ULONG idChunk;
	CHUNK_BREAKTYPE breakType;
	CHUNKSTATE flags;
	LCID locale;
	FULLPROPSPEC attribute;
	ULONG idChunkSource;
	ULONG cwcStartSource;
	ULONG cwcLenSource;
} 	STAT_CHUNK;
#define _tagSTAT_CHUNK_DEFINED
#define _STAT_CHUNK_DEFINED
#endif
extern const IID IID_IFilter;

typedef struct IFilterVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFilter * This);
	SCODE(STDMETHODCALLTYPE * Init) (IFilter * This, ULONG grfFlags, ULONG cAttributes, const FULLPROPSPEC * aAttributes, ULONG * pFlags);
	SCODE(STDMETHODCALLTYPE * GetChunk) (IFilter * This, STAT_CHUNK * pStat);
	SCODE(STDMETHODCALLTYPE * GetText) (IFilter * This, ULONG * pcwcBuffer, WCHAR * awcBuffer);
	SCODE(STDMETHODCALLTYPE * GetValue) (IFilter * This, PROPVARIANT ** ppPropValue);
	SCODE(STDMETHODCALLTYPE * BindRegion) (IFilter * This, FILTERREGION origPos, REFIID riid, void **ppunk);
	END_INTERFACE
} IFilterVtbl;
interface IFilter
{
    CONST_VTBL struct IFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFilter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IFilter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IFilter_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IFilter_Init(This,grfFlags,cAttributes,aAttributes,pFlags)    ( (This)->lpVtbl -> Init(This,grfFlags,cAttributes,aAttributes,pFlags) ) 
#define IFilter_GetChunk(This,pStat)    ( (This)->lpVtbl -> GetChunk(This,pStat) ) 
#define IFilter_GetText(This,pcwcBuffer,awcBuffer)    ( (This)->lpVtbl -> GetText(This,pcwcBuffer,awcBuffer) ) 
#define IFilter_GetValue(This,ppPropValue)    ( (This)->lpVtbl -> GetValue(This,ppPropValue) ) 
#define IFilter_BindRegion(This,origPos,riid,ppunk)    ( (This)->lpVtbl -> BindRegion(This,origPos,riid,ppunk) ) 
#endif
#endif
#endif
