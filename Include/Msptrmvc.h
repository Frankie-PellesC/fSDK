/*+@@file@@----------------------------------------------------------------*//*!
 \file		Msptrmvc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 22:50:31 2016
 \date		Modified on Sun Aug 14 22:50:31 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MSPTRMVC_H_
#define _MSPTRMVC_H_
#if __POCC__ >= 500
#pragma once
#endif
#pragma message ("C++ header")
#if 0
class CVideoCaptureTerminal : 
    public CSingleFilterStaticTerminal
{
public
    CVideoCaptureTerminal();
    virtual ~CVideoCaptureTerminal();
public
    static HRESULT CreateTerminal(
           CComPtr<IMoniker>    pMoniker,
           MSP_HANDLE           htAddress,
   ITTerminal         **ppTerm
        );
DECLARE_LOG_ADDREF_RELEASE(CVideoCaptureTerminal);
private
    virtual HRESULT AddFiltersToGraph();
    virtual LONG CountOfMediaTypes()
    {
        return 1;
    }
    virtual DWORD GetSupportedMediaTypes(void)
    {
        return (DWORD) TAPIMEDIATYPE_VIDEO;
    }
    HRESULT CreateFilters();
    HRESULT FindCapturePin();
};
inline 
CVideoCaptureTerminal::CVideoCaptureTerminal(
    )                                   
{
    m_TerminalDirection = TD_CAPTURE;
    m_TerminalType = TT_STATIC;
}
#endif
#endif
