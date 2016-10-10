/*+@@file@@----------------------------------------------------------------*//*!
 \file		Msptrmar.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 22:48:47 2016
 \date		Modified on Sun Aug 14 22:48:47 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MSPTRMAR_H_
#define _MSPTRMAR_H_
#if __POCC__ >= 500
#pragma once
#endif
#pragma message ("C++ header")
#if 0
#define WAVEOUT_NAME L"WaveOut Terminal"
#define MIXER_NAME L"PCM Mixer"
class CAudioRenderTerminal : 
    public IDispatchImpl<ITBasicAudioTerminal, &IID_ITBasicAudioTerminal, &LIBID_TAPI3Lib>, 
    public IDispatchImpl<ITStaticAudioTerminal, &IID_ITStaticAudioTerminal, &LIBID_TAPI3Lib>, 
    public CSingleFilterStaticTerminal,
    public CMSPObjectSafetyImpl
{
public
    CAudioRenderTerminal();
    virtual ~CAudioRenderTerminal();
    HRESULT InitializeDefaultTerminal();
    static HRESULT CreateTerminal(
           CComPtr<IMoniker>    pMoniker,
           MSP_HANDLE           htAddress,
   ITTerminal         **ppTerm
        );
    HRESULT FindTerminalPin();
BEGIN_COM_MAP(CAudioRenderTerminal)
    COM_INTERFACE_ENTRY(IObjectSafety)
    COM_INTERFACE_ENTRY(ITBasicAudioTerminal)
    COM_INTERFACE_ENTRY(ITStaticAudioTerminal)
    COM_INTERFACE_ENTRY_CHAIN(CSingleFilterStaticTerminal)
END_COM_MAP()
DECLARE_VQI()
DECLARE_LOG_ADDREF_RELEASE(CAudioRenderTerminal)
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
private
    bool m_bResourceReserved;
    CComPtr<IBasicAudio> m_pIBasicAudio;
};
#endif
#endif
