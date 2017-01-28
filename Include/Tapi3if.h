/*+@@file@@----------------------------------------------------------------*//*!
 \file		Tapi3if.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 31 16:14:21 2016
 \date		Modified on Sun Jul 31 16:14:21 2016
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
#ifndef __tapi3if_h__
#define __tapi3if_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITTAPI_FWD_DEFINED__
#define __ITTAPI_FWD_DEFINED__
typedef interface ITTAPI ITTAPI;
#endif
#ifndef __ITTAPI2_FWD_DEFINED__
#define __ITTAPI2_FWD_DEFINED__
typedef interface ITTAPI2 ITTAPI2;
#endif
#ifndef __ITMediaSupport_FWD_DEFINED__
#define __ITMediaSupport_FWD_DEFINED__
typedef interface ITMediaSupport ITMediaSupport;
#endif
#ifndef __ITPluggableTerminalClassInfo_FWD_DEFINED__
#define __ITPluggableTerminalClassInfo_FWD_DEFINED__
typedef interface ITPluggableTerminalClassInfo ITPluggableTerminalClassInfo;
#endif
#ifndef __ITPluggableTerminalSuperclassInfo_FWD_DEFINED__
#define __ITPluggableTerminalSuperclassInfo_FWD_DEFINED__
typedef interface ITPluggableTerminalSuperclassInfo ITPluggableTerminalSuperclassInfo;
#endif
#ifndef __ITTerminalSupport_FWD_DEFINED__
#define __ITTerminalSupport_FWD_DEFINED__
typedef interface ITTerminalSupport ITTerminalSupport;
#endif
#ifndef __ITTerminalSupport2_FWD_DEFINED__
#define __ITTerminalSupport2_FWD_DEFINED__
typedef interface ITTerminalSupport2 ITTerminalSupport2;
#endif
#ifndef __ITAddress_FWD_DEFINED__
#define __ITAddress_FWD_DEFINED__
typedef interface ITAddress ITAddress;
#endif
#ifndef __ITAddress2_FWD_DEFINED__
#define __ITAddress2_FWD_DEFINED__
typedef interface ITAddress2 ITAddress2;
#endif
#ifndef __ITAddressCapabilities_FWD_DEFINED__
#define __ITAddressCapabilities_FWD_DEFINED__
typedef interface ITAddressCapabilities ITAddressCapabilities;
#endif
#ifndef __ITPhone_FWD_DEFINED__
#define __ITPhone_FWD_DEFINED__
typedef interface ITPhone ITPhone;
#endif
#ifndef __ITAutomatedPhoneControl_FWD_DEFINED__
#define __ITAutomatedPhoneControl_FWD_DEFINED__
typedef interface ITAutomatedPhoneControl ITAutomatedPhoneControl;
#endif
#ifndef __ITBasicCallControl_FWD_DEFINED__
#define __ITBasicCallControl_FWD_DEFINED__
typedef interface ITBasicCallControl ITBasicCallControl;
#endif
#ifndef __ITCallInfo_FWD_DEFINED__
#define __ITCallInfo_FWD_DEFINED__
typedef interface ITCallInfo ITCallInfo;
#endif
#ifndef __ITCallInfo2_FWD_DEFINED__
#define __ITCallInfo2_FWD_DEFINED__
typedef interface ITCallInfo2 ITCallInfo2;
#endif
#ifndef __ITTerminal_FWD_DEFINED__
#define __ITTerminal_FWD_DEFINED__
typedef interface ITTerminal ITTerminal;
#endif
#ifndef __ITMultiTrackTerminal_FWD_DEFINED__
#define __ITMultiTrackTerminal_FWD_DEFINED__
typedef interface ITMultiTrackTerminal ITMultiTrackTerminal;
#endif
#ifndef __ITFileTrack_FWD_DEFINED__
#define __ITFileTrack_FWD_DEFINED__
typedef interface ITFileTrack ITFileTrack;
#endif
#ifndef __ITMediaPlayback_FWD_DEFINED__
#define __ITMediaPlayback_FWD_DEFINED__
typedef interface ITMediaPlayback ITMediaPlayback;
#endif
#ifndef __ITMediaRecord_FWD_DEFINED__
#define __ITMediaRecord_FWD_DEFINED__
typedef interface ITMediaRecord ITMediaRecord;
#endif
#ifndef __ITMediaControl_FWD_DEFINED__
#define __ITMediaControl_FWD_DEFINED__
typedef interface ITMediaControl ITMediaControl;
#endif
#ifndef __ITBasicAudioTerminal_FWD_DEFINED__
#define __ITBasicAudioTerminal_FWD_DEFINED__
typedef interface ITBasicAudioTerminal ITBasicAudioTerminal;
#endif
#ifndef __ITStaticAudioTerminal_FWD_DEFINED__
#define __ITStaticAudioTerminal_FWD_DEFINED__
typedef interface ITStaticAudioTerminal ITStaticAudioTerminal;
#endif
#ifndef __ITCallHub_FWD_DEFINED__
#define __ITCallHub_FWD_DEFINED__
typedef interface ITCallHub ITCallHub;
#endif
#ifndef __ITLegacyAddressMediaControl_FWD_DEFINED__
#define __ITLegacyAddressMediaControl_FWD_DEFINED__
typedef interface ITLegacyAddressMediaControl ITLegacyAddressMediaControl;
#endif
#ifndef __ITPrivateEvent_FWD_DEFINED__
#define __ITPrivateEvent_FWD_DEFINED__
typedef interface ITPrivateEvent ITPrivateEvent;
#endif
#ifndef __ITLegacyAddressMediaControl2_FWD_DEFINED__
#define __ITLegacyAddressMediaControl2_FWD_DEFINED__
typedef interface ITLegacyAddressMediaControl2 ITLegacyAddressMediaControl2;
#endif
#ifndef __ITLegacyCallMediaControl_FWD_DEFINED__
#define __ITLegacyCallMediaControl_FWD_DEFINED__
typedef interface ITLegacyCallMediaControl ITLegacyCallMediaControl;
#endif
#ifndef __ITLegacyCallMediaControl2_FWD_DEFINED__
#define __ITLegacyCallMediaControl2_FWD_DEFINED__
typedef interface ITLegacyCallMediaControl2 ITLegacyCallMediaControl2;
#endif
#ifndef __ITDetectTone_FWD_DEFINED__
#define __ITDetectTone_FWD_DEFINED__
typedef interface ITDetectTone ITDetectTone;
#endif
#ifndef __ITCustomTone_FWD_DEFINED__
#define __ITCustomTone_FWD_DEFINED__
typedef interface ITCustomTone ITCustomTone;
#endif
#ifndef __IEnumPhone_FWD_DEFINED__
#define __IEnumPhone_FWD_DEFINED__
typedef interface IEnumPhone IEnumPhone;
#endif
#ifndef __IEnumTerminal_FWD_DEFINED__
#define __IEnumTerminal_FWD_DEFINED__
typedef interface IEnumTerminal IEnumTerminal;
#endif
#ifndef __IEnumTerminalClass_FWD_DEFINED__
#define __IEnumTerminalClass_FWD_DEFINED__
typedef interface IEnumTerminalClass IEnumTerminalClass;
#endif
#ifndef __IEnumCall_FWD_DEFINED__
#define __IEnumCall_FWD_DEFINED__
typedef interface IEnumCall IEnumCall;
#endif
#ifndef __IEnumAddress_FWD_DEFINED__
#define __IEnumAddress_FWD_DEFINED__
typedef interface IEnumAddress IEnumAddress;
#endif
#ifndef __IEnumCallHub_FWD_DEFINED__
#define __IEnumCallHub_FWD_DEFINED__
typedef interface IEnumCallHub IEnumCallHub;
#endif
#ifndef __IEnumBstr_FWD_DEFINED__
#define __IEnumBstr_FWD_DEFINED__
typedef interface IEnumBstr IEnumBstr;
#endif
#ifndef __IEnumPluggableTerminalClassInfo_FWD_DEFINED__
#define __IEnumPluggableTerminalClassInfo_FWD_DEFINED__
typedef interface IEnumPluggableTerminalClassInfo IEnumPluggableTerminalClassInfo;
#endif
#ifndef __IEnumPluggableSuperclassInfo_FWD_DEFINED__
#define __IEnumPluggableSuperclassInfo_FWD_DEFINED__
typedef interface IEnumPluggableSuperclassInfo IEnumPluggableSuperclassInfo;
#endif
#ifndef __ITPhoneEvent_FWD_DEFINED__
#define __ITPhoneEvent_FWD_DEFINED__
typedef interface ITPhoneEvent ITPhoneEvent;
#endif
#ifndef __ITCallStateEvent_FWD_DEFINED__
#define __ITCallStateEvent_FWD_DEFINED__
typedef interface ITCallStateEvent ITCallStateEvent;
#endif
#ifndef __ITPhoneDeviceSpecificEvent_FWD_DEFINED__
#define __ITPhoneDeviceSpecificEvent_FWD_DEFINED__
typedef interface ITPhoneDeviceSpecificEvent ITPhoneDeviceSpecificEvent;
#endif
#ifndef __ITCallMediaEvent_FWD_DEFINED__
#define __ITCallMediaEvent_FWD_DEFINED__
typedef interface ITCallMediaEvent ITCallMediaEvent;
#endif
#ifndef __ITDigitDetectionEvent_FWD_DEFINED__
#define __ITDigitDetectionEvent_FWD_DEFINED__
typedef interface ITDigitDetectionEvent ITDigitDetectionEvent;
#endif
#ifndef __ITDigitGenerationEvent_FWD_DEFINED__
#define __ITDigitGenerationEvent_FWD_DEFINED__
typedef interface ITDigitGenerationEvent ITDigitGenerationEvent;
#endif
#ifndef __ITDigitsGatheredEvent_FWD_DEFINED__
#define __ITDigitsGatheredEvent_FWD_DEFINED__
typedef interface ITDigitsGatheredEvent ITDigitsGatheredEvent;
#endif
#ifndef __ITToneDetectionEvent_FWD_DEFINED__
#define __ITToneDetectionEvent_FWD_DEFINED__
typedef interface ITToneDetectionEvent ITToneDetectionEvent;
#endif
#ifndef __ITTAPIObjectEvent_FWD_DEFINED__
#define __ITTAPIObjectEvent_FWD_DEFINED__
typedef interface ITTAPIObjectEvent ITTAPIObjectEvent;
#endif
#ifndef __ITTAPIObjectEvent2_FWD_DEFINED__
#define __ITTAPIObjectEvent2_FWD_DEFINED__
typedef interface ITTAPIObjectEvent2 ITTAPIObjectEvent2;
#endif
#ifndef __ITTAPIEventNotification_FWD_DEFINED__
#define __ITTAPIEventNotification_FWD_DEFINED__
typedef interface ITTAPIEventNotification ITTAPIEventNotification;
#endif
#ifndef __ITCallHubEvent_FWD_DEFINED__
#define __ITCallHubEvent_FWD_DEFINED__
typedef interface ITCallHubEvent ITCallHubEvent;
#endif
#ifndef __ITAddressEvent_FWD_DEFINED__
#define __ITAddressEvent_FWD_DEFINED__
typedef interface ITAddressEvent ITAddressEvent;
#endif
#ifndef __ITAddressDeviceSpecificEvent_FWD_DEFINED__
#define __ITAddressDeviceSpecificEvent_FWD_DEFINED__
typedef interface ITAddressDeviceSpecificEvent ITAddressDeviceSpecificEvent;
#endif
#ifndef __ITFileTerminalEvent_FWD_DEFINED__
#define __ITFileTerminalEvent_FWD_DEFINED__
typedef interface ITFileTerminalEvent ITFileTerminalEvent;
#endif
#ifndef __ITTTSTerminalEvent_FWD_DEFINED__
#define __ITTTSTerminalEvent_FWD_DEFINED__
typedef interface ITTTSTerminalEvent ITTTSTerminalEvent;
#endif
#ifndef __ITASRTerminalEvent_FWD_DEFINED__
#define __ITASRTerminalEvent_FWD_DEFINED__
typedef interface ITASRTerminalEvent ITASRTerminalEvent;
#endif
#ifndef __ITToneTerminalEvent_FWD_DEFINED__
#define __ITToneTerminalEvent_FWD_DEFINED__
typedef interface ITToneTerminalEvent ITToneTerminalEvent;
#endif
#ifndef __ITQOSEvent_FWD_DEFINED__
#define __ITQOSEvent_FWD_DEFINED__
typedef interface ITQOSEvent ITQOSEvent;
#endif
#ifndef __ITCallInfoChangeEvent_FWD_DEFINED__
#define __ITCallInfoChangeEvent_FWD_DEFINED__
typedef interface ITCallInfoChangeEvent ITCallInfoChangeEvent;
#endif
#ifndef __ITRequest_FWD_DEFINED__
#define __ITRequest_FWD_DEFINED__
typedef interface ITRequest ITRequest;
#endif
#ifndef __ITRequestEvent_FWD_DEFINED__
#define __ITRequestEvent_FWD_DEFINED__
typedef interface ITRequestEvent ITRequestEvent;
#endif
#ifndef __ITCollection_FWD_DEFINED__
#define __ITCollection_FWD_DEFINED__
typedef interface ITCollection ITCollection;
#endif
#ifndef __ITCollection2_FWD_DEFINED__
#define __ITCollection2_FWD_DEFINED__
typedef interface ITCollection2 ITCollection2;
#endif
#ifndef __ITForwardInformation_FWD_DEFINED__
#define __ITForwardInformation_FWD_DEFINED__
typedef interface ITForwardInformation ITForwardInformation;
#endif
#ifndef __ITForwardInformation2_FWD_DEFINED__
#define __ITForwardInformation2_FWD_DEFINED__
typedef interface ITForwardInformation2 ITForwardInformation2;
#endif
#ifndef __ITAddressTranslation_FWD_DEFINED__
#define __ITAddressTranslation_FWD_DEFINED__
typedef interface ITAddressTranslation ITAddressTranslation;
#endif
#ifndef __ITAddressTranslationInfo_FWD_DEFINED__
#define __ITAddressTranslationInfo_FWD_DEFINED__
typedef interface ITAddressTranslationInfo ITAddressTranslationInfo;
#endif
#ifndef __ITLocationInfo_FWD_DEFINED__
#define __ITLocationInfo_FWD_DEFINED__
typedef interface ITLocationInfo ITLocationInfo;
#endif
#ifndef __IEnumLocation_FWD_DEFINED__
#define __IEnumLocation_FWD_DEFINED__
typedef interface IEnumLocation IEnumLocation;
#endif
#ifndef __ITCallingCard_FWD_DEFINED__
#define __ITCallingCard_FWD_DEFINED__
typedef interface ITCallingCard ITCallingCard;
#endif
#ifndef __IEnumCallingCard_FWD_DEFINED__
#define __IEnumCallingCard_FWD_DEFINED__
typedef interface IEnumCallingCard IEnumCallingCard;
#endif
#ifndef __ITCallNotificationEvent_FWD_DEFINED__
#define __ITCallNotificationEvent_FWD_DEFINED__
typedef interface ITCallNotificationEvent ITCallNotificationEvent;
#endif
#ifndef __ITDispatchMapper_FWD_DEFINED__
#define __ITDispatchMapper_FWD_DEFINED__
typedef interface ITDispatchMapper ITDispatchMapper;
#endif
#ifndef __ITStreamControl_FWD_DEFINED__
#define __ITStreamControl_FWD_DEFINED__
typedef interface ITStreamControl ITStreamControl;
#endif
#ifndef __ITStream_FWD_DEFINED__
#define __ITStream_FWD_DEFINED__
typedef interface ITStream ITStream;
#endif
#ifndef __IEnumStream_FWD_DEFINED__
#define __IEnumStream_FWD_DEFINED__
typedef interface IEnumStream IEnumStream;
#endif
#ifndef __ITSubStreamControl_FWD_DEFINED__
#define __ITSubStreamControl_FWD_DEFINED__
typedef interface ITSubStreamControl ITSubStreamControl;
#endif
#ifndef __ITSubStream_FWD_DEFINED__
#define __ITSubStream_FWD_DEFINED__
typedef interface ITSubStream ITSubStream;
#endif
#ifndef __IEnumSubStream_FWD_DEFINED__
#define __IEnumSubStream_FWD_DEFINED__
typedef interface IEnumSubStream IEnumSubStream;
#endif
#ifndef __ITLegacyWaveSupport_FWD_DEFINED__
#define __ITLegacyWaveSupport_FWD_DEFINED__
typedef interface ITLegacyWaveSupport ITLegacyWaveSupport;
#endif
#ifndef __ITBasicCallControl2_FWD_DEFINED__
#define __ITBasicCallControl2_FWD_DEFINED__
typedef interface ITBasicCallControl2 ITBasicCallControl2;
#endif
#ifndef __ITScriptableAudioFormat_FWD_DEFINED__
#define __ITScriptableAudioFormat_FWD_DEFINED__
typedef interface ITScriptableAudioFormat ITScriptableAudioFormat;
#endif
#include <oaidl.h>
#include <strmif.h>
#if 0
typedef long TAPIHWND;
#endif
#ifdef _X86_
typedef long TAPIHWND;
#else
typedef LONGLONG TAPIHWND;
#endif
typedef long TAPI_DIGITMODE;
typedef enum TAPI_TONEMODE
{
	TTM_RINGBACK = 0x2,
	TTM_BUSY = 0x4,
	TTM_BEEP = 0x8,
	TTM_BILLING = 0x10
} TAPI_TONEMODE;
typedef enum TAPI_GATHERTERM
{
	TGT_BUFFERFULL = 0x1,
	TGT_TERMDIGIT = 0x2,
	TGT_FIRSTTIMEOUT = 0x4,
	TGT_INTERTIMEOUT = 0x8,
	TGT_CANCEL = 0x10
} TAPI_GATHERTERM;
typedef struct TAPI_CUSTOMTONE
{
	DWORD dwFrequency;
	DWORD dwCadenceOn;
	DWORD dwCadenceOff;
	DWORD dwVolume;
} TAPI_CUSTOMTONE;
typedef struct TAPI_CUSTOMTONE *LPTAPI_CUSTOMTONE;
typedef struct TAPI_DETECTTONE
{
	DWORD dwAppSpecific;
	DWORD dwDuration;
	DWORD dwFrequency1;
	DWORD dwFrequency2;
	DWORD dwFrequency3;
} TAPI_DETECTTONE;
typedef struct TAPI_DETECTTONE *LPTAPI_DETECTTONE;
typedef enum ADDRESS_EVENT
{
	AE_STATE = 0,
	AE_CAPSCHANGE = (AE_STATE + 1),
	AE_RINGING = (AE_CAPSCHANGE + 1),
	AE_CONFIGCHANGE = (AE_RINGING + 1),
	AE_FORWARD = (AE_CONFIGCHANGE + 1),
	AE_NEWTERMINAL = (AE_FORWARD + 1),
	AE_REMOVETERMINAL = (AE_NEWTERMINAL + 1),
	AE_MSGWAITON = (AE_REMOVETERMINAL + 1),
	AE_MSGWAITOFF = (AE_MSGWAITON + 1),
	AE_LASTITEM = AE_MSGWAITOFF
} ADDRESS_EVENT;
typedef enum ADDRESS_STATE
{
	AS_INSERVICE = 0,
	AS_OUTOFSERVICE = (AS_INSERVICE + 1)
} ADDRESS_STATE;
typedef enum CALL_STATE
{
	CS_IDLE = 0,
	CS_INPROGRESS = (CS_IDLE + 1),
	CS_CONNECTED = (CS_INPROGRESS + 1),
	CS_DISCONNECTED = (CS_CONNECTED + 1),
	CS_OFFERING = (CS_DISCONNECTED + 1),
	CS_HOLD = (CS_OFFERING + 1),
	CS_QUEUED = (CS_HOLD + 1),
	CS_LASTITEM = CS_QUEUED
} CALL_STATE;
typedef enum CALL_STATE_EVENT_CAUSE
{
	CEC_NONE = 0,
	CEC_DISCONNECT_NORMAL = (CEC_NONE + 1),
	CEC_DISCONNECT_BUSY = (CEC_DISCONNECT_NORMAL + 1),
	CEC_DISCONNECT_BADADDRESS = (CEC_DISCONNECT_BUSY + 1),
	CEC_DISCONNECT_NOANSWER = (CEC_DISCONNECT_BADADDRESS + 1),
	CEC_DISCONNECT_CANCELLED = (CEC_DISCONNECT_NOANSWER + 1),
	CEC_DISCONNECT_REJECTED = (CEC_DISCONNECT_CANCELLED + 1),
	CEC_DISCONNECT_FAILED = (CEC_DISCONNECT_REJECTED + 1),
	CEC_DISCONNECT_BLOCKED = (CEC_DISCONNECT_FAILED + 1)
} CALL_STATE_EVENT_CAUSE;
typedef enum CALL_MEDIA_EVENT
{
	CME_NEW_STREAM = 0,
	CME_STREAM_FAIL = (CME_NEW_STREAM + 1),
	CME_TERMINAL_FAIL = (CME_STREAM_FAIL + 1),
	CME_STREAM_NOT_USED = (CME_TERMINAL_FAIL + 1),
	CME_STREAM_ACTIVE = (CME_STREAM_NOT_USED + 1),
	CME_STREAM_INACTIVE = (CME_STREAM_ACTIVE + 1),
	CME_LASTITEM = CME_STREAM_INACTIVE
} CALL_MEDIA_EVENT;
typedef enum CALL_MEDIA_EVENT_CAUSE
{
	CMC_UNKNOWN = 0,
	CMC_BAD_DEVICE = (CMC_UNKNOWN + 1),
	CMC_CONNECT_FAIL = (CMC_BAD_DEVICE + 1),
	CMC_LOCAL_REQUEST = (CMC_CONNECT_FAIL + 1),
	CMC_REMOTE_REQUEST = (CMC_LOCAL_REQUEST + 1),
	CMC_MEDIA_TIMEOUT = (CMC_REMOTE_REQUEST + 1),
	CMC_MEDIA_RECOVERED = (CMC_MEDIA_TIMEOUT + 1),
	CMC_QUALITY_OF_SERVICE = (CMC_MEDIA_RECOVERED + 1)
} CALL_MEDIA_EVENT_CAUSE;
typedef enum DISCONNECT_CODE
{
	DC_NORMAL = 0,
	DC_NOANSWER = (DC_NORMAL + 1),
	DC_REJECTED = (DC_NOANSWER + 1)
} DISCONNECT_CODE;
typedef enum TERMINAL_STATE
{
	TS_INUSE = 0,
	TS_NOTINUSE = (TS_INUSE + 1)
} TERMINAL_STATE;
typedef enum TERMINAL_DIRECTION
{
	TD_CAPTURE = 0,
	TD_RENDER = (TD_CAPTURE + 1),
	TD_BIDIRECTIONAL = (TD_RENDER + 1),
	TD_MULTITRACK_MIXED = (TD_BIDIRECTIONAL + 1),
	TD_NONE = (TD_MULTITRACK_MIXED + 1)
} TERMINAL_DIRECTION;
typedef enum TERMINAL_TYPE
{
	TT_STATIC = 0,
	TT_DYNAMIC = (TT_STATIC + 1)
} TERMINAL_TYPE;
typedef enum CALL_PRIVILEGE
{
	CP_OWNER = 0,
	CP_MONITOR = (CP_OWNER + 1)
} CALL_PRIVILEGE;
typedef enum TAPI_EVENT
{
	TE_TAPIOBJECT = 0x1,
	TE_ADDRESS = 0x2,
	TE_CALLNOTIFICATION = 0x4,
	TE_CALLSTATE = 0x8,
	TE_CALLMEDIA = 0x10,
	TE_CALLHUB = 0x20,
	TE_CALLINFOCHANGE = 0x40,
	TE_PRIVATE = 0x80,
	TE_REQUEST = 0x100,
	TE_AGENT = 0x200,
	TE_AGENTSESSION = 0x400,
	TE_QOSEVENT = 0x800,
	TE_AGENTHANDLER = 0x1000,
	TE_ACDGROUP = 0x2000,
	TE_QUEUE = 0x4000,
	TE_DIGITEVENT = 0x8000,
	TE_GENERATEEVENT = 0x10000,
	TE_ASRTERMINAL = 0x20000,
	TE_TTSTERMINAL = 0x40000,
	TE_FILETERMINAL = 0x80000,
	TE_TONETERMINAL = 0x100000,
	TE_PHONEEVENT = 0x200000,
	TE_TONEEVENT = 0x400000,
	TE_GATHERDIGITS = 0x800000,
	TE_ADDRESSDEVSPECIFIC = 0x1000000,
	TE_PHONEDEVSPECIFIC = 0x2000000
} TAPI_EVENT;
typedef enum CALL_NOTIFICATION_EVENT
{
	CNE_OWNER = 0,
	CNE_MONITOR = (CNE_OWNER + 1),
	CNE_LASTITEM = CNE_MONITOR
} CALL_NOTIFICATION_EVENT;
typedef enum CALLHUB_EVENT
{
	CHE_CALLJOIN = 0,
	CHE_CALLLEAVE = (CHE_CALLJOIN + 1),
	CHE_CALLHUBNEW = (CHE_CALLLEAVE + 1),
	CHE_CALLHUBIDLE = (CHE_CALLHUBNEW + 1),
	CHE_LASTITEM = CHE_CALLHUBIDLE
} CALLHUB_EVENT;
typedef enum CALLHUB_STATE
{
	CHS_ACTIVE = 0,
	CHS_IDLE = (CHS_ACTIVE + 1)
} CALLHUB_STATE;
typedef enum TAPIOBJECT_EVENT
{
	TE_ADDRESSCREATE = 0,
	TE_ADDRESSREMOVE = (TE_ADDRESSCREATE + 1),
	TE_REINIT = (TE_ADDRESSREMOVE + 1),
	TE_TRANSLATECHANGE = (TE_REINIT + 1),
	TE_ADDRESSCLOSE = (TE_TRANSLATECHANGE + 1),
	TE_PHONECREATE = (TE_ADDRESSCLOSE + 1),
	TE_PHONEREMOVE = (TE_PHONECREATE + 1)
} TAPIOBJECT_EVENT;
typedef enum TAPI_OBJECT_TYPE
{
	TOT_NONE = 0,
	TOT_TAPI = (TOT_NONE + 1),
	TOT_ADDRESS = (TOT_TAPI + 1),
	TOT_TERMINAL = (TOT_ADDRESS + 1),
	TOT_CALL = (TOT_TERMINAL + 1),
	TOT_CALLHUB = (TOT_CALL + 1),
	TOT_PHONE = (TOT_CALLHUB + 1)
} TAPI_OBJECT_TYPE;
typedef enum QOS_SERVICE_LEVEL
{
	QSL_NEEDED = 1,
	QSL_IF_AVAILABLE = 2,
	QSL_BEST_EFFORT = 3
} QOS_SERVICE_LEVEL;
typedef enum QOS_EVENT
{
	QE_NOQOS = 1,
	QE_ADMISSIONFAILURE = 2,
	QE_POLICYFAILURE = 3,
	QE_GENERICERROR = 4,
	QE_LASTITEM = QE_GENERICERROR
} QOS_EVENT;
typedef enum CALLINFOCHANGE_CAUSE
{
	CIC_OTHER = 0,
	CIC_DEVSPECIFIC = (CIC_OTHER + 1),
	CIC_BEARERMODE = (CIC_DEVSPECIFIC + 1),
	CIC_RATE = (CIC_BEARERMODE + 1),
	CIC_APPSPECIFIC = (CIC_RATE + 1),
	CIC_CALLID = (CIC_APPSPECIFIC + 1),
	CIC_RELATEDCALLID = (CIC_CALLID + 1),
	CIC_ORIGIN = (CIC_RELATEDCALLID + 1),
	CIC_REASON = (CIC_ORIGIN + 1),
	CIC_COMPLETIONID = (CIC_REASON + 1),
	CIC_NUMOWNERINCR = (CIC_COMPLETIONID + 1),
	CIC_NUMOWNERDECR = (CIC_NUMOWNERINCR + 1),
	CIC_NUMMONITORS = (CIC_NUMOWNERDECR + 1),
	CIC_TRUNK = (CIC_NUMMONITORS + 1),
	CIC_CALLERID = (CIC_TRUNK + 1),
	CIC_CALLEDID = (CIC_CALLERID + 1),
	CIC_CONNECTEDID = (CIC_CALLEDID + 1),
	CIC_REDIRECTIONID = (CIC_CONNECTEDID + 1),
	CIC_REDIRECTINGID = (CIC_REDIRECTIONID + 1),
	CIC_USERUSERINFO = (CIC_REDIRECTINGID + 1),
	CIC_HIGHLEVELCOMP = (CIC_USERUSERINFO + 1),
	CIC_LOWLEVELCOMP = (CIC_HIGHLEVELCOMP + 1),
	CIC_CHARGINGINFO = (CIC_LOWLEVELCOMP + 1),
	CIC_TREATMENT = (CIC_CHARGINGINFO + 1),
	CIC_CALLDATA = (CIC_TREATMENT + 1),
	CIC_PRIVILEGE = (CIC_CALLDATA + 1),
	CIC_MEDIATYPE = (CIC_PRIVILEGE + 1),
	CIC_LASTITEM = CIC_MEDIATYPE
} CALLINFOCHANGE_CAUSE;
typedef enum CALLINFO_LONG
{
	CIL_MEDIATYPESAVAILABLE = 0,
	CIL_BEARERMODE = (CIL_MEDIATYPESAVAILABLE + 1),
	CIL_CALLERIDADDRESSTYPE = (CIL_BEARERMODE + 1),
	CIL_CALLEDIDADDRESSTYPE = (CIL_CALLERIDADDRESSTYPE + 1),
	CIL_CONNECTEDIDADDRESSTYPE = (CIL_CALLEDIDADDRESSTYPE + 1),
	CIL_REDIRECTIONIDADDRESSTYPE = (CIL_CONNECTEDIDADDRESSTYPE + 1),
	CIL_REDIRECTINGIDADDRESSTYPE = (CIL_REDIRECTIONIDADDRESSTYPE + 1),
	CIL_ORIGIN = (CIL_REDIRECTINGIDADDRESSTYPE + 1),
	CIL_REASON = (CIL_ORIGIN + 1),
	CIL_APPSPECIFIC = (CIL_REASON + 1),
	CIL_CALLPARAMSFLAGS = (CIL_APPSPECIFIC + 1),
	CIL_CALLTREATMENT = (CIL_CALLPARAMSFLAGS + 1),
	CIL_MINRATE = (CIL_CALLTREATMENT + 1),
	CIL_MAXRATE = (CIL_MINRATE + 1),
	CIL_COUNTRYCODE = (CIL_MAXRATE + 1),
	CIL_CALLID = (CIL_COUNTRYCODE + 1),
	CIL_RELATEDCALLID = (CIL_CALLID + 1),
	CIL_COMPLETIONID = (CIL_RELATEDCALLID + 1),
	CIL_NUMBEROFOWNERS = (CIL_COMPLETIONID + 1),
	CIL_NUMBEROFMONITORS = (CIL_NUMBEROFOWNERS + 1),
	CIL_TRUNK = (CIL_NUMBEROFMONITORS + 1),
	CIL_RATE = (CIL_TRUNK + 1),
	CIL_GENERATEDIGITDURATION = (CIL_RATE + 1),
	CIL_MONITORDIGITMODES = (CIL_GENERATEDIGITDURATION + 1),
	CIL_MONITORMEDIAMODES = (CIL_MONITORDIGITMODES + 1)
} CALLINFO_LONG;
typedef enum CALLINFO_STRING
{
	CIS_CALLERIDNAME = 0,
	CIS_CALLERIDNUMBER = (CIS_CALLERIDNAME + 1),
	CIS_CALLEDIDNAME = (CIS_CALLERIDNUMBER + 1),
	CIS_CALLEDIDNUMBER = (CIS_CALLEDIDNAME + 1),
	CIS_CONNECTEDIDNAME = (CIS_CALLEDIDNUMBER + 1),
	CIS_CONNECTEDIDNUMBER = (CIS_CONNECTEDIDNAME + 1),
	CIS_REDIRECTIONIDNAME = (CIS_CONNECTEDIDNUMBER + 1),
	CIS_REDIRECTIONIDNUMBER = (CIS_REDIRECTIONIDNAME + 1),
	CIS_REDIRECTINGIDNAME = (CIS_REDIRECTIONIDNUMBER + 1),
	CIS_REDIRECTINGIDNUMBER = (CIS_REDIRECTINGIDNAME + 1),
	CIS_CALLEDPARTYFRIENDLYNAME = (CIS_REDIRECTINGIDNUMBER + 1),
	CIS_COMMENT = (CIS_CALLEDPARTYFRIENDLYNAME + 1),
	CIS_DISPLAYABLEADDRESS = (CIS_COMMENT + 1),
	CIS_CALLINGPARTYID = (CIS_DISPLAYABLEADDRESS + 1)
} CALLINFO_STRING;
typedef enum CALLINFO_BUFFER
{
	CIB_USERUSERINFO = 0,
	CIB_DEVSPECIFICBUFFER = (CIB_USERUSERINFO + 1),
	CIB_CALLDATABUFFER = (CIB_DEVSPECIFICBUFFER + 1),
	CIB_CHARGINGINFOBUFFER = (CIB_CALLDATABUFFER + 1),
	CIB_HIGHLEVELCOMPATIBILITYBUFFER = (CIB_CHARGINGINFOBUFFER + 1),
	CIB_LOWLEVELCOMPATIBILITYBUFFER = (CIB_HIGHLEVELCOMPATIBILITYBUFFER + 1)
} CALLINFO_BUFFER;
typedef enum ADDRESS_CAPABILITY
{
	AC_ADDRESSTYPES = 0,
	AC_BEARERMODES = (AC_ADDRESSTYPES + 1),
	AC_MAXACTIVECALLS = (AC_BEARERMODES + 1),
	AC_MAXONHOLDCALLS = (AC_MAXACTIVECALLS + 1),
	AC_MAXONHOLDPENDINGCALLS = (AC_MAXONHOLDCALLS + 1),
	AC_MAXNUMCONFERENCE = (AC_MAXONHOLDPENDINGCALLS + 1),
	AC_MAXNUMTRANSCONF = (AC_MAXNUMCONFERENCE + 1),
	AC_MONITORDIGITSUPPORT = (AC_MAXNUMTRANSCONF + 1),
	AC_GENERATEDIGITSUPPORT = (AC_MONITORDIGITSUPPORT + 1),
	AC_GENERATETONEMODES = (AC_GENERATEDIGITSUPPORT + 1),
	AC_GENERATETONEMAXNUMFREQ = (AC_GENERATETONEMODES + 1),
	AC_MONITORTONEMAXNUMFREQ = (AC_GENERATETONEMAXNUMFREQ + 1),
	AC_MONITORTONEMAXNUMENTRIES = (AC_MONITORTONEMAXNUMFREQ + 1),
	AC_DEVCAPFLAGS = (AC_MONITORTONEMAXNUMENTRIES + 1),
	AC_ANSWERMODES = (AC_DEVCAPFLAGS + 1),
	AC_LINEFEATURES = (AC_ANSWERMODES + 1),
	AC_SETTABLEDEVSTATUS = (AC_LINEFEATURES + 1),
	AC_PARKSUPPORT = (AC_SETTABLEDEVSTATUS + 1),
	AC_CALLERIDSUPPORT = (AC_PARKSUPPORT + 1),
	AC_CALLEDIDSUPPORT = (AC_CALLERIDSUPPORT + 1),
	AC_CONNECTEDIDSUPPORT = (AC_CALLEDIDSUPPORT + 1),
	AC_REDIRECTIONIDSUPPORT = (AC_CONNECTEDIDSUPPORT + 1),
	AC_REDIRECTINGIDSUPPORT = (AC_REDIRECTIONIDSUPPORT + 1),
	AC_ADDRESSCAPFLAGS = (AC_REDIRECTINGIDSUPPORT + 1),
	AC_CALLFEATURES1 = (AC_ADDRESSCAPFLAGS + 1),
	AC_CALLFEATURES2 = (AC_CALLFEATURES1 + 1),
	AC_REMOVEFROMCONFCAPS = (AC_CALLFEATURES2 + 1),
	AC_REMOVEFROMCONFSTATE = (AC_REMOVEFROMCONFCAPS + 1),
	AC_TRANSFERMODES = (AC_REMOVEFROMCONFSTATE + 1),
	AC_ADDRESSFEATURES = (AC_TRANSFERMODES + 1),
	AC_PREDICTIVEAUTOTRANSFERSTATES = (AC_ADDRESSFEATURES + 1),
	AC_MAXCALLDATASIZE = (AC_PREDICTIVEAUTOTRANSFERSTATES + 1),
	AC_LINEID = (AC_MAXCALLDATASIZE + 1),
	AC_ADDRESSID = (AC_LINEID + 1),
	AC_FORWARDMODES = (AC_ADDRESSID + 1),
	AC_MAXFORWARDENTRIES = (AC_FORWARDMODES + 1),
	AC_MAXSPECIFICENTRIES = (AC_MAXFORWARDENTRIES + 1),
	AC_MINFWDNUMRINGS = (AC_MAXSPECIFICENTRIES + 1),
	AC_MAXFWDNUMRINGS = (AC_MINFWDNUMRINGS + 1),
	AC_MAXCALLCOMPLETIONS = (AC_MAXFWDNUMRINGS + 1),
	AC_CALLCOMPLETIONCONDITIONS = (AC_MAXCALLCOMPLETIONS + 1),
	AC_CALLCOMPLETIONMODES = (AC_CALLCOMPLETIONCONDITIONS + 1),
	AC_PERMANENTDEVICEID = (AC_CALLCOMPLETIONMODES + 1),
	AC_GATHERDIGITSMINTIMEOUT = (AC_PERMANENTDEVICEID + 1),
	AC_GATHERDIGITSMAXTIMEOUT = (AC_GATHERDIGITSMINTIMEOUT + 1),
	AC_GENERATEDIGITMINDURATION = (AC_GATHERDIGITSMAXTIMEOUT + 1),
	AC_GENERATEDIGITMAXDURATION = (AC_GENERATEDIGITMINDURATION + 1),
	AC_GENERATEDIGITDEFAULTDURATION = (AC_GENERATEDIGITMAXDURATION + 1)
} ADDRESS_CAPABILITY;
typedef enum ADDRESS_CAPABILITY_STRING
{
	ACS_PROTOCOL = 0,
	ACS_ADDRESSDEVICESPECIFIC = (ACS_PROTOCOL + 1),
	ACS_LINEDEVICESPECIFIC = (ACS_ADDRESSDEVICESPECIFIC + 1),
	ACS_PROVIDERSPECIFIC = (ACS_LINEDEVICESPECIFIC + 1),
	ACS_SWITCHSPECIFIC = (ACS_PROVIDERSPECIFIC + 1),
	ACS_PERMANENTDEVICEGUID = (ACS_SWITCHSPECIFIC + 1)
} ADDRESS_CAPABILITY_STRING;
typedef enum FULLDUPLEX_SUPPORT
{
	FDS_SUPPORTED = 0,
	FDS_NOTSUPPORTED = (FDS_SUPPORTED + 1),
	FDS_UNKNOWN = (FDS_NOTSUPPORTED + 1)
} FULLDUPLEX_SUPPORT;
typedef enum FINISH_MODE
{
	FM_ASTRANSFER = 0,
	FM_ASCONFERENCE = (FM_ASTRANSFER + 1)
} FINISH_MODE;
typedef enum PHONE_PRIVILEGE
{
	PP_OWNER = 0,
	PP_MONITOR = (PP_OWNER + 1)
} PHONE_PRIVILEGE;
typedef enum PHONE_HOOK_SWITCH_DEVICE
{
	PHSD_HANDSET = 0x1,
	PHSD_SPEAKERPHONE = 0x2,
	PHSD_HEADSET = 0x4
} PHONE_HOOK_SWITCH_DEVICE;
typedef enum PHONE_HOOK_SWITCH_STATE
{
	PHSS_ONHOOK = 0x1,
	PHSS_OFFHOOK_MIC_ONLY = 0x2,
	PHSS_OFFHOOK_SPEAKER_ONLY = 0x4,
	PHSS_OFFHOOK = 0x8
} PHONE_HOOK_SWITCH_STATE;
typedef enum PHONE_LAMP_MODE
{
	LM_DUMMY = 0x1,
	LM_OFF = 0x2,
	LM_STEADY = 0x4,
	LM_WINK = 0x8,
	LM_FLASH = 0x10,
	LM_FLUTTER = 0x20,
	LM_BROKENFLUTTER = 0x40,
	LM_UNKNOWN = 0x80
} PHONE_LAMP_MODE;
typedef enum PHONECAPS_LONG
{
	PCL_HOOKSWITCHES = 0,
	PCL_HANDSETHOOKSWITCHMODES = (PCL_HOOKSWITCHES + 1),
	PCL_HEADSETHOOKSWITCHMODES = (PCL_HANDSETHOOKSWITCHMODES + 1),
	PCL_SPEAKERPHONEHOOKSWITCHMODES = (PCL_HEADSETHOOKSWITCHMODES + 1),
	PCL_DISPLAYNUMROWS = (PCL_SPEAKERPHONEHOOKSWITCHMODES + 1),
	PCL_DISPLAYNUMCOLUMNS = (PCL_DISPLAYNUMROWS + 1),
	PCL_NUMRINGMODES = (PCL_DISPLAYNUMCOLUMNS + 1),
	PCL_NUMBUTTONLAMPS = (PCL_NUMRINGMODES + 1),
	PCL_GENERICPHONE = (PCL_NUMBUTTONLAMPS + 1)
} PHONECAPS_LONG;
typedef enum PHONECAPS_STRING
{
	PCS_PHONENAME = 0,
	PCS_PHONEINFO = (PCS_PHONENAME + 1),
	PCS_PROVIDERINFO = (PCS_PHONEINFO + 1)
} PHONECAPS_STRING;
typedef enum PHONECAPS_BUFFER
{
	PCB_DEVSPECIFICBUFFER = 0
} PHONECAPS_BUFFER;
typedef enum PHONE_BUTTON_STATE
{
	PBS_UP = 0x1,
	PBS_DOWN = 0x2,
	PBS_UNKNOWN = 0x4,
	PBS_UNAVAIL = 0x8
} PHONE_BUTTON_STATE;
typedef enum PHONE_BUTTON_MODE
{
	PBM_DUMMY = 0,
	PBM_CALL = (PBM_DUMMY + 1),
	PBM_FEATURE = (PBM_CALL + 1),
	PBM_KEYPAD = (PBM_FEATURE + 1),
	PBM_LOCAL = (PBM_KEYPAD + 1),
	PBM_DISPLAY = (PBM_LOCAL + 1)
} PHONE_BUTTON_MODE;
typedef enum PHONE_BUTTON_FUNCTION
{
	PBF_UNKNOWN = 0,
	PBF_CONFERENCE = (PBF_UNKNOWN + 1),
	PBF_TRANSFER = (PBF_CONFERENCE + 1),
	PBF_DROP = (PBF_TRANSFER + 1),
	PBF_HOLD = (PBF_DROP + 1),
	PBF_RECALL = (PBF_HOLD + 1),
	PBF_DISCONNECT = (PBF_RECALL + 1),
	PBF_CONNECT = (PBF_DISCONNECT + 1),
	PBF_MSGWAITON = (PBF_CONNECT + 1),
	PBF_MSGWAITOFF = (PBF_MSGWAITON + 1),
	PBF_SELECTRING = (PBF_MSGWAITOFF + 1),
	PBF_ABBREVDIAL = (PBF_SELECTRING + 1),
	PBF_FORWARD = (PBF_ABBREVDIAL + 1),
	PBF_PICKUP = (PBF_FORWARD + 1),
	PBF_RINGAGAIN = (PBF_PICKUP + 1),
	PBF_PARK = (PBF_RINGAGAIN + 1),
	PBF_REJECT = (PBF_PARK + 1),
	PBF_REDIRECT = (PBF_REJECT + 1),
	PBF_MUTE = (PBF_REDIRECT + 1),
	PBF_VOLUMEUP = (PBF_MUTE + 1),
	PBF_VOLUMEDOWN = (PBF_VOLUMEUP + 1),
	PBF_SPEAKERON = (PBF_VOLUMEDOWN + 1),
	PBF_SPEAKEROFF = (PBF_SPEAKERON + 1),
	PBF_FLASH = (PBF_SPEAKEROFF + 1),
	PBF_DATAON = (PBF_FLASH + 1),
	PBF_DATAOFF = (PBF_DATAON + 1),
	PBF_DONOTDISTURB = (PBF_DATAOFF + 1),
	PBF_INTERCOM = (PBF_DONOTDISTURB + 1),
	PBF_BRIDGEDAPP = (PBF_INTERCOM + 1),
	PBF_BUSY = (PBF_BRIDGEDAPP + 1),
	PBF_CALLAPP = (PBF_BUSY + 1),
	PBF_DATETIME = (PBF_CALLAPP + 1),
	PBF_DIRECTORY = (PBF_DATETIME + 1),
	PBF_COVER = (PBF_DIRECTORY + 1),
	PBF_CALLID = (PBF_COVER + 1),
	PBF_LASTNUM = (PBF_CALLID + 1),
	PBF_NIGHTSRV = (PBF_LASTNUM + 1),
	PBF_SENDCALLS = (PBF_NIGHTSRV + 1),
	PBF_MSGINDICATOR = (PBF_SENDCALLS + 1),
	PBF_REPDIAL = (PBF_MSGINDICATOR + 1),
	PBF_SETREPDIAL = (PBF_REPDIAL + 1),
	PBF_SYSTEMSPEED = (PBF_SETREPDIAL + 1),
	PBF_STATIONSPEED = (PBF_SYSTEMSPEED + 1),
	PBF_CAMPON = (PBF_STATIONSPEED + 1),
	PBF_SAVEREPEAT = (PBF_CAMPON + 1),
	PBF_QUEUECALL = (PBF_SAVEREPEAT + 1),
	PBF_NONE = (PBF_QUEUECALL + 1),
	PBF_SEND = (PBF_NONE + 1)
} PHONE_BUTTON_FUNCTION;
typedef enum PHONE_TONE
{
	PT_KEYPADZERO = 0,
	PT_KEYPADONE = (PT_KEYPADZERO + 1),
	PT_KEYPADTWO = (PT_KEYPADONE + 1),
	PT_KEYPADTHREE = (PT_KEYPADTWO + 1),
	PT_KEYPADFOUR = (PT_KEYPADTHREE + 1),
	PT_KEYPADFIVE = (PT_KEYPADFOUR + 1),
	PT_KEYPADSIX = (PT_KEYPADFIVE + 1),
	PT_KEYPADSEVEN = (PT_KEYPADSIX + 1),
	PT_KEYPADEIGHT = (PT_KEYPADSEVEN + 1),
	PT_KEYPADNINE = (PT_KEYPADEIGHT + 1),
	PT_KEYPADSTAR = (PT_KEYPADNINE + 1),
	PT_KEYPADPOUND = (PT_KEYPADSTAR + 1),
	PT_KEYPADA = (PT_KEYPADPOUND + 1),
	PT_KEYPADB = (PT_KEYPADA + 1),
	PT_KEYPADC = (PT_KEYPADB + 1),
	PT_KEYPADD = (PT_KEYPADC + 1),
	PT_NORMALDIALTONE = (PT_KEYPADD + 1),
	PT_EXTERNALDIALTONE = (PT_NORMALDIALTONE + 1),
	PT_BUSY = (PT_EXTERNALDIALTONE + 1),
	PT_RINGBACK = (PT_BUSY + 1),
	PT_ERRORTONE = (PT_RINGBACK + 1),
	PT_SILENCE = (PT_ERRORTONE + 1)
} PHONE_TONE;
typedef enum PHONE_EVENT
{
	PE_DISPLAY = 0,
	PE_LAMPMODE = (PE_DISPLAY + 1),
	PE_RINGMODE = (PE_LAMPMODE + 1),
	PE_RINGVOLUME = (PE_RINGMODE + 1),
	PE_HOOKSWITCH = (PE_RINGVOLUME + 1),
	PE_CAPSCHANGE = (PE_HOOKSWITCH + 1),
	PE_BUTTON = (PE_CAPSCHANGE + 1),
	PE_CLOSE = (PE_BUTTON + 1),
	PE_NUMBERGATHERED = (PE_CLOSE + 1),
	PE_DIALING = (PE_NUMBERGATHERED + 1),
	PE_ANSWER = (PE_DIALING + 1),
	PE_DISCONNECT = (PE_ANSWER + 1),
	PE_LASTITEM = PE_DISCONNECT
} PHONE_EVENT;
#define	INTERFACEMASK	( 0xff0000 )
#define	DISPIDMASK	( 0xffff )
#define	IDISPTAPI	( 0x10000 )
#define	IDISPTAPICALLCENTER	( 0x20000 )
#define	IDISPCALLINFO	( 0x10000 )
#define	IDISPBASICCALLCONTROL	( 0x20000 )
#define	IDISPLEGACYCALLMEDIACONTROL	( 0x30000 )
#define	IDISPAGGREGATEDMSPCALLOBJ	( 0x40000 )
#define	IDISPADDRESS	( 0x10000 )
#define	IDISPADDRESSCAPABILITIES	( 0x20000 )
#define	IDISPMEDIASUPPORT	( 0x30000 )
#define	IDISPADDRESSTRANSLATION	( 0x40000 )
#define	IDISPLEGACYADDRESSMEDIACONTROL	( 0x50000 )
#define	IDISPAGGREGATEDMSPADDRESSOBJ	( 0x60000 )
#define	IDISPPHONE	( 0x10000 )
#define	IDISPAPC	( 0x20000 )
#define	IDISPMULTITRACK	( 0x10000 )
#define	IDISPMEDIACONTROL	( 0x20000 )
#define	IDISPMEDIARECORD	( 0x30000 )
#define	IDISPMEDIAPLAYBACK	( 0x40000 )
#define	IDISPFILETRACK	( 0x10000 )
extern RPC_IF_HANDLE __MIDL_itf_tapi3if_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3if_0000_0000_v0_0_s_ifspec;
#ifndef __ITTAPI_INTERFACE_DEFINED__
#define __ITTAPI_INTERFACE_DEFINED__
extern const IID IID_ITTAPI;
typedef struct ITTAPIVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITTAPI * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITTAPI * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITTAPI * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITTAPI * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITTAPI * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITTAPI * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITTAPI * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ITTAPI * This);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (ITTAPI * This);
	HRESULT(STDMETHODCALLTYPE * get_Addresses) (ITTAPI * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateAddresses) (ITTAPI * This, IEnumAddress ** ppEnumAddress);
	HRESULT(STDMETHODCALLTYPE * RegisterCallNotifications) (ITTAPI * This, ITAddress * pAddress, VARIANT_BOOL fMonitor, VARIANT_BOOL fOwner, long lMediaTypes, long lCallbackInstance, long *plRegister);
	HRESULT(STDMETHODCALLTYPE * UnregisterNotifications) (ITTAPI * This, long lRegister);
	HRESULT(STDMETHODCALLTYPE * get_CallHubs) (ITTAPI * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateCallHubs) (ITTAPI * This, IEnumCallHub ** ppEnumCallHub);
	HRESULT(STDMETHODCALLTYPE * SetCallHubTracking) (ITTAPI * This, VARIANT pAddresses, VARIANT_BOOL bTracking);
	HRESULT(STDMETHODCALLTYPE * EnumeratePrivateTAPIObjects) (ITTAPI * This, IEnumUnknown ** ppEnumUnknown);
	HRESULT(STDMETHODCALLTYPE * get_PrivateTAPIObjects) (ITTAPI * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * RegisterRequestRecipient) (ITTAPI * This, long lRegistrationInstance, long lRequestMode, VARIANT_BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * SetAssistedTelephonyPriority) (ITTAPI * This, BSTR pAppFilename, VARIANT_BOOL fPriority);
	HRESULT(STDMETHODCALLTYPE * SetApplicationPriority) (ITTAPI * This, BSTR pAppFilename, long lMediaType, VARIANT_BOOL fPriority);
	HRESULT(STDMETHODCALLTYPE * put_EventFilter) (ITTAPI * This, long lFilterMask);
	HRESULT(STDMETHODCALLTYPE * get_EventFilter) (ITTAPI * This, long *plFilterMask);
	END_INTERFACE
}  ITTAPIVtbl;
interface ITTAPI
{
	CONST_VTBL struct ITTAPIVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITTAPI_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITTAPI_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITTAPI_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITTAPI_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITTAPI_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITTAPI_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITTAPI_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITTAPI_Initialize(This) ( (This)->lpVtbl -> Initialize(This) )
#define ITTAPI_Shutdown(This) ( (This)->lpVtbl -> Shutdown(This) )
#define ITTAPI_get_Addresses(This,pVariant) ( (This)->lpVtbl -> get_Addresses(This,pVariant) )
#define ITTAPI_EnumerateAddresses(This,ppEnumAddress) ( (This)->lpVtbl -> EnumerateAddresses(This,ppEnumAddress) )
#define ITTAPI_RegisterCallNotifications(This,pAddress,fMonitor,fOwner,lMediaTypes,lCallbackInstance,plRegister) ( (This)->lpVtbl -> RegisterCallNotifications(This,pAddress,fMonitor,fOwner,lMediaTypes,lCallbackInstance,plRegister) )
#define ITTAPI_UnregisterNotifications(This,lRegister) ( (This)->lpVtbl -> UnregisterNotifications(This,lRegister) )
#define ITTAPI_get_CallHubs(This,pVariant) ( (This)->lpVtbl -> get_CallHubs(This,pVariant) )
#define ITTAPI_EnumerateCallHubs(This,ppEnumCallHub) ( (This)->lpVtbl -> EnumerateCallHubs(This,ppEnumCallHub) )
#define ITTAPI_SetCallHubTracking(This,pAddresses,bTracking) ( (This)->lpVtbl -> SetCallHubTracking(This,pAddresses,bTracking) )
#define ITTAPI_EnumeratePrivateTAPIObjects(This,ppEnumUnknown) ( (This)->lpVtbl -> EnumeratePrivateTAPIObjects(This,ppEnumUnknown) )
#define ITTAPI_get_PrivateTAPIObjects(This,pVariant) ( (This)->lpVtbl -> get_PrivateTAPIObjects(This,pVariant) )
#define ITTAPI_RegisterRequestRecipient(This,lRegistrationInstance,lRequestMode,fEnable) ( (This)->lpVtbl -> RegisterRequestRecipient(This,lRegistrationInstance,lRequestMode,fEnable) )
#define ITTAPI_SetAssistedTelephonyPriority(This,pAppFilename,fPriority) ( (This)->lpVtbl -> SetAssistedTelephonyPriority(This,pAppFilename,fPriority) )
#define ITTAPI_SetApplicationPriority(This,pAppFilename,lMediaType,fPriority) ( (This)->lpVtbl -> SetApplicationPriority(This,pAppFilename,lMediaType,fPriority) )
#define ITTAPI_put_EventFilter(This,lFilterMask) ( (This)->lpVtbl -> put_EventFilter(This,lFilterMask) )
#define ITTAPI_get_EventFilter(This,plFilterMask) ( (This)->lpVtbl -> get_EventFilter(This,plFilterMask) )
#endif
#endif
#ifndef __ITTAPI2_INTERFACE_DEFINED__
#define __ITTAPI2_INTERFACE_DEFINED__
extern const IID IID_ITTAPI2;
typedef struct ITTAPI2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITTAPI2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITTAPI2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITTAPI2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITTAPI2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITTAPI2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITTAPI2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITTAPI2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ITTAPI2 * This);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (ITTAPI2 * This);
	HRESULT(STDMETHODCALLTYPE * get_Addresses) (ITTAPI2 * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateAddresses) (ITTAPI2 * This, IEnumAddress ** ppEnumAddress);
	HRESULT(STDMETHODCALLTYPE * RegisterCallNotifications) (ITTAPI2 * This, ITAddress * pAddress, VARIANT_BOOL fMonitor, VARIANT_BOOL fOwner, long lMediaTypes, long lCallbackInstance, long *plRegister);
	HRESULT(STDMETHODCALLTYPE * UnregisterNotifications) (ITTAPI2 * This, long lRegister);
	HRESULT(STDMETHODCALLTYPE * get_CallHubs) (ITTAPI2 * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateCallHubs) (ITTAPI2 * This, IEnumCallHub ** ppEnumCallHub);
	HRESULT(STDMETHODCALLTYPE * SetCallHubTracking) (ITTAPI2 * This, VARIANT pAddresses, VARIANT_BOOL bTracking);
	HRESULT(STDMETHODCALLTYPE * EnumeratePrivateTAPIObjects) (ITTAPI2 * This, IEnumUnknown ** ppEnumUnknown);
	HRESULT(STDMETHODCALLTYPE * get_PrivateTAPIObjects) (ITTAPI2 * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * RegisterRequestRecipient) (ITTAPI2 * This, long lRegistrationInstance, long lRequestMode, VARIANT_BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * SetAssistedTelephonyPriority) (ITTAPI2 * This, BSTR pAppFilename, VARIANT_BOOL fPriority);
	HRESULT(STDMETHODCALLTYPE * SetApplicationPriority) (ITTAPI2 * This, BSTR pAppFilename, long lMediaType, VARIANT_BOOL fPriority);
	HRESULT(STDMETHODCALLTYPE * put_EventFilter) (ITTAPI2 * This, long lFilterMask);
	HRESULT(STDMETHODCALLTYPE * get_EventFilter) (ITTAPI2 * This, long *plFilterMask);
	HRESULT(STDMETHODCALLTYPE * get_Phones) (ITTAPI2 * This, VARIANT * pPhones);
	HRESULT(STDMETHODCALLTYPE * EnumeratePhones) (ITTAPI2 * This, IEnumPhone ** ppEnumPhone);
	HRESULT(STDMETHODCALLTYPE * CreateEmptyCollectionObject) (ITTAPI2 * This, ITCollection2 ** ppCollection);
	END_INTERFACE
}  ITTAPI2Vtbl;
interface ITTAPI2
{
	CONST_VTBL struct ITTAPI2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITTAPI2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITTAPI2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITTAPI2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITTAPI2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITTAPI2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITTAPI2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITTAPI2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITTAPI2_Initialize(This) ( (This)->lpVtbl -> Initialize(This) )
#define ITTAPI2_Shutdown(This) ( (This)->lpVtbl -> Shutdown(This) )
#define ITTAPI2_get_Addresses(This,pVariant) ( (This)->lpVtbl -> get_Addresses(This,pVariant) )
#define ITTAPI2_EnumerateAddresses(This,ppEnumAddress) ( (This)->lpVtbl -> EnumerateAddresses(This,ppEnumAddress) )
#define ITTAPI2_RegisterCallNotifications(This,pAddress,fMonitor,fOwner,lMediaTypes,lCallbackInstance,plRegister) ( (This)->lpVtbl -> RegisterCallNotifications(This,pAddress,fMonitor,fOwner,lMediaTypes,lCallbackInstance,plRegister) )
#define ITTAPI2_UnregisterNotifications(This,lRegister) ( (This)->lpVtbl -> UnregisterNotifications(This,lRegister) )
#define ITTAPI2_get_CallHubs(This,pVariant) ( (This)->lpVtbl -> get_CallHubs(This,pVariant) )
#define ITTAPI2_EnumerateCallHubs(This,ppEnumCallHub) ( (This)->lpVtbl -> EnumerateCallHubs(This,ppEnumCallHub) )
#define ITTAPI2_SetCallHubTracking(This,pAddresses,bTracking) ( (This)->lpVtbl -> SetCallHubTracking(This,pAddresses,bTracking) )
#define ITTAPI2_EnumeratePrivateTAPIObjects(This,ppEnumUnknown) ( (This)->lpVtbl -> EnumeratePrivateTAPIObjects(This,ppEnumUnknown) )
#define ITTAPI2_get_PrivateTAPIObjects(This,pVariant) ( (This)->lpVtbl -> get_PrivateTAPIObjects(This,pVariant) )
#define ITTAPI2_RegisterRequestRecipient(This,lRegistrationInstance,lRequestMode,fEnable) ( (This)->lpVtbl -> RegisterRequestRecipient(This,lRegistrationInstance,lRequestMode,fEnable) )
#define ITTAPI2_SetAssistedTelephonyPriority(This,pAppFilename,fPriority) ( (This)->lpVtbl -> SetAssistedTelephonyPriority(This,pAppFilename,fPriority) )
#define ITTAPI2_SetApplicationPriority(This,pAppFilename,lMediaType,fPriority) ( (This)->lpVtbl -> SetApplicationPriority(This,pAppFilename,lMediaType,fPriority) )
#define ITTAPI2_put_EventFilter(This,lFilterMask) ( (This)->lpVtbl -> put_EventFilter(This,lFilterMask) )
#define ITTAPI2_get_EventFilter(This,plFilterMask) ( (This)->lpVtbl -> get_EventFilter(This,plFilterMask) )
#define ITTAPI2_get_Phones(This,pPhones) ( (This)->lpVtbl -> get_Phones(This,pPhones) )
#define ITTAPI2_EnumeratePhones(This,ppEnumPhone) ( (This)->lpVtbl -> EnumeratePhones(This,ppEnumPhone) )
#define ITTAPI2_CreateEmptyCollectionObject(This,ppCollection) ( (This)->lpVtbl -> CreateEmptyCollectionObject(This,ppCollection) )
#endif
#endif
#ifndef __ITMediaSupport_INTERFACE_DEFINED__
#define __ITMediaSupport_INTERFACE_DEFINED__
extern const IID IID_ITMediaSupport;
typedef struct ITMediaSupportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITMediaSupport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITMediaSupport * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITMediaSupport * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITMediaSupport * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITMediaSupport * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITMediaSupport * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITMediaSupport * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_MediaTypes) (ITMediaSupport * This, long *plMediaTypes);
	HRESULT(STDMETHODCALLTYPE * QueryMediaType) (ITMediaSupport * This, long lMediaType, VARIANT_BOOL * pfSupport);
	END_INTERFACE
}  ITMediaSupportVtbl;
interface ITMediaSupport
{
	CONST_VTBL struct ITMediaSupportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITMediaSupport_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITMediaSupport_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITMediaSupport_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITMediaSupport_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITMediaSupport_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITMediaSupport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITMediaSupport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITMediaSupport_get_MediaTypes(This,plMediaTypes) ( (This)->lpVtbl -> get_MediaTypes(This,plMediaTypes) )
#define ITMediaSupport_QueryMediaType(This,lMediaType,pfSupport) ( (This)->lpVtbl -> QueryMediaType(This,lMediaType,pfSupport) )
#endif
#endif
#ifndef __ITPluggableTerminalClassInfo_INTERFACE_DEFINED__
#define __ITPluggableTerminalClassInfo_INTERFACE_DEFINED__
extern const IID IID_ITPluggableTerminalClassInfo;
typedef struct ITPluggableTerminalClassInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITPluggableTerminalClassInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITPluggableTerminalClassInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITPluggableTerminalClassInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITPluggableTerminalClassInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITPluggableTerminalClassInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITPluggableTerminalClassInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITPluggableTerminalClassInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ITPluggableTerminalClassInfo * This, BSTR * pName);
	HRESULT(STDMETHODCALLTYPE * get_Company) (ITPluggableTerminalClassInfo * This, BSTR * pCompany);
	HRESULT(STDMETHODCALLTYPE * get_Version) (ITPluggableTerminalClassInfo * This, BSTR * pVersion);
	HRESULT(STDMETHODCALLTYPE * get_TerminalClass) (ITPluggableTerminalClassInfo * This, BSTR * pTerminalClass);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (ITPluggableTerminalClassInfo * This, BSTR * pCLSID);
	HRESULT(STDMETHODCALLTYPE * get_Direction) (ITPluggableTerminalClassInfo * This, TERMINAL_DIRECTION * pDirection);
	HRESULT(STDMETHODCALLTYPE * get_MediaTypes) (ITPluggableTerminalClassInfo * This, long *pMediaTypes);
	END_INTERFACE
}  ITPluggableTerminalClassInfoVtbl;
interface ITPluggableTerminalClassInfo
{
	CONST_VTBL struct ITPluggableTerminalClassInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITPluggableTerminalClassInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITPluggableTerminalClassInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITPluggableTerminalClassInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITPluggableTerminalClassInfo_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITPluggableTerminalClassInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITPluggableTerminalClassInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITPluggableTerminalClassInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITPluggableTerminalClassInfo_get_Name(This,pName) ( (This)->lpVtbl -> get_Name(This,pName) )
#define ITPluggableTerminalClassInfo_get_Company(This,pCompany) ( (This)->lpVtbl -> get_Company(This,pCompany) )
#define ITPluggableTerminalClassInfo_get_Version(This,pVersion) ( (This)->lpVtbl -> get_Version(This,pVersion) )
#define ITPluggableTerminalClassInfo_get_TerminalClass(This,pTerminalClass) ( (This)->lpVtbl -> get_TerminalClass(This,pTerminalClass) )
#define ITPluggableTerminalClassInfo_get_CLSID(This,pCLSID) ( (This)->lpVtbl -> get_CLSID(This,pCLSID) )
#define ITPluggableTerminalClassInfo_get_Direction(This,pDirection) ( (This)->lpVtbl -> get_Direction(This,pDirection) )
#define ITPluggableTerminalClassInfo_get_MediaTypes(This,pMediaTypes) ( (This)->lpVtbl -> get_MediaTypes(This,pMediaTypes) )
#endif
#endif
#ifndef __ITPluggableTerminalSuperclassInfo_INTERFACE_DEFINED__
#define __ITPluggableTerminalSuperclassInfo_INTERFACE_DEFINED__
extern const IID IID_ITPluggableTerminalSuperclassInfo;
typedef struct ITPluggableTerminalSuperclassInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITPluggableTerminalSuperclassInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITPluggableTerminalSuperclassInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITPluggableTerminalSuperclassInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITPluggableTerminalSuperclassInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITPluggableTerminalSuperclassInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITPluggableTerminalSuperclassInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITPluggableTerminalSuperclassInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ITPluggableTerminalSuperclassInfo * This, BSTR * pName);
	HRESULT(STDMETHODCALLTYPE * get_CLSID) (ITPluggableTerminalSuperclassInfo * This, BSTR * pCLSID);
	END_INTERFACE
}  ITPluggableTerminalSuperclassInfoVtbl;
interface ITPluggableTerminalSuperclassInfo
{
	CONST_VTBL struct ITPluggableTerminalSuperclassInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITPluggableTerminalSuperclassInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITPluggableTerminalSuperclassInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITPluggableTerminalSuperclassInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITPluggableTerminalSuperclassInfo_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITPluggableTerminalSuperclassInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITPluggableTerminalSuperclassInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITPluggableTerminalSuperclassInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITPluggableTerminalSuperclassInfo_get_Name(This,pName) ( (This)->lpVtbl -> get_Name(This,pName) )
#define ITPluggableTerminalSuperclassInfo_get_CLSID(This,pCLSID) ( (This)->lpVtbl -> get_CLSID(This,pCLSID) )
#endif
#endif
#ifndef __ITTerminalSupport_INTERFACE_DEFINED__
#define __ITTerminalSupport_INTERFACE_DEFINED__
extern const IID IID_ITTerminalSupport;
typedef struct ITTerminalSupportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITTerminalSupport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITTerminalSupport * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITTerminalSupport * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITTerminalSupport * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITTerminalSupport * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITTerminalSupport * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITTerminalSupport * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_StaticTerminals) (ITTerminalSupport * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateStaticTerminals) (ITTerminalSupport * This, IEnumTerminal ** ppTerminalEnumerator);
	HRESULT(STDMETHODCALLTYPE * get_DynamicTerminalClasses) (ITTerminalSupport * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateDynamicTerminalClasses) (ITTerminalSupport * This, IEnumTerminalClass ** ppTerminalClassEnumerator);
	HRESULT(STDMETHODCALLTYPE * CreateTerminal) (ITTerminalSupport * This, BSTR pTerminalClass, long lMediaType, TERMINAL_DIRECTION Direction, ITTerminal ** ppTerminal);
	HRESULT(STDMETHODCALLTYPE * GetDefaultStaticTerminal) (ITTerminalSupport * This, long lMediaType, TERMINAL_DIRECTION Direction, ITTerminal ** ppTerminal);
	END_INTERFACE
}  ITTerminalSupportVtbl;
interface ITTerminalSupport
{
	CONST_VTBL struct ITTerminalSupportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITTerminalSupport_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITTerminalSupport_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITTerminalSupport_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITTerminalSupport_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITTerminalSupport_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITTerminalSupport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITTerminalSupport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITTerminalSupport_get_StaticTerminals(This,pVariant) ( (This)->lpVtbl -> get_StaticTerminals(This,pVariant) )
#define ITTerminalSupport_EnumerateStaticTerminals(This,ppTerminalEnumerator) ( (This)->lpVtbl -> EnumerateStaticTerminals(This,ppTerminalEnumerator) )
#define ITTerminalSupport_get_DynamicTerminalClasses(This,pVariant) ( (This)->lpVtbl -> get_DynamicTerminalClasses(This,pVariant) )
#define ITTerminalSupport_EnumerateDynamicTerminalClasses(This,ppTerminalClassEnumerator) ( (This)->lpVtbl -> EnumerateDynamicTerminalClasses(This,ppTerminalClassEnumerator) )
#define ITTerminalSupport_CreateTerminal(This,pTerminalClass,lMediaType,Direction,ppTerminal) ( (This)->lpVtbl -> CreateTerminal(This,pTerminalClass,lMediaType,Direction,ppTerminal) )
#define ITTerminalSupport_GetDefaultStaticTerminal(This,lMediaType,Direction,ppTerminal) ( (This)->lpVtbl -> GetDefaultStaticTerminal(This,lMediaType,Direction,ppTerminal) )
#endif
#endif
#ifndef __ITTerminalSupport2_INTERFACE_DEFINED__
#define __ITTerminalSupport2_INTERFACE_DEFINED__
extern const IID IID_ITTerminalSupport2;
typedef struct ITTerminalSupport2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITTerminalSupport2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITTerminalSupport2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITTerminalSupport2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITTerminalSupport2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITTerminalSupport2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITTerminalSupport2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITTerminalSupport2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_StaticTerminals) (ITTerminalSupport2 * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateStaticTerminals) (ITTerminalSupport2 * This, IEnumTerminal ** ppTerminalEnumerator);
	HRESULT(STDMETHODCALLTYPE * get_DynamicTerminalClasses) (ITTerminalSupport2 * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateDynamicTerminalClasses) (ITTerminalSupport2 * This, IEnumTerminalClass ** ppTerminalClassEnumerator);
	HRESULT(STDMETHODCALLTYPE * CreateTerminal) (ITTerminalSupport2 * This, BSTR pTerminalClass, long lMediaType, TERMINAL_DIRECTION Direction, ITTerminal ** ppTerminal);
	HRESULT(STDMETHODCALLTYPE * GetDefaultStaticTerminal) (ITTerminalSupport2 * This, long lMediaType, TERMINAL_DIRECTION Direction, ITTerminal ** ppTerminal);
	HRESULT(STDMETHODCALLTYPE * get_PluggableSuperclasses) (ITTerminalSupport2 * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumeratePluggableSuperclasses) (ITTerminalSupport2 * This, IEnumPluggableSuperclassInfo ** ppSuperclassEnumerator);
	HRESULT(STDMETHODCALLTYPE * get_PluggableTerminalClasses) (ITTerminalSupport2 * This, BSTR bstrTerminalSuperclass, long lMediaType, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumeratePluggableTerminalClasses) (ITTerminalSupport2 * This, CLSID iidTerminalSuperclass, long lMediaType, IEnumPluggableTerminalClassInfo ** ppClassEnumerator);
	END_INTERFACE
}  ITTerminalSupport2Vtbl;
interface ITTerminalSupport2
{
	CONST_VTBL struct ITTerminalSupport2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITTerminalSupport2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITTerminalSupport2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITTerminalSupport2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITTerminalSupport2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITTerminalSupport2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITTerminalSupport2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITTerminalSupport2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITTerminalSupport2_get_StaticTerminals(This,pVariant) ( (This)->lpVtbl -> get_StaticTerminals(This,pVariant) )
#define ITTerminalSupport2_EnumerateStaticTerminals(This,ppTerminalEnumerator) ( (This)->lpVtbl -> EnumerateStaticTerminals(This,ppTerminalEnumerator) )
#define ITTerminalSupport2_get_DynamicTerminalClasses(This,pVariant) ( (This)->lpVtbl -> get_DynamicTerminalClasses(This,pVariant) )
#define ITTerminalSupport2_EnumerateDynamicTerminalClasses(This,ppTerminalClassEnumerator) ( (This)->lpVtbl -> EnumerateDynamicTerminalClasses(This,ppTerminalClassEnumerator) )
#define ITTerminalSupport2_CreateTerminal(This,pTerminalClass,lMediaType,Direction,ppTerminal) ( (This)->lpVtbl -> CreateTerminal(This,pTerminalClass,lMediaType,Direction,ppTerminal) )
#define ITTerminalSupport2_GetDefaultStaticTerminal(This,lMediaType,Direction,ppTerminal) ( (This)->lpVtbl -> GetDefaultStaticTerminal(This,lMediaType,Direction,ppTerminal) )
#define ITTerminalSupport2_get_PluggableSuperclasses(This,pVariant) ( (This)->lpVtbl -> get_PluggableSuperclasses(This,pVariant) )
#define ITTerminalSupport2_EnumeratePluggableSuperclasses(This,ppSuperclassEnumerator) ( (This)->lpVtbl -> EnumeratePluggableSuperclasses(This,ppSuperclassEnumerator) )
#define ITTerminalSupport2_get_PluggableTerminalClasses(This,bstrTerminalSuperclass,lMediaType,pVariant) ( (This)->lpVtbl -> get_PluggableTerminalClasses(This,bstrTerminalSuperclass,lMediaType,pVariant) )
#define ITTerminalSupport2_EnumeratePluggableTerminalClasses(This,iidTerminalSuperclass,lMediaType,ppClassEnumerator) ( (This)->lpVtbl -> EnumeratePluggableTerminalClasses(This,iidTerminalSuperclass,lMediaType,ppClassEnumerator) )
#endif
#endif
#ifndef __ITAddress_INTERFACE_DEFINED__
#define __ITAddress_INTERFACE_DEFINED__
extern const IID IID_ITAddress;
typedef struct ITAddressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAddress * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAddress * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAddress * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAddress * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAddress * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAddress * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAddress * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_State) (ITAddress * This, ADDRESS_STATE * pAddressState);
	HRESULT(STDMETHODCALLTYPE * get_AddressName) (ITAddress * This, BSTR * ppName);
	HRESULT(STDMETHODCALLTYPE * get_ServiceProviderName) (ITAddress * This, BSTR * ppName);
	HRESULT(STDMETHODCALLTYPE * get_TAPIObject) (ITAddress * This, ITTAPI ** ppTapiObject);
	HRESULT(STDMETHODCALLTYPE * CreateCall) (ITAddress * This, BSTR pDestAddress, long lAddressType, long lMediaTypes, ITBasicCallControl ** ppCall);
	HRESULT(STDMETHODCALLTYPE * get_Calls) (ITAddress * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateCalls) (ITAddress * This, IEnumCall ** ppCallEnum);
	HRESULT(STDMETHODCALLTYPE * get_DialableAddress) (ITAddress * This, BSTR * pDialableAddress);
	HRESULT(STDMETHODCALLTYPE * CreateForwardInfoObject) (ITAddress * This, ITForwardInformation ** ppForwardInfo);
	HRESULT(STDMETHODCALLTYPE * Forward) (ITAddress * This, ITForwardInformation * pForwardInfo, ITBasicCallControl * pCall);
	HRESULT(STDMETHODCALLTYPE * get_CurrentForwardInfo) (ITAddress * This, ITForwardInformation ** ppForwardInfo);
	HRESULT(STDMETHODCALLTYPE * put_MessageWaiting) (ITAddress * This, VARIANT_BOOL fMessageWaiting);
	HRESULT(STDMETHODCALLTYPE * get_MessageWaiting) (ITAddress * This, VARIANT_BOOL * pfMessageWaiting);
	HRESULT(STDMETHODCALLTYPE * put_DoNotDisturb) (ITAddress * This, VARIANT_BOOL fDoNotDisturb);
	HRESULT(STDMETHODCALLTYPE * get_DoNotDisturb) (ITAddress * This, VARIANT_BOOL * pfDoNotDisturb);
	END_INTERFACE
}  ITAddressVtbl;
interface ITAddress
{
	CONST_VTBL struct ITAddressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAddress_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAddress_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAddress_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAddress_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAddress_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAddress_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAddress_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAddress_get_State(This,pAddressState) ( (This)->lpVtbl -> get_State(This,pAddressState) )
#define ITAddress_get_AddressName(This,ppName) ( (This)->lpVtbl -> get_AddressName(This,ppName) )
#define ITAddress_get_ServiceProviderName(This,ppName) ( (This)->lpVtbl -> get_ServiceProviderName(This,ppName) )
#define ITAddress_get_TAPIObject(This,ppTapiObject) ( (This)->lpVtbl -> get_TAPIObject(This,ppTapiObject) )
#define ITAddress_CreateCall(This,pDestAddress,lAddressType,lMediaTypes,ppCall) ( (This)->lpVtbl -> CreateCall(This,pDestAddress,lAddressType,lMediaTypes,ppCall) )
#define ITAddress_get_Calls(This,pVariant) ( (This)->lpVtbl -> get_Calls(This,pVariant) )
#define ITAddress_EnumerateCalls(This,ppCallEnum) ( (This)->lpVtbl -> EnumerateCalls(This,ppCallEnum) )
#define ITAddress_get_DialableAddress(This,pDialableAddress) ( (This)->lpVtbl -> get_DialableAddress(This,pDialableAddress) )
#define ITAddress_CreateForwardInfoObject(This,ppForwardInfo) ( (This)->lpVtbl -> CreateForwardInfoObject(This,ppForwardInfo) )
#define ITAddress_Forward(This,pForwardInfo,pCall) ( (This)->lpVtbl -> Forward(This,pForwardInfo,pCall) )
#define ITAddress_get_CurrentForwardInfo(This,ppForwardInfo) ( (This)->lpVtbl -> get_CurrentForwardInfo(This,ppForwardInfo) )
#define ITAddress_put_MessageWaiting(This,fMessageWaiting) ( (This)->lpVtbl -> put_MessageWaiting(This,fMessageWaiting) )
#define ITAddress_get_MessageWaiting(This,pfMessageWaiting) ( (This)->lpVtbl -> get_MessageWaiting(This,pfMessageWaiting) )
#define ITAddress_put_DoNotDisturb(This,fDoNotDisturb) ( (This)->lpVtbl -> put_DoNotDisturb(This,fDoNotDisturb) )
#define ITAddress_get_DoNotDisturb(This,pfDoNotDisturb) ( (This)->lpVtbl -> get_DoNotDisturb(This,pfDoNotDisturb) )
#endif
#endif
#ifndef __ITAddress2_INTERFACE_DEFINED__
#define __ITAddress2_INTERFACE_DEFINED__
extern const IID IID_ITAddress2;
typedef struct ITAddress2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAddress2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAddress2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAddress2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAddress2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAddress2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAddress2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAddress2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_State) (ITAddress2 * This, ADDRESS_STATE * pAddressState);
	HRESULT(STDMETHODCALLTYPE * get_AddressName) (ITAddress2 * This, BSTR * ppName);
	HRESULT(STDMETHODCALLTYPE * get_ServiceProviderName) (ITAddress2 * This, BSTR * ppName);
	HRESULT(STDMETHODCALLTYPE * get_TAPIObject) (ITAddress2 * This, ITTAPI ** ppTapiObject);
	HRESULT(STDMETHODCALLTYPE * CreateCall) (ITAddress2 * This, BSTR pDestAddress, long lAddressType, long lMediaTypes, ITBasicCallControl ** ppCall);
	HRESULT(STDMETHODCALLTYPE * get_Calls) (ITAddress2 * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateCalls) (ITAddress2 * This, IEnumCall ** ppCallEnum);
	HRESULT(STDMETHODCALLTYPE * get_DialableAddress) (ITAddress2 * This, BSTR * pDialableAddress);
	HRESULT(STDMETHODCALLTYPE * CreateForwardInfoObject) (ITAddress2 * This, ITForwardInformation ** ppForwardInfo);
	HRESULT(STDMETHODCALLTYPE * Forward) (ITAddress2 * This, ITForwardInformation * pForwardInfo, ITBasicCallControl * pCall);
	HRESULT(STDMETHODCALLTYPE * get_CurrentForwardInfo) (ITAddress2 * This, ITForwardInformation ** ppForwardInfo);
	HRESULT(STDMETHODCALLTYPE * put_MessageWaiting) (ITAddress2 * This, VARIANT_BOOL fMessageWaiting);
	HRESULT(STDMETHODCALLTYPE * get_MessageWaiting) (ITAddress2 * This, VARIANT_BOOL * pfMessageWaiting);
	HRESULT(STDMETHODCALLTYPE * put_DoNotDisturb) (ITAddress2 * This, VARIANT_BOOL fDoNotDisturb);
	HRESULT(STDMETHODCALLTYPE * get_DoNotDisturb) (ITAddress2 * This, VARIANT_BOOL * pfDoNotDisturb);
	HRESULT(STDMETHODCALLTYPE * get_Phones) (ITAddress2 * This, VARIANT * pPhones);
	HRESULT(STDMETHODCALLTYPE * EnumeratePhones) (ITAddress2 * This, IEnumPhone ** ppEnumPhone);
	HRESULT(STDMETHODCALLTYPE * GetPhoneFromTerminal) (ITAddress2 * This, ITTerminal * pTerminal, ITPhone ** ppPhone);
	HRESULT(STDMETHODCALLTYPE * get_PreferredPhones) (ITAddress2 * This, VARIANT * pPhones);
	HRESULT(STDMETHODCALLTYPE * EnumeratePreferredPhones) (ITAddress2 * This, IEnumPhone ** ppEnumPhone);
	HRESULT(STDMETHODCALLTYPE * get_EventFilter) (ITAddress2 * This, TAPI_EVENT TapiEvent, long lSubEvent, VARIANT_BOOL * pEnable);
	HRESULT(STDMETHODCALLTYPE * put_EventFilter) (ITAddress2 * This, TAPI_EVENT TapiEvent, long lSubEvent, VARIANT_BOOL bEnable);
	HRESULT(STDMETHODCALLTYPE * DeviceSpecific) (ITAddress2 * This, ITCallInfo * pCall, BYTE * pParams, DWORD dwSize);
	HRESULT(STDMETHODCALLTYPE * DeviceSpecificVariant) (ITAddress2 * This, ITCallInfo * pCall, VARIANT varDevSpecificByteArray);
	HRESULT(STDMETHODCALLTYPE * NegotiateExtVersion) (ITAddress2 * This, long lLowVersion, long lHighVersion, long *plExtVersion);
	END_INTERFACE
}  ITAddress2Vtbl;
interface ITAddress2
{
	CONST_VTBL struct ITAddress2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAddress2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAddress2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAddress2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAddress2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAddress2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAddress2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAddress2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAddress2_get_State(This,pAddressState) ( (This)->lpVtbl -> get_State(This,pAddressState) )
#define ITAddress2_get_AddressName(This,ppName) ( (This)->lpVtbl -> get_AddressName(This,ppName) )
#define ITAddress2_get_ServiceProviderName(This,ppName) ( (This)->lpVtbl -> get_ServiceProviderName(This,ppName) )
#define ITAddress2_get_TAPIObject(This,ppTapiObject) ( (This)->lpVtbl -> get_TAPIObject(This,ppTapiObject) )
#define ITAddress2_CreateCall(This,pDestAddress,lAddressType,lMediaTypes,ppCall) ( (This)->lpVtbl -> CreateCall(This,pDestAddress,lAddressType,lMediaTypes,ppCall) )
#define ITAddress2_get_Calls(This,pVariant) ( (This)->lpVtbl -> get_Calls(This,pVariant) )
#define ITAddress2_EnumerateCalls(This,ppCallEnum) ( (This)->lpVtbl -> EnumerateCalls(This,ppCallEnum) )
#define ITAddress2_get_DialableAddress(This,pDialableAddress) ( (This)->lpVtbl -> get_DialableAddress(This,pDialableAddress) )
#define ITAddress2_CreateForwardInfoObject(This,ppForwardInfo) ( (This)->lpVtbl -> CreateForwardInfoObject(This,ppForwardInfo) )
#define ITAddress2_Forward(This,pForwardInfo,pCall) ( (This)->lpVtbl -> Forward(This,pForwardInfo,pCall) )
#define ITAddress2_get_CurrentForwardInfo(This,ppForwardInfo) ( (This)->lpVtbl -> get_CurrentForwardInfo(This,ppForwardInfo) )
#define ITAddress2_put_MessageWaiting(This,fMessageWaiting) ( (This)->lpVtbl -> put_MessageWaiting(This,fMessageWaiting) )
#define ITAddress2_get_MessageWaiting(This,pfMessageWaiting) ( (This)->lpVtbl -> get_MessageWaiting(This,pfMessageWaiting) )
#define ITAddress2_put_DoNotDisturb(This,fDoNotDisturb) ( (This)->lpVtbl -> put_DoNotDisturb(This,fDoNotDisturb) )
#define ITAddress2_get_DoNotDisturb(This,pfDoNotDisturb) ( (This)->lpVtbl -> get_DoNotDisturb(This,pfDoNotDisturb) )
#define ITAddress2_get_Phones(This,pPhones) ( (This)->lpVtbl -> get_Phones(This,pPhones) )
#define ITAddress2_EnumeratePhones(This,ppEnumPhone) ( (This)->lpVtbl -> EnumeratePhones(This,ppEnumPhone) )
#define ITAddress2_GetPhoneFromTerminal(This,pTerminal,ppPhone) ( (This)->lpVtbl -> GetPhoneFromTerminal(This,pTerminal,ppPhone) )
#define ITAddress2_get_PreferredPhones(This,pPhones) ( (This)->lpVtbl -> get_PreferredPhones(This,pPhones) )
#define ITAddress2_EnumeratePreferredPhones(This,ppEnumPhone) ( (This)->lpVtbl -> EnumeratePreferredPhones(This,ppEnumPhone) )
#define ITAddress2_get_EventFilter(This,TapiEvent,lSubEvent,pEnable) ( (This)->lpVtbl -> get_EventFilter(This,TapiEvent,lSubEvent,pEnable) )
#define ITAddress2_put_EventFilter(This,TapiEvent,lSubEvent,bEnable) ( (This)->lpVtbl -> put_EventFilter(This,TapiEvent,lSubEvent,bEnable) )
#define ITAddress2_DeviceSpecific(This,pCall,pParams,dwSize) ( (This)->lpVtbl -> DeviceSpecific(This,pCall,pParams,dwSize) )
#define ITAddress2_DeviceSpecificVariant(This,pCall,varDevSpecificByteArray) ( (This)->lpVtbl -> DeviceSpecificVariant(This,pCall,varDevSpecificByteArray) )
#define ITAddress2_NegotiateExtVersion(This,lLowVersion,lHighVersion,plExtVersion) ( (This)->lpVtbl -> NegotiateExtVersion(This,lLowVersion,lHighVersion,plExtVersion) )
#endif
#endif
#ifndef __ITAddressCapabilities_INTERFACE_DEFINED__
#define __ITAddressCapabilities_INTERFACE_DEFINED__
extern const IID IID_ITAddressCapabilities;
typedef struct ITAddressCapabilitiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAddressCapabilities * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAddressCapabilities * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAddressCapabilities * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAddressCapabilities * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAddressCapabilities * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAddressCapabilities * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAddressCapabilities * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AddressCapability) (ITAddressCapabilities * This, ADDRESS_CAPABILITY AddressCap, long *plCapability);
	HRESULT(STDMETHODCALLTYPE * get_AddressCapabilityString) (ITAddressCapabilities * This, ADDRESS_CAPABILITY_STRING AddressCapString, BSTR * ppCapabilityString);
	HRESULT(STDMETHODCALLTYPE * get_CallTreatments) (ITAddressCapabilities * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateCallTreatments) (ITAddressCapabilities * This, IEnumBstr ** ppEnumCallTreatment);
	HRESULT(STDMETHODCALLTYPE * get_CompletionMessages) (ITAddressCapabilities * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateCompletionMessages) (ITAddressCapabilities * This, IEnumBstr ** ppEnumCompletionMessage);
	HRESULT(STDMETHODCALLTYPE * get_DeviceClasses) (ITAddressCapabilities * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateDeviceClasses) (ITAddressCapabilities * This, IEnumBstr ** ppEnumDeviceClass);
	END_INTERFACE
}  ITAddressCapabilitiesVtbl;
interface ITAddressCapabilities
{
	CONST_VTBL struct ITAddressCapabilitiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAddressCapabilities_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAddressCapabilities_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAddressCapabilities_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAddressCapabilities_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAddressCapabilities_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAddressCapabilities_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAddressCapabilities_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAddressCapabilities_get_AddressCapability(This,AddressCap,plCapability) ( (This)->lpVtbl -> get_AddressCapability(This,AddressCap,plCapability) )
#define ITAddressCapabilities_get_AddressCapabilityString(This,AddressCapString,ppCapabilityString) ( (This)->lpVtbl -> get_AddressCapabilityString(This,AddressCapString,ppCapabilityString) )
#define ITAddressCapabilities_get_CallTreatments(This,pVariant) ( (This)->lpVtbl -> get_CallTreatments(This,pVariant) )
#define ITAddressCapabilities_EnumerateCallTreatments(This,ppEnumCallTreatment) ( (This)->lpVtbl -> EnumerateCallTreatments(This,ppEnumCallTreatment) )
#define ITAddressCapabilities_get_CompletionMessages(This,pVariant) ( (This)->lpVtbl -> get_CompletionMessages(This,pVariant) )
#define ITAddressCapabilities_EnumerateCompletionMessages(This,ppEnumCompletionMessage) ( (This)->lpVtbl -> EnumerateCompletionMessages(This,ppEnumCompletionMessage) )
#define ITAddressCapabilities_get_DeviceClasses(This,pVariant) ( (This)->lpVtbl -> get_DeviceClasses(This,pVariant) )
#define ITAddressCapabilities_EnumerateDeviceClasses(This,ppEnumDeviceClass) ( (This)->lpVtbl -> EnumerateDeviceClasses(This,ppEnumDeviceClass) )
#endif
#endif
#ifndef __ITPhone_INTERFACE_DEFINED__
#define __ITPhone_INTERFACE_DEFINED__
extern const IID IID_ITPhone;
typedef struct ITPhoneVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITPhone * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITPhone * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITPhone * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITPhone * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITPhone * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITPhone * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITPhone * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Open) (ITPhone * This, PHONE_PRIVILEGE Privilege);
	HRESULT(STDMETHODCALLTYPE * Close) (ITPhone * This);
	HRESULT(STDMETHODCALLTYPE * get_Addresses) (ITPhone * This, VARIANT * pAddresses);
	HRESULT(STDMETHODCALLTYPE * EnumerateAddresses) (ITPhone * This, IEnumAddress ** ppEnumAddress);
	HRESULT(STDMETHODCALLTYPE * get_PhoneCapsLong) (ITPhone * This, PHONECAPS_LONG pclCap, long *plCapability);
	HRESULT(STDMETHODCALLTYPE * get_PhoneCapsString) (ITPhone * This, PHONECAPS_STRING pcsCap, BSTR * ppCapability);
	HRESULT(STDMETHODCALLTYPE * get_Terminals) (ITPhone * This, ITAddress * pAddress, VARIANT * pTerminals);
	HRESULT(STDMETHODCALLTYPE * EnumerateTerminals) (ITPhone * This, ITAddress * pAddress, IEnumTerminal ** ppEnumTerminal);
	HRESULT(STDMETHODCALLTYPE * get_ButtonMode) (ITPhone * This, long lButtonID, PHONE_BUTTON_MODE * pButtonMode);
	HRESULT(STDMETHODCALLTYPE * put_ButtonMode) (ITPhone * This, long lButtonID, PHONE_BUTTON_MODE ButtonMode);
	HRESULT(STDMETHODCALLTYPE * get_ButtonFunction) (ITPhone * This, long lButtonID, PHONE_BUTTON_FUNCTION * pButtonFunction);
	HRESULT(STDMETHODCALLTYPE * put_ButtonFunction) (ITPhone * This, long lButtonID, PHONE_BUTTON_FUNCTION ButtonFunction);
	HRESULT(STDMETHODCALLTYPE * get_ButtonText) (ITPhone * This, long lButtonID, BSTR * ppButtonText);
	HRESULT(STDMETHODCALLTYPE * put_ButtonText) (ITPhone * This, long lButtonID, BSTR bstrButtonText);
	HRESULT(STDMETHODCALLTYPE * get_ButtonState) (ITPhone * This, long lButtonID, PHONE_BUTTON_STATE * pButtonState);
	HRESULT(STDMETHODCALLTYPE * get_HookSwitchState) (ITPhone * This, PHONE_HOOK_SWITCH_DEVICE HookSwitchDevice, PHONE_HOOK_SWITCH_STATE * pHookSwitchState);
	HRESULT(STDMETHODCALLTYPE * put_HookSwitchState) (ITPhone * This, PHONE_HOOK_SWITCH_DEVICE HookSwitchDevice, PHONE_HOOK_SWITCH_STATE HookSwitchState);
	HRESULT(STDMETHODCALLTYPE * put_RingMode) (ITPhone * This, long lRingMode);
	HRESULT(STDMETHODCALLTYPE * get_RingMode) (ITPhone * This, long *plRingMode);
	HRESULT(STDMETHODCALLTYPE * put_RingVolume) (ITPhone * This, long lRingVolume);
	HRESULT(STDMETHODCALLTYPE * get_RingVolume) (ITPhone * This, long *plRingVolume);
	HRESULT(STDMETHODCALLTYPE * get_Privilege) (ITPhone * This, PHONE_PRIVILEGE * pPrivilege);
	HRESULT(STDMETHODCALLTYPE * GetPhoneCapsBuffer) (ITPhone * This, PHONECAPS_BUFFER pcbCaps, DWORD * pdwSize, BYTE ** ppPhoneCapsBuffer);
	HRESULT(STDMETHODCALLTYPE * get_PhoneCapsBuffer) (ITPhone * This, PHONECAPS_BUFFER pcbCaps, VARIANT * pVarBuffer);
	HRESULT(STDMETHODCALLTYPE * get_LampMode) (ITPhone * This, long lLampID, PHONE_LAMP_MODE * pLampMode);
	HRESULT(STDMETHODCALLTYPE * put_LampMode) (ITPhone * This, long lLampID, PHONE_LAMP_MODE LampMode);
	HRESULT(STDMETHODCALLTYPE * get_Display) (ITPhone * This, BSTR * pbstrDisplay);
	HRESULT(STDMETHODCALLTYPE * SetDisplay) (ITPhone * This, long lRow, long lColumn, BSTR bstrDisplay);
	HRESULT(STDMETHODCALLTYPE * get_PreferredAddresses) (ITPhone * This, VARIANT * pAddresses);
	HRESULT(STDMETHODCALLTYPE * EnumeratePreferredAddresses) (ITPhone * This, IEnumAddress ** ppEnumAddress);
	HRESULT(STDMETHODCALLTYPE * DeviceSpecific) (ITPhone * This, BYTE * pParams, DWORD dwSize);
	HRESULT(STDMETHODCALLTYPE * DeviceSpecificVariant) (ITPhone * This, VARIANT varDevSpecificByteArray);
	HRESULT(STDMETHODCALLTYPE * NegotiateExtVersion) (ITPhone * This, long lLowVersion, long lHighVersion, long *plExtVersion);
	END_INTERFACE
}  ITPhoneVtbl;
interface ITPhone
{
	CONST_VTBL struct ITPhoneVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITPhone_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITPhone_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITPhone_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITPhone_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITPhone_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITPhone_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITPhone_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITPhone_Open(This,Privilege) ( (This)->lpVtbl -> Open(This,Privilege) )
#define ITPhone_Close(This) ( (This)->lpVtbl -> Close(This) )
#define ITPhone_get_Addresses(This,pAddresses) ( (This)->lpVtbl -> get_Addresses(This,pAddresses) )
#define ITPhone_EnumerateAddresses(This,ppEnumAddress) ( (This)->lpVtbl -> EnumerateAddresses(This,ppEnumAddress) )
#define ITPhone_get_PhoneCapsLong(This,pclCap,plCapability) ( (This)->lpVtbl -> get_PhoneCapsLong(This,pclCap,plCapability) )
#define ITPhone_get_PhoneCapsString(This,pcsCap,ppCapability) ( (This)->lpVtbl -> get_PhoneCapsString(This,pcsCap,ppCapability) )
#define ITPhone_get_Terminals(This,pAddress,pTerminals) ( (This)->lpVtbl -> get_Terminals(This,pAddress,pTerminals) )
#define ITPhone_EnumerateTerminals(This,pAddress,ppEnumTerminal) ( (This)->lpVtbl -> EnumerateTerminals(This,pAddress,ppEnumTerminal) )
#define ITPhone_get_ButtonMode(This,lButtonID,pButtonMode) ( (This)->lpVtbl -> get_ButtonMode(This,lButtonID,pButtonMode) )
#define ITPhone_put_ButtonMode(This,lButtonID,ButtonMode) ( (This)->lpVtbl -> put_ButtonMode(This,lButtonID,ButtonMode) )
#define ITPhone_get_ButtonFunction(This,lButtonID,pButtonFunction) ( (This)->lpVtbl -> get_ButtonFunction(This,lButtonID,pButtonFunction) )
#define ITPhone_put_ButtonFunction(This,lButtonID,ButtonFunction) ( (This)->lpVtbl -> put_ButtonFunction(This,lButtonID,ButtonFunction) )
#define ITPhone_get_ButtonText(This,lButtonID,ppButtonText) ( (This)->lpVtbl -> get_ButtonText(This,lButtonID,ppButtonText) )
#define ITPhone_put_ButtonText(This,lButtonID,bstrButtonText) ( (This)->lpVtbl -> put_ButtonText(This,lButtonID,bstrButtonText) )
#define ITPhone_get_ButtonState(This,lButtonID,pButtonState) ( (This)->lpVtbl -> get_ButtonState(This,lButtonID,pButtonState) )
#define ITPhone_get_HookSwitchState(This,HookSwitchDevice,pHookSwitchState) ( (This)->lpVtbl -> get_HookSwitchState(This,HookSwitchDevice,pHookSwitchState) )
#define ITPhone_put_HookSwitchState(This,HookSwitchDevice,HookSwitchState) ( (This)->lpVtbl -> put_HookSwitchState(This,HookSwitchDevice,HookSwitchState) )
#define ITPhone_put_RingMode(This,lRingMode) ( (This)->lpVtbl -> put_RingMode(This,lRingMode) )
#define ITPhone_get_RingMode(This,plRingMode) ( (This)->lpVtbl -> get_RingMode(This,plRingMode) )
#define ITPhone_put_RingVolume(This,lRingVolume) ( (This)->lpVtbl -> put_RingVolume(This,lRingVolume) )
#define ITPhone_get_RingVolume(This,plRingVolume) ( (This)->lpVtbl -> get_RingVolume(This,plRingVolume) )
#define ITPhone_get_Privilege(This,pPrivilege) ( (This)->lpVtbl -> get_Privilege(This,pPrivilege) )
#define ITPhone_GetPhoneCapsBuffer(This,pcbCaps,pdwSize,ppPhoneCapsBuffer) ( (This)->lpVtbl -> GetPhoneCapsBuffer(This,pcbCaps,pdwSize,ppPhoneCapsBuffer) )
#define ITPhone_get_PhoneCapsBuffer(This,pcbCaps,pVarBuffer) ( (This)->lpVtbl -> get_PhoneCapsBuffer(This,pcbCaps,pVarBuffer) )
#define ITPhone_get_LampMode(This,lLampID,pLampMode) ( (This)->lpVtbl -> get_LampMode(This,lLampID,pLampMode) )
#define ITPhone_put_LampMode(This,lLampID,LampMode) ( (This)->lpVtbl -> put_LampMode(This,lLampID,LampMode) )
#define ITPhone_get_Display(This,pbstrDisplay) ( (This)->lpVtbl -> get_Display(This,pbstrDisplay) )
#define ITPhone_SetDisplay(This,lRow,lColumn,bstrDisplay) ( (This)->lpVtbl -> SetDisplay(This,lRow,lColumn,bstrDisplay) )
#define ITPhone_get_PreferredAddresses(This,pAddresses) ( (This)->lpVtbl -> get_PreferredAddresses(This,pAddresses) )
#define ITPhone_EnumeratePreferredAddresses(This,ppEnumAddress) ( (This)->lpVtbl -> EnumeratePreferredAddresses(This,ppEnumAddress) )
#define ITPhone_DeviceSpecific(This,pParams,dwSize) ( (This)->lpVtbl -> DeviceSpecific(This,pParams,dwSize) )
#define ITPhone_DeviceSpecificVariant(This,varDevSpecificByteArray) ( (This)->lpVtbl -> DeviceSpecificVariant(This,varDevSpecificByteArray) )
#define ITPhone_NegotiateExtVersion(This,lLowVersion,lHighVersion,plExtVersion) ( (This)->lpVtbl -> NegotiateExtVersion(This,lLowVersion,lHighVersion,plExtVersion) )
#endif
#endif
#ifndef __ITAutomatedPhoneControl_INTERFACE_DEFINED__
#define __ITAutomatedPhoneControl_INTERFACE_DEFINED__
extern const IID IID_ITAutomatedPhoneControl;
typedef struct ITAutomatedPhoneControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAutomatedPhoneControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAutomatedPhoneControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAutomatedPhoneControl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAutomatedPhoneControl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAutomatedPhoneControl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAutomatedPhoneControl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAutomatedPhoneControl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * StartTone) (ITAutomatedPhoneControl * This, PHONE_TONE Tone, long lDuration);
	HRESULT(STDMETHODCALLTYPE * StopTone) (ITAutomatedPhoneControl * This);
	HRESULT(STDMETHODCALLTYPE * get_Tone) (ITAutomatedPhoneControl * This, PHONE_TONE * pTone);
	HRESULT(STDMETHODCALLTYPE * StartRinger) (ITAutomatedPhoneControl * This, long lRingMode, long lDuration);
	HRESULT(STDMETHODCALLTYPE * StopRinger) (ITAutomatedPhoneControl * This);
	HRESULT(STDMETHODCALLTYPE * get_Ringer) (ITAutomatedPhoneControl * This, VARIANT_BOOL * pfRinging);
	HRESULT(STDMETHODCALLTYPE * put_PhoneHandlingEnabled) (ITAutomatedPhoneControl * This, VARIANT_BOOL fEnabled);
	HRESULT(STDMETHODCALLTYPE * get_PhoneHandlingEnabled) (ITAutomatedPhoneControl * This, VARIANT_BOOL * pfEnabled);
	HRESULT(STDMETHODCALLTYPE * put_AutoEndOfNumberTimeout) (ITAutomatedPhoneControl * This, long lTimeout);
	HRESULT(STDMETHODCALLTYPE * get_AutoEndOfNumberTimeout) (ITAutomatedPhoneControl * This, long *plTimeout);
	HRESULT(STDMETHODCALLTYPE * put_AutoDialtone) (ITAutomatedPhoneControl * This, VARIANT_BOOL fEnabled);
	HRESULT(STDMETHODCALLTYPE * get_AutoDialtone) (ITAutomatedPhoneControl * This, VARIANT_BOOL * pfEnabled);
	HRESULT(STDMETHODCALLTYPE * put_AutoStopTonesOnOnHook) (ITAutomatedPhoneControl * This, VARIANT_BOOL fEnabled);
	HRESULT(STDMETHODCALLTYPE * get_AutoStopTonesOnOnHook) (ITAutomatedPhoneControl * This, VARIANT_BOOL * pfEnabled);
	HRESULT(STDMETHODCALLTYPE * put_AutoStopRingOnOffHook) (ITAutomatedPhoneControl * This, VARIANT_BOOL fEnabled);
	HRESULT(STDMETHODCALLTYPE * get_AutoStopRingOnOffHook) (ITAutomatedPhoneControl * This, VARIANT_BOOL * pfEnabled);
	HRESULT(STDMETHODCALLTYPE * put_AutoKeypadTones) (ITAutomatedPhoneControl * This, VARIANT_BOOL fEnabled);
	HRESULT(STDMETHODCALLTYPE * get_AutoKeypadTones) (ITAutomatedPhoneControl * This, VARIANT_BOOL * pfEnabled);
	HRESULT(STDMETHODCALLTYPE * put_AutoKeypadTonesMinimumDuration) (ITAutomatedPhoneControl * This, long lDuration);
	HRESULT(STDMETHODCALLTYPE * get_AutoKeypadTonesMinimumDuration) (ITAutomatedPhoneControl * This, long *plDuration);
	HRESULT(STDMETHODCALLTYPE * put_AutoVolumeControl) (ITAutomatedPhoneControl * This, VARIANT_BOOL fEnabled);
	HRESULT(STDMETHODCALLTYPE * get_AutoVolumeControl) (ITAutomatedPhoneControl * This, VARIANT_BOOL * fEnabled);
	HRESULT(STDMETHODCALLTYPE * put_AutoVolumeControlStep) (ITAutomatedPhoneControl * This, long lStepSize);
	HRESULT(STDMETHODCALLTYPE * get_AutoVolumeControlStep) (ITAutomatedPhoneControl * This, long *plStepSize);
	HRESULT(STDMETHODCALLTYPE * put_AutoVolumeControlRepeatDelay) (ITAutomatedPhoneControl * This, long lDelay);
	HRESULT(STDMETHODCALLTYPE * get_AutoVolumeControlRepeatDelay) (ITAutomatedPhoneControl * This, long *plDelay);
	HRESULT(STDMETHODCALLTYPE * put_AutoVolumeControlRepeatPeriod) (ITAutomatedPhoneControl * This, long lPeriod);
	HRESULT(STDMETHODCALLTYPE * get_AutoVolumeControlRepeatPeriod) (ITAutomatedPhoneControl * This, long *plPeriod);
	HRESULT(STDMETHODCALLTYPE * SelectCall) (ITAutomatedPhoneControl * This, ITCallInfo * pCall, VARIANT_BOOL fSelectDefaultTerminals);
	HRESULT(STDMETHODCALLTYPE * UnselectCall) (ITAutomatedPhoneControl * This, ITCallInfo * pCall);
	HRESULT(STDMETHODCALLTYPE * EnumerateSelectedCalls) (ITAutomatedPhoneControl * This, IEnumCall ** ppCallEnum);
	HRESULT(STDMETHODCALLTYPE * get_SelectedCalls) (ITAutomatedPhoneControl * This, VARIANT * pVariant);
	END_INTERFACE
}  ITAutomatedPhoneControlVtbl;
interface ITAutomatedPhoneControl
{
	CONST_VTBL struct ITAutomatedPhoneControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAutomatedPhoneControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAutomatedPhoneControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAutomatedPhoneControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAutomatedPhoneControl_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAutomatedPhoneControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAutomatedPhoneControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAutomatedPhoneControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAutomatedPhoneControl_StartTone(This,Tone,lDuration) ( (This)->lpVtbl -> StartTone(This,Tone,lDuration) )
#define ITAutomatedPhoneControl_StopTone(This) ( (This)->lpVtbl -> StopTone(This) )
#define ITAutomatedPhoneControl_get_Tone(This,pTone) ( (This)->lpVtbl -> get_Tone(This,pTone) )
#define ITAutomatedPhoneControl_StartRinger(This,lRingMode,lDuration) ( (This)->lpVtbl -> StartRinger(This,lRingMode,lDuration) )
#define ITAutomatedPhoneControl_StopRinger(This) ( (This)->lpVtbl -> StopRinger(This) )
#define ITAutomatedPhoneControl_get_Ringer(This,pfRinging) ( (This)->lpVtbl -> get_Ringer(This,pfRinging) )
#define ITAutomatedPhoneControl_put_PhoneHandlingEnabled(This,fEnabled) ( (This)->lpVtbl -> put_PhoneHandlingEnabled(This,fEnabled) )
#define ITAutomatedPhoneControl_get_PhoneHandlingEnabled(This,pfEnabled) ( (This)->lpVtbl -> get_PhoneHandlingEnabled(This,pfEnabled) )
#define ITAutomatedPhoneControl_put_AutoEndOfNumberTimeout(This,lTimeout) ( (This)->lpVtbl -> put_AutoEndOfNumberTimeout(This,lTimeout) )
#define ITAutomatedPhoneControl_get_AutoEndOfNumberTimeout(This,plTimeout) ( (This)->lpVtbl -> get_AutoEndOfNumberTimeout(This,plTimeout) )
#define ITAutomatedPhoneControl_put_AutoDialtone(This,fEnabled) ( (This)->lpVtbl -> put_AutoDialtone(This,fEnabled) )
#define ITAutomatedPhoneControl_get_AutoDialtone(This,pfEnabled) ( (This)->lpVtbl -> get_AutoDialtone(This,pfEnabled) )
#define ITAutomatedPhoneControl_put_AutoStopTonesOnOnHook(This,fEnabled) ( (This)->lpVtbl -> put_AutoStopTonesOnOnHook(This,fEnabled) )
#define ITAutomatedPhoneControl_get_AutoStopTonesOnOnHook(This,pfEnabled) ( (This)->lpVtbl -> get_AutoStopTonesOnOnHook(This,pfEnabled) )
#define ITAutomatedPhoneControl_put_AutoStopRingOnOffHook(This,fEnabled) ( (This)->lpVtbl -> put_AutoStopRingOnOffHook(This,fEnabled) )
#define ITAutomatedPhoneControl_get_AutoStopRingOnOffHook(This,pfEnabled) ( (This)->lpVtbl -> get_AutoStopRingOnOffHook(This,pfEnabled) )
#define ITAutomatedPhoneControl_put_AutoKeypadTones(This,fEnabled) ( (This)->lpVtbl -> put_AutoKeypadTones(This,fEnabled) )
#define ITAutomatedPhoneControl_get_AutoKeypadTones(This,pfEnabled) ( (This)->lpVtbl -> get_AutoKeypadTones(This,pfEnabled) )
#define ITAutomatedPhoneControl_put_AutoKeypadTonesMinimumDuration(This,lDuration) ( (This)->lpVtbl -> put_AutoKeypadTonesMinimumDuration(This,lDuration) )
#define ITAutomatedPhoneControl_get_AutoKeypadTonesMinimumDuration(This,plDuration) ( (This)->lpVtbl -> get_AutoKeypadTonesMinimumDuration(This,plDuration) )
#define ITAutomatedPhoneControl_put_AutoVolumeControl(This,fEnabled) ( (This)->lpVtbl -> put_AutoVolumeControl(This,fEnabled) )
#define ITAutomatedPhoneControl_get_AutoVolumeControl(This,fEnabled) ( (This)->lpVtbl -> get_AutoVolumeControl(This,fEnabled) )
#define ITAutomatedPhoneControl_put_AutoVolumeControlStep(This,lStepSize) ( (This)->lpVtbl -> put_AutoVolumeControlStep(This,lStepSize) )
#define ITAutomatedPhoneControl_get_AutoVolumeControlStep(This,plStepSize) ( (This)->lpVtbl -> get_AutoVolumeControlStep(This,plStepSize) )
#define ITAutomatedPhoneControl_put_AutoVolumeControlRepeatDelay(This,lDelay) ( (This)->lpVtbl -> put_AutoVolumeControlRepeatDelay(This,lDelay) )
#define ITAutomatedPhoneControl_get_AutoVolumeControlRepeatDelay(This,plDelay) ( (This)->lpVtbl -> get_AutoVolumeControlRepeatDelay(This,plDelay) )
#define ITAutomatedPhoneControl_put_AutoVolumeControlRepeatPeriod(This,lPeriod) ( (This)->lpVtbl -> put_AutoVolumeControlRepeatPeriod(This,lPeriod) )
#define ITAutomatedPhoneControl_get_AutoVolumeControlRepeatPeriod(This,plPeriod) ( (This)->lpVtbl -> get_AutoVolumeControlRepeatPeriod(This,plPeriod) )
#define ITAutomatedPhoneControl_SelectCall(This,pCall,fSelectDefaultTerminals) ( (This)->lpVtbl -> SelectCall(This,pCall,fSelectDefaultTerminals) )
#define ITAutomatedPhoneControl_UnselectCall(This,pCall) ( (This)->lpVtbl -> UnselectCall(This,pCall) )
#define ITAutomatedPhoneControl_EnumerateSelectedCalls(This,ppCallEnum) ( (This)->lpVtbl -> EnumerateSelectedCalls(This,ppCallEnum) )
#define ITAutomatedPhoneControl_get_SelectedCalls(This,pVariant) ( (This)->lpVtbl -> get_SelectedCalls(This,pVariant) )
#endif
#endif
#ifndef __ITBasicCallControl_INTERFACE_DEFINED__
#define __ITBasicCallControl_INTERFACE_DEFINED__
extern const IID IID_ITBasicCallControl;
typedef struct ITBasicCallControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITBasicCallControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITBasicCallControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITBasicCallControl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITBasicCallControl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITBasicCallControl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITBasicCallControl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITBasicCallControl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Connect) (ITBasicCallControl * This, VARIANT_BOOL fSync);
	HRESULT(STDMETHODCALLTYPE * Answer) (ITBasicCallControl * This);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (ITBasicCallControl * This, DISCONNECT_CODE code);
	HRESULT(STDMETHODCALLTYPE * Hold) (ITBasicCallControl * This, VARIANT_BOOL fHold);
	HRESULT(STDMETHODCALLTYPE * HandoffDirect) (ITBasicCallControl * This, BSTR pApplicationName);
	HRESULT(STDMETHODCALLTYPE * HandoffIndirect) (ITBasicCallControl * This, long lMediaType);
	HRESULT(STDMETHODCALLTYPE * Conference) (ITBasicCallControl * This, ITBasicCallControl * pCall, VARIANT_BOOL fSync);
	HRESULT(STDMETHODCALLTYPE * Transfer) (ITBasicCallControl * This, ITBasicCallControl * pCall, VARIANT_BOOL fSync);
	HRESULT(STDMETHODCALLTYPE * BlindTransfer) (ITBasicCallControl * This, BSTR pDestAddress);
	HRESULT(STDMETHODCALLTYPE * SwapHold) (ITBasicCallControl * This, ITBasicCallControl * pCall);
	HRESULT(STDMETHODCALLTYPE * ParkDirect) (ITBasicCallControl * This, BSTR pParkAddress);
	HRESULT(STDMETHODCALLTYPE * ParkIndirect) (ITBasicCallControl * This, BSTR * ppNonDirAddress);
	HRESULT(STDMETHODCALLTYPE * Unpark) (ITBasicCallControl * This);
	HRESULT(STDMETHODCALLTYPE * SetQOS) (ITBasicCallControl * This, long lMediaType, QOS_SERVICE_LEVEL ServiceLevel);
	HRESULT(STDMETHODCALLTYPE * Pickup) (ITBasicCallControl * This, BSTR pGroupID);
	HRESULT(STDMETHODCALLTYPE * Dial) (ITBasicCallControl * This, BSTR pDestAddress);
	HRESULT(STDMETHODCALLTYPE * Finish) (ITBasicCallControl * This, FINISH_MODE finishMode);
	HRESULT(STDMETHODCALLTYPE * RemoveFromConference) (ITBasicCallControl * This);
	END_INTERFACE
}  ITBasicCallControlVtbl;
interface ITBasicCallControl
{
	CONST_VTBL struct ITBasicCallControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITBasicCallControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITBasicCallControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITBasicCallControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITBasicCallControl_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITBasicCallControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITBasicCallControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITBasicCallControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITBasicCallControl_Connect(This,fSync) ( (This)->lpVtbl -> Connect(This,fSync) )
#define ITBasicCallControl_Answer(This) ( (This)->lpVtbl -> Answer(This) )
#define ITBasicCallControl_Disconnect(This,code) ( (This)->lpVtbl -> Disconnect(This,code) )
#define ITBasicCallControl_Hold(This,fHold) ( (This)->lpVtbl -> Hold(This,fHold) )
#define ITBasicCallControl_HandoffDirect(This,pApplicationName) ( (This)->lpVtbl -> HandoffDirect(This,pApplicationName) )
#define ITBasicCallControl_HandoffIndirect(This,lMediaType) ( (This)->lpVtbl -> HandoffIndirect(This,lMediaType) )
#define ITBasicCallControl_Conference(This,pCall,fSync) ( (This)->lpVtbl -> Conference(This,pCall,fSync) )
#define ITBasicCallControl_Transfer(This,pCall,fSync) ( (This)->lpVtbl -> Transfer(This,pCall,fSync) )
#define ITBasicCallControl_BlindTransfer(This,pDestAddress) ( (This)->lpVtbl -> BlindTransfer(This,pDestAddress) )
#define ITBasicCallControl_SwapHold(This,pCall) ( (This)->lpVtbl -> SwapHold(This,pCall) )
#define ITBasicCallControl_ParkDirect(This,pParkAddress) ( (This)->lpVtbl -> ParkDirect(This,pParkAddress) )
#define ITBasicCallControl_ParkIndirect(This,ppNonDirAddress) ( (This)->lpVtbl -> ParkIndirect(This,ppNonDirAddress) )
#define ITBasicCallControl_Unpark(This) ( (This)->lpVtbl -> Unpark(This) )
#define ITBasicCallControl_SetQOS(This,lMediaType,ServiceLevel) ( (This)->lpVtbl -> SetQOS(This,lMediaType,ServiceLevel) )
#define ITBasicCallControl_Pickup(This,pGroupID) ( (This)->lpVtbl -> Pickup(This,pGroupID) )
#define ITBasicCallControl_Dial(This,pDestAddress) ( (This)->lpVtbl -> Dial(This,pDestAddress) )
#define ITBasicCallControl_Finish(This,finishMode) ( (This)->lpVtbl -> Finish(This,finishMode) )
#define ITBasicCallControl_RemoveFromConference(This) ( (This)->lpVtbl -> RemoveFromConference(This) )
#endif
#endif
#ifndef __ITCallInfo_INTERFACE_DEFINED__
#define __ITCallInfo_INTERFACE_DEFINED__
extern const IID IID_ITCallInfo;
typedef struct ITCallInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITCallInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITCallInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITCallInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITCallInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITCallInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITCallInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITCallInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Address) (ITCallInfo * This, ITAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * get_CallState) (ITCallInfo * This, CALL_STATE * pCallState);
	HRESULT(STDMETHODCALLTYPE * get_Privilege) (ITCallInfo * This, CALL_PRIVILEGE * pPrivilege);
	HRESULT(STDMETHODCALLTYPE * get_CallHub) (ITCallInfo * This, ITCallHub ** ppCallHub);
	HRESULT(STDMETHODCALLTYPE * get_CallInfoLong) (ITCallInfo * This, CALLINFO_LONG CallInfoLong, long *plCallInfoLongVal);
	HRESULT(STDMETHODCALLTYPE * put_CallInfoLong) (ITCallInfo * This, CALLINFO_LONG CallInfoLong, long lCallInfoLongVal);
	HRESULT(STDMETHODCALLTYPE * get_CallInfoString) (ITCallInfo * This, CALLINFO_STRING CallInfoString, BSTR * ppCallInfoString);
	HRESULT(STDMETHODCALLTYPE * put_CallInfoString) (ITCallInfo * This, CALLINFO_STRING CallInfoString, BSTR pCallInfoString);
	HRESULT(STDMETHODCALLTYPE * get_CallInfoBuffer) (ITCallInfo * This, CALLINFO_BUFFER CallInfoBuffer, VARIANT * ppCallInfoBuffer);
	HRESULT(STDMETHODCALLTYPE * put_CallInfoBuffer) (ITCallInfo * This, CALLINFO_BUFFER CallInfoBuffer, VARIANT pCallInfoBuffer);
	HRESULT(STDMETHODCALLTYPE * GetCallInfoBuffer) (ITCallInfo * This, CALLINFO_BUFFER CallInfoBuffer, DWORD * pdwSize, BYTE ** ppCallInfoBuffer);
	HRESULT(STDMETHODCALLTYPE * SetCallInfoBuffer) (ITCallInfo * This, CALLINFO_BUFFER CallInfoBuffer, DWORD dwSize, BYTE * pCallInfoBuffer);
	HRESULT(STDMETHODCALLTYPE * ReleaseUserUserInfo) (ITCallInfo * This);
	END_INTERFACE
}  ITCallInfoVtbl;
interface ITCallInfo
{
	CONST_VTBL struct ITCallInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITCallInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITCallInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITCallInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITCallInfo_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITCallInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITCallInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITCallInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITCallInfo_get_Address(This,ppAddress) ( (This)->lpVtbl -> get_Address(This,ppAddress) )
#define ITCallInfo_get_CallState(This,pCallState) ( (This)->lpVtbl -> get_CallState(This,pCallState) )
#define ITCallInfo_get_Privilege(This,pPrivilege) ( (This)->lpVtbl -> get_Privilege(This,pPrivilege) )
#define ITCallInfo_get_CallHub(This,ppCallHub) ( (This)->lpVtbl -> get_CallHub(This,ppCallHub) )
#define ITCallInfo_get_CallInfoLong(This,CallInfoLong,plCallInfoLongVal) ( (This)->lpVtbl -> get_CallInfoLong(This,CallInfoLong,plCallInfoLongVal) )
#define ITCallInfo_put_CallInfoLong(This,CallInfoLong,lCallInfoLongVal) ( (This)->lpVtbl -> put_CallInfoLong(This,CallInfoLong,lCallInfoLongVal) )
#define ITCallInfo_get_CallInfoString(This,CallInfoString,ppCallInfoString) ( (This)->lpVtbl -> get_CallInfoString(This,CallInfoString,ppCallInfoString) )
#define ITCallInfo_put_CallInfoString(This,CallInfoString,pCallInfoString) ( (This)->lpVtbl -> put_CallInfoString(This,CallInfoString,pCallInfoString) )
#define ITCallInfo_get_CallInfoBuffer(This,CallInfoBuffer,ppCallInfoBuffer) ( (This)->lpVtbl -> get_CallInfoBuffer(This,CallInfoBuffer,ppCallInfoBuffer) )
#define ITCallInfo_put_CallInfoBuffer(This,CallInfoBuffer,pCallInfoBuffer) ( (This)->lpVtbl -> put_CallInfoBuffer(This,CallInfoBuffer,pCallInfoBuffer) )
#define ITCallInfo_GetCallInfoBuffer(This,CallInfoBuffer,pdwSize,ppCallInfoBuffer) ( (This)->lpVtbl -> GetCallInfoBuffer(This,CallInfoBuffer,pdwSize,ppCallInfoBuffer) )
#define ITCallInfo_SetCallInfoBuffer(This,CallInfoBuffer,dwSize,pCallInfoBuffer) ( (This)->lpVtbl -> SetCallInfoBuffer(This,CallInfoBuffer,dwSize,pCallInfoBuffer) )
#define ITCallInfo_ReleaseUserUserInfo(This) ( (This)->lpVtbl -> ReleaseUserUserInfo(This) )
#endif
#endif
#ifndef __ITCallInfo2_INTERFACE_DEFINED__
#define __ITCallInfo2_INTERFACE_DEFINED__
extern const IID IID_ITCallInfo2;
typedef struct ITCallInfo2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITCallInfo2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITCallInfo2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITCallInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITCallInfo2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITCallInfo2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITCallInfo2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITCallInfo2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Address) (ITCallInfo2 * This, ITAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * get_CallState) (ITCallInfo2 * This, CALL_STATE * pCallState);
	HRESULT(STDMETHODCALLTYPE * get_Privilege) (ITCallInfo2 * This, CALL_PRIVILEGE * pPrivilege);
	HRESULT(STDMETHODCALLTYPE * get_CallHub) (ITCallInfo2 * This, ITCallHub ** ppCallHub);
	HRESULT(STDMETHODCALLTYPE * get_CallInfoLong) (ITCallInfo2 * This, CALLINFO_LONG CallInfoLong, long *plCallInfoLongVal);
	HRESULT(STDMETHODCALLTYPE * put_CallInfoLong) (ITCallInfo2 * This, CALLINFO_LONG CallInfoLong, long lCallInfoLongVal);
	HRESULT(STDMETHODCALLTYPE * get_CallInfoString) (ITCallInfo2 * This, CALLINFO_STRING CallInfoString, BSTR * ppCallInfoString);
	HRESULT(STDMETHODCALLTYPE * put_CallInfoString) (ITCallInfo2 * This, CALLINFO_STRING CallInfoString, BSTR pCallInfoString);
	HRESULT(STDMETHODCALLTYPE * get_CallInfoBuffer) (ITCallInfo2 * This, CALLINFO_BUFFER CallInfoBuffer, VARIANT * ppCallInfoBuffer);
	HRESULT(STDMETHODCALLTYPE * put_CallInfoBuffer) (ITCallInfo2 * This, CALLINFO_BUFFER CallInfoBuffer, VARIANT pCallInfoBuffer);
	HRESULT(STDMETHODCALLTYPE * GetCallInfoBuffer) (ITCallInfo2 * This, CALLINFO_BUFFER CallInfoBuffer, DWORD * pdwSize, BYTE ** ppCallInfoBuffer);
	HRESULT(STDMETHODCALLTYPE * SetCallInfoBuffer) (ITCallInfo2 * This, CALLINFO_BUFFER CallInfoBuffer, DWORD dwSize, BYTE * pCallInfoBuffer);
	HRESULT(STDMETHODCALLTYPE * ReleaseUserUserInfo) (ITCallInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * get_EventFilter) (ITCallInfo2 * This, TAPI_EVENT TapiEvent, long lSubEvent, VARIANT_BOOL * pEnable);
	HRESULT(STDMETHODCALLTYPE * put_EventFilter) (ITCallInfo2 * This, TAPI_EVENT TapiEvent, long lSubEvent, VARIANT_BOOL bEnable);
	END_INTERFACE
}  ITCallInfo2Vtbl;
interface ITCallInfo2
{
	CONST_VTBL struct ITCallInfo2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITCallInfo2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITCallInfo2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITCallInfo2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITCallInfo2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITCallInfo2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITCallInfo2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITCallInfo2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITCallInfo2_get_Address(This,ppAddress) ( (This)->lpVtbl -> get_Address(This,ppAddress) )
#define ITCallInfo2_get_CallState(This,pCallState) ( (This)->lpVtbl -> get_CallState(This,pCallState) )
#define ITCallInfo2_get_Privilege(This,pPrivilege) ( (This)->lpVtbl -> get_Privilege(This,pPrivilege) )
#define ITCallInfo2_get_CallHub(This,ppCallHub) ( (This)->lpVtbl -> get_CallHub(This,ppCallHub) )
#define ITCallInfo2_get_CallInfoLong(This,CallInfoLong,plCallInfoLongVal) ( (This)->lpVtbl -> get_CallInfoLong(This,CallInfoLong,plCallInfoLongVal) )
#define ITCallInfo2_put_CallInfoLong(This,CallInfoLong,lCallInfoLongVal) ( (This)->lpVtbl -> put_CallInfoLong(This,CallInfoLong,lCallInfoLongVal) )
#define ITCallInfo2_get_CallInfoString(This,CallInfoString,ppCallInfoString) ( (This)->lpVtbl -> get_CallInfoString(This,CallInfoString,ppCallInfoString) )
#define ITCallInfo2_put_CallInfoString(This,CallInfoString,pCallInfoString) ( (This)->lpVtbl -> put_CallInfoString(This,CallInfoString,pCallInfoString) )
#define ITCallInfo2_get_CallInfoBuffer(This,CallInfoBuffer,ppCallInfoBuffer) ( (This)->lpVtbl -> get_CallInfoBuffer(This,CallInfoBuffer,ppCallInfoBuffer) )
#define ITCallInfo2_put_CallInfoBuffer(This,CallInfoBuffer,pCallInfoBuffer) ( (This)->lpVtbl -> put_CallInfoBuffer(This,CallInfoBuffer,pCallInfoBuffer) )
#define ITCallInfo2_GetCallInfoBuffer(This,CallInfoBuffer,pdwSize,ppCallInfoBuffer) ( (This)->lpVtbl -> GetCallInfoBuffer(This,CallInfoBuffer,pdwSize,ppCallInfoBuffer) )
#define ITCallInfo2_SetCallInfoBuffer(This,CallInfoBuffer,dwSize,pCallInfoBuffer) ( (This)->lpVtbl -> SetCallInfoBuffer(This,CallInfoBuffer,dwSize,pCallInfoBuffer) )
#define ITCallInfo2_ReleaseUserUserInfo(This) ( (This)->lpVtbl -> ReleaseUserUserInfo(This) )
#define ITCallInfo2_get_EventFilter(This,TapiEvent,lSubEvent,pEnable) ( (This)->lpVtbl -> get_EventFilter(This,TapiEvent,lSubEvent,pEnable) )
#define ITCallInfo2_put_EventFilter(This,TapiEvent,lSubEvent,bEnable) ( (This)->lpVtbl -> put_EventFilter(This,TapiEvent,lSubEvent,bEnable) )
#endif
#endif
#ifndef __ITTerminal_INTERFACE_DEFINED__
#define __ITTerminal_INTERFACE_DEFINED__
extern const IID IID_ITTerminal;
typedef struct ITTerminalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITTerminal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITTerminal * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITTerminal * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITTerminal * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITTerminal * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITTerminal * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITTerminal * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ITTerminal * This, BSTR * ppName);
	HRESULT(STDMETHODCALLTYPE * get_State) (ITTerminal * This, TERMINAL_STATE * pTerminalState);
	HRESULT(STDMETHODCALLTYPE * get_TerminalType) (ITTerminal * This, TERMINAL_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * get_TerminalClass) (ITTerminal * This, BSTR * ppTerminalClass);
	HRESULT(STDMETHODCALLTYPE * get_MediaType) (ITTerminal * This, long *plMediaType);
	HRESULT(STDMETHODCALLTYPE * get_Direction) (ITTerminal * This, TERMINAL_DIRECTION * pDirection);
	END_INTERFACE
}  ITTerminalVtbl;
interface ITTerminal
{
	CONST_VTBL struct ITTerminalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITTerminal_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITTerminal_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITTerminal_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITTerminal_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITTerminal_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITTerminal_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITTerminal_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITTerminal_get_Name(This,ppName) ( (This)->lpVtbl -> get_Name(This,ppName) )
#define ITTerminal_get_State(This,pTerminalState) ( (This)->lpVtbl -> get_State(This,pTerminalState) )
#define ITTerminal_get_TerminalType(This,pType) ( (This)->lpVtbl -> get_TerminalType(This,pType) )
#define ITTerminal_get_TerminalClass(This,ppTerminalClass) ( (This)->lpVtbl -> get_TerminalClass(This,ppTerminalClass) )
#define ITTerminal_get_MediaType(This,plMediaType) ( (This)->lpVtbl -> get_MediaType(This,plMediaType) )
#define ITTerminal_get_Direction(This,pDirection) ( (This)->lpVtbl -> get_Direction(This,pDirection) )
#endif
#endif
#ifndef __ITMultiTrackTerminal_INTERFACE_DEFINED__
#define __ITMultiTrackTerminal_INTERFACE_DEFINED__
extern const IID IID_ITMultiTrackTerminal;
typedef struct ITMultiTrackTerminalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITMultiTrackTerminal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITMultiTrackTerminal * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITMultiTrackTerminal * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITMultiTrackTerminal * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITMultiTrackTerminal * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITMultiTrackTerminal * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITMultiTrackTerminal * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_TrackTerminals) (ITMultiTrackTerminal * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateTrackTerminals) (ITMultiTrackTerminal * This, IEnumTerminal ** ppEnumTerminal);
	HRESULT(STDMETHODCALLTYPE * CreateTrackTerminal) (ITMultiTrackTerminal * This, long MediaType, TERMINAL_DIRECTION TerminalDirection, ITTerminal ** ppTerminal);
	HRESULT(STDMETHODCALLTYPE * get_MediaTypesInUse) (ITMultiTrackTerminal * This, long *plMediaTypesInUse);
	HRESULT(STDMETHODCALLTYPE * get_DirectionsInUse) (ITMultiTrackTerminal * This, TERMINAL_DIRECTION * plDirectionsInUsed);
	HRESULT(STDMETHODCALLTYPE * RemoveTrackTerminal) (ITMultiTrackTerminal * This, ITTerminal * pTrackTerminalToRemove);
	END_INTERFACE
}  ITMultiTrackTerminalVtbl;
interface ITMultiTrackTerminal
{
	CONST_VTBL struct ITMultiTrackTerminalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITMultiTrackTerminal_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITMultiTrackTerminal_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITMultiTrackTerminal_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITMultiTrackTerminal_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITMultiTrackTerminal_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITMultiTrackTerminal_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITMultiTrackTerminal_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITMultiTrackTerminal_get_TrackTerminals(This,pVariant) ( (This)->lpVtbl -> get_TrackTerminals(This,pVariant) )
#define ITMultiTrackTerminal_EnumerateTrackTerminals(This,ppEnumTerminal) ( (This)->lpVtbl -> EnumerateTrackTerminals(This,ppEnumTerminal) )
#define ITMultiTrackTerminal_CreateTrackTerminal(This,MediaType,TerminalDirection,ppTerminal) ( (This)->lpVtbl -> CreateTrackTerminal(This,MediaType,TerminalDirection,ppTerminal) )
#define ITMultiTrackTerminal_get_MediaTypesInUse(This,plMediaTypesInUse) ( (This)->lpVtbl -> get_MediaTypesInUse(This,plMediaTypesInUse) )
#define ITMultiTrackTerminal_get_DirectionsInUse(This,plDirectionsInUsed) ( (This)->lpVtbl -> get_DirectionsInUse(This,plDirectionsInUsed) )
#define ITMultiTrackTerminal_RemoveTrackTerminal(This,pTrackTerminalToRemove) ( (This)->lpVtbl -> RemoveTrackTerminal(This,pTrackTerminalToRemove) )
#endif
#endif
typedef enum TERMINAL_MEDIA_STATE
{
	TMS_IDLE = 0,
	TMS_ACTIVE = (TMS_IDLE + 1),
	TMS_PAUSED = (TMS_ACTIVE + 1),
	TMS_LASTITEM = TMS_PAUSED
} TERMINAL_MEDIA_STATE;
typedef enum FT_STATE_EVENT_CAUSE
{
	FTEC_NORMAL = 0,
	FTEC_END_OF_FILE = (FTEC_NORMAL + 1),
	FTEC_READ_ERROR = (FTEC_END_OF_FILE + 1),
	FTEC_WRITE_ERROR = (FTEC_READ_ERROR + 1)
} FT_STATE_EVENT_CAUSE;
extern RPC_IF_HANDLE __MIDL_itf_tapi3if_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3if_0000_0017_v0_0_s_ifspec;
#ifndef __ITFileTrack_INTERFACE_DEFINED__
#define __ITFileTrack_INTERFACE_DEFINED__
extern const IID IID_ITFileTrack;
typedef struct ITFileTrackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITFileTrack * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITFileTrack * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITFileTrack * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITFileTrack * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITFileTrack * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITFileTrack * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITFileTrack * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Format) (ITFileTrack * This, AM_MEDIA_TYPE ** ppmt);
	HRESULT(STDMETHODCALLTYPE * put_Format) (ITFileTrack * This, const AM_MEDIA_TYPE * pmt);
	HRESULT(STDMETHODCALLTYPE * get_ControllingTerminal) (ITFileTrack * This, ITTerminal ** ppControllingTerminal);
	HRESULT(STDMETHODCALLTYPE * get_AudioFormatForScripting) (ITFileTrack * This, ITScriptableAudioFormat ** ppAudioFormat);
	HRESULT(STDMETHODCALLTYPE * put_AudioFormatForScripting) (ITFileTrack * This, ITScriptableAudioFormat * pAudioFormat);
	HRESULT(STDMETHODCALLTYPE * get_EmptyAudioFormatForScripting) (ITFileTrack * This, ITScriptableAudioFormat ** ppAudioFormat);
	END_INTERFACE
}  ITFileTrackVtbl;
interface ITFileTrack
{
	CONST_VTBL struct ITFileTrackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITFileTrack_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITFileTrack_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITFileTrack_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITFileTrack_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITFileTrack_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITFileTrack_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITFileTrack_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITFileTrack_get_Format(This,ppmt) ( (This)->lpVtbl -> get_Format(This,ppmt) )
#define ITFileTrack_put_Format(This,pmt) ( (This)->lpVtbl -> put_Format(This,pmt) )
#define ITFileTrack_get_ControllingTerminal(This,ppControllingTerminal) ( (This)->lpVtbl -> get_ControllingTerminal(This,ppControllingTerminal) )
#define ITFileTrack_get_AudioFormatForScripting(This,ppAudioFormat) ( (This)->lpVtbl -> get_AudioFormatForScripting(This,ppAudioFormat) )
#define ITFileTrack_put_AudioFormatForScripting(This,pAudioFormat) ( (This)->lpVtbl -> put_AudioFormatForScripting(This,pAudioFormat) )
#define ITFileTrack_get_EmptyAudioFormatForScripting(This,ppAudioFormat) ( (This)->lpVtbl -> get_EmptyAudioFormatForScripting(This,ppAudioFormat) )
#endif
#endif
#ifndef __ITMediaPlayback_INTERFACE_DEFINED__
#define __ITMediaPlayback_INTERFACE_DEFINED__
extern const IID IID_ITMediaPlayback;
typedef struct ITMediaPlaybackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITMediaPlayback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITMediaPlayback * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITMediaPlayback * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITMediaPlayback * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITMediaPlayback * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITMediaPlayback * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITMediaPlayback * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_PlayList) (ITMediaPlayback * This, VARIANTARG PlayListVariant);
	HRESULT(STDMETHODCALLTYPE * get_PlayList) (ITMediaPlayback * This, VARIANTARG * pPlayListVariant);
	END_INTERFACE
}  ITMediaPlaybackVtbl;
interface ITMediaPlayback
{
	CONST_VTBL struct ITMediaPlaybackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITMediaPlayback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITMediaPlayback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITMediaPlayback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITMediaPlayback_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITMediaPlayback_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITMediaPlayback_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITMediaPlayback_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITMediaPlayback_put_PlayList(This,PlayListVariant) ( (This)->lpVtbl -> put_PlayList(This,PlayListVariant) )
#define ITMediaPlayback_get_PlayList(This,pPlayListVariant) ( (This)->lpVtbl -> get_PlayList(This,pPlayListVariant) )
#endif
#endif
#ifndef __ITMediaRecord_INTERFACE_DEFINED__
#define __ITMediaRecord_INTERFACE_DEFINED__
extern const IID IID_ITMediaRecord;
typedef struct ITMediaRecordVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITMediaRecord * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITMediaRecord * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITMediaRecord * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITMediaRecord * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITMediaRecord * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITMediaRecord * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITMediaRecord * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_FileName) (ITMediaRecord * This, BSTR bstrFileName);
	HRESULT(STDMETHODCALLTYPE * get_FileName) (ITMediaRecord * This, BSTR * pbstrFileName);
	END_INTERFACE
}  ITMediaRecordVtbl;
interface ITMediaRecord
{
	CONST_VTBL struct ITMediaRecordVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITMediaRecord_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITMediaRecord_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITMediaRecord_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITMediaRecord_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITMediaRecord_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITMediaRecord_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITMediaRecord_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITMediaRecord_put_FileName(This,bstrFileName) ( (This)->lpVtbl -> put_FileName(This,bstrFileName) )
#define ITMediaRecord_get_FileName(This,pbstrFileName) ( (This)->lpVtbl -> get_FileName(This,pbstrFileName) )
#endif
#endif
#ifndef __ITMediaControl_INTERFACE_DEFINED__
#define __ITMediaControl_INTERFACE_DEFINED__
extern const IID IID_ITMediaControl;
typedef struct ITMediaControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITMediaControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITMediaControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITMediaControl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITMediaControl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITMediaControl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITMediaControl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITMediaControl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Start) (ITMediaControl * This);
	HRESULT(STDMETHODCALLTYPE * Stop) (ITMediaControl * This);
	HRESULT(STDMETHODCALLTYPE * Pause) (ITMediaControl * This);
	HRESULT(STDMETHODCALLTYPE * get_MediaState) (ITMediaControl * This, TERMINAL_MEDIA_STATE * pTerminalMediaState);
	END_INTERFACE
}  ITMediaControlVtbl;
interface ITMediaControl
{
	CONST_VTBL struct ITMediaControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITMediaControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITMediaControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITMediaControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITMediaControl_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITMediaControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITMediaControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITMediaControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITMediaControl_Start(This) ( (This)->lpVtbl -> Start(This) )
#define ITMediaControl_Stop(This) ( (This)->lpVtbl -> Stop(This) )
#define ITMediaControl_Pause(This) ( (This)->lpVtbl -> Pause(This) )
#define ITMediaControl_get_MediaState(This,pTerminalMediaState) ( (This)->lpVtbl -> get_MediaState(This,pTerminalMediaState) )
#endif
#endif
#ifndef __ITBasicAudioTerminal_INTERFACE_DEFINED__
#define __ITBasicAudioTerminal_INTERFACE_DEFINED__
extern const IID IID_ITBasicAudioTerminal;
typedef struct ITBasicAudioTerminalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITBasicAudioTerminal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITBasicAudioTerminal * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITBasicAudioTerminal * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITBasicAudioTerminal * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITBasicAudioTerminal * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITBasicAudioTerminal * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITBasicAudioTerminal * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_Volume) (ITBasicAudioTerminal * This, long lVolume);
	HRESULT(STDMETHODCALLTYPE * get_Volume) (ITBasicAudioTerminal * This, long *plVolume);
	HRESULT(STDMETHODCALLTYPE * put_Balance) (ITBasicAudioTerminal * This, long lBalance);
	HRESULT(STDMETHODCALLTYPE * get_Balance) (ITBasicAudioTerminal * This, long *plBalance);
	END_INTERFACE
}  ITBasicAudioTerminalVtbl;
interface ITBasicAudioTerminal
{
	CONST_VTBL struct ITBasicAudioTerminalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITBasicAudioTerminal_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITBasicAudioTerminal_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITBasicAudioTerminal_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITBasicAudioTerminal_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITBasicAudioTerminal_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITBasicAudioTerminal_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITBasicAudioTerminal_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITBasicAudioTerminal_put_Volume(This,lVolume) ( (This)->lpVtbl -> put_Volume(This,lVolume) )
#define ITBasicAudioTerminal_get_Volume(This,plVolume) ( (This)->lpVtbl -> get_Volume(This,plVolume) )
#define ITBasicAudioTerminal_put_Balance(This,lBalance) ( (This)->lpVtbl -> put_Balance(This,lBalance) )
#define ITBasicAudioTerminal_get_Balance(This,plBalance) ( (This)->lpVtbl -> get_Balance(This,plBalance) )
#endif
#endif
#ifndef __ITStaticAudioTerminal_INTERFACE_DEFINED__
#define __ITStaticAudioTerminal_INTERFACE_DEFINED__
extern const IID IID_ITStaticAudioTerminal;
typedef struct ITStaticAudioTerminalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITStaticAudioTerminal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITStaticAudioTerminal * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITStaticAudioTerminal * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITStaticAudioTerminal * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITStaticAudioTerminal * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITStaticAudioTerminal * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITStaticAudioTerminal * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_WaveId) (ITStaticAudioTerminal * This, long *plWaveId);
	END_INTERFACE
}  ITStaticAudioTerminalVtbl;
interface ITStaticAudioTerminal
{
	CONST_VTBL struct ITStaticAudioTerminalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITStaticAudioTerminal_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITStaticAudioTerminal_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITStaticAudioTerminal_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITStaticAudioTerminal_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITStaticAudioTerminal_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITStaticAudioTerminal_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITStaticAudioTerminal_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITStaticAudioTerminal_get_WaveId(This,plWaveId) ( (This)->lpVtbl -> get_WaveId(This,plWaveId) )
#endif
#endif
#ifndef __ITCallHub_INTERFACE_DEFINED__
#define __ITCallHub_INTERFACE_DEFINED__
extern const IID IID_ITCallHub;
typedef struct ITCallHubVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITCallHub * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITCallHub * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITCallHub * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITCallHub * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITCallHub * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITCallHub * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITCallHub * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Clear) (ITCallHub * This);
	HRESULT(STDMETHODCALLTYPE * EnumerateCalls) (ITCallHub * This, IEnumCall ** ppEnumCall);
	HRESULT(STDMETHODCALLTYPE * get_Calls) (ITCallHub * This, VARIANT * pCalls);
	HRESULT(STDMETHODCALLTYPE * get_NumCalls) (ITCallHub * This, long *plCalls);
	HRESULT(STDMETHODCALLTYPE * get_State) (ITCallHub * This, CALLHUB_STATE * pState);
	END_INTERFACE
}  ITCallHubVtbl;
interface ITCallHub
{
	CONST_VTBL struct ITCallHubVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITCallHub_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITCallHub_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITCallHub_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITCallHub_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITCallHub_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITCallHub_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITCallHub_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITCallHub_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#define ITCallHub_EnumerateCalls(This,ppEnumCall) ( (This)->lpVtbl -> EnumerateCalls(This,ppEnumCall) )
#define ITCallHub_get_Calls(This,pCalls) ( (This)->lpVtbl -> get_Calls(This,pCalls) )
#define ITCallHub_get_NumCalls(This,plCalls) ( (This)->lpVtbl -> get_NumCalls(This,plCalls) )
#define ITCallHub_get_State(This,pState) ( (This)->lpVtbl -> get_State(This,pState) )
#endif
#endif
#ifndef __ITLegacyAddressMediaControl_INTERFACE_DEFINED__
#define __ITLegacyAddressMediaControl_INTERFACE_DEFINED__
extern const IID IID_ITLegacyAddressMediaControl;
typedef struct ITLegacyAddressMediaControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITLegacyAddressMediaControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITLegacyAddressMediaControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITLegacyAddressMediaControl * This);
	HRESULT(STDMETHODCALLTYPE * GetID) (ITLegacyAddressMediaControl * This, BSTR pDeviceClass, DWORD * pdwSize, BYTE ** ppDeviceID);
	HRESULT(STDMETHODCALLTYPE * GetDevConfig) (ITLegacyAddressMediaControl * This, BSTR pDeviceClass, DWORD * pdwSize, BYTE ** ppDeviceConfig);
	HRESULT(STDMETHODCALLTYPE * SetDevConfig) (ITLegacyAddressMediaControl * This, BSTR pDeviceClass, DWORD dwSize, BYTE * pDeviceConfig);
	END_INTERFACE
}  ITLegacyAddressMediaControlVtbl;
interface ITLegacyAddressMediaControl
{
	CONST_VTBL struct ITLegacyAddressMediaControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITLegacyAddressMediaControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITLegacyAddressMediaControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITLegacyAddressMediaControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITLegacyAddressMediaControl_GetID(This,pDeviceClass,pdwSize,ppDeviceID) ( (This)->lpVtbl -> GetID(This,pDeviceClass,pdwSize,ppDeviceID) )
#define ITLegacyAddressMediaControl_GetDevConfig(This,pDeviceClass,pdwSize,ppDeviceConfig) ( (This)->lpVtbl -> GetDevConfig(This,pDeviceClass,pdwSize,ppDeviceConfig) )
#define ITLegacyAddressMediaControl_SetDevConfig(This,pDeviceClass,dwSize,pDeviceConfig) ( (This)->lpVtbl -> SetDevConfig(This,pDeviceClass,dwSize,pDeviceConfig) )
#endif
#endif
#ifndef __ITPrivateEvent_INTERFACE_DEFINED__
#define __ITPrivateEvent_INTERFACE_DEFINED__
extern const IID IID_ITPrivateEvent;
typedef struct ITPrivateEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITPrivateEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITPrivateEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITPrivateEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITPrivateEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITPrivateEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITPrivateEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITPrivateEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Address) (ITPrivateEvent * This, ITAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITPrivateEvent * This, ITCallInfo ** ppCallInfo);
	HRESULT(STDMETHODCALLTYPE * get_CallHub) (ITPrivateEvent * This, ITCallHub ** ppCallHub);
	HRESULT(STDMETHODCALLTYPE * get_EventCode) (ITPrivateEvent * This, long *plEventCode);
	HRESULT(STDMETHODCALLTYPE * get_EventInterface) (ITPrivateEvent * This, IDispatch ** pEventInterface);
	END_INTERFACE
}  ITPrivateEventVtbl;
interface ITPrivateEvent
{
	CONST_VTBL struct ITPrivateEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITPrivateEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITPrivateEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITPrivateEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITPrivateEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITPrivateEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITPrivateEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITPrivateEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITPrivateEvent_get_Address(This,ppAddress) ( (This)->lpVtbl -> get_Address(This,ppAddress) )
#define ITPrivateEvent_get_Call(This,ppCallInfo) ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
#define ITPrivateEvent_get_CallHub(This,ppCallHub) ( (This)->lpVtbl -> get_CallHub(This,ppCallHub) )
#define ITPrivateEvent_get_EventCode(This,plEventCode) ( (This)->lpVtbl -> get_EventCode(This,plEventCode) )
#define ITPrivateEvent_get_EventInterface(This,pEventInterface) ( (This)->lpVtbl -> get_EventInterface(This,pEventInterface) )
#endif
#endif
#ifndef __ITLegacyAddressMediaControl2_INTERFACE_DEFINED__
#define __ITLegacyAddressMediaControl2_INTERFACE_DEFINED__
extern const IID IID_ITLegacyAddressMediaControl2;
typedef struct ITLegacyAddressMediaControl2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITLegacyAddressMediaControl2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITLegacyAddressMediaControl2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITLegacyAddressMediaControl2 * This);
	HRESULT(STDMETHODCALLTYPE * GetID) (ITLegacyAddressMediaControl2 * This, BSTR pDeviceClass, DWORD * pdwSize, BYTE ** ppDeviceID);
	HRESULT(STDMETHODCALLTYPE * GetDevConfig) (ITLegacyAddressMediaControl2 * This, BSTR pDeviceClass, DWORD * pdwSize, BYTE ** ppDeviceConfig);
	HRESULT(STDMETHODCALLTYPE * SetDevConfig) (ITLegacyAddressMediaControl2 * This, BSTR pDeviceClass, DWORD dwSize, BYTE * pDeviceConfig);
	HRESULT(STDMETHODCALLTYPE * ConfigDialog) (ITLegacyAddressMediaControl2 * This, HWND hwndOwner, BSTR pDeviceClass);
	HRESULT(STDMETHODCALLTYPE * ConfigDialogEdit) (ITLegacyAddressMediaControl2 * This, HWND hwndOwner, BSTR pDeviceClass, DWORD dwSizeIn, BYTE * pDeviceConfigIn, DWORD * pdwSizeOut, BYTE ** ppDeviceConfigOut);
	END_INTERFACE
}  ITLegacyAddressMediaControl2Vtbl;
interface ITLegacyAddressMediaControl2
{
	CONST_VTBL struct ITLegacyAddressMediaControl2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITLegacyAddressMediaControl2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITLegacyAddressMediaControl2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITLegacyAddressMediaControl2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITLegacyAddressMediaControl2_GetID(This,pDeviceClass,pdwSize,ppDeviceID) ( (This)->lpVtbl -> GetID(This,pDeviceClass,pdwSize,ppDeviceID) )
#define ITLegacyAddressMediaControl2_GetDevConfig(This,pDeviceClass,pdwSize,ppDeviceConfig) ( (This)->lpVtbl -> GetDevConfig(This,pDeviceClass,pdwSize,ppDeviceConfig) )
#define ITLegacyAddressMediaControl2_SetDevConfig(This,pDeviceClass,dwSize,pDeviceConfig) ( (This)->lpVtbl -> SetDevConfig(This,pDeviceClass,dwSize,pDeviceConfig) )
#define ITLegacyAddressMediaControl2_ConfigDialog(This,hwndOwner,pDeviceClass) ( (This)->lpVtbl -> ConfigDialog(This,hwndOwner,pDeviceClass) )
#define ITLegacyAddressMediaControl2_ConfigDialogEdit(This,hwndOwner,pDeviceClass,dwSizeIn,pDeviceConfigIn,pdwSizeOut,ppDeviceConfigOut) ( (This)->lpVtbl -> ConfigDialogEdit(This,hwndOwner,pDeviceClass,dwSizeIn,pDeviceConfigIn,pdwSizeOut,ppDeviceConfigOut) )
#endif
#endif
#ifndef __ITLegacyCallMediaControl_INTERFACE_DEFINED__
#define __ITLegacyCallMediaControl_INTERFACE_DEFINED__
extern const IID IID_ITLegacyCallMediaControl;
typedef struct ITLegacyCallMediaControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITLegacyCallMediaControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITLegacyCallMediaControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITLegacyCallMediaControl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITLegacyCallMediaControl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITLegacyCallMediaControl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITLegacyCallMediaControl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITLegacyCallMediaControl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * DetectDigits) (ITLegacyCallMediaControl * This, TAPI_DIGITMODE DigitMode);
	HRESULT(STDMETHODCALLTYPE * GenerateDigits) (ITLegacyCallMediaControl * This, BSTR pDigits, TAPI_DIGITMODE DigitMode);
	HRESULT(STDMETHODCALLTYPE * GetID) (ITLegacyCallMediaControl * This, BSTR pDeviceClass, DWORD * pdwSize, BYTE ** ppDeviceID);
	HRESULT(STDMETHODCALLTYPE * SetMediaType) (ITLegacyCallMediaControl * This, long lMediaType);
	HRESULT(STDMETHODCALLTYPE * MonitorMedia) (ITLegacyCallMediaControl * This, long lMediaType);
	END_INTERFACE
}  ITLegacyCallMediaControlVtbl;
interface ITLegacyCallMediaControl
{
	CONST_VTBL struct ITLegacyCallMediaControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITLegacyCallMediaControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITLegacyCallMediaControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITLegacyCallMediaControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITLegacyCallMediaControl_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITLegacyCallMediaControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITLegacyCallMediaControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITLegacyCallMediaControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITLegacyCallMediaControl_DetectDigits(This,DigitMode) ( (This)->lpVtbl -> DetectDigits(This,DigitMode) )
#define ITLegacyCallMediaControl_GenerateDigits(This,pDigits,DigitMode) ( (This)->lpVtbl -> GenerateDigits(This,pDigits,DigitMode) )
#define ITLegacyCallMediaControl_GetID(This,pDeviceClass,pdwSize,ppDeviceID) ( (This)->lpVtbl -> GetID(This,pDeviceClass,pdwSize,ppDeviceID) )
#define ITLegacyCallMediaControl_SetMediaType(This,lMediaType) ( (This)->lpVtbl -> SetMediaType(This,lMediaType) )
#define ITLegacyCallMediaControl_MonitorMedia(This,lMediaType) ( (This)->lpVtbl -> MonitorMedia(This,lMediaType) )
#endif
#endif
#ifndef __ITLegacyCallMediaControl2_INTERFACE_DEFINED__
#define __ITLegacyCallMediaControl2_INTERFACE_DEFINED__
extern const IID IID_ITLegacyCallMediaControl2;
typedef struct ITLegacyCallMediaControl2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITLegacyCallMediaControl2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITLegacyCallMediaControl2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITLegacyCallMediaControl2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITLegacyCallMediaControl2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITLegacyCallMediaControl2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITLegacyCallMediaControl2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITLegacyCallMediaControl2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * DetectDigits) (ITLegacyCallMediaControl2 * This, TAPI_DIGITMODE DigitMode);
	HRESULT(STDMETHODCALLTYPE * GenerateDigits) (ITLegacyCallMediaControl2 * This, BSTR pDigits, TAPI_DIGITMODE DigitMode);
	HRESULT(STDMETHODCALLTYPE * GetID) (ITLegacyCallMediaControl2 * This, BSTR pDeviceClass, DWORD * pdwSize, BYTE ** ppDeviceID);
	HRESULT(STDMETHODCALLTYPE * SetMediaType) (ITLegacyCallMediaControl2 * This, long lMediaType);
	HRESULT(STDMETHODCALLTYPE * MonitorMedia) (ITLegacyCallMediaControl2 * This, long lMediaType);
	HRESULT(STDMETHODCALLTYPE * GenerateDigits2) (ITLegacyCallMediaControl2 * This, BSTR pDigits, TAPI_DIGITMODE DigitMode, long lDuration);
	HRESULT(STDMETHODCALLTYPE * GatherDigits) (ITLegacyCallMediaControl2 * This, TAPI_DIGITMODE DigitMode, long lNumDigits, BSTR pTerminationDigits, long lFirstDigitTimeout, long lInterDigitTimeout);
	HRESULT(STDMETHODCALLTYPE * DetectTones) (ITLegacyCallMediaControl2 * This, TAPI_DETECTTONE * pToneList, long lNumTones);
	HRESULT(STDMETHODCALLTYPE * DetectTonesByCollection) (ITLegacyCallMediaControl2 * This, ITCollection2 * pDetectToneCollection);
	HRESULT(STDMETHODCALLTYPE * GenerateTone) (ITLegacyCallMediaControl2 * This, TAPI_TONEMODE ToneMode, long lDuration);
	HRESULT(STDMETHODCALLTYPE * GenerateCustomTones) (ITLegacyCallMediaControl2 * This, TAPI_CUSTOMTONE * pToneList, long lNumTones, long lDuration);
	HRESULT(STDMETHODCALLTYPE * GenerateCustomTonesByCollection) (ITLegacyCallMediaControl2 * This, ITCollection2 * pCustomToneCollection, long lDuration);
	HRESULT(STDMETHODCALLTYPE * CreateDetectToneObject) (ITLegacyCallMediaControl2 * This, ITDetectTone ** ppDetectTone);
	HRESULT(STDMETHODCALLTYPE * CreateCustomToneObject) (ITLegacyCallMediaControl2 * This, ITCustomTone ** ppCustomTone);
	HRESULT(STDMETHODCALLTYPE * GetIDAsVariant) (ITLegacyCallMediaControl2 * This, BSTR bstrDeviceClass, VARIANT * pVarDeviceID);
	END_INTERFACE
}  ITLegacyCallMediaControl2Vtbl;
interface ITLegacyCallMediaControl2
{
	CONST_VTBL struct ITLegacyCallMediaControl2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITLegacyCallMediaControl2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITLegacyCallMediaControl2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITLegacyCallMediaControl2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITLegacyCallMediaControl2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITLegacyCallMediaControl2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITLegacyCallMediaControl2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITLegacyCallMediaControl2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITLegacyCallMediaControl2_DetectDigits(This,DigitMode) ( (This)->lpVtbl -> DetectDigits(This,DigitMode) )
#define ITLegacyCallMediaControl2_GenerateDigits(This,pDigits,DigitMode) ( (This)->lpVtbl -> GenerateDigits(This,pDigits,DigitMode) )
#define ITLegacyCallMediaControl2_GetID(This,pDeviceClass,pdwSize,ppDeviceID) ( (This)->lpVtbl -> GetID(This,pDeviceClass,pdwSize,ppDeviceID) )
#define ITLegacyCallMediaControl2_SetMediaType(This,lMediaType) ( (This)->lpVtbl -> SetMediaType(This,lMediaType) )
#define ITLegacyCallMediaControl2_MonitorMedia(This,lMediaType) ( (This)->lpVtbl -> MonitorMedia(This,lMediaType) )
#define ITLegacyCallMediaControl2_GenerateDigits2(This,pDigits,DigitMode,lDuration) ( (This)->lpVtbl -> GenerateDigits2(This,pDigits,DigitMode,lDuration) )
#define ITLegacyCallMediaControl2_GatherDigits(This,DigitMode,lNumDigits,pTerminationDigits,lFirstDigitTimeout,lInterDigitTimeout) ( (This)->lpVtbl -> GatherDigits(This,DigitMode,lNumDigits,pTerminationDigits,lFirstDigitTimeout,lInterDigitTimeout) )
#define ITLegacyCallMediaControl2_DetectTones(This,pToneList,lNumTones) ( (This)->lpVtbl -> DetectTones(This,pToneList,lNumTones) )
#define ITLegacyCallMediaControl2_DetectTonesByCollection(This,pDetectToneCollection) ( (This)->lpVtbl -> DetectTonesByCollection(This,pDetectToneCollection) )
#define ITLegacyCallMediaControl2_GenerateTone(This,ToneMode,lDuration) ( (This)->lpVtbl -> GenerateTone(This,ToneMode,lDuration) )
#define ITLegacyCallMediaControl2_GenerateCustomTones(This,pToneList,lNumTones,lDuration) ( (This)->lpVtbl -> GenerateCustomTones(This,pToneList,lNumTones,lDuration) )
#define ITLegacyCallMediaControl2_GenerateCustomTonesByCollection(This,pCustomToneCollection,lDuration) ( (This)->lpVtbl -> GenerateCustomTonesByCollection(This,pCustomToneCollection,lDuration) )
#define ITLegacyCallMediaControl2_CreateDetectToneObject(This,ppDetectTone) ( (This)->lpVtbl -> CreateDetectToneObject(This,ppDetectTone) )
#define ITLegacyCallMediaControl2_CreateCustomToneObject(This,ppCustomTone) ( (This)->lpVtbl -> CreateCustomToneObject(This,ppCustomTone) )
#define ITLegacyCallMediaControl2_GetIDAsVariant(This,bstrDeviceClass,pVarDeviceID) ( (This)->lpVtbl -> GetIDAsVariant(This,bstrDeviceClass,pVarDeviceID) )
#endif
#endif
#ifndef __ITDetectTone_INTERFACE_DEFINED__
#define __ITDetectTone_INTERFACE_DEFINED__
extern const IID IID_ITDetectTone;
typedef struct ITDetectToneVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITDetectTone * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITDetectTone * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITDetectTone * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITDetectTone * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITDetectTone * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITDetectTone * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITDetectTone * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AppSpecific) (ITDetectTone * This, long *plAppSpecific);
	HRESULT(STDMETHODCALLTYPE * put_AppSpecific) (ITDetectTone * This, long lAppSpecific);
	HRESULT(STDMETHODCALLTYPE * get_Duration) (ITDetectTone * This, long *plDuration);
	HRESULT(STDMETHODCALLTYPE * put_Duration) (ITDetectTone * This, long lDuration);
	HRESULT(STDMETHODCALLTYPE * get_Frequency) (ITDetectTone * This, long Index, long *plFrequency);
	HRESULT(STDMETHODCALLTYPE * put_Frequency) (ITDetectTone * This, long Index, long lFrequency);
	END_INTERFACE
}  ITDetectToneVtbl;
interface ITDetectTone
{
	CONST_VTBL struct ITDetectToneVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITDetectTone_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITDetectTone_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITDetectTone_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITDetectTone_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITDetectTone_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITDetectTone_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITDetectTone_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITDetectTone_get_AppSpecific(This,plAppSpecific) ( (This)->lpVtbl -> get_AppSpecific(This,plAppSpecific) )
#define ITDetectTone_put_AppSpecific(This,lAppSpecific) ( (This)->lpVtbl -> put_AppSpecific(This,lAppSpecific) )
#define ITDetectTone_get_Duration(This,plDuration) ( (This)->lpVtbl -> get_Duration(This,plDuration) )
#define ITDetectTone_put_Duration(This,lDuration) ( (This)->lpVtbl -> put_Duration(This,lDuration) )
#define ITDetectTone_get_Frequency(This,Index,plFrequency) ( (This)->lpVtbl -> get_Frequency(This,Index,plFrequency) )
#define ITDetectTone_put_Frequency(This,Index,lFrequency) ( (This)->lpVtbl -> put_Frequency(This,Index,lFrequency) )
#endif
#endif
#ifndef __ITCustomTone_INTERFACE_DEFINED__
#define __ITCustomTone_INTERFACE_DEFINED__
extern const IID IID_ITCustomTone;
typedef struct ITCustomToneVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITCustomTone * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITCustomTone * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITCustomTone * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITCustomTone * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITCustomTone * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITCustomTone * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITCustomTone * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Frequency) (ITCustomTone * This, long *plFrequency);
	HRESULT(STDMETHODCALLTYPE * put_Frequency) (ITCustomTone * This, long lFrequency);
	HRESULT(STDMETHODCALLTYPE * get_CadenceOn) (ITCustomTone * This, long *plCadenceOn);
	HRESULT(STDMETHODCALLTYPE * put_CadenceOn) (ITCustomTone * This, long CadenceOn);
	HRESULT(STDMETHODCALLTYPE * get_CadenceOff) (ITCustomTone * This, long *plCadenceOff);
	HRESULT(STDMETHODCALLTYPE * put_CadenceOff) (ITCustomTone * This, long lCadenceOff);
	HRESULT(STDMETHODCALLTYPE * get_Volume) (ITCustomTone * This, long *plVolume);
	HRESULT(STDMETHODCALLTYPE * put_Volume) (ITCustomTone * This, long lVolume);
	END_INTERFACE
}  ITCustomToneVtbl;
interface ITCustomTone
{
	CONST_VTBL struct ITCustomToneVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITCustomTone_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITCustomTone_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITCustomTone_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITCustomTone_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITCustomTone_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITCustomTone_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITCustomTone_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITCustomTone_get_Frequency(This,plFrequency) ( (This)->lpVtbl -> get_Frequency(This,plFrequency) )
#define ITCustomTone_put_Frequency(This,lFrequency) ( (This)->lpVtbl -> put_Frequency(This,lFrequency) )
#define ITCustomTone_get_CadenceOn(This,plCadenceOn) ( (This)->lpVtbl -> get_CadenceOn(This,plCadenceOn) )
#define ITCustomTone_put_CadenceOn(This,CadenceOn) ( (This)->lpVtbl -> put_CadenceOn(This,CadenceOn) )
#define ITCustomTone_get_CadenceOff(This,plCadenceOff) ( (This)->lpVtbl -> get_CadenceOff(This,plCadenceOff) )
#define ITCustomTone_put_CadenceOff(This,lCadenceOff) ( (This)->lpVtbl -> put_CadenceOff(This,lCadenceOff) )
#define ITCustomTone_get_Volume(This,plVolume) ( (This)->lpVtbl -> get_Volume(This,plVolume) )
#define ITCustomTone_put_Volume(This,lVolume) ( (This)->lpVtbl -> put_Volume(This,lVolume) )
#endif
#endif
#ifndef __IEnumPhone_INTERFACE_DEFINED__
#define __IEnumPhone_INTERFACE_DEFINED__
extern const IID IID_IEnumPhone;
typedef struct IEnumPhoneVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumPhone * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumPhone * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumPhone * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumPhone * This, ULONG celt, ITPhone ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumPhone * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumPhone * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumPhone * This, IEnumPhone ** ppEnum);
	END_INTERFACE
}  IEnumPhoneVtbl;
interface IEnumPhone
{
	CONST_VTBL struct IEnumPhoneVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumPhone_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumPhone_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumPhone_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumPhone_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumPhone_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumPhone_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumPhone_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumTerminal_INTERFACE_DEFINED__
#define __IEnumTerminal_INTERFACE_DEFINED__
extern const IID IID_IEnumTerminal;
typedef struct IEnumTerminalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumTerminal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumTerminal * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumTerminal * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumTerminal * This, ULONG celt, ITTerminal ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumTerminal * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumTerminal * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumTerminal * This, IEnumTerminal ** ppEnum);
	END_INTERFACE
}  IEnumTerminalVtbl;
interface IEnumTerminal
{
	CONST_VTBL struct IEnumTerminalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTerminal_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTerminal_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumTerminal_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumTerminal_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumTerminal_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumTerminal_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumTerminal_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumTerminalClass_INTERFACE_DEFINED__
#define __IEnumTerminalClass_INTERFACE_DEFINED__
extern const IID IID_IEnumTerminalClass;
typedef struct IEnumTerminalClassVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumTerminalClass * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumTerminalClass * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumTerminalClass * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumTerminalClass * This, ULONG celt, GUID * pElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumTerminalClass * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumTerminalClass * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumTerminalClass * This, IEnumTerminalClass ** ppEnum);
	END_INTERFACE
}  IEnumTerminalClassVtbl;
interface IEnumTerminalClass
{
	CONST_VTBL struct IEnumTerminalClassVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTerminalClass_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTerminalClass_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumTerminalClass_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumTerminalClass_Next(This,celt,pElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,pElements,pceltFetched) )
#define IEnumTerminalClass_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumTerminalClass_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumTerminalClass_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumCall_INTERFACE_DEFINED__
#define __IEnumCall_INTERFACE_DEFINED__
extern const IID IID_IEnumCall;
typedef struct IEnumCallVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumCall * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumCall * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumCall * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumCall * This, ULONG celt, ITCallInfo ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumCall * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumCall * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumCall * This, IEnumCall ** ppEnum);
	END_INTERFACE
}  IEnumCallVtbl;
interface IEnumCall
{
	CONST_VTBL struct IEnumCallVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumCall_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumCall_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumCall_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumCall_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumCall_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumCall_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumCall_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumAddress_INTERFACE_DEFINED__
#define __IEnumAddress_INTERFACE_DEFINED__
extern const IID IID_IEnumAddress;
typedef struct IEnumAddressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumAddress * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumAddress * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumAddress * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumAddress * This, ULONG celt, ITAddress ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumAddress * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumAddress * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumAddress * This, IEnumAddress ** ppEnum);
	END_INTERFACE
}  IEnumAddressVtbl;
interface IEnumAddress
{
	CONST_VTBL struct IEnumAddressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumAddress_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumAddress_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumAddress_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumAddress_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumAddress_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumAddress_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumAddress_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumCallHub_INTERFACE_DEFINED__
#define __IEnumCallHub_INTERFACE_DEFINED__
extern const IID IID_IEnumCallHub;
typedef struct IEnumCallHubVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumCallHub * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumCallHub * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumCallHub * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumCallHub * This, ULONG celt, ITCallHub ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumCallHub * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumCallHub * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumCallHub * This, IEnumCallHub ** ppEnum);
	END_INTERFACE
}  IEnumCallHubVtbl;
interface IEnumCallHub
{
	CONST_VTBL struct IEnumCallHubVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumCallHub_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumCallHub_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumCallHub_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumCallHub_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumCallHub_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumCallHub_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumCallHub_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumBstr_INTERFACE_DEFINED__
#define __IEnumBstr_INTERFACE_DEFINED__
extern const IID IID_IEnumBstr;
typedef struct IEnumBstrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumBstr * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumBstr * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumBstr * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumBstr * This, ULONG celt, BSTR * ppStrings, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumBstr * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumBstr * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumBstr * This, IEnumBstr ** ppEnum);
	END_INTERFACE
}  IEnumBstrVtbl;
interface IEnumBstr
{
	CONST_VTBL struct IEnumBstrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumBstr_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumBstr_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumBstr_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumBstr_Next(This,celt,ppStrings,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppStrings,pceltFetched) )
#define IEnumBstr_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumBstr_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumBstr_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumPluggableTerminalClassInfo_INTERFACE_DEFINED__
#define __IEnumPluggableTerminalClassInfo_INTERFACE_DEFINED__
extern const IID IID_IEnumPluggableTerminalClassInfo;
typedef struct IEnumPluggableTerminalClassInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumPluggableTerminalClassInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumPluggableTerminalClassInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumPluggableTerminalClassInfo * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumPluggableTerminalClassInfo * This, ULONG celt, ITPluggableTerminalClassInfo ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumPluggableTerminalClassInfo * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumPluggableTerminalClassInfo * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumPluggableTerminalClassInfo * This, IEnumPluggableTerminalClassInfo ** ppEnum);
	END_INTERFACE
}  IEnumPluggableTerminalClassInfoVtbl;
interface IEnumPluggableTerminalClassInfo
{
	CONST_VTBL struct IEnumPluggableTerminalClassInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumPluggableTerminalClassInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumPluggableTerminalClassInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumPluggableTerminalClassInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumPluggableTerminalClassInfo_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumPluggableTerminalClassInfo_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumPluggableTerminalClassInfo_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumPluggableTerminalClassInfo_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumPluggableSuperclassInfo_INTERFACE_DEFINED__
#define __IEnumPluggableSuperclassInfo_INTERFACE_DEFINED__
extern const IID IID_IEnumPluggableSuperclassInfo;
typedef struct IEnumPluggableSuperclassInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumPluggableSuperclassInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumPluggableSuperclassInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumPluggableSuperclassInfo * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumPluggableSuperclassInfo * This, ULONG celt, ITPluggableTerminalSuperclassInfo ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumPluggableSuperclassInfo * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumPluggableSuperclassInfo * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumPluggableSuperclassInfo * This, IEnumPluggableSuperclassInfo ** ppEnum);
	END_INTERFACE
}  IEnumPluggableSuperclassInfoVtbl;
interface IEnumPluggableSuperclassInfo
{
	CONST_VTBL struct IEnumPluggableSuperclassInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumPluggableSuperclassInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumPluggableSuperclassInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumPluggableSuperclassInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumPluggableSuperclassInfo_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumPluggableSuperclassInfo_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumPluggableSuperclassInfo_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumPluggableSuperclassInfo_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __ITPhoneEvent_INTERFACE_DEFINED__
#define __ITPhoneEvent_INTERFACE_DEFINED__
extern const IID IID_ITPhoneEvent;
typedef struct ITPhoneEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITPhoneEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITPhoneEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITPhoneEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITPhoneEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITPhoneEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITPhoneEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITPhoneEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Phone) (ITPhoneEvent * This, ITPhone ** ppPhone);
	HRESULT(STDMETHODCALLTYPE * get_Event) (ITPhoneEvent * This, PHONE_EVENT * pEvent);
	HRESULT(STDMETHODCALLTYPE * get_ButtonState) (ITPhoneEvent * This, PHONE_BUTTON_STATE * pState);
	HRESULT(STDMETHODCALLTYPE * get_HookSwitchState) (ITPhoneEvent * This, PHONE_HOOK_SWITCH_STATE * pState);
	HRESULT(STDMETHODCALLTYPE * get_HookSwitchDevice) (ITPhoneEvent * This, PHONE_HOOK_SWITCH_DEVICE * pDevice);
	HRESULT(STDMETHODCALLTYPE * get_RingMode) (ITPhoneEvent * This, long *plRingMode);
	HRESULT(STDMETHODCALLTYPE * get_ButtonLampId) (ITPhoneEvent * This, long *plButtonLampId);
	HRESULT(STDMETHODCALLTYPE * get_NumberGathered) (ITPhoneEvent * This, BSTR * ppNumber);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITPhoneEvent * This, ITCallInfo ** ppCallInfo);
	END_INTERFACE
}  ITPhoneEventVtbl;
interface ITPhoneEvent
{
	CONST_VTBL struct ITPhoneEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITPhoneEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITPhoneEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITPhoneEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITPhoneEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITPhoneEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITPhoneEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITPhoneEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITPhoneEvent_get_Phone(This,ppPhone) ( (This)->lpVtbl -> get_Phone(This,ppPhone) )
#define ITPhoneEvent_get_Event(This,pEvent) ( (This)->lpVtbl -> get_Event(This,pEvent) )
#define ITPhoneEvent_get_ButtonState(This,pState) ( (This)->lpVtbl -> get_ButtonState(This,pState) )
#define ITPhoneEvent_get_HookSwitchState(This,pState) ( (This)->lpVtbl -> get_HookSwitchState(This,pState) )
#define ITPhoneEvent_get_HookSwitchDevice(This,pDevice) ( (This)->lpVtbl -> get_HookSwitchDevice(This,pDevice) )
#define ITPhoneEvent_get_RingMode(This,plRingMode) ( (This)->lpVtbl -> get_RingMode(This,plRingMode) )
#define ITPhoneEvent_get_ButtonLampId(This,plButtonLampId) ( (This)->lpVtbl -> get_ButtonLampId(This,plButtonLampId) )
#define ITPhoneEvent_get_NumberGathered(This,ppNumber) ( (This)->lpVtbl -> get_NumberGathered(This,ppNumber) )
#define ITPhoneEvent_get_Call(This,ppCallInfo) ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
#endif
#endif
#ifndef __ITCallStateEvent_INTERFACE_DEFINED__
#define __ITCallStateEvent_INTERFACE_DEFINED__
extern const IID IID_ITCallStateEvent;
typedef struct ITCallStateEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITCallStateEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITCallStateEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITCallStateEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITCallStateEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITCallStateEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITCallStateEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITCallStateEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITCallStateEvent * This, ITCallInfo ** ppCallInfo);
	HRESULT(STDMETHODCALLTYPE * get_State) (ITCallStateEvent * This, CALL_STATE * pCallState);
	HRESULT(STDMETHODCALLTYPE * get_Cause) (ITCallStateEvent * This, CALL_STATE_EVENT_CAUSE * pCEC);
	HRESULT(STDMETHODCALLTYPE * get_CallbackInstance) (ITCallStateEvent * This, long *plCallbackInstance);
	END_INTERFACE
}  ITCallStateEventVtbl;
interface ITCallStateEvent
{
	CONST_VTBL struct ITCallStateEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITCallStateEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITCallStateEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITCallStateEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITCallStateEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITCallStateEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITCallStateEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITCallStateEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITCallStateEvent_get_Call(This,ppCallInfo) ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
#define ITCallStateEvent_get_State(This,pCallState) ( (This)->lpVtbl -> get_State(This,pCallState) )
#define ITCallStateEvent_get_Cause(This,pCEC) ( (This)->lpVtbl -> get_Cause(This,pCEC) )
#define ITCallStateEvent_get_CallbackInstance(This,plCallbackInstance) ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
#endif
#endif
#ifndef __ITPhoneDeviceSpecificEvent_INTERFACE_DEFINED__
#define __ITPhoneDeviceSpecificEvent_INTERFACE_DEFINED__
extern const IID IID_ITPhoneDeviceSpecificEvent;
typedef struct ITPhoneDeviceSpecificEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITPhoneDeviceSpecificEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITPhoneDeviceSpecificEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITPhoneDeviceSpecificEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITPhoneDeviceSpecificEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITPhoneDeviceSpecificEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITPhoneDeviceSpecificEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITPhoneDeviceSpecificEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Phone) (ITPhoneDeviceSpecificEvent * This, ITPhone ** ppPhone);
	HRESULT(STDMETHODCALLTYPE * get_lParam1) (ITPhoneDeviceSpecificEvent * This, long *pParam1);
	HRESULT(STDMETHODCALLTYPE * get_lParam2) (ITPhoneDeviceSpecificEvent * This, long *pParam2);
	HRESULT(STDMETHODCALLTYPE * get_lParam3) (ITPhoneDeviceSpecificEvent * This, long *pParam3);
	END_INTERFACE
}  ITPhoneDeviceSpecificEventVtbl;
interface ITPhoneDeviceSpecificEvent
{
	CONST_VTBL struct ITPhoneDeviceSpecificEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITPhoneDeviceSpecificEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITPhoneDeviceSpecificEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITPhoneDeviceSpecificEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITPhoneDeviceSpecificEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITPhoneDeviceSpecificEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITPhoneDeviceSpecificEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITPhoneDeviceSpecificEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITPhoneDeviceSpecificEvent_get_Phone(This,ppPhone) ( (This)->lpVtbl -> get_Phone(This,ppPhone) )
#define ITPhoneDeviceSpecificEvent_get_lParam1(This,pParam1) ( (This)->lpVtbl -> get_lParam1(This,pParam1) )
#define ITPhoneDeviceSpecificEvent_get_lParam2(This,pParam2) ( (This)->lpVtbl -> get_lParam2(This,pParam2) )
#define ITPhoneDeviceSpecificEvent_get_lParam3(This,pParam3) ( (This)->lpVtbl -> get_lParam3(This,pParam3) )
#endif
#endif
#ifndef __ITCallMediaEvent_INTERFACE_DEFINED__
#define __ITCallMediaEvent_INTERFACE_DEFINED__
extern const IID IID_ITCallMediaEvent;
typedef struct ITCallMediaEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITCallMediaEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITCallMediaEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITCallMediaEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITCallMediaEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITCallMediaEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITCallMediaEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITCallMediaEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITCallMediaEvent * This, ITCallInfo ** ppCallInfo);
	HRESULT(STDMETHODCALLTYPE * get_Event) (ITCallMediaEvent * This, CALL_MEDIA_EVENT * pCallMediaEvent);
	HRESULT(STDMETHODCALLTYPE * get_Error) (ITCallMediaEvent * This, HRESULT * phrError);
	HRESULT(STDMETHODCALLTYPE * get_Terminal) (ITCallMediaEvent * This, ITTerminal ** ppTerminal);
	HRESULT(STDMETHODCALLTYPE * get_Stream) (ITCallMediaEvent * This, ITStream ** ppStream);
	HRESULT(STDMETHODCALLTYPE * get_Cause) (ITCallMediaEvent * This, CALL_MEDIA_EVENT_CAUSE * pCause);
	END_INTERFACE
}  ITCallMediaEventVtbl;
interface ITCallMediaEvent
{
	CONST_VTBL struct ITCallMediaEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITCallMediaEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITCallMediaEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITCallMediaEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITCallMediaEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITCallMediaEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITCallMediaEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITCallMediaEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITCallMediaEvent_get_Call(This,ppCallInfo) ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
#define ITCallMediaEvent_get_Event(This,pCallMediaEvent) ( (This)->lpVtbl -> get_Event(This,pCallMediaEvent) )
#define ITCallMediaEvent_get_Error(This,phrError) ( (This)->lpVtbl -> get_Error(This,phrError) )
#define ITCallMediaEvent_get_Terminal(This,ppTerminal) ( (This)->lpVtbl -> get_Terminal(This,ppTerminal) )
#define ITCallMediaEvent_get_Stream(This,ppStream) ( (This)->lpVtbl -> get_Stream(This,ppStream) )
#define ITCallMediaEvent_get_Cause(This,pCause) ( (This)->lpVtbl -> get_Cause(This,pCause) )
#endif
#endif
#ifndef __ITDigitDetectionEvent_INTERFACE_DEFINED__
#define __ITDigitDetectionEvent_INTERFACE_DEFINED__
extern const IID IID_ITDigitDetectionEvent;
typedef struct ITDigitDetectionEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITDigitDetectionEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITDigitDetectionEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITDigitDetectionEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITDigitDetectionEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITDigitDetectionEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITDigitDetectionEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITDigitDetectionEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITDigitDetectionEvent * This, ITCallInfo ** ppCallInfo);
	HRESULT(STDMETHODCALLTYPE * get_Digit) (ITDigitDetectionEvent * This, unsigned char *pucDigit);
	HRESULT(STDMETHODCALLTYPE * get_DigitMode) (ITDigitDetectionEvent * This, TAPI_DIGITMODE * pDigitMode);
	HRESULT(STDMETHODCALLTYPE * get_TickCount) (ITDigitDetectionEvent * This, long *plTickCount);
	HRESULT(STDMETHODCALLTYPE * get_CallbackInstance) (ITDigitDetectionEvent * This, long *plCallbackInstance);
	END_INTERFACE
}  ITDigitDetectionEventVtbl;
interface ITDigitDetectionEvent
{
	CONST_VTBL struct ITDigitDetectionEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITDigitDetectionEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITDigitDetectionEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITDigitDetectionEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITDigitDetectionEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITDigitDetectionEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITDigitDetectionEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITDigitDetectionEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITDigitDetectionEvent_get_Call(This,ppCallInfo) ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
#define ITDigitDetectionEvent_get_Digit(This,pucDigit) ( (This)->lpVtbl -> get_Digit(This,pucDigit) )
#define ITDigitDetectionEvent_get_DigitMode(This,pDigitMode) ( (This)->lpVtbl -> get_DigitMode(This,pDigitMode) )
#define ITDigitDetectionEvent_get_TickCount(This,plTickCount) ( (This)->lpVtbl -> get_TickCount(This,plTickCount) )
#define ITDigitDetectionEvent_get_CallbackInstance(This,plCallbackInstance) ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
#endif
#endif
#ifndef __ITDigitGenerationEvent_INTERFACE_DEFINED__
#define __ITDigitGenerationEvent_INTERFACE_DEFINED__
extern const IID IID_ITDigitGenerationEvent;
typedef struct ITDigitGenerationEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITDigitGenerationEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITDigitGenerationEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITDigitGenerationEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITDigitGenerationEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITDigitGenerationEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITDigitGenerationEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITDigitGenerationEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITDigitGenerationEvent * This, ITCallInfo ** ppCallInfo);
	HRESULT(STDMETHODCALLTYPE * get_GenerationTermination) (ITDigitGenerationEvent * This, long *plGenerationTermination);
	HRESULT(STDMETHODCALLTYPE * get_TickCount) (ITDigitGenerationEvent * This, long *plTickCount);
	HRESULT(STDMETHODCALLTYPE * get_CallbackInstance) (ITDigitGenerationEvent * This, long *plCallbackInstance);
	END_INTERFACE
}  ITDigitGenerationEventVtbl;
interface ITDigitGenerationEvent
{
	CONST_VTBL struct ITDigitGenerationEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITDigitGenerationEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITDigitGenerationEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITDigitGenerationEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITDigitGenerationEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITDigitGenerationEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITDigitGenerationEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITDigitGenerationEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITDigitGenerationEvent_get_Call(This,ppCallInfo) ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
#define ITDigitGenerationEvent_get_GenerationTermination(This,plGenerationTermination) ( (This)->lpVtbl -> get_GenerationTermination(This,plGenerationTermination) )
#define ITDigitGenerationEvent_get_TickCount(This,plTickCount) ( (This)->lpVtbl -> get_TickCount(This,plTickCount) )
#define ITDigitGenerationEvent_get_CallbackInstance(This,plCallbackInstance) ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
#endif
#endif
#ifndef __ITDigitsGatheredEvent_INTERFACE_DEFINED__
#define __ITDigitsGatheredEvent_INTERFACE_DEFINED__
extern const IID IID_ITDigitsGatheredEvent;
typedef struct ITDigitsGatheredEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITDigitsGatheredEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITDigitsGatheredEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITDigitsGatheredEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITDigitsGatheredEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITDigitsGatheredEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITDigitsGatheredEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITDigitsGatheredEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITDigitsGatheredEvent * This, ITCallInfo ** ppCallInfo);
	HRESULT(STDMETHODCALLTYPE * get_Digits) (ITDigitsGatheredEvent * This, BSTR * ppDigits);
	HRESULT(STDMETHODCALLTYPE * get_GatherTermination) (ITDigitsGatheredEvent * This, TAPI_GATHERTERM * pGatherTermination);
	HRESULT(STDMETHODCALLTYPE * get_TickCount) (ITDigitsGatheredEvent * This, long *plTickCount);
	HRESULT(STDMETHODCALLTYPE * get_CallbackInstance) (ITDigitsGatheredEvent * This, long *plCallbackInstance);
	END_INTERFACE
}  ITDigitsGatheredEventVtbl;
interface ITDigitsGatheredEvent
{
	CONST_VTBL struct ITDigitsGatheredEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITDigitsGatheredEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITDigitsGatheredEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITDigitsGatheredEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITDigitsGatheredEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITDigitsGatheredEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITDigitsGatheredEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITDigitsGatheredEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITDigitsGatheredEvent_get_Call(This,ppCallInfo) ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
#define ITDigitsGatheredEvent_get_Digits(This,ppDigits) ( (This)->lpVtbl -> get_Digits(This,ppDigits) )
#define ITDigitsGatheredEvent_get_GatherTermination(This,pGatherTermination) ( (This)->lpVtbl -> get_GatherTermination(This,pGatherTermination) )
#define ITDigitsGatheredEvent_get_TickCount(This,plTickCount) ( (This)->lpVtbl -> get_TickCount(This,plTickCount) )
#define ITDigitsGatheredEvent_get_CallbackInstance(This,plCallbackInstance) ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
#endif
#endif
#ifndef __ITToneDetectionEvent_INTERFACE_DEFINED__
#define __ITToneDetectionEvent_INTERFACE_DEFINED__
extern const IID IID_ITToneDetectionEvent;
typedef struct ITToneDetectionEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITToneDetectionEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITToneDetectionEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITToneDetectionEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITToneDetectionEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITToneDetectionEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITToneDetectionEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITToneDetectionEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITToneDetectionEvent * This, ITCallInfo ** ppCallInfo);
	HRESULT(STDMETHODCALLTYPE * get_AppSpecific) (ITToneDetectionEvent * This, long *plAppSpecific);
	HRESULT(STDMETHODCALLTYPE * get_TickCount) (ITToneDetectionEvent * This, long *plTickCount);
	HRESULT(STDMETHODCALLTYPE * get_CallbackInstance) (ITToneDetectionEvent * This, long *plCallbackInstance);
	END_INTERFACE
}  ITToneDetectionEventVtbl;
interface ITToneDetectionEvent
{
	CONST_VTBL struct ITToneDetectionEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITToneDetectionEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITToneDetectionEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITToneDetectionEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITToneDetectionEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITToneDetectionEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITToneDetectionEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITToneDetectionEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITToneDetectionEvent_get_Call(This,ppCallInfo) ( (This)->lpVtbl -> get_Call(This,ppCallInfo) )
#define ITToneDetectionEvent_get_AppSpecific(This,plAppSpecific) ( (This)->lpVtbl -> get_AppSpecific(This,plAppSpecific) )
#define ITToneDetectionEvent_get_TickCount(This,plTickCount) ( (This)->lpVtbl -> get_TickCount(This,plTickCount) )
#define ITToneDetectionEvent_get_CallbackInstance(This,plCallbackInstance) ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
#endif
#endif
#ifndef __ITTAPIObjectEvent_INTERFACE_DEFINED__
#define __ITTAPIObjectEvent_INTERFACE_DEFINED__
extern const IID IID_ITTAPIObjectEvent;
typedef struct ITTAPIObjectEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITTAPIObjectEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITTAPIObjectEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITTAPIObjectEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITTAPIObjectEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITTAPIObjectEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITTAPIObjectEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITTAPIObjectEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_TAPIObject) (ITTAPIObjectEvent * This, ITTAPI ** ppTAPIObject);
	HRESULT(STDMETHODCALLTYPE * get_Event) (ITTAPIObjectEvent * This, TAPIOBJECT_EVENT * pEvent);
	HRESULT(STDMETHODCALLTYPE * get_Address) (ITTAPIObjectEvent * This, ITAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * get_CallbackInstance) (ITTAPIObjectEvent * This, long *plCallbackInstance);
	END_INTERFACE
}  ITTAPIObjectEventVtbl;
interface ITTAPIObjectEvent
{
	CONST_VTBL struct ITTAPIObjectEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITTAPIObjectEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITTAPIObjectEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITTAPIObjectEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITTAPIObjectEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITTAPIObjectEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITTAPIObjectEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITTAPIObjectEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITTAPIObjectEvent_get_TAPIObject(This,ppTAPIObject) ( (This)->lpVtbl -> get_TAPIObject(This,ppTAPIObject) )
#define ITTAPIObjectEvent_get_Event(This,pEvent) ( (This)->lpVtbl -> get_Event(This,pEvent) )
#define ITTAPIObjectEvent_get_Address(This,ppAddress) ( (This)->lpVtbl -> get_Address(This,ppAddress) )
#define ITTAPIObjectEvent_get_CallbackInstance(This,plCallbackInstance) ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
#endif
#endif
#ifndef __ITTAPIObjectEvent2_INTERFACE_DEFINED__
#define __ITTAPIObjectEvent2_INTERFACE_DEFINED__
extern const IID IID_ITTAPIObjectEvent2;
typedef struct ITTAPIObjectEvent2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITTAPIObjectEvent2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITTAPIObjectEvent2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITTAPIObjectEvent2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITTAPIObjectEvent2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITTAPIObjectEvent2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITTAPIObjectEvent2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITTAPIObjectEvent2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_TAPIObject) (ITTAPIObjectEvent2 * This, ITTAPI ** ppTAPIObject);
	HRESULT(STDMETHODCALLTYPE * get_Event) (ITTAPIObjectEvent2 * This, TAPIOBJECT_EVENT * pEvent);
	HRESULT(STDMETHODCALLTYPE * get_Address) (ITTAPIObjectEvent2 * This, ITAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * get_CallbackInstance) (ITTAPIObjectEvent2 * This, long *plCallbackInstance);
	HRESULT(STDMETHODCALLTYPE * get_Phone) (ITTAPIObjectEvent2 * This, ITPhone ** ppPhone);
	END_INTERFACE
}  ITTAPIObjectEvent2Vtbl;
interface ITTAPIObjectEvent2
{
	CONST_VTBL struct ITTAPIObjectEvent2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITTAPIObjectEvent2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITTAPIObjectEvent2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITTAPIObjectEvent2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITTAPIObjectEvent2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITTAPIObjectEvent2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITTAPIObjectEvent2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITTAPIObjectEvent2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITTAPIObjectEvent2_get_TAPIObject(This,ppTAPIObject) ( (This)->lpVtbl -> get_TAPIObject(This,ppTAPIObject) )
#define ITTAPIObjectEvent2_get_Event(This,pEvent) ( (This)->lpVtbl -> get_Event(This,pEvent) )
#define ITTAPIObjectEvent2_get_Address(This,ppAddress) ( (This)->lpVtbl -> get_Address(This,ppAddress) )
#define ITTAPIObjectEvent2_get_CallbackInstance(This,plCallbackInstance) ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
#define ITTAPIObjectEvent2_get_Phone(This,ppPhone) ( (This)->lpVtbl -> get_Phone(This,ppPhone) )
#endif
#endif
#ifndef __ITTAPIEventNotification_INTERFACE_DEFINED__
#define __ITTAPIEventNotification_INTERFACE_DEFINED__
extern const IID IID_ITTAPIEventNotification;
typedef struct ITTAPIEventNotificationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITTAPIEventNotification * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITTAPIEventNotification * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITTAPIEventNotification * This);
	HRESULT(STDMETHODCALLTYPE * Event) (ITTAPIEventNotification * This, TAPI_EVENT TapiEvent, IDispatch * pEvent);
	END_INTERFACE
}  ITTAPIEventNotificationVtbl;
interface ITTAPIEventNotification
{
	CONST_VTBL struct ITTAPIEventNotificationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITTAPIEventNotification_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITTAPIEventNotification_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITTAPIEventNotification_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITTAPIEventNotification_Event(This,TapiEvent,pEvent) ( (This)->lpVtbl -> Event(This,TapiEvent,pEvent) )
#endif
#endif
#ifndef __ITCallHubEvent_INTERFACE_DEFINED__
#define __ITCallHubEvent_INTERFACE_DEFINED__
extern const IID IID_ITCallHubEvent;
typedef struct ITCallHubEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITCallHubEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITCallHubEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITCallHubEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITCallHubEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITCallHubEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITCallHubEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITCallHubEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Event) (ITCallHubEvent * This, CALLHUB_EVENT * pEvent);
	HRESULT(STDMETHODCALLTYPE * get_CallHub) (ITCallHubEvent * This, ITCallHub ** ppCallHub);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITCallHubEvent * This, ITCallInfo ** ppCall);
	END_INTERFACE
}  ITCallHubEventVtbl;
interface ITCallHubEvent
{
	CONST_VTBL struct ITCallHubEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITCallHubEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITCallHubEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITCallHubEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITCallHubEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITCallHubEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITCallHubEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITCallHubEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITCallHubEvent_get_Event(This,pEvent) ( (This)->lpVtbl -> get_Event(This,pEvent) )
#define ITCallHubEvent_get_CallHub(This,ppCallHub) ( (This)->lpVtbl -> get_CallHub(This,ppCallHub) )
#define ITCallHubEvent_get_Call(This,ppCall) ( (This)->lpVtbl -> get_Call(This,ppCall) )
#endif
#endif
#ifndef __ITAddressEvent_INTERFACE_DEFINED__
#define __ITAddressEvent_INTERFACE_DEFINED__
extern const IID IID_ITAddressEvent;
typedef struct ITAddressEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAddressEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAddressEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAddressEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAddressEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAddressEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAddressEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAddressEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Address) (ITAddressEvent * This, ITAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * get_Event) (ITAddressEvent * This, ADDRESS_EVENT * pEvent);
	HRESULT(STDMETHODCALLTYPE * get_Terminal) (ITAddressEvent * This, ITTerminal ** ppTerminal);
	END_INTERFACE
}  ITAddressEventVtbl;
interface ITAddressEvent
{
	CONST_VTBL struct ITAddressEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAddressEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAddressEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAddressEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAddressEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAddressEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAddressEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAddressEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAddressEvent_get_Address(This,ppAddress) ( (This)->lpVtbl -> get_Address(This,ppAddress) )
#define ITAddressEvent_get_Event(This,pEvent) ( (This)->lpVtbl -> get_Event(This,pEvent) )
#define ITAddressEvent_get_Terminal(This,ppTerminal) ( (This)->lpVtbl -> get_Terminal(This,ppTerminal) )
#endif
#endif
#ifndef __ITAddressDeviceSpecificEvent_INTERFACE_DEFINED__
#define __ITAddressDeviceSpecificEvent_INTERFACE_DEFINED__
extern const IID IID_ITAddressDeviceSpecificEvent;
typedef struct ITAddressDeviceSpecificEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAddressDeviceSpecificEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAddressDeviceSpecificEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAddressDeviceSpecificEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAddressDeviceSpecificEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAddressDeviceSpecificEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAddressDeviceSpecificEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAddressDeviceSpecificEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Address) (ITAddressDeviceSpecificEvent * This, ITAddress ** ppAddress);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITAddressDeviceSpecificEvent * This, ITCallInfo ** ppCall);
	HRESULT(STDMETHODCALLTYPE * get_lParam1) (ITAddressDeviceSpecificEvent * This, long *pParam1);
	HRESULT(STDMETHODCALLTYPE * get_lParam2) (ITAddressDeviceSpecificEvent * This, long *pParam2);
	HRESULT(STDMETHODCALLTYPE * get_lParam3) (ITAddressDeviceSpecificEvent * This, long *pParam3);
	END_INTERFACE
}  ITAddressDeviceSpecificEventVtbl;
interface ITAddressDeviceSpecificEvent
{
	CONST_VTBL struct ITAddressDeviceSpecificEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAddressDeviceSpecificEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAddressDeviceSpecificEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAddressDeviceSpecificEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAddressDeviceSpecificEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAddressDeviceSpecificEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAddressDeviceSpecificEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAddressDeviceSpecificEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAddressDeviceSpecificEvent_get_Address(This,ppAddress) ( (This)->lpVtbl -> get_Address(This,ppAddress) )
#define ITAddressDeviceSpecificEvent_get_Call(This,ppCall) ( (This)->lpVtbl -> get_Call(This,ppCall) )
#define ITAddressDeviceSpecificEvent_get_lParam1(This,pParam1) ( (This)->lpVtbl -> get_lParam1(This,pParam1) )
#define ITAddressDeviceSpecificEvent_get_lParam2(This,pParam2) ( (This)->lpVtbl -> get_lParam2(This,pParam2) )
#define ITAddressDeviceSpecificEvent_get_lParam3(This,pParam3) ( (This)->lpVtbl -> get_lParam3(This,pParam3) )
#endif
#endif
#ifndef __ITFileTerminalEvent_INTERFACE_DEFINED__
#define __ITFileTerminalEvent_INTERFACE_DEFINED__
extern const IID IID_ITFileTerminalEvent;
typedef struct ITFileTerminalEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITFileTerminalEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITFileTerminalEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITFileTerminalEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITFileTerminalEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITFileTerminalEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITFileTerminalEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITFileTerminalEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Terminal) (ITFileTerminalEvent * This, ITTerminal ** ppTerminal);
	HRESULT(STDMETHODCALLTYPE * get_Track) (ITFileTerminalEvent * This, ITFileTrack ** ppTrackTerminal);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITFileTerminalEvent * This, ITCallInfo ** ppCall);
	HRESULT(STDMETHODCALLTYPE * get_State) (ITFileTerminalEvent * This, TERMINAL_MEDIA_STATE * pState);
	HRESULT(STDMETHODCALLTYPE * get_Cause) (ITFileTerminalEvent * This, FT_STATE_EVENT_CAUSE * pCause);
	HRESULT(STDMETHODCALLTYPE * get_Error) (ITFileTerminalEvent * This, HRESULT * phrErrorCode);
	END_INTERFACE
}  ITFileTerminalEventVtbl;
interface ITFileTerminalEvent
{
	CONST_VTBL struct ITFileTerminalEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITFileTerminalEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITFileTerminalEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITFileTerminalEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITFileTerminalEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITFileTerminalEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITFileTerminalEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITFileTerminalEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITFileTerminalEvent_get_Terminal(This,ppTerminal) ( (This)->lpVtbl -> get_Terminal(This,ppTerminal) )
#define ITFileTerminalEvent_get_Track(This,ppTrackTerminal) ( (This)->lpVtbl -> get_Track(This,ppTrackTerminal) )
#define ITFileTerminalEvent_get_Call(This,ppCall) ( (This)->lpVtbl -> get_Call(This,ppCall) )
#define ITFileTerminalEvent_get_State(This,pState) ( (This)->lpVtbl -> get_State(This,pState) )
#define ITFileTerminalEvent_get_Cause(This,pCause) ( (This)->lpVtbl -> get_Cause(This,pCause) )
#define ITFileTerminalEvent_get_Error(This,phrErrorCode) ( (This)->lpVtbl -> get_Error(This,phrErrorCode) )
#endif
#endif
#ifndef __ITTTSTerminalEvent_INTERFACE_DEFINED__
#define __ITTTSTerminalEvent_INTERFACE_DEFINED__
extern const IID IID_ITTTSTerminalEvent;
typedef struct ITTTSTerminalEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITTTSTerminalEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITTTSTerminalEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITTTSTerminalEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITTTSTerminalEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITTTSTerminalEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITTTSTerminalEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITTTSTerminalEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Terminal) (ITTTSTerminalEvent * This, ITTerminal ** ppTerminal);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITTTSTerminalEvent * This, ITCallInfo ** ppCall);
	HRESULT(STDMETHODCALLTYPE * get_Error) (ITTTSTerminalEvent * This, HRESULT * phrErrorCode);
	END_INTERFACE
}  ITTTSTerminalEventVtbl;
interface ITTTSTerminalEvent
{
	CONST_VTBL struct ITTTSTerminalEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITTTSTerminalEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITTTSTerminalEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITTTSTerminalEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITTTSTerminalEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITTTSTerminalEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITTTSTerminalEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITTTSTerminalEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITTTSTerminalEvent_get_Terminal(This,ppTerminal) ( (This)->lpVtbl -> get_Terminal(This,ppTerminal) )
#define ITTTSTerminalEvent_get_Call(This,ppCall) ( (This)->lpVtbl -> get_Call(This,ppCall) )
#define ITTTSTerminalEvent_get_Error(This,phrErrorCode) ( (This)->lpVtbl -> get_Error(This,phrErrorCode) )
#endif
#endif
#ifndef __ITASRTerminalEvent_INTERFACE_DEFINED__
#define __ITASRTerminalEvent_INTERFACE_DEFINED__
extern const IID IID_ITASRTerminalEvent;
typedef struct ITASRTerminalEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITASRTerminalEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITASRTerminalEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITASRTerminalEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITASRTerminalEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITASRTerminalEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITASRTerminalEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITASRTerminalEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Terminal) (ITASRTerminalEvent * This, ITTerminal ** ppTerminal);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITASRTerminalEvent * This, ITCallInfo ** ppCall);
	HRESULT(STDMETHODCALLTYPE * get_Error) (ITASRTerminalEvent * This, HRESULT * phrErrorCode);
	END_INTERFACE
}  ITASRTerminalEventVtbl;
interface ITASRTerminalEvent
{
	CONST_VTBL struct ITASRTerminalEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITASRTerminalEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITASRTerminalEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITASRTerminalEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITASRTerminalEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITASRTerminalEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITASRTerminalEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITASRTerminalEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITASRTerminalEvent_get_Terminal(This,ppTerminal) ( (This)->lpVtbl -> get_Terminal(This,ppTerminal) )
#define ITASRTerminalEvent_get_Call(This,ppCall) ( (This)->lpVtbl -> get_Call(This,ppCall) )
#define ITASRTerminalEvent_get_Error(This,phrErrorCode) ( (This)->lpVtbl -> get_Error(This,phrErrorCode) )
#endif
#endif
#ifndef __ITToneTerminalEvent_INTERFACE_DEFINED__
#define __ITToneTerminalEvent_INTERFACE_DEFINED__
extern const IID IID_ITToneTerminalEvent;
typedef struct ITToneTerminalEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITToneTerminalEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITToneTerminalEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITToneTerminalEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITToneTerminalEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITToneTerminalEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITToneTerminalEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITToneTerminalEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Terminal) (ITToneTerminalEvent * This, ITTerminal ** ppTerminal);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITToneTerminalEvent * This, ITCallInfo ** ppCall);
	HRESULT(STDMETHODCALLTYPE * get_Error) (ITToneTerminalEvent * This, HRESULT * phrErrorCode);
	END_INTERFACE
}  ITToneTerminalEventVtbl;
interface ITToneTerminalEvent
{
	CONST_VTBL struct ITToneTerminalEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITToneTerminalEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITToneTerminalEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITToneTerminalEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITToneTerminalEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITToneTerminalEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITToneTerminalEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITToneTerminalEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITToneTerminalEvent_get_Terminal(This,ppTerminal) ( (This)->lpVtbl -> get_Terminal(This,ppTerminal) )
#define ITToneTerminalEvent_get_Call(This,ppCall) ( (This)->lpVtbl -> get_Call(This,ppCall) )
#define ITToneTerminalEvent_get_Error(This,phrErrorCode) ( (This)->lpVtbl -> get_Error(This,phrErrorCode) )
#endif
#endif
#ifndef __ITQOSEvent_INTERFACE_DEFINED__
#define __ITQOSEvent_INTERFACE_DEFINED__
extern const IID IID_ITQOSEvent;
typedef struct ITQOSEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITQOSEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITQOSEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITQOSEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITQOSEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITQOSEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITQOSEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITQOSEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITQOSEvent * This, ITCallInfo ** ppCall);
	HRESULT(STDMETHODCALLTYPE * get_Event) (ITQOSEvent * This, QOS_EVENT * pQosEvent);
	HRESULT(STDMETHODCALLTYPE * get_MediaType) (ITQOSEvent * This, long *plMediaType);
	END_INTERFACE
}  ITQOSEventVtbl;
interface ITQOSEvent
{
	CONST_VTBL struct ITQOSEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITQOSEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITQOSEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITQOSEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITQOSEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITQOSEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITQOSEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITQOSEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITQOSEvent_get_Call(This,ppCall) ( (This)->lpVtbl -> get_Call(This,ppCall) )
#define ITQOSEvent_get_Event(This,pQosEvent) ( (This)->lpVtbl -> get_Event(This,pQosEvent) )
#define ITQOSEvent_get_MediaType(This,plMediaType) ( (This)->lpVtbl -> get_MediaType(This,plMediaType) )
#endif
#endif
#ifndef __ITCallInfoChangeEvent_INTERFACE_DEFINED__
#define __ITCallInfoChangeEvent_INTERFACE_DEFINED__
extern const IID IID_ITCallInfoChangeEvent;
typedef struct ITCallInfoChangeEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITCallInfoChangeEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITCallInfoChangeEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITCallInfoChangeEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITCallInfoChangeEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITCallInfoChangeEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITCallInfoChangeEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITCallInfoChangeEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITCallInfoChangeEvent * This, ITCallInfo ** ppCall);
	HRESULT(STDMETHODCALLTYPE * get_Cause) (ITCallInfoChangeEvent * This, CALLINFOCHANGE_CAUSE * pCIC);
	HRESULT(STDMETHODCALLTYPE * get_CallbackInstance) (ITCallInfoChangeEvent * This, long *plCallbackInstance);
	END_INTERFACE
}  ITCallInfoChangeEventVtbl;
interface ITCallInfoChangeEvent
{
	CONST_VTBL struct ITCallInfoChangeEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITCallInfoChangeEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITCallInfoChangeEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITCallInfoChangeEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITCallInfoChangeEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITCallInfoChangeEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITCallInfoChangeEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITCallInfoChangeEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITCallInfoChangeEvent_get_Call(This,ppCall) ( (This)->lpVtbl -> get_Call(This,ppCall) )
#define ITCallInfoChangeEvent_get_Cause(This,pCIC) ( (This)->lpVtbl -> get_Cause(This,pCIC) )
#define ITCallInfoChangeEvent_get_CallbackInstance(This,plCallbackInstance) ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
#endif
#endif
#ifndef __ITRequest_INTERFACE_DEFINED__
#define __ITRequest_INTERFACE_DEFINED__
extern const IID IID_ITRequest;
typedef struct ITRequestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITRequest * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITRequest * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITRequest * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITRequest * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITRequest * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITRequest * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITRequest * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * MakeCall) (ITRequest * This, BSTR pDestAddress, BSTR pAppName, BSTR pCalledParty, BSTR pComment);
	END_INTERFACE
}  ITRequestVtbl;
interface ITRequest
{
	CONST_VTBL struct ITRequestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITRequest_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITRequest_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITRequest_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITRequest_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITRequest_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITRequest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITRequest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITRequest_MakeCall(This,pDestAddress,pAppName,pCalledParty,pComment) ( (This)->lpVtbl -> MakeCall(This,pDestAddress,pAppName,pCalledParty,pComment) )
#endif
#endif
#ifndef __ITRequestEvent_INTERFACE_DEFINED__
#define __ITRequestEvent_INTERFACE_DEFINED__
extern const IID IID_ITRequestEvent;
typedef struct ITRequestEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITRequestEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITRequestEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITRequestEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITRequestEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITRequestEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITRequestEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITRequestEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_RegistrationInstance) (ITRequestEvent * This, long *plRegistrationInstance);
	HRESULT(STDMETHODCALLTYPE * get_RequestMode) (ITRequestEvent * This, long *plRequestMode);
	HRESULT(STDMETHODCALLTYPE * get_DestAddress) (ITRequestEvent * This, BSTR * ppDestAddress);
	HRESULT(STDMETHODCALLTYPE * get_AppName) (ITRequestEvent * This, BSTR * ppAppName);
	HRESULT(STDMETHODCALLTYPE * get_CalledParty) (ITRequestEvent * This, BSTR * ppCalledParty);
	HRESULT(STDMETHODCALLTYPE * get_Comment) (ITRequestEvent * This, BSTR * ppComment);
	END_INTERFACE
}  ITRequestEventVtbl;
interface ITRequestEvent
{
	CONST_VTBL struct ITRequestEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITRequestEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITRequestEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITRequestEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITRequestEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITRequestEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITRequestEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITRequestEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITRequestEvent_get_RegistrationInstance(This,plRegistrationInstance) ( (This)->lpVtbl -> get_RegistrationInstance(This,plRegistrationInstance) )
#define ITRequestEvent_get_RequestMode(This,plRequestMode) ( (This)->lpVtbl -> get_RequestMode(This,plRequestMode) )
#define ITRequestEvent_get_DestAddress(This,ppDestAddress) ( (This)->lpVtbl -> get_DestAddress(This,ppDestAddress) )
#define ITRequestEvent_get_AppName(This,ppAppName) ( (This)->lpVtbl -> get_AppName(This,ppAppName) )
#define ITRequestEvent_get_CalledParty(This,ppCalledParty) ( (This)->lpVtbl -> get_CalledParty(This,ppCalledParty) )
#define ITRequestEvent_get_Comment(This,ppComment) ( (This)->lpVtbl -> get_Comment(This,ppComment) )
#endif
#endif
#ifndef __ITCollection_INTERFACE_DEFINED__
#define __ITCollection_INTERFACE_DEFINED__
extern const IID IID_ITCollection;
typedef struct ITCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ITCollection * This, long *lCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ITCollection * This, long Index, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ITCollection * This, IUnknown ** ppNewEnum);
	END_INTERFACE
}  ITCollectionVtbl;
interface ITCollection
{
	CONST_VTBL struct ITCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITCollection_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITCollection_get_Count(This,lCount) ( (This)->lpVtbl -> get_Count(This,lCount) )
#define ITCollection_get_Item(This,Index,pVariant) ( (This)->lpVtbl -> get_Item(This,Index,pVariant) )
#define ITCollection_get__NewEnum(This,ppNewEnum) ( (This)->lpVtbl -> get__NewEnum(This,ppNewEnum) )
#endif
#endif
#ifndef __ITCollection2_INTERFACE_DEFINED__
#define __ITCollection2_INTERFACE_DEFINED__
extern const IID IID_ITCollection2;
typedef struct ITCollection2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITCollection2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITCollection2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITCollection2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITCollection2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITCollection2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITCollection2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITCollection2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ITCollection2 * This, long *lCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ITCollection2 * This, long Index, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ITCollection2 * This, IUnknown ** ppNewEnum);
	HRESULT(STDMETHODCALLTYPE * Add) (ITCollection2 * This, long Index, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * Remove) (ITCollection2 * This, long Index);
	END_INTERFACE
}  ITCollection2Vtbl;
interface ITCollection2
{
	CONST_VTBL struct ITCollection2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITCollection2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITCollection2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITCollection2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITCollection2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITCollection2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITCollection2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITCollection2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITCollection2_get_Count(This,lCount) ( (This)->lpVtbl -> get_Count(This,lCount) )
#define ITCollection2_get_Item(This,Index,pVariant) ( (This)->lpVtbl -> get_Item(This,Index,pVariant) )
#define ITCollection2_get__NewEnum(This,ppNewEnum) ( (This)->lpVtbl -> get__NewEnum(This,ppNewEnum) )
#define ITCollection2_Add(This,Index,pVariant) ( (This)->lpVtbl -> Add(This,Index,pVariant) )
#define ITCollection2_Remove(This,Index) ( (This)->lpVtbl -> Remove(This,Index) )
#endif
#endif
#ifndef __ITForwardInformation_INTERFACE_DEFINED__
#define __ITForwardInformation_INTERFACE_DEFINED__
extern const IID IID_ITForwardInformation;
typedef struct ITForwardInformationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITForwardInformation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITForwardInformation * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITForwardInformation * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITForwardInformation * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITForwardInformation * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITForwardInformation * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITForwardInformation * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_NumRingsNoAnswer) (ITForwardInformation * This, long lNumRings);
	HRESULT(STDMETHODCALLTYPE * get_NumRingsNoAnswer) (ITForwardInformation * This, long *plNumRings);
	HRESULT(STDMETHODCALLTYPE * SetForwardType) (ITForwardInformation * This, long ForwardType, BSTR pDestAddress, BSTR pCallerAddress);
	HRESULT(STDMETHODCALLTYPE * get_ForwardTypeDestination) (ITForwardInformation * This, long ForwardType, BSTR * ppDestAddress);
	HRESULT(STDMETHODCALLTYPE * get_ForwardTypeCaller) (ITForwardInformation * This, long Forwardtype, BSTR * ppCallerAddress);
	HRESULT(STDMETHODCALLTYPE * GetForwardType) (ITForwardInformation * This, long ForwardType, BSTR * ppDestinationAddress, BSTR * ppCallerAddress);
	HRESULT(STDMETHODCALLTYPE * Clear) (ITForwardInformation * This);
	END_INTERFACE
}  ITForwardInformationVtbl;
interface ITForwardInformation
{
	CONST_VTBL struct ITForwardInformationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITForwardInformation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITForwardInformation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITForwardInformation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITForwardInformation_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITForwardInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITForwardInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITForwardInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITForwardInformation_put_NumRingsNoAnswer(This,lNumRings) ( (This)->lpVtbl -> put_NumRingsNoAnswer(This,lNumRings) )
#define ITForwardInformation_get_NumRingsNoAnswer(This,plNumRings) ( (This)->lpVtbl -> get_NumRingsNoAnswer(This,plNumRings) )
#define ITForwardInformation_SetForwardType(This,ForwardType,pDestAddress,pCallerAddress) ( (This)->lpVtbl -> SetForwardType(This,ForwardType,pDestAddress,pCallerAddress) )
#define ITForwardInformation_get_ForwardTypeDestination(This,ForwardType,ppDestAddress) ( (This)->lpVtbl -> get_ForwardTypeDestination(This,ForwardType,ppDestAddress) )
#define ITForwardInformation_get_ForwardTypeCaller(This,Forwardtype,ppCallerAddress) ( (This)->lpVtbl -> get_ForwardTypeCaller(This,Forwardtype,ppCallerAddress) )
#define ITForwardInformation_GetForwardType(This,ForwardType,ppDestinationAddress,ppCallerAddress) ( (This)->lpVtbl -> GetForwardType(This,ForwardType,ppDestinationAddress,ppCallerAddress) )
#define ITForwardInformation_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#endif
#endif
#ifndef __ITForwardInformation2_INTERFACE_DEFINED__
#define __ITForwardInformation2_INTERFACE_DEFINED__
extern const IID IID_ITForwardInformation2;
typedef struct ITForwardInformation2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITForwardInformation2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITForwardInformation2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITForwardInformation2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITForwardInformation2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITForwardInformation2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITForwardInformation2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITForwardInformation2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_NumRingsNoAnswer) (ITForwardInformation2 * This, long lNumRings);
	HRESULT(STDMETHODCALLTYPE * get_NumRingsNoAnswer) (ITForwardInformation2 * This, long *plNumRings);
	HRESULT(STDMETHODCALLTYPE * SetForwardType) (ITForwardInformation2 * This, long ForwardType, BSTR pDestAddress, BSTR pCallerAddress);
	HRESULT(STDMETHODCALLTYPE * get_ForwardTypeDestination) (ITForwardInformation2 * This, long ForwardType, BSTR * ppDestAddress);
	HRESULT(STDMETHODCALLTYPE * get_ForwardTypeCaller) (ITForwardInformation2 * This, long Forwardtype, BSTR * ppCallerAddress);
	HRESULT(STDMETHODCALLTYPE * GetForwardType) (ITForwardInformation2 * This, long ForwardType, BSTR * ppDestinationAddress, BSTR * ppCallerAddress);
	HRESULT(STDMETHODCALLTYPE * Clear) (ITForwardInformation2 * This);
	HRESULT(STDMETHODCALLTYPE * SetForwardType2) (ITForwardInformation2 * This, long ForwardType, BSTR pDestAddress, long DestAddressType, BSTR pCallerAddress, long CallerAddressType);
	HRESULT(STDMETHODCALLTYPE * GetForwardType2) (ITForwardInformation2 * This, long ForwardType, BSTR * ppDestinationAddress, long *pDestAddressType, BSTR * ppCallerAddress, long *pCallerAddressType);
	HRESULT(STDMETHODCALLTYPE * get_ForwardTypeDestinationAddressType) (ITForwardInformation2 * This, long ForwardType, long *pDestAddressType);
	HRESULT(STDMETHODCALLTYPE * get_ForwardTypeCallerAddressType) (ITForwardInformation2 * This, long Forwardtype, long *pCallerAddressType);
	END_INTERFACE
}  ITForwardInformation2Vtbl;
interface ITForwardInformation2
{
	CONST_VTBL struct ITForwardInformation2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITForwardInformation2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITForwardInformation2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITForwardInformation2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITForwardInformation2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITForwardInformation2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITForwardInformation2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITForwardInformation2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITForwardInformation2_put_NumRingsNoAnswer(This,lNumRings) ( (This)->lpVtbl -> put_NumRingsNoAnswer(This,lNumRings) )
#define ITForwardInformation2_get_NumRingsNoAnswer(This,plNumRings) ( (This)->lpVtbl -> get_NumRingsNoAnswer(This,plNumRings) )
#define ITForwardInformation2_SetForwardType(This,ForwardType,pDestAddress,pCallerAddress) ( (This)->lpVtbl -> SetForwardType(This,ForwardType,pDestAddress,pCallerAddress) )
#define ITForwardInformation2_get_ForwardTypeDestination(This,ForwardType,ppDestAddress) ( (This)->lpVtbl -> get_ForwardTypeDestination(This,ForwardType,ppDestAddress) )
#define ITForwardInformation2_get_ForwardTypeCaller(This,Forwardtype,ppCallerAddress) ( (This)->lpVtbl -> get_ForwardTypeCaller(This,Forwardtype,ppCallerAddress) )
#define ITForwardInformation2_GetForwardType(This,ForwardType,ppDestinationAddress,ppCallerAddress) ( (This)->lpVtbl -> GetForwardType(This,ForwardType,ppDestinationAddress,ppCallerAddress) )
#define ITForwardInformation2_Clear(This) ( (This)->lpVtbl -> Clear(This) )
#define ITForwardInformation2_SetForwardType2(This,ForwardType,pDestAddress,DestAddressType,pCallerAddress,CallerAddressType) ( (This)->lpVtbl -> SetForwardType2(This,ForwardType,pDestAddress,DestAddressType,pCallerAddress,CallerAddressType) )
#define ITForwardInformation2_GetForwardType2(This,ForwardType,ppDestinationAddress,pDestAddressType,ppCallerAddress,pCallerAddressType) ( (This)->lpVtbl -> GetForwardType2(This,ForwardType,ppDestinationAddress,pDestAddressType,ppCallerAddress,pCallerAddressType) )
#define ITForwardInformation2_get_ForwardTypeDestinationAddressType(This,ForwardType,pDestAddressType) ( (This)->lpVtbl -> get_ForwardTypeDestinationAddressType(This,ForwardType,pDestAddressType) )
#define ITForwardInformation2_get_ForwardTypeCallerAddressType(This,Forwardtype,pCallerAddressType) ( (This)->lpVtbl -> get_ForwardTypeCallerAddressType(This,Forwardtype,pCallerAddressType) )
#endif
#endif
#ifndef __ITAddressTranslation_INTERFACE_DEFINED__
#define __ITAddressTranslation_INTERFACE_DEFINED__
extern const IID IID_ITAddressTranslation;
typedef struct ITAddressTranslationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAddressTranslation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAddressTranslation * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAddressTranslation * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAddressTranslation * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAddressTranslation * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAddressTranslation * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAddressTranslation * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * TranslateAddress) (ITAddressTranslation * This, BSTR pAddressToTranslate, long lCard, long lTranslateOptions, ITAddressTranslationInfo ** ppTranslated);
	HRESULT(STDMETHODCALLTYPE * TranslateDialog) (ITAddressTranslation * This, TAPIHWND hwndOwner, BSTR pAddressIn);
	HRESULT(STDMETHODCALLTYPE * EnumerateLocations) (ITAddressTranslation * This, IEnumLocation ** ppEnumLocation);
	HRESULT(STDMETHODCALLTYPE * get_Locations) (ITAddressTranslation * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateCallingCards) (ITAddressTranslation * This, IEnumCallingCard ** ppEnumCallingCard);
	HRESULT(STDMETHODCALLTYPE * get_CallingCards) (ITAddressTranslation * This, VARIANT * pVariant);
	END_INTERFACE
}  ITAddressTranslationVtbl;
interface ITAddressTranslation
{
	CONST_VTBL struct ITAddressTranslationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAddressTranslation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAddressTranslation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAddressTranslation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAddressTranslation_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAddressTranslation_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAddressTranslation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAddressTranslation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAddressTranslation_TranslateAddress(This,pAddressToTranslate,lCard,lTranslateOptions,ppTranslated) ( (This)->lpVtbl -> TranslateAddress(This,pAddressToTranslate,lCard,lTranslateOptions,ppTranslated) )
#define ITAddressTranslation_TranslateDialog(This,hwndOwner,pAddressIn) ( (This)->lpVtbl -> TranslateDialog(This,hwndOwner,pAddressIn) )
#define ITAddressTranslation_EnumerateLocations(This,ppEnumLocation) ( (This)->lpVtbl -> EnumerateLocations(This,ppEnumLocation) )
#define ITAddressTranslation_get_Locations(This,pVariant) ( (This)->lpVtbl -> get_Locations(This,pVariant) )
#define ITAddressTranslation_EnumerateCallingCards(This,ppEnumCallingCard) ( (This)->lpVtbl -> EnumerateCallingCards(This,ppEnumCallingCard) )
#define ITAddressTranslation_get_CallingCards(This,pVariant) ( (This)->lpVtbl -> get_CallingCards(This,pVariant) )
#endif
#endif
#ifndef __ITAddressTranslationInfo_INTERFACE_DEFINED__
#define __ITAddressTranslationInfo_INTERFACE_DEFINED__
extern const IID IID_ITAddressTranslationInfo;
typedef struct ITAddressTranslationInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITAddressTranslationInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITAddressTranslationInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITAddressTranslationInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITAddressTranslationInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITAddressTranslationInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITAddressTranslationInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITAddressTranslationInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DialableString) (ITAddressTranslationInfo * This, BSTR * ppDialableString);
	HRESULT(STDMETHODCALLTYPE * get_DisplayableString) (ITAddressTranslationInfo * This, BSTR * ppDisplayableString);
	HRESULT(STDMETHODCALLTYPE * get_CurrentCountryCode) (ITAddressTranslationInfo * This, long *CountryCode);
	HRESULT(STDMETHODCALLTYPE * get_DestinationCountryCode) (ITAddressTranslationInfo * This, long *CountryCode);
	HRESULT(STDMETHODCALLTYPE * get_TranslationResults) (ITAddressTranslationInfo * This, long *plResults);
	END_INTERFACE
}  ITAddressTranslationInfoVtbl;
interface ITAddressTranslationInfo
{
	CONST_VTBL struct ITAddressTranslationInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITAddressTranslationInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITAddressTranslationInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITAddressTranslationInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITAddressTranslationInfo_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITAddressTranslationInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITAddressTranslationInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITAddressTranslationInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITAddressTranslationInfo_get_DialableString(This,ppDialableString) ( (This)->lpVtbl -> get_DialableString(This,ppDialableString) )
#define ITAddressTranslationInfo_get_DisplayableString(This,ppDisplayableString) ( (This)->lpVtbl -> get_DisplayableString(This,ppDisplayableString) )
#define ITAddressTranslationInfo_get_CurrentCountryCode(This,CountryCode) ( (This)->lpVtbl -> get_CurrentCountryCode(This,CountryCode) )
#define ITAddressTranslationInfo_get_DestinationCountryCode(This,CountryCode) ( (This)->lpVtbl -> get_DestinationCountryCode(This,CountryCode) )
#define ITAddressTranslationInfo_get_TranslationResults(This,plResults) ( (This)->lpVtbl -> get_TranslationResults(This,plResults) )
#endif
#endif
#ifndef __ITLocationInfo_INTERFACE_DEFINED__
#define __ITLocationInfo_INTERFACE_DEFINED__
extern const IID IID_ITLocationInfo;
typedef struct ITLocationInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITLocationInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITLocationInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITLocationInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITLocationInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITLocationInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITLocationInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITLocationInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_PermanentLocationID) (ITLocationInfo * This, long *plLocationID);
	HRESULT(STDMETHODCALLTYPE * get_CountryCode) (ITLocationInfo * This, long *plCountryCode);
	HRESULT(STDMETHODCALLTYPE * get_CountryID) (ITLocationInfo * This, long *plCountryID);
	HRESULT(STDMETHODCALLTYPE * get_Options) (ITLocationInfo * This, long *plOptions);
	HRESULT(STDMETHODCALLTYPE * get_PreferredCardID) (ITLocationInfo * This, long *plCardID);
	HRESULT(STDMETHODCALLTYPE * get_LocationName) (ITLocationInfo * This, BSTR * ppLocationName);
	HRESULT(STDMETHODCALLTYPE * get_CityCode) (ITLocationInfo * This, BSTR * ppCode);
	HRESULT(STDMETHODCALLTYPE * get_LocalAccessCode) (ITLocationInfo * This, BSTR * ppCode);
	HRESULT(STDMETHODCALLTYPE * get_LongDistanceAccessCode) (ITLocationInfo * This, BSTR * ppCode);
	HRESULT(STDMETHODCALLTYPE * get_TollPrefixList) (ITLocationInfo * This, BSTR * ppTollList);
	HRESULT(STDMETHODCALLTYPE * get_CancelCallWaitingCode) (ITLocationInfo * This, BSTR * ppCode);
	END_INTERFACE
}  ITLocationInfoVtbl;
interface ITLocationInfo
{
	CONST_VTBL struct ITLocationInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITLocationInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITLocationInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITLocationInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITLocationInfo_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITLocationInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITLocationInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITLocationInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITLocationInfo_get_PermanentLocationID(This,plLocationID) ( (This)->lpVtbl -> get_PermanentLocationID(This,plLocationID) )
#define ITLocationInfo_get_CountryCode(This,plCountryCode) ( (This)->lpVtbl -> get_CountryCode(This,plCountryCode) )
#define ITLocationInfo_get_CountryID(This,plCountryID) ( (This)->lpVtbl -> get_CountryID(This,plCountryID) )
#define ITLocationInfo_get_Options(This,plOptions) ( (This)->lpVtbl -> get_Options(This,plOptions) )
#define ITLocationInfo_get_PreferredCardID(This,plCardID) ( (This)->lpVtbl -> get_PreferredCardID(This,plCardID) )
#define ITLocationInfo_get_LocationName(This,ppLocationName) ( (This)->lpVtbl -> get_LocationName(This,ppLocationName) )
#define ITLocationInfo_get_CityCode(This,ppCode) ( (This)->lpVtbl -> get_CityCode(This,ppCode) )
#define ITLocationInfo_get_LocalAccessCode(This,ppCode) ( (This)->lpVtbl -> get_LocalAccessCode(This,ppCode) )
#define ITLocationInfo_get_LongDistanceAccessCode(This,ppCode) ( (This)->lpVtbl -> get_LongDistanceAccessCode(This,ppCode) )
#define ITLocationInfo_get_TollPrefixList(This,ppTollList) ( (This)->lpVtbl -> get_TollPrefixList(This,ppTollList) )
#define ITLocationInfo_get_CancelCallWaitingCode(This,ppCode) ( (This)->lpVtbl -> get_CancelCallWaitingCode(This,ppCode) )
#endif
#endif
#ifndef __IEnumLocation_INTERFACE_DEFINED__
#define __IEnumLocation_INTERFACE_DEFINED__
extern const IID IID_IEnumLocation;
typedef struct IEnumLocationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumLocation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumLocation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumLocation * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumLocation * This, ULONG celt, ITLocationInfo ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumLocation * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumLocation * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumLocation * This, IEnumLocation ** ppEnum);
	END_INTERFACE
}  IEnumLocationVtbl;
interface IEnumLocation
{
	CONST_VTBL struct IEnumLocationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumLocation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumLocation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumLocation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumLocation_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumLocation_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumLocation_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumLocation_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __ITCallingCard_INTERFACE_DEFINED__
#define __ITCallingCard_INTERFACE_DEFINED__
extern const IID IID_ITCallingCard;
typedef struct ITCallingCardVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITCallingCard * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITCallingCard * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITCallingCard * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITCallingCard * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITCallingCard * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITCallingCard * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITCallingCard * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_PermanentCardID) (ITCallingCard * This, long *plCardID);
	HRESULT(STDMETHODCALLTYPE * get_NumberOfDigits) (ITCallingCard * This, long *plDigits);
	HRESULT(STDMETHODCALLTYPE * get_Options) (ITCallingCard * This, long *plOptions);
	HRESULT(STDMETHODCALLTYPE * get_CardName) (ITCallingCard * This, BSTR * ppCardName);
	HRESULT(STDMETHODCALLTYPE * get_SameAreaDialingRule) (ITCallingCard * This, BSTR * ppRule);
	HRESULT(STDMETHODCALLTYPE * get_LongDistanceDialingRule) (ITCallingCard * This, BSTR * ppRule);
	HRESULT(STDMETHODCALLTYPE * get_InternationalDialingRule) (ITCallingCard * This, BSTR * ppRule);
	END_INTERFACE
}  ITCallingCardVtbl;
interface ITCallingCard
{
	CONST_VTBL struct ITCallingCardVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITCallingCard_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITCallingCard_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITCallingCard_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITCallingCard_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITCallingCard_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITCallingCard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITCallingCard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITCallingCard_get_PermanentCardID(This,plCardID) ( (This)->lpVtbl -> get_PermanentCardID(This,plCardID) )
#define ITCallingCard_get_NumberOfDigits(This,plDigits) ( (This)->lpVtbl -> get_NumberOfDigits(This,plDigits) )
#define ITCallingCard_get_Options(This,plOptions) ( (This)->lpVtbl -> get_Options(This,plOptions) )
#define ITCallingCard_get_CardName(This,ppCardName) ( (This)->lpVtbl -> get_CardName(This,ppCardName) )
#define ITCallingCard_get_SameAreaDialingRule(This,ppRule) ( (This)->lpVtbl -> get_SameAreaDialingRule(This,ppRule) )
#define ITCallingCard_get_LongDistanceDialingRule(This,ppRule) ( (This)->lpVtbl -> get_LongDistanceDialingRule(This,ppRule) )
#define ITCallingCard_get_InternationalDialingRule(This,ppRule) ( (This)->lpVtbl -> get_InternationalDialingRule(This,ppRule) )
#endif
#endif
#ifndef __IEnumCallingCard_INTERFACE_DEFINED__
#define __IEnumCallingCard_INTERFACE_DEFINED__
extern const IID IID_IEnumCallingCard;
typedef struct IEnumCallingCardVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumCallingCard * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumCallingCard * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumCallingCard * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumCallingCard * This, ULONG celt, ITCallingCard ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumCallingCard * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumCallingCard * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumCallingCard * This, IEnumCallingCard ** ppEnum);
	END_INTERFACE
}  IEnumCallingCardVtbl;
interface IEnumCallingCard
{
	CONST_VTBL struct IEnumCallingCardVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumCallingCard_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumCallingCard_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumCallingCard_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumCallingCard_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumCallingCard_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumCallingCard_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumCallingCard_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __ITCallNotificationEvent_INTERFACE_DEFINED__
#define __ITCallNotificationEvent_INTERFACE_DEFINED__
extern const IID IID_ITCallNotificationEvent;
typedef struct ITCallNotificationEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITCallNotificationEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITCallNotificationEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITCallNotificationEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITCallNotificationEvent * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITCallNotificationEvent * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITCallNotificationEvent * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITCallNotificationEvent * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Call) (ITCallNotificationEvent * This, ITCallInfo ** ppCall);
	HRESULT(STDMETHODCALLTYPE * get_Event) (ITCallNotificationEvent * This, CALL_NOTIFICATION_EVENT * pCallNotificationEvent);
	HRESULT(STDMETHODCALLTYPE * get_CallbackInstance) (ITCallNotificationEvent * This, long *plCallbackInstance);
	END_INTERFACE
}  ITCallNotificationEventVtbl;
interface ITCallNotificationEvent
{
	CONST_VTBL struct ITCallNotificationEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITCallNotificationEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITCallNotificationEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITCallNotificationEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITCallNotificationEvent_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITCallNotificationEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITCallNotificationEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITCallNotificationEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITCallNotificationEvent_get_Call(This,ppCall) ( (This)->lpVtbl -> get_Call(This,ppCall) )
#define ITCallNotificationEvent_get_Event(This,pCallNotificationEvent) ( (This)->lpVtbl -> get_Event(This,pCallNotificationEvent) )
#define ITCallNotificationEvent_get_CallbackInstance(This,plCallbackInstance) ( (This)->lpVtbl -> get_CallbackInstance(This,plCallbackInstance) )
#endif
#endif
#ifndef __ITDispatchMapper_INTERFACE_DEFINED__
#define __ITDispatchMapper_INTERFACE_DEFINED__
extern const IID IID_ITDispatchMapper;
typedef struct ITDispatchMapperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITDispatchMapper * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITDispatchMapper * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITDispatchMapper * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITDispatchMapper * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITDispatchMapper * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITDispatchMapper * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITDispatchMapper * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * QueryDispatchInterface) (ITDispatchMapper * This, BSTR pIID, IDispatch * pInterfaceToMap, IDispatch ** ppReturnedInterface);
	END_INTERFACE
}  ITDispatchMapperVtbl;
interface ITDispatchMapper
{
	CONST_VTBL struct ITDispatchMapperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITDispatchMapper_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITDispatchMapper_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITDispatchMapper_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITDispatchMapper_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITDispatchMapper_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITDispatchMapper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITDispatchMapper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITDispatchMapper_QueryDispatchInterface(This,pIID,pInterfaceToMap,ppReturnedInterface) ( (This)->lpVtbl -> QueryDispatchInterface(This,pIID,pInterfaceToMap,ppReturnedInterface) )
#endif
#endif
#ifndef __ITStreamControl_INTERFACE_DEFINED__
#define __ITStreamControl_INTERFACE_DEFINED__
extern const IID IID_ITStreamControl;
typedef struct ITStreamControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITStreamControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITStreamControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITStreamControl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITStreamControl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITStreamControl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITStreamControl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITStreamControl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateStream) (ITStreamControl * This, long lMediaType, TERMINAL_DIRECTION td, ITStream ** ppStream);
	HRESULT(STDMETHODCALLTYPE * RemoveStream) (ITStreamControl * This, ITStream * pStream);
	HRESULT(STDMETHODCALLTYPE * EnumerateStreams) (ITStreamControl * This, IEnumStream ** ppEnumStream);
	HRESULT(STDMETHODCALLTYPE * get_Streams) (ITStreamControl * This, VARIANT * pVariant);
	END_INTERFACE
}  ITStreamControlVtbl;
interface ITStreamControl
{
	CONST_VTBL struct ITStreamControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITStreamControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITStreamControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITStreamControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITStreamControl_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITStreamControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITStreamControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITStreamControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITStreamControl_CreateStream(This,lMediaType,td,ppStream) ( (This)->lpVtbl -> CreateStream(This,lMediaType,td,ppStream) )
#define ITStreamControl_RemoveStream(This,pStream) ( (This)->lpVtbl -> RemoveStream(This,pStream) )
#define ITStreamControl_EnumerateStreams(This,ppEnumStream) ( (This)->lpVtbl -> EnumerateStreams(This,ppEnumStream) )
#define ITStreamControl_get_Streams(This,pVariant) ( (This)->lpVtbl -> get_Streams(This,pVariant) )
#endif
#endif
#ifndef __ITStream_INTERFACE_DEFINED__
#define __ITStream_INTERFACE_DEFINED__
extern const IID IID_ITStream;
typedef struct ITStreamVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITStream * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITStream * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITStream * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITStream * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITStream * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITStream * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITStream * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_MediaType) (ITStream * This, long *plMediaType);
	HRESULT(STDMETHODCALLTYPE * get_Direction) (ITStream * This, TERMINAL_DIRECTION * pTD);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ITStream * This, BSTR * ppName);
	HRESULT(STDMETHODCALLTYPE * StartStream) (ITStream * This);
	HRESULT(STDMETHODCALLTYPE * PauseStream) (ITStream * This);
	HRESULT(STDMETHODCALLTYPE * StopStream) (ITStream * This);
	HRESULT(STDMETHODCALLTYPE * SelectTerminal) (ITStream * This, ITTerminal * pTerminal);
	HRESULT(STDMETHODCALLTYPE * UnselectTerminal) (ITStream * This, ITTerminal * pTerminal);
	HRESULT(STDMETHODCALLTYPE * EnumerateTerminals) (ITStream * This, IEnumTerminal ** ppEnumTerminal);
	HRESULT(STDMETHODCALLTYPE * get_Terminals) (ITStream * This, VARIANT * pTerminals);
	END_INTERFACE
}  ITStreamVtbl;
interface ITStream
{
	CONST_VTBL struct ITStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITStream_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITStream_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITStream_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITStream_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITStream_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITStream_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITStream_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITStream_get_MediaType(This,plMediaType) ( (This)->lpVtbl -> get_MediaType(This,plMediaType) )
#define ITStream_get_Direction(This,pTD) ( (This)->lpVtbl -> get_Direction(This,pTD) )
#define ITStream_get_Name(This,ppName) ( (This)->lpVtbl -> get_Name(This,ppName) )
#define ITStream_StartStream(This) ( (This)->lpVtbl -> StartStream(This) )
#define ITStream_PauseStream(This) ( (This)->lpVtbl -> PauseStream(This) )
#define ITStream_StopStream(This) ( (This)->lpVtbl -> StopStream(This) )
#define ITStream_SelectTerminal(This,pTerminal) ( (This)->lpVtbl -> SelectTerminal(This,pTerminal) )
#define ITStream_UnselectTerminal(This,pTerminal) ( (This)->lpVtbl -> UnselectTerminal(This,pTerminal) )
#define ITStream_EnumerateTerminals(This,ppEnumTerminal) ( (This)->lpVtbl -> EnumerateTerminals(This,ppEnumTerminal) )
#define ITStream_get_Terminals(This,pTerminals) ( (This)->lpVtbl -> get_Terminals(This,pTerminals) )
#endif
#endif
#ifndef __IEnumStream_INTERFACE_DEFINED__
#define __IEnumStream_INTERFACE_DEFINED__
extern const IID IID_IEnumStream;
typedef struct IEnumStreamVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumStream * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumStream * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumStream * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumStream * This, ULONG celt, ITStream ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumStream * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumStream * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumStream * This, IEnumStream ** ppEnum);
	END_INTERFACE
}  IEnumStreamVtbl;
interface IEnumStream
{
	CONST_VTBL struct IEnumStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumStream_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumStream_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumStream_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumStream_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumStream_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumStream_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumStream_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __ITSubStreamControl_INTERFACE_DEFINED__
#define __ITSubStreamControl_INTERFACE_DEFINED__
extern const IID IID_ITSubStreamControl;
typedef struct ITSubStreamControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITSubStreamControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITSubStreamControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITSubStreamControl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITSubStreamControl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITSubStreamControl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITSubStreamControl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITSubStreamControl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateSubStream) (ITSubStreamControl * This, ITSubStream ** ppSubStream);
	HRESULT(STDMETHODCALLTYPE * RemoveSubStream) (ITSubStreamControl * This, ITSubStream * pSubStream);
	HRESULT(STDMETHODCALLTYPE * EnumerateSubStreams) (ITSubStreamControl * This, IEnumSubStream ** ppEnumSubStream);
	HRESULT(STDMETHODCALLTYPE * get_SubStreams) (ITSubStreamControl * This, VARIANT * pVariant);
	END_INTERFACE
}  ITSubStreamControlVtbl;
interface ITSubStreamControl
{
	CONST_VTBL struct ITSubStreamControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITSubStreamControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITSubStreamControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITSubStreamControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITSubStreamControl_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITSubStreamControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITSubStreamControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITSubStreamControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITSubStreamControl_CreateSubStream(This,ppSubStream) ( (This)->lpVtbl -> CreateSubStream(This,ppSubStream) )
#define ITSubStreamControl_RemoveSubStream(This,pSubStream) ( (This)->lpVtbl -> RemoveSubStream(This,pSubStream) )
#define ITSubStreamControl_EnumerateSubStreams(This,ppEnumSubStream) ( (This)->lpVtbl -> EnumerateSubStreams(This,ppEnumSubStream) )
#define ITSubStreamControl_get_SubStreams(This,pVariant) ( (This)->lpVtbl -> get_SubStreams(This,pVariant) )
#endif
#endif
#ifndef __ITSubStream_INTERFACE_DEFINED__
#define __ITSubStream_INTERFACE_DEFINED__
extern const IID IID_ITSubStream;
typedef struct ITSubStreamVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITSubStream * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITSubStream * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITSubStream * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITSubStream * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITSubStream * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITSubStream * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITSubStream * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * StartSubStream) (ITSubStream * This);
	HRESULT(STDMETHODCALLTYPE * PauseSubStream) (ITSubStream * This);
	HRESULT(STDMETHODCALLTYPE * StopSubStream) (ITSubStream * This);
	HRESULT(STDMETHODCALLTYPE * SelectTerminal) (ITSubStream * This, ITTerminal * pTerminal);
	HRESULT(STDMETHODCALLTYPE * UnselectTerminal) (ITSubStream * This, ITTerminal * pTerminal);
	HRESULT(STDMETHODCALLTYPE * EnumerateTerminals) (ITSubStream * This, IEnumTerminal ** ppEnumTerminal);
	HRESULT(STDMETHODCALLTYPE * get_Terminals) (ITSubStream * This, VARIANT * pTerminals);
	HRESULT(STDMETHODCALLTYPE * get_Stream) (ITSubStream * This, ITStream ** ppITStream);
	END_INTERFACE
}  ITSubStreamVtbl;
interface ITSubStream
{
	CONST_VTBL struct ITSubStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITSubStream_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITSubStream_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITSubStream_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITSubStream_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITSubStream_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITSubStream_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITSubStream_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITSubStream_StartSubStream(This) ( (This)->lpVtbl -> StartSubStream(This) )
#define ITSubStream_PauseSubStream(This) ( (This)->lpVtbl -> PauseSubStream(This) )
#define ITSubStream_StopSubStream(This) ( (This)->lpVtbl -> StopSubStream(This) )
#define ITSubStream_SelectTerminal(This,pTerminal) ( (This)->lpVtbl -> SelectTerminal(This,pTerminal) )
#define ITSubStream_UnselectTerminal(This,pTerminal) ( (This)->lpVtbl -> UnselectTerminal(This,pTerminal) )
#define ITSubStream_EnumerateTerminals(This,ppEnumTerminal) ( (This)->lpVtbl -> EnumerateTerminals(This,ppEnumTerminal) )
#define ITSubStream_get_Terminals(This,pTerminals) ( (This)->lpVtbl -> get_Terminals(This,pTerminals) )
#define ITSubStream_get_Stream(This,ppITStream) ( (This)->lpVtbl -> get_Stream(This,ppITStream) )
#endif
#endif
#ifndef __IEnumSubStream_INTERFACE_DEFINED__
#define __IEnumSubStream_INTERFACE_DEFINED__
extern const IID IID_IEnumSubStream;
typedef struct IEnumSubStreamVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSubStream * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSubStream * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSubStream * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSubStream * This, ULONG celt, ITSubStream ** ppElements, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSubStream * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSubStream * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSubStream * This, IEnumSubStream ** ppEnum);
	END_INTERFACE
}  IEnumSubStreamVtbl;
interface IEnumSubStream
{
	CONST_VTBL struct IEnumSubStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSubStream_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSubStream_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSubStream_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumSubStream_Next(This,celt,ppElements,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pceltFetched) )
#define IEnumSubStream_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumSubStream_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumSubStream_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __ITLegacyWaveSupport_INTERFACE_DEFINED__
#define __ITLegacyWaveSupport_INTERFACE_DEFINED__
extern const IID IID_ITLegacyWaveSupport;
typedef struct ITLegacyWaveSupportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITLegacyWaveSupport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITLegacyWaveSupport * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITLegacyWaveSupport * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITLegacyWaveSupport * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITLegacyWaveSupport * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITLegacyWaveSupport * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITLegacyWaveSupport * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * IsFullDuplex) (ITLegacyWaveSupport * This, FULLDUPLEX_SUPPORT * pSupport);
	END_INTERFACE
}  ITLegacyWaveSupportVtbl;
interface ITLegacyWaveSupport
{
	CONST_VTBL struct ITLegacyWaveSupportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITLegacyWaveSupport_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITLegacyWaveSupport_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITLegacyWaveSupport_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITLegacyWaveSupport_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITLegacyWaveSupport_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITLegacyWaveSupport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITLegacyWaveSupport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITLegacyWaveSupport_IsFullDuplex(This,pSupport) ( (This)->lpVtbl -> IsFullDuplex(This,pSupport) )
#endif
#endif
#ifndef __ITBasicCallControl2_INTERFACE_DEFINED__
#define __ITBasicCallControl2_INTERFACE_DEFINED__
extern const IID IID_ITBasicCallControl2;
typedef struct ITBasicCallControl2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITBasicCallControl2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITBasicCallControl2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITBasicCallControl2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITBasicCallControl2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITBasicCallControl2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITBasicCallControl2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITBasicCallControl2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Connect) (ITBasicCallControl2 * This, VARIANT_BOOL fSync);
	HRESULT(STDMETHODCALLTYPE * Answer) (ITBasicCallControl2 * This);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (ITBasicCallControl2 * This, DISCONNECT_CODE code);
	HRESULT(STDMETHODCALLTYPE * Hold) (ITBasicCallControl2 * This, VARIANT_BOOL fHold);
	HRESULT(STDMETHODCALLTYPE * HandoffDirect) (ITBasicCallControl2 * This, BSTR pApplicationName);
	HRESULT(STDMETHODCALLTYPE * HandoffIndirect) (ITBasicCallControl2 * This, long lMediaType);
	HRESULT(STDMETHODCALLTYPE * Conference) (ITBasicCallControl2 * This, ITBasicCallControl * pCall, VARIANT_BOOL fSync);
	HRESULT(STDMETHODCALLTYPE * Transfer) (ITBasicCallControl2 * This, ITBasicCallControl * pCall, VARIANT_BOOL fSync);
	HRESULT(STDMETHODCALLTYPE * BlindTransfer) (ITBasicCallControl2 * This, BSTR pDestAddress);
	HRESULT(STDMETHODCALLTYPE * SwapHold) (ITBasicCallControl2 * This, ITBasicCallControl * pCall);
	HRESULT(STDMETHODCALLTYPE * ParkDirect) (ITBasicCallControl2 * This, BSTR pParkAddress);
	HRESULT(STDMETHODCALLTYPE * ParkIndirect) (ITBasicCallControl2 * This, BSTR * ppNonDirAddress);
	HRESULT(STDMETHODCALLTYPE * Unpark) (ITBasicCallControl2 * This);
	HRESULT(STDMETHODCALLTYPE * SetQOS) (ITBasicCallControl2 * This, long lMediaType, QOS_SERVICE_LEVEL ServiceLevel);
	HRESULT(STDMETHODCALLTYPE * Pickup) (ITBasicCallControl2 * This, BSTR pGroupID);
	HRESULT(STDMETHODCALLTYPE * Dial) (ITBasicCallControl2 * This, BSTR pDestAddress);
	HRESULT(STDMETHODCALLTYPE * Finish) (ITBasicCallControl2 * This, FINISH_MODE finishMode);
	HRESULT(STDMETHODCALLTYPE * RemoveFromConference) (ITBasicCallControl2 * This);
	HRESULT(STDMETHODCALLTYPE * RequestTerminal) (ITBasicCallControl2 * This, BSTR bstrTerminalClassGUID, long lMediaType, TERMINAL_DIRECTION Direction, ITTerminal ** ppTerminal);
	HRESULT(STDMETHODCALLTYPE * SelectTerminalOnCall) (ITBasicCallControl2 * This, ITTerminal * pTerminal);
	HRESULT(STDMETHODCALLTYPE * UnselectTerminalOnCall) (ITBasicCallControl2 * This, ITTerminal * pTerminal);
	END_INTERFACE
}  ITBasicCallControl2Vtbl;
interface ITBasicCallControl2
{
	CONST_VTBL struct ITBasicCallControl2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITBasicCallControl2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITBasicCallControl2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITBasicCallControl2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITBasicCallControl2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITBasicCallControl2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITBasicCallControl2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITBasicCallControl2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITBasicCallControl2_Connect(This,fSync) ( (This)->lpVtbl -> Connect(This,fSync) )
#define ITBasicCallControl2_Answer(This) ( (This)->lpVtbl -> Answer(This) )
#define ITBasicCallControl2_Disconnect(This,code) ( (This)->lpVtbl -> Disconnect(This,code) )
#define ITBasicCallControl2_Hold(This,fHold) ( (This)->lpVtbl -> Hold(This,fHold) )
#define ITBasicCallControl2_HandoffDirect(This,pApplicationName) ( (This)->lpVtbl -> HandoffDirect(This,pApplicationName) )
#define ITBasicCallControl2_HandoffIndirect(This,lMediaType) ( (This)->lpVtbl -> HandoffIndirect(This,lMediaType) )
#define ITBasicCallControl2_Conference(This,pCall,fSync) ( (This)->lpVtbl -> Conference(This,pCall,fSync) )
#define ITBasicCallControl2_Transfer(This,pCall,fSync) ( (This)->lpVtbl -> Transfer(This,pCall,fSync) )
#define ITBasicCallControl2_BlindTransfer(This,pDestAddress) ( (This)->lpVtbl -> BlindTransfer(This,pDestAddress) )
#define ITBasicCallControl2_SwapHold(This,pCall) ( (This)->lpVtbl -> SwapHold(This,pCall) )
#define ITBasicCallControl2_ParkDirect(This,pParkAddress) ( (This)->lpVtbl -> ParkDirect(This,pParkAddress) )
#define ITBasicCallControl2_ParkIndirect(This,ppNonDirAddress) ( (This)->lpVtbl -> ParkIndirect(This,ppNonDirAddress) )
#define ITBasicCallControl2_Unpark(This) ( (This)->lpVtbl -> Unpark(This) )
#define ITBasicCallControl2_SetQOS(This,lMediaType,ServiceLevel) ( (This)->lpVtbl -> SetQOS(This,lMediaType,ServiceLevel) )
#define ITBasicCallControl2_Pickup(This,pGroupID) ( (This)->lpVtbl -> Pickup(This,pGroupID) )
#define ITBasicCallControl2_Dial(This,pDestAddress) ( (This)->lpVtbl -> Dial(This,pDestAddress) )
#define ITBasicCallControl2_Finish(This,finishMode) ( (This)->lpVtbl -> Finish(This,finishMode) )
#define ITBasicCallControl2_RemoveFromConference(This) ( (This)->lpVtbl -> RemoveFromConference(This) )
#define ITBasicCallControl2_RequestTerminal(This,bstrTerminalClassGUID,lMediaType,Direction,ppTerminal) ( (This)->lpVtbl -> RequestTerminal(This,bstrTerminalClassGUID,lMediaType,Direction,ppTerminal) )
#define ITBasicCallControl2_SelectTerminalOnCall(This,pTerminal) ( (This)->lpVtbl -> SelectTerminalOnCall(This,pTerminal) )
#define ITBasicCallControl2_UnselectTerminalOnCall(This,pTerminal) ( (This)->lpVtbl -> UnselectTerminalOnCall(This,pTerminal) )
#endif
#endif
#ifndef __ITScriptableAudioFormat_INTERFACE_DEFINED__
#define __ITScriptableAudioFormat_INTERFACE_DEFINED__
extern const IID IID_ITScriptableAudioFormat;
typedef struct ITScriptableAudioFormatVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITScriptableAudioFormat * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITScriptableAudioFormat * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITScriptableAudioFormat * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITScriptableAudioFormat * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITScriptableAudioFormat * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITScriptableAudioFormat * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITScriptableAudioFormat * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Channels) (ITScriptableAudioFormat * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * put_Channels) (ITScriptableAudioFormat * This, const long nNewVal);
	HRESULT(STDMETHODCALLTYPE * get_SamplesPerSec) (ITScriptableAudioFormat * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * put_SamplesPerSec) (ITScriptableAudioFormat * This, const long nNewVal);
	HRESULT(STDMETHODCALLTYPE * get_AvgBytesPerSec) (ITScriptableAudioFormat * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * put_AvgBytesPerSec) (ITScriptableAudioFormat * This, const long nNewVal);
	HRESULT(STDMETHODCALLTYPE * get_BlockAlign) (ITScriptableAudioFormat * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * put_BlockAlign) (ITScriptableAudioFormat * This, const long nNewVal);
	HRESULT(STDMETHODCALLTYPE * get_BitsPerSample) (ITScriptableAudioFormat * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * put_BitsPerSample) (ITScriptableAudioFormat * This, const long nNewVal);
	HRESULT(STDMETHODCALLTYPE * get_FormatTag) (ITScriptableAudioFormat * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * put_FormatTag) (ITScriptableAudioFormat * This, const long nNewVal);
	END_INTERFACE
}  ITScriptableAudioFormatVtbl;
interface ITScriptableAudioFormat
{
	CONST_VTBL struct ITScriptableAudioFormatVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITScriptableAudioFormat_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITScriptableAudioFormat_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITScriptableAudioFormat_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITScriptableAudioFormat_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITScriptableAudioFormat_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITScriptableAudioFormat_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITScriptableAudioFormat_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITScriptableAudioFormat_get_Channels(This,pVal) ( (This)->lpVtbl -> get_Channels(This,pVal) )
#define ITScriptableAudioFormat_put_Channels(This,nNewVal) ( (This)->lpVtbl -> put_Channels(This,nNewVal) )
#define ITScriptableAudioFormat_get_SamplesPerSec(This,pVal) ( (This)->lpVtbl -> get_SamplesPerSec(This,pVal) )
#define ITScriptableAudioFormat_put_SamplesPerSec(This,nNewVal) ( (This)->lpVtbl -> put_SamplesPerSec(This,nNewVal) )
#define ITScriptableAudioFormat_get_AvgBytesPerSec(This,pVal) ( (This)->lpVtbl -> get_AvgBytesPerSec(This,pVal) )
#define ITScriptableAudioFormat_put_AvgBytesPerSec(This,nNewVal) ( (This)->lpVtbl -> put_AvgBytesPerSec(This,nNewVal) )
#define ITScriptableAudioFormat_get_BlockAlign(This,pVal) ( (This)->lpVtbl -> get_BlockAlign(This,pVal) )
#define ITScriptableAudioFormat_put_BlockAlign(This,nNewVal) ( (This)->lpVtbl -> put_BlockAlign(This,nNewVal) )
#define ITScriptableAudioFormat_get_BitsPerSample(This,pVal) ( (This)->lpVtbl -> get_BitsPerSample(This,pVal) )
#define ITScriptableAudioFormat_put_BitsPerSample(This,nNewVal) ( (This)->lpVtbl -> put_BitsPerSample(This,nNewVal) )
#define ITScriptableAudioFormat_get_FormatTag(This,pVal) ( (This)->lpVtbl -> get_FormatTag(This,pVal) )
#define ITScriptableAudioFormat_put_FormatTag(This,nNewVal) ( (This)->lpVtbl -> put_FormatTag(This,nNewVal) )
#endif
#endif
extern const CLSID CLSID_VideoWindowTerm;
extern const CLSID CLSID_VideoInputTerminal;
extern const CLSID CLSID_HandsetTerminal;
extern const CLSID CLSID_HeadsetTerminal;
extern const CLSID CLSID_SpeakerphoneTerminal;
extern const CLSID CLSID_MicrophoneTerminal;
extern const CLSID CLSID_SpeakersTerminal;
extern const CLSID CLSID_MediaStreamTerminal;
extern const CLSID CLSID_FileRecordingTerminal;
extern const CLSID CLSID_FileRecordingTrack;
extern const CLSID CLSID_FilePlaybackTerminal;
#define TAPIMEDIATYPE_AUDIO                     0x8
#define TAPIMEDIATYPE_VIDEO                     0x8000
#define TAPIMEDIATYPE_DATAMODEM                 0x10
#define TAPIMEDIATYPE_G3FAX                     0x20
#define TAPIMEDIATYPE_MULTITRACK                0x10000
extern const CLSID TAPIPROTOCOL_PSTN;
extern const CLSID TAPIPROTOCOL_H323;
extern const CLSID TAPIPROTOCOL_Multicast;
#define __TapiConstants_MODULE_DEFINED__
extern RPC_IF_HANDLE __MIDL_itf_tapi3if_0000_0083_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tapi3if_0000_0083_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
