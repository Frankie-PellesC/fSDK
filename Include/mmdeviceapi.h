/*+@@file@@----------------------------------------------------------------*//*!
 \file		mmdeviceapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
            03.01.2019 Added classes IID definition
 \par  Status: 
            
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Nov 20 16:39:15 2016
 \date		Modified on Thu Jan  3 01:23:05 2019
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
#ifndef __mmdeviceapi_h__
#define __mmdeviceapi_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMMNotificationClient_FWD_DEFINED__
#define __IMMNotificationClient_FWD_DEFINED__
typedef interface IMMNotificationClient IMMNotificationClient;
#endif
#ifndef __IMMDevice_FWD_DEFINED__
#define __IMMDevice_FWD_DEFINED__
typedef interface IMMDevice IMMDevice;
#endif
#ifndef __IMMDeviceCollection_FWD_DEFINED__
#define __IMMDeviceCollection_FWD_DEFINED__
typedef interface IMMDeviceCollection IMMDeviceCollection;
#endif
#ifndef __IMMEndpoint_FWD_DEFINED__
#define __IMMEndpoint_FWD_DEFINED__
typedef interface IMMEndpoint IMMEndpoint;
#endif
#ifndef __IMMDeviceEnumerator_FWD_DEFINED__
#define __IMMDeviceEnumerator_FWD_DEFINED__
typedef interface IMMDeviceEnumerator IMMDeviceEnumerator;
#endif
#ifndef __IMMDeviceActivator_FWD_DEFINED__
#define __IMMDeviceActivator_FWD_DEFINED__
typedef interface IMMDeviceActivator IMMDeviceActivator;
#endif
#ifndef __IActivateAudioInterfaceCompletionHandler_FWD_DEFINED__
#define __IActivateAudioInterfaceCompletionHandler_FWD_DEFINED__
typedef interface IActivateAudioInterfaceCompletionHandler IActivateAudioInterfaceCompletionHandler;
#endif
#ifndef __IActivateAudioInterfaceAsyncOperation_FWD_DEFINED__
#define __IActivateAudioInterfaceAsyncOperation_FWD_DEFINED__
typedef interface IActivateAudioInterfaceAsyncOperation IActivateAudioInterfaceAsyncOperation;
#endif
#ifndef __MMDeviceEnumerator_FWD_DEFINED__
#define __MMDeviceEnumerator_FWD_DEFINED__
typedef struct MMDeviceEnumerator MMDeviceEnumerator;
#endif
#include <unknwn.h>
#include <propsys.h>
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#define E_NOTFOUND HRESULT_FROM_WIN32(ERROR_NOT_FOUND)
#define E_UNSUPPORTED_TYPE HRESULT_FROM_WIN32(ERROR_UNSUPPORTED_TYPE)
#define DEVICE_STATE_ACTIVE      0x00000001
#define DEVICE_STATE_DISABLED    0x00000002
#define DEVICE_STATE_NOTPRESENT  0x00000004
#define DEVICE_STATE_UNPLUGGED   0x00000008
#define DEVICE_STATEMASK_ALL     0x0000000f
#ifdef DEFINE_PROPERTYKEY
#undef DEFINE_PROPERTYKEY
#endif
#ifdef INITGUID
#define DEFINE_PROPERTYKEY(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8, pid) extern const PROPERTYKEY name = { { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }, pid }
#else
#define DEFINE_PROPERTYKEY(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8, pid) extern const PROPERTYKEY name
#endif
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_FormFactor, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 0);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_ControlPanelPageProvider, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 1);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_Association, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 2);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_PhysicalSpeakers, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 3);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_GUID, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 4);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_Disable_SysFx, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 5);
#define ENDPOINT_SYSFX_ENABLED          0x00000000
#define ENDPOINT_SYSFX_DISABLED         0x00000001
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_FullRangeSpeakers, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 6);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_Supports_EventDriven_Mode, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 7);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_JackSubType, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 8);
DEFINE_PROPERTYKEY(PKEY_AudioEngine_DeviceFormat, 0xf19f064d, 0x82c, 0x4e27, 0xbc, 0x73, 0x68, 0x82, 0xa1, 0xbb, 0x8e, 0x4c, 0);
DEFINE_PROPERTYKEY(PKEY_AudioEngine_OEMFormat, 0xe4870e26, 0x3cc5, 0x4cd2, 0xba, 0x46, 0xca, 0xa, 0x9a, 0x70, 0xed, 0x4, 3);
typedef struct tagDIRECTX_AUDIO_ACTIVATION_PARAMS
{
	DWORD cbDirectXAudioActivationParams;
	GUID guidAudioSession;
	DWORD dwAudioStreamFlags;
}DIRECTX_AUDIO_ACTIVATION_PARAMS;
typedef struct tagDIRECTX_AUDIO_ACTIVATION_PARAMS *PDIRECTX_AUDIO_ACTIVATION_PARAMS;
typedef enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001
{
	eRender = 0,
	eCapture = (eRender + 1),
	eAll = (eCapture + 1),
	EDataFlow_enum_count = (eAll + 1)
} EDataFlow;
typedef enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002
{
	eConsole = 0,
	eMultimedia = (eConsole + 1),
	eCommunications = (eMultimedia + 1),
	ERole_enum_count = (eCommunications + 1)
} ERole;
typedef enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003
{
	RemoteNetworkDevice = 0,
	Speakers   = (RemoteNetworkDevice + 1),
	LineLevel  = (Speakers + 1),
	Headphones = (LineLevel + 1),
	Microphone = (Headphones + 1),
	Headset    = (Microphone + 1),
	Handset    = (Headset + 1),
	UnknownDigitalPassthrough = (Handset + 1),
	SPDIF = (UnknownDigitalPassthrough + 1),
	DigitalAudioDisplayDevice = (SPDIF + 1),
	UnknownFormFactor = (DigitalAudioDisplayDevice + 1),
	EndpointFormFactor_enum_count = (UnknownFormFactor + 1)
} EndpointFormFactor;
#define HDMI     DigitalAudioDisplayDevice
DEFINE_GUID(DEVINTERFACE_AUDIO_RENDER , 0xe6327cad, 0xdcec, 0x4949, 0xae, 0x8a, 0x99, 0x1e, 0x97, 0x6a, 0x79, 0xd2);
DEFINE_GUID(DEVINTERFACE_AUDIO_CAPTURE, 0x2eef81be, 0x33fa, 0x4800, 0x96, 0x70, 0x1c, 0xd4, 0x74, 0x97, 0x2c, 0x3f);
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0000_v0_0_s_ifspec;
#ifndef __IMMNotificationClient_INTERFACE_DEFINED__
#define __IMMNotificationClient_INTERFACE_DEFINED__
DEFINE_GUID (IID_IMMNotificationClient, 0x7991eec9, 0x7e89, 0x4d85, 0x83, 0x90, 0x6c, 0x70, 0x3c, 0xec, 0x60, 0xc0);
typedef struct IMMNotificationClientVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMMNotificationClient * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IMMNotificationClient * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IMMNotificationClient * This);
	HRESULT(STDMETHODCALLTYPE * OnDeviceStateChanged) (IMMNotificationClient * This, LPCWSTR pwstrDeviceId, DWORD dwNewState);
	HRESULT(STDMETHODCALLTYPE * OnDeviceAdded) (IMMNotificationClient * This, LPCWSTR pwstrDeviceId);
	HRESULT(STDMETHODCALLTYPE * OnDeviceRemoved) (IMMNotificationClient * This, LPCWSTR pwstrDeviceId);
	HRESULT(STDMETHODCALLTYPE * OnDefaultDeviceChanged) (IMMNotificationClient * This, EDataFlow flow, ERole role, LPCWSTR pwstrDefaultDeviceId);
	HRESULT(STDMETHODCALLTYPE * OnPropertyValueChanged) (IMMNotificationClient * This, LPCWSTR pwstrDeviceId, const PROPERTYKEY key);
	END_INTERFACE
} IMMNotificationClientVtbl;
interface IMMNotificationClient { CONST_VTBL struct IMMNotificationClientVtbl *lpVtbl; };
#ifdef COBJMACROS
#define IMMNotificationClient_QueryInterface(This,riid,ppvObject)	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMMNotificationClient_AddRef(This)							( (This)->lpVtbl -> AddRef(This) )
#define IMMNotificationClient_Release(This)							( (This)->lpVtbl -> Release(This) )
#define IMMNotificationClient_OnDeviceStateChanged(This,pwstrDeviceId,dwNewState)	( (This)->lpVtbl -> OnDeviceStateChanged(This,pwstrDeviceId,dwNewState) )
#define IMMNotificationClient_OnDeviceAdded(This,pwstrDeviceId)		( (This)->lpVtbl -> OnDeviceAdded(This,pwstrDeviceId) )
#define IMMNotificationClient_OnDeviceRemoved(This,pwstrDeviceId)	( (This)->lpVtbl -> OnDeviceRemoved(This,pwstrDeviceId) )
#define IMMNotificationClient_OnDefaultDeviceChanged(This,flow,role,pwstrDefaultDeviceId)	( (This)->lpVtbl -> OnDefaultDeviceChanged(This,flow,role,pwstrDefaultDeviceId) )
#define IMMNotificationClient_OnPropertyValueChanged(This,pwstrDeviceId,key)	( (This)->lpVtbl -> OnPropertyValueChanged(This,pwstrDeviceId,key) )
#endif
#endif
#ifndef __IMMDevice_INTERFACE_DEFINED__
#define __IMMDevice_INTERFACE_DEFINED__
DEFINE_GUID (IID_IMMDevice, 0xd666063f, 0x1587, 0x4e43, 0x81, 0xf1, 0xb9, 0x48, 0xe8, 0x07, 0x36, 0x3f);
typedef struct IMMDeviceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMMDevice * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IMMDevice * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IMMDevice * This);
	HRESULT(STDMETHODCALLTYPE * Activate) (IMMDevice * This, REFIID iid, DWORD dwClsCtx, PROPVARIANT * pActivationParams, void **ppInterface);
	HRESULT(STDMETHODCALLTYPE * OpenPropertyStore) (IMMDevice * This, DWORD stgmAccess, IPropertyStore ** ppProperties);
	HRESULT(STDMETHODCALLTYPE * GetId) (IMMDevice * This, LPWSTR * ppstrId);
	HRESULT(STDMETHODCALLTYPE * GetState) (IMMDevice * This, DWORD * pdwState);
	END_INTERFACE
} IMMDeviceVtbl;
interface IMMDevice { CONST_VTBL struct IMMDeviceVtbl *lpVtbl; };
#ifdef COBJMACROS
#define IMMDevice_QueryInterface(This,riid,ppvObject)	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMMDevice_AddRef(This)							( (This)->lpVtbl -> AddRef(This) )
#define IMMDevice_Release(This)							( (This)->lpVtbl -> Release(This) )
#define IMMDevice_Activate(This,iid,dwClsCtx,pActivationParams,ppInterface)	( (This)->lpVtbl -> Activate(This,iid,dwClsCtx,pActivationParams,ppInterface) )
#define IMMDevice_OpenPropertyStore(This,stgmAccess,ppProperties)			( (This)->lpVtbl -> OpenPropertyStore(This,stgmAccess,ppProperties) )
#define IMMDevice_GetId(This,ppstrId)					( (This)->lpVtbl -> GetId(This,ppstrId) )
#define IMMDevice_GetState(This,pdwState)				( (This)->lpVtbl -> GetState(This,pdwState) )
#endif
#endif
#ifndef __IMMDeviceCollection_INTERFACE_DEFINED__
#define __IMMDeviceCollection_INTERFACE_DEFINED__
DEFINE_GUID (IID_IMMDeviceCollection, 0x0bd7a1be, 0x7a1a, 0x44db, 0x83, 0x97, 0xcc, 0x53, 0x92, 0x38, 0x7b, 0x5e);
typedef struct IMMDeviceCollectionVtbl
{ 
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMMDeviceCollection * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IMMDeviceCollection * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IMMDeviceCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IMMDeviceCollection * This, UINT * pcDevices);
	HRESULT(STDMETHODCALLTYPE * Item) (IMMDeviceCollection * This, UINT nDevice, IMMDevice ** ppDevice);
	END_INTERFACE
} IMMDeviceCollectionVtbl;
interface IMMDeviceCollection { CONST_VTBL struct IMMDeviceCollectionVtbl *lpVtbl; };
#ifdef COBJMACROS
#define IMMDeviceCollection_QueryInterface(This,riid,ppvObject)	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMMDeviceCollection_AddRef(This)						( (This)->lpVtbl -> AddRef(This) )
#define IMMDeviceCollection_Release(This)						( (This)->lpVtbl -> Release(This) )
#define IMMDeviceCollection_GetCount(This,pcDevices)			( (This)->lpVtbl -> GetCount(This,pcDevices) )
#define IMMDeviceCollection_Item(This,nDevice,ppDevice)			( (This)->lpVtbl -> Item(This,nDevice,ppDevice) )
#endif
#endif
#ifndef __IMMEndpoint_INTERFACE_DEFINED__
#define __IMMEndpoint_INTERFACE_DEFINED__
DEFINE_GUID(IID_IMMEndpoint, 0x1be09788, 0x6894, 0x4089, 0x85, 0x86, 0x9a, 0x2a, 0x6c, 0x26, 0x5a, 0xc5);
typedef struct IMMEndpointVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMMEndpoint * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IMMEndpoint * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IMMEndpoint * This);
	HRESULT(STDMETHODCALLTYPE * GetDataFlow) (IMMEndpoint * This, EDataFlow * pDataFlow);
	END_INTERFACE
} IMMEndpointVtbl;
interface IMMEndpoint { CONST_VTBL struct IMMEndpointVtbl *lpVtbl; };
#ifdef COBJMACROS
#define IMMEndpoint_QueryInterface(This,riid,ppvObject)	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMMEndpoint_AddRef(This)						( (This)->lpVtbl -> AddRef(This) )
#define IMMEndpoint_Release(This)						( (This)->lpVtbl -> Release(This) )
#define IMMEndpoint_GetDataFlow(This,pDataFlow)			( (This)->lpVtbl -> GetDataFlow(This,pDataFlow) )
#endif
#endif
#ifndef __IMMDeviceEnumerator_INTERFACE_DEFINED__
#define __IMMDeviceEnumerator_INTERFACE_DEFINED__
DEFINE_GUID(IID_IMMDeviceEnumerator, 0xa95664d2, 0x9614, 0x4f35, 0xa7, 0x46, 0xde, 0x8d, 0xb6, 0x36, 0x17, 0xe6);
typedef struct IMMDeviceEnumeratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMMDeviceEnumerator * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IMMDeviceEnumerator * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IMMDeviceEnumerator * This);
	HRESULT(STDMETHODCALLTYPE * EnumAudioEndpoints) (IMMDeviceEnumerator * This, EDataFlow dataFlow, DWORD dwStateMask, IMMDeviceCollection ** ppDevices);
	HRESULT(STDMETHODCALLTYPE * GetDefaultAudioEndpoint) (IMMDeviceEnumerator * This, EDataFlow dataFlow, ERole role, IMMDevice ** ppEndpoint);
	HRESULT(STDMETHODCALLTYPE * GetDevice) (IMMDeviceEnumerator * This, LPCWSTR pwstrId, IMMDevice ** ppDevice);
	HRESULT(STDMETHODCALLTYPE * RegisterEndpointNotificationCallback) (IMMDeviceEnumerator * This, IMMNotificationClient * pClient);
	HRESULT(STDMETHODCALLTYPE * UnregisterEndpointNotificationCallback) (IMMDeviceEnumerator * This, IMMNotificationClient * pClient);
	END_INTERFACE
} IMMDeviceEnumeratorVtbl;
interface IMMDeviceEnumerator { CONST_VTBL struct IMMDeviceEnumeratorVtbl *lpVtbl; };
#ifdef COBJMACROS
#define IMMDeviceEnumerator_QueryInterface(This,riid,ppvObject)	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMMDeviceEnumerator_AddRef(This)						( (This)->lpVtbl -> AddRef(This) )
#define IMMDeviceEnumerator_Release(This)						( (This)->lpVtbl -> Release(This) )
#define IMMDeviceEnumerator_EnumAudioEndpoints(This,dataFlow,dwStateMask,ppDevices)	( (This)->lpVtbl -> EnumAudioEndpoints(This,dataFlow,dwStateMask,ppDevices) )
#define IMMDeviceEnumerator_GetDefaultAudioEndpoint(This,dataFlow,role,ppEndpoint)	( (This)->lpVtbl -> GetDefaultAudioEndpoint(This,dataFlow,role,ppEndpoint) )
#define IMMDeviceEnumerator_GetDevice(This,pwstrId,ppDevice)	( (This)->lpVtbl -> GetDevice(This,pwstrId,ppDevice) )
#define IMMDeviceEnumerator_RegisterEndpointNotificationCallback(This,pClient)		( (This)->lpVtbl -> RegisterEndpointNotificationCallback(This,pClient) )
#define IMMDeviceEnumerator_UnregisterEndpointNotificationCallback(This,pClient)	( (This)->lpVtbl -> UnregisterEndpointNotificationCallback(This,pClient) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0005_v0_0_s_ifspec;
#ifndef __IMMDeviceActivator_INTERFACE_DEFINED__
#define __IMMDeviceActivator_INTERFACE_DEFINED__
DEFINE_GUID(IID_IMMDeviceActivator, 0x3b0d0ea4,0xd0a9, 0x4b0e, 0x93, 0x5b, 0x09, 0x51, 0x67, 0x46, 0xfa, 0xc0);
typedef struct IMMDeviceActivatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMMDeviceActivator * This, REFIID riid, void **ppvObject);
    ULONG  (STDMETHODCALLTYPE * AddRef) (IMMDeviceActivator * This);
    ULONG  (STDMETHODCALLTYPE * Release) (IMMDeviceActivator * This);
    HRESULT(STDMETHODCALLTYPE * Activate) (IMMDeviceActivator * This, REFIID iid, IMMDevice * pDevice, PROPVARIANT * pActivationParams, void **ppInterface);
	END_INTERFACE
} IMMDeviceActivatorVtbl;
interface IMMDeviceActivator { CONST_VTBL struct IMMDeviceActivatorVtbl *lpVtbl; };
#ifdef COBJMACROS
#define IMMDeviceActivator_QueryInterface(This,riid,ppvObject)	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMMDeviceActivator_AddRef(This)							( (This)->lpVtbl -> AddRef(This) )
#define IMMDeviceActivator_Release(This)						( (This)->lpVtbl -> Release(This) )
#define IMMDeviceActivator_Activate(This,iid,pDevice,pActivationParams,ppInterface)	( (This)->lpVtbl -> Activate(This,iid,pDevice,pActivationParams,ppInterface) )
#endif
#endif
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0006_v0_0_s_ifspec;
#ifndef __IActivateAudioInterfaceCompletionHandler_INTERFACE_DEFINED__
#define __IActivateAudioInterfaceCompletionHandler_INTERFACE_DEFINED__
DEFINE_GUID(IID_IActivateAudioInterfaceCompletionHandler, 0x41d949ab, 0x9862, 0x444a, 0x80, 0xf6, 0xc2, 0x61, 0x33, 0x4d, 0xa5, 0xeb);
typedef struct IActivateAudioInterfaceCompletionHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActivateAudioInterfaceCompletionHandler * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IActivateAudioInterfaceCompletionHandler * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IActivateAudioInterfaceCompletionHandler * This);
	HRESULT(STDMETHODCALLTYPE * ActivateCompleted) (IActivateAudioInterfaceCompletionHandler * This, IActivateAudioInterfaceAsyncOperation * activateOperation);
	END_INTERFACE
} IActivateAudioInterfaceCompletionHandlerVtbl;
interface IActivateAudioInterfaceCompletionHandler { CONST_VTBL struct IActivateAudioInterfaceCompletionHandlerVtbl *lpVtbl; };
#ifdef COBJMACROS
#define IActivateAudioInterfaceCompletionHandler_QueryInterface(This,riid,ppvObject)	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActivateAudioInterfaceCompletionHandler_AddRef(This)	( (This)->lpVtbl -> AddRef(This) )
#define IActivateAudioInterfaceCompletionHandler_Release(This)	( (This)->lpVtbl -> Release(This) )
#define IActivateAudioInterfaceCompletionHandler_ActivateCompleted(This,activateOperation)	( (This)->lpVtbl -> ActivateCompleted(This,activateOperation) )
#endif
#endif
#ifndef __IActivateAudioInterfaceAsyncOperation_INTERFACE_DEFINED__
#define __IActivateAudioInterfaceAsyncOperation_INTERFACE_DEFINED__
DEFINE_GUID(IID_IActivateAudioInterfaceAsyncOperation, 0x72a22d78, 0xcde4, 0x431d, 0xb8, 0xcc, 0x84, 0x3a, 0x71, 0x19, 0x9b, 0x6d);
typedef struct IActivateAudioInterfaceAsyncOperationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActivateAudioInterfaceAsyncOperation * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IActivateAudioInterfaceAsyncOperation * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IActivateAudioInterfaceAsyncOperation * This);
	HRESULT(STDMETHODCALLTYPE * GetActivateResult) (IActivateAudioInterfaceAsyncOperation * This, HRESULT * activateResult, IUnknown ** activatedInterface);
	END_INTERFACE
} IActivateAudioInterfaceAsyncOperationVtbl;
interface IActivateAudioInterfaceAsyncOperation { CONST_VTBL struct IActivateAudioInterfaceAsyncOperationVtbl *lpVtbl; };
#ifdef COBJMACROS
#define IActivateAudioInterfaceAsyncOperation_QueryInterface(This,riid,ppvObject)	( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActivateAudioInterfaceAsyncOperation_AddRef(This)	( (This)->lpVtbl -> AddRef(This) )
#define IActivateAudioInterfaceAsyncOperation_Release(This)	( (This)->lpVtbl -> Release(This) )
#define IActivateAudioInterfaceAsyncOperation_GetActivateResult(This,activateResult,activatedInterface)	( (This)->lpVtbl -> GetActivateResult(This,activateResult,activatedInterface) )
#endif
#endif
STDAPI ActivateAudioInterfaceAsync(LPCWSTR deviceInterfacePath, REFIID riid, PROPVARIANT *activationParams, IActivateAudioInterfaceCompletionHandler *completionHandler, IActivateAudioInterfaceAsyncOperation **activationOperation);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct __MIDL___MIDL_itf_mmdeviceapi_0000_0008_0001 {
	LPARAM AddPageParam;
	IMMDevice *pEndpoint;
	IMMDevice *pPnpInterface;
	IMMDevice *pPnpDevnode;
}
AudioExtensionParams;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0008_v0_0_s_ifspec;
#ifndef __MMDeviceAPILib_LIBRARY_DEFINED__
#define __MMDeviceAPILib_LIBRARY_DEFINED__
extern const IID LIBID_MMDeviceAPILib;
extern const CLSID CLSID_MMDeviceEnumerator={0xbcde0395,0x467c,0x8e3d,0xc4,0x57,0x92,0x91,0x69,0x2e};
#endif
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0009_v0_0_s_ifspec;
#endif
