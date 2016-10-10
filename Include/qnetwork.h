/*+@@file@@----------------------------------------------------------------*//*!
 \file		qnetwork.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 17:35:42 2016
 \date		Modified on Sun Jun 19 17:35:42 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _QuartzNetTypeLib_H_
#define _QuartzNetTypeLib_H_
#if __POCC__ >= 500
#pragma once
#endif
DEFINE_GUID(LIBID_QuartzNetTypeLib, 0x56A868B1L, 0x0AD4, 0x11CE, 0xB0, 0x3A, 0x00, 0x20, 0xAF, 0x0B, 0xA7, 0x70);
#ifndef BEGIN_INTERFACE
#define BEGIN_INTERFACE
#endif
DEFINE_GUID(IID_IAMNetShowConfig, 0xFA2AA8F1L, 0x8B62, 0x11D0, 0xA5, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
#undef INTERFACE
#define INTERFACE IAMNetShowConfig
DECLARE_INTERFACE_(IAMNetShowConfig, IDispatch)
{
	BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetTypeInfoCount) (THIS_ UINT FAR * pctinfo);
	STDMETHOD(GetTypeInfo) (THIS_ UINT itinfo, LCID lcid, ITypeInfo FAR * FAR * pptinfo);
	STDMETHOD(GetIDsOfNames) (THIS_ REFIID riid, OLECHAR FAR * FAR * rgszNames, UINT cNames, LCID lcid, DISPID FAR * rgdispid);
	STDMETHOD(Invoke) (THIS_ DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS FAR * pdispparams, VARIANT FAR * pvarResult, EXCEPINFO FAR * pexcepinfo, UINT FAR * puArgErr);
#endif
	STDMETHOD(get_BufferingTime) (THIS_ double FAR * pBufferingTime);
	STDMETHOD(put_BufferingTime) (THIS_ double BufferingTime);
	STDMETHOD(get_UseFixedUDPPort) (THIS_ VARIANT_BOOL FAR * pUseFixedUDPPort);
	STDMETHOD(put_UseFixedUDPPort) (THIS_ VARIANT_BOOL UseFixedUDPPort);
	STDMETHOD(get_FixedUDPPort) (THIS_ long FAR * pFixedUDPPort);
	STDMETHOD(put_FixedUDPPort) (THIS_ long FixedUDPPort);
	STDMETHOD(get_UseHTTPProxy) (THIS_ VARIANT_BOOL FAR * pUseHTTPProxy);
	STDMETHOD(put_UseHTTPProxy) (THIS_ VARIANT_BOOL UseHTTPProxy);
	STDMETHOD(get_EnableAutoProxy) (THIS_ VARIANT_BOOL FAR * pEnableAutoProxy);
	STDMETHOD(put_EnableAutoProxy) (THIS_ VARIANT_BOOL EnableAutoProxy);
	STDMETHOD(get_HTTPProxyHost) (THIS_ BSTR FAR * pbstrHTTPProxyHost);
	STDMETHOD(put_HTTPProxyHost) (THIS_ BSTR bstrHTTPProxyHost);
	STDMETHOD(get_HTTPProxyPort) (THIS_ long FAR * pHTTPProxyPort);
	STDMETHOD(put_HTTPProxyPort) (THIS_ long HTTPProxyPort);
	STDMETHOD(get_EnableMulticast) (THIS_ VARIANT_BOOL FAR * pEnableMulticast);
	STDMETHOD(put_EnableMulticast) (THIS_ VARIANT_BOOL EnableMulticast);
	STDMETHOD(get_EnableUDP) (THIS_ VARIANT_BOOL FAR * pEnableUDP);
	STDMETHOD(put_EnableUDP) (THIS_ VARIANT_BOOL EnableUDP);
	STDMETHOD(get_EnableTCP) (THIS_ VARIANT_BOOL FAR * pEnableTCP);
	STDMETHOD(put_EnableTCP) (THIS_ VARIANT_BOOL EnableTCP);
	STDMETHOD(get_EnableHTTP) (THIS_ VARIANT_BOOL FAR * pEnableHTTP);
	STDMETHOD(put_EnableHTTP) (THIS_ VARIANT_BOOL EnableHTTP);
};
DEFINE_GUID(IID_IAMChannelInfo, 0xFA2AA8F2L, 0x8B62, 0x11D0, 0xA5, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
#undef INTERFACE
#define INTERFACE IAMChannelInfo
DECLARE_INTERFACE_(IAMChannelInfo, IDispatch)
{
	BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetTypeInfoCount) (THIS_ UINT FAR * pctinfo);
	STDMETHOD(GetTypeInfo) (THIS_ UINT itinfo, LCID lcid, ITypeInfo FAR * FAR * pptinfo);
	STDMETHOD(GetIDsOfNames) (THIS_ REFIID riid, OLECHAR FAR * FAR * rgszNames, UINT cNames, LCID lcid, DISPID FAR * rgdispid);
	STDMETHOD(Invoke) (THIS_ DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS FAR * pdispparams, VARIANT FAR * pvarResult, EXCEPINFO FAR * pexcepinfo, UINT FAR * puArgErr);
#endif
	STDMETHOD(get_ChannelName) (THIS_ BSTR FAR * pbstrChannelName);
	STDMETHOD(get_ChannelDescription) (THIS_ BSTR FAR * pbstrChannelDescription);
	STDMETHOD(get_ChannelURL) (THIS_ BSTR FAR * pbstrChannelURL);
	STDMETHOD(get_ContactAddress) (THIS_ BSTR FAR * pbstrContactAddress);
	STDMETHOD(get_ContactPhone) (THIS_ BSTR FAR * pbstrContactPhone);
	STDMETHOD(get_ContactEmail) (THIS_ BSTR FAR * pbstrContactEmail);
};
DEFINE_GUID(IID_IAMNetworkStatus, 0xFA2AA8F3L, 0x8B62, 0x11D0, 0xA5, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
#undef INTERFACE
#define INTERFACE IAMNetworkStatus
DECLARE_INTERFACE_(IAMNetworkStatus, IDispatch)
{
	BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetTypeInfoCount) (THIS_ UINT FAR * pctinfo);
	STDMETHOD(GetTypeInfo) (THIS_ UINT itinfo, LCID lcid, ITypeInfo FAR * FAR * pptinfo);
	STDMETHOD(GetIDsOfNames) (THIS_ REFIID riid, OLECHAR FAR * FAR * rgszNames, UINT cNames, LCID lcid, DISPID FAR * rgdispid);
	STDMETHOD(Invoke) (THIS_ DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS FAR * pdispparams, VARIANT FAR * pvarResult, EXCEPINFO FAR * pexcepinfo, UINT FAR * puArgErr);
#endif
	STDMETHOD(get_ReceivedPackets) (THIS_ long FAR * pReceivedPackets);
	STDMETHOD(get_RecoveredPackets) (THIS_ long FAR * pRecoveredPackets);
	STDMETHOD(get_LostPackets) (THIS_ long FAR * pLostPackets);
	STDMETHOD(get_ReceptionQuality) (THIS_ long FAR * pReceptionQuality);
	STDMETHOD(get_BufferingCount) (THIS_ long FAR * pBufferingCount);
	STDMETHOD(get_IsBroadcast) (THIS_ VARIANT_BOOL FAR * pIsBroadcast);
	STDMETHOD(get_BufferingProgress) (THIS_ long FAR * pBufferingProgress);
};
typedef enum
{
	AM_EXSEEK_CANSEEK = 1,
	AM_EXSEEK_CANSCAN = 2,
	AM_EXSEEK_MARKERSEEK = 4,
	AM_EXSEEK_SCANWITHOUTCLOCK = 8,
	AM_EXSEEK_NOSTANDARDREPAINT = 16,
	AM_EXSEEK_BUFFERING = 32,
	AM_EXSEEK_SENDS_VIDEOFRAMEREADY = 64
} AMExtendedSeekingCapabilities;
DEFINE_GUID(IID_IAMExtendedSeeking, 0xFA2AA8F9L, 0x8B62, 0x11D0, 0xA5, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
#undef INTERFACE
#define INTERFACE IAMExtendedSeeking
DECLARE_INTERFACE_(IAMExtendedSeeking, IDispatch)
{
	BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetTypeInfoCount) (THIS_ UINT FAR * pctinfo);
	STDMETHOD(GetTypeInfo) (THIS_ UINT itinfo, LCID lcid, ITypeInfo FAR * FAR * pptinfo);
	STDMETHOD(GetIDsOfNames) (THIS_ REFIID riid, OLECHAR FAR * FAR * rgszNames, UINT cNames, LCID lcid, DISPID FAR * rgdispid);
	STDMETHOD(Invoke) (THIS_ DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS FAR * pdispparams, VARIANT FAR * pvarResult, EXCEPINFO FAR * pexcepinfo, UINT FAR * puArgErr);
#endif
	STDMETHOD(get_ExSeekCapabilities) (THIS_ long FAR * pExCapabilities);
	STDMETHOD(get_MarkerCount) (THIS_ long FAR * pMarkerCount);
	STDMETHOD(get_CurrentMarker) (THIS_ long FAR * pCurrentMarker);
	STDMETHOD(GetMarkerTime) (THIS_ long MarkerNum, double FAR * pMarkerTime);
	STDMETHOD(GetMarkerName) (THIS_ long MarkerNum, BSTR FAR * pbstrMarkerName);
	STDMETHOD(put_PlaybackSpeed) (THIS_ double Speed);
	STDMETHOD(get_PlaybackSpeed) (THIS_ double FAR * pSpeed);
};
DEFINE_GUID(IID_IAMNetShowExProps, 0xFA2AA8F5L, 0x8B62, 0x11D0, 0xA5, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
#undef INTERFACE
#define INTERFACE IAMNetShowExProps
DECLARE_INTERFACE_(IAMNetShowExProps, IDispatch)
{
	BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetTypeInfoCount) (THIS_ UINT FAR * pctinfo);
	STDMETHOD(GetTypeInfo) (THIS_ UINT itinfo, LCID lcid, ITypeInfo FAR * FAR * pptinfo);
	STDMETHOD(GetIDsOfNames) (THIS_ REFIID riid, OLECHAR FAR * FAR * rgszNames, UINT cNames, LCID lcid, DISPID FAR * rgdispid);
	STDMETHOD(Invoke) (THIS_ DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS FAR * pdispparams, VARIANT FAR * pvarResult, EXCEPINFO FAR * pexcepinfo, UINT FAR * puArgErr);
#endif
	STDMETHOD(get_SourceProtocol) (THIS_ long FAR * pSourceProtocol);
	STDMETHOD(get_Bandwidth) (THIS_ long FAR * pBandwidth);
	STDMETHOD(get_ErrorCorrection) (THIS_ BSTR FAR * pbstrErrorCorrection);
	STDMETHOD(get_CodecCount) (THIS_ long FAR * pCodecCount);
	STDMETHOD(GetCodecInstalled) (THIS_ long CodecNum, VARIANT_BOOL FAR * pCodecInstalled);
	STDMETHOD(GetCodecDescription) (THIS_ long CodecNum, BSTR FAR * pbstrCodecDescription);
	STDMETHOD(GetCodecURL) (THIS_ long CodecNum, BSTR FAR * pbstrCodecURL);
	STDMETHOD(get_CreationDate) (THIS_ DATE FAR * pCreationDate);
	STDMETHOD(get_SourceLink) (THIS_ BSTR FAR * pbstrSourceLink);
};
DEFINE_GUID(IID_IAMExtendedErrorInfo, 0xFA2AA8F6L, 0x8B62, 0x11D0, 0xA5, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
#undef INTERFACE
#define INTERFACE IAMExtendedErrorInfo
DECLARE_INTERFACE_(IAMExtendedErrorInfo, IDispatch)
{
	BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetTypeInfoCount) (THIS_ UINT FAR * pctinfo);
	STDMETHOD(GetTypeInfo) (THIS_ UINT itinfo, LCID lcid, ITypeInfo FAR * FAR * pptinfo);
	STDMETHOD(GetIDsOfNames) (THIS_ REFIID riid, OLECHAR FAR * FAR * rgszNames, UINT cNames, LCID lcid, DISPID FAR * rgdispid);
	STDMETHOD(Invoke) (THIS_ DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS FAR * pdispparams, VARIANT FAR * pvarResult, EXCEPINFO FAR * pexcepinfo, UINT FAR * puArgErr);
#endif
	STDMETHOD(get_HasError) (THIS_ VARIANT_BOOL FAR * pHasError);
	STDMETHOD(get_ErrorDescription) (THIS_ BSTR FAR * pbstrErrorDescription);
	STDMETHOD(get_ErrorCode) (THIS_ long FAR * pErrorCode);
};
DEFINE_GUID(IID_IAMMediaContent, 0xFA2AA8F4L, 0x8B62, 0x11D0, 0xA5, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
#undef INTERFACE
#define INTERFACE IAMMediaContent
DECLARE_INTERFACE_(IAMMediaContent, IDispatch)
{
	BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetTypeInfoCount) (THIS_ UINT FAR * pctinfo);
	STDMETHOD(GetTypeInfo) (THIS_ UINT itinfo, LCID lcid, ITypeInfo FAR * FAR * pptinfo);
	STDMETHOD(GetIDsOfNames) (THIS_ REFIID riid, OLECHAR FAR * FAR * rgszNames, UINT cNames, LCID lcid, DISPID FAR * rgdispid);
	STDMETHOD(Invoke) (THIS_ DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS FAR * pdispparams, VARIANT FAR * pvarResult, EXCEPINFO FAR * pexcepinfo, UINT FAR * puArgErr);
#endif
	STDMETHOD(get_AuthorName) (THIS_ BSTR FAR * pbstrAuthorName);
	STDMETHOD(get_Title) (THIS_ BSTR FAR * pbstrTitle);
	STDMETHOD(get_Rating) (THIS_ BSTR FAR * pbstrRating);
	STDMETHOD(get_Description) (THIS_ BSTR FAR * pbstrDescription);
	STDMETHOD(get_Copyright) (THIS_ BSTR FAR * pbstrCopyright);
	STDMETHOD(get_BaseURL) (THIS_ BSTR FAR * pbstrBaseURL);
	STDMETHOD(get_LogoURL) (THIS_ BSTR FAR * pbstrLogoURL);
	STDMETHOD(get_LogoIconURL) (THIS_ BSTR FAR * pbstrLogoURL);
	STDMETHOD(get_WatermarkURL) (THIS_ BSTR FAR * pbstrWatermarkURL);
	STDMETHOD(get_MoreInfoURL) (THIS_ BSTR FAR * pbstrMoreInfoURL);
	STDMETHOD(get_MoreInfoBannerImage) (THIS_ BSTR FAR * pbstrMoreInfoBannerImage);
	STDMETHOD(get_MoreInfoBannerURL) (THIS_ BSTR FAR * pbstrMoreInfoBannerURL);
	STDMETHOD(get_MoreInfoText) (THIS_ BSTR FAR * pbstrMoreInfoText);
};
DEFINE_GUID(IID_IAMMediaContent2, 0xCE8F78C1L, 0x74D9, 0x11D2, 0xB0, 0x9D, 0x00, 0xA0, 0xC9, 0xA8, 0x11, 0x17);
#undef INTERFACE
#define INTERFACE IAMMediaContent2
DECLARE_INTERFACE_(IAMMediaContent2, IDispatch)
{
	BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetTypeInfoCount) (THIS_ UINT FAR * pctinfo);
	STDMETHOD(GetTypeInfo) (THIS_ UINT itinfo, LCID lcid, ITypeInfo FAR * FAR * pptinfo);
	STDMETHOD(GetIDsOfNames) (THIS_ REFIID riid, OLECHAR FAR * FAR * rgszNames, UINT cNames, LCID lcid, DISPID FAR * rgdispid);
	STDMETHOD(Invoke) (THIS_ DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS FAR * pdispparams, VARIANT FAR * pvarResult, EXCEPINFO FAR * pexcepinfo, UINT FAR * puArgErr);
#endif
	STDMETHOD(get_MediaParameter) (THIS_ long EntryNum, BSTR bstrName, BSTR FAR * pbstrValue);
	STDMETHOD(get_MediaParameterName) (THIS_ long EntryNum, long Index, BSTR FAR * pbstrName);
	STDMETHOD(get_PlaylistCount) (THIS_ long FAR * pNumberEntries);
};
DEFINE_GUID(IID_IAMNetShowPreroll, 0xAAE7E4E2L, 0x6388, 0x11D1, 0x8D, 0x93, 0x00, 0x60, 0x97, 0xC9, 0xA2, 0xB2);
#undef INTERFACE
#define INTERFACE IAMNetShowPreroll
DECLARE_INTERFACE_(IAMNetShowPreroll, IDispatch)
{
	BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetTypeInfoCount) (THIS_ UINT FAR * pctinfo);
	STDMETHOD(GetTypeInfo) (THIS_ UINT itinfo, LCID lcid, ITypeInfo FAR * FAR * pptinfo);
	STDMETHOD(GetIDsOfNames) (THIS_ REFIID riid, OLECHAR FAR * FAR * rgszNames, UINT cNames, LCID lcid, DISPID FAR * rgdispid);
	STDMETHOD(Invoke) (THIS_ DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS FAR * pdispparams, VARIANT FAR * pvarResult, EXCEPINFO FAR * pexcepinfo, UINT FAR * puArgErr);
#endif
	STDMETHOD(put_Preroll) (THIS_ VARIANT_BOOL fPreroll);
	STDMETHOD(get_Preroll) (THIS_ VARIANT_BOOL FAR * pfPreroll);
};
DEFINE_GUID(IID_IDShowPlugin, 0x4746B7C8L, 0x700E, 0x11D1, 0xBE, 0xCC, 0x00, 0xC0, 0x4F, 0xB6, 0xE9, 0x37);
#undef INTERFACE
#define INTERFACE IDShowPlugin
DECLARE_INTERFACE_(IDShowPlugin, IUnknown)
{
	BEGIN_INTERFACE
#ifndef NO_BASEINTERFACE_FUNCS
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID FAR * ppvObj);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
#endif
	STDMETHOD(get_URL) (THIS_ BSTR FAR * pURL);
	STDMETHOD(get_UserAgent) (THIS_ BSTR FAR * pUserAgent);
};
#endif
