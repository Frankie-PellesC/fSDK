/*+@@file@@----------------------------------------------------------------*//*!
 \file		journal.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 21:50:34 2016
 \date		Modified on Sun Jul 17 21:50:34 2016
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
#ifndef __journal_h__
#define __journal_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IJournalReader_FWD_DEFINED__
#define __IJournalReader_FWD_DEFINED__
typedef interface IJournalReader IJournalReader;
#endif
#ifndef __JournalReader_FWD_DEFINED__
#define __JournalReader_FWD_DEFINED__
typedef struct JournalReader JournalReader;
#endif
#include "oaidl.h"
#include "ocidl.h"
#ifndef __JournalLib_LIBRARY_DEFINED__
#define __JournalLib_LIBRARY_DEFINED__
#define GUID_STROKE_TIMESTAMP                    L"{04EA66C4-F33A-461B-B8FE-68070D9C7575}"
#define GUID_STROKE_TIMEID                       L"{050B6BC8-3B7D-4816-8C61-BC7E905B2132}"
#define GUID_HIGHLIGHTER                         L"{9B6267B8-3968-4048-AB74-F490406A2DFA}"
#define GUID_INK_STYLE_BOLD                      L"{E02FB5C1-9693-4312-A434-00DE7F3AD493}"
#define GUID_INK_STYLE_ITALICS                   L"{05253b51-49C6-4A04-8993-64DD9ABD842A}"
extern const IID LIBID_JournalLib;
#ifndef __IJournalReader_INTERFACE_DEFINED__
#define __IJournalReader_INTERFACE_DEFINED__
extern const IID IID_IJournalReader;
typedef struct IJournalReaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IJournalReader * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IJournalReader * This);
	ULONG(STDMETHODCALLTYPE * Release) (IJournalReader * This);
	HRESULT(STDMETHODCALLTYPE * ReadFromStream) (IJournalReader * This, IStream * pJntFile, IStream ** ppJntXml);
	END_INTERFACE
}  IJournalReaderVtbl;
interface IJournalReader
{
	CONST_VTBL struct IJournalReaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IJournalReader_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IJournalReader_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IJournalReader_Release(This)( (This)->lpVtbl -> Release(This) )
#define IJournalReader_ReadFromStream(This,pJntFile,ppJntXml)( (This)->lpVtbl -> ReadFromStream(This,pJntFile,ppJntXml) )
#endif
#endif
extern const CLSID CLSID_JournalReader;
#endif
#endif
