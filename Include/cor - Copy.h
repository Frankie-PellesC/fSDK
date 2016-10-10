/*+@@file@@----------------------------------------------------------------*//*!
 \file		cor.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 22:01:48 2016
 \date		Modified on Sun Jul  3 22:01:48 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _COR_H_
#define _COR_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <ole2.h>
#include "corerror.h"
EXTERN_GUID(LIBID_ComPlusRuntime, 0xbed7f4ea, 0x1a96, 0x11d2, 0x8f, 0x8, 0x0, 0xa0, 0xc9, 0xa6, 0x18, 0x6d);
EXTERN_GUID(GUID_ExportedFromComPlus, 0x90883f05, 0x3d28, 0x11d2, 0x8f, 0x17, 0x0, 0xa0, 0xc9, 0xa6, 0x18, 0x6d);
EXTERN_GUID(GUID_ManagedName, 0xf21f359, 0xab84, 0x41e8, 0x9a, 0x78, 0x36, 0xd1, 0x10, 0xe6, 0xd2, 0xf9);
EXTERN_GUID(GUID_Function2Getter, 0x54fc8f55, 0x38de, 0x4703, 0x9c, 0x4e, 0x25, 0x3, 0x51, 0x30, 0x2b, 0x1c);
EXTERN_GUID(CLSID_CorMetaDataDispenserRuntime, 0x1ec2de53, 0x75cc, 0x11d2, 0x97, 0x75, 0x0, 0xa0, 0xc9, 0xb4, 0xd5, 0xc);
EXTERN_GUID(GUID_DispIdOverride, 0xcd2bc5c9, 0xf452, 0x4326, 0xb7, 0x14, 0xf9, 0xc5, 0x39, 0xd4, 0xda, 0x58);
EXTERN_GUID(GUID_ForceIEnumerable, 0xb64784eb, 0xd8d4, 0x4d9b, 0x9a, 0xcd, 0x0e, 0x30, 0x80, 0x64, 0x26, 0xf7);
EXTERN_GUID(GUID_PropGetCA, 0x2941ff83, 0x88d8, 0x4f73, 0xb6, 0xa9, 0xbd, 0xf8, 0x71, 0x2d, 0x00, 0x0d);
EXTERN_GUID(GUID_PropPutCA, 0x29533527, 0x3683, 0x4364, 0xab, 0xc0, 0xdb, 0x1a, 0xdd, 0x82, 0x2f, 0xa2);
EXTERN_GUID(CLSID_CLR_v1_MetaData, 0x005023ca, 0x72b1, 0x11d3, 0x9f, 0xc4, 0x0, 0xc0, 0x4f, 0x79, 0xa0, 0xa3);
EXTERN_GUID(CLSID_CLR_v2_MetaData, 0xefea471a, 0x44fd, 0x4862, 0x92, 0x92, 0xc, 0x58, 0xd4, 0x6e, 0x1f, 0x3a);
#define CLSID_CorMetaDataRuntime CLSID_CLR_v2_MetaData
EXTERN_GUID(MetaDataCheckDuplicatesFor, 0x30fe7be8, 0xd7d9, 0x11d2, 0x9f, 0x80, 0x0, 0xc0, 0x4f, 0x79, 0xa0, 0xa3);
EXTERN_GUID(MetaDataRefToDefCheck, 0xde3856f8, 0xd7d9, 0x11d2, 0x9f, 0x80, 0x0, 0xc0, 0x4f, 0x79, 0xa0, 0xa3);
EXTERN_GUID(MetaDataNotificationForTokenMovement, 0xe5d71a4c, 0xd7da, 0x11d2, 0x9f, 0x80, 0x0, 0xc0, 0x4f, 0x79, 0xa0, 0xa3);
EXTERN_GUID(MetaDataSetUpdate, 0x2eee315c, 0xd7db, 0x11d2, 0x9f, 0x80, 0x0, 0xc0, 0x4f, 0x79, 0xa0, 0xa3);
#define MetaDataSetENC MetaDataSetUpdate
EXTERN_GUID(MetaDataImportOption, 0x79700f36, 0x4aac, 0x11d3, 0x84, 0xc3, 0x0, 0x90, 0x27, 0x86, 0x8c, 0xb1);
EXTERN_GUID(MetaDataThreadSafetyOptions, 0xf7559806, 0xf266, 0x42ea, 0x8c, 0x63, 0xa, 0xdb, 0x45, 0xe8, 0xb2, 0x34);
EXTERN_GUID(MetaDataErrorIfEmitOutOfOrder, 0x1547872d, 0xdc03, 0x11d2, 0x94, 0x20, 0x0, 0x0, 0xf8, 0x8, 0x34, 0x60);
EXTERN_GUID(MetaDataGenerateTCEAdapters, 0xdcc9de90, 0x4151, 0x11d3, 0x88, 0xd6, 0x0, 0x90, 0x27, 0x54, 0xc4, 0x3a);
EXTERN_GUID(MetaDataTypeLibImportNamespace, 0xf17ff889, 0x5a63, 0x11d3, 0x9f, 0xf2, 0x0, 0xc0, 0x4f, 0xf7, 0x43, 0x1a);
EXTERN_GUID(MetaDataLinkerOptions, 0x47e099b6, 0xae7c, 0x4797, 0x83, 0x17, 0xb4, 0x8a, 0xa6, 0x45, 0xb8, 0xf9);
EXTERN_GUID(MetaDataRuntimeVersion, 0x47e099b7, 0xae7c, 0x4797, 0x83, 0x17, 0xb4, 0x8a, 0xa6, 0x45, 0xb8, 0xf9);
EXTERN_GUID(MetaDataMergerOptions, 0x132d3a6e, 0xb35d, 0x464e, 0x95, 0x1a, 0x42, 0xef, 0xb9, 0xfb, 0x66, 0x1);
typedef interface IMetaDataImport IMetaDataImport;
typedef interface IMetaDataAssemblyEmit IMetaDataAssemblyEmit;
typedef interface IMetaDataAssemblyImport IMetaDataAssemblyImport;
typedef interface IMetaDataEmit IMetaDataEmit;
typedef interface ICeeGen ICeeGen;
typedef UNALIGNED void const *UVCP_CONSTANT;
#define INVALID_CONNECTION_ID   0x0
#define INVALID_TASK_ID         0x0 
#define MAX_CONNECTION_NAME     MAX_PATH
BOOL STDMETHODCALLTYPE _CorDllMain(HINSTANCE hInst, DWORD dwReason, LPVOID lpReserved);
__int32 STDMETHODCALLTYPE _CorExeMain();
__int32 STDMETHODCALLTYPE _CorExeMainInternal();
__int32 STDMETHODCALLTYPE _CorExeMain2(PBYTE pUnmappedPE, DWORD cUnmappedPE, LPWSTR pImageNameIn, LPWSTR pLoadersFileName, LPWSTR pCmdLine);
STDAPI _CorValidateImage(PVOID *ImageBase, LPCWSTR FileName);
STDAPI_(VOID)_CorImageUnloading(PVOID ImageBase);
STDAPI CoInitializeEE(DWORD fFlags);
STDAPI_(void) CoUninitializeEE(BOOL fFlags);
STDAPI_(void) CoEEShutDownCOM(void);
#ifdef FEATURE_MAIN_CLR_MODULE_USES_CORE_NAME
#define MAIN_CLR_MODULE_NAME_W		L"coreclr"
#define MAIN_CLR_MODULE_NAME_A		"coreclr"
#ifndef __APPLE__
#define MAIN_CLR_DLL_NAME_W			MAKEDLLNAME_W(MAIN_CLR_MODULE_NAME_W)
#define MAIN_CLR_DLL_NAME_A			MAKEDLLNAME_A(MAIN_CLR_MODULE_NAME_A)
#else
#define MAIN_CLR_DLL_NAME_W			L"CoreCLR"
#define MAIN_CLR_DLL_NAME_A			"CoreCLR"
#endif
#else
#define MAIN_CLR_MODULE_NAME_W		L"clr"
#define MAIN_CLR_MODULE_NAME_A		"clr"
#define MAIN_CLR_DLL_NAME_W			MAKEDLLNAME_W(MAIN_CLR_MODULE_NAME_W)
#define MAIN_CLR_DLL_NAME_A			MAKEDLLNAME_A(MAIN_CLR_MODULE_NAME_A)
#endif
#ifdef FEATURE_CORECLR
#define MSCOREE_SHIM_W				MAIN_CLR_DLL_NAME_W
#define MSCOREE_SHIM_A				MAIN_CLR_DLL_NAME_A
#else
#ifndef FEATURE_PAL
#define MSCOREE_SHIM_W				L"mscoree.dll"
#define MSCOREE_SHIM_A				"mscoree.dll"
#else
#define MSCOREE_SHIM_W 				MAKEDLLNAME_W(L"sscoree")
#define MSCOREE_SHIM_A				MAKEDLLNAME_A("sscoree")
#endif
#endif
#define SWITCHOUT_HANDLE_VALUE ((HANDLE)(LONG_PTR)-2)
typedef enum tagCOINITCOR
{
    COINITCOR_DEFAULT       = 0x0
} COINITICOR;
typedef enum tagCOINITEE
{
    COINITEE_DEFAULT        = 0x0,
    COINITEE_DLL            = 0x1,
    COINITEE_MAIN           = 0x2
} COINITIEE;
typedef enum tagCOUNINITEE
{
    COUNINITEE_DEFAULT      = 0x0,
    COUNINITEE_DLL          = 0x1
} COUNINITIEE;
#ifndef _WINDOWS_UPDATES_
#include <corhdr.h>
#endif
STDAPI          CoInitializeCor(DWORD fFlags);
STDAPI_(void)   CoUninitializeCor(void);
EXTERN_GUID(CLSID_Cor, 0xbee00010, 0xee77, 0x11d0, 0xa0, 0x15, 0x00, 0xc0, 0x4f, 0xbb, 0xb8, 0x84);
EXTERN_GUID(CLSID_CorMetaDataDispenser, 0xe5cb7a31, 0x7512, 0x11d2, 0x89, 0xce, 0x0, 0x80, 0xc7, 0x92, 0xe5, 0xd8);
EXTERN_GUID(CLSID_CorMetaDataDispenserReg, 0x435755ff, 0x7397, 0x11d2, 0x97, 0x71, 0x0, 0xa0, 0xc9, 0xb4, 0xd5, 0xc);
EXTERN_GUID(CLSID_CorMetaDataReg, 0x87f3a1f5, 0x7397, 0x11d2, 0x97, 0x71, 0x0, 0xa0, 0xc9, 0xb4, 0xd5, 0xc);
interface IMetaDataDispenser;
EXTERN_GUID(IID_IMetaDataError, 0xb81ff171, 0x20f3, 0x11d2, 0x8d, 0xcc, 0x0, 0xa0, 0xc9, 0xb0, 0x9c, 0x19);
typedef interface IMetaDataError IMetaDataError;
typedef struct IMetaDataErrorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMetaDataError *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMetaDataError *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMetaDataError *This);
    STDMETHOD(OnError)(IMetaDataError *This, HRESULT hrError, mdToken token);
	END_INTERFACE
}  IMetaDataErrorVtbl;
interface IMetaDataError
{
	CONST_VTBL struct IMetaDataErrorVtbl *lpVtbl;
};
EXTERN_GUID(IID_IMapToken, 0x6a3ea8b, 0x225, 0x11d1, 0xbf, 0x72, 0x0, 0xc0, 0x4f, 0xc3, 0x1e, 0x12);
typedef interface IMapToken IMapToken;
typedef struct IMapTokenVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMapToken *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMapToken *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMapToken *This);
    STDMETHOD(Map)(IMapToken *This, mdToken tkImp, mdToken tkEmit) ;
	END_INTERFACE
}  IMapTokenVtbl;
interface IMapToken
{
	CONST_VTBL struct IMapTokenVtbl *lpVtbl;
};
EXTERN_GUID(IID_IMetaDataDispenser, 0x809c652e, 0x7396, 0x11d2, 0x97, 0x71, 0x00, 0xa0, 0xc9, 0xb4, 0xd5, 0x0c);
typedef interface IMetaDataDispenser IMetaDataDispenser;
typedef struct IMetaDataDispenserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMetaDataDispenser *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMetaDataDispenser *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMetaDataDispenser *This);
	STDMETHOD(DefineScope) (IMetaDataDispenser *This, REFCLSID rclsid, DWORD dwCreateFlags, REFIID riid, IUnknown ** ppIUnk);
	STDMETHOD(OpenScope) (IMetaDataDispenser *This, LPCWSTR szScope, DWORD dwOpenFlags, REFIID riid, IUnknown ** ppIUnk);
	STDMETHOD(OpenScopeOnMemory) (IMetaDataDispenser *This, LPCVOID pData, ULONG cbData, DWORD dwOpenFlags, REFIID riid, IUnknown ** ppIUnk);
}  IMetaDataDispenserVtbl;
interface IMetaDataDispenser
{
	CONST_VTBL struct IMetaDataDispenserVtbl *lpVtbl;
};
EXTERN_GUID(IID_IMetaDataEmit, 0xba3fee4c, 0xecb9, 0x4e41, 0x83, 0xb7, 0x18, 0x3f, 0xa4, 0x1c, 0xd8, 0x59);
#undef  INTERFACE
#define INTERFACE IMetaDataEmit
DECLARE_INTERFACE_(IMetaDataEmit, IUnknown)
{
	STDMETHOD(SetModuleProps) (LPCWSTR szName);
	STDMETHOD(Save) (LPCWSTR szFile, DWORD dwSaveFlags);
	STDMETHOD(SaveToStream) (IStream * pIStream, DWORD dwSaveFlags);
	STDMETHOD(GetSaveSize) (CorSaveSize fSave, DWORD * pdwSaveSize);
	STDMETHOD(DefineTypeDef) (LPCWSTR szTypeDef, DWORD dwTypeDefFlags, mdToken tkExtends, mdToken rtkImplements[], mdTypeDef * ptd);
	STDMETHOD(DefineNestedType) (LPCWSTR szTypeDef, DWORD dwTypeDefFlags, mdToken tkExtends, mdToken rtkImplements[], mdTypeDef tdEncloser, mdTypeDef * ptd);
	STDMETHOD(SetHandler) (IUnknown * pUnk);
	STDMETHOD(DefineMethod) (mdTypeDef td, LPCWSTR szName, DWORD dwMethodFlags, PCCOR_SIGNATURE pvSigBlob, ULONG cbSigBlob, ULONG ulCodeRVA, DWORD dwImplFlags, mdMethodDef * pmd);
	STDMETHOD(DefineMethodImpl) (mdTypeDef td, mdToken tkBody, mdToken tkDecl);
	STDMETHOD(DefineTypeRefByName) (mdToken tkResolutionScope, LPCWSTR szName, mdTypeRef * ptr);
	STDMETHOD(DefineImportType) (IMetaDataAssemblyImport * pAssemImport, const void *pbHashValue, ULONG cbHashValue, IMetaDataImport * pImport, mdTypeDef tdImport, IMetaDataAssemblyEmit * pAssemEmit, mdTypeRef * ptr);
	STDMETHOD(DefineMemberRef) (mdToken tkImport, LPCWSTR szName, PCCOR_SIGNATURE pvSigBlob, ULONG cbSigBlob, mdMemberRef * pmr);
	STDMETHOD(DefineImportMember) (IMetaDataAssemblyImport * pAssemImport, const void *pbHashValue, ULONG cbHashValue, IMetaDataImport * pImport, mdToken mbMember, IMetaDataAssemblyEmit * pAssemEmit, mdToken tkParent, mdMemberRef * pmr);
	STDMETHOD(DefineEvent) (mdTypeDef td, LPCWSTR szEvent, DWORD dwEventFlags, mdToken tkEventType, mdMethodDef mdAddOn, mdMethodDef mdRemoveOn, mdMethodDef mdFire, mdMethodDef rmdOtherMethods[], mdEvent * pmdEvent);
	STDMETHOD(SetClassLayout) (mdTypeDef td, DWORD dwPackSize, COR_FIELD_OFFSET rFieldOffsets[], ULONG ulClassSize);
	STDMETHOD(DeleteClassLayout) (mdTypeDef td);
	STDMETHOD(SetFieldMarshal) (mdToken tk, PCCOR_SIGNATURE pvNativeType, ULONG cbNativeType);
	STDMETHOD(DeleteFieldMarshal) (mdToken tk);
	STDMETHOD(DefinePermissionSet) (mdToken tk, DWORD dwAction, void const *pvPermission, ULONG cbPermission, mdPermission * ppm);
	STDMETHOD(SetRVA) (mdMethodDef md, ULONG ulRVA);
	STDMETHOD(GetTokenFromSig) (PCCOR_SIGNATURE pvSig, ULONG cbSig, mdSignature * pmsig);
	STDMETHOD(DefineModuleRef) (LPCWSTR szName, mdModuleRef * pmur);
	STDMETHOD(SetParent) (mdMemberRef mr, mdToken tk);
	STDMETHOD(GetTokenFromTypeSpec) (PCCOR_SIGNATURE pvSig, ULONG cbSig, mdTypeSpec * ptypespec);
	STDMETHOD(SaveToMemory) (void *pbData, ULONG cbData);
	STDMETHOD(DefineUserString) (LPCWSTR szString, ULONG cchString, mdString * pstk);
	STDMETHOD(DeleteToken) (mdToken tkObj);
	STDMETHOD(SetMethodProps) (mdMethodDef md, DWORD dwMethodFlags, ULONG ulCodeRVA, DWORD dwImplFlags);
	STDMETHOD(SetTypeDefProps) (mdTypeDef td, DWORD dwTypeDefFlags, mdToken tkExtends, mdToken rtkImplements[]);
	STDMETHOD(SetEventProps) (mdEvent ev, DWORD dwEventFlags, mdToken tkEventType, mdMethodDef mdAddOn, mdMethodDef mdRemoveOn, mdMethodDef mdFire, mdMethodDef rmdOtherMethods[]);
	STDMETHOD(SetPermissionSetProps) (mdToken tk, DWORD dwAction, void const *pvPermission, ULONG cbPermission, mdPermission * ppm);
	STDMETHOD(DefinePinvokeMap) (mdToken tk, DWORD dwMappingFlags, LPCWSTR szImportName, mdModuleRef mrImportDLL);
	STDMETHOD(SetPinvokeMap) (mdToken tk, DWORD dwMappingFlags, LPCWSTR szImportName, mdModuleRef mrImportDLL);
	STDMETHOD(DeletePinvokeMap) (mdToken tk);
	STDMETHOD(DefineCustomAttribute) (mdToken tkObj, mdToken tkType, void const *pCustomAttribute, ULONG cbCustomAttribute, mdCustomAttribute * pcv);
	STDMETHOD(SetCustomAttributeValue) (mdCustomAttribute pcv, void const *pCustomAttribute, ULONG cbCustomAttribute);
	STDMETHOD(DefineField) (mdTypeDef td, LPCWSTR szName, DWORD dwFieldFlags, PCCOR_SIGNATURE pvSigBlob, ULONG cbSigBlob, DWORD dwCPlusTypeFlag, void const *pValue, ULONG cchValue, mdFieldDef * pmd);
	STDMETHOD(DefineProperty) (mdTypeDef td, LPCWSTR szProperty, DWORD dwPropFlags, PCCOR_SIGNATURE pvSig, ULONG cbSig, DWORD dwCPlusTypeFlag, void const *pValue, ULONG cchValue, mdMethodDef mdSetter, mdMethodDef mdGetter, mdMethodDef rmdOtherMethods[], mdProperty * pmdProp);
	STDMETHOD(DefineParam) (mdMethodDef md, ULONG ulParamSeq, LPCWSTR szName, DWORD dwParamFlags, DWORD dwCPlusTypeFlag, void const *pValue, ULONG cchValue, mdParamDef * ppd);
	STDMETHOD(SetFieldProps) (mdFieldDef fd, DWORD dwFieldFlags, DWORD dwCPlusTypeFlag, void const *pValue, ULONG cchValue);
	STDMETHOD(SetPropertyProps) (mdProperty pr, DWORD dwPropFlags, DWORD dwCPlusTypeFlag, void const *pValue, ULONG cchValue, mdMethodDef mdSetter, mdMethodDef mdGetter, mdMethodDef rmdOtherMethods[]);
	STDMETHOD(SetParamProps) (mdParamDef pd, LPCWSTR szName, DWORD dwParamFlags, DWORD dwCPlusTypeFlag, void const *pValue, ULONG cchValue);
	STDMETHOD(DefineSecurityAttributeSet) (mdToken tkObj, COR_SECATTR rSecAttrs[], ULONG cSecAttrs, ULONG * pulErrorAttr);
	STDMETHOD(ApplyEditAndContinue) (IUnknown * pImport);
	STDMETHOD(TranslateSigWithScope) (IMetaDataAssemblyImport * pAssemImport, const void *pbHashValue, ULONG cbHashValue, IMetaDataImport * import, PCCOR_SIGNATURE pbSigBlob, ULONG cbSigBlob, IMetaDataAssemblyEmit * pAssemEmit, IMetaDataEmit * emit, PCOR_SIGNATURE pvTranslatedSig, ULONG cbTranslatedSigMax, ULONG * pcbTranslatedSig);
	STDMETHOD(SetMethodImplFlags) (mdMethodDef md, DWORD dwImplFlags);
	STDMETHOD(SetFieldRVA) (mdFieldDef fd, ULONG ulRVA);
	STDMETHOD(Merge) (IMetaDataImport * pImport, IMapToken * pHostMapToken, IUnknown * pHandler);
	STDMETHOD(MergeEnd) ();
};
EXTERN_GUID(IID_IMetaDataEmit2, 0xf5dd9950, 0xf693, 0x42e6, 0x83, 0xe, 0x7b, 0x83, 0x3e, 0x81, 0x46, 0xa9);
#undef  INTERFACE
#define INTERFACE IMetaDataEmit2
DECLARE_INTERFACE_(IMetaDataEmit2, IMetaDataEmit)
{
	STDMETHOD(DefineMethodSpec) (mdToken tkParent, PCCOR_SIGNATURE pvSigBlob, ULONG cbSigBlob, mdMethodSpec * pmi);
	STDMETHOD(GetDeltaSaveSize) (CorSaveSize fSave, DWORD * pdwSaveSize);
	STDMETHOD(SaveDelta) (LPCWSTR szFile, DWORD dwSaveFlags);
	STDMETHOD(SaveDeltaToStream) (IStream * pIStream, DWORD dwSaveFlags);
	STDMETHOD(SaveDeltaToMemory) (void *pbData, ULONG cbData);
	STDMETHOD(DefineGenericParam) (mdToken tk, ULONG ulParamSeq, DWORD dwParamFlags, LPCWSTR szname, DWORD reserved, mdToken rtkConstraints[], mdGenericParam * pgp);
	STDMETHOD(SetGenericParamProps) (mdGenericParam gp, DWORD dwParamFlags, LPCWSTR szName, DWORD reserved, mdToken rtkConstraints[]);
	STDMETHOD(ResetENCLog) ();
};
EXTERN_GUID(IID_IMetaDataImport, 0x7dac8207, 0xd3ae, 0x4c75, 0x9b, 0x67, 0x92, 0x80, 0x1a, 0x49, 0x7d, 0x44);
#undef  INTERFACE
#define INTERFACE IMetaDataImport
DECLARE_INTERFACE_(IMetaDataImport, IUnknown)
{
	STDMETHOD_(void, CloseEnum) (HCORENUM hEnum);
	STDMETHOD(CountEnum) (HCORENUM hEnum, ULONG * pulCount);
	STDMETHOD(ResetEnum) (HCORENUM hEnum, ULONG ulPos);
	STDMETHOD(EnumTypeDefs) (HCORENUM * phEnum, mdTypeDef rTypeDefs[], ULONG cMax, ULONG * pcTypeDefs);
	STDMETHOD(EnumInterfaceImpls) (HCORENUM * phEnum, mdTypeDef td, mdInterfaceImpl rImpls[], ULONG cMax, ULONG * pcImpls);
	STDMETHOD(EnumTypeRefs) (HCORENUM * phEnum, mdTypeRef rTypeRefs[], ULONG cMax, ULONG * pcTypeRefs);
	STDMETHOD(FindTypeDefByName) (LPCWSTR szTypeDef, mdToken tkEnclosingClass, mdTypeDef * ptd);
	STDMETHOD(GetScopeProps) (LPWSTR szName, ULONG cchName, ULONG * pchName, GUID * pmvid);
	STDMETHOD(GetModuleFromScope) (mdModule * pmd);
	STDMETHOD(GetTypeDefProps) (mdTypeDef td, LPWSTR szTypeDef, ULONG cchTypeDef, ULONG * pchTypeDef, DWORD * pdwTypeDefFlags, mdToken * ptkExtends);
	STDMETHOD(GetInterfaceImplProps) (mdInterfaceImpl iiImpl, mdTypeDef * pClass, mdToken * ptkIface);
	STDMETHOD(GetTypeRefProps) (mdTypeRef tr, mdToken * ptkResolutionScope, LPWSTR szName, ULONG cchName, ULONG * pchName);
	STDMETHOD(ResolveTypeRef) (mdTypeRef tr, REFIID riid, IUnknown ** ppIScope, mdTypeDef * ptd);
	STDMETHOD(EnumMembers) (HCORENUM * phEnum, mdTypeDef cl, mdToken rMembers[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(EnumMembersWithName) (HCORENUM * phEnum, mdTypeDef cl, LPCWSTR szName, mdToken rMembers[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(EnumMethods) (HCORENUM * phEnum, mdTypeDef cl, mdMethodDef rMethods[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(EnumMethodsWithName) (HCORENUM * phEnum, mdTypeDef cl, LPCWSTR szName, mdMethodDef rMethods[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(EnumFields) (HCORENUM * phEnum, mdTypeDef cl, mdFieldDef rFields[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(EnumFieldsWithName) (HCORENUM * phEnum, mdTypeDef cl, LPCWSTR szName, mdFieldDef rFields[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(EnumParams) (HCORENUM * phEnum, mdMethodDef mb, mdParamDef rParams[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(EnumMemberRefs) (HCORENUM * phEnum, mdToken tkParent, mdMemberRef rMemberRefs[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(EnumMethodImpls) (HCORENUM * phEnum, mdTypeDef td, mdToken rMethodBody[], mdToken rMethodDecl[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(EnumPermissionSets) (HCORENUM * phEnum, mdToken tk, DWORD dwActions, mdPermission rPermission[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(FindMember) (mdTypeDef td, LPCWSTR szName, PCCOR_SIGNATURE pvSigBlob, ULONG cbSigBlob, mdToken * pmb);
	STDMETHOD(FindMethod) (mdTypeDef td, LPCWSTR szName, PCCOR_SIGNATURE pvSigBlob, ULONG cbSigBlob, mdMethodDef * pmb);
	STDMETHOD(FindField) (mdTypeDef td, LPCWSTR szName, PCCOR_SIGNATURE pvSigBlob, ULONG cbSigBlob, mdFieldDef * pmb);
	STDMETHOD(FindMemberRef) (mdTypeRef td, LPCWSTR szName, PCCOR_SIGNATURE pvSigBlob, ULONG cbSigBlob, mdMemberRef * pmr);
	STDMETHOD(GetMethodProps) (mdMethodDef mb, mdTypeDef * pClass, LPWSTR szMethod, ULONG cchMethod, ULONG * pchMethod, DWORD * pdwAttr, PCCOR_SIGNATURE * ppvSigBlob, ULONG * pcbSigBlob, ULONG * pulCodeRVA, DWORD * pdwImplFlags);
	STDMETHOD(GetMemberRefProps) (mdMemberRef mr, mdToken * ptk, LPWSTR szMember, ULONG cchMember, ULONG * pchMember, PCCOR_SIGNATURE * ppvSigBlob, ULONG * pbSig);
	STDMETHOD(EnumProperties) (HCORENUM * phEnum, mdTypeDef td, mdProperty rProperties[], ULONG cMax, ULONG * pcProperties);
	STDMETHOD(EnumEvents) (HCORENUM * phEnum, mdTypeDef td, mdEvent rEvents[], ULONG cMax, ULONG * pcEvents);
	STDMETHOD(GetEventProps) (mdEvent ev, mdTypeDef * pClass, LPCWSTR szEvent, ULONG cchEvent, ULONG * pchEvent, DWORD * pdwEventFlags, mdToken * ptkEventType, mdMethodDef * pmdAddOn, mdMethodDef * pmdRemoveOn, mdMethodDef * pmdFire, mdMethodDef rmdOtherMethod[], ULONG cMax, ULONG * pcOtherMethod);
	STDMETHOD(EnumMethodSemantics) (HCORENUM * phEnum, mdMethodDef mb, mdToken rEventProp[], ULONG cMax, ULONG * pcEventProp);
	STDMETHOD(GetMethodSemantics) (mdMethodDef mb, mdToken tkEventProp, DWORD * pdwSemanticsFlags);
	STDMETHOD(GetClassLayout) (mdTypeDef td, DWORD * pdwPackSize, COR_FIELD_OFFSET rFieldOffset[], ULONG cMax, ULONG * pcFieldOffset, ULONG * pulClassSize);
	STDMETHOD(GetFieldMarshal) (mdToken tk, PCCOR_SIGNATURE * ppvNativeType, ULONG * pcbNativeType);
	STDMETHOD(GetRVA) (mdToken tk, ULONG * pulCodeRVA, DWORD * pdwImplFlags);
	STDMETHOD(GetPermissionSetProps) (mdPermission pm, DWORD * pdwAction, void const **ppvPermission, ULONG * pcbPermission);
	STDMETHOD(GetSigFromToken) (mdSignature mdSig, PCCOR_SIGNATURE * ppvSig, ULONG * pcbSig);
	STDMETHOD(GetModuleRefProps) (mdModuleRef mur, LPWSTR szName, ULONG cchName, ULONG * pchName);
	STDMETHOD(EnumModuleRefs) (HCORENUM * phEnum, mdModuleRef rModuleRefs[], ULONG cmax, ULONG * pcModuleRefs);
	STDMETHOD(GetTypeSpecFromToken) (mdTypeSpec typespec, PCCOR_SIGNATURE * ppvSig, ULONG * pcbSig);
	STDMETHOD(GetNameFromToken) (mdToken tk, MDUTF8CSTR * pszUtf8NamePtr);
	STDMETHOD(EnumUnresolvedMethods) (HCORENUM * phEnum, mdToken rMethods[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(GetUserString) (mdString stk, LPWSTR szString, ULONG cchString, ULONG * pchString);
	STDMETHOD(GetPinvokeMap) (mdToken tk, DWORD * pdwMappingFlags, LPWSTR szImportName, ULONG cchImportName, ULONG * pchImportName, mdModuleRef * pmrImportDLL);
	STDMETHOD(EnumSignatures) (HCORENUM * phEnum, mdSignature rSignatures[], ULONG cmax, ULONG * pcSignatures);
	STDMETHOD(EnumTypeSpecs) (HCORENUM * phEnum, mdTypeSpec rTypeSpecs[], ULONG cmax, ULONG * pcTypeSpecs);
	STDMETHOD(EnumUserStrings) (HCORENUM * phEnum, mdString rStrings[], ULONG cmax, ULONG * pcStrings);
	STDMETHOD(GetParamForMethodIndex) (mdMethodDef md, ULONG ulParamSeq, mdParamDef * ppd);
	STDMETHOD(EnumCustomAttributes) (HCORENUM * phEnum, mdToken tk, mdToken tkType, mdCustomAttribute rCustomAttributes[], ULONG cMax, ULONG * pcCustomAttributes);
	STDMETHOD(GetCustomAttributeProps) (mdCustomAttribute cv, mdToken * ptkObj, mdToken * ptkType, void const **ppBlob, ULONG * pcbSize);
	STDMETHOD(FindTypeRef) (mdToken tkResolutionScope, LPCWSTR szName, mdTypeRef * ptr);
	STDMETHOD(GetMemberProps) (mdToken mb, mdTypeDef * pClass, LPWSTR szMember, ULONG cchMember, ULONG * pchMember, DWORD * pdwAttr, PCCOR_SIGNATURE * ppvSigBlob, ULONG * pcbSigBlob, ULONG * pulCodeRVA, DWORD * pdwImplFlags, DWORD * pdwCPlusTypeFlag, UVCP_CONSTANT * ppValue, ULONG * pcchValue);
	STDMETHOD(GetFieldProps) (mdFieldDef mb, mdTypeDef * pClass, LPWSTR szField, ULONG cchField, ULONG * pchField, DWORD * pdwAttr, PCCOR_SIGNATURE * ppvSigBlob, ULONG * pcbSigBlob, DWORD * pdwCPlusTypeFlag, UVCP_CONSTANT * ppValue, ULONG * pcchValue);
	STDMETHOD(GetPropertyProps) (mdProperty prop, mdTypeDef * pClass, LPCWSTR szProperty, ULONG cchProperty, ULONG * pchProperty, DWORD * pdwPropFlags, PCCOR_SIGNATURE * ppvSig, ULONG * pbSig, DWORD * pdwCPlusTypeFlag, UVCP_CONSTANT * ppDefaultValue, ULONG * pcchDefaultValue, mdMethodDef * pmdSetter, mdMethodDef * pmdGetter, mdMethodDef rmdOtherMethod[], ULONG cMax, ULONG * pcOtherMethod);
	STDMETHOD(GetParamProps) (mdParamDef tk, mdMethodDef * pmd, ULONG * pulSequence, LPWSTR szName, ULONG cchName, ULONG * pchName, DWORD * pdwAttr, DWORD * pdwCPlusTypeFlag, UVCP_CONSTANT * ppValue, ULONG * pcchValue);
	STDMETHOD(GetCustomAttributeByName) (mdToken tkObj, LPCWSTR szName, const void **ppData, ULONG * pcbData);
	STDMETHOD_(BOOL, IsValidToken) (mdToken tk);
	STDMETHOD(GetNestedClassProps) (mdTypeDef tdNestedClass, mdTypeDef * ptdEnclosingClass);
	STDMETHOD(GetNativeCallConvFromSig) (void const *pvSig, ULONG cbSig, ULONG * pCallConv);
	STDMETHOD(IsGlobal) (mdToken pd, int *pbGlobal);
};
EXTERN_GUID(IID_IMetaDataImport2, 0xfce5efa0, 0x8bba, 0x4f8e, 0xa0, 0x36, 0x8f, 0x20, 0x22, 0xb0, 0x84, 0x66);
#undef  INTERFACE
#define INTERFACE IMetaDataImport2
DECLARE_INTERFACE_(IMetaDataImport2, IMetaDataImport)
{
	STDMETHOD(EnumGenericParams) (HCORENUM * phEnum, mdToken tk, mdGenericParam rGenericParams[], ULONG cMax, ULONG * pcGenericParams);
	STDMETHOD(GetGenericParamProps) (mdGenericParam gp, ULONG * pulParamSeq, DWORD * pdwParamFlags, mdToken * ptOwner, DWORD * reserved, LPWSTR wzname, ULONG cchName, ULONG * pchName);
	STDMETHOD(GetMethodSpecProps) (mdMethodSpec mi, mdToken * tkParent, PCCOR_SIGNATURE * ppvSigBlob, ULONG * pcbSigBlob);
	STDMETHOD(EnumGenericParamConstraints) (HCORENUM * phEnum, mdGenericParam tk, mdGenericParamConstraint rGenericParamConstraints[], ULONG cMax, ULONG * pcGenericParamConstraints);
	STDMETHOD(GetGenericParamConstraintProps) (mdGenericParamConstraint gpc, mdGenericParam * ptGenericParam, mdToken * ptkConstraintType);
	STDMETHOD(GetPEKind) (DWORD * pdwPEKind, DWORD * pdwMAchine);
	STDMETHOD(GetVersionString) (LPWSTR pwzBuf, DWORD ccBufSize, DWORD * pccBufSize);
	STDMETHOD(EnumMethodSpecs) (HCORENUM * phEnum, mdToken tk, mdMethodSpec rMethodSpecs[], ULONG cMax, ULONG * pcMethodSpecs);
};
EXTERN_GUID(IID_IMetaDataFilter, 0xd0e80dd1, 0x12d4, 0x11d3, 0xb3, 0x9d, 0x0, 0xc0, 0x4f, 0xf8, 0x17, 0x95);
#undef  INTERFACE
#define INTERFACE IMetaDataFilter
DECLARE_INTERFACE_(IMetaDataFilter, IUnknown)
{
	STDMETHOD(UnmarkAll) ();
	STDMETHOD(MarkToken) (mdToken tk);
	STDMETHOD(IsTokenMarked) (mdToken tk, BOOL * pIsMarked);
};
EXTERN_GUID(IID_IHostFilter, 0xd0e80dd3, 0x12d4, 0x11d3, 0xb3, 0x9d, 0x0, 0xc0, 0x4f, 0xf8, 0x17, 0x95);
#undef  INTERFACE
#define INTERFACE IHostFilter
DECLARE_INTERFACE_(IHostFilter, IUnknown)
{
    STDMETHOD(MarkToken)(mdToken tk) ;
};
typedef struct
{
    DWORD       dwOSPlatformId;
    DWORD       dwOSMajorVersion;
    DWORD       dwOSMinorVersion;
} OSINFO;
typedef struct
{
    USHORT      usMajorVersion;
    USHORT      usMinorVersion;
    USHORT      usBuildNumber;
    USHORT      usRevisionNumber;
    LPWSTR      szLocale;
    ULONG       cbLocale;
    DWORD       *rProcessor;
    ULONG       ulProcessor;
    OSINFO      *rOS;
    ULONG       ulOS;
} ASSEMBLYMETADATA;
EXTERN_GUID(IID_IMetaDataAssemblyEmit, 0x211ef15b, 0x5317, 0x4438, 0xb1, 0x96, 0xde, 0xc8, 0x7b, 0x88, 0x76, 0x93);
#undef  INTERFACE
#define INTERFACE IMetaDataAssemblyEmit
DECLARE_INTERFACE_(IMetaDataAssemblyEmit, IUnknown)
{
	STDMETHOD(DefineAssembly) (const void *pbPublicKey, ULONG cbPublicKey, ULONG ulHashAlgId, LPCWSTR szName, const ASSEMBLYMETADATA * pMetaData, DWORD dwAssemblyFlags, mdAssembly * pma);
	STDMETHOD(DefineAssemblyRef) (const void *pbPublicKeyOrToken, ULONG cbPublicKeyOrToken, LPCWSTR szName, const ASSEMBLYMETADATA * pMetaData, const void *pbHashValue, ULONG cbHashValue, DWORD dwAssemblyRefFlags, mdAssemblyRef * pmdar);
	STDMETHOD(DefineFile) (LPCWSTR szName, const void *pbHashValue, ULONG cbHashValue, DWORD dwFileFlags, mdFile * pmdf);
	STDMETHOD(DefineExportedType) (LPCWSTR szName, mdToken tkImplementation, mdTypeDef tkTypeDef, DWORD dwExportedTypeFlags, mdExportedType * pmdct);
	STDMETHOD(DefineManifestResource) (LPCWSTR szName, mdToken tkImplementation, DWORD dwOffset, DWORD dwResourceFlags, mdManifestResource * pmdmr);
	STDMETHOD(SetAssemblyProps) (mdAssembly pma, const void *pbPublicKey, ULONG cbPublicKey, ULONG ulHashAlgId, LPCWSTR szName, const ASSEMBLYMETADATA * pMetaData, DWORD dwAssemblyFlags);
	STDMETHOD(SetAssemblyRefProps) (mdAssemblyRef ar, const void *pbPublicKeyOrToken, ULONG cbPublicKeyOrToken, LPCWSTR szName, const ASSEMBLYMETADATA * pMetaData, const void *pbHashValue, ULONG cbHashValue, DWORD dwAssemblyRefFlags);
	STDMETHOD(SetFileProps) (mdFile file, const void *pbHashValue, ULONG cbHashValue, DWORD dwFileFlags);
	STDMETHOD(SetExportedTypeProps) (mdExportedType ct, mdToken tkImplementation, mdTypeDef tkTypeDef, DWORD dwExportedTypeFlags);
	STDMETHOD(SetManifestResourceProps) (mdManifestResource mr, mdToken tkImplementation, DWORD dwOffset, DWORD dwResourceFlags);
};
EXTERN_GUID(IID_IMetaDataAssemblyImport, 0xee62470b, 0xe94b, 0x424e, 0x9b, 0x7c, 0x2f, 0x0, 0xc9, 0x24, 0x9f, 0x93);
#undef  INTERFACE
#define INTERFACE IMetaDataAssemblyImport
DECLARE_INTERFACE_(IMetaDataAssemblyImport, IUnknown)
{
	STDMETHOD(GetAssemblyProps) (mdAssembly mda, const void **ppbPublicKey, ULONG * pcbPublicKey, ULONG * pulHashAlgId, LPWSTR szName, ULONG cchName, ULONG * pchName, ASSEMBLYMETADATA * pMetaData, DWORD * pdwAssemblyFlags);
	STDMETHOD(GetAssemblyRefProps) (mdAssemblyRef mdar, const void **ppbPublicKeyOrToken, ULONG * pcbPublicKeyOrToken, LPWSTR szName, ULONG cchName, ULONG * pchName, ASSEMBLYMETADATA * pMetaData, const void **ppbHashValue, ULONG * pcbHashValue, DWORD * pdwAssemblyRefFlags);
	STDMETHOD(GetFileProps) (mdFile mdf, LPWSTR szName, ULONG cchName, ULONG * pchName, const void **ppbHashValue, ULONG * pcbHashValue, DWORD * pdwFileFlags);
	STDMETHOD(GetExportedTypeProps) (mdExportedType mdct, LPWSTR szName, ULONG cchName, ULONG * pchName, mdToken * ptkImplementation, mdTypeDef * ptkTypeDef, DWORD * pdwExportedTypeFlags);
	STDMETHOD(GetManifestResourceProps) (mdManifestResource mdmr, LPWSTR szName, ULONG cchName, ULONG * pchName, mdToken * ptkImplementation, DWORD * pdwOffset, DWORD * pdwResourceFlags);
	STDMETHOD(EnumAssemblyRefs) (HCORENUM * phEnum, mdAssemblyRef rAssemblyRefs[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(EnumFiles) (HCORENUM * phEnum, mdFile rFiles[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(EnumExportedTypes) (HCORENUM * phEnum, mdExportedType rExportedTypes[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(EnumManifestResources) (HCORENUM * phEnum, mdManifestResource rManifestResources[], ULONG cMax, ULONG * pcTokens);
	STDMETHOD(GetAssemblyFromScope) (mdAssembly * ptkAssembly);
	STDMETHOD(FindExportedTypeByName) (LPCWSTR szName, mdToken mdtExportedType, mdExportedType * ptkExportedType);
	STDMETHOD(FindManifestResourceByName) (LPCWSTR szName, mdManifestResource * ptkManifestResource);
	STDMETHOD_(void, CloseEnum) (HCORENUM hEnum);
	STDMETHOD(FindAssembliesByName) (LPCWSTR szAppBase, LPCWSTR szPrivateBin, LPCWSTR szAssemblyName, IUnknown * ppIUnk[], ULONG cMax, ULONG * pcAssemblies);
};
typedef enum
{
    ValidatorModuleTypeInvalid      = 0x0,
    ValidatorModuleTypeMin          = 0x00000001,
    ValidatorModuleTypePE           = 0x00000001,
    ValidatorModuleTypeObj          = 0x00000002,
    ValidatorModuleTypeEnc          = 0x00000003,
    ValidatorModuleTypeIncr         = 0x00000004,
    ValidatorModuleTypeMax          = 0x00000004,
} CorValidatorModuleType;
EXTERN_GUID(IID_IMetaDataValidate, 0x4709c9c6, 0x81ff, 0x11d3, 0x9f, 0xc7, 0x0, 0xc0, 0x4f, 0x79, 0xa0, 0xa3);
#undef  INTERFACE
#define INTERFACE IMetaDataValidate
DECLARE_INTERFACE_(IMetaDataValidate, IUnknown)
{
	STDMETHOD(ValidatorInit) (DWORD dwModuleType, IUnknown * pUnk);
	STDMETHOD(ValidateMetaData) ();
};
EXTERN_GUID(IID_IMetaDataDispenserEx, 0x31bcfce2, 0xdafb, 0x11d2, 0x9f, 0x81, 0x0, 0xc0, 0x4f, 0x79, 0xa0, 0xa3);
#undef  INTERFACE
#define INTERFACE IMetaDataDispenserEx
DECLARE_INTERFACE_(IMetaDataDispenserEx, IMetaDataDispenser)
{
	STDMETHOD(SetOption) (REFGUID optionid, const VARIANT * value);
	STDMETHOD(GetOption) (REFGUID optionid, VARIANT * pvalue);
	STDMETHOD(OpenScopeOnITypeInfo) (ITypeInfo * pITI, DWORD dwOpenFlags, REFIID riid, IUnknown ** ppIUnk);
	STDMETHOD(GetCORSystemDirectory) (LPWSTR szBuffer, DWORD cchBuffer, DWORD * pchBuffer);
	STDMETHOD(FindAssembly) (LPCWSTR szAppBase, LPCWSTR szPrivateBin, LPCWSTR szGlobalBin, LPCWSTR szAssemblyName, LPCWSTR szName, ULONG cchName, ULONG * pcName);
	STDMETHOD(FindAssemblyModule) (LPCWSTR szAppBase, LPCWSTR szPrivateBin, LPCWSTR szGlobalBin, LPCWSTR szAssemblyName, LPCWSTR szModuleName, LPWSTR szName, ULONG cchName, ULONG * pcName);
};
typedef enum 
{
    regNoCopy = 0x00000001,
    regConfig = 0x00000002,
    regHasRefs = 0x00000004
} CorRegFlags;
typedef GUID CVID;
typedef struct
{
    short Major;
    short Minor;
    short Sub;
    short Build;
} CVStruct;
typedef void *HCEESECTION;
typedef enum 
{
    sdNone =        0,
    sdReadOnly =    IMAGE_SCN_MEM_READ | IMAGE_SCN_CNT_INITIALIZED_DATA,
    sdReadWrite =   sdReadOnly | IMAGE_SCN_MEM_WRITE,
    sdExecute =     IMAGE_SCN_MEM_READ | IMAGE_SCN_CNT_CODE | IMAGE_SCN_MEM_EXECUTE
} CeeSectionAttr;
typedef enum 
{
    srRelocAbsolute,
    srRelocHighLow      = 3,
    srRelocHighAdj,
    srRelocMapToken,
    srRelocRelative,
    srRelocFilePos,
    srRelocCodeRelative,
    srRelocIA64Imm64,
    srRelocDir64,
    srRelocIA64PcRel25,
    srRelocIA64PcRel64,
    srRelocAbsoluteTagged,
    srRelocSentinel,
    srNoBaseReloc = 0x4000,
    srRelocPtr = 0x8000,
    srRelocAbsolutePtr  = srRelocPtr + srRelocAbsolute,
    srRelocHighLowPtr   = srRelocPtr + srRelocHighLow,
    srRelocRelativePtr  = srRelocPtr + srRelocRelative,
    srRelocIA64Imm64Ptr = srRelocPtr + srRelocIA64Imm64,
    srRelocDir64Ptr     = srRelocPtr + srRelocDir64,
} CeeSectionRelocType;
#define IMAGE_REL_BASED_REL32            7
#define IMAGE_REL_BASED_IA64_PCREL21    11
#define IMAGE_REL_BASED_IA64_PCREL60    12
typedef union 
{
    USHORT highAdj;
} CeeSectionRelocExtra;
EXTERN_GUID(IID_ICeeGen, 0x7ed1bdff, 0x8e36, 0x11d2, 0x9c, 0x56, 0x0, 0xa0, 0xc9, 0xb7, 0xcc, 0x45);
DECLARE_INTERFACE_(ICeeGen, IUnknown)
{
	STDMETHOD(EmitString) (LPWSTR lpString, ULONG * RVA);
	STDMETHOD(GetString) (ULONG RVA, LPWSTR * lpString);
	STDMETHOD(AllocateMethodBuffer) (ULONG cchBuffer, UCHAR ** lpBuffer, ULONG * RVA);
	STDMETHOD(GetMethodBuffer) (ULONG RVA, UCHAR ** lpBuffer);
	STDMETHOD(GetIMapTokenIface) (IUnknown ** pIMapToken);
	STDMETHOD(GenerateCeeFile) ();
	STDMETHOD(GetIlSection) (HCEESECTION * section);
	STDMETHOD(GetStringSection) (HCEESECTION * section);
	STDMETHOD(AddSectionReloc) (HCEESECTION section, ULONG offset, HCEESECTION relativeTo, CeeSectionRelocType relocType);
	STDMETHOD(GetSectionCreate) (const char *name, DWORD flags, HCEESECTION * section);
	STDMETHOD(GetSectionDataLen) (HCEESECTION section, ULONG * dataLen);
	STDMETHOD(GetSectionBlock) (HCEESECTION section, ULONG len, ULONG align, void **ppBytes);
	STDMETHOD(TruncateSection) (HCEESECTION section, ULONG len);
	STDMETHOD(GenerateCeeMemoryImage) (void **ppImage);
	STDMETHOD(ComputePointer) (HCEESECTION section, ULONG RVA, UCHAR ** lpBuffer);
};
EXTERN_GUID(IID_IMetaDataTables, 0xd8f579ab, 0x402d, 0x4b8e, 0x82, 0xd9, 0x5d, 0x63, 0xb1, 0x6, 0x5c, 0x68);
DECLARE_INTERFACE_(IMetaDataTables, IUnknown)
{
	STDMETHOD(GetStringHeapSize) (ULONG * pcbStrings);
	STDMETHOD(GetBlobHeapSize) (ULONG * pcbBlobs);
	STDMETHOD(GetGuidHeapSize) (ULONG * pcbGuids);
	STDMETHOD(GetUserStringHeapSize) (ULONG * pcbBlobs);
	STDMETHOD(GetNumTables) (ULONG * pcTables);
	STDMETHOD(GetTableIndex) (ULONG token, ULONG * pixTbl);
	STDMETHOD(GetTableInfo) (ULONG ixTbl, ULONG * pcbRow, ULONG * pcRows, ULONG * pcCols, ULONG * piKey, const char **ppName);
	STDMETHOD(GetColumnInfo) (ULONG ixTbl, ULONG ixCol, ULONG * poCol, ULONG * pcbCol, ULONG * pType, const char **ppName);
	STDMETHOD(GetCodedTokenInfo) (ULONG ixCdTkn, ULONG * pcTokens, ULONG ** ppTokens, const char **ppName);
	STDMETHOD(GetRow) (ULONG ixTbl, ULONG rid, void **ppRow);
	STDMETHOD(GetColumn) (ULONG ixTbl, ULONG ixCol, ULONG rid, ULONG * pVal);
	STDMETHOD(GetString) (ULONG ixString, const char **ppString);
	STDMETHOD(GetBlob) (ULONG ixBlob, ULONG * pcbData, const void **ppData);
	STDMETHOD(GetGuid) (ULONG ixGuid, const GUID ** ppGUID);
	STDMETHOD(GetUserString) (ULONG ixUserString, ULONG * pcbData, const void **ppData);
	STDMETHOD(GetNextString) (ULONG ixString, ULONG * pNext);
	STDMETHOD(GetNextBlob) (ULONG ixBlob, ULONG * pNext);
	STDMETHOD(GetNextGuid) (ULONG ixGuid, ULONG * pNext);
	STDMETHOD(GetNextUserString) (ULONG ixUserString, ULONG * pNext);
};
EXTERN_GUID(IID_IMetaDataTables2, 0xbadb5f70, 0x58da, 0x43a9, 0xa1, 0xc6, 0xd7, 0x48, 0x19, 0xf1, 0x9b, 0x15);
DECLARE_INTERFACE_(IMetaDataTables2, IMetaDataTables)
{
	STDMETHOD(GetMetaDataStorage) (const void **ppvMd, ULONG * pcbMd);
	STDMETHOD(GetMetaDataStreamInfo) (ULONG ix, const char **ppchName, const void **ppv, ULONG * pcb);
};
#ifdef _DEFINE_META_DATA_META_CONSTANTS
#ifndef _META_DATA_META_CONSTANTS_DEFINED
#define _META_DATA_META_CONSTANTS_DEFINED
const unsigned int iRidMax          = 63;
const unsigned int iCodedToken      = 64;
const unsigned int iCodedTokenMax   = 95;
const unsigned int iSHORT           = 96;
const unsigned int iUSHORT          = 97;
const unsigned int iLONG            = 98;
const unsigned int iULONG           = 99;
const unsigned int iBYTE            = 100;
const unsigned int iSTRING          = 101;
const unsigned int iGUID            = 102;
const unsigned int iBLOB            = 103;
inline int IsRidType(ULONG ix) { return ix <= iRidMax; }
inline int IsCodedTokenType(ULONG ix) { return (ix >= iCodedToken) && (ix <= iCodedTokenMax); }
inline int IsRidOrToken(ULONG ix) { return ix <= iCodedTokenMax; }
inline int IsHeapType(ULONG ix) { return ix >= iSTRING; }
inline int IsFixedType(ULONG ix) { return (ix < iSTRING) && (ix > iCodedTokenMax); }
#endif
#endif
EXTERN_GUID(IID_IMetaDataInfo, 0x7998EA64, 0x7F95, 0x48B8, 0x86, 0xFC, 0x17, 0xCA, 0xF4, 0x8B, 0xF5, 0xCB);
#undef  INTERFACE
#define INTERFACE IMetaDataInfo
DECLARE_INTERFACE_(IMetaDataInfo, IUnknown)
{
	STDMETHOD(GetFileMapping) (const void **ppvData, ULONGLONG * pcbData, DWORD * pdwMappingType);
};
#define COR_NATIVE_LINK_CUSTOM_VALUE        L"COMPLUS_NativeLink"
#define COR_NATIVE_LINK_CUSTOM_VALUE_ANSI   "COMPLUS_NativeLink"
#define COR_NATIVE_LINK_CUSTOM_VALUE_CC     18
#include <pshpack1.h>
typedef struct 
{
    BYTE        m_linkType;
    BYTE        m_flags;
    mdMemberRef m_entryPoint;
} COR_NATIVE_LINK;
#include <poppack.h>
typedef enum 
{
    nltNone         = 1,
    nltAnsi         = 2,
    nltUnicode      = 3,
    nltAuto         = 4,
    nltOle          = 5,
    nltMaxValue     = 7,
} CorNativeLinkType;
typedef enum 
{
    nlfNone         = 0x00,
    nlfLastError    = 0x01,
    nlfNoMangle     = 0x02,
    nlfMaxValue     = 0x03,
} CorNativeLinkFlags;
#define COR_BASE_SECURITY_ATTRIBUTE_CLASS L"System.Security.Permissions.SecurityAttribute"
#define COR_BASE_SECURITY_ATTRIBUTE_CLASS_ANSI "System.Security.Permissions.SecurityAttribute"
#define COR_SUPPRESS_UNMANAGED_CODE_CHECK_ATTRIBUTE L"System.Security.SuppressUnmanagedCodeSecurityAttribute"
#define COR_SUPPRESS_UNMANAGED_CODE_CHECK_ATTRIBUTE_ANSI "System.Security.SuppressUnmanagedCodeSecurityAttribute"
#define COR_UNVER_CODE_ATTRIBUTE L"System.Security.UnverifiableCodeAttribute"
#define COR_UNVER_CODE_ATTRIBUTE_ANSI "System.Security.UnverifiableCodeAttribute"
#define COR_REQUIRES_SECOBJ_ATTRIBUTE L"System.Security.DynamicSecurityMethodAttribute"
#define COR_REQUIRES_SECOBJ_ATTRIBUTE_ANSI "System.Security.DynamicSecurityMethodAttribute"
#define COR_COMPILERSERVICE_DISCARDABLEATTRIBUTE L"System.Runtime.CompilerServices.DiscardableAttribute"
#define COR_COMPILERSERVICE_DISCARDABLEATTRIBUTE_ASNI "System.Runtime.CompilerServices.DiscardableAttribute"
#elif
#endif
