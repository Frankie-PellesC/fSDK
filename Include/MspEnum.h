/*+@@file@@----------------------------------------------------------------*//*!
 \file		MspEnum.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 22:34:56 2016
 \date		Modified on Sun Aug 14 22:34:56 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MSPENUM_H_
#define _MSPENUM_H_
#if __POCC__ >= 500
#pragma once
#endif
#pragma message ("C++ header")
#if 0
template <class Base, const IID* piid, class T, class Copy,
          class ThreadModel = CComObjectThreadModel>
class ATL_NO_VTABLE CSafeComEnum 
        public CComEnumImpl<Base, piid, T, Copy>,
        public CComObjectRootEx< ThreadModel >
{
    typedef CSafeComEnum<Base, piid, T, Copy, ThreadModel> ThisClass;
    typedef CComEnumImpl<Base, piid, T, Copy>              BaseClass;
    STDMETHOD(Next)(ULONG celt, T* rgelt, ULONG* pceltFetched)
    {
        if ( !rgelt )
        {
            return E_POINTER;
        }
        return BaseClass::Next(celt, rgelt, pceltFetched);
    }
    STDMETHOD(Clone)(Base** ppEnum)
    {
        if (!ppEnum)
        {
            return E_POINTER;
        }
        return BaseClass::Clone(ppEnum);
    }
    BEGIN_COM_MAP( ThisClass )
		COM_INTERFACE_ENTRY_IID( *piid, BaseClass )
        COM_INTERFACE_ENTRY_AGGREGATE( IID_IMarshal, m_pFTM )
    END_COM_MAP()
    DECLARE_GET_CONTROLLING_UNKNOWN()
    HRESULT Init(T* begin, T* end, IUnknown* pUnk,
            CComEnumFlags flags = AtlFlagNoCopy)
    {
        
        HRESULT hr;
        IUnknown * pIU = GetControllingUnknown();
        hr = CoCreateFreeThreadedMarshaler( pIU, 
                                            & m_pFTM );
        if ( FAILED(hr) )
        {
            return hr;
        }
        return BaseClass::Init(begin, end, pUnk, flags);
    }
    CSafeComEnum()
    {
        m_pFTM = NULL;
    }
    void FinalRelease(void)
    {
        if ( m_pFTM )
        {
            m_pFTM->Release();
        }
        CComObjectRootEx< ThreadModel >::FinalRelease();
    }
protected
    IUnknown * m_pFTM;
};
#endif
#endif
