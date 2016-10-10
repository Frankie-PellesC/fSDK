/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmdrmdeviceapp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 14:42:26 2016
 \date		Modified on Mon Sep 19 14:42:26 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
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
#ifndef __wmdrmdeviceapp_h__
#define __wmdrmdeviceapp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMDRMDeviceApp_FWD_DEFINED__
#define __IWMDRMDeviceApp_FWD_DEFINED__
typedef interface IWMDRMDeviceApp IWMDRMDeviceApp;
#endif
#ifndef __IWMDRMDeviceApp2_FWD_DEFINED__
#define __IWMDRMDeviceApp2_FWD_DEFINED__
typedef interface IWMDRMDeviceApp2 IWMDRMDeviceApp2;
#endif
#ifndef __WMDRMDeviceApp_FWD_DEFINED__
#define __WMDRMDeviceApp_FWD_DEFINED__
typedef struct WMDRMDeviceApp WMDRMDeviceApp;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "wmdm.h"
void *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void *);
#include <mswmdm.h>
#define WMDRM_DEVICE_ISWMDRM                 0x00000001L
#define WMDRM_DEVICE_NEEDCLOCK               0x00000002L
#define WMDRM_DEVICE_REVOKED                 0x00000004L
#define WMDRM_CLIENT_NEEDINDIV               0x00000008L
#define WMDRM_DEVICE_REFRESHCLOCK            0x00000010L
#define WMDRM_QUERY_DEVICE_ISWMDRM           0x00000001L
#define WMDRM_QUERY_DEVICE_CLOCKSTATUS       0x00000002L
#define WMDRM_QUERY_DEVICE_ISREVOKED         0x00000004L
#define WMDRM_QUERY_CLIENT_INDIVSTATUS       0x00000008L
#define WMDRM_METER_RESPONSE_ALL             0x00000000L
#define WMDRM_METER_RESPONSE_PARTIAL         0x00000001L
extern RPC_IF_HANDLE __MIDL_itf_wmdrmdeviceapp_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmdrmdeviceapp_0000_v0_0_s_ifspec;
#ifndef __IWMDRMDeviceApp_INTERFACE_DEFINED__
#define __IWMDRMDeviceApp_INTERFACE_DEFINED__
extern const IID IID_IWMDRMDeviceApp;
typedef struct IWMDRMDeviceAppVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMDeviceApp * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMDeviceApp * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMDeviceApp * This);
	HRESULT(STDMETHODCALLTYPE * GenerateMeterChallenge) (IWMDRMDeviceApp * This, IWMDMDevice * pDevice, BSTR bstrMeterCert, BSTR * pbstrMeterURL, BSTR * pbstrMeterData);
	HRESULT(STDMETHODCALLTYPE * ProcessMeterResponse) (IWMDRMDeviceApp * This, IWMDMDevice * pDevice, BYTE * pbResponse, DWORD cbResponse, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * QueryDeviceStatus) (IWMDRMDeviceApp * This, IWMDMDevice * pDevice, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * AcquireDeviceData) (IWMDRMDeviceApp * This, IWMDMDevice * pDevice, IWMDMProgress3 * pProgressCallback, DWORD dwFlags, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * SynchronizeLicenses) (IWMDRMDeviceApp * This, IWMDMDevice * pDevice, IWMDMProgress3 * pProgressCallback, DWORD cMinCountThreshold, DWORD cMinHoursThreshold);
	END_INTERFACE
}  IWMDRMDeviceAppVtbl;
interface IWMDRMDeviceApp
{
	CONST_VTBL struct IWMDRMDeviceAppVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMDeviceApp_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IWMDRMDeviceApp_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IWMDRMDeviceApp_Release(This) (This)->lpVtbl -> Release(This)
#define IWMDRMDeviceApp_GenerateMeterChallenge(This,pDevice,bstrMeterCert,pbstrMeterURL,pbstrMeterData) (This)->lpVtbl -> GenerateMeterChallenge(This,pDevice,bstrMeterCert,pbstrMeterURL,pbstrMeterData)
#define IWMDRMDeviceApp_ProcessMeterResponse(This,pDevice,pbResponse,cbResponse,pdwFlags) (This)->lpVtbl -> ProcessMeterResponse(This,pDevice,pbResponse,cbResponse,pdwFlags)
#define IWMDRMDeviceApp_QueryDeviceStatus(This,pDevice,pdwStatus) (This)->lpVtbl -> QueryDeviceStatus(This,pDevice,pdwStatus)
#define IWMDRMDeviceApp_AcquireDeviceData(This,pDevice,pProgressCallback,dwFlags,pdwStatus) (This)->lpVtbl -> AcquireDeviceData(This,pDevice,pProgressCallback,dwFlags,pdwStatus)
#define IWMDRMDeviceApp_SynchronizeLicenses(This,pDevice,pProgressCallback,cMinCountThreshold,cMinHoursThreshold) (This)->lpVtbl -> SynchronizeLicenses(This,pDevice,pProgressCallback,cMinCountThreshold,cMinHoursThreshold)
#endif
HRESULT STDMETHODCALLTYPE IWMDRMDeviceApp_GenerateMeterChallenge_Proxy(IWMDRMDeviceApp *This, IWMDMDevice *pDevice, BSTR bstrMeterCert, BSTR *pbstrMeterURL, BSTR *pbstrMeterData);
void __RPC_STUB IWMDRMDeviceApp_GenerateMeterChallenge_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMDRMDeviceApp_ProcessMeterResponse_Proxy(IWMDRMDeviceApp *This, IWMDMDevice *pDevice, BYTE *pbResponse, DWORD cbResponse, DWORD *pdwFlags);
void __RPC_STUB IWMDRMDeviceApp_ProcessMeterResponse_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMDRMDeviceApp_QueryDeviceStatus_Proxy(IWMDRMDeviceApp *This, IWMDMDevice *pDevice, DWORD *pdwStatus);
void __RPC_STUB IWMDRMDeviceApp_QueryDeviceStatus_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMDRMDeviceApp_AcquireDeviceData_Proxy(IWMDRMDeviceApp *This, IWMDMDevice *pDevice, IWMDMProgress3 *pProgressCallback, DWORD dwFlags, DWORD *pdwStatus);
void __RPC_STUB IWMDRMDeviceApp_AcquireDeviceData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IWMDRMDeviceApp_SynchronizeLicenses_Proxy(IWMDRMDeviceApp *This, IWMDMDevice *pDevice, IWMDMProgress3 *pProgressCallback, DWORD cMinCountThreshold, DWORD cMinHoursThreshold);
void __RPC_STUB IWMDRMDeviceApp_SynchronizeLicenses_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IWMDRMDeviceApp2_INTERFACE_DEFINED__
#define __IWMDRMDeviceApp2_INTERFACE_DEFINED__
extern const IID IID_IWMDRMDeviceApp2;
typedef struct IWMDRMDeviceApp2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMDRMDeviceApp2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMDRMDeviceApp2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMDRMDeviceApp2 * This);
	HRESULT(STDMETHODCALLTYPE * GenerateMeterChallenge) (IWMDRMDeviceApp2 * This, IWMDMDevice * pDevice, BSTR bstrMeterCert, BSTR * pbstrMeterURL, BSTR * pbstrMeterData);
	HRESULT(STDMETHODCALLTYPE * ProcessMeterResponse) (IWMDRMDeviceApp2 * This, IWMDMDevice * pDevice, BYTE * pbResponse, DWORD cbResponse, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * QueryDeviceStatus) (IWMDRMDeviceApp2 * This, IWMDMDevice * pDevice, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * AcquireDeviceData) (IWMDRMDeviceApp2 * This, IWMDMDevice * pDevice, IWMDMProgress3 * pProgressCallback, DWORD dwFlags, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * SynchronizeLicenses) (IWMDRMDeviceApp2 * This, IWMDMDevice * pDevice, IWMDMProgress3 * pProgressCallback, DWORD cMinCountThreshold, DWORD cMinHoursThreshold);
	HRESULT(STDMETHODCALLTYPE * QueryDeviceStatus2) (IWMDRMDeviceApp2 * This, IWMDMDevice * pDevice, DWORD dwFlags, DWORD * pdwStatus);
	END_INTERFACE
}  IWMDRMDeviceApp2Vtbl;
interface IWMDRMDeviceApp2
{
	CONST_VTBL struct IWMDRMDeviceApp2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMDRMDeviceApp2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IWMDRMDeviceApp2_AddRef(This) (This)->lpVtbl -> AddRef(This)
#define IWMDRMDeviceApp2_Release(This) (This)->lpVtbl -> Release(This)
#define IWMDRMDeviceApp2_GenerateMeterChallenge(This,pDevice,bstrMeterCert,pbstrMeterURL,pbstrMeterData) (This)->lpVtbl -> GenerateMeterChallenge(This,pDevice,bstrMeterCert,pbstrMeterURL,pbstrMeterData)
#define IWMDRMDeviceApp2_ProcessMeterResponse(This,pDevice,pbResponse,cbResponse,pdwFlags) (This)->lpVtbl -> ProcessMeterResponse(This,pDevice,pbResponse,cbResponse,pdwFlags)
#define IWMDRMDeviceApp2_QueryDeviceStatus(This,pDevice,pdwStatus) (This)->lpVtbl -> QueryDeviceStatus(This,pDevice,pdwStatus)
#define IWMDRMDeviceApp2_AcquireDeviceData(This,pDevice,pProgressCallback,dwFlags,pdwStatus) (This)->lpVtbl -> AcquireDeviceData(This,pDevice,pProgressCallback,dwFlags,pdwStatus)
#define IWMDRMDeviceApp2_SynchronizeLicenses(This,pDevice,pProgressCallback,cMinCountThreshold,cMinHoursThreshold) (This)->lpVtbl -> SynchronizeLicenses(This,pDevice,pProgressCallback,cMinCountThreshold,cMinHoursThreshold)
#define IWMDRMDeviceApp2_QueryDeviceStatus2(This,pDevice,dwFlags,pdwStatus) (This)->lpVtbl -> QueryDeviceStatus2(This,pDevice,dwFlags,pdwStatus)
#endif
HRESULT STDMETHODCALLTYPE IWMDRMDeviceApp2_QueryDeviceStatus2_Proxy(IWMDRMDeviceApp2 *This, IWMDMDevice *pDevice, DWORD dwFlags, DWORD *pdwStatus);
void __RPC_STUB IWMDRMDeviceApp2_QueryDeviceStatus2_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __WMDRMDeviceAppLib_LIBRARY_DEFINED__
#define __WMDRMDeviceAppLib_LIBRARY_DEFINED__
extern const IID LIBID_WMDRMDeviceAppLib;
extern const CLSID CLSID_WMDRMDeviceApp;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
#endif
