/*+@@file@@----------------------------------------------------------------*//*!
 \file		msrdc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 22:58:29 2016
 \date		Modified on Sun Aug 14 22:58:29 2016
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
#ifndef __msrdc_h__
#define __msrdc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IRdcGeneratorParameters_FWD_DEFINED__
#define __IRdcGeneratorParameters_FWD_DEFINED__
typedef interface IRdcGeneratorParameters IRdcGeneratorParameters;
#endif
#ifndef __IRdcGeneratorFilterMaxParameters_FWD_DEFINED__
#define __IRdcGeneratorFilterMaxParameters_FWD_DEFINED__
typedef interface IRdcGeneratorFilterMaxParameters IRdcGeneratorFilterMaxParameters;
#endif
#ifndef __IRdcGenerator_FWD_DEFINED__
#define __IRdcGenerator_FWD_DEFINED__
typedef interface IRdcGenerator IRdcGenerator;
#endif
#ifndef __IRdcFileReader_FWD_DEFINED__
#define __IRdcFileReader_FWD_DEFINED__
typedef interface IRdcFileReader IRdcFileReader;
#endif
#ifndef __IRdcFileWriter_FWD_DEFINED__
#define __IRdcFileWriter_FWD_DEFINED__
typedef interface IRdcFileWriter IRdcFileWriter;
#endif
#ifndef __IRdcSignatureReader_FWD_DEFINED__
#define __IRdcSignatureReader_FWD_DEFINED__
typedef interface IRdcSignatureReader IRdcSignatureReader;
#endif
#ifndef __IRdcComparator_FWD_DEFINED__
#define __IRdcComparator_FWD_DEFINED__
typedef interface IRdcComparator IRdcComparator;
#endif
#ifndef __IRdcLibrary_FWD_DEFINED__
#define __IRdcLibrary_FWD_DEFINED__
typedef interface IRdcLibrary IRdcLibrary;
#endif
#ifndef __ISimilarityReportProgress_FWD_DEFINED__
#define __ISimilarityReportProgress_FWD_DEFINED__
typedef interface ISimilarityReportProgress ISimilarityReportProgress;
#endif
#ifndef __ISimilarityTableDumpState_FWD_DEFINED__
#define __ISimilarityTableDumpState_FWD_DEFINED__
typedef interface ISimilarityTableDumpState ISimilarityTableDumpState;
#endif
#ifndef __ISimilarityTraitsMappedView_FWD_DEFINED__
#define __ISimilarityTraitsMappedView_FWD_DEFINED__
typedef interface ISimilarityTraitsMappedView ISimilarityTraitsMappedView;
#endif
#ifndef __ISimilarityTraitsMapping_FWD_DEFINED__
#define __ISimilarityTraitsMapping_FWD_DEFINED__
typedef interface ISimilarityTraitsMapping ISimilarityTraitsMapping;
#endif
#ifndef __ISimilarityTraitsTable_FWD_DEFINED__
#define __ISimilarityTraitsTable_FWD_DEFINED__
typedef interface ISimilarityTraitsTable ISimilarityTraitsTable;
#endif
#ifndef __ISimilarityFileIdTable_FWD_DEFINED__
#define __ISimilarityFileIdTable_FWD_DEFINED__
typedef interface ISimilarityFileIdTable ISimilarityFileIdTable;
#endif
#ifndef __IRdcSimilarityGenerator_FWD_DEFINED__
#define __IRdcSimilarityGenerator_FWD_DEFINED__
typedef interface IRdcSimilarityGenerator IRdcSimilarityGenerator;
#endif
#ifndef __IFindSimilarResults_FWD_DEFINED__
#define __IFindSimilarResults_FWD_DEFINED__
typedef interface IFindSimilarResults IFindSimilarResults;
#endif
#ifndef __ISimilarity_FWD_DEFINED__
#define __ISimilarity_FWD_DEFINED__
typedef interface ISimilarity ISimilarity;
#endif
#ifndef __RdcLibrary_FWD_DEFINED__
#define __RdcLibrary_FWD_DEFINED__
typedef struct RdcLibrary RdcLibrary;
#endif
#ifndef __RdcGeneratorParameters_FWD_DEFINED__
#define __RdcGeneratorParameters_FWD_DEFINED__
typedef struct RdcGeneratorParameters RdcGeneratorParameters;
#endif
#ifndef __RdcGeneratorFilterMaxParameters_FWD_DEFINED__
#define __RdcGeneratorFilterMaxParameters_FWD_DEFINED__
typedef struct RdcGeneratorFilterMaxParameters RdcGeneratorFilterMaxParameters;
#endif
#ifndef __RdcGenerator_FWD_DEFINED__
#define __RdcGenerator_FWD_DEFINED__
typedef struct RdcGenerator RdcGenerator;
#endif
#ifndef __RdcFileReader_FWD_DEFINED__
#define __RdcFileReader_FWD_DEFINED__
typedef struct RdcFileReader RdcFileReader;
#endif
#ifndef __RdcSignatureReader_FWD_DEFINED__
#define __RdcSignatureReader_FWD_DEFINED__
typedef struct RdcSignatureReader RdcSignatureReader;
#endif
#ifndef __RdcComparator_FWD_DEFINED__
#define __RdcComparator_FWD_DEFINED__
typedef struct RdcComparator RdcComparator;
#endif
#ifndef __SimilarityReportProgress_FWD_DEFINED__
#define __SimilarityReportProgress_FWD_DEFINED__
typedef struct SimilarityReportProgress SimilarityReportProgress;
#endif
#ifndef __SimilarityTableDumpState_FWD_DEFINED__
#define __SimilarityTableDumpState_FWD_DEFINED__
typedef struct SimilarityTableDumpState SimilarityTableDumpState;
#endif
#ifndef __SimilarityTraitsTable_FWD_DEFINED__
#define __SimilarityTraitsTable_FWD_DEFINED__
typedef struct SimilarityTraitsTable SimilarityTraitsTable;
#endif
#ifndef __SimilarityFileIdTable_FWD_DEFINED__
#define __SimilarityFileIdTable_FWD_DEFINED__
typedef struct SimilarityFileIdTable SimilarityFileIdTable;
#endif
#ifndef __Similarity_FWD_DEFINED__
#define __Similarity_FWD_DEFINED__
typedef struct Similarity Similarity;
#endif
#ifndef __RdcSimilarityGenerator_FWD_DEFINED__
#define __RdcSimilarityGenerator_FWD_DEFINED__
typedef struct RdcSimilarityGenerator RdcSimilarityGenerator;
#endif
#ifndef __FindSimilarResults_FWD_DEFINED__
#define __FindSimilarResults_FWD_DEFINED__
typedef struct FindSimilarResults FindSimilarResults;
#endif
#ifndef __SimilarityTraitsMapping_FWD_DEFINED__
#define __SimilarityTraitsMapping_FWD_DEFINED__
typedef struct SimilarityTraitsMapping SimilarityTraitsMapping;
#endif
#ifndef __SimilarityTraitsMappedView_FWD_DEFINED__
#define __SimilarityTraitsMappedView_FWD_DEFINED__
typedef struct SimilarityTraitsMappedView SimilarityTraitsMappedView;
#endif
#include "oaidl.h"
#include "ocidl.h"
#define	RDCE_TABLE_FULL	( 0x80040001 )
#define	RDCE_TABLE_CORRUPT	( 0x80040002 )
#pragma warning( disable: 4100 )
#pragma warning( disable: 4152 )
const ULONG MSRDC_VERSION = 0x010000;
const ULONG MSRDC_MINIMUM_COMPATIBLE_APP_VERSION = 0x010000;
const ULONG MSRDC_MINIMUM_DEPTH = 1;
const ULONG MSRDC_MAXIMUM_DEPTH = 8;
const ULONG MSRDC_MINIMUM_COMPAREBUFFER = 100000;
const ULONG MSRDC_MAXIMUM_COMPAREBUFFER = (1 << 30);
const ULONG MSRDC_DEFAULT_COMPAREBUFFER = 3200000;
const ULONG MSRDC_MINIMUM_INPUTBUFFERSIZE = 1024;
#define	MSRDC_SIGNATURE_HASHSIZE	( 16 )
const ULONG MSRDC_MINIMUM_HORIZONSIZE = 128;
const ULONG MSRDC_MAXIMUM_HORIZONSIZE = 1024 * 16;
const ULONG MSRDC_MINIMUM_HASHWINDOWSIZE = 2;
const ULONG MSRDC_MAXIMUM_HASHWINDOWSIZE = 96;
const ULONG MSRDC_DEFAULT_HASHWINDOWSIZE_1 = 48;
const ULONG MSRDC_DEFAULT_HORIZONSIZE_1 = 1024;
const ULONG MSRDC_DEFAULT_HASHWINDOWSIZE_N = 2;
const ULONG MSRDC_DEFAULT_HORIZONSIZE_N = 128;
const ULONG MSRDC_MAXIMUM_TRAITVALUE = 63;
const ULONG MSRDC_MINIMUM_MATCHESREQUIRED = 1;
const ULONG MSRDC_MAXIMUM_MATCHESREQUIRED = 16;
typedef enum __MIDL___MIDL_itf_msrdc_0000_0000_0001
{
	RDC_NoError = 0,
	RDC_HeaderVersionNewer = (RDC_NoError + 1),
	RDC_HeaderVersionOlder = (RDC_HeaderVersionNewer + 1),
	RDC_HeaderMissingOrCorrupt = (RDC_HeaderVersionOlder + 1),
	RDC_HeaderWrongType = (RDC_HeaderMissingOrCorrupt + 1),
	RDC_DataMissingOrCorrupt = (RDC_HeaderWrongType + 1),
	RDC_DataTooManyRecords = (RDC_DataMissingOrCorrupt + 1),
	RDC_FileChecksumMismatch = (RDC_DataTooManyRecords + 1),
	RDC_ApplicationError = (RDC_FileChecksumMismatch + 1),
	RDC_Aborted = (RDC_ApplicationError + 1),
	RDC_Win32Error = (RDC_Aborted + 1)
} RDC_ErrorCode;
typedef enum __MIDL___MIDL_itf_msrdc_0000_0000_0002
{
	RDCGENTYPE_Unused = 0,
	RDCGENTYPE_FilterMax = (RDCGENTYPE_Unused + 1)
} GeneratorParametersType;
typedef enum __MIDL___MIDL_itf_msrdc_0000_0000_0003
{
	RDCNEED_SOURCE = 0,
	RDCNEED_TARGET = 1,
	RDCNEED_SEED = 2,
	RDCNEED_SEED_MAX = 255
} RdcNeedType;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0004
{
	RdcNeedType m_BlockType;
	unsigned __int64 m_FileOffset;
	unsigned __int64 m_BlockLength;
} RdcNeed;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0005
{
	ULONG m_Size;
	ULONG m_Used;
	BYTE *m_Data;
} RdcBufferPointer;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0006
{
	ULONG m_Size;
	ULONG m_Used;
	RdcNeed *m_Data;
} RdcNeedPointer;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0007
{
	BYTE m_Signature[16];
	USHORT m_BlockLength;
} RdcSignature;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0008
{
	ULONG m_Size;
	ULONG m_Used;
	RdcSignature *m_Data;
} RdcSignaturePointer;
typedef unsigned int SimilarityFileIndexT;
typedef enum __MIDL___MIDL_itf_msrdc_0000_0000_0009
{
	RDCTABLE_InvalidOrUnknown = 0,
	RDCTABLE_Existing = (RDCTABLE_InvalidOrUnknown + 1),
	RDCTABLE_New = (RDCTABLE_Existing + 1)
} RdcCreatedTables;
typedef enum __MIDL___MIDL_itf_msrdc_0000_0000_0010
{
	RDCMAPPING_Undefined = 0,
	RDCMAPPING_ReadOnly = (RDCMAPPING_Undefined + 1),
	RDCMAPPING_ReadWrite = (RDCMAPPING_ReadOnly + 1)
} RdcMappingAccessMode;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0011
{
	unsigned char *m_Data;
	DWORD m_Length;
} SimilarityMappedViewInfo;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0012
{
	unsigned char m_Data[16];
} SimilarityData;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0013
{
	SimilarityFileIndexT m_FileIndex;
	unsigned int m_MatchCount;
} FindSimilarFileIndexResults;
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0014
{
	SimilarityFileIndexT m_FileIndex;
	SimilarityData m_Data;
} SimilarityDumpData;
#define	SimilarityFileIdMinSize	( 4 )
#define	SimilarityFileIdMaxSize	( 32 )
typedef struct __MIDL___MIDL_itf_msrdc_0000_0000_0015
{
	byte m_FileId[32];
} SimilarityFileId;
extern RPC_IF_HANDLE __MIDL_itf_msrdc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msrdc_0000_0000_v0_0_s_ifspec;
#ifndef __IRdcGeneratorParameters_INTERFACE_DEFINED__
#define __IRdcGeneratorParameters_INTERFACE_DEFINED__
extern const IID IID_IRdcGeneratorParameters;
typedef struct IRdcGeneratorParametersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRdcGeneratorParameters * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRdcGeneratorParameters * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRdcGeneratorParameters * This);
	HRESULT(STDMETHODCALLTYPE * GetGeneratorParametersType) (IRdcGeneratorParameters * This, GeneratorParametersType * parametersType);
	HRESULT(STDMETHODCALLTYPE * GetParametersVersion) (IRdcGeneratorParameters * This, ULONG * currentVersion, ULONG * minimumCompatibleAppVersion);
	HRESULT(STDMETHODCALLTYPE * GetSerializeSize) (IRdcGeneratorParameters * This, ULONG * size);
	HRESULT(STDMETHODCALLTYPE * Serialize) (IRdcGeneratorParameters * This, ULONG size, BYTE * parametersBlob, ULONG * bytesWritten);
	END_INTERFACE
}  IRdcGeneratorParametersVtbl;
interface IRdcGeneratorParameters
{
	CONST_VTBL struct IRdcGeneratorParametersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRdcGeneratorParameters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRdcGeneratorParameters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRdcGeneratorParameters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRdcGeneratorParameters_GetGeneratorParametersType(This,parametersType) ( (This)->lpVtbl -> GetGeneratorParametersType(This,parametersType) )
#define IRdcGeneratorParameters_GetParametersVersion(This,currentVersion,minimumCompatibleAppVersion) ( (This)->lpVtbl -> GetParametersVersion(This,currentVersion,minimumCompatibleAppVersion) )
#define IRdcGeneratorParameters_GetSerializeSize(This,size) ( (This)->lpVtbl -> GetSerializeSize(This,size) )
#define IRdcGeneratorParameters_Serialize(This,size,parametersBlob,bytesWritten) ( (This)->lpVtbl -> Serialize(This,size,parametersBlob,bytesWritten) )
#endif
#endif
#ifndef __IRdcGeneratorFilterMaxParameters_INTERFACE_DEFINED__
#define __IRdcGeneratorFilterMaxParameters_INTERFACE_DEFINED__
extern const IID IID_IRdcGeneratorFilterMaxParameters;
typedef struct IRdcGeneratorFilterMaxParametersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRdcGeneratorFilterMaxParameters * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRdcGeneratorFilterMaxParameters * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRdcGeneratorFilterMaxParameters * This);
	HRESULT(STDMETHODCALLTYPE * GetHorizonSize) (IRdcGeneratorFilterMaxParameters * This, ULONG * horizonSize);
	HRESULT(STDMETHODCALLTYPE * SetHorizonSize) (IRdcGeneratorFilterMaxParameters * This, ULONG horizonSize);
	HRESULT(STDMETHODCALLTYPE * GetHashWindowSize) (IRdcGeneratorFilterMaxParameters * This, ULONG * hashWindowSize);
	HRESULT(STDMETHODCALLTYPE * SetHashWindowSize) (IRdcGeneratorFilterMaxParameters * This, ULONG hashWindowSize);
END_INTERFACE
}  IRdcGeneratorFilterMaxParametersVtbl;
interface IRdcGeneratorFilterMaxParameters
{
	CONST_VTBL struct IRdcGeneratorFilterMaxParametersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRdcGeneratorFilterMaxParameters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRdcGeneratorFilterMaxParameters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRdcGeneratorFilterMaxParameters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRdcGeneratorFilterMaxParameters_GetHorizonSize(This,horizonSize) ( (This)->lpVtbl -> GetHorizonSize(This,horizonSize) )
#define IRdcGeneratorFilterMaxParameters_SetHorizonSize(This,horizonSize) ( (This)->lpVtbl -> SetHorizonSize(This,horizonSize) )
#define IRdcGeneratorFilterMaxParameters_GetHashWindowSize(This,hashWindowSize) ( (This)->lpVtbl -> GetHashWindowSize(This,hashWindowSize) )
#define IRdcGeneratorFilterMaxParameters_SetHashWindowSize(This,hashWindowSize) ( (This)->lpVtbl -> SetHashWindowSize(This,hashWindowSize) )
#endif
#endif
#ifndef __IRdcGenerator_INTERFACE_DEFINED__
#define __IRdcGenerator_INTERFACE_DEFINED__
extern const IID IID_IRdcGenerator;
typedef struct IRdcGeneratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRdcGenerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRdcGenerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRdcGenerator * This);
	HRESULT(STDMETHODCALLTYPE * GetGeneratorParameters) (IRdcGenerator * This, ULONG level, IRdcGeneratorParameters ** iGeneratorParameters);
	HRESULT(STDMETHODCALLTYPE * Process) (IRdcGenerator * This, BOOL endOfInput, BOOL * endOfOutput, RdcBufferPointer * inputBuffer, ULONG depth, RdcBufferPointer * outputBuffers[], RDC_ErrorCode * rdc_ErrorCode);
	END_INTERFACE
}  IRdcGeneratorVtbl;
interface IRdcGenerator
{
	CONST_VTBL struct IRdcGeneratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRdcGenerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRdcGenerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRdcGenerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRdcGenerator_GetGeneratorParameters(This,level,iGeneratorParameters) ( (This)->lpVtbl -> GetGeneratorParameters(This,level,iGeneratorParameters) )
#define IRdcGenerator_Process(This,endOfInput,endOfOutput,inputBuffer,depth,outputBuffers,rdc_ErrorCode) ( (This)->lpVtbl -> Process(This,endOfInput,endOfOutput,inputBuffer,depth,outputBuffers,rdc_ErrorCode) )
#endif
#endif
#ifndef __IRdcFileReader_INTERFACE_DEFINED__
#define __IRdcFileReader_INTERFACE_DEFINED__
extern const IID IID_IRdcFileReader;
typedef struct IRdcFileReaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRdcFileReader * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRdcFileReader * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRdcFileReader * This);
	HRESULT(STDMETHODCALLTYPE * GetFileSize) (IRdcFileReader * This, ULONGLONG * fileSize);
	HRESULT(STDMETHODCALLTYPE * Read) (IRdcFileReader * This, ULONGLONG offsetFileStart, ULONG bytesToRead, ULONG * bytesActuallyRead, BYTE * buffer, BOOL * eof);
	HRESULT(STDMETHODCALLTYPE * GetFilePosition) (IRdcFileReader * This, ULONGLONG * offsetFromStart);
	END_INTERFACE
}  IRdcFileReaderVtbl;
interface IRdcFileReader
{
	CONST_VTBL struct IRdcFileReaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRdcFileReader_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRdcFileReader_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRdcFileReader_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRdcFileReader_GetFileSize(This,fileSize) ( (This)->lpVtbl -> GetFileSize(This,fileSize) )
#define IRdcFileReader_Read(This,offsetFileStart,bytesToRead,bytesActuallyRead,buffer,eof) ( (This)->lpVtbl -> Read(This,offsetFileStart,bytesToRead,bytesActuallyRead,buffer,eof) )
#define IRdcFileReader_GetFilePosition(This,offsetFromStart) ( (This)->lpVtbl -> GetFilePosition(This,offsetFromStart) )
#endif
#endif
#ifndef __IRdcFileWriter_INTERFACE_DEFINED__
#define __IRdcFileWriter_INTERFACE_DEFINED__
extern const IID IID_IRdcFileWriter;
typedef struct IRdcFileWriterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRdcFileWriter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRdcFileWriter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRdcFileWriter * This);
	HRESULT(STDMETHODCALLTYPE * GetFileSize) (IRdcFileWriter * This, ULONGLONG * fileSize);
	HRESULT(STDMETHODCALLTYPE * Read) (IRdcFileWriter * This, ULONGLONG offsetFileStart, ULONG bytesToRead, ULONG * bytesActuallyRead, BYTE * buffer, BOOL * eof);
	HRESULT(STDMETHODCALLTYPE * GetFilePosition) (IRdcFileWriter * This, ULONGLONG * offsetFromStart);
	HRESULT(STDMETHODCALLTYPE * Write) (IRdcFileWriter * This, ULONGLONG offsetFileStart, ULONG bytesToWrite, BYTE * buffer);
	HRESULT(STDMETHODCALLTYPE * Truncate) (IRdcFileWriter * This);
	HRESULT(STDMETHODCALLTYPE * DeleteOnClose) (IRdcFileWriter * This);
	END_INTERFACE
}  IRdcFileWriterVtbl;
interface IRdcFileWriter
{
	CONST_VTBL struct IRdcFileWriterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRdcFileWriter_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRdcFileWriter_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRdcFileWriter_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRdcFileWriter_GetFileSize(This,fileSize) ( (This)->lpVtbl -> GetFileSize(This,fileSize) )
#define IRdcFileWriter_Read(This,offsetFileStart,bytesToRead,bytesActuallyRead,buffer,eof) ( (This)->lpVtbl -> Read(This,offsetFileStart,bytesToRead,bytesActuallyRead,buffer,eof) )
#define IRdcFileWriter_GetFilePosition(This,offsetFromStart) ( (This)->lpVtbl -> GetFilePosition(This,offsetFromStart) )
#define IRdcFileWriter_Write(This,offsetFileStart,bytesToWrite,buffer) ( (This)->lpVtbl -> Write(This,offsetFileStart,bytesToWrite,buffer) )
#define IRdcFileWriter_Truncate(This) ( (This)->lpVtbl -> Truncate(This) )
#define IRdcFileWriter_DeleteOnClose(This) ( (This)->lpVtbl -> DeleteOnClose(This) )
#endif
#endif
#ifndef __IRdcSignatureReader_INTERFACE_DEFINED__
#define __IRdcSignatureReader_INTERFACE_DEFINED__
extern const IID IID_IRdcSignatureReader;
typedef struct IRdcSignatureReaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRdcSignatureReader * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRdcSignatureReader * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRdcSignatureReader * This);
	HRESULT(STDMETHODCALLTYPE * ReadHeader) (IRdcSignatureReader * This, RDC_ErrorCode * rdc_ErrorCode);
	HRESULT(STDMETHODCALLTYPE * ReadSignatures) (IRdcSignatureReader * This, RdcSignaturePointer * rdcSignaturePointer, BOOL * endOfOutput);
	END_INTERFACE
}  IRdcSignatureReaderVtbl;
interface IRdcSignatureReader
{
	CONST_VTBL struct IRdcSignatureReaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRdcSignatureReader_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRdcSignatureReader_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRdcSignatureReader_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRdcSignatureReader_ReadHeader(This,rdc_ErrorCode) ( (This)->lpVtbl -> ReadHeader(This,rdc_ErrorCode) )
#define IRdcSignatureReader_ReadSignatures(This,rdcSignaturePointer,endOfOutput) ( (This)->lpVtbl -> ReadSignatures(This,rdcSignaturePointer,endOfOutput) )
#endif
#endif
#ifndef __IRdcComparator_INTERFACE_DEFINED__
#define __IRdcComparator_INTERFACE_DEFINED__
extern const IID IID_IRdcComparator;
typedef struct IRdcComparatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRdcComparator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRdcComparator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRdcComparator * This);
	HRESULT(STDMETHODCALLTYPE * Process) (IRdcComparator * This, BOOL endOfInput, BOOL * endOfOutput, RdcBufferPointer * inputBuffer, RdcNeedPointer * outputBuffer, RDC_ErrorCode * rdc_ErrorCode);
	END_INTERFACE
}  IRdcComparatorVtbl;
interface IRdcComparator
{
	CONST_VTBL struct IRdcComparatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRdcComparator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRdcComparator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRdcComparator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRdcComparator_Process(This,endOfInput,endOfOutput,inputBuffer,outputBuffer,rdc_ErrorCode) ( (This)->lpVtbl -> Process(This,endOfInput,endOfOutput,inputBuffer,outputBuffer,rdc_ErrorCode) )
#endif
#endif
#ifndef __IRdcLibrary_INTERFACE_DEFINED__
#define __IRdcLibrary_INTERFACE_DEFINED__
extern const IID IID_IRdcLibrary;
typedef struct IRdcLibraryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRdcLibrary * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRdcLibrary * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRdcLibrary * This);
	HRESULT(STDMETHODCALLTYPE * ComputeDefaultRecursionDepth) (IRdcLibrary * This, ULONGLONG fileSize, ULONG * depth);
	HRESULT(STDMETHODCALLTYPE * CreateGeneratorParameters) (IRdcLibrary * This, GeneratorParametersType parametersType, ULONG level, IRdcGeneratorParameters ** iGeneratorParameters);
	HRESULT(STDMETHODCALLTYPE * OpenGeneratorParameters) (IRdcLibrary * This, ULONG size, const BYTE * parametersBlob, IRdcGeneratorParameters ** iGeneratorParameters);
	HRESULT(STDMETHODCALLTYPE * CreateGenerator) (IRdcLibrary * This, ULONG depth, IRdcGeneratorParameters * iGeneratorParametersArray[], IRdcGenerator ** iGenerator);
	HRESULT(STDMETHODCALLTYPE * CreateComparator) (IRdcLibrary * This, IRdcFileReader * iSeedSignaturesFile, ULONG comparatorBufferSize, IRdcComparator ** iComparator);
	HRESULT(STDMETHODCALLTYPE * CreateSignatureReader) (IRdcLibrary * This, IRdcFileReader * iFileReader, IRdcSignatureReader ** iSignatureReader);
	HRESULT(STDMETHODCALLTYPE * GetRDCVersion) (IRdcLibrary * This, ULONG * currentVersion, ULONG * minimumCompatibleAppVersion);
	END_INTERFACE
}  IRdcLibraryVtbl;
interface IRdcLibrary
{
	CONST_VTBL struct IRdcLibraryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRdcLibrary_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRdcLibrary_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRdcLibrary_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRdcLibrary_ComputeDefaultRecursionDepth(This,fileSize,depth) ( (This)->lpVtbl -> ComputeDefaultRecursionDepth(This,fileSize,depth) )
#define IRdcLibrary_CreateGeneratorParameters(This,parametersType,level,iGeneratorParameters) ( (This)->lpVtbl -> CreateGeneratorParameters(This,parametersType,level,iGeneratorParameters) )
#define IRdcLibrary_OpenGeneratorParameters(This,size,parametersBlob,iGeneratorParameters) ( (This)->lpVtbl -> OpenGeneratorParameters(This,size,parametersBlob,iGeneratorParameters) )
#define IRdcLibrary_CreateGenerator(This,depth,iGeneratorParametersArray,iGenerator) ( (This)->lpVtbl -> CreateGenerator(This,depth,iGeneratorParametersArray,iGenerator) )
#define IRdcLibrary_CreateComparator(This,iSeedSignaturesFile,comparatorBufferSize,iComparator) ( (This)->lpVtbl -> CreateComparator(This,iSeedSignaturesFile,comparatorBufferSize,iComparator) )
#define IRdcLibrary_CreateSignatureReader(This,iFileReader,iSignatureReader) ( (This)->lpVtbl -> CreateSignatureReader(This,iFileReader,iSignatureReader) )
#define IRdcLibrary_GetRDCVersion(This,currentVersion,minimumCompatibleAppVersion) ( (This)->lpVtbl -> GetRDCVersion(This,currentVersion,minimumCompatibleAppVersion) )
#endif
#endif
#ifndef __ISimilarityReportProgress_INTERFACE_DEFINED__
#define __ISimilarityReportProgress_INTERFACE_DEFINED__
extern const IID IID_ISimilarityReportProgress;
typedef struct ISimilarityReportProgressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISimilarityReportProgress * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISimilarityReportProgress * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISimilarityReportProgress * This);
	HRESULT(STDMETHODCALLTYPE * ReportProgress) (ISimilarityReportProgress * This, DWORD percentCompleted);
	END_INTERFACE
}  ISimilarityReportProgressVtbl;
interface ISimilarityReportProgress
{
	CONST_VTBL struct ISimilarityReportProgressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISimilarityReportProgress_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISimilarityReportProgress_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISimilarityReportProgress_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISimilarityReportProgress_ReportProgress(This,percentCompleted) ( (This)->lpVtbl -> ReportProgress(This,percentCompleted) )
#endif
#endif
#ifndef __ISimilarityTableDumpState_INTERFACE_DEFINED__
#define __ISimilarityTableDumpState_INTERFACE_DEFINED__
extern const IID IID_ISimilarityTableDumpState;
typedef struct ISimilarityTableDumpStateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISimilarityTableDumpState * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISimilarityTableDumpState * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISimilarityTableDumpState * This);
	HRESULT(STDMETHODCALLTYPE * GetNextData) (ISimilarityTableDumpState * This, DWORD resultsSize, DWORD * resultsUsed, BOOL * eof, SimilarityDumpData * results);
	END_INTERFACE
}  ISimilarityTableDumpStateVtbl;
interface ISimilarityTableDumpState
{
	CONST_VTBL struct ISimilarityTableDumpStateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISimilarityTableDumpState_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISimilarityTableDumpState_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISimilarityTableDumpState_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISimilarityTableDumpState_GetNextData(This,resultsSize,resultsUsed,eof,results) ( (This)->lpVtbl -> GetNextData(This,resultsSize,resultsUsed,eof,results) )
#endif
#endif
#ifndef __ISimilarityTraitsMappedView_INTERFACE_DEFINED__
#define __ISimilarityTraitsMappedView_INTERFACE_DEFINED__
extern const IID IID_ISimilarityTraitsMappedView;
typedef struct ISimilarityTraitsMappedViewVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISimilarityTraitsMappedView * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISimilarityTraitsMappedView * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISimilarityTraitsMappedView * This);
	HRESULT(STDMETHODCALLTYPE * Flush) (ISimilarityTraitsMappedView * This);
	HRESULT(STDMETHODCALLTYPE * Unmap) (ISimilarityTraitsMappedView * This);
	HRESULT(STDMETHODCALLTYPE * Get) (ISimilarityTraitsMappedView * This, unsigned __int64 index, BOOL dirty, DWORD numElements, SimilarityMappedViewInfo * viewInfo);
	void (STDMETHODCALLTYPE * GetView) (ISimilarityTraitsMappedView * This, const unsigned char **mappedPageBegin, const unsigned char **mappedPageEnd);
	END_INTERFACE
}  ISimilarityTraitsMappedViewVtbl;
interface ISimilarityTraitsMappedView
{
	CONST_VTBL struct ISimilarityTraitsMappedViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISimilarityTraitsMappedView_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISimilarityTraitsMappedView_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISimilarityTraitsMappedView_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISimilarityTraitsMappedView_Flush(This) ( (This)->lpVtbl -> Flush(This) )
#define ISimilarityTraitsMappedView_Unmap(This) ( (This)->lpVtbl -> Unmap(This) )
#define ISimilarityTraitsMappedView_Get(This,index,dirty,numElements,viewInfo) ( (This)->lpVtbl -> Get(This,index,dirty,numElements,viewInfo) )
#define ISimilarityTraitsMappedView_GetView(This,mappedPageBegin,mappedPageEnd) ( (This)->lpVtbl -> GetView(This,mappedPageBegin,mappedPageEnd) )
#endif
#endif
#ifndef __ISimilarityTraitsMapping_INTERFACE_DEFINED__
#define __ISimilarityTraitsMapping_INTERFACE_DEFINED__
extern const IID IID_ISimilarityTraitsMapping;
typedef struct ISimilarityTraitsMappingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISimilarityTraitsMapping * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISimilarityTraitsMapping * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISimilarityTraitsMapping * This);
	void (STDMETHODCALLTYPE * CloseMapping) (ISimilarityTraitsMapping * This);
	HRESULT(STDMETHODCALLTYPE * SetFileSize) (ISimilarityTraitsMapping * This, unsigned __int64 fileSize);
	HRESULT(STDMETHODCALLTYPE * GetFileSize) (ISimilarityTraitsMapping * This, unsigned __int64 * fileSize);
	HRESULT(STDMETHODCALLTYPE * OpenMapping) (ISimilarityTraitsMapping * This, RdcMappingAccessMode accessMode, unsigned __int64 begin, unsigned __int64 end, unsigned __int64 * actualEnd);
	HRESULT(STDMETHODCALLTYPE * ResizeMapping) (ISimilarityTraitsMapping * This, RdcMappingAccessMode accessMode, unsigned __int64 begin, unsigned __int64 end, unsigned __int64 * actualEnd);
	void (STDMETHODCALLTYPE * GetPageSize) (ISimilarityTraitsMapping * This, DWORD * pageSize);
	HRESULT(STDMETHODCALLTYPE * CreateView) (ISimilarityTraitsMapping * This, DWORD minimumMappedPages, RdcMappingAccessMode accessMode, ISimilarityTraitsMappedView ** mappedView);
	END_INTERFACE
}  ISimilarityTraitsMappingVtbl;
interface ISimilarityTraitsMapping
{
	CONST_VTBL struct ISimilarityTraitsMappingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISimilarityTraitsMapping_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISimilarityTraitsMapping_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISimilarityTraitsMapping_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISimilarityTraitsMapping_CloseMapping(This) ( (This)->lpVtbl -> CloseMapping(This) )
#define ISimilarityTraitsMapping_SetFileSize(This,fileSize) ( (This)->lpVtbl -> SetFileSize(This,fileSize) )
#define ISimilarityTraitsMapping_GetFileSize(This,fileSize) ( (This)->lpVtbl -> GetFileSize(This,fileSize) )
#define ISimilarityTraitsMapping_OpenMapping(This,accessMode,begin,end,actualEnd) ( (This)->lpVtbl -> OpenMapping(This,accessMode,begin,end,actualEnd) )
#define ISimilarityTraitsMapping_ResizeMapping(This,accessMode,begin,end,actualEnd) ( (This)->lpVtbl -> ResizeMapping(This,accessMode,begin,end,actualEnd) )
#define ISimilarityTraitsMapping_GetPageSize(This,pageSize) ( (This)->lpVtbl -> GetPageSize(This,pageSize) )
#define ISimilarityTraitsMapping_CreateView(This,minimumMappedPages,accessMode,mappedView) ( (This)->lpVtbl -> CreateView(This,minimumMappedPages,accessMode,mappedView) )
#endif
#endif
#ifndef __ISimilarityTraitsTable_INTERFACE_DEFINED__
#define __ISimilarityTraitsTable_INTERFACE_DEFINED__
extern const IID IID_ISimilarityTraitsTable;
typedef struct ISimilarityTraitsTableVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISimilarityTraitsTable * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISimilarityTraitsTable * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISimilarityTraitsTable * This);
	HRESULT(STDMETHODCALLTYPE * CreateTable) (ISimilarityTraitsTable * This, wchar_t * path, BOOL truncate, BYTE * securityDescriptor, RdcCreatedTables * isNew);
	HRESULT(STDMETHODCALLTYPE * CreateTableIndirect) (ISimilarityTraitsTable * This, ISimilarityTraitsMapping * mapping, BOOL truncate, RdcCreatedTables * isNew);
	HRESULT(STDMETHODCALLTYPE * CloseTable) (ISimilarityTraitsTable * This, BOOL isValid);
	HRESULT(STDMETHODCALLTYPE * Append) (ISimilarityTraitsTable * This, SimilarityData * data, SimilarityFileIndexT fileIndex);
	HRESULT(STDMETHODCALLTYPE * FindSimilarFileIndex) (ISimilarityTraitsTable * This, SimilarityData * similarityData, USHORT numberOfMatchesRequired, FindSimilarFileIndexResults * findSimilarFileIndexResults, DWORD resultsSize, DWORD * resultsUsed);
	HRESULT(STDMETHODCALLTYPE * BeginDump) (ISimilarityTraitsTable * This, ISimilarityTableDumpState ** similarityTableDumpState);
	HRESULT(STDMETHODCALLTYPE * GetLastIndex) (ISimilarityTraitsTable * This, SimilarityFileIndexT * fileIndex);
	END_INTERFACE
}  ISimilarityTraitsTableVtbl;
interface ISimilarityTraitsTable
{
	CONST_VTBL struct ISimilarityTraitsTableVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISimilarityTraitsTable_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISimilarityTraitsTable_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISimilarityTraitsTable_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISimilarityTraitsTable_CreateTable(This,path,truncate,securityDescriptor,isNew) ( (This)->lpVtbl -> CreateTable(This,path,truncate,securityDescriptor,isNew) )
#define ISimilarityTraitsTable_CreateTableIndirect(This,mapping,truncate,isNew) ( (This)->lpVtbl -> CreateTableIndirect(This,mapping,truncate,isNew) )
#define ISimilarityTraitsTable_CloseTable(This,isValid) ( (This)->lpVtbl -> CloseTable(This,isValid) )
#define ISimilarityTraitsTable_Append(This,data,fileIndex) ( (This)->lpVtbl -> Append(This,data,fileIndex) )
#define ISimilarityTraitsTable_FindSimilarFileIndex(This,similarityData,numberOfMatchesRequired,findSimilarFileIndexResults,resultsSize,resultsUsed) ( (This)->lpVtbl -> FindSimilarFileIndex(This,similarityData,numberOfMatchesRequired,findSimilarFileIndexResults,resultsSize,resultsUsed) )
#define ISimilarityTraitsTable_BeginDump(This,similarityTableDumpState) ( (This)->lpVtbl -> BeginDump(This,similarityTableDumpState) )
#define ISimilarityTraitsTable_GetLastIndex(This,fileIndex) ( (This)->lpVtbl -> GetLastIndex(This,fileIndex) )
#endif
#endif
#ifndef __ISimilarityFileIdTable_INTERFACE_DEFINED__
#define __ISimilarityFileIdTable_INTERFACE_DEFINED__
extern const IID IID_ISimilarityFileIdTable;
typedef struct ISimilarityFileIdTableVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISimilarityFileIdTable * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISimilarityFileIdTable * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISimilarityFileIdTable * This);
	HRESULT(STDMETHODCALLTYPE * CreateTable) (ISimilarityFileIdTable * This, wchar_t * path, BOOL truncate, BYTE * securityDescriptor, DWORD recordSize, RdcCreatedTables * isNew);
	HRESULT(STDMETHODCALLTYPE * CreateTableIndirect) (ISimilarityFileIdTable * This, IRdcFileWriter * fileIdFile, BOOL truncate, DWORD recordSize, RdcCreatedTables * isNew);
	HRESULT(STDMETHODCALLTYPE * CloseTable) (ISimilarityFileIdTable * This, BOOL isValid);
	HRESULT(STDMETHODCALLTYPE * Append) (ISimilarityFileIdTable * This, SimilarityFileId * similarityFileId, SimilarityFileIndexT * similarityFileIndex);
	HRESULT(STDMETHODCALLTYPE * Lookup) (ISimilarityFileIdTable * This, SimilarityFileIndexT similarityFileIndex, SimilarityFileId * similarityFileId);
	HRESULT(STDMETHODCALLTYPE * Invalidate) (ISimilarityFileIdTable * This, SimilarityFileIndexT similarityFileIndex);
	HRESULT(STDMETHODCALLTYPE * GetRecordCount) (ISimilarityFileIdTable * This, DWORD * recordCount);
	END_INTERFACE
}  ISimilarityFileIdTableVtbl;
interface ISimilarityFileIdTable
{
	CONST_VTBL struct ISimilarityFileIdTableVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISimilarityFileIdTable_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISimilarityFileIdTable_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISimilarityFileIdTable_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISimilarityFileIdTable_CreateTable(This,path,truncate,securityDescriptor,recordSize,isNew) ( (This)->lpVtbl -> CreateTable(This,path,truncate,securityDescriptor,recordSize,isNew) )
#define ISimilarityFileIdTable_CreateTableIndirect(This,fileIdFile,truncate,recordSize,isNew) ( (This)->lpVtbl -> CreateTableIndirect(This,fileIdFile,truncate,recordSize,isNew) )
#define ISimilarityFileIdTable_CloseTable(This,isValid) ( (This)->lpVtbl -> CloseTable(This,isValid) )
#define ISimilarityFileIdTable_Append(This,similarityFileId,similarityFileIndex) ( (This)->lpVtbl -> Append(This,similarityFileId,similarityFileIndex) )
#define ISimilarityFileIdTable_Lookup(This,similarityFileIndex,similarityFileId) ( (This)->lpVtbl -> Lookup(This,similarityFileIndex,similarityFileId) )
#define ISimilarityFileIdTable_Invalidate(This,similarityFileIndex) ( (This)->lpVtbl -> Invalidate(This,similarityFileIndex) )
#define ISimilarityFileIdTable_GetRecordCount(This,recordCount) ( (This)->lpVtbl -> GetRecordCount(This,recordCount) )
#endif
#endif
#ifndef __IRdcSimilarityGenerator_INTERFACE_DEFINED__
#define __IRdcSimilarityGenerator_INTERFACE_DEFINED__
extern const IID IID_IRdcSimilarityGenerator;
typedef struct IRdcSimilarityGeneratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRdcSimilarityGenerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRdcSimilarityGenerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRdcSimilarityGenerator * This);
	HRESULT(STDMETHODCALLTYPE * EnableSimilarity) (IRdcSimilarityGenerator * This);
	HRESULT(STDMETHODCALLTYPE * Results) (IRdcSimilarityGenerator * This, SimilarityData * similarityData);
	END_INTERFACE
}  IRdcSimilarityGeneratorVtbl;
interface IRdcSimilarityGenerator
{
	CONST_VTBL struct IRdcSimilarityGeneratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRdcSimilarityGenerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRdcSimilarityGenerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRdcSimilarityGenerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRdcSimilarityGenerator_EnableSimilarity(This) ( (This)->lpVtbl -> EnableSimilarity(This) )
#define IRdcSimilarityGenerator_Results(This,similarityData) ( (This)->lpVtbl -> Results(This,similarityData) )
#endif
#endif
#ifndef __IFindSimilarResults_INTERFACE_DEFINED__
#define __IFindSimilarResults_INTERFACE_DEFINED__
extern const IID IID_IFindSimilarResults;
typedef struct IFindSimilarResultsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFindSimilarResults * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFindSimilarResults * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFindSimilarResults * This);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IFindSimilarResults * This, DWORD * size);
	HRESULT(STDMETHODCALLTYPE * GetNextFileId) (IFindSimilarResults * This, DWORD * numTraitsMatched, SimilarityFileId * similarityFileId);
	END_INTERFACE
}  IFindSimilarResultsVtbl;
interface IFindSimilarResults
{
	CONST_VTBL struct IFindSimilarResultsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFindSimilarResults_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFindSimilarResults_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFindSimilarResults_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFindSimilarResults_GetSize(This,size) ( (This)->lpVtbl -> GetSize(This,size) )
#define IFindSimilarResults_GetNextFileId(This,numTraitsMatched,similarityFileId) ( (This)->lpVtbl -> GetNextFileId(This,numTraitsMatched,similarityFileId) )
#endif
#endif
#ifndef __ISimilarity_INTERFACE_DEFINED__
#define __ISimilarity_INTERFACE_DEFINED__
extern const IID IID_ISimilarity;
typedef struct ISimilarityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISimilarity * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISimilarity * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISimilarity * This);
	HRESULT(STDMETHODCALLTYPE * CreateTable) (ISimilarity * This, wchar_t * path, BOOL truncate, BYTE * securityDescriptor, DWORD recordSize, RdcCreatedTables * isNew);
	HRESULT(STDMETHODCALLTYPE * CreateTableIndirect) (ISimilarity * This, ISimilarityTraitsMapping * mapping, IRdcFileWriter * fileIdFile, BOOL truncate, DWORD recordSize, RdcCreatedTables * isNew);
	HRESULT(STDMETHODCALLTYPE * CloseTable) (ISimilarity * This, BOOL isValid);
	HRESULT(STDMETHODCALLTYPE * Append) (ISimilarity * This, SimilarityFileId * similarityFileId, SimilarityData * similarityData);
	HRESULT(STDMETHODCALLTYPE * FindSimilarFileId) (ISimilarity * This, SimilarityData * similarityData, USHORT numberOfMatchesRequired, DWORD resultsSize, IFindSimilarResults ** findSimilarResults);
	HRESULT(STDMETHODCALLTYPE * CopyAndSwap) (ISimilarity * This, ISimilarity * newSimilarityTables, ISimilarityReportProgress * reportProgress);
	HRESULT(STDMETHODCALLTYPE * GetRecordCount) (ISimilarity * This, DWORD * recordCount);
	END_INTERFACE
}  ISimilarityVtbl;
interface ISimilarity
{
	CONST_VTBL struct ISimilarityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISimilarity_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISimilarity_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISimilarity_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISimilarity_CreateTable(This,path,truncate,securityDescriptor,recordSize,isNew) ( (This)->lpVtbl -> CreateTable(This,path,truncate,securityDescriptor,recordSize,isNew) )
#define ISimilarity_CreateTableIndirect(This,mapping,fileIdFile,truncate,recordSize,isNew) ( (This)->lpVtbl -> CreateTableIndirect(This,mapping,fileIdFile,truncate,recordSize,isNew) )
#define ISimilarity_CloseTable(This,isValid) ( (This)->lpVtbl -> CloseTable(This,isValid) )
#define ISimilarity_Append(This,similarityFileId,similarityData) ( (This)->lpVtbl -> Append(This,similarityFileId,similarityData) )
#define ISimilarity_FindSimilarFileId(This,similarityData,numberOfMatchesRequired,resultsSize,findSimilarResults) ( (This)->lpVtbl -> FindSimilarFileId(This,similarityData,numberOfMatchesRequired,resultsSize,findSimilarResults) )
#define ISimilarity_CopyAndSwap(This,newSimilarityTables,reportProgress) ( (This)->lpVtbl -> CopyAndSwap(This,newSimilarityTables,reportProgress) )
#define ISimilarity_GetRecordCount(This,recordCount) ( (This)->lpVtbl -> GetRecordCount(This,recordCount) )
#endif
#endif
#ifndef __MSRDCLib_LIBRARY_DEFINED__
#define __MSRDCLib_LIBRARY_DEFINED__
extern const IID LIBID_MSRDCLib;
extern const CLSID CLSID_RdcLibrary;
extern const CLSID CLSID_RdcGeneratorParameters;
extern const CLSID CLSID_RdcGeneratorFilterMaxParameters;
extern const CLSID CLSID_RdcGenerator;
extern const CLSID CLSID_RdcFileReader;
extern const CLSID CLSID_RdcSignatureReader;
extern const CLSID CLSID_RdcComparator;
extern const CLSID CLSID_SimilarityReportProgress;
extern const CLSID CLSID_SimilarityTableDumpState;
extern const CLSID CLSID_SimilarityTraitsTable;
extern const CLSID CLSID_SimilarityFileIdTable;
extern const CLSID CLSID_Similarity;
extern const CLSID CLSID_RdcSimilarityGenerator;
extern const CLSID CLSID_FindSimilarResults;
extern const CLSID CLSID_SimilarityTraitsMapping;
extern const CLSID CLSID_SimilarityTraitsMappedView;
#endif
#endif
