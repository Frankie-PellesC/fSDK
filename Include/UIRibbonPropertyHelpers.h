/*+@@file@@----------------------------------------------------------------*//*!
 \file		UIRibbonPropertyHelpers.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 15:39:07 2016
 \date		Modified on Sat Sep 17 15:39:07 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef UIRIBBONPROPERTYHELPERS_H__
#define UIRIBBONPROPERTYHELPERS_H__
#if __POCC__ >= 500
#pragma once
#endif
#error C++ only header!
#if 0
#include <propvarutil.h>
interface IUIImage;
#ifndef TUIPROPERTYKEYDEFINED
#include <pshpack8.h>
template<VARTYPE T>
struct TUIPROPERTYKEY
{ 
  GUID fmtid;
  DWORD pid;
  inline operator const PROPERTYKEY&() const { return reinterpret_cast<const PROPERTYKEY&>(*this); }
  inline const PROPERTYKEY* operator&() const { return reinterpret_cast<const PROPERTYKEY*>(this); }
};
#include <poppack.h>
C_ASSERT(sizeof(TUIPROPERTYKEY<VT_BOOL>) == sizeof(PROPERTYKEY));
#define TUIPROPERTYKEYDEFINED
#endif
struct UIWrongType {};
template<class A, VARTYPE B>
struct UIBreakCheckType 
{
    typedef UIWrongType _Type; 
    static bool Validate(REFPROPERTYKEY key) { UNREFERENCED_PARAMETER(key); return false; }
};
#define UI_REGISTER_TYPE( type ) \
    template<> struct UIBreakCheckType< TUIPROPERTYKEY<type>, type > \
    { \
        typedef bool _Type; \
        static bool Validate(REFPROPERTYKEY key) { UNREFERENCED_PARAMETER(key); return true; } \
    }; \
    template<> struct UIBreakCheckType< PROPERTYKEY, type > \
    { \
        typedef bool _Type; \ \
        static bool Validate(REFPROPERTYKEY key) { return (type) == key.pid; }\
    };
UI_REGISTER_TYPE( VT_BOOL )
UI_REGISTER_TYPE( VT_UI4 )
UI_REGISTER_TYPE( VT_LPWSTR )
UI_REGISTER_TYPE( VT_DECIMAL )
UI_REGISTER_TYPE( VT_UNKNOWN )
UI_REGISTER_TYPE( VT_ARRAY|VT_UNKNOWN )
template<class T>
HRESULT UIInitPropertyFromBoolean(const T& propertyKey, BOOL fVal, PROPVARIANT* pPropVar)
{
    UIBreakCheckType<T, VT_BOOL>::_Type valid = UIBreakCheckType<T, VT_BOOL>::Validate(propertyKey);
    return valid ? InitPropVariantFromBoolean(fVal, pPropVar) : E_INVALIDARG;
}
template<class T>
HRESULT UIInitPropertyFromUInt32(const T& propertyKey, UINT ulVal, PROPVARIANT* pPropVar)
{
    UIBreakCheckType<T, VT_UI4>::_Type valid = UIBreakCheckType<T, VT_UI4>::Validate(propertyKey);
    return valid ? InitPropVariantFromUInt32(ulVal, pPropVar) : E_INVALIDARG;
}
template<class T>
HRESULT UIInitPropertyFromString(const T& propertyKey, PCWSTR psz, PROPVARIANT* pPropVar)
{
    UIBreakCheckType<T, VT_LPWSTR>::_Type valid = UIBreakCheckType<T, VT_LPWSTR>::Validate(propertyKey);
    return valid ? InitPropVariantFromString(psz, pPropVar) : E_INVALIDARG;
}
template<class T>
HRESULT UIInitPropertyFromDecimal(const T& propertyKey, const DECIMAL& decValue, PROPVARIANT* pPropVar)
{
    UIBreakCheckType<T, VT_DECIMAL>::_Type valid = UIBreakCheckType<T, VT_DECIMAL>::Validate(propertyKey);
    if (valid)
    {
        pPropVar->decVal = decValue;
        pPropVar->vt = VT_DECIMAL;
        return S_OK;
    }
    return E_INVALIDARG;
}
template<class T>
HRESULT UIInitPropertyFromInterface(const T& propertyKey, IUnknown* pUnk, PROPVARIANT* pPropVar)
{
    UIBreakCheckType<T, VT_UNKNOWN>::_Type valid = UIBreakCheckType<T, VT_UNKNOWN>::Validate(propertyKey);
    if (valid)
    {
        pPropVar->vt = VT_UNKNOWN;
        pPropVar->punkVal = pUnk;
        if (pUnk)
        {
            pUnk->AddRef();
        }
        return S_OK;
    }
    return E_INVALIDARG;
}
template<class T>
HRESULT UIInitPropertyFromImage(const T& propertyKey, IUIImage* pImage, PROPVARIANT* pPropVar)
{
    return UIInitPropertyFromInterface(propertyKey, pImage, pPropVar);
}
template<class T>
HRESULT UIInitPropertyFromIUnknownArray(const T& propertyKey, SAFEARRAY* psa, PROPVARIANT* pPropVar)
{
    UIBreakCheckType<T, VT_ARRAY|VT_UNKNOWN>::_Type valid = UIBreakCheckType<T, VT_ARRAY|VT_UNKNOWN>::Validate(propertyKey);
    if (valid && (psa->fFeatures & FADF_UNKNOWN) )
    {
        HRESULT hr = ::SafeArrayCopy(psa, &pPropVar->parray);
        if (SUCCEEDED(hr))
        {
            pPropVar->vt = VT_ARRAY|VT_UNKNOWN;
        }
        return hr;
    }
    return E_INVALIDARG;
}
template<class T>
HRESULT UIPropertyToBoolean(const T& propertyKey, REFPROPVARIANT propvarIn, BOOL *pfRet)
{
    UIBreakCheckType<T, VT_BOOL>::_Type valid = UIBreakCheckType<T, VT_BOOL>::Validate(propertyKey);
    return valid ? PropVariantToBoolean(propvarIn, pfRet) : E_INVALIDARG;
}
template<class T>
HRESULT UIPropertyToUInt32(const T& propertyKey, REFPROPVARIANT propvarIn, UINT *pulVal)
{
    UIBreakCheckType<T, VT_UI4>::_Type valid = UIBreakCheckType<T, VT_UI4>::Validate(propertyKey);
    return valid ? PropVariantToUInt32(propvarIn, pulVal) : E_INVALIDARG;
}
template<class T>
HRESULT UIPropertyToStringAlloc(const T& propertyKey, REFPROPVARIANT propvarIn, PWSTR *ppszOut)
{
    UIBreakCheckType<T, VT_LPWSTR>::_Type valid = UIBreakCheckType<T, VT_LPWSTR>::Validate(propertyKey);
    return valid ? PropVariantToStringAlloc(propvarIn, ppszOut) : E_INVALIDARG;
}
template<class T>
HRESULT UIPropertyToDecimal(const T& propertyKey, REFPROPVARIANT propvarIn, DECIMAL *pDecValue)
{
    UIBreakCheckType<T, VT_DECIMAL>::_Type valid = UIBreakCheckType<T, VT_DECIMAL>::Validate(propertyKey);
    if (valid && propvarIn.vt == VT_DECIMAL)
    {
        *pDecValue = propvarIn.decVal;
        return S_OK;
    }
    return E_INVALIDARG;
}
template<class T, class TInterface>
HRESULT UIPropertyToInterface(const T& propertyKey, REFPROPVARIANT propvarIn, TInterface** ppObj)
{
    *ppObj = NULL;
    UIBreakCheckType<T, VT_UNKNOWN>::_Type valid = UIBreakCheckType<T, VT_UNKNOWN>::Validate(propertyKey);
    if (valid && propvarIn.vt == VT_UNKNOWN)
    {
        if (propvarIn.punkVal)
        {
            return propvarIn.punkVal->QueryInterface(__uuidof(TInterface), (void**)ppObj);
        }
        return S_OK;
    }
    return E_INVALIDARG;
}
template<class T>
HRESULT UIPropertyToImage(const T& propertyKey, REFPROPVARIANT propvarIn, IUIImage** ppImage)
{
    return UIPropertyToInterface(propertyKey, propvarIn, ppImage);
}
template<class T>
HRESULT UIPropertyToIUnknownArrayAlloc(const T& propertyKey, REFPROPVARIANT propvarIn, SAFEARRAY** ppsa)
{
    UIBreakCheckType<T, VT_ARRAY|VT_UNKNOWN>::_Type valid = UIBreakCheckType<T, VT_ARRAY|VT_UNKNOWN>::Validate(propertyKey);
    if (valid && propvarIn.vt == (VT_ARRAY|VT_UNKNOWN) )
    {
        return ::SafeArrayCopy(propvarIn.parray, ppsa);
    }
    return E_INVALIDARG;
}
}
#endif
