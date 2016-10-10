/*+@@file@@----------------------------------------------------------------*//*!
 \file		bdaiface.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 19:35:36 2016
 \date		Modified on Sun Jun 19 19:35:36 2016
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
#ifndef __bdaiface_h__
#define __bdaiface_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IBDA_NetworkProvider_FWD_DEFINED__
#define __IBDA_NetworkProvider_FWD_DEFINED__
typedef interface IBDA_NetworkProvider IBDA_NetworkProvider;
#endif
#ifndef __IBDA_EthernetFilter_FWD_DEFINED__
#define __IBDA_EthernetFilter_FWD_DEFINED__
typedef interface IBDA_EthernetFilter IBDA_EthernetFilter;
#endif
#ifndef __IBDA_IPV4Filter_FWD_DEFINED__
#define __IBDA_IPV4Filter_FWD_DEFINED__
typedef interface IBDA_IPV4Filter IBDA_IPV4Filter;
#endif
#ifndef __IBDA_IPV6Filter_FWD_DEFINED__
#define __IBDA_IPV6Filter_FWD_DEFINED__
typedef interface IBDA_IPV6Filter IBDA_IPV6Filter;
#endif
#ifndef __IBDA_DeviceControl_FWD_DEFINED__
#define __IBDA_DeviceControl_FWD_DEFINED__
typedef interface IBDA_DeviceControl IBDA_DeviceControl;
#endif
#ifndef __IBDA_PinControl_FWD_DEFINED__
#define __IBDA_PinControl_FWD_DEFINED__
typedef interface IBDA_PinControl IBDA_PinControl;
#endif
#ifndef __IBDA_SignalProperties_FWD_DEFINED__
#define __IBDA_SignalProperties_FWD_DEFINED__
typedef interface IBDA_SignalProperties IBDA_SignalProperties;
#endif
#ifndef __IBDA_SignalStatistics_FWD_DEFINED__
#define __IBDA_SignalStatistics_FWD_DEFINED__
typedef interface IBDA_SignalStatistics IBDA_SignalStatistics;
#endif
#ifndef __IBDA_Topology_FWD_DEFINED__
#define __IBDA_Topology_FWD_DEFINED__
typedef interface IBDA_Topology IBDA_Topology;
#endif
#ifndef __IBDA_VoidTransform_FWD_DEFINED__
#define __IBDA_VoidTransform_FWD_DEFINED__
typedef interface IBDA_VoidTransform IBDA_VoidTransform;
#endif
#ifndef __IBDA_NullTransform_FWD_DEFINED__
#define __IBDA_NullTransform_FWD_DEFINED__
typedef interface IBDA_NullTransform IBDA_NullTransform;
#endif
#ifndef __IBDA_FrequencyFilter_FWD_DEFINED__
#define __IBDA_FrequencyFilter_FWD_DEFINED__
typedef interface IBDA_FrequencyFilter IBDA_FrequencyFilter;
#endif
#ifndef __IBDA_LNBInfo_FWD_DEFINED__
#define __IBDA_LNBInfo_FWD_DEFINED__
typedef interface IBDA_LNBInfo IBDA_LNBInfo;
#endif
#ifndef __IBDA_DiseqCommand_FWD_DEFINED__
#define __IBDA_DiseqCommand_FWD_DEFINED__
typedef interface IBDA_DiseqCommand IBDA_DiseqCommand;
#endif
#ifndef __IBDA_AutoDemodulate_FWD_DEFINED__
#define __IBDA_AutoDemodulate_FWD_DEFINED__
typedef interface IBDA_AutoDemodulate IBDA_AutoDemodulate;
#endif
#ifndef __IBDA_AutoDemodulateEx_FWD_DEFINED__
#define __IBDA_AutoDemodulateEx_FWD_DEFINED__
typedef interface IBDA_AutoDemodulateEx IBDA_AutoDemodulateEx;
#endif
#ifndef __IBDA_DigitalDemodulator_FWD_DEFINED__
#define __IBDA_DigitalDemodulator_FWD_DEFINED__
typedef interface IBDA_DigitalDemodulator IBDA_DigitalDemodulator;
#endif
#ifndef __IBDA_DigitalDemodulator2_FWD_DEFINED__
#define __IBDA_DigitalDemodulator2_FWD_DEFINED__
typedef interface IBDA_DigitalDemodulator2 IBDA_DigitalDemodulator2;
#endif
#ifndef __IBDA_DigitalDemodulator3_FWD_DEFINED__
#define __IBDA_DigitalDemodulator3_FWD_DEFINED__
typedef interface IBDA_DigitalDemodulator3 IBDA_DigitalDemodulator3;
#endif
#ifndef __ICCSubStreamFiltering_FWD_DEFINED__
#define __ICCSubStreamFiltering_FWD_DEFINED__
typedef interface ICCSubStreamFiltering ICCSubStreamFiltering;
#endif
#ifndef __IBDA_IPSinkControl_FWD_DEFINED__
#define __IBDA_IPSinkControl_FWD_DEFINED__
typedef interface IBDA_IPSinkControl IBDA_IPSinkControl;
#endif
#ifndef __IBDA_IPSinkInfo_FWD_DEFINED__
#define __IBDA_IPSinkInfo_FWD_DEFINED__
typedef interface IBDA_IPSinkInfo IBDA_IPSinkInfo;
#endif
#ifndef __IEnumPIDMap_FWD_DEFINED__
#define __IEnumPIDMap_FWD_DEFINED__
typedef interface IEnumPIDMap IEnumPIDMap;
#endif
#ifndef __IMPEG2PIDMap_FWD_DEFINED__
#define __IMPEG2PIDMap_FWD_DEFINED__
typedef interface IMPEG2PIDMap IMPEG2PIDMap;
#endif
#ifndef __IFrequencyMap_FWD_DEFINED__
#define __IFrequencyMap_FWD_DEFINED__
typedef interface IFrequencyMap IFrequencyMap;
#endif
#ifndef __IBDA_EasMessage_FWD_DEFINED__
#define __IBDA_EasMessage_FWD_DEFINED__
typedef interface IBDA_EasMessage IBDA_EasMessage;
#endif
#ifndef __IBDA_TransportStreamInfo_FWD_DEFINED__
#define __IBDA_TransportStreamInfo_FWD_DEFINED__
typedef interface IBDA_TransportStreamInfo IBDA_TransportStreamInfo;
#endif
#ifndef __IBDA_ConditionalAccess_FWD_DEFINED__
#define __IBDA_ConditionalAccess_FWD_DEFINED__
typedef interface IBDA_ConditionalAccess IBDA_ConditionalAccess;
#endif
#ifndef __IBDA_DiagnosticProperties_FWD_DEFINED__
#define __IBDA_DiagnosticProperties_FWD_DEFINED__
typedef interface IBDA_DiagnosticProperties IBDA_DiagnosticProperties;
#endif
#ifndef __IBDA_DRM_FWD_DEFINED__
#define __IBDA_DRM_FWD_DEFINED__
typedef interface IBDA_DRM IBDA_DRM;
#endif
#ifndef __IBDA_NameValueService_FWD_DEFINED__
#define __IBDA_NameValueService_FWD_DEFINED__
typedef interface IBDA_NameValueService IBDA_NameValueService;
#endif
#ifndef __IBDA_ConditionalAccessEx_FWD_DEFINED__
#define __IBDA_ConditionalAccessEx_FWD_DEFINED__
typedef interface IBDA_ConditionalAccessEx IBDA_ConditionalAccessEx;
#endif
#ifndef __IBDA_ISDBConditionalAccess_FWD_DEFINED__
#define __IBDA_ISDBConditionalAccess_FWD_DEFINED__
typedef interface IBDA_ISDBConditionalAccess IBDA_ISDBConditionalAccess;
#endif
#ifndef __IBDA_EventingService_FWD_DEFINED__
#define __IBDA_EventingService_FWD_DEFINED__
typedef interface IBDA_EventingService IBDA_EventingService;
#endif
#ifndef __IBDA_AUX_FWD_DEFINED__
#define __IBDA_AUX_FWD_DEFINED__
typedef interface IBDA_AUX IBDA_AUX;
#endif
#ifndef __IBDA_Encoder_FWD_DEFINED__
#define __IBDA_Encoder_FWD_DEFINED__
typedef interface IBDA_Encoder IBDA_Encoder;
#endif
#ifndef __IBDA_FDC_FWD_DEFINED__
#define __IBDA_FDC_FWD_DEFINED__
typedef interface IBDA_FDC IBDA_FDC;
#endif
#ifndef __IBDA_GuideDataDeliveryService_FWD_DEFINED__
#define __IBDA_GuideDataDeliveryService_FWD_DEFINED__
typedef interface IBDA_GuideDataDeliveryService IBDA_GuideDataDeliveryService;
#endif
#ifndef __IBDA_DRMService_FWD_DEFINED__
#define __IBDA_DRMService_FWD_DEFINED__
typedef interface IBDA_DRMService IBDA_DRMService;
#endif
#ifndef __IBDA_WMDRMSession_FWD_DEFINED__
#define __IBDA_WMDRMSession_FWD_DEFINED__
typedef interface IBDA_WMDRMSession IBDA_WMDRMSession;
#endif
#ifndef __IBDA_WMDRMTuner_FWD_DEFINED__
#define __IBDA_WMDRMTuner_FWD_DEFINED__
typedef interface IBDA_WMDRMTuner IBDA_WMDRMTuner;
#endif
#ifndef __IBDA_DRIDRMService_FWD_DEFINED__
#define __IBDA_DRIDRMService_FWD_DEFINED__
typedef interface IBDA_DRIDRMService IBDA_DRIDRMService;
#endif
#ifndef __IBDA_DRIWMDRMSession_FWD_DEFINED__
#define __IBDA_DRIWMDRMSession_FWD_DEFINED__
typedef interface IBDA_DRIWMDRMSession IBDA_DRIWMDRMSession;
#endif
#ifndef __IBDA_MUX_FWD_DEFINED__
#define __IBDA_MUX_FWD_DEFINED__
typedef interface IBDA_MUX IBDA_MUX;
#endif
#ifndef __IBDA_TransportStreamSelector_FWD_DEFINED__
#define __IBDA_TransportStreamSelector_FWD_DEFINED__
typedef interface IBDA_TransportStreamSelector IBDA_TransportStreamSelector;
#endif
#ifndef __IBDA_UserActivityService_FWD_DEFINED__
#define __IBDA_UserActivityService_FWD_DEFINED__
typedef interface IBDA_UserActivityService IBDA_UserActivityService;
#endif
#include "unknwn.h"
#include "strmif.h"
#include "BdaTypes.h"
 typedef enum SmartCardStatusType
{
	CardInserted = 0,
	CardRemoved = (CardInserted + 1),
	CardError = (CardRemoved + 1),
	CardDataChanged = (CardError + 1),
	CardFirmwareUpgrade = (CardDataChanged + 1)
} SmartCardStatusType;
 typedef enum SmartCardAssociationType
{
	NotAssociated = 0,
	Associated = (NotAssociated + 1),
	AssociationUnknown = (Associated + 1)
} SmartCardAssociationType;
 typedef enum LocationCodeSchemeType
{
	SCTE_18 = 0
} LocationCodeSchemeType;
typedef struct EALocationCodeType
{
	LocationCodeSchemeType LocationCodeScheme;
	BYTE state_code;
	BYTE county_subdivision;
	WORD county_code;
} EALocationCodeType;
 typedef enum EntitlementType
{
	Entitled = 0,
	NotEntitled = (Entitled + 1),
	TechnicalFailure = (NotEntitled + 1)
} EntitlementType;
 typedef enum UICloseReasonType
{
	NotReady = 0,
	UserClosed = (NotReady + 1),
	SystemClosed = (UserClosed + 1),
	DeviceClosed = (SystemClosed + 1),
	ErrorClosed = (DeviceClosed + 1)
} UICloseReasonType;
typedef struct SmartCardApplication
{
	ApplicationTypeType ApplicationType;
	USHORT ApplicationVersion;
	BSTR pbstrApplicationName;
	BSTR pbstrApplicationURL;
} SmartCardApplication;
 typedef enum BDA_DrmPairingError
{
	BDA_DrmPairing_Succeeded = 0,
	BDA_DrmPairing_HardwareFailure = (BDA_DrmPairing_Succeeded + 1),
	BDA_DrmPairing_NeedRevocationData = (BDA_DrmPairing_HardwareFailure + 1),
	BDA_DrmPairing_NeedIndiv = (BDA_DrmPairing_NeedRevocationData + 1),
	BDA_DrmPairing_Other = (BDA_DrmPairing_NeedIndiv + 1),
	BDA_DrmPairing_DrmInitFailed = (BDA_DrmPairing_Other + 1),
	BDA_DrmPairing_DrmNotPaired = (BDA_DrmPairing_DrmInitFailed + 1),
	BDA_DrmPairing_DrmRePairSoon = (BDA_DrmPairing_DrmNotPaired + 1),
	BDA_DrmPairing_Aborted = (BDA_DrmPairing_DrmRePairSoon + 1),
	BDA_DrmPairing_NeedSDKUpdate = (BDA_DrmPairing_Aborted + 1)
} BDA_DrmPairingError;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0000_v0_0_s_ifspec;
#ifndef __IBDA_NetworkProvider_INTERFACE_DEFINED__
#define __IBDA_NetworkProvider_INTERFACE_DEFINED__
extern const IID IID_IBDA_NetworkProvider;
typedef struct IBDA_NetworkProviderVtbl
{
	BEGIN_INTERFACE
  HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_NetworkProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_NetworkProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_NetworkProvider * This);
	HRESULT(STDMETHODCALLTYPE * PutSignalSource) (IBDA_NetworkProvider * This, ULONG ulSignalSource);
	HRESULT(STDMETHODCALLTYPE * GetSignalSource) (IBDA_NetworkProvider * This, ULONG * pulSignalSource);
	HRESULT(STDMETHODCALLTYPE * GetNetworkType) (IBDA_NetworkProvider * This, GUID * pguidNetworkType);
	HRESULT(STDMETHODCALLTYPE * PutTuningSpace) (IBDA_NetworkProvider * This, REFGUID guidTuningSpace);
	HRESULT(STDMETHODCALLTYPE * GetTuningSpace) (IBDA_NetworkProvider * This, GUID * pguidTuingSpace);
	HRESULT(STDMETHODCALLTYPE * RegisterDeviceFilter) (IBDA_NetworkProvider * This, IUnknown * pUnkFilterControl, ULONG * ppvRegisitrationContext);
	HRESULT(STDMETHODCALLTYPE * UnRegisterDeviceFilter) (IBDA_NetworkProvider * This, ULONG pvRegistrationContext);
  END_INTERFACE
} IBDA_NetworkProviderVtbl;
interface IBDA_NetworkProvider
{
	CONST_VTBL struct IBDA_NetworkProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_NetworkProvider_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_NetworkProvider_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_NetworkProvider_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_NetworkProvider_PutSignalSource(This,ulSignalSource)     ( (This)->lpVtbl -> PutSignalSource(This,ulSignalSource) )
#define IBDA_NetworkProvider_GetSignalSource(This,pulSignalSource)     ( (This)->lpVtbl -> GetSignalSource(This,pulSignalSource) )
#define IBDA_NetworkProvider_GetNetworkType(This,pguidNetworkType)     ( (This)->lpVtbl -> GetNetworkType(This,pguidNetworkType) )
#define IBDA_NetworkProvider_PutTuningSpace(This,guidTuningSpace)     ( (This)->lpVtbl -> PutTuningSpace(This,guidTuningSpace) )
#define IBDA_NetworkProvider_GetTuningSpace(This,pguidTuingSpace)     ( (This)->lpVtbl -> GetTuningSpace(This,pguidTuingSpace) )
#define IBDA_NetworkProvider_RegisterDeviceFilter(This,pUnkFilterControl,ppvRegisitrationContext)     ( (This)->lpVtbl -> RegisterDeviceFilter(This,pUnkFilterControl,ppvRegisitrationContext) )
#define IBDA_NetworkProvider_UnRegisterDeviceFilter(This,pvRegistrationContext)     ( (This)->lpVtbl -> UnRegisterDeviceFilter(This,pvRegistrationContext) )
#endif
#endif
#ifndef __IBDA_EthernetFilter_INTERFACE_DEFINED__
#define __IBDA_EthernetFilter_INTERFACE_DEFINED__
extern const IID IID_IBDA_EthernetFilter;
typedef struct IBDA_EthernetFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_EthernetFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_EthernetFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_EthernetFilter * This);
	HRESULT(STDMETHODCALLTYPE * GetMulticastListSize) (IBDA_EthernetFilter * This, ULONG * pulcbAddresses);
	HRESULT(STDMETHODCALLTYPE * PutMulticastList) (IBDA_EthernetFilter * This, ULONG ulcbAddresses, BYTE pAddressList[]);
	HRESULT(STDMETHODCALLTYPE * GetMulticastList) (IBDA_EthernetFilter * This, ULONG * pulcbAddresses, BYTE pAddressList[]);
	HRESULT(STDMETHODCALLTYPE * PutMulticastMode) (IBDA_EthernetFilter * This, ULONG ulModeMask);
	HRESULT(STDMETHODCALLTYPE * GetMulticastMode) (IBDA_EthernetFilter * This, ULONG * pulModeMask);
	END_INTERFACE
} IBDA_EthernetFilterVtbl;
interface IBDA_EthernetFilter
{
	CONST_VTBL struct IBDA_EthernetFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_EthernetFilter_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_EthernetFilter_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_EthernetFilter_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_EthernetFilter_GetMulticastListSize(This,pulcbAddresses)     ( (This)->lpVtbl -> GetMulticastListSize(This,pulcbAddresses) )
#define IBDA_EthernetFilter_PutMulticastList(This,ulcbAddresses,pAddressList)     ( (This)->lpVtbl -> PutMulticastList(This,ulcbAddresses,pAddressList) )
#define IBDA_EthernetFilter_GetMulticastList(This,pulcbAddresses,pAddressList)     ( (This)->lpVtbl -> GetMulticastList(This,pulcbAddresses,pAddressList) )
#define IBDA_EthernetFilter_PutMulticastMode(This,ulModeMask)     ( (This)->lpVtbl -> PutMulticastMode(This,ulModeMask) )
#define IBDA_EthernetFilter_GetMulticastMode(This,pulModeMask)     ( (This)->lpVtbl -> GetMulticastMode(This,pulModeMask) )
#endif
#endif
#ifndef __IBDA_IPV4Filter_INTERFACE_DEFINED__
#define __IBDA_IPV4Filter_INTERFACE_DEFINED__
extern const IID IID_IBDA_IPV4Filter;
typedef struct IBDA_IPV4FilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_IPV4Filter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_IPV4Filter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_IPV4Filter * This);
	HRESULT(STDMETHODCALLTYPE * GetMulticastListSize) (IBDA_IPV4Filter * This, ULONG * pulcbAddresses);
	HRESULT(STDMETHODCALLTYPE * PutMulticastList) (IBDA_IPV4Filter * This, ULONG ulcbAddresses, BYTE pAddressList[]);
	HRESULT(STDMETHODCALLTYPE * GetMulticastList) (IBDA_IPV4Filter * This, ULONG * pulcbAddresses, BYTE pAddressList[]);
	HRESULT(STDMETHODCALLTYPE * PutMulticastMode) (IBDA_IPV4Filter * This, ULONG ulModeMask);
	HRESULT(STDMETHODCALLTYPE * GetMulticastMode) (IBDA_IPV4Filter * This, ULONG * pulModeMask);
	END_INTERFACE
} IBDA_IPV4FilterVtbl;
interface IBDA_IPV4Filter
{
	CONST_VTBL struct IBDA_IPV4FilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_IPV4Filter_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_IPV4Filter_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_IPV4Filter_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_IPV4Filter_GetMulticastListSize(This,pulcbAddresses)     ( (This)->lpVtbl -> GetMulticastListSize(This,pulcbAddresses) )
#define IBDA_IPV4Filter_PutMulticastList(This,ulcbAddresses,pAddressList)     ( (This)->lpVtbl -> PutMulticastList(This,ulcbAddresses,pAddressList) )
#define IBDA_IPV4Filter_GetMulticastList(This,pulcbAddresses,pAddressList)     ( (This)->lpVtbl -> GetMulticastList(This,pulcbAddresses,pAddressList) )
#define IBDA_IPV4Filter_PutMulticastMode(This,ulModeMask)     ( (This)->lpVtbl -> PutMulticastMode(This,ulModeMask) )
#define IBDA_IPV4Filter_GetMulticastMode(This,pulModeMask)     ( (This)->lpVtbl -> GetMulticastMode(This,pulModeMask) )
#endif
#endif
#ifndef __IBDA_IPV6Filter_INTERFACE_DEFINED__
#define __IBDA_IPV6Filter_INTERFACE_DEFINED__
extern const IID IID_IBDA_IPV6Filter;
typedef struct IBDA_IPV6FilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_IPV6Filter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_IPV6Filter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_IPV6Filter * This);
	HRESULT(STDMETHODCALLTYPE * GetMulticastListSize) (IBDA_IPV6Filter * This, ULONG * pulcbAddresses);
	HRESULT(STDMETHODCALLTYPE * PutMulticastList) (IBDA_IPV6Filter * This, ULONG ulcbAddresses, BYTE pAddressList[]);
	HRESULT(STDMETHODCALLTYPE * GetMulticastList) (IBDA_IPV6Filter * This, ULONG * pulcbAddresses, BYTE pAddressList[]);
	HRESULT(STDMETHODCALLTYPE * PutMulticastMode) (IBDA_IPV6Filter * This, ULONG ulModeMask);
	HRESULT(STDMETHODCALLTYPE * GetMulticastMode) (IBDA_IPV6Filter * This, ULONG * pulModeMask);
	END_INTERFACE
} IBDA_IPV6FilterVtbl;
interface IBDA_IPV6Filter
{
	CONST_VTBL struct IBDA_IPV6FilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_IPV6Filter_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_IPV6Filter_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_IPV6Filter_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_IPV6Filter_GetMulticastListSize(This,pulcbAddresses)     ( (This)->lpVtbl -> GetMulticastListSize(This,pulcbAddresses) )
#define IBDA_IPV6Filter_PutMulticastList(This,ulcbAddresses,pAddressList)     ( (This)->lpVtbl -> PutMulticastList(This,ulcbAddresses,pAddressList) )
#define IBDA_IPV6Filter_GetMulticastList(This,pulcbAddresses,pAddressList)     ( (This)->lpVtbl -> GetMulticastList(This,pulcbAddresses,pAddressList) )
#define IBDA_IPV6Filter_PutMulticastMode(This,ulModeMask)     ( (This)->lpVtbl -> PutMulticastMode(This,ulModeMask) )
#define IBDA_IPV6Filter_GetMulticastMode(This,pulModeMask)     ( (This)->lpVtbl -> GetMulticastMode(This,pulModeMask) )
#endif
#endif
#ifndef __IBDA_DeviceControl_INTERFACE_DEFINED__
#define __IBDA_DeviceControl_INTERFACE_DEFINED__
extern const IID IID_IBDA_DeviceControl;
typedef struct IBDA_DeviceControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_DeviceControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_DeviceControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_DeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * StartChanges) (IBDA_DeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * CheckChanges) (IBDA_DeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * CommitChanges) (IBDA_DeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * GetChangeState) (IBDA_DeviceControl * This, ULONG * pState);
	END_INTERFACE
} IBDA_DeviceControlVtbl;
interface IBDA_DeviceControl
{
	CONST_VTBL struct IBDA_DeviceControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_DeviceControl_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_DeviceControl_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_DeviceControl_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_DeviceControl_StartChanges(This)     ( (This)->lpVtbl -> StartChanges(This) )
#define IBDA_DeviceControl_CheckChanges(This)     ( (This)->lpVtbl -> CheckChanges(This) )
#define IBDA_DeviceControl_CommitChanges(This)     ( (This)->lpVtbl -> CommitChanges(This) )
#define IBDA_DeviceControl_GetChangeState(This,pState)     ( (This)->lpVtbl -> GetChangeState(This,pState) )
#endif
#endif
#ifndef __IBDA_PinControl_INTERFACE_DEFINED__
#define __IBDA_PinControl_INTERFACE_DEFINED__
extern const IID IID_IBDA_PinControl;
typedef struct IBDA_PinControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_PinControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_PinControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_PinControl * This);
	HRESULT(STDMETHODCALLTYPE * GetPinID) (IBDA_PinControl * This, ULONG * pulPinID);
	HRESULT(STDMETHODCALLTYPE * GetPinType) (IBDA_PinControl * This, ULONG * pulPinType);
	HRESULT(STDMETHODCALLTYPE * RegistrationContext) (IBDA_PinControl * This, ULONG * pulRegistrationCtx);
	END_INTERFACE
} IBDA_PinControlVtbl;
interface IBDA_PinControl
{
	CONST_VTBL struct IBDA_PinControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_PinControl_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_PinControl_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_PinControl_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_PinControl_GetPinID(This,pulPinID)     ( (This)->lpVtbl -> GetPinID(This,pulPinID) )
#define IBDA_PinControl_GetPinType(This,pulPinType)     ( (This)->lpVtbl -> GetPinType(This,pulPinType) )
#define IBDA_PinControl_RegistrationContext(This,pulRegistrationCtx)     ( (This)->lpVtbl -> RegistrationContext(This,pulRegistrationCtx) )
#endif
#endif
#ifndef __IBDA_SignalProperties_INTERFACE_DEFINED__
#define __IBDA_SignalProperties_INTERFACE_DEFINED__
extern const IID IID_IBDA_SignalProperties;
typedef struct IBDA_SignalPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_SignalProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_SignalProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_SignalProperties * This);
	HRESULT(STDMETHODCALLTYPE * PutNetworkType) (IBDA_SignalProperties * This, REFGUID guidNetworkType);
	HRESULT(STDMETHODCALLTYPE * GetNetworkType) (IBDA_SignalProperties * This, GUID * pguidNetworkType);
	HRESULT(STDMETHODCALLTYPE * PutSignalSource) (IBDA_SignalProperties * This, ULONG ulSignalSource);
	HRESULT(STDMETHODCALLTYPE * GetSignalSource) (IBDA_SignalProperties * This, ULONG * pulSignalSource);
	HRESULT(STDMETHODCALLTYPE * PutTuningSpace) (IBDA_SignalProperties * This, REFGUID guidTuningSpace);
	HRESULT(STDMETHODCALLTYPE * GetTuningSpace) (IBDA_SignalProperties * This, GUID * pguidTuingSpace);
	END_INTERFACE
} IBDA_SignalPropertiesVtbl;
interface IBDA_SignalProperties
{
	CONST_VTBL struct IBDA_SignalPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_SignalProperties_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_SignalProperties_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_SignalProperties_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_SignalProperties_PutNetworkType(This,guidNetworkType)     ( (This)->lpVtbl -> PutNetworkType(This,guidNetworkType) )
#define IBDA_SignalProperties_GetNetworkType(This,pguidNetworkType)     ( (This)->lpVtbl -> GetNetworkType(This,pguidNetworkType) )
#define IBDA_SignalProperties_PutSignalSource(This,ulSignalSource)     ( (This)->lpVtbl -> PutSignalSource(This,ulSignalSource) )
#define IBDA_SignalProperties_GetSignalSource(This,pulSignalSource)     ( (This)->lpVtbl -> GetSignalSource(This,pulSignalSource) )
#define IBDA_SignalProperties_PutTuningSpace(This,guidTuningSpace)     ( (This)->lpVtbl -> PutTuningSpace(This,guidTuningSpace) )
#define IBDA_SignalProperties_GetTuningSpace(This,pguidTuingSpace)     ( (This)->lpVtbl -> GetTuningSpace(This,pguidTuingSpace) )
#endif
#endif
#ifndef __IBDA_SignalStatistics_INTERFACE_DEFINED__
#define __IBDA_SignalStatistics_INTERFACE_DEFINED__
extern const IID IID_IBDA_SignalStatistics;
typedef struct IBDA_SignalStatisticsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_SignalStatistics * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_SignalStatistics * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_SignalStatistics * This);
	HRESULT(STDMETHODCALLTYPE * put_SignalStrength) (IBDA_SignalStatistics * This, LONG lDbStrength);
	HRESULT(STDMETHODCALLTYPE * get_SignalStrength) (IBDA_SignalStatistics * This, LONG * plDbStrength);
	HRESULT(STDMETHODCALLTYPE * put_SignalQuality) (IBDA_SignalStatistics * This, LONG lPercentQuality);
	HRESULT(STDMETHODCALLTYPE * get_SignalQuality) (IBDA_SignalStatistics * This, LONG * plPercentQuality);
	HRESULT(STDMETHODCALLTYPE * put_SignalPresent) (IBDA_SignalStatistics * This, BOOLEAN fPresent);
	HRESULT(STDMETHODCALLTYPE * get_SignalPresent) (IBDA_SignalStatistics * This, BOOLEAN * pfPresent);
	HRESULT(STDMETHODCALLTYPE * put_SignalLocked) (IBDA_SignalStatistics * This, BOOLEAN fLocked);
	HRESULT(STDMETHODCALLTYPE * get_SignalLocked) (IBDA_SignalStatistics * This, BOOLEAN * pfLocked);
	HRESULT(STDMETHODCALLTYPE * put_SampleTime) (IBDA_SignalStatistics * This, LONG lmsSampleTime);
	HRESULT(STDMETHODCALLTYPE * get_SampleTime) (IBDA_SignalStatistics * This, LONG * plmsSampleTime);
	END_INTERFACE
} IBDA_SignalStatisticsVtbl;
interface IBDA_SignalStatistics
{
	CONST_VTBL struct IBDA_SignalStatisticsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_SignalStatistics_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_SignalStatistics_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_SignalStatistics_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_SignalStatistics_put_SignalStrength(This,lDbStrength)     ( (This)->lpVtbl -> put_SignalStrength(This,lDbStrength) )
#define IBDA_SignalStatistics_get_SignalStrength(This,plDbStrength)     ( (This)->lpVtbl -> get_SignalStrength(This,plDbStrength) )
#define IBDA_SignalStatistics_put_SignalQuality(This,lPercentQuality)     ( (This)->lpVtbl -> put_SignalQuality(This,lPercentQuality) )
#define IBDA_SignalStatistics_get_SignalQuality(This,plPercentQuality)     ( (This)->lpVtbl -> get_SignalQuality(This,plPercentQuality) )
#define IBDA_SignalStatistics_put_SignalPresent(This,fPresent)     ( (This)->lpVtbl -> put_SignalPresent(This,fPresent) )
#define IBDA_SignalStatistics_get_SignalPresent(This,pfPresent)     ( (This)->lpVtbl -> get_SignalPresent(This,pfPresent) )
#define IBDA_SignalStatistics_put_SignalLocked(This,fLocked)     ( (This)->lpVtbl -> put_SignalLocked(This,fLocked) )
#define IBDA_SignalStatistics_get_SignalLocked(This,pfLocked)     ( (This)->lpVtbl -> get_SignalLocked(This,pfLocked) )
#define IBDA_SignalStatistics_put_SampleTime(This,lmsSampleTime)     ( (This)->lpVtbl -> put_SampleTime(This,lmsSampleTime) )
#define IBDA_SignalStatistics_get_SampleTime(This,plmsSampleTime)     ( (This)->lpVtbl -> get_SampleTime(This,plmsSampleTime) )
#endif
#endif
#ifndef __IBDA_Topology_INTERFACE_DEFINED__
#define __IBDA_Topology_INTERFACE_DEFINED__
extern const IID IID_IBDA_Topology;
typedef struct IBDA_TopologyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_Topology * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_Topology * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_Topology * This);
	HRESULT(STDMETHODCALLTYPE * GetNodeTypes) (IBDA_Topology * This, ULONG * pulcNodeTypes, ULONG ulcNodeTypesMax, ULONG rgulNodeTypes[]);
	HRESULT(STDMETHODCALLTYPE * GetNodeDescriptors) (IBDA_Topology * This, ULONG * ulcNodeDescriptors, ULONG ulcNodeDescriptorsMax, BDANODE_DESCRIPTOR rgNodeDescriptors[]);
	HRESULT(STDMETHODCALLTYPE * GetNodeInterfaces) (IBDA_Topology * This, ULONG ulNodeType, ULONG * pulcInterfaces, ULONG ulcInterfacesMax, GUID rgguidInterfaces[]);
	HRESULT(STDMETHODCALLTYPE * GetPinTypes) (IBDA_Topology * This, ULONG * pulcPinTypes, ULONG ulcPinTypesMax, ULONG rgulPinTypes[]);
	HRESULT(STDMETHODCALLTYPE * GetTemplateConnections) (IBDA_Topology * This, ULONG * pulcConnections, ULONG ulcConnectionsMax, BDA_TEMPLATE_CONNECTION rgConnections[]);
	HRESULT(STDMETHODCALLTYPE * CreatePin) (IBDA_Topology * This, ULONG ulPinType, ULONG * pulPinId);
	HRESULT(STDMETHODCALLTYPE * DeletePin) (IBDA_Topology * This, ULONG ulPinId);
	HRESULT(STDMETHODCALLTYPE * SetMediaType) (IBDA_Topology * This, ULONG ulPinId, AM_MEDIA_TYPE * pMediaType);
	HRESULT(STDMETHODCALLTYPE * SetMedium) (IBDA_Topology * This, ULONG ulPinId, REGPINMEDIUM * pMedium);
	HRESULT(STDMETHODCALLTYPE * CreateTopology) (IBDA_Topology * This, ULONG ulInputPinId, ULONG ulOutputPinId);
	HRESULT(STDMETHODCALLTYPE * GetControlNode) (IBDA_Topology * This, ULONG ulInputPinId, ULONG ulOutputPinId, ULONG ulNodeType, IUnknown ** ppControlNode);
	END_INTERFACE
} IBDA_TopologyVtbl;
interface IBDA_Topology
{
	CONST_VTBL struct IBDA_TopologyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_Topology_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_Topology_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_Topology_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_Topology_GetNodeTypes(This,pulcNodeTypes,ulcNodeTypesMax,rgulNodeTypes)     ( (This)->lpVtbl -> GetNodeTypes(This,pulcNodeTypes,ulcNodeTypesMax,rgulNodeTypes) )
#define IBDA_Topology_GetNodeDescriptors(This,ulcNodeDescriptors,ulcNodeDescriptorsMax,rgNodeDescriptors)     ( (This)->lpVtbl -> GetNodeDescriptors(This,ulcNodeDescriptors,ulcNodeDescriptorsMax,rgNodeDescriptors) )
#define IBDA_Topology_GetNodeInterfaces(This,ulNodeType,pulcInterfaces,ulcInterfacesMax,rgguidInterfaces)     ( (This)->lpVtbl -> GetNodeInterfaces(This,ulNodeType,pulcInterfaces,ulcInterfacesMax,rgguidInterfaces) )
#define IBDA_Topology_GetPinTypes(This,pulcPinTypes,ulcPinTypesMax,rgulPinTypes)     ( (This)->lpVtbl -> GetPinTypes(This,pulcPinTypes,ulcPinTypesMax,rgulPinTypes) )
#define IBDA_Topology_GetTemplateConnections(This,pulcConnections,ulcConnectionsMax,rgConnections)     ( (This)->lpVtbl -> GetTemplateConnections(This,pulcConnections,ulcConnectionsMax,rgConnections) )
#define IBDA_Topology_CreatePin(This,ulPinType,pulPinId)     ( (This)->lpVtbl -> CreatePin(This,ulPinType,pulPinId) )
#define IBDA_Topology_DeletePin(This,ulPinId)     ( (This)->lpVtbl -> DeletePin(This,ulPinId) )
#define IBDA_Topology_SetMediaType(This,ulPinId,pMediaType)     ( (This)->lpVtbl -> SetMediaType(This,ulPinId,pMediaType) )
#define IBDA_Topology_SetMedium(This,ulPinId,pMedium)     ( (This)->lpVtbl -> SetMedium(This,ulPinId,pMedium) )
#define IBDA_Topology_CreateTopology(This,ulInputPinId,ulOutputPinId)     ( (This)->lpVtbl -> CreateTopology(This,ulInputPinId,ulOutputPinId) )
#define IBDA_Topology_GetControlNode(This,ulInputPinId,ulOutputPinId,ulNodeType,ppControlNode)     ( (This)->lpVtbl -> GetControlNode(This,ulInputPinId,ulOutputPinId,ulNodeType,ppControlNode) )
#endif
#endif
#ifndef __IBDA_VoidTransform_INTERFACE_DEFINED__
#define __IBDA_VoidTransform_INTERFACE_DEFINED__
extern const IID IID_IBDA_VoidTransform;
typedef struct IBDA_VoidTransformVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_VoidTransform * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_VoidTransform * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_VoidTransform * This);
	HRESULT(STDMETHODCALLTYPE * Start) (IBDA_VoidTransform * This);
	HRESULT(STDMETHODCALLTYPE * Stop) (IBDA_VoidTransform * This);
	END_INTERFACE
} IBDA_VoidTransformVtbl;
interface IBDA_VoidTransform
{
	CONST_VTBL struct IBDA_VoidTransformVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_VoidTransform_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_VoidTransform_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_VoidTransform_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_VoidTransform_Start(This)     ( (This)->lpVtbl -> Start(This) )
#define IBDA_VoidTransform_Stop(This)     ( (This)->lpVtbl -> Stop(This) )
#endif
#endif
#ifndef __IBDA_NullTransform_INTERFACE_DEFINED__
#define __IBDA_NullTransform_INTERFACE_DEFINED__
extern const IID IID_IBDA_NullTransform;
typedef struct IBDA_NullTransformVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_NullTransform * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_NullTransform * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_NullTransform * This);
	HRESULT(STDMETHODCALLTYPE * Start) (IBDA_NullTransform * This);
	HRESULT(STDMETHODCALLTYPE * Stop) (IBDA_NullTransform * This);
	END_INTERFACE
} IBDA_NullTransformVtbl;
interface IBDA_NullTransform
{
	CONST_VTBL struct IBDA_NullTransformVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_NullTransform_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_NullTransform_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_NullTransform_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_NullTransform_Start(This)     ( (This)->lpVtbl -> Start(This) )
#define IBDA_NullTransform_Stop(This)     ( (This)->lpVtbl -> Stop(This) )
#endif
#endif
#ifndef __IBDA_FrequencyFilter_INTERFACE_DEFINED__
#define __IBDA_FrequencyFilter_INTERFACE_DEFINED__
extern const IID IID_IBDA_FrequencyFilter;
typedef struct IBDA_FrequencyFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_FrequencyFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_FrequencyFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_FrequencyFilter * This);
	HRESULT(STDMETHODCALLTYPE * put_Autotune) (IBDA_FrequencyFilter * This, ULONG ulTransponder);
	HRESULT(STDMETHODCALLTYPE * get_Autotune) (IBDA_FrequencyFilter * This, ULONG * pulTransponder);
	HRESULT(STDMETHODCALLTYPE * put_Frequency) (IBDA_FrequencyFilter * This, ULONG ulFrequency);
	HRESULT(STDMETHODCALLTYPE * get_Frequency) (IBDA_FrequencyFilter * This, ULONG * pulFrequency);
	HRESULT(STDMETHODCALLTYPE * put_Polarity) (IBDA_FrequencyFilter * This, Polarisation Polarity);
	HRESULT(STDMETHODCALLTYPE * get_Polarity) (IBDA_FrequencyFilter * This, Polarisation * pPolarity);
	HRESULT(STDMETHODCALLTYPE * put_Range) (IBDA_FrequencyFilter * This, ULONG ulRange);
	HRESULT(STDMETHODCALLTYPE * get_Range) (IBDA_FrequencyFilter * This, ULONG * pulRange);
	HRESULT(STDMETHODCALLTYPE * put_Bandwidth) (IBDA_FrequencyFilter * This, ULONG ulBandwidth);
	HRESULT(STDMETHODCALLTYPE * get_Bandwidth) (IBDA_FrequencyFilter * This, ULONG * pulBandwidth);
	HRESULT(STDMETHODCALLTYPE * put_FrequencyMultiplier) (IBDA_FrequencyFilter * This, ULONG ulMultiplier);
	HRESULT(STDMETHODCALLTYPE * get_FrequencyMultiplier) (IBDA_FrequencyFilter * This, ULONG * pulMultiplier);
	END_INTERFACE
} IBDA_FrequencyFilterVtbl;
interface IBDA_FrequencyFilter
{
	CONST_VTBL struct IBDA_FrequencyFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_FrequencyFilter_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_FrequencyFilter_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_FrequencyFilter_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_FrequencyFilter_put_Autotune(This,ulTransponder)     ( (This)->lpVtbl -> put_Autotune(This,ulTransponder) )
#define IBDA_FrequencyFilter_get_Autotune(This,pulTransponder)     ( (This)->lpVtbl -> get_Autotune(This,pulTransponder) )
#define IBDA_FrequencyFilter_put_Frequency(This,ulFrequency)     ( (This)->lpVtbl -> put_Frequency(This,ulFrequency) )
#define IBDA_FrequencyFilter_get_Frequency(This,pulFrequency)     ( (This)->lpVtbl -> get_Frequency(This,pulFrequency) )
#define IBDA_FrequencyFilter_put_Polarity(This,Polarity)     ( (This)->lpVtbl -> put_Polarity(This,Polarity) )
#define IBDA_FrequencyFilter_get_Polarity(This,pPolarity)     ( (This)->lpVtbl -> get_Polarity(This,pPolarity) )
#define IBDA_FrequencyFilter_put_Range(This,ulRange)     ( (This)->lpVtbl -> put_Range(This,ulRange) )
#define IBDA_FrequencyFilter_get_Range(This,pulRange)     ( (This)->lpVtbl -> get_Range(This,pulRange) )
#define IBDA_FrequencyFilter_put_Bandwidth(This,ulBandwidth)     ( (This)->lpVtbl -> put_Bandwidth(This,ulBandwidth) )
#define IBDA_FrequencyFilter_get_Bandwidth(This,pulBandwidth)     ( (This)->lpVtbl -> get_Bandwidth(This,pulBandwidth) )
#define IBDA_FrequencyFilter_put_FrequencyMultiplier(This,ulMultiplier)     ( (This)->lpVtbl -> put_FrequencyMultiplier(This,ulMultiplier) )
#define IBDA_FrequencyFilter_get_FrequencyMultiplier(This,pulMultiplier)     ( (This)->lpVtbl -> get_FrequencyMultiplier(This,pulMultiplier) )
#endif
#endif
#ifndef __IBDA_LNBInfo_INTERFACE_DEFINED__
#define __IBDA_LNBInfo_INTERFACE_DEFINED__
extern const IID IID_IBDA_LNBInfo;
typedef struct IBDA_LNBInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_LNBInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_LNBInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_LNBInfo * This);
	HRESULT(STDMETHODCALLTYPE * put_LocalOscilatorFrequencyLowBand) (IBDA_LNBInfo * This, ULONG ulLOFLow);
	HRESULT(STDMETHODCALLTYPE * get_LocalOscilatorFrequencyLowBand) (IBDA_LNBInfo * This, ULONG * pulLOFLow);
	HRESULT(STDMETHODCALLTYPE * put_LocalOscilatorFrequencyHighBand) (IBDA_LNBInfo * This, ULONG ulLOFHigh);
	HRESULT(STDMETHODCALLTYPE * get_LocalOscilatorFrequencyHighBand) (IBDA_LNBInfo * This, ULONG * pulLOFHigh);
	HRESULT(STDMETHODCALLTYPE * put_HighLowSwitchFrequency) (IBDA_LNBInfo * This, ULONG ulSwitchFrequency);
	HRESULT(STDMETHODCALLTYPE * get_HighLowSwitchFrequency) (IBDA_LNBInfo * This, ULONG * pulSwitchFrequency);
	END_INTERFACE
} IBDA_LNBInfoVtbl;
interface IBDA_LNBInfo
{
	CONST_VTBL struct IBDA_LNBInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_LNBInfo_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_LNBInfo_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_LNBInfo_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_LNBInfo_put_LocalOscilatorFrequencyLowBand(This,ulLOFLow)     ( (This)->lpVtbl -> put_LocalOscilatorFrequencyLowBand(This,ulLOFLow) )
#define IBDA_LNBInfo_get_LocalOscilatorFrequencyLowBand(This,pulLOFLow)     ( (This)->lpVtbl -> get_LocalOscilatorFrequencyLowBand(This,pulLOFLow) )
#define IBDA_LNBInfo_put_LocalOscilatorFrequencyHighBand(This,ulLOFHigh)     ( (This)->lpVtbl -> put_LocalOscilatorFrequencyHighBand(This,ulLOFHigh) )
#define IBDA_LNBInfo_get_LocalOscilatorFrequencyHighBand(This,pulLOFHigh)     ( (This)->lpVtbl -> get_LocalOscilatorFrequencyHighBand(This,pulLOFHigh) )
#define IBDA_LNBInfo_put_HighLowSwitchFrequency(This,ulSwitchFrequency)     ( (This)->lpVtbl -> put_HighLowSwitchFrequency(This,ulSwitchFrequency) )
#define IBDA_LNBInfo_get_HighLowSwitchFrequency(This,pulSwitchFrequency)     ( (This)->lpVtbl -> get_HighLowSwitchFrequency(This,pulSwitchFrequency) )
#endif
#endif
#ifndef __IBDA_DiseqCommand_INTERFACE_DEFINED__
#define __IBDA_DiseqCommand_INTERFACE_DEFINED__
extern const IID IID_IBDA_DiseqCommand;
typedef struct IBDA_DiseqCommandVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_DiseqCommand * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_DiseqCommand * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_DiseqCommand * This);
	HRESULT(STDMETHODCALLTYPE * put_EnableDiseqCommands) (IBDA_DiseqCommand * This, BOOLEAN bEnable);
	HRESULT(STDMETHODCALLTYPE * put_DiseqLNBSource) (IBDA_DiseqCommand * This, ULONG ulLNBSource);
	HRESULT(STDMETHODCALLTYPE * put_DiseqUseToneBurst) (IBDA_DiseqCommand * This, BOOLEAN bUseToneBurst);
	HRESULT(STDMETHODCALLTYPE * put_DiseqRepeats) (IBDA_DiseqCommand * This, ULONG ulRepeats);
	HRESULT(STDMETHODCALLTYPE * put_DiseqSendCommand) (IBDA_DiseqCommand * This, ULONG ulRequestId, ULONG ulcbCommandLen, BYTE * pbCommand);
	HRESULT(STDMETHODCALLTYPE * get_DiseqResponse) (IBDA_DiseqCommand * This, ULONG ulRequestId, ULONG * pulcbResponseLen, BYTE pbResponse[]);
	END_INTERFACE
} IBDA_DiseqCommandVtbl;
interface IBDA_DiseqCommand
{
	CONST_VTBL struct IBDA_DiseqCommandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_DiseqCommand_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_DiseqCommand_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_DiseqCommand_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_DiseqCommand_put_EnableDiseqCommands(This,bEnable)     ( (This)->lpVtbl -> put_EnableDiseqCommands(This,bEnable) )
#define IBDA_DiseqCommand_put_DiseqLNBSource(This,ulLNBSource)     ( (This)->lpVtbl -> put_DiseqLNBSource(This,ulLNBSource) )
#define IBDA_DiseqCommand_put_DiseqUseToneBurst(This,bUseToneBurst)     ( (This)->lpVtbl -> put_DiseqUseToneBurst(This,bUseToneBurst) )
#define IBDA_DiseqCommand_put_DiseqRepeats(This,ulRepeats)     ( (This)->lpVtbl -> put_DiseqRepeats(This,ulRepeats) )
#define IBDA_DiseqCommand_put_DiseqSendCommand(This,ulRequestId,ulcbCommandLen,pbCommand)     ( (This)->lpVtbl -> put_DiseqSendCommand(This,ulRequestId,ulcbCommandLen,pbCommand) )
#define IBDA_DiseqCommand_get_DiseqResponse(This,ulRequestId,pulcbResponseLen,pbResponse)     ( (This)->lpVtbl -> get_DiseqResponse(This,ulRequestId,pulcbResponseLen,pbResponse) )
#endif
#endif
#ifndef __IBDA_AutoDemodulate_INTERFACE_DEFINED__
#define __IBDA_AutoDemodulate_INTERFACE_DEFINED__
extern const IID IID_IBDA_AutoDemodulate;
typedef struct IBDA_AutoDemodulateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_AutoDemodulate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_AutoDemodulate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_AutoDemodulate * This);
	HRESULT(STDMETHODCALLTYPE * put_AutoDemodulate) (IBDA_AutoDemodulate * This);
	END_INTERFACE
} IBDA_AutoDemodulateVtbl;
interface IBDA_AutoDemodulate
{
	CONST_VTBL struct IBDA_AutoDemodulateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_AutoDemodulate_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_AutoDemodulate_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_AutoDemodulate_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_AutoDemodulate_put_AutoDemodulate(This)     ( (This)->lpVtbl -> put_AutoDemodulate(This) )
#endif
#endif
#ifndef __IBDA_AutoDemodulateEx_INTERFACE_DEFINED__
#define __IBDA_AutoDemodulateEx_INTERFACE_DEFINED__
extern const IID IID_IBDA_AutoDemodulateEx;
typedef struct IBDA_AutoDemodulateExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_AutoDemodulateEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_AutoDemodulateEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_AutoDemodulateEx * This);
	HRESULT(STDMETHODCALLTYPE * put_AutoDemodulate) (IBDA_AutoDemodulateEx * This);
	HRESULT(STDMETHODCALLTYPE * get_SupportedDeviceNodeTypes) (IBDA_AutoDemodulateEx * This, ULONG ulcDeviceNodeTypesMax, ULONG * pulcDeviceNodeTypes, GUID * pguidDeviceNodeTypes);
	HRESULT(STDMETHODCALLTYPE * get_SupportedVideoFormats) (IBDA_AutoDemodulateEx * This, ULONG * pulAMTunerModeType, ULONG * pulAnalogVideoStandard);
	HRESULT(STDMETHODCALLTYPE * get_AuxInputCount) (IBDA_AutoDemodulateEx * This, ULONG * pulCompositeCount, ULONG * pulSvideoCount);
	END_INTERFACE
} IBDA_AutoDemodulateExVtbl;
interface IBDA_AutoDemodulateEx
{
	CONST_VTBL struct IBDA_AutoDemodulateExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_AutoDemodulateEx_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_AutoDemodulateEx_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_AutoDemodulateEx_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_AutoDemodulateEx_put_AutoDemodulate(This)     ( (This)->lpVtbl -> put_AutoDemodulate(This) )
#define IBDA_AutoDemodulateEx_get_SupportedDeviceNodeTypes(This,ulcDeviceNodeTypesMax,pulcDeviceNodeTypes,pguidDeviceNodeTypes)     ( (This)->lpVtbl -> get_SupportedDeviceNodeTypes(This,ulcDeviceNodeTypesMax,pulcDeviceNodeTypes,pguidDeviceNodeTypes) )
#define IBDA_AutoDemodulateEx_get_SupportedVideoFormats(This,pulAMTunerModeType,pulAnalogVideoStandard)     ( (This)->lpVtbl -> get_SupportedVideoFormats(This,pulAMTunerModeType,pulAnalogVideoStandard) )
#define IBDA_AutoDemodulateEx_get_AuxInputCount(This,pulCompositeCount,pulSvideoCount)     ( (This)->lpVtbl -> get_AuxInputCount(This,pulCompositeCount,pulSvideoCount) )
#endif
#endif
#ifndef __IBDA_DigitalDemodulator_INTERFACE_DEFINED__
#define __IBDA_DigitalDemodulator_INTERFACE_DEFINED__
extern const IID IID_IBDA_DigitalDemodulator;
typedef struct IBDA_DigitalDemodulatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_DigitalDemodulator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_DigitalDemodulator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_DigitalDemodulator * This);
	HRESULT(STDMETHODCALLTYPE * put_ModulationType) (IBDA_DigitalDemodulator * This, ModulationType * pModulationType);
	HRESULT(STDMETHODCALLTYPE * get_ModulationType) (IBDA_DigitalDemodulator * This, ModulationType * pModulationType);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECMethod) (IBDA_DigitalDemodulator * This, FECMethod * pFECMethod);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECMethod) (IBDA_DigitalDemodulator * This, FECMethod * pFECMethod);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IBDA_DigitalDemodulator * This, BinaryConvolutionCodeRate * pFECRate);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IBDA_DigitalDemodulator * This, BinaryConvolutionCodeRate * pFECRate);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECMethod) (IBDA_DigitalDemodulator * This, FECMethod * pFECMethod);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECMethod) (IBDA_DigitalDemodulator * This, FECMethod * pFECMethod);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IBDA_DigitalDemodulator * This, BinaryConvolutionCodeRate * pFECRate);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IBDA_DigitalDemodulator * This, BinaryConvolutionCodeRate * pFECRate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IBDA_DigitalDemodulator * This, ULONG * pSymbolRate);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IBDA_DigitalDemodulator * This, ULONG * pSymbolRate);
	HRESULT(STDMETHODCALLTYPE * put_SpectralInversion) (IBDA_DigitalDemodulator * This, SpectralInversion * pSpectralInversion);
	HRESULT(STDMETHODCALLTYPE * get_SpectralInversion) (IBDA_DigitalDemodulator * This, SpectralInversion * pSpectralInversion);
	END_INTERFACE
} IBDA_DigitalDemodulatorVtbl;
interface IBDA_DigitalDemodulator
{
	CONST_VTBL struct IBDA_DigitalDemodulatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_DigitalDemodulator_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_DigitalDemodulator_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_DigitalDemodulator_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_DigitalDemodulator_put_ModulationType(This,pModulationType)     ( (This)->lpVtbl -> put_ModulationType(This,pModulationType) )
#define IBDA_DigitalDemodulator_get_ModulationType(This,pModulationType)     ( (This)->lpVtbl -> get_ModulationType(This,pModulationType) )
#define IBDA_DigitalDemodulator_put_InnerFECMethod(This,pFECMethod)     ( (This)->lpVtbl -> put_InnerFECMethod(This,pFECMethod) )
#define IBDA_DigitalDemodulator_get_InnerFECMethod(This,pFECMethod)     ( (This)->lpVtbl -> get_InnerFECMethod(This,pFECMethod) )
#define IBDA_DigitalDemodulator_put_InnerFECRate(This,pFECRate)     ( (This)->lpVtbl -> put_InnerFECRate(This,pFECRate) )
#define IBDA_DigitalDemodulator_get_InnerFECRate(This,pFECRate)     ( (This)->lpVtbl -> get_InnerFECRate(This,pFECRate) )
#define IBDA_DigitalDemodulator_put_OuterFECMethod(This,pFECMethod)     ( (This)->lpVtbl -> put_OuterFECMethod(This,pFECMethod) )
#define IBDA_DigitalDemodulator_get_OuterFECMethod(This,pFECMethod)     ( (This)->lpVtbl -> get_OuterFECMethod(This,pFECMethod) )
#define IBDA_DigitalDemodulator_put_OuterFECRate(This,pFECRate)     ( (This)->lpVtbl -> put_OuterFECRate(This,pFECRate) )
#define IBDA_DigitalDemodulator_get_OuterFECRate(This,pFECRate)     ( (This)->lpVtbl -> get_OuterFECRate(This,pFECRate) )
#define IBDA_DigitalDemodulator_put_SymbolRate(This,pSymbolRate)     ( (This)->lpVtbl -> put_SymbolRate(This,pSymbolRate) )
#define IBDA_DigitalDemodulator_get_SymbolRate(This,pSymbolRate)     ( (This)->lpVtbl -> get_SymbolRate(This,pSymbolRate) )
#define IBDA_DigitalDemodulator_put_SpectralInversion(This,pSpectralInversion)     ( (This)->lpVtbl -> put_SpectralInversion(This,pSpectralInversion) )
#define IBDA_DigitalDemodulator_get_SpectralInversion(This,pSpectralInversion)     ( (This)->lpVtbl -> get_SpectralInversion(This,pSpectralInversion) )
#endif
#endif
#ifndef __IBDA_DigitalDemodulator2_INTERFACE_DEFINED__
#define __IBDA_DigitalDemodulator2_INTERFACE_DEFINED__
extern const IID IID_IBDA_DigitalDemodulator2;
typedef struct IBDA_DigitalDemodulator2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_DigitalDemodulator2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_DigitalDemodulator2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_DigitalDemodulator2 * This);
	HRESULT(STDMETHODCALLTYPE * put_ModulationType) (IBDA_DigitalDemodulator2 * This, ModulationType * pModulationType);
	HRESULT(STDMETHODCALLTYPE * get_ModulationType) (IBDA_DigitalDemodulator2 * This, ModulationType * pModulationType);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECMethod) (IBDA_DigitalDemodulator2 * This, FECMethod * pFECMethod);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECMethod) (IBDA_DigitalDemodulator2 * This, FECMethod * pFECMethod);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IBDA_DigitalDemodulator2 * This, BinaryConvolutionCodeRate * pFECRate);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IBDA_DigitalDemodulator2 * This, BinaryConvolutionCodeRate * pFECRate);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECMethod) (IBDA_DigitalDemodulator2 * This, FECMethod * pFECMethod);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECMethod) (IBDA_DigitalDemodulator2 * This, FECMethod * pFECMethod);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IBDA_DigitalDemodulator2 * This, BinaryConvolutionCodeRate * pFECRate);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IBDA_DigitalDemodulator2 * This, BinaryConvolutionCodeRate * pFECRate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IBDA_DigitalDemodulator2 * This, ULONG * pSymbolRate);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IBDA_DigitalDemodulator2 * This, ULONG * pSymbolRate);
	HRESULT(STDMETHODCALLTYPE * put_SpectralInversion) (IBDA_DigitalDemodulator2 * This, SpectralInversion * pSpectralInversion);
	HRESULT(STDMETHODCALLTYPE * get_SpectralInversion) (IBDA_DigitalDemodulator2 * This, SpectralInversion * pSpectralInversion);
	HRESULT(STDMETHODCALLTYPE * put_GuardInterval) (IBDA_DigitalDemodulator2 * This, GuardInterval * pGuardInterval);
	HRESULT(STDMETHODCALLTYPE * get_GuardInterval) (IBDA_DigitalDemodulator2 * This, GuardInterval * pGuardInterval);
	HRESULT(STDMETHODCALLTYPE * put_TransmissionMode) (IBDA_DigitalDemodulator2 * This, TransmissionMode * pTransmissionMode);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionMode) (IBDA_DigitalDemodulator2 * This, TransmissionMode * pTransmissionMode);
	HRESULT(STDMETHODCALLTYPE * put_RollOff) (IBDA_DigitalDemodulator2 * This, RollOff * pRollOff);
	HRESULT(STDMETHODCALLTYPE * get_RollOff) (IBDA_DigitalDemodulator2 * This, RollOff * pRollOff);
	HRESULT(STDMETHODCALLTYPE * put_Pilot) (IBDA_DigitalDemodulator2 * This, Pilot * pPilot);
	HRESULT(STDMETHODCALLTYPE * get_Pilot) (IBDA_DigitalDemodulator2 * This, Pilot * pPilot);
	END_INTERFACE
} IBDA_DigitalDemodulator2Vtbl;
interface IBDA_DigitalDemodulator2
{
	CONST_VTBL struct IBDA_DigitalDemodulator2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_DigitalDemodulator2_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_DigitalDemodulator2_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_DigitalDemodulator2_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_DigitalDemodulator2_put_ModulationType(This,pModulationType)     ( (This)->lpVtbl -> put_ModulationType(This,pModulationType) )
#define IBDA_DigitalDemodulator2_get_ModulationType(This,pModulationType)     ( (This)->lpVtbl -> get_ModulationType(This,pModulationType) )
#define IBDA_DigitalDemodulator2_put_InnerFECMethod(This,pFECMethod)     ( (This)->lpVtbl -> put_InnerFECMethod(This,pFECMethod) )
#define IBDA_DigitalDemodulator2_get_InnerFECMethod(This,pFECMethod)     ( (This)->lpVtbl -> get_InnerFECMethod(This,pFECMethod) )
#define IBDA_DigitalDemodulator2_put_InnerFECRate(This,pFECRate)     ( (This)->lpVtbl -> put_InnerFECRate(This,pFECRate) )
#define IBDA_DigitalDemodulator2_get_InnerFECRate(This,pFECRate)     ( (This)->lpVtbl -> get_InnerFECRate(This,pFECRate) )
#define IBDA_DigitalDemodulator2_put_OuterFECMethod(This,pFECMethod)     ( (This)->lpVtbl -> put_OuterFECMethod(This,pFECMethod) )
#define IBDA_DigitalDemodulator2_get_OuterFECMethod(This,pFECMethod)     ( (This)->lpVtbl -> get_OuterFECMethod(This,pFECMethod) )
#define IBDA_DigitalDemodulator2_put_OuterFECRate(This,pFECRate)     ( (This)->lpVtbl -> put_OuterFECRate(This,pFECRate) )
#define IBDA_DigitalDemodulator2_get_OuterFECRate(This,pFECRate)     ( (This)->lpVtbl -> get_OuterFECRate(This,pFECRate) )
#define IBDA_DigitalDemodulator2_put_SymbolRate(This,pSymbolRate)     ( (This)->lpVtbl -> put_SymbolRate(This,pSymbolRate) )
#define IBDA_DigitalDemodulator2_get_SymbolRate(This,pSymbolRate)     ( (This)->lpVtbl -> get_SymbolRate(This,pSymbolRate) )
#define IBDA_DigitalDemodulator2_put_SpectralInversion(This,pSpectralInversion)     ( (This)->lpVtbl -> put_SpectralInversion(This,pSpectralInversion) )
#define IBDA_DigitalDemodulator2_get_SpectralInversion(This,pSpectralInversion)     ( (This)->lpVtbl -> get_SpectralInversion(This,pSpectralInversion) )
#define IBDA_DigitalDemodulator2_put_GuardInterval(This,pGuardInterval)     ( (This)->lpVtbl -> put_GuardInterval(This,pGuardInterval) )
#define IBDA_DigitalDemodulator2_get_GuardInterval(This,pGuardInterval)     ( (This)->lpVtbl -> get_GuardInterval(This,pGuardInterval) )
#define IBDA_DigitalDemodulator2_put_TransmissionMode(This,pTransmissionMode)     ( (This)->lpVtbl -> put_TransmissionMode(This,pTransmissionMode) )
#define IBDA_DigitalDemodulator2_get_TransmissionMode(This,pTransmissionMode)     ( (This)->lpVtbl -> get_TransmissionMode(This,pTransmissionMode) )
#define IBDA_DigitalDemodulator2_put_RollOff(This,pRollOff)     ( (This)->lpVtbl -> put_RollOff(This,pRollOff) )
#define IBDA_DigitalDemodulator2_get_RollOff(This,pRollOff)     ( (This)->lpVtbl -> get_RollOff(This,pRollOff) )
#define IBDA_DigitalDemodulator2_put_Pilot(This,pPilot)     ( (This)->lpVtbl -> put_Pilot(This,pPilot) )
#define IBDA_DigitalDemodulator2_get_Pilot(This,pPilot)     ( (This)->lpVtbl -> get_Pilot(This,pPilot) )
#endif
#endif
#ifndef __IBDA_DigitalDemodulator3_INTERFACE_DEFINED__
#define __IBDA_DigitalDemodulator3_INTERFACE_DEFINED__
extern const IID IID_IBDA_DigitalDemodulator3;
typedef struct IBDA_DigitalDemodulator3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_DigitalDemodulator3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_DigitalDemodulator3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_DigitalDemodulator3 * This);
	HRESULT(STDMETHODCALLTYPE * put_ModulationType) (IBDA_DigitalDemodulator3 * This, ModulationType * pModulationType);
	HRESULT(STDMETHODCALLTYPE * get_ModulationType) (IBDA_DigitalDemodulator3 * This, ModulationType * pModulationType);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECMethod) (IBDA_DigitalDemodulator3 * This, FECMethod * pFECMethod);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECMethod) (IBDA_DigitalDemodulator3 * This, FECMethod * pFECMethod);
	HRESULT(STDMETHODCALLTYPE * put_InnerFECRate) (IBDA_DigitalDemodulator3 * This, BinaryConvolutionCodeRate * pFECRate);
	HRESULT(STDMETHODCALLTYPE * get_InnerFECRate) (IBDA_DigitalDemodulator3 * This, BinaryConvolutionCodeRate * pFECRate);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECMethod) (IBDA_DigitalDemodulator3 * This, FECMethod * pFECMethod);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECMethod) (IBDA_DigitalDemodulator3 * This, FECMethod * pFECMethod);
	HRESULT(STDMETHODCALLTYPE * put_OuterFECRate) (IBDA_DigitalDemodulator3 * This, BinaryConvolutionCodeRate * pFECRate);
	HRESULT(STDMETHODCALLTYPE * get_OuterFECRate) (IBDA_DigitalDemodulator3 * This, BinaryConvolutionCodeRate * pFECRate);
	HRESULT(STDMETHODCALLTYPE * put_SymbolRate) (IBDA_DigitalDemodulator3 * This, ULONG * pSymbolRate);
	HRESULT(STDMETHODCALLTYPE * get_SymbolRate) (IBDA_DigitalDemodulator3 * This, ULONG * pSymbolRate);
	HRESULT(STDMETHODCALLTYPE * put_SpectralInversion) (IBDA_DigitalDemodulator3 * This, SpectralInversion * pSpectralInversion);
	HRESULT(STDMETHODCALLTYPE * get_SpectralInversion) (IBDA_DigitalDemodulator3 * This, SpectralInversion * pSpectralInversion);
	HRESULT(STDMETHODCALLTYPE * put_GuardInterval) (IBDA_DigitalDemodulator3 * This, GuardInterval * pGuardInterval);
	HRESULT(STDMETHODCALLTYPE * get_GuardInterval) (IBDA_DigitalDemodulator3 * This, GuardInterval * pGuardInterval);
	HRESULT(STDMETHODCALLTYPE * put_TransmissionMode) (IBDA_DigitalDemodulator3 * This, TransmissionMode * pTransmissionMode);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionMode) (IBDA_DigitalDemodulator3 * This, TransmissionMode * pTransmissionMode);
	HRESULT(STDMETHODCALLTYPE * put_RollOff) (IBDA_DigitalDemodulator3 * This, RollOff * pRollOff);
	HRESULT(STDMETHODCALLTYPE * get_RollOff) (IBDA_DigitalDemodulator3 * This, RollOff * pRollOff);
	HRESULT(STDMETHODCALLTYPE * put_Pilot) (IBDA_DigitalDemodulator3 * This, Pilot * pPilot);
	HRESULT(STDMETHODCALLTYPE * get_Pilot) (IBDA_DigitalDemodulator3 * This, Pilot * pPilot);
	HRESULT(STDMETHODCALLTYPE * put_SignalTimeouts) (IBDA_DigitalDemodulator3 * This, BDA_SIGNAL_TIMEOUTS * pSignalTimeouts);
	HRESULT(STDMETHODCALLTYPE * get_SignalTimeouts) (IBDA_DigitalDemodulator3 * This, BDA_SIGNAL_TIMEOUTS * pSignalTimeouts);
	HRESULT(STDMETHODCALLTYPE * put_PLPNumber) (IBDA_DigitalDemodulator3 * This, ULONG * pPLPNumber);
	HRESULT(STDMETHODCALLTYPE * get_PLPNumber) (IBDA_DigitalDemodulator3 * This, ULONG * pPLPNumber);
	END_INTERFACE
} IBDA_DigitalDemodulator3Vtbl;
interface IBDA_DigitalDemodulator3
{
	CONST_VTBL struct IBDA_DigitalDemodulator3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_DigitalDemodulator3_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_DigitalDemodulator3_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_DigitalDemodulator3_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_DigitalDemodulator3_put_ModulationType(This,pModulationType)     ( (This)->lpVtbl -> put_ModulationType(This,pModulationType) )
#define IBDA_DigitalDemodulator3_get_ModulationType(This,pModulationType)     ( (This)->lpVtbl -> get_ModulationType(This,pModulationType) )
#define IBDA_DigitalDemodulator3_put_InnerFECMethod(This,pFECMethod)     ( (This)->lpVtbl -> put_InnerFECMethod(This,pFECMethod) )
#define IBDA_DigitalDemodulator3_get_InnerFECMethod(This,pFECMethod)     ( (This)->lpVtbl -> get_InnerFECMethod(This,pFECMethod) )
#define IBDA_DigitalDemodulator3_put_InnerFECRate(This,pFECRate)     ( (This)->lpVtbl -> put_InnerFECRate(This,pFECRate) )
#define IBDA_DigitalDemodulator3_get_InnerFECRate(This,pFECRate)     ( (This)->lpVtbl -> get_InnerFECRate(This,pFECRate) )
#define IBDA_DigitalDemodulator3_put_OuterFECMethod(This,pFECMethod)     ( (This)->lpVtbl -> put_OuterFECMethod(This,pFECMethod) )
#define IBDA_DigitalDemodulator3_get_OuterFECMethod(This,pFECMethod)     ( (This)->lpVtbl -> get_OuterFECMethod(This,pFECMethod) )
#define IBDA_DigitalDemodulator3_put_OuterFECRate(This,pFECRate)     ( (This)->lpVtbl -> put_OuterFECRate(This,pFECRate) )
#define IBDA_DigitalDemodulator3_get_OuterFECRate(This,pFECRate)     ( (This)->lpVtbl -> get_OuterFECRate(This,pFECRate) )
#define IBDA_DigitalDemodulator3_put_SymbolRate(This,pSymbolRate)     ( (This)->lpVtbl -> put_SymbolRate(This,pSymbolRate) )
#define IBDA_DigitalDemodulator3_get_SymbolRate(This,pSymbolRate)     ( (This)->lpVtbl -> get_SymbolRate(This,pSymbolRate) )
#define IBDA_DigitalDemodulator3_put_SpectralInversion(This,pSpectralInversion)     ( (This)->lpVtbl -> put_SpectralInversion(This,pSpectralInversion) )
#define IBDA_DigitalDemodulator3_get_SpectralInversion(This,pSpectralInversion)     ( (This)->lpVtbl -> get_SpectralInversion(This,pSpectralInversion) )
#define IBDA_DigitalDemodulator3_put_GuardInterval(This,pGuardInterval)     ( (This)->lpVtbl -> put_GuardInterval(This,pGuardInterval) )
#define IBDA_DigitalDemodulator3_get_GuardInterval(This,pGuardInterval)     ( (This)->lpVtbl -> get_GuardInterval(This,pGuardInterval) )
#define IBDA_DigitalDemodulator3_put_TransmissionMode(This,pTransmissionMode)     ( (This)->lpVtbl -> put_TransmissionMode(This,pTransmissionMode) )
#define IBDA_DigitalDemodulator3_get_TransmissionMode(This,pTransmissionMode)     ( (This)->lpVtbl -> get_TransmissionMode(This,pTransmissionMode) )
#define IBDA_DigitalDemodulator3_put_RollOff(This,pRollOff)     ( (This)->lpVtbl -> put_RollOff(This,pRollOff) )
#define IBDA_DigitalDemodulator3_get_RollOff(This,pRollOff)     ( (This)->lpVtbl -> get_RollOff(This,pRollOff) )
#define IBDA_DigitalDemodulator3_put_Pilot(This,pPilot)     ( (This)->lpVtbl -> put_Pilot(This,pPilot) )
#define IBDA_DigitalDemodulator3_get_Pilot(This,pPilot)     ( (This)->lpVtbl -> get_Pilot(This,pPilot) )
#define IBDA_DigitalDemodulator3_put_SignalTimeouts(This,pSignalTimeouts)     ( (This)->lpVtbl -> put_SignalTimeouts(This,pSignalTimeouts) )
#define IBDA_DigitalDemodulator3_get_SignalTimeouts(This,pSignalTimeouts)     ( (This)->lpVtbl -> get_SignalTimeouts(This,pSignalTimeouts) )
#define IBDA_DigitalDemodulator3_put_PLPNumber(This,pPLPNumber)     ( (This)->lpVtbl -> put_PLPNumber(This,pPLPNumber) )
#define IBDA_DigitalDemodulator3_get_PLPNumber(This,pPLPNumber)     ( (This)->lpVtbl -> get_PLPNumber(This,pPLPNumber) )
#endif
#endif
 typedef enum __MIDL___MIDL_itf_bdaiface_0000_0019_0001
{
	KSPROPERTY_IPSINK_MULTICASTLIST = 0,
	KSPROPERTY_IPSINK_ADAPTER_DESCRIPTION = (KSPROPERTY_IPSINK_MULTICASTLIST + 1),
	KSPROPERTY_IPSINK_ADAPTER_ADDRESS = (KSPROPERTY_IPSINK_ADAPTER_DESCRIPTION + 1)
} KSPROPERTY_IPSINK;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0019_v0_0_s_ifspec;
#ifndef __ICCSubStreamFiltering_INTERFACE_DEFINED__
#define __ICCSubStreamFiltering_INTERFACE_DEFINED__
extern const IID IID_ICCSubStreamFiltering;
typedef struct ICCSubStreamFilteringVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICCSubStreamFiltering * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICCSubStreamFiltering * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICCSubStreamFiltering * This);
	HRESULT(STDMETHODCALLTYPE * get_SubstreamTypes) (ICCSubStreamFiltering * This, long *pTypes);
	HRESULT(STDMETHODCALLTYPE * put_SubstreamTypes) (ICCSubStreamFiltering * This, long Types);
	END_INTERFACE
} ICCSubStreamFilteringVtbl;
interface ICCSubStreamFiltering
{
	CONST_VTBL struct ICCSubStreamFilteringVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICCSubStreamFiltering_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICCSubStreamFiltering_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define ICCSubStreamFiltering_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define ICCSubStreamFiltering_get_SubstreamTypes(This,pTypes)     ( (This)->lpVtbl -> get_SubstreamTypes(This,pTypes) )
#define ICCSubStreamFiltering_put_SubstreamTypes(This,Types)     ( (This)->lpVtbl -> put_SubstreamTypes(This,Types) )
#endif
#endif
#ifndef __IBDA_IPSinkControl_INTERFACE_DEFINED__
#define __IBDA_IPSinkControl_INTERFACE_DEFINED__
extern const IID IID_IBDA_IPSinkControl;
typedef struct IBDA_IPSinkControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_IPSinkControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_IPSinkControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_IPSinkControl * This);
	HRESULT(STDMETHODCALLTYPE * GetMulticastList) (IBDA_IPSinkControl * This, unsigned long *pulcbSize, BYTE ** pbBuffer);
	HRESULT(STDMETHODCALLTYPE * GetAdapterIPAddress) (IBDA_IPSinkControl * This, unsigned long *pulcbSize, BYTE ** pbBuffer);
	END_INTERFACE
} IBDA_IPSinkControlVtbl;
interface IBDA_IPSinkControl
{
	CONST_VTBL struct IBDA_IPSinkControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_IPSinkControl_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_IPSinkControl_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_IPSinkControl_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_IPSinkControl_GetMulticastList(This,pulcbSize,pbBuffer)     ( (This)->lpVtbl -> GetMulticastList(This,pulcbSize,pbBuffer) )
#define IBDA_IPSinkControl_GetAdapterIPAddress(This,pulcbSize,pbBuffer)     ( (This)->lpVtbl -> GetAdapterIPAddress(This,pulcbSize,pbBuffer) )
#endif
#endif
#ifndef __IBDA_IPSinkInfo_INTERFACE_DEFINED__
#define __IBDA_IPSinkInfo_INTERFACE_DEFINED__
extern const IID IID_IBDA_IPSinkInfo;
typedef struct IBDA_IPSinkInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_IPSinkInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_IPSinkInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_IPSinkInfo * This);
	HRESULT(STDMETHODCALLTYPE * get_MulticastList) (IBDA_IPSinkInfo * This, ULONG * pulcbAddresses, BYTE ** ppbAddressList);
	HRESULT(STDMETHODCALLTYPE * get_AdapterIPAddress) (IBDA_IPSinkInfo * This, BSTR * pbstrBuffer);
	HRESULT(STDMETHODCALLTYPE * get_AdapterDescription) (IBDA_IPSinkInfo * This, BSTR * pbstrBuffer);
	END_INTERFACE
} IBDA_IPSinkInfoVtbl;
interface IBDA_IPSinkInfo
{
	CONST_VTBL struct IBDA_IPSinkInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_IPSinkInfo_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_IPSinkInfo_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_IPSinkInfo_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_IPSinkInfo_get_MulticastList(This,pulcbAddresses,ppbAddressList)     ( (This)->lpVtbl -> get_MulticastList(This,pulcbAddresses,ppbAddressList) )
#define IBDA_IPSinkInfo_get_AdapterIPAddress(This,pbstrBuffer)     ( (This)->lpVtbl -> get_AdapterIPAddress(This,pbstrBuffer) )
#define IBDA_IPSinkInfo_get_AdapterDescription(This,pbstrBuffer)     ( (This)->lpVtbl -> get_AdapterDescription(This,pbstrBuffer) )
#endif
#endif
#ifndef __IEnumPIDMap_INTERFACE_DEFINED__
#define __IEnumPIDMap_INTERFACE_DEFINED__
extern const IID IID_IEnumPIDMap;
typedef struct IEnumPIDMapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumPIDMap * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumPIDMap * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumPIDMap * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumPIDMap * This, ULONG cRequest, PID_MAP * pPIDMap, ULONG * pcReceived);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumPIDMap * This, ULONG cRecords);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumPIDMap * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumPIDMap * This, IEnumPIDMap ** ppIEnumPIDMap);
	END_INTERFACE
} IEnumPIDMapVtbl;
interface IEnumPIDMap
{
	CONST_VTBL struct IEnumPIDMapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumPIDMap_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumPIDMap_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IEnumPIDMap_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IEnumPIDMap_Next(This,cRequest,pPIDMap,pcReceived)     ( (This)->lpVtbl -> Next(This,cRequest,pPIDMap,pcReceived) )
#define IEnumPIDMap_Skip(This,cRecords)     ( (This)->lpVtbl -> Skip(This,cRecords) )
#define IEnumPIDMap_Reset(This)     ( (This)->lpVtbl -> Reset(This) )
#define IEnumPIDMap_Clone(This,ppIEnumPIDMap)     ( (This)->lpVtbl -> Clone(This,ppIEnumPIDMap) )
#endif
#endif
#ifndef __IMPEG2PIDMap_INTERFACE_DEFINED__
#define __IMPEG2PIDMap_INTERFACE_DEFINED__
extern const IID IID_IMPEG2PIDMap;
typedef struct IMPEG2PIDMapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMPEG2PIDMap * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMPEG2PIDMap * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMPEG2PIDMap * This);
	HRESULT(STDMETHODCALLTYPE * MapPID) (IMPEG2PIDMap * This, ULONG culPID, ULONG * pulPID, MEDIA_SAMPLE_CONTENT MediaSampleContent);
	HRESULT(STDMETHODCALLTYPE * UnmapPID) (IMPEG2PIDMap * This, ULONG culPID, ULONG * pulPID);
	HRESULT(STDMETHODCALLTYPE * EnumPIDMap) (IMPEG2PIDMap * This, IEnumPIDMap ** pIEnumPIDMap);
	END_INTERFACE
} IMPEG2PIDMapVtbl;
interface IMPEG2PIDMap
{
	CONST_VTBL struct IMPEG2PIDMapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMPEG2PIDMap_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMPEG2PIDMap_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IMPEG2PIDMap_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IMPEG2PIDMap_MapPID(This,culPID,pulPID,MediaSampleContent)     ( (This)->lpVtbl -> MapPID(This,culPID,pulPID,MediaSampleContent) )
#define IMPEG2PIDMap_UnmapPID(This,culPID,pulPID)     ( (This)->lpVtbl -> UnmapPID(This,culPID,pulPID) )
#define IMPEG2PIDMap_EnumPIDMap(This,pIEnumPIDMap)     ( (This)->lpVtbl -> EnumPIDMap(This,pIEnumPIDMap) )
#endif
#endif
#ifndef __IFrequencyMap_INTERFACE_DEFINED__
#define __IFrequencyMap_INTERFACE_DEFINED__
extern const IID IID_IFrequencyMap;
typedef struct IFrequencyMapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFrequencyMap * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFrequencyMap * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFrequencyMap * This);
	HRESULT(STDMETHODCALLTYPE * get_FrequencyMapping) (IFrequencyMap * This, ULONG * ulCount, ULONG ** ppulList);
	HRESULT(STDMETHODCALLTYPE * put_FrequencyMapping) (IFrequencyMap * This, ULONG ulCount, ULONG pList[]);
	HRESULT(STDMETHODCALLTYPE * get_CountryCode) (IFrequencyMap * This, ULONG * pulCountryCode);
	HRESULT(STDMETHODCALLTYPE * put_CountryCode) (IFrequencyMap * This, ULONG ulCountryCode);
	HRESULT(STDMETHODCALLTYPE * get_DefaultFrequencyMapping) (IFrequencyMap * This, ULONG ulCountryCode, ULONG * pulCount, ULONG ** ppulList);
	HRESULT(STDMETHODCALLTYPE * get_CountryCodeList) (IFrequencyMap * This, ULONG * pulCount, ULONG ** ppulList);
	END_INTERFACE
} IFrequencyMapVtbl;
interface IFrequencyMap
{
	CONST_VTBL struct IFrequencyMapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFrequencyMap_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFrequencyMap_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IFrequencyMap_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IFrequencyMap_get_FrequencyMapping(This,ulCount,ppulList)     ( (This)->lpVtbl -> get_FrequencyMapping(This,ulCount,ppulList) )
#define IFrequencyMap_put_FrequencyMapping(This,ulCount,pList)     ( (This)->lpVtbl -> put_FrequencyMapping(This,ulCount,pList) )
#define IFrequencyMap_get_CountryCode(This,pulCountryCode)     ( (This)->lpVtbl -> get_CountryCode(This,pulCountryCode) )
#define IFrequencyMap_put_CountryCode(This,ulCountryCode)     ( (This)->lpVtbl -> put_CountryCode(This,ulCountryCode) )
#define IFrequencyMap_get_DefaultFrequencyMapping(This,ulCountryCode,pulCount,ppulList)     ( (This)->lpVtbl -> get_DefaultFrequencyMapping(This,ulCountryCode,pulCount,ppulList) )
#define IFrequencyMap_get_CountryCodeList(This,pulCount,ppulList)     ( (This)->lpVtbl -> get_CountryCodeList(This,pulCount,ppulList) )
#endif
#endif
#ifndef __IBDA_EasMessage_INTERFACE_DEFINED__
#define __IBDA_EasMessage_INTERFACE_DEFINED__
extern const IID IID_IBDA_EasMessage;
typedef struct IBDA_EasMessageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_EasMessage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_EasMessage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_EasMessage * This);
	HRESULT(STDMETHODCALLTYPE * get_EasMessage) (IBDA_EasMessage * This, ULONG ulEventID, IUnknown ** ppEASObject);
	END_INTERFACE
} IBDA_EasMessageVtbl;
interface IBDA_EasMessage
{
	CONST_VTBL struct IBDA_EasMessageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_EasMessage_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_EasMessage_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_EasMessage_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_EasMessage_get_EasMessage(This,ulEventID,ppEASObject)     ( (This)->lpVtbl -> get_EasMessage(This,ulEventID,ppEASObject) )
#endif
#endif
#define SID_BDA_EasMessage __uuidof(IBDA_EasMessage)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0026_v0_0_s_ifspec;
#ifndef __IBDA_TransportStreamInfo_INTERFACE_DEFINED__
#define __IBDA_TransportStreamInfo_INTERFACE_DEFINED__
extern const IID IID_IBDA_TransportStreamInfo;
typedef struct IBDA_TransportStreamInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_TransportStreamInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_TransportStreamInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_TransportStreamInfo * This);
	HRESULT(STDMETHODCALLTYPE * get_PatTableTickCount) (IBDA_TransportStreamInfo * This, ULONG * pPatTickCount);
	END_INTERFACE
} IBDA_TransportStreamInfoVtbl;
interface IBDA_TransportStreamInfo
{
	CONST_VTBL struct IBDA_TransportStreamInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_TransportStreamInfo_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_TransportStreamInfo_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_TransportStreamInfo_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_TransportStreamInfo_get_PatTableTickCount(This,pPatTickCount)     ( (This)->lpVtbl -> get_PatTableTickCount(This,pPatTickCount) )
#endif
#endif
#define SID_BDA_TransportStreamInfo __uuidof(IBDA_TransportStreamInfo)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0027_v0_0_s_ifspec;
#ifndef __IBDA_ConditionalAccess_INTERFACE_DEFINED__
#define __IBDA_ConditionalAccess_INTERFACE_DEFINED__
extern const IID IID_IBDA_ConditionalAccess;
typedef struct IBDA_ConditionalAccessVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_ConditionalAccess * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_ConditionalAccess * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_ConditionalAccess * This);
	HRESULT(STDMETHODCALLTYPE * get_SmartCardStatus) (IBDA_ConditionalAccess * This, SmartCardStatusType * pCardStatus, SmartCardAssociationType * pCardAssociation, BSTR * pbstrCardError, VARIANT_BOOL * pfOOBLocked);
	HRESULT(STDMETHODCALLTYPE * get_SmartCardInfo) (IBDA_ConditionalAccess * This, BSTR * pbstrCardName, BSTR * pbstrCardManufacturer, VARIANT_BOOL * pfDaylightSavings, BYTE * pbyRatingRegion, LONG * plTimeZoneOffsetMinutes, BSTR * pbstrLanguage, EALocationCodeType * pEALocationCode);
	HRESULT(STDMETHODCALLTYPE * get_SmartCardApplications) (IBDA_ConditionalAccess * This, ULONG * pulcApplications, ULONG ulcApplicationsMax, SmartCardApplication rgApplications[]);
	HRESULT(STDMETHODCALLTYPE * get_Entitlement) (IBDA_ConditionalAccess * This, USHORT usVirtualChannel, EntitlementType * pEntitlement);
	HRESULT(STDMETHODCALLTYPE * TuneByChannel) (IBDA_ConditionalAccess * This, USHORT usVirtualChannel);
	HRESULT(STDMETHODCALLTYPE * SetProgram) (IBDA_ConditionalAccess * This, USHORT usProgramNumber);
	HRESULT(STDMETHODCALLTYPE * AddProgram) (IBDA_ConditionalAccess * This, USHORT usProgramNumber);
	HRESULT(STDMETHODCALLTYPE * RemoveProgram) (IBDA_ConditionalAccess * This, USHORT usProgramNumber);
	HRESULT(STDMETHODCALLTYPE * GetModuleUI) (IBDA_ConditionalAccess * This, BYTE byDialogNumber, BSTR * pbstrURL);
	HRESULT(STDMETHODCALLTYPE * InformUIClosed) (IBDA_ConditionalAccess * This, BYTE byDialogNumber, UICloseReasonType CloseReason);
	END_INTERFACE
} IBDA_ConditionalAccessVtbl;
interface IBDA_ConditionalAccess
{
	CONST_VTBL struct IBDA_ConditionalAccessVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_ConditionalAccess_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_ConditionalAccess_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_ConditionalAccess_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_ConditionalAccess_get_SmartCardStatus(This,pCardStatus,pCardAssociation,pbstrCardError,pfOOBLocked)     ( (This)->lpVtbl -> get_SmartCardStatus(This,pCardStatus,pCardAssociation,pbstrCardError,pfOOBLocked) )
#define IBDA_ConditionalAccess_get_SmartCardInfo(This,pbstrCardName,pbstrCardManufacturer,pfDaylightSavings,pbyRatingRegion,plTimeZoneOffsetMinutes,pbstrLanguage,pEALocationCode)     ( (This)->lpVtbl -> get_SmartCardInfo(This,pbstrCardName,pbstrCardManufacturer,pfDaylightSavings,pbyRatingRegion,plTimeZoneOffsetMinutes,pbstrLanguage,pEALocationCode) )
#define IBDA_ConditionalAccess_get_SmartCardApplications(This,pulcApplications,ulcApplicationsMax,rgApplications)     ( (This)->lpVtbl -> get_SmartCardApplications(This,pulcApplications,ulcApplicationsMax,rgApplications) )
#define IBDA_ConditionalAccess_get_Entitlement(This,usVirtualChannel,pEntitlement)     ( (This)->lpVtbl -> get_Entitlement(This,usVirtualChannel,pEntitlement) )
#define IBDA_ConditionalAccess_TuneByChannel(This,usVirtualChannel)     ( (This)->lpVtbl -> TuneByChannel(This,usVirtualChannel) )
#define IBDA_ConditionalAccess_SetProgram(This,usProgramNumber)     ( (This)->lpVtbl -> SetProgram(This,usProgramNumber) )
#define IBDA_ConditionalAccess_AddProgram(This,usProgramNumber)     ( (This)->lpVtbl -> AddProgram(This,usProgramNumber) )
#define IBDA_ConditionalAccess_RemoveProgram(This,usProgramNumber)     ( (This)->lpVtbl -> RemoveProgram(This,usProgramNumber) )
#define IBDA_ConditionalAccess_GetModuleUI(This,byDialogNumber,pbstrURL)     ( (This)->lpVtbl -> GetModuleUI(This,byDialogNumber,pbstrURL) )
#define IBDA_ConditionalAccess_InformUIClosed(This,byDialogNumber,CloseReason)     ( (This)->lpVtbl -> InformUIClosed(This,byDialogNumber,CloseReason) )
#endif
#endif
#define SID_BDA_ConditionalAccess __uuidof(IBDA_ConditionalAccess)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0028_v0_0_s_ifspec;
#ifndef __IBDA_DiagnosticProperties_INTERFACE_DEFINED__
#define __IBDA_DiagnosticProperties_INTERFACE_DEFINED__
extern const IID IID_IBDA_DiagnosticProperties;
typedef struct IBDA_DiagnosticPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_DiagnosticProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_DiagnosticProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_DiagnosticProperties * This);
	HRESULT(STDMETHODCALLTYPE * Read) (IBDA_DiagnosticProperties * This, LPCOLESTR pszPropName, VARIANT * pVar, IErrorLog * pErrorLog);
	HRESULT(STDMETHODCALLTYPE * Write) (IBDA_DiagnosticProperties * This, LPCOLESTR pszPropName, VARIANT * pVar);
	END_INTERFACE
} IBDA_DiagnosticPropertiesVtbl;
interface IBDA_DiagnosticProperties
{
	CONST_VTBL struct IBDA_DiagnosticPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_DiagnosticProperties_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_DiagnosticProperties_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_DiagnosticProperties_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_DiagnosticProperties_Read(This,pszPropName,pVar,pErrorLog)     ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
#define IBDA_DiagnosticProperties_Write(This,pszPropName,pVar)     ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
#endif
#endif
#define SID_BDA_DiagnosticProperties __uuidof(IBDA_DiagnosticProperties)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0029_v0_0_s_ifspec;
#ifndef __IBDA_DRM_INTERFACE_DEFINED__
#define __IBDA_DRM_INTERFACE_DEFINED__
extern const IID IID_IBDA_DRM;
typedef struct IBDA_DRMVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_DRM * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_DRM * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_DRM * This);
	HRESULT(STDMETHODCALLTYPE * GetDRMPairingStatus) (IBDA_DRM * This, DWORD * pdwStatus, HRESULT * phError);
	HRESULT(STDMETHODCALLTYPE * PerformDRMPairing) (IBDA_DRM * This, BOOL fSync);
	END_INTERFACE
} IBDA_DRMVtbl;
interface IBDA_DRM
{
	CONST_VTBL struct IBDA_DRMVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_DRM_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_DRM_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_DRM_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_DRM_GetDRMPairingStatus(This,pdwStatus,phError)     ( (This)->lpVtbl -> GetDRMPairingStatus(This,pdwStatus,phError) )
#define IBDA_DRM_PerformDRMPairing(This,fSync)     ( (This)->lpVtbl -> PerformDRMPairing(This,fSync) )
#endif
#endif
#define SID_BDA_DRM __uuidof(IBDA_DRM)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0030_v0_0_s_ifspec;
#ifndef __IBDA_NameValueService_INTERFACE_DEFINED__
#define __IBDA_NameValueService_INTERFACE_DEFINED__
extern const IID IID_IBDA_NameValueService;
typedef struct IBDA_NameValueServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_NameValueService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_NameValueService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_NameValueService * This);
	HRESULT(STDMETHODCALLTYPE * GetValueNameByIndex) (IBDA_NameValueService * This, ULONG ulIndex, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IBDA_NameValueService * This, BSTR bstrName, BSTR bstrLanguage, BSTR * pbstrValue);
	HRESULT(STDMETHODCALLTYPE * SetValue) (IBDA_NameValueService * This, ULONG ulDialogRequest, BSTR bstrLanguage, BSTR bstrName, BSTR bstrValue, ULONG ulReserved);
	END_INTERFACE
} IBDA_NameValueServiceVtbl;
interface IBDA_NameValueService
{
	CONST_VTBL struct IBDA_NameValueServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_NameValueService_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_NameValueService_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_NameValueService_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_NameValueService_GetValueNameByIndex(This,ulIndex,pbstrName)     ( (This)->lpVtbl -> GetValueNameByIndex(This,ulIndex,pbstrName) )
#define IBDA_NameValueService_GetValue(This,bstrName,bstrLanguage,pbstrValue)     ( (This)->lpVtbl -> GetValue(This,bstrName,bstrLanguage,pbstrValue) )
#define IBDA_NameValueService_SetValue(This,ulDialogRequest,bstrLanguage,bstrName,bstrValue,ulReserved)     ( (This)->lpVtbl -> SetValue(This,ulDialogRequest,bstrLanguage,bstrName,bstrValue,ulReserved) )
#endif
#endif
#define SID_BDA_NameValueService __uuidof(IBDA_NameValueService)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0031_v0_0_s_ifspec;
#ifndef __IBDA_ConditionalAccessEx_INTERFACE_DEFINED__
#define __IBDA_ConditionalAccessEx_INTERFACE_DEFINED__
extern const IID IID_IBDA_ConditionalAccessEx;
typedef struct IBDA_ConditionalAccessExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_ConditionalAccessEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_ConditionalAccessEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_ConditionalAccessEx * This);
	HRESULT(STDMETHODCALLTYPE * CheckEntitlementToken) (IBDA_ConditionalAccessEx * This, ULONG ulDialogRequest, BSTR bstrLanguage, BDA_CONDITIONALACCESS_REQUESTTYPE RequestType, ULONG ulcbEntitlementTokenLen, BYTE * pbEntitlementToken, ULONG * pulDescrambleStatus);
	HRESULT(STDMETHODCALLTYPE * SetCaptureToken) (IBDA_ConditionalAccessEx * This, ULONG ulcbCaptureTokenLen, BYTE * pbCaptureToken);
	HRESULT(STDMETHODCALLTYPE * OpenBroadcastMmi) (IBDA_ConditionalAccessEx * This, ULONG ulDialogRequest, BSTR bstrLanguage, ULONG EventId);
	HRESULT(STDMETHODCALLTYPE * CloseMmiDialog) (IBDA_ConditionalAccessEx * This, ULONG ulDialogRequest, BSTR bstrLanguage, ULONG ulDialogNumber, BDA_CONDITIONALACCESS_MMICLOSEREASON ReasonCode, ULONG * pulSessionResult);
	HRESULT(STDMETHODCALLTYPE * CreateDialogRequestNumber) (IBDA_ConditionalAccessEx * This, ULONG * pulDialogRequestNumber);
	END_INTERFACE
} IBDA_ConditionalAccessExVtbl;
interface IBDA_ConditionalAccessEx
{
	CONST_VTBL struct IBDA_ConditionalAccessExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_ConditionalAccessEx_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_ConditionalAccessEx_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_ConditionalAccessEx_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_ConditionalAccessEx_CheckEntitlementToken(This,ulDialogRequest,bstrLanguage,RequestType,ulcbEntitlementTokenLen,pbEntitlementToken,pulDescrambleStatus)     ( (This)->lpVtbl -> CheckEntitlementToken(This,ulDialogRequest,bstrLanguage,RequestType,ulcbEntitlementTokenLen,pbEntitlementToken,pulDescrambleStatus) )
#define IBDA_ConditionalAccessEx_SetCaptureToken(This,ulcbCaptureTokenLen,pbCaptureToken)     ( (This)->lpVtbl -> SetCaptureToken(This,ulcbCaptureTokenLen,pbCaptureToken) )
#define IBDA_ConditionalAccessEx_OpenBroadcastMmi(This,ulDialogRequest,bstrLanguage,EventId)     ( (This)->lpVtbl -> OpenBroadcastMmi(This,ulDialogRequest,bstrLanguage,EventId) )
#define IBDA_ConditionalAccessEx_CloseMmiDialog(This,ulDialogRequest,bstrLanguage,ulDialogNumber,ReasonCode,pulSessionResult)     ( (This)->lpVtbl -> CloseMmiDialog(This,ulDialogRequest,bstrLanguage,ulDialogNumber,ReasonCode,pulSessionResult) )
#define IBDA_ConditionalAccessEx_CreateDialogRequestNumber(This,pulDialogRequestNumber)     ( (This)->lpVtbl -> CreateDialogRequestNumber(This,pulDialogRequestNumber) )
#endif
#endif
#define SID_BDA_ConditionalAccessEx __uuidof(IBDA_ConditionalAccessEx)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0032_v0_0_s_ifspec;
#ifndef __IBDA_ISDBConditionalAccess_INTERFACE_DEFINED__
#define __IBDA_ISDBConditionalAccess_INTERFACE_DEFINED__
extern const IID IID_IBDA_ISDBConditionalAccess;
typedef struct IBDA_ISDBConditionalAccessVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_ISDBConditionalAccess * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_ISDBConditionalAccess * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_ISDBConditionalAccess * This);
	HRESULT(STDMETHODCALLTYPE * SetIsdbCasRequest) (IBDA_ISDBConditionalAccess * This, ULONG ulRequestId, ULONG ulcbRequestBufferLen, BYTE * pbRequestBuffer);
	END_INTERFACE
} IBDA_ISDBConditionalAccessVtbl;
interface IBDA_ISDBConditionalAccess
{
	CONST_VTBL struct IBDA_ISDBConditionalAccessVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_ISDBConditionalAccess_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_ISDBConditionalAccess_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_ISDBConditionalAccess_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_ISDBConditionalAccess_SetIsdbCasRequest(This,ulRequestId,ulcbRequestBufferLen,pbRequestBuffer)     ( (This)->lpVtbl -> SetIsdbCasRequest(This,ulRequestId,ulcbRequestBufferLen,pbRequestBuffer) )
#endif
#endif
#define SID_BDA_ISDBConditionalAccess __uuidof(IBDA_ISDBConditionalAccess)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0033_v0_0_s_ifspec;
#ifndef __IBDA_EventingService_INTERFACE_DEFINED__
#define __IBDA_EventingService_INTERFACE_DEFINED__
extern const IID IID_IBDA_EventingService;
typedef struct IBDA_EventingServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_EventingService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_EventingService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_EventingService * This);
	HRESULT(STDMETHODCALLTYPE * CompleteEvent) (IBDA_EventingService * This, ULONG ulEventID, ULONG ulEventResult);
	END_INTERFACE
} IBDA_EventingServiceVtbl;
interface IBDA_EventingService
{
	CONST_VTBL struct IBDA_EventingServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_EventingService_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_EventingService_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_EventingService_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_EventingService_CompleteEvent(This,ulEventID,ulEventResult)     ( (This)->lpVtbl -> CompleteEvent(This,ulEventID,ulEventResult) )
#endif
#endif
#define SID_BDA_EventingService __uuidof(IBDA_EventingService)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0034_v0_0_s_ifspec;
#ifndef __IBDA_AUX_INTERFACE_DEFINED__
#define __IBDA_AUX_INTERFACE_DEFINED__
extern const IID IID_IBDA_AUX;
typedef struct IBDA_AUXVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_AUX * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_AUX * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_AUX * This);
	HRESULT(STDMETHODCALLTYPE * QueryCapabilities) (IBDA_AUX * This, DWORD * pdwNumAuxInputsBSTR);
	HRESULT(STDMETHODCALLTYPE * EnumCapability) (IBDA_AUX * This, DWORD dwIndex, DWORD * dwInputID, GUID * pConnectorType, DWORD * ConnTypeNum, DWORD * NumVideoStds, ULONGLONG * AnalogStds);
	END_INTERFACE
} IBDA_AUXVtbl;
interface IBDA_AUX
{
	CONST_VTBL struct IBDA_AUXVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_AUX_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_AUX_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_AUX_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_AUX_QueryCapabilities(This,pdwNumAuxInputsBSTR)     ( (This)->lpVtbl -> QueryCapabilities(This,pdwNumAuxInputsBSTR) )
#define IBDA_AUX_EnumCapability(This,dwIndex,dwInputID,pConnectorType,ConnTypeNum,NumVideoStds,AnalogStds)     ( (This)->lpVtbl -> EnumCapability(This,dwIndex,dwInputID,pConnectorType,ConnTypeNum,NumVideoStds,AnalogStds) )
#endif
#endif
DEFINE_GUID(PBDA_AUX_CONNECTOR_TYPE_SVideo, 0xa0e905f4, 0x24c9, 0x4a54, 0xb7, 0x61, 0x21, 0x33, 0x55, 0xef, 0xc1, 0x3A);
DEFINE_GUID(PBDA_AUX_CONNECTOR_TYPE_Composite, 0xf6298b4c, 0xc725, 0x4d42, 0x84, 0x9b, 0x41, 0x0b, 0xbb, 0x14, 0xea, 0x62);
#define SID_BDA_AUX __uuidof(IBDA_AUX)
DEFINE_GUID(CLSID_PBDA_AUX_DATA_TYPE, 0xfd456373, 0x3323, 0x4090, 0xad, 0xca, 0x8e, 0xd4, 0x5f, 0x55, 0xcf, 0x10);
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0035_v0_0_s_ifspec;
#ifndef __IBDA_Encoder_INTERFACE_DEFINED__
#define __IBDA_Encoder_INTERFACE_DEFINED__
extern const IID IID_IBDA_Encoder;
typedef struct IBDA_EncoderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_Encoder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_Encoder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_Encoder * This);
	HRESULT(STDMETHODCALLTYPE * QueryCapabilities) (IBDA_Encoder * This, DWORD * NumAudioFmts, DWORD * NumVideoFmts);
	HRESULT(STDMETHODCALLTYPE * EnumAudioCapability) (IBDA_Encoder * This, DWORD FmtIndex, DWORD * MethodID, DWORD * AlgorithmType, DWORD * SamplingRate, DWORD * BitDepth, DWORD * NumChannels);
	HRESULT(STDMETHODCALLTYPE * EnumVideoCapability) (IBDA_Encoder * This, DWORD FmtIndex, DWORD * MethodID, DWORD * AlgorithmType, DWORD * VerticalSize, DWORD * HorizontalSize, DWORD * AspectRatio, DWORD * FrameRateCode, DWORD * ProgressiveSequence);
	HRESULT(STDMETHODCALLTYPE * SetParameters) (IBDA_Encoder * This, DWORD AudioBitrateMode, DWORD AudioBitrate, DWORD AudioMethodID, DWORD AudioProgram, DWORD VideoBitrateMode, DWORD VideoBitrate, DWORD VideoMethodID);
	HRESULT(STDMETHODCALLTYPE * GetState) (IBDA_Encoder * This, DWORD * AudioBitrateMax, DWORD * AudioBitrateMin, DWORD * AudioBitrateMode, DWORD * AudioBitrateStepping, DWORD * AudioBitrate, DWORD * AudioMethodID, DWORD * AvailableAudioPrograms, DWORD * AudioProgram, DWORD * VideoBitrateMax, DWORD * VideoBitrateMin, DWORD * VideoBitrateMode, DWORD * VideoBitrate, DWORD * VideoBitrateStepping, DWORD * VideoMethodID, DWORD * SignalSourceID, ULONGLONG * SignalFormat, BOOL * SignalLock, LONG * SignalLevel, DWORD * SignalToNoiseRatio);
	END_INTERFACE
} IBDA_EncoderVtbl;
interface IBDA_Encoder
{
	CONST_VTBL struct IBDA_EncoderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_Encoder_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_Encoder_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_Encoder_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_Encoder_QueryCapabilities(This,NumAudioFmts,NumVideoFmts)     ( (This)->lpVtbl -> QueryCapabilities(This,NumAudioFmts,NumVideoFmts) )
#define IBDA_Encoder_EnumAudioCapability(This,FmtIndex,MethodID,AlgorithmType,SamplingRate,BitDepth,NumChannels)     ( (This)->lpVtbl -> EnumAudioCapability(This,FmtIndex,MethodID,AlgorithmType,SamplingRate,BitDepth,NumChannels) )
#define IBDA_Encoder_EnumVideoCapability(This,FmtIndex,MethodID,AlgorithmType,VerticalSize,HorizontalSize,AspectRatio,FrameRateCode,ProgressiveSequence)     ( (This)->lpVtbl -> EnumVideoCapability(This,FmtIndex,MethodID,AlgorithmType,VerticalSize,HorizontalSize,AspectRatio,FrameRateCode,ProgressiveSequence) )
#define IBDA_Encoder_SetParameters(This,AudioBitrateMode,AudioBitrate,AudioMethodID,AudioProgram,VideoBitrateMode,VideoBitrate,VideoMethodID)     ( (This)->lpVtbl -> SetParameters(This,AudioBitrateMode,AudioBitrate,AudioMethodID,AudioProgram,VideoBitrateMode,VideoBitrate,VideoMethodID) )
#define IBDA_Encoder_GetState(This,AudioBitrateMax,AudioBitrateMin,AudioBitrateMode,AudioBitrateStepping,AudioBitrate,AudioMethodID,AvailableAudioPrograms,AudioProgram,VideoBitrateMax,VideoBitrateMin,VideoBitrateMode,VideoBitrate,VideoBitrateStepping,VideoMethodID,SignalSourceID,SignalFormat,SignalLock,SignalLevel,SignalToNoiseRatio)     ( (This)->lpVtbl -> GetState(This,AudioBitrateMax,AudioBitrateMin,AudioBitrateMode,AudioBitrateStepping,AudioBitrate,AudioMethodID,AvailableAudioPrograms,AudioProgram,VideoBitrateMax,VideoBitrateMin,VideoBitrateMode,VideoBitrate,VideoBitrateStepping,VideoMethodID,SignalSourceID,SignalFormat,SignalLock,SignalLevel,SignalToNoiseRatio) )
#endif
#endif
#define SID_BDA_Encoder __uuidof(IBDA_Encoder)
DEFINE_GUID(CLSID_PBDA_Encoder_DATA_TYPE, 0x728fd6bc, 0x5546, 0x4716, 0xb1, 0x03, 0xf8, 0x99, 0xf5, 0xa1, 0xfa, 0x68);
#define PBDA_Encoder_Audio_AlgorithmType_MPEG1LayerII    0x00000000
#define PBDA_Encoder_Audio_AlgorithmType_AC3             0x00000001
#define PBDA_Encoder_Video_MPEG2PartII                   0x00000000
#define PBDA_Encoder_Video_MPEG4Part10                   0x00000001
#define PBDA_Encoder_Video_AVC                           0x00000001
#define PBDA_Encoder_Video_H264                          0x00000001
#define PBDA_Encoder_BitrateMode_Constant                0x00000001
#define PBDA_Encoder_BitrateMode_Variable                0x00000002
#define PBDA_Encoder_BitrateMode_Average                 0x00000003
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0036_v0_0_s_ifspec;
#ifndef __IBDA_FDC_INTERFACE_DEFINED__
#define __IBDA_FDC_INTERFACE_DEFINED__
#define SID_BDA_FDC __uuidof(IBDA_FDC
DEFINE_GUID(CLSID_PBDA_FDC_DATA_TYPE, 0xe7dbf9a0, 0x22ab, 0x4047, 0x8e, 0x67, 0xef, 0x9a, 0xd5, 0x4, 0xe7, 0x29);
extern const IID IID_IBDA_FDC;
typedef struct IBDA_FDCVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_FDC * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_FDC * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_FDC * This);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IBDA_FDC * This, DWORD * CurrentBitrate, BOOL * CarrierLock, DWORD * CurrentFrequency, BOOL * CurrentSpectrumInversion, BSTR * CurrentPIDList, BSTR * CurrentTIDList, BOOL * Overflow);
	HRESULT(STDMETHODCALLTYPE * RequestTables) (IBDA_FDC * This, BSTR TableIDs);
	HRESULT(STDMETHODCALLTYPE * AddPid) (IBDA_FDC * This, BSTR PidsToAdd, DWORD * RemainingFilterEntries);
	HRESULT(STDMETHODCALLTYPE * RemovePid) (IBDA_FDC * This, BSTR PidsToRemove);
	HRESULT(STDMETHODCALLTYPE * AddTid) (IBDA_FDC * This, BSTR TidsToAdd, BSTR * CurrentTidList);
	HRESULT(STDMETHODCALLTYPE * RemoveTid) (IBDA_FDC * This, BSTR TidsToRemove);
	HRESULT(STDMETHODCALLTYPE * GetTableSection) (IBDA_FDC * This, DWORD * Pid, DWORD MaxBufferSize, DWORD * ActualSize, BYTE * SecBuffer);
	END_INTERFACE
} IBDA_FDCVtbl;
interface IBDA_FDC
{
	CONST_VTBL struct IBDA_FDCVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_FDC_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_FDC_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_FDC_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_FDC_GetStatus(This,CurrentBitrate,CarrierLock,CurrentFrequency,CurrentSpectrumInversion,CurrentPIDList,CurrentTIDList,Overflow)     ( (This)->lpVtbl -> GetStatus(This,CurrentBitrate,CarrierLock,CurrentFrequency,CurrentSpectrumInversion,CurrentPIDList,CurrentTIDList,Overflow) )
#define IBDA_FDC_RequestTables(This,TableIDs)     ( (This)->lpVtbl -> RequestTables(This,TableIDs) )
#define IBDA_FDC_AddPid(This,PidsToAdd,RemainingFilterEntries)     ( (This)->lpVtbl -> AddPid(This,PidsToAdd,RemainingFilterEntries) )
#define IBDA_FDC_RemovePid(This,PidsToRemove)     ( (This)->lpVtbl -> RemovePid(This,PidsToRemove) )
#define IBDA_FDC_AddTid(This,TidsToAdd,CurrentTidList)     ( (This)->lpVtbl -> AddTid(This,TidsToAdd,CurrentTidList) )
#define IBDA_FDC_RemoveTid(This,TidsToRemove)     ( (This)->lpVtbl -> RemoveTid(This,TidsToRemove) )
#define IBDA_FDC_GetTableSection(This,Pid,MaxBufferSize,ActualSize,SecBuffer)     ( (This)->lpVtbl -> GetTableSection(This,Pid,MaxBufferSize,ActualSize,SecBuffer) )
#endif
#endif
#ifndef __IBDA_GuideDataDeliveryService_INTERFACE_DEFINED__
#define __IBDA_GuideDataDeliveryService_INTERFACE_DEFINED__
extern const IID IID_IBDA_GuideDataDeliveryService;
typedef struct IBDA_GuideDataDeliveryServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_GuideDataDeliveryService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_GuideDataDeliveryService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_GuideDataDeliveryService * This);
	HRESULT(STDMETHODCALLTYPE * GetGuideDataType) (IBDA_GuideDataDeliveryService * This, GUID * pguidDataType);
	HRESULT(STDMETHODCALLTYPE * GetGuideData) (IBDA_GuideDataDeliveryService * This, ULONG * pulcbBufferLen, BYTE * pbBuffer, ULONG * pulGuideDataPercentageProgress);
	HRESULT(STDMETHODCALLTYPE * RequestGuideDataUpdate) (IBDA_GuideDataDeliveryService * This);
	HRESULT(STDMETHODCALLTYPE * GetTuneXmlFromServiceIdx) (IBDA_GuideDataDeliveryService * This, ULONG64 ul64ServiceIdx, BSTR * pbstrTuneXml);
	HRESULT(STDMETHODCALLTYPE * GetServices) (IBDA_GuideDataDeliveryService * This, ULONG * pulcbBufferLen, BYTE * pbBuffer);
	HRESULT(STDMETHODCALLTYPE * GetServiceInfoFromTuneXml) (IBDA_GuideDataDeliveryService * This, BSTR bstrTuneXml, BSTR * pbstrServiceDescription);
	END_INTERFACE
} IBDA_GuideDataDeliveryServiceVtbl;
interface IBDA_GuideDataDeliveryService
{
	CONST_VTBL struct IBDA_GuideDataDeliveryServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_GuideDataDeliveryService_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_GuideDataDeliveryService_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_GuideDataDeliveryService_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_GuideDataDeliveryService_GetGuideDataType(This,pguidDataType)     ( (This)->lpVtbl -> GetGuideDataType(This,pguidDataType) )
#define IBDA_GuideDataDeliveryService_GetGuideData(This,pulcbBufferLen,pbBuffer,pulGuideDataPercentageProgress)     ( (This)->lpVtbl -> GetGuideData(This,pulcbBufferLen,pbBuffer,pulGuideDataPercentageProgress) )
#define IBDA_GuideDataDeliveryService_RequestGuideDataUpdate(This)     ( (This)->lpVtbl -> RequestGuideDataUpdate(This) )
#define IBDA_GuideDataDeliveryService_GetTuneXmlFromServiceIdx(This,ul64ServiceIdx,pbstrTuneXml)     ( (This)->lpVtbl -> GetTuneXmlFromServiceIdx(This,ul64ServiceIdx,pbstrTuneXml) )
#define IBDA_GuideDataDeliveryService_GetServices(This,pulcbBufferLen,pbBuffer)     ( (This)->lpVtbl -> GetServices(This,pulcbBufferLen,pbBuffer) )
#define IBDA_GuideDataDeliveryService_GetServiceInfoFromTuneXml(This,bstrTuneXml,pbstrServiceDescription)     ( (This)->lpVtbl -> GetServiceInfoFromTuneXml(This,bstrTuneXml,pbstrServiceDescription) )
#endif
#endif
#define SID_BDA_GuideDataDeliveryService  __uuidof(IBDA_GuideDataDeliveryService)
DEFINE_GUID(CLSID_PBDA_GDDS_DATA_TYPE, 0xC80C0DF3, 0x6052, 0x4c16, 0x9F, 0x56, 0xC4, 0x4C, 0x21, 0xF7, 0x3C, 0x45);
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0038_v0_0_s_ifspec;
#ifndef __IBDA_DRMService_INTERFACE_DEFINED__
#define __IBDA_DRMService_INTERFACE_DEFINED__
extern const IID IID_IBDA_DRMService;
typedef struct IBDA_DRMServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_DRMService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_DRMService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_DRMService * This);
	HRESULT(STDMETHODCALLTYPE * SetDRM) (IBDA_DRMService * This, GUID * puuidNewDrm);
	HRESULT(STDMETHODCALLTYPE * GetDRMStatus) (IBDA_DRMService * This, BSTR * pbstrDrmUuidList, GUID * DrmUuid);
	END_INTERFACE
} IBDA_DRMServiceVtbl;
interface IBDA_DRMService
{
	CONST_VTBL struct IBDA_DRMServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_DRMService_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_DRMService_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_DRMService_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_DRMService_SetDRM(This,puuidNewDrm)     ( (This)->lpVtbl -> SetDRM(This,puuidNewDrm) )
#define IBDA_DRMService_GetDRMStatus(This,pbstrDrmUuidList,DrmUuid)     ( (This)->lpVtbl -> GetDRMStatus(This,pbstrDrmUuidList,DrmUuid) )
#endif
#endif
#define SID_BDA_DRMService __uuidof(IBDA_DRMService)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0039_v0_0_s_ifspec;
#ifndef __IBDA_WMDRMSession_INTERFACE_DEFINED__
#define __IBDA_WMDRMSession_INTERFACE_DEFINED__
extern const IID IID_IBDA_WMDRMSession;
typedef struct IBDA_WMDRMSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_WMDRMSession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_WMDRMSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_WMDRMSession * This);
	HRESULT(STDMETHODCALLTYPE * GetStatus) (IBDA_WMDRMSession * This, ULONG * MaxCaptureToken, ULONG * MaxStreamingPid, ULONG * MaxLicense, ULONG * MinSecurityLevel, ULONG * RevInfoSequenceNumber, ULONGLONG * RevInfoIssuedTime, ULONG * RevInfoTTL, ULONG * RevListVersion, ULONG * ulState);
	HRESULT(STDMETHODCALLTYPE * SetRevInfo) (IBDA_WMDRMSession * This, ULONG ulRevInfoLen, BYTE * pbRevInfo);
	HRESULT(STDMETHODCALLTYPE * SetCrl) (IBDA_WMDRMSession * This, ULONG ulCrlLen, BYTE * pbCrlLen);
	HRESULT(STDMETHODCALLTYPE * TransactMessage) (IBDA_WMDRMSession * This, ULONG ulcbRequest, BYTE * pbRequest, ULONG * pulcbResponse, BYTE * pbResponse);
	HRESULT(STDMETHODCALLTYPE * GetLicense) (IBDA_WMDRMSession * This, GUID * uuidKey, ULONG * pulPackageLen, BYTE * pbPackage);
	HRESULT(STDMETHODCALLTYPE * ReissueLicense) (IBDA_WMDRMSession * This, GUID * uuidKey);
	HRESULT(STDMETHODCALLTYPE * RenewLicense) (IBDA_WMDRMSession * This, ULONG ulInXmrLicenseLen, BYTE * pbInXmrLicense, ULONG ulEntitlementTokenLen, BYTE * pbEntitlementToken, ULONG * pulDescrambleStatus, ULONG * pulOutXmrLicenseLen, BYTE * pbOutXmrLicense);
	HRESULT(STDMETHODCALLTYPE * GetKeyInfo) (IBDA_WMDRMSession * This, ULONG * pulKeyInfoLen, BYTE * pbKeyInfo);
	END_INTERFACE
} IBDA_WMDRMSessionVtbl;
interface IBDA_WMDRMSession
{
	CONST_VTBL struct IBDA_WMDRMSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_WMDRMSession_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_WMDRMSession_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_WMDRMSession_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_WMDRMSession_GetStatus(This,MaxCaptureToken,MaxStreamingPid,MaxLicense,MinSecurityLevel,RevInfoSequenceNumber,RevInfoIssuedTime,RevInfoTTL,RevListVersion,ulState)     ( (This)->lpVtbl -> GetStatus(This,MaxCaptureToken,MaxStreamingPid,MaxLicense,MinSecurityLevel,RevInfoSequenceNumber,RevInfoIssuedTime,RevInfoTTL,RevListVersion,ulState) )
#define IBDA_WMDRMSession_SetRevInfo(This,ulRevInfoLen,pbRevInfo)     ( (This)->lpVtbl -> SetRevInfo(This,ulRevInfoLen,pbRevInfo) )
#define IBDA_WMDRMSession_SetCrl(This,ulCrlLen,pbCrlLen)     ( (This)->lpVtbl -> SetCrl(This,ulCrlLen,pbCrlLen) )
#define IBDA_WMDRMSession_TransactMessage(This,ulcbRequest,pbRequest,pulcbResponse,pbResponse)     ( (This)->lpVtbl -> TransactMessage(This,ulcbRequest,pbRequest,pulcbResponse,pbResponse) )
#define IBDA_WMDRMSession_GetLicense(This,uuidKey,pulPackageLen,pbPackage)     ( (This)->lpVtbl -> GetLicense(This,uuidKey,pulPackageLen,pbPackage) )
#define IBDA_WMDRMSession_ReissueLicense(This,uuidKey)     ( (This)->lpVtbl -> ReissueLicense(This,uuidKey) )
#define IBDA_WMDRMSession_RenewLicense(This,ulInXmrLicenseLen,pbInXmrLicense,ulEntitlementTokenLen,pbEntitlementToken,pulDescrambleStatus,pulOutXmrLicenseLen,pbOutXmrLicense)     ( (This)->lpVtbl -> RenewLicense(This,ulInXmrLicenseLen,pbInXmrLicense,ulEntitlementTokenLen,pbEntitlementToken,pulDescrambleStatus,pulOutXmrLicenseLen,pbOutXmrLicense) )
#define IBDA_WMDRMSession_GetKeyInfo(This,pulKeyInfoLen,pbKeyInfo)     ( (This)->lpVtbl -> GetKeyInfo(This,pulKeyInfoLen,pbKeyInfo) )
#endif
#endif
#define SID_BDA_WMDRMSession __uuidof(IBDA_WMDRMSession)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0040_v0_0_s_ifspec;
#ifndef __IBDA_WMDRMTuner_INTERFACE_DEFINED__
#define __IBDA_WMDRMTuner_INTERFACE_DEFINED__
extern const IID IID_IBDA_WMDRMTuner;
typedef struct IBDA_WMDRMTunerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_WMDRMTuner * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_WMDRMTuner * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_WMDRMTuner * This);
	HRESULT(STDMETHODCALLTYPE * PurchaseEntitlement) (IBDA_WMDRMTuner * This, ULONG ulDialogRequest, BSTR bstrLanguage, ULONG ulPurchaseTokenLen, BYTE * pbPurchaseToken, ULONG * pulDescrambleStatus, ULONG * pulCaptureTokenLen, BYTE * pbCaptureToken);
	HRESULT(STDMETHODCALLTYPE * CancelCaptureToken) (IBDA_WMDRMTuner * This, ULONG ulCaptureTokenLen, BYTE * pbCaptureToken);
	HRESULT(STDMETHODCALLTYPE * SetPidProtection) (IBDA_WMDRMTuner * This, ULONG ulPid, GUID * uuidKey);
	HRESULT(STDMETHODCALLTYPE * GetPidProtection) (IBDA_WMDRMTuner * This, ULONG pulPid, GUID * uuidKey);
	HRESULT(STDMETHODCALLTYPE * SetSyncValue) (IBDA_WMDRMTuner * This, ULONG ulSyncValue);
	HRESULT(STDMETHODCALLTYPE * GetStartCodeProfile) (IBDA_WMDRMTuner * This, ULONG * pulStartCodeProfileLen, BYTE * pbStartCodeProfile);
	END_INTERFACE
} IBDA_WMDRMTunerVtbl;
interface IBDA_WMDRMTuner
{
	CONST_VTBL struct IBDA_WMDRMTunerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_WMDRMTuner_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_WMDRMTuner_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_WMDRMTuner_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_WMDRMTuner_PurchaseEntitlement(This,ulDialogRequest,bstrLanguage,ulPurchaseTokenLen,pbPurchaseToken,pulDescrambleStatus,pulCaptureTokenLen,pbCaptureToken)     ( (This)->lpVtbl -> PurchaseEntitlement(This,ulDialogRequest,bstrLanguage,ulPurchaseTokenLen,pbPurchaseToken,pulDescrambleStatus,pulCaptureTokenLen,pbCaptureToken) )
#define IBDA_WMDRMTuner_CancelCaptureToken(This,ulCaptureTokenLen,pbCaptureToken)     ( (This)->lpVtbl -> CancelCaptureToken(This,ulCaptureTokenLen,pbCaptureToken) )
#define IBDA_WMDRMTuner_SetPidProtection(This,ulPid,uuidKey)     ( (This)->lpVtbl -> SetPidProtection(This,ulPid,uuidKey) )
#define IBDA_WMDRMTuner_GetPidProtection(This,pulPid,uuidKey)     ( (This)->lpVtbl -> GetPidProtection(This,pulPid,uuidKey) )
#define IBDA_WMDRMTuner_SetSyncValue(This,ulSyncValue)     ( (This)->lpVtbl -> SetSyncValue(This,ulSyncValue) )
#define IBDA_WMDRMTuner_GetStartCodeProfile(This,pulStartCodeProfileLen,pbStartCodeProfile)     ( (This)->lpVtbl -> GetStartCodeProfile(This,pulStartCodeProfileLen,pbStartCodeProfile) )
#endif
#endif
#define SID_BDA_WMDRMTuner __uuidof(IBDA_WMDRMTuner)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0041_v0_0_s_ifspec;
#ifndef __IBDA_DRIDRMService_INTERFACE_DEFINED__
#define __IBDA_DRIDRMService_INTERFACE_DEFINED__
extern const IID IID_IBDA_DRIDRMService;
typedef struct IBDA_DRIDRMServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_DRIDRMService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_DRIDRMService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_DRIDRMService * This);
	HRESULT(STDMETHODCALLTYPE * SetDRM) (IBDA_DRIDRMService * This, BSTR bstrNewDrm);
	HRESULT(STDMETHODCALLTYPE * GetDRMStatus) (IBDA_DRIDRMService * This, BSTR * pbstrDrmUuidList, GUID * DrmUuid);
	HRESULT(STDMETHODCALLTYPE * GetPairingStatus) (IBDA_DRIDRMService * This, BDA_DrmPairingError * penumPairingStatus);
	END_INTERFACE
} IBDA_DRIDRMServiceVtbl;
interface IBDA_DRIDRMService
{
	CONST_VTBL struct IBDA_DRIDRMServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_DRIDRMService_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_DRIDRMService_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_DRIDRMService_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_DRIDRMService_SetDRM(This,bstrNewDrm)     ( (This)->lpVtbl -> SetDRM(This,bstrNewDrm) )
#define IBDA_DRIDRMService_GetDRMStatus(This,pbstrDrmUuidList,DrmUuid)     ( (This)->lpVtbl -> GetDRMStatus(This,pbstrDrmUuidList,DrmUuid) )
#define IBDA_DRIDRMService_GetPairingStatus(This,penumPairingStatus)     ( (This)->lpVtbl -> GetPairingStatus(This,penumPairingStatus) )
#endif
#endif
#define SID_BDA_DRIDRMService __uuidof(IBDA_DRIDRMService)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0042_v0_0_s_ifspec;
#ifndef __IBDA_DRIWMDRMSession_INTERFACE_DEFINED__
#define __IBDA_DRIWMDRMSession_INTERFACE_DEFINED__
extern const IID IID_IBDA_DRIWMDRMSession;
typedef struct IBDA_DRIWMDRMSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_DRIWMDRMSession * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_DRIWMDRMSession * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_DRIWMDRMSession * This);
	HRESULT(STDMETHODCALLTYPE * AcknowledgeLicense) (IBDA_DRIWMDRMSession * This, HRESULT hrLicenseAck);
	HRESULT(STDMETHODCALLTYPE * ProcessLicenseChallenge) (IBDA_DRIWMDRMSession * This, DWORD dwcbLicenseMessage, BYTE * pbLicenseMessage, DWORD * pdwcbLicenseResponse, BYTE ** ppbLicenseResponse);
	HRESULT(STDMETHODCALLTYPE * ProcessRegistrationChallenge) (IBDA_DRIWMDRMSession * This, DWORD dwcbRegistrationMessage, BYTE * pbRegistrationMessage, DWORD * pdwcbRegistrationResponse, BYTE ** ppbRegistrationResponse);
	HRESULT(STDMETHODCALLTYPE * SetRevInfo) (IBDA_DRIWMDRMSession * This, DWORD dwRevInfoLen, BYTE * pbRevInfo, DWORD * pdwResponse);
	HRESULT(STDMETHODCALLTYPE * SetCrl) (IBDA_DRIWMDRMSession * This, DWORD dwCrlLen, BYTE * pbCrlLen, DWORD * pdwResponse);
	HRESULT(STDMETHODCALLTYPE * GetHMSAssociationData) (IBDA_DRIWMDRMSession * This);
	HRESULT(STDMETHODCALLTYPE * GetLastCardeaError) (IBDA_DRIWMDRMSession * This, DWORD * pdwError);
	END_INTERFACE
} IBDA_DRIWMDRMSessionVtbl;
interface IBDA_DRIWMDRMSession
{
	CONST_VTBL struct IBDA_DRIWMDRMSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_DRIWMDRMSession_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_DRIWMDRMSession_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_DRIWMDRMSession_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_DRIWMDRMSession_AcknowledgeLicense(This,hrLicenseAck)     ( (This)->lpVtbl -> AcknowledgeLicense(This,hrLicenseAck) )
#define IBDA_DRIWMDRMSession_ProcessLicenseChallenge(This,dwcbLicenseMessage,pbLicenseMessage,pdwcbLicenseResponse,ppbLicenseResponse)     ( (This)->lpVtbl -> ProcessLicenseChallenge(This,dwcbLicenseMessage,pbLicenseMessage,pdwcbLicenseResponse,ppbLicenseResponse) )
#define IBDA_DRIWMDRMSession_ProcessRegistrationChallenge(This,dwcbRegistrationMessage,pbRegistrationMessage,pdwcbRegistrationResponse,ppbRegistrationResponse)     ( (This)->lpVtbl -> ProcessRegistrationChallenge(This,dwcbRegistrationMessage,pbRegistrationMessage,pdwcbRegistrationResponse,ppbRegistrationResponse) )
#define IBDA_DRIWMDRMSession_SetRevInfo(This,dwRevInfoLen,pbRevInfo,pdwResponse)     ( (This)->lpVtbl -> SetRevInfo(This,dwRevInfoLen,pbRevInfo,pdwResponse) )
#define IBDA_DRIWMDRMSession_SetCrl(This,dwCrlLen,pbCrlLen,pdwResponse)     ( (This)->lpVtbl -> SetCrl(This,dwCrlLen,pbCrlLen,pdwResponse) )
#define IBDA_DRIWMDRMSession_GetHMSAssociationData(This)     ( (This)->lpVtbl -> GetHMSAssociationData(This) )
#define IBDA_DRIWMDRMSession_GetLastCardeaError(This,pdwError)     ( (This)->lpVtbl -> GetLastCardeaError(This,pdwError) )
#endif
#endif
#define SID_BDA_DRIWMDRMSession __uuidof(IBDA_DRIWMDRMSession)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0043_v0_0_s_ifspec;
#ifndef __IBDA_MUX_INTERFACE_DEFINED__
#define __IBDA_MUX_INTERFACE_DEFINED__
extern const IID IID_IBDA_MUX;
typedef struct IBDA_MUXVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_MUX * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_MUX * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_MUX * This);
	HRESULT(STDMETHODCALLTYPE * SetPidList) (IBDA_MUX * This, ULONG ulPidListCount, BDA_MUX_PIDLISTITEM * pbPidListBuffer);
	HRESULT(STDMETHODCALLTYPE * GetPidList) (IBDA_MUX * This, ULONG * pulPidListCount, BDA_MUX_PIDLISTITEM * pbPidListBuffer);
	END_INTERFACE
} IBDA_MUXVtbl;
interface IBDA_MUX
{
	CONST_VTBL struct IBDA_MUXVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_MUX_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_MUX_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_MUX_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_MUX_SetPidList(This,ulPidListCount,pbPidListBuffer)     ( (This)->lpVtbl -> SetPidList(This,ulPidListCount,pbPidListBuffer) )
#define IBDA_MUX_GetPidList(This,pulPidListCount,pbPidListBuffer)     ( (This)->lpVtbl -> GetPidList(This,pulPidListCount,pbPidListBuffer) )
#endif
#endif
#define SID_BDA_MUX __uuidof(IBDA_MUX)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0044_v0_0_s_ifspec;
#ifndef __IBDA_TransportStreamSelector_INTERFACE_DEFINED__
#define __IBDA_TransportStreamSelector_INTERFACE_DEFINED__
extern const IID IID_IBDA_TransportStreamSelector;
typedef struct IBDA_TransportStreamSelectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_TransportStreamSelector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_TransportStreamSelector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_TransportStreamSelector * This);
	HRESULT(STDMETHODCALLTYPE * SetTSID) (IBDA_TransportStreamSelector * This, USHORT usTSID);
	HRESULT(STDMETHODCALLTYPE * GetTSInformation) (IBDA_TransportStreamSelector * This, ULONG * pulTSInformationBufferLen, BYTE * pbTSInformationBuffer);
	END_INTERFACE
} IBDA_TransportStreamSelectorVtbl;
interface IBDA_TransportStreamSelector
{
	CONST_VTBL struct IBDA_TransportStreamSelectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_TransportStreamSelector_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_TransportStreamSelector_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_TransportStreamSelector_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_TransportStreamSelector_SetTSID(This,usTSID)     ( (This)->lpVtbl -> SetTSID(This,usTSID) )
#define IBDA_TransportStreamSelector_GetTSInformation(This,pulTSInformationBufferLen,pbTSInformationBuffer)     ( (This)->lpVtbl -> GetTSInformation(This,pulTSInformationBufferLen,pbTSInformationBuffer) )
#endif
#endif
#define SID_BDA_TransportStreamSelector __uuidof(IBDA_TransportStreamSelector)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0045_v0_0_s_ifspec;
#ifndef __IBDA_UserActivityService_INTERFACE_DEFINED__
#define __IBDA_UserActivityService_INTERFACE_DEFINED__
extern const IID IID_IBDA_UserActivityService;
typedef struct IBDA_UserActivityServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBDA_UserActivityService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBDA_UserActivityService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBDA_UserActivityService * This);
	HRESULT(STDMETHODCALLTYPE * SetCurrentTunerUseReason) (IBDA_UserActivityService * This, DWORD dwUseReason);
	HRESULT(STDMETHODCALLTYPE * GetUserActivityInterval) (IBDA_UserActivityService * This, DWORD * pdwActivityInterval);
	HRESULT(STDMETHODCALLTYPE * UserActivityDetected) (IBDA_UserActivityService * This);
	END_INTERFACE
} IBDA_UserActivityServiceVtbl;
interface IBDA_UserActivityService
{
	CONST_VTBL struct IBDA_UserActivityServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBDA_UserActivityService_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBDA_UserActivityService_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) )
#define IBDA_UserActivityService_Release(This)     ( (This)->lpVtbl -> Release(This) )
#define IBDA_UserActivityService_SetCurrentTunerUseReason(This,dwUseReason)     ( (This)->lpVtbl -> SetCurrentTunerUseReason(This,dwUseReason) )
#define IBDA_UserActivityService_GetUserActivityInterval(This,pdwActivityInterval)     ( (This)->lpVtbl -> GetUserActivityInterval(This,pdwActivityInterval) )
#define IBDA_UserActivityService_UserActivityDetected(This)     ( (This)->lpVtbl -> UserActivityDetected(This) )
#endif
#endif
#define SID_BDA_UserActivityService __uuidof(IBDA_UserActivityService)
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdaiface_0000_0046_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif
