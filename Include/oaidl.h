/*+@@file@@----------------------------------------------------------------*//*!
 \file		oaidl.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
            01.12.2016 - Removed _VARIANT_BOOL declaration.
 \par  Status: 
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 14:17:04 2016
 \date		Modified on Thu Dec  1 16:25:14 2016
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
#ifndef __oaidl_h__
#define __oaidl_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICreateTypeInfo_FWD_DEFINED__
#define __ICreateTypeInfo_FWD_DEFINED__
typedef interface ICreateTypeInfo ICreateTypeInfo;
#endif
#ifndef __ICreateTypeInfo2_FWD_DEFINED__
#define __ICreateTypeInfo2_FWD_DEFINED__
typedef interface ICreateTypeInfo2 ICreateTypeInfo2;
#endif
#ifndef __ICreateTypeLib_FWD_DEFINED__
#define __ICreateTypeLib_FWD_DEFINED__
typedef interface ICreateTypeLib ICreateTypeLib;
#endif
#ifndef __ICreateTypeLib2_FWD_DEFINED__
#define __ICreateTypeLib2_FWD_DEFINED__
typedef interface ICreateTypeLib2 ICreateTypeLib2;
#endif
#ifndef __IDispatch_FWD_DEFINED__
#define __IDispatch_FWD_DEFINED__
typedef interface IDispatch IDispatch;
#endif
#ifndef __IEnumVARIANT_FWD_DEFINED__
#define __IEnumVARIANT_FWD_DEFINED__
typedef interface IEnumVARIANT IEnumVARIANT;
#endif
#ifndef __ITypeComp_FWD_DEFINED__
#define __ITypeComp_FWD_DEFINED__
typedef interface ITypeComp ITypeComp;
#endif
#ifndef __ITypeInfo_FWD_DEFINED__
#define __ITypeInfo_FWD_DEFINED__
typedef interface ITypeInfo ITypeInfo;
#endif
#ifndef __ITypeInfo2_FWD_DEFINED__
#define __ITypeInfo2_FWD_DEFINED__
typedef interface ITypeInfo2 ITypeInfo2;
#endif
#ifndef __ITypeLib_FWD_DEFINED__
#define __ITypeLib_FWD_DEFINED__
typedef interface ITypeLib ITypeLib;
#endif
#ifndef __ITypeLib2_FWD_DEFINED__
#define __ITypeLib2_FWD_DEFINED__
typedef interface ITypeLib2 ITypeLib2;
#endif
#ifndef __ITypeChangeEvents_FWD_DEFINED__
#define __ITypeChangeEvents_FWD_DEFINED__
typedef interface ITypeChangeEvents ITypeChangeEvents;
#endif
#ifndef __IErrorInfo_FWD_DEFINED__
#define __IErrorInfo_FWD_DEFINED__
typedef interface IErrorInfo IErrorInfo;
#endif
#ifndef __ICreateErrorInfo_FWD_DEFINED__
#define __ICreateErrorInfo_FWD_DEFINED__
typedef interface ICreateErrorInfo ICreateErrorInfo;
#endif
#ifndef __ISupportErrorInfo_FWD_DEFINED__
#define __ISupportErrorInfo_FWD_DEFINED__
typedef interface ISupportErrorInfo ISupportErrorInfo;
#endif
#ifndef __ITypeFactory_FWD_DEFINED__
#define __ITypeFactory_FWD_DEFINED__
typedef interface ITypeFactory ITypeFactory;
#endif
#ifndef __ITypeMarshal_FWD_DEFINED__
#define __ITypeMarshal_FWD_DEFINED__
typedef interface ITypeMarshal ITypeMarshal;
#endif
#ifndef __IRecordInfo_FWD_DEFINED__
#define __IRecordInfo_FWD_DEFINED__
typedef interface IRecordInfo IRecordInfo;
#endif
#ifndef __IErrorLog_FWD_DEFINED__
#define __IErrorLog_FWD_DEFINED__
typedef interface IErrorLog IErrorLog;
#endif
#ifndef __IPropertyBag_FWD_DEFINED__
#define __IPropertyBag_FWD_DEFINED__
typedef interface IPropertyBag IPropertyBag;
#endif
#include <objidl.h>
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0000_v0_0_s_ifspec;
#ifndef __IOleAutomationTypes_INTERFACE_DEFINED__
#define __IOleAutomationTypes_INTERFACE_DEFINED__
typedef CY CURRENCY;
typedef struct tagSAFEARRAYBOUND
{
	ULONG cElements;
	LONG lLbound;
} SAFEARRAYBOUND;
typedef struct tagSAFEARRAYBOUND *LPSAFEARRAYBOUND;
typedef struct _wireVARIANT *wireVARIANT;
typedef struct _wireBRECORD *wireBRECORD;
typedef struct _wireSAFEARR_BSTR
{
	ULONG Size;
	wireBSTR *aBstr;
} SAFEARR_BSTR;
typedef struct _wireSAFEARR_UNKNOWN
{
	ULONG Size;
	IUnknown **apUnknown;
} SAFEARR_UNKNOWN;
typedef struct _wireSAFEARR_DISPATCH
{
	ULONG Size;
	IDispatch **apDispatch;
} SAFEARR_DISPATCH;
typedef struct _wireSAFEARR_VARIANT
{
	ULONG Size;
	wireVARIANT *aVariant;
} SAFEARR_VARIANT;
typedef struct _wireSAFEARR_BRECORD
{
	ULONG Size;
	wireBRECORD *aRecord;
} SAFEARR_BRECORD;
typedef struct _wireSAFEARR_HAVEIID
{
	ULONG Size;
	IUnknown **apUnknown;
	IID iid;
} SAFEARR_HAVEIID;
typedef enum tagSF_TYPE
{
	SF_ERROR = VT_ERROR,
	SF_I1 = VT_I1,
	SF_I2 = VT_I2,
	SF_I4 = VT_I4,
	SF_I8 = VT_I8,
	SF_BSTR = VT_BSTR,
	SF_UNKNOWN = VT_UNKNOWN,
	SF_DISPATCH = VT_DISPATCH,
	SF_VARIANT = VT_VARIANT,
	SF_RECORD = VT_RECORD,
	SF_HAVEIID = (VT_UNKNOWN | VT_RESERVED)
} SF_TYPE;
typedef struct _wireSAFEARRAY_UNION
{
	ULONG sfType;
	union __MIDL_IOleAutomationTypes_0001
	{
		SAFEARR_BSTR BstrStr;
		SAFEARR_UNKNOWN UnknownStr;
		SAFEARR_DISPATCH DispatchStr;
		SAFEARR_VARIANT VariantStr;
		SAFEARR_BRECORD RecordStr;
		SAFEARR_HAVEIID HaveIidStr;
		BYTE_SIZEDARR ByteStr;
		WORD_SIZEDARR WordStr;
		DWORD_SIZEDARR LongStr;
		HYPER_SIZEDARR HyperStr;
	} u;
} SAFEARRAYUNION;
typedef struct _wireSAFEARRAY
{
	USHORT cDims;
	USHORT fFeatures;
	ULONG cbElements;
	ULONG cLocks;
	SAFEARRAYUNION uArrayStructs;
	SAFEARRAYBOUND rgsabound[1];
}             *wireSAFEARRAY;
typedef wireSAFEARRAY *wirePSAFEARRAY;
typedef struct tagSAFEARRAY
{
	USHORT cDims;
	USHORT fFeatures;
	ULONG cbElements;
	ULONG cLocks;
	PVOID pvData;
	SAFEARRAYBOUND rgsabound[1];
} SAFEARRAY;
typedef SAFEARRAY *LPSAFEARRAY;
#define	FADF_AUTO	( 0x1 )
#define	FADF_STATIC	( 0x2 )
#define	FADF_EMBEDDED	( 0x4 )
#define	FADF_FIXEDSIZE	( 0x10 )
#define	FADF_RECORD	( 0x20 )
#define	FADF_HAVEIID	( 0x40 )
#define	FADF_HAVEVARTYPE	( 0x80 )
#define	FADF_BSTR	( 0x100 )
#define	FADF_UNKNOWN	( 0x200 )
#define	FADF_DISPATCH	( 0x400 )
#define	FADF_VARIANT	( 0x800 )
#define	FADF_RESERVED	( 0xf008 )
#if (__STDC__ && !defined(_FORCENAMELESSUNION)) || defined(NONAMELESSUNION) || (!defined(_MSC_EXTENSIONS) && !defined(_FORCENAMELESSUNION))
#define __VARIANT_NAME_1 n1
#define __VARIANT_NAME_2 n2
#define __VARIANT_NAME_3 n3
#define __VARIANT_NAME_4 brecVal
#else
#define __tagVARIANT
#define __VARIANT_NAME_1
#define __VARIANT_NAME_2
#define __VARIANT_NAME_3
#define __tagBRECORD
#define __VARIANT_NAME_4
#endif
typedef struct tagVARIANT VARIANT;
struct tagVARIANT
{
	union
	{
		struct __tagVARIANT
		{
			VARTYPE vt;
			WORD wReserved1;
			WORD wReserved2;
			WORD wReserved3;
			union
			{
				LONGLONG llVal;
				LONG lVal;
				BYTE bVal;
				SHORT iVal;
				FLOAT fltVal;
				DOUBLE dblVal;
				VARIANT_BOOL boolVal;
				//_VARIANT_BOOL bool;			//Frankie unusefull MS messing declaration
				SCODE scode;
				CY cyVal;
				DATE date;
				BSTR bstrVal;
				IUnknown *punkVal;
				IDispatch *pdispVal;
				SAFEARRAY *parray;
				BYTE *pbVal;
				SHORT *piVal;
				LONG *plVal;
				LONGLONG *pllVal;
				FLOAT *pfltVal;
				DOUBLE *pdblVal;
				VARIANT_BOOL *pboolVal;
				//_VARIANT_BOOL *pbool;		//Frankie unusefull MS messing declaration
				SCODE *pscode;
				CY *pcyVal;
				DATE *pdate;
				BSTR *pbstrVal;
				IUnknown **ppunkVal;
				IDispatch **ppdispVal;
				SAFEARRAY **pparray;
				VARIANT *pvarVal;
				PVOID byref;
				CHAR cVal;
				USHORT uiVal;
				ULONG ulVal;
				ULONGLONG ullVal;
				INT intVal;
				UINT uintVal;
				DECIMAL *pdecVal;
				CHAR *pcVal;
				USHORT *puiVal;
				ULONG *pulVal;
				ULONGLONG *pullVal;
				INT *pintVal;
				UINT *puintVal;
				struct __tagBRECORD
{
					PVOID pvRecord;
					IRecordInfo *pRecInfo;
				} __VARIANT_NAME_4;
			} __VARIANT_NAME_3;
		} __VARIANT_NAME_2;
		DECIMAL decVal;
	} __VARIANT_NAME_1;
};
typedef VARIANT *LPVARIANT;
typedef VARIANT VARIANTARG;
typedef VARIANT *LPVARIANTARG;
#ifndef _REFVARIANT_DEFINED
#define _REFVARIANT_DEFINED
#define REFVARIANT const VARIANT * __MIDL_CONST
#endif
struct _wireBRECORD
{
	ULONG fFlags;
	ULONG clSize;
	IRecordInfo *pRecInfo;
	byte *pRecord;
};
struct _wireVARIANT
{
	DWORD clSize;
	DWORD rpcReserved;
	USHORT vt;
	USHORT wReserved1;
	USHORT wReserved2;
	USHORT wReserved3;
	union
{
		LONGLONG llVal;
		LONG lVal;
		BYTE bVal;
		SHORT iVal;
		FLOAT fltVal;
		DOUBLE dblVal;
		VARIANT_BOOL boolVal;
		SCODE scode;
		CY cyVal;
		DATE date;
		wireBSTR bstrVal;
		IUnknown *punkVal;
		IDispatch *pdispVal;
		wirePSAFEARRAY parray;
		wireBRECORD brecVal;
		BYTE *pbVal;
		SHORT *piVal;
		LONG *plVal;
		LONGLONG *pllVal;
		FLOAT *pfltVal;
		DOUBLE *pdblVal;
		VARIANT_BOOL *pboolVal;
		SCODE *pscode;
		CY *pcyVal;
		DATE *pdate;
		wireBSTR *pbstrVal;
		IUnknown **ppunkVal;
		IDispatch **ppdispVal;
		wirePSAFEARRAY *pparray;
		wireVARIANT *pvarVal;
		CHAR cVal;
		USHORT uiVal;
		ULONG ulVal;
		ULONGLONG ullVal;
		INT intVal;
		UINT uintVal;
		DECIMAL decVal;
		DECIMAL *pdecVal;
		CHAR *pcVal;
		USHORT *puiVal;
		ULONG *pulVal;
		ULONGLONG *pullVal;
		INT *pintVal;
		UINT *puintVal;
	} DUMMYUNIONNAME;
};
typedef LONG DISPID;
typedef DISPID MEMBERID;
typedef DWORD HREFTYPE;
typedef enum tagTYPEKIND
{
	TKIND_ENUM = 0,
	TKIND_RECORD = (TKIND_ENUM + 1),
	TKIND_MODULE = (TKIND_RECORD + 1),
	TKIND_INTERFACE = (TKIND_MODULE + 1),
	TKIND_DISPATCH = (TKIND_INTERFACE + 1),
	TKIND_COCLASS = (TKIND_DISPATCH + 1),
	TKIND_ALIAS = (TKIND_COCLASS + 1),
	TKIND_UNION = (TKIND_ALIAS + 1),
	TKIND_MAX = (TKIND_UNION + 1)
} TYPEKIND;
typedef struct tagTYPEDESC
{
	union
{
		struct tagTYPEDESC *lptdesc;
		struct tagARRAYDESC *lpadesc;
		HREFTYPE hreftype;
	} DUMMYUNIONNAME;
	VARTYPE vt;
} TYPEDESC;
typedef struct tagARRAYDESC
{
	TYPEDESC tdescElem;
	USHORT cDims;
	SAFEARRAYBOUND rgbounds[1];
} ARRAYDESC;
typedef struct tagPARAMDESCEX
{
	ULONG cBytes;
	VARIANTARG varDefaultValue;
} PARAMDESCEX;
typedef struct tagPARAMDESCEX *LPPARAMDESCEX;
typedef struct tagPARAMDESC
{
	LPPARAMDESCEX pparamdescex;
	USHORT wParamFlags;
} PARAMDESC;
typedef struct tagPARAMDESC *LPPARAMDESC;
#define	PARAMFLAG_NONE	( 0 )
#define	PARAMFLAG_FIN	( 0x1 )
#define	PARAMFLAG_FOUT	( 0x2 )
#define	PARAMFLAG_FLCID	( 0x4 )
#define	PARAMFLAG_FRETVAL	( 0x8 )
#define	PARAMFLAG_FOPT	( 0x10 )
#define	PARAMFLAG_FHASDEFAULT	( 0x20 )
#define	PARAMFLAG_FHASCUSTDATA	( 0x40 )
typedef struct tagIDLDESC
{
	ULONG_PTR dwReserved;
	USHORT wIDLFlags;
} IDLDESC;
typedef struct tagIDLDESC *LPIDLDESC;
#define	IDLFLAG_NONE	( PARAMFLAG_NONE )
#define	IDLFLAG_FIN	( PARAMFLAG_FIN )
#define	IDLFLAG_FOUT	( PARAMFLAG_FOUT )
#define	IDLFLAG_FLCID	( PARAMFLAG_FLCID )
#define	IDLFLAG_FRETVAL	( PARAMFLAG_FRETVAL )
#if 0
typedef struct tagELEMDESC
{
	TYPEDESC tdesc;
	PARAMDESC paramdesc;
} ELEMDESC;
#else
typedef struct tagELEMDESC
{
	TYPEDESC tdesc;
	union
{
		IDLDESC idldesc;
		PARAMDESC paramdesc;
	} DUMMYUNIONNAME;
} ELEMDESC, *LPELEMDESC;
#endif
typedef struct tagTYPEATTR
{
	GUID guid;
	LCID lcid;
	DWORD dwReserved;
	MEMBERID memidConstructor;
	MEMBERID memidDestructor;
	LPOLESTR lpstrSchema;
	ULONG cbSizeInstance;
	TYPEKIND typekind;
	WORD cFuncs;
	WORD cVars;
	WORD cImplTypes;
	WORD cbSizeVft;
	WORD cbAlignment;
	WORD wTypeFlags;
	WORD wMajorVerNum;
	WORD wMinorVerNum;
	TYPEDESC tdescAlias;
	IDLDESC idldescType;
} TYPEATTR;
typedef struct tagTYPEATTR *LPTYPEATTR;
typedef struct tagDISPPARAMS
{
	VARIANTARG *rgvarg;
	DISPID *rgdispidNamedArgs;
	UINT cArgs;
	UINT cNamedArgs;
} DISPPARAMS;
#if 0
typedef struct tagEXCEPINFO
{
	WORD wCode;
	WORD wReserved;
	BSTR bstrSource;
	BSTR bstrDescription;
	BSTR bstrHelpFile;
	DWORD dwHelpContext;
	ULONG_PTR pvReserved;
	ULONG_PTR pfnDeferredFillIn;
	SCODE scode;
} EXCEPINFO;
#else
typedef struct tagEXCEPINFO
{
	WORD wCode;
	WORD wReserved;
	BSTR bstrSource;
	BSTR bstrDescription;
	BSTR bstrHelpFile;
	DWORD dwHelpContext;
	PVOID pvReserved;
	      HRESULT(__stdcall * pfnDeferredFillIn) (struct tagEXCEPINFO *);
	SCODE scode;
} EXCEPINFO, *LPEXCEPINFO;
#endif
typedef enum tagCALLCONV
{
	CC_FASTCALL = 0,
	CC_CDECL = 1,
	CC_MSCPASCAL = (CC_CDECL + 1),
	CC_PASCAL = CC_MSCPASCAL,
	CC_MACPASCAL = (CC_PASCAL + 1),
	CC_STDCALL = (CC_MACPASCAL + 1),
	CC_FPFASTCALL = (CC_STDCALL + 1),
	CC_SYSCALL = (CC_FPFASTCALL + 1),
	CC_MPWCDECL = (CC_SYSCALL + 1),
	CC_MPWPASCAL = (CC_MPWCDECL + 1),
	CC_MAX = (CC_MPWPASCAL + 1)
} CALLCONV;
typedef enum tagFUNCKIND
{
	FUNC_VIRTUAL = 0,
	FUNC_PUREVIRTUAL = (FUNC_VIRTUAL + 1),
	FUNC_NONVIRTUAL = (FUNC_PUREVIRTUAL + 1),
	FUNC_STATIC = (FUNC_NONVIRTUAL + 1),
	FUNC_DISPATCH = (FUNC_STATIC + 1)
} FUNCKIND;
typedef enum tagINVOKEKIND
{
	INVOKE_FUNC = 1,
	INVOKE_PROPERTYGET = 2,
	INVOKE_PROPERTYPUT = 4,
	INVOKE_PROPERTYPUTREF = 8
} INVOKEKIND;
typedef struct tagFUNCDESC
{
	MEMBERID memid;
	SCODE *lprgscode;
	ELEMDESC *lprgelemdescParam;
	FUNCKIND funckind;
	INVOKEKIND invkind;
	CALLCONV callconv;
	SHORT cParams;
	SHORT cParamsOpt;
	SHORT oVft;
	SHORT cScodes;
	ELEMDESC elemdescFunc;
	WORD wFuncFlags;
} FUNCDESC;
typedef struct tagFUNCDESC *LPFUNCDESC;
typedef enum tagVARKIND
{
	VAR_PERINSTANCE = 0,
	VAR_STATIC = (VAR_PERINSTANCE + 1),
	VAR_CONST = (VAR_STATIC + 1),
	VAR_DISPATCH = (VAR_CONST + 1)
} VARKIND;
#define	IMPLTYPEFLAG_FDEFAULT	( 0x1 )
#define	IMPLTYPEFLAG_FSOURCE	( 0x2 )
#define	IMPLTYPEFLAG_FRESTRICTED	( 0x4 )
#define	IMPLTYPEFLAG_FDEFAULTVTABLE	( 0x8 )
typedef struct tagVARDESC
{
	MEMBERID memid;
	LPOLESTR lpstrSchema;
	union
{
		ULONG oInst;
		VARIANT *lpvarValue;
	} DUMMYUNIONNAME;
	ELEMDESC elemdescVar;
	WORD wVarFlags;
	VARKIND varkind;
} VARDESC;
typedef struct tagVARDESC *LPVARDESC;
typedef enum tagTYPEFLAGS
{
	TYPEFLAG_FAPPOBJECT = 0x1,
	TYPEFLAG_FCANCREATE = 0x2,
	TYPEFLAG_FLICENSED = 0x4,
	TYPEFLAG_FPREDECLID = 0x8,
	TYPEFLAG_FHIDDEN = 0x10,
	TYPEFLAG_FCONTROL = 0x20,
	TYPEFLAG_FDUAL = 0x40,
	TYPEFLAG_FNONEXTENSIBLE = 0x80,
	TYPEFLAG_FOLEAUTOMATION = 0x100,
	TYPEFLAG_FRESTRICTED = 0x200,
	TYPEFLAG_FAGGREGATABLE = 0x400,
	TYPEFLAG_FREPLACEABLE = 0x800,
	TYPEFLAG_FDISPATCHABLE = 0x1000,
	TYPEFLAG_FREVERSEBIND = 0x2000,
	TYPEFLAG_FPROXY = 0x4000
} TYPEFLAGS;
typedef enum tagFUNCFLAGS
{
	FUNCFLAG_FRESTRICTED = 0x1,
	FUNCFLAG_FSOURCE = 0x2,
	FUNCFLAG_FBINDABLE = 0x4,
	FUNCFLAG_FREQUESTEDIT = 0x8,
	FUNCFLAG_FDISPLAYBIND = 0x10,
	FUNCFLAG_FDEFAULTBIND = 0x20,
	FUNCFLAG_FHIDDEN = 0x40,
	FUNCFLAG_FUSESGETLASTERROR = 0x80,
	FUNCFLAG_FDEFAULTCOLLELEM = 0x100,
	FUNCFLAG_FUIDEFAULT = 0x200,
	FUNCFLAG_FNONBROWSABLE = 0x400,
	FUNCFLAG_FREPLACEABLE = 0x800,
	FUNCFLAG_FIMMEDIATEBIND = 0x1000
} FUNCFLAGS;
typedef enum tagVARFLAGS
{
	VARFLAG_FREADONLY = 0x1,
	VARFLAG_FSOURCE = 0x2,
	VARFLAG_FBINDABLE = 0x4,
	VARFLAG_FREQUESTEDIT = 0x8,
	VARFLAG_FDISPLAYBIND = 0x10,
	VARFLAG_FDEFAULTBIND = 0x20,
	VARFLAG_FHIDDEN = 0x40,
	VARFLAG_FRESTRICTED = 0x80,
	VARFLAG_FDEFAULTCOLLELEM = 0x100,
	VARFLAG_FUIDEFAULT = 0x200,
	VARFLAG_FNONBROWSABLE = 0x400,
	VARFLAG_FREPLACEABLE = 0x800,
	VARFLAG_FIMMEDIATEBIND = 0x1000
} VARFLAGS;
typedef struct tagCLEANLOCALSTORAGE
{
	IUnknown *pInterface;
	PVOID pStorage;
	DWORD flags;
} CLEANLOCALSTORAGE;
typedef struct tagCUSTDATAITEM
{
	GUID guid;
	VARIANTARG varValue;
} CUSTDATAITEM;
typedef struct tagCUSTDATAITEM *LPCUSTDATAITEM;
typedef struct tagCUSTDATA
{
	DWORD cCustData;
	LPCUSTDATAITEM prgCustData;
} CUSTDATA;
typedef struct tagCUSTDATA *LPCUSTDATA;
extern RPC_IF_HANDLE IOleAutomationTypes_v1_0_c_ifspec;
extern RPC_IF_HANDLE IOleAutomationTypes_v1_0_s_ifspec;
#endif
#ifndef __ICreateTypeInfo_INTERFACE_DEFINED__
#define __ICreateTypeInfo_INTERFACE_DEFINED__
typedef ICreateTypeInfo *LPCREATETYPEINFO;
extern const IID IID_ICreateTypeInfo;
typedef struct ICreateTypeInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICreateTypeInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICreateTypeInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICreateTypeInfo * This);
	HRESULT(STDMETHODCALLTYPE * SetGuid) (ICreateTypeInfo * This, REFGUID guid);
	HRESULT(STDMETHODCALLTYPE * SetTypeFlags) (ICreateTypeInfo * This, UINT uTypeFlags);
	HRESULT(STDMETHODCALLTYPE * SetDocString) (ICreateTypeInfo * This, LPOLESTR pStrDoc);
	HRESULT(STDMETHODCALLTYPE * SetHelpContext) (ICreateTypeInfo * This, DWORD dwHelpContext);
	HRESULT(STDMETHODCALLTYPE * SetVersion) (ICreateTypeInfo * This, WORD wMajorVerNum, WORD wMinorVerNum);
	HRESULT(STDMETHODCALLTYPE * AddRefTypeInfo) (ICreateTypeInfo * This, ITypeInfo * pTInfo, HREFTYPE * phRefType);
	HRESULT(STDMETHODCALLTYPE * AddFuncDesc) (ICreateTypeInfo * This, UINT index, FUNCDESC * pFuncDesc);
	HRESULT(STDMETHODCALLTYPE * AddImplType) (ICreateTypeInfo * This, UINT index, HREFTYPE hRefType);
	HRESULT(STDMETHODCALLTYPE * SetImplTypeFlags) (ICreateTypeInfo * This, UINT index, INT implTypeFlags);
	HRESULT(STDMETHODCALLTYPE * SetAlignment) (ICreateTypeInfo * This, WORD cbAlignment);
	HRESULT(STDMETHODCALLTYPE * SetSchema) (ICreateTypeInfo * This, LPOLESTR pStrSchema);
	HRESULT(STDMETHODCALLTYPE * AddVarDesc) (ICreateTypeInfo * This, UINT index, VARDESC * pVarDesc);
	HRESULT(STDMETHODCALLTYPE * SetFuncAndParamNames) (ICreateTypeInfo * This, UINT index, LPOLESTR * rgszNames, UINT cNames);
	HRESULT(STDMETHODCALLTYPE * SetVarName) (ICreateTypeInfo * This, UINT index, LPOLESTR szName);
	HRESULT(STDMETHODCALLTYPE * SetTypeDescAlias) (ICreateTypeInfo * This, TYPEDESC * pTDescAlias);
	HRESULT(STDMETHODCALLTYPE * DefineFuncAsDllEntry) (ICreateTypeInfo * This, UINT index, LPOLESTR szDllName, LPOLESTR szProcName);
	HRESULT(STDMETHODCALLTYPE * SetFuncDocString) (ICreateTypeInfo * This, UINT index, LPOLESTR szDocString);
	HRESULT(STDMETHODCALLTYPE * SetVarDocString) (ICreateTypeInfo * This, UINT index, LPOLESTR szDocString);
	HRESULT(STDMETHODCALLTYPE * SetFuncHelpContext) (ICreateTypeInfo * This, UINT index, DWORD dwHelpContext);
	HRESULT(STDMETHODCALLTYPE * SetVarHelpContext) (ICreateTypeInfo * This, UINT index, DWORD dwHelpContext);
	HRESULT(STDMETHODCALLTYPE * SetMops) (ICreateTypeInfo * This, UINT index, BSTR bstrMops);
	HRESULT(STDMETHODCALLTYPE * SetTypeIdldesc) (ICreateTypeInfo * This, IDLDESC * pIdlDesc);
	HRESULT(STDMETHODCALLTYPE * LayOut) (ICreateTypeInfo * This);
	END_INTERFACE
} ICreateTypeInfoVtbl;
interface ICreateTypeInfo
{
	CONST_VTBL struct ICreateTypeInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICreateTypeInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICreateTypeInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICreateTypeInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICreateTypeInfo_SetGuid(This,guid)    ( (This)->lpVtbl -> SetGuid(This,guid) )
#define ICreateTypeInfo_SetTypeFlags(This,uTypeFlags)    ( (This)->lpVtbl -> SetTypeFlags(This,uTypeFlags) )
#define ICreateTypeInfo_SetDocString(This,pStrDoc)    ( (This)->lpVtbl -> SetDocString(This,pStrDoc) )
#define ICreateTypeInfo_SetHelpContext(This,dwHelpContext)    ( (This)->lpVtbl -> SetHelpContext(This,dwHelpContext) )
#define ICreateTypeInfo_SetVersion(This,wMajorVerNum,wMinorVerNum)    ( (This)->lpVtbl -> SetVersion(This,wMajorVerNum,wMinorVerNum) )
#define ICreateTypeInfo_AddRefTypeInfo(This,pTInfo,phRefType)    ( (This)->lpVtbl -> AddRefTypeInfo(This,pTInfo,phRefType) )
#define ICreateTypeInfo_AddFuncDesc(This,index,pFuncDesc)    ( (This)->lpVtbl -> AddFuncDesc(This,index,pFuncDesc) )
#define ICreateTypeInfo_AddImplType(This,index,hRefType)    ( (This)->lpVtbl -> AddImplType(This,index,hRefType) )
#define ICreateTypeInfo_SetImplTypeFlags(This,index,implTypeFlags)    ( (This)->lpVtbl -> SetImplTypeFlags(This,index,implTypeFlags) )
#define ICreateTypeInfo_SetAlignment(This,cbAlignment)    ( (This)->lpVtbl -> SetAlignment(This,cbAlignment) )
#define ICreateTypeInfo_SetSchema(This,pStrSchema)    ( (This)->lpVtbl -> SetSchema(This,pStrSchema) )
#define ICreateTypeInfo_AddVarDesc(This,index,pVarDesc)    ( (This)->lpVtbl -> AddVarDesc(This,index,pVarDesc) )
#define ICreateTypeInfo_SetFuncAndParamNames(This,index,rgszNames,cNames)    ( (This)->lpVtbl -> SetFuncAndParamNames(This,index,rgszNames,cNames) )
#define ICreateTypeInfo_SetVarName(This,index,szName)    ( (This)->lpVtbl -> SetVarName(This,index,szName) )
#define ICreateTypeInfo_SetTypeDescAlias(This,pTDescAlias)    ( (This)->lpVtbl -> SetTypeDescAlias(This,pTDescAlias) )
#define ICreateTypeInfo_DefineFuncAsDllEntry(This,index,szDllName,szProcName)    ( (This)->lpVtbl -> DefineFuncAsDllEntry(This,index,szDllName,szProcName) )
#define ICreateTypeInfo_SetFuncDocString(This,index,szDocString)    ( (This)->lpVtbl -> SetFuncDocString(This,index,szDocString) )
#define ICreateTypeInfo_SetVarDocString(This,index,szDocString)    ( (This)->lpVtbl -> SetVarDocString(This,index,szDocString) )
#define ICreateTypeInfo_SetFuncHelpContext(This,index,dwHelpContext)    ( (This)->lpVtbl -> SetFuncHelpContext(This,index,dwHelpContext) )
#define ICreateTypeInfo_SetVarHelpContext(This,index,dwHelpContext)    ( (This)->lpVtbl -> SetVarHelpContext(This,index,dwHelpContext) )
#define ICreateTypeInfo_SetMops(This,index,bstrMops)    ( (This)->lpVtbl -> SetMops(This,index,bstrMops) )
#define ICreateTypeInfo_SetTypeIdldesc(This,pIdlDesc)    ( (This)->lpVtbl -> SetTypeIdldesc(This,pIdlDesc) )
#define ICreateTypeInfo_LayOut(This)    ( (This)->lpVtbl -> LayOut(This) )
#endif
#endif
#ifndef __ICreateTypeInfo2_INTERFACE_DEFINED__
#define __ICreateTypeInfo2_INTERFACE_DEFINED__
typedef ICreateTypeInfo2 *LPCREATETYPEINFO2;
extern const IID IID_ICreateTypeInfo2;
typedef struct ICreateTypeInfo2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICreateTypeInfo2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICreateTypeInfo2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICreateTypeInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * SetGuid) (ICreateTypeInfo2 * This, REFGUID guid);
	HRESULT(STDMETHODCALLTYPE * SetTypeFlags) (ICreateTypeInfo2 * This, UINT uTypeFlags);
	HRESULT(STDMETHODCALLTYPE * SetDocString) (ICreateTypeInfo2 * This, LPOLESTR pStrDoc);
	HRESULT(STDMETHODCALLTYPE * SetHelpContext) (ICreateTypeInfo2 * This, DWORD dwHelpContext);
	HRESULT(STDMETHODCALLTYPE * SetVersion) (ICreateTypeInfo2 * This, WORD wMajorVerNum, WORD wMinorVerNum);
	HRESULT(STDMETHODCALLTYPE * AddRefTypeInfo) (ICreateTypeInfo2 * This, ITypeInfo * pTInfo, HREFTYPE * phRefType);
	HRESULT(STDMETHODCALLTYPE * AddFuncDesc) (ICreateTypeInfo2 * This, UINT index, FUNCDESC * pFuncDesc);
	HRESULT(STDMETHODCALLTYPE * AddImplType) (ICreateTypeInfo2 * This, UINT index, HREFTYPE hRefType);
	HRESULT(STDMETHODCALLTYPE * SetImplTypeFlags) (ICreateTypeInfo2 * This, UINT index, INT implTypeFlags);
	HRESULT(STDMETHODCALLTYPE * SetAlignment) (ICreateTypeInfo2 * This, WORD cbAlignment);
	HRESULT(STDMETHODCALLTYPE * SetSchema) (ICreateTypeInfo2 * This, LPOLESTR pStrSchema);
	HRESULT(STDMETHODCALLTYPE * AddVarDesc) (ICreateTypeInfo2 * This, UINT index, VARDESC * pVarDesc);
	HRESULT(STDMETHODCALLTYPE * SetFuncAndParamNames) (ICreateTypeInfo2 * This, UINT index, LPOLESTR * rgszNames, UINT cNames);
	HRESULT(STDMETHODCALLTYPE * SetVarName) (ICreateTypeInfo2 * This, UINT index, LPOLESTR szName);
	HRESULT(STDMETHODCALLTYPE * SetTypeDescAlias) (ICreateTypeInfo2 * This, TYPEDESC * pTDescAlias);
	HRESULT(STDMETHODCALLTYPE * DefineFuncAsDllEntry) (ICreateTypeInfo2 * This, UINT index, LPOLESTR szDllName, LPOLESTR szProcName);
	HRESULT(STDMETHODCALLTYPE * SetFuncDocString) (ICreateTypeInfo2 * This, UINT index, LPOLESTR szDocString);
	HRESULT(STDMETHODCALLTYPE * SetVarDocString) (ICreateTypeInfo2 * This, UINT index, LPOLESTR szDocString);
	HRESULT(STDMETHODCALLTYPE * SetFuncHelpContext) (ICreateTypeInfo2 * This, UINT index, DWORD dwHelpContext);
	HRESULT(STDMETHODCALLTYPE * SetVarHelpContext) (ICreateTypeInfo2 * This, UINT index, DWORD dwHelpContext);
	HRESULT(STDMETHODCALLTYPE * SetMops) (ICreateTypeInfo2 * This, UINT index, BSTR bstrMops);
	HRESULT(STDMETHODCALLTYPE * SetTypeIdldesc) (ICreateTypeInfo2 * This, IDLDESC * pIdlDesc);
	HRESULT(STDMETHODCALLTYPE * LayOut) (ICreateTypeInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * DeleteFuncDesc) (ICreateTypeInfo2 * This, UINT index);
	HRESULT(STDMETHODCALLTYPE * DeleteFuncDescByMemId) (ICreateTypeInfo2 * This, MEMBERID memid, INVOKEKIND invKind);
	HRESULT(STDMETHODCALLTYPE * DeleteVarDesc) (ICreateTypeInfo2 * This, UINT index);
	HRESULT(STDMETHODCALLTYPE * DeleteVarDescByMemId) (ICreateTypeInfo2 * This, MEMBERID memid);
	HRESULT(STDMETHODCALLTYPE * DeleteImplType) (ICreateTypeInfo2 * This, UINT index);
	HRESULT(STDMETHODCALLTYPE * SetCustData) (ICreateTypeInfo2 * This, REFGUID guid, VARIANT * pVarVal);
	HRESULT(STDMETHODCALLTYPE * SetFuncCustData) (ICreateTypeInfo2 * This, UINT index, REFGUID guid, VARIANT * pVarVal);
	HRESULT(STDMETHODCALLTYPE * SetParamCustData) (ICreateTypeInfo2 * This, UINT indexFunc, UINT indexParam, REFGUID guid, VARIANT * pVarVal);
	HRESULT(STDMETHODCALLTYPE * SetVarCustData) (ICreateTypeInfo2 * This, UINT index, REFGUID guid, VARIANT * pVarVal);
	HRESULT(STDMETHODCALLTYPE * SetImplTypeCustData) (ICreateTypeInfo2 * This, UINT index, REFGUID guid, VARIANT * pVarVal);
	HRESULT(STDMETHODCALLTYPE * SetHelpStringContext) (ICreateTypeInfo2 * This, ULONG dwHelpStringContext);
	HRESULT(STDMETHODCALLTYPE * SetFuncHelpStringContext) (ICreateTypeInfo2 * This, UINT index, ULONG dwHelpStringContext);
	HRESULT(STDMETHODCALLTYPE * SetVarHelpStringContext) (ICreateTypeInfo2 * This, UINT index, ULONG dwHelpStringContext);
	HRESULT(STDMETHODCALLTYPE * Invalidate) (ICreateTypeInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * SetName) (ICreateTypeInfo2 * This, LPOLESTR szName);
	END_INTERFACE
} ICreateTypeInfo2Vtbl;
interface ICreateTypeInfo2
{
	CONST_VTBL struct ICreateTypeInfo2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICreateTypeInfo2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICreateTypeInfo2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICreateTypeInfo2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICreateTypeInfo2_SetGuid(This,guid)    ( (This)->lpVtbl -> SetGuid(This,guid) )
#define ICreateTypeInfo2_SetTypeFlags(This,uTypeFlags)    ( (This)->lpVtbl -> SetTypeFlags(This,uTypeFlags) )
#define ICreateTypeInfo2_SetDocString(This,pStrDoc)    ( (This)->lpVtbl -> SetDocString(This,pStrDoc) )
#define ICreateTypeInfo2_SetHelpContext(This,dwHelpContext)    ( (This)->lpVtbl -> SetHelpContext(This,dwHelpContext) )
#define ICreateTypeInfo2_SetVersion(This,wMajorVerNum,wMinorVerNum)    ( (This)->lpVtbl -> SetVersion(This,wMajorVerNum,wMinorVerNum) )
#define ICreateTypeInfo2_AddRefTypeInfo(This,pTInfo,phRefType)    ( (This)->lpVtbl -> AddRefTypeInfo(This,pTInfo,phRefType) )
#define ICreateTypeInfo2_AddFuncDesc(This,index,pFuncDesc)    ( (This)->lpVtbl -> AddFuncDesc(This,index,pFuncDesc) )
#define ICreateTypeInfo2_AddImplType(This,index,hRefType)    ( (This)->lpVtbl -> AddImplType(This,index,hRefType) )
#define ICreateTypeInfo2_SetImplTypeFlags(This,index,implTypeFlags)    ( (This)->lpVtbl -> SetImplTypeFlags(This,index,implTypeFlags) )
#define ICreateTypeInfo2_SetAlignment(This,cbAlignment)    ( (This)->lpVtbl -> SetAlignment(This,cbAlignment) )
#define ICreateTypeInfo2_SetSchema(This,pStrSchema)    ( (This)->lpVtbl -> SetSchema(This,pStrSchema) )
#define ICreateTypeInfo2_AddVarDesc(This,index,pVarDesc)    ( (This)->lpVtbl -> AddVarDesc(This,index,pVarDesc) )
#define ICreateTypeInfo2_SetFuncAndParamNames(This,index,rgszNames,cNames)    ( (This)->lpVtbl -> SetFuncAndParamNames(This,index,rgszNames,cNames) )
#define ICreateTypeInfo2_SetVarName(This,index,szName)    ( (This)->lpVtbl -> SetVarName(This,index,szName) )
#define ICreateTypeInfo2_SetTypeDescAlias(This,pTDescAlias)    ( (This)->lpVtbl -> SetTypeDescAlias(This,pTDescAlias) )
#define ICreateTypeInfo2_DefineFuncAsDllEntry(This,index,szDllName,szProcName)    ( (This)->lpVtbl -> DefineFuncAsDllEntry(This,index,szDllName,szProcName) )
#define ICreateTypeInfo2_SetFuncDocString(This,index,szDocString)    ( (This)->lpVtbl -> SetFuncDocString(This,index,szDocString) )
#define ICreateTypeInfo2_SetVarDocString(This,index,szDocString)    ( (This)->lpVtbl -> SetVarDocString(This,index,szDocString) )
#define ICreateTypeInfo2_SetFuncHelpContext(This,index,dwHelpContext)    ( (This)->lpVtbl -> SetFuncHelpContext(This,index,dwHelpContext) )
#define ICreateTypeInfo2_SetVarHelpContext(This,index,dwHelpContext)    ( (This)->lpVtbl -> SetVarHelpContext(This,index,dwHelpContext) )
#define ICreateTypeInfo2_SetMops(This,index,bstrMops)    ( (This)->lpVtbl -> SetMops(This,index,bstrMops) )
#define ICreateTypeInfo2_SetTypeIdldesc(This,pIdlDesc)    ( (This)->lpVtbl -> SetTypeIdldesc(This,pIdlDesc) )
#define ICreateTypeInfo2_LayOut(This)    ( (This)->lpVtbl -> LayOut(This) )
#define ICreateTypeInfo2_DeleteFuncDesc(This,index)    ( (This)->lpVtbl -> DeleteFuncDesc(This,index) )
#define ICreateTypeInfo2_DeleteFuncDescByMemId(This,memid,invKind)    ( (This)->lpVtbl -> DeleteFuncDescByMemId(This,memid,invKind) )
#define ICreateTypeInfo2_DeleteVarDesc(This,index)    ( (This)->lpVtbl -> DeleteVarDesc(This,index) )
#define ICreateTypeInfo2_DeleteVarDescByMemId(This,memid)    ( (This)->lpVtbl -> DeleteVarDescByMemId(This,memid) )
#define ICreateTypeInfo2_DeleteImplType(This,index)    ( (This)->lpVtbl -> DeleteImplType(This,index) )
#define ICreateTypeInfo2_SetCustData(This,guid,pVarVal)    ( (This)->lpVtbl -> SetCustData(This,guid,pVarVal) )
#define ICreateTypeInfo2_SetFuncCustData(This,index,guid,pVarVal)    ( (This)->lpVtbl -> SetFuncCustData(This,index,guid,pVarVal) )
#define ICreateTypeInfo2_SetParamCustData(This,indexFunc,indexParam,guid,pVarVal)    ( (This)->lpVtbl -> SetParamCustData(This,indexFunc,indexParam,guid,pVarVal) )
#define ICreateTypeInfo2_SetVarCustData(This,index,guid,pVarVal)    ( (This)->lpVtbl -> SetVarCustData(This,index,guid,pVarVal) )
#define ICreateTypeInfo2_SetImplTypeCustData(This,index,guid,pVarVal)    ( (This)->lpVtbl -> SetImplTypeCustData(This,index,guid,pVarVal) )
#define ICreateTypeInfo2_SetHelpStringContext(This,dwHelpStringContext)    ( (This)->lpVtbl -> SetHelpStringContext(This,dwHelpStringContext) )
#define ICreateTypeInfo2_SetFuncHelpStringContext(This,index,dwHelpStringContext)    ( (This)->lpVtbl -> SetFuncHelpStringContext(This,index,dwHelpStringContext) )
#define ICreateTypeInfo2_SetVarHelpStringContext(This,index,dwHelpStringContext)    ( (This)->lpVtbl -> SetVarHelpStringContext(This,index,dwHelpStringContext) )
#define ICreateTypeInfo2_Invalidate(This)    ( (This)->lpVtbl -> Invalidate(This) )
#define ICreateTypeInfo2_SetName(This,szName)    ( (This)->lpVtbl -> SetName(This,szName) )
#endif
#endif
#ifndef __ICreateTypeLib_INTERFACE_DEFINED__
#define __ICreateTypeLib_INTERFACE_DEFINED__
typedef ICreateTypeLib *LPCREATETYPELIB;
extern const IID IID_ICreateTypeLib;
typedef struct ICreateTypeLibVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICreateTypeLib * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICreateTypeLib * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICreateTypeLib * This);
	HRESULT(STDMETHODCALLTYPE * CreateTypeInfo) (ICreateTypeLib * This, LPOLESTR szName, TYPEKIND tkind, ICreateTypeInfo ** ppCTInfo);
	HRESULT(STDMETHODCALLTYPE * SetName) (ICreateTypeLib * This, LPOLESTR szName);
	HRESULT(STDMETHODCALLTYPE * SetVersion) (ICreateTypeLib * This, WORD wMajorVerNum, WORD wMinorVerNum);
	HRESULT(STDMETHODCALLTYPE * SetGuid) (ICreateTypeLib * This, REFGUID guid);
	HRESULT(STDMETHODCALLTYPE * SetDocString) (ICreateTypeLib * This, LPOLESTR szDoc);
	HRESULT(STDMETHODCALLTYPE * SetHelpFileName) (ICreateTypeLib * This, LPOLESTR szHelpFileName);
	HRESULT(STDMETHODCALLTYPE * SetHelpContext) (ICreateTypeLib * This, DWORD dwHelpContext);
	HRESULT(STDMETHODCALLTYPE * SetLcid) (ICreateTypeLib * This, LCID lcid);
	HRESULT(STDMETHODCALLTYPE * SetLibFlags) (ICreateTypeLib * This, UINT uLibFlags);
	HRESULT(STDMETHODCALLTYPE * SaveAllChanges) (ICreateTypeLib * This);
	END_INTERFACE
} ICreateTypeLibVtbl;
interface ICreateTypeLib
{
	CONST_VTBL struct ICreateTypeLibVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICreateTypeLib_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICreateTypeLib_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICreateTypeLib_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICreateTypeLib_CreateTypeInfo(This,szName,tkind,ppCTInfo)    ( (This)->lpVtbl -> CreateTypeInfo(This,szName,tkind,ppCTInfo) )
#define ICreateTypeLib_SetName(This,szName)    ( (This)->lpVtbl -> SetName(This,szName) )
#define ICreateTypeLib_SetVersion(This,wMajorVerNum,wMinorVerNum)    ( (This)->lpVtbl -> SetVersion(This,wMajorVerNum,wMinorVerNum) )
#define ICreateTypeLib_SetGuid(This,guid)    ( (This)->lpVtbl -> SetGuid(This,guid) )
#define ICreateTypeLib_SetDocString(This,szDoc)    ( (This)->lpVtbl -> SetDocString(This,szDoc) )
#define ICreateTypeLib_SetHelpFileName(This,szHelpFileName)    ( (This)->lpVtbl -> SetHelpFileName(This,szHelpFileName) )
#define ICreateTypeLib_SetHelpContext(This,dwHelpContext)    ( (This)->lpVtbl -> SetHelpContext(This,dwHelpContext) )
#define ICreateTypeLib_SetLcid(This,lcid)    ( (This)->lpVtbl -> SetLcid(This,lcid) )
#define ICreateTypeLib_SetLibFlags(This,uLibFlags)    ( (This)->lpVtbl -> SetLibFlags(This,uLibFlags) )
#define ICreateTypeLib_SaveAllChanges(This)    ( (This)->lpVtbl -> SaveAllChanges(This) )
#endif
#endif
#ifndef __ICreateTypeLib2_INTERFACE_DEFINED__
#define __ICreateTypeLib2_INTERFACE_DEFINED__
typedef ICreateTypeLib2 *LPCREATETYPELIB2;
extern const IID IID_ICreateTypeLib2;
typedef struct ICreateTypeLib2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICreateTypeLib2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICreateTypeLib2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICreateTypeLib2 * This);
	HRESULT(STDMETHODCALLTYPE * CreateTypeInfo) (ICreateTypeLib2 * This, LPOLESTR szName, TYPEKIND tkind, ICreateTypeInfo ** ppCTInfo);
	HRESULT(STDMETHODCALLTYPE * SetName) (ICreateTypeLib2 * This, LPOLESTR szName);
	HRESULT(STDMETHODCALLTYPE * SetVersion) (ICreateTypeLib2 * This, WORD wMajorVerNum, WORD wMinorVerNum);
	HRESULT(STDMETHODCALLTYPE * SetGuid) (ICreateTypeLib2 * This, REFGUID guid);
	HRESULT(STDMETHODCALLTYPE * SetDocString) (ICreateTypeLib2 * This, LPOLESTR szDoc);
	HRESULT(STDMETHODCALLTYPE * SetHelpFileName) (ICreateTypeLib2 * This, LPOLESTR szHelpFileName);
	HRESULT(STDMETHODCALLTYPE * SetHelpContext) (ICreateTypeLib2 * This, DWORD dwHelpContext);
	HRESULT(STDMETHODCALLTYPE * SetLcid) (ICreateTypeLib2 * This, LCID lcid);
	HRESULT(STDMETHODCALLTYPE * SetLibFlags) (ICreateTypeLib2 * This, UINT uLibFlags);
	HRESULT(STDMETHODCALLTYPE * SaveAllChanges) (ICreateTypeLib2 * This);
	HRESULT(STDMETHODCALLTYPE * DeleteTypeInfo) (ICreateTypeLib2 * This, LPOLESTR szName);
	HRESULT(STDMETHODCALLTYPE * SetCustData) (ICreateTypeLib2 * This, REFGUID guid, VARIANT * pVarVal);
	HRESULT(STDMETHODCALLTYPE * SetHelpStringContext) (ICreateTypeLib2 * This, ULONG dwHelpStringContext);
	HRESULT(STDMETHODCALLTYPE * SetHelpStringDll) (ICreateTypeLib2 * This, LPOLESTR szFileName);
	END_INTERFACE
} ICreateTypeLib2Vtbl;
interface ICreateTypeLib2
{
	CONST_VTBL struct ICreateTypeLib2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICreateTypeLib2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICreateTypeLib2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICreateTypeLib2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICreateTypeLib2_CreateTypeInfo(This,szName,tkind,ppCTInfo)    ( (This)->lpVtbl -> CreateTypeInfo(This,szName,tkind,ppCTInfo) )
#define ICreateTypeLib2_SetName(This,szName)    ( (This)->lpVtbl -> SetName(This,szName) )
#define ICreateTypeLib2_SetVersion(This,wMajorVerNum,wMinorVerNum)    ( (This)->lpVtbl -> SetVersion(This,wMajorVerNum,wMinorVerNum) )
#define ICreateTypeLib2_SetGuid(This,guid)    ( (This)->lpVtbl -> SetGuid(This,guid) )
#define ICreateTypeLib2_SetDocString(This,szDoc)    ( (This)->lpVtbl -> SetDocString(This,szDoc) )
#define ICreateTypeLib2_SetHelpFileName(This,szHelpFileName)    ( (This)->lpVtbl -> SetHelpFileName(This,szHelpFileName) )
#define ICreateTypeLib2_SetHelpContext(This,dwHelpContext)    ( (This)->lpVtbl -> SetHelpContext(This,dwHelpContext) )
#define ICreateTypeLib2_SetLcid(This,lcid)    ( (This)->lpVtbl -> SetLcid(This,lcid) )
#define ICreateTypeLib2_SetLibFlags(This,uLibFlags)    ( (This)->lpVtbl -> SetLibFlags(This,uLibFlags) )
#define ICreateTypeLib2_SaveAllChanges(This)    ( (This)->lpVtbl -> SaveAllChanges(This) )
#define ICreateTypeLib2_DeleteTypeInfo(This,szName)    ( (This)->lpVtbl -> DeleteTypeInfo(This,szName) )
#define ICreateTypeLib2_SetCustData(This,guid,pVarVal)    ( (This)->lpVtbl -> SetCustData(This,guid,pVarVal) )
#define ICreateTypeLib2_SetHelpStringContext(This,dwHelpStringContext)    ( (This)->lpVtbl -> SetHelpStringContext(This,dwHelpStringContext) )
#define ICreateTypeLib2_SetHelpStringDll(This,szFileName)    ( (This)->lpVtbl -> SetHelpStringDll(This,szFileName) )
#endif
#endif
#ifndef __IDispatch_INTERFACE_DEFINED__
#define __IDispatch_INTERFACE_DEFINED__
typedef IDispatch *LPDISPATCH;
#define	DISPID_UNKNOWN	( -1 )
#define	DISPID_VALUE	( 0 )
#define	DISPID_PROPERTYPUT	( -3 )
#define	DISPID_NEWENUM	( -4 )
#define	DISPID_EVALUATE	( -5 )
#define	DISPID_CONSTRUCTOR	( -6 )
#define	DISPID_DESTRUCTOR	( -7 )
#define	DISPID_COLLECT	( -8 )
extern const IID IID_IDispatch;
typedef struct IDispatchVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDispatch * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDispatch * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDispatch * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDispatch * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDispatch * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDispatch * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDispatch * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
} IDispatchVtbl;
interface IDispatch
{
	CONST_VTBL struct IDispatchVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDispatch_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDispatch_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDispatch_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDispatch_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDispatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDispatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDispatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
HRESULT STDMETHODCALLTYPE IDispatch_RemoteInvoke_Proxy(IDispatch *This, DISPID dispIdMember, REFIID riid, LCID lcid, DWORD dwFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *pArgErr, UINT cVarRef, UINT *rgVarRefIdx, VARIANTARG *rgVarRef);
void __RPC_STUB IDispatch_RemoteInvoke_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumVARIANT_INTERFACE_DEFINED__
#define __IEnumVARIANT_INTERFACE_DEFINED__
typedef IEnumVARIANT *LPENUMVARIANT;
extern const IID IID_IEnumVARIANT;
typedef struct IEnumVARIANTVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumVARIANT *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumVARIANT *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumVARIANT *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumVARIANT *This, ULONG celt, VARIANT *rgVar, ULONG *pCeltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumVARIANT *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumVARIANT *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumVARIANT *This, IEnumVARIANT **ppEnum);
	END_INTERFACE
} IEnumVARIANTVtbl;
interface IEnumVARIANT
{
	CONST_VTBL struct IEnumVARIANTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumVARIANT_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumVARIANT_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumVARIANT_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumVARIANT_Next(This,celt,rgVar,pCeltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgVar,pCeltFetched) )
#define IEnumVARIANT_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumVARIANT_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumVARIANT_Clone(This,ppEnum)    ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumVARIANT_RemoteNext_Proxy(IEnumVARIANT *This, ULONG celt, VARIANT *rgVar, ULONG *pCeltFetched);
void __RPC_STUB IEnumVARIANT_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ITypeComp_INTERFACE_DEFINED__
#define __ITypeComp_INTERFACE_DEFINED__
typedef ITypeComp *LPTYPECOMP;
typedef enum tagDESCKIND
{
	DESCKIND_NONE = 0,
	DESCKIND_FUNCDESC = (DESCKIND_NONE + 1),
	DESCKIND_VARDESC = (DESCKIND_FUNCDESC + 1),
	DESCKIND_TYPECOMP = (DESCKIND_VARDESC + 1),
	DESCKIND_IMPLICITAPPOBJ = (DESCKIND_TYPECOMP + 1),
	DESCKIND_MAX = (DESCKIND_IMPLICITAPPOBJ + 1)
} DESCKIND;
typedef union tagBINDPTR
{
	FUNCDESC *lpfuncdesc;
	VARDESC *lpvardesc;
	ITypeComp *lptcomp;
} BINDPTR;
typedef union tagBINDPTR *LPBINDPTR;
extern const IID IID_ITypeComp;
typedef struct ITypeCompVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITypeComp *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITypeComp *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITypeComp *This);
	HRESULT(STDMETHODCALLTYPE *Bind) (ITypeComp *This, LPOLESTR szName, ULONG lHashVal, WORD wFlags, ITypeInfo **ppTInfo, DESCKIND *pDescKind, BINDPTR *pBindPtr);
	HRESULT(STDMETHODCALLTYPE *BindType) (ITypeComp *This, LPOLESTR szName, ULONG lHashVal, ITypeInfo **ppTInfo, ITypeComp **ppTComp);
	END_INTERFACE
} ITypeCompVtbl;
interface ITypeComp
{
	CONST_VTBL struct ITypeCompVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITypeComp_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITypeComp_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITypeComp_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITypeComp_Bind(This,szName,lHashVal,wFlags,ppTInfo,pDescKind,pBindPtr)    ( (This)->lpVtbl -> Bind(This,szName,lHashVal,wFlags,ppTInfo,pDescKind,pBindPtr) )
#define ITypeComp_BindType(This,szName,lHashVal,ppTInfo,ppTComp)    ( (This)->lpVtbl -> BindType(This,szName,lHashVal,ppTInfo,ppTComp) )
#endif
HRESULT STDMETHODCALLTYPE ITypeComp_RemoteBind_Proxy(ITypeComp *This, LPOLESTR szName, ULONG lHashVal, WORD wFlags, ITypeInfo **ppTInfo, DESCKIND *pDescKind, LPFUNCDESC *ppFuncDesc, LPVARDESC *ppVarDesc, ITypeComp **ppTypeComp, CLEANLOCALSTORAGE *pDummy);
void __RPC_STUB ITypeComp_RemoteBind_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeComp_RemoteBindType_Proxy(ITypeComp *This, LPOLESTR szName, ULONG lHashVal, ITypeInfo **ppTInfo);
void __RPC_STUB ITypeComp_RemoteBindType_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ITypeInfo_INTERFACE_DEFINED__
#define __ITypeInfo_INTERFACE_DEFINED__
typedef ITypeInfo *LPTYPEINFO;
extern const IID IID_ITypeInfo;
typedef struct ITypeInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITypeInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITypeInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITypeInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeAttr) (ITypeInfo *This, TYPEATTR **ppTypeAttr);
	HRESULT(STDMETHODCALLTYPE *GetTypeComp) (ITypeInfo *This, ITypeComp **ppTComp);
	HRESULT(STDMETHODCALLTYPE *GetFuncDesc) (ITypeInfo *This, UINT index, FUNCDESC **ppFuncDesc);
	HRESULT(STDMETHODCALLTYPE *GetVarDesc) (ITypeInfo *This, UINT index, VARDESC **ppVarDesc);
	HRESULT(STDMETHODCALLTYPE *GetNames) (ITypeInfo *This, MEMBERID memid, BSTR *rgBstrNames, UINT cMaxNames, UINT *pcNames);
	HRESULT(STDMETHODCALLTYPE *GetRefTypeOfImplType) (ITypeInfo *This, UINT index, HREFTYPE *pRefType);
	HRESULT(STDMETHODCALLTYPE *GetImplTypeFlags) (ITypeInfo *This, UINT index, INT *pImplTypeFlags);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ITypeInfo *This, LPOLESTR *rgszNames, UINT cNames, MEMBERID *pMemId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ITypeInfo *This, PVOID pvInstance, MEMBERID memid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *GetDocumentation) (ITypeInfo *This, MEMBERID memid, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
	HRESULT(STDMETHODCALLTYPE *GetDllEntry) (ITypeInfo *This, MEMBERID memid, INVOKEKIND invKind, BSTR *pBstrDllName, BSTR *pBstrName, WORD *pwOrdinal);
	HRESULT(STDMETHODCALLTYPE *GetRefTypeInfo) (ITypeInfo *This, HREFTYPE hRefType, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *AddressOfMember) (ITypeInfo *This, MEMBERID memid, INVOKEKIND invKind, PVOID *ppv);
	HRESULT(STDMETHODCALLTYPE *CreateInstance) (ITypeInfo *This, IUnknown *pUnkOuter, REFIID riid, PVOID *ppvObj);
	HRESULT(STDMETHODCALLTYPE *GetMops) (ITypeInfo *This, MEMBERID memid, BSTR *pBstrMops);
	HRESULT(STDMETHODCALLTYPE *GetContainingTypeLib) (ITypeInfo *This, ITypeLib **ppTLib, UINT *pIndex);
	void (STDMETHODCALLTYPE *ReleaseTypeAttr) (ITypeInfo *This, TYPEATTR *pTypeAttr);
	void (STDMETHODCALLTYPE *ReleaseFuncDesc) (ITypeInfo *This, FUNCDESC *pFuncDesc);
	void (STDMETHODCALLTYPE *ReleaseVarDesc) (ITypeInfo *This, VARDESC *pVarDesc);
	END_INTERFACE
} ITypeInfoVtbl;
interface ITypeInfo
{
	CONST_VTBL struct ITypeInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITypeInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITypeInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITypeInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITypeInfo_GetTypeAttr(This,ppTypeAttr)    ( (This)->lpVtbl -> GetTypeAttr(This,ppTypeAttr) )
#define ITypeInfo_GetTypeComp(This,ppTComp)    ( (This)->lpVtbl -> GetTypeComp(This,ppTComp) )
#define ITypeInfo_GetFuncDesc(This,index,ppFuncDesc)    ( (This)->lpVtbl -> GetFuncDesc(This,index,ppFuncDesc) )
#define ITypeInfo_GetVarDesc(This,index,ppVarDesc)    ( (This)->lpVtbl -> GetVarDesc(This,index,ppVarDesc) )
#define ITypeInfo_GetNames(This,memid,rgBstrNames,cMaxNames,pcNames)    ( (This)->lpVtbl -> GetNames(This,memid,rgBstrNames,cMaxNames,pcNames) )
#define ITypeInfo_GetRefTypeOfImplType(This,index,pRefType)    ( (This)->lpVtbl -> GetRefTypeOfImplType(This,index,pRefType) )
#define ITypeInfo_GetImplTypeFlags(This,index,pImplTypeFlags)    ( (This)->lpVtbl -> GetImplTypeFlags(This,index,pImplTypeFlags) )
#define ITypeInfo_GetIDsOfNames(This,rgszNames,cNames,pMemId)    ( (This)->lpVtbl -> GetIDsOfNames(This,rgszNames,cNames,pMemId) )
#define ITypeInfo_Invoke(This,pvInstance,memid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,pvInstance,memid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITypeInfo_GetDocumentation(This,memid,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile)    ( (This)->lpVtbl -> GetDocumentation(This,memid,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile) )
#define ITypeInfo_GetDllEntry(This,memid,invKind,pBstrDllName,pBstrName,pwOrdinal)    ( (This)->lpVtbl -> GetDllEntry(This,memid,invKind,pBstrDllName,pBstrName,pwOrdinal) )
#define ITypeInfo_GetRefTypeInfo(This,hRefType,ppTInfo)    ( (This)->lpVtbl -> GetRefTypeInfo(This,hRefType,ppTInfo) )
#define ITypeInfo_AddressOfMember(This,memid,invKind,ppv)    ( (This)->lpVtbl -> AddressOfMember(This,memid,invKind,ppv) )
#define ITypeInfo_CreateInstance(This,pUnkOuter,riid,ppvObj)    ( (This)->lpVtbl -> CreateInstance(This,pUnkOuter,riid,ppvObj) )
#define ITypeInfo_GetMops(This,memid,pBstrMops)    ( (This)->lpVtbl -> GetMops(This,memid,pBstrMops) )
#define ITypeInfo_GetContainingTypeLib(This,ppTLib,pIndex)    ( (This)->lpVtbl -> GetContainingTypeLib(This,ppTLib,pIndex) )
#define ITypeInfo_ReleaseTypeAttr(This,pTypeAttr)    ( (This)->lpVtbl -> ReleaseTypeAttr(This,pTypeAttr) )
#define ITypeInfo_ReleaseFuncDesc(This,pFuncDesc)    ( (This)->lpVtbl -> ReleaseFuncDesc(This,pFuncDesc) )
#define ITypeInfo_ReleaseVarDesc(This,pVarDesc)    ( (This)->lpVtbl -> ReleaseVarDesc(This,pVarDesc) )
#endif
HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetTypeAttr_Proxy(ITypeInfo *This, LPTYPEATTR *ppTypeAttr, CLEANLOCALSTORAGE *pDummy);
void __RPC_STUB ITypeInfo_RemoteGetTypeAttr_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetFuncDesc_Proxy(ITypeInfo *This, UINT index, LPFUNCDESC *ppFuncDesc, CLEANLOCALSTORAGE *pDummy);
void __RPC_STUB ITypeInfo_RemoteGetFuncDesc_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetVarDesc_Proxy(ITypeInfo *This, UINT index, LPVARDESC *ppVarDesc, CLEANLOCALSTORAGE *pDummy);
void __RPC_STUB ITypeInfo_RemoteGetVarDesc_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetNames_Proxy(ITypeInfo *This, MEMBERID memid, BSTR *rgBstrNames, UINT cMaxNames, UINT *pcNames);
void __RPC_STUB ITypeInfo_RemoteGetNames_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeInfo_LocalGetIDsOfNames_Proxy(ITypeInfo *This);
void __RPC_STUB ITypeInfo_LocalGetIDsOfNames_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeInfo_LocalInvoke_Proxy(ITypeInfo *This);
void __RPC_STUB ITypeInfo_LocalInvoke_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetDocumentation_Proxy(ITypeInfo *This, MEMBERID memid, DWORD refPtrFlags, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
void __RPC_STUB ITypeInfo_RemoteGetDocumentation_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetDllEntry_Proxy(ITypeInfo *This, MEMBERID memid, INVOKEKIND invKind, DWORD refPtrFlags, BSTR *pBstrDllName, BSTR *pBstrName, WORD *pwOrdinal);
void __RPC_STUB ITypeInfo_RemoteGetDllEntry_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeInfo_LocalAddressOfMember_Proxy(ITypeInfo *This);
void __RPC_STUB ITypeInfo_LocalAddressOfMember_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteCreateInstance_Proxy(ITypeInfo *This, REFIID riid, IUnknown **ppvObj);
void __RPC_STUB ITypeInfo_RemoteCreateInstance_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetContainingTypeLib_Proxy(ITypeInfo *This, ITypeLib **ppTLib, UINT *pIndex);
void __RPC_STUB ITypeInfo_RemoteGetContainingTypeLib_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeInfo_LocalReleaseTypeAttr_Proxy(ITypeInfo *This);
void __RPC_STUB ITypeInfo_LocalReleaseTypeAttr_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeInfo_LocalReleaseFuncDesc_Proxy(ITypeInfo *This);
void __RPC_STUB ITypeInfo_LocalReleaseFuncDesc_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeInfo_LocalReleaseVarDesc_Proxy(ITypeInfo *This);
void __RPC_STUB ITypeInfo_LocalReleaseVarDesc_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ITypeInfo2_INTERFACE_DEFINED__
#define __ITypeInfo2_INTERFACE_DEFINED__
typedef ITypeInfo2 *LPTYPEINFO2;
extern const IID IID_ITypeInfo2;
typedef struct ITypeInfo2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITypeInfo2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITypeInfo2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITypeInfo2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeAttr) (ITypeInfo2 *This, TYPEATTR **ppTypeAttr);
	HRESULT(STDMETHODCALLTYPE *GetTypeComp) (ITypeInfo2 *This, ITypeComp **ppTComp);
	HRESULT(STDMETHODCALLTYPE *GetFuncDesc) (ITypeInfo2 *This, UINT index, FUNCDESC **ppFuncDesc);
	HRESULT(STDMETHODCALLTYPE *GetVarDesc) (ITypeInfo2 *This, UINT index, VARDESC **ppVarDesc);
	HRESULT(STDMETHODCALLTYPE *GetNames) (ITypeInfo2 *This, MEMBERID memid, BSTR *rgBstrNames, UINT cMaxNames, UINT *pcNames);
	HRESULT(STDMETHODCALLTYPE *GetRefTypeOfImplType) (ITypeInfo2 *This, UINT index, HREFTYPE *pRefType);
	HRESULT(STDMETHODCALLTYPE *GetImplTypeFlags) (ITypeInfo2 *This, UINT index, INT *pImplTypeFlags);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (ITypeInfo2 *This, LPOLESTR *rgszNames, UINT cNames, MEMBERID *pMemId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (ITypeInfo2 *This, PVOID pvInstance, MEMBERID memid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *GetDocumentation) (ITypeInfo2 *This, MEMBERID memid, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
	HRESULT(STDMETHODCALLTYPE *GetDllEntry) (ITypeInfo2 *This, MEMBERID memid, INVOKEKIND invKind, BSTR *pBstrDllName, BSTR *pBstrName, WORD *pwOrdinal);
	HRESULT(STDMETHODCALLTYPE *GetRefTypeInfo) (ITypeInfo2 *This, HREFTYPE hRefType, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *AddressOfMember) (ITypeInfo2 *This, MEMBERID memid, INVOKEKIND invKind, PVOID *ppv);
	HRESULT(STDMETHODCALLTYPE *CreateInstance) (ITypeInfo2 *This, IUnknown *pUnkOuter, REFIID riid, PVOID *ppvObj);
	HRESULT(STDMETHODCALLTYPE *GetMops) (ITypeInfo2 *This, MEMBERID memid, BSTR *pBstrMops);
	HRESULT(STDMETHODCALLTYPE *GetContainingTypeLib) (ITypeInfo2 *This, ITypeLib **ppTLib, UINT *pIndex);
	void (STDMETHODCALLTYPE *ReleaseTypeAttr) (ITypeInfo2 *This, TYPEATTR *pTypeAttr);
	void (STDMETHODCALLTYPE *ReleaseFuncDesc) (ITypeInfo2 *This, FUNCDESC *pFuncDesc);
	void (STDMETHODCALLTYPE *ReleaseVarDesc) (ITypeInfo2 *This, VARDESC *pVarDesc);
	HRESULT(STDMETHODCALLTYPE *GetTypeKind) (ITypeInfo2 *This, TYPEKIND *pTypeKind);
	HRESULT(STDMETHODCALLTYPE *GetTypeFlags) (ITypeInfo2 *This, ULONG *pTypeFlags);
	HRESULT(STDMETHODCALLTYPE *GetFuncIndexOfMemId) (ITypeInfo2 *This, MEMBERID memid, INVOKEKIND invKind, UINT *pFuncIndex);
	HRESULT(STDMETHODCALLTYPE *GetVarIndexOfMemId) (ITypeInfo2 *This, MEMBERID memid, UINT *pVarIndex);
	HRESULT(STDMETHODCALLTYPE *GetCustData) (ITypeInfo2 *This, REFGUID guid, VARIANT *pVarVal);
	HRESULT(STDMETHODCALLTYPE *GetFuncCustData) (ITypeInfo2 *This, UINT index, REFGUID guid, VARIANT *pVarVal);
	HRESULT(STDMETHODCALLTYPE *GetParamCustData) (ITypeInfo2 *This, UINT indexFunc, UINT indexParam, REFGUID guid, VARIANT *pVarVal);
	HRESULT(STDMETHODCALLTYPE *GetVarCustData) (ITypeInfo2 *This, UINT index, REFGUID guid, VARIANT *pVarVal);
	HRESULT(STDMETHODCALLTYPE *GetImplTypeCustData) (ITypeInfo2 *This, UINT index, REFGUID guid, VARIANT *pVarVal);
	HRESULT(STDMETHODCALLTYPE *GetDocumentation2) (ITypeInfo2 *This, MEMBERID memid, LCID lcid, BSTR *pbstrHelpString, DWORD *pdwHelpStringContext, BSTR *pbstrHelpStringDll);
	HRESULT(STDMETHODCALLTYPE *GetAllCustData) (ITypeInfo2 *This, CUSTDATA *pCustData);
	HRESULT(STDMETHODCALLTYPE *GetAllFuncCustData) (ITypeInfo2 *This, UINT index, CUSTDATA *pCustData);
	HRESULT(STDMETHODCALLTYPE *GetAllParamCustData) (ITypeInfo2 *This, UINT indexFunc, UINT indexParam, CUSTDATA *pCustData);
	HRESULT(STDMETHODCALLTYPE *GetAllVarCustData) (ITypeInfo2 *This, UINT index, CUSTDATA *pCustData);
	HRESULT(STDMETHODCALLTYPE *GetAllImplTypeCustData) (ITypeInfo2 *This, UINT index, CUSTDATA *pCustData);
	END_INTERFACE
} ITypeInfo2Vtbl;
interface ITypeInfo2
{
	CONST_VTBL struct ITypeInfo2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITypeInfo2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITypeInfo2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITypeInfo2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITypeInfo2_GetTypeAttr(This,ppTypeAttr)    ( (This)->lpVtbl -> GetTypeAttr(This,ppTypeAttr) )
#define ITypeInfo2_GetTypeComp(This,ppTComp)    ( (This)->lpVtbl -> GetTypeComp(This,ppTComp) )
#define ITypeInfo2_GetFuncDesc(This,index,ppFuncDesc)    ( (This)->lpVtbl -> GetFuncDesc(This,index,ppFuncDesc) )
#define ITypeInfo2_GetVarDesc(This,index,ppVarDesc)    ( (This)->lpVtbl -> GetVarDesc(This,index,ppVarDesc) )
#define ITypeInfo2_GetNames(This,memid,rgBstrNames,cMaxNames,pcNames)    ( (This)->lpVtbl -> GetNames(This,memid,rgBstrNames,cMaxNames,pcNames) )
#define ITypeInfo2_GetRefTypeOfImplType(This,index,pRefType)    ( (This)->lpVtbl -> GetRefTypeOfImplType(This,index,pRefType) )
#define ITypeInfo2_GetImplTypeFlags(This,index,pImplTypeFlags)    ( (This)->lpVtbl -> GetImplTypeFlags(This,index,pImplTypeFlags) )
#define ITypeInfo2_GetIDsOfNames(This,rgszNames,cNames,pMemId)    ( (This)->lpVtbl -> GetIDsOfNames(This,rgszNames,cNames,pMemId) )
#define ITypeInfo2_Invoke(This,pvInstance,memid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,pvInstance,memid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITypeInfo2_GetDocumentation(This,memid,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile)    ( (This)->lpVtbl -> GetDocumentation(This,memid,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile) )
#define ITypeInfo2_GetDllEntry(This,memid,invKind,pBstrDllName,pBstrName,pwOrdinal)    ( (This)->lpVtbl -> GetDllEntry(This,memid,invKind,pBstrDllName,pBstrName,pwOrdinal) )
#define ITypeInfo2_GetRefTypeInfo(This,hRefType,ppTInfo)    ( (This)->lpVtbl -> GetRefTypeInfo(This,hRefType,ppTInfo) )
#define ITypeInfo2_AddressOfMember(This,memid,invKind,ppv)    ( (This)->lpVtbl -> AddressOfMember(This,memid,invKind,ppv) )
#define ITypeInfo2_CreateInstance(This,pUnkOuter,riid,ppvObj)    ( (This)->lpVtbl -> CreateInstance(This,pUnkOuter,riid,ppvObj) )
#define ITypeInfo2_GetMops(This,memid,pBstrMops)    ( (This)->lpVtbl -> GetMops(This,memid,pBstrMops) )
#define ITypeInfo2_GetContainingTypeLib(This,ppTLib,pIndex)    ( (This)->lpVtbl -> GetContainingTypeLib(This,ppTLib,pIndex) )
#define ITypeInfo2_ReleaseTypeAttr(This,pTypeAttr)    ( (This)->lpVtbl -> ReleaseTypeAttr(This,pTypeAttr) )
#define ITypeInfo2_ReleaseFuncDesc(This,pFuncDesc)    ( (This)->lpVtbl -> ReleaseFuncDesc(This,pFuncDesc) )
#define ITypeInfo2_ReleaseVarDesc(This,pVarDesc)    ( (This)->lpVtbl -> ReleaseVarDesc(This,pVarDesc) )
#define ITypeInfo2_GetTypeKind(This,pTypeKind)    ( (This)->lpVtbl -> GetTypeKind(This,pTypeKind) )
#define ITypeInfo2_GetTypeFlags(This,pTypeFlags)    ( (This)->lpVtbl -> GetTypeFlags(This,pTypeFlags) )
#define ITypeInfo2_GetFuncIndexOfMemId(This,memid,invKind,pFuncIndex)    ( (This)->lpVtbl -> GetFuncIndexOfMemId(This,memid,invKind,pFuncIndex) )
#define ITypeInfo2_GetVarIndexOfMemId(This,memid,pVarIndex)    ( (This)->lpVtbl -> GetVarIndexOfMemId(This,memid,pVarIndex) )
#define ITypeInfo2_GetCustData(This,guid,pVarVal)    ( (This)->lpVtbl -> GetCustData(This,guid,pVarVal) )
#define ITypeInfo2_GetFuncCustData(This,index,guid,pVarVal)    ( (This)->lpVtbl -> GetFuncCustData(This,index,guid,pVarVal) )
#define ITypeInfo2_GetParamCustData(This,indexFunc,indexParam,guid,pVarVal)    ( (This)->lpVtbl -> GetParamCustData(This,indexFunc,indexParam,guid,pVarVal) )
#define ITypeInfo2_GetVarCustData(This,index,guid,pVarVal)    ( (This)->lpVtbl -> GetVarCustData(This,index,guid,pVarVal) )
#define ITypeInfo2_GetImplTypeCustData(This,index,guid,pVarVal)    ( (This)->lpVtbl -> GetImplTypeCustData(This,index,guid,pVarVal) )
#define ITypeInfo2_GetDocumentation2(This,memid,lcid,pbstrHelpString,pdwHelpStringContext,pbstrHelpStringDll)    ( (This)->lpVtbl -> GetDocumentation2(This,memid,lcid,pbstrHelpString,pdwHelpStringContext,pbstrHelpStringDll) )
#define ITypeInfo2_GetAllCustData(This,pCustData)    ( (This)->lpVtbl -> GetAllCustData(This,pCustData) )
#define ITypeInfo2_GetAllFuncCustData(This,index,pCustData)    ( (This)->lpVtbl -> GetAllFuncCustData(This,index,pCustData) )
#define ITypeInfo2_GetAllParamCustData(This,indexFunc,indexParam,pCustData)    ( (This)->lpVtbl -> GetAllParamCustData(This,indexFunc,indexParam,pCustData) )
#define ITypeInfo2_GetAllVarCustData(This,index,pCustData)    ( (This)->lpVtbl -> GetAllVarCustData(This,index,pCustData) )
#define ITypeInfo2_GetAllImplTypeCustData(This,index,pCustData)    ( (This)->lpVtbl -> GetAllImplTypeCustData(This,index,pCustData) )
#endif
HRESULT STDMETHODCALLTYPE ITypeInfo2_RemoteGetDocumentation2_Proxy(ITypeInfo2 *This, MEMBERID memid, LCID lcid, DWORD refPtrFlags, BSTR *pbstrHelpString, DWORD *pdwHelpStringContext, BSTR *pbstrHelpStringDll);
void __RPC_STUB ITypeInfo2_RemoteGetDocumentation2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ITypeLib_INTERFACE_DEFINED__
#define __ITypeLib_INTERFACE_DEFINED__
typedef enum tagSYSKIND
{
	SYS_WIN16 = 0,
	SYS_WIN32 = (SYS_WIN16 + 1),
	SYS_MAC = (SYS_WIN32 + 1),
	SYS_WIN64 = (SYS_MAC + 1)
} SYSKIND;
typedef enum tagLIBFLAGS
{
	LIBFLAG_FRESTRICTED = 0x1,
	LIBFLAG_FCONTROL = 0x2,
	LIBFLAG_FHIDDEN = 0x4,
	LIBFLAG_FHASDISKIMAGE = 0x8
} LIBFLAGS;
typedef ITypeLib *LPTYPELIB;
typedef struct tagTLIBATTR
{
	GUID guid;
	LCID lcid;
	SYSKIND syskind;
	WORD wMajorVerNum;
	WORD wMinorVerNum;
	WORD wLibFlags;
} TLIBATTR;
typedef struct tagTLIBATTR *LPTLIBATTR;
extern const IID IID_ITypeLib;
typedef struct ITypeLibVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITypeLib *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITypeLib *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITypeLib *This);
	UINT(STDMETHODCALLTYPE *GetTypeInfoCount) (ITypeLib *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ITypeLib *This, UINT index, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoType) (ITypeLib *This, UINT index, TYPEKIND *pTKind);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoOfGuid) (ITypeLib *This, REFGUID guid, ITypeInfo **ppTinfo);
	HRESULT(STDMETHODCALLTYPE *GetLibAttr) (ITypeLib *This, TLIBATTR **ppTLibAttr);
	HRESULT(STDMETHODCALLTYPE *GetTypeComp) (ITypeLib *This, ITypeComp **ppTComp);
	HRESULT(STDMETHODCALLTYPE *GetDocumentation) (ITypeLib *This, INT index, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
	HRESULT(STDMETHODCALLTYPE *IsName) (ITypeLib *This, LPOLESTR szNameBuf, ULONG lHashVal, BOOL *pfName);
	HRESULT(STDMETHODCALLTYPE *FindName) (ITypeLib *This, LPOLESTR szNameBuf, ULONG lHashVal, ITypeInfo **ppTInfo, MEMBERID *rgMemId, USHORT *pcFound);
	void (STDMETHODCALLTYPE *ReleaseTLibAttr) (ITypeLib *This, TLIBATTR *pTLibAttr);
	END_INTERFACE
} ITypeLibVtbl;
interface ITypeLib
{
	CONST_VTBL struct ITypeLibVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITypeLib_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITypeLib_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITypeLib_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITypeLib_GetTypeInfoCount(This)    ( (This)->lpVtbl -> GetTypeInfoCount(This) )
#define ITypeLib_GetTypeInfo(This,index,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,index,ppTInfo) )
#define ITypeLib_GetTypeInfoType(This,index,pTKind)    ( (This)->lpVtbl -> GetTypeInfoType(This,index,pTKind) )
#define ITypeLib_GetTypeInfoOfGuid(This,guid,ppTinfo)    ( (This)->lpVtbl -> GetTypeInfoOfGuid(This,guid,ppTinfo) )
#define ITypeLib_GetLibAttr(This,ppTLibAttr)    ( (This)->lpVtbl -> GetLibAttr(This,ppTLibAttr) )
#define ITypeLib_GetTypeComp(This,ppTComp)    ( (This)->lpVtbl -> GetTypeComp(This,ppTComp) )
#define ITypeLib_GetDocumentation(This,index,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile)    ( (This)->lpVtbl -> GetDocumentation(This,index,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile) )
#define ITypeLib_IsName(This,szNameBuf,lHashVal,pfName)    ( (This)->lpVtbl -> IsName(This,szNameBuf,lHashVal,pfName) )
#define ITypeLib_FindName(This,szNameBuf,lHashVal,ppTInfo,rgMemId,pcFound)    ( (This)->lpVtbl -> FindName(This,szNameBuf,lHashVal,ppTInfo,rgMemId,pcFound) )
#define ITypeLib_ReleaseTLibAttr(This,pTLibAttr)    ( (This)->lpVtbl -> ReleaseTLibAttr(This,pTLibAttr) )
#endif
HRESULT STDMETHODCALLTYPE ITypeLib_RemoteGetTypeInfoCount_Proxy(ITypeLib *This, UINT *pcTInfo);
void __RPC_STUB ITypeLib_RemoteGetTypeInfoCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeLib_RemoteGetLibAttr_Proxy(ITypeLib *This, LPTLIBATTR *ppTLibAttr, CLEANLOCALSTORAGE *pDummy);
void __RPC_STUB ITypeLib_RemoteGetLibAttr_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeLib_RemoteGetDocumentation_Proxy(ITypeLib *This, INT index, DWORD refPtrFlags, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
void __RPC_STUB ITypeLib_RemoteGetDocumentation_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeLib_RemoteIsName_Proxy(ITypeLib *This, LPOLESTR szNameBuf, ULONG lHashVal, BOOL *pfName, BSTR *pBstrLibName);
void __RPC_STUB ITypeLib_RemoteIsName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeLib_RemoteFindName_Proxy(ITypeLib *This, LPOLESTR szNameBuf, ULONG lHashVal, ITypeInfo **ppTInfo, MEMBERID *rgMemId, USHORT *pcFound, BSTR *pBstrLibName);
void __RPC_STUB ITypeLib_RemoteFindName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeLib_LocalReleaseTLibAttr_Proxy(ITypeLib *This);
void __RPC_STUB ITypeLib_LocalReleaseTLibAttr_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ITypeLib2_INTERFACE_DEFINED__
#define __ITypeLib2_INTERFACE_DEFINED__
typedef ITypeLib2 *LPTYPELIB2;
extern const IID IID_ITypeLib2;
typedef struct ITypeLib2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITypeLib2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITypeLib2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITypeLib2 *This);
	UINT(STDMETHODCALLTYPE *GetTypeInfoCount) (ITypeLib2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (ITypeLib2 *This, UINT index, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoType) (ITypeLib2 *This, UINT index, TYPEKIND *pTKind);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoOfGuid) (ITypeLib2 *This, REFGUID guid, ITypeInfo **ppTinfo);
	HRESULT(STDMETHODCALLTYPE *GetLibAttr) (ITypeLib2 *This, TLIBATTR **ppTLibAttr);
	HRESULT(STDMETHODCALLTYPE *GetTypeComp) (ITypeLib2 *This, ITypeComp **ppTComp);
	HRESULT(STDMETHODCALLTYPE *GetDocumentation) (ITypeLib2 *This, INT index, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
	HRESULT(STDMETHODCALLTYPE *IsName) (ITypeLib2 *This, LPOLESTR szNameBuf, ULONG lHashVal, BOOL *pfName);
	HRESULT(STDMETHODCALLTYPE *FindName) (ITypeLib2 *This, LPOLESTR szNameBuf, ULONG lHashVal, ITypeInfo **ppTInfo, MEMBERID *rgMemId, USHORT *pcFound);
	void (STDMETHODCALLTYPE *ReleaseTLibAttr) (ITypeLib2 *This, TLIBATTR *pTLibAttr);
	HRESULT(STDMETHODCALLTYPE *GetCustData) (ITypeLib2 *This, REFGUID guid, VARIANT *pVarVal);
	HRESULT(STDMETHODCALLTYPE *GetLibStatistics) (ITypeLib2 *This, ULONG *pcUniqueNames, ULONG *pcchUniqueNames);
	HRESULT(STDMETHODCALLTYPE *GetDocumentation2) (ITypeLib2 *This, INT index, LCID lcid, BSTR *pbstrHelpString, DWORD *pdwHelpStringContext, BSTR *pbstrHelpStringDll);
	HRESULT(STDMETHODCALLTYPE *GetAllCustData) (ITypeLib2 *This, CUSTDATA *pCustData);
	END_INTERFACE
} ITypeLib2Vtbl;
interface ITypeLib2
{
	CONST_VTBL struct ITypeLib2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITypeLib2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITypeLib2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITypeLib2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITypeLib2_GetTypeInfoCount(This)    ( (This)->lpVtbl -> GetTypeInfoCount(This) )
#define ITypeLib2_GetTypeInfo(This,index,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,index,ppTInfo) )
#define ITypeLib2_GetTypeInfoType(This,index,pTKind)    ( (This)->lpVtbl -> GetTypeInfoType(This,index,pTKind) )
#define ITypeLib2_GetTypeInfoOfGuid(This,guid,ppTinfo)    ( (This)->lpVtbl -> GetTypeInfoOfGuid(This,guid,ppTinfo) )
#define ITypeLib2_GetLibAttr(This,ppTLibAttr)    ( (This)->lpVtbl -> GetLibAttr(This,ppTLibAttr) )
#define ITypeLib2_GetTypeComp(This,ppTComp)    ( (This)->lpVtbl -> GetTypeComp(This,ppTComp) )
#define ITypeLib2_GetDocumentation(This,index,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile)    ( (This)->lpVtbl -> GetDocumentation(This,index,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile) )
#define ITypeLib2_IsName(This,szNameBuf,lHashVal,pfName)    ( (This)->lpVtbl -> IsName(This,szNameBuf,lHashVal,pfName) )
#define ITypeLib2_FindName(This,szNameBuf,lHashVal,ppTInfo,rgMemId,pcFound)    ( (This)->lpVtbl -> FindName(This,szNameBuf,lHashVal,ppTInfo,rgMemId,pcFound) )
#define ITypeLib2_ReleaseTLibAttr(This,pTLibAttr)    ( (This)->lpVtbl -> ReleaseTLibAttr(This,pTLibAttr) )
#define ITypeLib2_GetCustData(This,guid,pVarVal)    ( (This)->lpVtbl -> GetCustData(This,guid,pVarVal) )
#define ITypeLib2_GetLibStatistics(This,pcUniqueNames,pcchUniqueNames)    ( (This)->lpVtbl -> GetLibStatistics(This,pcUniqueNames,pcchUniqueNames) )
#define ITypeLib2_GetDocumentation2(This,index,lcid,pbstrHelpString,pdwHelpStringContext,pbstrHelpStringDll)    ( (This)->lpVtbl -> GetDocumentation2(This,index,lcid,pbstrHelpString,pdwHelpStringContext,pbstrHelpStringDll) )
#define ITypeLib2_GetAllCustData(This,pCustData)    ( (This)->lpVtbl -> GetAllCustData(This,pCustData) )
#endif
HRESULT STDMETHODCALLTYPE ITypeLib2_RemoteGetLibStatistics_Proxy(ITypeLib2 *This, ULONG *pcUniqueNames, ULONG *pcchUniqueNames);
void __RPC_STUB ITypeLib2_RemoteGetLibStatistics_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ITypeLib2_RemoteGetDocumentation2_Proxy(ITypeLib2 *This, INT index, LCID lcid, DWORD refPtrFlags, BSTR *pbstrHelpString, DWORD *pdwHelpStringContext, BSTR *pbstrHelpStringDll);
void __RPC_STUB ITypeLib2_RemoteGetDocumentation2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ITypeChangeEvents_INTERFACE_DEFINED__
#define __ITypeChangeEvents_INTERFACE_DEFINED__
typedef ITypeChangeEvents *LPTYPECHANGEEVENTS;
typedef enum tagCHANGEKIND
{
	CHANGEKIND_ADDMEMBER = 0,
	CHANGEKIND_DELETEMEMBER = (CHANGEKIND_ADDMEMBER + 1),
	CHANGEKIND_SETNAMES = (CHANGEKIND_DELETEMEMBER + 1),
	CHANGEKIND_SETDOCUMENTATION = (CHANGEKIND_SETNAMES + 1),
	CHANGEKIND_GENERAL = (CHANGEKIND_SETDOCUMENTATION + 1),
	CHANGEKIND_INVALIDATE = (CHANGEKIND_GENERAL + 1),
	CHANGEKIND_CHANGEFAILED = (CHANGEKIND_INVALIDATE + 1),
	CHANGEKIND_MAX = (CHANGEKIND_CHANGEFAILED + 1)
} CHANGEKIND;
extern const IID IID_ITypeChangeEvents;
typedef struct ITypeChangeEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITypeChangeEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITypeChangeEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITypeChangeEvents *This);
	HRESULT(STDMETHODCALLTYPE *RequestTypeChange) (ITypeChangeEvents *This, CHANGEKIND changeKind, ITypeInfo *pTInfoBefore, LPOLESTR pStrName, INT *pfCancel);
	HRESULT(STDMETHODCALLTYPE *AfterTypeChange) (ITypeChangeEvents *This, CHANGEKIND changeKind, ITypeInfo *pTInfoAfter, LPOLESTR pStrName);
	END_INTERFACE
} ITypeChangeEventsVtbl;
interface ITypeChangeEvents
{
	CONST_VTBL struct ITypeChangeEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITypeChangeEvents_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITypeChangeEvents_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITypeChangeEvents_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITypeChangeEvents_RequestTypeChange(This,changeKind,pTInfoBefore,pStrName,pfCancel)    ( (This)->lpVtbl -> RequestTypeChange(This,changeKind,pTInfoBefore,pStrName,pfCancel) )
#define ITypeChangeEvents_AfterTypeChange(This,changeKind,pTInfoAfter,pStrName)    ( (This)->lpVtbl -> AfterTypeChange(This,changeKind,pTInfoAfter,pStrName) )
#endif
#endif
#ifndef __IErrorInfo_INTERFACE_DEFINED__
#define __IErrorInfo_INTERFACE_DEFINED__
typedef IErrorInfo *LPERRORINFO;
extern const IID IID_IErrorInfo;
typedef struct IErrorInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IErrorInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IErrorInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IErrorInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetGUID) (IErrorInfo *This, GUID *pGUID);
	HRESULT(STDMETHODCALLTYPE *GetSource) (IErrorInfo *This, BSTR *pBstrSource);
	HRESULT(STDMETHODCALLTYPE *GetDescription) (IErrorInfo *This, BSTR *pBstrDescription);
	HRESULT(STDMETHODCALLTYPE *GetHelpFile) (IErrorInfo *This, BSTR *pBstrHelpFile);
	HRESULT(STDMETHODCALLTYPE *GetHelpContext) (IErrorInfo *This, DWORD *pdwHelpContext);
	END_INTERFACE
} IErrorInfoVtbl;
interface IErrorInfo
{
	CONST_VTBL struct IErrorInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IErrorInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IErrorInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IErrorInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IErrorInfo_GetGUID(This,pGUID)    ( (This)->lpVtbl -> GetGUID(This,pGUID) )
#define IErrorInfo_GetSource(This,pBstrSource)    ( (This)->lpVtbl -> GetSource(This,pBstrSource) )
#define IErrorInfo_GetDescription(This,pBstrDescription)    ( (This)->lpVtbl -> GetDescription(This,pBstrDescription) )
#define IErrorInfo_GetHelpFile(This,pBstrHelpFile)    ( (This)->lpVtbl -> GetHelpFile(This,pBstrHelpFile) )
#define IErrorInfo_GetHelpContext(This,pdwHelpContext)    ( (This)->lpVtbl -> GetHelpContext(This,pdwHelpContext) )
#endif
#endif
#ifndef __ICreateErrorInfo_INTERFACE_DEFINED__
#define __ICreateErrorInfo_INTERFACE_DEFINED__
typedef ICreateErrorInfo *LPCREATEERRORINFO;
extern const IID IID_ICreateErrorInfo;
typedef struct ICreateErrorInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICreateErrorInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICreateErrorInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICreateErrorInfo *This);
	HRESULT(STDMETHODCALLTYPE *SetGUID) (ICreateErrorInfo *This, REFGUID rguid);
	HRESULT(STDMETHODCALLTYPE *SetSource) (ICreateErrorInfo *This, LPOLESTR szSource);
	HRESULT(STDMETHODCALLTYPE *SetDescription) (ICreateErrorInfo *This, LPOLESTR szDescription);
	HRESULT(STDMETHODCALLTYPE *SetHelpFile) (ICreateErrorInfo *This, LPOLESTR szHelpFile);
	HRESULT(STDMETHODCALLTYPE *SetHelpContext) (ICreateErrorInfo *This, DWORD dwHelpContext);
	END_INTERFACE
} ICreateErrorInfoVtbl;
interface ICreateErrorInfo
{
	CONST_VTBL struct ICreateErrorInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICreateErrorInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICreateErrorInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICreateErrorInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICreateErrorInfo_SetGUID(This,rguid)    ( (This)->lpVtbl -> SetGUID(This,rguid) )
#define ICreateErrorInfo_SetSource(This,szSource)    ( (This)->lpVtbl -> SetSource(This,szSource) )
#define ICreateErrorInfo_SetDescription(This,szDescription)    ( (This)->lpVtbl -> SetDescription(This,szDescription) )
#define ICreateErrorInfo_SetHelpFile(This,szHelpFile)    ( (This)->lpVtbl -> SetHelpFile(This,szHelpFile) )
#define ICreateErrorInfo_SetHelpContext(This,dwHelpContext)    ( (This)->lpVtbl -> SetHelpContext(This,dwHelpContext) )
#endif
#endif
#ifndef __ISupportErrorInfo_INTERFACE_DEFINED__
#define __ISupportErrorInfo_INTERFACE_DEFINED__
typedef ISupportErrorInfo *LPSUPPORTERRORINFO;
extern const IID IID_ISupportErrorInfo;
typedef struct ISupportErrorInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISupportErrorInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISupportErrorInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISupportErrorInfo *This);
	HRESULT(STDMETHODCALLTYPE *InterfaceSupportsErrorInfo) (ISupportErrorInfo *This, REFIID riid);
	END_INTERFACE
} ISupportErrorInfoVtbl;
interface ISupportErrorInfo
{
	CONST_VTBL struct ISupportErrorInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISupportErrorInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISupportErrorInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ISupportErrorInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ISupportErrorInfo_InterfaceSupportsErrorInfo(This,riid)    ( (This)->lpVtbl -> InterfaceSupportsErrorInfo(This,riid) )
#endif
#endif
#ifndef __ITypeFactory_INTERFACE_DEFINED__
#define __ITypeFactory_INTERFACE_DEFINED__
extern const IID IID_ITypeFactory;
typedef struct ITypeFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITypeFactory *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITypeFactory *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITypeFactory *This);
	HRESULT(STDMETHODCALLTYPE *CreateFromTypeInfo) (ITypeFactory *This, ITypeInfo *pTypeInfo, REFIID riid, IUnknown **ppv);
	END_INTERFACE
} ITypeFactoryVtbl;
interface ITypeFactory
{
	CONST_VTBL struct ITypeFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITypeFactory_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITypeFactory_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITypeFactory_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITypeFactory_CreateFromTypeInfo(This,pTypeInfo,riid,ppv)    ( (This)->lpVtbl -> CreateFromTypeInfo(This,pTypeInfo,riid,ppv) )
#endif
#endif
#ifndef __ITypeMarshal_INTERFACE_DEFINED__
#define __ITypeMarshal_INTERFACE_DEFINED__
extern const IID IID_ITypeMarshal;
typedef struct ITypeMarshalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITypeMarshal *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITypeMarshal *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITypeMarshal *This);
	HRESULT(STDMETHODCALLTYPE *Size) (ITypeMarshal *This, PVOID pvType, DWORD dwDestContext, PVOID pvDestContext, ULONG *pSize);
	HRESULT(STDMETHODCALLTYPE *Marshal) (ITypeMarshal *This, PVOID pvType, DWORD dwDestContext, PVOID pvDestContext, ULONG cbBufferLength, BYTE *pBuffer, ULONG *pcbWritten);
	HRESULT(STDMETHODCALLTYPE *Unmarshal) (ITypeMarshal *This, PVOID pvType, DWORD dwFlags, ULONG cbBufferLength, BYTE *pBuffer, ULONG *pcbRead);
	HRESULT(STDMETHODCALLTYPE *Free) (ITypeMarshal *This, PVOID pvType);
	END_INTERFACE
} ITypeMarshalVtbl;
interface ITypeMarshal
{
	CONST_VTBL struct ITypeMarshalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITypeMarshal_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITypeMarshal_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITypeMarshal_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITypeMarshal_Size(This,pvType,dwDestContext,pvDestContext,pSize)    ( (This)->lpVtbl -> Size(This,pvType,dwDestContext,pvDestContext,pSize) )
#define ITypeMarshal_Marshal(This,pvType,dwDestContext,pvDestContext,cbBufferLength,pBuffer,pcbWritten)    ( (This)->lpVtbl -> Marshal(This,pvType,dwDestContext,pvDestContext,cbBufferLength,pBuffer,pcbWritten) )
#define ITypeMarshal_Unmarshal(This,pvType,dwFlags,cbBufferLength,pBuffer,pcbRead)    ( (This)->lpVtbl -> Unmarshal(This,pvType,dwFlags,cbBufferLength,pBuffer,pcbRead) )
#define ITypeMarshal_Free(This,pvType)    ( (This)->lpVtbl -> Free(This,pvType) )
#endif
#endif
#ifndef __IRecordInfo_INTERFACE_DEFINED__
#define __IRecordInfo_INTERFACE_DEFINED__
typedef IRecordInfo *LPRECORDINFO;
extern const IID IID_IRecordInfo;
typedef struct IRecordInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRecordInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRecordInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRecordInfo *This);
	HRESULT(STDMETHODCALLTYPE *RecordInit) (IRecordInfo *This, PVOID pvNew);
	HRESULT(STDMETHODCALLTYPE *RecordClear) (IRecordInfo *This, PVOID pvExisting);
	HRESULT(STDMETHODCALLTYPE *RecordCopy) (IRecordInfo *This, PVOID pvExisting, PVOID pvNew);
	HRESULT(STDMETHODCALLTYPE *GetGuid) (IRecordInfo *This, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *GetName) (IRecordInfo *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *GetSize) (IRecordInfo *This, ULONG *pcbSize);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IRecordInfo *This, ITypeInfo **ppTypeInfo);
	HRESULT(STDMETHODCALLTYPE *GetField) (IRecordInfo *This, PVOID pvData, LPCOLESTR szFieldName, VARIANT *pvarField);
	HRESULT(STDMETHODCALLTYPE *GetFieldNoCopy) (IRecordInfo *This, PVOID pvData, LPCOLESTR szFieldName, VARIANT *pvarField, PVOID *ppvDataCArray);
	HRESULT(STDMETHODCALLTYPE *PutField) (IRecordInfo *This, ULONG wFlags, PVOID pvData, LPCOLESTR szFieldName, VARIANT *pvarField);
	HRESULT(STDMETHODCALLTYPE *PutFieldNoCopy) (IRecordInfo *This, ULONG wFlags, PVOID pvData, LPCOLESTR szFieldName, VARIANT *pvarField);
	HRESULT(STDMETHODCALLTYPE *GetFieldNames) (IRecordInfo *This, ULONG *pcNames, BSTR *rgBstrNames);
	BOOL(STDMETHODCALLTYPE *IsMatchingType) (IRecordInfo *This, IRecordInfo *pRecordInfo);
	PVOID(STDMETHODCALLTYPE *RecordCreate) (IRecordInfo *This);
	HRESULT(STDMETHODCALLTYPE *RecordCreateCopy) (IRecordInfo *This, PVOID pvSource, PVOID *ppvDest);
	HRESULT(STDMETHODCALLTYPE *RecordDestroy) (IRecordInfo *This, PVOID pvRecord);
	END_INTERFACE
} IRecordInfoVtbl;
interface IRecordInfo
{
	CONST_VTBL struct IRecordInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRecordInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRecordInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRecordInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRecordInfo_RecordInit(This,pvNew)    ( (This)->lpVtbl -> RecordInit(This,pvNew) )
#define IRecordInfo_RecordClear(This,pvExisting)    ( (This)->lpVtbl -> RecordClear(This,pvExisting) )
#define IRecordInfo_RecordCopy(This,pvExisting,pvNew)    ( (This)->lpVtbl -> RecordCopy(This,pvExisting,pvNew) )
#define IRecordInfo_GetGuid(This,pguid)    ( (This)->lpVtbl -> GetGuid(This,pguid) )
#define IRecordInfo_GetName(This,pbstrName)    ( (This)->lpVtbl -> GetName(This,pbstrName) )
#define IRecordInfo_GetSize(This,pcbSize)    ( (This)->lpVtbl -> GetSize(This,pcbSize) )
#define IRecordInfo_GetTypeInfo(This,ppTypeInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,ppTypeInfo) )
#define IRecordInfo_GetField(This,pvData,szFieldName,pvarField)    ( (This)->lpVtbl -> GetField(This,pvData,szFieldName,pvarField) )
#define IRecordInfo_GetFieldNoCopy(This,pvData,szFieldName,pvarField,ppvDataCArray)    ( (This)->lpVtbl -> GetFieldNoCopy(This,pvData,szFieldName,pvarField,ppvDataCArray) )
#define IRecordInfo_PutField(This,wFlags,pvData,szFieldName,pvarField)    ( (This)->lpVtbl -> PutField(This,wFlags,pvData,szFieldName,pvarField) )
#define IRecordInfo_PutFieldNoCopy(This,wFlags,pvData,szFieldName,pvarField)    ( (This)->lpVtbl -> PutFieldNoCopy(This,wFlags,pvData,szFieldName,pvarField) )
#define IRecordInfo_GetFieldNames(This,pcNames,rgBstrNames)    ( (This)->lpVtbl -> GetFieldNames(This,pcNames,rgBstrNames) )
#define IRecordInfo_IsMatchingType(This,pRecordInfo)    ( (This)->lpVtbl -> IsMatchingType(This,pRecordInfo) )
#define IRecordInfo_RecordCreate(This)    ( (This)->lpVtbl -> RecordCreate(This) )
#define IRecordInfo_RecordCreateCopy(This,pvSource,ppvDest)    ( (This)->lpVtbl -> RecordCreateCopy(This,pvSource,ppvDest) )
#define IRecordInfo_RecordDestroy(This,pvRecord)    ( (This)->lpVtbl -> RecordDestroy(This,pvRecord) )
#endif
#endif
#ifndef __IErrorLog_INTERFACE_DEFINED__
#define __IErrorLog_INTERFACE_DEFINED__
typedef IErrorLog *LPERRORLOG;
extern const IID IID_IErrorLog;
typedef struct IErrorLogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IErrorLog *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IErrorLog *This);
	ULONG(STDMETHODCALLTYPE *Release) (IErrorLog *This);
	HRESULT(STDMETHODCALLTYPE *AddError) (IErrorLog *This, LPCOLESTR pszPropName, EXCEPINFO *pExcepInfo);
	END_INTERFACE
} IErrorLogVtbl;
interface IErrorLog
{
	CONST_VTBL struct IErrorLogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IErrorLog_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IErrorLog_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IErrorLog_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IErrorLog_AddError(This,pszPropName,pExcepInfo)    ( (This)->lpVtbl -> AddError(This,pszPropName,pExcepInfo) )
#endif
#endif
#ifndef __IPropertyBag_INTERFACE_DEFINED__
#define __IPropertyBag_INTERFACE_DEFINED__
typedef IPropertyBag *LPPROPERTYBAG;
extern const IID IID_IPropertyBag;
typedef struct IPropertyBagVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPropertyBag *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPropertyBag *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPropertyBag *This);
	HRESULT(STDMETHODCALLTYPE *Read) (IPropertyBag *This, LPCOLESTR pszPropName, VARIANT *pVar, IErrorLog *pErrorLog);
	HRESULT(STDMETHODCALLTYPE *Write) (IPropertyBag *This, LPCOLESTR pszPropName, VARIANT *pVar);
	END_INTERFACE
} IPropertyBagVtbl;
interface IPropertyBag
{
	CONST_VTBL struct IPropertyBagVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPropertyBag_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPropertyBag_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPropertyBag_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPropertyBag_Read(This,pszPropName,pVar,pErrorLog)    ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
#define IPropertyBag_Write(This,pszPropName,pVar)    ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
#endif
HRESULT STDMETHODCALLTYPE IPropertyBag_RemoteRead_Proxy(IPropertyBag *This, LPCOLESTR pszPropName, VARIANT *pVar, IErrorLog *pErrorLog, DWORD varType, IUnknown *pUnkObj);
void __RPC_STUB IPropertyBag_RemoteRead_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oaidl_0000_0021_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER CLEANLOCALSTORAGE_UserSize(unsigned long *, unsigned long, CLEANLOCALSTORAGE *);
unsigned char *__RPC_USER CLEANLOCALSTORAGE_UserMarshal(unsigned long *, unsigned char *, CLEANLOCALSTORAGE *);
unsigned char *__RPC_USER CLEANLOCALSTORAGE_UserUnmarshal(unsigned long *, unsigned char *, CLEANLOCALSTORAGE *);
void __RPC_USER CLEANLOCALSTORAGE_UserFree(unsigned long *, CLEANLOCALSTORAGE *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER CLEANLOCALSTORAGE_UserSize64(unsigned long *, unsigned long, CLEANLOCALSTORAGE *);
unsigned char *__RPC_USER CLEANLOCALSTORAGE_UserMarshal64(unsigned long *, unsigned char *, CLEANLOCALSTORAGE *);
unsigned char *__RPC_USER CLEANLOCALSTORAGE_UserUnmarshal64(unsigned long *, unsigned char *, CLEANLOCALSTORAGE *);
void __RPC_USER CLEANLOCALSTORAGE_UserFree64(unsigned long *, CLEANLOCALSTORAGE *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
HRESULT STDMETHODCALLTYPE IDispatch_Invoke_Proxy(IDispatch *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
HRESULT STDMETHODCALLTYPE IDispatch_Invoke_Stub(IDispatch *This, DISPID dispIdMember, REFIID riid, LCID lcid, DWORD dwFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *pArgErr, UINT cVarRef, UINT *rgVarRefIdx, VARIANTARG *rgVarRef);
HRESULT STDMETHODCALLTYPE IEnumVARIANT_Next_Proxy(IEnumVARIANT *This, ULONG celt, VARIANT *rgVar, ULONG *pCeltFetched);
HRESULT STDMETHODCALLTYPE IEnumVARIANT_Next_Stub(IEnumVARIANT *This, ULONG celt, VARIANT *rgVar, ULONG *pCeltFetched);
HRESULT STDMETHODCALLTYPE ITypeComp_Bind_Proxy(ITypeComp *This, LPOLESTR szName, ULONG lHashVal, WORD wFlags, ITypeInfo **ppTInfo, DESCKIND *pDescKind, BINDPTR *pBindPtr);
HRESULT STDMETHODCALLTYPE ITypeComp_Bind_Stub(ITypeComp *This, LPOLESTR szName, ULONG lHashVal, WORD wFlags, ITypeInfo **ppTInfo, DESCKIND *pDescKind, LPFUNCDESC *ppFuncDesc, LPVARDESC *ppVarDesc, ITypeComp **ppTypeComp, CLEANLOCALSTORAGE *pDummy);
HRESULT STDMETHODCALLTYPE ITypeComp_BindType_Proxy(ITypeComp *This, LPOLESTR szName, ULONG lHashVal, ITypeInfo **ppTInfo, ITypeComp **ppTComp);
HRESULT STDMETHODCALLTYPE ITypeComp_BindType_Stub(ITypeComp *This, LPOLESTR szName, ULONG lHashVal, ITypeInfo **ppTInfo);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetTypeAttr_Proxy(ITypeInfo *This, TYPEATTR **ppTypeAttr);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetTypeAttr_Stub(ITypeInfo *This, LPTYPEATTR *ppTypeAttr, CLEANLOCALSTORAGE *pDummy);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetFuncDesc_Proxy(ITypeInfo *This, UINT index, FUNCDESC **ppFuncDesc);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetFuncDesc_Stub(ITypeInfo *This, UINT index, LPFUNCDESC *ppFuncDesc, CLEANLOCALSTORAGE *pDummy);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetVarDesc_Proxy(ITypeInfo *This, UINT index, VARDESC **ppVarDesc);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetVarDesc_Stub(ITypeInfo *This, UINT index, LPVARDESC *ppVarDesc, CLEANLOCALSTORAGE *pDummy);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetNames_Proxy(ITypeInfo *This, MEMBERID memid, BSTR *rgBstrNames, UINT cMaxNames, UINT *pcNames);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetNames_Stub(ITypeInfo *This, MEMBERID memid, BSTR *rgBstrNames, UINT cMaxNames, UINT *pcNames);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetIDsOfNames_Proxy(ITypeInfo *This, LPOLESTR *rgszNames, UINT cNames, MEMBERID *pMemId);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetIDsOfNames_Stub(ITypeInfo *This);
HRESULT STDMETHODCALLTYPE ITypeInfo_Invoke_Proxy(ITypeInfo *This, PVOID pvInstance, MEMBERID memid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
HRESULT STDMETHODCALLTYPE ITypeInfo_Invoke_Stub(ITypeInfo *This);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetDocumentation_Proxy(ITypeInfo *This, MEMBERID memid, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetDocumentation_Stub(ITypeInfo *This, MEMBERID memid, DWORD refPtrFlags, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetDllEntry_Proxy(ITypeInfo *This, MEMBERID memid, INVOKEKIND invKind, BSTR *pBstrDllName, BSTR *pBstrName, WORD *pwOrdinal);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetDllEntry_Stub(ITypeInfo *This, MEMBERID memid, INVOKEKIND invKind, DWORD refPtrFlags, BSTR *pBstrDllName, BSTR *pBstrName, WORD *pwOrdinal);
HRESULT STDMETHODCALLTYPE ITypeInfo_AddressOfMember_Proxy(ITypeInfo *This, MEMBERID memid, INVOKEKIND invKind, PVOID *ppv);
HRESULT STDMETHODCALLTYPE ITypeInfo_AddressOfMember_Stub(ITypeInfo *This);
HRESULT STDMETHODCALLTYPE ITypeInfo_CreateInstance_Proxy(ITypeInfo *This, IUnknown *pUnkOuter, REFIID riid, PVOID *ppvObj);
HRESULT STDMETHODCALLTYPE ITypeInfo_CreateInstance_Stub(ITypeInfo *This, REFIID riid, IUnknown **ppvObj);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetContainingTypeLib_Proxy(ITypeInfo *This, ITypeLib **ppTLib, UINT *pIndex);
HRESULT STDMETHODCALLTYPE ITypeInfo_GetContainingTypeLib_Stub(ITypeInfo *This, ITypeLib **ppTLib, UINT *pIndex);
void STDMETHODCALLTYPE ITypeInfo_ReleaseTypeAttr_Proxy(ITypeInfo *This, TYPEATTR *pTypeAttr);
HRESULT STDMETHODCALLTYPE ITypeInfo_ReleaseTypeAttr_Stub(ITypeInfo *This);
void STDMETHODCALLTYPE ITypeInfo_ReleaseFuncDesc_Proxy(ITypeInfo *This, FUNCDESC *pFuncDesc);
HRESULT STDMETHODCALLTYPE ITypeInfo_ReleaseFuncDesc_Stub(ITypeInfo *This);
void STDMETHODCALLTYPE ITypeInfo_ReleaseVarDesc_Proxy(ITypeInfo *This, VARDESC *pVarDesc);
HRESULT STDMETHODCALLTYPE ITypeInfo_ReleaseVarDesc_Stub(ITypeInfo *This);
HRESULT STDMETHODCALLTYPE ITypeInfo2_GetDocumentation2_Proxy(ITypeInfo2 *This, MEMBERID memid, LCID lcid, BSTR *pbstrHelpString, DWORD *pdwHelpStringContext, BSTR *pbstrHelpStringDll);
HRESULT STDMETHODCALLTYPE ITypeInfo2_GetDocumentation2_Stub(ITypeInfo2 *This, MEMBERID memid, LCID lcid, DWORD refPtrFlags, BSTR *pbstrHelpString, DWORD *pdwHelpStringContext, BSTR *pbstrHelpStringDll);
UINT STDMETHODCALLTYPE ITypeLib_GetTypeInfoCount_Proxy(ITypeLib *This);
HRESULT STDMETHODCALLTYPE ITypeLib_GetTypeInfoCount_Stub(ITypeLib *This, UINT *pcTInfo);
HRESULT STDMETHODCALLTYPE ITypeLib_GetLibAttr_Proxy(ITypeLib *This, TLIBATTR **ppTLibAttr);
HRESULT STDMETHODCALLTYPE ITypeLib_GetLibAttr_Stub(ITypeLib *This, LPTLIBATTR *ppTLibAttr, CLEANLOCALSTORAGE *pDummy);
HRESULT STDMETHODCALLTYPE ITypeLib_GetDocumentation_Proxy(ITypeLib *This, INT index, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
HRESULT STDMETHODCALLTYPE ITypeLib_GetDocumentation_Stub(ITypeLib *This, INT index, DWORD refPtrFlags, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);
HRESULT STDMETHODCALLTYPE ITypeLib_IsName_Proxy(ITypeLib *This, LPOLESTR szNameBuf, ULONG lHashVal, BOOL *pfName);
HRESULT STDMETHODCALLTYPE ITypeLib_IsName_Stub(ITypeLib *This, LPOLESTR szNameBuf, ULONG lHashVal, BOOL *pfName, BSTR *pBstrLibName);
HRESULT STDMETHODCALLTYPE ITypeLib_FindName_Proxy(ITypeLib *This, LPOLESTR szNameBuf, ULONG lHashVal, ITypeInfo **ppTInfo, MEMBERID *rgMemId, USHORT *pcFound);
HRESULT STDMETHODCALLTYPE ITypeLib_FindName_Stub(ITypeLib *This, LPOLESTR szNameBuf, ULONG lHashVal, ITypeInfo **ppTInfo, MEMBERID *rgMemId, USHORT *pcFound, BSTR *pBstrLibName);
void STDMETHODCALLTYPE ITypeLib_ReleaseTLibAttr_Proxy(ITypeLib *This, TLIBATTR *pTLibAttr);
HRESULT STDMETHODCALLTYPE ITypeLib_ReleaseTLibAttr_Stub(ITypeLib *This);
HRESULT STDMETHODCALLTYPE ITypeLib2_GetLibStatistics_Proxy(ITypeLib2 *This, ULONG *pcUniqueNames, ULONG *pcchUniqueNames);
HRESULT STDMETHODCALLTYPE ITypeLib2_GetLibStatistics_Stub(ITypeLib2 *This, ULONG *pcUniqueNames, ULONG *pcchUniqueNames);
HRESULT STDMETHODCALLTYPE ITypeLib2_GetDocumentation2_Proxy(ITypeLib2 *This, INT index, LCID lcid, BSTR *pbstrHelpString, DWORD *pdwHelpStringContext, BSTR *pbstrHelpStringDll);
HRESULT STDMETHODCALLTYPE ITypeLib2_GetDocumentation2_Stub(ITypeLib2 *This, INT index, LCID lcid, DWORD refPtrFlags, BSTR *pbstrHelpString, DWORD *pdwHelpStringContext, BSTR *pbstrHelpStringDll);
HRESULT STDMETHODCALLTYPE IPropertyBag_Read_Proxy(IPropertyBag *This, LPCOLESTR pszPropName, VARIANT *pVar, IErrorLog *pErrorLog);
HRESULT STDMETHODCALLTYPE IPropertyBag_Read_Stub(IPropertyBag *This, LPCOLESTR pszPropName, VARIANT *pVar, IErrorLog *pErrorLog, DWORD varType, IUnknown *pUnkObj);
#endif
