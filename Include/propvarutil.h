/*+@@file@@----------------------------------------------------------------*//*!
 \file		propvarutil.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 12 00:41:44 2016
 \date		Modified on Mon Sep 12 00:41:44 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef PROPVARUTIL_H__
#define PROPVARUTIL_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef LONG NTSTATUS;
#include <propapi.h>
#include <shtypes.h>
#include <shlwapi.h>
#ifndef PSSTDAPI
#if defined(_PROPSYS_)
#define PSSTDAPI          STDAPI
#define PSSTDAPI_(type)   STDAPI_(type)
#else
#define PSSTDAPI          extern DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define PSSTDAPI_(type)   extern DECLSPEC_IMPORT type STDAPICALLTYPE
#endif
#endif
enum tagPSTIME_FLAGS
{
    PSTF_UTC   = 0x00000000,
    PSTF_LOCAL = 0x00000001,
};
typedef int PSTIME_FLAGS;
PSSTDAPI InitPropVariantFromResource(HINSTANCE hinst, UINT id, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromBuffer(const void *pv, UINT cb, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromCLSID(REFCLSID clsid, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromGUIDAsString(REFGUID guid, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromFileTime(const FILETIME *pftIn, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromPropVariantVectorElem(REFPROPVARIANT propvarIn, ULONG iElem, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantVectorFromPropVariant(REFPROPVARIANT propvarSingle, PROPVARIANT *ppropvarVector);
PSSTDAPI InitPropVariantFromStrRet(STRRET *pstrret, PCUITEMID_CHILD pidl, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromBooleanVector(const BOOL *prgf, ULONG cElems, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromInt16Vector(const SHORT *prgn, ULONG cElems, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromUInt16Vector(const USHORT *prgn, ULONG cElems, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromInt32Vector(const LONG *prgn, ULONG cElems, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromUInt32Vector(const ULONG *prgn, ULONG cElems, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromInt64Vector(const LONGLONG *prgn, ULONG cElems, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromUInt64Vector(const ULONGLONG *prgn, ULONG cElems, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromDoubleVector(const DOUBLE *prgn, ULONG cElems, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromFileTimeVector(const FILETIME *prgft, ULONG cElems, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromStringVector(PCWSTR *prgsz, ULONG cElems, PROPVARIANT *ppropvar);
PSSTDAPI InitPropVariantFromStringAsVector(PCWSTR psz, PROPVARIANT *ppropvar);
PSSTDAPI_(BOOL)      PropVariantToBooleanWithDefault(REFPROPVARIANT propvarIn, BOOL fDefault);
PSSTDAPI_(SHORT)     PropVariantToInt16WithDefault(REFPROPVARIANT propvarIn, SHORT iDefault);
PSSTDAPI_(USHORT)    PropVariantToUInt16WithDefault(REFPROPVARIANT propvarIn, USHORT uiDefault);
PSSTDAPI_(LONG)      PropVariantToInt32WithDefault(REFPROPVARIANT propvarIn, LONG lDefault);
PSSTDAPI_(ULONG)     PropVariantToUInt32WithDefault(REFPROPVARIANT propvarIn, ULONG ulDefault);
PSSTDAPI_(LONGLONG)  PropVariantToInt64WithDefault(REFPROPVARIANT propvarIn, LONGLONG llDefault);
PSSTDAPI_(ULONGLONG) PropVariantToUInt64WithDefault(REFPROPVARIANT propvarIn, ULONGLONG ullDefault);
PSSTDAPI_(DOUBLE)    PropVariantToDoubleWithDefault(REFPROPVARIANT propvarIn, DOUBLE dblDefault);
PSSTDAPI_(PCWSTR)    PropVariantToStringWithDefault(REFPROPVARIANT propvarIn, LPCWSTR pszDefault);
PSSTDAPI             PropVariantToBoolean(REFPROPVARIANT propvarIn, BOOL *pfRet);
PSSTDAPI             PropVariantToInt16(REFPROPVARIANT propvarIn, SHORT *piRet);
PSSTDAPI             PropVariantToUInt16(REFPROPVARIANT propvarIn, USHORT *puiRet);
PSSTDAPI             PropVariantToInt32(REFPROPVARIANT propvarIn, LONG *plRet);
PSSTDAPI             PropVariantToUInt32(REFPROPVARIANT propvarIn, ULONG *pulRet);
PSSTDAPI             PropVariantToInt64(REFPROPVARIANT propvarIn, LONGLONG *pllRet);
PSSTDAPI             PropVariantToUInt64(REFPROPVARIANT propvarIn, ULONGLONG *pullRet);
PSSTDAPI             PropVariantToDouble(REFPROPVARIANT propvarIn, DOUBLE *pdblRet);
PSSTDAPI             PropVariantToBuffer(REFPROPVARIANT propvar, void *pv, UINT cb);
PSSTDAPI             PropVariantToString(REFPROPVARIANT propvar, PWSTR psz, UINT cch);
PSSTDAPI             PropVariantToGUID(REFPROPVARIANT propvar, GUID *pguid);
PSSTDAPI PropVariantToStringAlloc(REFPROPVARIANT propvar, PWSTR *ppszOut);
PSSTDAPI PropVariantToBSTR(REFPROPVARIANT propvar, BSTR *pbstrOut);
PSSTDAPI PropVariantToStrRet(REFPROPVARIANT propvar, STRRET *pstrret);
PSSTDAPI             PropVariantToFileTime(REFPROPVARIANT propvar, PSTIME_FLAGS pstfOut, FILETIME* pftOut);
PSSTDAPI_(ULONG) PropVariantGetElementCount(REFPROPVARIANT propvar);
PSSTDAPI PropVariantToBooleanVector(REFPROPVARIANT propvar, BOOL *prgf, ULONG crgf, ULONG *pcElem);
PSSTDAPI PropVariantToInt16Vector(REFPROPVARIANT propvar, SHORT *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI PropVariantToUInt16Vector(REFPROPVARIANT propvar, USHORT *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI PropVariantToInt32Vector(REFPROPVARIANT propvar, LONG *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI PropVariantToUInt32Vector(REFPROPVARIANT propvar, ULONG *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI PropVariantToInt64Vector(REFPROPVARIANT propvar, LONGLONG *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI PropVariantToUInt64Vector(REFPROPVARIANT propvar, ULONGLONG *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI PropVariantToDoubleVector(REFPROPVARIANT propvar, DOUBLE *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI PropVariantToFileTimeVector(REFPROPVARIANT propvar, FILETIME *prgft, ULONG crgft, ULONG *pcElem);
PSSTDAPI PropVariantToStringVector(REFPROPVARIANT propvar, PWSTR *prgsz, ULONG crgsz, ULONG *pcElem);
PSSTDAPI PropVariantToBooleanVectorAlloc(REFPROPVARIANT propvar, BOOL **pprgf, ULONG *pcElem);
PSSTDAPI PropVariantToInt16VectorAlloc(REFPROPVARIANT propvar, SHORT **pprgn, ULONG *pcElem);
PSSTDAPI PropVariantToUInt16VectorAlloc(REFPROPVARIANT propvar, USHORT **pprgn, ULONG *pcElem);
PSSTDAPI PropVariantToInt32VectorAlloc(REFPROPVARIANT propvar, LONG **pprgn, ULONG *pcElem);
PSSTDAPI PropVariantToUInt32VectorAlloc(REFPROPVARIANT propvar, ULONG **pprgn, ULONG *pcElem);
PSSTDAPI PropVariantToInt64VectorAlloc(REFPROPVARIANT propvar, LONGLONG **pprgn, ULONG *pcElem);
PSSTDAPI PropVariantToUInt64VectorAlloc(REFPROPVARIANT propvar, ULONGLONG **pprgn, ULONG *pcElem);
PSSTDAPI PropVariantToDoubleVectorAlloc(REFPROPVARIANT propvar, DOUBLE **pprgn, ULONG *pcElem);
PSSTDAPI PropVariantToFileTimeVectorAlloc(REFPROPVARIANT propvar, FILETIME **pprgft, ULONG *pcElem);
PSSTDAPI PropVariantToStringVectorAlloc(REFPROPVARIANT propvar, PWSTR **pprgsz, ULONG *pcElem);
PSSTDAPI PropVariantGetBooleanElem(REFPROPVARIANT propvar, ULONG iElem, BOOL *pfVal);
PSSTDAPI PropVariantGetInt16Elem(REFPROPVARIANT propvar, ULONG iElem, SHORT *pnVal);
PSSTDAPI PropVariantGetUInt16Elem(REFPROPVARIANT propvar, ULONG iElem, USHORT *pnVal);
PSSTDAPI PropVariantGetInt32Elem(REFPROPVARIANT propvar, ULONG iElem, LONG *pnVal);
PSSTDAPI PropVariantGetUInt32Elem(REFPROPVARIANT propvar, ULONG iElem, ULONG *pnVal);
PSSTDAPI PropVariantGetInt64Elem(REFPROPVARIANT propvar, ULONG iElem, LONGLONG *pnVal);
PSSTDAPI PropVariantGetUInt64Elem(REFPROPVARIANT propvar, ULONG iElem, ULONGLONG *pnVal);
PSSTDAPI PropVariantGetDoubleElem(REFPROPVARIANT propvar, ULONG iElem, DOUBLE *pnVal);
PSSTDAPI PropVariantGetFileTimeElem(REFPROPVARIANT propvar, ULONG iElem, FILETIME *pftVal);
PSSTDAPI PropVariantGetStringElem(REFPROPVARIANT propvar, ULONG iElem, PWSTR *ppszVal);
PSSTDAPI_(void) ClearPropVariantArray(PROPVARIANT *rgPropVar, UINT cVars);
typedef enum 
{
    PVCU_DEFAULT = 0,
    PVCU_SECOND  = 1,
    PVCU_MINUTE  = 2,
    PVCU_HOUR    = 3,
    PVCU_DAY     = 4,
    PVCU_MONTH   = 5,
    PVCU_YEAR    = 6
} PROPVAR_COMPARE_UNIT;
enum tagPROPVAR_COMPARE_FLAGS
{
    PVCF_DEFAULT                 = 0x00000000,
    PVCF_TREATEMPTYASGREATERTHAN = 0x00000001,
    PVCF_USESTRCMP               = 0x00000002,
    PVCF_USESTRCMPC              = 0x00000004,
    PVCF_USESTRCMPI              = 0x00000008,
    PVCF_USESTRCMPIC             = 0x00000010,
};
typedef int PROPVAR_COMPARE_FLAGS;
PSSTDAPI_(int) PropVariantCompareEx(REFPROPVARIANT propvar1, REFPROPVARIANT propvar2, PROPVAR_COMPARE_UNIT unit, PROPVAR_COMPARE_FLAGS flags);
enum tagPROPVAR_CHANGE_FLAGS
{
    PVCHF_DEFAULT           = 0x00000000,
    PVCHF_NOVALUEPROP       = 0x00000001,
    PVCHF_ALPHABOOL         = 0x00000002,
    PVCHF_NOUSEROVERRIDE    = 0x00000004,
    PVCHF_LOCALBOOL         = 0x00000008,
    PVCHF_NOHEXSTRING       = 0x00000010,
};
typedef int PROPVAR_CHANGE_FLAGS;
PSSTDAPI PropVariantChangeType(PROPVARIANT *ppropvarDest, REFPROPVARIANT propvarSrc, PROPVAR_CHANGE_FLAGS flags, VARTYPE vt);
PSSTDAPI PropVariantToVariant(const PROPVARIANT *pPropVar, VARIANT *pVar);
PSSTDAPI VariantToPropVariant(const VARIANT* pVar, PROPVARIANT* pPropVar);
PSSTDAPI StgSerializePropVariant(const PROPVARIANT *ppropvar, SERIALIZEDPROPERTYVALUE **ppProp, ULONG *pcb);
PSSTDAPI StgDeserializePropVariant(const SERIALIZEDPROPERTYVALUE *pprop, ULONG cbMax, PROPVARIANT *ppropvar);
PSSTDAPI InitVariantFromResource(HINSTANCE hinst, UINT id, VARIANT *pvar);
PSSTDAPI InitVariantFromBuffer(const void *pv, UINT cb, VARIANT *pvar);
PSSTDAPI InitVariantFromGUIDAsString(REFGUID guid, VARIANT *pvar);
PSSTDAPI InitVariantFromFileTime(const FILETIME *pft, VARIANT *pvar);
PSSTDAPI InitVariantFromFileTimeArray(const FILETIME *prgft, ULONG cElems, VARIANT *pvar);
PSSTDAPI InitVariantFromStrRet(STRRET *pstrret, PCUITEMID_CHILD pidl, VARIANT *pvar);
PSSTDAPI InitVariantFromVariantArrayElem(REFVARIANT varIn, ULONG iElem, VARIANT *pvar);
PSSTDAPI InitVariantFromBooleanArray(const BOOL *prgf, ULONG cElems, VARIANT *pvar);
PSSTDAPI InitVariantFromInt16Array(const SHORT *prgn, ULONG cElems, VARIANT *pvar);
PSSTDAPI InitVariantFromUInt16Array(const USHORT *prgn, ULONG cElems, VARIANT *pvar);
PSSTDAPI InitVariantFromInt32Array(const LONG *prgn, ULONG cElems, VARIANT *pvar);
PSSTDAPI InitVariantFromUInt32Array(const ULONG *prgn, ULONG cElems, VARIANT *pvar);
PSSTDAPI InitVariantFromInt64Array(const LONGLONG *prgn, ULONG cElems, VARIANT *pvar);
PSSTDAPI InitVariantFromUInt64Array(const ULONGLONG *prgn, ULONG cElems, VARIANT *pvar);
PSSTDAPI InitVariantFromDoubleArray(const DOUBLE *prgn, ULONG cElems, VARIANT *pvar);
PSSTDAPI InitVariantFromStringArray(PCWSTR *prgsz, ULONG cElems, VARIANT *pvar);
PSSTDAPI_(BOOL)       VariantToBooleanWithDefault(REFVARIANT varIn, BOOL fDefault);
PSSTDAPI_(SHORT)      VariantToInt16WithDefault(REFVARIANT varIn, SHORT iDefault);
PSSTDAPI_(USHORT)     VariantToUInt16WithDefault(REFVARIANT varIn, USHORT uiDefault);
PSSTDAPI_(LONG)       VariantToInt32WithDefault(REFVARIANT varIn, LONG lDefault);
PSSTDAPI_(ULONG)      VariantToUInt32WithDefault(REFVARIANT varIn, ULONG ulDefault);
PSSTDAPI_(LONGLONG)   VariantToInt64WithDefault(REFVARIANT varIn, LONGLONG llDefault);
PSSTDAPI_(ULONGLONG)  VariantToUInt64WithDefault(REFVARIANT varIn, ULONGLONG ullDefault);
PSSTDAPI_(DOUBLE)     VariantToDoubleWithDefault(REFVARIANT varIn, DOUBLE dblDefault);
PSSTDAPI_(PCWSTR)     VariantToStringWithDefault(REFVARIANT varIn, LPCWSTR pszDefault);
PSSTDAPI              VariantToBoolean(REFVARIANT varIn, BOOL *pfRet);
PSSTDAPI              VariantToInt16(REFVARIANT varIn, SHORT *piRet);
PSSTDAPI              VariantToUInt16(REFVARIANT varIn, USHORT *puiRet);
PSSTDAPI              VariantToInt32(REFVARIANT varIn, LONG *plRet);
PSSTDAPI              VariantToUInt32(REFVARIANT varIn, ULONG *pulRet);
PSSTDAPI              VariantToInt64(REFVARIANT varIn, LONGLONG *pllRet);
PSSTDAPI              VariantToUInt64(REFVARIANT varIn, ULONGLONG *pullRet);
PSSTDAPI              VariantToDouble(REFVARIANT varIn, DOUBLE *pdblRet);
PSSTDAPI              VariantToBuffer(REFVARIANT varIn, void *pv, UINT cb);
PSSTDAPI              VariantToGUID(REFVARIANT varIn, GUID *pguid);
PSSTDAPI              VariantToString(REFVARIANT varIn, PWSTR pszBuf, UINT cchBuf);
PSSTDAPI VariantToStringAlloc(REFVARIANT varIn, PWSTR *ppszBuf);
PSSTDAPI              VariantToDosDateTime(REFVARIANT varIn, WORD *pwDate, WORD *pwTime);
PSSTDAPI VariantToStrRet(REFVARIANT varIn, STRRET *pstrret);
PSSTDAPI              VariantToFileTime(REFVARIANT varIn, PSTIME_FLAGS stfOut, FILETIME* pftOut);
PSSTDAPI_(ULONG) VariantGetElementCount(REFVARIANT varIn);
PSSTDAPI VariantToBooleanArray(REFVARIANT var, BOOL *prgf, ULONG crgn, ULONG *pcElem);
PSSTDAPI VariantToInt16Array(REFVARIANT var, SHORT *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI VariantToUInt16Array(REFVARIANT var, USHORT *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI VariantToInt32Array(REFVARIANT var, LONG *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI VariantToUInt32Array(REFVARIANT var, ULONG *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI VariantToInt64Array(REFVARIANT var, LONGLONG *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI VariantToUInt64Array(REFVARIANT var, ULONGLONG *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI VariantToDoubleArray(REFVARIANT var, DOUBLE *prgn, ULONG crgn, ULONG *pcElem);
PSSTDAPI VariantToStringArray(REFVARIANT var, PWSTR *prgsz, ULONG crgsz, ULONG *pcElem);
PSSTDAPI VariantToBooleanArrayAlloc(REFVARIANT var, BOOL **pprgf, ULONG *pcElem);
PSSTDAPI VariantToInt16ArrayAlloc(REFVARIANT var, SHORT **pprgn, ULONG *pcElem);
PSSTDAPI VariantToUInt16ArrayAlloc(REFVARIANT var, USHORT **pprgn, ULONG *pcElem);
PSSTDAPI VariantToInt32ArrayAlloc(REFVARIANT var, LONG **pprgn, ULONG *pcElem);
PSSTDAPI VariantToUInt32ArrayAlloc(REFVARIANT var, ULONG **pprgn, ULONG *pcElem);
PSSTDAPI VariantToInt64ArrayAlloc(REFVARIANT var, LONGLONG **pprgn, ULONG *pcElem);
PSSTDAPI VariantToUInt64ArrayAlloc(REFVARIANT var, ULONGLONG **pprgn, ULONG *pcElem);
PSSTDAPI VariantToDoubleArrayAlloc(REFVARIANT var, DOUBLE **pprgn, ULONG *pcElem);
PSSTDAPI VariantToStringArrayAlloc(REFVARIANT var, PWSTR **pprgsz, ULONG *pcElem);
PSSTDAPI VariantGetBooleanElem(REFVARIANT var, ULONG iElem, BOOL *pfVal);
PSSTDAPI VariantGetInt16Elem(REFVARIANT var, ULONG iElem, SHORT *pnVal);
PSSTDAPI VariantGetUInt16Elem(REFVARIANT var, ULONG iElem, USHORT *pnVal);
PSSTDAPI VariantGetInt32Elem(REFVARIANT var, ULONG iElem, LONG *pnVal);
PSSTDAPI VariantGetUInt32Elem(REFVARIANT var, ULONG iElem, ULONG *pnVal);
PSSTDAPI VariantGetInt64Elem(REFVARIANT var, ULONG iElem, LONGLONG *pnVal);
PSSTDAPI VariantGetUInt64Elem(REFVARIANT var, ULONG iElem, ULONGLONG *pnVal);
PSSTDAPI VariantGetDoubleElem(REFVARIANT var, ULONG iElem, DOUBLE *pnVal);
PSSTDAPI VariantGetStringElem(REFVARIANT var, ULONG iElem, PWSTR *ppszVal);
PSSTDAPI_(void) ClearVariantArray(VARIANT *pvars, UINT cvars);
PSSTDAPI_(int) VariantCompare(REFVARIANT var1, REFVARIANT var2);
typedef enum DRAWPROGRESSFLAGS
{
    DPF_NONE                = 0x0,
    DPF_MARQUEE             = 0x1,
    DPF_MARQUEE_COMPLETE    = 0x2,
    DPF_ERROR               = 0x4,
    DPF_WARNING             = 0x8,
    DPF_STOPPED             = 0x10,
} DRAWPROGRESSFLAGS;
//#if defined(__cplusplus) && !defined(NO_PROPVAR_INLINES)
#if !defined(NO_PROPVAR_INLINES)
inline HRESULT InitPropVariantFromBoolean(BOOL fVal, PROPVARIANT *ppropvar)
{
    ppropvar->vt = VT_BOOL;
    ppropvar->boolVal = fVal ? VARIANT_TRUE : VARIANT_FALSE;
    return S_OK;
}
inline HRESULT InitPropVariantFromInt16(SHORT nVal, PROPVARIANT *ppropvar)
{
    ppropvar->vt = VT_I2;
    ppropvar->iVal = nVal;
    return S_OK;
}
inline HRESULT InitPropVariantFromUInt16(USHORT uiVal, PROPVARIANT *ppropvar)
{
    ppropvar->vt = VT_UI2;
    ppropvar->uiVal = uiVal;
    return S_OK;
}
inline HRESULT InitPropVariantFromInt32(LONG lVal, PROPVARIANT *ppropvar)
{
    ppropvar->vt = VT_I4;
    ppropvar->lVal = lVal;
    return S_OK;
}
inline HRESULT InitPropVariantFromUInt32(ULONG ulVal, PROPVARIANT *ppropvar)
{
    ppropvar->vt = VT_UI4;
    ppropvar->ulVal = ulVal;
    return S_OK;
}
inline HRESULT InitPropVariantFromInt64(LONGLONG llVal, PROPVARIANT *ppropvar)
{
    ppropvar->vt = VT_I8;
    ppropvar->hVal.QuadPart = llVal;
    return S_OK;
}
inline HRESULT InitPropVariantFromUInt64(ULONGLONG ullVal, PROPVARIANT *ppropvar)
{
    ppropvar->vt = VT_UI8;
    ppropvar->uhVal.QuadPart = ullVal;
    return S_OK;
}
inline HRESULT InitPropVariantFromDouble(DOUBLE dblVal, PROPVARIANT *ppropvar)
{
    ppropvar->vt = VT_R8;
    ppropvar->dblVal = dblVal;
    return S_OK;
}
inline HRESULT InitPropVariantFromString(PCWSTR psz, PROPVARIANT *ppropvar)
{
    ppropvar->vt = VT_LPWSTR;
    HRESULT hr = SHStrDupW(psz, &ppropvar->pwszVal);
    if (FAILED(hr))
    {
        PropVariantInit(ppropvar);
    }
    return hr;
}
inline HRESULT InitPropVariantFromGUIDAsBuffer(REFGUID guid, PROPVARIANT *ppropvar)
{
    return InitPropVariantFromBuffer(&guid, sizeof(GUID), ppropvar);
}
inline BOOL IsPropVariantVector(REFPROPVARIANT propvar)
{
    return (propvar->vt & (VT_ARRAY | VT_VECTOR));
}
inline BOOL IsPropVariantString(REFPROPVARIANT propvar)
{
    return (PropVariantToStringWithDefault(propvar, NULL) != NULL);
}
#if 0
inline HRESULT PropVariantToInt32(REFPROPVARIANT propvarIn, int *piRet)
{
    return PropVariantToInt32(propvarIn, (LONG*)piRet);
}
inline HRESULT PropVariantToUInt32(REFPROPVARIANT propvarIn, UINT *piRet)
{
    return PropVariantToUInt32(propvarIn, (ULONG*)piRet);
}
inline HRESULT PropVariantToCLSID(REFPROPVARIANT propvarIn, CLSID *pclsid)
{ 
    return PropVariantToGUID(propvarIn, (GUID*)pclsid);
}  
inline int PropVariantCompare(REFPROPVARIANT propvar1, REFPROPVARIANT propvar2)
{
    return PropVariantCompareEx(propvar1, propvar2, PVCU_DEFAULT, PVCF_DEFAULT);
}
inline HRESULT PropVariantGetElem(REFPROPVARIANT propvarIn, ULONG iElem, PROPVARIANT *ppropvar)
{
    return InitPropVariantFromPropVariantVectorElem(propvarIn, iElem, ppropvar);
}
#endif
inline HRESULT InitVariantFromBoolean(BOOL fVal, VARIANT *pvar)
{
    pvar->vt = VT_BOOL;
    pvar->boolVal = fVal ? VARIANT_TRUE : VARIANT_FALSE;
    return S_OK;
}
inline HRESULT InitVariantFromInt16(short iVal, VARIANT *pvar)
{
    pvar->vt = VT_I2;
    pvar->iVal = iVal;
    return S_OK;
}
inline HRESULT InitVariantFromUInt16(USHORT uiVal, VARIANT *pvar)
{
    pvar->vt = VT_UI2;
    pvar->uiVal = uiVal;
    return S_OK;
}
inline HRESULT InitVariantFromInt32(LONG lVal, VARIANT *pvar)
{
    pvar->vt = VT_I4;
    pvar->lVal = lVal;
    return S_OK;
}
inline HRESULT InitVariantFromUInt32(ULONG ulVal, VARIANT *pvar)
{
    pvar->vt = VT_UI4;
    pvar->ulVal = ulVal;
    return S_OK;
}
inline HRESULT InitVariantFromInt64(LONGLONG llVal, VARIANT *pvar)
{
    pvar->vt = VT_I8;
    pvar->llVal = llVal;
    return S_OK;
}
inline HRESULT InitVariantFromUInt64(ULONGLONG ullVal, VARIANT *pvar)
{
    pvar->vt = VT_UI8;
    pvar->ullVal = ullVal;
    return S_OK;
}
inline HRESULT InitVariantFromDouble(DOUBLE dblVal, VARIANT *pvar)
{
    pvar->vt = VT_R8;
    pvar->dblVal = dblVal;
    return S_OK;
}
inline HRESULT InitVariantFromString(PCWSTR psz, VARIANT *pvar)
{
    pvar->vt = VT_BSTR;
    pvar->bstrVal = SysAllocString(psz);
    HRESULT hr =  pvar->bstrVal ? S_OK : (psz ? E_OUTOFMEMORY : E_INVALIDARG);
    if (FAILED(hr))
    {
        VariantInit(pvar);
    }
    return hr;
}
inline HRESULT InitVariantFromDispatch(IDispatch* pdisp, VARIANT *pvar)
{
    pvar->vt = VT_DISPATCH;
    pvar->pdispVal = pdisp;
    if (pvar->pdispVal)
    {
        (pvar->pdispVal)->lpVtbl->AddRef(pvar->pdispVal);
    }
    return S_OK;
}
inline HRESULT InitVariantFromDosDateTime(WORD wDate, WORD wTime, VARIANT *pvar)
{
    pvar->vt = VT_DATE;
    return DosDateTimeToVariantTime(wDate, wTime, &pvar->date) ? S_OK : S_FALSE;
}
inline BOOL IsVarTypeFloat(VARTYPE vt)
{
    return (vt == VT_R4 || vt == VT_R8);
}
inline BOOL IsVariantArray(REFVARIANT var)
{
    return (var->vt & VT_ARRAY);
}
inline BOOL IsVariantString(REFVARIANT var)
{
    return (VariantToStringWithDefault(var, NULL) != NULL);
}
inline BOOL IsVarTypeSignedInteger(VARTYPE vt)
{
    BOOL fRet = FALSE;
    switch (vt)
    {
        case VT_I1:
        case VT_I2:
        case VT_I4:
        case VT_I8:
        fRet = TRUE;
    }
    return fRet;
}
inline BOOL IsVarTypeUnsignedInteger(VARTYPE vt)
{
    BOOL fRet = FALSE;
    switch (vt)
    {
        case VT_UI1:
        case VT_UI2:
        case VT_UI4:
        case VT_UI8:
        fRet = TRUE;
    }
    return fRet;
}
inline BOOL IsVarTypeInteger(VARTYPE vt)
{
    return IsVarTypeSignedInteger(vt) || IsVarTypeUnsignedInteger(vt);
}
inline HRESULT InitVariantFromGUIDAsBuffer(REFGUID guid, VARIANT *pvar)
{
    return InitVariantFromBuffer(&guid, sizeof(GUID), pvar);
}
//inline HRESULT VariantToInt32(REFVARIANT varIn, int *piRet)
//{
    //return VariantToInt32(varIn, (LONG*)piRet);
//}
//inline HRESULT VariantToUInt32(REFVARIANT varIn, UINT *piRet)
//{
    //return VariantToUInt32(varIn, (ULONG*)piRet);
//}
inline HRESULT VariantGetElem(REFVARIANT varIn, ULONG iElem, VARIANT *pvar)
{
    return InitVariantFromVariantArrayElem(varIn, iElem, pvar);
}
inline BOOL IsVarTypeNumber(VARTYPE vt)
{
    return IsVarTypeInteger(vt) || IsVarTypeFloat(vt);
}
#endif
#endif
