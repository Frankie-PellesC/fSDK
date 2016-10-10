/*+@@file@@----------------------------------------------------------------*//*!
 \file		Msptrmac.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 22:47:02 2016
 \date		Modified on Sun Aug 14 22:47:02 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MSPTRMAC_H_
#define _MSPTRMAC_H_
#if __POCC__ >= 500
#pragma once
#endif
#pragma message ("C++ header")
#if 0
#define WAVEIN_NAME L"WaveIn Terminal"
class CAudioCaptureTerminal : 
    public IDispatchImpl<ITBasicAudioTerminal, &IID_ITBasicAudioTerminal, &LIBID_TAPI3Lib>, 
    public IDispatchImpl<ITStaticAudioTerminal, &IID_ITStaticAudioTerminal, &LIBID_TAPI3Lib>, 
    public CSingleFilterStaticTerminal,
    public CMSPObjectSafetyImpl
{
BEGIN_COM_MAP(CAudioCaptureTerminal)
    COM_INTERFACE_ENTRY(IObjectSafety)
    COM_INTERFACE_ENTRY(ITBasicAudioTerminal)
    COM_INTERFACE_ENTRY(ITStaticAudioTerminal)
    COM_INTERFACE_ENTRY_CHAIN(CSingleFilterStaticTerminal)
END_COM_MAP()
DECLARE_VQI()
DECLARE_LOG_ADDREF_RELEASE(CAudioCaptureTerminal)
public
    CAudioCaptureTerminal();
    virtual ~CAudioCaptureTerminal();
    static HRESULT CreateTerminal(
           CComPtr<IMoniker>    pMoniker,
           MSP_HANDLE           htAddress,
   ITTerminal         **ppTerm
        );
    HRESULT FindTerminalPin();
public
    STDMETHOD(get_Balance)(  long *pVal);
    STDMETHOD(put_Balance)(  long newVal);
    STDMETHOD(get_Volume) (  long *pVal);
    STDMETHOD(put_Volume) (  long newVal);
public
    STDMETHOD(get_WaveId) (  long * plWaveId);
public
    STDMETHODIMP CompleteConnectTerminal(void);
    STDMETHODIMP DisconnectTerminal(
                 IGraphBuilder  * pGraph,
                 DWORD            dwReserved
            );
    virtual HRESULT AddFiltersToGraph();
    virtual DWORD GetSupportedMediaTypes(void)
    {
        return (DWORD) TAPIMEDIATYPE_AUDIO;
    }
    HRESULT CreateFilters();
    inline HRESULT CreateFiltersIfRequired();
private
    bool m_bResourceReserved;
    CComPtr<IAMAudioInputMixer> m_pIAMAudioInputMixer;
};
    
inline HRESULT
CAudioCaptureTerminal::CreateFiltersIfRequired(
    )
{                                           
    if (m_pIFilter == NULL)   return CreateFilters();          
    
    return S_OK;
}
#endif
#endif
