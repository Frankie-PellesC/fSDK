/*+@@file@@----------------------------------------------------------------*//*!
 \file		Msp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 22:16:21 2016
 \date		Modified on Sun Aug 14 22:16:21 2016
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
#ifndef __msp_h__
#define __msp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITPluggableTerminalEventSink_FWD_DEFINED__
#define __ITPluggableTerminalEventSink_FWD_DEFINED__
typedef interface ITPluggableTerminalEventSink ITPluggableTerminalEventSink;
#endif
#ifndef __ITPluggableTerminalEventSinkRegistration_FWD_DEFINED__
#define __ITPluggableTerminalEventSinkRegistration_FWD_DEFINED__
typedef interface ITPluggableTerminalEventSinkRegistration ITPluggableTerminalEventSinkRegistration;
#endif
#ifndef __ITMSPAddress_FWD_DEFINED__
#define __ITMSPAddress_FWD_DEFINED__
typedef interface ITMSPAddress ITMSPAddress;
#endif
#include <tapi3if.h>
typedef long *MSP_HANDLE;
typedef enum __MIDL___MIDL_itf_msp_0000_0000_0001
{
	ADDRESS_TERMINAL_AVAILABLE = 0,
	ADDRESS_TERMINAL_UNAVAILABLE = (ADDRESS_TERMINAL_AVAILABLE + 1)
} MSP_ADDRESS_EVENT;
typedef enum __MIDL___MIDL_itf_msp_0000_0000_0002
{
	CALL_NEW_STREAM = 0,
	CALL_STREAM_FAIL = (CALL_NEW_STREAM + 1),
	CALL_TERMINAL_FAIL = (CALL_STREAM_FAIL + 1),
	CALL_STREAM_NOT_USED = (CALL_TERMINAL_FAIL + 1),
	CALL_STREAM_ACTIVE = (CALL_STREAM_NOT_USED + 1),
	CALL_STREAM_INACTIVE = (CALL_STREAM_ACTIVE + 1)
} MSP_CALL_EVENT;
typedef enum __MIDL___MIDL_itf_msp_0000_0000_0003
{
	CALL_CAUSE_UNKNOWN = 0,
	CALL_CAUSE_BAD_DEVICE = (CALL_CAUSE_UNKNOWN + 1),
	CALL_CAUSE_CONNECT_FAIL = (CALL_CAUSE_BAD_DEVICE + 1),
	CALL_CAUSE_LOCAL_REQUEST = (CALL_CAUSE_CONNECT_FAIL + 1),
	CALL_CAUSE_REMOTE_REQUEST = (CALL_CAUSE_LOCAL_REQUEST + 1),
	CALL_CAUSE_MEDIA_TIMEOUT = (CALL_CAUSE_REMOTE_REQUEST + 1),
	CALL_CAUSE_MEDIA_RECOVERED = (CALL_CAUSE_MEDIA_TIMEOUT + 1),
	CALL_CAUSE_QUALITY_OF_SERVICE = (CALL_CAUSE_MEDIA_RECOVERED + 1)
} MSP_CALL_EVENT_CAUSE;
typedef enum __MIDL___MIDL_itf_msp_0000_0000_0004
{
	ME_ADDRESS_EVENT = 0,
	ME_CALL_EVENT = (ME_ADDRESS_EVENT + 1),
	ME_TSP_DATA = (ME_CALL_EVENT + 1),
	ME_PRIVATE_EVENT = (ME_TSP_DATA + 1),
	ME_ASR_TERMINAL_EVENT = (ME_PRIVATE_EVENT + 1),
	ME_TTS_TERMINAL_EVENT = (ME_ASR_TERMINAL_EVENT + 1),
	ME_FILE_TERMINAL_EVENT = (ME_TTS_TERMINAL_EVENT + 1),
	ME_TONE_TERMINAL_EVENT = (ME_FILE_TERMINAL_EVENT + 1)
} MSP_EVENT;
typedef struct __MIDL___MIDL_itf_msp_0000_0000_0005
{
	DWORD dwSize;
	MSP_EVENT Event;
	MSP_HANDLE hCall;
	union
	{
		struct
		{
			MSP_ADDRESS_EVENT Type;
			ITTerminal *pTerminal;
		} MSP_ADDRESS_EVENT_INFO;
		struct
		{
			MSP_CALL_EVENT Type;
			MSP_CALL_EVENT_CAUSE Cause;
			ITStream *pStream;
			ITTerminal *pTerminal;
			HRESULT hrError;
		} MSP_CALL_EVENT_INFO;
		struct
		{
			DWORD dwBufferSize;
			BYTE pBuffer[1];
		} MSP_TSP_DATA;
		struct
		{
			IDispatch *pEvent;
			long lEventCode;
		} MSP_PRIVATE_EVENT_INFO;
		struct
		{
			ITTerminal *pParentFileTerminal;
			ITFileTrack *pFileTrack;
			TERMINAL_MEDIA_STATE TerminalMediaState;
			FT_STATE_EVENT_CAUSE ftecEventCause;
			HRESULT hrErrorCode;
		} MSP_FILE_TERMINAL_EVENT_INFO;
		struct
		{
			ITTerminal *pASRTerminal;
			HRESULT hrErrorCode;
		} MSP_ASR_TERMINAL_EVENT_INFO;
		struct
		{
			ITTerminal *pTTSTerminal;
			HRESULT hrErrorCode;
		} MSP_TTS_TERMINAL_EVENT_INFO;
		struct
		{
			ITTerminal *pToneTerminal;
			HRESULT hrErrorCode;
		} MSP_TONE_TERMINAL_EVENT_INFO;
	};
} MSP_EVENT_INFO;
extern RPC_IF_HANDLE __MIDL_itf_msp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msp_0000_0000_v0_0_s_ifspec;
#ifndef __ITPluggableTerminalEventSink_INTERFACE_DEFINED__
#define __ITPluggableTerminalEventSink_INTERFACE_DEFINED__
extern const IID IID_ITPluggableTerminalEventSink;
typedef struct ITPluggableTerminalEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITPluggableTerminalEventSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITPluggableTerminalEventSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITPluggableTerminalEventSink * This);
	HRESULT(STDMETHODCALLTYPE * FireEvent) (ITPluggableTerminalEventSink * This, const MSP_EVENT_INFO * pMspEventInfo);
	END_INTERFACE
}  ITPluggableTerminalEventSinkVtbl;
interface ITPluggableTerminalEventSink
{
	CONST_VTBL struct ITPluggableTerminalEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITPluggableTerminalEventSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITPluggableTerminalEventSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITPluggableTerminalEventSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITPluggableTerminalEventSink_FireEvent(This,pMspEventInfo) ( (This)->lpVtbl -> FireEvent(This,pMspEventInfo) )
#endif
#endif
#ifndef __ITPluggableTerminalEventSinkRegistration_INTERFACE_DEFINED__
#define __ITPluggableTerminalEventSinkRegistration_INTERFACE_DEFINED__
extern const IID IID_ITPluggableTerminalEventSinkRegistration;
typedef struct ITPluggableTerminalEventSinkRegistrationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITPluggableTerminalEventSinkRegistration * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITPluggableTerminalEventSinkRegistration * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITPluggableTerminalEventSinkRegistration * This);
	HRESULT(STDMETHODCALLTYPE * RegisterSink) (ITPluggableTerminalEventSinkRegistration * This, ITPluggableTerminalEventSink * pEventSink);
	HRESULT(STDMETHODCALLTYPE * UnregisterSink) (ITPluggableTerminalEventSinkRegistration * This);
	END_INTERFACE
}  ITPluggableTerminalEventSinkRegistrationVtbl;
interface ITPluggableTerminalEventSinkRegistration
{
	CONST_VTBL struct ITPluggableTerminalEventSinkRegistrationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITPluggableTerminalEventSinkRegistration_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITPluggableTerminalEventSinkRegistration_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITPluggableTerminalEventSinkRegistration_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITPluggableTerminalEventSinkRegistration_RegisterSink(This,pEventSink) ( (This)->lpVtbl -> RegisterSink(This,pEventSink) )
#define ITPluggableTerminalEventSinkRegistration_UnregisterSink(This) ( (This)->lpVtbl -> UnregisterSink(This) )
#endif
#endif
#ifndef __ITMSPAddress_INTERFACE_DEFINED__
#define __ITMSPAddress_INTERFACE_DEFINED__
extern const IID IID_ITMSPAddress;
typedef struct ITMSPAddressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITMSPAddress * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITMSPAddress * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITMSPAddress * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ITMSPAddress * This, MSP_HANDLE hEvent);
	HRESULT(STDMETHODCALLTYPE * Shutdown) (ITMSPAddress * This);
	HRESULT(STDMETHODCALLTYPE * CreateMSPCall) (ITMSPAddress * This, MSP_HANDLE hCall, DWORD dwReserved, DWORD dwMediaType, IUnknown * pOuterUnknown, IUnknown ** ppStreamControl);
	HRESULT(STDMETHODCALLTYPE * ShutdownMSPCall) (ITMSPAddress * This, IUnknown * pStreamControl);
	HRESULT(STDMETHODCALLTYPE * ReceiveTSPData) (ITMSPAddress * This, IUnknown * pMSPCall, BYTE * pBuffer, DWORD dwSize);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (ITMSPAddress * This, DWORD * pdwSize, byte * pEventBuffer);
	END_INTERFACE
}  ITMSPAddressVtbl;
interface ITMSPAddress
{
	CONST_VTBL struct ITMSPAddressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITMSPAddress_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITMSPAddress_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITMSPAddress_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITMSPAddress_Initialize(This,hEvent) ( (This)->lpVtbl -> Initialize(This,hEvent) )
#define ITMSPAddress_Shutdown(This) ( (This)->lpVtbl -> Shutdown(This) )
#define ITMSPAddress_CreateMSPCall(This,hCall,dwReserved,dwMediaType,pOuterUnknown,ppStreamControl) ( (This)->lpVtbl -> CreateMSPCall(This,hCall,dwReserved,dwMediaType,pOuterUnknown,ppStreamControl) )
#define ITMSPAddress_ShutdownMSPCall(This,pStreamControl) ( (This)->lpVtbl -> ShutdownMSPCall(This,pStreamControl) )
#define ITMSPAddress_ReceiveTSPData(This,pMSPCall,pBuffer,dwSize) ( (This)->lpVtbl -> ReceiveTSPData(This,pMSPCall,pBuffer,dwSize) )
#define ITMSPAddress_GetEvent(This,pdwSize,pEventBuffer) ( (This)->lpVtbl -> GetEvent(This,pdwSize,pEventBuffer) )
#endif
#endif
#endif
