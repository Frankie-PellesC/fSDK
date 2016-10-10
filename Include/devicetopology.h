/*+@@file@@----------------------------------------------------------------*//*!
 \file		devicetopology.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jul  5 17:59:45 2016
 \date		Modified on Tue Jul  5 17:59:45 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __devicetopology_h__
#define __devicetopology_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IKsControl_FWD_DEFINED__
#define __IKsControl_FWD_DEFINED__
typedef interface IKsControl IKsControl;
#endif
#ifndef __IPerChannelDbLevel_FWD_DEFINED__
#define __IPerChannelDbLevel_FWD_DEFINED__
typedef interface IPerChannelDbLevel IPerChannelDbLevel;
#endif
#ifndef __IAudioVolumeLevel_FWD_DEFINED__
#define __IAudioVolumeLevel_FWD_DEFINED__
typedef interface IAudioVolumeLevel IAudioVolumeLevel;
#endif
#ifndef __IAudioChannelConfig_FWD_DEFINED__
#define __IAudioChannelConfig_FWD_DEFINED__
typedef interface IAudioChannelConfig IAudioChannelConfig;
#endif
#ifndef __IAudioLoudness_FWD_DEFINED__
#define __IAudioLoudness_FWD_DEFINED__
typedef interface IAudioLoudness IAudioLoudness;
#endif
#ifndef __IAudioInputSelector_FWD_DEFINED__
#define __IAudioInputSelector_FWD_DEFINED__
typedef interface IAudioInputSelector IAudioInputSelector;
#endif
#ifndef __IAudioOutputSelector_FWD_DEFINED__
#define __IAudioOutputSelector_FWD_DEFINED__
typedef interface IAudioOutputSelector IAudioOutputSelector;
#endif
#ifndef __IAudioMute_FWD_DEFINED__
#define __IAudioMute_FWD_DEFINED__
typedef interface IAudioMute IAudioMute;
#endif
#ifndef __IAudioBass_FWD_DEFINED__
#define __IAudioBass_FWD_DEFINED__
typedef interface IAudioBass IAudioBass;
#endif
#ifndef __IAudioMidrange_FWD_DEFINED__
#define __IAudioMidrange_FWD_DEFINED__
typedef interface IAudioMidrange IAudioMidrange;
#endif
#ifndef __IAudioTreble_FWD_DEFINED__
#define __IAudioTreble_FWD_DEFINED__
typedef interface IAudioTreble IAudioTreble;
#endif
#ifndef __IAudioAutoGainControl_FWD_DEFINED__
#define __IAudioAutoGainControl_FWD_DEFINED__
typedef interface IAudioAutoGainControl IAudioAutoGainControl;
#endif
#ifndef __IAudioPeakMeter_FWD_DEFINED__
#define __IAudioPeakMeter_FWD_DEFINED__
typedef interface IAudioPeakMeter IAudioPeakMeter;
#endif
#ifndef __IDeviceSpecificProperty_FWD_DEFINED__
#define __IDeviceSpecificProperty_FWD_DEFINED__
typedef interface IDeviceSpecificProperty IDeviceSpecificProperty;
#endif
#ifndef __IKsFormatSupport_FWD_DEFINED__
#define __IKsFormatSupport_FWD_DEFINED__
typedef interface IKsFormatSupport IKsFormatSupport;
#endif
#ifndef __IKsJackDescription_FWD_DEFINED__
#define __IKsJackDescription_FWD_DEFINED__
typedef interface IKsJackDescription IKsJackDescription;
#endif
#ifndef __IKsJackDescription2_FWD_DEFINED__
#define __IKsJackDescription2_FWD_DEFINED__
typedef interface IKsJackDescription2 IKsJackDescription2;
#endif
#ifndef __IKsJackSinkInformation_FWD_DEFINED__
#define __IKsJackSinkInformation_FWD_DEFINED__
typedef interface IKsJackSinkInformation IKsJackSinkInformation;
#endif
#ifndef __IPartsList_FWD_DEFINED__
#define __IPartsList_FWD_DEFINED__
typedef interface IPartsList IPartsList;
#endif
#ifndef __IPart_FWD_DEFINED__
#define __IPart_FWD_DEFINED__
typedef interface IPart IPart;
#endif
#ifndef __IConnector_FWD_DEFINED__
#define __IConnector_FWD_DEFINED__
typedef interface IConnector IConnector;
#endif
#ifndef __ISubunit_FWD_DEFINED__
#define __ISubunit_FWD_DEFINED__
typedef interface ISubunit ISubunit;
#endif
#ifndef __IControlInterface_FWD_DEFINED__
#define __IControlInterface_FWD_DEFINED__
typedef interface IControlInterface IControlInterface;
#endif
#ifndef __IControlChangeNotify_FWD_DEFINED__
#define __IControlChangeNotify_FWD_DEFINED__
typedef interface IControlChangeNotify IControlChangeNotify;
#endif
#ifndef __IDeviceTopology_FWD_DEFINED__
#define __IDeviceTopology_FWD_DEFINED__
typedef interface IDeviceTopology IDeviceTopology;
#endif
#ifndef __DeviceTopology_FWD_DEFINED__
#define __DeviceTopology_FWD_DEFINED__
typedef struct DeviceTopology DeviceTopology;
#endif
#ifndef __IPartsList_FWD_DEFINED__
#define __IPartsList_FWD_DEFINED__
typedef interface IPartsList IPartsList;
#endif
#ifndef __IPerChannelDbLevel_FWD_DEFINED__
#define __IPerChannelDbLevel_FWD_DEFINED__
typedef interface IPerChannelDbLevel IPerChannelDbLevel;
#endif
#ifndef __IAudioVolumeLevel_FWD_DEFINED__
#define __IAudioVolumeLevel_FWD_DEFINED__
typedef interface IAudioVolumeLevel IAudioVolumeLevel;
#endif
#ifndef __IAudioLoudness_FWD_DEFINED__
#define __IAudioLoudness_FWD_DEFINED__
typedef interface IAudioLoudness IAudioLoudness;
#endif
#ifndef __IAudioInputSelector_FWD_DEFINED__
#define __IAudioInputSelector_FWD_DEFINED__
typedef interface IAudioInputSelector IAudioInputSelector;
#endif
#ifndef __IAudioMute_FWD_DEFINED__
#define __IAudioMute_FWD_DEFINED__
typedef interface IAudioMute IAudioMute;
#endif
#ifndef __IAudioBass_FWD_DEFINED__
#define __IAudioBass_FWD_DEFINED__
typedef interface IAudioBass IAudioBass;
#endif
#ifndef __IAudioMidrange_FWD_DEFINED__
#define __IAudioMidrange_FWD_DEFINED__
typedef interface IAudioMidrange IAudioMidrange;
#endif
#ifndef __IAudioTreble_FWD_DEFINED__
#define __IAudioTreble_FWD_DEFINED__
typedef interface IAudioTreble IAudioTreble;
#endif
#ifndef __IAudioAutoGainControl_FWD_DEFINED__
#define __IAudioAutoGainControl_FWD_DEFINED__
typedef interface IAudioAutoGainControl IAudioAutoGainControl;
#endif
#ifndef __IAudioOutputSelector_FWD_DEFINED__
#define __IAudioOutputSelector_FWD_DEFINED__
typedef interface IAudioOutputSelector IAudioOutputSelector;
#endif
#ifndef __IAudioPeakMeter_FWD_DEFINED__
#define __IAudioPeakMeter_FWD_DEFINED__
typedef interface IAudioPeakMeter IAudioPeakMeter;
#endif
#ifndef __IDeviceSpecificProperty_FWD_DEFINED__
#define __IDeviceSpecificProperty_FWD_DEFINED__
typedef interface IDeviceSpecificProperty IDeviceSpecificProperty;
#endif
#ifndef __IKsFormatSupport_FWD_DEFINED__
#define __IKsFormatSupport_FWD_DEFINED__
typedef interface IKsFormatSupport IKsFormatSupport;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
#define E_NOTFOUND HRESULT_FROM_WIN32(ERROR_NOT_FOUND)
#define DEVTOPO_HARDWARE_INITIATED_EVENTCONTEXT 'draH'
DEFINE_GUID(EVENTCONTEXT_VOLUMESLIDER, 0xE2C2E9DE, 0x09B1, 0x4B04, 0x84, 0xE5, 0x07, 0x93, 0x12, 0x25, 0xEE, 0x04);
#define _IKsControl_
#include "ks.h"
#include "ksmedia.h"
#ifndef _KS_
typedef struct __MIDL___MIDL_itf_devicetopology_0000_0000_0001
{
	ULONG FormatSize;
	ULONG Flags;
	ULONG SampleSize;
	ULONG Reserved;
	GUID MajorFormat;
	GUID SubFormat;
	GUID Specifier;
} KSDATAFORMAT;
typedef struct __MIDL___MIDL_itf_devicetopology_0000_0000_0001 *PKSDATAFORMAT;
typedef struct __MIDL___MIDL_itf_devicetopology_0000_0000_0002
{
	union
	{
		struct
		{
			GUID Set;
			ULONG Id;
			ULONG Flags;
		};
		LONGLONG Alignment;
	};
} KSIDENTIFIER;
typedef struct __MIDL___MIDL_itf_devicetopology_0000_0000_0002 *PKSIDENTIFIER;
typedef KSIDENTIFIER KSPROPERTY;
typedef KSIDENTIFIER *PKSPROPERTY;
typedef KSIDENTIFIER KSMETHOD;
typedef KSIDENTIFIER *PKSMETHOD;
typedef KSIDENTIFIER KSEVENT;
typedef KSIDENTIFIER *PKSEVENT;
typedef enum __MIDL___MIDL_itf_devicetopology_0000_0000_0005
{
	eConnTypeUnknown = 0,
	eConnType3Point5mm = (eConnTypeUnknown + 1),
	eConnTypeQuarter = (eConnType3Point5mm + 1),
	eConnTypeAtapiInternal = (eConnTypeQuarter + 1),
	eConnTypeRCA = (eConnTypeAtapiInternal + 1),
	eConnTypeOptical = (eConnTypeRCA + 1),
	eConnTypeOtherDigital = (eConnTypeOptical + 1),
	eConnTypeOtherAnalog = (eConnTypeOtherDigital + 1),
	eConnTypeMultichannelAnalogDIN = (eConnTypeOtherAnalog + 1),
	eConnTypeXlrProfessional = (eConnTypeMultichannelAnalogDIN + 1),
	eConnTypeRJ11Modem = (eConnTypeXlrProfessional + 1),
	eConnTypeCombination = (eConnTypeRJ11Modem + 1)
} EPcxConnectionType;
typedef enum __MIDL___MIDL_itf_devicetopology_0000_0000_0006
{
	eGeoLocRear = 0x1,
	eGeoLocFront = (eGeoLocRear + 1),
	eGeoLocLeft = (eGeoLocFront + 1),
	eGeoLocRight = (eGeoLocLeft + 1),
	eGeoLocTop = (eGeoLocRight + 1),
	eGeoLocBottom = (eGeoLocTop + 1),
	eGeoLocRearPanel = (eGeoLocBottom + 1),
	eGeoLocRiser = (eGeoLocRearPanel + 1),
	eGeoLocInsideMobileLid = (eGeoLocRiser + 1),
	eGeoLocDrivebay = (eGeoLocInsideMobileLid + 1),
	eGeoLocHDMI = (eGeoLocDrivebay + 1),
	eGeoLocOutsideMobileLid = (eGeoLocHDMI + 1),
	eGeoLocATAPI = (eGeoLocOutsideMobileLid + 1),
	eGeoLocReserved5 = (eGeoLocATAPI + 1),
	eGeoLocReserved6 = (eGeoLocReserved5 + 1)
} EPcxGeoLocation;
typedef enum __MIDL___MIDL_itf_devicetopology_0000_0000_0007
{
	eGenLocPrimaryBox = 0,
	eGenLocInternal = (eGenLocPrimaryBox + 1),
	eGenLocSeparate = (eGenLocInternal + 1),
	eGenLocOther = (eGenLocSeparate + 1)
} EPcxGenLocation;
typedef enum __MIDL___MIDL_itf_devicetopology_0000_0000_0008
{
	ePortConnJack = 0,
	ePortConnIntegratedDevice = (ePortConnJack + 1),
	ePortConnBothIntegratedAndJack = (ePortConnIntegratedDevice + 1),
	ePortConnUnknown = (ePortConnBothIntegratedAndJack + 1)
} EPxcPortConnection;
typedef struct __MIDL___MIDL_itf_devicetopology_0000_0000_0009
{
	DWORD ChannelMapping;
	COLORREF Color;
	EPcxConnectionType ConnectionType;
	EPcxGeoLocation GeoLocation;
	EPcxGenLocation GenLocation;
	EPxcPortConnection PortConnection;
	BOOL IsConnected;
} KSJACK_DESCRIPTION;
typedef struct __MIDL___MIDL_itf_devicetopology_0000_0000_0009 *PKSJACK_DESCRIPTION;
typedef struct _LUID
{
	DWORD LowPart;
	LONG HighPart;
} LUID;
typedef struct _LUID *PLUID;
typedef enum __MIDL___MIDL_itf_devicetopology_0000_0000_0010
{
	KSJACK_SINK_CONNECTIONTYPE_HDMI = 0,
	KSJACK_SINK_CONNECTIONTYPE_DISPLAYPORT = (KSJACK_SINK_CONNECTIONTYPE_HDMI + 1)
} KSJACK_SINK_CONNECTIONTYPE;
typedef struct _tagKSJACK_SINK_INFORMATION
{
	KSJACK_SINK_CONNECTIONTYPE ConnType;
	WORD ManufacturerId;
	WORD ProductId;
	WORD AudioLatency;
	BOOL HDCPCapable;
	BOOL AICapable;
	UCHAR SinkDescriptionLength;
	WCHAR SinkDescription[32];
	LUID PortId;
} KSJACK_SINK_INFORMATION;
typedef struct _tagKSJACK_DESCRIPTION2
{
	DWORD DeviceStateInfo;
	DWORD JackCapabilities;
} KSJACK_DESCRIPTION2;
typedef struct _tagKSJACK_DESCRIPTION2 *PKSJACK_DESCRIPTION2;
#endif
typedef enum __MIDL___MIDL_itf_devicetopology_0000_0000_0011
{
	In = 0,
	Out = (In + 1)
} DataFlow;
typedef enum __MIDL___MIDL_itf_devicetopology_0000_0000_0012
{
	Connector = 0,
	Subunit = (Connector + 1)
} PartType;
typedef enum __MIDL___MIDL_itf_devicetopology_0000_0000_0013
{
	Unknown_Connector = 0,
	Physical_Internal = (Unknown_Connector + 1),
	Physical_External = (Physical_Internal + 1),
	Software_IO = (Physical_External + 1),
	Software_Fixed = (Software_IO + 1),
	Network = (Software_Fixed + 1)
} ConnectorType;
extern RPC_IF_HANDLE __MIDL_itf_devicetopology_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_devicetopology_0000_0000_v0_0_s_ifspec;
#ifndef __IKsControl_INTERFACE_DEFINED__
#define __IKsControl_INTERFACE_DEFINED__
extern const IID IID_IKsControl;
typedef struct IKsControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IKsControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IKsControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IKsControl * This);
	HRESULT(STDMETHODCALLTYPE * KsProperty) (IKsControl * This, PKSPROPERTY Property, ULONG PropertyLength, void *PropertyData, ULONG DataLength, ULONG * BytesReturned);
	HRESULT(STDMETHODCALLTYPE * KsMethod) (IKsControl * This, PKSMETHOD Method, ULONG MethodLength, void *MethodData, ULONG DataLength, ULONG * BytesReturned);
	HRESULT(STDMETHODCALLTYPE * KsEvent) (IKsControl * This, PKSEVENT Event, ULONG EventLength, void *EventData, ULONG DataLength, ULONG * BytesReturned);
	END_INTERFACE
}  IKsControlVtbl;
interface IKsControl
{
	CONST_VTBL struct IKsControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IKsControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IKsControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IKsControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IKsControl_KsProperty(This,Property,PropertyLength,PropertyData,DataLength,BytesReturned)( (This)->lpVtbl -> KsProperty(This,Property,PropertyLength,PropertyData,DataLength,BytesReturned) )
#define IKsControl_KsMethod(This,Method,MethodLength,MethodData,DataLength,BytesReturned)( (This)->lpVtbl -> KsMethod(This,Method,MethodLength,MethodData,DataLength,BytesReturned) )
#define IKsControl_KsEvent(This,Event,EventLength,EventData,DataLength,BytesReturned)( (This)->lpVtbl -> KsEvent(This,Event,EventLength,EventData,DataLength,BytesReturned) )
#endif
#endif
#ifndef __IPerChannelDbLevel_INTERFACE_DEFINED__
#define __IPerChannelDbLevel_INTERFACE_DEFINED__
extern const IID IID_IPerChannelDbLevel;
typedef struct IPerChannelDbLevelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPerChannelDbLevel * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPerChannelDbLevel * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPerChannelDbLevel * This);
	HRESULT(STDMETHODCALLTYPE * GetChannelCount) (IPerChannelDbLevel * This, UINT * pcChannels);
	HRESULT(STDMETHODCALLTYPE * GetLevelRange) (IPerChannelDbLevel * This, UINT nChannel, float *pfMinLevelDB, float *pfMaxLevelDB, float *pfStepping);
	HRESULT(STDMETHODCALLTYPE * GetLevel) (IPerChannelDbLevel * This, UINT nChannel, float *pfLevelDB);
	HRESULT(STDMETHODCALLTYPE * SetLevel) (IPerChannelDbLevel * This, UINT nChannel, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetLevelUniform) (IPerChannelDbLevel * This, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetLevelAllChannels) (IPerChannelDbLevel * This, float aLevelsDB[], ULONG cChannels, LPCGUID pguidEventContext);
	END_INTERFACE
}  IPerChannelDbLevelVtbl;
interface IPerChannelDbLevel
{
	CONST_VTBL struct IPerChannelDbLevelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPerChannelDbLevel_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPerChannelDbLevel_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPerChannelDbLevel_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPerChannelDbLevel_GetChannelCount(This,pcChannels)( (This)->lpVtbl -> GetChannelCount(This,pcChannels) )
#define IPerChannelDbLevel_GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping)( (This)->lpVtbl -> GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping) )
#define IPerChannelDbLevel_GetLevel(This,nChannel,pfLevelDB)( (This)->lpVtbl -> GetLevel(This,nChannel,pfLevelDB) )
#define IPerChannelDbLevel_SetLevel(This,nChannel,fLevelDB,pguidEventContext)( (This)->lpVtbl -> SetLevel(This,nChannel,fLevelDB,pguidEventContext) )
#define IPerChannelDbLevel_SetLevelUniform(This,fLevelDB,pguidEventContext)( (This)->lpVtbl -> SetLevelUniform(This,fLevelDB,pguidEventContext) )
#define IPerChannelDbLevel_SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext)( (This)->lpVtbl -> SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext) )
#endif
#endif
#ifndef __IAudioVolumeLevel_INTERFACE_DEFINED__
#define __IAudioVolumeLevel_INTERFACE_DEFINED__
extern const IID IID_IAudioVolumeLevel;
typedef struct IAudioVolumeLevelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioVolumeLevel * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioVolumeLevel * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioVolumeLevel * This);
	HRESULT(STDMETHODCALLTYPE * GetChannelCount) (IAudioVolumeLevel * This, UINT * pcChannels);
	HRESULT(STDMETHODCALLTYPE * GetLevelRange) (IAudioVolumeLevel * This, UINT nChannel, float *pfMinLevelDB, float *pfMaxLevelDB, float *pfStepping);
	HRESULT(STDMETHODCALLTYPE * GetLevel) (IAudioVolumeLevel * This, UINT nChannel, float *pfLevelDB);
	HRESULT(STDMETHODCALLTYPE * SetLevel) (IAudioVolumeLevel * This, UINT nChannel, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetLevelUniform) (IAudioVolumeLevel * This, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetLevelAllChannels) (IAudioVolumeLevel * This, float aLevelsDB[], ULONG cChannels, LPCGUID pguidEventContext);
	END_INTERFACE
}  IAudioVolumeLevelVtbl;
interface IAudioVolumeLevel
{
	CONST_VTBL struct IAudioVolumeLevelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioVolumeLevel_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioVolumeLevel_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioVolumeLevel_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioVolumeLevel_GetChannelCount(This,pcChannels)( (This)->lpVtbl -> GetChannelCount(This,pcChannels) )
#define IAudioVolumeLevel_GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping)( (This)->lpVtbl -> GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping) )
#define IAudioVolumeLevel_GetLevel(This,nChannel,pfLevelDB)( (This)->lpVtbl -> GetLevel(This,nChannel,pfLevelDB) )
#define IAudioVolumeLevel_SetLevel(This,nChannel,fLevelDB,pguidEventContext)( (This)->lpVtbl -> SetLevel(This,nChannel,fLevelDB,pguidEventContext) )
#define IAudioVolumeLevel_SetLevelUniform(This,fLevelDB,pguidEventContext)( (This)->lpVtbl -> SetLevelUniform(This,fLevelDB,pguidEventContext) )
#define IAudioVolumeLevel_SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext)( (This)->lpVtbl -> SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext) )
#endif
#endif
#ifndef __IAudioChannelConfig_INTERFACE_DEFINED__
#define __IAudioChannelConfig_INTERFACE_DEFINED__
extern const IID IID_IAudioChannelConfig;
typedef struct IAudioChannelConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioChannelConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioChannelConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioChannelConfig * This);
	HRESULT(STDMETHODCALLTYPE * SetChannelConfig) (IAudioChannelConfig * This, DWORD dwConfig, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * GetChannelConfig) (IAudioChannelConfig * This, DWORD * pdwConfig);
	END_INTERFACE
}  IAudioChannelConfigVtbl;
interface IAudioChannelConfig
{
	CONST_VTBL struct IAudioChannelConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioChannelConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioChannelConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioChannelConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioChannelConfig_SetChannelConfig(This,dwConfig,pguidEventContext)( (This)->lpVtbl -> SetChannelConfig(This,dwConfig,pguidEventContext) )
#define IAudioChannelConfig_GetChannelConfig(This,pdwConfig)( (This)->lpVtbl -> GetChannelConfig(This,pdwConfig) )
#endif
#endif
#ifndef __IAudioLoudness_INTERFACE_DEFINED__
#define __IAudioLoudness_INTERFACE_DEFINED__
extern const IID IID_IAudioLoudness;
typedef struct IAudioLoudnessVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioLoudness * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioLoudness * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioLoudness * This);
	HRESULT(STDMETHODCALLTYPE * GetEnabled) (IAudioLoudness * This, BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * SetEnabled) (IAudioLoudness * This, BOOL bEnable, LPCGUID pguidEventContext);
	END_INTERFACE
}  IAudioLoudnessVtbl;
interface IAudioLoudness
{
	CONST_VTBL struct IAudioLoudnessVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioLoudness_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioLoudness_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioLoudness_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioLoudness_GetEnabled(This,pbEnabled)( (This)->lpVtbl -> GetEnabled(This,pbEnabled) )
#define IAudioLoudness_SetEnabled(This,bEnable,pguidEventContext)( (This)->lpVtbl -> SetEnabled(This,bEnable,pguidEventContext) )
#endif
#endif
#ifndef __IAudioInputSelector_INTERFACE_DEFINED__
#define __IAudioInputSelector_INTERFACE_DEFINED__
extern const IID IID_IAudioInputSelector;
typedef struct IAudioInputSelectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioInputSelector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioInputSelector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioInputSelector * This);
	HRESULT(STDMETHODCALLTYPE * GetSelection) (IAudioInputSelector * This, UINT * pnIdSelected);
	HRESULT(STDMETHODCALLTYPE * SetSelection) (IAudioInputSelector * This, UINT nIdSelect, LPCGUID pguidEventContext);
	END_INTERFACE
}  IAudioInputSelectorVtbl;
interface IAudioInputSelector
{
	CONST_VTBL struct IAudioInputSelectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioInputSelector_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioInputSelector_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioInputSelector_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioInputSelector_GetSelection(This,pnIdSelected)( (This)->lpVtbl -> GetSelection(This,pnIdSelected) )
#define IAudioInputSelector_SetSelection(This,nIdSelect,pguidEventContext)( (This)->lpVtbl -> SetSelection(This,nIdSelect,pguidEventContext) )
#endif
#endif
#ifndef __IAudioOutputSelector_INTERFACE_DEFINED__
#define __IAudioOutputSelector_INTERFACE_DEFINED__
extern const IID IID_IAudioOutputSelector;
typedef struct IAudioOutputSelectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioOutputSelector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioOutputSelector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioOutputSelector * This);
	HRESULT(STDMETHODCALLTYPE * GetSelection) (IAudioOutputSelector * This, UINT * pnIdSelected);
	HRESULT(STDMETHODCALLTYPE * SetSelection) (IAudioOutputSelector * This, UINT nIdSelect, LPCGUID pguidEventContext);
	END_INTERFACE
}  IAudioOutputSelectorVtbl;
interface IAudioOutputSelector
{
	CONST_VTBL struct IAudioOutputSelectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioOutputSelector_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioOutputSelector_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioOutputSelector_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioOutputSelector_GetSelection(This,pnIdSelected)( (This)->lpVtbl -> GetSelection(This,pnIdSelected) )
#define IAudioOutputSelector_SetSelection(This,nIdSelect,pguidEventContext)( (This)->lpVtbl -> SetSelection(This,nIdSelect,pguidEventContext) )
#endif
#endif
#ifndef __IAudioMute_INTERFACE_DEFINED__
#define __IAudioMute_INTERFACE_DEFINED__
extern const IID IID_IAudioMute;
typedef struct IAudioMuteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioMute * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioMute * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioMute * This);
	HRESULT(STDMETHODCALLTYPE * SetMute) (IAudioMute * This, BOOL bMuted, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * GetMute) (IAudioMute * This, BOOL * pbMuted);
	END_INTERFACE
}  IAudioMuteVtbl;
interface IAudioMute
{
	CONST_VTBL struct IAudioMuteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioMute_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioMute_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioMute_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioMute_SetMute(This,bMuted,pguidEventContext)( (This)->lpVtbl -> SetMute(This,bMuted,pguidEventContext) )
#define IAudioMute_GetMute(This,pbMuted)( (This)->lpVtbl -> GetMute(This,pbMuted) )
#endif
#endif
#ifndef __IAudioBass_INTERFACE_DEFINED__
#define __IAudioBass_INTERFACE_DEFINED__
extern const IID IID_IAudioBass;
typedef struct IAudioBassVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioBass * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioBass * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioBass * This);
	HRESULT(STDMETHODCALLTYPE * GetChannelCount) (IAudioBass * This, UINT * pcChannels);
	HRESULT(STDMETHODCALLTYPE * GetLevelRange) (IAudioBass * This, UINT nChannel, float *pfMinLevelDB, float *pfMaxLevelDB, float *pfStepping);
	HRESULT(STDMETHODCALLTYPE * GetLevel) (IAudioBass * This, UINT nChannel, float *pfLevelDB);
	HRESULT(STDMETHODCALLTYPE * SetLevel) (IAudioBass * This, UINT nChannel, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetLevelUniform) (IAudioBass * This, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetLevelAllChannels) (IAudioBass * This, float aLevelsDB[], ULONG cChannels, LPCGUID pguidEventContext);
	END_INTERFACE
}  IAudioBassVtbl;
interface IAudioBass
{
	CONST_VTBL struct IAudioBassVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioBass_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioBass_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioBass_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioBass_GetChannelCount(This,pcChannels)( (This)->lpVtbl -> GetChannelCount(This,pcChannels) )
#define IAudioBass_GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping)( (This)->lpVtbl -> GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping) )
#define IAudioBass_GetLevel(This,nChannel,pfLevelDB)( (This)->lpVtbl -> GetLevel(This,nChannel,pfLevelDB) )
#define IAudioBass_SetLevel(This,nChannel,fLevelDB,pguidEventContext)( (This)->lpVtbl -> SetLevel(This,nChannel,fLevelDB,pguidEventContext) )
#define IAudioBass_SetLevelUniform(This,fLevelDB,pguidEventContext)( (This)->lpVtbl -> SetLevelUniform(This,fLevelDB,pguidEventContext) )
#define IAudioBass_SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext)( (This)->lpVtbl -> SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext) )
#endif
#endif
#ifndef __IAudioMidrange_INTERFACE_DEFINED__
#define __IAudioMidrange_INTERFACE_DEFINED__
extern const IID IID_IAudioMidrange;
typedef struct IAudioMidrangeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioMidrange * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioMidrange * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioMidrange * This);
	HRESULT(STDMETHODCALLTYPE * GetChannelCount) (IAudioMidrange * This, UINT * pcChannels);
	HRESULT(STDMETHODCALLTYPE * GetLevelRange) (IAudioMidrange * This, UINT nChannel, float *pfMinLevelDB, float *pfMaxLevelDB, float *pfStepping);
	HRESULT(STDMETHODCALLTYPE * GetLevel) (IAudioMidrange * This, UINT nChannel, float *pfLevelDB);
	HRESULT(STDMETHODCALLTYPE * SetLevel) (IAudioMidrange * This, UINT nChannel, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetLevelUniform) (IAudioMidrange * This, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetLevelAllChannels) (IAudioMidrange * This, float aLevelsDB[], ULONG cChannels, LPCGUID pguidEventContext);
	END_INTERFACE
}  IAudioMidrangeVtbl;
interface IAudioMidrange
{
	CONST_VTBL struct IAudioMidrangeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioMidrange_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioMidrange_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioMidrange_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioMidrange_GetChannelCount(This,pcChannels)( (This)->lpVtbl -> GetChannelCount(This,pcChannels) )
#define IAudioMidrange_GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping)( (This)->lpVtbl -> GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping) )
#define IAudioMidrange_GetLevel(This,nChannel,pfLevelDB)( (This)->lpVtbl -> GetLevel(This,nChannel,pfLevelDB) )
#define IAudioMidrange_SetLevel(This,nChannel,fLevelDB,pguidEventContext)( (This)->lpVtbl -> SetLevel(This,nChannel,fLevelDB,pguidEventContext) )
#define IAudioMidrange_SetLevelUniform(This,fLevelDB,pguidEventContext)( (This)->lpVtbl -> SetLevelUniform(This,fLevelDB,pguidEventContext) )
#define IAudioMidrange_SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext)( (This)->lpVtbl -> SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext) )
#endif
#endif
#ifndef __IAudioTreble_INTERFACE_DEFINED__
#define __IAudioTreble_INTERFACE_DEFINED__
extern const IID IID_IAudioTreble;
typedef struct IAudioTrebleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioTreble * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioTreble * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioTreble * This);
	HRESULT(STDMETHODCALLTYPE * GetChannelCount) (IAudioTreble * This, UINT * pcChannels);
	HRESULT(STDMETHODCALLTYPE * GetLevelRange) (IAudioTreble * This, UINT nChannel, float *pfMinLevelDB, float *pfMaxLevelDB, float *pfStepping);
	HRESULT(STDMETHODCALLTYPE * GetLevel) (IAudioTreble * This, UINT nChannel, float *pfLevelDB);
	HRESULT(STDMETHODCALLTYPE * SetLevel) (IAudioTreble * This, UINT nChannel, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetLevelUniform) (IAudioTreble * This, float fLevelDB, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * SetLevelAllChannels) (IAudioTreble * This, float aLevelsDB[], ULONG cChannels, LPCGUID pguidEventContext);
	END_INTERFACE
}  IAudioTrebleVtbl;
interface IAudioTreble
{
	CONST_VTBL struct IAudioTrebleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioTreble_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioTreble_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioTreble_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioTreble_GetChannelCount(This,pcChannels)( (This)->lpVtbl -> GetChannelCount(This,pcChannels) )
#define IAudioTreble_GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping)( (This)->lpVtbl -> GetLevelRange(This,nChannel,pfMinLevelDB,pfMaxLevelDB,pfStepping) )
#define IAudioTreble_GetLevel(This,nChannel,pfLevelDB)( (This)->lpVtbl -> GetLevel(This,nChannel,pfLevelDB) )
#define IAudioTreble_SetLevel(This,nChannel,fLevelDB,pguidEventContext)( (This)->lpVtbl -> SetLevel(This,nChannel,fLevelDB,pguidEventContext) )
#define IAudioTreble_SetLevelUniform(This,fLevelDB,pguidEventContext)( (This)->lpVtbl -> SetLevelUniform(This,fLevelDB,pguidEventContext) )
#define IAudioTreble_SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext)( (This)->lpVtbl -> SetLevelAllChannels(This,aLevelsDB,cChannels,pguidEventContext) )
#endif
#endif
#ifndef __IAudioAutoGainControl_INTERFACE_DEFINED__
#define __IAudioAutoGainControl_INTERFACE_DEFINED__
extern const IID IID_IAudioAutoGainControl;
typedef struct IAudioAutoGainControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioAutoGainControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioAutoGainControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioAutoGainControl * This);
	HRESULT(STDMETHODCALLTYPE * GetEnabled) (IAudioAutoGainControl * This, BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * SetEnabled) (IAudioAutoGainControl * This, BOOL bEnable, LPCGUID pguidEventContext);
	END_INTERFACE
}  IAudioAutoGainControlVtbl;
interface IAudioAutoGainControl
{
	CONST_VTBL struct IAudioAutoGainControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioAutoGainControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioAutoGainControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioAutoGainControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioAutoGainControl_GetEnabled(This,pbEnabled)( (This)->lpVtbl -> GetEnabled(This,pbEnabled) )
#define IAudioAutoGainControl_SetEnabled(This,bEnable,pguidEventContext)( (This)->lpVtbl -> SetEnabled(This,bEnable,pguidEventContext) )
#endif
#endif
#ifndef __IAudioPeakMeter_INTERFACE_DEFINED__
#define __IAudioPeakMeter_INTERFACE_DEFINED__
extern const IID IID_IAudioPeakMeter;
typedef struct IAudioPeakMeterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioPeakMeter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioPeakMeter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioPeakMeter * This);
	HRESULT(STDMETHODCALLTYPE * GetChannelCount) (IAudioPeakMeter * This, UINT * pcChannels);
	HRESULT(STDMETHODCALLTYPE * GetLevel) (IAudioPeakMeter * This, UINT nChannel, float *pfLevel);
	END_INTERFACE
}  IAudioPeakMeterVtbl;
interface IAudioPeakMeter
{
	CONST_VTBL struct IAudioPeakMeterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAudioPeakMeter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAudioPeakMeter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAudioPeakMeter_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAudioPeakMeter_GetChannelCount(This,pcChannels)( (This)->lpVtbl -> GetChannelCount(This,pcChannels) )
#define IAudioPeakMeter_GetLevel(This,nChannel,pfLevel)( (This)->lpVtbl -> GetLevel(This,nChannel,pfLevel) )
#endif
#endif
#ifndef __IDeviceSpecificProperty_INTERFACE_DEFINED__
#define __IDeviceSpecificProperty_INTERFACE_DEFINED__
extern const IID IID_IDeviceSpecificProperty;
typedef struct IDeviceSpecificPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDeviceSpecificProperty * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDeviceSpecificProperty * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDeviceSpecificProperty * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (IDeviceSpecificProperty * This, VARTYPE * pVType);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IDeviceSpecificProperty * This, void *pvValue, DWORD * pcbValue);
	HRESULT(STDMETHODCALLTYPE * SetValue) (IDeviceSpecificProperty * This, void *pvValue, DWORD cbValue, LPCGUID pguidEventContext);
	HRESULT(STDMETHODCALLTYPE * Get4BRange) (IDeviceSpecificProperty * This, LONG * plMin, LONG * plMax, LONG * plStepping);
	END_INTERFACE
}  IDeviceSpecificPropertyVtbl;
interface IDeviceSpecificProperty
{
	CONST_VTBL struct IDeviceSpecificPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDeviceSpecificProperty_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDeviceSpecificProperty_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDeviceSpecificProperty_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDeviceSpecificProperty_GetType(This,pVType)( (This)->lpVtbl -> GetType(This,pVType) )
#define IDeviceSpecificProperty_GetValue(This,pvValue,pcbValue)( (This)->lpVtbl -> GetValue(This,pvValue,pcbValue) )
#define IDeviceSpecificProperty_SetValue(This,pvValue,cbValue,pguidEventContext)( (This)->lpVtbl -> SetValue(This,pvValue,cbValue,pguidEventContext) )
#define IDeviceSpecificProperty_Get4BRange(This,plMin,plMax,plStepping)( (This)->lpVtbl -> Get4BRange(This,plMin,plMax,plStepping) )
#endif
#endif
#ifndef __IKsFormatSupport_INTERFACE_DEFINED__
#define __IKsFormatSupport_INTERFACE_DEFINED__
extern const IID IID_IKsFormatSupport;
typedef struct IKsFormatSupportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IKsFormatSupport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IKsFormatSupport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IKsFormatSupport * This);
	HRESULT(STDMETHODCALLTYPE * IsFormatSupported) (IKsFormatSupport * This, PKSDATAFORMAT pKsFormat, DWORD cbFormat, BOOL * pbSupported);
	HRESULT(STDMETHODCALLTYPE * GetDevicePreferredFormat) (IKsFormatSupport * This, PKSDATAFORMAT * ppKsFormat);
	END_INTERFACE
}  IKsFormatSupportVtbl;
interface IKsFormatSupport
{
	CONST_VTBL struct IKsFormatSupportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IKsFormatSupport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IKsFormatSupport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IKsFormatSupport_Release(This)( (This)->lpVtbl -> Release(This) )
#define IKsFormatSupport_IsFormatSupported(This,pKsFormat,cbFormat,pbSupported)( (This)->lpVtbl -> IsFormatSupported(This,pKsFormat,cbFormat,pbSupported) )
#define IKsFormatSupport_GetDevicePreferredFormat(This,ppKsFormat)( (This)->lpVtbl -> GetDevicePreferredFormat(This,ppKsFormat) )
#endif
#endif
#ifndef __IKsJackDescription_INTERFACE_DEFINED__
#define __IKsJackDescription_INTERFACE_DEFINED__
extern const IID IID_IKsJackDescription;
typedef struct IKsJackDescriptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IKsJackDescription * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IKsJackDescription * This);
	ULONG(STDMETHODCALLTYPE * Release) (IKsJackDescription * This);
	HRESULT(STDMETHODCALLTYPE * GetJackCount) (IKsJackDescription * This, UINT * pcJacks);
	HRESULT(STDMETHODCALLTYPE * GetJackDescription) (IKsJackDescription * This, UINT nJack, KSJACK_DESCRIPTION * pDescription);
	END_INTERFACE
}  IKsJackDescriptionVtbl;
interface IKsJackDescription
{
	CONST_VTBL struct IKsJackDescriptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IKsJackDescription_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IKsJackDescription_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IKsJackDescription_Release(This)( (This)->lpVtbl -> Release(This) )
#define IKsJackDescription_GetJackCount(This,pcJacks)( (This)->lpVtbl -> GetJackCount(This,pcJacks) )
#define IKsJackDescription_GetJackDescription(This,nJack,pDescription)( (This)->lpVtbl -> GetJackDescription(This,nJack,pDescription) )
#endif
#endif
#ifndef __IKsJackDescription2_INTERFACE_DEFINED__
#define __IKsJackDescription2_INTERFACE_DEFINED__
extern const IID IID_IKsJackDescription2;
typedef struct IKsJackDescription2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IKsJackDescription2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IKsJackDescription2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IKsJackDescription2 * This);
	HRESULT(STDMETHODCALLTYPE * GetJackCount) (IKsJackDescription2 * This, UINT * pcJacks);
	HRESULT(STDMETHODCALLTYPE * GetJackDescription2) (IKsJackDescription2 * This, UINT nJack, KSJACK_DESCRIPTION2 * pDescription2);
	END_INTERFACE
}  IKsJackDescription2Vtbl;
interface IKsJackDescription2
{
	CONST_VTBL struct IKsJackDescription2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IKsJackDescription2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IKsJackDescription2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IKsJackDescription2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IKsJackDescription2_GetJackCount(This,pcJacks)( (This)->lpVtbl -> GetJackCount(This,pcJacks) )
#define IKsJackDescription2_GetJackDescription2(This,nJack,pDescription2)( (This)->lpVtbl -> GetJackDescription2(This,nJack,pDescription2) )
#endif
#endif
#ifndef __IKsJackSinkInformation_INTERFACE_DEFINED__
#define __IKsJackSinkInformation_INTERFACE_DEFINED__
extern const IID IID_IKsJackSinkInformation;
typedef struct IKsJackSinkInformationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IKsJackSinkInformation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IKsJackSinkInformation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IKsJackSinkInformation * This);
	HRESULT(STDMETHODCALLTYPE * GetJackSinkInformation) (IKsJackSinkInformation * This, KSJACK_SINK_INFORMATION * pJackSinkInformation);
	END_INTERFACE
}  IKsJackSinkInformationVtbl;
interface IKsJackSinkInformation
{
	CONST_VTBL struct IKsJackSinkInformationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IKsJackSinkInformation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IKsJackSinkInformation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IKsJackSinkInformation_Release(This)( (This)->lpVtbl -> Release(This) )
#define IKsJackSinkInformation_GetJackSinkInformation(This,pJackSinkInformation)( (This)->lpVtbl -> GetJackSinkInformation(This,pJackSinkInformation) )
#endif
#endif
#ifndef __IPartsList_INTERFACE_DEFINED__
#define __IPartsList_INTERFACE_DEFINED__
extern const IID IID_IPartsList;
typedef struct IPartsListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPartsList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPartsList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPartsList * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IPartsList * This, UINT * pCount);
	HRESULT(STDMETHODCALLTYPE * GetPart) (IPartsList * This, UINT nIndex, IPart ** ppPart);
	END_INTERFACE
}  IPartsListVtbl;
interface IPartsList
{
	CONST_VTBL struct IPartsListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPartsList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPartsList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPartsList_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPartsList_GetCount(This,pCount)( (This)->lpVtbl -> GetCount(This,pCount) )
#define IPartsList_GetPart(This,nIndex,ppPart)( (This)->lpVtbl -> GetPart(This,nIndex,ppPart) )
#endif
#endif
#ifndef __IPart_INTERFACE_DEFINED__
#define __IPart_INTERFACE_DEFINED__
extern const IID IID_IPart;
typedef struct IPartVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPart * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPart * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPart * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (IPart * This, LPWSTR * ppwstrName);
	HRESULT(STDMETHODCALLTYPE * GetLocalId) (IPart * This, UINT * pnId);
	HRESULT(STDMETHODCALLTYPE * GetGlobalId) (IPart * This, LPWSTR * ppwstrGlobalId);
	HRESULT(STDMETHODCALLTYPE * GetPartType) (IPart * This, PartType * pPartType);
	HRESULT(STDMETHODCALLTYPE * GetSubType) (IPart * This, GUID * pSubType);
	HRESULT(STDMETHODCALLTYPE * GetControlInterfaceCount) (IPart * This, UINT * pCount);
	HRESULT(STDMETHODCALLTYPE * GetControlInterface) (IPart * This, UINT nIndex, IControlInterface ** ppInterfaceDesc);
	HRESULT(STDMETHODCALLTYPE * EnumPartsIncoming) (IPart * This, IPartsList ** ppParts);
	HRESULT(STDMETHODCALLTYPE * EnumPartsOutgoing) (IPart * This, IPartsList ** ppParts);
	HRESULT(STDMETHODCALLTYPE * GetTopologyObject) (IPart * This, IDeviceTopology ** ppTopology);
	HRESULT(STDMETHODCALLTYPE * Activate) (IPart * This, DWORD dwClsContext, REFIID refiid, void **ppvObject);
	HRESULT(STDMETHODCALLTYPE * RegisterControlChangeCallback) (IPart * This, REFGUID riid, IControlChangeNotify * pNotify);
	HRESULT(STDMETHODCALLTYPE * UnregisterControlChangeCallback) (IPart * This, IControlChangeNotify * pNotify);
	END_INTERFACE
}  IPartVtbl;
interface IPart
{
	CONST_VTBL struct IPartVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPart_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPart_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPart_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPart_GetName(This,ppwstrName)( (This)->lpVtbl -> GetName(This,ppwstrName) )
#define IPart_GetLocalId(This,pnId)( (This)->lpVtbl -> GetLocalId(This,pnId) )
#define IPart_GetGlobalId(This,ppwstrGlobalId)( (This)->lpVtbl -> GetGlobalId(This,ppwstrGlobalId) )
#define IPart_GetPartType(This,pPartType)( (This)->lpVtbl -> GetPartType(This,pPartType) )
#define IPart_GetSubType(This,pSubType)( (This)->lpVtbl -> GetSubType(This,pSubType) )
#define IPart_GetControlInterfaceCount(This,pCount)( (This)->lpVtbl -> GetControlInterfaceCount(This,pCount) )
#define IPart_GetControlInterface(This,nIndex,ppInterfaceDesc)( (This)->lpVtbl -> GetControlInterface(This,nIndex,ppInterfaceDesc) )
#define IPart_EnumPartsIncoming(This,ppParts)( (This)->lpVtbl -> EnumPartsIncoming(This,ppParts) )
#define IPart_EnumPartsOutgoing(This,ppParts)( (This)->lpVtbl -> EnumPartsOutgoing(This,ppParts) )
#define IPart_GetTopologyObject(This,ppTopology)( (This)->lpVtbl -> GetTopologyObject(This,ppTopology) )
#define IPart_Activate(This,dwClsContext,refiid,ppvObject)( (This)->lpVtbl -> Activate(This,dwClsContext,refiid,ppvObject) )
#define IPart_RegisterControlChangeCallback(This,riid,pNotify)( (This)->lpVtbl -> RegisterControlChangeCallback(This,riid,pNotify) )
#define IPart_UnregisterControlChangeCallback(This,pNotify)( (This)->lpVtbl -> UnregisterControlChangeCallback(This,pNotify) )
#endif
#endif
#ifndef __IConnector_INTERFACE_DEFINED__
#define __IConnector_INTERFACE_DEFINED__
extern const IID IID_IConnector;
typedef struct IConnectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IConnector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IConnector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IConnector * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (IConnector * This, ConnectorType * pType);
	HRESULT(STDMETHODCALLTYPE * GetDataFlow) (IConnector * This, DataFlow * pFlow);
	HRESULT(STDMETHODCALLTYPE * ConnectTo) (IConnector * This, IConnector * pConnectTo);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IConnector * This);
	HRESULT(STDMETHODCALLTYPE * IsConnected) (IConnector * This, BOOL * pbConnected);
	HRESULT(STDMETHODCALLTYPE * GetConnectedTo) (IConnector * This, IConnector ** ppConTo);
	HRESULT(STDMETHODCALLTYPE * GetConnectorIdConnectedTo) (IConnector * This, LPWSTR * ppwstrConnectorId);
	HRESULT(STDMETHODCALLTYPE * GetDeviceIdConnectedTo) (IConnector * This, LPWSTR * ppwstrDeviceId);
	END_INTERFACE
}  IConnectorVtbl;
interface IConnector
{
	CONST_VTBL struct IConnectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConnector_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConnector_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IConnector_Release(This)( (This)->lpVtbl -> Release(This) )
#define IConnector_GetType(This,pType)( (This)->lpVtbl -> GetType(This,pType) )
#define IConnector_GetDataFlow(This,pFlow)( (This)->lpVtbl -> GetDataFlow(This,pFlow) )
#define IConnector_ConnectTo(This,pConnectTo)( (This)->lpVtbl -> ConnectTo(This,pConnectTo) )
#define IConnector_Disconnect(This)( (This)->lpVtbl -> Disconnect(This) )
#define IConnector_IsConnected(This,pbConnected)( (This)->lpVtbl -> IsConnected(This,pbConnected) )
#define IConnector_GetConnectedTo(This,ppConTo)( (This)->lpVtbl -> GetConnectedTo(This,ppConTo) )
#define IConnector_GetConnectorIdConnectedTo(This,ppwstrConnectorId)( (This)->lpVtbl -> GetConnectorIdConnectedTo(This,ppwstrConnectorId) )
#define IConnector_GetDeviceIdConnectedTo(This,ppwstrDeviceId)( (This)->lpVtbl -> GetDeviceIdConnectedTo(This,ppwstrDeviceId) )
#endif
#endif
#ifndef __ISubunit_INTERFACE_DEFINED__
#define __ISubunit_INTERFACE_DEFINED__
extern const IID IID_ISubunit;
typedef struct ISubunitVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISubunit * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISubunit * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISubunit * This);
	END_INTERFACE
}  ISubunitVtbl;
interface ISubunit
{
	CONST_VTBL struct ISubunitVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISubunit_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISubunit_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISubunit_Release(This)( (This)->lpVtbl -> Release(This) )
#endif
#endif
#ifndef __IControlInterface_INTERFACE_DEFINED__
#define __IControlInterface_INTERFACE_DEFINED__
extern const IID IID_IControlInterface;
typedef struct IControlInterfaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IControlInterface * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IControlInterface * This);
	ULONG(STDMETHODCALLTYPE * Release) (IControlInterface * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (IControlInterface * This, LPWSTR * ppwstrName);
	HRESULT(STDMETHODCALLTYPE * GetIID) (IControlInterface * This, GUID * pIID);
	END_INTERFACE
}  IControlInterfaceVtbl;
interface IControlInterface
{
	CONST_VTBL struct IControlInterfaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IControlInterface_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IControlInterface_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IControlInterface_Release(This)( (This)->lpVtbl -> Release(This) )
#define IControlInterface_GetName(This,ppwstrName)( (This)->lpVtbl -> GetName(This,ppwstrName) )
#define IControlInterface_GetIID(This,pIID)( (This)->lpVtbl -> GetIID(This,pIID) )
#endif
#endif
#ifndef __IControlChangeNotify_INTERFACE_DEFINED__
#define __IControlChangeNotify_INTERFACE_DEFINED__
extern const IID IID_IControlChangeNotify;
typedef struct IControlChangeNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IControlChangeNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IControlChangeNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IControlChangeNotify * This);
	HRESULT(STDMETHODCALLTYPE * OnNotify) (IControlChangeNotify * This, DWORD dwSenderProcessId, LPCGUID pguidEventContext);
	END_INTERFACE
}  IControlChangeNotifyVtbl;
interface IControlChangeNotify
{
	CONST_VTBL struct IControlChangeNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IControlChangeNotify_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IControlChangeNotify_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IControlChangeNotify_Release(This)( (This)->lpVtbl -> Release(This) )
#define IControlChangeNotify_OnNotify(This,dwSenderProcessId,pguidEventContext)( (This)->lpVtbl -> OnNotify(This,dwSenderProcessId,pguidEventContext) )
#endif
#endif
#ifndef __IDeviceTopology_INTERFACE_DEFINED__
#define __IDeviceTopology_INTERFACE_DEFINED__
extern const IID IID_IDeviceTopology;
typedef struct IDeviceTopologyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDeviceTopology * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDeviceTopology * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDeviceTopology * This);
	HRESULT(STDMETHODCALLTYPE * GetConnectorCount) (IDeviceTopology * This, UINT * pCount);
	HRESULT(STDMETHODCALLTYPE * GetConnector) (IDeviceTopology * This, UINT nIndex, IConnector ** ppConnector);
	HRESULT(STDMETHODCALLTYPE * GetSubunitCount) (IDeviceTopology * This, UINT * pCount);
	HRESULT(STDMETHODCALLTYPE * GetSubunit) (IDeviceTopology * This, UINT nIndex, ISubunit ** ppSubunit);
	HRESULT(STDMETHODCALLTYPE * GetPartById) (IDeviceTopology * This, UINT nId, IPart ** ppPart);
	HRESULT(STDMETHODCALLTYPE * GetDeviceId) (IDeviceTopology * This, LPWSTR * ppwstrDeviceId);
	HRESULT(STDMETHODCALLTYPE * GetSignalPath) (IDeviceTopology * This, IPart * pIPartFrom, IPart * pIPartTo, BOOL bRejectMixedPaths, IPartsList ** ppParts);
	END_INTERFACE
}  IDeviceTopologyVtbl;
interface IDeviceTopology
{
	CONST_VTBL struct IDeviceTopologyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDeviceTopology_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDeviceTopology_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDeviceTopology_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDeviceTopology_GetConnectorCount(This,pCount)( (This)->lpVtbl -> GetConnectorCount(This,pCount) )
#define IDeviceTopology_GetConnector(This,nIndex,ppConnector)( (This)->lpVtbl -> GetConnector(This,nIndex,ppConnector) )
#define IDeviceTopology_GetSubunitCount(This,pCount)( (This)->lpVtbl -> GetSubunitCount(This,pCount) )
#define IDeviceTopology_GetSubunit(This,nIndex,ppSubunit)( (This)->lpVtbl -> GetSubunit(This,nIndex,ppSubunit) )
#define IDeviceTopology_GetPartById(This,nId,ppPart)( (This)->lpVtbl -> GetPartById(This,nId,ppPart) )
#define IDeviceTopology_GetDeviceId(This,ppwstrDeviceId)( (This)->lpVtbl -> GetDeviceId(This,ppwstrDeviceId) )
#define IDeviceTopology_GetSignalPath(This,pIPartFrom,pIPartTo,bRejectMixedPaths,ppParts)( (This)->lpVtbl -> GetSignalPath(This,pIPartFrom,pIPartTo,bRejectMixedPaths,ppParts) )
#endif
#endif
#ifndef __DevTopologyLib_LIBRARY_DEFINED__
#define __DevTopologyLib_LIBRARY_DEFINED__
extern const IID LIBID_DevTopologyLib;
extern const CLSID CLSID_DeviceTopology;
#endif
#endif
