/*+@@file@@----------------------------------------------------------------*//*!
 \file		dpnathlp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 14:09:33 2016
 \date		Modified on Wed Jul  6 14:09:33 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __DPNATHLP_H__
#define __DPNATHLP_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <ole2.h>
#ifndef DPNATHLP_EXPORTS
#define DPNATHLPAPI DECLSPEC_IMPORT
#else
#define DPNATHLPAPI
#endif
DEFINE_GUID(CLSID_DirectPlayNATHelpUPnP, 0xb9c2e9c4, 0x68c1, 0x4d42, 0xa7, 0xa1, 0xe7, 0x6a, 0x26, 0x98, 0x2a, 0xd6);
DEFINE_GUID(CLSID_DirectPlayNATHelpPAST, 0x963ab779, 0x16a1, 0x477c, 0xa3, 0x6d, 0xcb, 0x5e, 0x71, 0x19, 0x38, 0xf7);
DEFINE_GUID(IID_IDirectPlayNATHelp, 0x3b743591, 0x791b, 0x4864, 0x9e, 0xe3, 0x55, 0xe8, 0x89, 0x40, 0x97, 0x81);
typedef struct IDirectPlayNATHelp *PDIRECTPLAYNATHELP;
typedef DWORD_PTR DPNHHANDLE, *PDPNHHANDLE;
#define DPNH_MAX_SIMULTANEOUS_PORTS		16
#define DPNHINITIALIZE_DISABLEGATEWAYSUPPORT				0x01
#define DPNHINITIALIZE_DISABLELOCALFIREWALLSUPPORT			0x02
#define DPNHGETCAPS_UPDATESERVERSTATUS						0x01
#define DPNHREGISTERPORTS_TCP								0x01
#define DPNHREGISTERPORTS_FIXEDPORTS						0x02
#define DPNHREGISTERPORTS_SHAREDPORTS						0x04
#define DPNHGETREGISTEREDADDRESSES_LOCALFIREWALLREMAPONLY	0x01
#define DPNHQUERYADDRESS_TCP								0x01
#define DPNHQUERYADDRESS_CACHEFOUND							0x02
#define DPNHQUERYADDRESS_CACHENOTFOUND						0x04
#define DPNHQUERYADDRESS_CHECKFORPRIVATEBUTUNMAPPED			0x08
#define DPNHCAPSFLAG_LOCALFIREWALLPRESENT		0x01
#define DPNHCAPSFLAG_GATEWAYPRESENT				0x02
#define DPNHCAPSFLAG_GATEWAYISLOCAL				0x04
#define DPNHCAPSFLAG_PUBLICADDRESSAVAILABLE		0x08
#define DPNHCAPSFLAG_NOTALLSUPPORTACTIVENOTIFY	0x10
typedef struct _DPNHCAPS
{
	DWORD	dwSize;
	DWORD	dwFlags;
	DWORD	dwNumRegisteredPorts;
	DWORD	dwMinLeaseTimeRemaining;
	DWORD	dwRecommendedGetCapsInterval;
} DPNHCAPS, * PDPNHCAPS;
#define DPNHADDRESSTYPE_TCP				0x01
#define DPNHADDRESSTYPE_FIXEDPORTS		0x02
#define DPNHADDRESSTYPE_SHAREDPORTS		0x04
#define DPNHADDRESSTYPE_LOCALFIREWALL	0x08
#define DPNHADDRESSTYPE_GATEWAY			0x10
#define DPNHADDRESSTYPE_GATEWAYISLOCAL	0x20
typedef HRESULT (WINAPI * PFN_DIRECTPLAYNATHELPCREATE)(const GUID * pIID, void ** ppvInterface);
#undef INTERFACE
#define INTERFACE IDirectPlayNATHelp
DECLARE_INTERFACE_(IDirectPlayNATHelp, IUnknown)
{
	STDMETHOD(QueryInterface)				(THIS_ REFIID riid, LPVOID * ppvObj) PURE;
	STDMETHOD_(ULONG,AddRef)				(THIS) PURE;
	STDMETHOD_(ULONG,Release)				(THIS) PURE;
	STDMETHOD(Initialize)					(THIS_ const DWORD dwFlags) PURE;
	STDMETHOD(Close)						(THIS_ const DWORD dwFlags) PURE;
	STDMETHOD(GetCaps)						(THIS_ DPNHCAPS * const dpnhcaps, const DWORD dwFlags) PURE;
	STDMETHOD(RegisterPorts)				(THIS_ const SOCKADDR * const aLocalAddresses, const DWORD dwAddressesSize, const DWORD dwNumAddresses, const DWORD dwLeaseTime, DPNHHANDLE * const phRegisteredPorts, const DWORD dwFlags) PURE;
	STDMETHOD(GetRegisteredAddresses)		(THIS_ const DPNHHANDLE hRegisteredPorts, SOCKADDR * const paPublicAddresses, DWORD * const pdwPublicAddressesSize, DWORD * const pdwAddressTypeFlags, DWORD * const pdwLeaseTimeRemaining, const DWORD dwFlags) PURE;
	STDMETHOD(DeregisterPorts)				(THIS_ const DPNHHANDLE hRegisteredPorts, const DWORD dwFlags) PURE;
	STDMETHOD(QueryAddress)					(THIS_ const SOCKADDR * const pSourceAddress, const SOCKADDR * const pQueryAddress, SOCKADDR * const pResponseAddress, const int iAddressesSize, const DWORD dwFlags) PURE;
	STDMETHOD(SetAlertEvent)				(THIS_ const HANDLE hEvent, const DWORD dwFlags) PURE;
	STDMETHOD(SetAlertIOCompletionPort)		(THIS_ const HANDLE hIOCompletionPort, const DWORD dwCompletionKey, const DWORD dwNumConcurrentThreads, const DWORD dwFlags) PURE;
	STDMETHOD(ExtendRegisteredPortsLease)	(THIS_ const DPNHHANDLE hRegisteredPorts, const DWORD dwLeaseTime, const DWORD dwFlags) PURE;
};
#define	IDirectPlayNATHelp_QueryInterface(p,a,b)					(p)->QueryInterface(a,b)
#define	IDirectPlayNATHelp_AddRef(p)								(p)->AddRef()
#define	IDirectPlayNATHelp_Release(p)								(p)->Release()
#define	IDirectPlayNATHelp_Initialize(p,a)							(p)->Initialize(a)
#define	IDirectPlayNATHelp_Close(p,a)								(p)->Close(a)
#define	IDirectPlayNATHelp_GetCaps(p,a,b)							(p)->GetCaps(a,b)
#define	IDirectPlayNATHelp_RegisterPorts(p,a,b,c,d,e,f)				(p)->RegisterPorts(a,b,c,d,e,f)
#define	IDirectPlayNATHelp_GetRegisteredAddresses(p,a,b,c,d,e,f)	(p)->GetRegisteredAddresses(a,b,c,d,e,f)
#define	IDirectPlayNATHelp_DeregisterPorts(p,a,b)					(p)->DeregisterPorts(a,b)
#define	IDirectPlayNATHelp_QueryAddress(p,a,b,c,d,e)				(p)->QueryAddress(a,b,c,d,e)
#define	IDirectPlayNATHelp_SetAlertEvent(p,a,b)						(p)->SetAlertEvent(a,b)
#define	IDirectPlayNATHelp_SetAlertIOCompletionPort(p,a,b,c,d)		(p)->SetAlertIOCompletionPort(a,b,c,d)
#define	IDirectPlayNATHelp_ExtendRegisteredPortsLease(p,a,b,c)		(p)->ExtendRegisteredPortsLease(a,b,c)
#define _DPNH_FACILITY_CODE					0x015
#define _DPNH_HRESULT_BASE					0xF000
#define MAKE_DPNHSUCCESS(code)				MAKE_HRESULT(0, _DPNH_FACILITY_CODE, (code + _DPNH_HRESULT_BASE))
#define MAKE_DPNHFAILURE(code)				MAKE_HRESULT(1, _DPNH_FACILITY_CODE, (code + _DPNH_HRESULT_BASE))
#define DPNH_OK								S_OK
#define DPNHSUCCESS_ADDRESSESCHANGED		MAKE_DPNHSUCCESS(0x10)
#define DPNHERR_ALREADYINITIALIZED			MAKE_DPNHFAILURE(0x10)
#define DPNHERR_BUFFERTOOSMALL				MAKE_DPNHFAILURE(0x20)
#define DPNHERR_GENERIC						E_FAIL
#define DPNHERR_INVALIDFLAGS				MAKE_DPNHFAILURE(0x30)
#define DPNHERR_INVALIDOBJECT				MAKE_DPNHFAILURE(0x40)
#define DPNHERR_INVALIDPARAM				E_INVALIDARG
#define DPNHERR_INVALIDPOINTER				E_POINTER
#define DPNHERR_NOMAPPING					MAKE_DPNHFAILURE(0x50)
#define DPNHERR_NOMAPPINGBUTPRIVATE			MAKE_DPNHFAILURE(0x60)
#define DPNHERR_NOTINITIALIZED				MAKE_DPNHFAILURE(0x70)
#define DPNHERR_OUTOFMEMORY					E_OUTOFMEMORY
#define DPNHERR_PORTALREADYREGISTERED		MAKE_DPNHFAILURE(0x80)
#define DPNHERR_PORTUNAVAILABLE				MAKE_DPNHFAILURE(0x90)
#define DPNHERR_REENTRANT					MAKE_DPNHFAILURE(0x95)
#define DPNHERR_SERVERNOTAVAILABLE			MAKE_DPNHFAILURE(0xA0)
#define DPNHERR_UPDATESERVERSTATUS			MAKE_DPNHFAILURE(0xC0)
#endif
