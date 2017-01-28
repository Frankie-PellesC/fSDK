/*+@@file@@----------------------------------------------------------------*//*!
 \file		tuner.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 19:44:37 2016
 \date		Modified on Sun Jun 19 19:44:37 2016
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
#ifndef __tuner_h__
#define __tuner_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITuningSpaces_FWD_DEFINED__
#define __ITuningSpaces_FWD_DEFINED__
typedef interface ITuningSpaces ITuningSpaces;
#endif
#ifndef __ITuningSpaceContainer_FWD_DEFINED__
#define __ITuningSpaceContainer_FWD_DEFINED__
typedef interface ITuningSpaceContainer ITuningSpaceContainer;
#endif
#ifndef __ITuningSpace_FWD_DEFINED__
#define __ITuningSpace_FWD_DEFINED__
typedef interface ITuningSpace ITuningSpace;
#endif
#ifndef __IEnumTuningSpaces_FWD_DEFINED__
#define __IEnumTuningSpaces_FWD_DEFINED__
typedef interface IEnumTuningSpaces IEnumTuningSpaces;
#endif
#ifndef __IDVBTuningSpace_FWD_DEFINED__
#define __IDVBTuningSpace_FWD_DEFINED__
typedef interface IDVBTuningSpace IDVBTuningSpace;
#endif
#ifndef __IDVBTuningSpace2_FWD_DEFINED__
#define __IDVBTuningSpace2_FWD_DEFINED__
typedef interface IDVBTuningSpace2 IDVBTuningSpace2;
#endif
#ifndef __IDVBSTuningSpace_FWD_DEFINED__
#define __IDVBSTuningSpace_FWD_DEFINED__
typedef interface IDVBSTuningSpace IDVBSTuningSpace;
#endif
#ifndef __IAuxInTuningSpace_FWD_DEFINED__
#define __IAuxInTuningSpace_FWD_DEFINED__
typedef interface IAuxInTuningSpace IAuxInTuningSpace;
#endif
#ifndef __IAuxInTuningSpace2_FWD_DEFINED__
#define __IAuxInTuningSpace2_FWD_DEFINED__
typedef interface IAuxInTuningSpace2 IAuxInTuningSpace2;
#endif
#ifndef __IAnalogTVTuningSpace_FWD_DEFINED__
#define __IAnalogTVTuningSpace_FWD_DEFINED__
typedef interface IAnalogTVTuningSpace IAnalogTVTuningSpace;
#endif
#ifndef __IATSCTuningSpace_FWD_DEFINED__
#define __IATSCTuningSpace_FWD_DEFINED__
typedef interface IATSCTuningSpace IATSCTuningSpace;
#endif
#ifndef __IDigitalCableTuningSpace_FWD_DEFINED__
#define __IDigitalCableTuningSpace_FWD_DEFINED__
typedef interface IDigitalCableTuningSpace IDigitalCableTuningSpace;
#endif
#ifndef __IAnalogRadioTuningSpace_FWD_DEFINED__
#define __IAnalogRadioTuningSpace_FWD_DEFINED__
typedef interface IAnalogRadioTuningSpace IAnalogRadioTuningSpace;
#endif
#ifndef __IAnalogRadioTuningSpace2_FWD_DEFINED__
#define __IAnalogRadioTuningSpace2_FWD_DEFINED__
typedef interface IAnalogRadioTuningSpace2 IAnalogRadioTuningSpace2;
#endif
#ifndef __ITuneRequest_FWD_DEFINED__
#define __ITuneRequest_FWD_DEFINED__
typedef interface ITuneRequest ITuneRequest;
#endif
#ifndef __IChannelIDTuneRequest_FWD_DEFINED__
#define __IChannelIDTuneRequest_FWD_DEFINED__
typedef interface IChannelIDTuneRequest IChannelIDTuneRequest;
#endif
#ifndef __IChannelTuneRequest_FWD_DEFINED__
#define __IChannelTuneRequest_FWD_DEFINED__
typedef interface IChannelTuneRequest IChannelTuneRequest;
#endif
#ifndef __IATSCChannelTuneRequest_FWD_DEFINED__
#define __IATSCChannelTuneRequest_FWD_DEFINED__
typedef interface IATSCChannelTuneRequest IATSCChannelTuneRequest;
#endif
#ifndef __IDigitalCableTuneRequest_FWD_DEFINED__
#define __IDigitalCableTuneRequest_FWD_DEFINED__
typedef interface IDigitalCableTuneRequest IDigitalCableTuneRequest;
#endif
#ifndef __IDVBTuneRequest_FWD_DEFINED__
#define __IDVBTuneRequest_FWD_DEFINED__
typedef interface IDVBTuneRequest IDVBTuneRequest;
#endif
#ifndef __IMPEG2TuneRequest_FWD_DEFINED__
#define __IMPEG2TuneRequest_FWD_DEFINED__
typedef interface IMPEG2TuneRequest IMPEG2TuneRequest;
#endif
#ifndef __IMPEG2TuneRequestFactory_FWD_DEFINED__
#define __IMPEG2TuneRequestFactory_FWD_DEFINED__
typedef interface IMPEG2TuneRequestFactory IMPEG2TuneRequestFactory;
#endif
#ifndef __IMPEG2TuneRequestSupport_FWD_DEFINED__
#define __IMPEG2TuneRequestSupport_FWD_DEFINED__
typedef interface IMPEG2TuneRequestSupport IMPEG2TuneRequestSupport;
#endif
#ifndef __ITunerCap_FWD_DEFINED__
#define __ITunerCap_FWD_DEFINED__
typedef interface ITunerCap ITunerCap;
#endif
#ifndef __ITunerCapEx_FWD_DEFINED__
#define __ITunerCapEx_FWD_DEFINED__
typedef interface ITunerCapEx ITunerCapEx;
#endif
#ifndef __ITuner_FWD_DEFINED__
#define __ITuner_FWD_DEFINED__
typedef interface ITuner ITuner;
#endif
#ifndef __IScanningTuner_FWD_DEFINED__
#define __IScanningTuner_FWD_DEFINED__
typedef interface IScanningTuner IScanningTuner;
#endif
#ifndef __IScanningTunerEx_FWD_DEFINED__
#define __IScanningTunerEx_FWD_DEFINED__
typedef interface IScanningTunerEx IScanningTunerEx;
#endif
#ifndef __IComponentType_FWD_DEFINED__
#define __IComponentType_FWD_DEFINED__
typedef interface IComponentType IComponentType;
#endif
#ifndef __ILanguageComponentType_FWD_DEFINED__
#define __ILanguageComponentType_FWD_DEFINED__
typedef interface ILanguageComponentType ILanguageComponentType;
#endif
#ifndef __IMPEG2ComponentType_FWD_DEFINED__
#define __IMPEG2ComponentType_FWD_DEFINED__
typedef interface IMPEG2ComponentType IMPEG2ComponentType;
#endif
#ifndef __IATSCComponentType_FWD_DEFINED__
#define __IATSCComponentType_FWD_DEFINED__
typedef interface IATSCComponentType IATSCComponentType;
#endif
#ifndef __IEnumComponentTypes_FWD_DEFINED__
#define __IEnumComponentTypes_FWD_DEFINED__
typedef interface IEnumComponentTypes IEnumComponentTypes;
#endif
#ifndef __IComponentTypes_FWD_DEFINED__
#define __IComponentTypes_FWD_DEFINED__
typedef interface IComponentTypes IComponentTypes;
#endif
#ifndef __IComponent_FWD_DEFINED__
#define __IComponent_FWD_DEFINED__
typedef interface IComponent IComponent;
#endif
#ifndef __IAnalogAudioComponentType_FWD_DEFINED__
#define __IAnalogAudioComponentType_FWD_DEFINED__
typedef interface IAnalogAudioComponentType IAnalogAudioComponentType;
#endif
#ifndef __IMPEG2Component_FWD_DEFINED__
#define __IMPEG2Component_FWD_DEFINED__
typedef interface IMPEG2Component IMPEG2Component;
#endif
#ifndef __IEnumComponents_FWD_DEFINED__
#define __IEnumComponents_FWD_DEFINED__
typedef interface IEnumComponents IEnumComponents;
#endif
#ifndef __IComponents_FWD_DEFINED__
#define __IComponents_FWD_DEFINED__
typedef interface IComponents IComponents;
#endif
#ifndef __IComponentsOld_FWD_DEFINED__
#define __IComponentsOld_FWD_DEFINED__
typedef interface IComponentsOld IComponentsOld;
#endif
#ifndef __ILocator_FWD_DEFINED__
#define __ILocator_FWD_DEFINED__
typedef interface ILocator ILocator;
#endif
#ifndef __IAnalogLocator_FWD_DEFINED__
#define __IAnalogLocator_FWD_DEFINED__
typedef interface IAnalogLocator IAnalogLocator;
#endif
#ifndef __IDigitalLocator_FWD_DEFINED__
#define __IDigitalLocator_FWD_DEFINED__
typedef interface IDigitalLocator IDigitalLocator;
#endif
#ifndef __IATSCLocator_FWD_DEFINED__
#define __IATSCLocator_FWD_DEFINED__
typedef interface IATSCLocator IATSCLocator;
#endif
#ifndef __IATSCLocator2_FWD_DEFINED__
#define __IATSCLocator2_FWD_DEFINED__
typedef interface IATSCLocator2 IATSCLocator2;
#endif
#ifndef __IDigitalCableLocator_FWD_DEFINED__
#define __IDigitalCableLocator_FWD_DEFINED__
typedef interface IDigitalCableLocator IDigitalCableLocator;
#endif
#ifndef __IDVBTLocator_FWD_DEFINED__
#define __IDVBTLocator_FWD_DEFINED__
typedef interface IDVBTLocator IDVBTLocator;
#endif
#ifndef __IDVBTLocator2_FWD_DEFINED__
#define __IDVBTLocator2_FWD_DEFINED__
typedef interface IDVBTLocator2 IDVBTLocator2;
#endif
#ifndef __IDVBSLocator_FWD_DEFINED__
#define __IDVBSLocator_FWD_DEFINED__
typedef interface IDVBSLocator IDVBSLocator;
#endif
#ifndef __IDVBSLocator2_FWD_DEFINED__
#define __IDVBSLocator2_FWD_DEFINED__
typedef interface IDVBSLocator2 IDVBSLocator2;
#endif
#ifndef __IDVBCLocator_FWD_DEFINED__
#define __IDVBCLocator_FWD_DEFINED__
typedef interface IDVBCLocator IDVBCLocator;
#endif
#ifndef __IISDBSLocator_FWD_DEFINED__
#define __IISDBSLocator_FWD_DEFINED__
typedef interface IISDBSLocator IISDBSLocator;
#endif
#ifndef __IESEvent_FWD_DEFINED__
#define __IESEvent_FWD_DEFINED__
typedef interface IESEvent IESEvent;
#endif
#ifndef __IESOpenMmiEvent_FWD_DEFINED__
#define __IESOpenMmiEvent_FWD_DEFINED__
typedef interface IESOpenMmiEvent IESOpenMmiEvent;
#endif
#ifndef __IESCloseMmiEvent_FWD_DEFINED__
#define __IESCloseMmiEvent_FWD_DEFINED__
typedef interface IESCloseMmiEvent IESCloseMmiEvent;
#endif
#ifndef __IESValueUpdatedEvent_FWD_DEFINED__
#define __IESValueUpdatedEvent_FWD_DEFINED__
typedef interface IESValueUpdatedEvent IESValueUpdatedEvent;
#endif
#ifndef __IESRequestTunerEvent_FWD_DEFINED__
#define __IESRequestTunerEvent_FWD_DEFINED__
typedef interface IESRequestTunerEvent IESRequestTunerEvent;
#endif
#ifndef __IESIsdbCasResponseEvent_FWD_DEFINED__
#define __IESIsdbCasResponseEvent_FWD_DEFINED__
typedef interface IESIsdbCasResponseEvent IESIsdbCasResponseEvent;
#endif
#ifndef __IGpnvsCommonBase_FWD_DEFINED__
#define __IGpnvsCommonBase_FWD_DEFINED__
typedef interface IGpnvsCommonBase IGpnvsCommonBase;
#endif
#ifndef __IESEventFactory_FWD_DEFINED__
#define __IESEventFactory_FWD_DEFINED__
typedef interface IESEventFactory IESEventFactory;
#endif
#ifndef __IESLicenseRenewalResultEvent_FWD_DEFINED__
#define __IESLicenseRenewalResultEvent_FWD_DEFINED__
typedef interface IESLicenseRenewalResultEvent IESLicenseRenewalResultEvent;
#endif
#ifndef __IESFileExpiryDateEvent_FWD_DEFINED__
#define __IESFileExpiryDateEvent_FWD_DEFINED__
typedef interface IESFileExpiryDateEvent IESFileExpiryDateEvent;
#endif
#ifndef __IESEvents_FWD_DEFINED__
#define __IESEvents_FWD_DEFINED__
typedef interface IESEvents IESEvents;
#endif
#ifndef __IESEventService_FWD_DEFINED__
#define __IESEventService_FWD_DEFINED__
typedef interface IESEventService IESEventService;
#endif
#ifndef __IESEventServiceConfiguration_FWD_DEFINED__
#define __IESEventServiceConfiguration_FWD_DEFINED__
typedef interface IESEventServiceConfiguration IESEventServiceConfiguration;
#endif
#ifndef __IBroadcastEvent_FWD_DEFINED__
#define __IBroadcastEvent_FWD_DEFINED__
typedef interface IBroadcastEvent IBroadcastEvent;
#endif
#ifndef __IBroadcastEventEx_FWD_DEFINED__
#define __IBroadcastEventEx_FWD_DEFINED__
typedef interface IBroadcastEventEx IBroadcastEventEx;
#endif
#ifndef __IRegisterTuner_FWD_DEFINED__
#define __IRegisterTuner_FWD_DEFINED__
typedef interface IRegisterTuner IRegisterTuner;
#endif
#ifndef __IBDAComparable_FWD_DEFINED__
#define __IBDAComparable_FWD_DEFINED__
typedef interface IBDAComparable IBDAComparable;
#endif
#ifndef __IPersistTuneXml_FWD_DEFINED__
#define __IPersistTuneXml_FWD_DEFINED__
typedef interface IPersistTuneXml IPersistTuneXml;
#endif
#ifndef __IPersistTuneXmlUtility_FWD_DEFINED__
#define __IPersistTuneXmlUtility_FWD_DEFINED__
typedef interface IPersistTuneXmlUtility IPersistTuneXmlUtility;
#endif
#ifndef __IPersistTuneXmlUtility2_FWD_DEFINED__
#define __IPersistTuneXmlUtility2_FWD_DEFINED__
typedef interface IPersistTuneXmlUtility2 IPersistTuneXmlUtility2;
#endif
#ifndef __IBDACreateTuneRequestEx_FWD_DEFINED__
#define __IBDACreateTuneRequestEx_FWD_DEFINED__
typedef interface IBDACreateTuneRequestEx IBDACreateTuneRequestEx;
#endif
#ifndef __SystemTuningSpaces_FWD_DEFINED__
#define __SystemTuningSpaces_FWD_DEFINED__
typedef struct SystemTuningSpaces SystemTuningSpaces;
#endif
#ifndef __TuningSpace_FWD_DEFINED__
#define __TuningSpace_FWD_DEFINED__
typedef struct TuningSpace TuningSpace;
#endif
#ifndef __ChannelIDTuningSpace_FWD_DEFINED__
#define __ChannelIDTuningSpace_FWD_DEFINED__
typedef struct ChannelIDTuningSpace ChannelIDTuningSpace;
#endif
#ifndef __ATSCTuningSpace_FWD_DEFINED__
#define __ATSCTuningSpace_FWD_DEFINED__
typedef struct ATSCTuningSpace ATSCTuningSpace;
#endif
#ifndef __DigitalCableTuningSpace_FWD_DEFINED__
#define __DigitalCableTuningSpace_FWD_DEFINED__
typedef struct DigitalCableTuningSpace DigitalCableTuningSpace;
#endif
#ifndef __AnalogRadioTuningSpace_FWD_DEFINED__
#define __AnalogRadioTuningSpace_FWD_DEFINED__
typedef struct AnalogRadioTuningSpace AnalogRadioTuningSpace;
#endif
#ifndef __AuxInTuningSpace_FWD_DEFINED__
#define __AuxInTuningSpace_FWD_DEFINED__
typedef struct AuxInTuningSpace AuxInTuningSpace;
#endif
#ifndef __AnalogTVTuningSpace_FWD_DEFINED__
#define __AnalogTVTuningSpace_FWD_DEFINED__
typedef struct AnalogTVTuningSpace AnalogTVTuningSpace;
#endif
#ifndef __DVBTuningSpace_FWD_DEFINED__
#define __DVBTuningSpace_FWD_DEFINED__
typedef struct DVBTuningSpace DVBTuningSpace;
#endif
#ifndef __DVBSTuningSpace_FWD_DEFINED__
#define __DVBSTuningSpace_FWD_DEFINED__
typedef struct DVBSTuningSpace DVBSTuningSpace;
#endif
#ifndef __ComponentTypes_FWD_DEFINED__
#define __ComponentTypes_FWD_DEFINED__
typedef struct ComponentTypes ComponentTypes;
#endif
#ifndef __ComponentType_FWD_DEFINED__
#define __ComponentType_FWD_DEFINED__
typedef struct ComponentType ComponentType;
#endif
#ifndef __LanguageComponentType_FWD_DEFINED__
#define __LanguageComponentType_FWD_DEFINED__
typedef struct LanguageComponentType LanguageComponentType;
#endif
#ifndef __MPEG2ComponentType_FWD_DEFINED__
#define __MPEG2ComponentType_FWD_DEFINED__
typedef struct MPEG2ComponentType MPEG2ComponentType;
#endif
#ifndef __ATSCComponentType_FWD_DEFINED__
#define __ATSCComponentType_FWD_DEFINED__
typedef struct ATSCComponentType ATSCComponentType;
#endif
#ifndef __Components_FWD_DEFINED__
#define __Components_FWD_DEFINED__
typedef struct Components Components;
#endif
#ifndef __Component_FWD_DEFINED__
#define __Component_FWD_DEFINED__
typedef struct Component Component;
#endif
#ifndef __MPEG2Component_FWD_DEFINED__
#define __MPEG2Component_FWD_DEFINED__
typedef struct MPEG2Component MPEG2Component;
#endif
#ifndef __AnalogAudioComponentType_FWD_DEFINED__
#define __AnalogAudioComponentType_FWD_DEFINED__
typedef struct AnalogAudioComponentType AnalogAudioComponentType;
#endif
#ifndef __TuneRequest_FWD_DEFINED__
#define __TuneRequest_FWD_DEFINED__
typedef struct TuneRequest TuneRequest;
#endif
#ifndef __ChannelIDTuneRequest_FWD_DEFINED__
#define __ChannelIDTuneRequest_FWD_DEFINED__
typedef struct ChannelIDTuneRequest ChannelIDTuneRequest;
#endif
#ifndef __ChannelTuneRequest_FWD_DEFINED__
#define __ChannelTuneRequest_FWD_DEFINED__
typedef struct ChannelTuneRequest ChannelTuneRequest;
#endif
#ifndef __ATSCChannelTuneRequest_FWD_DEFINED__
#define __ATSCChannelTuneRequest_FWD_DEFINED__
typedef struct ATSCChannelTuneRequest ATSCChannelTuneRequest;
#endif
#ifndef __DigitalCableTuneRequest_FWD_DEFINED__
#define __DigitalCableTuneRequest_FWD_DEFINED__
typedef struct DigitalCableTuneRequest DigitalCableTuneRequest;
#endif
#ifndef __MPEG2TuneRequest_FWD_DEFINED__
#define __MPEG2TuneRequest_FWD_DEFINED__
typedef struct MPEG2TuneRequest MPEG2TuneRequest;
#endif
#ifndef __MPEG2TuneRequestFactory_FWD_DEFINED__
#define __MPEG2TuneRequestFactory_FWD_DEFINED__
typedef struct MPEG2TuneRequestFactory MPEG2TuneRequestFactory;
#endif
#ifndef __Locator_FWD_DEFINED__
#define __Locator_FWD_DEFINED__
typedef struct Locator Locator;
#endif
#ifndef __DigitalLocator_FWD_DEFINED__
#define __DigitalLocator_FWD_DEFINED__
typedef struct DigitalLocator DigitalLocator;
#endif
#ifndef __AnalogLocator_FWD_DEFINED__
#define __AnalogLocator_FWD_DEFINED__
typedef struct AnalogLocator AnalogLocator;
#endif
#ifndef __ATSCLocator_FWD_DEFINED__
#define __ATSCLocator_FWD_DEFINED__
typedef struct ATSCLocator ATSCLocator;
#endif
#ifndef __DigitalCableLocator_FWD_DEFINED__
#define __DigitalCableLocator_FWD_DEFINED__
typedef struct DigitalCableLocator DigitalCableLocator;
#endif
#ifndef __DVBTLocator_FWD_DEFINED__
#define __DVBTLocator_FWD_DEFINED__
typedef struct DVBTLocator DVBTLocator;
#endif
#ifndef __DVBTLocator2_FWD_DEFINED__
#define __DVBTLocator2_FWD_DEFINED__
typedef struct DVBTLocator2 DVBTLocator2;
#endif
#ifndef __DVBSLocator_FWD_DEFINED__
#define __DVBSLocator_FWD_DEFINED__
typedef struct DVBSLocator DVBSLocator;
#endif
#ifndef __DVBCLocator_FWD_DEFINED__
#define __DVBCLocator_FWD_DEFINED__
typedef struct DVBCLocator DVBCLocator;
#endif
#ifndef __ISDBSLocator_FWD_DEFINED__
#define __ISDBSLocator_FWD_DEFINED__
typedef struct ISDBSLocator ISDBSLocator;
#endif
#ifndef __DVBTuneRequest_FWD_DEFINED__
#define __DVBTuneRequest_FWD_DEFINED__
typedef struct DVBTuneRequest DVBTuneRequest;
#endif
#ifndef __CreatePropBagOnRegKey_FWD_DEFINED__
#define __CreatePropBagOnRegKey_FWD_DEFINED__
typedef struct CreatePropBagOnRegKey CreatePropBagOnRegKey;
#endif
#ifndef __BroadcastEventService_FWD_DEFINED__
#define __BroadcastEventService_FWD_DEFINED__
typedef struct BroadcastEventService BroadcastEventService;
#endif
#ifndef __TunerMarshaler_FWD_DEFINED__
#define __TunerMarshaler_FWD_DEFINED__
typedef struct TunerMarshaler TunerMarshaler;
#endif
#ifndef __PersistTuneXmlUtility_FWD_DEFINED__
#define __PersistTuneXmlUtility_FWD_DEFINED__
typedef struct PersistTuneXmlUtility PersistTuneXmlUtility;
#endif
#ifndef __ESEventService_FWD_DEFINED__
#define __ESEventService_FWD_DEFINED__
typedef struct ESEventService ESEventService;
#endif
#ifndef __ESEventFactory_FWD_DEFINED__
#define __ESEventFactory_FWD_DEFINED__
typedef struct ESEventFactory ESEventFactory;
#endif
#include <oaidl.h>
#include <comcat.h>
#include <strmif.h>
#include <bdaiface.h>
#include <regbag.h>
#pragma once
enum __MIDL___MIDL_itf_tuner_0000_0000_0001 { DISPID_TUNER_TS_UNIQUENAME = 1,
	DISPID_TUNER_TS_FRIENDLYNAME = 2,
	DISPID_TUNER_TS_CLSID = 3,
	DISPID_TUNER_TS_NETWORKTYPE = 4,
	DISPID_TUNER_TS__NETWORKTYPE = 5,
	DISPID_TUNER_TS_CREATETUNEREQUEST = 6,
	DISPID_TUNER_TS_ENUMCATEGORYGUIDS = 7,
	DISPID_TUNER_TS_ENUMDEVICEMONIKERS = 8,
	DISPID_TUNER_TS_DEFAULTPREFERREDCOMPONENTTYPES = 9,
	DISPID_TUNER_TS_FREQMAP = 10,
	DISPID_TUNER_TS_DEFLOCATOR = 11,
	DISPID_TUNER_TS_CLONE = 12,
	DISPID_TUNER_TR_TUNINGSPACE = 1,
	DISPID_TUNER_TR_COMPONENTS = 2,
	DISPID_TUNER_TR_CLONE = 3,
	DISPID_TUNER_TR_LOCATOR = 4,
	DISPID_TUNER_CT_CATEGORY = 1,
	DISPID_TUNER_CT_MEDIAMAJORTYPE = 2,
	DISPID_TUNER_CT__MEDIAMAJORTYPE = 3,
	DISPID_TUNER_CT_MEDIASUBTYPE = 4,
	DISPID_TUNER_CT__MEDIASUBTYPE = 5,
	DISPID_TUNER_CT_MEDIAFORMATTYPE = 6,
	DISPID_TUNER_CT__MEDIAFORMATTYPE = 7,
	DISPID_TUNER_CT_MEDIATYPE = 8,
	DISPID_TUNER_CT_CLONE = 9,
	DISPID_TUNER_LCT_LANGID = 100,
	DISPID_TUNER_MP2CT_TYPE = 200,
	DISPID_TUNER_ATSCCT_FLAGS = 300,
	DISPID_TUNER_L_CARRFREQ = 1,
	DISPID_TUNER_L_INNERFECMETHOD = 2,
	DISPID_TUNER_L_INNERFECRATE = 3,
	DISPID_TUNER_L_OUTERFECMETHOD = 4,
	DISPID_TUNER_L_OUTERFECRATE = 5,
	DISPID_TUNER_L_MOD = 6,
	DISPID_TUNER_L_SYMRATE = 7,
	DISPID_TUNER_L_CLONE = 8,
	DISPID_TUNER_L_ATSC_PHYS_CHANNEL = 201,
	DISPID_TUNER_L_ATSC_TSID = 202,
	DISPID_TUNER_L_ATSC_MP2_PROGNO = 203,
	DISPID_TUNER_L_DVBT_BANDWIDTH = 301,
	DISPID_TUNER_L_DVBT_LPINNERFECMETHOD = 302,
	DISPID_TUNER_L_DVBT_LPINNERFECRATE = 303,
	DISPID_TUNER_L_DVBT_GUARDINTERVAL = 304,
	DISPID_TUNER_L_DVBT_HALPHA = 305,
	DISPID_TUNER_L_DVBT_TRANSMISSIONMODE = 306,
	DISPID_TUNER_L_DVBT_INUSE = 307,
	DISPID_TUNER_L_DVBT2_PHYSICALLAYERPIPEID = 351,
	DISPID_TUNER_L_DVBS_POLARISATION = 401,
	DISPID_TUNER_L_DVBS_WEST = 402,
	DISPID_TUNER_L_DVBS_ORBITAL = 403,
	DISPID_TUNER_L_DVBS_AZIMUTH = 404,
	DISPID_TUNER_L_DVBS_ELEVATION = 405,
	DISPID_TUNER_L_DVBS2_DISEQ_LNB_SOURCE = 406,
	DISPID_TUNER_TS_DVBS2_LOW_OSC_FREQ_OVERRIDE = 407,
	DISPID_TUNER_TS_DVBS2_HI_OSC_FREQ_OVERRIDE = 408,
	DISPID_TUNER_TS_DVBS2_LNB_SWITCH_FREQ_OVERRIDE = 409,
	DISPID_TUNER_TS_DVBS2_SPECTRAL_INVERSION_OVERRIDE = 410,
	DISPID_TUNER_L_DVBS2_ROLLOFF = 411,
	DISPID_TUNER_L_DVBS2_PILOT = 412,
	DISPID_TUNER_L_ANALOG_STANDARD = 601,
	DISPID_TUNER_L_DTV_O_MAJOR_CHANNEL = 701,
	DISPID_TUNER_C_TYPE = 1,
	DISPID_TUNER_C_STATUS = 2,
	DISPID_TUNER_C_LANGID = 3,
	DISPID_TUNER_C_DESCRIPTION = 4,
	DISPID_TUNER_C_CLONE = 5,
	DISPID_TUNER_C_MP2_PID = 101,
	DISPID_TUNER_C_MP2_PCRPID = 102,
	DISPID_TUNER_C_MP2_PROGNO = 103,
	DISPID_TUNER_C_ANALOG_AUDIO = 201,
	DISPID_TUNER_TS_DVB_SYSTEMTYPE = 101,
	DISPID_TUNER_TS_DVB2_NETWORK_ID = 102,
	DISPID_TUNER_TS_DVBS_LOW_OSC_FREQ = 1001,
	DISPID_TUNER_TS_DVBS_HI_OSC_FREQ = 1002,
	DISPID_TUNER_TS_DVBS_LNB_SWITCH_FREQ = 1003,
	DISPID_TUNER_TS_DVBS_INPUT_RANGE = 1004,
	DISPID_TUNER_TS_DVBS_SPECTRAL_INVERSION = 1005,
	DISPID_TUNER_TS_AR_MINFREQUENCY = 101,
	DISPID_TUNER_TS_AR_MAXFREQUENCY = 102,
	DISPID_TUNER_TS_AR_STEP = 103,
	DISPID_TUNER_TS_AR_COUNTRYCODE = 104,
	DISPID_TUNER_TS_AUX_COUNTRYCODE = 101,
	DISPID_TUNER_TS_ATV_MINCHANNEL = 101,
	DISPID_TUNER_TS_ATV_MAXCHANNEL = 102,
	DISPID_TUNER_TS_ATV_INPUTTYPE = 103,
	DISPID_TUNER_TS_ATV_COUNTRYCODE = 104,
	DISPID_TUNER_TS_ATSC_MINMINORCHANNEL = 201,
	DISPID_TUNER_TS_ATSC_MAXMINORCHANNEL = 202,
	DISPID_TUNER_TS_ATSC_MINPHYSCHANNEL = 203,
	DISPID_TUNER_TS_ATSC_MAXPHYSCHANNEL = 204,
	DISPID_TUNER_TS_DC_MINMAJORCHANNEL = 301,
	DISPID_TUNER_TS_DC_MAXMAJORCHANNEL = 302,
	DISPID_TUNER_TS_DC_MINSOURCEID = 303,
	DISPID_TUNER_TS_DC_MAXSOURCEID = 304,
	DISPID_CHTUNER_ATVAC_CHANNEL = 101,
	DISPID_CHTUNER_ATVDC_SYSTEM = 101,
	DISPID_CHTUNER_ATVDC_CONTENT = 102,
	DISPID_CHTUNER_CIDTR_CHANNELID = 101,
	DISPID_CHTUNER_CTR_CHANNEL = 101,
	DISPID_CHTUNER_ACTR_MINOR_CHANNEL = 201,
	DISPID_CHTUNER_DCTR_MAJOR_CHANNEL = 301,
	DISPID_CHTUNER_DCTR_SRCID = 302,
	DISPID_DVBTUNER_DVBC_ATTRIBUTESVALID = 101,
	DISPID_DVBTUNER_DVBC_PID = 102,
	DISPID_DVBTUNER_DVBC_TAG = 103,
	DISPID_DVBTUNER_DVBC_COMPONENTTYPE = 104,
	DISPID_DVBTUNER_ONID = 101,
	DISPID_DVBTUNER_TSID = 102,
	DISPID_DVBTUNER_SID = 103,
	DISPID_MP2TUNER_TSID = 101,
	DISPID_MP2TUNER_PROGNO = 102,
	DISPID_MP2TUNERFACTORY_CREATETUNEREQUEST = 1
};
extern RPC_IF_HANDLE __MIDL_itf_tuner_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tuner_0000_0000_v0_0_s_ifspec;
#ifndef __ITuningSpaces_INTERFACE_DEFINED__
#define __ITuningSpaces_INTERFACE_DEFINED__
extern const IID IID_ITuningSpaces;
typedef struct ITuningSpacesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITuningSpaces * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITuningSpaces * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITuningSpaces * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITuningSpaces * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITuningSpaces * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITuningSpaces * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITuningSpaces * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ITuningSpaces * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ITuningSpaces * This, IEnumVARIANT ** NewEnum);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ITuningSpaces * This, VARIANT varIndex, ITuningSpace ** TuningSpace);
	HRESULT(STDMETHODCALLTYPE * get_EnumTuningSpaces) (ITuningSpaces * This, IEnumTuningSpaces ** NewEnum);
	END_INTERFACE
} ITuningSpacesVtbl;
interface ITuningSpaces
{
	CONST_VTBL struct ITuningSpacesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITuningSpaces_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITuningSpaces_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITuningSpaces_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITuningSpaces_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITuningSpaces_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITuningSpaces_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITuningSpaces_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITuningSpaces_get_Count(This,Count)    ( (This)->lpVtbl -> get_Count(This,Count) )
#define ITuningSpaces_get__NewEnum(This,NewEnum)    ( (This)->lpVtbl -> get__NewEnum(This,NewEnum) )
#define ITuningSpaces_get_Item(This,varIndex,TuningSpace)    ( (This)->lpVtbl -> get_Item(This,varIndex,TuningSpace) )
#define ITuningSpaces_get_EnumTuningSpaces(This,NewEnum)    ( (This)->lpVtbl -> get_EnumTuningSpaces(This,NewEnum) )
#endif
#endif
#ifndef __ITuningSpaceContainer_INTERFACE_DEFINED__
#define __ITuningSpaceContainer_INTERFACE_DEFINED__
extern const IID IID_ITuningSpaceContainer;
typedef struct ITuningSpaceContainerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITuningSpaceContainer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITuningSpaceContainer * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITuningSpaceContainer * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITuningSpaceContainer * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITuningSpaceContainer * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITuningSpaceContainer * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITuningSpaceContainer * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ITuningSpaceContainer * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ITuningSpaceContainer * This, IEnumVARIANT ** NewEnum);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ITuningSpaceContainer * This, VARIANT varIndex, ITuningSpace ** TuningSpace);
	HRESULT(STDMETHODCALLTYPE * put_Item) (ITuningSpaceContainer * This, VARIANT varIndex, ITuningSpace * TuningSpace);
	HRESULT(STDMETHODCALLTYPE * TuningSpacesForCLSID) (ITuningSpaceContainer * This, BSTR SpaceCLSID, ITuningSpaces ** NewColl);
	HRESULT(STDMETHODCALLTYPE * _TuningSpacesForCLSID) (ITuningSpaceContainer * This, REFCLSID SpaceCLSID, ITuningSpaces ** NewColl);
	HRESULT(STDMETHODCALLTYPE * TuningSpacesForName) (ITuningSpaceContainer * This, BSTR Name, ITuningSpaces ** NewColl);
	HRESULT(STDMETHODCALLTYPE * FindID) (ITuningSpaceContainer * This, ITuningSpace * TuningSpace, long *ID);
	HRESULT(STDMETHODCALLTYPE * Add) (ITuningSpaceContainer * This, ITuningSpace * TuningSpace, VARIANT * NewIndex);
	HRESULT(STDMETHODCALLTYPE * get_EnumTuningSpaces) (ITuningSpaceContainer * This, IEnumTuningSpaces ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * Remove) (ITuningSpaceContainer * This, VARIANT Index);
	HRESULT(STDMETHODCALLTYPE * get_MaxCount) (ITuningSpaceContainer * This, long *MaxCount);
	HRESULT(STDMETHODCALLTYPE * put_MaxCount) (ITuningSpaceContainer * This, long MaxCount);
	END_INTERFACE
} ITuningSpaceContainerVtbl;
interface ITuningSpaceContainer
{
	CONST_VTBL struct ITuningSpaceContainerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITuningSpaceContainer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITuningSpaceContainer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITuningSpaceContainer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITuningSpaceContainer_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITuningSpaceContainer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITuningSpaceContainer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITuningSpaceContainer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITuningSpaceContainer_get_Count(This,Count)    ( (This)->lpVtbl -> get_Count(This,Count) )
#define ITuningSpaceContainer_get__NewEnum(This,NewEnum)    ( (This)->lpVtbl -> get__NewEnum(This,NewEnum) )
#define ITuningSpaceContainer_get_Item(This,varIndex,TuningSpace)    ( (This)->lpVtbl -> get_Item(This,varIndex,TuningSpace) )
#define ITuningSpaceContainer_put_Item(This,varIndex,TuningSpace)    ( (This)->lpVtbl -> put_Item(This,varIndex,TuningSpace) )
#define ITuningSpaceContainer_TuningSpacesForCLSID(This,SpaceCLSID,NewColl)    ( (This)->lpVtbl -> TuningSpacesForCLSID(This,SpaceCLSID,NewColl) )
#define ITuningSpaceContainer__TuningSpacesForCLSID(This,SpaceCLSID,NewColl)    ( (This)->lpVtbl -> _TuningSpacesForCLSID(This,SpaceCLSID,NewColl) )
#define ITuningSpaceContainer_TuningSpacesForName(This,Name,NewColl)    ( (This)->lpVtbl -> TuningSpacesForName(This,Name,NewColl) )
#define ITuningSpaceContainer_FindID(This,TuningSpace,ID)    ( (This)->lpVtbl -> FindID(This,TuningSpace,ID) )
#define ITuningSpaceContainer_Add(This,TuningSpace,NewIndex)    ( (This)->lpVtbl -> Add(This,TuningSpace,NewIndex) )
#define ITuningSpaceContainer_get_EnumTuningSpaces(This,ppEnum)    ( (This)->lpVtbl -> get_EnumTuningSpaces(This,ppEnum) )
#define ITuningSpaceContainer_Remove(This,Index)    ( (This)->lpVtbl -> Remove(This,Index) )
#define ITuningSpaceContainer_get_MaxCount(This,MaxCount)    ( (This)->lpVtbl -> get_MaxCount(This,MaxCount) )
#define ITuningSpaceContainer_put_MaxCount(This,MaxCount)    ( (This)->lpVtbl -> put_MaxCount(This,MaxCount) )
#endif
#endif
#ifndef __ITuningSpace_INTERFACE_DEFINED__
#define __ITuningSpace_INTERFACE_DEFINED__
extern const IID IID_ITuningSpace;
typedef struct ITuningSpaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITuningSpace * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITuningSpace * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITuningSpace * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITuningSpace * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITuningSpace * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITuningSpace * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITuningSpace * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UniqueName) (ITuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_UniqueName) (ITuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (ITuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (ITuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (ITuningSpace * This, BSTR * SpaceCLSID);
	HRESULT(STDMETHODCALLTYPE * get_NetworkType) (ITuningSpace * This, BSTR * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put_NetworkType) (ITuningSpace * This, BSTR NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get__NetworkType) (ITuningSpace * This, GUID * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__NetworkType) (ITuningSpace * This, REFCLSID NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * CreateTuneRequest) (ITuningSpace * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * EnumCategoryGUIDs) (ITuningSpace * This, IEnumGUID ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * EnumDeviceMonikers) (ITuningSpace * This, IEnumMoniker ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_DefaultPreferredComponentTypes) (ITuningSpace * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_DefaultPreferredComponentTypes) (ITuningSpace * This, IComponentTypes * NewComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_FrequencyMapping) (ITuningSpace * This, BSTR * pMapping);
	HRESULT(STDMETHODCALLTYPE * put_FrequencyMapping) (ITuningSpace * This, BSTR Mapping);
	HRESULT(STDMETHODCALLTYPE * get_DefaultLocator) (ITuningSpace * This, ILocator ** LocatorVal);
	HRESULT(STDMETHODCALLTYPE * put_DefaultLocator) (ITuningSpace * This, ILocator * LocatorVal);
	HRESULT(STDMETHODCALLTYPE * Clone) (ITuningSpace * This, ITuningSpace ** NewTS);
	END_INTERFACE
} ITuningSpaceVtbl;
interface ITuningSpace
{
	CONST_VTBL struct ITuningSpaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITuningSpace_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITuningSpace_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITuningSpace_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITuningSpace_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITuningSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITuningSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITuningSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITuningSpace_get_UniqueName(This,Name)    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
#define ITuningSpace_put_UniqueName(This,Name)    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
#define ITuningSpace_get_FriendlyName(This,Name)    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
#define ITuningSpace_put_FriendlyName(This,Name)    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
#define ITuningSpace_get_CLSID(This,SpaceCLSID)    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
#define ITuningSpace_get_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
#define ITuningSpace_put_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
#define ITuningSpace_get__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
#define ITuningSpace_put__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
#define ITuningSpace_CreateTuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
#define ITuningSpace_EnumCategoryGUIDs(This,ppEnum)    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
#define ITuningSpace_EnumDeviceMonikers(This,ppEnum)    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
#define ITuningSpace_get_DefaultPreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
#define ITuningSpace_put_DefaultPreferredComponentTypes(This,NewComponentTypes)    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
#define ITuningSpace_get_FrequencyMapping(This,pMapping)    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
#define ITuningSpace_put_FrequencyMapping(This,Mapping)    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
#define ITuningSpace_get_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
#define ITuningSpace_put_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
#define ITuningSpace_Clone(This,NewTS)    ( (This)->lpVtbl -> Clone(This,NewTS) )
#endif
#endif
#ifndef __IEnumTuningSpaces_INTERFACE_DEFINED__
#define __IEnumTuningSpaces_INTERFACE_DEFINED__
extern const IID IID_IEnumTuningSpaces;
typedef struct IEnumTuningSpacesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumTuningSpaces * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumTuningSpaces * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumTuningSpaces * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumTuningSpaces * This, ULONG celt, ITuningSpace ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumTuningSpaces * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumTuningSpaces * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumTuningSpaces * This, IEnumTuningSpaces ** ppEnum);
	END_INTERFACE
} IEnumTuningSpacesVtbl;
interface IEnumTuningSpaces
{
	CONST_VTBL struct IEnumTuningSpacesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTuningSpaces_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTuningSpaces_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumTuningSpaces_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumTuningSpaces_Next(This,celt,rgelt,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumTuningSpaces_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumTuningSpaces_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumTuningSpaces_Clone(This,ppEnum)    ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IDVBTuningSpace_INTERFACE_DEFINED__
#define __IDVBTuningSpace_INTERFACE_DEFINED__
extern const IID IID_IDVBTuningSpace;
typedef struct IDVBTuningSpaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVBTuningSpace * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVBTuningSpace * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVBTuningSpace * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDVBTuningSpace * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDVBTuningSpace * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDVBTuningSpace * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDVBTuningSpace * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UniqueName) (IDVBTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_UniqueName) (IDVBTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IDVBTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IDVBTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (IDVBTuningSpace * This, BSTR * SpaceCLSID);
	HRESULT(STDMETHODCALLTYPE * get_NetworkType) (IDVBTuningSpace * This, BSTR * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put_NetworkType) (IDVBTuningSpace * This, BSTR NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get__NetworkType) (IDVBTuningSpace * This, GUID * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__NetworkType) (IDVBTuningSpace * This, REFCLSID NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * CreateTuneRequest) (IDVBTuningSpace * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * EnumCategoryGUIDs) (IDVBTuningSpace * This, IEnumGUID ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * EnumDeviceMonikers) (IDVBTuningSpace * This, IEnumMoniker ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_DefaultPreferredComponentTypes) (IDVBTuningSpace * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_DefaultPreferredComponentTypes) (IDVBTuningSpace * This, IComponentTypes * NewComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_FrequencyMapping) (IDVBTuningSpace * This, BSTR * pMapping);
	HRESULT(STDMETHODCALLTYPE * put_FrequencyMapping) (IDVBTuningSpace * This, BSTR Mapping);
	HRESULT(STDMETHODCALLTYPE * get_DefaultLocator) (IDVBTuningSpace * This, ILocator ** LocatorVal);
	HRESULT(STDMETHODCALLTYPE * put_DefaultLocator) (IDVBTuningSpace * This, ILocator * LocatorVal);
	HRESULT(STDMETHODCALLTYPE * Clone) (IDVBTuningSpace * This, ITuningSpace ** NewTS);
	HRESULT(STDMETHODCALLTYPE * get_SystemType) (IDVBTuningSpace * This, DVBSystemType * SysType);
	HRESULT(STDMETHODCALLTYPE * put_SystemType) (IDVBTuningSpace * This, DVBSystemType SysType);
	END_INTERFACE
} IDVBTuningSpaceVtbl;
interface IDVBTuningSpace
{
	CONST_VTBL struct IDVBTuningSpaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVBTuningSpace_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDVBTuningSpace_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDVBTuningSpace_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDVBTuningSpace_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDVBTuningSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDVBTuningSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDVBTuningSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDVBTuningSpace_get_UniqueName(This,Name)    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
#define IDVBTuningSpace_put_UniqueName(This,Name)    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
#define IDVBTuningSpace_get_FriendlyName(This,Name)    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
#define IDVBTuningSpace_put_FriendlyName(This,Name)    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
#define IDVBTuningSpace_get_CLSID(This,SpaceCLSID)    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
#define IDVBTuningSpace_get_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
#define IDVBTuningSpace_put_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
#define IDVBTuningSpace_get__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
#define IDVBTuningSpace_put__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
#define IDVBTuningSpace_CreateTuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
#define IDVBTuningSpace_EnumCategoryGUIDs(This,ppEnum)    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
#define IDVBTuningSpace_EnumDeviceMonikers(This,ppEnum)    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
#define IDVBTuningSpace_get_DefaultPreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
#define IDVBTuningSpace_put_DefaultPreferredComponentTypes(This,NewComponentTypes)    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
#define IDVBTuningSpace_get_FrequencyMapping(This,pMapping)    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
#define IDVBTuningSpace_put_FrequencyMapping(This,Mapping)    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
#define IDVBTuningSpace_get_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
#define IDVBTuningSpace_put_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
#define IDVBTuningSpace_Clone(This,NewTS)    ( (This)->lpVtbl -> Clone(This,NewTS) )
#define IDVBTuningSpace_get_SystemType(This,SysType)    ( (This)->lpVtbl -> get_SystemType(This,SysType) )
#define IDVBTuningSpace_put_SystemType(This,SysType)    ( (This)->lpVtbl -> put_SystemType(This,SysType) )
#endif
#endif
#ifndef __IDVBTuningSpace2_INTERFACE_DEFINED__
#define __IDVBTuningSpace2_INTERFACE_DEFINED__
extern const IID IID_IDVBTuningSpace2;
typedef struct IDVBTuningSpace2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVBTuningSpace2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVBTuningSpace2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVBTuningSpace2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDVBTuningSpace2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDVBTuningSpace2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDVBTuningSpace2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDVBTuningSpace2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UniqueName) (IDVBTuningSpace2 * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_UniqueName) (IDVBTuningSpace2 * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IDVBTuningSpace2 * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IDVBTuningSpace2 * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (IDVBTuningSpace2 * This, BSTR * SpaceCLSID);
	HRESULT(STDMETHODCALLTYPE * get_NetworkType) (IDVBTuningSpace2 * This, BSTR * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put_NetworkType) (IDVBTuningSpace2 * This, BSTR NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get__NetworkType) (IDVBTuningSpace2 * This, GUID * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__NetworkType) (IDVBTuningSpace2 * This, REFCLSID NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * CreateTuneRequest) (IDVBTuningSpace2 * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * EnumCategoryGUIDs) (IDVBTuningSpace2 * This, IEnumGUID ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * EnumDeviceMonikers) (IDVBTuningSpace2 * This, IEnumMoniker ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_DefaultPreferredComponentTypes) (IDVBTuningSpace2 * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_DefaultPreferredComponentTypes) (IDVBTuningSpace2 * This, IComponentTypes * NewComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_FrequencyMapping) (IDVBTuningSpace2 * This, BSTR * pMapping);
	HRESULT(STDMETHODCALLTYPE * put_FrequencyMapping) (IDVBTuningSpace2 * This, BSTR Mapping);
	HRESULT(STDMETHODCALLTYPE * get_DefaultLocator) (IDVBTuningSpace2 * This, ILocator ** LocatorVal);
	HRESULT(STDMETHODCALLTYPE * put_DefaultLocator) (IDVBTuningSpace2 * This, ILocator * LocatorVal);
	HRESULT(STDMETHODCALLTYPE * Clone) (IDVBTuningSpace2 * This, ITuningSpace ** NewTS);
	HRESULT(STDMETHODCALLTYPE * get_SystemType) (IDVBTuningSpace2 * This, DVBSystemType * SysType);
	HRESULT(STDMETHODCALLTYPE * put_SystemType) (IDVBTuningSpace2 * This, DVBSystemType SysType);
	HRESULT(STDMETHODCALLTYPE * get_NetworkID) (IDVBTuningSpace2 * This, long *NetworkID);
	HRESULT(STDMETHODCALLTYPE * put_NetworkID) (IDVBTuningSpace2 * This, long NetworkID);
	END_INTERFACE
} IDVBTuningSpace2Vtbl;
interface IDVBTuningSpace2
{
	CONST_VTBL struct IDVBTuningSpace2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVBTuningSpace2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDVBTuningSpace2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDVBTuningSpace2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDVBTuningSpace2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDVBTuningSpace2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDVBTuningSpace2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDVBTuningSpace2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDVBTuningSpace2_get_UniqueName(This,Name)    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
#define IDVBTuningSpace2_put_UniqueName(This,Name)    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
#define IDVBTuningSpace2_get_FriendlyName(This,Name)    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
#define IDVBTuningSpace2_put_FriendlyName(This,Name)    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
#define IDVBTuningSpace2_get_CLSID(This,SpaceCLSID)    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
#define IDVBTuningSpace2_get_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
#define IDVBTuningSpace2_put_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
#define IDVBTuningSpace2_get__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
#define IDVBTuningSpace2_put__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
#define IDVBTuningSpace2_CreateTuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
#define IDVBTuningSpace2_EnumCategoryGUIDs(This,ppEnum)    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
#define IDVBTuningSpace2_EnumDeviceMonikers(This,ppEnum)    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
#define IDVBTuningSpace2_get_DefaultPreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
#define IDVBTuningSpace2_put_DefaultPreferredComponentTypes(This,NewComponentTypes)    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
#define IDVBTuningSpace2_get_FrequencyMapping(This,pMapping)    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
#define IDVBTuningSpace2_put_FrequencyMapping(This,Mapping)    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
#define IDVBTuningSpace2_get_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
#define IDVBTuningSpace2_put_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
#define IDVBTuningSpace2_Clone(This,NewTS)    ( (This)->lpVtbl -> Clone(This,NewTS) )
#define IDVBTuningSpace2_get_SystemType(This,SysType)    ( (This)->lpVtbl -> get_SystemType(This,SysType) )
#define IDVBTuningSpace2_put_SystemType(This,SysType)    ( (This)->lpVtbl -> put_SystemType(This,SysType) )
#define IDVBTuningSpace2_get_NetworkID(This,NetworkID)    ( (This)->lpVtbl -> get_NetworkID(This,NetworkID) )
#define IDVBTuningSpace2_put_NetworkID(This,NetworkID)    ( (This)->lpVtbl -> put_NetworkID(This,NetworkID) )
#endif
#endif
#ifndef __IDVBSTuningSpace_INTERFACE_DEFINED__
#define __IDVBSTuningSpace_INTERFACE_DEFINED__
extern const IID IID_IDVBSTuningSpace;
typedef struct IDVBSTuningSpaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVBSTuningSpace * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVBSTuningSpace * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVBSTuningSpace * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDVBSTuningSpace * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDVBSTuningSpace * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDVBSTuningSpace * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDVBSTuningSpace * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UniqueName) (IDVBSTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_UniqueName) (IDVBSTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IDVBSTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IDVBSTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (IDVBSTuningSpace * This, BSTR * SpaceCLSID);
	HRESULT(STDMETHODCALLTYPE * get_NetworkType) (IDVBSTuningSpace * This, BSTR * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put_NetworkType) (IDVBSTuningSpace * This, BSTR NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get__NetworkType) (IDVBSTuningSpace * This, GUID * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__NetworkType) (IDVBSTuningSpace * This, REFCLSID NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * CreateTuneRequest) (IDVBSTuningSpace * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * EnumCategoryGUIDs) (IDVBSTuningSpace * This, IEnumGUID ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * EnumDeviceMonikers) (IDVBSTuningSpace * This, IEnumMoniker ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_DefaultPreferredComponentTypes) (IDVBSTuningSpace * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_DefaultPreferredComponentTypes) (IDVBSTuningSpace * This, IComponentTypes * NewComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_FrequencyMapping) (IDVBSTuningSpace * This, BSTR * pMapping);
	HRESULT(STDMETHODCALLTYPE * put_FrequencyMapping) (IDVBSTuningSpace * This, BSTR Mapping);
	HRESULT(STDMETHODCALLTYPE * get_DefaultLocator) (IDVBSTuningSpace * This, ILocator ** LocatorVal);
	HRESULT(STDMETHODCALLTYPE * put_DefaultLocator) (IDVBSTuningSpace * This, ILocator * LocatorVal);
	HRESULT(STDMETHODCALLTYPE * Clone) (IDVBSTuningSpace * This, ITuningSpace ** NewTS);
	HRESULT(STDMETHODCALLTYPE * get_SystemType) (IDVBSTuningSpace * This, DVBSystemType * SysType);
	HRESULT(STDMETHODCALLTYPE * put_SystemType) (IDVBSTuningSpace * This, DVBSystemType SysType);
	HRESULT(STDMETHODCALLTYPE * get_NetworkID) (IDVBSTuningSpace * This, long *NetworkID);
	HRESULT(STDMETHODCALLTYPE * put_NetworkID) (IDVBSTuningSpace * This, long NetworkID);
	HRESULT(STDMETHODCALLTYPE * get_LowOscillator) (IDVBSTuningSpace * This, long *LowOscillator);
	HRESULT(STDMETHODCALLTYPE * put_LowOscillator) (IDVBSTuningSpace * This, long LowOscillator);
	HRESULT(STDMETHODCALLTYPE * get_HighOscillator) (IDVBSTuningSpace * This, long *HighOscillator);
	HRESULT(STDMETHODCALLTYPE * put_HighOscillator) (IDVBSTuningSpace * This, long HighOscillator);
	HRESULT(STDMETHODCALLTYPE * get_LNBSwitch) (IDVBSTuningSpace * This, long *LNBSwitch);
	HRESULT(STDMETHODCALLTYPE * put_LNBSwitch) (IDVBSTuningSpace * This, long LNBSwitch);
	HRESULT(STDMETHODCALLTYPE * get_InputRange) (IDVBSTuningSpace * This, BSTR * InputRange);
	HRESULT(STDMETHODCALLTYPE * put_InputRange) (IDVBSTuningSpace * This, BSTR InputRange);
	HRESULT(STDMETHODCALLTYPE * get_SpectralInversion) (IDVBSTuningSpace * This, SpectralInversion * SpectralInversionVal);
	HRESULT(STDMETHODCALLTYPE * put_SpectralInversion) (IDVBSTuningSpace * This, SpectralInversion SpectralInversionVal);
	END_INTERFACE
} IDVBSTuningSpaceVtbl;
interface IDVBSTuningSpace
{
	CONST_VTBL struct IDVBSTuningSpaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVBSTuningSpace_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDVBSTuningSpace_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDVBSTuningSpace_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDVBSTuningSpace_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDVBSTuningSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDVBSTuningSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDVBSTuningSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDVBSTuningSpace_get_UniqueName(This,Name)    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
#define IDVBSTuningSpace_put_UniqueName(This,Name)    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
#define IDVBSTuningSpace_get_FriendlyName(This,Name)    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
#define IDVBSTuningSpace_put_FriendlyName(This,Name)    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
#define IDVBSTuningSpace_get_CLSID(This,SpaceCLSID)    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
#define IDVBSTuningSpace_get_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
#define IDVBSTuningSpace_put_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
#define IDVBSTuningSpace_get__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
#define IDVBSTuningSpace_put__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
#define IDVBSTuningSpace_CreateTuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
#define IDVBSTuningSpace_EnumCategoryGUIDs(This,ppEnum)    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
#define IDVBSTuningSpace_EnumDeviceMonikers(This,ppEnum)    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
#define IDVBSTuningSpace_get_DefaultPreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
#define IDVBSTuningSpace_put_DefaultPreferredComponentTypes(This,NewComponentTypes)    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
#define IDVBSTuningSpace_get_FrequencyMapping(This,pMapping)    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
#define IDVBSTuningSpace_put_FrequencyMapping(This,Mapping)    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
#define IDVBSTuningSpace_get_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
#define IDVBSTuningSpace_put_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
#define IDVBSTuningSpace_Clone(This,NewTS)    ( (This)->lpVtbl -> Clone(This,NewTS) )
#define IDVBSTuningSpace_get_SystemType(This,SysType)    ( (This)->lpVtbl -> get_SystemType(This,SysType) )
#define IDVBSTuningSpace_put_SystemType(This,SysType)    ( (This)->lpVtbl -> put_SystemType(This,SysType) )
#define IDVBSTuningSpace_get_NetworkID(This,NetworkID)    ( (This)->lpVtbl -> get_NetworkID(This,NetworkID) )
#define IDVBSTuningSpace_put_NetworkID(This,NetworkID)    ( (This)->lpVtbl -> put_NetworkID(This,NetworkID) )
#define IDVBSTuningSpace_get_LowOscillator(This,LowOscillator)    ( (This)->lpVtbl -> get_LowOscillator(This,LowOscillator) )
#define IDVBSTuningSpace_put_LowOscillator(This,LowOscillator)    ( (This)->lpVtbl -> put_LowOscillator(This,LowOscillator) )
#define IDVBSTuningSpace_get_HighOscillator(This,HighOscillator)    ( (This)->lpVtbl -> get_HighOscillator(This,HighOscillator) )
#define IDVBSTuningSpace_put_HighOscillator(This,HighOscillator)    ( (This)->lpVtbl -> put_HighOscillator(This,HighOscillator) )
#define IDVBSTuningSpace_get_LNBSwitch(This,LNBSwitch)    ( (This)->lpVtbl -> get_LNBSwitch(This,LNBSwitch) )
#define IDVBSTuningSpace_put_LNBSwitch(This,LNBSwitch)    ( (This)->lpVtbl -> put_LNBSwitch(This,LNBSwitch) )
#define IDVBSTuningSpace_get_InputRange(This,InputRange)    ( (This)->lpVtbl -> get_InputRange(This,InputRange) )
#define IDVBSTuningSpace_put_InputRange(This,InputRange)    ( (This)->lpVtbl -> put_InputRange(This,InputRange) )
#define IDVBSTuningSpace_get_SpectralInversion(This,SpectralInversionVal)    ( (This)->lpVtbl -> get_SpectralInversion(This,SpectralInversionVal) )
#define IDVBSTuningSpace_put_SpectralInversion(This,SpectralInversionVal)    ( (This)->lpVtbl -> put_SpectralInversion(This,SpectralInversionVal) )
#endif
#endif
#ifndef __IAuxInTuningSpace_INTERFACE_DEFINED__
#define __IAuxInTuningSpace_INTERFACE_DEFINED__
extern const IID IID_IAuxInTuningSpace;
typedef struct IAuxInTuningSpaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAuxInTuningSpace * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAuxInTuningSpace * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAuxInTuningSpace * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAuxInTuningSpace * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAuxInTuningSpace * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAuxInTuningSpace * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAuxInTuningSpace * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UniqueName) (IAuxInTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_UniqueName) (IAuxInTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IAuxInTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IAuxInTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (IAuxInTuningSpace * This, BSTR * SpaceCLSID);
	HRESULT(STDMETHODCALLTYPE * get_NetworkType) (IAuxInTuningSpace * This, BSTR * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put_NetworkType) (IAuxInTuningSpace * This, BSTR NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get__NetworkType) (IAuxInTuningSpace * This, GUID * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__NetworkType) (IAuxInTuningSpace * This, REFCLSID NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * CreateTuneRequest) (IAuxInTuningSpace * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * EnumCategoryGUIDs) (IAuxInTuningSpace * This, IEnumGUID ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * EnumDeviceMonikers) (IAuxInTuningSpace * This, IEnumMoniker ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_DefaultPreferredComponentTypes) (IAuxInTuningSpace * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_DefaultPreferredComponentTypes) (IAuxInTuningSpace * This, IComponentTypes * NewComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_FrequencyMapping) (IAuxInTuningSpace * This, BSTR * pMapping);
	HRESULT(STDMETHODCALLTYPE * put_FrequencyMapping) (IAuxInTuningSpace * This, BSTR Mapping);
	HRESULT(STDMETHODCALLTYPE * get_DefaultLocator) (IAuxInTuningSpace * This, ILocator ** LocatorVal);
	HRESULT(STDMETHODCALLTYPE * put_DefaultLocator) (IAuxInTuningSpace * This, ILocator * LocatorVal);
	HRESULT(STDMETHODCALLTYPE * Clone) (IAuxInTuningSpace * This, ITuningSpace ** NewTS);
	END_INTERFACE
} IAuxInTuningSpaceVtbl;
interface IAuxInTuningSpace
{
	CONST_VTBL struct IAuxInTuningSpaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAuxInTuningSpace_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAuxInTuningSpace_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAuxInTuningSpace_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAuxInTuningSpace_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAuxInTuningSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAuxInTuningSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAuxInTuningSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAuxInTuningSpace_get_UniqueName(This,Name)    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
#define IAuxInTuningSpace_put_UniqueName(This,Name)    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
#define IAuxInTuningSpace_get_FriendlyName(This,Name)    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
#define IAuxInTuningSpace_put_FriendlyName(This,Name)    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
#define IAuxInTuningSpace_get_CLSID(This,SpaceCLSID)    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
#define IAuxInTuningSpace_get_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
#define IAuxInTuningSpace_put_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
#define IAuxInTuningSpace_get__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
#define IAuxInTuningSpace_put__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
#define IAuxInTuningSpace_CreateTuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
#define IAuxInTuningSpace_EnumCategoryGUIDs(This,ppEnum)    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
#define IAuxInTuningSpace_EnumDeviceMonikers(This,ppEnum)    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
#define IAuxInTuningSpace_get_DefaultPreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
#define IAuxInTuningSpace_put_DefaultPreferredComponentTypes(This,NewComponentTypes)    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
#define IAuxInTuningSpace_get_FrequencyMapping(This,pMapping)    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
#define IAuxInTuningSpace_put_FrequencyMapping(This,Mapping)    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
#define IAuxInTuningSpace_get_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
#define IAuxInTuningSpace_put_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
#define IAuxInTuningSpace_Clone(This,NewTS)    ( (This)->lpVtbl -> Clone(This,NewTS) )
#endif
#endif
#ifndef __IAuxInTuningSpace2_INTERFACE_DEFINED__
#define __IAuxInTuningSpace2_INTERFACE_DEFINED__
extern const IID IID_IAuxInTuningSpace2;
typedef struct IAuxInTuningSpace2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAuxInTuningSpace2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAuxInTuningSpace2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAuxInTuningSpace2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAuxInTuningSpace2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAuxInTuningSpace2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAuxInTuningSpace2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAuxInTuningSpace2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UniqueName) (IAuxInTuningSpace2 * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_UniqueName) (IAuxInTuningSpace2 * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IAuxInTuningSpace2 * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IAuxInTuningSpace2 * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (IAuxInTuningSpace2 * This, BSTR * SpaceCLSID);
	HRESULT(STDMETHODCALLTYPE * get_NetworkType) (IAuxInTuningSpace2 * This, BSTR * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put_NetworkType) (IAuxInTuningSpace2 * This, BSTR NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get__NetworkType) (IAuxInTuningSpace2 * This, GUID * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__NetworkType) (IAuxInTuningSpace2 * This, REFCLSID NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * CreateTuneRequest) (IAuxInTuningSpace2 * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * EnumCategoryGUIDs) (IAuxInTuningSpace2 * This, IEnumGUID ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * EnumDeviceMonikers) (IAuxInTuningSpace2 * This, IEnumMoniker ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_DefaultPreferredComponentTypes) (IAuxInTuningSpace2 * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_DefaultPreferredComponentTypes) (IAuxInTuningSpace2 * This, IComponentTypes * NewComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_FrequencyMapping) (IAuxInTuningSpace2 * This, BSTR * pMapping);
	HRESULT(STDMETHODCALLTYPE * put_FrequencyMapping) (IAuxInTuningSpace2 * This, BSTR Mapping);
	HRESULT(STDMETHODCALLTYPE * get_DefaultLocator) (IAuxInTuningSpace2 * This, ILocator ** LocatorVal);
	HRESULT(STDMETHODCALLTYPE * put_DefaultLocator) (IAuxInTuningSpace2 * This, ILocator * LocatorVal);
	HRESULT(STDMETHODCALLTYPE * Clone) (IAuxInTuningSpace2 * This, ITuningSpace ** NewTS);
	HRESULT(STDMETHODCALLTYPE * get_CountryCode) (IAuxInTuningSpace2 * This, long *CountryCodeVal);
	HRESULT(STDMETHODCALLTYPE * put_CountryCode) (IAuxInTuningSpace2 * This, long NewCountryCodeVal);
	END_INTERFACE
} IAuxInTuningSpace2Vtbl;
interface IAuxInTuningSpace2
{
	CONST_VTBL struct IAuxInTuningSpace2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAuxInTuningSpace2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAuxInTuningSpace2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAuxInTuningSpace2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAuxInTuningSpace2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAuxInTuningSpace2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAuxInTuningSpace2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAuxInTuningSpace2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAuxInTuningSpace2_get_UniqueName(This,Name)    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
#define IAuxInTuningSpace2_put_UniqueName(This,Name)    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
#define IAuxInTuningSpace2_get_FriendlyName(This,Name)    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
#define IAuxInTuningSpace2_put_FriendlyName(This,Name)    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
#define IAuxInTuningSpace2_get_CLSID(This,SpaceCLSID)    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
#define IAuxInTuningSpace2_get_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
#define IAuxInTuningSpace2_put_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
#define IAuxInTuningSpace2_get__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
#define IAuxInTuningSpace2_put__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
#define IAuxInTuningSpace2_CreateTuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
#define IAuxInTuningSpace2_EnumCategoryGUIDs(This,ppEnum)    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
#define IAuxInTuningSpace2_EnumDeviceMonikers(This,ppEnum)    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
#define IAuxInTuningSpace2_get_DefaultPreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
#define IAuxInTuningSpace2_put_DefaultPreferredComponentTypes(This,NewComponentTypes)    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
#define IAuxInTuningSpace2_get_FrequencyMapping(This,pMapping)    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
#define IAuxInTuningSpace2_put_FrequencyMapping(This,Mapping)    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
#define IAuxInTuningSpace2_get_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
#define IAuxInTuningSpace2_put_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
#define IAuxInTuningSpace2_Clone(This,NewTS)    ( (This)->lpVtbl -> Clone(This,NewTS) )
#define IAuxInTuningSpace2_get_CountryCode(This,CountryCodeVal)    ( (This)->lpVtbl -> get_CountryCode(This,CountryCodeVal) )
#define IAuxInTuningSpace2_put_CountryCode(This,NewCountryCodeVal)    ( (This)->lpVtbl -> put_CountryCode(This,NewCountryCodeVal) )
#endif
#endif
#ifndef __IAnalogTVTuningSpace_INTERFACE_DEFINED__
#define __IAnalogTVTuningSpace_INTERFACE_DEFINED__
extern const IID IID_IAnalogTVTuningSpace;
typedef struct IAnalogTVTuningSpaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnalogTVTuningSpace * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnalogTVTuningSpace * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnalogTVTuningSpace * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAnalogTVTuningSpace * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAnalogTVTuningSpace * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAnalogTVTuningSpace * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAnalogTVTuningSpace * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UniqueName) (IAnalogTVTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_UniqueName) (IAnalogTVTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IAnalogTVTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IAnalogTVTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (IAnalogTVTuningSpace * This, BSTR * SpaceCLSID);
	HRESULT(STDMETHODCALLTYPE * get_NetworkType) (IAnalogTVTuningSpace * This, BSTR * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put_NetworkType) (IAnalogTVTuningSpace * This, BSTR NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get__NetworkType) (IAnalogTVTuningSpace * This, GUID * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__NetworkType) (IAnalogTVTuningSpace * This, REFCLSID NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * CreateTuneRequest) (IAnalogTVTuningSpace * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * EnumCategoryGUIDs) (IAnalogTVTuningSpace * This, IEnumGUID ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * EnumDeviceMonikers) (IAnalogTVTuningSpace * This, IEnumMoniker ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_DefaultPreferredComponentTypes) (IAnalogTVTuningSpace * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_DefaultPreferredComponentTypes) (IAnalogTVTuningSpace * This, IComponentTypes * NewComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_FrequencyMapping) (IAnalogTVTuningSpace * This, BSTR * pMapping);
	HRESULT(STDMETHODCALLTYPE * put_FrequencyMapping) (IAnalogTVTuningSpace * This, BSTR Mapping);
	HRESULT(STDMETHODCALLTYPE * get_DefaultLocator) (IAnalogTVTuningSpace * This, ILocator ** LocatorVal);
	HRESULT(STDMETHODCALLTYPE * put_DefaultLocator) (IAnalogTVTuningSpace * This, ILocator * LocatorVal);
	HRESULT(STDMETHODCALLTYPE * Clone) (IAnalogTVTuningSpace * This, ITuningSpace ** NewTS);
	HRESULT(STDMETHODCALLTYPE * get_MinChannel) (IAnalogTVTuningSpace * This, long *MinChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MinChannel) (IAnalogTVTuningSpace * This, long NewMinChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxChannel) (IAnalogTVTuningSpace * This, long *MaxChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxChannel) (IAnalogTVTuningSpace * This, long NewMaxChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_InputType) (IAnalogTVTuningSpace * This, TunerInputType * InputTypeVal);
	HRESULT(STDMETHODCALLTYPE * put_InputType) (IAnalogTVTuningSpace * This, TunerInputType NewInputTypeVal);
	HRESULT(STDMETHODCALLTYPE * get_CountryCode) (IAnalogTVTuningSpace * This, long *CountryCodeVal);
	HRESULT(STDMETHODCALLTYPE * put_CountryCode) (IAnalogTVTuningSpace * This, long NewCountryCodeVal);
	END_INTERFACE
} IAnalogTVTuningSpaceVtbl;
interface IAnalogTVTuningSpace
{
	CONST_VTBL struct IAnalogTVTuningSpaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnalogTVTuningSpace_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnalogTVTuningSpace_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAnalogTVTuningSpace_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAnalogTVTuningSpace_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAnalogTVTuningSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAnalogTVTuningSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAnalogTVTuningSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAnalogTVTuningSpace_get_UniqueName(This,Name)    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
#define IAnalogTVTuningSpace_put_UniqueName(This,Name)    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
#define IAnalogTVTuningSpace_get_FriendlyName(This,Name)    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
#define IAnalogTVTuningSpace_put_FriendlyName(This,Name)    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
#define IAnalogTVTuningSpace_get_CLSID(This,SpaceCLSID)    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
#define IAnalogTVTuningSpace_get_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
#define IAnalogTVTuningSpace_put_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
#define IAnalogTVTuningSpace_get__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
#define IAnalogTVTuningSpace_put__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
#define IAnalogTVTuningSpace_CreateTuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
#define IAnalogTVTuningSpace_EnumCategoryGUIDs(This,ppEnum)    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
#define IAnalogTVTuningSpace_EnumDeviceMonikers(This,ppEnum)    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
#define IAnalogTVTuningSpace_get_DefaultPreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
#define IAnalogTVTuningSpace_put_DefaultPreferredComponentTypes(This,NewComponentTypes)    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
#define IAnalogTVTuningSpace_get_FrequencyMapping(This,pMapping)    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
#define IAnalogTVTuningSpace_put_FrequencyMapping(This,Mapping)    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
#define IAnalogTVTuningSpace_get_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
#define IAnalogTVTuningSpace_put_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
#define IAnalogTVTuningSpace_Clone(This,NewTS)    ( (This)->lpVtbl -> Clone(This,NewTS) )
#define IAnalogTVTuningSpace_get_MinChannel(This,MinChannelVal)    ( (This)->lpVtbl -> get_MinChannel(This,MinChannelVal) )
#define IAnalogTVTuningSpace_put_MinChannel(This,NewMinChannelVal)    ( (This)->lpVtbl -> put_MinChannel(This,NewMinChannelVal) )
#define IAnalogTVTuningSpace_get_MaxChannel(This,MaxChannelVal)    ( (This)->lpVtbl -> get_MaxChannel(This,MaxChannelVal) )
#define IAnalogTVTuningSpace_put_MaxChannel(This,NewMaxChannelVal)    ( (This)->lpVtbl -> put_MaxChannel(This,NewMaxChannelVal) )
#define IAnalogTVTuningSpace_get_InputType(This,InputTypeVal)    ( (This)->lpVtbl -> get_InputType(This,InputTypeVal) )
#define IAnalogTVTuningSpace_put_InputType(This,NewInputTypeVal)    ( (This)->lpVtbl -> put_InputType(This,NewInputTypeVal) )
#define IAnalogTVTuningSpace_get_CountryCode(This,CountryCodeVal)    ( (This)->lpVtbl -> get_CountryCode(This,CountryCodeVal) )
#define IAnalogTVTuningSpace_put_CountryCode(This,NewCountryCodeVal)    ( (This)->lpVtbl -> put_CountryCode(This,NewCountryCodeVal) )
#endif
#endif
#ifndef __IATSCTuningSpace_INTERFACE_DEFINED__
#define __IATSCTuningSpace_INTERFACE_DEFINED__
extern const IID IID_IATSCTuningSpace;
typedef struct IATSCTuningSpaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IATSCTuningSpace * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IATSCTuningSpace * This);
	ULONG(STDMETHODCALLTYPE * Release) (IATSCTuningSpace * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IATSCTuningSpace * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IATSCTuningSpace * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IATSCTuningSpace * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IATSCTuningSpace * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UniqueName) (IATSCTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_UniqueName) (IATSCTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IATSCTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IATSCTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (IATSCTuningSpace * This, BSTR * SpaceCLSID);
	HRESULT(STDMETHODCALLTYPE * get_NetworkType) (IATSCTuningSpace * This, BSTR * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put_NetworkType) (IATSCTuningSpace * This, BSTR NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get__NetworkType) (IATSCTuningSpace * This, GUID * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__NetworkType) (IATSCTuningSpace * This, REFCLSID NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * CreateTuneRequest) (IATSCTuningSpace * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * EnumCategoryGUIDs) (IATSCTuningSpace * This, IEnumGUID ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * EnumDeviceMonikers) (IATSCTuningSpace * This, IEnumMoniker ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_DefaultPreferredComponentTypes) (IATSCTuningSpace * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_DefaultPreferredComponentTypes) (IATSCTuningSpace * This, IComponentTypes * NewComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_FrequencyMapping) (IATSCTuningSpace * This, BSTR * pMapping);
	HRESULT(STDMETHODCALLTYPE * put_FrequencyMapping) (IATSCTuningSpace * This, BSTR Mapping);
	HRESULT(STDMETHODCALLTYPE * get_DefaultLocator) (IATSCTuningSpace * This, ILocator ** LocatorVal);
	HRESULT(STDMETHODCALLTYPE * put_DefaultLocator) (IATSCTuningSpace * This, ILocator * LocatorVal);
	HRESULT(STDMETHODCALLTYPE * Clone) (IATSCTuningSpace * This, ITuningSpace ** NewTS);
	HRESULT(STDMETHODCALLTYPE * get_MinChannel) (IATSCTuningSpace * This, long *MinChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MinChannel) (IATSCTuningSpace * This, long NewMinChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxChannel) (IATSCTuningSpace * This, long *MaxChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxChannel) (IATSCTuningSpace * This, long NewMaxChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_InputType) (IATSCTuningSpace * This, TunerInputType * InputTypeVal);
	HRESULT(STDMETHODCALLTYPE * put_InputType) (IATSCTuningSpace * This, TunerInputType NewInputTypeVal);
	HRESULT(STDMETHODCALLTYPE * get_CountryCode) (IATSCTuningSpace * This, long *CountryCodeVal);
	HRESULT(STDMETHODCALLTYPE * put_CountryCode) (IATSCTuningSpace * This, long NewCountryCodeVal);
	HRESULT(STDMETHODCALLTYPE * get_MinMinorChannel) (IATSCTuningSpace * This, long *MinMinorChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MinMinorChannel) (IATSCTuningSpace * This, long NewMinMinorChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxMinorChannel) (IATSCTuningSpace * This, long *MaxMinorChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxMinorChannel) (IATSCTuningSpace * This, long NewMaxMinorChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_MinPhysicalChannel) (IATSCTuningSpace * This, long *MinPhysicalChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MinPhysicalChannel) (IATSCTuningSpace * This, long NewMinPhysicalChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxPhysicalChannel) (IATSCTuningSpace * This, long *MaxPhysicalChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxPhysicalChannel) (IATSCTuningSpace * This, long NewMaxPhysicalChannelVal);
	END_INTERFACE
} IATSCTuningSpaceVtbl;
interface IATSCTuningSpace
{
	CONST_VTBL struct IATSCTuningSpaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IATSCTuningSpace_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IATSCTuningSpace_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IATSCTuningSpace_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IATSCTuningSpace_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IATSCTuningSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IATSCTuningSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IATSCTuningSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IATSCTuningSpace_get_UniqueName(This,Name)    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
#define IATSCTuningSpace_put_UniqueName(This,Name)    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
#define IATSCTuningSpace_get_FriendlyName(This,Name)    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
#define IATSCTuningSpace_put_FriendlyName(This,Name)    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
#define IATSCTuningSpace_get_CLSID(This,SpaceCLSID)    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
#define IATSCTuningSpace_get_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
#define IATSCTuningSpace_put_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
#define IATSCTuningSpace_get__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
#define IATSCTuningSpace_put__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
#define IATSCTuningSpace_CreateTuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
#define IATSCTuningSpace_EnumCategoryGUIDs(This,ppEnum)    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
#define IATSCTuningSpace_EnumDeviceMonikers(This,ppEnum)    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
#define IATSCTuningSpace_get_DefaultPreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
#define IATSCTuningSpace_put_DefaultPreferredComponentTypes(This,NewComponentTypes)    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
#define IATSCTuningSpace_get_FrequencyMapping(This,pMapping)    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
#define IATSCTuningSpace_put_FrequencyMapping(This,Mapping)    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
#define IATSCTuningSpace_get_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
#define IATSCTuningSpace_put_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
#define IATSCTuningSpace_Clone(This,NewTS)    ( (This)->lpVtbl -> Clone(This,NewTS) )
#define IATSCTuningSpace_get_MinChannel(This,MinChannelVal)    ( (This)->lpVtbl -> get_MinChannel(This,MinChannelVal) )
#define IATSCTuningSpace_put_MinChannel(This,NewMinChannelVal)    ( (This)->lpVtbl -> put_MinChannel(This,NewMinChannelVal) )
#define IATSCTuningSpace_get_MaxChannel(This,MaxChannelVal)    ( (This)->lpVtbl -> get_MaxChannel(This,MaxChannelVal) )
#define IATSCTuningSpace_put_MaxChannel(This,NewMaxChannelVal)    ( (This)->lpVtbl -> put_MaxChannel(This,NewMaxChannelVal) )
#define IATSCTuningSpace_get_InputType(This,InputTypeVal)    ( (This)->lpVtbl -> get_InputType(This,InputTypeVal) )
#define IATSCTuningSpace_put_InputType(This,NewInputTypeVal)    ( (This)->lpVtbl -> put_InputType(This,NewInputTypeVal) )
#define IATSCTuningSpace_get_CountryCode(This,CountryCodeVal)    ( (This)->lpVtbl -> get_CountryCode(This,CountryCodeVal) )
#define IATSCTuningSpace_put_CountryCode(This,NewCountryCodeVal)    ( (This)->lpVtbl -> put_CountryCode(This,NewCountryCodeVal) )
#define IATSCTuningSpace_get_MinMinorChannel(This,MinMinorChannelVal)    ( (This)->lpVtbl -> get_MinMinorChannel(This,MinMinorChannelVal) )
#define IATSCTuningSpace_put_MinMinorChannel(This,NewMinMinorChannelVal)    ( (This)->lpVtbl -> put_MinMinorChannel(This,NewMinMinorChannelVal) )
#define IATSCTuningSpace_get_MaxMinorChannel(This,MaxMinorChannelVal)    ( (This)->lpVtbl -> get_MaxMinorChannel(This,MaxMinorChannelVal) )
#define IATSCTuningSpace_put_MaxMinorChannel(This,NewMaxMinorChannelVal)    ( (This)->lpVtbl -> put_MaxMinorChannel(This,NewMaxMinorChannelVal) )
#define IATSCTuningSpace_get_MinPhysicalChannel(This,MinPhysicalChannelVal)    ( (This)->lpVtbl -> get_MinPhysicalChannel(This,MinPhysicalChannelVal) )
#define IATSCTuningSpace_put_MinPhysicalChannel(This,NewMinPhysicalChannelVal)    ( (This)->lpVtbl -> put_MinPhysicalChannel(This,NewMinPhysicalChannelVal) )
#define IATSCTuningSpace_get_MaxPhysicalChannel(This,MaxPhysicalChannelVal)    ( (This)->lpVtbl -> get_MaxPhysicalChannel(This,MaxPhysicalChannelVal) )
#define IATSCTuningSpace_put_MaxPhysicalChannel(This,NewMaxPhysicalChannelVal)    ( (This)->lpVtbl -> put_MaxPhysicalChannel(This,NewMaxPhysicalChannelVal) )
#endif
#endif
#ifndef __IDigitalCableTuningSpace_INTERFACE_DEFINED__
#define __IDigitalCableTuningSpace_INTERFACE_DEFINED__
extern const IID IID_IDigitalCableTuningSpace;
typedef struct IDigitalCableTuningSpaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDigitalCableTuningSpace * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDigitalCableTuningSpace * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDigitalCableTuningSpace * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDigitalCableTuningSpace * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDigitalCableTuningSpace * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDigitalCableTuningSpace * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDigitalCableTuningSpace * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UniqueName) (IDigitalCableTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_UniqueName) (IDigitalCableTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IDigitalCableTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IDigitalCableTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (IDigitalCableTuningSpace * This, BSTR * SpaceCLSID);
	HRESULT(STDMETHODCALLTYPE * get_NetworkType) (IDigitalCableTuningSpace * This, BSTR * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put_NetworkType) (IDigitalCableTuningSpace * This, BSTR NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get__NetworkType) (IDigitalCableTuningSpace * This, GUID * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__NetworkType) (IDigitalCableTuningSpace * This, REFCLSID NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * CreateTuneRequest) (IDigitalCableTuningSpace * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * EnumCategoryGUIDs) (IDigitalCableTuningSpace * This, IEnumGUID ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * EnumDeviceMonikers) (IDigitalCableTuningSpace * This, IEnumMoniker ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_DefaultPreferredComponentTypes) (IDigitalCableTuningSpace * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_DefaultPreferredComponentTypes) (IDigitalCableTuningSpace * This, IComponentTypes * NewComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_FrequencyMapping) (IDigitalCableTuningSpace * This, BSTR * pMapping);
	HRESULT(STDMETHODCALLTYPE * put_FrequencyMapping) (IDigitalCableTuningSpace * This, BSTR Mapping);
	HRESULT(STDMETHODCALLTYPE * get_DefaultLocator) (IDigitalCableTuningSpace * This, ILocator ** LocatorVal);
	HRESULT(STDMETHODCALLTYPE * put_DefaultLocator) (IDigitalCableTuningSpace * This, ILocator * LocatorVal);
	HRESULT(STDMETHODCALLTYPE * Clone) (IDigitalCableTuningSpace * This, ITuningSpace ** NewTS);
	HRESULT(STDMETHODCALLTYPE * get_MinChannel) (IDigitalCableTuningSpace * This, long *MinChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MinChannel) (IDigitalCableTuningSpace * This, long NewMinChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxChannel) (IDigitalCableTuningSpace * This, long *MaxChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxChannel) (IDigitalCableTuningSpace * This, long NewMaxChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_InputType) (IDigitalCableTuningSpace * This, TunerInputType * InputTypeVal);
	HRESULT(STDMETHODCALLTYPE * put_InputType) (IDigitalCableTuningSpace * This, TunerInputType NewInputTypeVal);
	HRESULT(STDMETHODCALLTYPE * get_CountryCode) (IDigitalCableTuningSpace * This, long *CountryCodeVal);
	HRESULT(STDMETHODCALLTYPE * put_CountryCode) (IDigitalCableTuningSpace * This, long NewCountryCodeVal);
	HRESULT(STDMETHODCALLTYPE * get_MinMinorChannel) (IDigitalCableTuningSpace * This, long *MinMinorChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MinMinorChannel) (IDigitalCableTuningSpace * This, long NewMinMinorChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxMinorChannel) (IDigitalCableTuningSpace * This, long *MaxMinorChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxMinorChannel) (IDigitalCableTuningSpace * This, long NewMaxMinorChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_MinPhysicalChannel) (IDigitalCableTuningSpace * This, long *MinPhysicalChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MinPhysicalChannel) (IDigitalCableTuningSpace * This, long NewMinPhysicalChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxPhysicalChannel) (IDigitalCableTuningSpace * This, long *MaxPhysicalChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxPhysicalChannel) (IDigitalCableTuningSpace * This, long NewMaxPhysicalChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_MinMajorChannel) (IDigitalCableTuningSpace * This, long *MinMajorChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MinMajorChannel) (IDigitalCableTuningSpace * This, long NewMinMajorChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxMajorChannel) (IDigitalCableTuningSpace * This, long *MaxMajorChannelVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxMajorChannel) (IDigitalCableTuningSpace * This, long NewMaxMajorChannelVal);
	HRESULT(STDMETHODCALLTYPE * get_MinSourceID) (IDigitalCableTuningSpace * This, long *MinSourceIDVal);
	HRESULT(STDMETHODCALLTYPE * put_MinSourceID) (IDigitalCableTuningSpace * This, long NewMinSourceIDVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxSourceID) (IDigitalCableTuningSpace * This, long *MaxSourceIDVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxSourceID) (IDigitalCableTuningSpace * This, long NewMaxSourceIDVal);
	END_INTERFACE
} IDigitalCableTuningSpaceVtbl;
interface IDigitalCableTuningSpace
{
	CONST_VTBL struct IDigitalCableTuningSpaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDigitalCableTuningSpace_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDigitalCableTuningSpace_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDigitalCableTuningSpace_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDigitalCableTuningSpace_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDigitalCableTuningSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDigitalCableTuningSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDigitalCableTuningSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDigitalCableTuningSpace_get_UniqueName(This,Name)    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
#define IDigitalCableTuningSpace_put_UniqueName(This,Name)    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
#define IDigitalCableTuningSpace_get_FriendlyName(This,Name)    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
#define IDigitalCableTuningSpace_put_FriendlyName(This,Name)    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
#define IDigitalCableTuningSpace_get_CLSID(This,SpaceCLSID)    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
#define IDigitalCableTuningSpace_get_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
#define IDigitalCableTuningSpace_put_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
#define IDigitalCableTuningSpace_get__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
#define IDigitalCableTuningSpace_put__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
#define IDigitalCableTuningSpace_CreateTuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
#define IDigitalCableTuningSpace_EnumCategoryGUIDs(This,ppEnum)    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
#define IDigitalCableTuningSpace_EnumDeviceMonikers(This,ppEnum)    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
#define IDigitalCableTuningSpace_get_DefaultPreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
#define IDigitalCableTuningSpace_put_DefaultPreferredComponentTypes(This,NewComponentTypes)    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
#define IDigitalCableTuningSpace_get_FrequencyMapping(This,pMapping)    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
#define IDigitalCableTuningSpace_put_FrequencyMapping(This,Mapping)    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
#define IDigitalCableTuningSpace_get_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
#define IDigitalCableTuningSpace_put_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
#define IDigitalCableTuningSpace_Clone(This,NewTS)    ( (This)->lpVtbl -> Clone(This,NewTS) )
#define IDigitalCableTuningSpace_get_MinChannel(This,MinChannelVal)    ( (This)->lpVtbl -> get_MinChannel(This,MinChannelVal) )
#define IDigitalCableTuningSpace_put_MinChannel(This,NewMinChannelVal)    ( (This)->lpVtbl -> put_MinChannel(This,NewMinChannelVal) )
#define IDigitalCableTuningSpace_get_MaxChannel(This,MaxChannelVal)    ( (This)->lpVtbl -> get_MaxChannel(This,MaxChannelVal) )
#define IDigitalCableTuningSpace_put_MaxChannel(This,NewMaxChannelVal)    ( (This)->lpVtbl -> put_MaxChannel(This,NewMaxChannelVal) )
#define IDigitalCableTuningSpace_get_InputType(This,InputTypeVal)    ( (This)->lpVtbl -> get_InputType(This,InputTypeVal) )
#define IDigitalCableTuningSpace_put_InputType(This,NewInputTypeVal)    ( (This)->lpVtbl -> put_InputType(This,NewInputTypeVal) )
#define IDigitalCableTuningSpace_get_CountryCode(This,CountryCodeVal)    ( (This)->lpVtbl -> get_CountryCode(This,CountryCodeVal) )
#define IDigitalCableTuningSpace_put_CountryCode(This,NewCountryCodeVal)    ( (This)->lpVtbl -> put_CountryCode(This,NewCountryCodeVal) )
#define IDigitalCableTuningSpace_get_MinMinorChannel(This,MinMinorChannelVal)    ( (This)->lpVtbl -> get_MinMinorChannel(This,MinMinorChannelVal) )
#define IDigitalCableTuningSpace_put_MinMinorChannel(This,NewMinMinorChannelVal)    ( (This)->lpVtbl -> put_MinMinorChannel(This,NewMinMinorChannelVal) )
#define IDigitalCableTuningSpace_get_MaxMinorChannel(This,MaxMinorChannelVal)    ( (This)->lpVtbl -> get_MaxMinorChannel(This,MaxMinorChannelVal) )
#define IDigitalCableTuningSpace_put_MaxMinorChannel(This,NewMaxMinorChannelVal)    ( (This)->lpVtbl -> put_MaxMinorChannel(This,NewMaxMinorChannelVal) )
#define IDigitalCableTuningSpace_get_MinPhysicalChannel(This,MinPhysicalChannelVal)    ( (This)->lpVtbl -> get_MinPhysicalChannel(This,MinPhysicalChannelVal) )
#define IDigitalCableTuningSpace_put_MinPhysicalChannel(This,NewMinPhysicalChannelVal)    ( (This)->lpVtbl -> put_MinPhysicalChannel(This,NewMinPhysicalChannelVal) )
#define IDigitalCableTuningSpace_get_MaxPhysicalChannel(This,MaxPhysicalChannelVal)    ( (This)->lpVtbl -> get_MaxPhysicalChannel(This,MaxPhysicalChannelVal) )
#define IDigitalCableTuningSpace_put_MaxPhysicalChannel(This,NewMaxPhysicalChannelVal)    ( (This)->lpVtbl -> put_MaxPhysicalChannel(This,NewMaxPhysicalChannelVal) )
#define IDigitalCableTuningSpace_get_MinMajorChannel(This,MinMajorChannelVal)    ( (This)->lpVtbl -> get_MinMajorChannel(This,MinMajorChannelVal) )
#define IDigitalCableTuningSpace_put_MinMajorChannel(This,NewMinMajorChannelVal)    ( (This)->lpVtbl -> put_MinMajorChannel(This,NewMinMajorChannelVal) )
#define IDigitalCableTuningSpace_get_MaxMajorChannel(This,MaxMajorChannelVal)    ( (This)->lpVtbl -> get_MaxMajorChannel(This,MaxMajorChannelVal) )
#define IDigitalCableTuningSpace_put_MaxMajorChannel(This,NewMaxMajorChannelVal)    ( (This)->lpVtbl -> put_MaxMajorChannel(This,NewMaxMajorChannelVal) )
#define IDigitalCableTuningSpace_get_MinSourceID(This,MinSourceIDVal)    ( (This)->lpVtbl -> get_MinSourceID(This,MinSourceIDVal) )
#define IDigitalCableTuningSpace_put_MinSourceID(This,NewMinSourceIDVal)    ( (This)->lpVtbl -> put_MinSourceID(This,NewMinSourceIDVal) )
#define IDigitalCableTuningSpace_get_MaxSourceID(This,MaxSourceIDVal)    ( (This)->lpVtbl -> get_MaxSourceID(This,MaxSourceIDVal) )
#define IDigitalCableTuningSpace_put_MaxSourceID(This,NewMaxSourceIDVal)    ( (This)->lpVtbl -> put_MaxSourceID(This,NewMaxSourceIDVal) )
#endif
#endif
#ifndef __IAnalogRadioTuningSpace_INTERFACE_DEFINED__
#define __IAnalogRadioTuningSpace_INTERFACE_DEFINED__
extern const IID IID_IAnalogRadioTuningSpace;
typedef struct IAnalogRadioTuningSpaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnalogRadioTuningSpace * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnalogRadioTuningSpace * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnalogRadioTuningSpace * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAnalogRadioTuningSpace * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAnalogRadioTuningSpace * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAnalogRadioTuningSpace * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAnalogRadioTuningSpace * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UniqueName) (IAnalogRadioTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_UniqueName) (IAnalogRadioTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IAnalogRadioTuningSpace * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IAnalogRadioTuningSpace * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (IAnalogRadioTuningSpace * This, BSTR * SpaceCLSID);
	HRESULT(STDMETHODCALLTYPE * get_NetworkType) (IAnalogRadioTuningSpace * This, BSTR * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put_NetworkType) (IAnalogRadioTuningSpace * This, BSTR NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get__NetworkType) (IAnalogRadioTuningSpace * This, GUID * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__NetworkType) (IAnalogRadioTuningSpace * This, REFCLSID NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * CreateTuneRequest) (IAnalogRadioTuningSpace * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * EnumCategoryGUIDs) (IAnalogRadioTuningSpace * This, IEnumGUID ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * EnumDeviceMonikers) (IAnalogRadioTuningSpace * This, IEnumMoniker ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_DefaultPreferredComponentTypes) (IAnalogRadioTuningSpace * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_DefaultPreferredComponentTypes) (IAnalogRadioTuningSpace * This, IComponentTypes * NewComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_FrequencyMapping) (IAnalogRadioTuningSpace * This, BSTR * pMapping);
	HRESULT(STDMETHODCALLTYPE * put_FrequencyMapping) (IAnalogRadioTuningSpace * This, BSTR Mapping);
	HRESULT(STDMETHODCALLTYPE * get_DefaultLocator) (IAnalogRadioTuningSpace * This, ILocator ** LocatorVal);
	HRESULT(STDMETHODCALLTYPE * put_DefaultLocator) (IAnalogRadioTuningSpace * This, ILocator * LocatorVal);
	HRESULT(STDMETHODCALLTYPE * Clone) (IAnalogRadioTuningSpace * This, ITuningSpace ** NewTS);
	HRESULT(STDMETHODCALLTYPE * get_MinFrequency) (IAnalogRadioTuningSpace * This, long *MinFrequencyVal);
	HRESULT(STDMETHODCALLTYPE * put_MinFrequency) (IAnalogRadioTuningSpace * This, long NewMinFrequencyVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxFrequency) (IAnalogRadioTuningSpace * This, long *MaxFrequencyVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxFrequency) (IAnalogRadioTuningSpace * This, long NewMaxFrequencyVal);
	HRESULT(STDMETHODCALLTYPE * get_Step) (IAnalogRadioTuningSpace * This, long *StepVal);
	HRESULT(STDMETHODCALLTYPE * put_Step) (IAnalogRadioTuningSpace * This, long NewStepVal);
	END_INTERFACE
} IAnalogRadioTuningSpaceVtbl;
interface IAnalogRadioTuningSpace
{
	CONST_VTBL struct IAnalogRadioTuningSpaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnalogRadioTuningSpace_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnalogRadioTuningSpace_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAnalogRadioTuningSpace_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAnalogRadioTuningSpace_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAnalogRadioTuningSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAnalogRadioTuningSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAnalogRadioTuningSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAnalogRadioTuningSpace_get_UniqueName(This,Name)    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
#define IAnalogRadioTuningSpace_put_UniqueName(This,Name)    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
#define IAnalogRadioTuningSpace_get_FriendlyName(This,Name)    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
#define IAnalogRadioTuningSpace_put_FriendlyName(This,Name)    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
#define IAnalogRadioTuningSpace_get_CLSID(This,SpaceCLSID)    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
#define IAnalogRadioTuningSpace_get_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
#define IAnalogRadioTuningSpace_put_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
#define IAnalogRadioTuningSpace_get__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
#define IAnalogRadioTuningSpace_put__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
#define IAnalogRadioTuningSpace_CreateTuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
#define IAnalogRadioTuningSpace_EnumCategoryGUIDs(This,ppEnum)    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
#define IAnalogRadioTuningSpace_EnumDeviceMonikers(This,ppEnum)    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
#define IAnalogRadioTuningSpace_get_DefaultPreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
#define IAnalogRadioTuningSpace_put_DefaultPreferredComponentTypes(This,NewComponentTypes)    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
#define IAnalogRadioTuningSpace_get_FrequencyMapping(This,pMapping)    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
#define IAnalogRadioTuningSpace_put_FrequencyMapping(This,Mapping)    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
#define IAnalogRadioTuningSpace_get_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
#define IAnalogRadioTuningSpace_put_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
#define IAnalogRadioTuningSpace_Clone(This,NewTS)    ( (This)->lpVtbl -> Clone(This,NewTS) )
#define IAnalogRadioTuningSpace_get_MinFrequency(This,MinFrequencyVal)    ( (This)->lpVtbl -> get_MinFrequency(This,MinFrequencyVal) )
#define IAnalogRadioTuningSpace_put_MinFrequency(This,NewMinFrequencyVal)    ( (This)->lpVtbl -> put_MinFrequency(This,NewMinFrequencyVal) )
#define IAnalogRadioTuningSpace_get_MaxFrequency(This,MaxFrequencyVal)    ( (This)->lpVtbl -> get_MaxFrequency(This,MaxFrequencyVal) )
#define IAnalogRadioTuningSpace_put_MaxFrequency(This,NewMaxFrequencyVal)    ( (This)->lpVtbl -> put_MaxFrequency(This,NewMaxFrequencyVal) )
#define IAnalogRadioTuningSpace_get_Step(This,StepVal)    ( (This)->lpVtbl -> get_Step(This,StepVal) )
#define IAnalogRadioTuningSpace_put_Step(This,NewStepVal)    ( (This)->lpVtbl -> put_Step(This,NewStepVal) )
#endif
#endif
#ifndef __IAnalogRadioTuningSpace2_INTERFACE_DEFINED__
#define __IAnalogRadioTuningSpace2_INTERFACE_DEFINED__
extern const IID IID_IAnalogRadioTuningSpace2;
typedef struct IAnalogRadioTuningSpace2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnalogRadioTuningSpace2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnalogRadioTuningSpace2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnalogRadioTuningSpace2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAnalogRadioTuningSpace2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAnalogRadioTuningSpace2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAnalogRadioTuningSpace2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAnalogRadioTuningSpace2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UniqueName) (IAnalogRadioTuningSpace2 * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_UniqueName) (IAnalogRadioTuningSpace2 * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IAnalogRadioTuningSpace2 * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * put_FriendlyName) (IAnalogRadioTuningSpace2 * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (IAnalogRadioTuningSpace2 * This, BSTR * SpaceCLSID);
	HRESULT(STDMETHODCALLTYPE * get_NetworkType) (IAnalogRadioTuningSpace2 * This, BSTR * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put_NetworkType) (IAnalogRadioTuningSpace2 * This, BSTR NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get__NetworkType) (IAnalogRadioTuningSpace2 * This, GUID * NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__NetworkType) (IAnalogRadioTuningSpace2 * This, REFCLSID NetworkTypeGuid);
	HRESULT(STDMETHODCALLTYPE * CreateTuneRequest) (IAnalogRadioTuningSpace2 * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * EnumCategoryGUIDs) (IAnalogRadioTuningSpace2 * This, IEnumGUID ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * EnumDeviceMonikers) (IAnalogRadioTuningSpace2 * This, IEnumMoniker ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_DefaultPreferredComponentTypes) (IAnalogRadioTuningSpace2 * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_DefaultPreferredComponentTypes) (IAnalogRadioTuningSpace2 * This, IComponentTypes * NewComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_FrequencyMapping) (IAnalogRadioTuningSpace2 * This, BSTR * pMapping);
	HRESULT(STDMETHODCALLTYPE * put_FrequencyMapping) (IAnalogRadioTuningSpace2 * This, BSTR Mapping);
	HRESULT(STDMETHODCALLTYPE * get_DefaultLocator) (IAnalogRadioTuningSpace2 * This, ILocator ** LocatorVal);
	HRESULT(STDMETHODCALLTYPE * put_DefaultLocator) (IAnalogRadioTuningSpace2 * This, ILocator * LocatorVal);
	HRESULT(STDMETHODCALLTYPE * Clone) (IAnalogRadioTuningSpace2 * This, ITuningSpace ** NewTS);
	HRESULT(STDMETHODCALLTYPE * get_MinFrequency) (IAnalogRadioTuningSpace2 * This, long *MinFrequencyVal);
	HRESULT(STDMETHODCALLTYPE * put_MinFrequency) (IAnalogRadioTuningSpace2 * This, long NewMinFrequencyVal);
	HRESULT(STDMETHODCALLTYPE * get_MaxFrequency) (IAnalogRadioTuningSpace2 * This, long *MaxFrequencyVal);
	HRESULT(STDMETHODCALLTYPE * put_MaxFrequency) (IAnalogRadioTuningSpace2 * This, long NewMaxFrequencyVal);
	HRESULT(STDMETHODCALLTYPE * get_Step) (IAnalogRadioTuningSpace2 * This, long *StepVal);
	HRESULT(STDMETHODCALLTYPE * put_Step) (IAnalogRadioTuningSpace2 * This, long NewStepVal);
	HRESULT(STDMETHODCALLTYPE * get_CountryCode) (IAnalogRadioTuningSpace2 * This, long *CountryCodeVal);
	HRESULT(STDMETHODCALLTYPE * put_CountryCode) (IAnalogRadioTuningSpace2 * This, long NewCountryCodeVal);
	END_INTERFACE
} IAnalogRadioTuningSpace2Vtbl;
interface IAnalogRadioTuningSpace2
{
	CONST_VTBL struct IAnalogRadioTuningSpace2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnalogRadioTuningSpace2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnalogRadioTuningSpace2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAnalogRadioTuningSpace2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAnalogRadioTuningSpace2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAnalogRadioTuningSpace2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAnalogRadioTuningSpace2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAnalogRadioTuningSpace2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAnalogRadioTuningSpace2_get_UniqueName(This,Name)    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
#define IAnalogRadioTuningSpace2_put_UniqueName(This,Name)    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
#define IAnalogRadioTuningSpace2_get_FriendlyName(This,Name)    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
#define IAnalogRadioTuningSpace2_put_FriendlyName(This,Name)    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
#define IAnalogRadioTuningSpace2_get_CLSID(This,SpaceCLSID)    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
#define IAnalogRadioTuningSpace2_get_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
#define IAnalogRadioTuningSpace2_put_NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
#define IAnalogRadioTuningSpace2_get__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
#define IAnalogRadioTuningSpace2_put__NetworkType(This,NetworkTypeGuid)    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
#define IAnalogRadioTuningSpace2_CreateTuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
#define IAnalogRadioTuningSpace2_EnumCategoryGUIDs(This,ppEnum)    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
#define IAnalogRadioTuningSpace2_EnumDeviceMonikers(This,ppEnum)    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
#define IAnalogRadioTuningSpace2_get_DefaultPreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
#define IAnalogRadioTuningSpace2_put_DefaultPreferredComponentTypes(This,NewComponentTypes)    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
#define IAnalogRadioTuningSpace2_get_FrequencyMapping(This,pMapping)    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
#define IAnalogRadioTuningSpace2_put_FrequencyMapping(This,Mapping)    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
#define IAnalogRadioTuningSpace2_get_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
#define IAnalogRadioTuningSpace2_put_DefaultLocator(This,LocatorVal)    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
#define IAnalogRadioTuningSpace2_Clone(This,NewTS)    ( (This)->lpVtbl -> Clone(This,NewTS) )
#define IAnalogRadioTuningSpace2_get_MinFrequency(This,MinFrequencyVal)    ( (This)->lpVtbl -> get_MinFrequency(This,MinFrequencyVal) )
#define IAnalogRadioTuningSpace2_put_MinFrequency(This,NewMinFrequencyVal)    ( (This)->lpVtbl -> put_MinFrequency(This,NewMinFrequencyVal) )
#define IAnalogRadioTuningSpace2_get_MaxFrequency(This,MaxFrequencyVal)    ( (This)->lpVtbl -> get_MaxFrequency(This,MaxFrequencyVal) )
#define IAnalogRadioTuningSpace2_put_MaxFrequency(This,NewMaxFrequencyVal)    ( (This)->lpVtbl -> put_MaxFrequency(This,NewMaxFrequencyVal) )
#define IAnalogRadioTuningSpace2_get_Step(This,StepVal)    ( (This)->lpVtbl -> get_Step(This,StepVal) )
#define IAnalogRadioTuningSpace2_put_Step(This,NewStepVal)    ( (This)->lpVtbl -> put_Step(This,NewStepVal) )
#define IAnalogRadioTuningSpace2_get_CountryCode(This,CountryCodeVal)    ( (This)->lpVtbl -> get_CountryCode(This,CountryCodeVal) )
#define IAnalogRadioTuningSpace2_put_CountryCode(This,NewCountryCodeVal)    ( (This)->lpVtbl -> put_CountryCode(This,NewCountryCodeVal) )
#endif
#endif
#ifndef __ITuneRequest_INTERFACE_DEFINED__
#define __ITuneRequest_INTERFACE_DEFINED__
extern const IID IID_ITuneRequest;
typedef struct ITuneRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITuneRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITuneRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITuneRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITuneRequest * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITuneRequest * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITuneRequest * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITuneRequest * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_TuningSpace) (ITuneRequest * This, ITuningSpace ** TuningSpace);
	HRESULT(STDMETHODCALLTYPE * get_Components) (ITuneRequest * This, IComponents ** Components);
	HRESULT(STDMETHODCALLTYPE * Clone) (ITuneRequest * This, ITuneRequest ** NewTuneRequest);
	HRESULT(STDMETHODCALLTYPE * get_Locator) (ITuneRequest * This, ILocator ** Locator);
	HRESULT(STDMETHODCALLTYPE * put_Locator) (ITuneRequest * This, ILocator * Locator);
	END_INTERFACE
} ITuneRequestVtbl;
interface ITuneRequest
{
	CONST_VTBL struct ITuneRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITuneRequest_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITuneRequest_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITuneRequest_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITuneRequest_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITuneRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITuneRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITuneRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITuneRequest_get_TuningSpace(This,TuningSpace)    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
#define ITuneRequest_get_Components(This,Components)    ( (This)->lpVtbl -> get_Components(This,Components) )
#define ITuneRequest_Clone(This,NewTuneRequest)    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
#define ITuneRequest_get_Locator(This,Locator)    ( (This)->lpVtbl -> get_Locator(This,Locator) )
#define ITuneRequest_put_Locator(This,Locator)    ( (This)->lpVtbl -> put_Locator(This,Locator) )
#endif
#endif
#ifndef __IChannelIDTuneRequest_INTERFACE_DEFINED__
#define __IChannelIDTuneRequest_INTERFACE_DEFINED__
extern const IID IID_IChannelIDTuneRequest;
typedef struct IChannelIDTuneRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IChannelIDTuneRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IChannelIDTuneRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (IChannelIDTuneRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IChannelIDTuneRequest * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IChannelIDTuneRequest * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IChannelIDTuneRequest * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IChannelIDTuneRequest * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_TuningSpace) (IChannelIDTuneRequest * This, ITuningSpace ** TuningSpace);
	HRESULT(STDMETHODCALLTYPE * get_Components) (IChannelIDTuneRequest * This, IComponents ** Components);
	HRESULT(STDMETHODCALLTYPE * Clone) (IChannelIDTuneRequest * This, ITuneRequest ** NewTuneRequest);
	HRESULT(STDMETHODCALLTYPE * get_Locator) (IChannelIDTuneRequest * This, ILocator ** Locator);
	HRESULT(STDMETHODCALLTYPE * put_Locator) (IChannelIDTuneRequest * This, ILocator * Locator);
	HRESULT(STDMETHODCALLTYPE * get_ChannelID) (IChannelIDTuneRequest * This, BSTR * ChannelID);
	HRESULT(STDMETHODCALLTYPE * put_ChannelID) (IChannelIDTuneRequest * This, BSTR ChannelID);
	END_INTERFACE
} IChannelIDTuneRequestVtbl;
interface IChannelIDTuneRequest
{
	CONST_VTBL struct IChannelIDTuneRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IChannelIDTuneRequest_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IChannelIDTuneRequest_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IChannelIDTuneRequest_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IChannelIDTuneRequest_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IChannelIDTuneRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IChannelIDTuneRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IChannelIDTuneRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IChannelIDTuneRequest_get_TuningSpace(This,TuningSpace)    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
#define IChannelIDTuneRequest_get_Components(This,Components)    ( (This)->lpVtbl -> get_Components(This,Components) )
#define IChannelIDTuneRequest_Clone(This,NewTuneRequest)    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
#define IChannelIDTuneRequest_get_Locator(This,Locator)    ( (This)->lpVtbl -> get_Locator(This,Locator) )
#define IChannelIDTuneRequest_put_Locator(This,Locator)    ( (This)->lpVtbl -> put_Locator(This,Locator) )
#define IChannelIDTuneRequest_get_ChannelID(This,ChannelID)    ( (This)->lpVtbl -> get_ChannelID(This,ChannelID) )
#define IChannelIDTuneRequest_put_ChannelID(This,ChannelID)    ( (This)->lpVtbl -> put_ChannelID(This,ChannelID) )
#endif
#endif
#ifndef __IChannelTuneRequest_INTERFACE_DEFINED__
#define __IChannelTuneRequest_INTERFACE_DEFINED__
extern const IID IID_IChannelTuneRequest;
typedef struct IChannelTuneRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IChannelTuneRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IChannelTuneRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (IChannelTuneRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IChannelTuneRequest * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IChannelTuneRequest * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IChannelTuneRequest * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IChannelTuneRequest * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_TuningSpace) (IChannelTuneRequest * This, ITuningSpace ** TuningSpace);
	HRESULT(STDMETHODCALLTYPE * get_Components) (IChannelTuneRequest * This, IComponents ** Components);
	HRESULT(STDMETHODCALLTYPE * Clone) (IChannelTuneRequest * This, ITuneRequest ** NewTuneRequest);
	HRESULT(STDMETHODCALLTYPE * get_Locator) (IChannelTuneRequest * This, ILocator ** Locator);
	HRESULT(STDMETHODCALLTYPE * put_Locator) (IChannelTuneRequest * This, ILocator * Locator);
	HRESULT(STDMETHODCALLTYPE * get_Channel) (IChannelTuneRequest * This, long *Channel);
	HRESULT(STDMETHODCALLTYPE * put_Channel) (IChannelTuneRequest * This, long Channel);
	END_INTERFACE
} IChannelTuneRequestVtbl;
interface IChannelTuneRequest
{
	CONST_VTBL struct IChannelTuneRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IChannelTuneRequest_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IChannelTuneRequest_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IChannelTuneRequest_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IChannelTuneRequest_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IChannelTuneRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IChannelTuneRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IChannelTuneRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IChannelTuneRequest_get_TuningSpace(This,TuningSpace)    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
#define IChannelTuneRequest_get_Components(This,Components)    ( (This)->lpVtbl -> get_Components(This,Components) )
#define IChannelTuneRequest_Clone(This,NewTuneRequest)    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
#define IChannelTuneRequest_get_Locator(This,Locator)    ( (This)->lpVtbl -> get_Locator(This,Locator) )
#define IChannelTuneRequest_put_Locator(This,Locator)    ( (This)->lpVtbl -> put_Locator(This,Locator) )
#define IChannelTuneRequest_get_Channel(This,Channel)    ( (This)->lpVtbl -> get_Channel(This,Channel) )
#define IChannelTuneRequest_put_Channel(This,Channel)    ( (This)->lpVtbl -> put_Channel(This,Channel) )
#endif
#endif
#ifndef __IATSCChannelTuneRequest_INTERFACE_DEFINED__
#define __IATSCChannelTuneRequest_INTERFACE_DEFINED__
extern const IID IID_IATSCChannelTuneRequest;
typedef struct IATSCChannelTuneRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IATSCChannelTuneRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IATSCChannelTuneRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (IATSCChannelTuneRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IATSCChannelTuneRequest * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IATSCChannelTuneRequest * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IATSCChannelTuneRequest * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IATSCChannelTuneRequest * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_TuningSpace) (IATSCChannelTuneRequest * This, ITuningSpace ** TuningSpace);
	HRESULT(STDMETHODCALLTYPE * get_Components) (IATSCChannelTuneRequest * This, IComponents ** Components);
	HRESULT(STDMETHODCALLTYPE * Clone) (IATSCChannelTuneRequest * This, ITuneRequest ** NewTuneRequest);
	HRESULT(STDMETHODCALLTYPE * get_Locator) (IATSCChannelTuneRequest * This, ILocator ** Locator);
	HRESULT(STDMETHODCALLTYPE * put_Locator) (IATSCChannelTuneRequest * This, ILocator * Locator);
	HRESULT(STDMETHODCALLTYPE * get_Channel) (IATSCChannelTuneRequest * This, long *Channel);
	HRESULT(STDMETHODCALLTYPE * put_Channel) (IATSCChannelTuneRequest * This, long Channel);
	HRESULT(STDMETHODCALLTYPE * get_MinorChannel) (IATSCChannelTuneRequest * This, long *MinorChannel);
	HRESULT(STDMETHODCALLTYPE * put_MinorChannel) (IATSCChannelTuneRequest * This, long MinorChannel);
	END_INTERFACE
} IATSCChannelTuneRequestVtbl;
interface IATSCChannelTuneRequest
{
	CONST_VTBL struct IATSCChannelTuneRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IATSCChannelTuneRequest_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IATSCChannelTuneRequest_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IATSCChannelTuneRequest_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IATSCChannelTuneRequest_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IATSCChannelTuneRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IATSCChannelTuneRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IATSCChannelTuneRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IATSCChannelTuneRequest_get_TuningSpace(This,TuningSpace)    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
#define IATSCChannelTuneRequest_get_Components(This,Components)    ( (This)->lpVtbl -> get_Components(This,Components) )
#define IATSCChannelTuneRequest_Clone(This,NewTuneRequest)    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
#define IATSCChannelTuneRequest_get_Locator(This,Locator)    ( (This)->lpVtbl -> get_Locator(This,Locator) )
#define IATSCChannelTuneRequest_put_Locator(This,Locator)    ( (This)->lpVtbl -> put_Locator(This,Locator) )
#define IATSCChannelTuneRequest_get_Channel(This,Channel)    ( (This)->lpVtbl -> get_Channel(This,Channel) )
#define IATSCChannelTuneRequest_put_Channel(This,Channel)    ( (This)->lpVtbl -> put_Channel(This,Channel) )
#define IATSCChannelTuneRequest_get_MinorChannel(This,MinorChannel)    ( (This)->lpVtbl -> get_MinorChannel(This,MinorChannel) )
#define IATSCChannelTuneRequest_put_MinorChannel(This,MinorChannel)    ( (This)->lpVtbl -> put_MinorChannel(This,MinorChannel) )
#endif
#endif
#ifndef __IDigitalCableTuneRequest_INTERFACE_DEFINED__
#define __IDigitalCableTuneRequest_INTERFACE_DEFINED__
extern const IID IID_IDigitalCableTuneRequest;
typedef struct IDigitalCableTuneRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDigitalCableTuneRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDigitalCableTuneRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDigitalCableTuneRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDigitalCableTuneRequest * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDigitalCableTuneRequest * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDigitalCableTuneRequest * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDigitalCableTuneRequest * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_TuningSpace) (IDigitalCableTuneRequest * This, ITuningSpace ** TuningSpace);
	HRESULT(STDMETHODCALLTYPE * get_Components) (IDigitalCableTuneRequest * This, IComponents ** Components);
	HRESULT(STDMETHODCALLTYPE * Clone) (IDigitalCableTuneRequest * This, ITuneRequest ** NewTuneRequest);
	HRESULT(STDMETHODCALLTYPE * get_Locator) (IDigitalCableTuneRequest * This, ILocator ** Locator);
	HRESULT(STDMETHODCALLTYPE * put_Locator) (IDigitalCableTuneRequest * This, ILocator * Locator);
	HRESULT(STDMETHODCALLTYPE * get_Channel) (IDigitalCableTuneRequest * This, long *Channel);
	HRESULT(STDMETHODCALLTYPE * put_Channel) (IDigitalCableTuneRequest * This, long Channel);
	HRESULT(STDMETHODCALLTYPE * get_MinorChannel) (IDigitalCableTuneRequest * This, long *MinorChannel);
	HRESULT(STDMETHODCALLTYPE * put_MinorChannel) (IDigitalCableTuneRequest * This, long MinorChannel);
	HRESULT(STDMETHODCALLTYPE * get_MajorChannel) (IDigitalCableTuneRequest * This, long *pMajorChannel);
	HRESULT(STDMETHODCALLTYPE * put_MajorChannel) (IDigitalCableTuneRequest * This, long MajorChannel);
	HRESULT(STDMETHODCALLTYPE * get_SourceID) (IDigitalCableTuneRequest * This, long *pSourceID);
	HRESULT(STDMETHODCALLTYPE * put_SourceID) (IDigitalCableTuneRequest * This, long SourceID);
	END_INTERFACE
} IDigitalCableTuneRequestVtbl;
interface IDigitalCableTuneRequest
{
	CONST_VTBL struct IDigitalCableTuneRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDigitalCableTuneRequest_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDigitalCableTuneRequest_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDigitalCableTuneRequest_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDigitalCableTuneRequest_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDigitalCableTuneRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDigitalCableTuneRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDigitalCableTuneRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDigitalCableTuneRequest_get_TuningSpace(This,TuningSpace)    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
#define IDigitalCableTuneRequest_get_Components(This,Components)    ( (This)->lpVtbl -> get_Components(This,Components) )
#define IDigitalCableTuneRequest_Clone(This,NewTuneRequest)    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
#define IDigitalCableTuneRequest_get_Locator(This,Locator)    ( (This)->lpVtbl -> get_Locator(This,Locator) )
#define IDigitalCableTuneRequest_put_Locator(This,Locator)    ( (This)->lpVtbl -> put_Locator(This,Locator) )
#define IDigitalCableTuneRequest_get_Channel(This,Channel)    ( (This)->lpVtbl -> get_Channel(This,Channel) )
#define IDigitalCableTuneRequest_put_Channel(This,Channel)    ( (This)->lpVtbl -> put_Channel(This,Channel) )
#define IDigitalCableTuneRequest_get_MinorChannel(This,MinorChannel)    ( (This)->lpVtbl -> get_MinorChannel(This,MinorChannel) )
#define IDigitalCableTuneRequest_put_MinorChannel(This,MinorChannel)    ( (This)->lpVtbl -> put_MinorChannel(This,MinorChannel) )
#define IDigitalCableTuneRequest_get_MajorChannel(This,pMajorChannel)    ( (This)->lpVtbl -> get_MajorChannel(This,pMajorChannel) )
#define IDigitalCableTuneRequest_put_MajorChannel(This,MajorChannel)    ( (This)->lpVtbl -> put_MajorChannel(This,MajorChannel) )
#define IDigitalCableTuneRequest_get_SourceID(This,pSourceID)    ( (This)->lpVtbl -> get_SourceID(This,pSourceID) )
#define IDigitalCableTuneRequest_put_SourceID(This,SourceID)    ( (This)->lpVtbl -> put_SourceID(This,SourceID) )
#endif
#endif
#ifndef __IDVBTuneRequest_INTERFACE_DEFINED__
#define __IDVBTuneRequest_INTERFACE_DEFINED__
extern const IID IID_IDVBTuneRequest;
typedef struct IDVBTuneRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVBTuneRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVBTuneRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVBTuneRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDVBTuneRequest * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDVBTuneRequest * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDVBTuneRequest * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDVBTuneRequest * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_TuningSpace) (IDVBTuneRequest * This, ITuningSpace ** TuningSpace);
	HRESULT(STDMETHODCALLTYPE * get_Components) (IDVBTuneRequest * This, IComponents ** Components);
	HRESULT(STDMETHODCALLTYPE * Clone) (IDVBTuneRequest * This, ITuneRequest ** NewTuneRequest);
	HRESULT(STDMETHODCALLTYPE * get_Locator) (IDVBTuneRequest * This, ILocator ** Locator);
	HRESULT(STDMETHODCALLTYPE * put_Locator) (IDVBTuneRequest * This, ILocator * Locator);
	HRESULT(STDMETHODCALLTYPE * get_ONID) (IDVBTuneRequest * This, long *ONID);
	HRESULT(STDMETHODCALLTYPE * put_ONID) (IDVBTuneRequest * This, long ONID);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IDVBTuneRequest * This, long *TSID);
	HRESULT(STDMETHODCALLTYPE * put_TSID) (IDVBTuneRequest * This, long TSID);
	HRESULT(STDMETHODCALLTYPE * get_SID) (IDVBTuneRequest * This, long *SID);
	HRESULT(STDMETHODCALLTYPE * put_SID) (IDVBTuneRequest * This, long SID);
	END_INTERFACE
} IDVBTuneRequestVtbl;
interface IDVBTuneRequest
{
	CONST_VTBL struct IDVBTuneRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVBTuneRequest_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDVBTuneRequest_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDVBTuneRequest_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDVBTuneRequest_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDVBTuneRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDVBTuneRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDVBTuneRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDVBTuneRequest_get_TuningSpace(This,TuningSpace)    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
#define IDVBTuneRequest_get_Components(This,Components)    ( (This)->lpVtbl -> get_Components(This,Components) )
#define IDVBTuneRequest_Clone(This,NewTuneRequest)    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
#define IDVBTuneRequest_get_Locator(This,Locator)    ( (This)->lpVtbl -> get_Locator(This,Locator) )
#define IDVBTuneRequest_put_Locator(This,Locator)    ( (This)->lpVtbl -> put_Locator(This,Locator) )
#define IDVBTuneRequest_get_ONID(This,ONID)    ( (This)->lpVtbl -> get_ONID(This,ONID) )
#define IDVBTuneRequest_put_ONID(This,ONID)    ( (This)->lpVtbl -> put_ONID(This,ONID) )
#define IDVBTuneRequest_get_TSID(This,TSID)    ( (This)->lpVtbl -> get_TSID(This,TSID) )
#define IDVBTuneRequest_put_TSID(This,TSID)    ( (This)->lpVtbl -> put_TSID(This,TSID) )
#define IDVBTuneRequest_get_SID(This,SID)    ( (This)->lpVtbl -> get_SID(This,SID) )
#define IDVBTuneRequest_put_SID(This,SID)    ( (This)->lpVtbl -> put_SID(This,SID) )
#endif
#endif
#ifndef __IMPEG2TuneRequest_INTERFACE_DEFINED__
#define __IMPEG2TuneRequest_INTERFACE_DEFINED__
extern const IID IID_IMPEG2TuneRequest;
typedef struct IMPEG2TuneRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMPEG2TuneRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMPEG2TuneRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMPEG2TuneRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMPEG2TuneRequest * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMPEG2TuneRequest * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMPEG2TuneRequest * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMPEG2TuneRequest * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_TuningSpace) (IMPEG2TuneRequest * This, ITuningSpace ** TuningSpace);
	HRESULT(STDMETHODCALLTYPE * get_Components) (IMPEG2TuneRequest * This, IComponents ** Components);
	HRESULT(STDMETHODCALLTYPE * Clone) (IMPEG2TuneRequest * This, ITuneRequest ** NewTuneRequest);
	HRESULT(STDMETHODCALLTYPE * get_Locator) (IMPEG2TuneRequest * This, ILocator ** Locator);
	HRESULT(STDMETHODCALLTYPE * put_Locator) (IMPEG2TuneRequest * This, ILocator * Locator);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IMPEG2TuneRequest * This, long *TSID);
	HRESULT(STDMETHODCALLTYPE * put_TSID) (IMPEG2TuneRequest * This, long TSID);
	HRESULT(STDMETHODCALLTYPE * get_ProgNo) (IMPEG2TuneRequest * This, long *ProgNo);
	HRESULT(STDMETHODCALLTYPE * put_ProgNo) (IMPEG2TuneRequest * This, long ProgNo);
	END_INTERFACE
} IMPEG2TuneRequestVtbl;
interface IMPEG2TuneRequest
{
	CONST_VTBL struct IMPEG2TuneRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMPEG2TuneRequest_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMPEG2TuneRequest_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMPEG2TuneRequest_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMPEG2TuneRequest_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMPEG2TuneRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMPEG2TuneRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMPEG2TuneRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMPEG2TuneRequest_get_TuningSpace(This,TuningSpace)    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
#define IMPEG2TuneRequest_get_Components(This,Components)    ( (This)->lpVtbl -> get_Components(This,Components) )
#define IMPEG2TuneRequest_Clone(This,NewTuneRequest)    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
#define IMPEG2TuneRequest_get_Locator(This,Locator)    ( (This)->lpVtbl -> get_Locator(This,Locator) )
#define IMPEG2TuneRequest_put_Locator(This,Locator)    ( (This)->lpVtbl -> put_Locator(This,Locator) )
#define IMPEG2TuneRequest_get_TSID(This,TSID)    ( (This)->lpVtbl -> get_TSID(This,TSID) )
#define IMPEG2TuneRequest_put_TSID(This,TSID)    ( (This)->lpVtbl -> put_TSID(This,TSID) )
#define IMPEG2TuneRequest_get_ProgNo(This,ProgNo)    ( (This)->lpVtbl -> get_ProgNo(This,ProgNo) )
#define IMPEG2TuneRequest_put_ProgNo(This,ProgNo)    ( (This)->lpVtbl -> put_ProgNo(This,ProgNo) )
#endif
#endif
#ifndef __IMPEG2TuneRequestFactory_INTERFACE_DEFINED__
#define __IMPEG2TuneRequestFactory_INTERFACE_DEFINED__
extern const IID IID_IMPEG2TuneRequestFactory;
typedef struct IMPEG2TuneRequestFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMPEG2TuneRequestFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMPEG2TuneRequestFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMPEG2TuneRequestFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMPEG2TuneRequestFactory * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMPEG2TuneRequestFactory * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMPEG2TuneRequestFactory * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMPEG2TuneRequestFactory * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateTuneRequest) (IMPEG2TuneRequestFactory * This, ITuningSpace * TuningSpace, IMPEG2TuneRequest ** TuneRequest);
	END_INTERFACE
} IMPEG2TuneRequestFactoryVtbl;
interface IMPEG2TuneRequestFactory
{
	CONST_VTBL struct IMPEG2TuneRequestFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMPEG2TuneRequestFactory_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMPEG2TuneRequestFactory_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMPEG2TuneRequestFactory_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMPEG2TuneRequestFactory_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMPEG2TuneRequestFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMPEG2TuneRequestFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMPEG2TuneRequestFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMPEG2TuneRequestFactory_CreateTuneRequest(This,TuningSpace,TuneRequest)    ( (This)->lpVtbl -> CreateTuneRequest(This,TuningSpace,TuneRequest) )
#endif
#endif
#ifndef __IMPEG2TuneRequestSupport_INTERFACE_DEFINED__
#define __IMPEG2TuneRequestSupport_INTERFACE_DEFINED__
extern const IID IID_IMPEG2TuneRequestSupport;
typedef struct IMPEG2TuneRequestSupportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMPEG2TuneRequestSupport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMPEG2TuneRequestSupport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMPEG2TuneRequestSupport * This);
	END_INTERFACE
} IMPEG2TuneRequestSupportVtbl;
interface IMPEG2TuneRequestSupport
{
	CONST_VTBL struct IMPEG2TuneRequestSupportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMPEG2TuneRequestSupport_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMPEG2TuneRequestSupport_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMPEG2TuneRequestSupport_Release(This)    ( (This)->lpVtbl -> Release(This) )
#endif
#endif
#ifndef __ITunerCap_INTERFACE_DEFINED__
#define __ITunerCap_INTERFACE_DEFINED__
extern const IID IID_ITunerCap;
typedef struct ITunerCapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITunerCap * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITunerCap * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITunerCap * This);
	HRESULT(STDMETHODCALLTYPE * get_SupportedNetworkTypes) (ITunerCap * This, ULONG ulcNetworkTypesMax, ULONG * pulcNetworkTypes, GUID * pguidNetworkTypes);
	HRESULT(STDMETHODCALLTYPE * get_SupportedVideoFormats) (ITunerCap * This, ULONG * pulAMTunerModeType, ULONG * pulAnalogVideoStandard);
	HRESULT(STDMETHODCALLTYPE * get_AuxInputCount) (ITunerCap * This, ULONG * pulCompositeCount, ULONG * pulSvideoCount);
	END_INTERFACE
} ITunerCapVtbl;
interface ITunerCap
{
	CONST_VTBL struct ITunerCapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITunerCap_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITunerCap_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITunerCap_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITunerCap_get_SupportedNetworkTypes(This,ulcNetworkTypesMax,pulcNetworkTypes,pguidNetworkTypes)    ( (This)->lpVtbl -> get_SupportedNetworkTypes(This,ulcNetworkTypesMax,pulcNetworkTypes,pguidNetworkTypes) )
#define ITunerCap_get_SupportedVideoFormats(This,pulAMTunerModeType,pulAnalogVideoStandard)    ( (This)->lpVtbl -> get_SupportedVideoFormats(This,pulAMTunerModeType,pulAnalogVideoStandard) )
#define ITunerCap_get_AuxInputCount(This,pulCompositeCount,pulSvideoCount)    ( (This)->lpVtbl -> get_AuxInputCount(This,pulCompositeCount,pulSvideoCount) )
#endif
#endif
#ifndef __ITunerCapEx_INTERFACE_DEFINED__
#define __ITunerCapEx_INTERFACE_DEFINED__
extern const IID IID_ITunerCapEx;
typedef struct ITunerCapExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITunerCapEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITunerCapEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITunerCapEx * This);
	HRESULT(STDMETHODCALLTYPE * get_Has608_708Caption) (ITunerCapEx * This, VARIANT_BOOL * pbHasCaption);
	END_INTERFACE
} ITunerCapExVtbl;
interface ITunerCapEx
{
	CONST_VTBL struct ITunerCapExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITunerCapEx_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITunerCapEx_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITunerCapEx_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITunerCapEx_get_Has608_708Caption(This,pbHasCaption)    ( (This)->lpVtbl -> get_Has608_708Caption(This,pbHasCaption) )
#endif
#endif
#ifndef __ITuner_INTERFACE_DEFINED__
#define __ITuner_INTERFACE_DEFINED__
extern const IID IID_ITuner;
typedef struct ITunerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITuner * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITuner * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITuner * This);
	HRESULT(STDMETHODCALLTYPE * get_TuningSpace) (ITuner * This, ITuningSpace ** TuningSpace);
	HRESULT(STDMETHODCALLTYPE * put_TuningSpace) (ITuner * This, ITuningSpace * TuningSpace);
	HRESULT(STDMETHODCALLTYPE * EnumTuningSpaces) (ITuner * This, IEnumTuningSpaces ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_TuneRequest) (ITuner * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * put_TuneRequest) (ITuner * This, ITuneRequest * TuneRequest);
	HRESULT(STDMETHODCALLTYPE * Validate) (ITuner * This, ITuneRequest * TuneRequest);
	HRESULT(STDMETHODCALLTYPE * get_PreferredComponentTypes) (ITuner * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_PreferredComponentTypes) (ITuner * This, IComponentTypes * ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_SignalStrength) (ITuner * This, long *Strength);
	HRESULT(STDMETHODCALLTYPE * TriggerSignalEvents) (ITuner * This, long Interval);
	END_INTERFACE
} ITunerVtbl;
interface ITuner
{
	CONST_VTBL struct ITunerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITuner_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITuner_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ITuner_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ITuner_get_TuningSpace(This,TuningSpace)    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
#define ITuner_put_TuningSpace(This,TuningSpace)    ( (This)->lpVtbl -> put_TuningSpace(This,TuningSpace) )
#define ITuner_EnumTuningSpaces(This,ppEnum)    ( (This)->lpVtbl -> EnumTuningSpaces(This,ppEnum) )
#define ITuner_get_TuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> get_TuneRequest(This,TuneRequest) )
#define ITuner_put_TuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> put_TuneRequest(This,TuneRequest) )
#define ITuner_Validate(This,TuneRequest)    ( (This)->lpVtbl -> Validate(This,TuneRequest) )
#define ITuner_get_PreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_PreferredComponentTypes(This,ComponentTypes) )
#define ITuner_put_PreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> put_PreferredComponentTypes(This,ComponentTypes) )
#define ITuner_get_SignalStrength(This,Strength)    ( (This)->lpVtbl -> get_SignalStrength(This,Strength) )
#define ITuner_TriggerSignalEvents(This,Interval)    ( (This)->lpVtbl -> TriggerSignalEvents(This,Interval) )
#endif
#endif
#ifndef __IScanningTuner_INTERFACE_DEFINED__
#define __IScanningTuner_INTERFACE_DEFINED__
extern const IID IID_IScanningTuner;
typedef struct IScanningTunerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IScanningTuner * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IScanningTuner * This);
	ULONG(STDMETHODCALLTYPE * Release) (IScanningTuner * This);
	HRESULT(STDMETHODCALLTYPE * get_TuningSpace) (IScanningTuner * This, ITuningSpace ** TuningSpace);
	HRESULT(STDMETHODCALLTYPE * put_TuningSpace) (IScanningTuner * This, ITuningSpace * TuningSpace);
	HRESULT(STDMETHODCALLTYPE * EnumTuningSpaces) (IScanningTuner * This, IEnumTuningSpaces ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_TuneRequest) (IScanningTuner * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * put_TuneRequest) (IScanningTuner * This, ITuneRequest * TuneRequest);
	HRESULT(STDMETHODCALLTYPE * Validate) (IScanningTuner * This, ITuneRequest * TuneRequest);
	HRESULT(STDMETHODCALLTYPE * get_PreferredComponentTypes) (IScanningTuner * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_PreferredComponentTypes) (IScanningTuner * This, IComponentTypes * ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_SignalStrength) (IScanningTuner * This, long *Strength);
	HRESULT(STDMETHODCALLTYPE * TriggerSignalEvents) (IScanningTuner * This, long Interval);
	HRESULT(STDMETHODCALLTYPE * SeekUp) (IScanningTuner * This);
	HRESULT(STDMETHODCALLTYPE * SeekDown) (IScanningTuner * This);
	HRESULT(STDMETHODCALLTYPE * ScanUp) (IScanningTuner * This, long MillisecondsPause);
	HRESULT(STDMETHODCALLTYPE * ScanDown) (IScanningTuner * This, long MillisecondsPause);
	HRESULT(STDMETHODCALLTYPE * AutoProgram) (IScanningTuner * This);
	END_INTERFACE
} IScanningTunerVtbl;
interface IScanningTuner
{
	CONST_VTBL struct IScanningTunerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IScanningTuner_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IScanningTuner_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IScanningTuner_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IScanningTuner_get_TuningSpace(This,TuningSpace)    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
#define IScanningTuner_put_TuningSpace(This,TuningSpace)    ( (This)->lpVtbl -> put_TuningSpace(This,TuningSpace) )
#define IScanningTuner_EnumTuningSpaces(This,ppEnum)    ( (This)->lpVtbl -> EnumTuningSpaces(This,ppEnum) )
#define IScanningTuner_get_TuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> get_TuneRequest(This,TuneRequest) )
#define IScanningTuner_put_TuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> put_TuneRequest(This,TuneRequest) )
#define IScanningTuner_Validate(This,TuneRequest)    ( (This)->lpVtbl -> Validate(This,TuneRequest) )
#define IScanningTuner_get_PreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_PreferredComponentTypes(This,ComponentTypes) )
#define IScanningTuner_put_PreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> put_PreferredComponentTypes(This,ComponentTypes) )
#define IScanningTuner_get_SignalStrength(This,Strength)    ( (This)->lpVtbl -> get_SignalStrength(This,Strength) )
#define IScanningTuner_TriggerSignalEvents(This,Interval)    ( (This)->lpVtbl -> TriggerSignalEvents(This,Interval) )
#define IScanningTuner_SeekUp(This)    ( (This)->lpVtbl -> SeekUp(This) )
#define IScanningTuner_SeekDown(This)    ( (This)->lpVtbl -> SeekDown(This) )
#define IScanningTuner_ScanUp(This,MillisecondsPause)    ( (This)->lpVtbl -> ScanUp(This,MillisecondsPause) )
#define IScanningTuner_ScanDown(This,MillisecondsPause)    ( (This)->lpVtbl -> ScanDown(This,MillisecondsPause) )
#define IScanningTuner_AutoProgram(This)    ( (This)->lpVtbl -> AutoProgram(This) )
#endif
#endif
#ifndef __IScanningTunerEx_INTERFACE_DEFINED__
#define __IScanningTunerEx_INTERFACE_DEFINED__
extern const IID IID_IScanningTunerEx;
typedef struct IScanningTunerExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IScanningTunerEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IScanningTunerEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IScanningTunerEx * This);
	HRESULT(STDMETHODCALLTYPE * get_TuningSpace) (IScanningTunerEx * This, ITuningSpace ** TuningSpace);
	HRESULT(STDMETHODCALLTYPE * put_TuningSpace) (IScanningTunerEx * This, ITuningSpace * TuningSpace);
	HRESULT(STDMETHODCALLTYPE * EnumTuningSpaces) (IScanningTunerEx * This, IEnumTuningSpaces ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_TuneRequest) (IScanningTunerEx * This, ITuneRequest ** TuneRequest);
	HRESULT(STDMETHODCALLTYPE * put_TuneRequest) (IScanningTunerEx * This, ITuneRequest * TuneRequest);
	HRESULT(STDMETHODCALLTYPE * Validate) (IScanningTunerEx * This, ITuneRequest * TuneRequest);
	HRESULT(STDMETHODCALLTYPE * get_PreferredComponentTypes) (IScanningTunerEx * This, IComponentTypes ** ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * put_PreferredComponentTypes) (IScanningTunerEx * This, IComponentTypes * ComponentTypes);
	HRESULT(STDMETHODCALLTYPE * get_SignalStrength) (IScanningTunerEx * This, long *Strength);
	HRESULT(STDMETHODCALLTYPE * TriggerSignalEvents) (IScanningTunerEx * This, long Interval);
	HRESULT(STDMETHODCALLTYPE * SeekUp) (IScanningTunerEx * This);
	HRESULT(STDMETHODCALLTYPE * SeekDown) (IScanningTunerEx * This);
	HRESULT(STDMETHODCALLTYPE * ScanUp) (IScanningTunerEx * This, long MillisecondsPause);
	HRESULT(STDMETHODCALLTYPE * ScanDown) (IScanningTunerEx * This, long MillisecondsPause);
	HRESULT(STDMETHODCALLTYPE * AutoProgram) (IScanningTunerEx * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentLocator) (IScanningTunerEx * This, ILocator ** pILocator);
	HRESULT(STDMETHODCALLTYPE * PerformExhaustiveScan) (IScanningTunerEx * This, long dwLowerFreq, long dwHigherFreq, VARIANT_BOOL bFineTune, HEVENT hEvent);
	HRESULT(STDMETHODCALLTYPE * TerminateCurrentScan) (IScanningTunerEx * This, long *pcurrentFreq);
	HRESULT(STDMETHODCALLTYPE * ResumeCurrentScan) (IScanningTunerEx * This, HEVENT hEvent);
	HRESULT(STDMETHODCALLTYPE * GetTunerScanningCapability) (IScanningTunerEx * This, long *HardwareAssistedScanning, long *NumStandardsSupported, GUID * BroadcastStandards);
	HRESULT(STDMETHODCALLTYPE * GetTunerStatus) (IScanningTunerEx * This, long *SecondsLeft, long *CurrentLockType, long *AutoDetect, long *CurrentFreq);
	HRESULT(STDMETHODCALLTYPE * GetCurrentTunerStandardCapability) (IScanningTunerEx * This, GUID CurrentBroadcastStandard, long *SettlingTime, long *TvStandardsSupported);
	HRESULT(STDMETHODCALLTYPE * SetScanSignalTypeFilter) (IScanningTunerEx * This, long ScanModulationTypes, long AnalogVideoStandard);
	END_INTERFACE
} IScanningTunerExVtbl;
interface IScanningTunerEx
{
	CONST_VTBL struct IScanningTunerExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IScanningTunerEx_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IScanningTunerEx_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IScanningTunerEx_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IScanningTunerEx_get_TuningSpace(This,TuningSpace)    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
#define IScanningTunerEx_put_TuningSpace(This,TuningSpace)    ( (This)->lpVtbl -> put_TuningSpace(This,TuningSpace) )
#define IScanningTunerEx_EnumTuningSpaces(This,ppEnum)    ( (This)->lpVtbl -> EnumTuningSpaces(This,ppEnum) )
#define IScanningTunerEx_get_TuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> get_TuneRequest(This,TuneRequest) )
#define IScanningTunerEx_put_TuneRequest(This,TuneRequest)    ( (This)->lpVtbl -> put_TuneRequest(This,TuneRequest) )
#define IScanningTunerEx_Validate(This,TuneRequest)    ( (This)->lpVtbl -> Validate(This,TuneRequest) )
#define IScanningTunerEx_get_PreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> get_PreferredComponentTypes(This,ComponentTypes) )
#define IScanningTunerEx_put_PreferredComponentTypes(This,ComponentTypes)    ( (This)->lpVtbl -> put_PreferredComponentTypes(This,ComponentTypes) )
#define IScanningTunerEx_get_SignalStrength(This,Strength)    ( (This)->lpVtbl -> get_SignalStrength(This,Strength) )
#define IScanningTunerEx_TriggerSignalEvents(This,Interval)    ( (This)->lpVtbl -> TriggerSignalEvents(This,Interval) )
#define IScanningTunerEx_SeekUp(This)    ( (This)->lpVtbl -> SeekUp(This) )
#define IScanningTunerEx_SeekDown(This)    ( (This)->lpVtbl -> SeekDown(This) )
#define IScanningTunerEx_ScanUp(This,MillisecondsPause)    ( (This)->lpVtbl -> ScanUp(This,MillisecondsPause) )
#define IScanningTunerEx_ScanDown(This,MillisecondsPause)    ( (This)->lpVtbl -> ScanDown(This,MillisecondsPause) )
#define IScanningTunerEx_AutoProgram(This)    ( (This)->lpVtbl -> AutoProgram(This) )
#define IScanningTunerEx_GetCurrentLocator(This,pILocator)    ( (This)->lpVtbl -> GetCurrentLocator(This,pILocator) )
#define IScanningTunerEx_PerformExhaustiveScan(This,dwLowerFreq,dwHigherFreq,bFineTune,hEvent)    ( (This)->lpVtbl -> PerformExhaustiveScan(This,dwLowerFreq,dwHigherFreq,bFineTune,hEvent) )
#define IScanningTunerEx_TerminateCurrentScan(This,pcurrentFreq)    ( (This)->lpVtbl -> TerminateCurrentScan(This,pcurrentFreq) )
#define IScanningTunerEx_ResumeCurrentScan(This,hEvent)    ( (This)->lpVtbl -> ResumeCurrentScan(This,hEvent) )
#define IScanningTunerEx_GetTunerScanningCapability(This,HardwareAssistedScanning,NumStandardsSupported,BroadcastStandards)    ( (This)->lpVtbl -> GetTunerScanningCapability(This,HardwareAssistedScanning,NumStandardsSupported,BroadcastStandards) )
#define IScanningTunerEx_GetTunerStatus(This,SecondsLeft,CurrentLockType,AutoDetect,CurrentFreq)    ( (This)->lpVtbl -> GetTunerStatus(This,SecondsLeft,CurrentLockType,AutoDetect,CurrentFreq) )
#define IScanningTunerEx_GetCurrentTunerStandardCapability(This,CurrentBroadcastStandard,SettlingTime,TvStandardsSupported)    ( (This)->lpVtbl -> GetCurrentTunerStandardCapability(This,CurrentBroadcastStandard,SettlingTime,TvStandardsSupported) )
#define IScanningTunerEx_SetScanSignalTypeFilter(This,ScanModulationTypes,AnalogVideoStandard)    ( (This)->lpVtbl -> SetScanSignalTypeFilter(This,ScanModulationTypes,AnalogVideoStandard) )
#endif
#endif
#ifndef __IComponentType_INTERFACE_DEFINED__
#define __IComponentType_INTERFACE_DEFINED__
extern const IID IID_IComponentType;
typedef struct IComponentTypeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComponentType * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComponentType * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComponentType * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IComponentType * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IComponentType * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IComponentType * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IComponentType * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Category) (IComponentType * This, ComponentCategory * Category);
	HRESULT(STDMETHODCALLTYPE * put_Category) (IComponentType * This, ComponentCategory Category);
	HRESULT(STDMETHODCALLTYPE * get_MediaMajorType) (IComponentType * This, BSTR * MediaMajorType);
	HRESULT(STDMETHODCALLTYPE * put_MediaMajorType) (IComponentType * This, BSTR MediaMajorType);
	HRESULT(STDMETHODCALLTYPE * get__MediaMajorType) (IComponentType * This, GUID * MediaMajorTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaMajorType) (IComponentType * This, REFCLSID MediaMajorTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaSubType) (IComponentType * This, BSTR * MediaSubType);
	HRESULT(STDMETHODCALLTYPE * put_MediaSubType) (IComponentType * This, BSTR MediaSubType);
	HRESULT(STDMETHODCALLTYPE * get__MediaSubType) (IComponentType * This, GUID * MediaSubTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaSubType) (IComponentType * This, REFCLSID MediaSubTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaFormatType) (IComponentType * This, BSTR * MediaFormatType);
	HRESULT(STDMETHODCALLTYPE * put_MediaFormatType) (IComponentType * This, BSTR MediaFormatType);
	HRESULT(STDMETHODCALLTYPE * get__MediaFormatType) (IComponentType * This, GUID * MediaFormatTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaFormatType) (IComponentType * This, REFCLSID MediaFormatTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaType) (IComponentType * This, AM_MEDIA_TYPE * MediaType);
	HRESULT(STDMETHODCALLTYPE * put_MediaType) (IComponentType * This, AM_MEDIA_TYPE * MediaType);
	HRESULT(STDMETHODCALLTYPE * Clone) (IComponentType * This, IComponentType ** NewCT);
	END_INTERFACE
} IComponentTypeVtbl;
interface IComponentType
{
	CONST_VTBL struct IComponentTypeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComponentType_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComponentType_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IComponentType_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IComponentType_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IComponentType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IComponentType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IComponentType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IComponentType_get_Category(This,Category)    ( (This)->lpVtbl -> get_Category(This,Category) )
#define IComponentType_put_Category(This,Category)    ( (This)->lpVtbl -> put_Category(This,Category) )
#define IComponentType_get_MediaMajorType(This,MediaMajorType)    ( (This)->lpVtbl -> get_MediaMajorType(This,MediaMajorType) )
#define IComponentType_put_MediaMajorType(This,MediaMajorType)    ( (This)->lpVtbl -> put_MediaMajorType(This,MediaMajorType) )
#define IComponentType_get__MediaMajorType(This,MediaMajorTypeGuid)    ( (This)->lpVtbl -> get__MediaMajorType(This,MediaMajorTypeGuid) )
#define IComponentType_put__MediaMajorType(This,MediaMajorTypeGuid)    ( (This)->lpVtbl -> put__MediaMajorType(This,MediaMajorTypeGuid) )
#define IComponentType_get_MediaSubType(This,MediaSubType)    ( (This)->lpVtbl -> get_MediaSubType(This,MediaSubType) )
#define IComponentType_put_MediaSubType(This,MediaSubType)    ( (This)->lpVtbl -> put_MediaSubType(This,MediaSubType) )
#define IComponentType_get__MediaSubType(This,MediaSubTypeGuid)    ( (This)->lpVtbl -> get__MediaSubType(This,MediaSubTypeGuid) )
#define IComponentType_put__MediaSubType(This,MediaSubTypeGuid)    ( (This)->lpVtbl -> put__MediaSubType(This,MediaSubTypeGuid) )
#define IComponentType_get_MediaFormatType(This,MediaFormatType)    ( (This)->lpVtbl -> get_MediaFormatType(This,MediaFormatType) )
#define IComponentType_put_MediaFormatType(This,MediaFormatType)    ( (This)->lpVtbl -> put_MediaFormatType(This,MediaFormatType) )
#define IComponentType_get__MediaFormatType(This,MediaFormatTypeGuid)    ( (This)->lpVtbl -> get__MediaFormatType(This,MediaFormatTypeGuid) )
#define IComponentType_put__MediaFormatType(This,MediaFormatTypeGuid)    ( (This)->lpVtbl -> put__MediaFormatType(This,MediaFormatTypeGuid) )
#define IComponentType_get_MediaType(This,MediaType)    ( (This)->lpVtbl -> get_MediaType(This,MediaType) )
#define IComponentType_put_MediaType(This,MediaType)    ( (This)->lpVtbl -> put_MediaType(This,MediaType) )
#define IComponentType_Clone(This,NewCT)    ( (This)->lpVtbl -> Clone(This,NewCT) )
#endif
#endif
#ifndef __ILanguageComponentType_INTERFACE_DEFINED__
#define __ILanguageComponentType_INTERFACE_DEFINED__
extern const IID IID_ILanguageComponentType;
typedef struct ILanguageComponentTypeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILanguageComponentType * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILanguageComponentType * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILanguageComponentType * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ILanguageComponentType * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ILanguageComponentType * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ILanguageComponentType * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ILanguageComponentType * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Category) (ILanguageComponentType * This, ComponentCategory * Category);
	HRESULT(STDMETHODCALLTYPE * put_Category) (ILanguageComponentType * This, ComponentCategory Category);
	HRESULT(STDMETHODCALLTYPE * get_MediaMajorType) (ILanguageComponentType * This, BSTR * MediaMajorType);
	HRESULT(STDMETHODCALLTYPE * put_MediaMajorType) (ILanguageComponentType * This, BSTR MediaMajorType);
	HRESULT(STDMETHODCALLTYPE * get__MediaMajorType) (ILanguageComponentType * This, GUID * MediaMajorTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaMajorType) (ILanguageComponentType * This, REFCLSID MediaMajorTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaSubType) (ILanguageComponentType * This, BSTR * MediaSubType);
	HRESULT(STDMETHODCALLTYPE * put_MediaSubType) (ILanguageComponentType * This, BSTR MediaSubType);
	HRESULT(STDMETHODCALLTYPE * get__MediaSubType) (ILanguageComponentType * This, GUID * MediaSubTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaSubType) (ILanguageComponentType * This, REFCLSID MediaSubTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaFormatType) (ILanguageComponentType * This, BSTR * MediaFormatType);
	HRESULT(STDMETHODCALLTYPE * put_MediaFormatType) (ILanguageComponentType * This, BSTR MediaFormatType);
	HRESULT(STDMETHODCALLTYPE * get__MediaFormatType) (ILanguageComponentType * This, GUID * MediaFormatTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaFormatType) (ILanguageComponentType * This, REFCLSID MediaFormatTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaType) (ILanguageComponentType * This, AM_MEDIA_TYPE * MediaType);
	HRESULT(STDMETHODCALLTYPE * put_MediaType) (ILanguageComponentType * This, AM_MEDIA_TYPE * MediaType);
	HRESULT(STDMETHODCALLTYPE * Clone) (ILanguageComponentType * This, IComponentType ** NewCT);
	HRESULT(STDMETHODCALLTYPE * get_LangID) (ILanguageComponentType * This, long *LangID);
	HRESULT(STDMETHODCALLTYPE * put_LangID) (ILanguageComponentType * This, long LangID);
	END_INTERFACE
} ILanguageComponentTypeVtbl;
interface ILanguageComponentType
{
	CONST_VTBL struct ILanguageComponentTypeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILanguageComponentType_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILanguageComponentType_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ILanguageComponentType_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ILanguageComponentType_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ILanguageComponentType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ILanguageComponentType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ILanguageComponentType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ILanguageComponentType_get_Category(This,Category)    ( (This)->lpVtbl -> get_Category(This,Category) )
#define ILanguageComponentType_put_Category(This,Category)    ( (This)->lpVtbl -> put_Category(This,Category) )
#define ILanguageComponentType_get_MediaMajorType(This,MediaMajorType)    ( (This)->lpVtbl -> get_MediaMajorType(This,MediaMajorType) )
#define ILanguageComponentType_put_MediaMajorType(This,MediaMajorType)    ( (This)->lpVtbl -> put_MediaMajorType(This,MediaMajorType) )
#define ILanguageComponentType_get__MediaMajorType(This,MediaMajorTypeGuid)    ( (This)->lpVtbl -> get__MediaMajorType(This,MediaMajorTypeGuid) )
#define ILanguageComponentType_put__MediaMajorType(This,MediaMajorTypeGuid)    ( (This)->lpVtbl -> put__MediaMajorType(This,MediaMajorTypeGuid) )
#define ILanguageComponentType_get_MediaSubType(This,MediaSubType)    ( (This)->lpVtbl -> get_MediaSubType(This,MediaSubType) )
#define ILanguageComponentType_put_MediaSubType(This,MediaSubType)    ( (This)->lpVtbl -> put_MediaSubType(This,MediaSubType) )
#define ILanguageComponentType_get__MediaSubType(This,MediaSubTypeGuid)    ( (This)->lpVtbl -> get__MediaSubType(This,MediaSubTypeGuid) )
#define ILanguageComponentType_put__MediaSubType(This,MediaSubTypeGuid)    ( (This)->lpVtbl -> put__MediaSubType(This,MediaSubTypeGuid) )
#define ILanguageComponentType_get_MediaFormatType(This,MediaFormatType)    ( (This)->lpVtbl -> get_MediaFormatType(This,MediaFormatType) )
#define ILanguageComponentType_put_MediaFormatType(This,MediaFormatType)    ( (This)->lpVtbl -> put_MediaFormatType(This,MediaFormatType) )
#define ILanguageComponentType_get__MediaFormatType(This,MediaFormatTypeGuid)    ( (This)->lpVtbl -> get__MediaFormatType(This,MediaFormatTypeGuid) )
#define ILanguageComponentType_put__MediaFormatType(This,MediaFormatTypeGuid)    ( (This)->lpVtbl -> put__MediaFormatType(This,MediaFormatTypeGuid) )
#define ILanguageComponentType_get_MediaType(This,MediaType)    ( (This)->lpVtbl -> get_MediaType(This,MediaType) )
#define ILanguageComponentType_put_MediaType(This,MediaType)    ( (This)->lpVtbl -> put_MediaType(This,MediaType) )
#define ILanguageComponentType_Clone(This,NewCT)    ( (This)->lpVtbl -> Clone(This,NewCT) )
#define ILanguageComponentType_get_LangID(This,LangID)    ( (This)->lpVtbl -> get_LangID(This,LangID) )
#define ILanguageComponentType_put_LangID(This,LangID)    ( (This)->lpVtbl -> put_LangID(This,LangID) )
#endif
#endif
#ifndef __IMPEG2ComponentType_INTERFACE_DEFINED__
#define __IMPEG2ComponentType_INTERFACE_DEFINED__
extern const IID IID_IMPEG2ComponentType;
typedef struct IMPEG2ComponentTypeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMPEG2ComponentType * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMPEG2ComponentType * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMPEG2ComponentType * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMPEG2ComponentType * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMPEG2ComponentType * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMPEG2ComponentType * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMPEG2ComponentType * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Category) (IMPEG2ComponentType * This, ComponentCategory * Category);
	HRESULT(STDMETHODCALLTYPE * put_Category) (IMPEG2ComponentType * This, ComponentCategory Category);
	HRESULT(STDMETHODCALLTYPE * get_MediaMajorType) (IMPEG2ComponentType * This, BSTR * MediaMajorType);
	HRESULT(STDMETHODCALLTYPE * put_MediaMajorType) (IMPEG2ComponentType * This, BSTR MediaMajorType);
	HRESULT(STDMETHODCALLTYPE * get__MediaMajorType) (IMPEG2ComponentType * This, GUID * MediaMajorTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaMajorType) (IMPEG2ComponentType * This, REFCLSID MediaMajorTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaSubType) (IMPEG2ComponentType * This, BSTR * MediaSubType);
	HRESULT(STDMETHODCALLTYPE * put_MediaSubType) (IMPEG2ComponentType * This, BSTR MediaSubType);
	HRESULT(STDMETHODCALLTYPE * get__MediaSubType) (IMPEG2ComponentType * This, GUID * MediaSubTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaSubType) (IMPEG2ComponentType * This, REFCLSID MediaSubTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaFormatType) (IMPEG2ComponentType * This, BSTR * MediaFormatType);
	HRESULT(STDMETHODCALLTYPE * put_MediaFormatType) (IMPEG2ComponentType * This, BSTR MediaFormatType);
	HRESULT(STDMETHODCALLTYPE * get__MediaFormatType) (IMPEG2ComponentType * This, GUID * MediaFormatTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaFormatType) (IMPEG2ComponentType * This, REFCLSID MediaFormatTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaType) (IMPEG2ComponentType * This, AM_MEDIA_TYPE * MediaType);
	HRESULT(STDMETHODCALLTYPE * put_MediaType) (IMPEG2ComponentType * This, AM_MEDIA_TYPE * MediaType);
	HRESULT(STDMETHODCALLTYPE * Clone) (IMPEG2ComponentType * This, IComponentType ** NewCT);
	HRESULT(STDMETHODCALLTYPE * get_LangID) (IMPEG2ComponentType * This, long *LangID);
	HRESULT(STDMETHODCALLTYPE * put_LangID) (IMPEG2ComponentType * This, long LangID);
	HRESULT(STDMETHODCALLTYPE * get_StreamType) (IMPEG2ComponentType * This, MPEG2StreamType * MP2StreamType);
	HRESULT(STDMETHODCALLTYPE * put_StreamType) (IMPEG2ComponentType * This, MPEG2StreamType MP2StreamType);
	END_INTERFACE
} IMPEG2ComponentTypeVtbl;
interface IMPEG2ComponentType
{
	CONST_VTBL struct IMPEG2ComponentTypeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMPEG2ComponentType_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMPEG2ComponentType_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMPEG2ComponentType_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMPEG2ComponentType_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMPEG2ComponentType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMPEG2ComponentType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMPEG2ComponentType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMPEG2ComponentType_get_Category(This,Category)    ( (This)->lpVtbl -> get_Category(This,Category) )
#define IMPEG2ComponentType_put_Category(This,Category)    ( (This)->lpVtbl -> put_Category(This,Category) )
#define IMPEG2ComponentType_get_MediaMajorType(This,MediaMajorType)    ( (This)->lpVtbl -> get_MediaMajorType(This,MediaMajorType) )
#define IMPEG2ComponentType_put_MediaMajorType(This,MediaMajorType)    ( (This)->lpVtbl -> put_MediaMajorType(This,MediaMajorType) )
#define IMPEG2ComponentType_get__MediaMajorType(This,MediaMajorTypeGuid)    ( (This)->lpVtbl -> get__MediaMajorType(This,MediaMajorTypeGuid) )
#define IMPEG2ComponentType_put__MediaMajorType(This,MediaMajorTypeGuid)    ( (This)->lpVtbl -> put__MediaMajorType(This,MediaMajorTypeGuid) )
#define IMPEG2ComponentType_get_MediaSubType(This,MediaSubType)    ( (This)->lpVtbl -> get_MediaSubType(This,MediaSubType) )
#define IMPEG2ComponentType_put_MediaSubType(This,MediaSubType)    ( (This)->lpVtbl -> put_MediaSubType(This,MediaSubType) )
#define IMPEG2ComponentType_get__MediaSubType(This,MediaSubTypeGuid)    ( (This)->lpVtbl -> get__MediaSubType(This,MediaSubTypeGuid) )
#define IMPEG2ComponentType_put__MediaSubType(This,MediaSubTypeGuid)    ( (This)->lpVtbl -> put__MediaSubType(This,MediaSubTypeGuid) )
#define IMPEG2ComponentType_get_MediaFormatType(This,MediaFormatType)    ( (This)->lpVtbl -> get_MediaFormatType(This,MediaFormatType) )
#define IMPEG2ComponentType_put_MediaFormatType(This,MediaFormatType)    ( (This)->lpVtbl -> put_MediaFormatType(This,MediaFormatType) )
#define IMPEG2ComponentType_get__MediaFormatType(This,MediaFormatTypeGuid)    ( (This)->lpVtbl -> get__MediaFormatType(This,MediaFormatTypeGuid) )
#define IMPEG2ComponentType_put__MediaFormatType(This,MediaFormatTypeGuid)    ( (This)->lpVtbl -> put__MediaFormatType(This,MediaFormatTypeGuid) )
#define IMPEG2ComponentType_get_MediaType(This,MediaType)    ( (This)->lpVtbl -> get_MediaType(This,MediaType) )
#define IMPEG2ComponentType_put_MediaType(This,MediaType)    ( (This)->lpVtbl -> put_MediaType(This,MediaType) )
#define IMPEG2ComponentType_Clone(This,NewCT)    ( (This)->lpVtbl -> Clone(This,NewCT) )
#define IMPEG2ComponentType_get_LangID(This,LangID)    ( (This)->lpVtbl -> get_LangID(This,LangID) )
#define IMPEG2ComponentType_put_LangID(This,LangID)    ( (This)->lpVtbl -> put_LangID(This,LangID) )
#define IMPEG2ComponentType_get_StreamType(This,MP2StreamType)    ( (This)->lpVtbl -> get_StreamType(This,MP2StreamType) )
#define IMPEG2ComponentType_put_StreamType(This,MP2StreamType)    ( (This)->lpVtbl -> put_StreamType(This,MP2StreamType) )
#endif
#endif
#ifndef __IATSCComponentType_INTERFACE_DEFINED__
#define __IATSCComponentType_INTERFACE_DEFINED__
extern const IID IID_IATSCComponentType;
typedef struct IATSCComponentTypeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IATSCComponentType * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IATSCComponentType * This);
	ULONG(STDMETHODCALLTYPE * Release) (IATSCComponentType * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IATSCComponentType * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IATSCComponentType * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IATSCComponentType * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IATSCComponentType * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Category) (IATSCComponentType * This, ComponentCategory * Category);
	HRESULT(STDMETHODCALLTYPE * put_Category) (IATSCComponentType * This, ComponentCategory Category);
	HRESULT(STDMETHODCALLTYPE * get_MediaMajorType) (IATSCComponentType * This, BSTR * MediaMajorType);
	HRESULT(STDMETHODCALLTYPE * put_MediaMajorType) (IATSCComponentType * This, BSTR MediaMajorType);
	HRESULT(STDMETHODCALLTYPE * get__MediaMajorType) (IATSCComponentType * This, GUID * MediaMajorTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaMajorType) (IATSCComponentType * This, REFCLSID MediaMajorTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaSubType) (IATSCComponentType * This, BSTR * MediaSubType);
	HRESULT(STDMETHODCALLTYPE * put_MediaSubType) (IATSCComponentType * This, BSTR MediaSubType);
	HRESULT(STDMETHODCALLTYPE * get__MediaSubType) (IATSCComponentType * This, GUID * MediaSubTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaSubType) (IATSCComponentType * This, REFCLSID MediaSubTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaFormatType) (IATSCComponentType * This, BSTR * MediaFormatType);
	HRESULT(STDMETHODCALLTYPE * put_MediaFormatType) (IATSCComponentType * This, BSTR MediaFormatType);
	HRESULT(STDMETHODCALLTYPE * get__MediaFormatType) (IATSCComponentType * This, GUID * MediaFormatTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaFormatType) (IATSCComponentType * This, REFCLSID MediaFormatTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaType) (IATSCComponentType * This, AM_MEDIA_TYPE * MediaType);
	HRESULT(STDMETHODCALLTYPE * put_MediaType) (IATSCComponentType * This, AM_MEDIA_TYPE * MediaType);
	HRESULT(STDMETHODCALLTYPE * Clone) (IATSCComponentType * This, IComponentType ** NewCT);
	HRESULT(STDMETHODCALLTYPE * get_LangID) (IATSCComponentType * This, long *LangID);
	HRESULT(STDMETHODCALLTYPE * put_LangID) (IATSCComponentType * This, long LangID);
	HRESULT(STDMETHODCALLTYPE * get_StreamType) (IATSCComponentType * This, MPEG2StreamType * MP2StreamType);
	HRESULT(STDMETHODCALLTYPE * put_StreamType) (IATSCComponentType * This, MPEG2StreamType MP2StreamType);
	HRESULT(STDMETHODCALLTYPE * get_Flags) (IATSCComponentType * This, long *Flags);
	HRESULT(STDMETHODCALLTYPE * put_Flags) (IATSCComponentType * This, long flags);
	END_INTERFACE
} IATSCComponentTypeVtbl;
interface IATSCComponentType
{
	CONST_VTBL struct IATSCComponentTypeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IATSCComponentType_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IATSCComponentType_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IATSCComponentType_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IATSCComponentType_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IATSCComponentType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IATSCComponentType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IATSCComponentType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IATSCComponentType_get_Category(This,Category)    ( (This)->lpVtbl -> get_Category(This,Category) )
#define IATSCComponentType_put_Category(This,Category)    ( (This)->lpVtbl -> put_Category(This,Category) )
#define IATSCComponentType_get_MediaMajorType(This,MediaMajorType)    ( (This)->lpVtbl -> get_MediaMajorType(This,MediaMajorType) )
#define IATSCComponentType_put_MediaMajorType(This,MediaMajorType)    ( (This)->lpVtbl -> put_MediaMajorType(This,MediaMajorType) )
#define IATSCComponentType_get__MediaMajorType(This,MediaMajorTypeGuid)    ( (This)->lpVtbl -> get__MediaMajorType(This,MediaMajorTypeGuid) )
#define IATSCComponentType_put__MediaMajorType(This,MediaMajorTypeGuid)    ( (This)->lpVtbl -> put__MediaMajorType(This,MediaMajorTypeGuid) )
#define IATSCComponentType_get_MediaSubType(This,MediaSubType)    ( (This)->lpVtbl -> get_MediaSubType(This,MediaSubType) )
#define IATSCComponentType_put_MediaSubType(This,MediaSubType)    ( (This)->lpVtbl -> put_MediaSubType(This,MediaSubType) )
#define IATSCComponentType_get__MediaSubType(This,MediaSubTypeGuid)    ( (This)->lpVtbl -> get__MediaSubType(This,MediaSubTypeGuid) )
#define IATSCComponentType_put__MediaSubType(This,MediaSubTypeGuid)    ( (This)->lpVtbl -> put__MediaSubType(This,MediaSubTypeGuid) )
#define IATSCComponentType_get_MediaFormatType(This,MediaFormatType)    ( (This)->lpVtbl -> get_MediaFormatType(This,MediaFormatType) )
#define IATSCComponentType_put_MediaFormatType(This,MediaFormatType)    ( (This)->lpVtbl -> put_MediaFormatType(This,MediaFormatType) )
#define IATSCComponentType_get__MediaFormatType(This,MediaFormatTypeGuid)    ( (This)->lpVtbl -> get__MediaFormatType(This,MediaFormatTypeGuid) )
#define IATSCComponentType_put__MediaFormatType(This,MediaFormatTypeGuid)    ( (This)->lpVtbl -> put__MediaFormatType(This,MediaFormatTypeGuid) )
#define IATSCComponentType_get_MediaType(This,MediaType)    ( (This)->lpVtbl -> get_MediaType(This,MediaType) )
#define IATSCComponentType_put_MediaType(This,MediaType)    ( (This)->lpVtbl -> put_MediaType(This,MediaType) )
#define IATSCComponentType_Clone(This,NewCT)    ( (This)->lpVtbl -> Clone(This,NewCT) )
#define IATSCComponentType_get_LangID(This,LangID)    ( (This)->lpVtbl -> get_LangID(This,LangID) )
#define IATSCComponentType_put_LangID(This,LangID)    ( (This)->lpVtbl -> put_LangID(This,LangID) )
#define IATSCComponentType_get_StreamType(This,MP2StreamType)    ( (This)->lpVtbl -> get_StreamType(This,MP2StreamType) )
#define IATSCComponentType_put_StreamType(This,MP2StreamType)    ( (This)->lpVtbl -> put_StreamType(This,MP2StreamType) )
#define IATSCComponentType_get_Flags(This,Flags)    ( (This)->lpVtbl -> get_Flags(This,Flags) )
#define IATSCComponentType_put_Flags(This,flags)    ( (This)->lpVtbl -> put_Flags(This,flags) )
#endif
#endif
#ifndef __IEnumComponentTypes_INTERFACE_DEFINED__
#define __IEnumComponentTypes_INTERFACE_DEFINED__
extern const IID IID_IEnumComponentTypes;
typedef struct IEnumComponentTypesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumComponentTypes * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumComponentTypes * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumComponentTypes * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumComponentTypes * This, ULONG celt, IComponentType ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumComponentTypes * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumComponentTypes * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumComponentTypes * This, IEnumComponentTypes ** ppEnum);
	END_INTERFACE
} IEnumComponentTypesVtbl;
interface IEnumComponentTypes
{
	CONST_VTBL struct IEnumComponentTypesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumComponentTypes_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumComponentTypes_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumComponentTypes_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumComponentTypes_Next(This,celt,rgelt,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumComponentTypes_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumComponentTypes_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumComponentTypes_Clone(This,ppEnum)    ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IComponentTypes_INTERFACE_DEFINED__
#define __IComponentTypes_INTERFACE_DEFINED__
extern const IID IID_IComponentTypes;
typedef struct IComponentTypesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComponentTypes * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComponentTypes * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComponentTypes * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IComponentTypes * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IComponentTypes * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IComponentTypes * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IComponentTypes * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IComponentTypes * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IComponentTypes * This, IEnumVARIANT ** ppNewEnum);
	HRESULT(STDMETHODCALLTYPE * EnumComponentTypes) (IComponentTypes * This, IEnumComponentTypes ** ppNewEnum);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IComponentTypes * This, VARIANT Index, IComponentType ** ComponentType);
	HRESULT(STDMETHODCALLTYPE * put_Item) (IComponentTypes * This, VARIANT Index, IComponentType * ComponentType);
	HRESULT(STDMETHODCALLTYPE * Add) (IComponentTypes * This, IComponentType * ComponentType, VARIANT * NewIndex);
	HRESULT(STDMETHODCALLTYPE * Remove) (IComponentTypes * This, VARIANT Index);
	HRESULT(STDMETHODCALLTYPE * Clone) (IComponentTypes * This, IComponentTypes ** NewList);
	END_INTERFACE
} IComponentTypesVtbl;
interface IComponentTypes
{
	CONST_VTBL struct IComponentTypesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComponentTypes_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComponentTypes_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IComponentTypes_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IComponentTypes_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IComponentTypes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IComponentTypes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IComponentTypes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IComponentTypes_get_Count(This,Count)    ( (This)->lpVtbl -> get_Count(This,Count) )
#define IComponentTypes_get__NewEnum(This,ppNewEnum)    ( (This)->lpVtbl -> get__NewEnum(This,ppNewEnum) )
#define IComponentTypes_EnumComponentTypes(This,ppNewEnum)    ( (This)->lpVtbl -> EnumComponentTypes(This,ppNewEnum) )
#define IComponentTypes_get_Item(This,Index,ComponentType)    ( (This)->lpVtbl -> get_Item(This,Index,ComponentType) )
#define IComponentTypes_put_Item(This,Index,ComponentType)    ( (This)->lpVtbl -> put_Item(This,Index,ComponentType) )
#define IComponentTypes_Add(This,ComponentType,NewIndex)    ( (This)->lpVtbl -> Add(This,ComponentType,NewIndex) )
#define IComponentTypes_Remove(This,Index)    ( (This)->lpVtbl -> Remove(This,Index) )
#define IComponentTypes_Clone(This,NewList)    ( (This)->lpVtbl -> Clone(This,NewList) )
#endif
#endif
#ifndef __IComponent_INTERFACE_DEFINED__
#define __IComponent_INTERFACE_DEFINED__
extern const IID IID_IComponent;
typedef struct IComponentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComponent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComponent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComponent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IComponent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IComponent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IComponent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IComponent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IComponent * This, IComponentType ** CT);
	HRESULT(STDMETHODCALLTYPE * put_Type) (IComponent * This, IComponentType * CT);
	HRESULT(STDMETHODCALLTYPE * get_DescLangID) (IComponent * This, long *LangID);
	HRESULT(STDMETHODCALLTYPE * put_DescLangID) (IComponent * This, long LangID);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IComponent * This, ComponentStatus * Status);
	HRESULT(STDMETHODCALLTYPE * put_Status) (IComponent * This, ComponentStatus Status);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IComponent * This, BSTR * Description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IComponent * This, BSTR Description);
	HRESULT(STDMETHODCALLTYPE * Clone) (IComponent * This, IComponent ** NewComponent);
	END_INTERFACE
} IComponentVtbl;
interface IComponent
{
	CONST_VTBL struct IComponentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComponent_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComponent_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IComponent_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IComponent_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IComponent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IComponent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IComponent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IComponent_get_Type(This,CT)    ( (This)->lpVtbl -> get_Type(This,CT) )
#define IComponent_put_Type(This,CT)    ( (This)->lpVtbl -> put_Type(This,CT) )
#define IComponent_get_DescLangID(This,LangID)    ( (This)->lpVtbl -> get_DescLangID(This,LangID) )
#define IComponent_put_DescLangID(This,LangID)    ( (This)->lpVtbl -> put_DescLangID(This,LangID) )
#define IComponent_get_Status(This,Status)    ( (This)->lpVtbl -> get_Status(This,Status) )
#define IComponent_put_Status(This,Status)    ( (This)->lpVtbl -> put_Status(This,Status) )
#define IComponent_get_Description(This,Description)    ( (This)->lpVtbl -> get_Description(This,Description) )
#define IComponent_put_Description(This,Description)    ( (This)->lpVtbl -> put_Description(This,Description) )
#define IComponent_Clone(This,NewComponent)    ( (This)->lpVtbl -> Clone(This,NewComponent) )
#endif
#endif
#ifndef __IAnalogAudioComponentType_INTERFACE_DEFINED__
#define __IAnalogAudioComponentType_INTERFACE_DEFINED__
extern const IID IID_IAnalogAudioComponentType;
typedef struct IAnalogAudioComponentTypeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnalogAudioComponentType * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnalogAudioComponentType * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnalogAudioComponentType * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAnalogAudioComponentType * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAnalogAudioComponentType * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAnalogAudioComponentType * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAnalogAudioComponentType * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Category) (IAnalogAudioComponentType * This, ComponentCategory * Category);
	HRESULT(STDMETHODCALLTYPE * put_Category) (IAnalogAudioComponentType * This, ComponentCategory Category);
	HRESULT(STDMETHODCALLTYPE * get_MediaMajorType) (IAnalogAudioComponentType * This, BSTR * MediaMajorType);
	HRESULT(STDMETHODCALLTYPE * put_MediaMajorType) (IAnalogAudioComponentType * This, BSTR MediaMajorType);
	HRESULT(STDMETHODCALLTYPE * get__MediaMajorType) (IAnalogAudioComponentType * This, GUID * MediaMajorTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaMajorType) (IAnalogAudioComponentType * This, REFCLSID MediaMajorTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaSubType) (IAnalogAudioComponentType * This, BSTR * MediaSubType);
	HRESULT(STDMETHODCALLTYPE * put_MediaSubType) (IAnalogAudioComponentType * This, BSTR MediaSubType);
	HRESULT(STDMETHODCALLTYPE * get__MediaSubType) (IAnalogAudioComponentType * This, GUID * MediaSubTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaSubType) (IAnalogAudioComponentType * This, REFCLSID MediaSubTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaFormatType) (IAnalogAudioComponentType * This, BSTR * MediaFormatType);
	HRESULT(STDMETHODCALLTYPE * put_MediaFormatType) (IAnalogAudioComponentType * This, BSTR MediaFormatType);
	HRESULT(STDMETHODCALLTYPE * get__MediaFormatType) (IAnalogAudioComponentType * This, GUID * MediaFormatTypeGuid);
	HRESULT(STDMETHODCALLTYPE * put__MediaFormatType) (IAnalogAudioComponentType * This, REFCLSID MediaFormatTypeGuid);
	HRESULT(STDMETHODCALLTYPE * get_MediaType) (IAnalogAudioComponentType * This, AM_MEDIA_TYPE * MediaType);
	HRESULT(STDMETHODCALLTYPE * put_MediaType) (IAnalogAudioComponentType * This, AM_MEDIA_TYPE * MediaType);
	HRESULT(STDMETHODCALLTYPE * Clone) (IAnalogAudioComponentType * This, IComponentType ** NewCT);
	HRESULT(STDMETHODCALLTYPE * get_AnalogAudioMode) (IAnalogAudioComponentType * This, TVAudioMode * Mode);
	HRESULT(STDMETHODCALLTYPE * put_AnalogAudioMode) (IAnalogAudioComponentType * This, TVAudioMode Mode);
	END_INTERFACE
} IAnalogAudioComponentTypeVtbl;
interface IAnalogAudioComponentType
{
	CONST_VTBL struct IAnalogAudioComponentTypeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnalogAudioComponentType_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnalogAudioComponentType_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAnalogAudioComponentType_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAnalogAudioComponentType_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAnalogAudioComponentType_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAnalogAudioComponentType_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAnalogAudioComponentType_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAnalogAudioComponentType_get_Category(This,Category)    ( (This)->lpVtbl -> get_Category(This,Category) )
#define IAnalogAudioComponentType_put_Category(This,Category)    ( (This)->lpVtbl -> put_Category(This,Category) )
#define IAnalogAudioComponentType_get_MediaMajorType(This,MediaMajorType)    ( (This)->lpVtbl -> get_MediaMajorType(This,MediaMajorType) )
#define IAnalogAudioComponentType_put_MediaMajorType(This,MediaMajorType)    ( (This)->lpVtbl -> put_MediaMajorType(This,MediaMajorType) )
#define IAnalogAudioComponentType_get__MediaMajorType(This,MediaMajorTypeGuid)    ( (This)->lpVtbl -> get__MediaMajorType(This,MediaMajorTypeGuid) )
#define IAnalogAudioComponentType_put__MediaMajorType(This,MediaMajorTypeGuid)    ( (This)->lpVtbl -> put__MediaMajorType(This,MediaMajorTypeGuid) )
#define IAnalogAudioComponentType_get_MediaSubType(This,MediaSubType)    ( (This)->lpVtbl -> get_MediaSubType(This,MediaSubType) )
#define IAnalogAudioComponentType_put_MediaSubType(This,MediaSubType)    ( (This)->lpVtbl -> put_MediaSubType(This,MediaSubType) )
#define IAnalogAudioComponentType_get__MediaSubType(This,MediaSubTypeGuid)    ( (This)->lpVtbl -> get__MediaSubType(This,MediaSubTypeGuid) )
#define IAnalogAudioComponentType_put__MediaSubType(This,MediaSubTypeGuid)    ( (This)->lpVtbl -> put__MediaSubType(This,MediaSubTypeGuid) )
#define IAnalogAudioComponentType_get_MediaFormatType(This,MediaFormatType)    ( (This)->lpVtbl -> get_MediaFormatType(This,MediaFormatType) )
#define IAnalogAudioComponentType_put_MediaFormatType(This,MediaFormatType)    ( (This)->lpVtbl -> put_MediaFormatType(This,MediaFormatType) )
#define IAnalogAudioComponentType_get__MediaFormatType(This,MediaFormatTypeGuid)    ( (This)->lpVtbl -> get__MediaFormatType(This,MediaFormatTypeGuid) )
#define IAnalogAudioComponentType_put__MediaFormatType(This,MediaFormatTypeGuid)    ( (This)->lpVtbl -> put__MediaFormatType(This,MediaFormatTypeGuid) )
#define IAnalogAudioComponentType_get_MediaType(This,MediaType)    ( (This)->lpVtbl -> get_MediaType(This,MediaType) )
#define IAnalogAudioComponentType_put_MediaType(This,MediaType)    ( (This)->lpVtbl -> put_MediaType(This,MediaType) )
#define IAnalogAudioComponentType_Clone(This,NewCT)    ( (This)->lpVtbl -> Clone(This,NewCT) )
#define IAnalogAudioComponentType_get_AnalogAudioMode(This,Mode)    ( (This)->lpVtbl -> get_AnalogAudioMode(This,Mode) )
#define IAnalogAudioComponentType_put_AnalogAudioMode(This,Mode)    ( (This)->lpVtbl -> put_AnalogAudioMode(This,Mode) )
#endif
#endif
#ifndef __IMPEG2Component_INTERFACE_DEFINED__
#define __IMPEG2Component_INTERFACE_DEFINED__
extern const IID IID_IMPEG2Component;
typedef struct IMPEG2ComponentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMPEG2Component * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMPEG2Component * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMPEG2Component * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMPEG2Component * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMPEG2Component * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMPEG2Component * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMPEG2Component * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IMPEG2Component * This, IComponentType ** CT);
	HRESULT(STDMETHODCALLTYPE * put_Type) (IMPEG2Component * This, IComponentType * CT);
	HRESULT(STDMETHODCALLTYPE * get_DescLangID) (IMPEG2Component * This, long *LangID);
	HRESULT(STDMETHODCALLTYPE * put_DescLangID) (IMPEG2Component * This, long LangID);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IMPEG2Component * This, ComponentStatus * Status);
	HRESULT(STDMETHODCALLTYPE * put_Status) (IMPEG2Component * This, ComponentStatus Status);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IMPEG2Component * This, BSTR * Description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IMPEG2Component * This, BSTR Description);
	HRESULT(STDMETHODCALLTYPE * Clone) (IMPEG2Component * This, IComponent ** NewComponent);
	HRESULT(STDMETHODCALLTYPE * get_PID) (IMPEG2Component * This, long *PID);
	HRESULT(STDMETHODCALLTYPE * put_PID) (IMPEG2Component * This, long PID);
	HRESULT(STDMETHODCALLTYPE * get_PCRPID) (IMPEG2Component * This, long *PCRPID);
	HRESULT(STDMETHODCALLTYPE * put_PCRPID) (IMPEG2Component * This, long PCRPID);
	HRESULT(STDMETHODCALLTYPE * get_ProgramNumber) (IMPEG2Component * This, long *ProgramNumber);
	HRESULT(STDMETHODCALLTYPE * put_ProgramNumber) (IMPEG2Component * This, long ProgramNumber);
	END_INTERFACE
} IMPEG2ComponentVtbl;
interface IMPEG2Component
{
	CONST_VTBL struct IMPEG2ComponentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMPEG2Component_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMPEG2Component_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMPEG2Component_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMPEG2Component_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMPEG2Component_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMPEG2Component_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMPEG2Component_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMPEG2Component_get_Type(This,CT)    ( (This)->lpVtbl -> get_Type(This,CT) )
#define IMPEG2Component_put_Type(This,CT)    ( (This)->lpVtbl -> put_Type(This,CT) )
#define IMPEG2Component_get_DescLangID(This,LangID)    ( (This)->lpVtbl -> get_DescLangID(This,LangID) )
#define IMPEG2Component_put_DescLangID(This,LangID)    ( (This)->lpVtbl -> put_DescLangID(This,LangID) )
#define IMPEG2Component_get_Status(This,Status)    ( (This)->lpVtbl -> get_Status(This,Status) )
#define IMPEG2Component_put_Status(This,Status)    ( (This)->lpVtbl -> put_Status(This,Status) )
#define IMPEG2Component_get_Description(This,Description)    ( (This)->lpVtbl -> get_Description(This,Description) )
#define IMPEG2Component_put_Description(This,Description)    ( (This)->lpVtbl -> put_Description(This,Description) )
#define IMPEG2Component_Clone(This,NewComponent)    ( (This)->lpVtbl -> Clone(This,NewComponent) )
#define IMPEG2Component_get_PID(This,PID)    ( (This)->lpVtbl -> get_PID(This,PID) )
#define IMPEG2Component_put_PID(This,PID)    ( (This)->lpVtbl -> put_PID(This,PID) )
#define IMPEG2Component_get_PCRPID(This,PCRPID)    ( (This)->lpVtbl -> get_PCRPID(This,PCRPID) )
#define IMPEG2Component_put_PCRPID(This,PCRPID)    ( (This)->lpVtbl -> put_PCRPID(This,PCRPID) )
#define IMPEG2Component_get_ProgramNumber(This,ProgramNumber)    ( (This)->lpVtbl -> get_ProgramNumber(This,ProgramNumber) )
#define IMPEG2Component_put_ProgramNumber(This,ProgramNumber)    ( (This)->lpVtbl -> put_ProgramNumber(This,ProgramNumber) )
#endif
#endif
#ifndef __IEnumComponents_INTERFACE_DEFINED__
#define __IEnumComponents_INTERFACE_DEFINED__
extern const IID IID_IEnumComponents;
typedef struct IEnumComponentsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumComponents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumComponents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumComponents * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumComponents * This, ULONG celt, IComponent ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumComponents * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumComponents * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumComponents * This, IEnumComponents ** ppEnum);
	END_INTERFACE
} IEnumComponentsVtbl;
interface IEnumComponents
{
	CONST_VTBL struct IEnumComponentsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumComponents_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumComponents_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumComponents_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumComponents_Next(This,celt,rgelt,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumComponents_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumComponents_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumComponents_Clone(This,ppEnum)    ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IComponents_INTERFACE_DEFINED__
#define __IComponents_INTERFACE_DEFINED__
extern const IID IID_IComponents;
typedef struct IComponentsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComponents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComponents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComponents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IComponents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IComponents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IComponents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IComponents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IComponents * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IComponents * This, IEnumVARIANT ** ppNewEnum);
	HRESULT(STDMETHODCALLTYPE * EnumComponents) (IComponents * This, IEnumComponents ** ppNewEnum);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IComponents * This, VARIANT Index, IComponent ** ppComponent);
	HRESULT(STDMETHODCALLTYPE * Add) (IComponents * This, IComponent * Component, VARIANT * NewIndex);
	HRESULT(STDMETHODCALLTYPE * Remove) (IComponents * This, VARIANT Index);
	HRESULT(STDMETHODCALLTYPE * Clone) (IComponents * This, IComponents ** NewList);
	HRESULT(STDMETHODCALLTYPE * put_Item) (IComponents * This, VARIANT Index, IComponent * ppComponent);
	END_INTERFACE
} IComponentsVtbl;
interface IComponents
{
	CONST_VTBL struct IComponentsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComponents_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComponents_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IComponents_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IComponents_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IComponents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IComponents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IComponents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IComponents_get_Count(This,Count)    ( (This)->lpVtbl -> get_Count(This,Count) )
#define IComponents_get__NewEnum(This,ppNewEnum)    ( (This)->lpVtbl -> get__NewEnum(This,ppNewEnum) )
#define IComponents_EnumComponents(This,ppNewEnum)    ( (This)->lpVtbl -> EnumComponents(This,ppNewEnum) )
#define IComponents_get_Item(This,Index,ppComponent)    ( (This)->lpVtbl -> get_Item(This,Index,ppComponent) )
#define IComponents_Add(This,Component,NewIndex)    ( (This)->lpVtbl -> Add(This,Component,NewIndex) )
#define IComponents_Remove(This,Index)    ( (This)->lpVtbl -> Remove(This,Index) )
#define IComponents_Clone(This,NewList)    ( (This)->lpVtbl -> Clone(This,NewList) )
#define IComponents_put_Item(This,Index,ppComponent)    ( (This)->lpVtbl -> put_Item(This,Index,ppComponent) )
#endif
#endif
#ifndef __IComponentsOld_INTERFACE_DEFINED__
#define __IComponentsOld_INTERFACE_DEFINED__
extern const IID IID_IComponentsOld;
typedef struct IComponentsOldVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IComponentsOld * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IComponentsOld * This);
	ULONG(STDMETHODCALLTYPE * Release) (IComponentsOld * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IComponentsOld * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IComponentsOld * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IComponentsOld * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IComponentsOld * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IComponentsOld * This, long *Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IComponentsOld * This, IEnumVARIANT ** ppNewEnum);
	HRESULT(STDMETHODCALLTYPE * EnumComponents) (IComponentsOld * This, IEnumComponents ** ppNewEnum);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IComponentsOld * This, VARIANT Index, IComponent ** ppComponent);
	HRESULT(STDMETHODCALLTYPE * Add) (IComponentsOld * This, IComponent * Component, VARIANT * NewIndex);
	HRESULT(STDMETHODCALLTYPE * Remove) (IComponentsOld * This, VARIANT Index);
	HRESULT(STDMETHODCALLTYPE * Clone) (IComponentsOld * This, IComponents ** NewList);
	END_INTERFACE
} IComponentsOldVtbl;
interface IComponentsOld
{
	CONST_VTBL struct IComponentsOldVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IComponentsOld_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IComponentsOld_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IComponentsOld_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IComponentsOld_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IComponentsOld_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IComponentsOld_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IComponentsOld_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IComponentsOld_get_Count(This,Count)    ( (This)->lpVtbl -> get_Count(This,Count) )
#define IComponentsOld_get__NewEnum(This,ppNewEnum)    ( (This)->lpVtbl -> get__NewEnum(This,ppNewEnum) )
#define IComponentsOld_EnumComponents(This,ppNewEnum)    ( (This)->lpVtbl -> EnumComponents(This,ppNewEnum) )
#define IComponentsOld_get_Item(This,Index,ppComponent)    ( (This)->lpVtbl -> get_Item(This,Index,ppComponent) )
#define IComponentsOld_Add(This,Component,NewIndex)    ( (This)->lpVtbl -> Add(This,Component,NewIndex) )
#define IComponentsOld_Remove(This,Index)    ( (This)->lpVtbl -> Remove(This,Index) )
#define IComponentsOld_Clone(This,NewList)    ( (This)->lpVtbl -> Clone(This,NewList) )
#endif
#endif
#ifndef __ILocator_INTERFACE_DEFINED__
#define __ILocator_INTERFACE_DEFINED__
extern const IID IID_ILocator;
typedef struct ILocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILocator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ILocator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ILocator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ILocator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ILocator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CarrierFrequency) (ILocator * This, long *Frequency);
	HRESULT(STDMETHODCALLTYPE * put_CarrierFrequency) (ILocator * This, long Frequency);
	HRESULT(STDMETHODCALLTYPE * get_InnerFEC) (ILocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFEC) (ILocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (ILocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (ILocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFEC) (ILocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFEC) (ILocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (ILocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (ILocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_Modulation) (ILocator * This, ModulationType * Modulation);
	HRESULT(STDMETHODCALLTYPE * put_Modulation) (ILocator * This, ModulationType Modulation);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (ILocator * This, long *Rate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (ILocator * This, long Rate);
	HRESULT(STDMETHODCALLTYPE * Clone) (ILocator * This, ILocator ** NewLocator);
	END_INTERFACE
} ILocatorVtbl;
interface ILocator
{
	CONST_VTBL struct ILocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILocator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILocator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ILocator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ILocator_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ILocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ILocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ILocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ILocator_get_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
#define ILocator_put_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
#define ILocator_get_InnerFEC(This,FEC)    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
#define ILocator_put_InnerFEC(This,FEC)    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
#define ILocator_get_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
#define ILocator_put_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
#define ILocator_get_OuterFEC(This,FEC)    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
#define ILocator_put_OuterFEC(This,FEC)    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
#define ILocator_get_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
#define ILocator_put_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
#define ILocator_get_Modulation(This,Modulation)    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
#define ILocator_put_Modulation(This,Modulation)    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
#define ILocator_get_SymbolRate(This,Rate)    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
#define ILocator_put_SymbolRate(This,Rate)    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
#define ILocator_Clone(This,NewLocator)    ( (This)->lpVtbl -> Clone(This,NewLocator) )
#endif
#endif
#ifndef __IAnalogLocator_INTERFACE_DEFINED__
#define __IAnalogLocator_INTERFACE_DEFINED__
extern const IID IID_IAnalogLocator;
typedef struct IAnalogLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnalogLocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnalogLocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnalogLocator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAnalogLocator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAnalogLocator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAnalogLocator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAnalogLocator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CarrierFrequency) (IAnalogLocator * This, long *Frequency);
	HRESULT(STDMETHODCALLTYPE * put_CarrierFrequency) (IAnalogLocator * This, long Frequency);
	HRESULT(STDMETHODCALLTYPE * get_InnerFEC) (IAnalogLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFEC) (IAnalogLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IAnalogLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IAnalogLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFEC) (IAnalogLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFEC) (IAnalogLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IAnalogLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IAnalogLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_Modulation) (IAnalogLocator * This, ModulationType * Modulation);
	HRESULT(STDMETHODCALLTYPE * put_Modulation) (IAnalogLocator * This, ModulationType Modulation);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IAnalogLocator * This, long *Rate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IAnalogLocator * This, long Rate);
	HRESULT(STDMETHODCALLTYPE * Clone) (IAnalogLocator * This, ILocator ** NewLocator);
	HRESULT(STDMETHODCALLTYPE * get_VideoStandard) (IAnalogLocator * This, AnalogVideoStandard * AVS);
	HRESULT(STDMETHODCALLTYPE * put_VideoStandard) (IAnalogLocator * This, AnalogVideoStandard AVS);
	END_INTERFACE
} IAnalogLocatorVtbl;
interface IAnalogLocator
{
	CONST_VTBL struct IAnalogLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnalogLocator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnalogLocator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAnalogLocator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAnalogLocator_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAnalogLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAnalogLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAnalogLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAnalogLocator_get_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
#define IAnalogLocator_put_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
#define IAnalogLocator_get_InnerFEC(This,FEC)    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
#define IAnalogLocator_put_InnerFEC(This,FEC)    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
#define IAnalogLocator_get_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
#define IAnalogLocator_put_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
#define IAnalogLocator_get_OuterFEC(This,FEC)    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
#define IAnalogLocator_put_OuterFEC(This,FEC)    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
#define IAnalogLocator_get_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
#define IAnalogLocator_put_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
#define IAnalogLocator_get_Modulation(This,Modulation)    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
#define IAnalogLocator_put_Modulation(This,Modulation)    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
#define IAnalogLocator_get_SymbolRate(This,Rate)    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
#define IAnalogLocator_put_SymbolRate(This,Rate)    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
#define IAnalogLocator_Clone(This,NewLocator)    ( (This)->lpVtbl -> Clone(This,NewLocator) )
#define IAnalogLocator_get_VideoStandard(This,AVS)    ( (This)->lpVtbl -> get_VideoStandard(This,AVS) )
#define IAnalogLocator_put_VideoStandard(This,AVS)    ( (This)->lpVtbl -> put_VideoStandard(This,AVS) )
#endif
#endif
#ifndef __IDigitalLocator_INTERFACE_DEFINED__
#define __IDigitalLocator_INTERFACE_DEFINED__
extern const IID IID_IDigitalLocator;
typedef struct IDigitalLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDigitalLocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDigitalLocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDigitalLocator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDigitalLocator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDigitalLocator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDigitalLocator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDigitalLocator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CarrierFrequency) (IDigitalLocator * This, long *Frequency);
	HRESULT(STDMETHODCALLTYPE * put_CarrierFrequency) (IDigitalLocator * This, long Frequency);
	HRESULT(STDMETHODCALLTYPE * get_InnerFEC) (IDigitalLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFEC) (IDigitalLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IDigitalLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IDigitalLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFEC) (IDigitalLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFEC) (IDigitalLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IDigitalLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IDigitalLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_Modulation) (IDigitalLocator * This, ModulationType * Modulation);
	HRESULT(STDMETHODCALLTYPE * put_Modulation) (IDigitalLocator * This, ModulationType Modulation);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IDigitalLocator * This, long *Rate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IDigitalLocator * This, long Rate);
	HRESULT(STDMETHODCALLTYPE * Clone) (IDigitalLocator * This, ILocator ** NewLocator);
	END_INTERFACE
} IDigitalLocatorVtbl;
interface IDigitalLocator
{
	CONST_VTBL struct IDigitalLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDigitalLocator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDigitalLocator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDigitalLocator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDigitalLocator_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDigitalLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDigitalLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDigitalLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDigitalLocator_get_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
#define IDigitalLocator_put_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
#define IDigitalLocator_get_InnerFEC(This,FEC)    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
#define IDigitalLocator_put_InnerFEC(This,FEC)    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
#define IDigitalLocator_get_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
#define IDigitalLocator_put_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
#define IDigitalLocator_get_OuterFEC(This,FEC)    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
#define IDigitalLocator_put_OuterFEC(This,FEC)    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
#define IDigitalLocator_get_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
#define IDigitalLocator_put_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
#define IDigitalLocator_get_Modulation(This,Modulation)    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
#define IDigitalLocator_put_Modulation(This,Modulation)    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
#define IDigitalLocator_get_SymbolRate(This,Rate)    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
#define IDigitalLocator_put_SymbolRate(This,Rate)    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
#define IDigitalLocator_Clone(This,NewLocator)    ( (This)->lpVtbl -> Clone(This,NewLocator) )
#endif
#endif
#ifndef __IATSCLocator_INTERFACE_DEFINED__
#define __IATSCLocator_INTERFACE_DEFINED__
extern const IID IID_IATSCLocator;
typedef struct IATSCLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IATSCLocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IATSCLocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IATSCLocator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IATSCLocator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IATSCLocator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IATSCLocator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IATSCLocator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CarrierFrequency) (IATSCLocator * This, long *Frequency);
	HRESULT(STDMETHODCALLTYPE * put_CarrierFrequency) (IATSCLocator * This, long Frequency);
	HRESULT(STDMETHODCALLTYPE * get_InnerFEC) (IATSCLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFEC) (IATSCLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IATSCLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IATSCLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFEC) (IATSCLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFEC) (IATSCLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IATSCLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IATSCLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_Modulation) (IATSCLocator * This, ModulationType * Modulation);
	HRESULT(STDMETHODCALLTYPE * put_Modulation) (IATSCLocator * This, ModulationType Modulation);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IATSCLocator * This, long *Rate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IATSCLocator * This, long Rate);
	HRESULT(STDMETHODCALLTYPE * Clone) (IATSCLocator * This, ILocator ** NewLocator);
	HRESULT(STDMETHODCALLTYPE * get_PhysicalChannel) (IATSCLocator * This, long *PhysicalChannel);
	HRESULT(STDMETHODCALLTYPE * put_PhysicalChannel) (IATSCLocator * This, long PhysicalChannel);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IATSCLocator * This, long *TSID);
	HRESULT(STDMETHODCALLTYPE * put_TSID) (IATSCLocator * This, long TSID);
	END_INTERFACE
} IATSCLocatorVtbl;
interface IATSCLocator
{
	CONST_VTBL struct IATSCLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IATSCLocator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IATSCLocator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IATSCLocator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IATSCLocator_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IATSCLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IATSCLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IATSCLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IATSCLocator_get_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
#define IATSCLocator_put_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
#define IATSCLocator_get_InnerFEC(This,FEC)    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
#define IATSCLocator_put_InnerFEC(This,FEC)    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
#define IATSCLocator_get_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
#define IATSCLocator_put_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
#define IATSCLocator_get_OuterFEC(This,FEC)    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
#define IATSCLocator_put_OuterFEC(This,FEC)    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
#define IATSCLocator_get_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
#define IATSCLocator_put_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
#define IATSCLocator_get_Modulation(This,Modulation)    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
#define IATSCLocator_put_Modulation(This,Modulation)    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
#define IATSCLocator_get_SymbolRate(This,Rate)    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
#define IATSCLocator_put_SymbolRate(This,Rate)    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
#define IATSCLocator_Clone(This,NewLocator)    ( (This)->lpVtbl -> Clone(This,NewLocator) )
#define IATSCLocator_get_PhysicalChannel(This,PhysicalChannel)    ( (This)->lpVtbl -> get_PhysicalChannel(This,PhysicalChannel) )
#define IATSCLocator_put_PhysicalChannel(This,PhysicalChannel)    ( (This)->lpVtbl -> put_PhysicalChannel(This,PhysicalChannel) )
#define IATSCLocator_get_TSID(This,TSID)    ( (This)->lpVtbl -> get_TSID(This,TSID) )
#define IATSCLocator_put_TSID(This,TSID)    ( (This)->lpVtbl -> put_TSID(This,TSID) )
#endif
#endif
#ifndef __IATSCLocator2_INTERFACE_DEFINED__
#define __IATSCLocator2_INTERFACE_DEFINED__
extern const IID IID_IATSCLocator2;
typedef struct IATSCLocator2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IATSCLocator2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IATSCLocator2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IATSCLocator2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IATSCLocator2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IATSCLocator2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IATSCLocator2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IATSCLocator2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CarrierFrequency) (IATSCLocator2 * This, long *Frequency);
	HRESULT(STDMETHODCALLTYPE * put_CarrierFrequency) (IATSCLocator2 * This, long Frequency);
	HRESULT(STDMETHODCALLTYPE * get_InnerFEC) (IATSCLocator2 * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFEC) (IATSCLocator2 * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IATSCLocator2 * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IATSCLocator2 * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFEC) (IATSCLocator2 * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFEC) (IATSCLocator2 * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IATSCLocator2 * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IATSCLocator2 * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_Modulation) (IATSCLocator2 * This, ModulationType * Modulation);
	HRESULT(STDMETHODCALLTYPE * put_Modulation) (IATSCLocator2 * This, ModulationType Modulation);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IATSCLocator2 * This, long *Rate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IATSCLocator2 * This, long Rate);
	HRESULT(STDMETHODCALLTYPE * Clone) (IATSCLocator2 * This, ILocator ** NewLocator);
	HRESULT(STDMETHODCALLTYPE * get_PhysicalChannel) (IATSCLocator2 * This, long *PhysicalChannel);
	HRESULT(STDMETHODCALLTYPE * put_PhysicalChannel) (IATSCLocator2 * This, long PhysicalChannel);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IATSCLocator2 * This, long *TSID);
	HRESULT(STDMETHODCALLTYPE * put_TSID) (IATSCLocator2 * This, long TSID);
	HRESULT(STDMETHODCALLTYPE * get_ProgramNumber) (IATSCLocator2 * This, long *ProgramNumber);
	HRESULT(STDMETHODCALLTYPE * put_ProgramNumber) (IATSCLocator2 * This, long ProgramNumber);
	END_INTERFACE
} IATSCLocator2Vtbl;
interface IATSCLocator2
{
	CONST_VTBL struct IATSCLocator2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IATSCLocator2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IATSCLocator2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IATSCLocator2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IATSCLocator2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IATSCLocator2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IATSCLocator2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IATSCLocator2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IATSCLocator2_get_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
#define IATSCLocator2_put_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
#define IATSCLocator2_get_InnerFEC(This,FEC)    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
#define IATSCLocator2_put_InnerFEC(This,FEC)    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
#define IATSCLocator2_get_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
#define IATSCLocator2_put_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
#define IATSCLocator2_get_OuterFEC(This,FEC)    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
#define IATSCLocator2_put_OuterFEC(This,FEC)    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
#define IATSCLocator2_get_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
#define IATSCLocator2_put_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
#define IATSCLocator2_get_Modulation(This,Modulation)    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
#define IATSCLocator2_put_Modulation(This,Modulation)    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
#define IATSCLocator2_get_SymbolRate(This,Rate)    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
#define IATSCLocator2_put_SymbolRate(This,Rate)    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
#define IATSCLocator2_Clone(This,NewLocator)    ( (This)->lpVtbl -> Clone(This,NewLocator) )
#define IATSCLocator2_get_PhysicalChannel(This,PhysicalChannel)    ( (This)->lpVtbl -> get_PhysicalChannel(This,PhysicalChannel) )
#define IATSCLocator2_put_PhysicalChannel(This,PhysicalChannel)    ( (This)->lpVtbl -> put_PhysicalChannel(This,PhysicalChannel) )
#define IATSCLocator2_get_TSID(This,TSID)    ( (This)->lpVtbl -> get_TSID(This,TSID) )
#define IATSCLocator2_put_TSID(This,TSID)    ( (This)->lpVtbl -> put_TSID(This,TSID) )
#define IATSCLocator2_get_ProgramNumber(This,ProgramNumber)    ( (This)->lpVtbl -> get_ProgramNumber(This,ProgramNumber) )
#define IATSCLocator2_put_ProgramNumber(This,ProgramNumber)    ( (This)->lpVtbl -> put_ProgramNumber(This,ProgramNumber) )
#endif
#endif
#ifndef __IDigitalCableLocator_INTERFACE_DEFINED__
#define __IDigitalCableLocator_INTERFACE_DEFINED__
extern const IID IID_IDigitalCableLocator;
typedef struct IDigitalCableLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDigitalCableLocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDigitalCableLocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDigitalCableLocator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDigitalCableLocator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDigitalCableLocator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDigitalCableLocator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDigitalCableLocator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CarrierFrequency) (IDigitalCableLocator * This, long *Frequency);
	HRESULT(STDMETHODCALLTYPE * put_CarrierFrequency) (IDigitalCableLocator * This, long Frequency);
	HRESULT(STDMETHODCALLTYPE * get_InnerFEC) (IDigitalCableLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFEC) (IDigitalCableLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IDigitalCableLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IDigitalCableLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFEC) (IDigitalCableLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFEC) (IDigitalCableLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IDigitalCableLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IDigitalCableLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_Modulation) (IDigitalCableLocator * This, ModulationType * Modulation);
	HRESULT(STDMETHODCALLTYPE * put_Modulation) (IDigitalCableLocator * This, ModulationType Modulation);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IDigitalCableLocator * This, long *Rate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IDigitalCableLocator * This, long Rate);
	HRESULT(STDMETHODCALLTYPE * Clone) (IDigitalCableLocator * This, ILocator ** NewLocator);
	HRESULT(STDMETHODCALLTYPE * get_PhysicalChannel) (IDigitalCableLocator * This, long *PhysicalChannel);
	HRESULT(STDMETHODCALLTYPE * put_PhysicalChannel) (IDigitalCableLocator * This, long PhysicalChannel);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IDigitalCableLocator * This, long *TSID);
	HRESULT(STDMETHODCALLTYPE * put_TSID) (IDigitalCableLocator * This, long TSID);
	HRESULT(STDMETHODCALLTYPE * get_ProgramNumber) (IDigitalCableLocator * This, long *ProgramNumber);
	HRESULT(STDMETHODCALLTYPE * put_ProgramNumber) (IDigitalCableLocator * This, long ProgramNumber);
	END_INTERFACE
} IDigitalCableLocatorVtbl;
interface IDigitalCableLocator
{
	CONST_VTBL struct IDigitalCableLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDigitalCableLocator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDigitalCableLocator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDigitalCableLocator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDigitalCableLocator_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDigitalCableLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDigitalCableLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDigitalCableLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDigitalCableLocator_get_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
#define IDigitalCableLocator_put_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
#define IDigitalCableLocator_get_InnerFEC(This,FEC)    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
#define IDigitalCableLocator_put_InnerFEC(This,FEC)    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
#define IDigitalCableLocator_get_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
#define IDigitalCableLocator_put_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
#define IDigitalCableLocator_get_OuterFEC(This,FEC)    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
#define IDigitalCableLocator_put_OuterFEC(This,FEC)    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
#define IDigitalCableLocator_get_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
#define IDigitalCableLocator_put_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
#define IDigitalCableLocator_get_Modulation(This,Modulation)    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
#define IDigitalCableLocator_put_Modulation(This,Modulation)    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
#define IDigitalCableLocator_get_SymbolRate(This,Rate)    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
#define IDigitalCableLocator_put_SymbolRate(This,Rate)    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
#define IDigitalCableLocator_Clone(This,NewLocator)    ( (This)->lpVtbl -> Clone(This,NewLocator) )
#define IDigitalCableLocator_get_PhysicalChannel(This,PhysicalChannel)    ( (This)->lpVtbl -> get_PhysicalChannel(This,PhysicalChannel) )
#define IDigitalCableLocator_put_PhysicalChannel(This,PhysicalChannel)    ( (This)->lpVtbl -> put_PhysicalChannel(This,PhysicalChannel) )
#define IDigitalCableLocator_get_TSID(This,TSID)    ( (This)->lpVtbl -> get_TSID(This,TSID) )
#define IDigitalCableLocator_put_TSID(This,TSID)    ( (This)->lpVtbl -> put_TSID(This,TSID) )
#define IDigitalCableLocator_get_ProgramNumber(This,ProgramNumber)    ( (This)->lpVtbl -> get_ProgramNumber(This,ProgramNumber) )
#define IDigitalCableLocator_put_ProgramNumber(This,ProgramNumber)    ( (This)->lpVtbl -> put_ProgramNumber(This,ProgramNumber) )
#endif
#endif
#ifndef __IDVBTLocator_INTERFACE_DEFINED__
#define __IDVBTLocator_INTERFACE_DEFINED__
extern const IID IID_IDVBTLocator;
typedef struct IDVBTLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVBTLocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVBTLocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVBTLocator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDVBTLocator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDVBTLocator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDVBTLocator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDVBTLocator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CarrierFrequency) (IDVBTLocator * This, long *Frequency);
	HRESULT(STDMETHODCALLTYPE * put_CarrierFrequency) (IDVBTLocator * This, long Frequency);
	HRESULT(STDMETHODCALLTYPE * get_InnerFEC) (IDVBTLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFEC) (IDVBTLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IDVBTLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IDVBTLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFEC) (IDVBTLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFEC) (IDVBTLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IDVBTLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IDVBTLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_Modulation) (IDVBTLocator * This, ModulationType * Modulation);
	HRESULT(STDMETHODCALLTYPE * put_Modulation) (IDVBTLocator * This, ModulationType Modulation);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IDVBTLocator * This, long *Rate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IDVBTLocator * This, long Rate);
	HRESULT(STDMETHODCALLTYPE * Clone) (IDVBTLocator * This, ILocator ** NewLocator);
	HRESULT(STDMETHODCALLTYPE * get_Bandwidth) (IDVBTLocator * This, long *BandWidthVal);
	HRESULT(STDMETHODCALLTYPE * put_Bandwidth) (IDVBTLocator * This, long BandwidthVal);
	HRESULT(STDMETHODCALLTYPE * get_LPInnerFEC) (IDVBTLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_LPInnerFEC) (IDVBTLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_LPInnerFECRate) (IDVBTLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_LPInnerFECRate) (IDVBTLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_HAlpha) (IDVBTLocator * This, HierarchyAlpha * Alpha);
	HRESULT(STDMETHODCALLTYPE * put_HAlpha) (IDVBTLocator * This, HierarchyAlpha Alpha);
	HRESULT(STDMETHODCALLTYPE * get_Guard) (IDVBTLocator * This, GuardInterval * GI);
	HRESULT(STDMETHODCALLTYPE * put_Guard) (IDVBTLocator * This, GuardInterval GI);
	HRESULT(STDMETHODCALLTYPE * get_Mode) (IDVBTLocator * This, TransmissionMode * mode);
	HRESULT(STDMETHODCALLTYPE * put_Mode) (IDVBTLocator * This, TransmissionMode mode);
	HRESULT(STDMETHODCALLTYPE * get_OtherFrequencyInUse) (IDVBTLocator * This, VARIANT_BOOL * OtherFrequencyInUseVal);
	HRESULT(STDMETHODCALLTYPE * put_OtherFrequencyInUse) (IDVBTLocator * This, VARIANT_BOOL OtherFrequencyInUseVal);
	END_INTERFACE
} IDVBTLocatorVtbl;
interface IDVBTLocator
{
	CONST_VTBL struct IDVBTLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVBTLocator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDVBTLocator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDVBTLocator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDVBTLocator_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDVBTLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDVBTLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDVBTLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDVBTLocator_get_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
#define IDVBTLocator_put_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
#define IDVBTLocator_get_InnerFEC(This,FEC)    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
#define IDVBTLocator_put_InnerFEC(This,FEC)    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
#define IDVBTLocator_get_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
#define IDVBTLocator_put_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
#define IDVBTLocator_get_OuterFEC(This,FEC)    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
#define IDVBTLocator_put_OuterFEC(This,FEC)    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
#define IDVBTLocator_get_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
#define IDVBTLocator_put_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
#define IDVBTLocator_get_Modulation(This,Modulation)    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
#define IDVBTLocator_put_Modulation(This,Modulation)    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
#define IDVBTLocator_get_SymbolRate(This,Rate)    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
#define IDVBTLocator_put_SymbolRate(This,Rate)    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
#define IDVBTLocator_Clone(This,NewLocator)    ( (This)->lpVtbl -> Clone(This,NewLocator) )
#define IDVBTLocator_get_Bandwidth(This,BandWidthVal)    ( (This)->lpVtbl -> get_Bandwidth(This,BandWidthVal) )
#define IDVBTLocator_put_Bandwidth(This,BandwidthVal)    ( (This)->lpVtbl -> put_Bandwidth(This,BandwidthVal) )
#define IDVBTLocator_get_LPInnerFEC(This,FEC)    ( (This)->lpVtbl -> get_LPInnerFEC(This,FEC) )
#define IDVBTLocator_put_LPInnerFEC(This,FEC)    ( (This)->lpVtbl -> put_LPInnerFEC(This,FEC) )
#define IDVBTLocator_get_LPInnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_LPInnerFECRate(This,FEC) )
#define IDVBTLocator_put_LPInnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_LPInnerFECRate(This,FEC) )
#define IDVBTLocator_get_HAlpha(This,Alpha)    ( (This)->lpVtbl -> get_HAlpha(This,Alpha) )
#define IDVBTLocator_put_HAlpha(This,Alpha)    ( (This)->lpVtbl -> put_HAlpha(This,Alpha) )
#define IDVBTLocator_get_Guard(This,GI)    ( (This)->lpVtbl -> get_Guard(This,GI) )
#define IDVBTLocator_put_Guard(This,GI)    ( (This)->lpVtbl -> put_Guard(This,GI) )
#define IDVBTLocator_get_Mode(This,mode)    ( (This)->lpVtbl -> get_Mode(This,mode) )
#define IDVBTLocator_put_Mode(This,mode)    ( (This)->lpVtbl -> put_Mode(This,mode) )
#define IDVBTLocator_get_OtherFrequencyInUse(This,OtherFrequencyInUseVal)    ( (This)->lpVtbl -> get_OtherFrequencyInUse(This,OtherFrequencyInUseVal) )
#define IDVBTLocator_put_OtherFrequencyInUse(This,OtherFrequencyInUseVal)    ( (This)->lpVtbl -> put_OtherFrequencyInUse(This,OtherFrequencyInUseVal) )
#endif
#endif
#ifndef __IDVBTLocator2_INTERFACE_DEFINED__
#define __IDVBTLocator2_INTERFACE_DEFINED__
extern const IID IID_IDVBTLocator2;
typedef struct IDVBTLocator2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVBTLocator2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVBTLocator2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVBTLocator2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDVBTLocator2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDVBTLocator2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDVBTLocator2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDVBTLocator2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CarrierFrequency) (IDVBTLocator2 * This, long *Frequency);
	HRESULT(STDMETHODCALLTYPE * put_CarrierFrequency) (IDVBTLocator2 * This, long Frequency);
	HRESULT(STDMETHODCALLTYPE * get_InnerFEC) (IDVBTLocator2 * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFEC) (IDVBTLocator2 * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IDVBTLocator2 * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IDVBTLocator2 * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFEC) (IDVBTLocator2 * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFEC) (IDVBTLocator2 * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IDVBTLocator2 * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IDVBTLocator2 * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_Modulation) (IDVBTLocator2 * This, ModulationType * Modulation);
	HRESULT(STDMETHODCALLTYPE * put_Modulation) (IDVBTLocator2 * This, ModulationType Modulation);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IDVBTLocator2 * This, long *Rate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IDVBTLocator2 * This, long Rate);
	HRESULT(STDMETHODCALLTYPE * Clone) (IDVBTLocator2 * This, ILocator ** NewLocator);
	HRESULT(STDMETHODCALLTYPE * get_Bandwidth) (IDVBTLocator2 * This, long *BandWidthVal);
	HRESULT(STDMETHODCALLTYPE * put_Bandwidth) (IDVBTLocator2 * This, long BandwidthVal);
	HRESULT(STDMETHODCALLTYPE * get_LPInnerFEC) (IDVBTLocator2 * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_LPInnerFEC) (IDVBTLocator2 * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_LPInnerFECRate) (IDVBTLocator2 * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_LPInnerFECRate) (IDVBTLocator2 * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_HAlpha) (IDVBTLocator2 * This, HierarchyAlpha * Alpha);
	HRESULT(STDMETHODCALLTYPE * put_HAlpha) (IDVBTLocator2 * This, HierarchyAlpha Alpha);
	HRESULT(STDMETHODCALLTYPE * get_Guard) (IDVBTLocator2 * This, GuardInterval * GI);
	HRESULT(STDMETHODCALLTYPE * put_Guard) (IDVBTLocator2 * This, GuardInterval GI);
	HRESULT(STDMETHODCALLTYPE * get_Mode) (IDVBTLocator2 * This, TransmissionMode * mode);
	HRESULT(STDMETHODCALLTYPE * put_Mode) (IDVBTLocator2 * This, TransmissionMode mode);
	HRESULT(STDMETHODCALLTYPE * get_OtherFrequencyInUse) (IDVBTLocator2 * This, VARIANT_BOOL * OtherFrequencyInUseVal);
	HRESULT(STDMETHODCALLTYPE * put_OtherFrequencyInUse) (IDVBTLocator2 * This, VARIANT_BOOL OtherFrequencyInUseVal);
	HRESULT(STDMETHODCALLTYPE * get_PhysicalLayerPipeId) (IDVBTLocator2 * This, long *PhysicalLayerPipeIdVal);
	HRESULT(STDMETHODCALLTYPE * put_PhysicalLayerPipeId) (IDVBTLocator2 * This, long PhysicalLayerPipeIdVal);
	END_INTERFACE
} IDVBTLocator2Vtbl;
interface IDVBTLocator2
{
	CONST_VTBL struct IDVBTLocator2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVBTLocator2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDVBTLocator2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDVBTLocator2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDVBTLocator2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDVBTLocator2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDVBTLocator2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDVBTLocator2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDVBTLocator2_get_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
#define IDVBTLocator2_put_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
#define IDVBTLocator2_get_InnerFEC(This,FEC)    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
#define IDVBTLocator2_put_InnerFEC(This,FEC)    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
#define IDVBTLocator2_get_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
#define IDVBTLocator2_put_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
#define IDVBTLocator2_get_OuterFEC(This,FEC)    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
#define IDVBTLocator2_put_OuterFEC(This,FEC)    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
#define IDVBTLocator2_get_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
#define IDVBTLocator2_put_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
#define IDVBTLocator2_get_Modulation(This,Modulation)    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
#define IDVBTLocator2_put_Modulation(This,Modulation)    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
#define IDVBTLocator2_get_SymbolRate(This,Rate)    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
#define IDVBTLocator2_put_SymbolRate(This,Rate)    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
#define IDVBTLocator2_Clone(This,NewLocator)    ( (This)->lpVtbl -> Clone(This,NewLocator) )
#define IDVBTLocator2_get_Bandwidth(This,BandWidthVal)    ( (This)->lpVtbl -> get_Bandwidth(This,BandWidthVal) )
#define IDVBTLocator2_put_Bandwidth(This,BandwidthVal)    ( (This)->lpVtbl -> put_Bandwidth(This,BandwidthVal) )
#define IDVBTLocator2_get_LPInnerFEC(This,FEC)    ( (This)->lpVtbl -> get_LPInnerFEC(This,FEC) )
#define IDVBTLocator2_put_LPInnerFEC(This,FEC)    ( (This)->lpVtbl -> put_LPInnerFEC(This,FEC) )
#define IDVBTLocator2_get_LPInnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_LPInnerFECRate(This,FEC) )
#define IDVBTLocator2_put_LPInnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_LPInnerFECRate(This,FEC) )
#define IDVBTLocator2_get_HAlpha(This,Alpha)    ( (This)->lpVtbl -> get_HAlpha(This,Alpha) )
#define IDVBTLocator2_put_HAlpha(This,Alpha)    ( (This)->lpVtbl -> put_HAlpha(This,Alpha) )
#define IDVBTLocator2_get_Guard(This,GI)    ( (This)->lpVtbl -> get_Guard(This,GI) )
#define IDVBTLocator2_put_Guard(This,GI)    ( (This)->lpVtbl -> put_Guard(This,GI) )
#define IDVBTLocator2_get_Mode(This,mode)    ( (This)->lpVtbl -> get_Mode(This,mode) )
#define IDVBTLocator2_put_Mode(This,mode)    ( (This)->lpVtbl -> put_Mode(This,mode) )
#define IDVBTLocator2_get_OtherFrequencyInUse(This,OtherFrequencyInUseVal)    ( (This)->lpVtbl -> get_OtherFrequencyInUse(This,OtherFrequencyInUseVal) )
#define IDVBTLocator2_put_OtherFrequencyInUse(This,OtherFrequencyInUseVal)    ( (This)->lpVtbl -> put_OtherFrequencyInUse(This,OtherFrequencyInUseVal) )
#define IDVBTLocator2_get_PhysicalLayerPipeId(This,PhysicalLayerPipeIdVal)    ( (This)->lpVtbl -> get_PhysicalLayerPipeId(This,PhysicalLayerPipeIdVal) )
#define IDVBTLocator2_put_PhysicalLayerPipeId(This,PhysicalLayerPipeIdVal)    ( (This)->lpVtbl -> put_PhysicalLayerPipeId(This,PhysicalLayerPipeIdVal) )
#endif
#endif
#ifndef __IDVBSLocator_INTERFACE_DEFINED__
#define __IDVBSLocator_INTERFACE_DEFINED__
extern const IID IID_IDVBSLocator;
typedef struct IDVBSLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVBSLocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVBSLocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVBSLocator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDVBSLocator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDVBSLocator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDVBSLocator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDVBSLocator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CarrierFrequency) (IDVBSLocator * This, long *Frequency);
	HRESULT(STDMETHODCALLTYPE * put_CarrierFrequency) (IDVBSLocator * This, long Frequency);
	HRESULT(STDMETHODCALLTYPE * get_InnerFEC) (IDVBSLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFEC) (IDVBSLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IDVBSLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IDVBSLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFEC) (IDVBSLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFEC) (IDVBSLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IDVBSLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IDVBSLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_Modulation) (IDVBSLocator * This, ModulationType * Modulation);
	HRESULT(STDMETHODCALLTYPE * put_Modulation) (IDVBSLocator * This, ModulationType Modulation);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IDVBSLocator * This, long *Rate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IDVBSLocator * This, long Rate);
	HRESULT(STDMETHODCALLTYPE * Clone) (IDVBSLocator * This, ILocator ** NewLocator);
	HRESULT(STDMETHODCALLTYPE * get_SignalPolarisation) (IDVBSLocator * This, Polarisation * PolarisationVal);
	HRESULT(STDMETHODCALLTYPE * put_SignalPolarisation) (IDVBSLocator * This, Polarisation PolarisationVal);
	HRESULT(STDMETHODCALLTYPE * get_WestPosition) (IDVBSLocator * This, VARIANT_BOOL * WestLongitude);
	HRESULT(STDMETHODCALLTYPE * put_WestPosition) (IDVBSLocator * This, VARIANT_BOOL WestLongitude);
	HRESULT(STDMETHODCALLTYPE * get_OrbitalPosition) (IDVBSLocator * This, long *longitude);
	HRESULT(STDMETHODCALLTYPE * put_OrbitalPosition) (IDVBSLocator * This, long longitude);
	HRESULT(STDMETHODCALLTYPE * get_Azimuth) (IDVBSLocator * This, long *Azimuth);
	HRESULT(STDMETHODCALLTYPE * put_Azimuth) (IDVBSLocator * This, long Azimuth);
	HRESULT(STDMETHODCALLTYPE * get_Elevation) (IDVBSLocator * This, long *Elevation);
	HRESULT(STDMETHODCALLTYPE * put_Elevation) (IDVBSLocator * This, long Elevation);
	END_INTERFACE
} IDVBSLocatorVtbl;
interface IDVBSLocator
{
	CONST_VTBL struct IDVBSLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVBSLocator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDVBSLocator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDVBSLocator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDVBSLocator_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDVBSLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDVBSLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDVBSLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDVBSLocator_get_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
#define IDVBSLocator_put_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
#define IDVBSLocator_get_InnerFEC(This,FEC)    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
#define IDVBSLocator_put_InnerFEC(This,FEC)    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
#define IDVBSLocator_get_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
#define IDVBSLocator_put_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
#define IDVBSLocator_get_OuterFEC(This,FEC)    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
#define IDVBSLocator_put_OuterFEC(This,FEC)    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
#define IDVBSLocator_get_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
#define IDVBSLocator_put_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
#define IDVBSLocator_get_Modulation(This,Modulation)    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
#define IDVBSLocator_put_Modulation(This,Modulation)    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
#define IDVBSLocator_get_SymbolRate(This,Rate)    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
#define IDVBSLocator_put_SymbolRate(This,Rate)    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
#define IDVBSLocator_Clone(This,NewLocator)    ( (This)->lpVtbl -> Clone(This,NewLocator) )
#define IDVBSLocator_get_SignalPolarisation(This,PolarisationVal)    ( (This)->lpVtbl -> get_SignalPolarisation(This,PolarisationVal) )
#define IDVBSLocator_put_SignalPolarisation(This,PolarisationVal)    ( (This)->lpVtbl -> put_SignalPolarisation(This,PolarisationVal) )
#define IDVBSLocator_get_WestPosition(This,WestLongitude)    ( (This)->lpVtbl -> get_WestPosition(This,WestLongitude) )
#define IDVBSLocator_put_WestPosition(This,WestLongitude)    ( (This)->lpVtbl -> put_WestPosition(This,WestLongitude) )
#define IDVBSLocator_get_OrbitalPosition(This,longitude)    ( (This)->lpVtbl -> get_OrbitalPosition(This,longitude) )
#define IDVBSLocator_put_OrbitalPosition(This,longitude)    ( (This)->lpVtbl -> put_OrbitalPosition(This,longitude) )
#define IDVBSLocator_get_Azimuth(This,Azimuth)    ( (This)->lpVtbl -> get_Azimuth(This,Azimuth) )
#define IDVBSLocator_put_Azimuth(This,Azimuth)    ( (This)->lpVtbl -> put_Azimuth(This,Azimuth) )
#define IDVBSLocator_get_Elevation(This,Elevation)    ( (This)->lpVtbl -> get_Elevation(This,Elevation) )
#define IDVBSLocator_put_Elevation(This,Elevation)    ( (This)->lpVtbl -> put_Elevation(This,Elevation) )
#endif
#endif
#ifndef __IDVBSLocator2_INTERFACE_DEFINED__
#define __IDVBSLocator2_INTERFACE_DEFINED__
extern const IID IID_IDVBSLocator2;
typedef struct IDVBSLocator2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVBSLocator2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVBSLocator2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVBSLocator2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDVBSLocator2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDVBSLocator2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDVBSLocator2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDVBSLocator2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CarrierFrequency) (IDVBSLocator2 * This, long *Frequency);
	HRESULT(STDMETHODCALLTYPE * put_CarrierFrequency) (IDVBSLocator2 * This, long Frequency);
	HRESULT(STDMETHODCALLTYPE * get_InnerFEC) (IDVBSLocator2 * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFEC) (IDVBSLocator2 * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IDVBSLocator2 * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IDVBSLocator2 * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFEC) (IDVBSLocator2 * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFEC) (IDVBSLocator2 * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IDVBSLocator2 * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IDVBSLocator2 * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_Modulation) (IDVBSLocator2 * This, ModulationType * Modulation);
	HRESULT(STDMETHODCALLTYPE * put_Modulation) (IDVBSLocator2 * This, ModulationType Modulation);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IDVBSLocator2 * This, long *Rate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IDVBSLocator2 * This, long Rate);
	HRESULT(STDMETHODCALLTYPE * Clone) (IDVBSLocator2 * This, ILocator ** NewLocator);
	HRESULT(STDMETHODCALLTYPE * get_SignalPolarisation) (IDVBSLocator2 * This, Polarisation * PolarisationVal);
	HRESULT(STDMETHODCALLTYPE * put_SignalPolarisation) (IDVBSLocator2 * This, Polarisation PolarisationVal);
	HRESULT(STDMETHODCALLTYPE * get_WestPosition) (IDVBSLocator2 * This, VARIANT_BOOL * WestLongitude);
	HRESULT(STDMETHODCALLTYPE * put_WestPosition) (IDVBSLocator2 * This, VARIANT_BOOL WestLongitude);
	HRESULT(STDMETHODCALLTYPE * get_OrbitalPosition) (IDVBSLocator2 * This, long *longitude);
	HRESULT(STDMETHODCALLTYPE * put_OrbitalPosition) (IDVBSLocator2 * This, long longitude);
	HRESULT(STDMETHODCALLTYPE * get_Azimuth) (IDVBSLocator2 * This, long *Azimuth);
	HRESULT(STDMETHODCALLTYPE * put_Azimuth) (IDVBSLocator2 * This, long Azimuth);
	HRESULT(STDMETHODCALLTYPE * get_Elevation) (IDVBSLocator2 * This, long *Elevation);
	HRESULT(STDMETHODCALLTYPE * put_Elevation) (IDVBSLocator2 * This, long Elevation);
	HRESULT(STDMETHODCALLTYPE * get_DiseqLNBSource) (IDVBSLocator2 * This, LNB_Source * DiseqLNBSourceVal);
	HRESULT(STDMETHODCALLTYPE * put_DiseqLNBSource) (IDVBSLocator2 * This, LNB_Source DiseqLNBSourceVal);
	HRESULT(STDMETHODCALLTYPE * get_LocalOscillatorOverrideLow) (IDVBSLocator2 * This, long *LocalOscillatorOverrideLowVal);
	HRESULT(STDMETHODCALLTYPE * put_LocalOscillatorOverrideLow) (IDVBSLocator2 * This, long LocalOscillatorOverrideLowVal);
	HRESULT(STDMETHODCALLTYPE * get_LocalOscillatorOverrideHigh) (IDVBSLocator2 * This, long *LocalOscillatorOverrideHighVal);
	HRESULT(STDMETHODCALLTYPE * put_LocalOscillatorOverrideHigh) (IDVBSLocator2 * This, long LocalOscillatorOverrideHighVal);
	HRESULT(STDMETHODCALLTYPE * get_LocalLNBSwitchOverride) (IDVBSLocator2 * This, long *LocalLNBSwitchOverrideVal);
	HRESULT(STDMETHODCALLTYPE * put_LocalLNBSwitchOverride) (IDVBSLocator2 * This, long LocalLNBSwitchOverrideVal);
	HRESULT(STDMETHODCALLTYPE * get_LocalSpectralInversionOverride) (IDVBSLocator2 * This, SpectralInversion * LocalSpectralInversionOverrideVal);
	HRESULT(STDMETHODCALLTYPE * put_LocalSpectralInversionOverride) (IDVBSLocator2 * This, SpectralInversion LocalSpectralInversionOverrideVal);
	HRESULT(STDMETHODCALLTYPE * get_SignalRollOff) (IDVBSLocator2 * This, RollOff * RollOffVal);
	HRESULT(STDMETHODCALLTYPE * put_SignalRollOff) (IDVBSLocator2 * This, RollOff RollOffVal);
	HRESULT(STDMETHODCALLTYPE * get_SignalPilot) (IDVBSLocator2 * This, Pilot * PilotVal);
	HRESULT(STDMETHODCALLTYPE * put_SignalPilot) (IDVBSLocator2 * This, Pilot PilotVal);
	END_INTERFACE
} IDVBSLocator2Vtbl;
interface IDVBSLocator2
{
	CONST_VTBL struct IDVBSLocator2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVBSLocator2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDVBSLocator2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDVBSLocator2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDVBSLocator2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDVBSLocator2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDVBSLocator2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDVBSLocator2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDVBSLocator2_get_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
#define IDVBSLocator2_put_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
#define IDVBSLocator2_get_InnerFEC(This,FEC)    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
#define IDVBSLocator2_put_InnerFEC(This,FEC)    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
#define IDVBSLocator2_get_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
#define IDVBSLocator2_put_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
#define IDVBSLocator2_get_OuterFEC(This,FEC)    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
#define IDVBSLocator2_put_OuterFEC(This,FEC)    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
#define IDVBSLocator2_get_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
#define IDVBSLocator2_put_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
#define IDVBSLocator2_get_Modulation(This,Modulation)    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
#define IDVBSLocator2_put_Modulation(This,Modulation)    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
#define IDVBSLocator2_get_SymbolRate(This,Rate)    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
#define IDVBSLocator2_put_SymbolRate(This,Rate)    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
#define IDVBSLocator2_Clone(This,NewLocator)    ( (This)->lpVtbl -> Clone(This,NewLocator) )
#define IDVBSLocator2_get_SignalPolarisation(This,PolarisationVal)    ( (This)->lpVtbl -> get_SignalPolarisation(This,PolarisationVal) )
#define IDVBSLocator2_put_SignalPolarisation(This,PolarisationVal)    ( (This)->lpVtbl -> put_SignalPolarisation(This,PolarisationVal) )
#define IDVBSLocator2_get_WestPosition(This,WestLongitude)    ( (This)->lpVtbl -> get_WestPosition(This,WestLongitude) )
#define IDVBSLocator2_put_WestPosition(This,WestLongitude)    ( (This)->lpVtbl -> put_WestPosition(This,WestLongitude) )
#define IDVBSLocator2_get_OrbitalPosition(This,longitude)    ( (This)->lpVtbl -> get_OrbitalPosition(This,longitude) )
#define IDVBSLocator2_put_OrbitalPosition(This,longitude)    ( (This)->lpVtbl -> put_OrbitalPosition(This,longitude) )
#define IDVBSLocator2_get_Azimuth(This,Azimuth)    ( (This)->lpVtbl -> get_Azimuth(This,Azimuth) )
#define IDVBSLocator2_put_Azimuth(This,Azimuth)    ( (This)->lpVtbl -> put_Azimuth(This,Azimuth) )
#define IDVBSLocator2_get_Elevation(This,Elevation)    ( (This)->lpVtbl -> get_Elevation(This,Elevation) )
#define IDVBSLocator2_put_Elevation(This,Elevation)    ( (This)->lpVtbl -> put_Elevation(This,Elevation) )
#define IDVBSLocator2_get_DiseqLNBSource(This,DiseqLNBSourceVal)    ( (This)->lpVtbl -> get_DiseqLNBSource(This,DiseqLNBSourceVal) )
#define IDVBSLocator2_put_DiseqLNBSource(This,DiseqLNBSourceVal)    ( (This)->lpVtbl -> put_DiseqLNBSource(This,DiseqLNBSourceVal) )
#define IDVBSLocator2_get_LocalOscillatorOverrideLow(This,LocalOscillatorOverrideLowVal)    ( (This)->lpVtbl -> get_LocalOscillatorOverrideLow(This,LocalOscillatorOverrideLowVal) )
#define IDVBSLocator2_put_LocalOscillatorOverrideLow(This,LocalOscillatorOverrideLowVal)    ( (This)->lpVtbl -> put_LocalOscillatorOverrideLow(This,LocalOscillatorOverrideLowVal) )
#define IDVBSLocator2_get_LocalOscillatorOverrideHigh(This,LocalOscillatorOverrideHighVal)    ( (This)->lpVtbl -> get_LocalOscillatorOverrideHigh(This,LocalOscillatorOverrideHighVal) )
#define IDVBSLocator2_put_LocalOscillatorOverrideHigh(This,LocalOscillatorOverrideHighVal)    ( (This)->lpVtbl -> put_LocalOscillatorOverrideHigh(This,LocalOscillatorOverrideHighVal) )
#define IDVBSLocator2_get_LocalLNBSwitchOverride(This,LocalLNBSwitchOverrideVal)    ( (This)->lpVtbl -> get_LocalLNBSwitchOverride(This,LocalLNBSwitchOverrideVal) )
#define IDVBSLocator2_put_LocalLNBSwitchOverride(This,LocalLNBSwitchOverrideVal)    ( (This)->lpVtbl -> put_LocalLNBSwitchOverride(This,LocalLNBSwitchOverrideVal) )
#define IDVBSLocator2_get_LocalSpectralInversionOverride(This,LocalSpectralInversionOverrideVal)    ( (This)->lpVtbl -> get_LocalSpectralInversionOverride(This,LocalSpectralInversionOverrideVal) )
#define IDVBSLocator2_put_LocalSpectralInversionOverride(This,LocalSpectralInversionOverrideVal)    ( (This)->lpVtbl -> put_LocalSpectralInversionOverride(This,LocalSpectralInversionOverrideVal) )
#define IDVBSLocator2_get_SignalRollOff(This,RollOffVal)    ( (This)->lpVtbl -> get_SignalRollOff(This,RollOffVal) )
#define IDVBSLocator2_put_SignalRollOff(This,RollOffVal)    ( (This)->lpVtbl -> put_SignalRollOff(This,RollOffVal) )
#define IDVBSLocator2_get_SignalPilot(This,PilotVal)    ( (This)->lpVtbl -> get_SignalPilot(This,PilotVal) )
#define IDVBSLocator2_put_SignalPilot(This,PilotVal)    ( (This)->lpVtbl -> put_SignalPilot(This,PilotVal) )
#endif
#endif
#ifndef __IDVBCLocator_INTERFACE_DEFINED__
#define __IDVBCLocator_INTERFACE_DEFINED__
extern const IID IID_IDVBCLocator;
typedef struct IDVBCLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVBCLocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVBCLocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVBCLocator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDVBCLocator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDVBCLocator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDVBCLocator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDVBCLocator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CarrierFrequency) (IDVBCLocator * This, long *Frequency);
	HRESULT(STDMETHODCALLTYPE * put_CarrierFrequency) (IDVBCLocator * This, long Frequency);
	HRESULT(STDMETHODCALLTYPE * get_InnerFEC) (IDVBCLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFEC) (IDVBCLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IDVBCLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IDVBCLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFEC) (IDVBCLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFEC) (IDVBCLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IDVBCLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IDVBCLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_Modulation) (IDVBCLocator * This, ModulationType * Modulation);
	HRESULT(STDMETHODCALLTYPE * put_Modulation) (IDVBCLocator * This, ModulationType Modulation);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IDVBCLocator * This, long *Rate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IDVBCLocator * This, long Rate);
	HRESULT(STDMETHODCALLTYPE * Clone) (IDVBCLocator * This, ILocator ** NewLocator);
	END_INTERFACE
} IDVBCLocatorVtbl;
interface IDVBCLocator
{
	CONST_VTBL struct IDVBCLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVBCLocator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDVBCLocator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDVBCLocator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDVBCLocator_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDVBCLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDVBCLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDVBCLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDVBCLocator_get_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
#define IDVBCLocator_put_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
#define IDVBCLocator_get_InnerFEC(This,FEC)    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
#define IDVBCLocator_put_InnerFEC(This,FEC)    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
#define IDVBCLocator_get_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
#define IDVBCLocator_put_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
#define IDVBCLocator_get_OuterFEC(This,FEC)    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
#define IDVBCLocator_put_OuterFEC(This,FEC)    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
#define IDVBCLocator_get_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
#define IDVBCLocator_put_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
#define IDVBCLocator_get_Modulation(This,Modulation)    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
#define IDVBCLocator_put_Modulation(This,Modulation)    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
#define IDVBCLocator_get_SymbolRate(This,Rate)    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
#define IDVBCLocator_put_SymbolRate(This,Rate)    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
#define IDVBCLocator_Clone(This,NewLocator)    ( (This)->lpVtbl -> Clone(This,NewLocator) )
#endif
#endif
#ifndef __IISDBSLocator_INTERFACE_DEFINED__
#define __IISDBSLocator_INTERFACE_DEFINED__
extern const IID IID_IISDBSLocator;
typedef struct IISDBSLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IISDBSLocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IISDBSLocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IISDBSLocator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IISDBSLocator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IISDBSLocator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IISDBSLocator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IISDBSLocator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CarrierFrequency) (IISDBSLocator * This, long *Frequency);
	HRESULT(STDMETHODCALLTYPE * put_CarrierFrequency) (IISDBSLocator * This, long Frequency);
	HRESULT(STDMETHODCALLTYPE * get_InnerFEC) (IISDBSLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFEC) (IISDBSLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IISDBSLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IISDBSLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFEC) (IISDBSLocator * This, FECMethod * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFEC) (IISDBSLocator * This, FECMethod FEC);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IISDBSLocator * This, BinaryConvolutionCodeRate * FEC);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IISDBSLocator * This, BinaryConvolutionCodeRate FEC);
	HRESULT(STDMETHODCALLTYPE * get_Modulation) (IISDBSLocator * This, ModulationType * Modulation);
	HRESULT(STDMETHODCALLTYPE * put_Modulation) (IISDBSLocator * This, ModulationType Modulation);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IISDBSLocator * This, long *Rate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IISDBSLocator * This, long Rate);
	HRESULT(STDMETHODCALLTYPE * Clone) (IISDBSLocator * This, ILocator ** NewLocator);
	HRESULT(STDMETHODCALLTYPE * get_SignalPolarisation) (IISDBSLocator * This, Polarisation * PolarisationVal);
	HRESULT(STDMETHODCALLTYPE * put_SignalPolarisation) (IISDBSLocator * This, Polarisation PolarisationVal);
	HRESULT(STDMETHODCALLTYPE * get_WestPosition) (IISDBSLocator * This, VARIANT_BOOL * WestLongitude);
	HRESULT(STDMETHODCALLTYPE * put_WestPosition) (IISDBSLocator * This, VARIANT_BOOL WestLongitude);
	HRESULT(STDMETHODCALLTYPE * get_OrbitalPosition) (IISDBSLocator * This, long *longitude);
	HRESULT(STDMETHODCALLTYPE * put_OrbitalPosition) (IISDBSLocator * This, long longitude);
	HRESULT(STDMETHODCALLTYPE * get_Azimuth) (IISDBSLocator * This, long *Azimuth);
	HRESULT(STDMETHODCALLTYPE * put_Azimuth) (IISDBSLocator * This, long Azimuth);
	HRESULT(STDMETHODCALLTYPE * get_Elevation) (IISDBSLocator * This, long *Elevation);
	HRESULT(STDMETHODCALLTYPE * put_Elevation) (IISDBSLocator * This, long Elevation);
	END_INTERFACE
} IISDBSLocatorVtbl;
interface IISDBSLocator
{
	CONST_VTBL struct IISDBSLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IISDBSLocator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IISDBSLocator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IISDBSLocator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IISDBSLocator_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IISDBSLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IISDBSLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IISDBSLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IISDBSLocator_get_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
#define IISDBSLocator_put_CarrierFrequency(This,Frequency)    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
#define IISDBSLocator_get_InnerFEC(This,FEC)    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
#define IISDBSLocator_put_InnerFEC(This,FEC)    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
#define IISDBSLocator_get_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
#define IISDBSLocator_put_InnerFECRate(This,FEC)    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
#define IISDBSLocator_get_OuterFEC(This,FEC)    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
#define IISDBSLocator_put_OuterFEC(This,FEC)    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
#define IISDBSLocator_get_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
#define IISDBSLocator_put_OuterFECRate(This,FEC)    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
#define IISDBSLocator_get_Modulation(This,Modulation)    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
#define IISDBSLocator_put_Modulation(This,Modulation)    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
#define IISDBSLocator_get_SymbolRate(This,Rate)    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
#define IISDBSLocator_put_SymbolRate(This,Rate)    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
#define IISDBSLocator_Clone(This,NewLocator)    ( (This)->lpVtbl -> Clone(This,NewLocator) )
#define IISDBSLocator_get_SignalPolarisation(This,PolarisationVal)    ( (This)->lpVtbl -> get_SignalPolarisation(This,PolarisationVal) )
#define IISDBSLocator_put_SignalPolarisation(This,PolarisationVal)    ( (This)->lpVtbl -> put_SignalPolarisation(This,PolarisationVal) )
#define IISDBSLocator_get_WestPosition(This,WestLongitude)    ( (This)->lpVtbl -> get_WestPosition(This,WestLongitude) )
#define IISDBSLocator_put_WestPosition(This,WestLongitude)    ( (This)->lpVtbl -> put_WestPosition(This,WestLongitude) )
#define IISDBSLocator_get_OrbitalPosition(This,longitude)    ( (This)->lpVtbl -> get_OrbitalPosition(This,longitude) )
#define IISDBSLocator_put_OrbitalPosition(This,longitude)    ( (This)->lpVtbl -> put_OrbitalPosition(This,longitude) )
#define IISDBSLocator_get_Azimuth(This,Azimuth)    ( (This)->lpVtbl -> get_Azimuth(This,Azimuth) )
#define IISDBSLocator_put_Azimuth(This,Azimuth)    ( (This)->lpVtbl -> put_Azimuth(This,Azimuth) )
#define IISDBSLocator_get_Elevation(This,Elevation)    ( (This)->lpVtbl -> get_Elevation(This,Elevation) )
#define IISDBSLocator_put_Elevation(This,Elevation)    ( (This)->lpVtbl -> put_Elevation(This,Elevation) )
#endif
#endif
#ifndef __IESEvent_INTERFACE_DEFINED__
#define __IESEvent_INTERFACE_DEFINED__
extern const IID IID_IESEvent;
typedef struct IESEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IESEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IESEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IESEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetEventId) (IESEvent * This, DWORD * pdwEventId);
	HRESULT(STDMETHODCALLTYPE * GetEventType) (IESEvent * This, GUID * pguidEventType);
	HRESULT(STDMETHODCALLTYPE * SetCompletionStatus) (IESEvent * This, DWORD dwResult);
	HRESULT(STDMETHODCALLTYPE * GetData) (IESEvent * This, SAFEARRAY * *pbData);
	HRESULT(STDMETHODCALLTYPE * GetStringData) (IESEvent * This, BSTR * pbstrData);
	END_INTERFACE
} IESEventVtbl;
interface IESEvent
{
	CONST_VTBL struct IESEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IESEvent_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IESEvent_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IESEvent_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IESEvent_GetEventId(This,pdwEventId)    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
#define IESEvent_GetEventType(This,pguidEventType)    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
#define IESEvent_SetCompletionStatus(This,dwResult)    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
#define IESEvent_GetData(This,pbData)    ( (This)->lpVtbl -> GetData(This,pbData) )
#define IESEvent_GetStringData(This,pbstrData)    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
#endif
#endif
#ifndef __IESOpenMmiEvent_INTERFACE_DEFINED__
#define __IESOpenMmiEvent_INTERFACE_DEFINED__
extern const IID IID_IESOpenMmiEvent;
typedef struct IESOpenMmiEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IESOpenMmiEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IESOpenMmiEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IESOpenMmiEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetEventId) (IESOpenMmiEvent * This, DWORD * pdwEventId);
	HRESULT(STDMETHODCALLTYPE * GetEventType) (IESOpenMmiEvent * This, GUID * pguidEventType);
	HRESULT(STDMETHODCALLTYPE * SetCompletionStatus) (IESOpenMmiEvent * This, DWORD dwResult);
	HRESULT(STDMETHODCALLTYPE * GetData) (IESOpenMmiEvent * This, SAFEARRAY * *pbData);
	HRESULT(STDMETHODCALLTYPE * GetStringData) (IESOpenMmiEvent * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * GetDialogNumber) (IESOpenMmiEvent * This, DWORD * pDialogRequest, DWORD * pDialogNumber);
	HRESULT(STDMETHODCALLTYPE * GetDialogType) (IESOpenMmiEvent * This, GUID * guidDialogType);
	HRESULT(STDMETHODCALLTYPE * GetDialogData) (IESOpenMmiEvent * This, SAFEARRAY * *pbData);
	HRESULT(STDMETHODCALLTYPE * GetDialogStringData) (IESOpenMmiEvent * This, BSTR * pbstrBaseUrl, BSTR * pbstrData);
	END_INTERFACE
} IESOpenMmiEventVtbl;
interface IESOpenMmiEvent
{
	CONST_VTBL struct IESOpenMmiEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IESOpenMmiEvent_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IESOpenMmiEvent_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IESOpenMmiEvent_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IESOpenMmiEvent_GetEventId(This,pdwEventId)    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
#define IESOpenMmiEvent_GetEventType(This,pguidEventType)    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
#define IESOpenMmiEvent_SetCompletionStatus(This,dwResult)    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
#define IESOpenMmiEvent_GetData(This,pbData)    ( (This)->lpVtbl -> GetData(This,pbData) )
#define IESOpenMmiEvent_GetStringData(This,pbstrData)    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
#define IESOpenMmiEvent_GetDialogNumber(This,pDialogRequest,pDialogNumber)    ( (This)->lpVtbl -> GetDialogNumber(This,pDialogRequest,pDialogNumber) )
#define IESOpenMmiEvent_GetDialogType(This,guidDialogType)    ( (This)->lpVtbl -> GetDialogType(This,guidDialogType) )
#define IESOpenMmiEvent_GetDialogData(This,pbData)    ( (This)->lpVtbl -> GetDialogData(This,pbData) )
#define IESOpenMmiEvent_GetDialogStringData(This,pbstrBaseUrl,pbstrData)    ( (This)->lpVtbl -> GetDialogStringData(This,pbstrBaseUrl,pbstrData) )
#endif
#endif
#ifndef __IESCloseMmiEvent_INTERFACE_DEFINED__
#define __IESCloseMmiEvent_INTERFACE_DEFINED__
extern const IID IID_IESCloseMmiEvent;
typedef struct IESCloseMmiEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IESCloseMmiEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IESCloseMmiEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IESCloseMmiEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetEventId) (IESCloseMmiEvent * This, DWORD * pdwEventId);
	HRESULT(STDMETHODCALLTYPE * GetEventType) (IESCloseMmiEvent * This, GUID * pguidEventType);
	HRESULT(STDMETHODCALLTYPE * SetCompletionStatus) (IESCloseMmiEvent * This, DWORD dwResult);
	HRESULT(STDMETHODCALLTYPE * GetData) (IESCloseMmiEvent * This, SAFEARRAY * *pbData);
	HRESULT(STDMETHODCALLTYPE * GetStringData) (IESCloseMmiEvent * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * GetDialogNumber) (IESCloseMmiEvent * This, DWORD * pDialogNumber);
	END_INTERFACE
} IESCloseMmiEventVtbl;
interface IESCloseMmiEvent
{
	CONST_VTBL struct IESCloseMmiEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IESCloseMmiEvent_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IESCloseMmiEvent_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IESCloseMmiEvent_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IESCloseMmiEvent_GetEventId(This,pdwEventId)    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
#define IESCloseMmiEvent_GetEventType(This,pguidEventType)    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
#define IESCloseMmiEvent_SetCompletionStatus(This,dwResult)    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
#define IESCloseMmiEvent_GetData(This,pbData)    ( (This)->lpVtbl -> GetData(This,pbData) )
#define IESCloseMmiEvent_GetStringData(This,pbstrData)    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
#define IESCloseMmiEvent_GetDialogNumber(This,pDialogNumber)    ( (This)->lpVtbl -> GetDialogNumber(This,pDialogNumber) )
#endif
#endif
#ifndef __IESValueUpdatedEvent_INTERFACE_DEFINED__
#define __IESValueUpdatedEvent_INTERFACE_DEFINED__
extern const IID IID_IESValueUpdatedEvent;
typedef struct IESValueUpdatedEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IESValueUpdatedEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IESValueUpdatedEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IESValueUpdatedEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetEventId) (IESValueUpdatedEvent * This, DWORD * pdwEventId);
	HRESULT(STDMETHODCALLTYPE * GetEventType) (IESValueUpdatedEvent * This, GUID * pguidEventType);
	HRESULT(STDMETHODCALLTYPE * SetCompletionStatus) (IESValueUpdatedEvent * This, DWORD dwResult);
	HRESULT(STDMETHODCALLTYPE * GetData) (IESValueUpdatedEvent * This, SAFEARRAY * *pbData);
	HRESULT(STDMETHODCALLTYPE * GetStringData) (IESValueUpdatedEvent * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * GetValueNames) (IESValueUpdatedEvent * This, SAFEARRAY * *pbstrNames);
	END_INTERFACE
} IESValueUpdatedEventVtbl;
interface IESValueUpdatedEvent
{
	CONST_VTBL struct IESValueUpdatedEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IESValueUpdatedEvent_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IESValueUpdatedEvent_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IESValueUpdatedEvent_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IESValueUpdatedEvent_GetEventId(This,pdwEventId)    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
#define IESValueUpdatedEvent_GetEventType(This,pguidEventType)    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
#define IESValueUpdatedEvent_SetCompletionStatus(This,dwResult)    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
#define IESValueUpdatedEvent_GetData(This,pbData)    ( (This)->lpVtbl -> GetData(This,pbData) )
#define IESValueUpdatedEvent_GetStringData(This,pbstrData)    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
#define IESValueUpdatedEvent_GetValueNames(This,pbstrNames)    ( (This)->lpVtbl -> GetValueNames(This,pbstrNames) )
#endif
#endif
#ifndef __IESRequestTunerEvent_INTERFACE_DEFINED__
#define __IESRequestTunerEvent_INTERFACE_DEFINED__
extern const IID IID_IESRequestTunerEvent;
typedef struct IESRequestTunerEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IESRequestTunerEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IESRequestTunerEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IESRequestTunerEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetEventId) (IESRequestTunerEvent * This, DWORD * pdwEventId);
	HRESULT(STDMETHODCALLTYPE * GetEventType) (IESRequestTunerEvent * This, GUID * pguidEventType);
	HRESULT(STDMETHODCALLTYPE * SetCompletionStatus) (IESRequestTunerEvent * This, DWORD dwResult);
	HRESULT(STDMETHODCALLTYPE * GetData) (IESRequestTunerEvent * This, SAFEARRAY * *pbData);
	HRESULT(STDMETHODCALLTYPE * GetStringData) (IESRequestTunerEvent * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * GetPriority) (IESRequestTunerEvent * This, BYTE * pbyPriority);
	HRESULT(STDMETHODCALLTYPE * GetReason) (IESRequestTunerEvent * This, BYTE * pbyReason);
	HRESULT(STDMETHODCALLTYPE * GetConsequences) (IESRequestTunerEvent * This, BYTE * pbyConsequences);
	HRESULT(STDMETHODCALLTYPE * GetEstimatedTime) (IESRequestTunerEvent * This, DWORD * pdwEstimatedTime);
	END_INTERFACE
} IESRequestTunerEventVtbl;
interface IESRequestTunerEvent
{
	CONST_VTBL struct IESRequestTunerEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IESRequestTunerEvent_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IESRequestTunerEvent_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IESRequestTunerEvent_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IESRequestTunerEvent_GetEventId(This,pdwEventId)    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
#define IESRequestTunerEvent_GetEventType(This,pguidEventType)    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
#define IESRequestTunerEvent_SetCompletionStatus(This,dwResult)    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
#define IESRequestTunerEvent_GetData(This,pbData)    ( (This)->lpVtbl -> GetData(This,pbData) )
#define IESRequestTunerEvent_GetStringData(This,pbstrData)    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
#define IESRequestTunerEvent_GetPriority(This,pbyPriority)    ( (This)->lpVtbl -> GetPriority(This,pbyPriority) )
#define IESRequestTunerEvent_GetReason(This,pbyReason)    ( (This)->lpVtbl -> GetReason(This,pbyReason) )
#define IESRequestTunerEvent_GetConsequences(This,pbyConsequences)    ( (This)->lpVtbl -> GetConsequences(This,pbyConsequences) )
#define IESRequestTunerEvent_GetEstimatedTime(This,pdwEstimatedTime)    ( (This)->lpVtbl -> GetEstimatedTime(This,pdwEstimatedTime) )
#endif
#endif
#ifndef __IESIsdbCasResponseEvent_INTERFACE_DEFINED__
#define __IESIsdbCasResponseEvent_INTERFACE_DEFINED__
extern const IID IID_IESIsdbCasResponseEvent;
typedef struct IESIsdbCasResponseEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IESIsdbCasResponseEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IESIsdbCasResponseEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IESIsdbCasResponseEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetEventId) (IESIsdbCasResponseEvent * This, DWORD * pdwEventId);
	HRESULT(STDMETHODCALLTYPE * GetEventType) (IESIsdbCasResponseEvent * This, GUID * pguidEventType);
	HRESULT(STDMETHODCALLTYPE * SetCompletionStatus) (IESIsdbCasResponseEvent * This, DWORD dwResult);
	HRESULT(STDMETHODCALLTYPE * GetData) (IESIsdbCasResponseEvent * This, SAFEARRAY * *pbData);
	HRESULT(STDMETHODCALLTYPE * GetStringData) (IESIsdbCasResponseEvent * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * GetRequestId) (IESIsdbCasResponseEvent * This, DWORD * pRequestId);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IESIsdbCasResponseEvent * This, DWORD * pStatus);
	HRESULT(STDMETHODCALLTYPE * GetDataLength) (IESIsdbCasResponseEvent * This, DWORD * pRequestLength);
	HRESULT(STDMETHODCALLTYPE * GetResponseData) (IESIsdbCasResponseEvent * This, SAFEARRAY * *pbData);
	END_INTERFACE
} IESIsdbCasResponseEventVtbl;
interface IESIsdbCasResponseEvent
{
	CONST_VTBL struct IESIsdbCasResponseEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IESIsdbCasResponseEvent_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IESIsdbCasResponseEvent_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IESIsdbCasResponseEvent_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IESIsdbCasResponseEvent_GetEventId(This,pdwEventId)    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
#define IESIsdbCasResponseEvent_GetEventType(This,pguidEventType)    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
#define IESIsdbCasResponseEvent_SetCompletionStatus(This,dwResult)    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
#define IESIsdbCasResponseEvent_GetData(This,pbData)    ( (This)->lpVtbl -> GetData(This,pbData) )
#define IESIsdbCasResponseEvent_GetStringData(This,pbstrData)    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
#define IESIsdbCasResponseEvent_GetRequestId(This,pRequestId)    ( (This)->lpVtbl -> GetRequestId(This,pRequestId) )
#define IESIsdbCasResponseEvent_GetStatus(This,pStatus)    ( (This)->lpVtbl -> GetStatus(This,pStatus) )
#define IESIsdbCasResponseEvent_GetDataLength(This,pRequestLength)    ( (This)->lpVtbl -> GetDataLength(This,pRequestLength) )
#define IESIsdbCasResponseEvent_GetResponseData(This,pbData)    ( (This)->lpVtbl -> GetResponseData(This,pbData) )
#endif
#endif
#ifndef __IGpnvsCommonBase_INTERFACE_DEFINED__
#define __IGpnvsCommonBase_INTERFACE_DEFINED__
extern const IID IID_IGpnvsCommonBase;
typedef struct IGpnvsCommonBaseVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGpnvsCommonBase * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGpnvsCommonBase * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGpnvsCommonBase * This);
	HRESULT(STDMETHODCALLTYPE * GetValueUpdateName) (IGpnvsCommonBase * This, BSTR * pbstrName);
	END_INTERFACE
} IGpnvsCommonBaseVtbl;
interface IGpnvsCommonBase
{
	CONST_VTBL struct IGpnvsCommonBaseVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGpnvsCommonBase_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGpnvsCommonBase_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IGpnvsCommonBase_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IGpnvsCommonBase_GetValueUpdateName(This,pbstrName)    ( (This)->lpVtbl -> GetValueUpdateName(This,pbstrName) )
#endif
#endif
#ifndef __IESEventFactory_INTERFACE_DEFINED__
#define __IESEventFactory_INTERFACE_DEFINED__
extern const IID IID_IESEventFactory;
typedef struct IESEventFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IESEventFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IESEventFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IESEventFactory * This);
	HRESULT(STDMETHODCALLTYPE * CreateESEvent) (IESEventFactory * This, IUnknown * pServiceProvider, DWORD dwEventId, GUID guidEventType, DWORD dwEventDataLength, BYTE * pEventData, BSTR bstrBaseUrl, IUnknown * pInitContext, IESEvent ** ppESEvent);
	END_INTERFACE
} IESEventFactoryVtbl;
interface IESEventFactory
{
	CONST_VTBL struct IESEventFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IESEventFactory_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IESEventFactory_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IESEventFactory_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IESEventFactory_CreateESEvent(This,pServiceProvider,dwEventId,guidEventType,dwEventDataLength,pEventData,bstrBaseUrl,pInitContext,ppESEvent)    ( (This)->lpVtbl -> CreateESEvent(This,pServiceProvider,dwEventId,guidEventType,dwEventDataLength,pEventData,bstrBaseUrl,pInitContext,ppESEvent) )
#endif
#endif
#ifndef __IESLicenseRenewalResultEvent_INTERFACE_DEFINED__
#define __IESLicenseRenewalResultEvent_INTERFACE_DEFINED__
extern const IID IID_IESLicenseRenewalResultEvent;
typedef struct IESLicenseRenewalResultEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IESLicenseRenewalResultEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IESLicenseRenewalResultEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IESLicenseRenewalResultEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetEventId) (IESLicenseRenewalResultEvent * This, DWORD * pdwEventId);
	HRESULT(STDMETHODCALLTYPE * GetEventType) (IESLicenseRenewalResultEvent * This, GUID * pguidEventType);
	HRESULT(STDMETHODCALLTYPE * SetCompletionStatus) (IESLicenseRenewalResultEvent * This, DWORD dwResult);
	HRESULT(STDMETHODCALLTYPE * GetData) (IESLicenseRenewalResultEvent * This, SAFEARRAY * *pbData);
	HRESULT(STDMETHODCALLTYPE * GetStringData) (IESLicenseRenewalResultEvent * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * GetCallersId) (IESLicenseRenewalResultEvent * This, DWORD * pdwCallersId);
	HRESULT(STDMETHODCALLTYPE * GetFileName) (IESLicenseRenewalResultEvent * This, BSTR * pbstrFilename);
	HRESULT(STDMETHODCALLTYPE * IsRenewalSuccessful) (IESLicenseRenewalResultEvent * This, BOOL * pfRenewalSuccessful);
	HRESULT(STDMETHODCALLTYPE * IsCheckEntitlementCallRequired) (IESLicenseRenewalResultEvent * This, BOOL * pfCheckEntTokenCallNeeded);
	HRESULT(STDMETHODCALLTYPE * GetDescrambledStatus) (IESLicenseRenewalResultEvent * This, DWORD * pDescrambledStatus);
	HRESULT(STDMETHODCALLTYPE * GetRenewalResultCode) (IESLicenseRenewalResultEvent * This, DWORD * pdwRenewalResultCode);
	HRESULT(STDMETHODCALLTYPE * GetCASFailureCode) (IESLicenseRenewalResultEvent * This, DWORD * pdwCASFailureCode);
	HRESULT(STDMETHODCALLTYPE * GetRenewalHResult) (IESLicenseRenewalResultEvent * This, HRESULT * phr);
	HRESULT(STDMETHODCALLTYPE * GetEntitlementTokenLength) (IESLicenseRenewalResultEvent * This, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetEntitlementToken) (IESLicenseRenewalResultEvent * This, SAFEARRAY * *pbData);
	HRESULT(STDMETHODCALLTYPE * GetExpiryDate) (IESLicenseRenewalResultEvent * This, DWORD64 * pqwExpiryDate);
	END_INTERFACE
} IESLicenseRenewalResultEventVtbl;
interface IESLicenseRenewalResultEvent
{
	CONST_VTBL struct IESLicenseRenewalResultEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IESLicenseRenewalResultEvent_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IESLicenseRenewalResultEvent_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IESLicenseRenewalResultEvent_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IESLicenseRenewalResultEvent_GetEventId(This,pdwEventId)    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
#define IESLicenseRenewalResultEvent_GetEventType(This,pguidEventType)    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
#define IESLicenseRenewalResultEvent_SetCompletionStatus(This,dwResult)    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
#define IESLicenseRenewalResultEvent_GetData(This,pbData)    ( (This)->lpVtbl -> GetData(This,pbData) )
#define IESLicenseRenewalResultEvent_GetStringData(This,pbstrData)    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
#define IESLicenseRenewalResultEvent_GetCallersId(This,pdwCallersId)    ( (This)->lpVtbl -> GetCallersId(This,pdwCallersId) )
#define IESLicenseRenewalResultEvent_GetFileName(This,pbstrFilename)    ( (This)->lpVtbl -> GetFileName(This,pbstrFilename) )
#define IESLicenseRenewalResultEvent_IsRenewalSuccessful(This,pfRenewalSuccessful)    ( (This)->lpVtbl -> IsRenewalSuccessful(This,pfRenewalSuccessful) )
#define IESLicenseRenewalResultEvent_IsCheckEntitlementCallRequired(This,pfCheckEntTokenCallNeeded)    ( (This)->lpVtbl -> IsCheckEntitlementCallRequired(This,pfCheckEntTokenCallNeeded) )
#define IESLicenseRenewalResultEvent_GetDescrambledStatus(This,pDescrambledStatus)    ( (This)->lpVtbl -> GetDescrambledStatus(This,pDescrambledStatus) )
#define IESLicenseRenewalResultEvent_GetRenewalResultCode(This,pdwRenewalResultCode)    ( (This)->lpVtbl -> GetRenewalResultCode(This,pdwRenewalResultCode) )
#define IESLicenseRenewalResultEvent_GetCASFailureCode(This,pdwCASFailureCode)    ( (This)->lpVtbl -> GetCASFailureCode(This,pdwCASFailureCode) )
#define IESLicenseRenewalResultEvent_GetRenewalHResult(This,phr)    ( (This)->lpVtbl -> GetRenewalHResult(This,phr) )
#define IESLicenseRenewalResultEvent_GetEntitlementTokenLength(This,pdwLength)    ( (This)->lpVtbl -> GetEntitlementTokenLength(This,pdwLength) )
#define IESLicenseRenewalResultEvent_GetEntitlementToken(This,pbData)    ( (This)->lpVtbl -> GetEntitlementToken(This,pbData) )
#define IESLicenseRenewalResultEvent_GetExpiryDate(This,pqwExpiryDate)    ( (This)->lpVtbl -> GetExpiryDate(This,pqwExpiryDate) )
#endif
#endif
#ifndef __IESFileExpiryDateEvent_INTERFACE_DEFINED__
#define __IESFileExpiryDateEvent_INTERFACE_DEFINED__
extern const IID IID_IESFileExpiryDateEvent;
typedef struct IESFileExpiryDateEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IESFileExpiryDateEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IESFileExpiryDateEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IESFileExpiryDateEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetEventId) (IESFileExpiryDateEvent * This, DWORD * pdwEventId);
	HRESULT(STDMETHODCALLTYPE * GetEventType) (IESFileExpiryDateEvent * This, GUID * pguidEventType);
	HRESULT(STDMETHODCALLTYPE * SetCompletionStatus) (IESFileExpiryDateEvent * This, DWORD dwResult);
	HRESULT(STDMETHODCALLTYPE * GetData) (IESFileExpiryDateEvent * This, SAFEARRAY * *pbData);
	HRESULT(STDMETHODCALLTYPE * GetStringData) (IESFileExpiryDateEvent * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * GetTunerId) (IESFileExpiryDateEvent * This, GUID * pguidTunerId);
	HRESULT(STDMETHODCALLTYPE * GetExpiryDate) (IESFileExpiryDateEvent * This, DWORD64 * pqwExpiryDate);
	HRESULT(STDMETHODCALLTYPE * GetFinalExpiryDate) (IESFileExpiryDateEvent * This, DWORD64 * pqwExpiryDate);
	HRESULT(STDMETHODCALLTYPE * GetMaxRenewalCount) (IESFileExpiryDateEvent * This, DWORD * dwMaxRenewalCount);
	HRESULT(STDMETHODCALLTYPE * IsEntitlementTokenPresent) (IESFileExpiryDateEvent * This, BOOL * pfEntTokenPresent);
	HRESULT(STDMETHODCALLTYPE * DoesExpireAfterFirstUse) (IESFileExpiryDateEvent * This, BOOL * pfExpireAfterFirstUse);
	END_INTERFACE
} IESFileExpiryDateEventVtbl;
interface IESFileExpiryDateEvent
{
	CONST_VTBL struct IESFileExpiryDateEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IESFileExpiryDateEvent_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IESFileExpiryDateEvent_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IESFileExpiryDateEvent_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IESFileExpiryDateEvent_GetEventId(This,pdwEventId)    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
#define IESFileExpiryDateEvent_GetEventType(This,pguidEventType)    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
#define IESFileExpiryDateEvent_SetCompletionStatus(This,dwResult)    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
#define IESFileExpiryDateEvent_GetData(This,pbData)    ( (This)->lpVtbl -> GetData(This,pbData) )
#define IESFileExpiryDateEvent_GetStringData(This,pbstrData)    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
#define IESFileExpiryDateEvent_GetTunerId(This,pguidTunerId)    ( (This)->lpVtbl -> GetTunerId(This,pguidTunerId) )
#define IESFileExpiryDateEvent_GetExpiryDate(This,pqwExpiryDate)    ( (This)->lpVtbl -> GetExpiryDate(This,pqwExpiryDate) )
#define IESFileExpiryDateEvent_GetFinalExpiryDate(This,pqwExpiryDate)    ( (This)->lpVtbl -> GetFinalExpiryDate(This,pqwExpiryDate) )
#define IESFileExpiryDateEvent_GetMaxRenewalCount(This,dwMaxRenewalCount)    ( (This)->lpVtbl -> GetMaxRenewalCount(This,dwMaxRenewalCount) )
#define IESFileExpiryDateEvent_IsEntitlementTokenPresent(This,pfEntTokenPresent)    ( (This)->lpVtbl -> IsEntitlementTokenPresent(This,pfEntTokenPresent) )
#define IESFileExpiryDateEvent_DoesExpireAfterFirstUse(This,pfExpireAfterFirstUse)    ( (This)->lpVtbl -> DoesExpireAfterFirstUse(This,pfExpireAfterFirstUse) )
#endif
#endif
#ifndef __IESEvents_INTERFACE_DEFINED__
#define __IESEvents_INTERFACE_DEFINED__
extern const IID IID_IESEvents;
typedef struct IESEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IESEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IESEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IESEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnESEventReceived) (IESEvents * This, GUID guidEventType, IESEvent * pESEvent);
	END_INTERFACE
} IESEventsVtbl;
interface IESEvents
{
	CONST_VTBL struct IESEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IESEvents_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IESEvents_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IESEvents_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IESEvents_OnESEventReceived(This,guidEventType,pESEvent)    ( (This)->lpVtbl -> OnESEventReceived(This,guidEventType,pESEvent) )
#endif
#endif
#ifndef __IESEventService_INTERFACE_DEFINED__
#define __IESEventService_INTERFACE_DEFINED__
extern const IID IID_IESEventService;
typedef struct IESEventServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IESEventService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IESEventService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IESEventService * This);
	HRESULT(STDMETHODCALLTYPE * FireESEvent) (IESEventService * This, IESEvent * pESEvent);
	END_INTERFACE
} IESEventServiceVtbl;
interface IESEventService
{
	CONST_VTBL struct IESEventServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IESEventService_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IESEventService_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IESEventService_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IESEventService_FireESEvent(This,pESEvent)    ( (This)->lpVtbl -> FireESEvent(This,pESEvent) )
#endif
#endif
#ifndef __IESEventServiceConfiguration_INTERFACE_DEFINED__
#define __IESEventServiceConfiguration_INTERFACE_DEFINED__
extern const IID IID_IESEventServiceConfiguration;
typedef struct IESEventServiceConfigurationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IESEventServiceConfiguration * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IESEventServiceConfiguration * This);
	ULONG(STDMETHODCALLTYPE * Release) (IESEventServiceConfiguration * This);
	HRESULT(STDMETHODCALLTYPE * SetParent) (IESEventServiceConfiguration * This, IESEventService * pEventService);
	HRESULT(STDMETHODCALLTYPE * RemoveParent) (IESEventServiceConfiguration * This);
	HRESULT(STDMETHODCALLTYPE * SetOwner) (IESEventServiceConfiguration * This, IESEvents * pESEvents);
	HRESULT(STDMETHODCALLTYPE * RemoveOwner) (IESEventServiceConfiguration * This);
	HRESULT(STDMETHODCALLTYPE * SetGraph) (IESEventServiceConfiguration * This, IFilterGraph * pGraph);
	HRESULT(STDMETHODCALLTYPE * RemoveGraph) (IESEventServiceConfiguration * This, IFilterGraph * pGraph);
	END_INTERFACE
} IESEventServiceConfigurationVtbl;
interface IESEventServiceConfiguration
{
	CONST_VTBL struct IESEventServiceConfigurationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IESEventServiceConfiguration_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IESEventServiceConfiguration_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IESEventServiceConfiguration_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IESEventServiceConfiguration_SetParent(This,pEventService)    ( (This)->lpVtbl -> SetParent(This,pEventService) )
#define IESEventServiceConfiguration_RemoveParent(This)    ( (This)->lpVtbl -> RemoveParent(This) )
#define IESEventServiceConfiguration_SetOwner(This,pESEvents)    ( (This)->lpVtbl -> SetOwner(This,pESEvents) )
#define IESEventServiceConfiguration_RemoveOwner(This)    ( (This)->lpVtbl -> RemoveOwner(This) )
#define IESEventServiceConfiguration_SetGraph(This,pGraph)    ( (This)->lpVtbl -> SetGraph(This,pGraph) )
#define IESEventServiceConfiguration_RemoveGraph(This,pGraph)    ( (This)->lpVtbl -> RemoveGraph(This,pGraph) )
#endif
#endif
#ifndef __IBroadcastEvent_INTERFACE_DEFINED__
#define __IBroadcastEvent_INTERFACE_DEFINED__
extern const IID IID_IBroadcastEvent;
typedef struct IBroadcastEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBroadcastEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBroadcastEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBroadcastEvent * This);
	HRESULT(STDMETHODCALLTYPE * Fire) (IBroadcastEvent * This, GUID EventID);
	END_INTERFACE
} IBroadcastEventVtbl;
interface IBroadcastEvent
{
	CONST_VTBL struct IBroadcastEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBroadcastEvent_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBroadcastEvent_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IBroadcastEvent_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IBroadcastEvent_Fire(This,EventID)    ( (This)->lpVtbl -> Fire(This,EventID) )
#endif
#endif
#ifndef __IBroadcastEventEx_INTERFACE_DEFINED__
#define __IBroadcastEventEx_INTERFACE_DEFINED__
extern const IID IID_IBroadcastEventEx;
typedef struct IBroadcastEventExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBroadcastEventEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBroadcastEventEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBroadcastEventEx * This);
	HRESULT(STDMETHODCALLTYPE * Fire) (IBroadcastEventEx * This, GUID EventID);
	HRESULT(STDMETHODCALLTYPE * FireEx) (IBroadcastEventEx * This, GUID EventID, ULONG Param1, ULONG Param2, ULONG Param3, ULONG Param4);
	END_INTERFACE
} IBroadcastEventExVtbl;
interface IBroadcastEventEx
{
	CONST_VTBL struct IBroadcastEventExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBroadcastEventEx_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBroadcastEventEx_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IBroadcastEventEx_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IBroadcastEventEx_Fire(This,EventID)    ( (This)->lpVtbl -> Fire(This,EventID) )
#define IBroadcastEventEx_FireEx(This,EventID,Param1,Param2,Param3,Param4)    ( (This)->lpVtbl -> FireEx(This,EventID,Param1,Param2,Param3,Param4) )
#endif
#endif
#ifndef __IRegisterTuner_INTERFACE_DEFINED__
#define __IRegisterTuner_INTERFACE_DEFINED__
extern const IID IID_IRegisterTuner;
typedef struct IRegisterTunerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRegisterTuner * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRegisterTuner * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRegisterTuner * This);
	HRESULT(STDMETHODCALLTYPE * Register) (IRegisterTuner * This, ITuner * pTuner, IGraphBuilder * pGraph);
	HRESULT(STDMETHODCALLTYPE * Unregister) (IRegisterTuner * This);
	END_INTERFACE
} IRegisterTunerVtbl;
interface IRegisterTuner
{
	CONST_VTBL struct IRegisterTunerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRegisterTuner_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRegisterTuner_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRegisterTuner_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRegisterTuner_Register(This,pTuner,pGraph)    ( (This)->lpVtbl -> Register(This,pTuner,pGraph) )
#define IRegisterTuner_Unregister(This)    ( (This)->lpVtbl -> Unregister(This) )
#endif
#endif
#ifndef __IBDAComparable_INTERFACE_DEFINED__
#define __IBDAComparable_INTERFACE_DEFINED__
extern const IID IID_IBDAComparable;
typedef struct IBDAComparableVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDAComparable * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDAComparable * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDAComparable * This);
	HRESULT(STDMETHODCALLTYPE * CompareExact) (IBDAComparable * This, IDispatch * CompareTo, long *Result);
	HRESULT(STDMETHODCALLTYPE * CompareEquivalent) (IBDAComparable * This, IDispatch * CompareTo, DWORD dwFlags, long *Result);
	HRESULT(STDMETHODCALLTYPE * HashExact) (IBDAComparable * This, __int64 * Result);
	HRESULT(STDMETHODCALLTYPE * HashExactIncremental) (IBDAComparable * This, __int64 PartialResult, __int64 * Result);
	HRESULT(STDMETHODCALLTYPE * HashEquivalent) (IBDAComparable * This, DWORD dwFlags, __int64 * Result);
	HRESULT(STDMETHODCALLTYPE * HashEquivalentIncremental) (IBDAComparable * This, __int64 PartialResult, DWORD dwFlags, __int64 * Result);
	END_INTERFACE
} IBDAComparableVtbl;
interface IBDAComparable
{
	CONST_VTBL struct IBDAComparableVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDAComparable_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDAComparable_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IBDAComparable_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IBDAComparable_CompareExact(This,CompareTo,Result)    ( (This)->lpVtbl -> CompareExact(This,CompareTo,Result) )
#define IBDAComparable_CompareEquivalent(This,CompareTo,dwFlags,Result)    ( (This)->lpVtbl -> CompareEquivalent(This,CompareTo,dwFlags,Result) )
#define IBDAComparable_HashExact(This,Result)    ( (This)->lpVtbl -> HashExact(This,Result) )
#define IBDAComparable_HashExactIncremental(This,PartialResult,Result)    ( (This)->lpVtbl -> HashExactIncremental(This,PartialResult,Result) )
#define IBDAComparable_HashEquivalent(This,dwFlags,Result)    ( (This)->lpVtbl -> HashEquivalent(This,dwFlags,Result) )
#define IBDAComparable_HashEquivalentIncremental(This,PartialResult,dwFlags,Result)    ( (This)->lpVtbl -> HashEquivalentIncremental(This,PartialResult,dwFlags,Result) )
#endif
#endif
#ifndef __IPersistTuneXml_INTERFACE_DEFINED__
#define __IPersistTuneXml_INTERFACE_DEFINED__
extern const IID IID_IPersistTuneXml;
typedef struct IPersistTuneXmlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPersistTuneXml * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPersistTuneXml * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPersistTuneXml * This);
	HRESULT(STDMETHODCALLTYPE * GetClassID) (IPersistTuneXml * This, CLSID * pClassID);
	HRESULT(STDMETHODCALLTYPE * InitNew) (IPersistTuneXml * This);
	HRESULT(STDMETHODCALLTYPE * Load) (IPersistTuneXml * This, VARIANT varValue);
	HRESULT(STDMETHODCALLTYPE * Save) (IPersistTuneXml * This, VARIANT * pvarFragment);
	END_INTERFACE
} IPersistTuneXmlVtbl;
interface IPersistTuneXml
{
	CONST_VTBL struct IPersistTuneXmlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistTuneXml_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistTuneXml_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPersistTuneXml_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPersistTuneXml_GetClassID(This,pClassID)    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IPersistTuneXml_InitNew(This)    ( (This)->lpVtbl -> InitNew(This) )
#define IPersistTuneXml_Load(This,varValue)    ( (This)->lpVtbl -> Load(This,varValue) )
#define IPersistTuneXml_Save(This,pvarFragment)    ( (This)->lpVtbl -> Save(This,pvarFragment) )
#endif
#endif
#ifndef __IPersistTuneXmlUtility_INTERFACE_DEFINED__
#define __IPersistTuneXmlUtility_INTERFACE_DEFINED__
extern const IID IID_IPersistTuneXmlUtility;
typedef struct IPersistTuneXmlUtilityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPersistTuneXmlUtility * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPersistTuneXmlUtility * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPersistTuneXmlUtility * This);
	HRESULT(STDMETHODCALLTYPE * Deserialize) (IPersistTuneXmlUtility * This, VARIANT varValue, IUnknown ** ppObject);
	END_INTERFACE
} IPersistTuneXmlUtilityVtbl;
interface IPersistTuneXmlUtility
{
	CONST_VTBL struct IPersistTuneXmlUtilityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistTuneXmlUtility_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistTuneXmlUtility_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPersistTuneXmlUtility_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPersistTuneXmlUtility_Deserialize(This,varValue,ppObject)    ( (This)->lpVtbl -> Deserialize(This,varValue,ppObject) )
#endif
#endif
#ifndef __IPersistTuneXmlUtility2_INTERFACE_DEFINED__
#define __IPersistTuneXmlUtility2_INTERFACE_DEFINED__
extern const IID IID_IPersistTuneXmlUtility2;
typedef struct IPersistTuneXmlUtility2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPersistTuneXmlUtility2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPersistTuneXmlUtility2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPersistTuneXmlUtility2 * This);
	HRESULT(STDMETHODCALLTYPE * Deserialize) (IPersistTuneXmlUtility2 * This, VARIANT varValue, IUnknown ** ppObject);
	HRESULT(STDMETHODCALLTYPE * Serialize) (IPersistTuneXmlUtility2 * This, ITuneRequest * piTuneRequest, BSTR * pString);
	END_INTERFACE
} IPersistTuneXmlUtility2Vtbl;
interface IPersistTuneXmlUtility2
{
	CONST_VTBL struct IPersistTuneXmlUtility2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistTuneXmlUtility2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistTuneXmlUtility2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPersistTuneXmlUtility2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPersistTuneXmlUtility2_Deserialize(This,varValue,ppObject)    ( (This)->lpVtbl -> Deserialize(This,varValue,ppObject) )
#define IPersistTuneXmlUtility2_Serialize(This,piTuneRequest,pString)    ( (This)->lpVtbl -> Serialize(This,piTuneRequest,pString) )
#endif
#endif
#ifndef __IBDACreateTuneRequestEx_INTERFACE_DEFINED__
#define __IBDACreateTuneRequestEx_INTERFACE_DEFINED__
extern const IID IID_IBDACreateTuneRequestEx;
typedef struct IBDACreateTuneRequestExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDACreateTuneRequestEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDACreateTuneRequestEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDACreateTuneRequestEx * This);
	HRESULT(STDMETHODCALLTYPE * CreateTuneRequestEx) (IBDACreateTuneRequestEx * This, REFCLSID TuneRequestIID, ITuneRequest ** TuneRequest);
	END_INTERFACE
} IBDACreateTuneRequestExVtbl;
interface IBDACreateTuneRequestEx
{
	CONST_VTBL struct IBDACreateTuneRequestExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDACreateTuneRequestEx_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDACreateTuneRequestEx_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IBDACreateTuneRequestEx_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IBDACreateTuneRequestEx_CreateTuneRequestEx(This,TuneRequestIID,TuneRequest)    ( (This)->lpVtbl -> CreateTuneRequestEx(This,TuneRequestIID,TuneRequest) )
#endif
#endif
#ifndef __TunerLib_LIBRARY_DEFINED__
#define __TunerLib_LIBRARY_DEFINED__
#define SID_ESEventService CLSID_ESEventService
#define SID_ESEventFactory CLSID_ESEventFactory
#define SID_SBroadcastEventService CLSID_BroadcastEventService
#define SID_SContentTuneRequest IID_ITuner
#define SID_ScanningTuner IID_IScanningTuner
#define SID_ScanningTunerEx IID_IScanningTunerEx
extern const IID LIBID_TunerLib;
extern const CLSID CLSID_SystemTuningSpaces;
extern const CLSID CLSID_TuningSpace;
extern const CLSID CLSID_ChannelIDTuningSpace;
extern const CLSID CLSID_ATSCTuningSpace;
extern const CLSID CLSID_DigitalCableTuningSpace;
extern const CLSID CLSID_AnalogRadioTuningSpace;
extern const CLSID CLSID_AuxInTuningSpace;
extern const CLSID CLSID_AnalogTVTuningSpace;
extern const CLSID CLSID_DVBTuningSpace;
extern const CLSID CLSID_DVBSTuningSpace;
extern const CLSID CLSID_ComponentTypes;
extern const CLSID CLSID_ComponentType;
extern const CLSID CLSID_LanguageComponentType;
extern const CLSID CLSID_MPEG2ComponentType;
extern const CLSID CLSID_ATSCComponentType;
extern const CLSID CLSID_Components;
extern const CLSID CLSID_Component;
extern const CLSID CLSID_MPEG2Component;
extern const CLSID CLSID_AnalogAudioComponentType;
extern const CLSID CLSID_TuneRequest;
extern const CLSID CLSID_ChannelIDTuneRequest;
extern const CLSID CLSID_ChannelTuneRequest;
extern const CLSID CLSID_ATSCChannelTuneRequest;
extern const CLSID CLSID_DigitalCableTuneRequest;
extern const CLSID CLSID_MPEG2TuneRequest;
extern const CLSID CLSID_MPEG2TuneRequestFactory;
extern const CLSID CLSID_Locator;
extern const CLSID CLSID_DigitalLocator;
extern const CLSID CLSID_AnalogLocator;
extern const CLSID CLSID_ATSCLocator;
extern const CLSID CLSID_DigitalCableLocator;
extern const CLSID CLSID_DVBTLocator;
extern const CLSID CLSID_DVBTLocator2;
extern const CLSID CLSID_DVBSLocator;
extern const CLSID CLSID_DVBCLocator;
extern const CLSID CLSID_ISDBSLocator;
extern const CLSID CLSID_DVBTuneRequest;
extern const CLSID CLSID_CreatePropBagOnRegKey;
extern const CLSID CLSID_BroadcastEventService;
extern const CLSID CLSID_TunerMarshaler;
extern const CLSID CLSID_PersistTuneXmlUtility;
extern const CLSID CLSID_ESEventService;
extern const CLSID CLSID_ESEventFactory;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
