/*+@@file@@----------------------------------------------------------------*//*!
 \file		corsym.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 11:55:32 2016
 \date		Modified on Mon Jul  4 11:55:32 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __corsym_h__
#define __corsym_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __CorSymWriter_deprecated_FWD_DEFINED__
#define __CorSymWriter_deprecated_FWD_DEFINED__
typedef struct CorSymWriter_deprecated CorSymWriter_deprecated;
#endif
#ifndef __CorSymReader_deprecated_FWD_DEFINED__
#define __CorSymReader_deprecated_FWD_DEFINED__
typedef struct CorSymReader_deprecated CorSymReader_deprecated;
#endif
#ifndef __CorSymBinder_deprecated_FWD_DEFINED__
#define __CorSymBinder_deprecated_FWD_DEFINED__
typedef struct CorSymBinder_deprecated CorSymBinder_deprecated;
#endif
#ifndef __CorSymWriter_SxS_FWD_DEFINED__
#define __CorSymWriter_SxS_FWD_DEFINED__
typedef struct CorSymWriter_SxS CorSymWriter_SxS;
#endif
#ifndef __CorSymReader_SxS_FWD_DEFINED__
#define __CorSymReader_SxS_FWD_DEFINED__
typedef struct CorSymReader_SxS CorSymReader_SxS;
#endif
#ifndef __CorSymBinder_SxS_FWD_DEFINED__
#define __CorSymBinder_SxS_FWD_DEFINED__
typedef struct CorSymBinder_SxS CorSymBinder_SxS;
#endif
#ifndef __ISymUnmanagedBinder_FWD_DEFINED__
#define __ISymUnmanagedBinder_FWD_DEFINED__
typedef interface ISymUnmanagedBinder ISymUnmanagedBinder;
#endif
#ifndef __ISymUnmanagedBinder2_FWD_DEFINED__
#define __ISymUnmanagedBinder2_FWD_DEFINED__
typedef interface ISymUnmanagedBinder2 ISymUnmanagedBinder2;
#endif
#ifndef __ISymUnmanagedBinder3_FWD_DEFINED__
#define __ISymUnmanagedBinder3_FWD_DEFINED__
typedef interface ISymUnmanagedBinder3 ISymUnmanagedBinder3;
#endif
#ifndef __ISymUnmanagedDispose_FWD_DEFINED__
#define __ISymUnmanagedDispose_FWD_DEFINED__
typedef interface ISymUnmanagedDispose ISymUnmanagedDispose;
#endif
#ifndef __ISymUnmanagedDocument_FWD_DEFINED__
#define __ISymUnmanagedDocument_FWD_DEFINED__
typedef interface ISymUnmanagedDocument ISymUnmanagedDocument;
#endif
#ifndef __ISymUnmanagedDocumentWriter_FWD_DEFINED__
#define __ISymUnmanagedDocumentWriter_FWD_DEFINED__
typedef interface ISymUnmanagedDocumentWriter ISymUnmanagedDocumentWriter;
#endif
#ifndef __ISymUnmanagedMethod_FWD_DEFINED__
#define __ISymUnmanagedMethod_FWD_DEFINED__
typedef interface ISymUnmanagedMethod ISymUnmanagedMethod;
#endif
#ifndef __ISymENCUnmanagedMethod_FWD_DEFINED__
#define __ISymENCUnmanagedMethod_FWD_DEFINED__
typedef interface ISymENCUnmanagedMethod ISymENCUnmanagedMethod;
#endif
#ifndef __ISymUnmanagedNamespace_FWD_DEFINED__
#define __ISymUnmanagedNamespace_FWD_DEFINED__
typedef interface ISymUnmanagedNamespace ISymUnmanagedNamespace;
#endif
#ifndef __ISymUnmanagedReader_FWD_DEFINED__
#define __ISymUnmanagedReader_FWD_DEFINED__
typedef interface ISymUnmanagedReader ISymUnmanagedReader;
#endif
#ifndef __ISymUnmanagedSourceServerModule_FWD_DEFINED__
#define __ISymUnmanagedSourceServerModule_FWD_DEFINED__
typedef interface ISymUnmanagedSourceServerModule ISymUnmanagedSourceServerModule;
#endif
#ifndef __ISymUnmanagedENCUpdate_FWD_DEFINED__
#define __ISymUnmanagedENCUpdate_FWD_DEFINED__
typedef interface ISymUnmanagedENCUpdate ISymUnmanagedENCUpdate;
#endif
#ifndef __ISymUnmanagedReaderSymbolSearchInfo_FWD_DEFINED__
#define __ISymUnmanagedReaderSymbolSearchInfo_FWD_DEFINED__
typedef interface ISymUnmanagedReaderSymbolSearchInfo ISymUnmanagedReaderSymbolSearchInfo;
#endif
#ifndef __ISymUnmanagedScope_FWD_DEFINED__
#define __ISymUnmanagedScope_FWD_DEFINED__
typedef interface ISymUnmanagedScope ISymUnmanagedScope;
#endif
#ifndef __ISymUnmanagedConstant_FWD_DEFINED__
#define __ISymUnmanagedConstant_FWD_DEFINED__
typedef interface ISymUnmanagedConstant ISymUnmanagedConstant;
#endif
#ifndef __ISymUnmanagedScope2_FWD_DEFINED__
#define __ISymUnmanagedScope2_FWD_DEFINED__
typedef interface ISymUnmanagedScope2 ISymUnmanagedScope2;
#endif
#ifndef __ISymUnmanagedVariable_FWD_DEFINED__
#define __ISymUnmanagedVariable_FWD_DEFINED__
typedef interface ISymUnmanagedVariable ISymUnmanagedVariable;
#endif
#ifndef __ISymUnmanagedSymbolSearchInfo_FWD_DEFINED__
#define __ISymUnmanagedSymbolSearchInfo_FWD_DEFINED__
typedef interface ISymUnmanagedSymbolSearchInfo ISymUnmanagedSymbolSearchInfo;
#endif
#ifndef __ISymUnmanagedWriter_FWD_DEFINED__
#define __ISymUnmanagedWriter_FWD_DEFINED__
typedef interface ISymUnmanagedWriter ISymUnmanagedWriter;
#endif
#ifndef __ISymUnmanagedWriter2_FWD_DEFINED__
#define __ISymUnmanagedWriter2_FWD_DEFINED__
typedef interface ISymUnmanagedWriter2 ISymUnmanagedWriter2;
#endif
#ifndef __ISymUnmanagedWriter3_FWD_DEFINED__
#define __ISymUnmanagedWriter3_FWD_DEFINED__
typedef interface ISymUnmanagedWriter3 ISymUnmanagedWriter3;
#endif
#ifndef __ISymUnmanagedReader2_FWD_DEFINED__
#define __ISymUnmanagedReader2_FWD_DEFINED__
typedef interface ISymUnmanagedReader2 ISymUnmanagedReader2;
#endif
#ifndef __ISymNGenWriter_FWD_DEFINED__
#define __ISymNGenWriter_FWD_DEFINED__
typedef interface ISymNGenWriter ISymNGenWriter;
#endif
void *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void *);
#if 0
typedef typedef unsigned int UINT32;
;
typedef mdToken mdTypeDef;
typedef mdToken mdMethodDef;
typedef typedef ULONG_PTR SIZE_T;
;
#endif
#ifndef __CORHDR_H__
typedef mdToken mdSignature;
#endif
EXTERN_GUID(CorSym_LanguageType_C, 0x63a08714, 0xfc37, 0x11d2, 0x90, 0x4c, 0x0, 0xc0, 0x4f, 0xa3, 0x02, 0xa1);
EXTERN_GUID(CorSym_LanguageType_CPlusPlus, 0x3a12d0b7, 0xc26c, 0x11d0, 0xb4, 0x42, 0x0, 0xa0, 0x24, 0x4a, 0x1d, 0xd2);
EXTERN_GUID(CorSym_LanguageType_CSharp, 0x3f5162f8, 0x07c6, 0x11d3, 0x90, 0x53, 0x0, 0xc0, 0x4f, 0xa3, 0x02, 0xa1);
EXTERN_GUID(CorSym_LanguageType_Basic, 0x3a12d0b8, 0xc26c, 0x11d0, 0xb4, 0x42, 0x0, 0xa0, 0x24, 0x4a, 0x1d, 0xd2);
EXTERN_GUID(CorSym_LanguageType_Java, 0x3a12d0b4, 0xc26c, 0x11d0, 0xb4, 0x42, 0x0, 0xa0, 0x24, 0x4a, 0x1d, 0xd2);
EXTERN_GUID(CorSym_LanguageType_Cobol, 0xaf046cd1, 0xd0e1, 0x11d2, 0x97, 0x7c, 0x0, 0xa0, 0xc9, 0xb4, 0xd5, 0xc);
EXTERN_GUID(CorSym_LanguageType_Pascal, 0xaf046cd2, 0xd0e1, 0x11d2, 0x97, 0x7c, 0x0, 0xa0, 0xc9, 0xb4, 0xd5, 0xc);
EXTERN_GUID(CorSym_LanguageType_ILAssembly, 0xaf046cd3, 0xd0e1, 0x11d2, 0x97, 0x7c, 0x0, 0xa0, 0xc9, 0xb4, 0xd5, 0xc);
EXTERN_GUID(CorSym_LanguageType_JScript, 0x3a12d0b6, 0xc26c, 0x11d0, 0xb4, 0x42, 0x00, 0xa0, 0x24, 0x4a, 0x1d, 0xd2);
EXTERN_GUID(CorSym_LanguageType_SMC, 0xd9b9f7b, 0x6611, 0x11d3, 0xbd, 0x2a, 0x0, 0x0, 0xf8, 0x8, 0x49, 0xbd);
EXTERN_GUID(CorSym_LanguageType_MCPlusPlus, 0x4b35fde8, 0x07c6, 0x11d3, 0x90, 0x53, 0x0, 0xc0, 0x4f, 0xa3, 0x02, 0xa1);
EXTERN_GUID(CorSym_LanguageVendor_Microsoft, 0x994b45c4, 0xe6e9, 0x11d2, 0x90, 0x3f, 0x00, 0xc0, 0x4f, 0xa3, 0x02, 0xa1);
EXTERN_GUID(CorSym_DocumentType_Text, 0x5a869d0b, 0x6611, 0x11d3, 0xbd, 0x2a, 0x0, 0x0, 0xf8, 0x8, 0x49, 0xbd);
EXTERN_GUID(CorSym_DocumentType_MC, 0xeb40cb65, 0x3c1f, 0x4352, 0x9d, 0x7b, 0xba, 0xf, 0xc4, 0x7a, 0x9d, 0x77);
EXTERN_GUID(CorSym_SourceHash_MD5, 0x406ea660, 0x64cf, 0x4c82, 0xb6, 0xf0, 0x42, 0xd4, 0x81, 0x72, 0xa7, 0x99);
EXTERN_GUID(CorSym_SourceHash_SHA1, 0xff1816ec, 0xaa5e, 0x4d10, 0x87, 0xf7, 0x6f, 0x49, 0x63, 0x83, 0x34, 0x60);
typedef enum CorSymAddrKind
{
	ADDR_IL_OFFSET = 1,
	ADDR_NATIVE_RVA = 2,
	ADDR_NATIVE_REGISTER = 3,
	ADDR_NATIVE_REGREL = 4,
	ADDR_NATIVE_OFFSET = 5,
	ADDR_NATIVE_REGREG = 6,
	ADDR_NATIVE_REGSTK = 7,
	ADDR_NATIVE_STKREG = 8,
	ADDR_BITFIELD = 9,
	ADDR_NATIVE_ISECTOFFSET = 10
} CorSymAddrKind;
typedef enum CorSymVarFlag
{
	VAR_IS_COMP_GEN = 1
} CorSymVarFlag;
extern RPC_IF_HANDLE __MIDL_itf_corsym_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corsym_0000_v0_0_s_ifspec;
#ifndef __CorSymLib_LIBRARY_DEFINED__
#define __CorSymLib_LIBRARY_DEFINED__
extern const IID LIBID_CorSymLib;
extern const CLSID CLSID_CorSymWriter_deprecated;
extern const CLSID CLSID_CorSymReader_deprecated;
extern const CLSID CLSID_CorSymBinder_deprecated;
extern const CLSID CLSID_CorSymWriter_SxS;
extern const CLSID CLSID_CorSymReader_SxS;
extern const CLSID CLSID_CorSymBinder_SxS;
#endif
#ifndef __ISymUnmanagedBinder_INTERFACE_DEFINED__
#define __ISymUnmanagedBinder_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedBinder;
typedef struct ISymUnmanagedBinderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISymUnmanagedBinder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISymUnmanagedBinder * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISymUnmanagedBinder * This);
	HRESULT(STDMETHODCALLTYPE * GetReaderForFile) (ISymUnmanagedBinder * This, IUnknown * importer, const WCHAR * fileName, const WCHAR * searchPath, ISymUnmanagedReader ** pRetVal);
	HRESULT(STDMETHODCALLTYPE * GetReaderFromStream) (ISymUnmanagedBinder * This, IUnknown * importer, IStream * pstream, ISymUnmanagedReader ** pRetVal);
	END_INTERFACE
}  ISymUnmanagedBinderVtbl;
interface ISymUnmanagedBinder
{
	CONST_VTBL struct ISymUnmanagedBinderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedBinder_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedBinder_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedBinder_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedBinder_GetReaderForFile(This,importer,fileName,searchPath,pRetVal)(This)->lpVtbl -> GetReaderForFile(This,importer,fileName,searchPath,pRetVal)
#define ISymUnmanagedBinder_GetReaderFromStream(This,importer,pstream,pRetVal)(This)->lpVtbl -> GetReaderFromStream(This,importer,pstream,pRetVal)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedBinder_GetReaderForFile_Proxy(ISymUnmanagedBinder *This, IUnknown *importer, const WCHAR *fileName, const WCHAR *searchPath, ISymUnmanagedReader **pRetVal);
void __RPC_STUB ISymUnmanagedBinder_GetReaderForFile_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedBinder_GetReaderFromStream_Proxy(ISymUnmanagedBinder *This, IUnknown *importer, IStream *pstream, ISymUnmanagedReader **pRetVal);
void __RPC_STUB ISymUnmanagedBinder_GetReaderFromStream_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
typedef enum CorSymSearchPolicyAttributes
{
	AllowRegistryAccess = 0x1,
	AllowSymbolServerAccess = 0x2,
	AllowOriginalPathAccess = 0x4,
	AllowReferencePathAccess = 0x8
} CorSymSearchPolicyAttributes;
extern RPC_IF_HANDLE __MIDL_itf_corsym_0115_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corsym_0115_v0_0_s_ifspec;
#ifndef __ISymUnmanagedBinder2_INTERFACE_DEFINED__
#define __ISymUnmanagedBinder2_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedBinder2;
typedef struct ISymUnmanagedBinder2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedBinder2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedBinder2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedBinder2 *This);
	HRESULT(STDMETHODCALLTYPE *GetReaderForFile) (ISymUnmanagedBinder2 *This, IUnknown *importer, const WCHAR *fileName, const WCHAR *searchPath, ISymUnmanagedReader **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetReaderFromStream) (ISymUnmanagedBinder2 *This, IUnknown *importer, IStream *pstream, ISymUnmanagedReader **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetReaderForFile2) (ISymUnmanagedBinder2 *This, IUnknown *importer, const WCHAR *fileName, const WCHAR *searchPath, ULONG32 searchPolicy, ISymUnmanagedReader **pRetVal);
	END_INTERFACE
}  ISymUnmanagedBinder2Vtbl;
interface ISymUnmanagedBinder2
{
	CONST_VTBL struct ISymUnmanagedBinder2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedBinder2_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedBinder2_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedBinder2_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedBinder2_GetReaderForFile(This,importer,fileName,searchPath,pRetVal)(This)->lpVtbl -> GetReaderForFile(This,importer,fileName,searchPath,pRetVal)
#define ISymUnmanagedBinder2_GetReaderFromStream(This,importer,pstream,pRetVal)(This)->lpVtbl -> GetReaderFromStream(This,importer,pstream,pRetVal)
#define ISymUnmanagedBinder2_GetReaderForFile2(This,importer,fileName,searchPath,searchPolicy,pRetVal)(This)->lpVtbl -> GetReaderForFile2(This,importer,fileName,searchPath,searchPolicy,pRetVal)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedBinder2_GetReaderForFile2_Proxy(ISymUnmanagedBinder2 *This, IUnknown *importer, const WCHAR *fileName, const WCHAR *searchPath, ULONG32 searchPolicy, ISymUnmanagedReader **pRetVal);
void __RPC_STUB ISymUnmanagedBinder2_GetReaderForFile2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedBinder3_INTERFACE_DEFINED__
#define __ISymUnmanagedBinder3_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedBinder3;
typedef struct ISymUnmanagedBinder3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedBinder3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedBinder3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedBinder3 *This);
	HRESULT(STDMETHODCALLTYPE *GetReaderForFile) (ISymUnmanagedBinder3 *This, IUnknown *importer, const WCHAR *fileName, const WCHAR *searchPath, ISymUnmanagedReader **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetReaderFromStream) (ISymUnmanagedBinder3 *This, IUnknown *importer, IStream *pstream, ISymUnmanagedReader **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetReaderForFile2) (ISymUnmanagedBinder3 *This, IUnknown *importer, const WCHAR *fileName, const WCHAR *searchPath, ULONG32 searchPolicy, ISymUnmanagedReader **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetReaderFromCallback) (ISymUnmanagedBinder3 *This, IUnknown *importer, const WCHAR *fileName, const WCHAR *searchPath, ULONG32 searchPolicy, IUnknown *callback, ISymUnmanagedReader **pRetVal);
	END_INTERFACE
}  ISymUnmanagedBinder3Vtbl;
interface ISymUnmanagedBinder3
{
	CONST_VTBL struct ISymUnmanagedBinder3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedBinder3_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedBinder3_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedBinder3_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedBinder3_GetReaderForFile(This,importer,fileName,searchPath,pRetVal)(This)->lpVtbl -> GetReaderForFile(This,importer,fileName,searchPath,pRetVal)
#define ISymUnmanagedBinder3_GetReaderFromStream(This,importer,pstream,pRetVal)(This)->lpVtbl -> GetReaderFromStream(This,importer,pstream,pRetVal)
#define ISymUnmanagedBinder3_GetReaderForFile2(This,importer,fileName,searchPath,searchPolicy,pRetVal)(This)->lpVtbl -> GetReaderForFile2(This,importer,fileName,searchPath,searchPolicy,pRetVal)
#define ISymUnmanagedBinder3_GetReaderFromCallback(This,importer,fileName,searchPath,searchPolicy,callback,pRetVal)(This)->lpVtbl -> GetReaderFromCallback(This,importer,fileName,searchPath,searchPolicy,callback,pRetVal)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedBinder3_GetReaderFromCallback_Proxy(ISymUnmanagedBinder3 *This, IUnknown *importer, const WCHAR *fileName, const WCHAR *searchPath, ULONG32 searchPolicy, IUnknown *callback, ISymUnmanagedReader **pRetVal);
void __RPC_STUB ISymUnmanagedBinder3_GetReaderFromCallback_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
static const int E_SYM_DESTROYED = MAKE_HRESULT(1, FACILITY_ITF, 0xdead);
extern RPC_IF_HANDLE __MIDL_itf_corsym_0117_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corsym_0117_v0_0_s_ifspec;
#ifndef __ISymUnmanagedDispose_INTERFACE_DEFINED__
#define __ISymUnmanagedDispose_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedDispose;
typedef struct ISymUnmanagedDisposeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedDispose *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedDispose *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedDispose *This);
	HRESULT(STDMETHODCALLTYPE *Destroy) (ISymUnmanagedDispose *This);
	END_INTERFACE
}  ISymUnmanagedDisposeVtbl;
interface ISymUnmanagedDispose
{
	CONST_VTBL struct ISymUnmanagedDisposeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedDispose_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedDispose_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedDispose_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedDispose_Destroy(This)(This)->lpVtbl -> Destroy(This)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedDispose_Destroy_Proxy(ISymUnmanagedDispose *This);
void __RPC_STUB ISymUnmanagedDispose_Destroy_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedDocument_INTERFACE_DEFINED__
#define __ISymUnmanagedDocument_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedDocument;
typedef struct ISymUnmanagedDocumentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedDocument *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedDocument *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedDocument *This);
	HRESULT(STDMETHODCALLTYPE *GetURL) (ISymUnmanagedDocument *This, ULONG32 cchUrl, ULONG32 *pcchUrl, WCHAR szUrl[]);
	HRESULT(STDMETHODCALLTYPE *GetDocumentType) (ISymUnmanagedDocument *This, GUID *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetLanguage) (ISymUnmanagedDocument *This, GUID *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetLanguageVendor) (ISymUnmanagedDocument *This, GUID *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetCheckSumAlgorithmId) (ISymUnmanagedDocument *This, GUID *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetCheckSum) (ISymUnmanagedDocument *This, ULONG32 cData, ULONG32 *pcData, BYTE data[]);
	HRESULT(STDMETHODCALLTYPE *FindClosestLine) (ISymUnmanagedDocument *This, ULONG32 line, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *HasEmbeddedSource) (ISymUnmanagedDocument *This, BOOL *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetSourceLength) (ISymUnmanagedDocument *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetSourceRange) (ISymUnmanagedDocument *This, ULONG32 startLine, ULONG32 startColumn, ULONG32 endLine, ULONG32 endColumn, ULONG32 cSourceBytes, ULONG32 *pcSourceBytes, BYTE source[]);
	END_INTERFACE
}  ISymUnmanagedDocumentVtbl;
interface ISymUnmanagedDocument
{
	CONST_VTBL struct ISymUnmanagedDocumentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedDocument_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedDocument_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedDocument_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedDocument_GetURL(This,cchUrl,pcchUrl,szUrl)(This)->lpVtbl -> GetURL(This,cchUrl,pcchUrl,szUrl)
#define ISymUnmanagedDocument_GetDocumentType(This,pRetVal)(This)->lpVtbl -> GetDocumentType(This,pRetVal)
#define ISymUnmanagedDocument_GetLanguage(This,pRetVal)(This)->lpVtbl -> GetLanguage(This,pRetVal)
#define ISymUnmanagedDocument_GetLanguageVendor(This,pRetVal)(This)->lpVtbl -> GetLanguageVendor(This,pRetVal)
#define ISymUnmanagedDocument_GetCheckSumAlgorithmId(This,pRetVal)(This)->lpVtbl -> GetCheckSumAlgorithmId(This,pRetVal)
#define ISymUnmanagedDocument_GetCheckSum(This,cData,pcData,data)(This)->lpVtbl -> GetCheckSum(This,cData,pcData,data)
#define ISymUnmanagedDocument_FindClosestLine(This,line,pRetVal)(This)->lpVtbl -> FindClosestLine(This,line,pRetVal)
#define ISymUnmanagedDocument_HasEmbeddedSource(This,pRetVal)(This)->lpVtbl -> HasEmbeddedSource(This,pRetVal)
#define ISymUnmanagedDocument_GetSourceLength(This,pRetVal)(This)->lpVtbl -> GetSourceLength(This,pRetVal)
#define ISymUnmanagedDocument_GetSourceRange(This,startLine,startColumn,endLine,endColumn,cSourceBytes,pcSourceBytes,source)(This)->lpVtbl -> GetSourceRange(This,startLine,startColumn,endLine,endColumn,cSourceBytes,pcSourceBytes,source)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedDocument_GetURL_Proxy(ISymUnmanagedDocument *This, ULONG32 cchUrl, ULONG32 *pcchUrl, WCHAR szUrl[]);
void __RPC_STUB ISymUnmanagedDocument_GetURL_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedDocument_GetDocumentType_Proxy(ISymUnmanagedDocument *This, GUID *pRetVal);
void __RPC_STUB ISymUnmanagedDocument_GetDocumentType_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedDocument_GetLanguage_Proxy(ISymUnmanagedDocument *This, GUID *pRetVal);
void __RPC_STUB ISymUnmanagedDocument_GetLanguage_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedDocument_GetLanguageVendor_Proxy(ISymUnmanagedDocument *This, GUID *pRetVal);
void __RPC_STUB ISymUnmanagedDocument_GetLanguageVendor_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedDocument_GetCheckSumAlgorithmId_Proxy(ISymUnmanagedDocument *This, GUID *pRetVal);
void __RPC_STUB ISymUnmanagedDocument_GetCheckSumAlgorithmId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedDocument_GetCheckSum_Proxy(ISymUnmanagedDocument *This, ULONG32 cData, ULONG32 *pcData, BYTE data[]);
void __RPC_STUB ISymUnmanagedDocument_GetCheckSum_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedDocument_FindClosestLine_Proxy(ISymUnmanagedDocument *This, ULONG32 line, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedDocument_FindClosestLine_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedDocument_HasEmbeddedSource_Proxy(ISymUnmanagedDocument *This, BOOL *pRetVal);
void __RPC_STUB ISymUnmanagedDocument_HasEmbeddedSource_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedDocument_GetSourceLength_Proxy(ISymUnmanagedDocument *This, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedDocument_GetSourceLength_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedDocument_GetSourceRange_Proxy(ISymUnmanagedDocument *This, ULONG32 startLine, ULONG32 startColumn, ULONG32 endLine, ULONG32 endColumn, ULONG32 cSourceBytes, ULONG32 *pcSourceBytes, BYTE source[]);
void __RPC_STUB ISymUnmanagedDocument_GetSourceRange_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedDocumentWriter_INTERFACE_DEFINED__
#define __ISymUnmanagedDocumentWriter_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedDocumentWriter;
typedef struct ISymUnmanagedDocumentWriterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedDocumentWriter *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedDocumentWriter *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedDocumentWriter *This);
	HRESULT(STDMETHODCALLTYPE *SetSource) (ISymUnmanagedDocumentWriter *This, ULONG32 sourceSize, BYTE source[]);
	HRESULT(STDMETHODCALLTYPE *SetCheckSum) (ISymUnmanagedDocumentWriter *This, GUID algorithmId, ULONG32 checkSumSize, BYTE checkSum[]);
	END_INTERFACE
}  ISymUnmanagedDocumentWriterVtbl;
interface ISymUnmanagedDocumentWriter
{
	CONST_VTBL struct ISymUnmanagedDocumentWriterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedDocumentWriter_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedDocumentWriter_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedDocumentWriter_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedDocumentWriter_SetSource(This,sourceSize,source)(This)->lpVtbl -> SetSource(This,sourceSize,source)
#define ISymUnmanagedDocumentWriter_SetCheckSum(This,algorithmId,checkSumSize,checkSum)(This)->lpVtbl -> SetCheckSum(This,algorithmId,checkSumSize,checkSum)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedDocumentWriter_SetSource_Proxy(ISymUnmanagedDocumentWriter *This, ULONG32 sourceSize, BYTE source[]);
void __RPC_STUB ISymUnmanagedDocumentWriter_SetSource_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedDocumentWriter_SetCheckSum_Proxy(ISymUnmanagedDocumentWriter *This, GUID algorithmId, ULONG32 checkSumSize, BYTE checkSum[]);
void __RPC_STUB ISymUnmanagedDocumentWriter_SetCheckSum_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedMethod_INTERFACE_DEFINED__
#define __ISymUnmanagedMethod_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedMethod;
typedef struct ISymUnmanagedMethodVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedMethod *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedMethod *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedMethod *This);
	HRESULT(STDMETHODCALLTYPE *GetToken) (ISymUnmanagedMethod *This, mdMethodDef *pToken);
	HRESULT(STDMETHODCALLTYPE *GetSequencePointCount) (ISymUnmanagedMethod *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetRootScope) (ISymUnmanagedMethod *This, ISymUnmanagedScope **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetScopeFromOffset) (ISymUnmanagedMethod *This, ULONG32 offset, ISymUnmanagedScope **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetOffset) (ISymUnmanagedMethod *This, ISymUnmanagedDocument *document, ULONG32 line, ULONG32 column, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetRanges) (ISymUnmanagedMethod *This, ISymUnmanagedDocument *document, ULONG32 line, ULONG32 column, ULONG32 cRanges, ULONG32 *pcRanges, ULONG32 ranges[]);
	HRESULT(STDMETHODCALLTYPE *GetParameters) (ISymUnmanagedMethod *This, ULONG32 cParams, ULONG32 *pcParams, ISymUnmanagedVariable *params[]);
	HRESULT(STDMETHODCALLTYPE *GetNamespace) (ISymUnmanagedMethod *This, ISymUnmanagedNamespace **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetSourceStartEnd) (ISymUnmanagedMethod *This, ISymUnmanagedDocument *docs[2], ULONG32 lines[2], ULONG32 columns[2], BOOL *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetSequencePoints) (ISymUnmanagedMethod *This, ULONG32 cPoints, ULONG32 *pcPoints, ULONG32 offsets[], ISymUnmanagedDocument *documents[], ULONG32 lines[], ULONG32 columns[], ULONG32 endLines[], ULONG32 endColumns[]);
	END_INTERFACE
}  ISymUnmanagedMethodVtbl;
interface ISymUnmanagedMethod
{
	CONST_VTBL struct ISymUnmanagedMethodVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedMethod_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedMethod_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedMethod_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedMethod_GetToken(This,pToken)(This)->lpVtbl -> GetToken(This,pToken)
#define ISymUnmanagedMethod_GetSequencePointCount(This,pRetVal)(This)->lpVtbl -> GetSequencePointCount(This,pRetVal)
#define ISymUnmanagedMethod_GetRootScope(This,pRetVal)(This)->lpVtbl -> GetRootScope(This,pRetVal)
#define ISymUnmanagedMethod_GetScopeFromOffset(This,offset,pRetVal)(This)->lpVtbl -> GetScopeFromOffset(This,offset,pRetVal)
#define ISymUnmanagedMethod_GetOffset(This,document,line,column,pRetVal)(This)->lpVtbl -> GetOffset(This,document,line,column,pRetVal)
#define ISymUnmanagedMethod_GetRanges(This,document,line,column,cRanges,pcRanges,ranges)(This)->lpVtbl -> GetRanges(This,document,line,column,cRanges,pcRanges,ranges)
#define ISymUnmanagedMethod_GetParameters(This,cParams,pcParams,params)(This)->lpVtbl -> GetParameters(This,cParams,pcParams,params)
#define ISymUnmanagedMethod_GetNamespace(This,pRetVal)(This)->lpVtbl -> GetNamespace(This,pRetVal)
#define ISymUnmanagedMethod_GetSourceStartEnd(This,docs,lines,columns,pRetVal)(This)->lpVtbl -> GetSourceStartEnd(This,docs,lines,columns,pRetVal)
#define ISymUnmanagedMethod_GetSequencePoints(This,cPoints,pcPoints,offsets,documents,lines,columns,endLines,endColumns)(This)->lpVtbl -> GetSequencePoints(This,cPoints,pcPoints,offsets,documents,lines,columns,endLines,endColumns)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedMethod_GetToken_Proxy(ISymUnmanagedMethod *This, mdMethodDef *pToken);
void __RPC_STUB ISymUnmanagedMethod_GetToken_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedMethod_GetSequencePointCount_Proxy(ISymUnmanagedMethod *This, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedMethod_GetSequencePointCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedMethod_GetRootScope_Proxy(ISymUnmanagedMethod *This, ISymUnmanagedScope **pRetVal);
void __RPC_STUB ISymUnmanagedMethod_GetRootScope_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedMethod_GetScopeFromOffset_Proxy(ISymUnmanagedMethod *This, ULONG32 offset, ISymUnmanagedScope **pRetVal);
void __RPC_STUB ISymUnmanagedMethod_GetScopeFromOffset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedMethod_GetOffset_Proxy(ISymUnmanagedMethod *This, ISymUnmanagedDocument *document, ULONG32 line, ULONG32 column, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedMethod_GetOffset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedMethod_GetRanges_Proxy(ISymUnmanagedMethod *This, ISymUnmanagedDocument *document, ULONG32 line, ULONG32 column, ULONG32 cRanges, ULONG32 *pcRanges, ULONG32 ranges[]);
void __RPC_STUB ISymUnmanagedMethod_GetRanges_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedMethod_GetParameters_Proxy(ISymUnmanagedMethod *This, ULONG32 cParams, ULONG32 *pcParams, ISymUnmanagedVariable *params[]);
void __RPC_STUB ISymUnmanagedMethod_GetParameters_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedMethod_GetNamespace_Proxy(ISymUnmanagedMethod *This, ISymUnmanagedNamespace **pRetVal);
void __RPC_STUB ISymUnmanagedMethod_GetNamespace_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedMethod_GetSourceStartEnd_Proxy(ISymUnmanagedMethod *This, ISymUnmanagedDocument *docs[2], ULONG32 lines[2], ULONG32 columns[2], BOOL *pRetVal);
void __RPC_STUB ISymUnmanagedMethod_GetSourceStartEnd_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedMethod_GetSequencePoints_Proxy(ISymUnmanagedMethod *This, ULONG32 cPoints, ULONG32 *pcPoints, ULONG32 offsets[], ISymUnmanagedDocument *documents[], ULONG32 lines[], ULONG32 columns[], ULONG32 endLines[], ULONG32 endColumns[]);
void __RPC_STUB ISymUnmanagedMethod_GetSequencePoints_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymENCUnmanagedMethod_INTERFACE_DEFINED__
#define __ISymENCUnmanagedMethod_INTERFACE_DEFINED__
extern const IID IID_ISymENCUnmanagedMethod;
typedef struct ISymENCUnmanagedMethodVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymENCUnmanagedMethod *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymENCUnmanagedMethod *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymENCUnmanagedMethod *This);
	HRESULT(STDMETHODCALLTYPE *GetFileNameFromOffset) (ISymENCUnmanagedMethod *This, ULONG32 dwOffset, ULONG32 cchName, ULONG32 *pcchName, WCHAR szName[]);
	HRESULT(STDMETHODCALLTYPE *GetLineFromOffset) (ISymENCUnmanagedMethod *This, ULONG32 dwOffset, ULONG32 *pline, ULONG32 *pcolumn, ULONG32 *pendLine, ULONG32 *pendColumn, ULONG32 *pdwStartOffset);
	HRESULT(STDMETHODCALLTYPE *GetDocumentsForMethodCount) (ISymENCUnmanagedMethod *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetDocumentsForMethod) (ISymENCUnmanagedMethod *This, ULONG32 cDocs, ULONG32 *pcDocs, ISymUnmanagedDocument *documents[]);
	HRESULT(STDMETHODCALLTYPE *GetSourceExtentInDocument) (ISymENCUnmanagedMethod *This, ISymUnmanagedDocument *document, ULONG32 *pstartLine, ULONG32 *pendLine);
	END_INTERFACE
}  ISymENCUnmanagedMethodVtbl;
interface ISymENCUnmanagedMethod
{
	CONST_VTBL struct ISymENCUnmanagedMethodVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymENCUnmanagedMethod_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymENCUnmanagedMethod_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymENCUnmanagedMethod_Release(This)(This)->lpVtbl -> Release(This)
#define ISymENCUnmanagedMethod_GetFileNameFromOffset(This,dwOffset,cchName,pcchName,szName)(This)->lpVtbl -> GetFileNameFromOffset(This,dwOffset,cchName,pcchName,szName)
#define ISymENCUnmanagedMethod_GetLineFromOffset(This,dwOffset,pline,pcolumn,pendLine,pendColumn,pdwStartOffset)(This)->lpVtbl -> GetLineFromOffset(This,dwOffset,pline,pcolumn,pendLine,pendColumn,pdwStartOffset)
#define ISymENCUnmanagedMethod_GetDocumentsForMethodCount(This,pRetVal)(This)->lpVtbl -> GetDocumentsForMethodCount(This,pRetVal)
#define ISymENCUnmanagedMethod_GetDocumentsForMethod(This,cDocs,pcDocs,documents)(This)->lpVtbl -> GetDocumentsForMethod(This,cDocs,pcDocs,documents)
#define ISymENCUnmanagedMethod_GetSourceExtentInDocument(This,document,pstartLine,pendLine)(This)->lpVtbl -> GetSourceExtentInDocument(This,document,pstartLine,pendLine)
#endif
HRESULT STDMETHODCALLTYPE ISymENCUnmanagedMethod_GetFileNameFromOffset_Proxy(ISymENCUnmanagedMethod *This, ULONG32 dwOffset, ULONG32 cchName, ULONG32 *pcchName, WCHAR szName[]);
void __RPC_STUB ISymENCUnmanagedMethod_GetFileNameFromOffset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymENCUnmanagedMethod_GetLineFromOffset_Proxy(ISymENCUnmanagedMethod *This, ULONG32 dwOffset, ULONG32 *pline, ULONG32 *pcolumn, ULONG32 *pendLine, ULONG32 *pendColumn, ULONG32 *pdwStartOffset);
void __RPC_STUB ISymENCUnmanagedMethod_GetLineFromOffset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymENCUnmanagedMethod_GetDocumentsForMethodCount_Proxy(ISymENCUnmanagedMethod *This, ULONG32 *pRetVal);
void __RPC_STUB ISymENCUnmanagedMethod_GetDocumentsForMethodCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymENCUnmanagedMethod_GetDocumentsForMethod_Proxy(ISymENCUnmanagedMethod *This, ULONG32 cDocs, ULONG32 *pcDocs, ISymUnmanagedDocument *documents[]);
void __RPC_STUB ISymENCUnmanagedMethod_GetDocumentsForMethod_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymENCUnmanagedMethod_GetSourceExtentInDocument_Proxy(ISymENCUnmanagedMethod *This, ISymUnmanagedDocument *document, ULONG32 *pstartLine, ULONG32 *pendLine);
void __RPC_STUB ISymENCUnmanagedMethod_GetSourceExtentInDocument_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedNamespace_INTERFACE_DEFINED__
#define __ISymUnmanagedNamespace_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedNamespace;
typedef struct ISymUnmanagedNamespaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedNamespace *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedNamespace *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedNamespace *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (ISymUnmanagedNamespace *This, ULONG32 cchName, ULONG32 *pcchName, WCHAR szName[]);
	HRESULT(STDMETHODCALLTYPE *GetNamespaces) (ISymUnmanagedNamespace *This, ULONG32 cNameSpaces, ULONG32 *pcNameSpaces, ISymUnmanagedNamespace *namespaces[]);
	HRESULT(STDMETHODCALLTYPE *GetVariables) (ISymUnmanagedNamespace *This, ULONG32 cVars, ULONG32 *pcVars, ISymUnmanagedVariable *pVars[]);
	END_INTERFACE
}  ISymUnmanagedNamespaceVtbl;
interface ISymUnmanagedNamespace
{
	CONST_VTBL struct ISymUnmanagedNamespaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedNamespace_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedNamespace_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedNamespace_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedNamespace_GetName(This,cchName,pcchName,szName)(This)->lpVtbl -> GetName(This,cchName,pcchName,szName)
#define ISymUnmanagedNamespace_GetNamespaces(This,cNameSpaces,pcNameSpaces,namespaces)(This)->lpVtbl -> GetNamespaces(This,cNameSpaces,pcNameSpaces,namespaces)
#define ISymUnmanagedNamespace_GetVariables(This,cVars,pcVars,pVars)(This)->lpVtbl -> GetVariables(This,cVars,pcVars,pVars)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedNamespace_GetName_Proxy(ISymUnmanagedNamespace *This, ULONG32 cchName, ULONG32 *pcchName, WCHAR szName[]);
void __RPC_STUB ISymUnmanagedNamespace_GetName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedNamespace_GetNamespaces_Proxy(ISymUnmanagedNamespace *This, ULONG32 cNameSpaces, ULONG32 *pcNameSpaces, ISymUnmanagedNamespace *namespaces[]);
void __RPC_STUB ISymUnmanagedNamespace_GetNamespaces_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedNamespace_GetVariables_Proxy(ISymUnmanagedNamespace *This, ULONG32 cVars, ULONG32 *pcVars, ISymUnmanagedVariable *pVars[]);
void __RPC_STUB ISymUnmanagedNamespace_GetVariables_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedReader_INTERFACE_DEFINED__
#define __ISymUnmanagedReader_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedReader;
typedef struct ISymUnmanagedReaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedReader *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedReader *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedReader *This);
	HRESULT(STDMETHODCALLTYPE *GetDocument) (ISymUnmanagedReader *This, WCHAR *url, GUID language, GUID languageVendor, GUID documentType, ISymUnmanagedDocument **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetDocuments) (ISymUnmanagedReader *This, ULONG32 cDocs, ULONG32 *pcDocs, ISymUnmanagedDocument *pDocs[]);
	HRESULT(STDMETHODCALLTYPE *GetUserEntryPoint) (ISymUnmanagedReader *This, mdMethodDef *pToken);
	HRESULT(STDMETHODCALLTYPE *GetMethod) (ISymUnmanagedReader *This, mdMethodDef token, ISymUnmanagedMethod **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetMethodByVersion) (ISymUnmanagedReader *This, mdMethodDef token, int version, ISymUnmanagedMethod **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetVariables) (ISymUnmanagedReader *This, mdToken parent, ULONG32 cVars, ULONG32 *pcVars, ISymUnmanagedVariable *pVars[]);
	HRESULT(STDMETHODCALLTYPE *GetGlobalVariables) (ISymUnmanagedReader *This, ULONG32 cVars, ULONG32 *pcVars, ISymUnmanagedVariable *pVars[]);
	HRESULT(STDMETHODCALLTYPE *GetMethodFromDocumentPosition) (ISymUnmanagedReader *This, ISymUnmanagedDocument *document, ULONG32 line, ULONG32 column, ISymUnmanagedMethod **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetSymAttribute) (ISymUnmanagedReader *This, mdToken parent, WCHAR *name, ULONG32 cBuffer, ULONG32 *pcBuffer, BYTE buffer[]);
	HRESULT(STDMETHODCALLTYPE *GetNamespaces) (ISymUnmanagedReader *This, ULONG32 cNameSpaces, ULONG32 *pcNameSpaces, ISymUnmanagedNamespace *namespaces[]);
	HRESULT(STDMETHODCALLTYPE *Initialize) (ISymUnmanagedReader *This, IUnknown *importer, const WCHAR *filename, const WCHAR *searchPath, IStream *pIStream);
	HRESULT(STDMETHODCALLTYPE *UpdateSymbolStore) (ISymUnmanagedReader *This, const WCHAR *filename, IStream *pIStream);
	HRESULT(STDMETHODCALLTYPE *ReplaceSymbolStore) (ISymUnmanagedReader *This, const WCHAR *filename, IStream *pIStream);
	HRESULT(STDMETHODCALLTYPE *GetSymbolStoreFileName) (ISymUnmanagedReader *This, ULONG32 cchName, ULONG32 *pcchName, WCHAR szName[]);
	HRESULT(STDMETHODCALLTYPE *GetMethodsFromDocumentPosition) (ISymUnmanagedReader *This, ISymUnmanagedDocument *document, ULONG32 line, ULONG32 column, ULONG32 cMethod, ULONG32 *pcMethod, ISymUnmanagedMethod *pRetVal[]);
	HRESULT(STDMETHODCALLTYPE *GetDocumentVersion) (ISymUnmanagedReader *This, ISymUnmanagedDocument *pDoc, int *version, BOOL *pbCurrent);
	HRESULT(STDMETHODCALLTYPE *GetMethodVersion) (ISymUnmanagedReader *This, ISymUnmanagedMethod *pMethod, int *version);
	END_INTERFACE
}  ISymUnmanagedReaderVtbl;
interface ISymUnmanagedReader
{
	CONST_VTBL struct ISymUnmanagedReaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedReader_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedReader_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedReader_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedReader_GetDocument(This,url,language,languageVendor,documentType,pRetVal)(This)->lpVtbl -> GetDocument(This,url,language,languageVendor,documentType,pRetVal)
#define ISymUnmanagedReader_GetDocuments(This,cDocs,pcDocs,pDocs)(This)->lpVtbl -> GetDocuments(This,cDocs,pcDocs,pDocs)
#define ISymUnmanagedReader_GetUserEntryPoint(This,pToken)(This)->lpVtbl -> GetUserEntryPoint(This,pToken)
#define ISymUnmanagedReader_GetMethod(This,token,pRetVal)(This)->lpVtbl -> GetMethod(This,token,pRetVal)
#define ISymUnmanagedReader_GetMethodByVersion(This,token,version,pRetVal)(This)->lpVtbl -> GetMethodByVersion(This,token,version,pRetVal)
#define ISymUnmanagedReader_GetVariables(This,parent,cVars,pcVars,pVars)(This)->lpVtbl -> GetVariables(This,parent,cVars,pcVars,pVars)
#define ISymUnmanagedReader_GetGlobalVariables(This,cVars,pcVars,pVars)(This)->lpVtbl -> GetGlobalVariables(This,cVars,pcVars,pVars)
#define ISymUnmanagedReader_GetMethodFromDocumentPosition(This,document,line,column,pRetVal)(This)->lpVtbl -> GetMethodFromDocumentPosition(This,document,line,column,pRetVal)
#define ISymUnmanagedReader_GetSymAttribute(This,parent,name,cBuffer,pcBuffer,buffer)(This)->lpVtbl -> GetSymAttribute(This,parent,name,cBuffer,pcBuffer,buffer)
#define ISymUnmanagedReader_GetNamespaces(This,cNameSpaces,pcNameSpaces,namespaces)(This)->lpVtbl -> GetNamespaces(This,cNameSpaces,pcNameSpaces,namespaces)
#define ISymUnmanagedReader_Initialize(This,importer,filename,searchPath,pIStream)(This)->lpVtbl -> Initialize(This,importer,filename,searchPath,pIStream)
#define ISymUnmanagedReader_UpdateSymbolStore(This,filename,pIStream)(This)->lpVtbl -> UpdateSymbolStore(This,filename,pIStream)
#define ISymUnmanagedReader_ReplaceSymbolStore(This,filename,pIStream)(This)->lpVtbl -> ReplaceSymbolStore(This,filename,pIStream)
#define ISymUnmanagedReader_GetSymbolStoreFileName(This,cchName,pcchName,szName)(This)->lpVtbl -> GetSymbolStoreFileName(This,cchName,pcchName,szName)
#define ISymUnmanagedReader_GetMethodsFromDocumentPosition(This,document,line,column,cMethod,pcMethod,pRetVal)(This)->lpVtbl -> GetMethodsFromDocumentPosition(This,document,line,column,cMethod,pcMethod,pRetVal)
#define ISymUnmanagedReader_GetDocumentVersion(This,pDoc,version,pbCurrent)(This)->lpVtbl -> GetDocumentVersion(This,pDoc,version,pbCurrent)
#define ISymUnmanagedReader_GetMethodVersion(This,pMethod,version)(This)->lpVtbl -> GetMethodVersion(This,pMethod,version)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetDocument_Proxy(ISymUnmanagedReader *This, WCHAR *url, GUID language, GUID languageVendor, GUID documentType, ISymUnmanagedDocument **pRetVal);
void __RPC_STUB ISymUnmanagedReader_GetDocument_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetDocuments_Proxy(ISymUnmanagedReader *This, ULONG32 cDocs, ULONG32 *pcDocs, ISymUnmanagedDocument *pDocs[]);
void __RPC_STUB ISymUnmanagedReader_GetDocuments_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetUserEntryPoint_Proxy(ISymUnmanagedReader *This, mdMethodDef *pToken);
void __RPC_STUB ISymUnmanagedReader_GetUserEntryPoint_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetMethod_Proxy(ISymUnmanagedReader *This, mdMethodDef token, ISymUnmanagedMethod **pRetVal);
void __RPC_STUB ISymUnmanagedReader_GetMethod_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetMethodByVersion_Proxy(ISymUnmanagedReader *This, mdMethodDef token, int version, ISymUnmanagedMethod **pRetVal);
void __RPC_STUB ISymUnmanagedReader_GetMethodByVersion_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetVariables_Proxy(ISymUnmanagedReader *This, mdToken parent, ULONG32 cVars, ULONG32 *pcVars, ISymUnmanagedVariable *pVars[]);
void __RPC_STUB ISymUnmanagedReader_GetVariables_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetGlobalVariables_Proxy(ISymUnmanagedReader *This, ULONG32 cVars, ULONG32 *pcVars, ISymUnmanagedVariable *pVars[]);
void __RPC_STUB ISymUnmanagedReader_GetGlobalVariables_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetMethodFromDocumentPosition_Proxy(ISymUnmanagedReader *This, ISymUnmanagedDocument *document, ULONG32 line, ULONG32 column, ISymUnmanagedMethod **pRetVal);
void __RPC_STUB ISymUnmanagedReader_GetMethodFromDocumentPosition_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetSymAttribute_Proxy(ISymUnmanagedReader *This, mdToken parent, WCHAR *name, ULONG32 cBuffer, ULONG32 *pcBuffer, BYTE buffer[]);
void __RPC_STUB ISymUnmanagedReader_GetSymAttribute_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetNamespaces_Proxy(ISymUnmanagedReader *This, ULONG32 cNameSpaces, ULONG32 *pcNameSpaces, ISymUnmanagedNamespace *namespaces[]);
void __RPC_STUB ISymUnmanagedReader_GetNamespaces_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_Initialize_Proxy(ISymUnmanagedReader *This, IUnknown *importer, const WCHAR *filename, const WCHAR *searchPath, IStream *pIStream);
void __RPC_STUB ISymUnmanagedReader_Initialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_UpdateSymbolStore_Proxy(ISymUnmanagedReader *This, const WCHAR *filename, IStream *pIStream);
void __RPC_STUB ISymUnmanagedReader_UpdateSymbolStore_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_ReplaceSymbolStore_Proxy(ISymUnmanagedReader *This, const WCHAR *filename, IStream *pIStream);
void __RPC_STUB ISymUnmanagedReader_ReplaceSymbolStore_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetSymbolStoreFileName_Proxy(ISymUnmanagedReader *This, ULONG32 cchName, ULONG32 *pcchName, WCHAR szName[]);
void __RPC_STUB ISymUnmanagedReader_GetSymbolStoreFileName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetMethodsFromDocumentPosition_Proxy(ISymUnmanagedReader *This, ISymUnmanagedDocument *document, ULONG32 line, ULONG32 column, ULONG32 cMethod, ULONG32 *pcMethod, ISymUnmanagedMethod *pRetVal[]);
void __RPC_STUB ISymUnmanagedReader_GetMethodsFromDocumentPosition_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetDocumentVersion_Proxy(ISymUnmanagedReader *This, ISymUnmanagedDocument *pDoc, int *version, BOOL *pbCurrent);
void __RPC_STUB ISymUnmanagedReader_GetDocumentVersion_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader_GetMethodVersion_Proxy(ISymUnmanagedReader *This, ISymUnmanagedMethod *pMethod, int *version);
void __RPC_STUB ISymUnmanagedReader_GetMethodVersion_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedSourceServerModule_INTERFACE_DEFINED__
#define __ISymUnmanagedSourceServerModule_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedSourceServerModule;
typedef struct ISymUnmanagedSourceServerModuleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedSourceServerModule *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedSourceServerModule *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedSourceServerModule *This);
	HRESULT(STDMETHODCALLTYPE *GetSourceServerData) (ISymUnmanagedSourceServerModule *This, ULONG *pDataByteCount, BYTE **ppData);
	END_INTERFACE
}  ISymUnmanagedSourceServerModuleVtbl;
interface ISymUnmanagedSourceServerModule
{
	CONST_VTBL struct ISymUnmanagedSourceServerModuleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedSourceServerModule_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedSourceServerModule_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedSourceServerModule_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedSourceServerModule_GetSourceServerData(This,pDataByteCount,ppData)(This)->lpVtbl -> GetSourceServerData(This,pDataByteCount,ppData)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedSourceServerModule_GetSourceServerData_Proxy(ISymUnmanagedSourceServerModule *This, ULONG *pDataByteCount, BYTE **ppData);
void __RPC_STUB ISymUnmanagedSourceServerModule_GetSourceServerData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedENCUpdate_INTERFACE_DEFINED__
#define __ISymUnmanagedENCUpdate_INTERFACE_DEFINED__
typedef struct _SYMLINEDELTA
{
	mdMethodDef mdMethod;
	INT32 delta;
} SYMLINEDELTA;
extern const IID IID_ISymUnmanagedENCUpdate;
typedef struct ISymUnmanagedENCUpdateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedENCUpdate *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedENCUpdate *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedENCUpdate *This);
	HRESULT(STDMETHODCALLTYPE *UpdateSymbolStore2) (ISymUnmanagedENCUpdate *This, IStream *pIStream, SYMLINEDELTA *pDeltaLines, ULONG cDeltaLines);
	HRESULT(STDMETHODCALLTYPE *GetLocalVariableCount) (ISymUnmanagedENCUpdate *This, mdMethodDef mdMethodToken, ULONG *pcLocals);
	HRESULT(STDMETHODCALLTYPE *GetLocalVariables) (ISymUnmanagedENCUpdate *This, mdMethodDef mdMethodToken, ULONG cLocals, ISymUnmanagedVariable *rgLocals[], ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *InitializeForEnc) (ISymUnmanagedENCUpdate *This);
	HRESULT(STDMETHODCALLTYPE *UpdateMethodLines) (ISymUnmanagedENCUpdate *This, mdMethodDef mdMethodToken, INT32 *pDeltas, ULONG cDeltas);
	END_INTERFACE
}  ISymUnmanagedENCUpdateVtbl;
interface ISymUnmanagedENCUpdate
{
	CONST_VTBL struct ISymUnmanagedENCUpdateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedENCUpdate_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedENCUpdate_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedENCUpdate_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedENCUpdate_UpdateSymbolStore2(This,pIStream,pDeltaLines,cDeltaLines)(This)->lpVtbl -> UpdateSymbolStore2(This,pIStream,pDeltaLines,cDeltaLines)
#define ISymUnmanagedENCUpdate_GetLocalVariableCount(This,mdMethodToken,pcLocals)(This)->lpVtbl -> GetLocalVariableCount(This,mdMethodToken,pcLocals)
#define ISymUnmanagedENCUpdate_GetLocalVariables(This,mdMethodToken,cLocals,rgLocals,pceltFetched)(This)->lpVtbl -> GetLocalVariables(This,mdMethodToken,cLocals,rgLocals,pceltFetched)
#define ISymUnmanagedENCUpdate_InitializeForEnc(This)(This)->lpVtbl -> InitializeForEnc(This)
#define ISymUnmanagedENCUpdate_UpdateMethodLines(This,mdMethodToken,pDeltas,cDeltas)(This)->lpVtbl -> UpdateMethodLines(This,mdMethodToken,pDeltas,cDeltas)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedENCUpdate_UpdateSymbolStore2_Proxy(ISymUnmanagedENCUpdate *This, IStream *pIStream, SYMLINEDELTA *pDeltaLines, ULONG cDeltaLines);
void __RPC_STUB ISymUnmanagedENCUpdate_UpdateSymbolStore2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedENCUpdate_GetLocalVariableCount_Proxy(ISymUnmanagedENCUpdate *This, mdMethodDef mdMethodToken, ULONG *pcLocals);
void __RPC_STUB ISymUnmanagedENCUpdate_GetLocalVariableCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedENCUpdate_GetLocalVariables_Proxy(ISymUnmanagedENCUpdate *This, mdMethodDef mdMethodToken, ULONG cLocals, ISymUnmanagedVariable *rgLocals[], ULONG *pceltFetched);
void __RPC_STUB ISymUnmanagedENCUpdate_GetLocalVariables_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedENCUpdate_InitializeForEnc_Proxy(ISymUnmanagedENCUpdate *This);
void __RPC_STUB ISymUnmanagedENCUpdate_InitializeForEnc_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedENCUpdate_UpdateMethodLines_Proxy(ISymUnmanagedENCUpdate *This, mdMethodDef mdMethodToken, INT32 *pDeltas, ULONG cDeltas);
void __RPC_STUB ISymUnmanagedENCUpdate_UpdateMethodLines_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedReaderSymbolSearchInfo_INTERFACE_DEFINED__
#define __ISymUnmanagedReaderSymbolSearchInfo_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedReaderSymbolSearchInfo;
typedef struct ISymUnmanagedReaderSymbolSearchInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedReaderSymbolSearchInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedReaderSymbolSearchInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedReaderSymbolSearchInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetSymbolSearchInfoCount) (ISymUnmanagedReaderSymbolSearchInfo *This, ULONG32 *pcSearchInfo);
	HRESULT(STDMETHODCALLTYPE *GetSymbolSearchInfo) (ISymUnmanagedReaderSymbolSearchInfo *This, ULONG32 cSearchInfo, ULONG32 *pcSearchInfo, ISymUnmanagedSymbolSearchInfo **rgpSearchInfo);
	END_INTERFACE
}  ISymUnmanagedReaderSymbolSearchInfoVtbl;
interface ISymUnmanagedReaderSymbolSearchInfo
{
	CONST_VTBL struct ISymUnmanagedReaderSymbolSearchInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedReaderSymbolSearchInfo_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedReaderSymbolSearchInfo_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedReaderSymbolSearchInfo_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedReaderSymbolSearchInfo_GetSymbolSearchInfoCount(This,pcSearchInfo)(This)->lpVtbl -> GetSymbolSearchInfoCount(This,pcSearchInfo)
#define ISymUnmanagedReaderSymbolSearchInfo_GetSymbolSearchInfo(This,cSearchInfo,pcSearchInfo,rgpSearchInfo)(This)->lpVtbl -> GetSymbolSearchInfo(This,cSearchInfo,pcSearchInfo,rgpSearchInfo)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedReaderSymbolSearchInfo_GetSymbolSearchInfoCount_Proxy(ISymUnmanagedReaderSymbolSearchInfo *This, ULONG32 *pcSearchInfo);
void __RPC_STUB ISymUnmanagedReaderSymbolSearchInfo_GetSymbolSearchInfoCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReaderSymbolSearchInfo_GetSymbolSearchInfo_Proxy(ISymUnmanagedReaderSymbolSearchInfo *This, ULONG32 cSearchInfo, ULONG32 *pcSearchInfo, ISymUnmanagedSymbolSearchInfo **rgpSearchInfo);
void __RPC_STUB ISymUnmanagedReaderSymbolSearchInfo_GetSymbolSearchInfo_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedScope_INTERFACE_DEFINED__
#define __ISymUnmanagedScope_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedScope;
typedef struct ISymUnmanagedScopeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedScope *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedScope *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedScope *This);
	HRESULT(STDMETHODCALLTYPE *GetMethod) (ISymUnmanagedScope *This, ISymUnmanagedMethod **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetParent) (ISymUnmanagedScope *This, ISymUnmanagedScope **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetChildren) (ISymUnmanagedScope *This, ULONG32 cChildren, ULONG32 *pcChildren, ISymUnmanagedScope *children[]);
	HRESULT(STDMETHODCALLTYPE *GetStartOffset) (ISymUnmanagedScope *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetEndOffset) (ISymUnmanagedScope *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetLocalCount) (ISymUnmanagedScope *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetLocals) (ISymUnmanagedScope *This, ULONG32 cLocals, ULONG32 *pcLocals, ISymUnmanagedVariable *locals[]);
	HRESULT(STDMETHODCALLTYPE *GetNamespaces) (ISymUnmanagedScope *This, ULONG32 cNameSpaces, ULONG32 *pcNameSpaces, ISymUnmanagedNamespace *namespaces[]);
	END_INTERFACE
}  ISymUnmanagedScopeVtbl;
interface ISymUnmanagedScope
{
	CONST_VTBL struct ISymUnmanagedScopeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedScope_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedScope_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedScope_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedScope_GetMethod(This,pRetVal)(This)->lpVtbl -> GetMethod(This,pRetVal)
#define ISymUnmanagedScope_GetParent(This,pRetVal)(This)->lpVtbl -> GetParent(This,pRetVal)
#define ISymUnmanagedScope_GetChildren(This,cChildren,pcChildren,children)(This)->lpVtbl -> GetChildren(This,cChildren,pcChildren,children)
#define ISymUnmanagedScope_GetStartOffset(This,pRetVal)(This)->lpVtbl -> GetStartOffset(This,pRetVal)
#define ISymUnmanagedScope_GetEndOffset(This,pRetVal)(This)->lpVtbl -> GetEndOffset(This,pRetVal)
#define ISymUnmanagedScope_GetLocalCount(This,pRetVal)(This)->lpVtbl -> GetLocalCount(This,pRetVal)
#define ISymUnmanagedScope_GetLocals(This,cLocals,pcLocals,locals)(This)->lpVtbl -> GetLocals(This,cLocals,pcLocals,locals)
#define ISymUnmanagedScope_GetNamespaces(This,cNameSpaces,pcNameSpaces,namespaces)(This)->lpVtbl -> GetNamespaces(This,cNameSpaces,pcNameSpaces,namespaces)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedScope_GetMethod_Proxy(ISymUnmanagedScope *This, ISymUnmanagedMethod **pRetVal);
void __RPC_STUB ISymUnmanagedScope_GetMethod_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedScope_GetParent_Proxy(ISymUnmanagedScope *This, ISymUnmanagedScope **pRetVal);
void __RPC_STUB ISymUnmanagedScope_GetParent_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedScope_GetChildren_Proxy(ISymUnmanagedScope *This, ULONG32 cChildren, ULONG32 *pcChildren, ISymUnmanagedScope *children[]);
void __RPC_STUB ISymUnmanagedScope_GetChildren_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedScope_GetStartOffset_Proxy(ISymUnmanagedScope *This, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedScope_GetStartOffset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedScope_GetEndOffset_Proxy(ISymUnmanagedScope *This, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedScope_GetEndOffset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedScope_GetLocalCount_Proxy(ISymUnmanagedScope *This, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedScope_GetLocalCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedScope_GetLocals_Proxy(ISymUnmanagedScope *This, ULONG32 cLocals, ULONG32 *pcLocals, ISymUnmanagedVariable *locals[]);
void __RPC_STUB ISymUnmanagedScope_GetLocals_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedScope_GetNamespaces_Proxy(ISymUnmanagedScope *This, ULONG32 cNameSpaces, ULONG32 *pcNameSpaces, ISymUnmanagedNamespace *namespaces[]);
void __RPC_STUB ISymUnmanagedScope_GetNamespaces_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedConstant_INTERFACE_DEFINED__
#define __ISymUnmanagedConstant_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedConstant;
typedef struct ISymUnmanagedConstantVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedConstant *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedConstant *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedConstant *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (ISymUnmanagedConstant *This, ULONG32 cchName, ULONG32 *pcchName, WCHAR szName[]);
	HRESULT(STDMETHODCALLTYPE *GetValue) (ISymUnmanagedConstant *This, VARIANT *pValue);
	HRESULT(STDMETHODCALLTYPE *GetSignature) (ISymUnmanagedConstant *This, ULONG32 cSig, ULONG32 *pcSig, BYTE sig[]);
	END_INTERFACE
}  ISymUnmanagedConstantVtbl;
interface ISymUnmanagedConstant
{
	CONST_VTBL struct ISymUnmanagedConstantVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedConstant_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedConstant_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedConstant_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedConstant_GetName(This,cchName,pcchName,szName)(This)->lpVtbl -> GetName(This,cchName,pcchName,szName)
#define ISymUnmanagedConstant_GetValue(This,pValue)(This)->lpVtbl -> GetValue(This,pValue)
#define ISymUnmanagedConstant_GetSignature(This,cSig,pcSig,sig)(This)->lpVtbl -> GetSignature(This,cSig,pcSig,sig)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedConstant_GetName_Proxy(ISymUnmanagedConstant *This, ULONG32 cchName, ULONG32 *pcchName, WCHAR szName[]);
void __RPC_STUB ISymUnmanagedConstant_GetName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedConstant_GetValue_Proxy(ISymUnmanagedConstant *This, VARIANT *pValue);
void __RPC_STUB ISymUnmanagedConstant_GetValue_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedConstant_GetSignature_Proxy(ISymUnmanagedConstant *This, ULONG32 cSig, ULONG32 *pcSig, BYTE sig[]);
void __RPC_STUB ISymUnmanagedConstant_GetSignature_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedScope2_INTERFACE_DEFINED__
#define __ISymUnmanagedScope2_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedScope2;
typedef struct ISymUnmanagedScope2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedScope2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedScope2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedScope2 *This);
	HRESULT(STDMETHODCALLTYPE *GetMethod) (ISymUnmanagedScope2 *This, ISymUnmanagedMethod **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetParent) (ISymUnmanagedScope2 *This, ISymUnmanagedScope **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetChildren) (ISymUnmanagedScope2 *This, ULONG32 cChildren, ULONG32 *pcChildren, ISymUnmanagedScope *children[]);
	HRESULT(STDMETHODCALLTYPE *GetStartOffset) (ISymUnmanagedScope2 *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetEndOffset) (ISymUnmanagedScope2 *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetLocalCount) (ISymUnmanagedScope2 *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetLocals) (ISymUnmanagedScope2 *This, ULONG32 cLocals, ULONG32 *pcLocals, ISymUnmanagedVariable *locals[]);
	HRESULT(STDMETHODCALLTYPE *GetNamespaces) (ISymUnmanagedScope2 *This, ULONG32 cNameSpaces, ULONG32 *pcNameSpaces, ISymUnmanagedNamespace *namespaces[]);
	HRESULT(STDMETHODCALLTYPE *GetConstantCount) (ISymUnmanagedScope2 *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetConstants) (ISymUnmanagedScope2 *This, ULONG32 cConstants, ULONG32 *pcConstants, ISymUnmanagedConstant *constants[]);
	END_INTERFACE
}  ISymUnmanagedScope2Vtbl;
interface ISymUnmanagedScope2
{
	CONST_VTBL struct ISymUnmanagedScope2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedScope2_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedScope2_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedScope2_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedScope2_GetMethod(This,pRetVal)(This)->lpVtbl -> GetMethod(This,pRetVal)
#define ISymUnmanagedScope2_GetParent(This,pRetVal)(This)->lpVtbl -> GetParent(This,pRetVal)
#define ISymUnmanagedScope2_GetChildren(This,cChildren,pcChildren,children)(This)->lpVtbl -> GetChildren(This,cChildren,pcChildren,children)
#define ISymUnmanagedScope2_GetStartOffset(This,pRetVal)(This)->lpVtbl -> GetStartOffset(This,pRetVal)
#define ISymUnmanagedScope2_GetEndOffset(This,pRetVal)(This)->lpVtbl -> GetEndOffset(This,pRetVal)
#define ISymUnmanagedScope2_GetLocalCount(This,pRetVal)(This)->lpVtbl -> GetLocalCount(This,pRetVal)
#define ISymUnmanagedScope2_GetLocals(This,cLocals,pcLocals,locals)(This)->lpVtbl -> GetLocals(This,cLocals,pcLocals,locals)
#define ISymUnmanagedScope2_GetNamespaces(This,cNameSpaces,pcNameSpaces,namespaces)(This)->lpVtbl -> GetNamespaces(This,cNameSpaces,pcNameSpaces,namespaces)
#define ISymUnmanagedScope2_GetConstantCount(This,pRetVal)(This)->lpVtbl -> GetConstantCount(This,pRetVal)
#define ISymUnmanagedScope2_GetConstants(This,cConstants,pcConstants,constants)(This)->lpVtbl -> GetConstants(This,cConstants,pcConstants,constants)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedScope2_GetConstantCount_Proxy(ISymUnmanagedScope2 *This, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedScope2_GetConstantCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedScope2_GetConstants_Proxy(ISymUnmanagedScope2 *This, ULONG32 cConstants, ULONG32 *pcConstants, ISymUnmanagedConstant *constants[]);
void __RPC_STUB ISymUnmanagedScope2_GetConstants_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedVariable_INTERFACE_DEFINED__
#define __ISymUnmanagedVariable_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedVariable;
typedef struct ISymUnmanagedVariableVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedVariable *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedVariable *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedVariable *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (ISymUnmanagedVariable *This, ULONG32 cchName, ULONG32 *pcchName, WCHAR szName[]);
	HRESULT(STDMETHODCALLTYPE *GetAttributes) (ISymUnmanagedVariable *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetSignature) (ISymUnmanagedVariable *This, ULONG32 cSig, ULONG32 *pcSig, BYTE sig[]);
	HRESULT(STDMETHODCALLTYPE *GetAddressKind) (ISymUnmanagedVariable *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetAddressField1) (ISymUnmanagedVariable *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetAddressField2) (ISymUnmanagedVariable *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetAddressField3) (ISymUnmanagedVariable *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetStartOffset) (ISymUnmanagedVariable *This, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetEndOffset) (ISymUnmanagedVariable *This, ULONG32 *pRetVal);
	END_INTERFACE
}  ISymUnmanagedVariableVtbl;
interface ISymUnmanagedVariable
{
	CONST_VTBL struct ISymUnmanagedVariableVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedVariable_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedVariable_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedVariable_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedVariable_GetName(This,cchName,pcchName,szName)(This)->lpVtbl -> GetName(This,cchName,pcchName,szName)
#define ISymUnmanagedVariable_GetAttributes(This,pRetVal)(This)->lpVtbl -> GetAttributes(This,pRetVal)
#define ISymUnmanagedVariable_GetSignature(This,cSig,pcSig,sig)(This)->lpVtbl -> GetSignature(This,cSig,pcSig,sig)
#define ISymUnmanagedVariable_GetAddressKind(This,pRetVal)(This)->lpVtbl -> GetAddressKind(This,pRetVal)
#define ISymUnmanagedVariable_GetAddressField1(This,pRetVal)(This)->lpVtbl -> GetAddressField1(This,pRetVal)
#define ISymUnmanagedVariable_GetAddressField2(This,pRetVal)(This)->lpVtbl -> GetAddressField2(This,pRetVal)
#define ISymUnmanagedVariable_GetAddressField3(This,pRetVal)(This)->lpVtbl -> GetAddressField3(This,pRetVal)
#define ISymUnmanagedVariable_GetStartOffset(This,pRetVal)(This)->lpVtbl -> GetStartOffset(This,pRetVal)
#define ISymUnmanagedVariable_GetEndOffset(This,pRetVal)(This)->lpVtbl -> GetEndOffset(This,pRetVal)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedVariable_GetName_Proxy(ISymUnmanagedVariable *This, ULONG32 cchName, ULONG32 *pcchName, WCHAR szName[]);
void __RPC_STUB ISymUnmanagedVariable_GetName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedVariable_GetAttributes_Proxy(ISymUnmanagedVariable *This, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedVariable_GetAttributes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedVariable_GetSignature_Proxy(ISymUnmanagedVariable *This, ULONG32 cSig, ULONG32 *pcSig, BYTE sig[]);
void __RPC_STUB ISymUnmanagedVariable_GetSignature_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedVariable_GetAddressKind_Proxy(ISymUnmanagedVariable *This, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedVariable_GetAddressKind_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedVariable_GetAddressField1_Proxy(ISymUnmanagedVariable *This, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedVariable_GetAddressField1_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedVariable_GetAddressField2_Proxy(ISymUnmanagedVariable *This, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedVariable_GetAddressField2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedVariable_GetAddressField3_Proxy(ISymUnmanagedVariable *This, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedVariable_GetAddressField3_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedVariable_GetStartOffset_Proxy(ISymUnmanagedVariable *This, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedVariable_GetStartOffset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedVariable_GetEndOffset_Proxy(ISymUnmanagedVariable *This, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedVariable_GetEndOffset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedSymbolSearchInfo_INTERFACE_DEFINED__
#define __ISymUnmanagedSymbolSearchInfo_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedSymbolSearchInfo;
typedef struct ISymUnmanagedSymbolSearchInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedSymbolSearchInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedSymbolSearchInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedSymbolSearchInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetSearchPathLength) (ISymUnmanagedSymbolSearchInfo *This, ULONG32 *pcchPath);
	HRESULT(STDMETHODCALLTYPE *GetSearchPath) (ISymUnmanagedSymbolSearchInfo *This, ULONG32 cchPath, ULONG32 *pcchPath, WCHAR szPath[]);
	HRESULT(STDMETHODCALLTYPE *GetHRESULT) (ISymUnmanagedSymbolSearchInfo *This, HRESULT *phr);
END_INTERFACE
}  ISymUnmanagedSymbolSearchInfoVtbl;
interface ISymUnmanagedSymbolSearchInfo
{
	CONST_VTBL struct ISymUnmanagedSymbolSearchInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedSymbolSearchInfo_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedSymbolSearchInfo_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedSymbolSearchInfo_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedSymbolSearchInfo_GetSearchPathLength(This,pcchPath)(This)->lpVtbl -> GetSearchPathLength(This,pcchPath)
#define ISymUnmanagedSymbolSearchInfo_GetSearchPath(This,cchPath,pcchPath,szPath)(This)->lpVtbl -> GetSearchPath(This,cchPath,pcchPath,szPath)
#define ISymUnmanagedSymbolSearchInfo_GetHRESULT(This,phr)(This)->lpVtbl -> GetHRESULT(This,phr)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedSymbolSearchInfo_GetSearchPathLength_Proxy(ISymUnmanagedSymbolSearchInfo *This, ULONG32 *pcchPath);
void __RPC_STUB ISymUnmanagedSymbolSearchInfo_GetSearchPathLength_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedSymbolSearchInfo_GetSearchPath_Proxy(ISymUnmanagedSymbolSearchInfo *This, ULONG32 cchPath, ULONG32 *pcchPath, WCHAR szPath[]);
void __RPC_STUB ISymUnmanagedSymbolSearchInfo_GetSearchPath_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedSymbolSearchInfo_GetHRESULT_Proxy(ISymUnmanagedSymbolSearchInfo *This, HRESULT *phr);
void __RPC_STUB ISymUnmanagedSymbolSearchInfo_GetHRESULT_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedWriter_INTERFACE_DEFINED__
#define __ISymUnmanagedWriter_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedWriter;
typedef struct ISymUnmanagedWriterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedWriter *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedWriter *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedWriter *This);
	HRESULT(STDMETHODCALLTYPE *DefineDocument) (ISymUnmanagedWriter *This, const WCHAR *url, const GUID *language, const GUID *languageVendor, const GUID *documentType, ISymUnmanagedDocumentWriter **pRetVal);
	HRESULT(STDMETHODCALLTYPE *SetUserEntryPoint) (ISymUnmanagedWriter *This, mdMethodDef entryMethod);
	HRESULT(STDMETHODCALLTYPE *OpenMethod) (ISymUnmanagedWriter *This, mdMethodDef method);
	HRESULT(STDMETHODCALLTYPE *CloseMethod) (ISymUnmanagedWriter *This);
	HRESULT(STDMETHODCALLTYPE *OpenScope) (ISymUnmanagedWriter *This, ULONG32 startOffset, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *CloseScope) (ISymUnmanagedWriter *This, ULONG32 endOffset);
	HRESULT(STDMETHODCALLTYPE *SetScopeRange) (ISymUnmanagedWriter *This, ULONG32 scopeID, ULONG32 startOffset, ULONG32 endOffset);
	HRESULT(STDMETHODCALLTYPE *DefineLocalVariable) (ISymUnmanagedWriter *This, const WCHAR *name, ULONG32 attributes, ULONG32 cSig, unsigned char signature[], ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3, ULONG32 startOffset, ULONG32 endOffset);
	HRESULT(STDMETHODCALLTYPE *DefineParameter) (ISymUnmanagedWriter *This, const WCHAR *name, ULONG32 attributes, ULONG32 sequence, ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
	HRESULT(STDMETHODCALLTYPE *DefineField) (ISymUnmanagedWriter *This, mdTypeDef parent, const WCHAR *name, ULONG32 attributes, ULONG32 cSig, unsigned char signature[], ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
	HRESULT(STDMETHODCALLTYPE *DefineGlobalVariable) (ISymUnmanagedWriter *This, const WCHAR *name, ULONG32 attributes, ULONG32 cSig, unsigned char signature[], ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
	HRESULT(STDMETHODCALLTYPE *Close) (ISymUnmanagedWriter *This);
	HRESULT(STDMETHODCALLTYPE *SetSymAttribute) (ISymUnmanagedWriter *This, mdToken parent, const WCHAR *name, ULONG32 cData, unsigned char data[]);
	HRESULT(STDMETHODCALLTYPE *OpenNamespace) (ISymUnmanagedWriter *This, const WCHAR *name);
	HRESULT(STDMETHODCALLTYPE *CloseNamespace) (ISymUnmanagedWriter *This);
	HRESULT(STDMETHODCALLTYPE *UsingNamespace) (ISymUnmanagedWriter *This, const WCHAR *fullName);
	HRESULT(STDMETHODCALLTYPE *SetMethodSourceRange) (ISymUnmanagedWriter *This, ISymUnmanagedDocumentWriter *startDoc, ULONG32 startLine, ULONG32 startColumn, ISymUnmanagedDocumentWriter *endDoc, ULONG32 endLine, ULONG32 endColumn);
	HRESULT(STDMETHODCALLTYPE *Initialize) (ISymUnmanagedWriter *This, IUnknown *emitter, const WCHAR *filename, IStream *pIStream, BOOL fFullBuild);
	HRESULT(STDMETHODCALLTYPE *GetDebugInfo) (ISymUnmanagedWriter *This, IMAGE_DEBUG_DIRECTORY *pIDD, DWORD cData, DWORD *pcData, BYTE data[]);
	HRESULT(STDMETHODCALLTYPE *DefineSequencePoints) (ISymUnmanagedWriter *This, ISymUnmanagedDocumentWriter *document, ULONG32 spCount, ULONG32 offsets[], ULONG32 lines[], ULONG32 columns[], ULONG32 endLines[], ULONG32 endColumns[]);
	HRESULT(STDMETHODCALLTYPE *RemapToken) (ISymUnmanagedWriter *This, mdToken oldToken, mdToken newToken);
	HRESULT(STDMETHODCALLTYPE *Initialize2) (ISymUnmanagedWriter *This, IUnknown *emitter, const WCHAR *tempfilename, IStream *pIStream, BOOL fFullBuild, const WCHAR *finalfilename);
	HRESULT(STDMETHODCALLTYPE *DefineConstant) (ISymUnmanagedWriter *This, const WCHAR *name, VARIANT value, ULONG32 cSig, unsigned char signature[]);
	HRESULT(STDMETHODCALLTYPE *Abort) (ISymUnmanagedWriter *This);
	END_INTERFACE
}  ISymUnmanagedWriterVtbl;
interface ISymUnmanagedWriter
{
	CONST_VTBL struct ISymUnmanagedWriterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedWriter_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedWriter_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedWriter_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedWriter_DefineDocument(This,url,language,languageVendor,documentType,pRetVal)(This)->lpVtbl -> DefineDocument(This,url,language,languageVendor,documentType,pRetVal)
#define ISymUnmanagedWriter_SetUserEntryPoint(This,entryMethod)(This)->lpVtbl -> SetUserEntryPoint(This,entryMethod)
#define ISymUnmanagedWriter_OpenMethod(This,method)(This)->lpVtbl -> OpenMethod(This,method)
#define ISymUnmanagedWriter_CloseMethod(This)(This)->lpVtbl -> CloseMethod(This)
#define ISymUnmanagedWriter_OpenScope(This,startOffset,pRetVal)(This)->lpVtbl -> OpenScope(This,startOffset,pRetVal)
#define ISymUnmanagedWriter_CloseScope(This,endOffset)(This)->lpVtbl -> CloseScope(This,endOffset)
#define ISymUnmanagedWriter_SetScopeRange(This,scopeID,startOffset,endOffset)(This)->lpVtbl -> SetScopeRange(This,scopeID,startOffset,endOffset)
#define ISymUnmanagedWriter_DefineLocalVariable(This,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3,startOffset,endOffset)(This)->lpVtbl -> DefineLocalVariable(This,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3,startOffset,endOffset)
#define ISymUnmanagedWriter_DefineParameter(This,name,attributes,sequence,addrKind,addr1,addr2,addr3)(This)->lpVtbl -> DefineParameter(This,name,attributes,sequence,addrKind,addr1,addr2,addr3)
#define ISymUnmanagedWriter_DefineField(This,parent,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3)(This)->lpVtbl -> DefineField(This,parent,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3)
#define ISymUnmanagedWriter_DefineGlobalVariable(This,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3)(This)->lpVtbl -> DefineGlobalVariable(This,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3)
#define ISymUnmanagedWriter_Close(This)(This)->lpVtbl -> Close(This)
#define ISymUnmanagedWriter_SetSymAttribute(This,parent,name,cData,data)(This)->lpVtbl -> SetSymAttribute(This,parent,name,cData,data)
#define ISymUnmanagedWriter_OpenNamespace(This,name)(This)->lpVtbl -> OpenNamespace(This,name)
#define ISymUnmanagedWriter_CloseNamespace(This)(This)->lpVtbl -> CloseNamespace(This)
#define ISymUnmanagedWriter_UsingNamespace(This,fullName)(This)->lpVtbl -> UsingNamespace(This,fullName)
#define ISymUnmanagedWriter_SetMethodSourceRange(This,startDoc,startLine,startColumn,endDoc,endLine,endColumn)(This)->lpVtbl -> SetMethodSourceRange(This,startDoc,startLine,startColumn,endDoc,endLine,endColumn)
#define ISymUnmanagedWriter_Initialize(This,emitter,filename,pIStream,fFullBuild)(This)->lpVtbl -> Initialize(This,emitter,filename,pIStream,fFullBuild)
#define ISymUnmanagedWriter_GetDebugInfo(This,pIDD,cData,pcData,data)(This)->lpVtbl -> GetDebugInfo(This,pIDD,cData,pcData,data)
#define ISymUnmanagedWriter_DefineSequencePoints(This,document,spCount,offsets,lines,columns,endLines,endColumns)(This)->lpVtbl -> DefineSequencePoints(This,document,spCount,offsets,lines,columns,endLines,endColumns)
#define ISymUnmanagedWriter_RemapToken(This,oldToken,newToken)(This)->lpVtbl -> RemapToken(This,oldToken,newToken)
#define ISymUnmanagedWriter_Initialize2(This,emitter,tempfilename,pIStream,fFullBuild,finalfilename)(This)->lpVtbl -> Initialize2(This,emitter,tempfilename,pIStream,fFullBuild,finalfilename)
#define ISymUnmanagedWriter_DefineConstant(This,name,value,cSig,signature)(This)->lpVtbl -> DefineConstant(This,name,value,cSig,signature)
#define ISymUnmanagedWriter_Abort(This)(This)->lpVtbl -> Abort(This)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_DefineDocument_Proxy(ISymUnmanagedWriter *This, const WCHAR *url, const GUID *language, const GUID *languageVendor, const GUID *documentType, ISymUnmanagedDocumentWriter **pRetVal);
void __RPC_STUB ISymUnmanagedWriter_DefineDocument_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_SetUserEntryPoint_Proxy(ISymUnmanagedWriter *This, mdMethodDef entryMethod);
void __RPC_STUB ISymUnmanagedWriter_SetUserEntryPoint_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_OpenMethod_Proxy(ISymUnmanagedWriter *This, mdMethodDef method);
void __RPC_STUB ISymUnmanagedWriter_OpenMethod_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_CloseMethod_Proxy(ISymUnmanagedWriter *This);
void __RPC_STUB ISymUnmanagedWriter_CloseMethod_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_OpenScope_Proxy(ISymUnmanagedWriter *This, ULONG32 startOffset, ULONG32 *pRetVal);
void __RPC_STUB ISymUnmanagedWriter_OpenScope_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_CloseScope_Proxy(ISymUnmanagedWriter *This, ULONG32 endOffset);
void __RPC_STUB ISymUnmanagedWriter_CloseScope_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_SetScopeRange_Proxy(ISymUnmanagedWriter *This, ULONG32 scopeID, ULONG32 startOffset, ULONG32 endOffset);
void __RPC_STUB ISymUnmanagedWriter_SetScopeRange_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_DefineLocalVariable_Proxy(ISymUnmanagedWriter *This, const WCHAR *name, ULONG32 attributes, ULONG32 cSig, unsigned char signature[], ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3, ULONG32 startOffset, ULONG32 endOffset);
void __RPC_STUB ISymUnmanagedWriter_DefineLocalVariable_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_DefineParameter_Proxy(ISymUnmanagedWriter *This, const WCHAR *name, ULONG32 attributes, ULONG32 sequence, ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
void __RPC_STUB ISymUnmanagedWriter_DefineParameter_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_DefineField_Proxy(ISymUnmanagedWriter *This, mdTypeDef parent, const WCHAR *name, ULONG32 attributes, ULONG32 cSig, unsigned char signature[], ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
void __RPC_STUB ISymUnmanagedWriter_DefineField_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_DefineGlobalVariable_Proxy(ISymUnmanagedWriter *This, const WCHAR *name, ULONG32 attributes, ULONG32 cSig, unsigned char signature[], ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
void __RPC_STUB ISymUnmanagedWriter_DefineGlobalVariable_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_Close_Proxy(ISymUnmanagedWriter *This);
void __RPC_STUB ISymUnmanagedWriter_Close_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_SetSymAttribute_Proxy(ISymUnmanagedWriter *This, mdToken parent, const WCHAR *name, ULONG32 cData, unsigned char data[]);
void __RPC_STUB ISymUnmanagedWriter_SetSymAttribute_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_OpenNamespace_Proxy(ISymUnmanagedWriter *This, const WCHAR *name);
void __RPC_STUB ISymUnmanagedWriter_OpenNamespace_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_CloseNamespace_Proxy(ISymUnmanagedWriter *This);
void __RPC_STUB ISymUnmanagedWriter_CloseNamespace_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_UsingNamespace_Proxy(ISymUnmanagedWriter *This, const WCHAR *fullName);
void __RPC_STUB ISymUnmanagedWriter_UsingNamespace_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_SetMethodSourceRange_Proxy(ISymUnmanagedWriter *This, ISymUnmanagedDocumentWriter *startDoc, ULONG32 startLine, ULONG32 startColumn, ISymUnmanagedDocumentWriter *endDoc, ULONG32 endLine, ULONG32 endColumn);
void __RPC_STUB ISymUnmanagedWriter_SetMethodSourceRange_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_Initialize_Proxy(ISymUnmanagedWriter *This, IUnknown *emitter, const WCHAR *filename, IStream *pIStream, BOOL fFullBuild);
void __RPC_STUB ISymUnmanagedWriter_Initialize_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_GetDebugInfo_Proxy(ISymUnmanagedWriter *This, IMAGE_DEBUG_DIRECTORY *pIDD, DWORD cData, DWORD *pcData, BYTE data[]);
void __RPC_STUB ISymUnmanagedWriter_GetDebugInfo_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_DefineSequencePoints_Proxy(ISymUnmanagedWriter *This, ISymUnmanagedDocumentWriter *document, ULONG32 spCount, ULONG32 offsets[], ULONG32 lines[], ULONG32 columns[], ULONG32 endLines[], ULONG32 endColumns[]);
void __RPC_STUB ISymUnmanagedWriter_DefineSequencePoints_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_RemapToken_Proxy(ISymUnmanagedWriter *This, mdToken oldToken, mdToken newToken);
void __RPC_STUB ISymUnmanagedWriter_RemapToken_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_Initialize2_Proxy(ISymUnmanagedWriter *This, IUnknown *emitter, const WCHAR *tempfilename, IStream *pIStream, BOOL fFullBuild, const WCHAR *finalfilename);
void __RPC_STUB ISymUnmanagedWriter_Initialize2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_DefineConstant_Proxy(ISymUnmanagedWriter *This, const WCHAR *name, VARIANT value, ULONG32 cSig, unsigned char signature[]);
void __RPC_STUB ISymUnmanagedWriter_DefineConstant_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter_Abort_Proxy(ISymUnmanagedWriter *This);
void __RPC_STUB ISymUnmanagedWriter_Abort_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedWriter2_INTERFACE_DEFINED__
#define __ISymUnmanagedWriter2_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedWriter2;
typedef struct ISymUnmanagedWriter2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedWriter2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedWriter2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedWriter2 *This);
	HRESULT(STDMETHODCALLTYPE *DefineDocument) (ISymUnmanagedWriter2 *This, const WCHAR *url, const GUID *language, const GUID *languageVendor, const GUID *documentType, ISymUnmanagedDocumentWriter **pRetVal);
	HRESULT(STDMETHODCALLTYPE *SetUserEntryPoint) (ISymUnmanagedWriter2 *This, mdMethodDef entryMethod);
	HRESULT(STDMETHODCALLTYPE *OpenMethod) (ISymUnmanagedWriter2 *This, mdMethodDef method);
	HRESULT(STDMETHODCALLTYPE *CloseMethod) (ISymUnmanagedWriter2 *This);
	HRESULT(STDMETHODCALLTYPE *OpenScope) (ISymUnmanagedWriter2 *This, ULONG32 startOffset, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *CloseScope) (ISymUnmanagedWriter2 *This, ULONG32 endOffset);
	HRESULT(STDMETHODCALLTYPE *SetScopeRange) (ISymUnmanagedWriter2 *This, ULONG32 scopeID, ULONG32 startOffset, ULONG32 endOffset);
	HRESULT(STDMETHODCALLTYPE *DefineLocalVariable) (ISymUnmanagedWriter2 *This, const WCHAR *name, ULONG32 attributes, ULONG32 cSig, unsigned char signature[], ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3, ULONG32 startOffset, ULONG32 endOffset);
	HRESULT(STDMETHODCALLTYPE *DefineParameter) (ISymUnmanagedWriter2 *This, const WCHAR *name, ULONG32 attributes, ULONG32 sequence, ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
	HRESULT(STDMETHODCALLTYPE *DefineField) (ISymUnmanagedWriter2 *This, mdTypeDef parent, const WCHAR *name, ULONG32 attributes, ULONG32 cSig, unsigned char signature[], ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
	HRESULT(STDMETHODCALLTYPE *DefineGlobalVariable) (ISymUnmanagedWriter2 *This, const WCHAR *name, ULONG32 attributes, ULONG32 cSig, unsigned char signature[], ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
	HRESULT(STDMETHODCALLTYPE *Close) (ISymUnmanagedWriter2 *This);
	HRESULT(STDMETHODCALLTYPE *SetSymAttribute) (ISymUnmanagedWriter2 *This, mdToken parent, const WCHAR *name, ULONG32 cData, unsigned char data[]);
	HRESULT(STDMETHODCALLTYPE *OpenNamespace) (ISymUnmanagedWriter2 *This, const WCHAR *name);
	HRESULT(STDMETHODCALLTYPE *CloseNamespace) (ISymUnmanagedWriter2 *This);
	HRESULT(STDMETHODCALLTYPE *UsingNamespace) (ISymUnmanagedWriter2 *This, const WCHAR *fullName);
	HRESULT(STDMETHODCALLTYPE *SetMethodSourceRange) (ISymUnmanagedWriter2 *This, ISymUnmanagedDocumentWriter *startDoc, ULONG32 startLine, ULONG32 startColumn, ISymUnmanagedDocumentWriter *endDoc, ULONG32 endLine, ULONG32 endColumn);
	HRESULT(STDMETHODCALLTYPE *Initialize) (ISymUnmanagedWriter2 *This, IUnknown *emitter, const WCHAR *filename, IStream *pIStream, BOOL fFullBuild);
	HRESULT(STDMETHODCALLTYPE *GetDebugInfo) (ISymUnmanagedWriter2 *This, IMAGE_DEBUG_DIRECTORY *pIDD, DWORD cData, DWORD *pcData, BYTE data[]);
	HRESULT(STDMETHODCALLTYPE *DefineSequencePoints) (ISymUnmanagedWriter2 *This, ISymUnmanagedDocumentWriter *document, ULONG32 spCount, ULONG32 offsets[], ULONG32 lines[], ULONG32 columns[], ULONG32 endLines[], ULONG32 endColumns[]);
	HRESULT(STDMETHODCALLTYPE *RemapToken) (ISymUnmanagedWriter2 *This, mdToken oldToken, mdToken newToken);
	HRESULT(STDMETHODCALLTYPE *Initialize2) (ISymUnmanagedWriter2 *This, IUnknown *emitter, const WCHAR *tempfilename, IStream *pIStream, BOOL fFullBuild, const WCHAR *finalfilename);
	HRESULT(STDMETHODCALLTYPE *DefineConstant) (ISymUnmanagedWriter2 *This, const WCHAR *name, VARIANT value, ULONG32 cSig, unsigned char signature[]);
	HRESULT(STDMETHODCALLTYPE *Abort) (ISymUnmanagedWriter2 *This);
	HRESULT(STDMETHODCALLTYPE *DefineLocalVariable2) (ISymUnmanagedWriter2 *This, const WCHAR *name, ULONG32 attributes, mdSignature sigToken, ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3, ULONG32 startOffset, ULONG32 endOffset);
	HRESULT(STDMETHODCALLTYPE *DefineGlobalVariable2) (ISymUnmanagedWriter2 *This, const WCHAR *name, ULONG32 attributes, mdSignature sigToken, ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
	HRESULT(STDMETHODCALLTYPE *DefineConstant2) (ISymUnmanagedWriter2 *This, const WCHAR *name, VARIANT value, mdSignature sigToken);
	END_INTERFACE
}  ISymUnmanagedWriter2Vtbl;
interface ISymUnmanagedWriter2
{
	CONST_VTBL struct ISymUnmanagedWriter2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedWriter2_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedWriter2_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedWriter2_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedWriter2_DefineDocument(This,url,language,languageVendor,documentType,pRetVal)(This)->lpVtbl -> DefineDocument(This,url,language,languageVendor,documentType,pRetVal)
#define ISymUnmanagedWriter2_SetUserEntryPoint(This,entryMethod)(This)->lpVtbl -> SetUserEntryPoint(This,entryMethod)
#define ISymUnmanagedWriter2_OpenMethod(This,method)(This)->lpVtbl -> OpenMethod(This,method)
#define ISymUnmanagedWriter2_CloseMethod(This)(This)->lpVtbl -> CloseMethod(This)
#define ISymUnmanagedWriter2_OpenScope(This,startOffset,pRetVal)(This)->lpVtbl -> OpenScope(This,startOffset,pRetVal)
#define ISymUnmanagedWriter2_CloseScope(This,endOffset)(This)->lpVtbl -> CloseScope(This,endOffset)
#define ISymUnmanagedWriter2_SetScopeRange(This,scopeID,startOffset,endOffset)(This)->lpVtbl -> SetScopeRange(This,scopeID,startOffset,endOffset)
#define ISymUnmanagedWriter2_DefineLocalVariable(This,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3,startOffset,endOffset)(This)->lpVtbl -> DefineLocalVariable(This,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3,startOffset,endOffset)
#define ISymUnmanagedWriter2_DefineParameter(This,name,attributes,sequence,addrKind,addr1,addr2,addr3)(This)->lpVtbl -> DefineParameter(This,name,attributes,sequence,addrKind,addr1,addr2,addr3)
#define ISymUnmanagedWriter2_DefineField(This,parent,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3)(This)->lpVtbl -> DefineField(This,parent,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3)
#define ISymUnmanagedWriter2_DefineGlobalVariable(This,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3)(This)->lpVtbl -> DefineGlobalVariable(This,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3)
#define ISymUnmanagedWriter2_Close(This)(This)->lpVtbl -> Close(This)
#define ISymUnmanagedWriter2_SetSymAttribute(This,parent,name,cData,data)(This)->lpVtbl -> SetSymAttribute(This,parent,name,cData,data)
#define ISymUnmanagedWriter2_OpenNamespace(This,name)(This)->lpVtbl -> OpenNamespace(This,name)
#define ISymUnmanagedWriter2_CloseNamespace(This)(This)->lpVtbl -> CloseNamespace(This)
#define ISymUnmanagedWriter2_UsingNamespace(This,fullName)(This)->lpVtbl -> UsingNamespace(This,fullName)
#define ISymUnmanagedWriter2_SetMethodSourceRange(This,startDoc,startLine,startColumn,endDoc,endLine,endColumn)(This)->lpVtbl -> SetMethodSourceRange(This,startDoc,startLine,startColumn,endDoc,endLine,endColumn)
#define ISymUnmanagedWriter2_Initialize(This,emitter,filename,pIStream,fFullBuild)(This)->lpVtbl -> Initialize(This,emitter,filename,pIStream,fFullBuild)
#define ISymUnmanagedWriter2_GetDebugInfo(This,pIDD,cData,pcData,data)(This)->lpVtbl -> GetDebugInfo(This,pIDD,cData,pcData,data)
#define ISymUnmanagedWriter2_DefineSequencePoints(This,document,spCount,offsets,lines,columns,endLines,endColumns)(This)->lpVtbl -> DefineSequencePoints(This,document,spCount,offsets,lines,columns,endLines,endColumns)
#define ISymUnmanagedWriter2_RemapToken(This,oldToken,newToken)(This)->lpVtbl -> RemapToken(This,oldToken,newToken)
#define ISymUnmanagedWriter2_Initialize2(This,emitter,tempfilename,pIStream,fFullBuild,finalfilename)(This)->lpVtbl -> Initialize2(This,emitter,tempfilename,pIStream,fFullBuild,finalfilename)
#define ISymUnmanagedWriter2_DefineConstant(This,name,value,cSig,signature)(This)->lpVtbl -> DefineConstant(This,name,value,cSig,signature)
#define ISymUnmanagedWriter2_Abort(This)(This)->lpVtbl -> Abort(This)
#define ISymUnmanagedWriter2_DefineLocalVariable2(This,name,attributes,sigToken,addrKind,addr1,addr2,addr3,startOffset,endOffset)(This)->lpVtbl -> DefineLocalVariable2(This,name,attributes,sigToken,addrKind,addr1,addr2,addr3,startOffset,endOffset)
#define ISymUnmanagedWriter2_DefineGlobalVariable2(This,name,attributes,sigToken,addrKind,addr1,addr2,addr3)(This)->lpVtbl -> DefineGlobalVariable2(This,name,attributes,sigToken,addrKind,addr1,addr2,addr3)
#define ISymUnmanagedWriter2_DefineConstant2(This,name,value,sigToken)(This)->lpVtbl -> DefineConstant2(This,name,value,sigToken)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter2_DefineLocalVariable2_Proxy(ISymUnmanagedWriter2 *This, const WCHAR *name, ULONG32 attributes, mdSignature sigToken, ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3, ULONG32 startOffset, ULONG32 endOffset);
void __RPC_STUB ISymUnmanagedWriter2_DefineLocalVariable2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter2_DefineGlobalVariable2_Proxy(ISymUnmanagedWriter2 *This, const WCHAR *name, ULONG32 attributes, mdSignature sigToken, ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
void __RPC_STUB ISymUnmanagedWriter2_DefineGlobalVariable2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter2_DefineConstant2_Proxy(ISymUnmanagedWriter2 *This, const WCHAR *name, VARIANT value, mdSignature sigToken);
void __RPC_STUB ISymUnmanagedWriter2_DefineConstant2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedWriter3_INTERFACE_DEFINED__
#define __ISymUnmanagedWriter3_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedWriter3;
typedef struct ISymUnmanagedWriter3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedWriter3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedWriter3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedWriter3 *This);
	HRESULT(STDMETHODCALLTYPE *DefineDocument) (ISymUnmanagedWriter3 *This, const WCHAR *url, const GUID *language, const GUID *languageVendor, const GUID *documentType, ISymUnmanagedDocumentWriter **pRetVal);
	HRESULT(STDMETHODCALLTYPE *SetUserEntryPoint) (ISymUnmanagedWriter3 *This, mdMethodDef entryMethod);
	HRESULT(STDMETHODCALLTYPE *OpenMethod) (ISymUnmanagedWriter3 *This, mdMethodDef method);
	HRESULT(STDMETHODCALLTYPE *CloseMethod) (ISymUnmanagedWriter3 *This);
	HRESULT(STDMETHODCALLTYPE *OpenScope) (ISymUnmanagedWriter3 *This, ULONG32 startOffset, ULONG32 *pRetVal);
	HRESULT(STDMETHODCALLTYPE *CloseScope) (ISymUnmanagedWriter3 *This, ULONG32 endOffset);
	HRESULT(STDMETHODCALLTYPE *SetScopeRange) (ISymUnmanagedWriter3 *This, ULONG32 scopeID, ULONG32 startOffset, ULONG32 endOffset);
	HRESULT(STDMETHODCALLTYPE *DefineLocalVariable) (ISymUnmanagedWriter3 *This, const WCHAR *name, ULONG32 attributes, ULONG32 cSig, unsigned char signature[], ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3, ULONG32 startOffset, ULONG32 endOffset);
	HRESULT(STDMETHODCALLTYPE *DefineParameter) (ISymUnmanagedWriter3 *This, const WCHAR *name, ULONG32 attributes, ULONG32 sequence, ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
	HRESULT(STDMETHODCALLTYPE *DefineField) (ISymUnmanagedWriter3 *This, mdTypeDef parent, const WCHAR *name, ULONG32 attributes, ULONG32 cSig, unsigned char signature[], ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
	HRESULT(STDMETHODCALLTYPE *DefineGlobalVariable) (ISymUnmanagedWriter3 *This, const WCHAR *name, ULONG32 attributes, ULONG32 cSig, unsigned char signature[], ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
	HRESULT(STDMETHODCALLTYPE *Close) (ISymUnmanagedWriter3 *This);
	HRESULT(STDMETHODCALLTYPE *SetSymAttribute) (ISymUnmanagedWriter3 *This, mdToken parent, const WCHAR *name, ULONG32 cData, unsigned char data[]);
	HRESULT(STDMETHODCALLTYPE *OpenNamespace) (ISymUnmanagedWriter3 *This, const WCHAR *name);
	HRESULT(STDMETHODCALLTYPE *CloseNamespace) (ISymUnmanagedWriter3 *This);
	HRESULT(STDMETHODCALLTYPE *UsingNamespace) (ISymUnmanagedWriter3 *This, const WCHAR *fullName);
	HRESULT(STDMETHODCALLTYPE *SetMethodSourceRange) (ISymUnmanagedWriter3 *This, ISymUnmanagedDocumentWriter *startDoc, ULONG32 startLine, ULONG32 startColumn, ISymUnmanagedDocumentWriter *endDoc, ULONG32 endLine, ULONG32 endColumn);
	HRESULT(STDMETHODCALLTYPE *Initialize) (ISymUnmanagedWriter3 *This, IUnknown *emitter, const WCHAR *filename, IStream *pIStream, BOOL fFullBuild);
	HRESULT(STDMETHODCALLTYPE *GetDebugInfo) (ISymUnmanagedWriter3 *This, IMAGE_DEBUG_DIRECTORY *pIDD, DWORD cData, DWORD *pcData, BYTE data[]);
	HRESULT(STDMETHODCALLTYPE *DefineSequencePoints) (ISymUnmanagedWriter3 *This, ISymUnmanagedDocumentWriter *document, ULONG32 spCount, ULONG32 offsets[], ULONG32 lines[], ULONG32 columns[], ULONG32 endLines[], ULONG32 endColumns[]);
	HRESULT(STDMETHODCALLTYPE *RemapToken) (ISymUnmanagedWriter3 *This, mdToken oldToken, mdToken newToken);
	HRESULT(STDMETHODCALLTYPE *Initialize2) (ISymUnmanagedWriter3 *This, IUnknown *emitter, const WCHAR *tempfilename, IStream *pIStream, BOOL fFullBuild, const WCHAR *finalfilename);
	HRESULT(STDMETHODCALLTYPE *DefineConstant) (ISymUnmanagedWriter3 *This, const WCHAR *name, VARIANT value, ULONG32 cSig, unsigned char signature[]);
	HRESULT(STDMETHODCALLTYPE *Abort) (ISymUnmanagedWriter3 *This);
	HRESULT(STDMETHODCALLTYPE *DefineLocalVariable2) (ISymUnmanagedWriter3 *This, const WCHAR *name, ULONG32 attributes, mdSignature sigToken, ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3, ULONG32 startOffset, ULONG32 endOffset);
	HRESULT(STDMETHODCALLTYPE *DefineGlobalVariable2) (ISymUnmanagedWriter3 *This, const WCHAR *name, ULONG32 attributes, mdSignature sigToken, ULONG32 addrKind, ULONG32 addr1, ULONG32 addr2, ULONG32 addr3);
	HRESULT(STDMETHODCALLTYPE *DefineConstant2) (ISymUnmanagedWriter3 *This, const WCHAR *name, VARIANT value, mdSignature sigToken);
	HRESULT(STDMETHODCALLTYPE *OpenMethod2) (ISymUnmanagedWriter3 *This, mdMethodDef method, ULONG32 isect, ULONG32 offset);
	HRESULT(STDMETHODCALLTYPE *Commit) (ISymUnmanagedWriter3 *This);
	END_INTERFACE
}  ISymUnmanagedWriter3Vtbl;
interface ISymUnmanagedWriter3
{
	CONST_VTBL struct ISymUnmanagedWriter3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedWriter3_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedWriter3_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedWriter3_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedWriter3_DefineDocument(This,url,language,languageVendor,documentType,pRetVal)(This)->lpVtbl -> DefineDocument(This,url,language,languageVendor,documentType,pRetVal)
#define ISymUnmanagedWriter3_SetUserEntryPoint(This,entryMethod)(This)->lpVtbl -> SetUserEntryPoint(This,entryMethod)
#define ISymUnmanagedWriter3_OpenMethod(This,method)(This)->lpVtbl -> OpenMethod(This,method)
#define ISymUnmanagedWriter3_CloseMethod(This)(This)->lpVtbl -> CloseMethod(This)
#define ISymUnmanagedWriter3_OpenScope(This,startOffset,pRetVal)(This)->lpVtbl -> OpenScope(This,startOffset,pRetVal)
#define ISymUnmanagedWriter3_CloseScope(This,endOffset)(This)->lpVtbl -> CloseScope(This,endOffset)
#define ISymUnmanagedWriter3_SetScopeRange(This,scopeID,startOffset,endOffset)(This)->lpVtbl -> SetScopeRange(This,scopeID,startOffset,endOffset)
#define ISymUnmanagedWriter3_DefineLocalVariable(This,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3,startOffset,endOffset)(This)->lpVtbl -> DefineLocalVariable(This,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3,startOffset,endOffset)
#define ISymUnmanagedWriter3_DefineParameter(This,name,attributes,sequence,addrKind,addr1,addr2,addr3)(This)->lpVtbl -> DefineParameter(This,name,attributes,sequence,addrKind,addr1,addr2,addr3)
#define ISymUnmanagedWriter3_DefineField(This,parent,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3)(This)->lpVtbl -> DefineField(This,parent,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3)
#define ISymUnmanagedWriter3_DefineGlobalVariable(This,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3)(This)->lpVtbl -> DefineGlobalVariable(This,name,attributes,cSig,signature,addrKind,addr1,addr2,addr3)
#define ISymUnmanagedWriter3_Close(This)(This)->lpVtbl -> Close(This)
#define ISymUnmanagedWriter3_SetSymAttribute(This,parent,name,cData,data)(This)->lpVtbl -> SetSymAttribute(This,parent,name,cData,data)
#define ISymUnmanagedWriter3_OpenNamespace(This,name)(This)->lpVtbl -> OpenNamespace(This,name)
#define ISymUnmanagedWriter3_CloseNamespace(This)(This)->lpVtbl -> CloseNamespace(This)
#define ISymUnmanagedWriter3_UsingNamespace(This,fullName)(This)->lpVtbl -> UsingNamespace(This,fullName)
#define ISymUnmanagedWriter3_SetMethodSourceRange(This,startDoc,startLine,startColumn,endDoc,endLine,endColumn)(This)->lpVtbl -> SetMethodSourceRange(This,startDoc,startLine,startColumn,endDoc,endLine,endColumn)
#define ISymUnmanagedWriter3_Initialize(This,emitter,filename,pIStream,fFullBuild)(This)->lpVtbl -> Initialize(This,emitter,filename,pIStream,fFullBuild)
#define ISymUnmanagedWriter3_GetDebugInfo(This,pIDD,cData,pcData,data)(This)->lpVtbl -> GetDebugInfo(This,pIDD,cData,pcData,data)
#define ISymUnmanagedWriter3_DefineSequencePoints(This,document,spCount,offsets,lines,columns,endLines,endColumns)(This)->lpVtbl -> DefineSequencePoints(This,document,spCount,offsets,lines,columns,endLines,endColumns)
#define ISymUnmanagedWriter3_RemapToken(This,oldToken,newToken)(This)->lpVtbl -> RemapToken(This,oldToken,newToken)
#define ISymUnmanagedWriter3_Initialize2(This,emitter,tempfilename,pIStream,fFullBuild,finalfilename)(This)->lpVtbl -> Initialize2(This,emitter,tempfilename,pIStream,fFullBuild,finalfilename)
#define ISymUnmanagedWriter3_DefineConstant(This,name,value,cSig,signature)(This)->lpVtbl -> DefineConstant(This,name,value,cSig,signature)
#define ISymUnmanagedWriter3_Abort(This)(This)->lpVtbl -> Abort(This)
#define ISymUnmanagedWriter3_DefineLocalVariable2(This,name,attributes,sigToken,addrKind,addr1,addr2,addr3,startOffset,endOffset)(This)->lpVtbl -> DefineLocalVariable2(This,name,attributes,sigToken,addrKind,addr1,addr2,addr3,startOffset,endOffset)
#define ISymUnmanagedWriter3_DefineGlobalVariable2(This,name,attributes,sigToken,addrKind,addr1,addr2,addr3)(This)->lpVtbl -> DefineGlobalVariable2(This,name,attributes,sigToken,addrKind,addr1,addr2,addr3)
#define ISymUnmanagedWriter3_DefineConstant2(This,name,value,sigToken)(This)->lpVtbl -> DefineConstant2(This,name,value,sigToken)
#define ISymUnmanagedWriter3_OpenMethod2(This,method,isect,offset)(This)->lpVtbl -> OpenMethod2(This,method,isect,offset)
#define ISymUnmanagedWriter3_Commit(This)(This)->lpVtbl -> Commit(This)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter3_OpenMethod2_Proxy(ISymUnmanagedWriter3 *This, mdMethodDef method, ULONG32 isect, ULONG32 offset);
void __RPC_STUB ISymUnmanagedWriter3_OpenMethod2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedWriter3_Commit_Proxy(ISymUnmanagedWriter3 *This);
void __RPC_STUB ISymUnmanagedWriter3_Commit_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymUnmanagedReader2_INTERFACE_DEFINED__
#define __ISymUnmanagedReader2_INTERFACE_DEFINED__
extern const IID IID_ISymUnmanagedReader2;
typedef struct ISymUnmanagedReader2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymUnmanagedReader2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymUnmanagedReader2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymUnmanagedReader2 *This);
	HRESULT(STDMETHODCALLTYPE *GetDocument) (ISymUnmanagedReader2 *This, WCHAR *url, GUID language, GUID languageVendor, GUID documentType, ISymUnmanagedDocument **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetDocuments) (ISymUnmanagedReader2 *This, ULONG32 cDocs, ULONG32 *pcDocs, ISymUnmanagedDocument *pDocs[]);
	HRESULT(STDMETHODCALLTYPE *GetUserEntryPoint) (ISymUnmanagedReader2 *This, mdMethodDef *pToken);
	HRESULT(STDMETHODCALLTYPE *GetMethod) (ISymUnmanagedReader2 *This, mdMethodDef token, ISymUnmanagedMethod **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetMethodByVersion) (ISymUnmanagedReader2 *This, mdMethodDef token, int version, ISymUnmanagedMethod **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetVariables) (ISymUnmanagedReader2 *This, mdToken parent, ULONG32 cVars, ULONG32 *pcVars, ISymUnmanagedVariable *pVars[]);
	HRESULT(STDMETHODCALLTYPE *GetGlobalVariables) (ISymUnmanagedReader2 *This, ULONG32 cVars, ULONG32 *pcVars, ISymUnmanagedVariable *pVars[]);
	HRESULT(STDMETHODCALLTYPE *GetMethodFromDocumentPosition) (ISymUnmanagedReader2 *This, ISymUnmanagedDocument *document, ULONG32 line, ULONG32 column, ISymUnmanagedMethod **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetSymAttribute) (ISymUnmanagedReader2 *This, mdToken parent, WCHAR *name, ULONG32 cBuffer, ULONG32 *pcBuffer, BYTE buffer[]);
	HRESULT(STDMETHODCALLTYPE *GetNamespaces) (ISymUnmanagedReader2 *This, ULONG32 cNameSpaces, ULONG32 *pcNameSpaces, ISymUnmanagedNamespace *namespaces[]);
	HRESULT(STDMETHODCALLTYPE *Initialize) (ISymUnmanagedReader2 *This, IUnknown *importer, const WCHAR *filename, const WCHAR *searchPath, IStream *pIStream);
	HRESULT(STDMETHODCALLTYPE *UpdateSymbolStore) (ISymUnmanagedReader2 *This, const WCHAR *filename, IStream *pIStream);
	HRESULT(STDMETHODCALLTYPE *ReplaceSymbolStore) (ISymUnmanagedReader2 *This, const WCHAR *filename, IStream *pIStream);
	HRESULT(STDMETHODCALLTYPE *GetSymbolStoreFileName) (ISymUnmanagedReader2 *This, ULONG32 cchName, ULONG32 *pcchName, WCHAR szName[]);
	HRESULT(STDMETHODCALLTYPE *GetMethodsFromDocumentPosition) (ISymUnmanagedReader2 *This, ISymUnmanagedDocument *document, ULONG32 line, ULONG32 column, ULONG32 cMethod, ULONG32 *pcMethod, ISymUnmanagedMethod *pRetVal[]);
	HRESULT(STDMETHODCALLTYPE *GetDocumentVersion) (ISymUnmanagedReader2 *This, ISymUnmanagedDocument *pDoc, int *version, BOOL *pbCurrent);
	HRESULT(STDMETHODCALLTYPE *GetMethodVersion) (ISymUnmanagedReader2 *This, ISymUnmanagedMethod *pMethod, int *version);
	HRESULT(STDMETHODCALLTYPE *GetMethodByVersionPreRemap) (ISymUnmanagedReader2 *This, mdMethodDef token, int version, ISymUnmanagedMethod **pRetVal);
	HRESULT(STDMETHODCALLTYPE *GetSymAttributePreRemap) (ISymUnmanagedReader2 *This, mdToken parent, WCHAR *name, ULONG32 cBuffer, ULONG32 *pcBuffer, BYTE buffer[]);
	HRESULT(STDMETHODCALLTYPE *GetMethodsInDocument) (ISymUnmanagedReader2 *This, ISymUnmanagedDocument *document, ULONG32 cMethod, ULONG32 *pcMethod, ISymUnmanagedMethod *pRetVal[]);
	END_INTERFACE
}  ISymUnmanagedReader2Vtbl;
interface ISymUnmanagedReader2
{
	CONST_VTBL struct ISymUnmanagedReader2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymUnmanagedReader2_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISymUnmanagedReader2_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISymUnmanagedReader2_Release(This)(This)->lpVtbl -> Release(This)
#define ISymUnmanagedReader2_GetDocument(This,url,language,languageVendor,documentType,pRetVal)(This)->lpVtbl -> GetDocument(This,url,language,languageVendor,documentType,pRetVal)
#define ISymUnmanagedReader2_GetDocuments(This,cDocs,pcDocs,pDocs)(This)->lpVtbl -> GetDocuments(This,cDocs,pcDocs,pDocs)
#define ISymUnmanagedReader2_GetUserEntryPoint(This,pToken)(This)->lpVtbl -> GetUserEntryPoint(This,pToken)
#define ISymUnmanagedReader2_GetMethod(This,token,pRetVal)(This)->lpVtbl -> GetMethod(This,token,pRetVal)
#define ISymUnmanagedReader2_GetMethodByVersion(This,token,version,pRetVal)(This)->lpVtbl -> GetMethodByVersion(This,token,version,pRetVal)
#define ISymUnmanagedReader2_GetVariables(This,parent,cVars,pcVars,pVars)(This)->lpVtbl -> GetVariables(This,parent,cVars,pcVars,pVars)
#define ISymUnmanagedReader2_GetGlobalVariables(This,cVars,pcVars,pVars)(This)->lpVtbl -> GetGlobalVariables(This,cVars,pcVars,pVars)
#define ISymUnmanagedReader2_GetMethodFromDocumentPosition(This,document,line,column,pRetVal)(This)->lpVtbl -> GetMethodFromDocumentPosition(This,document,line,column,pRetVal)
#define ISymUnmanagedReader2_GetSymAttribute(This,parent,name,cBuffer,pcBuffer,buffer)(This)->lpVtbl -> GetSymAttribute(This,parent,name,cBuffer,pcBuffer,buffer)
#define ISymUnmanagedReader2_GetNamespaces(This,cNameSpaces,pcNameSpaces,namespaces)(This)->lpVtbl -> GetNamespaces(This,cNameSpaces,pcNameSpaces,namespaces)
#define ISymUnmanagedReader2_Initialize(This,importer,filename,searchPath,pIStream)(This)->lpVtbl -> Initialize(This,importer,filename,searchPath,pIStream)
#define ISymUnmanagedReader2_UpdateSymbolStore(This,filename,pIStream)(This)->lpVtbl -> UpdateSymbolStore(This,filename,pIStream)
#define ISymUnmanagedReader2_ReplaceSymbolStore(This,filename,pIStream)(This)->lpVtbl -> ReplaceSymbolStore(This,filename,pIStream)
#define ISymUnmanagedReader2_GetSymbolStoreFileName(This,cchName,pcchName,szName)(This)->lpVtbl -> GetSymbolStoreFileName(This,cchName,pcchName,szName)
#define ISymUnmanagedReader2_GetMethodsFromDocumentPosition(This,document,line,column,cMethod,pcMethod,pRetVal)(This)->lpVtbl -> GetMethodsFromDocumentPosition(This,document,line,column,cMethod,pcMethod,pRetVal)
#define ISymUnmanagedReader2_GetDocumentVersion(This,pDoc,version,pbCurrent)(This)->lpVtbl -> GetDocumentVersion(This,pDoc,version,pbCurrent)
#define ISymUnmanagedReader2_GetMethodVersion(This,pMethod,version)(This)->lpVtbl -> GetMethodVersion(This,pMethod,version)
#define ISymUnmanagedReader2_GetMethodByVersionPreRemap(This,token,version,pRetVal)(This)->lpVtbl -> GetMethodByVersionPreRemap(This,token,version,pRetVal)
#define ISymUnmanagedReader2_GetSymAttributePreRemap(This,parent,name,cBuffer,pcBuffer,buffer)(This)->lpVtbl -> GetSymAttributePreRemap(This,parent,name,cBuffer,pcBuffer,buffer)
#define ISymUnmanagedReader2_GetMethodsInDocument(This,document,cMethod,pcMethod,pRetVal)(This)->lpVtbl -> GetMethodsInDocument(This,document,cMethod,pcMethod,pRetVal)
#endif
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader2_GetMethodByVersionPreRemap_Proxy(ISymUnmanagedReader2 *This, mdMethodDef token, int version, ISymUnmanagedMethod **pRetVal);
void __RPC_STUB ISymUnmanagedReader2_GetMethodByVersionPreRemap_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader2_GetSymAttributePreRemap_Proxy(ISymUnmanagedReader2 *This, mdToken parent, WCHAR *name, ULONG32 cBuffer, ULONG32 *pcBuffer, BYTE buffer[]);
void __RPC_STUB ISymUnmanagedReader2_GetSymAttributePreRemap_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISymUnmanagedReader2_GetMethodsInDocument_Proxy(ISymUnmanagedReader2 *This, ISymUnmanagedDocument *document, ULONG32 cMethod, ULONG32 *pcMethod, ISymUnmanagedMethod *pRetVal[]);
void __RPC_STUB ISymUnmanagedReader2_GetMethodsInDocument_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISymNGenWriter_INTERFACE_DEFINED__
#define __ISymNGenWriter_INTERFACE_DEFINED__
extern const IID IID_ISymNGenWriter;
typedef struct ISymNGenWriterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISymNGenWriter *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISymNGenWriter *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISymNGenWriter *This);
	HRESULT(STDMETHODCALLTYPE *AddSymbol) (ISymNGenWriter *This, BSTR pSymbol, USHORT iSection, ULONGLONG rva);
	HRESULT(STDMETHODCALLTYPE *AddSection) (ISymNGenWriter *This, USHORT iSection, USHORT flags, long offset, long cb);
	END_INTERFACE
}  ISymNGenWriterVtbl;
interface ISymNGenWriter
{
	CONST_VTBL struct ISymNGenWriterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISymNGenWriter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISymNGenWriter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISymNGenWriter_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISymNGenWriter_AddSymbol(This,pSymbol,iSection,rva)( (This)->lpVtbl -> AddSymbol(This,pSymbol,iSection,rva) )
#define ISymNGenWriter_AddSection(This,iSection,flags,offset,cb)( (This)->lpVtbl -> AddSection(This,iSection,flags,offset,cb) )
#endif
#endif
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
#endif
