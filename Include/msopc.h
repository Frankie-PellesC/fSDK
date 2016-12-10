/*+@@file@@----------------------------------------------------------------*//*!
 \file		msopc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 22:10:28 2016
 \date		Modified on Sun Aug 14 22:10:28 2016
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
#ifndef __msopc_h__
#define __msopc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IOpcUri_FWD_DEFINED__
#define __IOpcUri_FWD_DEFINED__
typedef interface IOpcUri IOpcUri;
#endif
#ifndef __IOpcPartUri_FWD_DEFINED__
#define __IOpcPartUri_FWD_DEFINED__
typedef interface IOpcPartUri IOpcPartUri;
#endif
#ifndef __IOpcPackage_FWD_DEFINED__
#define __IOpcPackage_FWD_DEFINED__
typedef interface IOpcPackage IOpcPackage;
#endif
#ifndef __IOpcPart_FWD_DEFINED__
#define __IOpcPart_FWD_DEFINED__
typedef interface IOpcPart IOpcPart;
#endif
#ifndef __IOpcRelationship_FWD_DEFINED__
#define __IOpcRelationship_FWD_DEFINED__
typedef interface IOpcRelationship IOpcRelationship;
#endif
#ifndef __IOpcPartSet_FWD_DEFINED__
#define __IOpcPartSet_FWD_DEFINED__
typedef interface IOpcPartSet IOpcPartSet;
#endif
#ifndef __IOpcRelationshipSet_FWD_DEFINED__
#define __IOpcRelationshipSet_FWD_DEFINED__
typedef interface IOpcRelationshipSet IOpcRelationshipSet;
#endif
#ifndef __IOpcPartEnumerator_FWD_DEFINED__
#define __IOpcPartEnumerator_FWD_DEFINED__
typedef interface IOpcPartEnumerator IOpcPartEnumerator;
#endif
#ifndef __IOpcRelationshipEnumerator_FWD_DEFINED__
#define __IOpcRelationshipEnumerator_FWD_DEFINED__
typedef interface IOpcRelationshipEnumerator IOpcRelationshipEnumerator;
#endif
#ifndef __IOpcSignaturePartReference_FWD_DEFINED__
#define __IOpcSignaturePartReference_FWD_DEFINED__
typedef interface IOpcSignaturePartReference IOpcSignaturePartReference;
#endif
#ifndef __IOpcSignatureRelationshipReference_FWD_DEFINED__
#define __IOpcSignatureRelationshipReference_FWD_DEFINED__
typedef interface IOpcSignatureRelationshipReference IOpcSignatureRelationshipReference;
#endif
#ifndef __IOpcRelationshipSelector_FWD_DEFINED__
#define __IOpcRelationshipSelector_FWD_DEFINED__
typedef interface IOpcRelationshipSelector IOpcRelationshipSelector;
#endif
#ifndef __IOpcSignatureReference_FWD_DEFINED__
#define __IOpcSignatureReference_FWD_DEFINED__
typedef interface IOpcSignatureReference IOpcSignatureReference;
#endif
#ifndef __IOpcSignatureCustomObject_FWD_DEFINED__
#define __IOpcSignatureCustomObject_FWD_DEFINED__
typedef interface IOpcSignatureCustomObject IOpcSignatureCustomObject;
#endif
#ifndef __IOpcDigitalSignature_FWD_DEFINED__
#define __IOpcDigitalSignature_FWD_DEFINED__
typedef interface IOpcDigitalSignature IOpcDigitalSignature;
#endif
#ifndef __IOpcSigningOptions_FWD_DEFINED__
#define __IOpcSigningOptions_FWD_DEFINED__
typedef interface IOpcSigningOptions IOpcSigningOptions;
#endif
#ifndef __IOpcDigitalSignatureManager_FWD_DEFINED__
#define __IOpcDigitalSignatureManager_FWD_DEFINED__
typedef interface IOpcDigitalSignatureManager IOpcDigitalSignatureManager;
#endif
#ifndef __IOpcSignaturePartReferenceEnumerator_FWD_DEFINED__
#define __IOpcSignaturePartReferenceEnumerator_FWD_DEFINED__
typedef interface IOpcSignaturePartReferenceEnumerator IOpcSignaturePartReferenceEnumerator;
#endif
#ifndef __IOpcSignatureRelationshipReferenceEnumerator_FWD_DEFINED__
#define __IOpcSignatureRelationshipReferenceEnumerator_FWD_DEFINED__
typedef interface IOpcSignatureRelationshipReferenceEnumerator IOpcSignatureRelationshipReferenceEnumerator;
#endif
#ifndef __IOpcRelationshipSelectorEnumerator_FWD_DEFINED__
#define __IOpcRelationshipSelectorEnumerator_FWD_DEFINED__
typedef interface IOpcRelationshipSelectorEnumerator IOpcRelationshipSelectorEnumerator;
#endif
#ifndef __IOpcSignatureReferenceEnumerator_FWD_DEFINED__
#define __IOpcSignatureReferenceEnumerator_FWD_DEFINED__
typedef interface IOpcSignatureReferenceEnumerator IOpcSignatureReferenceEnumerator;
#endif
#ifndef __IOpcSignatureCustomObjectEnumerator_FWD_DEFINED__
#define __IOpcSignatureCustomObjectEnumerator_FWD_DEFINED__
typedef interface IOpcSignatureCustomObjectEnumerator IOpcSignatureCustomObjectEnumerator;
#endif
#ifndef __IOpcCertificateEnumerator_FWD_DEFINED__
#define __IOpcCertificateEnumerator_FWD_DEFINED__
typedef interface IOpcCertificateEnumerator IOpcCertificateEnumerator;
#endif
#ifndef __IOpcDigitalSignatureEnumerator_FWD_DEFINED__
#define __IOpcDigitalSignatureEnumerator_FWD_DEFINED__
typedef interface IOpcDigitalSignatureEnumerator IOpcDigitalSignatureEnumerator;
#endif
#ifndef __IOpcSignaturePartReferenceSet_FWD_DEFINED__
#define __IOpcSignaturePartReferenceSet_FWD_DEFINED__
typedef interface IOpcSignaturePartReferenceSet IOpcSignaturePartReferenceSet;
#endif
#ifndef __IOpcSignatureRelationshipReferenceSet_FWD_DEFINED__
#define __IOpcSignatureRelationshipReferenceSet_FWD_DEFINED__
typedef interface IOpcSignatureRelationshipReferenceSet IOpcSignatureRelationshipReferenceSet;
#endif
#ifndef __IOpcRelationshipSelectorSet_FWD_DEFINED__
#define __IOpcRelationshipSelectorSet_FWD_DEFINED__
typedef interface IOpcRelationshipSelectorSet IOpcRelationshipSelectorSet;
#endif
#ifndef __IOpcSignatureReferenceSet_FWD_DEFINED__
#define __IOpcSignatureReferenceSet_FWD_DEFINED__
typedef interface IOpcSignatureReferenceSet IOpcSignatureReferenceSet;
#endif
#ifndef __IOpcSignatureCustomObjectSet_FWD_DEFINED__
#define __IOpcSignatureCustomObjectSet_FWD_DEFINED__
typedef interface IOpcSignatureCustomObjectSet IOpcSignatureCustomObjectSet;
#endif
#ifndef __IOpcCertificateSet_FWD_DEFINED__
#define __IOpcCertificateSet_FWD_DEFINED__
typedef interface IOpcCertificateSet IOpcCertificateSet;
#endif
#ifndef __IOpcFactory_FWD_DEFINED__
#define __IOpcFactory_FWD_DEFINED__
typedef interface IOpcFactory IOpcFactory;
#endif
#ifndef __OpcFactory_FWD_DEFINED__
#define __OpcFactory_FWD_DEFINED__
typedef struct OpcFactory OpcFactory;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <wincrypt.h>
#if (NTDDI_VERSION >= NTDDI_WIN7)
extern RPC_IF_HANDLE __MIDL_itf_msopc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msopc_0000_0000_v0_0_s_ifspec;
#ifndef __MSOPC_LIBRARY_DEFINED__
#define __MSOPC_LIBRARY_DEFINED__
#if (NTDDI_VERSION >= NTDDI_WIN7)
typedef enum __MIDL___MIDL_itf_msopc_0000_0000_0001
{
	OPC_URI_TARGET_MODE_INTERNAL = 0,
	OPC_URI_TARGET_MODE_EXTERNAL = 1
} OPC_URI_TARGET_MODE;
typedef enum __MIDL___MIDL_itf_msopc_0000_0000_0002
{
	OPC_COMPRESSION_NONE = -1,
	OPC_COMPRESSION_NORMAL = 0,
	OPC_COMPRESSION_MAXIMUM = 1,
	OPC_COMPRESSION_FAST = 2,
	OPC_COMPRESSION_SUPERFAST = 3
} OPC_COMPRESSION_OPTIONS;
typedef enum __MIDL___MIDL_itf_msopc_0000_0000_0003
{
	OPC_STREAM_IO_READ = 1,
	OPC_STREAM_IO_WRITE = 2
} OPC_STREAM_IO_MODE;
#define IS_OPC_CONFORMANCE_ERROR(x) (((x) & 0x1FFFF000) == (0x0000+(FACILITY_OPC << 16)))
#define IS_ZIP_CONFORMANCE_ERROR(x) (((x) & 0x1FFFF000) == (0x1000+(FACILITY_OPC << 16)))
#define OPC_E_NONCONFORMING_URI MAKE_HRESULT(1, FACILITY_OPC, 0x1)
#define OPC_E_RELATIVE_URI_REQUIRED MAKE_HRESULT(1, FACILITY_OPC, 0x2)
#define OPC_E_RELATIONSHIP_URI_REQUIRED MAKE_HRESULT(1, FACILITY_OPC, 0x3)
#define OPC_E_PART_CANNOT_BE_DIRECTORY MAKE_HRESULT(1, FACILITY_OPC, 0x4)
#define OPC_E_UNEXPECTED_CONTENT_TYPE MAKE_HRESULT(1, FACILITY_OPC, 0x5)
#define OPC_E_INVALID_CONTENT_TYPE_XML MAKE_HRESULT(1, FACILITY_OPC, 0x6)
#define OPC_E_MISSING_CONTENT_TYPES MAKE_HRESULT(1, FACILITY_OPC, 0x7)
#define OPC_E_NONCONFORMING_CONTENT_TYPES_XML MAKE_HRESULT(1, FACILITY_OPC, 0x8)
#define OPC_E_NONCONFORMING_RELS_XML MAKE_HRESULT(1, FACILITY_OPC, 0x9)
#define OPC_E_INVALID_RELS_XML MAKE_HRESULT(1, FACILITY_OPC, 0xA)
#define OPC_E_DUPLICATE_PART MAKE_HRESULT(1, FACILITY_OPC, 0xB)
#define OPC_E_INVALID_OVERRIDE_PART_NAME MAKE_HRESULT(1, FACILITY_OPC, 0xC)
#define OPC_E_DUPLICATE_OVERRIDE_PART MAKE_HRESULT(1, FACILITY_OPC, 0xD)
#define OPC_E_INVALID_DEFAULT_EXTENSION MAKE_HRESULT(1, FACILITY_OPC, 0xE)
#define OPC_E_DUPLICATE_DEFAULT_EXTENSION MAKE_HRESULT(1, FACILITY_OPC, 0xF)
#define OPC_E_INVALID_RELATIONSHIP_ID MAKE_HRESULT(1, FACILITY_OPC, 0x10)
#define OPC_E_INVALID_RELATIONSHIP_TYPE MAKE_HRESULT(1, FACILITY_OPC, 0x11)
#define OPC_E_INVALID_RELATIONSHIP_TARGET MAKE_HRESULT(1, FACILITY_OPC, 0x12)
#define OPC_E_DUPLICATE_RELATIONSHIP MAKE_HRESULT(1, FACILITY_OPC, 0x13)
#define OPC_E_CONFLICTING_SETTINGS MAKE_HRESULT(1, FACILITY_OPC, 0x14)
#define OPC_E_DUPLICATE_PIECE MAKE_HRESULT(1, FACILITY_OPC, 0x15)
#define OPC_E_INVALID_PIECE MAKE_HRESULT(1, FACILITY_OPC, 0x16)
#define OPC_E_MISSING_PIECE MAKE_HRESULT(1, FACILITY_OPC, 0x17)
#define OPC_E_NO_SUCH_PART MAKE_HRESULT(1, FACILITY_OPC, 0x18)
#define OPC_E_DS_SIGNATURE_CORRUPT MAKE_HRESULT(1, FACILITY_OPC, 0x19)
#define OPC_E_DS_DIGEST_VALUE_ERROR MAKE_HRESULT(1, FACILITY_OPC, 0x1A)
#define OPC_E_DS_DUPLICATE_SIGNATURE_ORIGIN_RELATIONSHIP MAKE_HRESULT(1, FACILITY_OPC, 0x1B)
#define OPC_E_DS_INVALID_SIGNATURE_ORIGIN_RELATIONSHIP MAKE_HRESULT(1, FACILITY_OPC, 0x1C)
#define OPC_E_DS_INVALID_CERTIFICATE_RELATIONSHIP MAKE_HRESULT(1, FACILITY_OPC, 0x1D)
#define OPC_E_DS_EXTERNAL_SIGNATURE MAKE_HRESULT(1, FACILITY_OPC, 0x1E)
#define OPC_E_DS_MISSING_SIGNATURE_ORIGIN_PART MAKE_HRESULT(1, FACILITY_OPC, 0x1F)
#define OPC_E_DS_MISSING_SIGNATURE_PART MAKE_HRESULT(1, FACILITY_OPC, 0x20)
#define OPC_E_DS_INVALID_RELATIONSHIP_TRANSFORM_XML MAKE_HRESULT(1, FACILITY_OPC, 0x21)
#define OPC_E_DS_INVALID_CANONICALIZATION_METHOD MAKE_HRESULT(1, FACILITY_OPC, 0x22)
#define OPC_E_DS_INVALID_RELATIONSHIPS_SIGNING_OPTION MAKE_HRESULT(1, FACILITY_OPC, 0x23)
#define OPC_E_DS_INVALID_OPC_SIGNATURE_TIME_FORMAT MAKE_HRESULT(1, FACILITY_OPC, 0x24)
#define OPC_E_DS_PACKAGE_REFERENCE_URI_RESERVED MAKE_HRESULT(1, FACILITY_OPC, 0x25)
#define OPC_E_DS_MISSING_SIGNATURE_PROPERTIES_ELEMENT MAKE_HRESULT(1, FACILITY_OPC, 0x26)
#define OPC_E_DS_MISSING_SIGNATURE_PROPERTY_ELEMENT MAKE_HRESULT(1, FACILITY_OPC, 0x27)
#define OPC_E_DS_DUPLICATE_SIGNATURE_PROPERTY_ELEMENT MAKE_HRESULT(1, FACILITY_OPC, 0x28)
#define OPC_E_DS_MISSING_SIGNATURE_TIME_PROPERTY MAKE_HRESULT(1, FACILITY_OPC, 0x29)
#define OPC_E_DS_INVALID_SIGNATURE_XML MAKE_HRESULT(1, FACILITY_OPC, 0x2A)
#define OPC_E_DS_INVALID_SIGNATURE_COUNT MAKE_HRESULT(1, FACILITY_OPC, 0x2B)
#define OPC_E_DS_MISSING_SIGNATURE_ALGORITHM MAKE_HRESULT(1, FACILITY_OPC, 0x2C)
#define OPC_E_DS_DUPLICATE_PACKAGE_OBJECT_REFERENCES MAKE_HRESULT(1, FACILITY_OPC, 0x2D)
#define OPC_E_DS_MISSING_PACKAGE_OBJECT_REFERENCE MAKE_HRESULT(1, FACILITY_OPC, 0x2E)
#define OPC_E_DS_EXTERNAL_SIGNATURE_REFERENCE MAKE_HRESULT(1, FACILITY_OPC, 0x2F)
#define OPC_E_DS_REFERENCE_MISSING_CONTENT_TYPE MAKE_HRESULT(1, FACILITY_OPC, 0x30)
#define OPC_E_DS_MULTIPLE_RELATIONSHIP_TRANSFORMS MAKE_HRESULT(1, FACILITY_OPC, 0x31)
#define OPC_E_DS_MISSING_CANONICALIZATION_TRANSFORM MAKE_HRESULT(1, FACILITY_OPC, 0x32)
#define OPC_E_MC_UNEXPECTED_ELEMENT MAKE_HRESULT(1, FACILITY_OPC, 0x33)
#define OPC_E_MC_UNEXPECTED_REQUIRES_ATTR MAKE_HRESULT(1, FACILITY_OPC, 0x34)
#define OPC_E_MC_MISSING_REQUIRES_ATTR MAKE_HRESULT(1, FACILITY_OPC, 0x35)
#define OPC_E_MC_UNEXPECTED_ATTR MAKE_HRESULT(1, FACILITY_OPC, 0x36)
#define OPC_E_MC_INVALID_PREFIX_LIST MAKE_HRESULT(1, FACILITY_OPC, 0x37)
#define OPC_E_MC_INVALID_QNAME_LIST MAKE_HRESULT(1, FACILITY_OPC, 0x38)
#define OPC_E_MC_NESTED_ALTERNATE_CONTENT MAKE_HRESULT(1, FACILITY_OPC, 0x39)
#define OPC_E_MC_UNEXPECTED_CHOICE MAKE_HRESULT(1, FACILITY_OPC, 0x3A)
#define OPC_E_MC_MISSING_CHOICE MAKE_HRESULT(1, FACILITY_OPC, 0x3B)
#define OPC_E_MC_INVALID_ENUM_TYPE MAKE_HRESULT(1, FACILITY_OPC, 0x3C)
#define OPC_E_MC_UNKNOWN_NAMESPACE MAKE_HRESULT(1, FACILITY_OPC, 0x3E)
#define OPC_E_MC_UNKNOWN_PREFIX MAKE_HRESULT(1, FACILITY_OPC, 0x3F)
#define OPC_E_MC_INVALID_ATTRIBUTES_ON_IGNORABLE_ELEMENT MAKE_HRESULT(1, FACILITY_OPC, 0x40)
#define OPC_E_MC_INVALID_XMLNS_ATTRIBUTE MAKE_HRESULT(1, FACILITY_OPC, 0x41)
#define OPC_E_INVALID_XML_ENCODING MAKE_HRESULT(1, FACILITY_OPC, 0x42)
#define OPC_E_DS_SIGNATURE_REFERENCE_MISSING_URI MAKE_HRESULT(1, FACILITY_OPC, 0x43)
#define OPC_E_INVALID_CONTENT_TYPE MAKE_HRESULT(1, FACILITY_OPC, 0x44)
#define OPC_E_DS_SIGNATURE_PROPERTY_MISSING_TARGET MAKE_HRESULT(1, FACILITY_OPC, 0x45)
#define OPC_E_DS_SIGNATURE_METHOD_NOT_SET MAKE_HRESULT(1, FACILITY_OPC, 0x46)
#define OPC_E_DS_DEFAULT_DIGEST_METHOD_NOT_SET MAKE_HRESULT(1, FACILITY_OPC, 0x47)
#define OPC_E_NO_SUCH_RELATIONSHIP MAKE_HRESULT(1, FACILITY_OPC, 0x48)
#define OPC_E_MC_MULTIPLE_FALLBACK_ELEMENTS MAKE_HRESULT(1, FACILITY_OPC, 0x49)
#define OPC_E_MC_INCONSISTENT_PROCESS_CONTENT MAKE_HRESULT(1, FACILITY_OPC, 0x4A)
#define OPC_E_MC_INCONSISTENT_PRESERVE_ATTRIBUTES MAKE_HRESULT(1, FACILITY_OPC, 0x4B)
#define OPC_E_MC_INCONSISTENT_PRESERVE_ELEMENTS MAKE_HRESULT(1, FACILITY_OPC, 0x4C)
#define OPC_E_INVALID_RELATIONSHIP_TARGET_MODE MAKE_HRESULT(1, FACILITY_OPC, 0x4D)
#define OPC_E_COULD_NOT_RECOVER MAKE_HRESULT(1, FACILITY_OPC, 0x4E)
#define OPC_E_UNSUPPORTED_PACKAGE MAKE_HRESULT(1, FACILITY_OPC, 0x4F)
#define OPC_E_ENUM_COLLECTION_CHANGED MAKE_HRESULT(1, FACILITY_OPC, 0x50)
#define OPC_E_ENUM_CANNOT_MOVE_NEXT MAKE_HRESULT(1, FACILITY_OPC, 0x51)
#define OPC_E_ENUM_CANNOT_MOVE_PREVIOUS MAKE_HRESULT(1, FACILITY_OPC, 0x52)
#define OPC_E_ENUM_INVALID_POSITION MAKE_HRESULT(1, FACILITY_OPC, 0x53)
#define OPC_E_DS_SIGNATURE_ORIGIN_EXISTS MAKE_HRESULT(1, FACILITY_OPC, 0x54)
#define OPC_E_DS_UNSIGNED_PACKAGE MAKE_HRESULT(1, FACILITY_OPC, 0x55)
#define OPC_E_DS_MISSING_CERTIFICATE_PART MAKE_HRESULT(1, FACILITY_OPC, 0x56)
#define OPC_E_ZIP_INCORRECT_DATA_SIZE MAKE_HRESULT(1, FACILITY_OPC, 0x1001)
#define OPC_E_ZIP_CORRUPTED_ARCHIVE MAKE_HRESULT(1, FACILITY_OPC, 0x1002)
#define OPC_E_ZIP_COMPRESSION_FAILED MAKE_HRESULT(1, FACILITY_OPC, 0x1003)
#define OPC_E_ZIP_DECOMPRESSION_FAILED MAKE_HRESULT(1, FACILITY_OPC, 0x1004)
#define OPC_E_ZIP_INCONSISTENT_FILEITEM MAKE_HRESULT(1, FACILITY_OPC, 0x1005)
#define OPC_E_ZIP_INCONSISTENT_DIRECTORY MAKE_HRESULT(1, FACILITY_OPC, 0x1006)
#define OPC_E_ZIP_MISSING_DATA_DESCRIPTOR MAKE_HRESULT(1, FACILITY_OPC, 0x1007)
#define OPC_E_ZIP_UNSUPPORTEDARCHIVE MAKE_HRESULT(1, FACILITY_OPC, 0x1008)
#define OPC_E_ZIP_CENTRAL_DIRECTORY_TOO_LARGE MAKE_HRESULT(1, FACILITY_OPC, 0x1009)
#define OPC_E_ZIP_NAME_TOO_LARGE MAKE_HRESULT(1, FACILITY_OPC, 0x100A)
#define OPC_E_ZIP_DUPLICATE_NAME MAKE_HRESULT(1, FACILITY_OPC, 0x100B)
#define OPC_E_ZIP_COMMENT_TOO_LARGE MAKE_HRESULT(1, FACILITY_OPC, 0x100C)
#define OPC_E_ZIP_EXTRA_FIELDS_TOO_LARGE MAKE_HRESULT(1, FACILITY_OPC, 0x100D)
#define OPC_E_ZIP_FILE_HEADER_TOO_LARGE MAKE_HRESULT(1, FACILITY_OPC, 0x100E)
#define OPC_E_ZIP_MISSING_END_OF_CENTRAL_DIRECTORY MAKE_HRESULT(1, FACILITY_OPC, 0x100F)
#define OPC_E_ZIP_REQUIRES_64_BIT MAKE_HRESULT(1, FACILITY_OPC, 0x1010)
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
typedef enum __MIDL___MIDL_itf_msopc_0001_0067_0001
{
	OPC_READ_DEFAULT = 0,
	OPC_VALIDATE_ON_LOAD = 0x1,
	OPC_CACHE_ON_ACCESS = 0x2
} OPC_READ_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(OPC_READ_FLAGS);
typedef enum __MIDL___MIDL_itf_msopc_0001_0067_0002
{
	OPC_WRITE_DEFAULT = 0,
	OPC_WRITE_FORCE_ZIP32 = 0x1
} OPC_WRITE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(OPC_WRITE_FLAGS);
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
typedef enum OPC_SIGNATURE_VALIDATION_RESULT
{
	OPC_SIGNATURE_VALID = 0,
	OPC_SIGNATURE_INVALID = -1
} OPC_SIGNATURE_VALIDATION_RESULT;
typedef enum __MIDL___MIDL_itf_msopc_0001_0074_0001
{
	OPC_CANONICALIZATION_NONE = 0,
	OPC_CANONICALIZATION_C14N = 1,
	OPC_CANONICALIZATION_C14N_WITH_COMMENTS = 2
} OPC_CANONICALIZATION_METHOD;
typedef enum __MIDL___MIDL_itf_msopc_0001_0074_0002
{
	OPC_RELATIONSHIP_SELECT_BY_ID = 0,
	OPC_RELATIONSHIP_SELECT_BY_TYPE = 1
} OPC_RELATIONSHIP_SELECTOR;
typedef enum __MIDL___MIDL_itf_msopc_0001_0074_0003
{
	OPC_RELATIONSHIP_SIGN_USING_SELECTORS = 0,
	OPC_RELATIONSHIP_SIGN_PART = 1
} OPC_RELATIONSHIPS_SIGNING_OPTION;
typedef enum __MIDL___MIDL_itf_msopc_0001_0074_0004
{
	OPC_CERTIFICATE_IN_CERTIFICATE_PART = 0,
	OPC_CERTIFICATE_IN_SIGNATURE_PART = 1,
	OPC_CERTIFICATE_NOT_EMBEDDED = 2
} OPC_CERTIFICATE_EMBEDDING_OPTION;
typedef enum __MIDL___MIDL_itf_msopc_0001_0074_0005
{
	OPC_SIGNATURE_TIME_FORMAT_MILLISECONDS = 0,
	OPC_SIGNATURE_TIME_FORMAT_SECONDS = 1,
	OPC_SIGNATURE_TIME_FORMAT_MINUTES = 2,
	OPC_SIGNATURE_TIME_FORMAT_DAYS = 3,
	OPC_SIGNATURE_TIME_FORMAT_MONTHS = 4,
	OPC_SIGNATURE_TIME_FORMAT_YEARS = 5
} OPC_SIGNATURE_TIME_FORMAT;
#endif
extern const IID LIBID_MSOPC;
#ifndef __IOpcUri_INTERFACE_DEFINED__
#define __IOpcUri_INTERFACE_DEFINED__
extern const IID IID_IOpcUri;
typedef struct IOpcUriVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcUri * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcUri * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcUri * This);
	HRESULT(STDMETHODCALLTYPE * GetPropertyBSTR) (IOpcUri * This, Uri_PROPERTY uriProp, BSTR * pbstrProperty, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetPropertyLength) (IOpcUri * This, Uri_PROPERTY uriProp, DWORD * pcchProperty, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetPropertyDWORD) (IOpcUri * This, Uri_PROPERTY uriProp, DWORD * pdwProperty, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * HasProperty) (IOpcUri * This, Uri_PROPERTY uriProp, BOOL * pfHasProperty);
	HRESULT(STDMETHODCALLTYPE * GetAbsoluteUri) (IOpcUri * This, BSTR * pbstrAbsoluteUri);
	HRESULT(STDMETHODCALLTYPE * GetAuthority) (IOpcUri * This, BSTR * pbstrAuthority);
	HRESULT(STDMETHODCALLTYPE * GetDisplayUri) (IOpcUri * This, BSTR * pbstrDisplayString);
	HRESULT(STDMETHODCALLTYPE * GetDomain) (IOpcUri * This, BSTR * pbstrDomain);
	HRESULT(STDMETHODCALLTYPE * GetExtension) (IOpcUri * This, BSTR * pbstrExtension);
	HRESULT(STDMETHODCALLTYPE * GetFragment) (IOpcUri * This, BSTR * pbstrFragment);
	HRESULT(STDMETHODCALLTYPE * GetHost) (IOpcUri * This, BSTR * pbstrHost);
	HRESULT(STDMETHODCALLTYPE * GetPassword) (IOpcUri * This, BSTR * pbstrPassword);
	HRESULT(STDMETHODCALLTYPE * GetPath) (IOpcUri * This, BSTR * pbstrPath);
	HRESULT(STDMETHODCALLTYPE * GetPathAndQuery) (IOpcUri * This, BSTR * pbstrPathAndQuery);
	HRESULT(STDMETHODCALLTYPE * GetQuery) (IOpcUri * This, BSTR * pbstrQuery);
	HRESULT(STDMETHODCALLTYPE * GetRawUri) (IOpcUri * This, BSTR * pbstrRawUri);
	HRESULT(STDMETHODCALLTYPE * GetSchemeName) (IOpcUri * This, BSTR * pbstrSchemeName);
	HRESULT(STDMETHODCALLTYPE * GetUserInfo) (IOpcUri * This, BSTR * pbstrUserInfo);
	HRESULT(STDMETHODCALLTYPE * GetUserName) (IOpcUri * This, BSTR * pbstrUserName);
	HRESULT(STDMETHODCALLTYPE * GetHostType) (IOpcUri * This, DWORD * pdwHostType);
	HRESULT(STDMETHODCALLTYPE * GetPort) (IOpcUri * This, DWORD * pdwPort);
	HRESULT(STDMETHODCALLTYPE * GetScheme) (IOpcUri * This, DWORD * pdwScheme);
	HRESULT(STDMETHODCALLTYPE * GetZone) (IOpcUri * This, DWORD * pdwZone);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IOpcUri * This, LPDWORD pdwFlags);
	HRESULT(STDMETHODCALLTYPE * IsEqual) (IOpcUri * This, IUri * pUri, BOOL * pfEqual);
	HRESULT(STDMETHODCALLTYPE * GetRelationshipsPartUri) (IOpcUri * This, IOpcPartUri ** relationshipPartUri);
	HRESULT(STDMETHODCALLTYPE * GetRelativeUri) (IOpcUri * This, IOpcPartUri * targetPartUri, IUri ** relativeUri);
	HRESULT(STDMETHODCALLTYPE * CombinePartUri) (IOpcUri * This, IUri * relativeUri, IOpcPartUri ** combinedUri);
	END_INTERFACE
}  IOpcUriVtbl;
interface IOpcUri
{
	CONST_VTBL struct IOpcUriVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcUri_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcUri_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcUri_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcUri_GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags) ( (This)->lpVtbl -> GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags) )
#define IOpcUri_GetPropertyLength(This,uriProp,pcchProperty,dwFlags) ( (This)->lpVtbl -> GetPropertyLength(This,uriProp,pcchProperty,dwFlags) )
#define IOpcUri_GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags) ( (This)->lpVtbl -> GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags) )
#define IOpcUri_HasProperty(This,uriProp,pfHasProperty) ( (This)->lpVtbl -> HasProperty(This,uriProp,pfHasProperty) )
#define IOpcUri_GetAbsoluteUri(This,pbstrAbsoluteUri) ( (This)->lpVtbl -> GetAbsoluteUri(This,pbstrAbsoluteUri) )
#define IOpcUri_GetAuthority(This,pbstrAuthority) ( (This)->lpVtbl -> GetAuthority(This,pbstrAuthority) )
#define IOpcUri_GetDisplayUri(This,pbstrDisplayString) ( (This)->lpVtbl -> GetDisplayUri(This,pbstrDisplayString) )
#define IOpcUri_GetDomain(This,pbstrDomain) ( (This)->lpVtbl -> GetDomain(This,pbstrDomain) )
#define IOpcUri_GetExtension(This,pbstrExtension) ( (This)->lpVtbl -> GetExtension(This,pbstrExtension) )
#define IOpcUri_GetFragment(This,pbstrFragment) ( (This)->lpVtbl -> GetFragment(This,pbstrFragment) )
#define IOpcUri_GetHost(This,pbstrHost) ( (This)->lpVtbl -> GetHost(This,pbstrHost) )
#define IOpcUri_GetPassword(This,pbstrPassword) ( (This)->lpVtbl -> GetPassword(This,pbstrPassword) )
#define IOpcUri_GetPath(This,pbstrPath) ( (This)->lpVtbl -> GetPath(This,pbstrPath) )
#define IOpcUri_GetPathAndQuery(This,pbstrPathAndQuery) ( (This)->lpVtbl -> GetPathAndQuery(This,pbstrPathAndQuery) )
#define IOpcUri_GetQuery(This,pbstrQuery) ( (This)->lpVtbl -> GetQuery(This,pbstrQuery) )
#define IOpcUri_GetRawUri(This,pbstrRawUri) ( (This)->lpVtbl -> GetRawUri(This,pbstrRawUri) )
#define IOpcUri_GetSchemeName(This,pbstrSchemeName) ( (This)->lpVtbl -> GetSchemeName(This,pbstrSchemeName) )
#define IOpcUri_GetUserInfo(This,pbstrUserInfo) ( (This)->lpVtbl -> GetUserInfo(This,pbstrUserInfo) )
#define IOpcUri_GetUserName(This,pbstrUserName) ( (This)->lpVtbl -> GetUserName(This,pbstrUserName) )
#define IOpcUri_GetHostType(This,pdwHostType) ( (This)->lpVtbl -> GetHostType(This,pdwHostType) )
#define IOpcUri_GetPort(This,pdwPort) ( (This)->lpVtbl -> GetPort(This,pdwPort) )
#define IOpcUri_GetScheme(This,pdwScheme) ( (This)->lpVtbl -> GetScheme(This,pdwScheme) )
#define IOpcUri_GetZone(This,pdwZone) ( (This)->lpVtbl -> GetZone(This,pdwZone) )
#define IOpcUri_GetProperties(This,pdwFlags) ( (This)->lpVtbl -> GetProperties(This,pdwFlags) )
#define IOpcUri_IsEqual(This,pUri,pfEqual) ( (This)->lpVtbl -> IsEqual(This,pUri,pfEqual) )
#define IOpcUri_GetRelationshipsPartUri(This,relationshipPartUri) ( (This)->lpVtbl -> GetRelationshipsPartUri(This,relationshipPartUri) )
#define IOpcUri_GetRelativeUri(This,targetPartUri,relativeUri) ( (This)->lpVtbl -> GetRelativeUri(This,targetPartUri,relativeUri) )
#define IOpcUri_CombinePartUri(This,relativeUri,combinedUri) ( (This)->lpVtbl -> CombinePartUri(This,relativeUri,combinedUri) )
#endif
#endif
#ifndef __IOpcPartUri_INTERFACE_DEFINED__
#define __IOpcPartUri_INTERFACE_DEFINED__
extern const IID IID_IOpcPartUri;
typedef struct IOpcPartUriVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcPartUri * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcPartUri * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcPartUri * This);
	HRESULT(STDMETHODCALLTYPE * GetPropertyBSTR) (IOpcPartUri * This, Uri_PROPERTY uriProp, BSTR * pbstrProperty, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetPropertyLength) (IOpcPartUri * This, Uri_PROPERTY uriProp, DWORD * pcchProperty, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetPropertyDWORD) (IOpcPartUri * This, Uri_PROPERTY uriProp, DWORD * pdwProperty, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * HasProperty) (IOpcPartUri * This, Uri_PROPERTY uriProp, BOOL * pfHasProperty);
	HRESULT(STDMETHODCALLTYPE * GetAbsoluteUri) (IOpcPartUri * This, BSTR * pbstrAbsoluteUri);
	HRESULT(STDMETHODCALLTYPE * GetAuthority) (IOpcPartUri * This, BSTR * pbstrAuthority);
	HRESULT(STDMETHODCALLTYPE * GetDisplayUri) (IOpcPartUri * This, BSTR * pbstrDisplayString);
	HRESULT(STDMETHODCALLTYPE * GetDomain) (IOpcPartUri * This, BSTR * pbstrDomain);
	HRESULT(STDMETHODCALLTYPE * GetExtension) (IOpcPartUri * This, BSTR * pbstrExtension);
	HRESULT(STDMETHODCALLTYPE * GetFragment) (IOpcPartUri * This, BSTR * pbstrFragment);
	HRESULT(STDMETHODCALLTYPE * GetHost) (IOpcPartUri * This, BSTR * pbstrHost);
	HRESULT(STDMETHODCALLTYPE * GetPassword) (IOpcPartUri * This, BSTR * pbstrPassword);
	HRESULT(STDMETHODCALLTYPE * GetPath) (IOpcPartUri * This, BSTR * pbstrPath);
	HRESULT(STDMETHODCALLTYPE * GetPathAndQuery) (IOpcPartUri * This, BSTR * pbstrPathAndQuery);
	HRESULT(STDMETHODCALLTYPE * GetQuery) (IOpcPartUri * This, BSTR * pbstrQuery);
	HRESULT(STDMETHODCALLTYPE * GetRawUri) (IOpcPartUri * This, BSTR * pbstrRawUri);
	HRESULT(STDMETHODCALLTYPE * GetSchemeName) (IOpcPartUri * This, BSTR * pbstrSchemeName);
	HRESULT(STDMETHODCALLTYPE * GetUserInfo) (IOpcPartUri * This, BSTR * pbstrUserInfo);
	HRESULT(STDMETHODCALLTYPE * GetUserName) (IOpcPartUri * This, BSTR * pbstrUserName);
	HRESULT(STDMETHODCALLTYPE * GetHostType) (IOpcPartUri * This, DWORD * pdwHostType);
	HRESULT(STDMETHODCALLTYPE * GetPort) (IOpcPartUri * This, DWORD * pdwPort);
	HRESULT(STDMETHODCALLTYPE * GetScheme) (IOpcPartUri * This, DWORD * pdwScheme);
	HRESULT(STDMETHODCALLTYPE * GetZone) (IOpcPartUri * This, DWORD * pdwZone);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IOpcPartUri * This, LPDWORD pdwFlags);
	HRESULT(STDMETHODCALLTYPE * IsEqual) (IOpcPartUri * This, IUri * pUri, BOOL * pfEqual);
	HRESULT(STDMETHODCALLTYPE * GetRelationshipsPartUri) (IOpcPartUri * This, IOpcPartUri ** relationshipPartUri);
	HRESULT(STDMETHODCALLTYPE * GetRelativeUri) (IOpcPartUri * This, IOpcPartUri * targetPartUri, IUri ** relativeUri);
	HRESULT(STDMETHODCALLTYPE * CombinePartUri) (IOpcPartUri * This, IUri * relativeUri, IOpcPartUri ** combinedUri);
	HRESULT(STDMETHODCALLTYPE * ComparePartUri) (IOpcPartUri * This, IOpcPartUri * partUri, INT32 * comparisonResult);
	HRESULT(STDMETHODCALLTYPE * GetSourceUri) (IOpcPartUri * This, IOpcUri ** sourceUri);
	HRESULT(STDMETHODCALLTYPE * IsRelationshipsPartUri) (IOpcPartUri * This, BOOL * isRelationshipUri);
	END_INTERFACE
}  IOpcPartUriVtbl;
interface IOpcPartUri
{
	CONST_VTBL struct IOpcPartUriVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcPartUri_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcPartUri_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcPartUri_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcPartUri_GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags) ( (This)->lpVtbl -> GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags) )
#define IOpcPartUri_GetPropertyLength(This,uriProp,pcchProperty,dwFlags) ( (This)->lpVtbl -> GetPropertyLength(This,uriProp,pcchProperty,dwFlags) )
#define IOpcPartUri_GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags) ( (This)->lpVtbl -> GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags) )
#define IOpcPartUri_HasProperty(This,uriProp,pfHasProperty) ( (This)->lpVtbl -> HasProperty(This,uriProp,pfHasProperty) )
#define IOpcPartUri_GetAbsoluteUri(This,pbstrAbsoluteUri) ( (This)->lpVtbl -> GetAbsoluteUri(This,pbstrAbsoluteUri) )
#define IOpcPartUri_GetAuthority(This,pbstrAuthority) ( (This)->lpVtbl -> GetAuthority(This,pbstrAuthority) )
#define IOpcPartUri_GetDisplayUri(This,pbstrDisplayString) ( (This)->lpVtbl -> GetDisplayUri(This,pbstrDisplayString) )
#define IOpcPartUri_GetDomain(This,pbstrDomain) ( (This)->lpVtbl -> GetDomain(This,pbstrDomain) )
#define IOpcPartUri_GetExtension(This,pbstrExtension) ( (This)->lpVtbl -> GetExtension(This,pbstrExtension) )
#define IOpcPartUri_GetFragment(This,pbstrFragment) ( (This)->lpVtbl -> GetFragment(This,pbstrFragment) )
#define IOpcPartUri_GetHost(This,pbstrHost) ( (This)->lpVtbl -> GetHost(This,pbstrHost) )
#define IOpcPartUri_GetPassword(This,pbstrPassword) ( (This)->lpVtbl -> GetPassword(This,pbstrPassword) )
#define IOpcPartUri_GetPath(This,pbstrPath) ( (This)->lpVtbl -> GetPath(This,pbstrPath) )
#define IOpcPartUri_GetPathAndQuery(This,pbstrPathAndQuery) ( (This)->lpVtbl -> GetPathAndQuery(This,pbstrPathAndQuery) )
#define IOpcPartUri_GetQuery(This,pbstrQuery) ( (This)->lpVtbl -> GetQuery(This,pbstrQuery) )
#define IOpcPartUri_GetRawUri(This,pbstrRawUri) ( (This)->lpVtbl -> GetRawUri(This,pbstrRawUri) )
#define IOpcPartUri_GetSchemeName(This,pbstrSchemeName) ( (This)->lpVtbl -> GetSchemeName(This,pbstrSchemeName) )
#define IOpcPartUri_GetUserInfo(This,pbstrUserInfo) ( (This)->lpVtbl -> GetUserInfo(This,pbstrUserInfo) )
#define IOpcPartUri_GetUserName(This,pbstrUserName) ( (This)->lpVtbl -> GetUserName(This,pbstrUserName) )
#define IOpcPartUri_GetHostType(This,pdwHostType) ( (This)->lpVtbl -> GetHostType(This,pdwHostType) )
#define IOpcPartUri_GetPort(This,pdwPort) ( (This)->lpVtbl -> GetPort(This,pdwPort) )
#define IOpcPartUri_GetScheme(This,pdwScheme) ( (This)->lpVtbl -> GetScheme(This,pdwScheme) )
#define IOpcPartUri_GetZone(This,pdwZone) ( (This)->lpVtbl -> GetZone(This,pdwZone) )
#define IOpcPartUri_GetProperties(This,pdwFlags) ( (This)->lpVtbl -> GetProperties(This,pdwFlags) )
#define IOpcPartUri_IsEqual(This,pUri,pfEqual) ( (This)->lpVtbl -> IsEqual(This,pUri,pfEqual) )
#define IOpcPartUri_GetRelationshipsPartUri(This,relationshipPartUri) ( (This)->lpVtbl -> GetRelationshipsPartUri(This,relationshipPartUri) )
#define IOpcPartUri_GetRelativeUri(This,targetPartUri,relativeUri) ( (This)->lpVtbl -> GetRelativeUri(This,targetPartUri,relativeUri) )
#define IOpcPartUri_CombinePartUri(This,relativeUri,combinedUri) ( (This)->lpVtbl -> CombinePartUri(This,relativeUri,combinedUri) )
#define IOpcPartUri_ComparePartUri(This,partUri,comparisonResult) ( (This)->lpVtbl -> ComparePartUri(This,partUri,comparisonResult) )
#define IOpcPartUri_GetSourceUri(This,sourceUri) ( (This)->lpVtbl -> GetSourceUri(This,sourceUri) )
#define IOpcPartUri_IsRelationshipsPartUri(This,isRelationshipUri) ( (This)->lpVtbl -> IsRelationshipsPartUri(This,isRelationshipUri) )
#endif
#endif
#ifndef __IOpcPackage_INTERFACE_DEFINED__
#define __IOpcPackage_INTERFACE_DEFINED__
extern const IID IID_IOpcPackage;
typedef struct IOpcPackageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcPackage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcPackage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcPackage * This);
	HRESULT(STDMETHODCALLTYPE * GetPartSet) (IOpcPackage * This, IOpcPartSet ** partSet);
	HRESULT(STDMETHODCALLTYPE * GetRelationshipSet) (IOpcPackage * This, IOpcRelationshipSet ** relationshipSet);
	END_INTERFACE
}  IOpcPackageVtbl;
interface IOpcPackage
{
	CONST_VTBL struct IOpcPackageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcPackage_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcPackage_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcPackage_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcPackage_GetPartSet(This,partSet) ( (This)->lpVtbl -> GetPartSet(This,partSet) )
#define IOpcPackage_GetRelationshipSet(This,relationshipSet) ( (This)->lpVtbl -> GetRelationshipSet(This,relationshipSet) )
#endif
#endif
#ifndef __IOpcPart_INTERFACE_DEFINED__
#define __IOpcPart_INTERFACE_DEFINED__
extern const IID IID_IOpcPart;
typedef struct IOpcPartVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcPart * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcPart * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcPart * This);
	HRESULT(STDMETHODCALLTYPE * GetRelationshipSet) (IOpcPart * This, IOpcRelationshipSet ** relationshipSet);
	HRESULT(STDMETHODCALLTYPE * GetContentStream) (IOpcPart * This, IStream ** stream);
	HRESULT(STDMETHODCALLTYPE * GetName) (IOpcPart * This, IOpcPartUri ** name);
	HRESULT(STDMETHODCALLTYPE * GetContentType) (IOpcPart * This, LPWSTR * contentType);
	HRESULT(STDMETHODCALLTYPE * GetCompressionOptions) (IOpcPart * This, OPC_COMPRESSION_OPTIONS * compressionOptions);
	END_INTERFACE
}  IOpcPartVtbl;
interface IOpcPart
{
	CONST_VTBL struct IOpcPartVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcPart_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcPart_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcPart_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcPart_GetRelationshipSet(This,relationshipSet) ( (This)->lpVtbl -> GetRelationshipSet(This,relationshipSet) )
#define IOpcPart_GetContentStream(This,stream) ( (This)->lpVtbl -> GetContentStream(This,stream) )
#define IOpcPart_GetName(This,name) ( (This)->lpVtbl -> GetName(This,name) )
#define IOpcPart_GetContentType(This,contentType) ( (This)->lpVtbl -> GetContentType(This,contentType) )
#define IOpcPart_GetCompressionOptions(This,compressionOptions) ( (This)->lpVtbl -> GetCompressionOptions(This,compressionOptions) )
#endif
#endif
#ifndef __IOpcRelationship_INTERFACE_DEFINED__
#define __IOpcRelationship_INTERFACE_DEFINED__
extern const IID IID_IOpcRelationship;
typedef struct IOpcRelationshipVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcRelationship * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcRelationship * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcRelationship * This);
	HRESULT(STDMETHODCALLTYPE * GetId) (IOpcRelationship * This, LPWSTR * relationshipIdentifier);
	HRESULT(STDMETHODCALLTYPE * GetRelationshipType) (IOpcRelationship * This, LPWSTR * relationshipType);
	HRESULT(STDMETHODCALLTYPE * GetSourceUri) (IOpcRelationship * This, IOpcUri ** sourceUri);
	HRESULT(STDMETHODCALLTYPE * GetTargetUri) (IOpcRelationship * This, IUri ** targetUri);
	HRESULT(STDMETHODCALLTYPE * GetTargetMode) (IOpcRelationship * This, OPC_URI_TARGET_MODE * targetMode);
	END_INTERFACE
}  IOpcRelationshipVtbl;
interface IOpcRelationship
{
	CONST_VTBL struct IOpcRelationshipVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcRelationship_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcRelationship_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcRelationship_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcRelationship_GetId(This,relationshipIdentifier) ( (This)->lpVtbl -> GetId(This,relationshipIdentifier) )
#define IOpcRelationship_GetRelationshipType(This,relationshipType) ( (This)->lpVtbl -> GetRelationshipType(This,relationshipType) )
#define IOpcRelationship_GetSourceUri(This,sourceUri) ( (This)->lpVtbl -> GetSourceUri(This,sourceUri) )
#define IOpcRelationship_GetTargetUri(This,targetUri) ( (This)->lpVtbl -> GetTargetUri(This,targetUri) )
#define IOpcRelationship_GetTargetMode(This,targetMode) ( (This)->lpVtbl -> GetTargetMode(This,targetMode) )
#endif
#endif
#ifndef __IOpcPartSet_INTERFACE_DEFINED__
#define __IOpcPartSet_INTERFACE_DEFINED__
extern const IID IID_IOpcPartSet;
typedef struct IOpcPartSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcPartSet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcPartSet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcPartSet * This);
	HRESULT(STDMETHODCALLTYPE * GetPart) (IOpcPartSet * This, IOpcPartUri * name, IOpcPart ** part);
	HRESULT(STDMETHODCALLTYPE * CreatePart) (IOpcPartSet * This, IOpcPartUri * name, LPCWSTR contentType, OPC_COMPRESSION_OPTIONS compressionOptions, IOpcPart ** part);
	HRESULT(STDMETHODCALLTYPE * DeletePart) (IOpcPartSet * This, IOpcPartUri * name);
	HRESULT(STDMETHODCALLTYPE * PartExists) (IOpcPartSet * This, IOpcPartUri * name, BOOL * partExists);
	HRESULT(STDMETHODCALLTYPE * GetEnumerator) (IOpcPartSet * This, IOpcPartEnumerator ** partEnumerator);
	END_INTERFACE
}  IOpcPartSetVtbl;
interface IOpcPartSet
{
	CONST_VTBL struct IOpcPartSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcPartSet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcPartSet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcPartSet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcPartSet_GetPart(This,name,part) ( (This)->lpVtbl -> GetPart(This,name,part) )
#define IOpcPartSet_CreatePart(This,name,contentType,compressionOptions,part) ( (This)->lpVtbl -> CreatePart(This,name,contentType,compressionOptions,part) )
#define IOpcPartSet_DeletePart(This,name) ( (This)->lpVtbl -> DeletePart(This,name) )
#define IOpcPartSet_PartExists(This,name,partExists) ( (This)->lpVtbl -> PartExists(This,name,partExists) )
#define IOpcPartSet_GetEnumerator(This,partEnumerator) ( (This)->lpVtbl -> GetEnumerator(This,partEnumerator) )
#endif
#endif
#ifndef __IOpcRelationshipSet_INTERFACE_DEFINED__
#define __IOpcRelationshipSet_INTERFACE_DEFINED__
extern const IID IID_IOpcRelationshipSet;
typedef struct IOpcRelationshipSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcRelationshipSet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcRelationshipSet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcRelationshipSet * This);
	HRESULT(STDMETHODCALLTYPE * GetRelationship) (IOpcRelationshipSet * This, LPCWSTR relationshipIdentifier, IOpcRelationship ** relationship);
	HRESULT(STDMETHODCALLTYPE * CreateRelationship) (IOpcRelationshipSet * This, LPCWSTR relationshipIdentifier, LPCWSTR relationshipType, IUri * targetUri, OPC_URI_TARGET_MODE targetMode, IOpcRelationship ** relationship);
	HRESULT(STDMETHODCALLTYPE * DeleteRelationship) (IOpcRelationshipSet * This, LPCWSTR relationshipIdentifier);
	HRESULT(STDMETHODCALLTYPE * RelationshipExists) (IOpcRelationshipSet * This, LPCWSTR relationshipIdentifier, BOOL * relationshipExists);
	HRESULT(STDMETHODCALLTYPE * GetEnumerator) (IOpcRelationshipSet * This, IOpcRelationshipEnumerator ** relationshipEnumerator);
	HRESULT(STDMETHODCALLTYPE * GetEnumeratorForType) (IOpcRelationshipSet * This, LPCWSTR relationshipType, IOpcRelationshipEnumerator ** relationshipEnumerator);
	HRESULT(STDMETHODCALLTYPE * GetRelationshipsContentStream) (IOpcRelationshipSet * This, IStream ** contents);
	END_INTERFACE
}  IOpcRelationshipSetVtbl;
interface IOpcRelationshipSet
{
	CONST_VTBL struct IOpcRelationshipSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcRelationshipSet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcRelationshipSet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcRelationshipSet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcRelationshipSet_GetRelationship(This,relationshipIdentifier,relationship) ( (This)->lpVtbl -> GetRelationship(This,relationshipIdentifier,relationship) )
#define IOpcRelationshipSet_CreateRelationship(This,relationshipIdentifier,relationshipType,targetUri,targetMode,relationship) ( (This)->lpVtbl -> CreateRelationship(This,relationshipIdentifier,relationshipType,targetUri,targetMode,relationship) )
#define IOpcRelationshipSet_DeleteRelationship(This,relationshipIdentifier) ( (This)->lpVtbl -> DeleteRelationship(This,relationshipIdentifier) )
#define IOpcRelationshipSet_RelationshipExists(This,relationshipIdentifier,relationshipExists) ( (This)->lpVtbl -> RelationshipExists(This,relationshipIdentifier,relationshipExists) )
#define IOpcRelationshipSet_GetEnumerator(This,relationshipEnumerator) ( (This)->lpVtbl -> GetEnumerator(This,relationshipEnumerator) )
#define IOpcRelationshipSet_GetEnumeratorForType(This,relationshipType,relationshipEnumerator) ( (This)->lpVtbl -> GetEnumeratorForType(This,relationshipType,relationshipEnumerator) )
#define IOpcRelationshipSet_GetRelationshipsContentStream(This,contents) ( (This)->lpVtbl -> GetRelationshipsContentStream(This,contents) )
#endif
#endif
#ifndef __IOpcPartEnumerator_INTERFACE_DEFINED__
#define __IOpcPartEnumerator_INTERFACE_DEFINED__
extern const IID IID_IOpcPartEnumerator;
typedef struct IOpcPartEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcPartEnumerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcPartEnumerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcPartEnumerator * This);
	HRESULT(STDMETHODCALLTYPE * MoveNext) (IOpcPartEnumerator * This, BOOL * hasNext);
	HRESULT(STDMETHODCALLTYPE * MovePrevious) (IOpcPartEnumerator * This, BOOL * hasPrevious);
	HRESULT(STDMETHODCALLTYPE * GetCurrent) (IOpcPartEnumerator * This, IOpcPart ** part);
	HRESULT(STDMETHODCALLTYPE * Clone) (IOpcPartEnumerator * This, IOpcPartEnumerator ** copy);
	END_INTERFACE
}  IOpcPartEnumeratorVtbl;
interface IOpcPartEnumerator
{
	CONST_VTBL struct IOpcPartEnumeratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcPartEnumerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcPartEnumerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcPartEnumerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcPartEnumerator_MoveNext(This,hasNext) ( (This)->lpVtbl -> MoveNext(This,hasNext) )
#define IOpcPartEnumerator_MovePrevious(This,hasPrevious) ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
#define IOpcPartEnumerator_GetCurrent(This,part) ( (This)->lpVtbl -> GetCurrent(This,part) )
#define IOpcPartEnumerator_Clone(This,copy) ( (This)->lpVtbl -> Clone(This,copy) )
#endif
#endif
#ifndef __IOpcRelationshipEnumerator_INTERFACE_DEFINED__
#define __IOpcRelationshipEnumerator_INTERFACE_DEFINED__
extern const IID IID_IOpcRelationshipEnumerator;
typedef struct IOpcRelationshipEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcRelationshipEnumerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcRelationshipEnumerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcRelationshipEnumerator * This);
	HRESULT(STDMETHODCALLTYPE * MoveNext) (IOpcRelationshipEnumerator * This, BOOL * hasNext);
	HRESULT(STDMETHODCALLTYPE * MovePrevious) (IOpcRelationshipEnumerator * This, BOOL * hasPrevious);
	HRESULT(STDMETHODCALLTYPE * GetCurrent) (IOpcRelationshipEnumerator * This, IOpcRelationship ** relationship);
	HRESULT(STDMETHODCALLTYPE * Clone) (IOpcRelationshipEnumerator * This, IOpcRelationshipEnumerator ** copy);
	END_INTERFACE
}  IOpcRelationshipEnumeratorVtbl;
interface IOpcRelationshipEnumerator
{
	CONST_VTBL struct IOpcRelationshipEnumeratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcRelationshipEnumerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcRelationshipEnumerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcRelationshipEnumerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcRelationshipEnumerator_MoveNext(This,hasNext) ( (This)->lpVtbl -> MoveNext(This,hasNext) )
#define IOpcRelationshipEnumerator_MovePrevious(This,hasPrevious) ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
#define IOpcRelationshipEnumerator_GetCurrent(This,relationship) ( (This)->lpVtbl -> GetCurrent(This,relationship) )
#define IOpcRelationshipEnumerator_Clone(This,copy) ( (This)->lpVtbl -> Clone(This,copy) )
#endif
#endif
#ifndef __IOpcSignaturePartReference_INTERFACE_DEFINED__
#define __IOpcSignaturePartReference_INTERFACE_DEFINED__
extern const IID IID_IOpcSignaturePartReference;
typedef struct IOpcSignaturePartReferenceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcSignaturePartReference * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcSignaturePartReference * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcSignaturePartReference * This);
	HRESULT(STDMETHODCALLTYPE * GetPartName) (IOpcSignaturePartReference * This, IOpcPartUri ** partName);
	HRESULT(STDMETHODCALLTYPE * GetContentType) (IOpcSignaturePartReference * This, LPWSTR * contentType);
	HRESULT(STDMETHODCALLTYPE * GetDigestMethod) (IOpcSignaturePartReference * This, LPWSTR * digestMethod);
	HRESULT(STDMETHODCALLTYPE * GetDigestValue) (IOpcSignaturePartReference * This, UINT8 ** digestValue, UINT32 * count);
	HRESULT(STDMETHODCALLTYPE * GetTransformMethod) (IOpcSignaturePartReference * This, OPC_CANONICALIZATION_METHOD * transformMethod);
	END_INTERFACE
}  IOpcSignaturePartReferenceVtbl;
interface IOpcSignaturePartReference
{
	CONST_VTBL struct IOpcSignaturePartReferenceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcSignaturePartReference_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcSignaturePartReference_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcSignaturePartReference_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcSignaturePartReference_GetPartName(This,partName) ( (This)->lpVtbl -> GetPartName(This,partName) )
#define IOpcSignaturePartReference_GetContentType(This,contentType) ( (This)->lpVtbl -> GetContentType(This,contentType) )
#define IOpcSignaturePartReference_GetDigestMethod(This,digestMethod) ( (This)->lpVtbl -> GetDigestMethod(This,digestMethod) )
#define IOpcSignaturePartReference_GetDigestValue(This,digestValue,count) ( (This)->lpVtbl -> GetDigestValue(This,digestValue,count) )
#define IOpcSignaturePartReference_GetTransformMethod(This,transformMethod) ( (This)->lpVtbl -> GetTransformMethod(This,transformMethod) )
#endif
#endif
#ifndef __IOpcSignatureRelationshipReference_INTERFACE_DEFINED__
#define __IOpcSignatureRelationshipReference_INTERFACE_DEFINED__
extern const IID IID_IOpcSignatureRelationshipReference;
typedef struct IOpcSignatureRelationshipReferenceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcSignatureRelationshipReference * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcSignatureRelationshipReference * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcSignatureRelationshipReference * This);
	HRESULT(STDMETHODCALLTYPE * GetSourceUri) (IOpcSignatureRelationshipReference * This, IOpcUri ** sourceUri);
	HRESULT(STDMETHODCALLTYPE * GetDigestMethod) (IOpcSignatureRelationshipReference * This, LPWSTR * digestMethod);
	HRESULT(STDMETHODCALLTYPE * GetDigestValue) (IOpcSignatureRelationshipReference * This, UINT8 ** digestValue, UINT32 * count);
	HRESULT(STDMETHODCALLTYPE * GetTransformMethod) (IOpcSignatureRelationshipReference * This, OPC_CANONICALIZATION_METHOD * transformMethod);
	HRESULT(STDMETHODCALLTYPE * GetRelationshipSigningOption) (IOpcSignatureRelationshipReference * This, OPC_RELATIONSHIPS_SIGNING_OPTION * relationshipSigningOption);
	HRESULT(STDMETHODCALLTYPE * GetRelationshipSelectorEnumerator) (IOpcSignatureRelationshipReference * This, IOpcRelationshipSelectorEnumerator ** selectorEnumerator);
	END_INTERFACE
}  IOpcSignatureRelationshipReferenceVtbl;
interface IOpcSignatureRelationshipReference
{
	CONST_VTBL struct IOpcSignatureRelationshipReferenceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcSignatureRelationshipReference_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcSignatureRelationshipReference_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcSignatureRelationshipReference_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcSignatureRelationshipReference_GetSourceUri(This,sourceUri) ( (This)->lpVtbl -> GetSourceUri(This,sourceUri) )
#define IOpcSignatureRelationshipReference_GetDigestMethod(This,digestMethod) ( (This)->lpVtbl -> GetDigestMethod(This,digestMethod) )
#define IOpcSignatureRelationshipReference_GetDigestValue(This,digestValue,count) ( (This)->lpVtbl -> GetDigestValue(This,digestValue,count) )
#define IOpcSignatureRelationshipReference_GetTransformMethod(This,transformMethod) ( (This)->lpVtbl -> GetTransformMethod(This,transformMethod) )
#define IOpcSignatureRelationshipReference_GetRelationshipSigningOption(This,relationshipSigningOption) ( (This)->lpVtbl -> GetRelationshipSigningOption(This,relationshipSigningOption) )
#define IOpcSignatureRelationshipReference_GetRelationshipSelectorEnumerator(This,selectorEnumerator) ( (This)->lpVtbl -> GetRelationshipSelectorEnumerator(This,selectorEnumerator) )
#endif
#endif
#ifndef __IOpcRelationshipSelector_INTERFACE_DEFINED__
#define __IOpcRelationshipSelector_INTERFACE_DEFINED__
extern const IID IID_IOpcRelationshipSelector;
typedef struct IOpcRelationshipSelectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcRelationshipSelector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcRelationshipSelector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcRelationshipSelector * This);
	HRESULT(STDMETHODCALLTYPE * GetSelectorType) (IOpcRelationshipSelector * This, OPC_RELATIONSHIP_SELECTOR * selector);
	HRESULT(STDMETHODCALLTYPE * GetSelectionCriterion) (IOpcRelationshipSelector * This, LPWSTR * selectionCriterion);
	END_INTERFACE
}  IOpcRelationshipSelectorVtbl;
interface IOpcRelationshipSelector
{
	CONST_VTBL struct IOpcRelationshipSelectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcRelationshipSelector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcRelationshipSelector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcRelationshipSelector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcRelationshipSelector_GetSelectorType(This,selector) ( (This)->lpVtbl -> GetSelectorType(This,selector) )
#define IOpcRelationshipSelector_GetSelectionCriterion(This,selectionCriterion) ( (This)->lpVtbl -> GetSelectionCriterion(This,selectionCriterion) )
#endif
#endif
#ifndef __IOpcSignatureReference_INTERFACE_DEFINED__
#define __IOpcSignatureReference_INTERFACE_DEFINED__
extern const IID IID_IOpcSignatureReference;
typedef struct IOpcSignatureReferenceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcSignatureReference * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcSignatureReference * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcSignatureReference * This);
	HRESULT(STDMETHODCALLTYPE * GetId) (IOpcSignatureReference * This, LPWSTR * referenceId);
	HRESULT(STDMETHODCALLTYPE * GetUri) (IOpcSignatureReference * This, IUri ** referenceUri);
	HRESULT(STDMETHODCALLTYPE * GetType) (IOpcSignatureReference * This, LPWSTR * type);
	HRESULT(STDMETHODCALLTYPE * GetTransformMethod) (IOpcSignatureReference * This, OPC_CANONICALIZATION_METHOD * transformMethod);
	HRESULT(STDMETHODCALLTYPE * GetDigestMethod) (IOpcSignatureReference * This, LPWSTR * digestMethod);
	HRESULT(STDMETHODCALLTYPE * GetDigestValue) (IOpcSignatureReference * This, UINT8 ** digestValue, UINT32 * count);
	END_INTERFACE
}  IOpcSignatureReferenceVtbl;
interface IOpcSignatureReference
{
	CONST_VTBL struct IOpcSignatureReferenceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcSignatureReference_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcSignatureReference_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcSignatureReference_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcSignatureReference_GetId(This,referenceId) ( (This)->lpVtbl -> GetId(This,referenceId) )
#define IOpcSignatureReference_GetUri(This,referenceUri) ( (This)->lpVtbl -> GetUri(This,referenceUri) )
#define IOpcSignatureReference_GetType(This,type) ( (This)->lpVtbl -> GetType(This,type) )
#define IOpcSignatureReference_GetTransformMethod(This,transformMethod) ( (This)->lpVtbl -> GetTransformMethod(This,transformMethod) )
#define IOpcSignatureReference_GetDigestMethod(This,digestMethod) ( (This)->lpVtbl -> GetDigestMethod(This,digestMethod) )
#define IOpcSignatureReference_GetDigestValue(This,digestValue,count) ( (This)->lpVtbl -> GetDigestValue(This,digestValue,count) )
#endif
#endif
#ifndef __IOpcSignatureCustomObject_INTERFACE_DEFINED__
#define __IOpcSignatureCustomObject_INTERFACE_DEFINED__
extern const IID IID_IOpcSignatureCustomObject;
typedef struct IOpcSignatureCustomObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcSignatureCustomObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcSignatureCustomObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcSignatureCustomObject * This);
	HRESULT(STDMETHODCALLTYPE * GetXml) (IOpcSignatureCustomObject * This, UINT8 ** xmlMarkup, UINT32 * count);
	END_INTERFACE
}  IOpcSignatureCustomObjectVtbl;
interface IOpcSignatureCustomObject
{
	CONST_VTBL struct IOpcSignatureCustomObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcSignatureCustomObject_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcSignatureCustomObject_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcSignatureCustomObject_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcSignatureCustomObject_GetXml(This,xmlMarkup,count) ( (This)->lpVtbl -> GetXml(This,xmlMarkup,count) )
#endif
#endif
#ifndef __IOpcDigitalSignature_INTERFACE_DEFINED__
#define __IOpcDigitalSignature_INTERFACE_DEFINED__
extern const IID IID_IOpcDigitalSignature;
typedef struct IOpcDigitalSignatureVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcDigitalSignature * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcDigitalSignature * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcDigitalSignature * This);
	HRESULT(STDMETHODCALLTYPE * GetNamespaces) (IOpcDigitalSignature * This, LPWSTR ** prefixes, LPWSTR ** namespaces, UINT32 * count);
	HRESULT(STDMETHODCALLTYPE * GetSignatureId) (IOpcDigitalSignature * This, LPWSTR * signatureId);
	HRESULT(STDMETHODCALLTYPE * GetSignaturePartName) (IOpcDigitalSignature * This, IOpcPartUri ** signaturePartName);
	HRESULT(STDMETHODCALLTYPE * GetSignatureMethod) (IOpcDigitalSignature * This, LPWSTR * signatureMethod);
	HRESULT(STDMETHODCALLTYPE * GetCanonicalizationMethod) (IOpcDigitalSignature * This, OPC_CANONICALIZATION_METHOD * canonicalizationMethod);
	HRESULT(STDMETHODCALLTYPE * GetSignatureValue) (IOpcDigitalSignature * This, UINT8 ** signatureValue, UINT32 * count);
	HRESULT(STDMETHODCALLTYPE * GetSignaturePartReferenceEnumerator) (IOpcDigitalSignature * This, IOpcSignaturePartReferenceEnumerator ** partReferenceEnumerator);
	HRESULT(STDMETHODCALLTYPE * GetSignatureRelationshipReferenceEnumerator) (IOpcDigitalSignature * This, IOpcSignatureRelationshipReferenceEnumerator ** relationshipReferenceEnumerator);
	HRESULT(STDMETHODCALLTYPE * GetSigningTime) (IOpcDigitalSignature * This, LPWSTR * signingTime);
	HRESULT(STDMETHODCALLTYPE * GetTimeFormat) (IOpcDigitalSignature * This, OPC_SIGNATURE_TIME_FORMAT * timeFormat);
	HRESULT(STDMETHODCALLTYPE * GetPackageObjectReference) (IOpcDigitalSignature * This, IOpcSignatureReference ** packageObjectReference);
	HRESULT(STDMETHODCALLTYPE * GetCertificateEnumerator) (IOpcDigitalSignature * This, IOpcCertificateEnumerator ** certificateEnumerator);
	HRESULT(STDMETHODCALLTYPE * GetCustomReferenceEnumerator) (IOpcDigitalSignature * This, IOpcSignatureReferenceEnumerator ** customReferenceEnumerator);
	HRESULT(STDMETHODCALLTYPE * GetCustomObjectEnumerator) (IOpcDigitalSignature * This, IOpcSignatureCustomObjectEnumerator ** customObjectEnumerator);
	HRESULT(STDMETHODCALLTYPE * GetSignatureXml) (IOpcDigitalSignature * This, UINT8 ** signatureXml, UINT32 * count);
	END_INTERFACE
}  IOpcDigitalSignatureVtbl;
interface IOpcDigitalSignature
{
	CONST_VTBL struct IOpcDigitalSignatureVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcDigitalSignature_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcDigitalSignature_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcDigitalSignature_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcDigitalSignature_GetNamespaces(This,prefixes,namespaces,count) ( (This)->lpVtbl -> GetNamespaces(This,prefixes,namespaces,count) )
#define IOpcDigitalSignature_GetSignatureId(This,signatureId) ( (This)->lpVtbl -> GetSignatureId(This,signatureId) )
#define IOpcDigitalSignature_GetSignaturePartName(This,signaturePartName) ( (This)->lpVtbl -> GetSignaturePartName(This,signaturePartName) )
#define IOpcDigitalSignature_GetSignatureMethod(This,signatureMethod) ( (This)->lpVtbl -> GetSignatureMethod(This,signatureMethod) )
#define IOpcDigitalSignature_GetCanonicalizationMethod(This,canonicalizationMethod) ( (This)->lpVtbl -> GetCanonicalizationMethod(This,canonicalizationMethod) )
#define IOpcDigitalSignature_GetSignatureValue(This,signatureValue,count) ( (This)->lpVtbl -> GetSignatureValue(This,signatureValue,count) )
#define IOpcDigitalSignature_GetSignaturePartReferenceEnumerator(This,partReferenceEnumerator) ( (This)->lpVtbl -> GetSignaturePartReferenceEnumerator(This,partReferenceEnumerator) )
#define IOpcDigitalSignature_GetSignatureRelationshipReferenceEnumerator(This,relationshipReferenceEnumerator) ( (This)->lpVtbl -> GetSignatureRelationshipReferenceEnumerator(This,relationshipReferenceEnumerator) )
#define IOpcDigitalSignature_GetSigningTime(This,signingTime) ( (This)->lpVtbl -> GetSigningTime(This,signingTime) )
#define IOpcDigitalSignature_GetTimeFormat(This,timeFormat) ( (This)->lpVtbl -> GetTimeFormat(This,timeFormat) )
#define IOpcDigitalSignature_GetPackageObjectReference(This,packageObjectReference) ( (This)->lpVtbl -> GetPackageObjectReference(This,packageObjectReference) )
#define IOpcDigitalSignature_GetCertificateEnumerator(This,certificateEnumerator) ( (This)->lpVtbl -> GetCertificateEnumerator(This,certificateEnumerator) )
#define IOpcDigitalSignature_GetCustomReferenceEnumerator(This,customReferenceEnumerator) ( (This)->lpVtbl -> GetCustomReferenceEnumerator(This,customReferenceEnumerator) )
#define IOpcDigitalSignature_GetCustomObjectEnumerator(This,customObjectEnumerator) ( (This)->lpVtbl -> GetCustomObjectEnumerator(This,customObjectEnumerator) )
#define IOpcDigitalSignature_GetSignatureXml(This,signatureXml,count) ( (This)->lpVtbl -> GetSignatureXml(This,signatureXml,count) )
#endif
#endif
#ifndef __IOpcSigningOptions_INTERFACE_DEFINED__
#define __IOpcSigningOptions_INTERFACE_DEFINED__
extern const IID IID_IOpcSigningOptions;
typedef struct IOpcSigningOptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcSigningOptions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcSigningOptions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcSigningOptions * This);
	HRESULT(STDMETHODCALLTYPE * GetSignatureId) (IOpcSigningOptions * This, LPWSTR * signatureId);
	HRESULT(STDMETHODCALLTYPE * SetSignatureId) (IOpcSigningOptions * This, LPCWSTR signatureId);
	HRESULT(STDMETHODCALLTYPE * GetSignatureMethod) (IOpcSigningOptions * This, LPWSTR * signatureMethod);
	HRESULT(STDMETHODCALLTYPE * SetSignatureMethod) (IOpcSigningOptions * This, LPCWSTR signatureMethod);
	HRESULT(STDMETHODCALLTYPE * GetDefaultDigestMethod) (IOpcSigningOptions * This, LPWSTR * digestMethod);
	HRESULT(STDMETHODCALLTYPE * SetDefaultDigestMethod) (IOpcSigningOptions * This, LPCWSTR digestMethod);
	HRESULT(STDMETHODCALLTYPE * GetCertificateEmbeddingOption) (IOpcSigningOptions * This, OPC_CERTIFICATE_EMBEDDING_OPTION * embeddingOption);
	HRESULT(STDMETHODCALLTYPE * SetCertificateEmbeddingOption) (IOpcSigningOptions * This, OPC_CERTIFICATE_EMBEDDING_OPTION embeddingOption);
	HRESULT(STDMETHODCALLTYPE * GetTimeFormat) (IOpcSigningOptions * This, OPC_SIGNATURE_TIME_FORMAT * timeFormat);
	HRESULT(STDMETHODCALLTYPE * SetTimeFormat) (IOpcSigningOptions * This, OPC_SIGNATURE_TIME_FORMAT timeFormat);
	HRESULT(STDMETHODCALLTYPE * GetSignaturePartReferenceSet) (IOpcSigningOptions * This, IOpcSignaturePartReferenceSet ** partReferenceSet);
	HRESULT(STDMETHODCALLTYPE * GetSignatureRelationshipReferenceSet) (IOpcSigningOptions * This, IOpcSignatureRelationshipReferenceSet ** relationshipReferenceSet);
	HRESULT(STDMETHODCALLTYPE * GetCustomObjectSet) (IOpcSigningOptions * This, IOpcSignatureCustomObjectSet ** customObjectSet);
	HRESULT(STDMETHODCALLTYPE * GetCustomReferenceSet) (IOpcSigningOptions * This, IOpcSignatureReferenceSet ** customReferenceSet);
	HRESULT(STDMETHODCALLTYPE * GetCertificateSet) (IOpcSigningOptions * This, IOpcCertificateSet ** certificateSet);
	HRESULT(STDMETHODCALLTYPE * GetSignaturePartName) (IOpcSigningOptions * This, IOpcPartUri ** signaturePartName);
	HRESULT(STDMETHODCALLTYPE * SetSignaturePartName) (IOpcSigningOptions * This, IOpcPartUri * signaturePartName);
	END_INTERFACE
}  IOpcSigningOptionsVtbl;
interface IOpcSigningOptions
{
	CONST_VTBL struct IOpcSigningOptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcSigningOptions_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcSigningOptions_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcSigningOptions_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcSigningOptions_GetSignatureId(This,signatureId) ( (This)->lpVtbl -> GetSignatureId(This,signatureId) )
#define IOpcSigningOptions_SetSignatureId(This,signatureId) ( (This)->lpVtbl -> SetSignatureId(This,signatureId) )
#define IOpcSigningOptions_GetSignatureMethod(This,signatureMethod) ( (This)->lpVtbl -> GetSignatureMethod(This,signatureMethod) )
#define IOpcSigningOptions_SetSignatureMethod(This,signatureMethod) ( (This)->lpVtbl -> SetSignatureMethod(This,signatureMethod) )
#define IOpcSigningOptions_GetDefaultDigestMethod(This,digestMethod) ( (This)->lpVtbl -> GetDefaultDigestMethod(This,digestMethod) )
#define IOpcSigningOptions_SetDefaultDigestMethod(This,digestMethod) ( (This)->lpVtbl -> SetDefaultDigestMethod(This,digestMethod) )
#define IOpcSigningOptions_GetCertificateEmbeddingOption(This,embeddingOption) ( (This)->lpVtbl -> GetCertificateEmbeddingOption(This,embeddingOption) )
#define IOpcSigningOptions_SetCertificateEmbeddingOption(This,embeddingOption) ( (This)->lpVtbl -> SetCertificateEmbeddingOption(This,embeddingOption) )
#define IOpcSigningOptions_GetTimeFormat(This,timeFormat) ( (This)->lpVtbl -> GetTimeFormat(This,timeFormat) )
#define IOpcSigningOptions_SetTimeFormat(This,timeFormat) ( (This)->lpVtbl -> SetTimeFormat(This,timeFormat) )
#define IOpcSigningOptions_GetSignaturePartReferenceSet(This,partReferenceSet) ( (This)->lpVtbl -> GetSignaturePartReferenceSet(This,partReferenceSet) )
#define IOpcSigningOptions_GetSignatureRelationshipReferenceSet(This,relationshipReferenceSet) ( (This)->lpVtbl -> GetSignatureRelationshipReferenceSet(This,relationshipReferenceSet) )
#define IOpcSigningOptions_GetCustomObjectSet(This,customObjectSet) ( (This)->lpVtbl -> GetCustomObjectSet(This,customObjectSet) )
#define IOpcSigningOptions_GetCustomReferenceSet(This,customReferenceSet) ( (This)->lpVtbl -> GetCustomReferenceSet(This,customReferenceSet) )
#define IOpcSigningOptions_GetCertificateSet(This,certificateSet) ( (This)->lpVtbl -> GetCertificateSet(This,certificateSet) )
#define IOpcSigningOptions_GetSignaturePartName(This,signaturePartName) ( (This)->lpVtbl -> GetSignaturePartName(This,signaturePartName) )
#define IOpcSigningOptions_SetSignaturePartName(This,signaturePartName) ( (This)->lpVtbl -> SetSignaturePartName(This,signaturePartName) )
#endif
#endif
#ifndef __IOpcDigitalSignatureManager_INTERFACE_DEFINED__
#define __IOpcDigitalSignatureManager_INTERFACE_DEFINED__
extern const IID IID_IOpcDigitalSignatureManager;
typedef struct IOpcDigitalSignatureManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcDigitalSignatureManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcDigitalSignatureManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcDigitalSignatureManager * This);
	HRESULT(STDMETHODCALLTYPE * GetSignatureOriginPartName) (IOpcDigitalSignatureManager * This, IOpcPartUri ** signatureOriginPartName);
	HRESULT(STDMETHODCALLTYPE * SetSignatureOriginPartName) (IOpcDigitalSignatureManager * This, IOpcPartUri * signatureOriginPartName);
	HRESULT(STDMETHODCALLTYPE * GetSignatureEnumerator) (IOpcDigitalSignatureManager * This, IOpcDigitalSignatureEnumerator ** signatureEnumerator);
	HRESULT(STDMETHODCALLTYPE * RemoveSignature) (IOpcDigitalSignatureManager * This, IOpcPartUri * signaturePartName);
	HRESULT(STDMETHODCALLTYPE * CreateSigningOptions) (IOpcDigitalSignatureManager * This, IOpcSigningOptions ** signingOptions);
	HRESULT(STDMETHODCALLTYPE * Validate) (IOpcDigitalSignatureManager * This, IOpcDigitalSignature * signature, const CERT_CONTEXT * certificate, OPC_SIGNATURE_VALIDATION_RESULT * validationResult);
	HRESULT(STDMETHODCALLTYPE * Sign) (IOpcDigitalSignatureManager * This, const CERT_CONTEXT * certificate, IOpcSigningOptions * signingOptions, IOpcDigitalSignature ** digitalSignature);
	HRESULT(STDMETHODCALLTYPE * ReplaceSignatureXml) (IOpcDigitalSignatureManager * This, IOpcPartUri * signaturePartName, const UINT8 * newSignatureXml, UINT32 count, IOpcDigitalSignature ** digitalSignature);
	END_INTERFACE
}  IOpcDigitalSignatureManagerVtbl;
interface IOpcDigitalSignatureManager
{
	CONST_VTBL struct IOpcDigitalSignatureManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcDigitalSignatureManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcDigitalSignatureManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcDigitalSignatureManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcDigitalSignatureManager_GetSignatureOriginPartName(This,signatureOriginPartName) ( (This)->lpVtbl -> GetSignatureOriginPartName(This,signatureOriginPartName) )
#define IOpcDigitalSignatureManager_SetSignatureOriginPartName(This,signatureOriginPartName) ( (This)->lpVtbl -> SetSignatureOriginPartName(This,signatureOriginPartName) )
#define IOpcDigitalSignatureManager_GetSignatureEnumerator(This,signatureEnumerator) ( (This)->lpVtbl -> GetSignatureEnumerator(This,signatureEnumerator) )
#define IOpcDigitalSignatureManager_RemoveSignature(This,signaturePartName) ( (This)->lpVtbl -> RemoveSignature(This,signaturePartName) )
#define IOpcDigitalSignatureManager_CreateSigningOptions(This,signingOptions) ( (This)->lpVtbl -> CreateSigningOptions(This,signingOptions) )
#define IOpcDigitalSignatureManager_Validate(This,signature,certificate,validationResult) ( (This)->lpVtbl -> Validate(This,signature,certificate,validationResult) )
#define IOpcDigitalSignatureManager_Sign(This,certificate,signingOptions,digitalSignature) ( (This)->lpVtbl -> Sign(This,certificate,signingOptions,digitalSignature) )
#define IOpcDigitalSignatureManager_ReplaceSignatureXml(This,signaturePartName,newSignatureXml,count,digitalSignature) ( (This)->lpVtbl -> ReplaceSignatureXml(This,signaturePartName,newSignatureXml,count,digitalSignature) )
#endif
#endif
#ifndef __IOpcSignaturePartReferenceEnumerator_INTERFACE_DEFINED__
#define __IOpcSignaturePartReferenceEnumerator_INTERFACE_DEFINED__
extern const IID IID_IOpcSignaturePartReferenceEnumerator;
typedef struct IOpcSignaturePartReferenceEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcSignaturePartReferenceEnumerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcSignaturePartReferenceEnumerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcSignaturePartReferenceEnumerator * This);
	HRESULT(STDMETHODCALLTYPE * MoveNext) (IOpcSignaturePartReferenceEnumerator * This, BOOL * hasNext);
	HRESULT(STDMETHODCALLTYPE * MovePrevious) (IOpcSignaturePartReferenceEnumerator * This, BOOL * hasPrevious);
	HRESULT(STDMETHODCALLTYPE * GetCurrent) (IOpcSignaturePartReferenceEnumerator * This, IOpcSignaturePartReference ** partReference);
	HRESULT(STDMETHODCALLTYPE * Clone) (IOpcSignaturePartReferenceEnumerator * This, IOpcSignaturePartReferenceEnumerator ** copy);
	END_INTERFACE
}  IOpcSignaturePartReferenceEnumeratorVtbl;
interface IOpcSignaturePartReferenceEnumerator
{
	CONST_VTBL struct IOpcSignaturePartReferenceEnumeratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcSignaturePartReferenceEnumerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcSignaturePartReferenceEnumerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcSignaturePartReferenceEnumerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcSignaturePartReferenceEnumerator_MoveNext(This,hasNext) ( (This)->lpVtbl -> MoveNext(This,hasNext) )
#define IOpcSignaturePartReferenceEnumerator_MovePrevious(This,hasPrevious) ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
#define IOpcSignaturePartReferenceEnumerator_GetCurrent(This,partReference) ( (This)->lpVtbl -> GetCurrent(This,partReference) )
#define IOpcSignaturePartReferenceEnumerator_Clone(This,copy) ( (This)->lpVtbl -> Clone(This,copy) )
#endif
#endif
#ifndef __IOpcSignatureRelationshipReferenceEnumerator_INTERFACE_DEFINED__
#define __IOpcSignatureRelationshipReferenceEnumerator_INTERFACE_DEFINED__
extern const IID IID_IOpcSignatureRelationshipReferenceEnumerator;
typedef struct IOpcSignatureRelationshipReferenceEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcSignatureRelationshipReferenceEnumerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcSignatureRelationshipReferenceEnumerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcSignatureRelationshipReferenceEnumerator * This);
	HRESULT(STDMETHODCALLTYPE * MoveNext) (IOpcSignatureRelationshipReferenceEnumerator * This, BOOL * hasNext);
	HRESULT(STDMETHODCALLTYPE * MovePrevious) (IOpcSignatureRelationshipReferenceEnumerator * This, BOOL * hasPrevious);
	HRESULT(STDMETHODCALLTYPE * GetCurrent) (IOpcSignatureRelationshipReferenceEnumerator * This, IOpcSignatureRelationshipReference ** relationshipReference);
	HRESULT(STDMETHODCALLTYPE * Clone) (IOpcSignatureRelationshipReferenceEnumerator * This, IOpcSignatureRelationshipReferenceEnumerator ** copy);
	END_INTERFACE
}  IOpcSignatureRelationshipReferenceEnumeratorVtbl;
interface IOpcSignatureRelationshipReferenceEnumerator
{
	CONST_VTBL struct IOpcSignatureRelationshipReferenceEnumeratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcSignatureRelationshipReferenceEnumerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcSignatureRelationshipReferenceEnumerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcSignatureRelationshipReferenceEnumerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcSignatureRelationshipReferenceEnumerator_MoveNext(This,hasNext) ( (This)->lpVtbl -> MoveNext(This,hasNext) )
#define IOpcSignatureRelationshipReferenceEnumerator_MovePrevious(This,hasPrevious) ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
#define IOpcSignatureRelationshipReferenceEnumerator_GetCurrent(This,relationshipReference) ( (This)->lpVtbl -> GetCurrent(This,relationshipReference) )
#define IOpcSignatureRelationshipReferenceEnumerator_Clone(This,copy) ( (This)->lpVtbl -> Clone(This,copy) )
#endif
#endif
#ifndef __IOpcRelationshipSelectorEnumerator_INTERFACE_DEFINED__
#define __IOpcRelationshipSelectorEnumerator_INTERFACE_DEFINED__
extern const IID IID_IOpcRelationshipSelectorEnumerator;
typedef struct IOpcRelationshipSelectorEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcRelationshipSelectorEnumerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcRelationshipSelectorEnumerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcRelationshipSelectorEnumerator * This);
	HRESULT(STDMETHODCALLTYPE * MoveNext) (IOpcRelationshipSelectorEnumerator * This, BOOL * hasNext);
	HRESULT(STDMETHODCALLTYPE * MovePrevious) (IOpcRelationshipSelectorEnumerator * This, BOOL * hasPrevious);
	HRESULT(STDMETHODCALLTYPE * GetCurrent) (IOpcRelationshipSelectorEnumerator * This, IOpcRelationshipSelector ** relationshipSelector);
	HRESULT(STDMETHODCALLTYPE * Clone) (IOpcRelationshipSelectorEnumerator * This, IOpcRelationshipSelectorEnumerator ** copy);
	END_INTERFACE
}  IOpcRelationshipSelectorEnumeratorVtbl;
interface IOpcRelationshipSelectorEnumerator
{
	CONST_VTBL struct IOpcRelationshipSelectorEnumeratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcRelationshipSelectorEnumerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcRelationshipSelectorEnumerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcRelationshipSelectorEnumerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcRelationshipSelectorEnumerator_MoveNext(This,hasNext) ( (This)->lpVtbl -> MoveNext(This,hasNext) )
#define IOpcRelationshipSelectorEnumerator_MovePrevious(This,hasPrevious) ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
#define IOpcRelationshipSelectorEnumerator_GetCurrent(This,relationshipSelector) ( (This)->lpVtbl -> GetCurrent(This,relationshipSelector) )
#define IOpcRelationshipSelectorEnumerator_Clone(This,copy) ( (This)->lpVtbl -> Clone(This,copy) )
#endif
#endif
#ifndef __IOpcSignatureReferenceEnumerator_INTERFACE_DEFINED__
#define __IOpcSignatureReferenceEnumerator_INTERFACE_DEFINED__
extern const IID IID_IOpcSignatureReferenceEnumerator;
typedef struct IOpcSignatureReferenceEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcSignatureReferenceEnumerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcSignatureReferenceEnumerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcSignatureReferenceEnumerator * This);
	HRESULT(STDMETHODCALLTYPE * MoveNext) (IOpcSignatureReferenceEnumerator * This, BOOL * hasNext);
	HRESULT(STDMETHODCALLTYPE * MovePrevious) (IOpcSignatureReferenceEnumerator * This, BOOL * hasPrevious);
	HRESULT(STDMETHODCALLTYPE * GetCurrent) (IOpcSignatureReferenceEnumerator * This, IOpcSignatureReference ** reference);
	HRESULT(STDMETHODCALLTYPE * Clone) (IOpcSignatureReferenceEnumerator * This, IOpcSignatureReferenceEnumerator ** copy);
	END_INTERFACE
}  IOpcSignatureReferenceEnumeratorVtbl;
interface IOpcSignatureReferenceEnumerator
{
	CONST_VTBL struct IOpcSignatureReferenceEnumeratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcSignatureReferenceEnumerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcSignatureReferenceEnumerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcSignatureReferenceEnumerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcSignatureReferenceEnumerator_MoveNext(This,hasNext) ( (This)->lpVtbl -> MoveNext(This,hasNext) )
#define IOpcSignatureReferenceEnumerator_MovePrevious(This,hasPrevious) ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
#define IOpcSignatureReferenceEnumerator_GetCurrent(This,reference) ( (This)->lpVtbl -> GetCurrent(This,reference) )
#define IOpcSignatureReferenceEnumerator_Clone(This,copy) ( (This)->lpVtbl -> Clone(This,copy) )
#endif
#endif
#ifndef __IOpcSignatureCustomObjectEnumerator_INTERFACE_DEFINED__
#define __IOpcSignatureCustomObjectEnumerator_INTERFACE_DEFINED__
extern const IID IID_IOpcSignatureCustomObjectEnumerator;
typedef struct IOpcSignatureCustomObjectEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcSignatureCustomObjectEnumerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcSignatureCustomObjectEnumerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcSignatureCustomObjectEnumerator * This);
	HRESULT(STDMETHODCALLTYPE * MoveNext) (IOpcSignatureCustomObjectEnumerator * This, BOOL * hasNext);
	HRESULT(STDMETHODCALLTYPE * MovePrevious) (IOpcSignatureCustomObjectEnumerator * This, BOOL * hasPrevious);
	HRESULT(STDMETHODCALLTYPE * GetCurrent) (IOpcSignatureCustomObjectEnumerator * This, IOpcSignatureCustomObject ** customObject);
	HRESULT(STDMETHODCALLTYPE * Clone) (IOpcSignatureCustomObjectEnumerator * This, IOpcSignatureCustomObjectEnumerator ** copy);
	END_INTERFACE
}  IOpcSignatureCustomObjectEnumeratorVtbl;
interface IOpcSignatureCustomObjectEnumerator
{
	CONST_VTBL struct IOpcSignatureCustomObjectEnumeratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcSignatureCustomObjectEnumerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcSignatureCustomObjectEnumerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcSignatureCustomObjectEnumerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcSignatureCustomObjectEnumerator_MoveNext(This,hasNext) ( (This)->lpVtbl -> MoveNext(This,hasNext) )
#define IOpcSignatureCustomObjectEnumerator_MovePrevious(This,hasPrevious) ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
#define IOpcSignatureCustomObjectEnumerator_GetCurrent(This,customObject) ( (This)->lpVtbl -> GetCurrent(This,customObject) )
#define IOpcSignatureCustomObjectEnumerator_Clone(This,copy) ( (This)->lpVtbl -> Clone(This,copy) )
#endif
#endif
#ifndef __IOpcCertificateEnumerator_INTERFACE_DEFINED__
#define __IOpcCertificateEnumerator_INTERFACE_DEFINED__
extern const IID IID_IOpcCertificateEnumerator;
typedef struct IOpcCertificateEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcCertificateEnumerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcCertificateEnumerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcCertificateEnumerator * This);
	HRESULT(STDMETHODCALLTYPE * MoveNext) (IOpcCertificateEnumerator * This, BOOL * hasNext);
	HRESULT(STDMETHODCALLTYPE * MovePrevious) (IOpcCertificateEnumerator * This, BOOL * hasPrevious);
	HRESULT(STDMETHODCALLTYPE * GetCurrent) (IOpcCertificateEnumerator * This, const CERT_CONTEXT ** certificate);
	HRESULT(STDMETHODCALLTYPE * Clone) (IOpcCertificateEnumerator * This, IOpcCertificateEnumerator ** copy);
	END_INTERFACE
}  IOpcCertificateEnumeratorVtbl;
interface IOpcCertificateEnumerator
{
	CONST_VTBL struct IOpcCertificateEnumeratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcCertificateEnumerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcCertificateEnumerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcCertificateEnumerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcCertificateEnumerator_MoveNext(This,hasNext) ( (This)->lpVtbl -> MoveNext(This,hasNext) )
#define IOpcCertificateEnumerator_MovePrevious(This,hasPrevious) ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
#define IOpcCertificateEnumerator_GetCurrent(This,certificate) ( (This)->lpVtbl -> GetCurrent(This,certificate) )
#define IOpcCertificateEnumerator_Clone(This,copy) ( (This)->lpVtbl -> Clone(This,copy) )
#endif
#endif
#ifndef __IOpcDigitalSignatureEnumerator_INTERFACE_DEFINED__
#define __IOpcDigitalSignatureEnumerator_INTERFACE_DEFINED__
extern const IID IID_IOpcDigitalSignatureEnumerator;
typedef struct IOpcDigitalSignatureEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcDigitalSignatureEnumerator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcDigitalSignatureEnumerator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcDigitalSignatureEnumerator * This);
	HRESULT(STDMETHODCALLTYPE * MoveNext) (IOpcDigitalSignatureEnumerator * This, BOOL * hasNext);
	HRESULT(STDMETHODCALLTYPE * MovePrevious) (IOpcDigitalSignatureEnumerator * This, BOOL * hasPrevious);
	HRESULT(STDMETHODCALLTYPE * GetCurrent) (IOpcDigitalSignatureEnumerator * This, IOpcDigitalSignature ** digitalSignature);
	HRESULT(STDMETHODCALLTYPE * Clone) (IOpcDigitalSignatureEnumerator * This, IOpcDigitalSignatureEnumerator ** copy);
	END_INTERFACE
}  IOpcDigitalSignatureEnumeratorVtbl;
interface IOpcDigitalSignatureEnumerator
{
	CONST_VTBL struct IOpcDigitalSignatureEnumeratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcDigitalSignatureEnumerator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcDigitalSignatureEnumerator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcDigitalSignatureEnumerator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcDigitalSignatureEnumerator_MoveNext(This,hasNext) ( (This)->lpVtbl -> MoveNext(This,hasNext) )
#define IOpcDigitalSignatureEnumerator_MovePrevious(This,hasPrevious) ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
#define IOpcDigitalSignatureEnumerator_GetCurrent(This,digitalSignature) ( (This)->lpVtbl -> GetCurrent(This,digitalSignature) )
#define IOpcDigitalSignatureEnumerator_Clone(This,copy) ( (This)->lpVtbl -> Clone(This,copy) )
#endif
#endif
#ifndef __IOpcSignaturePartReferenceSet_INTERFACE_DEFINED__
#define __IOpcSignaturePartReferenceSet_INTERFACE_DEFINED__
extern const IID IID_IOpcSignaturePartReferenceSet;
typedef struct IOpcSignaturePartReferenceSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcSignaturePartReferenceSet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcSignaturePartReferenceSet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcSignaturePartReferenceSet * This);
	HRESULT(STDMETHODCALLTYPE * Create) (IOpcSignaturePartReferenceSet * This, IOpcPartUri * partUri, LPCWSTR digestMethod, OPC_CANONICALIZATION_METHOD transformMethod, IOpcSignaturePartReference ** partReference);
	HRESULT(STDMETHODCALLTYPE * Delete) (IOpcSignaturePartReferenceSet * This, IOpcSignaturePartReference * partReference);
	HRESULT(STDMETHODCALLTYPE * GetEnumerator) (IOpcSignaturePartReferenceSet * This, IOpcSignaturePartReferenceEnumerator ** partReferenceEnumerator);
	END_INTERFACE
}  IOpcSignaturePartReferenceSetVtbl;
interface IOpcSignaturePartReferenceSet
{
	CONST_VTBL struct IOpcSignaturePartReferenceSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcSignaturePartReferenceSet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcSignaturePartReferenceSet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcSignaturePartReferenceSet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcSignaturePartReferenceSet_Create(This,partUri,digestMethod,transformMethod,partReference) ( (This)->lpVtbl -> Create(This,partUri,digestMethod,transformMethod,partReference) )
#define IOpcSignaturePartReferenceSet_Delete(This,partReference) ( (This)->lpVtbl -> Delete(This,partReference) )
#define IOpcSignaturePartReferenceSet_GetEnumerator(This,partReferenceEnumerator) ( (This)->lpVtbl -> GetEnumerator(This,partReferenceEnumerator) )
#endif
#endif
#ifndef __IOpcSignatureRelationshipReferenceSet_INTERFACE_DEFINED__
#define __IOpcSignatureRelationshipReferenceSet_INTERFACE_DEFINED__
extern const IID IID_IOpcSignatureRelationshipReferenceSet;
typedef struct IOpcSignatureRelationshipReferenceSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcSignatureRelationshipReferenceSet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcSignatureRelationshipReferenceSet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcSignatureRelationshipReferenceSet * This);
	HRESULT(STDMETHODCALLTYPE * Create) (IOpcSignatureRelationshipReferenceSet * This, IOpcUri * sourceUri, LPCWSTR digestMethod, OPC_RELATIONSHIPS_SIGNING_OPTION relationshipSigningOption, IOpcRelationshipSelectorSet * selectorSet, OPC_CANONICALIZATION_METHOD transformMethod, IOpcSignatureRelationshipReference ** relationshipReference);
	HRESULT(STDMETHODCALLTYPE * CreateRelationshipSelectorSet) (IOpcSignatureRelationshipReferenceSet * This, IOpcRelationshipSelectorSet ** selectorSet);
	HRESULT(STDMETHODCALLTYPE * Delete) (IOpcSignatureRelationshipReferenceSet * This, IOpcSignatureRelationshipReference * relationshipReference);
	HRESULT(STDMETHODCALLTYPE * GetEnumerator) (IOpcSignatureRelationshipReferenceSet * This, IOpcSignatureRelationshipReferenceEnumerator ** relationshipReferenceEnumerator);
	END_INTERFACE
}  IOpcSignatureRelationshipReferenceSetVtbl;
interface IOpcSignatureRelationshipReferenceSet
{
	CONST_VTBL struct IOpcSignatureRelationshipReferenceSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcSignatureRelationshipReferenceSet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcSignatureRelationshipReferenceSet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcSignatureRelationshipReferenceSet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcSignatureRelationshipReferenceSet_Create(This,sourceUri,digestMethod,relationshipSigningOption,selectorSet,transformMethod,relationshipReference) ( (This)->lpVtbl -> Create(This,sourceUri,digestMethod,relationshipSigningOption,selectorSet,transformMethod,relationshipReference) )
#define IOpcSignatureRelationshipReferenceSet_CreateRelationshipSelectorSet(This,selectorSet) ( (This)->lpVtbl -> CreateRelationshipSelectorSet(This,selectorSet) )
#define IOpcSignatureRelationshipReferenceSet_Delete(This,relationshipReference) ( (This)->lpVtbl -> Delete(This,relationshipReference) )
#define IOpcSignatureRelationshipReferenceSet_GetEnumerator(This,relationshipReferenceEnumerator) ( (This)->lpVtbl -> GetEnumerator(This,relationshipReferenceEnumerator) )
#endif
#endif
#ifndef __IOpcRelationshipSelectorSet_INTERFACE_DEFINED__
#define __IOpcRelationshipSelectorSet_INTERFACE_DEFINED__
extern const IID IID_IOpcRelationshipSelectorSet;
typedef struct IOpcRelationshipSelectorSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcRelationshipSelectorSet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcRelationshipSelectorSet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcRelationshipSelectorSet * This);
	HRESULT(STDMETHODCALLTYPE * Create) (IOpcRelationshipSelectorSet * This, OPC_RELATIONSHIP_SELECTOR selector, LPCWSTR selectionCriterion, IOpcRelationshipSelector ** relationshipSelector);
	HRESULT(STDMETHODCALLTYPE * Delete) (IOpcRelationshipSelectorSet * This, IOpcRelationshipSelector * relationshipSelector);
	HRESULT(STDMETHODCALLTYPE * GetEnumerator) (IOpcRelationshipSelectorSet * This, IOpcRelationshipSelectorEnumerator ** relationshipSelectorEnumerator);
	END_INTERFACE
}  IOpcRelationshipSelectorSetVtbl;
interface IOpcRelationshipSelectorSet
{
	CONST_VTBL struct IOpcRelationshipSelectorSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcRelationshipSelectorSet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcRelationshipSelectorSet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcRelationshipSelectorSet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcRelationshipSelectorSet_Create(This,selector,selectionCriterion,relationshipSelector) ( (This)->lpVtbl -> Create(This,selector,selectionCriterion,relationshipSelector) )
#define IOpcRelationshipSelectorSet_Delete(This,relationshipSelector) ( (This)->lpVtbl -> Delete(This,relationshipSelector) )
#define IOpcRelationshipSelectorSet_GetEnumerator(This,relationshipSelectorEnumerator) ( (This)->lpVtbl -> GetEnumerator(This,relationshipSelectorEnumerator) )
#endif
#endif
#ifndef __IOpcSignatureReferenceSet_INTERFACE_DEFINED__
#define __IOpcSignatureReferenceSet_INTERFACE_DEFINED__
extern const IID IID_IOpcSignatureReferenceSet;
typedef struct IOpcSignatureReferenceSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcSignatureReferenceSet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcSignatureReferenceSet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcSignatureReferenceSet * This);
	HRESULT(STDMETHODCALLTYPE * Create) (IOpcSignatureReferenceSet * This, IUri * referenceUri, LPCWSTR referenceId, LPCWSTR type, LPCWSTR digestMethod, OPC_CANONICALIZATION_METHOD transformMethod, IOpcSignatureReference ** reference);
	HRESULT(STDMETHODCALLTYPE * Delete) (IOpcSignatureReferenceSet * This, IOpcSignatureReference * reference);
	HRESULT(STDMETHODCALLTYPE * GetEnumerator) (IOpcSignatureReferenceSet * This, IOpcSignatureReferenceEnumerator ** referenceEnumerator);
	END_INTERFACE
}  IOpcSignatureReferenceSetVtbl;
interface IOpcSignatureReferenceSet
{
	CONST_VTBL struct IOpcSignatureReferenceSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcSignatureReferenceSet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcSignatureReferenceSet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcSignatureReferenceSet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcSignatureReferenceSet_Create(This,referenceUri,referenceId,type,digestMethod,transformMethod,reference) ( (This)->lpVtbl -> Create(This,referenceUri,referenceId,type,digestMethod,transformMethod,reference) )
#define IOpcSignatureReferenceSet_Delete(This,reference) ( (This)->lpVtbl -> Delete(This,reference) )
#define IOpcSignatureReferenceSet_GetEnumerator(This,referenceEnumerator) ( (This)->lpVtbl -> GetEnumerator(This,referenceEnumerator) )
#endif
#endif
#ifndef __IOpcSignatureCustomObjectSet_INTERFACE_DEFINED__
#define __IOpcSignatureCustomObjectSet_INTERFACE_DEFINED__
extern const IID IID_IOpcSignatureCustomObjectSet;
typedef struct IOpcSignatureCustomObjectSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcSignatureCustomObjectSet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcSignatureCustomObjectSet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcSignatureCustomObjectSet * This);
	HRESULT(STDMETHODCALLTYPE * Create) (IOpcSignatureCustomObjectSet * This, const UINT8 * xmlMarkup, UINT32 count, IOpcSignatureCustomObject ** customObject);
	HRESULT(STDMETHODCALLTYPE * Delete) (IOpcSignatureCustomObjectSet * This, IOpcSignatureCustomObject * customObject);
	HRESULT(STDMETHODCALLTYPE * GetEnumerator) (IOpcSignatureCustomObjectSet * This, IOpcSignatureCustomObjectEnumerator ** customObjectEnumerator);
	END_INTERFACE
}  IOpcSignatureCustomObjectSetVtbl;
interface IOpcSignatureCustomObjectSet
{
	CONST_VTBL struct IOpcSignatureCustomObjectSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcSignatureCustomObjectSet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcSignatureCustomObjectSet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcSignatureCustomObjectSet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcSignatureCustomObjectSet_Create(This,xmlMarkup,count,customObject) ( (This)->lpVtbl -> Create(This,xmlMarkup,count,customObject) )
#define IOpcSignatureCustomObjectSet_Delete(This,customObject) ( (This)->lpVtbl -> Delete(This,customObject) )
#define IOpcSignatureCustomObjectSet_GetEnumerator(This,customObjectEnumerator) ( (This)->lpVtbl -> GetEnumerator(This,customObjectEnumerator) )
#endif
#endif
#ifndef __IOpcCertificateSet_INTERFACE_DEFINED__
#define __IOpcCertificateSet_INTERFACE_DEFINED__
extern const IID IID_IOpcCertificateSet;
typedef struct IOpcCertificateSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcCertificateSet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcCertificateSet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcCertificateSet * This);
	HRESULT(STDMETHODCALLTYPE * Add) (IOpcCertificateSet * This, const CERT_CONTEXT * certificate);
	HRESULT(STDMETHODCALLTYPE * Remove) (IOpcCertificateSet * This, const CERT_CONTEXT * certificate);
	HRESULT(STDMETHODCALLTYPE * GetEnumerator) (IOpcCertificateSet * This, IOpcCertificateEnumerator ** certificateEnumerator);
	END_INTERFACE
}  IOpcCertificateSetVtbl;
interface IOpcCertificateSet
{
	CONST_VTBL struct IOpcCertificateSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcCertificateSet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcCertificateSet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcCertificateSet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcCertificateSet_Add(This,certificate) ( (This)->lpVtbl -> Add(This,certificate) )
#define IOpcCertificateSet_Remove(This,certificate) ( (This)->lpVtbl -> Remove(This,certificate) )
#define IOpcCertificateSet_GetEnumerator(This,certificateEnumerator) ( (This)->lpVtbl -> GetEnumerator(This,certificateEnumerator) )
#endif
#endif
#ifndef __IOpcFactory_INTERFACE_DEFINED__
#define __IOpcFactory_INTERFACE_DEFINED__
extern const IID IID_IOpcFactory;
typedef struct IOpcFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpcFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpcFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpcFactory * This);
	HRESULT(STDMETHODCALLTYPE * CreatePackageRootUri) (IOpcFactory * This, IOpcUri ** rootUri);
	HRESULT(STDMETHODCALLTYPE * CreatePartUri) (IOpcFactory * This, LPCWSTR pwzUri, IOpcPartUri ** partUri);
	HRESULT(STDMETHODCALLTYPE * CreateStreamOnFile) (IOpcFactory * This, LPCWSTR filename, OPC_STREAM_IO_MODE ioMode, LPSECURITY_ATTRIBUTES securityAttributes, DWORD dwFlagsAndAttributes, IStream ** stream);
	HRESULT(STDMETHODCALLTYPE * CreatePackage) (IOpcFactory * This, IOpcPackage ** package);
	HRESULT(STDMETHODCALLTYPE * ReadPackageFromStream) (IOpcFactory * This, IStream * stream, OPC_READ_FLAGS flags, IOpcPackage ** package);
	HRESULT(STDMETHODCALLTYPE * WritePackageToStream) (IOpcFactory * This, IOpcPackage * package, OPC_WRITE_FLAGS flags, IStream * stream);
	HRESULT(STDMETHODCALLTYPE * CreateDigitalSignatureManager) (IOpcFactory * This, IOpcPackage * package, IOpcDigitalSignatureManager ** signatureManager);
	END_INTERFACE
}  IOpcFactoryVtbl;
interface IOpcFactory
{
	CONST_VTBL struct IOpcFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpcFactory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpcFactory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpcFactory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpcFactory_CreatePackageRootUri(This,rootUri) ( (This)->lpVtbl -> CreatePackageRootUri(This,rootUri) )
#define IOpcFactory_CreatePartUri(This,pwzUri,partUri) ( (This)->lpVtbl -> CreatePartUri(This,pwzUri,partUri) )
#define IOpcFactory_CreateStreamOnFile(This,filename,ioMode,securityAttributes,dwFlagsAndAttributes,stream) ( (This)->lpVtbl -> CreateStreamOnFile(This,filename,ioMode,securityAttributes,dwFlagsAndAttributes,stream) )
#define IOpcFactory_CreatePackage(This,package) ( (This)->lpVtbl -> CreatePackage(This,package) )
#define IOpcFactory_ReadPackageFromStream(This,stream,flags,package) ( (This)->lpVtbl -> ReadPackageFromStream(This,stream,flags,package) )
#define IOpcFactory_WritePackageToStream(This,package,flags,stream) ( (This)->lpVtbl -> WritePackageToStream(This,package,flags,stream) )
#define IOpcFactory_CreateDigitalSignatureManager(This,package,signatureManager) ( (This)->lpVtbl -> CreateDigitalSignatureManager(This,package,signatureManager) )
#endif
#endif
extern const CLSID CLSID_OpcFactory;
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_msopc_0001_0096_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msopc_0001_0096_v0_0_s_ifspec;
#endif
