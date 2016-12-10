/*+@@file@@----------------------------------------------------------------*//*!
 \file		mbnapi.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 31 15:43:05 2016
 \date		Modified on Sun Jul 31 15:43:05 2016
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
#ifndef __mbnapi_h__
#define __mbnapi_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDummyMBNUCMExt_FWD_DEFINED__
#define __IDummyMBNUCMExt_FWD_DEFINED__
typedef interface IDummyMBNUCMExt IDummyMBNUCMExt;
#endif
#ifndef __IMbnInterface_FWD_DEFINED__
#define __IMbnInterface_FWD_DEFINED__
typedef interface IMbnInterface IMbnInterface;
#endif
#ifndef __IMbnSubscriberInformation_FWD_DEFINED__
#define __IMbnSubscriberInformation_FWD_DEFINED__
typedef interface IMbnSubscriberInformation IMbnSubscriberInformation;
#endif
#ifndef __IMbnInterfaceEvents_FWD_DEFINED__
#define __IMbnInterfaceEvents_FWD_DEFINED__
typedef interface IMbnInterfaceEvents IMbnInterfaceEvents;
#endif
#ifndef __IMbnSignal_FWD_DEFINED__
#define __IMbnSignal_FWD_DEFINED__
typedef interface IMbnSignal IMbnSignal;
#endif
#ifndef __IMbnSignalEvents_FWD_DEFINED__
#define __IMbnSignalEvents_FWD_DEFINED__
typedef interface IMbnSignalEvents IMbnSignalEvents;
#endif
#ifndef __IMbnPinManager_FWD_DEFINED__
#define __IMbnPinManager_FWD_DEFINED__
typedef interface IMbnPinManager IMbnPinManager;
#endif
#ifndef __IMbnPinManagerEvents_FWD_DEFINED__
#define __IMbnPinManagerEvents_FWD_DEFINED__
typedef interface IMbnPinManagerEvents IMbnPinManagerEvents;
#endif
#ifndef __IMbnPin_FWD_DEFINED__
#define __IMbnPin_FWD_DEFINED__
typedef interface IMbnPin IMbnPin;
#endif
#ifndef __IMbnPinEvents_FWD_DEFINED__
#define __IMbnPinEvents_FWD_DEFINED__
typedef interface IMbnPinEvents IMbnPinEvents;
#endif
#ifndef __IMbnRegistration_FWD_DEFINED__
#define __IMbnRegistration_FWD_DEFINED__
typedef interface IMbnRegistration IMbnRegistration;
#endif
#ifndef __IMbnRegistrationEvents_FWD_DEFINED__
#define __IMbnRegistrationEvents_FWD_DEFINED__
typedef interface IMbnRegistrationEvents IMbnRegistrationEvents;
#endif
#ifndef __IMbnConnectionContext_FWD_DEFINED__
#define __IMbnConnectionContext_FWD_DEFINED__
typedef interface IMbnConnectionContext IMbnConnectionContext;
#endif
#ifndef __IMbnConnectionContextEvents_FWD_DEFINED__
#define __IMbnConnectionContextEvents_FWD_DEFINED__
typedef interface IMbnConnectionContextEvents IMbnConnectionContextEvents;
#endif
#ifndef __IMbnConnection_FWD_DEFINED__
#define __IMbnConnection_FWD_DEFINED__
typedef interface IMbnConnection IMbnConnection;
#endif
#ifndef __IMbnConnectionEvents_FWD_DEFINED__
#define __IMbnConnectionEvents_FWD_DEFINED__
typedef interface IMbnConnectionEvents IMbnConnectionEvents;
#endif
#ifndef __IMbnConnectionProfileManager_FWD_DEFINED__
#define __IMbnConnectionProfileManager_FWD_DEFINED__
typedef interface IMbnConnectionProfileManager IMbnConnectionProfileManager;
#endif
#ifndef __IMbnConnectionProfile_FWD_DEFINED__
#define __IMbnConnectionProfile_FWD_DEFINED__
typedef interface IMbnConnectionProfile IMbnConnectionProfile;
#endif
#ifndef __IMbnConnectionProfileEvents_FWD_DEFINED__
#define __IMbnConnectionProfileEvents_FWD_DEFINED__
typedef interface IMbnConnectionProfileEvents IMbnConnectionProfileEvents;
#endif
#ifndef __IMbnSmsConfiguration_FWD_DEFINED__
#define __IMbnSmsConfiguration_FWD_DEFINED__
typedef interface IMbnSmsConfiguration IMbnSmsConfiguration;
#endif
#ifndef __IMbnSmsReadMsgPdu_FWD_DEFINED__
#define __IMbnSmsReadMsgPdu_FWD_DEFINED__
typedef interface IMbnSmsReadMsgPdu IMbnSmsReadMsgPdu;
#endif
#ifndef __IMbnSmsReadMsgTextCdma_FWD_DEFINED__
#define __IMbnSmsReadMsgTextCdma_FWD_DEFINED__
typedef interface IMbnSmsReadMsgTextCdma IMbnSmsReadMsgTextCdma;
#endif
#ifndef __IMbnSms_FWD_DEFINED__
#define __IMbnSms_FWD_DEFINED__
typedef interface IMbnSms IMbnSms;
#endif
#ifndef __IMbnSmsEvents_FWD_DEFINED__
#define __IMbnSmsEvents_FWD_DEFINED__
typedef interface IMbnSmsEvents IMbnSmsEvents;
#endif
#ifndef __IMbnServiceActivation_FWD_DEFINED__
#define __IMbnServiceActivation_FWD_DEFINED__
typedef interface IMbnServiceActivation IMbnServiceActivation;
#endif
#ifndef __IMbnServiceActivationEvents_FWD_DEFINED__
#define __IMbnServiceActivationEvents_FWD_DEFINED__
typedef interface IMbnServiceActivationEvents IMbnServiceActivationEvents;
#endif
#ifndef __IMbnVendorSpecificOperation_FWD_DEFINED__
#define __IMbnVendorSpecificOperation_FWD_DEFINED__
typedef interface IMbnVendorSpecificOperation IMbnVendorSpecificOperation;
#endif
#ifndef __IMbnVendorSpecificEvents_FWD_DEFINED__
#define __IMbnVendorSpecificEvents_FWD_DEFINED__
typedef interface IMbnVendorSpecificEvents IMbnVendorSpecificEvents;
#endif
#ifndef __IMbnInterfaceManager_FWD_DEFINED__
#define __IMbnInterfaceManager_FWD_DEFINED__
typedef interface IMbnInterfaceManager IMbnInterfaceManager;
#endif
#ifndef __IMbnInterfaceManagerEvents_FWD_DEFINED__
#define __IMbnInterfaceManagerEvents_FWD_DEFINED__
typedef interface IMbnInterfaceManagerEvents IMbnInterfaceManagerEvents;
#endif
#ifndef __IMbnConnectionManager_FWD_DEFINED__
#define __IMbnConnectionManager_FWD_DEFINED__
typedef interface IMbnConnectionManager IMbnConnectionManager;
#endif
#ifndef __IMbnConnectionManagerEvents_FWD_DEFINED__
#define __IMbnConnectionManagerEvents_FWD_DEFINED__
typedef interface IMbnConnectionManagerEvents IMbnConnectionManagerEvents;
#endif
#ifndef __IMbnConnectionProfileManagerEvents_FWD_DEFINED__
#define __IMbnConnectionProfileManagerEvents_FWD_DEFINED__
typedef interface IMbnConnectionProfileManagerEvents IMbnConnectionProfileManagerEvents;
#endif
#ifndef __IMbnRadio_FWD_DEFINED__
#define __IMbnRadio_FWD_DEFINED__
typedef interface IMbnRadio IMbnRadio;
#endif
#ifndef __IMbnRadioEvents_FWD_DEFINED__
#define __IMbnRadioEvents_FWD_DEFINED__
typedef interface IMbnRadioEvents IMbnRadioEvents;
#endif
#ifndef __MbnConnectionProfileManager_FWD_DEFINED__
#define __MbnConnectionProfileManager_FWD_DEFINED__
typedef struct MbnConnectionProfileManager MbnConnectionProfileManager;
#endif
#ifndef __MbnInterfaceManager_FWD_DEFINED__
#define __MbnInterfaceManager_FWD_DEFINED__
typedef struct MbnInterfaceManager MbnInterfaceManager;
#endif
#ifndef __MbnConnectionManager_FWD_DEFINED__
#define __MbnConnectionManager_FWD_DEFINED__
typedef struct MbnConnectionManager MbnConnectionManager;
#endif
#include <oaidl.h>
#include <ocidl.h>
extern RPC_IF_HANDLE __MIDL_itf_mbnapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mbnapi_0000_0000_v0_0_s_ifspec;
#ifndef __IDummyMBNUCMExt_INTERFACE_DEFINED__
#define __IDummyMBNUCMExt_INTERFACE_DEFINED__
extern const IID IID_IDummyMBNUCMExt;
typedef struct IDummyMBNUCMExtVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDummyMBNUCMExt * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDummyMBNUCMExt * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDummyMBNUCMExt * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDummyMBNUCMExt * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDummyMBNUCMExt * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDummyMBNUCMExt * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDummyMBNUCMExt * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  IDummyMBNUCMExtVtbl;
interface IDummyMBNUCMExt
{
	CONST_VTBL struct IDummyMBNUCMExtVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDummyMBNUCMExt_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDummyMBNUCMExt_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDummyMBNUCMExt_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDummyMBNUCMExt_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDummyMBNUCMExt_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDummyMBNUCMExt_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDummyMBNUCMExt_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __MbnApi_LIBRARY_DEFINED__
#define __MbnApi_LIBRARY_DEFINED__
typedef DECLSPEC_UUID("DCBBBAB6-6002-4BBB-AAEE-338E368AF6FA")
enum MBN_CELLULAR_CLASS
{
	MBN_CELLULAR_CLASS_NONE = 0,
	MBN_CELLULAR_CLASS_GSM = 0x1,
	MBN_CELLULAR_CLASS_CDMA = 0x2
} MBN_CELLULAR_CLASS;
typedef DECLSPEC_UUID("83A34F4C-BDC4-11DC-A8A8-001321F1405F")
enum MBN_DATA_CLASS
{
	MBN_DATA_CLASS_NONE = 0,
	MBN_DATA_CLASS_GPRS = 0x1,
	MBN_DATA_CLASS_EDGE = 0x2,
	MBN_DATA_CLASS_UMTS = 0x4,
	MBN_DATA_CLASS_HSDPA = 0x8,
	MBN_DATA_CLASS_HSUPA = 0x10,
	MBN_DATA_CLASS_LTE = 0x20,
	MBN_DATA_CLASS_1XRTT = 0x10000,
	MBN_DATA_CLASS_1XEVDO = 0x20000,
	MBN_DATA_CLASS_1XEVDO_REVA = 0x40000,
	MBN_DATA_CLASS_1XEVDV = 0x80000,
	MBN_DATA_CLASS_3XRTT = 0x100000,
	MBN_DATA_CLASS_1XEVDO_REVB = 0x200000,
	MBN_DATA_CLASS_UMB = 0x400000,
	MBN_DATA_CLASS_CUSTOM = 0x80000000
} MBN_DATA_CLASS;
typedef DECLSPEC_UUID("5DB6A98B-BDC5-11DC-A8A8-001321F1405F")
enum MBN_BAND_CLASS
{
	MBN_BAND_CLASS_NONE = 0,
	MBN_BAND_CLASS_0 = 0x1,
	MBN_BAND_CLASS_I = 0x2,
	MBN_BAND_CLASS_II = 0x4,
	MBN_BAND_CLASS_III = 0x8,
	MBN_BAND_CLASS_IV = 0x10,
	MBN_BAND_CLASS_V = 0x20,
	MBN_BAND_CLASS_VI = 0x40,
	MBN_BAND_CLASS_VII = 0x80,
	MBN_BAND_CLASS_VIII = 0x100,
	MBN_BAND_CLASS_IX = 0x200,
	MBN_BAND_CLASS_X = 0x400,
	MBN_BAND_CLASS_XI = 0x800,
	MBN_BAND_CLASS_XII = 0x1000,
	MBN_BAND_CLASS_XIII = 0x2000,
	MBN_BAND_CLASS_XIV = 0x4000,
	MBN_BAND_CLASS_XV = 0x8000,
	MBN_BAND_CLASS_XVI = 0x10000,
	MBN_BAND_CLASS_XVII = 0x20000,
	MBN_BAND_CLASS_CUSTOM = 0x80000000
} MBN_BAND_CLASS;
typedef DECLSPEC_UUID("DCBBBAB6-6012-4BBB-AAEE-338E368AF6FA")
enum MBN_VOICE_CLASS
{
	MBN_VOICE_CLASS_NONE = 0,
	MBN_VOICE_CLASS_NO_VOICE = 0x1,
	MBN_VOICE_CLASS_SEPARATE_VOICE_DATA = 0x2,
	MBN_VOICE_CLASS_SIMULTANEOUS_VOICE_DATA = 0x3
} MBN_VOICE_CLASS;
typedef DECLSPEC_UUID("2308C1F7-BDC8-11DC-A8A8-001321F1405F")
enum MBN_CTRL_CAPS
{
	MBN_CTRL_CAPS_NONE = 0,
	MBN_CTRL_CAPS_REG_MANUAL = 0x1,
	MBN_CTRL_CAPS_HW_RADIO_SWITCH = 0x2,
	MBN_CTRL_CAPS_CDMA_MOBILE_IP = 0x4,
	MBN_CTRL_CAPS_CDMA_SIMPLE_IP = 0x8,
	MBN_CTRL_CAPS_PROTECT_UNIQUEID = 0x10
} MBN_CTRL_CAPS;
typedef DECLSPEC_UUID("E4096459-BDC8-11DC-A8A8-001321F1405F")
enum MBN_SMS_CAPS
{
	MBN_SMS_CAPS_NONE = 0,
	MBN_SMS_CAPS_PDU_RECEIVE = 0x1,
	MBN_SMS_CAPS_PDU_SEND = 0x2,
	MBN_SMS_CAPS_TEXT_RECEIVE = 0x4,
	MBN_SMS_CAPS_TEXT_SEND = 0x8
} MBN_SMS_CAPS;
typedef DECLSPEC_UUID("59C235E7-BDC9-11DC-A8A8-001321F1405F")
enum MBN_INTERFACE_CAPS_CONSTANTS
{
	MBN_DEVICEID_LEN = 18,
	MBN_MANUFACTURER_LEN = 32,
	MBN_MODEL_LEN = 32,
	MBN_FIRMWARE_LEN = 32
} MBN_INTERFACE_CAPS_CONSTANTS;
typedef DECLSPEC_UUID("CD1A4B17-BDC9-11DC-A8A8-001321F1405F")
struct MBN_INTERFACE_CAPS
{
	MBN_CELLULAR_CLASS cellularClass;
	MBN_VOICE_CLASS voiceClass;
	ULONG dataClass;
	BSTR customDataClass;
	ULONG gsmBandClass;
	ULONG cdmaBandClass;
	BSTR customBandClass;
	ULONG smsCaps;
	ULONG controlCaps;
	BSTR deviceID;
	BSTR manufacturer;
	BSTR model;
	BSTR firmwareInfo;
} MBN_INTERFACE_CAPS;
typedef DECLSPEC_UUID("DCBBBAB6-6003-4BBB-AAEE-338E368AF6FA")
enum MBN_READY_STATE
{
	MBN_READY_STATE_OFF = 0,
	MBN_READY_STATE_INITIALIZED = (MBN_READY_STATE_OFF + 1),
	MBN_READY_STATE_SIM_NOT_INSERTED = (MBN_READY_STATE_INITIALIZED + 1),
	MBN_READY_STATE_BAD_SIM = (MBN_READY_STATE_SIM_NOT_INSERTED + 1),
	MBN_READY_STATE_FAILURE = (MBN_READY_STATE_BAD_SIM + 1),
	MBN_READY_STATE_NOT_ACTIVATED = (MBN_READY_STATE_FAILURE + 1),
	MBN_READY_STATE_DEVICE_LOCKED = (MBN_READY_STATE_NOT_ACTIVATED + 1),
	MBN_READY_STATE_DEVICE_BLOCKED = (MBN_READY_STATE_DEVICE_LOCKED + 1)
} MBN_READY_STATE;
typedef DECLSPEC_UUID("6E1348BB-BDCB-11DC-A8A8-001321F1405F")
enum MBN_PROVIDER_STATE
{
	MBN_PROVIDER_STATE_NONE = 0,
	MBN_PROVIDER_STATE_HOME = 0x1,
	MBN_PROVIDER_STATE_FORBIDDEN = 0x2,
	MBN_PROVIDER_STATE_PREFERRED = 0x4,
	MBN_PROVIDER_STATE_VISIBLE = 0x8,
	MBN_PROVIDER_STATE_REGISTERED = 0x10
} MBN_PROVIDER_STATE;
typedef DECLSPEC_UUID("934092FD-BDCB-11DC-A8A8-001321F1405F")
enum MBN_PROVIDER_CONSTANTS
{
	MBN_PROVIDERNAME_LEN = 20,
	MBN_PROVIDERID_LEN = 6
} MBN_PROVIDER_CONSTANTS;
typedef DECLSPEC_UUID("DCBBBAB6-9005-4BBB-AAEE-338E368AF6FA")
struct MBN_PROVIDER
{
	BSTR providerID;
	ULONG providerState;
	BSTR providerName;
	ULONG dataClass;
} MBN_PROVIDER;
typedef DECLSPEC_UUID("42FAAC0B-BDCC-11DC-A8A8-001321F1405F")
enum MBN_SIGNAL_CONSTANTS
{
	MBN_RSSI_DEFAULT = 0xffffffff,
	MBN_RSSI_DISABLE = 0,
	MBN_RSSI_UNKNOWN = 99,
	MBN_ERROR_RATE_UNKNOWN = 99
} MBN_SIGNAL_CONSTANTS;
typedef DECLSPEC_UUID("DCBBBAB6-6005-4BBB-AAEE-338E368AF6FA")
enum MBN_PIN_TYPE
{
	MBN_PIN_TYPE_NONE = 0,
	MBN_PIN_TYPE_CUSTOM = (MBN_PIN_TYPE_NONE + 1),
	MBN_PIN_TYPE_PIN1 = (MBN_PIN_TYPE_CUSTOM + 1),
	MBN_PIN_TYPE_PIN2 = (MBN_PIN_TYPE_PIN1 + 1),
	MBN_PIN_TYPE_DEVICE_SIM_PIN = (MBN_PIN_TYPE_PIN2 + 1),
	MBN_PIN_TYPE_DEVICE_FIRST_SIM_PIN = (MBN_PIN_TYPE_DEVICE_SIM_PIN + 1),
	MBN_PIN_TYPE_NETWORK_PIN = (MBN_PIN_TYPE_DEVICE_FIRST_SIM_PIN + 1),
	MBN_PIN_TYPE_NETWORK_SUBSET_PIN = (MBN_PIN_TYPE_NETWORK_PIN + 1),
	MBN_PIN_TYPE_SVC_PROVIDER_PIN = (MBN_PIN_TYPE_NETWORK_SUBSET_PIN + 1),
	MBN_PIN_TYPE_CORPORATE_PIN = (MBN_PIN_TYPE_SVC_PROVIDER_PIN + 1),
	MBN_PIN_TYPE_SUBSIDY_LOCK = (MBN_PIN_TYPE_CORPORATE_PIN + 1)
} MBN_PIN_TYPE;
typedef DECLSPEC_UUID("BD8A2871-BDCD-11DC-A8A8-001321F1405F")
enum MBN_PIN_MODE
{
	MBN_PIN_MODE_ENABLED = 1,
	MBN_PIN_MODE_DISABLED = (MBN_PIN_MODE_ENABLED + 1)
} MBN_PIN_MODE;
typedef DECLSPEC_UUID("C2A93665-BDCD-11DC-A8A8-001321F1405F")
enum MBN_PIN_FORMAT
{
	MBN_PIN_FORMAT_NONE = 0,
	MBN_PIN_FORMAT_NUMERIC = (MBN_PIN_FORMAT_NONE + 1),
	MBN_PIN_FORMAT_ALPHANUMERIC = (MBN_PIN_FORMAT_NUMERIC + 1)
} MBN_PIN_FORMAT;
typedef DECLSPEC_UUID("C75E76F5-BDCD-11DC-A8A8-001321F1405F")
enum MBN_PIN_CONSTANTS
{
	MBN_ATTEMPTS_REMAINING_UNKNOWN = 0xffffffff,
	MBN_PIN_LENGTH_UNKNOWN = 0xffffffff
} MBN_PIN_CONSTANTS;
typedef DECLSPEC_UUID("D11BD29D-BDCD-11DC-A8A8-001321F1405F")
enum MBN_PIN_STATE
{
	MBN_PIN_STATE_NONE = 0,
	MBN_PIN_STATE_ENTER = (MBN_PIN_STATE_NONE + 1),
	MBN_PIN_STATE_UNBLOCK = (MBN_PIN_STATE_ENTER + 1)
} MBN_PIN_STATE;
typedef DECLSPEC_UUID("DCBBBAB6-9006-4BBB-AAEE-338E368AF6FA")
struct MBN_PIN_INFO
{
	MBN_PIN_STATE pinState;
	MBN_PIN_TYPE pinType;
ULONG attemptsRemaining;
} MBN_PIN_INFO;
typedef DECLSPEC_UUID("D5F1726B-BDCE-11DC-A8A8-001321F1405F")
enum MBN_REGISTRATION_CONSTANTS
{
	MBN_ROAMTEXT_LEN = 64,
	MBN_CDMA_DEFAULT_PROVIDER_ID = 0
} MBN_REGISTRATION_CONSTANTS;
typedef DECLSPEC_UUID("DCBBBAB6-6009-4BBB-AAEE-338E368AF6FA")
enum MBN_REGISTER_STATE
{
	MBN_REGISTER_STATE_NONE = 0,
	MBN_REGISTER_STATE_DEREGISTERED = (MBN_REGISTER_STATE_NONE + 1),
	MBN_REGISTER_STATE_SEARCHING = (MBN_REGISTER_STATE_DEREGISTERED + 1),
	MBN_REGISTER_STATE_HOME = (MBN_REGISTER_STATE_SEARCHING + 1),
	MBN_REGISTER_STATE_ROAMING = (MBN_REGISTER_STATE_HOME + 1),
	MBN_REGISTER_STATE_PARTNER = (MBN_REGISTER_STATE_ROAMING + 1),
	MBN_REGISTER_STATE_DENIED = (MBN_REGISTER_STATE_PARTNER + 1)
} MBN_REGISTER_STATE;
typedef DECLSPEC_UUID("D7F73F35-BDCD-11DC-A8A8-001321F1405F")
enum MBN_REGISTER_MODE
{
	MBN_REGISTER_MODE_NONE = 0,
	MBN_REGISTER_MODE_AUTOMATIC = (MBN_REGISTER_MODE_NONE + 1),
	MBN_REGISTER_MODE_MANUAL = (MBN_REGISTER_MODE_AUTOMATIC + 1)
} MBN_REGISTER_MODE;
typedef DECLSPEC_UUID("0E62803F-BDD0-11DC-A8A8-001321F1405F")
enum MBN_CONTEXT_CONSTANTS
{
	MBN_ACCESSSTRING_LEN = 100,
	MBN_USERNAME_LEN = 255,
	MBN_PASSWORD_LEN = 255,
	MBN_CONTEXT_ID_APPEND = 0xffffffff
} MBN_CONTEXT_CONSTANTS;
typedef DECLSPEC_UUID("E24B42EF-BDCD-11DC-A8A8-001321F1405F")
enum MBN_AUTH_PROTOCOL
{
	MBN_AUTH_PROTOCOL_NONE = 0,
	MBN_AUTH_PROTOCOL_PAP = (MBN_AUTH_PROTOCOL_NONE + 1),
	MBN_AUTH_PROTOCOL_CHAP = (MBN_AUTH_PROTOCOL_PAP + 1),
	MBN_AUTH_PROTOCOL_MSCHAPV2 = (MBN_AUTH_PROTOCOL_CHAP + 1)
} MBN_AUTH_PROTOCOL;
typedef DECLSPEC_UUID("E6A360B9-BDCD-11DC-A8A8-001321F1405F")
enum MBN_COMPRESSION
{
	MBN_COMPRESSION_NONE = 0,
	MBN_COMPRESSION_ENABLE = (MBN_COMPRESSION_NONE + 1)
} MBN_COMPRESSION;
typedef DECLSPEC_UUID("EB4731EB-BDCD-11DC-A8A8-001321F1405F")
enum MBN_CONTEXT_TYPE
{
	MBN_CONTEXT_TYPE_NONE = 0,
	MBN_CONTEXT_TYPE_INTERNET = (MBN_CONTEXT_TYPE_NONE + 1),
	MBN_CONTEXT_TYPE_VPN = (MBN_CONTEXT_TYPE_INTERNET + 1),
	MBN_CONTEXT_TYPE_VOICE = (MBN_CONTEXT_TYPE_VPN + 1),
	MBN_CONTEXT_TYPE_VIDEO_SHARE = (MBN_CONTEXT_TYPE_VOICE + 1),
	MBN_CONTEXT_TYPE_CUSTOM = (MBN_CONTEXT_TYPE_VIDEO_SHARE + 1)
} MBN_CONTEXT_TYPE;
typedef DECLSPEC_UUID("FE1F7B6F-BDCD-11DC-A8A8-001321F1405F")
struct MBN_CONTEXT
{
	ULONG contextID;
	MBN_CONTEXT_TYPE contextType;
	BSTR accessString;
	BSTR userName;
	BSTR password;
	MBN_COMPRESSION compression;
	MBN_AUTH_PROTOCOL authType;
} MBN_CONTEXT;
typedef DECLSPEC_UUID("EFB7C00D-BDCD-11DC-A8A8-001321F1405F")
enum MBN_ACTIVATION_STATE
{
	MBN_ACTIVATION_STATE_NONE = 0,
	MBN_ACTIVATION_STATE_ACTIVATED = (MBN_ACTIVATION_STATE_NONE + 1),
	MBN_ACTIVATION_STATE_ACTIVATING = (MBN_ACTIVATION_STATE_ACTIVATED + 1),
	MBN_ACTIVATION_STATE_DEACTIVATED = (MBN_ACTIVATION_STATE_ACTIVATING + 1),
	MBN_ACTIVATION_STATE_DEACTIVATING = (MBN_ACTIVATION_STATE_DEACTIVATED + 1)
} MBN_ACTIVATION_STATE;
typedef DECLSPEC_UUID("F601E1EB-BDCD-11DC-A8A8-001321F1405F")
enum MBN_CONNECTION_MODE
{
	MBN_CONNECTION_MODE_PROFILE = 0,
	MBN_CONNECTION_MODE_TMP_PROFILE = (MBN_CONNECTION_MODE_PROFILE + 1)
} MBN_CONNECTION_MODE;
typedef DECLSPEC_UUID("6D8846E5-BDD1-11DC-A8A8-001321F1405F")
enum MBN_VOICE_CALL_STATE
{
	MBN_VOICE_CALL_STATE_NONE = 0,
	MBN_VOICE_CALL_STATE_IN_PROGRESS = (MBN_VOICE_CALL_STATE_NONE + 1),
	MBN_VOICE_CALL_STATE_HANGUP = (MBN_VOICE_CALL_STATE_IN_PROGRESS + 1)
} MBN_VOICE_CALL_STATE;
typedef DECLSPEC_UUID("130C65D3-BDD3-11DC-A8A8-001321F1405F")
enum MBN_SMS_CONSTANTS
{
	MBN_MESSAGE_INDEX_NONE = 0,
	MBN_CDMA_SHORT_MSG_SIZE_UNKNOWN = 0,
	MBN_CDMA_SHORT_MSG_SIZE_MAX = 160
} WWAEXT_SMS_CONSTANTS;
typedef DECLSPEC_UUID("FC208FC1-BDE5-11DC-A8A8-001321F1405F")
enum MBN_MSG_STATUS
{
	MBN_MSG_STATUS_NEW = 0,
	MBN_MSG_STATUS_OLD = (MBN_MSG_STATUS_NEW + 1),
	MBN_MSG_STATUS_DRAFT = (MBN_MSG_STATUS_OLD + 1),
	MBN_MSG_STATUS_SENT = (MBN_MSG_STATUS_DRAFT + 1)
} MBN_MSG_STATUS;
typedef DECLSPEC_UUID("29912B29-BDD4-11DC-A8A8-001321F1405F")
enum MBN_SMS_CDMA_LANG
{
	MBN_SMS_CDMA_LANG_NONE = 0,
	MBN_SMS_CDMA_LANG_ENGLISH = (MBN_SMS_CDMA_LANG_NONE + 1),
	MBN_SMS_CDMA_LANG_FRENCH = (MBN_SMS_CDMA_LANG_ENGLISH + 1),
	MBN_SMS_CDMA_LANG_SPANISH = (MBN_SMS_CDMA_LANG_FRENCH + 1),
	MBN_SMS_CDMA_LANG_JAPANESE = (MBN_SMS_CDMA_LANG_SPANISH + 1),
	MBN_SMS_CDMA_LANG_KOREAN = (MBN_SMS_CDMA_LANG_JAPANESE + 1),
	MBN_SMS_CDMA_LANG_CHINESE = (MBN_SMS_CDMA_LANG_KOREAN + 1),
	MBN_SMS_CDMA_LANG_HEBREW = (MBN_SMS_CDMA_LANG_CHINESE + 1)
} MBN_SMS_CDMA_LANG;
typedef DECLSPEC_UUID("7F8E74CB-BDD4-11DC-A8A8-001321F1405F")
enum MBN_SMS_CDMA_ENCODING
{
	MBN_SMS_CDMA_ENCODING_OCTET = 0,
	MBN_SMS_CDMA_ENCODING_EPM = (MBN_SMS_CDMA_ENCODING_OCTET + 1),
	MBN_SMS_CDMA_ENCODING_7BIT_ASCII = (MBN_SMS_CDMA_ENCODING_EPM + 1),
	MBN_SMS_CDMA_ENCODING_IA5 = (MBN_SMS_CDMA_ENCODING_7BIT_ASCII + 1),
	MBN_SMS_CDMA_ENCODING_UNICODE = (MBN_SMS_CDMA_ENCODING_IA5 + 1),
	MBN_SMS_CDMA_ENCODING_SHIFT_JIS = (MBN_SMS_CDMA_ENCODING_UNICODE + 1),
	MBN_SMS_CDMA_ENCODING_KOREAN = (MBN_SMS_CDMA_ENCODING_SHIFT_JIS + 1),
	MBN_SMS_CDMA_ENCODING_LATIN_HEBREW = (MBN_SMS_CDMA_ENCODING_KOREAN + 1),
	MBN_SMS_CDMA_ENCODING_LATIN = (MBN_SMS_CDMA_ENCODING_LATIN_HEBREW + 1),
	MBN_SMS_CDMA_ENCODING_GSM_7BIT = (MBN_SMS_CDMA_ENCODING_LATIN + 1)
} MBN_SMS_CDMA_ENCODING;
typedef DECLSPEC_UUID("0D42B514-BDDC-11DC-A8A8-001321F1405F")
enum MBN_SMS_FLAG
{
	MBN_SMS_FLAG_ALL = 0,
	MBN_SMS_FLAG_INDEX = (MBN_SMS_FLAG_ALL + 1),
	MBN_SMS_FLAG_NEW = (MBN_SMS_FLAG_INDEX + 1),
	MBN_SMS_FLAG_OLD = (MBN_SMS_FLAG_NEW + 1),
	MBN_SMS_FLAG_SENT = (MBN_SMS_FLAG_OLD + 1),
	MBN_SMS_FLAG_DRAFT = (MBN_SMS_FLAG_SENT + 1)
} MBN_SMS_FLAG;
typedef DECLSPEC_UUID("406BFD60-BDDC-11DC-A8A8-001321F1405F")
struct MBN_SMS_FILTER
{
	MBN_SMS_FLAG flag;
	ULONG messageIndex;
} MBN_SMS_FILTER;
typedef DECLSPEC_UUID("8098009D-BDDC-11DC-A8A8-001321F1405F")
enum MBN_SMS_STATUS_FLAG
{
	MBN_SMS_FLAG_NONE = 0,
	MBN_SMS_FLAG_MESSAGE_STORE_FULL = 0x1,
	MBN_SMS_FLAG_NEW_MESSAGE = 0x2
} MBN_SMS_STATUS_FLAG;
typedef DECLSPEC_UUID("1F6E9CA3-BDE6-11DC-A8A8-001321F1405F")
struct MBN_SMS_STATUS_INFO
{
	ULONG flag;
	ULONG messageIndex;
} MBN_SMS_STATUS_INFO;
typedef DECLSPEC_UUID("4B0FE227-3709-41e2-8A78-E98C0CD0CB09")
enum MBN_SMS_FORMAT
{
	MBN_SMS_FORMAT_NONE = 0,
	MBN_SMS_FORMAT_PDU = 0x1,
	MBN_SMS_FORMAT_TEXT = 0x2
} MBN_SMS_FORMAT;
typedef DECLSPEC_UUID("532A3FE4-BDE6-11DC-A8A8-001321F1405F")
enum MBN_RADIO
{
	MBN_RADIO_OFF = 0,
	MBN_RADIO_ON = (MBN_RADIO_OFF + 1)
} MBN_RADIO;
extern const IID LIBID_MbnApi;
#ifndef __IMbnInterface_INTERFACE_DEFINED__
#define __IMbnInterface_INTERFACE_DEFINED__
extern const IID IID_IMbnInterface;
typedef struct IMbnInterfaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnInterface *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnInterface *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnInterface *This);
	HRESULT(STDMETHODCALLTYPE *get_InterfaceID) (IMbnInterface *This, BSTR *InterfaceID);
	HRESULT(STDMETHODCALLTYPE *GetInterfaceCapability) (IMbnInterface *This, MBN_INTERFACE_CAPS *interfaceCaps);
	HRESULT(STDMETHODCALLTYPE *GetSubscriberInformation) (IMbnInterface *This, IMbnSubscriberInformation **subscriberInformation);
	HRESULT(STDMETHODCALLTYPE *GetReadyState) (IMbnInterface *This, MBN_READY_STATE *readyState);
	HRESULT(STDMETHODCALLTYPE *InEmergencyMode) (IMbnInterface *This, VARIANT_BOOL *emergencyMode);
	HRESULT(STDMETHODCALLTYPE *GetHomeProvider) (IMbnInterface *This, MBN_PROVIDER *homeProvider);
	HRESULT(STDMETHODCALLTYPE *GetPreferredProviders) (IMbnInterface *This, SAFEARRAY **preferredProviders);
	HRESULT(STDMETHODCALLTYPE *SetPreferredProviders) (IMbnInterface *This, SAFEARRAY *preferredProviders, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *GetVisibleProviders) (IMbnInterface *This, ULONG *age, SAFEARRAY **visibleProviders);
	HRESULT(STDMETHODCALLTYPE *ScanNetwork) (IMbnInterface *This, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *GetConnection) (IMbnInterface *This, IMbnConnection **mbnConnection);
	END_INTERFACE
} IMbnInterfaceVtbl;
interface IMbnInterface
{
	CONST_VTBL struct IMbnInterfaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnInterface_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnInterface_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnInterface_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnInterface_get_InterfaceID(This,InterfaceID) ( (This)->lpVtbl -> get_InterfaceID(This,InterfaceID) )
#define IMbnInterface_GetInterfaceCapability(This,interfaceCaps) ( (This)->lpVtbl -> GetInterfaceCapability(This,interfaceCaps) )
#define IMbnInterface_GetSubscriberInformation(This,subscriberInformation) ( (This)->lpVtbl -> GetSubscriberInformation(This,subscriberInformation) )
#define IMbnInterface_GetReadyState(This,readyState) ( (This)->lpVtbl -> GetReadyState(This,readyState) )
#define IMbnInterface_InEmergencyMode(This,emergencyMode) ( (This)->lpVtbl -> InEmergencyMode(This,emergencyMode) )
#define IMbnInterface_GetHomeProvider(This,homeProvider) ( (This)->lpVtbl -> GetHomeProvider(This,homeProvider) )
#define IMbnInterface_GetPreferredProviders(This,preferredProviders) ( (This)->lpVtbl -> GetPreferredProviders(This,preferredProviders) )
#define IMbnInterface_SetPreferredProviders(This,preferredProviders,requestID) ( (This)->lpVtbl -> SetPreferredProviders(This,preferredProviders,requestID) )
#define IMbnInterface_GetVisibleProviders(This,age,visibleProviders) ( (This)->lpVtbl -> GetVisibleProviders(This,age,visibleProviders) )
#define IMbnInterface_ScanNetwork(This,requestID) ( (This)->lpVtbl -> ScanNetwork(This,requestID) )
#define IMbnInterface_GetConnection(This,mbnConnection) ( (This)->lpVtbl -> GetConnection(This,mbnConnection) )
#endif
#endif
#ifndef __IMbnSubscriberInformation_INTERFACE_DEFINED__
#define __IMbnSubscriberInformation_INTERFACE_DEFINED__
extern const IID IID_IMbnSubscriberInformation;
typedef struct IMbnSubscriberInformationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnSubscriberInformation *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnSubscriberInformation *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnSubscriberInformation *This);
	HRESULT(STDMETHODCALLTYPE *get_SubscriberID) (IMbnSubscriberInformation *This, BSTR *SubscriberID);
	HRESULT(STDMETHODCALLTYPE *get_SimIccID) (IMbnSubscriberInformation *This, BSTR *SimIccID);
	HRESULT(STDMETHODCALLTYPE *get_TelephoneNumbers) (IMbnSubscriberInformation *This, SAFEARRAY **TelephoneNumbers);
	END_INTERFACE
} IMbnSubscriberInformationVtbl;
interface IMbnSubscriberInformation
{
	CONST_VTBL struct IMbnSubscriberInformationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnSubscriberInformation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnSubscriberInformation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnSubscriberInformation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnSubscriberInformation_get_SubscriberID(This,SubscriberID) ( (This)->lpVtbl -> get_SubscriberID(This,SubscriberID) )
#define IMbnSubscriberInformation_get_SimIccID(This,SimIccID) ( (This)->lpVtbl -> get_SimIccID(This,SimIccID) )
#define IMbnSubscriberInformation_get_TelephoneNumbers(This,TelephoneNumbers) ( (This)->lpVtbl -> get_TelephoneNumbers(This,TelephoneNumbers) )
#endif
#endif
#ifndef __IMbnInterfaceEvents_INTERFACE_DEFINED__
#define __IMbnInterfaceEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnInterfaceEvents;
typedef struct IMbnInterfaceEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnInterfaceEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnInterfaceEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnInterfaceEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnInterfaceCapabilityAvailable) (IMbnInterfaceEvents *This, IMbnInterface *newInterface);
	HRESULT(STDMETHODCALLTYPE *OnSubscriberInformationChange) (IMbnInterfaceEvents *This, IMbnInterface *newInterface);
	HRESULT(STDMETHODCALLTYPE *OnReadyStateChange) (IMbnInterfaceEvents *This, IMbnInterface *newInterface);
	HRESULT(STDMETHODCALLTYPE *OnEmergencyModeChange) (IMbnInterfaceEvents *This, IMbnInterface *newInterface);
	HRESULT(STDMETHODCALLTYPE *OnHomeProviderAvailable) (IMbnInterfaceEvents *This, IMbnInterface *newInterface);
	HRESULT(STDMETHODCALLTYPE *OnPreferredProvidersChange) (IMbnInterfaceEvents *This, IMbnInterface *newInterface);
	HRESULT(STDMETHODCALLTYPE *OnSetPreferredProvidersComplete) (IMbnInterfaceEvents *This, IMbnInterface *newInterface, ULONG requestID, HRESULT status);
	HRESULT(STDMETHODCALLTYPE *OnScanNetworkComplete) (IMbnInterfaceEvents *This, IMbnInterface *newInterface, ULONG requestID, HRESULT status);
	END_INTERFACE
} IMbnInterfaceEventsVtbl;
interface IMbnInterfaceEvents
{
	CONST_VTBL struct IMbnInterfaceEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnInterfaceEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnInterfaceEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnInterfaceEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnInterfaceEvents_OnInterfaceCapabilityAvailable(This,newInterface) ( (This)->lpVtbl -> OnInterfaceCapabilityAvailable(This,newInterface) )
#define IMbnInterfaceEvents_OnSubscriberInformationChange(This,newInterface) ( (This)->lpVtbl -> OnSubscriberInformationChange(This,newInterface) )
#define IMbnInterfaceEvents_OnReadyStateChange(This,newInterface) ( (This)->lpVtbl -> OnReadyStateChange(This,newInterface) )
#define IMbnInterfaceEvents_OnEmergencyModeChange(This,newInterface) ( (This)->lpVtbl -> OnEmergencyModeChange(This,newInterface) )
#define IMbnInterfaceEvents_OnHomeProviderAvailable(This,newInterface) ( (This)->lpVtbl -> OnHomeProviderAvailable(This,newInterface) )
#define IMbnInterfaceEvents_OnPreferredProvidersChange(This,newInterface) ( (This)->lpVtbl -> OnPreferredProvidersChange(This,newInterface) )
#define IMbnInterfaceEvents_OnSetPreferredProvidersComplete(This,newInterface,requestID,status) ( (This)->lpVtbl -> OnSetPreferredProvidersComplete(This,newInterface,requestID,status) )
#define IMbnInterfaceEvents_OnScanNetworkComplete(This,newInterface,requestID,status) ( (This)->lpVtbl -> OnScanNetworkComplete(This,newInterface,requestID,status) )
#endif
#endif
#ifndef __IMbnSignal_INTERFACE_DEFINED__
#define __IMbnSignal_INTERFACE_DEFINED__
extern const IID IID_IMbnSignal;
typedef struct IMbnSignalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnSignal *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnSignal *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnSignal *This);
	HRESULT(STDMETHODCALLTYPE *GetSignalStrength) (IMbnSignal *This, ULONG *signalStrength);
	HRESULT(STDMETHODCALLTYPE *GetSignalError) (IMbnSignal *This, ULONG *signalError);
	END_INTERFACE
} IMbnSignalVtbl;
interface IMbnSignal
{
	CONST_VTBL struct IMbnSignalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnSignal_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnSignal_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnSignal_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnSignal_GetSignalStrength(This,signalStrength) ( (This)->lpVtbl -> GetSignalStrength(This,signalStrength) )
#define IMbnSignal_GetSignalError(This,signalError) ( (This)->lpVtbl -> GetSignalError(This,signalError) )
#endif
#endif
#ifndef __IMbnSignalEvents_INTERFACE_DEFINED__
#define __IMbnSignalEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnSignalEvents;
typedef struct IMbnSignalEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnSignalEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnSignalEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnSignalEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnSignalStateChange) (IMbnSignalEvents *This, IMbnSignal *newInterface);
	END_INTERFACE
} IMbnSignalEventsVtbl;
interface IMbnSignalEvents
{
	CONST_VTBL struct IMbnSignalEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnSignalEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnSignalEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnSignalEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnSignalEvents_OnSignalStateChange(This,newInterface) ( (This)->lpVtbl -> OnSignalStateChange(This,newInterface) )
#endif
#endif
#ifndef __IMbnPinManager_INTERFACE_DEFINED__
#define __IMbnPinManager_INTERFACE_DEFINED__
extern const IID IID_IMbnPinManager;
typedef struct IMbnPinManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnPinManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnPinManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnPinManager *This);
	HRESULT(STDMETHODCALLTYPE *GetPinList) (IMbnPinManager *This, SAFEARRAY **pinList);
	HRESULT(STDMETHODCALLTYPE *GetPin) (IMbnPinManager *This, MBN_PIN_TYPE pinType, IMbnPin **pin);
	HRESULT(STDMETHODCALLTYPE *GetPinState) (IMbnPinManager *This, ULONG *requestID);
	END_INTERFACE
} IMbnPinManagerVtbl;
interface IMbnPinManager
{
	CONST_VTBL struct IMbnPinManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnPinManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnPinManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnPinManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnPinManager_GetPinList(This,pinList) ( (This)->lpVtbl -> GetPinList(This,pinList) )
#define IMbnPinManager_GetPin(This,pinType,pin) ( (This)->lpVtbl -> GetPin(This,pinType,pin) )
#define IMbnPinManager_GetPinState(This,requestID) ( (This)->lpVtbl -> GetPinState(This,requestID) )
#endif
#endif
#ifndef __IMbnPinManagerEvents_INTERFACE_DEFINED__
#define __IMbnPinManagerEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnPinManagerEvents;
typedef struct IMbnPinManagerEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnPinManagerEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnPinManagerEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnPinManagerEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnPinListAvailable) (IMbnPinManagerEvents *This, IMbnPinManager *pinManager);
	HRESULT(STDMETHODCALLTYPE *OnGetPinStateComplete) (IMbnPinManagerEvents *This, IMbnPinManager *pinManager, MBN_PIN_INFO pinInfo, ULONG requestID, HRESULT status);
	END_INTERFACE
} IMbnPinManagerEventsVtbl;
interface IMbnPinManagerEvents
{
	CONST_VTBL struct IMbnPinManagerEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnPinManagerEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnPinManagerEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnPinManagerEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnPinManagerEvents_OnPinListAvailable(This,pinManager) ( (This)->lpVtbl -> OnPinListAvailable(This,pinManager) )
#define IMbnPinManagerEvents_OnGetPinStateComplete(This,pinManager,pinInfo,requestID,status) ( (This)->lpVtbl -> OnGetPinStateComplete(This,pinManager,pinInfo,requestID,status) )
#endif
#endif
#ifndef __IMbnPin_INTERFACE_DEFINED__
#define __IMbnPin_INTERFACE_DEFINED__
extern const IID IID_IMbnPin;
typedef struct IMbnPinVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnPin *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnPin *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnPin *This);
	HRESULT(STDMETHODCALLTYPE *get_PinType) (IMbnPin *This, MBN_PIN_TYPE *PinType);
	HRESULT(STDMETHODCALLTYPE *get_PinFormat) (IMbnPin *This, MBN_PIN_FORMAT *PinFormat);
	HRESULT(STDMETHODCALLTYPE *get_PinLengthMin) (IMbnPin *This, ULONG *PinLengthMin);
	HRESULT(STDMETHODCALLTYPE *get_PinLengthMax) (IMbnPin *This, ULONG *PinLengthMax);
	HRESULT(STDMETHODCALLTYPE *get_PinMode) (IMbnPin *This, MBN_PIN_MODE *PinMode);
	HRESULT(STDMETHODCALLTYPE *Enable) (IMbnPin *This, LPCWSTR pin, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *Disable) (IMbnPin *This, LPCWSTR pin, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *Enter) (IMbnPin *This, LPCWSTR pin, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *Change) (IMbnPin *This, LPCWSTR pin, LPCWSTR newPin, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *Unblock) (IMbnPin *This, LPCWSTR puk, LPCWSTR newPin, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *GetPinManager) (IMbnPin *This, IMbnPinManager **pinManager);
	END_INTERFACE
} IMbnPinVtbl;
interface IMbnPin
{
	CONST_VTBL struct IMbnPinVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnPin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnPin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnPin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnPin_get_PinType(This,PinType) ( (This)->lpVtbl -> get_PinType(This,PinType) )
#define IMbnPin_get_PinFormat(This,PinFormat) ( (This)->lpVtbl -> get_PinFormat(This,PinFormat) )
#define IMbnPin_get_PinLengthMin(This,PinLengthMin) ( (This)->lpVtbl -> get_PinLengthMin(This,PinLengthMin) )
#define IMbnPin_get_PinLengthMax(This,PinLengthMax) ( (This)->lpVtbl -> get_PinLengthMax(This,PinLengthMax) )
#define IMbnPin_get_PinMode(This,PinMode) ( (This)->lpVtbl -> get_PinMode(This,PinMode) )
#define IMbnPin_Enable(This,pin,requestID) ( (This)->lpVtbl -> Enable(This,pin,requestID) )
#define IMbnPin_Disable(This,pin,requestID) ( (This)->lpVtbl -> Disable(This,pin,requestID) )
#define IMbnPin_Enter(This,pin,requestID) ( (This)->lpVtbl -> Enter(This,pin,requestID) )
#define IMbnPin_Change(This,pin,newPin,requestID) ( (This)->lpVtbl -> Change(This,pin,newPin,requestID) )
#define IMbnPin_Unblock(This,puk,newPin,requestID) ( (This)->lpVtbl -> Unblock(This,puk,newPin,requestID) )
#define IMbnPin_GetPinManager(This,pinManager) ( (This)->lpVtbl -> GetPinManager(This,pinManager) )
#endif
#endif
#ifndef __IMbnPinEvents_INTERFACE_DEFINED__
#define __IMbnPinEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnPinEvents;
typedef struct IMbnPinEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnPinEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnPinEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnPinEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnEnableComplete) (IMbnPinEvents *This, IMbnPin *pin, MBN_PIN_INFO *pinInfo, ULONG requestID, HRESULT status);
	HRESULT(STDMETHODCALLTYPE *OnDisableComplete) (IMbnPinEvents *This, IMbnPin *pin, MBN_PIN_INFO *pinInfo, ULONG requestID, HRESULT status);
	HRESULT(STDMETHODCALLTYPE *OnEnterComplete) (IMbnPinEvents *This, IMbnPin *Pin, MBN_PIN_INFO *pinInfo, ULONG requestID, HRESULT status);
	HRESULT(STDMETHODCALLTYPE *OnChangeComplete) (IMbnPinEvents *This, IMbnPin *Pin, MBN_PIN_INFO *pinInfo, ULONG requestID, HRESULT status);
	HRESULT(STDMETHODCALLTYPE *OnUnblockComplete) (IMbnPinEvents *This, IMbnPin *Pin, MBN_PIN_INFO *pinInfo, ULONG requestID, HRESULT status);
	END_INTERFACE
} IMbnPinEventsVtbl;
interface IMbnPinEvents
{
	CONST_VTBL struct IMbnPinEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnPinEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnPinEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnPinEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnPinEvents_OnEnableComplete(This,pin,pinInfo,requestID,status) ( (This)->lpVtbl -> OnEnableComplete(This,pin,pinInfo,requestID,status) )
#define IMbnPinEvents_OnDisableComplete(This,pin,pinInfo,requestID,status) ( (This)->lpVtbl -> OnDisableComplete(This,pin,pinInfo,requestID,status) )
#define IMbnPinEvents_OnEnterComplete(This,Pin,pinInfo,requestID,status) ( (This)->lpVtbl -> OnEnterComplete(This,Pin,pinInfo,requestID,status) )
#define IMbnPinEvents_OnChangeComplete(This,Pin,pinInfo,requestID,status) ( (This)->lpVtbl -> OnChangeComplete(This,Pin,pinInfo,requestID,status) )
#define IMbnPinEvents_OnUnblockComplete(This,Pin,pinInfo,requestID,status) ( (This)->lpVtbl -> OnUnblockComplete(This,Pin,pinInfo,requestID,status) )
#endif
#endif
#ifndef __IMbnRegistration_INTERFACE_DEFINED__
#define __IMbnRegistration_INTERFACE_DEFINED__
extern const IID IID_IMbnRegistration;
typedef struct IMbnRegistrationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnRegistration *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnRegistration *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnRegistration *This);
	HRESULT(STDMETHODCALLTYPE *GetRegisterState) (IMbnRegistration *This, MBN_REGISTER_STATE *registerState);
	HRESULT(STDMETHODCALLTYPE *GetRegisterMode) (IMbnRegistration *This, MBN_REGISTER_MODE *registerMode);
	HRESULT(STDMETHODCALLTYPE *GetProviderID) (IMbnRegistration *This, BSTR *providerID);
	HRESULT(STDMETHODCALLTYPE *GetProviderName) (IMbnRegistration *This, BSTR *providerName);
	HRESULT(STDMETHODCALLTYPE *GetRoamingText) (IMbnRegistration *This, BSTR *roamingText);
	HRESULT(STDMETHODCALLTYPE *GetAvailableDataClasses) (IMbnRegistration *This, ULONG *availableDataClasses);
	HRESULT(STDMETHODCALLTYPE *GetCurrentDataClass) (IMbnRegistration *This, ULONG *currentDataClass);
	HRESULT(STDMETHODCALLTYPE *GetRegistrationNetworkError) (IMbnRegistration *This, ULONG *registrationNetworkError);
	HRESULT(STDMETHODCALLTYPE *GetPacketAttachNetworkError) (IMbnRegistration *This, ULONG *packetAttachNetworkError);
	HRESULT(STDMETHODCALLTYPE *SetRegisterMode) (IMbnRegistration *This, MBN_REGISTER_MODE registerMode, LPCWSTR providerID, ULONG dataClass, ULONG *requestID);
	END_INTERFACE
} IMbnRegistrationVtbl;
interface IMbnRegistration
{
	CONST_VTBL struct IMbnRegistrationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnRegistration_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnRegistration_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnRegistration_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnRegistration_GetRegisterState(This,registerState) ( (This)->lpVtbl -> GetRegisterState(This,registerState) )
#define IMbnRegistration_GetRegisterMode(This,registerMode) ( (This)->lpVtbl -> GetRegisterMode(This,registerMode) )
#define IMbnRegistration_GetProviderID(This,providerID) ( (This)->lpVtbl -> GetProviderID(This,providerID) )
#define IMbnRegistration_GetProviderName(This,providerName) ( (This)->lpVtbl -> GetProviderName(This,providerName) )
#define IMbnRegistration_GetRoamingText(This,roamingText) ( (This)->lpVtbl -> GetRoamingText(This,roamingText) )
#define IMbnRegistration_GetAvailableDataClasses(This,availableDataClasses) ( (This)->lpVtbl -> GetAvailableDataClasses(This,availableDataClasses) )
#define IMbnRegistration_GetCurrentDataClass(This,currentDataClass) ( (This)->lpVtbl -> GetCurrentDataClass(This,currentDataClass) )
#define IMbnRegistration_GetRegistrationNetworkError(This,registrationNetworkError) ( (This)->lpVtbl -> GetRegistrationNetworkError(This,registrationNetworkError) )
#define IMbnRegistration_GetPacketAttachNetworkError(This,packetAttachNetworkError) ( (This)->lpVtbl -> GetPacketAttachNetworkError(This,packetAttachNetworkError) )
#define IMbnRegistration_SetRegisterMode(This,registerMode,providerID,dataClass,requestID) ( (This)->lpVtbl -> SetRegisterMode(This,registerMode,providerID,dataClass,requestID) )
#endif
#endif
#ifndef __IMbnRegistrationEvents_INTERFACE_DEFINED__
#define __IMbnRegistrationEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnRegistrationEvents;
typedef struct IMbnRegistrationEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnRegistrationEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnRegistrationEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnRegistrationEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnRegisterModeAvailable) (IMbnRegistrationEvents *This, IMbnRegistration *newInterface);
	HRESULT(STDMETHODCALLTYPE *OnRegisterStateChange) (IMbnRegistrationEvents *This, IMbnRegistration *newInterface);
	HRESULT(STDMETHODCALLTYPE *OnPacketServiceStateChange) (IMbnRegistrationEvents *This, IMbnRegistration *newInterface);
	HRESULT(STDMETHODCALLTYPE *OnSetRegisterModeComplete) (IMbnRegistrationEvents *This, IMbnRegistration *newInterface, ULONG requestID, HRESULT status);
	END_INTERFACE
} IMbnRegistrationEventsVtbl;
interface IMbnRegistrationEvents
{
	CONST_VTBL struct IMbnRegistrationEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnRegistrationEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnRegistrationEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnRegistrationEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnRegistrationEvents_OnRegisterModeAvailable(This,newInterface) ( (This)->lpVtbl -> OnRegisterModeAvailable(This,newInterface) )
#define IMbnRegistrationEvents_OnRegisterStateChange(This,newInterface) ( (This)->lpVtbl -> OnRegisterStateChange(This,newInterface) )
#define IMbnRegistrationEvents_OnPacketServiceStateChange(This,newInterface) ( (This)->lpVtbl -> OnPacketServiceStateChange(This,newInterface) )
#define IMbnRegistrationEvents_OnSetRegisterModeComplete(This,newInterface,requestID,status) ( (This)->lpVtbl -> OnSetRegisterModeComplete(This,newInterface,requestID,status) )
#endif
#endif
#ifndef __IMbnConnectionContext_INTERFACE_DEFINED__
#define __IMbnConnectionContext_INTERFACE_DEFINED__
extern const IID IID_IMbnConnectionContext;
typedef struct IMbnConnectionContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnConnectionContext *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnConnectionContext *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnConnectionContext *This);
	HRESULT(STDMETHODCALLTYPE *GetProvisionedContexts) (IMbnConnectionContext *This, SAFEARRAY **provisionedContexts);
	HRESULT(STDMETHODCALLTYPE *SetProvisionedContext) (IMbnConnectionContext *This, MBN_CONTEXT provisionedContexts, LPCWSTR providerID, ULONG *requestID);
	END_INTERFACE
} IMbnConnectionContextVtbl;
interface IMbnConnectionContext
{
	CONST_VTBL struct IMbnConnectionContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnConnectionContext_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnConnectionContext_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnConnectionContext_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnConnectionContext_GetProvisionedContexts(This,provisionedContexts) ( (This)->lpVtbl -> GetProvisionedContexts(This,provisionedContexts) )
#define IMbnConnectionContext_SetProvisionedContext(This,provisionedContexts,providerID,requestID) ( (This)->lpVtbl -> SetProvisionedContext(This,provisionedContexts,providerID,requestID) )
#endif
#endif
#ifndef __IMbnConnectionContextEvents_INTERFACE_DEFINED__
#define __IMbnConnectionContextEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnConnectionContextEvents;
typedef struct IMbnConnectionContextEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnConnectionContextEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnConnectionContextEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnConnectionContextEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnProvisionedContextListChange) (IMbnConnectionContextEvents *This, IMbnConnectionContext *newInterface);
	HRESULT(STDMETHODCALLTYPE *OnSetProvisionedContextComplete) (IMbnConnectionContextEvents *This, IMbnConnectionContext *newInterface, ULONG requestID, HRESULT status);
	END_INTERFACE
} IMbnConnectionContextEventsVtbl;
interface IMbnConnectionContextEvents
{
	CONST_VTBL struct IMbnConnectionContextEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnConnectionContextEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnConnectionContextEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnConnectionContextEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnConnectionContextEvents_OnProvisionedContextListChange(This,newInterface) ( (This)->lpVtbl -> OnProvisionedContextListChange(This,newInterface) )
#define IMbnConnectionContextEvents_OnSetProvisionedContextComplete(This,newInterface,requestID,status) ( (This)->lpVtbl -> OnSetProvisionedContextComplete(This,newInterface,requestID,status) )
#endif
#endif
#ifndef __IMbnConnection_INTERFACE_DEFINED__
#define __IMbnConnection_INTERFACE_DEFINED__
extern const IID IID_IMbnConnection;
typedef struct IMbnConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnConnection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnConnection *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnConnection *This);
	HRESULT(STDMETHODCALLTYPE *get_ConnectionID) (IMbnConnection *This, BSTR *ConnectionID);
	HRESULT(STDMETHODCALLTYPE *get_InterfaceID) (IMbnConnection *This, BSTR *InterfaceID);
	HRESULT(STDMETHODCALLTYPE *Connect) (IMbnConnection *This, MBN_CONNECTION_MODE connectionMode, LPCWSTR strProfile, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *Disconnect) (IMbnConnection *This, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *GetConnectionState) (IMbnConnection *This, MBN_ACTIVATION_STATE *ConnectionState, BSTR *ProfileName);
	HRESULT(STDMETHODCALLTYPE *GetVoiceCallState) (IMbnConnection *This, MBN_VOICE_CALL_STATE *voiceCallState);
	HRESULT(STDMETHODCALLTYPE *GetActivationNetworkError) (IMbnConnection *This, ULONG *networkError);
	END_INTERFACE
} IMbnConnectionVtbl;
interface IMbnConnection
{
	CONST_VTBL struct IMbnConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnConnection_get_ConnectionID(This,ConnectionID) ( (This)->lpVtbl -> get_ConnectionID(This,ConnectionID) )
#define IMbnConnection_get_InterfaceID(This,InterfaceID) ( (This)->lpVtbl -> get_InterfaceID(This,InterfaceID) )
#define IMbnConnection_Connect(This,connectionMode,strProfile,requestID) ( (This)->lpVtbl -> Connect(This,connectionMode,strProfile,requestID) )
#define IMbnConnection_Disconnect(This,requestID) ( (This)->lpVtbl -> Disconnect(This,requestID) )
#define IMbnConnection_GetConnectionState(This,ConnectionState,ProfileName) ( (This)->lpVtbl -> GetConnectionState(This,ConnectionState,ProfileName) )
#define IMbnConnection_GetVoiceCallState(This,voiceCallState) ( (This)->lpVtbl -> GetVoiceCallState(This,voiceCallState) )
#define IMbnConnection_GetActivationNetworkError(This,networkError) ( (This)->lpVtbl -> GetActivationNetworkError(This,networkError) )
#endif
#endif
#ifndef __IMbnConnectionEvents_INTERFACE_DEFINED__
#define __IMbnConnectionEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnConnectionEvents;
typedef struct IMbnConnectionEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnConnectionEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnConnectionEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnConnectionEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnConnectComplete) (IMbnConnectionEvents *This, IMbnConnection *newConnection, ULONG requestID, HRESULT status);
	HRESULT(STDMETHODCALLTYPE *OnDisconnectComplete) (IMbnConnectionEvents *This, IMbnConnection *newConnection, ULONG reqeustID, HRESULT status);
	HRESULT(STDMETHODCALLTYPE *OnConnectStateChange) (IMbnConnectionEvents *This, IMbnConnection *newConnection);
	HRESULT(STDMETHODCALLTYPE *OnVoiceCallStateChange) (IMbnConnectionEvents *This, IMbnConnection *newConnection);
	END_INTERFACE
} IMbnConnectionEventsVtbl;
interface IMbnConnectionEvents
{
	CONST_VTBL struct IMbnConnectionEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnConnectionEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnConnectionEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnConnectionEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnConnectionEvents_OnConnectComplete(This,newConnection,requestID,status) ( (This)->lpVtbl -> OnConnectComplete(This,newConnection,requestID,status) )
#define IMbnConnectionEvents_OnDisconnectComplete(This,newConnection,reqeustID,status) ( (This)->lpVtbl -> OnDisconnectComplete(This,newConnection,reqeustID,status) )
#define IMbnConnectionEvents_OnConnectStateChange(This,newConnection) ( (This)->lpVtbl -> OnConnectStateChange(This,newConnection) )
#define IMbnConnectionEvents_OnVoiceCallStateChange(This,newConnection) ( (This)->lpVtbl -> OnVoiceCallStateChange(This,newConnection) )
#endif
#endif
#ifndef __IMbnConnectionProfileManager_INTERFACE_DEFINED__
#define __IMbnConnectionProfileManager_INTERFACE_DEFINED__
extern const IID IID_IMbnConnectionProfileManager;
typedef struct IMbnConnectionProfileManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnConnectionProfileManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnConnectionProfileManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnConnectionProfileManager *This);
	HRESULT(STDMETHODCALLTYPE *GetConnectionProfiles) (IMbnConnectionProfileManager *This, IMbnInterface *mbnInterface, SAFEARRAY **connectionProfiles);
	HRESULT(STDMETHODCALLTYPE *GetConnectionProfile) (IMbnConnectionProfileManager *This, IMbnInterface *mbnInterface, LPCWSTR profileName, IMbnConnectionProfile **connectionProfile);
	HRESULT(STDMETHODCALLTYPE *CreateConnectionProfile) (IMbnConnectionProfileManager *This, LPCWSTR xmlProfile);
	END_INTERFACE
} IMbnConnectionProfileManagerVtbl;
interface IMbnConnectionProfileManager
{
	CONST_VTBL struct IMbnConnectionProfileManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnConnectionProfileManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnConnectionProfileManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnConnectionProfileManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnConnectionProfileManager_GetConnectionProfiles(This,mbnInterface,connectionProfiles) ( (This)->lpVtbl -> GetConnectionProfiles(This,mbnInterface,connectionProfiles) )
#define IMbnConnectionProfileManager_GetConnectionProfile(This,mbnInterface,profileName,connectionProfile) ( (This)->lpVtbl -> GetConnectionProfile(This,mbnInterface,profileName,connectionProfile) )
#define IMbnConnectionProfileManager_CreateConnectionProfile(This,xmlProfile) ( (This)->lpVtbl -> CreateConnectionProfile(This,xmlProfile) )
#endif
#endif
#ifndef __IMbnConnectionProfile_INTERFACE_DEFINED__
#define __IMbnConnectionProfile_INTERFACE_DEFINED__
extern const IID IID_IMbnConnectionProfile;
typedef struct IMbnConnectionProfileVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnConnectionProfile *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnConnectionProfile *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnConnectionProfile *This);
	HRESULT(STDMETHODCALLTYPE *GetProfileXmlData) (IMbnConnectionProfile *This, BSTR *profileData);
	HRESULT(STDMETHODCALLTYPE *UpdateProfile) (IMbnConnectionProfile *This, LPCWSTR strProfile);
	HRESULT(STDMETHODCALLTYPE *Delete) (IMbnConnectionProfile *This);
	END_INTERFACE
} IMbnConnectionProfileVtbl;
interface IMbnConnectionProfile
{
	CONST_VTBL struct IMbnConnectionProfileVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnConnectionProfile_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnConnectionProfile_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnConnectionProfile_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnConnectionProfile_GetProfileXmlData(This,profileData) ( (This)->lpVtbl -> GetProfileXmlData(This,profileData) )
#define IMbnConnectionProfile_UpdateProfile(This,strProfile) ( (This)->lpVtbl -> UpdateProfile(This,strProfile) )
#define IMbnConnectionProfile_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#endif
#endif
#ifndef __IMbnConnectionProfileEvents_INTERFACE_DEFINED__
#define __IMbnConnectionProfileEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnConnectionProfileEvents;
typedef struct IMbnConnectionProfileEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnConnectionProfileEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnConnectionProfileEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnConnectionProfileEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnProfileUpdate) (IMbnConnectionProfileEvents *This, IMbnConnectionProfile *newProfile);
	END_INTERFACE
} IMbnConnectionProfileEventsVtbl;
interface IMbnConnectionProfileEvents
{
	CONST_VTBL struct IMbnConnectionProfileEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnConnectionProfileEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnConnectionProfileEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnConnectionProfileEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnConnectionProfileEvents_OnProfileUpdate(This,newProfile) ( (This)->lpVtbl -> OnProfileUpdate(This,newProfile) )
#endif
#endif
#ifndef __IMbnSmsConfiguration_INTERFACE_DEFINED__
#define __IMbnSmsConfiguration_INTERFACE_DEFINED__
extern const IID IID_IMbnSmsConfiguration;
typedef struct IMbnSmsConfigurationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnSmsConfiguration *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnSmsConfiguration *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnSmsConfiguration *This);
	HRESULT(STDMETHODCALLTYPE *get_ServiceCenterAddress) (IMbnSmsConfiguration *This, BSTR *scAddress);
	HRESULT(STDMETHODCALLTYPE *put_ServiceCenterAddress) (IMbnSmsConfiguration *This, LPCWSTR scAddress);
	HRESULT(STDMETHODCALLTYPE *get_MaxMessageIndex) (IMbnSmsConfiguration *This, ULONG *index);
	HRESULT(STDMETHODCALLTYPE *get_CdmaShortMsgSize) (IMbnSmsConfiguration *This, ULONG *shortMsgSize);
	HRESULT(STDMETHODCALLTYPE *get_SmsFormat) (IMbnSmsConfiguration *This, MBN_SMS_FORMAT *smsFormat);
	HRESULT(STDMETHODCALLTYPE *put_SmsFormat) (IMbnSmsConfiguration *This, MBN_SMS_FORMAT smsFormat);
	END_INTERFACE
} IMbnSmsConfigurationVtbl;
interface IMbnSmsConfiguration
{
	CONST_VTBL struct IMbnSmsConfigurationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnSmsConfiguration_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnSmsConfiguration_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnSmsConfiguration_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnSmsConfiguration_get_ServiceCenterAddress(This,scAddress) ( (This)->lpVtbl -> get_ServiceCenterAddress(This,scAddress) )
#define IMbnSmsConfiguration_put_ServiceCenterAddress(This,scAddress) ( (This)->lpVtbl -> put_ServiceCenterAddress(This,scAddress) )
#define IMbnSmsConfiguration_get_MaxMessageIndex(This,index) ( (This)->lpVtbl -> get_MaxMessageIndex(This,index) )
#define IMbnSmsConfiguration_get_CdmaShortMsgSize(This,shortMsgSize) ( (This)->lpVtbl -> get_CdmaShortMsgSize(This,shortMsgSize) )
#define IMbnSmsConfiguration_get_SmsFormat(This,smsFormat) ( (This)->lpVtbl -> get_SmsFormat(This,smsFormat) )
#define IMbnSmsConfiguration_put_SmsFormat(This,smsFormat) ( (This)->lpVtbl -> put_SmsFormat(This,smsFormat) )
#endif
#endif
#ifndef __IMbnSmsReadMsgPdu_INTERFACE_DEFINED__
#define __IMbnSmsReadMsgPdu_INTERFACE_DEFINED__
extern const IID IID_IMbnSmsReadMsgPdu;
typedef struct IMbnSmsReadMsgPduVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnSmsReadMsgPdu *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnSmsReadMsgPdu *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnSmsReadMsgPdu *This);
	HRESULT(STDMETHODCALLTYPE *get_Index) (IMbnSmsReadMsgPdu *This, ULONG *Index);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IMbnSmsReadMsgPdu *This, MBN_MSG_STATUS *Status);
	HRESULT(STDMETHODCALLTYPE *get_PduData) (IMbnSmsReadMsgPdu *This, BSTR *PduData);
	HRESULT(STDMETHODCALLTYPE *get_Message) (IMbnSmsReadMsgPdu *This, SAFEARRAY **Message);
	END_INTERFACE
} IMbnSmsReadMsgPduVtbl;
interface IMbnSmsReadMsgPdu
{
	CONST_VTBL struct IMbnSmsReadMsgPduVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnSmsReadMsgPdu_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnSmsReadMsgPdu_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnSmsReadMsgPdu_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnSmsReadMsgPdu_get_Index(This,Index) ( (This)->lpVtbl -> get_Index(This,Index) )
#define IMbnSmsReadMsgPdu_get_Status(This,Status) ( (This)->lpVtbl -> get_Status(This,Status) )
#define IMbnSmsReadMsgPdu_get_PduData(This,PduData) ( (This)->lpVtbl -> get_PduData(This,PduData) )
#define IMbnSmsReadMsgPdu_get_Message(This,Message) ( (This)->lpVtbl -> get_Message(This,Message) )
#endif
#endif
#ifndef __IMbnSmsReadMsgTextCdma_INTERFACE_DEFINED__
#define __IMbnSmsReadMsgTextCdma_INTERFACE_DEFINED__
extern const IID IID_IMbnSmsReadMsgTextCdma;
typedef struct IMbnSmsReadMsgTextCdmaVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnSmsReadMsgTextCdma *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnSmsReadMsgTextCdma *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnSmsReadMsgTextCdma *This);
	HRESULT(STDMETHODCALLTYPE *get_Index) (IMbnSmsReadMsgTextCdma *This, ULONG *Index);
	HRESULT(STDMETHODCALLTYPE *get_Status) (IMbnSmsReadMsgTextCdma *This, MBN_MSG_STATUS *Status);
	HRESULT(STDMETHODCALLTYPE *get_Address) (IMbnSmsReadMsgTextCdma *This, BSTR *Address);
	HRESULT(STDMETHODCALLTYPE *get_Timestamp) (IMbnSmsReadMsgTextCdma *This, BSTR *Timestamp);
	HRESULT(STDMETHODCALLTYPE *get_EncodingID) (IMbnSmsReadMsgTextCdma *This, MBN_SMS_CDMA_ENCODING *EncodingID);
	HRESULT(STDMETHODCALLTYPE *get_LanguageID) (IMbnSmsReadMsgTextCdma *This, MBN_SMS_CDMA_LANG *LanguageID);
	HRESULT(STDMETHODCALLTYPE *get_SizeInCharacters) (IMbnSmsReadMsgTextCdma *This, ULONG *SizeInCharacters);
	HRESULT(STDMETHODCALLTYPE *get_Message) (IMbnSmsReadMsgTextCdma *This, SAFEARRAY **Message);
	END_INTERFACE
} IMbnSmsReadMsgTextCdmaVtbl;
interface IMbnSmsReadMsgTextCdma
{
	CONST_VTBL struct IMbnSmsReadMsgTextCdmaVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnSmsReadMsgTextCdma_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnSmsReadMsgTextCdma_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnSmsReadMsgTextCdma_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnSmsReadMsgTextCdma_get_Index(This,Index) ( (This)->lpVtbl -> get_Index(This,Index) )
#define IMbnSmsReadMsgTextCdma_get_Status(This,Status) ( (This)->lpVtbl -> get_Status(This,Status) )
#define IMbnSmsReadMsgTextCdma_get_Address(This,Address) ( (This)->lpVtbl -> get_Address(This,Address) )
#define IMbnSmsReadMsgTextCdma_get_Timestamp(This,Timestamp) ( (This)->lpVtbl -> get_Timestamp(This,Timestamp) )
#define IMbnSmsReadMsgTextCdma_get_EncodingID(This,EncodingID) ( (This)->lpVtbl -> get_EncodingID(This,EncodingID) )
#define IMbnSmsReadMsgTextCdma_get_LanguageID(This,LanguageID) ( (This)->lpVtbl -> get_LanguageID(This,LanguageID) )
#define IMbnSmsReadMsgTextCdma_get_SizeInCharacters(This,SizeInCharacters) ( (This)->lpVtbl -> get_SizeInCharacters(This,SizeInCharacters) )
#define IMbnSmsReadMsgTextCdma_get_Message(This,Message) ( (This)->lpVtbl -> get_Message(This,Message) )
#endif
#endif
#ifndef __IMbnSms_INTERFACE_DEFINED__
#define __IMbnSms_INTERFACE_DEFINED__
extern const IID IID_IMbnSms;
typedef struct IMbnSmsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnSms *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnSms *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnSms *This);
	HRESULT(STDMETHODCALLTYPE *GetSmsConfiguration) (IMbnSms *This, IMbnSmsConfiguration **smsConfiguration);
	HRESULT(STDMETHODCALLTYPE *SetSmsConfiguration) (IMbnSms *This, IMbnSmsConfiguration *smsConfiguration, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *SmsSendPdu) (IMbnSms *This, LPCWSTR pduData, BYTE size, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *SmsSendCdma) (IMbnSms *This, LPCWSTR address, MBN_SMS_CDMA_ENCODING encoding, MBN_SMS_CDMA_LANG language, ULONG sizeInCharacters, SAFEARRAY *message, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *SmsSendCdmaPdu) (IMbnSms *This, SAFEARRAY *message, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *SmsRead) (IMbnSms *This, MBN_SMS_FILTER *smsFilter, MBN_SMS_FORMAT smsFormat, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *SmsDelete) (IMbnSms *This, MBN_SMS_FILTER *smsFilter, ULONG *requestID);
	HRESULT(STDMETHODCALLTYPE *GetSmsStatus) (IMbnSms *This, MBN_SMS_STATUS_INFO *smsStatusInfo);
	END_INTERFACE
} IMbnSmsVtbl;
interface IMbnSms
{
	CONST_VTBL struct IMbnSmsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnSms_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnSms_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnSms_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnSms_GetSmsConfiguration(This,smsConfiguration) ( (This)->lpVtbl -> GetSmsConfiguration(This,smsConfiguration) )
#define IMbnSms_SetSmsConfiguration(This,smsConfiguration,requestID) ( (This)->lpVtbl -> SetSmsConfiguration(This,smsConfiguration,requestID) )
#define IMbnSms_SmsSendPdu(This,pduData,size,requestID) ( (This)->lpVtbl -> SmsSendPdu(This,pduData,size,requestID) )
#define IMbnSms_SmsSendCdma(This,address,encoding,language,sizeInCharacters,message,requestID) ( (This)->lpVtbl -> SmsSendCdma(This,address,encoding,language,sizeInCharacters,message,requestID) )
#define IMbnSms_SmsSendCdmaPdu(This,message,requestID) ( (This)->lpVtbl -> SmsSendCdmaPdu(This,message,requestID) )
#define IMbnSms_SmsRead(This,smsFilter,smsFormat,requestID) ( (This)->lpVtbl -> SmsRead(This,smsFilter,smsFormat,requestID) )
#define IMbnSms_SmsDelete(This,smsFilter,requestID) ( (This)->lpVtbl -> SmsDelete(This,smsFilter,requestID) )
#define IMbnSms_GetSmsStatus(This,smsStatusInfo) ( (This)->lpVtbl -> GetSmsStatus(This,smsStatusInfo) )
#endif
#endif
#ifndef __IMbnSmsEvents_INTERFACE_DEFINED__
#define __IMbnSmsEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnSmsEvents;
typedef struct IMbnSmsEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnSmsEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnSmsEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnSmsEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnSmsConfigurationChange) (IMbnSmsEvents *This, IMbnSms *sms);
	HRESULT(STDMETHODCALLTYPE *OnSetSmsConfigurationComplete) (IMbnSmsEvents *This, IMbnSms *sms, ULONG requestID, HRESULT status);
	HRESULT(STDMETHODCALLTYPE *OnSmsSendComplete) (IMbnSmsEvents *This, IMbnSms *sms, ULONG requestID, HRESULT status);
	HRESULT(STDMETHODCALLTYPE *OnSmsReadComplete) (IMbnSmsEvents *This, IMbnSms *sms, MBN_SMS_FORMAT smsFormat, SAFEARRAY *readMsgs, VARIANT_BOOL moreMsgs, ULONG requestID, HRESULT status);
	HRESULT(STDMETHODCALLTYPE *OnSmsNewClass0Message) (IMbnSmsEvents *This, IMbnSms *sms, MBN_SMS_FORMAT smsFormat, SAFEARRAY *readMsgs);
	HRESULT(STDMETHODCALLTYPE *OnSmsDeleteComplete) (IMbnSmsEvents *This, IMbnSms *sms, ULONG requestID, HRESULT status);
	HRESULT(STDMETHODCALLTYPE *OnSmsStatusChange) (IMbnSmsEvents *This, IMbnSms *sms);
	END_INTERFACE
} IMbnSmsEventsVtbl;
interface IMbnSmsEvents
{
	CONST_VTBL struct IMbnSmsEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnSmsEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnSmsEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnSmsEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnSmsEvents_OnSmsConfigurationChange(This,sms) ( (This)->lpVtbl -> OnSmsConfigurationChange(This,sms) )
#define IMbnSmsEvents_OnSetSmsConfigurationComplete(This,sms,requestID,status) ( (This)->lpVtbl -> OnSetSmsConfigurationComplete(This,sms,requestID,status) )
#define IMbnSmsEvents_OnSmsSendComplete(This,sms,requestID,status) ( (This)->lpVtbl -> OnSmsSendComplete(This,sms,requestID,status) )
#define IMbnSmsEvents_OnSmsReadComplete(This,sms,smsFormat,readMsgs,moreMsgs,requestID,status) ( (This)->lpVtbl -> OnSmsReadComplete(This,sms,smsFormat,readMsgs,moreMsgs,requestID,status) )
#define IMbnSmsEvents_OnSmsNewClass0Message(This,sms,smsFormat,readMsgs) ( (This)->lpVtbl -> OnSmsNewClass0Message(This,sms,smsFormat,readMsgs) )
#define IMbnSmsEvents_OnSmsDeleteComplete(This,sms,requestID,status) ( (This)->lpVtbl -> OnSmsDeleteComplete(This,sms,requestID,status) )
#define IMbnSmsEvents_OnSmsStatusChange(This,sms) ( (This)->lpVtbl -> OnSmsStatusChange(This,sms) )
#endif
#endif
#ifndef __IMbnServiceActivation_INTERFACE_DEFINED__
#define __IMbnServiceActivation_INTERFACE_DEFINED__
extern const IID IID_IMbnServiceActivation;
typedef struct IMbnServiceActivationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnServiceActivation *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnServiceActivation *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnServiceActivation *This);
	HRESULT(STDMETHODCALLTYPE *Activate) (IMbnServiceActivation *This, SAFEARRAY *vendorSpecificData, ULONG *requestID);
	END_INTERFACE
} IMbnServiceActivationVtbl;
interface IMbnServiceActivation
{
	CONST_VTBL struct IMbnServiceActivationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnServiceActivation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnServiceActivation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnServiceActivation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnServiceActivation_Activate(This,vendorSpecificData,requestID) ( (This)->lpVtbl -> Activate(This,vendorSpecificData,requestID) )
#endif
#endif
#ifndef __IMbnServiceActivationEvents_INTERFACE_DEFINED__
#define __IMbnServiceActivationEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnServiceActivationEvents;
typedef struct IMbnServiceActivationEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnServiceActivationEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnServiceActivationEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnServiceActivationEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnActivationComplete) (IMbnServiceActivationEvents *This, IMbnServiceActivation *serviceActivation, SAFEARRAY *vendorSpecificData, ULONG requestID, HRESULT status, ULONG networkError);
	END_INTERFACE
} IMbnServiceActivationEventsVtbl;
interface IMbnServiceActivationEvents
{
	CONST_VTBL struct IMbnServiceActivationEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnServiceActivationEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnServiceActivationEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnServiceActivationEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnServiceActivationEvents_OnActivationComplete(This,serviceActivation,vendorSpecificData,requestID,status,networkError) ( (This)->lpVtbl -> OnActivationComplete(This,serviceActivation,vendorSpecificData,requestID,status,networkError) )
#endif
#endif
#ifndef __IMbnVendorSpecificOperation_INTERFACE_DEFINED__
#define __IMbnVendorSpecificOperation_INTERFACE_DEFINED__
extern const IID IID_IMbnVendorSpecificOperation;
typedef struct IMbnVendorSpecificOperationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnVendorSpecificOperation *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnVendorSpecificOperation *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnVendorSpecificOperation *This);
	HRESULT(STDMETHODCALLTYPE *SetVendorSpecific) (IMbnVendorSpecificOperation *This, SAFEARRAY *vendorSpecificData, ULONG *requestID);
	END_INTERFACE
} IMbnVendorSpecificOperationVtbl;
interface IMbnVendorSpecificOperation
{
	CONST_VTBL struct IMbnVendorSpecificOperationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnVendorSpecificOperation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnVendorSpecificOperation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnVendorSpecificOperation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnVendorSpecificOperation_SetVendorSpecific(This,vendorSpecificData,requestID) ( (This)->lpVtbl -> SetVendorSpecific(This,vendorSpecificData,requestID) )
#endif
#endif
#ifndef __IMbnVendorSpecificEvents_INTERFACE_DEFINED__
#define __IMbnVendorSpecificEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnVendorSpecificEvents;
typedef struct IMbnVendorSpecificEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnVendorSpecificEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnVendorSpecificEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnVendorSpecificEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnEventNotification) (IMbnVendorSpecificEvents *This, IMbnVendorSpecificOperation *vendorOperation, SAFEARRAY *vendorSpecificData);
	HRESULT(STDMETHODCALLTYPE *OnSetVendorSpecificComplete) (IMbnVendorSpecificEvents *This, IMbnVendorSpecificOperation *vendorOperation, SAFEARRAY *vendorSpecificData, ULONG requestID);
	END_INTERFACE
} IMbnVendorSpecificEventsVtbl;
interface IMbnVendorSpecificEvents
{
	CONST_VTBL struct IMbnVendorSpecificEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnVendorSpecificEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnVendorSpecificEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnVendorSpecificEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnVendorSpecificEvents_OnEventNotification(This,vendorOperation,vendorSpecificData) ( (This)->lpVtbl -> OnEventNotification(This,vendorOperation,vendorSpecificData) )
#define IMbnVendorSpecificEvents_OnSetVendorSpecificComplete(This,vendorOperation,vendorSpecificData,requestID) ( (This)->lpVtbl -> OnSetVendorSpecificComplete(This,vendorOperation,vendorSpecificData,requestID) )
#endif
#endif
#ifndef __IMbnInterfaceManager_INTERFACE_DEFINED__
#define __IMbnInterfaceManager_INTERFACE_DEFINED__
extern const IID IID_IMbnInterfaceManager;
typedef struct IMbnInterfaceManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnInterfaceManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnInterfaceManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnInterfaceManager *This);
	HRESULT(STDMETHODCALLTYPE *GetInterface) (IMbnInterfaceManager *This, LPCWSTR interfaceID, IMbnInterface **mbnInterface);
	HRESULT(STDMETHODCALLTYPE *GetInterfaces) (IMbnInterfaceManager *This, SAFEARRAY **mbnInterfaces);
	END_INTERFACE
} IMbnInterfaceManagerVtbl;
interface IMbnInterfaceManager
{
	CONST_VTBL struct IMbnInterfaceManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnInterfaceManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnInterfaceManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnInterfaceManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnInterfaceManager_GetInterface(This,interfaceID,mbnInterface) ( (This)->lpVtbl -> GetInterface(This,interfaceID,mbnInterface) )
#define IMbnInterfaceManager_GetInterfaces(This,mbnInterfaces) ( (This)->lpVtbl -> GetInterfaces(This,mbnInterfaces) )
#endif
#endif
#ifndef __IMbnInterfaceManagerEvents_INTERFACE_DEFINED__
#define __IMbnInterfaceManagerEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnInterfaceManagerEvents;
typedef struct IMbnInterfaceManagerEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnInterfaceManagerEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnInterfaceManagerEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnInterfaceManagerEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnInterfaceArrival) (IMbnInterfaceManagerEvents *This, IMbnInterface *newInterface);
	HRESULT(STDMETHODCALLTYPE *OnInterfaceRemoval) (IMbnInterfaceManagerEvents *This, IMbnInterface *oldInterface);
	END_INTERFACE
} IMbnInterfaceManagerEventsVtbl;
interface IMbnInterfaceManagerEvents
{
	CONST_VTBL struct IMbnInterfaceManagerEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnInterfaceManagerEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnInterfaceManagerEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnInterfaceManagerEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnInterfaceManagerEvents_OnInterfaceArrival(This,newInterface) ( (This)->lpVtbl -> OnInterfaceArrival(This,newInterface) )
#define IMbnInterfaceManagerEvents_OnInterfaceRemoval(This,oldInterface) ( (This)->lpVtbl -> OnInterfaceRemoval(This,oldInterface) )
#endif
#endif
#ifndef __IMbnConnectionManager_INTERFACE_DEFINED__
#define __IMbnConnectionManager_INTERFACE_DEFINED__
extern const IID IID_IMbnConnectionManager;
typedef struct IMbnConnectionManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnConnectionManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnConnectionManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnConnectionManager *This);
	HRESULT(STDMETHODCALLTYPE *GetConnection) (IMbnConnectionManager *This, LPCWSTR connectionID, IMbnConnection **mbnConnection);
	HRESULT(STDMETHODCALLTYPE *GetConnections) (IMbnConnectionManager *This, SAFEARRAY **mbnConnections);
	END_INTERFACE
} IMbnConnectionManagerVtbl;
interface IMbnConnectionManager
{
	CONST_VTBL struct IMbnConnectionManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnConnectionManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnConnectionManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnConnectionManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnConnectionManager_GetConnection(This,connectionID,mbnConnection) ( (This)->lpVtbl -> GetConnection(This,connectionID,mbnConnection) )
#define IMbnConnectionManager_GetConnections(This,mbnConnections) ( (This)->lpVtbl -> GetConnections(This,mbnConnections) )
#endif
#endif
#ifndef __IMbnConnectionManagerEvents_INTERFACE_DEFINED__
#define __IMbnConnectionManagerEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnConnectionManagerEvents;
typedef struct IMbnConnectionManagerEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnConnectionManagerEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnConnectionManagerEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnConnectionManagerEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnConnectionArrival) (IMbnConnectionManagerEvents *This, IMbnConnection *newConnection);
	HRESULT(STDMETHODCALLTYPE *OnConnectionRemoval) (IMbnConnectionManagerEvents *This, IMbnConnection *oldConnection);
	END_INTERFACE
} IMbnConnectionManagerEventsVtbl;
interface IMbnConnectionManagerEvents
{
	CONST_VTBL struct IMbnConnectionManagerEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnConnectionManagerEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnConnectionManagerEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnConnectionManagerEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnConnectionManagerEvents_OnConnectionArrival(This,newConnection) ( (This)->lpVtbl -> OnConnectionArrival(This,newConnection) )
#define IMbnConnectionManagerEvents_OnConnectionRemoval(This,oldConnection) ( (This)->lpVtbl -> OnConnectionRemoval(This,oldConnection) )
#endif
#endif
#ifndef __IMbnConnectionProfileManagerEvents_INTERFACE_DEFINED__
#define __IMbnConnectionProfileManagerEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnConnectionProfileManagerEvents;
typedef struct IMbnConnectionProfileManagerEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnConnectionProfileManagerEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnConnectionProfileManagerEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnConnectionProfileManagerEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnConnectionProfileArrival) (IMbnConnectionProfileManagerEvents *This, IMbnConnectionProfile *newConnectionProfile);
	HRESULT(STDMETHODCALLTYPE *OnConnectionProfileRemoval) (IMbnConnectionProfileManagerEvents *This, IMbnConnectionProfile *oldConnectionProfile);
	END_INTERFACE
} IMbnConnectionProfileManagerEventsVtbl;
interface IMbnConnectionProfileManagerEvents
{
	CONST_VTBL struct IMbnConnectionProfileManagerEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnConnectionProfileManagerEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnConnectionProfileManagerEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnConnectionProfileManagerEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnConnectionProfileManagerEvents_OnConnectionProfileArrival(This,newConnectionProfile) ( (This)->lpVtbl -> OnConnectionProfileArrival(This,newConnectionProfile) )
#define IMbnConnectionProfileManagerEvents_OnConnectionProfileRemoval(This,oldConnectionProfile) ( (This)->lpVtbl -> OnConnectionProfileRemoval(This,oldConnectionProfile) )
#endif
#endif
#ifndef __IMbnRadio_INTERFACE_DEFINED__
#define __IMbnRadio_INTERFACE_DEFINED__
extern const IID IID_IMbnRadio;
typedef struct IMbnRadioVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnRadio *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnRadio *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnRadio *This);
	HRESULT(STDMETHODCALLTYPE *get_SoftwareRadioState) (IMbnRadio *This, MBN_RADIO *SoftwareRadioState);
	HRESULT(STDMETHODCALLTYPE *get_HardwareRadioState) (IMbnRadio *This, MBN_RADIO *HardwareRadioState);
	HRESULT(STDMETHODCALLTYPE *SetSoftwareRadioState) (IMbnRadio *This, MBN_RADIO radioState, ULONG *requestID);
	END_INTERFACE
} IMbnRadioVtbl;
interface IMbnRadio
{
	CONST_VTBL struct IMbnRadioVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnRadio_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnRadio_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnRadio_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnRadio_get_SoftwareRadioState(This,SoftwareRadioState) ( (This)->lpVtbl -> get_SoftwareRadioState(This,SoftwareRadioState) )
#define IMbnRadio_get_HardwareRadioState(This,HardwareRadioState) ( (This)->lpVtbl -> get_HardwareRadioState(This,HardwareRadioState) )
#define IMbnRadio_SetSoftwareRadioState(This,radioState,requestID) ( (This)->lpVtbl -> SetSoftwareRadioState(This,radioState,requestID) )
#endif
#endif
#ifndef __IMbnRadioEvents_INTERFACE_DEFINED__
#define __IMbnRadioEvents_INTERFACE_DEFINED__
extern const IID IID_IMbnRadioEvents;
typedef struct IMbnRadioEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMbnRadioEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMbnRadioEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMbnRadioEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnRadioStateChange) (IMbnRadioEvents *This, IMbnRadio *newInterface);
	HRESULT(STDMETHODCALLTYPE *OnSetSoftwareRadioStateComplete) (IMbnRadioEvents *This, IMbnRadio *newInterface, ULONG requestID, HRESULT status);
	END_INTERFACE
} IMbnRadioEventsVtbl;
interface IMbnRadioEvents
{
	CONST_VTBL struct IMbnRadioEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMbnRadioEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMbnRadioEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMbnRadioEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMbnRadioEvents_OnRadioStateChange(This,newInterface) ( (This)->lpVtbl -> OnRadioStateChange(This,newInterface) )
#define IMbnRadioEvents_OnSetSoftwareRadioStateComplete(This,newInterface,requestID,status) ( (This)->lpVtbl -> OnSetSoftwareRadioStateComplete(This,newInterface,requestID,status) )
#endif
#endif
extern const CLSID CLSID_MbnConnectionProfileManager;
extern const CLSID CLSID_MbnInterfaceManager;
extern const CLSID CLSID_MbnConnectionManager;
#endif
#endif
