/*+@@file@@----------------------------------------------------------------*//*!
 \file		dvbsiparser.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jun 25 18:51:01 2016
 \date		Modified on Sat Jun 25 18:51:01 2016
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
#ifndef __dvbsiparser_h__
#define __dvbsiparser_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDvbSiParser_FWD_DEFINED__
#define __IDvbSiParser_FWD_DEFINED__
typedef interface IDvbSiParser IDvbSiParser;
#endif
#ifndef __IDvbSiParser2_FWD_DEFINED__
#define __IDvbSiParser2_FWD_DEFINED__
typedef interface IDvbSiParser2 IDvbSiParser2;
#endif
#ifndef __IIsdbSiParser2_FWD_DEFINED__
#define __IIsdbSiParser2_FWD_DEFINED__
typedef interface IIsdbSiParser2 IIsdbSiParser2;
#endif
#ifndef __IDVB_NIT_FWD_DEFINED__
#define __IDVB_NIT_FWD_DEFINED__
typedef interface IDVB_NIT IDVB_NIT;
#endif
#ifndef __IDVB_SDT_FWD_DEFINED__
#define __IDVB_SDT_FWD_DEFINED__
typedef interface IDVB_SDT IDVB_SDT;
#endif
#ifndef __IISDB_SDT_FWD_DEFINED__
#define __IISDB_SDT_FWD_DEFINED__
typedef interface IISDB_SDT IISDB_SDT;
#endif
#ifndef __IDVB_EIT_FWD_DEFINED__
#define __IDVB_EIT_FWD_DEFINED__
typedef interface IDVB_EIT IDVB_EIT;
#endif
#ifndef __IDVB_EIT2_FWD_DEFINED__
#define __IDVB_EIT2_FWD_DEFINED__
typedef interface IDVB_EIT2 IDVB_EIT2;
#endif
#ifndef __IDVB_BAT_FWD_DEFINED__
#define __IDVB_BAT_FWD_DEFINED__
typedef interface IDVB_BAT IDVB_BAT;
#endif
#ifndef __IDVB_RST_FWD_DEFINED__
#define __IDVB_RST_FWD_DEFINED__
typedef interface IDVB_RST IDVB_RST;
#endif
#ifndef __IDVB_ST_FWD_DEFINED__
#define __IDVB_ST_FWD_DEFINED__
typedef interface IDVB_ST IDVB_ST;
#endif
#ifndef __IDVB_TDT_FWD_DEFINED__
#define __IDVB_TDT_FWD_DEFINED__
typedef interface IDVB_TDT IDVB_TDT;
#endif
#ifndef __IDVB_TOT_FWD_DEFINED__
#define __IDVB_TOT_FWD_DEFINED__
typedef interface IDVB_TOT IDVB_TOT;
#endif
#ifndef __IDVB_DIT_FWD_DEFINED__
#define __IDVB_DIT_FWD_DEFINED__
typedef interface IDVB_DIT IDVB_DIT;
#endif
#ifndef __IDVB_SIT_FWD_DEFINED__
#define __IDVB_SIT_FWD_DEFINED__
typedef interface IDVB_SIT IDVB_SIT;
#endif
#ifndef __IISDB_BIT_FWD_DEFINED__
#define __IISDB_BIT_FWD_DEFINED__
typedef interface IISDB_BIT IISDB_BIT;
#endif
#ifndef __IISDB_NBIT_FWD_DEFINED__
#define __IISDB_NBIT_FWD_DEFINED__
typedef interface IISDB_NBIT IISDB_NBIT;
#endif
#ifndef __IISDB_LDT_FWD_DEFINED__
#define __IISDB_LDT_FWD_DEFINED__
typedef interface IISDB_LDT IISDB_LDT;
#endif
#ifndef __IISDB_SDTT_FWD_DEFINED__
#define __IISDB_SDTT_FWD_DEFINED__
typedef interface IISDB_SDTT IISDB_SDTT;
#endif
#ifndef __IISDB_CDT_FWD_DEFINED__
#define __IISDB_CDT_FWD_DEFINED__
typedef interface IISDB_CDT IISDB_CDT;
#endif
#ifndef __IISDB_EMM_FWD_DEFINED__
#define __IISDB_EMM_FWD_DEFINED__
typedef interface IISDB_EMM IISDB_EMM;
#endif
#ifndef __IDvbServiceAttributeDescriptor_FWD_DEFINED__
#define __IDvbServiceAttributeDescriptor_FWD_DEFINED__
typedef interface IDvbServiceAttributeDescriptor IDvbServiceAttributeDescriptor;
#endif
#ifndef __IDvbContentIdentifierDescriptor_FWD_DEFINED__
#define __IDvbContentIdentifierDescriptor_FWD_DEFINED__
typedef interface IDvbContentIdentifierDescriptor IDvbContentIdentifierDescriptor;
#endif
#ifndef __IDvbDefaultAuthorityDescriptor_FWD_DEFINED__
#define __IDvbDefaultAuthorityDescriptor_FWD_DEFINED__
typedef interface IDvbDefaultAuthorityDescriptor IDvbDefaultAuthorityDescriptor;
#endif
#ifndef __IDvbSatelliteDeliverySystemDescriptor_FWD_DEFINED__
#define __IDvbSatelliteDeliverySystemDescriptor_FWD_DEFINED__
typedef interface IDvbSatelliteDeliverySystemDescriptor IDvbSatelliteDeliverySystemDescriptor;
#endif
#ifndef __IDvbCableDeliverySystemDescriptor_FWD_DEFINED__
#define __IDvbCableDeliverySystemDescriptor_FWD_DEFINED__
typedef interface IDvbCableDeliverySystemDescriptor IDvbCableDeliverySystemDescriptor;
#endif
#ifndef __IDvbTerrestrialDeliverySystemDescriptor_FWD_DEFINED__
#define __IDvbTerrestrialDeliverySystemDescriptor_FWD_DEFINED__
typedef interface IDvbTerrestrialDeliverySystemDescriptor IDvbTerrestrialDeliverySystemDescriptor;
#endif
#ifndef __IDvbTerrestrial2DeliverySystemDescriptor_FWD_DEFINED__
#define __IDvbTerrestrial2DeliverySystemDescriptor_FWD_DEFINED__
typedef interface IDvbTerrestrial2DeliverySystemDescriptor IDvbTerrestrial2DeliverySystemDescriptor;
#endif
#ifndef __IDvbFrequencyListDescriptor_FWD_DEFINED__
#define __IDvbFrequencyListDescriptor_FWD_DEFINED__
typedef interface IDvbFrequencyListDescriptor IDvbFrequencyListDescriptor;
#endif
#ifndef __IDvbPrivateDataSpecifierDescriptor_FWD_DEFINED__
#define __IDvbPrivateDataSpecifierDescriptor_FWD_DEFINED__
typedef interface IDvbPrivateDataSpecifierDescriptor IDvbPrivateDataSpecifierDescriptor;
#endif
#ifndef __IDvbLogicalChannelDescriptor_FWD_DEFINED__
#define __IDvbLogicalChannelDescriptor_FWD_DEFINED__
typedef interface IDvbLogicalChannelDescriptor IDvbLogicalChannelDescriptor;
#endif
#ifndef __IDvbLogicalChannelDescriptor2_FWD_DEFINED__
#define __IDvbLogicalChannelDescriptor2_FWD_DEFINED__
typedef interface IDvbLogicalChannelDescriptor2 IDvbLogicalChannelDescriptor2;
#endif
#ifndef __IDvbLogicalChannel2Descriptor_FWD_DEFINED__
#define __IDvbLogicalChannel2Descriptor_FWD_DEFINED__
typedef interface IDvbLogicalChannel2Descriptor IDvbLogicalChannel2Descriptor;
#endif
#ifndef __IDvbHDSimulcastLogicalChannelDescriptor_FWD_DEFINED__
#define __IDvbHDSimulcastLogicalChannelDescriptor_FWD_DEFINED__
typedef interface IDvbHDSimulcastLogicalChannelDescriptor IDvbHDSimulcastLogicalChannelDescriptor;
#endif
#ifndef __IDvbDataBroadcastIDDescriptor_FWD_DEFINED__
#define __IDvbDataBroadcastIDDescriptor_FWD_DEFINED__
typedef interface IDvbDataBroadcastIDDescriptor IDvbDataBroadcastIDDescriptor;
#endif
#ifndef __IDvbDataBroadcastDescriptor_FWD_DEFINED__
#define __IDvbDataBroadcastDescriptor_FWD_DEFINED__
typedef interface IDvbDataBroadcastDescriptor IDvbDataBroadcastDescriptor;
#endif
#ifndef __IDvbLinkageDescriptor_FWD_DEFINED__
#define __IDvbLinkageDescriptor_FWD_DEFINED__
typedef interface IDvbLinkageDescriptor IDvbLinkageDescriptor;
#endif
#ifndef __IDvbTeletextDescriptor_FWD_DEFINED__
#define __IDvbTeletextDescriptor_FWD_DEFINED__
typedef interface IDvbTeletextDescriptor IDvbTeletextDescriptor;
#endif
#ifndef __IDvbSubtitlingDescriptor_FWD_DEFINED__
#define __IDvbSubtitlingDescriptor_FWD_DEFINED__
typedef interface IDvbSubtitlingDescriptor IDvbSubtitlingDescriptor;
#endif
#ifndef __IDvbServiceDescriptor_FWD_DEFINED__
#define __IDvbServiceDescriptor_FWD_DEFINED__
typedef interface IDvbServiceDescriptor IDvbServiceDescriptor;
#endif
#ifndef __IDvbServiceDescriptor2_FWD_DEFINED__
#define __IDvbServiceDescriptor2_FWD_DEFINED__
typedef interface IDvbServiceDescriptor2 IDvbServiceDescriptor2;
#endif
#ifndef __IDvbServiceListDescriptor_FWD_DEFINED__
#define __IDvbServiceListDescriptor_FWD_DEFINED__
typedef interface IDvbServiceListDescriptor IDvbServiceListDescriptor;
#endif
#ifndef __IDvbMultilingualServiceNameDescriptor_FWD_DEFINED__
#define __IDvbMultilingualServiceNameDescriptor_FWD_DEFINED__
typedef interface IDvbMultilingualServiceNameDescriptor IDvbMultilingualServiceNameDescriptor;
#endif
#ifndef __IDvbNetworkNameDescriptor_FWD_DEFINED__
#define __IDvbNetworkNameDescriptor_FWD_DEFINED__
typedef interface IDvbNetworkNameDescriptor IDvbNetworkNameDescriptor;
#endif
#ifndef __IDvbShortEventDescriptor_FWD_DEFINED__
#define __IDvbShortEventDescriptor_FWD_DEFINED__
typedef interface IDvbShortEventDescriptor IDvbShortEventDescriptor;
#endif
#ifndef __IDvbExtendedEventDescriptor_FWD_DEFINED__
#define __IDvbExtendedEventDescriptor_FWD_DEFINED__
typedef interface IDvbExtendedEventDescriptor IDvbExtendedEventDescriptor;
#endif
#ifndef __IDvbComponentDescriptor_FWD_DEFINED__
#define __IDvbComponentDescriptor_FWD_DEFINED__
typedef interface IDvbComponentDescriptor IDvbComponentDescriptor;
#endif
#ifndef __IDvbContentDescriptor_FWD_DEFINED__
#define __IDvbContentDescriptor_FWD_DEFINED__
typedef interface IDvbContentDescriptor IDvbContentDescriptor;
#endif
#ifndef __IDvbParentalRatingDescriptor_FWD_DEFINED__
#define __IDvbParentalRatingDescriptor_FWD_DEFINED__
typedef interface IDvbParentalRatingDescriptor IDvbParentalRatingDescriptor;
#endif
#ifndef __IIsdbTerrestrialDeliverySystemDescriptor_FWD_DEFINED__
#define __IIsdbTerrestrialDeliverySystemDescriptor_FWD_DEFINED__
typedef interface IIsdbTerrestrialDeliverySystemDescriptor IIsdbTerrestrialDeliverySystemDescriptor;
#endif
#ifndef __IIsdbTSInformationDescriptor_FWD_DEFINED__
#define __IIsdbTSInformationDescriptor_FWD_DEFINED__
typedef interface IIsdbTSInformationDescriptor IIsdbTSInformationDescriptor;
#endif
#ifndef __IIsdbDigitalCopyControlDescriptor_FWD_DEFINED__
#define __IIsdbDigitalCopyControlDescriptor_FWD_DEFINED__
typedef interface IIsdbDigitalCopyControlDescriptor IIsdbDigitalCopyControlDescriptor;
#endif
#ifndef __IIsdbAudioComponentDescriptor_FWD_DEFINED__
#define __IIsdbAudioComponentDescriptor_FWD_DEFINED__
typedef interface IIsdbAudioComponentDescriptor IIsdbAudioComponentDescriptor;
#endif
#ifndef __IIsdbDataContentDescriptor_FWD_DEFINED__
#define __IIsdbDataContentDescriptor_FWD_DEFINED__
typedef interface IIsdbDataContentDescriptor IIsdbDataContentDescriptor;
#endif
#ifndef __IIsdbCAContractInformationDescriptor_FWD_DEFINED__
#define __IIsdbCAContractInformationDescriptor_FWD_DEFINED__
typedef interface IIsdbCAContractInformationDescriptor IIsdbCAContractInformationDescriptor;
#endif
#ifndef __IIsdbEventGroupDescriptor_FWD_DEFINED__
#define __IIsdbEventGroupDescriptor_FWD_DEFINED__
typedef interface IIsdbEventGroupDescriptor IIsdbEventGroupDescriptor;
#endif
#ifndef __IIsdbComponentGroupDescriptor_FWD_DEFINED__
#define __IIsdbComponentGroupDescriptor_FWD_DEFINED__
typedef interface IIsdbComponentGroupDescriptor IIsdbComponentGroupDescriptor;
#endif
#ifndef __IIsdbSeriesDescriptor_FWD_DEFINED__
#define __IIsdbSeriesDescriptor_FWD_DEFINED__
typedef interface IIsdbSeriesDescriptor IIsdbSeriesDescriptor;
#endif
#ifndef __IIsdbDownloadContentDescriptor_FWD_DEFINED__
#define __IIsdbDownloadContentDescriptor_FWD_DEFINED__
typedef interface IIsdbDownloadContentDescriptor IIsdbDownloadContentDescriptor;
#endif
#ifndef __IIsdbLogoTransmissionDescriptor_FWD_DEFINED__
#define __IIsdbLogoTransmissionDescriptor_FWD_DEFINED__
typedef interface IIsdbLogoTransmissionDescriptor IIsdbLogoTransmissionDescriptor;
#endif
#ifndef __IIsdbSIParameterDescriptor_FWD_DEFINED__
#define __IIsdbSIParameterDescriptor_FWD_DEFINED__
typedef interface IIsdbSIParameterDescriptor IIsdbSIParameterDescriptor;
#endif
#ifndef __IIsdbEmergencyInformationDescriptor_FWD_DEFINED__
#define __IIsdbEmergencyInformationDescriptor_FWD_DEFINED__
typedef interface IIsdbEmergencyInformationDescriptor IIsdbEmergencyInformationDescriptor;
#endif
#ifndef __IIsdbCADescriptor_FWD_DEFINED__
#define __IIsdbCADescriptor_FWD_DEFINED__
typedef interface IIsdbCADescriptor IIsdbCADescriptor;
#endif
#ifndef __IIsdbCAServiceDescriptor_FWD_DEFINED__
#define __IIsdbCAServiceDescriptor_FWD_DEFINED__
typedef interface IIsdbCAServiceDescriptor IIsdbCAServiceDescriptor;
#endif
#ifndef __IIsdbHierarchicalTransmissionDescriptor_FWD_DEFINED__
#define __IIsdbHierarchicalTransmissionDescriptor_FWD_DEFINED__
typedef interface IIsdbHierarchicalTransmissionDescriptor IIsdbHierarchicalTransmissionDescriptor;
#endif
#ifndef __IPBDASiParser_FWD_DEFINED__
#define __IPBDASiParser_FWD_DEFINED__
typedef interface IPBDASiParser IPBDASiParser;
#endif
#ifndef __IPBDA_EIT_FWD_DEFINED__
#define __IPBDA_EIT_FWD_DEFINED__
typedef interface IPBDA_EIT IPBDA_EIT;
#endif
#ifndef __IPBDA_Services_FWD_DEFINED__
#define __IPBDA_Services_FWD_DEFINED__
typedef interface IPBDA_Services IPBDA_Services;
#endif
#ifndef __IPBDAEntitlementDescriptor_FWD_DEFINED__
#define __IPBDAEntitlementDescriptor_FWD_DEFINED__
typedef interface IPBDAEntitlementDescriptor IPBDAEntitlementDescriptor;
#endif
#ifndef __IPBDAAttributesDescriptor_FWD_DEFINED__
#define __IPBDAAttributesDescriptor_FWD_DEFINED__
typedef interface IPBDAAttributesDescriptor IPBDAAttributesDescriptor;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <mpeg2structs.h>
#include <mpeg2data.h>
#include <mpeg2psiparser.h>
typedef enum __MIDL___MIDL_itf_dvbsiparser_0000_0000_0001
{
	STRCONV_MODE_DVB	= 0,
	STRCONV_MODE_DVB_EMPHASIS	= ( STRCONV_MODE_DVB + 1 ) ,
	STRCONV_MODE_DVB_WITHOUT_EMPHASIS	= ( STRCONV_MODE_DVB_EMPHASIS + 1 ) ,
	STRCONV_MODE_ISDB	= ( STRCONV_MODE_DVB_WITHOUT_EMPHASIS + 1 ) 
} 	DVB_STRCONV_MODE;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0000_v0_0_s_ifspec;
#ifndef __IDvbSiParser_INTERFACE_DEFINED__
#define __IDvbSiParser_INTERFACE_DEFINED__ 
extern const IID IID_IDvbSiParser;
typedef struct IDvbSiParserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbSiParser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbSiParser * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbSiParser * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDvbSiParser * This, IUnknown * punkMpeg2Data);
	HRESULT(STDMETHODCALLTYPE * GetPAT) (IDvbSiParser * This, IPAT ** ppPAT);
	HRESULT(STDMETHODCALLTYPE * GetCAT) (IDvbSiParser * This, DWORD dwTimeout, ICAT ** ppCAT);
	HRESULT(STDMETHODCALLTYPE * GetPMT) (IDvbSiParser * This, PID pid, WORD * pwProgramNumber, IPMT ** ppPMT);
	HRESULT(STDMETHODCALLTYPE * GetTSDT) (IDvbSiParser * This, ITSDT ** ppTSDT);
	HRESULT(STDMETHODCALLTYPE * GetNIT) (IDvbSiParser * This, TID tableId, WORD * pwNetworkId, IDVB_NIT ** ppNIT);
	HRESULT(STDMETHODCALLTYPE * GetSDT) (IDvbSiParser * This, TID tableId, WORD * pwTransportStreamId, IDVB_SDT ** ppSDT);
	HRESULT(STDMETHODCALLTYPE * GetEIT) (IDvbSiParser * This, TID tableId, WORD * pwServiceId, IDVB_EIT ** ppEIT);
	HRESULT(STDMETHODCALLTYPE * GetBAT) (IDvbSiParser * This, WORD * pwBouquetId, IDVB_BAT ** ppBAT);
	HRESULT(STDMETHODCALLTYPE * GetRST) (IDvbSiParser * This, DWORD dwTimeout, IDVB_RST ** ppRST);
	HRESULT(STDMETHODCALLTYPE * GetST) (IDvbSiParser * This, PID pid, DWORD dwTimeout, IDVB_ST ** ppST);
	HRESULT(STDMETHODCALLTYPE * GetTDT) (IDvbSiParser * This, IDVB_TDT ** ppTDT);
	HRESULT(STDMETHODCALLTYPE * GetTOT) (IDvbSiParser * This, IDVB_TOT ** ppTOT);
	HRESULT(STDMETHODCALLTYPE * GetDIT) (IDvbSiParser * This, DWORD dwTimeout, IDVB_DIT ** ppDIT);
	HRESULT(STDMETHODCALLTYPE * GetSIT) (IDvbSiParser * This, DWORD dwTimeout, IDVB_SIT ** ppSIT);
	END_INTERFACE
} IDvbSiParserVtbl;
interface IDvbSiParser
{
	CONST_VTBL struct IDvbSiParserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbSiParser_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbSiParser_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbSiParser_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbSiParser_Initialize(This,punkMpeg2Data)     ( (This)->lpVtbl -> Initialize(This,punkMpeg2Data) ) 
#define IDvbSiParser_GetPAT(This,ppPAT)     ( (This)->lpVtbl -> GetPAT(This,ppPAT) ) 
#define IDvbSiParser_GetCAT(This,dwTimeout,ppCAT)     ( (This)->lpVtbl -> GetCAT(This,dwTimeout,ppCAT) ) 
#define IDvbSiParser_GetPMT(This,pid,pwProgramNumber,ppPMT)     ( (This)->lpVtbl -> GetPMT(This,pid,pwProgramNumber,ppPMT) ) 
#define IDvbSiParser_GetTSDT(This,ppTSDT)     ( (This)->lpVtbl -> GetTSDT(This,ppTSDT) ) 
#define IDvbSiParser_GetNIT(This,tableId,pwNetworkId,ppNIT)     ( (This)->lpVtbl -> GetNIT(This,tableId,pwNetworkId,ppNIT) ) 
#define IDvbSiParser_GetSDT(This,tableId,pwTransportStreamId,ppSDT)     ( (This)->lpVtbl -> GetSDT(This,tableId,pwTransportStreamId,ppSDT) ) 
#define IDvbSiParser_GetEIT(This,tableId,pwServiceId,ppEIT)     ( (This)->lpVtbl -> GetEIT(This,tableId,pwServiceId,ppEIT) ) 
#define IDvbSiParser_GetBAT(This,pwBouquetId,ppBAT)     ( (This)->lpVtbl -> GetBAT(This,pwBouquetId,ppBAT) ) 
#define IDvbSiParser_GetRST(This,dwTimeout,ppRST)     ( (This)->lpVtbl -> GetRST(This,dwTimeout,ppRST) ) 
#define IDvbSiParser_GetST(This,pid,dwTimeout,ppST)     ( (This)->lpVtbl -> GetST(This,pid,dwTimeout,ppST) ) 
#define IDvbSiParser_GetTDT(This,ppTDT)     ( (This)->lpVtbl -> GetTDT(This,ppTDT) ) 
#define IDvbSiParser_GetTOT(This,ppTOT)     ( (This)->lpVtbl -> GetTOT(This,ppTOT) ) 
#define IDvbSiParser_GetDIT(This,dwTimeout,ppDIT)     ( (This)->lpVtbl -> GetDIT(This,dwTimeout,ppDIT) ) 
#define IDvbSiParser_GetSIT(This,dwTimeout,ppSIT)     ( (This)->lpVtbl -> GetSIT(This,dwTimeout,ppSIT) ) 
#endif
#endif
#ifndef __IDvbSiParser2_INTERFACE_DEFINED__
#define __IDvbSiParser2_INTERFACE_DEFINED__ 
extern const IID IID_IDvbSiParser2;
typedef struct IDvbSiParser2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbSiParser2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbSiParser2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbSiParser2 * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDvbSiParser2 * This, IUnknown * punkMpeg2Data);
	HRESULT(STDMETHODCALLTYPE * GetPAT) (IDvbSiParser2 * This, IPAT ** ppPAT);
	HRESULT(STDMETHODCALLTYPE * GetCAT) (IDvbSiParser2 * This, DWORD dwTimeout, ICAT ** ppCAT);
	HRESULT(STDMETHODCALLTYPE * GetPMT) (IDvbSiParser2 * This, PID pid, WORD * pwProgramNumber, IPMT ** ppPMT);
	HRESULT(STDMETHODCALLTYPE * GetTSDT) (IDvbSiParser2 * This, ITSDT ** ppTSDT);
	HRESULT(STDMETHODCALLTYPE * GetNIT) (IDvbSiParser2 * This, TID tableId, WORD * pwNetworkId, IDVB_NIT ** ppNIT);
	HRESULT(STDMETHODCALLTYPE * GetSDT) (IDvbSiParser2 * This, TID tableId, WORD * pwTransportStreamId, IDVB_SDT ** ppSDT);
	HRESULT(STDMETHODCALLTYPE * GetEIT) (IDvbSiParser2 * This, TID tableId, WORD * pwServiceId, IDVB_EIT ** ppEIT);
	HRESULT(STDMETHODCALLTYPE * GetBAT) (IDvbSiParser2 * This, WORD * pwBouquetId, IDVB_BAT ** ppBAT);
	HRESULT(STDMETHODCALLTYPE * GetRST) (IDvbSiParser2 * This, DWORD dwTimeout, IDVB_RST ** ppRST);
	HRESULT(STDMETHODCALLTYPE * GetST) (IDvbSiParser2 * This, PID pid, DWORD dwTimeout, IDVB_ST ** ppST);
	HRESULT(STDMETHODCALLTYPE * GetTDT) (IDvbSiParser2 * This, IDVB_TDT ** ppTDT);
	HRESULT(STDMETHODCALLTYPE * GetTOT) (IDvbSiParser2 * This, IDVB_TOT ** ppTOT);
	HRESULT(STDMETHODCALLTYPE * GetDIT) (IDvbSiParser2 * This, DWORD dwTimeout, IDVB_DIT ** ppDIT);
	HRESULT(STDMETHODCALLTYPE * GetSIT) (IDvbSiParser2 * This, DWORD dwTimeout, IDVB_SIT ** ppSIT);
	HRESULT(STDMETHODCALLTYPE * GetEIT2) (IDvbSiParser2 * This, TID tableId, WORD * pwServiceId, BYTE * pbSegment, IDVB_EIT2 ** ppEIT);
	END_INTERFACE
} IDvbSiParser2Vtbl;
interface IDvbSiParser2
{
	CONST_VTBL struct IDvbSiParser2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbSiParser2_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbSiParser2_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbSiParser2_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbSiParser2_Initialize(This,punkMpeg2Data)     ( (This)->lpVtbl -> Initialize(This,punkMpeg2Data) ) 
#define IDvbSiParser2_GetPAT(This,ppPAT)     ( (This)->lpVtbl -> GetPAT(This,ppPAT) ) 
#define IDvbSiParser2_GetCAT(This,dwTimeout,ppCAT)     ( (This)->lpVtbl -> GetCAT(This,dwTimeout,ppCAT) ) 
#define IDvbSiParser2_GetPMT(This,pid,pwProgramNumber,ppPMT)     ( (This)->lpVtbl -> GetPMT(This,pid,pwProgramNumber,ppPMT) ) 
#define IDvbSiParser2_GetTSDT(This,ppTSDT)     ( (This)->lpVtbl -> GetTSDT(This,ppTSDT) ) 
#define IDvbSiParser2_GetNIT(This,tableId,pwNetworkId,ppNIT)     ( (This)->lpVtbl -> GetNIT(This,tableId,pwNetworkId,ppNIT) ) 
#define IDvbSiParser2_GetSDT(This,tableId,pwTransportStreamId,ppSDT)     ( (This)->lpVtbl -> GetSDT(This,tableId,pwTransportStreamId,ppSDT) ) 
#define IDvbSiParser2_GetEIT(This,tableId,pwServiceId,ppEIT)     ( (This)->lpVtbl -> GetEIT(This,tableId,pwServiceId,ppEIT) ) 
#define IDvbSiParser2_GetBAT(This,pwBouquetId,ppBAT)     ( (This)->lpVtbl -> GetBAT(This,pwBouquetId,ppBAT) ) 
#define IDvbSiParser2_GetRST(This,dwTimeout,ppRST)     ( (This)->lpVtbl -> GetRST(This,dwTimeout,ppRST) ) 
#define IDvbSiParser2_GetST(This,pid,dwTimeout,ppST)     ( (This)->lpVtbl -> GetST(This,pid,dwTimeout,ppST) ) 
#define IDvbSiParser2_GetTDT(This,ppTDT)     ( (This)->lpVtbl -> GetTDT(This,ppTDT) ) 
#define IDvbSiParser2_GetTOT(This,ppTOT)     ( (This)->lpVtbl -> GetTOT(This,ppTOT) ) 
#define IDvbSiParser2_GetDIT(This,dwTimeout,ppDIT)     ( (This)->lpVtbl -> GetDIT(This,dwTimeout,ppDIT) ) 
#define IDvbSiParser2_GetSIT(This,dwTimeout,ppSIT)     ( (This)->lpVtbl -> GetSIT(This,dwTimeout,ppSIT) ) 
#define IDvbSiParser2_GetEIT2(This,tableId,pwServiceId,pbSegment,ppEIT)     ( (This)->lpVtbl -> GetEIT2(This,tableId,pwServiceId,pbSegment,ppEIT) ) 
#endif
#endif
#ifndef __IIsdbSiParser2_INTERFACE_DEFINED__
#define __IIsdbSiParser2_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbSiParser2;
typedef struct IIsdbSiParser2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbSiParser2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbSiParser2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbSiParser2 * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IIsdbSiParser2 * This, IUnknown * punkMpeg2Data);
	HRESULT(STDMETHODCALLTYPE * GetPAT) (IIsdbSiParser2 * This, IPAT ** ppPAT);
	HRESULT(STDMETHODCALLTYPE * GetCAT) (IIsdbSiParser2 * This, DWORD dwTimeout, ICAT ** ppCAT);
	HRESULT(STDMETHODCALLTYPE * GetPMT) (IIsdbSiParser2 * This, PID pid, WORD * pwProgramNumber, IPMT ** ppPMT);
	HRESULT(STDMETHODCALLTYPE * GetTSDT) (IIsdbSiParser2 * This, ITSDT ** ppTSDT);
	HRESULT(STDMETHODCALLTYPE * GetNIT) (IIsdbSiParser2 * This, TID tableId, WORD * pwNetworkId, IDVB_NIT ** ppNIT);
	HRESULT(STDMETHODCALLTYPE * GetSDT) (IIsdbSiParser2 * This, TID tableId, WORD * pwTransportStreamId, IDVB_SDT ** ppSDT);
	HRESULT(STDMETHODCALLTYPE * GetEIT) (IIsdbSiParser2 * This, TID tableId, WORD * pwServiceId, IDVB_EIT ** ppEIT);
	HRESULT(STDMETHODCALLTYPE * GetBAT) (IIsdbSiParser2 * This, WORD * pwBouquetId, IDVB_BAT ** ppBAT);
	HRESULT(STDMETHODCALLTYPE * GetRST) (IIsdbSiParser2 * This, DWORD dwTimeout, IDVB_RST ** ppRST);
	HRESULT(STDMETHODCALLTYPE * GetST) (IIsdbSiParser2 * This, PID pid, DWORD dwTimeout, IDVB_ST ** ppST);
	HRESULT(STDMETHODCALLTYPE * GetTDT) (IIsdbSiParser2 * This, IDVB_TDT ** ppTDT);
	HRESULT(STDMETHODCALLTYPE * GetTOT) (IIsdbSiParser2 * This, IDVB_TOT ** ppTOT);
	HRESULT(STDMETHODCALLTYPE * GetDIT) (IIsdbSiParser2 * This, DWORD dwTimeout, IDVB_DIT ** ppDIT);
	HRESULT(STDMETHODCALLTYPE * GetSIT) (IIsdbSiParser2 * This, DWORD dwTimeout, IDVB_SIT ** ppSIT);
	HRESULT(STDMETHODCALLTYPE * GetEIT2) (IIsdbSiParser2 * This, TID tableId, WORD * pwServiceId, BYTE * pbSegment, IDVB_EIT2 ** ppEIT);
	HRESULT(STDMETHODCALLTYPE * GetSDT2) (IIsdbSiParser2 * This, TID tableId, WORD * pwTransportStreamId, IISDB_SDT ** ppSDT);
	HRESULT(STDMETHODCALLTYPE * GetBIT) (IIsdbSiParser2 * This, TID tableId, WORD * pwOriginalNetworkId, IISDB_BIT ** ppBIT);
	HRESULT(STDMETHODCALLTYPE * GetNBIT) (IIsdbSiParser2 * This, TID tableId, WORD * pwOriginalNetworkId, IISDB_NBIT ** ppNBIT);
	HRESULT(STDMETHODCALLTYPE * GetLDT) (IIsdbSiParser2 * This, TID tableId, WORD * pwOriginalServiceId, IISDB_LDT ** ppLDT);
	HRESULT(STDMETHODCALLTYPE * GetSDTT) (IIsdbSiParser2 * This, TID tableId, WORD * pwTableIdExt, IISDB_SDTT ** ppSDTT);
	HRESULT(STDMETHODCALLTYPE * GetCDT) (IIsdbSiParser2 * This, TID tableId, BYTE bSectionNumber, WORD * pwDownloadDataId, IISDB_CDT ** ppCDT);
	HRESULT(STDMETHODCALLTYPE * GetEMM) (IIsdbSiParser2 * This, PID pid, WORD wTableIdExt, IISDB_EMM ** ppEMM);
	END_INTERFACE
} IIsdbSiParser2Vtbl;
interface IIsdbSiParser2
{
	CONST_VTBL struct IIsdbSiParser2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbSiParser2_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbSiParser2_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbSiParser2_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbSiParser2_Initialize(This,punkMpeg2Data)     ( (This)->lpVtbl -> Initialize(This,punkMpeg2Data) ) 
#define IIsdbSiParser2_GetPAT(This,ppPAT)     ( (This)->lpVtbl -> GetPAT(This,ppPAT) ) 
#define IIsdbSiParser2_GetCAT(This,dwTimeout,ppCAT)     ( (This)->lpVtbl -> GetCAT(This,dwTimeout,ppCAT) ) 
#define IIsdbSiParser2_GetPMT(This,pid,pwProgramNumber,ppPMT)     ( (This)->lpVtbl -> GetPMT(This,pid,pwProgramNumber,ppPMT) ) 
#define IIsdbSiParser2_GetTSDT(This,ppTSDT)     ( (This)->lpVtbl -> GetTSDT(This,ppTSDT) ) 
#define IIsdbSiParser2_GetNIT(This,tableId,pwNetworkId,ppNIT)     ( (This)->lpVtbl -> GetNIT(This,tableId,pwNetworkId,ppNIT) ) 
#define IIsdbSiParser2_GetSDT(This,tableId,pwTransportStreamId,ppSDT)     ( (This)->lpVtbl -> GetSDT(This,tableId,pwTransportStreamId,ppSDT) ) 
#define IIsdbSiParser2_GetEIT(This,tableId,pwServiceId,ppEIT)     ( (This)->lpVtbl -> GetEIT(This,tableId,pwServiceId,ppEIT) ) 
#define IIsdbSiParser2_GetBAT(This,pwBouquetId,ppBAT)     ( (This)->lpVtbl -> GetBAT(This,pwBouquetId,ppBAT) ) 
#define IIsdbSiParser2_GetRST(This,dwTimeout,ppRST)     ( (This)->lpVtbl -> GetRST(This,dwTimeout,ppRST) ) 
#define IIsdbSiParser2_GetST(This,pid,dwTimeout,ppST)     ( (This)->lpVtbl -> GetST(This,pid,dwTimeout,ppST) ) 
#define IIsdbSiParser2_GetTDT(This,ppTDT)     ( (This)->lpVtbl -> GetTDT(This,ppTDT) ) 
#define IIsdbSiParser2_GetTOT(This,ppTOT)     ( (This)->lpVtbl -> GetTOT(This,ppTOT) ) 
#define IIsdbSiParser2_GetDIT(This,dwTimeout,ppDIT)     ( (This)->lpVtbl -> GetDIT(This,dwTimeout,ppDIT) ) 
#define IIsdbSiParser2_GetSIT(This,dwTimeout,ppSIT)     ( (This)->lpVtbl -> GetSIT(This,dwTimeout,ppSIT) ) 
#define IIsdbSiParser2_GetEIT2(This,tableId,pwServiceId,pbSegment,ppEIT)     ( (This)->lpVtbl -> GetEIT2(This,tableId,pwServiceId,pbSegment,ppEIT) ) 
#define IIsdbSiParser2_GetSDT(This,tableId,pwTransportStreamId,ppSDT)     ( (This)->lpVtbl -> GetSDT(This,tableId,pwTransportStreamId,ppSDT) ) 
#define IIsdbSiParser2_GetBIT(This,tableId,pwOriginalNetworkId,ppBIT)     ( (This)->lpVtbl -> GetBIT(This,tableId,pwOriginalNetworkId,ppBIT) ) 
#define IIsdbSiParser2_GetNBIT(This,tableId,pwOriginalNetworkId,ppNBIT)     ( (This)->lpVtbl -> GetNBIT(This,tableId,pwOriginalNetworkId,ppNBIT) ) 
#define IIsdbSiParser2_GetLDT(This,tableId,pwOriginalServiceId,ppLDT)     ( (This)->lpVtbl -> GetLDT(This,tableId,pwOriginalServiceId,ppLDT) ) 
#define IIsdbSiParser2_GetSDTT(This,tableId,pwTableIdExt,ppSDTT)     ( (This)->lpVtbl -> GetSDTT(This,tableId,pwTableIdExt,ppSDTT) ) 
#define IIsdbSiParser2_GetCDT(This,tableId,bSectionNumber,pwDownloadDataId,ppCDT)     ( (This)->lpVtbl -> GetCDT(This,tableId,bSectionNumber,pwDownloadDataId,ppCDT) ) 
#define IIsdbSiParser2_GetEMM(This,pid,wTableIdExt,ppEMM)     ( (This)->lpVtbl -> GetEMM(This,pid,wTableIdExt,ppEMM) ) 
#endif
#endif
#ifndef __IDVB_NIT_INTERFACE_DEFINED__
#define __IDVB_NIT_INTERFACE_DEFINED__ 
extern const IID IID_IDVB_NIT;
typedef struct IDVB_NITVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVB_NIT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVB_NIT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVB_NIT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDVB_NIT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IDVB_NIT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetNetworkId) (IDVB_NIT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfTableDescriptors) (IDVB_NIT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByIndex) (IDVB_NIT * This, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByTag) (IDVB_NIT * This, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDVB_NIT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordTransportStreamId) (IDVB_NIT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordOriginalNetworkId) (IDVB_NIT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IDVB_NIT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IDVB_NIT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IDVB_NIT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * RegisterForNextTable) (IDVB_NIT * This, HANDLE hNextTableAvailable);
	HRESULT(STDMETHODCALLTYPE * GetNextTable) (IDVB_NIT * This, IDVB_NIT ** ppNIT);
	HRESULT(STDMETHODCALLTYPE * RegisterForWhenCurrent) (IDVB_NIT * This, HANDLE hNextTableIsCurrent);
	HRESULT(STDMETHODCALLTYPE * ConvertNextToCurrent) (IDVB_NIT * This);
	HRESULT(STDMETHODCALLTYPE * GetVersionHash) (IDVB_NIT * This, DWORD * pdwVersionHash);
END_INTERFACE} IDVB_NITVtbl;
interface IDVB_NIT
{
	CONST_VTBL struct IDVB_NITVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVB_NIT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDVB_NIT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDVB_NIT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDVB_NIT_Initialize(This,pSectionList,pMPEGData)     ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IDVB_NIT_GetVersionNumber(This,pbVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IDVB_NIT_GetNetworkId(This,pwVal)     ( (This)->lpVtbl -> GetNetworkId(This,pwVal) ) 
#define IDVB_NIT_GetCountOfTableDescriptors(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) ) 
#define IDVB_NIT_GetTableDescriptorByIndex(This,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) ) 
#define IDVB_NIT_GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) ) 
#define IDVB_NIT_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IDVB_NIT_GetRecordTransportStreamId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordTransportStreamId(This,dwRecordIndex,pwVal) ) 
#define IDVB_NIT_GetRecordOriginalNetworkId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordOriginalNetworkId(This,dwRecordIndex,pwVal) ) 
#define IDVB_NIT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) ) 
#define IDVB_NIT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) ) 
#define IDVB_NIT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) ) 
#define IDVB_NIT_RegisterForNextTable(This,hNextTableAvailable)     ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) ) 
#define IDVB_NIT_GetNextTable(This,ppNIT)     ( (This)->lpVtbl -> GetNextTable(This,ppNIT) ) 
#define IDVB_NIT_RegisterForWhenCurrent(This,hNextTableIsCurrent)     ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) ) 
#define IDVB_NIT_ConvertNextToCurrent(This)     ( (This)->lpVtbl -> ConvertNextToCurrent(This) ) 
#define IDVB_NIT_GetVersionHash(This,pdwVersionHash)     ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) ) 
#endif
#endif
#ifndef __IDVB_SDT_INTERFACE_DEFINED__
#define __IDVB_SDT_INTERFACE_DEFINED__ 
extern const IID IID_IDVB_SDT;
typedef struct IDVB_SDTVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVB_SDT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVB_SDT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVB_SDT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDVB_SDT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IDVB_SDT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTransportStreamId) (IDVB_SDT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetOriginalNetworkId) (IDVB_SDT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDVB_SDT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceId) (IDVB_SDT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordEITScheduleFlag) (IDVB_SDT * This, DWORD dwRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordEITPresentFollowingFlag) (IDVB_SDT * This, DWORD dwRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordRunningStatus) (IDVB_SDT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordFreeCAMode) (IDVB_SDT * This, DWORD dwRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IDVB_SDT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IDVB_SDT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IDVB_SDT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * RegisterForNextTable) (IDVB_SDT * This, HANDLE hNextTableAvailable);
	HRESULT(STDMETHODCALLTYPE * GetNextTable) (IDVB_SDT * This, IDVB_SDT ** ppSDT);
	HRESULT(STDMETHODCALLTYPE * RegisterForWhenCurrent) (IDVB_SDT * This, HANDLE hNextTableIsCurrent);
	HRESULT(STDMETHODCALLTYPE * ConvertNextToCurrent) (IDVB_SDT * This);
	HRESULT(STDMETHODCALLTYPE * GetVersionHash) (IDVB_SDT * This, DWORD * pdwVersionHash);
	END_INTERFACE
} IDVB_SDTVtbl;
interface IDVB_SDT
{
	CONST_VTBL struct IDVB_SDTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVB_SDT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDVB_SDT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDVB_SDT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDVB_SDT_Initialize(This,pSectionList,pMPEGData)     ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IDVB_SDT_GetVersionNumber(This,pbVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IDVB_SDT_GetTransportStreamId(This,pwVal)     ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) ) 
#define IDVB_SDT_GetOriginalNetworkId(This,pwVal)     ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) ) 
#define IDVB_SDT_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IDVB_SDT_GetRecordServiceId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordServiceId(This,dwRecordIndex,pwVal) ) 
#define IDVB_SDT_GetRecordEITScheduleFlag(This,dwRecordIndex,pfVal)     ( (This)->lpVtbl -> GetRecordEITScheduleFlag(This,dwRecordIndex,pfVal) ) 
#define IDVB_SDT_GetRecordEITPresentFollowingFlag(This,dwRecordIndex,pfVal)     ( (This)->lpVtbl -> GetRecordEITPresentFollowingFlag(This,dwRecordIndex,pfVal) ) 
#define IDVB_SDT_GetRecordRunningStatus(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordRunningStatus(This,dwRecordIndex,pbVal) ) 
#define IDVB_SDT_GetRecordFreeCAMode(This,dwRecordIndex,pfVal)     ( (This)->lpVtbl -> GetRecordFreeCAMode(This,dwRecordIndex,pfVal) ) 
#define IDVB_SDT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) ) 
#define IDVB_SDT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) ) 
#define IDVB_SDT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) ) 
#define IDVB_SDT_RegisterForNextTable(This,hNextTableAvailable)     ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) ) 
#define IDVB_SDT_GetNextTable(This,ppSDT)     ( (This)->lpVtbl -> GetNextTable(This,ppSDT) ) 
#define IDVB_SDT_RegisterForWhenCurrent(This,hNextTableIsCurrent)     ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) ) 
#define IDVB_SDT_ConvertNextToCurrent(This)     ( (This)->lpVtbl -> ConvertNextToCurrent(This) ) 
#define IDVB_SDT_GetVersionHash(This,pdwVersionHash)     ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) ) 
#endif
#endif
#ifndef __IISDB_SDT_INTERFACE_DEFINED__
#define __IISDB_SDT_INTERFACE_DEFINED__ 
extern const IID IID_IISDB_SDT;
typedef struct IISDB_SDTVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IISDB_SDT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IISDB_SDT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IISDB_SDT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IISDB_SDT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IISDB_SDT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTransportStreamId) (IISDB_SDT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetOriginalNetworkId) (IISDB_SDT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IISDB_SDT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceId) (IISDB_SDT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordEITScheduleFlag) (IISDB_SDT * This, DWORD dwRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordEITPresentFollowingFlag) (IISDB_SDT * This, DWORD dwRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordRunningStatus) (IISDB_SDT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordFreeCAMode) (IISDB_SDT * This, DWORD dwRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IISDB_SDT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IISDB_SDT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IISDB_SDT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * RegisterForNextTable) (IISDB_SDT * This, HANDLE hNextTableAvailable);
	HRESULT(STDMETHODCALLTYPE * GetNextTable) (IISDB_SDT * This, IDVB_SDT ** ppSDT);
	HRESULT(STDMETHODCALLTYPE * RegisterForWhenCurrent) (IISDB_SDT * This, HANDLE hNextTableIsCurrent);
	HRESULT(STDMETHODCALLTYPE * ConvertNextToCurrent) (IISDB_SDT * This);
	HRESULT(STDMETHODCALLTYPE * GetVersionHash) (IISDB_SDT * This, DWORD * pdwVersionHash);
	HRESULT(STDMETHODCALLTYPE * GetRecordEITUserDefinedFlags) (IISDB_SDT * This, DWORD dwRecordIndex, BYTE * pbVal);
	END_INTERFACE
} IISDB_SDTVtbl;
interface IISDB_SDT
{
	CONST_VTBL struct IISDB_SDTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IISDB_SDT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IISDB_SDT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IISDB_SDT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IISDB_SDT_Initialize(This,pSectionList,pMPEGData)     ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IISDB_SDT_GetVersionNumber(This,pbVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IISDB_SDT_GetTransportStreamId(This,pwVal)     ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) ) 
#define IISDB_SDT_GetOriginalNetworkId(This,pwVal)     ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) ) 
#define IISDB_SDT_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IISDB_SDT_GetRecordServiceId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordServiceId(This,dwRecordIndex,pwVal) ) 
#define IISDB_SDT_GetRecordEITScheduleFlag(This,dwRecordIndex,pfVal)     ( (This)->lpVtbl -> GetRecordEITScheduleFlag(This,dwRecordIndex,pfVal) ) 
#define IISDB_SDT_GetRecordEITPresentFollowingFlag(This,dwRecordIndex,pfVal)     ( (This)->lpVtbl -> GetRecordEITPresentFollowingFlag(This,dwRecordIndex,pfVal) ) 
#define IISDB_SDT_GetRecordRunningStatus(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordRunningStatus(This,dwRecordIndex,pbVal) ) 
#define IISDB_SDT_GetRecordFreeCAMode(This,dwRecordIndex,pfVal)     ( (This)->lpVtbl -> GetRecordFreeCAMode(This,dwRecordIndex,pfVal) ) 
#define IISDB_SDT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) ) 
#define IISDB_SDT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) ) 
#define IISDB_SDT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) ) 
#define IISDB_SDT_RegisterForNextTable(This,hNextTableAvailable)     ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) ) 
#define IISDB_SDT_GetNextTable(This,ppSDT)     ( (This)->lpVtbl -> GetNextTable(This,ppSDT) ) 
#define IISDB_SDT_RegisterForWhenCurrent(This,hNextTableIsCurrent)     ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) ) 
#define IISDB_SDT_ConvertNextToCurrent(This)     ( (This)->lpVtbl -> ConvertNextToCurrent(This) ) 
#define IISDB_SDT_GetVersionHash(This,pdwVersionHash)     ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) ) 
#define IISDB_SDT_GetRecordEITUserDefinedFlags(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordEITUserDefinedFlags(This,dwRecordIndex,pbVal) ) 
#endif
#endif
#ifndef __IDVB_EIT_INTERFACE_DEFINED__
#define __IDVB_EIT_INTERFACE_DEFINED__ 
extern const IID IID_IDVB_EIT;
typedef struct IDVB_EITVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVB_EIT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVB_EIT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVB_EIT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDVB_EIT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IDVB_EIT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetServiceId) (IDVB_EIT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetTransportStreamId) (IDVB_EIT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetOriginalNetworkId) (IDVB_EIT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetSegmentLastSectionNumber) (IDVB_EIT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLastTableId) (IDVB_EIT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDVB_EIT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordEventId) (IDVB_EIT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordStartTime) (IDVB_EIT * This, DWORD dwRecordIndex, MPEG_DATE_AND_TIME * pmdtVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDuration) (IDVB_EIT * This, DWORD dwRecordIndex, MPEG_DURATION * pmdVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordRunningStatus) (IDVB_EIT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordFreeCAMode) (IDVB_EIT * This, DWORD dwRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IDVB_EIT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IDVB_EIT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IDVB_EIT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * RegisterForNextTable) (IDVB_EIT * This, HANDLE hNextTableAvailable);
	HRESULT(STDMETHODCALLTYPE * GetNextTable) (IDVB_EIT * This, IDVB_EIT ** ppEIT);
	HRESULT(STDMETHODCALLTYPE * RegisterForWhenCurrent) (IDVB_EIT * This, HANDLE hNextTableIsCurrent);
	HRESULT(STDMETHODCALLTYPE * ConvertNextToCurrent) (IDVB_EIT * This);
	HRESULT(STDMETHODCALLTYPE * GetVersionHash) (IDVB_EIT * This, DWORD * pdwVersionHash);
	END_INTERFACE
} IDVB_EITVtbl;
interface IDVB_EIT
{
	CONST_VTBL struct IDVB_EITVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVB_EIT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDVB_EIT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDVB_EIT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDVB_EIT_Initialize(This,pSectionList,pMPEGData)     ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IDVB_EIT_GetVersionNumber(This,pbVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IDVB_EIT_GetServiceId(This,pwVal)     ( (This)->lpVtbl -> GetServiceId(This,pwVal) ) 
#define IDVB_EIT_GetTransportStreamId(This,pwVal)     ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) ) 
#define IDVB_EIT_GetOriginalNetworkId(This,pwVal)     ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) ) 
#define IDVB_EIT_GetSegmentLastSectionNumber(This,pbVal)     ( (This)->lpVtbl -> GetSegmentLastSectionNumber(This,pbVal) ) 
#define IDVB_EIT_GetLastTableId(This,pbVal)     ( (This)->lpVtbl -> GetLastTableId(This,pbVal) ) 
#define IDVB_EIT_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IDVB_EIT_GetRecordEventId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordEventId(This,dwRecordIndex,pwVal) ) 
#define IDVB_EIT_GetRecordStartTime(This,dwRecordIndex,pmdtVal)     ( (This)->lpVtbl -> GetRecordStartTime(This,dwRecordIndex,pmdtVal) ) 
#define IDVB_EIT_GetRecordDuration(This,dwRecordIndex,pmdVal)     ( (This)->lpVtbl -> GetRecordDuration(This,dwRecordIndex,pmdVal) ) 
#define IDVB_EIT_GetRecordRunningStatus(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordRunningStatus(This,dwRecordIndex,pbVal) ) 
#define IDVB_EIT_GetRecordFreeCAMode(This,dwRecordIndex,pfVal)     ( (This)->lpVtbl -> GetRecordFreeCAMode(This,dwRecordIndex,pfVal) ) 
#define IDVB_EIT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) ) 
#define IDVB_EIT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) ) 
#define IDVB_EIT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) ) 
#define IDVB_EIT_RegisterForNextTable(This,hNextTableAvailable)     ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) ) 
#define IDVB_EIT_GetNextTable(This,ppEIT)     ( (This)->lpVtbl -> GetNextTable(This,ppEIT) ) 
#define IDVB_EIT_RegisterForWhenCurrent(This,hNextTableIsCurrent)     ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) ) 
#define IDVB_EIT_ConvertNextToCurrent(This)     ( (This)->lpVtbl -> ConvertNextToCurrent(This) ) 
#define IDVB_EIT_GetVersionHash(This,pdwVersionHash)     ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) ) 
#endif
#endif
#ifndef __IDVB_EIT2_INTERFACE_DEFINED__
#define __IDVB_EIT2_INTERFACE_DEFINED__ 
extern const IID IID_IDVB_EIT2;
typedef struct IDVB_EIT2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVB_EIT2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVB_EIT2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVB_EIT2 * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDVB_EIT2 * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IDVB_EIT2 * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetServiceId) (IDVB_EIT2 * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetTransportStreamId) (IDVB_EIT2 * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetOriginalNetworkId) (IDVB_EIT2 * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetSegmentLastSectionNumber) (IDVB_EIT2 * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLastTableId) (IDVB_EIT2 * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDVB_EIT2 * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordEventId) (IDVB_EIT2 * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordStartTime) (IDVB_EIT2 * This, DWORD dwRecordIndex, MPEG_DATE_AND_TIME * pmdtVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDuration) (IDVB_EIT2 * This, DWORD dwRecordIndex, MPEG_DURATION * pmdVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordRunningStatus) (IDVB_EIT2 * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordFreeCAMode) (IDVB_EIT2 * This, DWORD dwRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IDVB_EIT2 * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IDVB_EIT2 * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IDVB_EIT2 * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * RegisterForNextTable) (IDVB_EIT2 * This, HANDLE hNextTableAvailable);
	HRESULT(STDMETHODCALLTYPE * GetNextTable) (IDVB_EIT2 * This, IDVB_EIT ** ppEIT);
	HRESULT(STDMETHODCALLTYPE * RegisterForWhenCurrent) (IDVB_EIT2 * This, HANDLE hNextTableIsCurrent);
	HRESULT(STDMETHODCALLTYPE * ConvertNextToCurrent) (IDVB_EIT2 * This);
	HRESULT(STDMETHODCALLTYPE * GetVersionHash) (IDVB_EIT2 * This, DWORD * pdwVersionHash);
	HRESULT(STDMETHODCALLTYPE * GetSegmentInfo) (IDVB_EIT2 * This, BYTE * pbTid, BYTE * pbSegment);
	HRESULT(STDMETHODCALLTYPE * GetRecordSection) (IDVB_EIT2 * This, DWORD dwRecordIndex, BYTE * pbVal);
	END_INTERFACE
} IDVB_EIT2Vtbl;
interface IDVB_EIT2
{
	CONST_VTBL struct IDVB_EIT2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVB_EIT2_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDVB_EIT2_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDVB_EIT2_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDVB_EIT2_Initialize(This,pSectionList,pMPEGData)     ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IDVB_EIT2_GetVersionNumber(This,pbVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IDVB_EIT2_GetServiceId(This,pwVal)     ( (This)->lpVtbl -> GetServiceId(This,pwVal) ) 
#define IDVB_EIT2_GetTransportStreamId(This,pwVal)     ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) ) 
#define IDVB_EIT2_GetOriginalNetworkId(This,pwVal)     ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) ) 
#define IDVB_EIT2_GetSegmentLastSectionNumber(This,pbVal)     ( (This)->lpVtbl -> GetSegmentLastSectionNumber(This,pbVal) ) 
#define IDVB_EIT2_GetLastTableId(This,pbVal)     ( (This)->lpVtbl -> GetLastTableId(This,pbVal) ) 
#define IDVB_EIT2_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IDVB_EIT2_GetRecordEventId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordEventId(This,dwRecordIndex,pwVal) ) 
#define IDVB_EIT2_GetRecordStartTime(This,dwRecordIndex,pmdtVal)     ( (This)->lpVtbl -> GetRecordStartTime(This,dwRecordIndex,pmdtVal) ) 
#define IDVB_EIT2_GetRecordDuration(This,dwRecordIndex,pmdVal)     ( (This)->lpVtbl -> GetRecordDuration(This,dwRecordIndex,pmdVal) ) 
#define IDVB_EIT2_GetRecordRunningStatus(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordRunningStatus(This,dwRecordIndex,pbVal) ) 
#define IDVB_EIT2_GetRecordFreeCAMode(This,dwRecordIndex,pfVal)     ( (This)->lpVtbl -> GetRecordFreeCAMode(This,dwRecordIndex,pfVal) ) 
#define IDVB_EIT2_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) ) 
#define IDVB_EIT2_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) ) 
#define IDVB_EIT2_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) ) 
#define IDVB_EIT2_RegisterForNextTable(This,hNextTableAvailable)     ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) ) 
#define IDVB_EIT2_GetNextTable(This,ppEIT)     ( (This)->lpVtbl -> GetNextTable(This,ppEIT) ) 
#define IDVB_EIT2_RegisterForWhenCurrent(This,hNextTableIsCurrent)     ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) ) 
#define IDVB_EIT2_ConvertNextToCurrent(This)     ( (This)->lpVtbl -> ConvertNextToCurrent(This) ) 
#define IDVB_EIT2_GetVersionHash(This,pdwVersionHash)     ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) ) 
#define IDVB_EIT2_GetSegmentInfo(This,pbTid,pbSegment)     ( (This)->lpVtbl -> GetSegmentInfo(This,pbTid,pbSegment) ) 
#define IDVB_EIT2_GetRecordSection(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordSection(This,dwRecordIndex,pbVal) ) 
#endif
#endif
#ifndef __IDVB_BAT_INTERFACE_DEFINED__
#define __IDVB_BAT_INTERFACE_DEFINED__ 
extern const IID IID_IDVB_BAT;
typedef struct IDVB_BATVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVB_BAT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVB_BAT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVB_BAT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDVB_BAT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IDVB_BAT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetBouquetId) (IDVB_BAT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfTableDescriptors) (IDVB_BAT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByIndex) (IDVB_BAT * This, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByTag) (IDVB_BAT * This, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDVB_BAT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordTransportStreamId) (IDVB_BAT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordOriginalNetworkId) (IDVB_BAT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IDVB_BAT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IDVB_BAT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IDVB_BAT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * RegisterForNextTable) (IDVB_BAT * This, HANDLE hNextTableAvailable);
	HRESULT(STDMETHODCALLTYPE * GetNextTable) (IDVB_BAT * This, IDVB_BAT ** ppBAT);
	HRESULT(STDMETHODCALLTYPE * RegisterForWhenCurrent) (IDVB_BAT * This, HANDLE hNextTableIsCurrent);
	HRESULT(STDMETHODCALLTYPE * ConvertNextToCurrent) (IDVB_BAT * This);
	END_INTERFACE
} IDVB_BATVtbl;
interface IDVB_BAT
{
    CONST_VTBL struct IDVB_BATVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVB_BAT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDVB_BAT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDVB_BAT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDVB_BAT_Initialize(This,pSectionList,pMPEGData)     ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IDVB_BAT_GetVersionNumber(This,pbVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IDVB_BAT_GetBouquetId(This,pwVal)     ( (This)->lpVtbl -> GetBouquetId(This,pwVal) ) 
#define IDVB_BAT_GetCountOfTableDescriptors(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) ) 
#define IDVB_BAT_GetTableDescriptorByIndex(This,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) ) 
#define IDVB_BAT_GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) ) 
#define IDVB_BAT_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IDVB_BAT_GetRecordTransportStreamId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordTransportStreamId(This,dwRecordIndex,pwVal) ) 
#define IDVB_BAT_GetRecordOriginalNetworkId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordOriginalNetworkId(This,dwRecordIndex,pwVal) ) 
#define IDVB_BAT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) ) 
#define IDVB_BAT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) ) 
#define IDVB_BAT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) ) 
#define IDVB_BAT_RegisterForNextTable(This,hNextTableAvailable)     ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) ) 
#define IDVB_BAT_GetNextTable(This,ppBAT)     ( (This)->lpVtbl -> GetNextTable(This,ppBAT) ) 
#define IDVB_BAT_RegisterForWhenCurrent(This,hNextTableIsCurrent)     ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) ) 
#define IDVB_BAT_ConvertNextToCurrent(This)     ( (This)->lpVtbl -> ConvertNextToCurrent(This) ) 
#endif
#endif
#ifndef __IDVB_RST_INTERFACE_DEFINED__
#define __IDVB_RST_INTERFACE_DEFINED__ 
extern const IID IID_IDVB_RST;
typedef struct IDVB_RSTVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVB_RST * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVB_RST * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVB_RST * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDVB_RST * This, ISectionList * pSectionList);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDVB_RST * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordTransportStreamId) (IDVB_RST * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordOriginalNetworkId) (IDVB_RST * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceId) (IDVB_RST * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordEventId) (IDVB_RST * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordRunningStatus) (IDVB_RST * This, DWORD dwRecordIndex, BYTE * pbVal);
	END_INTERFACE
} IDVB_RSTVtbl;
interface IDVB_RST
{
    CONST_VTBL struct IDVB_RSTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVB_RST_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDVB_RST_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDVB_RST_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDVB_RST_Initialize(This,pSectionList)     ( (This)->lpVtbl -> Initialize(This,pSectionList) ) 
#define IDVB_RST_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IDVB_RST_GetRecordTransportStreamId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordTransportStreamId(This,dwRecordIndex,pwVal) ) 
#define IDVB_RST_GetRecordOriginalNetworkId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordOriginalNetworkId(This,dwRecordIndex,pwVal) ) 
#define IDVB_RST_GetRecordServiceId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordServiceId(This,dwRecordIndex,pwVal) ) 
#define IDVB_RST_GetRecordEventId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordEventId(This,dwRecordIndex,pwVal) ) 
#define IDVB_RST_GetRecordRunningStatus(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordRunningStatus(This,dwRecordIndex,pbVal) ) 
#endif
#endif
#ifndef __IDVB_ST_INTERFACE_DEFINED__
#define __IDVB_ST_INTERFACE_DEFINED__ 
extern const IID IID_IDVB_ST;
typedef struct IDVB_STVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVB_ST * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVB_ST * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVB_ST * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDVB_ST * This, ISectionList * pSectionList);
	HRESULT(STDMETHODCALLTYPE * GetDataLength) (IDVB_ST * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetData) (IDVB_ST * This, BYTE ** ppData);
	END_INTERFACE
} IDVB_STVtbl;
interface IDVB_ST
{
    CONST_VTBL struct IDVB_STVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVB_ST_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDVB_ST_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDVB_ST_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDVB_ST_Initialize(This,pSectionList)     ( (This)->lpVtbl -> Initialize(This,pSectionList) ) 
#define IDVB_ST_GetDataLength(This,pwVal)     ( (This)->lpVtbl -> GetDataLength(This,pwVal) ) 
#define IDVB_ST_GetData(This,ppData)     ( (This)->lpVtbl -> GetData(This,ppData) ) 
#endif
#endif
#ifndef __IDVB_TDT_INTERFACE_DEFINED__
#define __IDVB_TDT_INTERFACE_DEFINED__ 
extern const IID IID_IDVB_TDT;
typedef struct IDVB_TDTVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVB_TDT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVB_TDT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVB_TDT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDVB_TDT * This, ISectionList * pSectionList);
	HRESULT(STDMETHODCALLTYPE * GetUTCTime) (IDVB_TDT * This, MPEG_DATE_AND_TIME * pmdtVal);
	END_INTERFACE
} IDVB_TDTVtbl;
interface IDVB_TDT
{
    CONST_VTBL struct IDVB_TDTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVB_TDT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDVB_TDT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDVB_TDT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDVB_TDT_Initialize(This,pSectionList)     ( (This)->lpVtbl -> Initialize(This,pSectionList) ) 
#define IDVB_TDT_GetUTCTime(This,pmdtVal)     ( (This)->lpVtbl -> GetUTCTime(This,pmdtVal) ) 
#endif
#endif
#ifndef __IDVB_TOT_INTERFACE_DEFINED__
#define __IDVB_TOT_INTERFACE_DEFINED__ 
extern const IID IID_IDVB_TOT;
typedef struct IDVB_TOTVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVB_TOT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVB_TOT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVB_TOT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDVB_TOT * This, ISectionList * pSectionList);
	HRESULT(STDMETHODCALLTYPE * GetUTCTime) (IDVB_TOT * This, MPEG_DATE_AND_TIME * pmdtVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfTableDescriptors) (IDVB_TOT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByIndex) (IDVB_TOT * This, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByTag) (IDVB_TOT * This, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	END_INTERFACE
} IDVB_TOTVtbl;
interface IDVB_TOT
{
    CONST_VTBL struct IDVB_TOTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVB_TOT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDVB_TOT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDVB_TOT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDVB_TOT_Initialize(This,pSectionList)     ( (This)->lpVtbl -> Initialize(This,pSectionList) ) 
#define IDVB_TOT_GetUTCTime(This,pmdtVal)     ( (This)->lpVtbl -> GetUTCTime(This,pmdtVal) ) 
#define IDVB_TOT_GetCountOfTableDescriptors(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) ) 
#define IDVB_TOT_GetTableDescriptorByIndex(This,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) ) 
#define IDVB_TOT_GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) ) 
#endif
#endif
#ifndef __IDVB_DIT_INTERFACE_DEFINED__
#define __IDVB_DIT_INTERFACE_DEFINED__ 
extern const IID IID_IDVB_DIT;
typedef struct IDVB_DITVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVB_DIT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVB_DIT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVB_DIT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDVB_DIT * This, ISectionList * pSectionList);
	HRESULT(STDMETHODCALLTYPE * GetTransitionFlag) (IDVB_DIT * This, BOOL * pfVal);
	END_INTERFACE
} IDVB_DITVtbl;
interface IDVB_DIT
{
    CONST_VTBL struct IDVB_DITVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVB_DIT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDVB_DIT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDVB_DIT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDVB_DIT_Initialize(This,pSectionList)     ( (This)->lpVtbl -> Initialize(This,pSectionList) ) 
#define IDVB_DIT_GetTransitionFlag(This,pfVal)     ( (This)->lpVtbl -> GetTransitionFlag(This,pfVal) ) 
#endif
#endif
#ifndef __IDVB_SIT_INTERFACE_DEFINED__
#define __IDVB_SIT_INTERFACE_DEFINED__ 
extern const IID IID_IDVB_SIT;
typedef struct IDVB_SITVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDVB_SIT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDVB_SIT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDVB_SIT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDVB_SIT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IDVB_SIT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfTableDescriptors) (IDVB_SIT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByIndex) (IDVB_SIT * This, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByTag) (IDVB_SIT * This, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDVB_SIT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceId) (IDVB_SIT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordRunningStatus) (IDVB_SIT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IDVB_SIT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IDVB_SIT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IDVB_SIT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * RegisterForNextTable) (IDVB_SIT * This, HANDLE hNextTableAvailable);
	HRESULT(STDMETHODCALLTYPE * GetNextTable) (IDVB_SIT * This, DWORD dwTimeout, IDVB_SIT ** ppSIT);
	HRESULT(STDMETHODCALLTYPE * RegisterForWhenCurrent) (IDVB_SIT * This, HANDLE hNextTableIsCurrent);
	HRESULT(STDMETHODCALLTYPE * ConvertNextToCurrent) (IDVB_SIT * This);
	END_INTERFACE
} IDVB_SITVtbl;
interface IDVB_SIT
{
    CONST_VTBL struct IDVB_SITVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVB_SIT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDVB_SIT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDVB_SIT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDVB_SIT_Initialize(This,pSectionList,pMPEGData)     ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IDVB_SIT_GetVersionNumber(This,pbVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IDVB_SIT_GetCountOfTableDescriptors(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) ) 
#define IDVB_SIT_GetTableDescriptorByIndex(This,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) ) 
#define IDVB_SIT_GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) ) 
#define IDVB_SIT_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IDVB_SIT_GetRecordServiceId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordServiceId(This,dwRecordIndex,pwVal) ) 
#define IDVB_SIT_GetRecordRunningStatus(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordRunningStatus(This,dwRecordIndex,pbVal) ) 
#define IDVB_SIT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) ) 
#define IDVB_SIT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) ) 
#define IDVB_SIT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) ) 
#define IDVB_SIT_RegisterForNextTable(This,hNextTableAvailable)     ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) ) 
#define IDVB_SIT_GetNextTable(This,dwTimeout,ppSIT)     ( (This)->lpVtbl -> GetNextTable(This,dwTimeout,ppSIT) ) 
#define IDVB_SIT_RegisterForWhenCurrent(This,hNextTableIsCurrent)     ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) ) 
#define IDVB_SIT_ConvertNextToCurrent(This)     ( (This)->lpVtbl -> ConvertNextToCurrent(This) ) 
#endif
#endif
#ifndef __IISDB_BIT_INTERFACE_DEFINED__
#define __IISDB_BIT_INTERFACE_DEFINED__ 
extern const IID IID_IISDB_BIT;
typedef struct IISDB_BITVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IISDB_BIT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IISDB_BIT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IISDB_BIT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IISDB_BIT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IISDB_BIT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetOriginalNetworkId) (IISDB_BIT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetBroadcastViewPropriety) (IISDB_BIT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfTableDescriptors) (IISDB_BIT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByIndex) (IISDB_BIT * This, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByTag) (IISDB_BIT * This, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IISDB_BIT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordBroadcasterId) (IISDB_BIT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IISDB_BIT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IISDB_BIT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IISDB_BIT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetVersionHash) (IISDB_BIT * This, DWORD * pdwVersionHash);
	END_INTERFACE
} IISDB_BITVtbl;
interface IISDB_BIT
{
    CONST_VTBL struct IISDB_BITVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IISDB_BIT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IISDB_BIT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IISDB_BIT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IISDB_BIT_Initialize(This,pSectionList,pMPEGData)     ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IISDB_BIT_GetVersionNumber(This,pbVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IISDB_BIT_GetOriginalNetworkId(This,pwVal)     ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) ) 
#define IISDB_BIT_GetBroadcastViewPropriety(This,pbVal)     ( (This)->lpVtbl -> GetBroadcastViewPropriety(This,pbVal) ) 
#define IISDB_BIT_GetCountOfTableDescriptors(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) ) 
#define IISDB_BIT_GetTableDescriptorByIndex(This,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) ) 
#define IISDB_BIT_GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) ) 
#define IISDB_BIT_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IISDB_BIT_GetRecordBroadcasterId(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordBroadcasterId(This,dwRecordIndex,pbVal) ) 
#define IISDB_BIT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) ) 
#define IISDB_BIT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) ) 
#define IISDB_BIT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) ) 
#define IISDB_BIT_GetVersionHash(This,pdwVersionHash)     ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) ) 
#endif
#endif
#ifndef __IISDB_NBIT_INTERFACE_DEFINED__
#define __IISDB_NBIT_INTERFACE_DEFINED__ 
extern const IID IID_IISDB_NBIT;
typedef struct IISDB_NBITVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IISDB_NBIT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IISDB_NBIT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IISDB_NBIT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IISDB_NBIT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IISDB_NBIT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetOriginalNetworkId) (IISDB_NBIT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IISDB_NBIT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordInformationId) (IISDB_NBIT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordInformationType) (IISDB_NBIT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptionBodyLocation) (IISDB_NBIT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordMessageSectionNumber) (IISDB_NBIT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordUserDefined) (IISDB_NBIT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordNumberOfKeys) (IISDB_NBIT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordKeys) (IISDB_NBIT * This, DWORD dwRecordIndex, BYTE ** pbKeys);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IISDB_NBIT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IISDB_NBIT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IISDB_NBIT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetVersionHash) (IISDB_NBIT * This, DWORD * pdwVersionHash);
	END_INTERFACE
} IISDB_NBITVtbl;
interface IISDB_NBIT
{
    CONST_VTBL struct IISDB_NBITVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IISDB_NBIT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IISDB_NBIT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IISDB_NBIT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IISDB_NBIT_Initialize(This,pSectionList,pMPEGData)     ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IISDB_NBIT_GetVersionNumber(This,pbVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IISDB_NBIT_GetOriginalNetworkId(This,pwVal)     ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) ) 
#define IISDB_NBIT_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IISDB_NBIT_GetRecordInformationId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordInformationId(This,dwRecordIndex,pwVal) ) 
#define IISDB_NBIT_GetRecordInformationType(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordInformationType(This,dwRecordIndex,pbVal) ) 
#define IISDB_NBIT_GetRecordDescriptionBodyLocation(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordDescriptionBodyLocation(This,dwRecordIndex,pbVal) ) 
#define IISDB_NBIT_GetRecordMessageSectionNumber(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordMessageSectionNumber(This,dwRecordIndex,pbVal) ) 
#define IISDB_NBIT_GetRecordUserDefined(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordUserDefined(This,dwRecordIndex,pbVal) ) 
#define IISDB_NBIT_GetRecordNumberOfKeys(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordNumberOfKeys(This,dwRecordIndex,pbVal) ) 
#define IISDB_NBIT_GetRecordKeys(This,dwRecordIndex,pbKeys)     ( (This)->lpVtbl -> GetRecordKeys(This,dwRecordIndex,pbKeys) ) 
#define IISDB_NBIT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) ) 
#define IISDB_NBIT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) ) 
#define IISDB_NBIT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) ) 
#define IISDB_NBIT_GetVersionHash(This,pdwVersionHash)     ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) ) 
#endif
#endif
#ifndef __IISDB_LDT_INTERFACE_DEFINED__
#define __IISDB_LDT_INTERFACE_DEFINED__ 
extern const IID IID_IISDB_LDT;
typedef struct IISDB_LDTVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IISDB_LDT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IISDB_LDT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IISDB_LDT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IISDB_LDT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IISDB_LDT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetOriginalServiceId) (IISDB_LDT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetTransportStreamId) (IISDB_LDT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetOriginalNetworkId) (IISDB_LDT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IISDB_LDT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptionId) (IISDB_LDT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IISDB_LDT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IISDB_LDT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IISDB_LDT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetVersionHash) (IISDB_LDT * This, DWORD * pdwVersionHash);
	END_INTERFACE
} IISDB_LDTVtbl;
interface IISDB_LDT
{
    CONST_VTBL struct IISDB_LDTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IISDB_LDT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IISDB_LDT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IISDB_LDT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IISDB_LDT_Initialize(This,pSectionList,pMPEGData)     ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IISDB_LDT_GetVersionNumber(This,pbVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IISDB_LDT_GetOriginalServiceId(This,pwVal)     ( (This)->lpVtbl -> GetOriginalServiceId(This,pwVal) ) 
#define IISDB_LDT_GetTransportStreamId(This,pwVal)     ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) ) 
#define IISDB_LDT_GetOriginalNetworkId(This,pwVal)     ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) ) 
#define IISDB_LDT_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IISDB_LDT_GetRecordDescriptionId(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordDescriptionId(This,dwRecordIndex,pwVal) ) 
#define IISDB_LDT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) ) 
#define IISDB_LDT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) ) 
#define IISDB_LDT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) ) 
#define IISDB_LDT_GetVersionHash(This,pdwVersionHash)     ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) ) 
#endif
#endif
#ifndef __IISDB_SDTT_INTERFACE_DEFINED__
#define __IISDB_SDTT_INTERFACE_DEFINED__ 
extern const IID IID_IISDB_SDTT;
typedef struct IISDB_SDTTVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IISDB_SDTT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IISDB_SDTT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IISDB_SDTT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IISDB_SDTT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IISDB_SDTT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTableIdExt) (IISDB_SDTT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetTransportStreamId) (IISDB_SDTT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetOriginalNetworkId) (IISDB_SDTT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetServiceId) (IISDB_SDTT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IISDB_SDTT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordGroup) (IISDB_SDTT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordTargetVersion) (IISDB_SDTT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordNewVersion) (IISDB_SDTT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDownloadLevel) (IISDB_SDTT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordVersionIndicator) (IISDB_SDTT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordScheduleTimeShiftInformation) (IISDB_SDTT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfSchedules) (IISDB_SDTT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordStartTimeByIndex) (IISDB_SDTT * This, DWORD dwRecordIndex, DWORD dwIndex, MPEG_DATE_AND_TIME * pmdtVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDurationByIndex) (IISDB_SDTT * This, DWORD dwRecordIndex, DWORD dwIndex, MPEG_DURATION * pmdVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IISDB_SDTT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IISDB_SDTT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IISDB_SDTT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetVersionHash) (IISDB_SDTT * This, DWORD * pdwVersionHash);
	END_INTERFACE
} IISDB_SDTTVtbl;
interface IISDB_SDTT
{
    CONST_VTBL struct IISDB_SDTTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IISDB_SDTT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IISDB_SDTT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IISDB_SDTT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IISDB_SDTT_Initialize(This,pSectionList,pMPEGData)     ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IISDB_SDTT_GetVersionNumber(This,pbVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IISDB_SDTT_GetTableIdExt(This,pwVal)     ( (This)->lpVtbl -> GetTableIdExt(This,pwVal) ) 
#define IISDB_SDTT_GetTransportStreamId(This,pwVal)     ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) ) 
#define IISDB_SDTT_GetOriginalNetworkId(This,pwVal)     ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) ) 
#define IISDB_SDTT_GetServiceId(This,pwVal)     ( (This)->lpVtbl -> GetServiceId(This,pwVal) ) 
#define IISDB_SDTT_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IISDB_SDTT_GetRecordGroup(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordGroup(This,dwRecordIndex,pbVal) ) 
#define IISDB_SDTT_GetRecordTargetVersion(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordTargetVersion(This,dwRecordIndex,pwVal) ) 
#define IISDB_SDTT_GetRecordNewVersion(This,dwRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordNewVersion(This,dwRecordIndex,pwVal) ) 
#define IISDB_SDTT_GetRecordDownloadLevel(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordDownloadLevel(This,dwRecordIndex,pbVal) ) 
#define IISDB_SDTT_GetRecordVersionIndicator(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordVersionIndicator(This,dwRecordIndex,pbVal) ) 
#define IISDB_SDTT_GetRecordScheduleTimeShiftInformation(This,dwRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordScheduleTimeShiftInformation(This,dwRecordIndex,pbVal) ) 
#define IISDB_SDTT_GetRecordCountOfSchedules(This,dwRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCountOfSchedules(This,dwRecordIndex,pdwVal) ) 
#define IISDB_SDTT_GetRecordStartTimeByIndex(This,dwRecordIndex,dwIndex,pmdtVal)     ( (This)->lpVtbl -> GetRecordStartTimeByIndex(This,dwRecordIndex,dwIndex,pmdtVal) ) 
#define IISDB_SDTT_GetRecordDurationByIndex(This,dwRecordIndex,dwIndex,pmdVal)     ( (This)->lpVtbl -> GetRecordDurationByIndex(This,dwRecordIndex,dwIndex,pmdVal) ) 
#define IISDB_SDTT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) ) 
#define IISDB_SDTT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) ) 
#define IISDB_SDTT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) ) 
#define IISDB_SDTT_GetVersionHash(This,pdwVersionHash)     ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) ) 
#endif
#endif
#ifndef __IISDB_CDT_INTERFACE_DEFINED__
#define __IISDB_CDT_INTERFACE_DEFINED__ 
extern const IID IID_IISDB_CDT;
typedef struct IISDB_CDTVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IISDB_CDT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IISDB_CDT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IISDB_CDT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IISDB_CDT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData, BYTE bSectionNumber);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IISDB_CDT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetDownloadDataId) (IISDB_CDT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetSectionNumber) (IISDB_CDT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetOriginalNetworkId) (IISDB_CDT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetDataType) (IISDB_CDT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfTableDescriptors) (IISDB_CDT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByIndex) (IISDB_CDT * This, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByTag) (IISDB_CDT * This, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetSizeOfDataModule) (IISDB_CDT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetDataModule) (IISDB_CDT * This, BYTE ** pbData);
	HRESULT(STDMETHODCALLTYPE * GetVersionHash) (IISDB_CDT * This, DWORD * pdwVersionHash);
	END_INTERFACE
} IISDB_CDTVtbl;
interface IISDB_CDT
{
    CONST_VTBL struct IISDB_CDTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IISDB_CDT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IISDB_CDT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IISDB_CDT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IISDB_CDT_Initialize(This,pSectionList,pMPEGData,bSectionNumber)     ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData,bSectionNumber) ) 
#define IISDB_CDT_GetVersionNumber(This,pbVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IISDB_CDT_GetDownloadDataId(This,pwVal)     ( (This)->lpVtbl -> GetDownloadDataId(This,pwVal) ) 
#define IISDB_CDT_GetSectionNumber(This,pbVal)     ( (This)->lpVtbl -> GetSectionNumber(This,pbVal) ) 
#define IISDB_CDT_GetOriginalNetworkId(This,pwVal)     ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) ) 
#define IISDB_CDT_GetDataType(This,pbVal)     ( (This)->lpVtbl -> GetDataType(This,pbVal) ) 
#define IISDB_CDT_GetCountOfTableDescriptors(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) ) 
#define IISDB_CDT_GetTableDescriptorByIndex(This,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) ) 
#define IISDB_CDT_GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) ) 
#define IISDB_CDT_GetSizeOfDataModule(This,pdwVal)     ( (This)->lpVtbl -> GetSizeOfDataModule(This,pdwVal) ) 
#define IISDB_CDT_GetDataModule(This,pbData)     ( (This)->lpVtbl -> GetDataModule(This,pbData) ) 
#define IISDB_CDT_GetVersionHash(This,pdwVersionHash)     ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) ) 
#endif
#endif
#ifndef __IISDB_EMM_INTERFACE_DEFINED__
#define __IISDB_EMM_INTERFACE_DEFINED__ 
extern const IID IID_IISDB_EMM;
typedef struct IISDB_EMMVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IISDB_EMM * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IISDB_EMM * This);
	ULONG(STDMETHODCALLTYPE * Release) (IISDB_EMM * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IISDB_EMM * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IISDB_EMM * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTableIdExtension) (IISDB_EMM * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetDataBytes) (IISDB_EMM * This, WORD * pwBufferLength, BYTE * pbBuffer);
	HRESULT(STDMETHODCALLTYPE * GetSharedEmmMessage) (IISDB_EMM * This, WORD * pwLength, BYTE ** ppbMessage);
	HRESULT(STDMETHODCALLTYPE * GetIndividualEmmMessage) (IISDB_EMM * This, IUnknown * pUnknown, WORD * pwLength, BYTE ** ppbMessage);
	HRESULT(STDMETHODCALLTYPE * GetVersionHash) (IISDB_EMM * This, DWORD * pdwVersionHash);
	END_INTERFACE
} IISDB_EMMVtbl;
interface IISDB_EMM
{
    CONST_VTBL struct IISDB_EMMVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IISDB_EMM_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IISDB_EMM_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IISDB_EMM_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IISDB_EMM_Initialize(This,pSectionList,pMPEGData)     ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IISDB_EMM_GetVersionNumber(This,pbVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IISDB_EMM_GetTableIdExtension(This,pwVal)     ( (This)->lpVtbl -> GetTableIdExtension(This,pwVal) ) 
#define IISDB_EMM_GetDataBytes(This,pwBufferLength,pbBuffer)     ( (This)->lpVtbl -> GetDataBytes(This,pwBufferLength,pbBuffer) ) 
#define IISDB_EMM_GetSharedEmmMessage(This,pwLength,ppbMessage)     ( (This)->lpVtbl -> GetSharedEmmMessage(This,pwLength,ppbMessage) ) 
#define IISDB_EMM_GetIndividualEmmMessage(This,pUnknown,pwLength,ppbMessage)     ( (This)->lpVtbl -> GetIndividualEmmMessage(This,pUnknown,pwLength,ppbMessage) ) 
#define IISDB_EMM_GetVersionHash(This,pdwVersionHash)     ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) ) 
#endif
#endif
#ifndef __IDvbServiceAttributeDescriptor_INTERFACE_DEFINED__
#define __IDvbServiceAttributeDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbServiceAttributeDescriptor;
typedef struct IDvbServiceAttributeDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbServiceAttributeDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbServiceAttributeDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbServiceAttributeDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbServiceAttributeDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbServiceAttributeDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbServiceAttributeDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceId) (IDvbServiceAttributeDescriptor * This, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordNumericSelectionFlag) (IDvbServiceAttributeDescriptor * This, BYTE bRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordVisibleServiceFlag) (IDvbServiceAttributeDescriptor * This, BYTE bRecordIndex, BOOL * pfVal);
	END_INTERFACE
} IDvbServiceAttributeDescriptorVtbl;
interface IDvbServiceAttributeDescriptor
{
    CONST_VTBL struct IDvbServiceAttributeDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbServiceAttributeDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbServiceAttributeDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbServiceAttributeDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbServiceAttributeDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbServiceAttributeDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbServiceAttributeDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbServiceAttributeDescriptor_GetRecordServiceId(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordServiceId(This,bRecordIndex,pwVal) ) 
#define IDvbServiceAttributeDescriptor_GetRecordNumericSelectionFlag(This,bRecordIndex,pfVal)     ( (This)->lpVtbl -> GetRecordNumericSelectionFlag(This,bRecordIndex,pfVal) ) 
#define IDvbServiceAttributeDescriptor_GetRecordVisibleServiceFlag(This,bRecordIndex,pfVal)     ( (This)->lpVtbl -> GetRecordVisibleServiceFlag(This,bRecordIndex,pfVal) ) 
#endif
#endif 
typedef enum __MIDL___MIDL_itf_dvbsiparser_0000_0022_0001
{
	CRID_LOCATION_IN_DESCRIPTOR	= 0,
	CRID_LOCATION_IN_CIT	= 0x1,
	CRID_LOCATION_DVB_RESERVED1	= 0x2,
	CRID_LOCATION_DVB_RESERVED2	= 0x3
} 	CRID_LOCATION;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0022_v0_0_s_ifspec;
#ifndef __IDvbContentIdentifierDescriptor_INTERFACE_DEFINED__
#define __IDvbContentIdentifierDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbContentIdentifierDescriptor;
typedef struct IDvbContentIdentifierDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbContentIdentifierDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbContentIdentifierDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbContentIdentifierDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbContentIdentifierDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbContentIdentifierDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbContentIdentifierDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCrid) (IDvbContentIdentifierDescriptor * This, BYTE bRecordIndex, BYTE * pbType, BYTE * pbLocation, BYTE * pbLength, BYTE ** ppbBytes);
	END_INTERFACE
} IDvbContentIdentifierDescriptorVtbl;
interface IDvbContentIdentifierDescriptor
{
    CONST_VTBL struct IDvbContentIdentifierDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbContentIdentifierDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbContentIdentifierDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbContentIdentifierDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbContentIdentifierDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbContentIdentifierDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbContentIdentifierDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbContentIdentifierDescriptor_GetRecordCrid(This,bRecordIndex,pbType,pbLocation,pbLength,ppbBytes)     ( (This)->lpVtbl -> GetRecordCrid(This,bRecordIndex,pbType,pbLocation,pbLength,ppbBytes) ) 
#endif
#endif
#ifndef __IDvbDefaultAuthorityDescriptor_INTERFACE_DEFINED__
#define __IDvbDefaultAuthorityDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbDefaultAuthorityDescriptor;
typedef struct IDvbDefaultAuthorityDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbDefaultAuthorityDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbDefaultAuthorityDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbDefaultAuthorityDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbDefaultAuthorityDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbDefaultAuthorityDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetDefaultAuthority) (IDvbDefaultAuthorityDescriptor * This, BYTE * pbLength, BYTE ** ppbBytes);
	END_INTERFACE
} IDvbDefaultAuthorityDescriptorVtbl;
interface IDvbDefaultAuthorityDescriptor
{
    CONST_VTBL struct IDvbDefaultAuthorityDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbDefaultAuthorityDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbDefaultAuthorityDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbDefaultAuthorityDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbDefaultAuthorityDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbDefaultAuthorityDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbDefaultAuthorityDescriptor_GetDefaultAuthority(This,pbLength,ppbBytes)     ( (This)->lpVtbl -> GetDefaultAuthority(This,pbLength,ppbBytes) ) 
#endif
#endif
#ifndef __IDvbSatelliteDeliverySystemDescriptor_INTERFACE_DEFINED__
#define __IDvbSatelliteDeliverySystemDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbSatelliteDeliverySystemDescriptor;
typedef struct IDvbSatelliteDeliverySystemDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbSatelliteDeliverySystemDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbSatelliteDeliverySystemDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbSatelliteDeliverySystemDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbSatelliteDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbSatelliteDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetFrequency) (IDvbSatelliteDeliverySystemDescriptor * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetOrbitalPosition) (IDvbSatelliteDeliverySystemDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetWestEastFlag) (IDvbSatelliteDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetPolarization) (IDvbSatelliteDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetModulation) (IDvbSatelliteDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetSymbolRate) (IDvbSatelliteDeliverySystemDescriptor * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetFECInner) (IDvbSatelliteDeliverySystemDescriptor * This, BYTE * pbVal);
	END_INTERFACE
} IDvbSatelliteDeliverySystemDescriptorVtbl;
interface IDvbSatelliteDeliverySystemDescriptor
{
    CONST_VTBL struct IDvbSatelliteDeliverySystemDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbSatelliteDeliverySystemDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbSatelliteDeliverySystemDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbSatelliteDeliverySystemDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbSatelliteDeliverySystemDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbSatelliteDeliverySystemDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbSatelliteDeliverySystemDescriptor_GetFrequency(This,pdwVal)     ( (This)->lpVtbl -> GetFrequency(This,pdwVal) ) 
#define IDvbSatelliteDeliverySystemDescriptor_GetOrbitalPosition(This,pwVal)     ( (This)->lpVtbl -> GetOrbitalPosition(This,pwVal) ) 
#define IDvbSatelliteDeliverySystemDescriptor_GetWestEastFlag(This,pbVal)     ( (This)->lpVtbl -> GetWestEastFlag(This,pbVal) ) 
#define IDvbSatelliteDeliverySystemDescriptor_GetPolarization(This,pbVal)     ( (This)->lpVtbl -> GetPolarization(This,pbVal) ) 
#define IDvbSatelliteDeliverySystemDescriptor_GetModulation(This,pbVal)     ( (This)->lpVtbl -> GetModulation(This,pbVal) ) 
#define IDvbSatelliteDeliverySystemDescriptor_GetSymbolRate(This,pdwVal)     ( (This)->lpVtbl -> GetSymbolRate(This,pdwVal) ) 
#define IDvbSatelliteDeliverySystemDescriptor_GetFECInner(This,pbVal)     ( (This)->lpVtbl -> GetFECInner(This,pbVal) ) 
#endif
#endif
#ifndef __IDvbCableDeliverySystemDescriptor_INTERFACE_DEFINED__
#define __IDvbCableDeliverySystemDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbCableDeliverySystemDescriptor;
typedef struct IDvbCableDeliverySystemDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbCableDeliverySystemDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbCableDeliverySystemDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbCableDeliverySystemDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbCableDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbCableDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetFrequency) (IDvbCableDeliverySystemDescriptor * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetFECOuter) (IDvbCableDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetModulation) (IDvbCableDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetSymbolRate) (IDvbCableDeliverySystemDescriptor * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetFECInner) (IDvbCableDeliverySystemDescriptor * This, BYTE * pbVal);
	END_INTERFACE
} IDvbCableDeliverySystemDescriptorVtbl;
interface IDvbCableDeliverySystemDescriptor
{
    CONST_VTBL struct IDvbCableDeliverySystemDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbCableDeliverySystemDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbCableDeliverySystemDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbCableDeliverySystemDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbCableDeliverySystemDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbCableDeliverySystemDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbCableDeliverySystemDescriptor_GetFrequency(This,pdwVal)     ( (This)->lpVtbl -> GetFrequency(This,pdwVal) ) 
#define IDvbCableDeliverySystemDescriptor_GetFECOuter(This,pbVal)     ( (This)->lpVtbl -> GetFECOuter(This,pbVal) ) 
#define IDvbCableDeliverySystemDescriptor_GetModulation(This,pbVal)     ( (This)->lpVtbl -> GetModulation(This,pbVal) ) 
#define IDvbCableDeliverySystemDescriptor_GetSymbolRate(This,pdwVal)     ( (This)->lpVtbl -> GetSymbolRate(This,pdwVal) ) 
#define IDvbCableDeliverySystemDescriptor_GetFECInner(This,pbVal)     ( (This)->lpVtbl -> GetFECInner(This,pbVal) ) 
#endif
#endif
#ifndef __IDvbTerrestrialDeliverySystemDescriptor_INTERFACE_DEFINED__
#define __IDvbTerrestrialDeliverySystemDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbTerrestrialDeliverySystemDescriptor;
typedef struct IDvbTerrestrialDeliverySystemDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbTerrestrialDeliverySystemDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbTerrestrialDeliverySystemDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbTerrestrialDeliverySystemDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCentreFrequency) (IDvbTerrestrialDeliverySystemDescriptor * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetBandwidth) (IDvbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetConstellation) (IDvbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetHierarchyInformation) (IDvbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCodeRateHPStream) (IDvbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCodeRateLPStream) (IDvbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetGuardInterval) (IDvbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTransmissionMode) (IDvbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetOtherFrequencyFlag) (IDvbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	END_INTERFACE
} IDvbTerrestrialDeliverySystemDescriptorVtbl;
interface IDvbTerrestrialDeliverySystemDescriptor
{
    CONST_VTBL struct IDvbTerrestrialDeliverySystemDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbTerrestrialDeliverySystemDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbTerrestrialDeliverySystemDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbTerrestrialDeliverySystemDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbTerrestrialDeliverySystemDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbTerrestrialDeliverySystemDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbTerrestrialDeliverySystemDescriptor_GetCentreFrequency(This,pdwVal)     ( (This)->lpVtbl -> GetCentreFrequency(This,pdwVal) ) 
#define IDvbTerrestrialDeliverySystemDescriptor_GetBandwidth(This,pbVal)     ( (This)->lpVtbl -> GetBandwidth(This,pbVal) ) 
#define IDvbTerrestrialDeliverySystemDescriptor_GetConstellation(This,pbVal)     ( (This)->lpVtbl -> GetConstellation(This,pbVal) ) 
#define IDvbTerrestrialDeliverySystemDescriptor_GetHierarchyInformation(This,pbVal)     ( (This)->lpVtbl -> GetHierarchyInformation(This,pbVal) ) 
#define IDvbTerrestrialDeliverySystemDescriptor_GetCodeRateHPStream(This,pbVal)     ( (This)->lpVtbl -> GetCodeRateHPStream(This,pbVal) ) 
#define IDvbTerrestrialDeliverySystemDescriptor_GetCodeRateLPStream(This,pbVal)     ( (This)->lpVtbl -> GetCodeRateLPStream(This,pbVal) ) 
#define IDvbTerrestrialDeliverySystemDescriptor_GetGuardInterval(This,pbVal)     ( (This)->lpVtbl -> GetGuardInterval(This,pbVal) ) 
#define IDvbTerrestrialDeliverySystemDescriptor_GetTransmissionMode(This,pbVal)     ( (This)->lpVtbl -> GetTransmissionMode(This,pbVal) ) 
#define IDvbTerrestrialDeliverySystemDescriptor_GetOtherFrequencyFlag(This,pbVal)     ( (This)->lpVtbl -> GetOtherFrequencyFlag(This,pbVal) ) 
#endif
#endif
#ifndef __IDvbTerrestrial2DeliverySystemDescriptor_INTERFACE_DEFINED__
#define __IDvbTerrestrial2DeliverySystemDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbTerrestrial2DeliverySystemDescriptor;
typedef struct IDvbTerrestrial2DeliverySystemDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbTerrestrial2DeliverySystemDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbTerrestrial2DeliverySystemDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbTerrestrial2DeliverySystemDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbTerrestrial2DeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbTerrestrial2DeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTagExtension) (IDvbTerrestrial2DeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCentreFrequency) (IDvbTerrestrial2DeliverySystemDescriptor * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetPLPId) (IDvbTerrestrial2DeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetT2SystemId) (IDvbTerrestrial2DeliverySystemDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetMultipleInputMode) (IDvbTerrestrial2DeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetBandwidth) (IDvbTerrestrial2DeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetGuardInterval) (IDvbTerrestrial2DeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTransmissionMode) (IDvbTerrestrial2DeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCellId) (IDvbTerrestrial2DeliverySystemDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetOtherFrequencyFlag) (IDvbTerrestrial2DeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTFSFlag) (IDvbTerrestrial2DeliverySystemDescriptor * This, BYTE * pbVal);
	END_INTERFACE
} IDvbTerrestrial2DeliverySystemDescriptorVtbl;
interface IDvbTerrestrial2DeliverySystemDescriptor
{
    CONST_VTBL struct IDvbTerrestrial2DeliverySystemDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbTerrestrial2DeliverySystemDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_GetTagExtension(This,pbVal)     ( (This)->lpVtbl -> GetTagExtension(This,pbVal) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_GetCentreFrequency(This,pdwVal)     ( (This)->lpVtbl -> GetCentreFrequency(This,pdwVal) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_GetPLPId(This,pbVal)     ( (This)->lpVtbl -> GetPLPId(This,pbVal) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_GetT2SystemId(This,pwVal)     ( (This)->lpVtbl -> GetT2SystemId(This,pwVal) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_GetMultipleInputMode(This,pbVal)     ( (This)->lpVtbl -> GetMultipleInputMode(This,pbVal) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_GetBandwidth(This,pbVal)     ( (This)->lpVtbl -> GetBandwidth(This,pbVal) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_GetGuardInterval(This,pbVal)     ( (This)->lpVtbl -> GetGuardInterval(This,pbVal) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_GetTransmissionMode(This,pbVal)     ( (This)->lpVtbl -> GetTransmissionMode(This,pbVal) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_GetCellId(This,pwVal)     ( (This)->lpVtbl -> GetCellId(This,pwVal) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_GetOtherFrequencyFlag(This,pbVal)     ( (This)->lpVtbl -> GetOtherFrequencyFlag(This,pbVal) ) 
#define IDvbTerrestrial2DeliverySystemDescriptor_GetTFSFlag(This,pbVal)     ( (This)->lpVtbl -> GetTFSFlag(This,pbVal) ) 
#endif
#endif
#ifndef __IDvbFrequencyListDescriptor_INTERFACE_DEFINED__
#define __IDvbFrequencyListDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbFrequencyListDescriptor;
typedef struct IDvbFrequencyListDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbFrequencyListDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbFrequencyListDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbFrequencyListDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbFrequencyListDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbFrequencyListDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCodingType) (IDvbFrequencyListDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbFrequencyListDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCentreFrequency) (IDvbFrequencyListDescriptor * This, BYTE bRecordIndex, DWORD * pdwVal);
	END_INTERFACE
} IDvbFrequencyListDescriptorVtbl;
interface IDvbFrequencyListDescriptor
{
    CONST_VTBL struct IDvbFrequencyListDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbFrequencyListDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbFrequencyListDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbFrequencyListDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbFrequencyListDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbFrequencyListDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbFrequencyListDescriptor_GetCodingType(This,pbVal)     ( (This)->lpVtbl -> GetCodingType(This,pbVal) ) 
#define IDvbFrequencyListDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbFrequencyListDescriptor_GetRecordCentreFrequency(This,bRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCentreFrequency(This,bRecordIndex,pdwVal) ) 
#endif
#endif
#ifndef __IDvbPrivateDataSpecifierDescriptor_INTERFACE_DEFINED__
#define __IDvbPrivateDataSpecifierDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbPrivateDataSpecifierDescriptor;
typedef struct IDvbPrivateDataSpecifierDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbPrivateDataSpecifierDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbPrivateDataSpecifierDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbPrivateDataSpecifierDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbPrivateDataSpecifierDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbPrivateDataSpecifierDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetPrivateDataSpecifier) (IDvbPrivateDataSpecifierDescriptor * This, DWORD * pdwVal);
	END_INTERFACE
} IDvbPrivateDataSpecifierDescriptorVtbl;
interface IDvbPrivateDataSpecifierDescriptor
{
    CONST_VTBL struct IDvbPrivateDataSpecifierDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbPrivateDataSpecifierDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbPrivateDataSpecifierDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbPrivateDataSpecifierDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbPrivateDataSpecifierDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbPrivateDataSpecifierDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbPrivateDataSpecifierDescriptor_GetPrivateDataSpecifier(This,pdwVal)     ( (This)->lpVtbl -> GetPrivateDataSpecifier(This,pdwVal) ) 
#endif
#endif
#ifndef __IDvbLogicalChannelDescriptor_INTERFACE_DEFINED__
#define __IDvbLogicalChannelDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbLogicalChannelDescriptor;
typedef struct IDvbLogicalChannelDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbLogicalChannelDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbLogicalChannelDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbLogicalChannelDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbLogicalChannelDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbLogicalChannelDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbLogicalChannelDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceId) (IDvbLogicalChannelDescriptor * This, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordLogicalChannelNumber) (IDvbLogicalChannelDescriptor * This, BYTE bRecordIndex, WORD * pwVal);
	END_INTERFACE
} IDvbLogicalChannelDescriptorVtbl;
interface IDvbLogicalChannelDescriptor
{
    CONST_VTBL struct IDvbLogicalChannelDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbLogicalChannelDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbLogicalChannelDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbLogicalChannelDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbLogicalChannelDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbLogicalChannelDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbLogicalChannelDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbLogicalChannelDescriptor_GetRecordServiceId(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordServiceId(This,bRecordIndex,pwVal) ) 
#define IDvbLogicalChannelDescriptor_GetRecordLogicalChannelNumber(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordLogicalChannelNumber(This,bRecordIndex,pwVal) ) 
#endif
#endif
#ifndef __IDvbLogicalChannelDescriptor2_INTERFACE_DEFINED__
#define __IDvbLogicalChannelDescriptor2_INTERFACE_DEFINED__ 
extern const IID IID_IDvbLogicalChannelDescriptor2;
typedef struct IDvbLogicalChannelDescriptor2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbLogicalChannelDescriptor2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbLogicalChannelDescriptor2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbLogicalChannelDescriptor2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbLogicalChannelDescriptor2 * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbLogicalChannelDescriptor2 * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbLogicalChannelDescriptor2 * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceId) (IDvbLogicalChannelDescriptor2 * This, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordLogicalChannelNumber) (IDvbLogicalChannelDescriptor2 * This, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordLogicalChannelAndVisibility) (IDvbLogicalChannelDescriptor2 * This, BYTE bRecordIndex, WORD * pwVal);
	END_INTERFACE
} IDvbLogicalChannelDescriptor2Vtbl;
interface IDvbLogicalChannelDescriptor2
{
    CONST_VTBL struct IDvbLogicalChannelDescriptor2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbLogicalChannelDescriptor2_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbLogicalChannelDescriptor2_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbLogicalChannelDescriptor2_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbLogicalChannelDescriptor2_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbLogicalChannelDescriptor2_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbLogicalChannelDescriptor2_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbLogicalChannelDescriptor2_GetRecordServiceId(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordServiceId(This,bRecordIndex,pwVal) ) 
#define IDvbLogicalChannelDescriptor2_GetRecordLogicalChannelNumber(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordLogicalChannelNumber(This,bRecordIndex,pwVal) ) 
#define IDvbLogicalChannelDescriptor2_GetRecordLogicalChannelAndVisibility(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordLogicalChannelAndVisibility(This,bRecordIndex,pwVal) ) 
#endif
#endif
#ifndef __IDvbLogicalChannel2Descriptor_INTERFACE_DEFINED__
#define __IDvbLogicalChannel2Descriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbLogicalChannel2Descriptor;
typedef struct IDvbLogicalChannel2DescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbLogicalChannel2Descriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbLogicalChannel2Descriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbLogicalChannel2Descriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbLogicalChannel2Descriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbLogicalChannel2Descriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbLogicalChannel2Descriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceId) (IDvbLogicalChannel2Descriptor * This, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordLogicalChannelNumber) (IDvbLogicalChannel2Descriptor * This, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordLogicalChannelAndVisibility) (IDvbLogicalChannel2Descriptor * This, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfLists) (IDvbLogicalChannel2Descriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetListId) (IDvbLogicalChannel2Descriptor * This, BYTE bListIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetListNameW) (IDvbLogicalChannel2Descriptor * This, BYTE bListIndex, DVB_STRCONV_MODE convMode, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetListCountryCode) (IDvbLogicalChannel2Descriptor * This, BYTE bListIndex, char *pszCode);
	HRESULT(STDMETHODCALLTYPE * GetListCountOfRecords) (IDvbLogicalChannel2Descriptor * This, BYTE bChannelListIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetListRecordServiceId) (IDvbLogicalChannel2Descriptor * This, BYTE bListIndex, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetListRecordLogicalChannelNumber) (IDvbLogicalChannel2Descriptor * This, BYTE bListIndex, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetListRecordLogicalChannelAndVisibility) (IDvbLogicalChannel2Descriptor * This, BYTE bListIndex, BYTE bRecordIndex, WORD * pwVal);
	END_INTERFACE
} IDvbLogicalChannel2DescriptorVtbl;
interface IDvbLogicalChannel2Descriptor
{
    CONST_VTBL struct IDvbLogicalChannel2DescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbLogicalChannel2Descriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbLogicalChannel2Descriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbLogicalChannel2Descriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbLogicalChannel2Descriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbLogicalChannel2Descriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbLogicalChannel2Descriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbLogicalChannel2Descriptor_GetRecordServiceId(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordServiceId(This,bRecordIndex,pwVal) ) 
#define IDvbLogicalChannel2Descriptor_GetRecordLogicalChannelNumber(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordLogicalChannelNumber(This,bRecordIndex,pwVal) ) 
#define IDvbLogicalChannel2Descriptor_GetRecordLogicalChannelAndVisibility(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordLogicalChannelAndVisibility(This,bRecordIndex,pwVal) ) 
#define IDvbLogicalChannel2Descriptor_GetCountOfLists(This,pbVal)     ( (This)->lpVtbl -> GetCountOfLists(This,pbVal) ) 
#define IDvbLogicalChannel2Descriptor_GetListId(This,bListIndex,pbVal)     ( (This)->lpVtbl -> GetListId(This,bListIndex,pbVal) ) 
#define IDvbLogicalChannel2Descriptor_GetListNameW(This,bListIndex,convMode,pbstrName)     ( (This)->lpVtbl -> GetListNameW(This,bListIndex,convMode,pbstrName) ) 
#define IDvbLogicalChannel2Descriptor_GetListCountryCode(This,bListIndex,pszCode)     ( (This)->lpVtbl -> GetListCountryCode(This,bListIndex,pszCode) ) 
#define IDvbLogicalChannel2Descriptor_GetListCountOfRecords(This,bChannelListIndex,pbVal)     ( (This)->lpVtbl -> GetListCountOfRecords(This,bChannelListIndex,pbVal) ) 
#define IDvbLogicalChannel2Descriptor_GetListRecordServiceId(This,bListIndex,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetListRecordServiceId(This,bListIndex,bRecordIndex,pwVal) ) 
#define IDvbLogicalChannel2Descriptor_GetListRecordLogicalChannelNumber(This,bListIndex,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetListRecordLogicalChannelNumber(This,bListIndex,bRecordIndex,pwVal) ) 
#define IDvbLogicalChannel2Descriptor_GetListRecordLogicalChannelAndVisibility(This,bListIndex,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetListRecordLogicalChannelAndVisibility(This,bListIndex,bRecordIndex,pwVal) ) 
#endif
#endif
#ifndef __IDvbHDSimulcastLogicalChannelDescriptor_INTERFACE_DEFINED__
#define __IDvbHDSimulcastLogicalChannelDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbHDSimulcastLogicalChannelDescriptor;
typedef struct IDvbHDSimulcastLogicalChannelDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbHDSimulcastLogicalChannelDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbHDSimulcastLogicalChannelDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbHDSimulcastLogicalChannelDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbHDSimulcastLogicalChannelDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbHDSimulcastLogicalChannelDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbHDSimulcastLogicalChannelDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceId) (IDvbHDSimulcastLogicalChannelDescriptor * This, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordLogicalChannelNumber) (IDvbHDSimulcastLogicalChannelDescriptor * This, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordLogicalChannelAndVisibility) (IDvbHDSimulcastLogicalChannelDescriptor * This, BYTE bRecordIndex, WORD * pwVal);
	END_INTERFACE
} IDvbHDSimulcastLogicalChannelDescriptorVtbl;
interface IDvbHDSimulcastLogicalChannelDescriptor
{
    CONST_VTBL struct IDvbHDSimulcastLogicalChannelDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbHDSimulcastLogicalChannelDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbHDSimulcastLogicalChannelDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbHDSimulcastLogicalChannelDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbHDSimulcastLogicalChannelDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbHDSimulcastLogicalChannelDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbHDSimulcastLogicalChannelDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbHDSimulcastLogicalChannelDescriptor_GetRecordServiceId(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordServiceId(This,bRecordIndex,pwVal) ) 
#define IDvbHDSimulcastLogicalChannelDescriptor_GetRecordLogicalChannelNumber(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordLogicalChannelNumber(This,bRecordIndex,pwVal) ) 
#define IDvbHDSimulcastLogicalChannelDescriptor_GetRecordLogicalChannelAndVisibility(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordLogicalChannelAndVisibility(This,bRecordIndex,pwVal) ) 
#endif
#endif
#ifndef __IDvbDataBroadcastIDDescriptor_INTERFACE_DEFINED__
#define __IDvbDataBroadcastIDDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbDataBroadcastIDDescriptor;
typedef struct IDvbDataBroadcastIDDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbDataBroadcastIDDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbDataBroadcastIDDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbDataBroadcastIDDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbDataBroadcastIDDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbDataBroadcastIDDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetDataBroadcastID) (IDvbDataBroadcastIDDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetIDSelectorBytes) (IDvbDataBroadcastIDDescriptor * This, BYTE * pbLen, BYTE * pbVal);
	END_INTERFACE
} IDvbDataBroadcastIDDescriptorVtbl;
interface IDvbDataBroadcastIDDescriptor
{
    CONST_VTBL struct IDvbDataBroadcastIDDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbDataBroadcastIDDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbDataBroadcastIDDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbDataBroadcastIDDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbDataBroadcastIDDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbDataBroadcastIDDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbDataBroadcastIDDescriptor_GetDataBroadcastID(This,pwVal)     ( (This)->lpVtbl -> GetDataBroadcastID(This,pwVal) ) 
#define IDvbDataBroadcastIDDescriptor_GetIDSelectorBytes(This,pbLen,pbVal)     ( (This)->lpVtbl -> GetIDSelectorBytes(This,pbLen,pbVal) ) 
#endif
#endif
#ifndef __IDvbDataBroadcastDescriptor_INTERFACE_DEFINED__
#define __IDvbDataBroadcastDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbDataBroadcastDescriptor;
typedef struct IDvbDataBroadcastDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbDataBroadcastDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbDataBroadcastDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbDataBroadcastDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbDataBroadcastDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbDataBroadcastDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetDataBroadcastID) (IDvbDataBroadcastDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetComponentTag) (IDvbDataBroadcastDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetSelectorLength) (IDvbDataBroadcastDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetSelectorBytes) (IDvbDataBroadcastDescriptor * This, BYTE * pbLen, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLangID) (IDvbDataBroadcastDescriptor * This, ULONG * pulVal);
	HRESULT(STDMETHODCALLTYPE * GetTextLength) (IDvbDataBroadcastDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetText) (IDvbDataBroadcastDescriptor * This, BYTE * pbLen, BYTE * pbVal);
	END_INTERFACE
} IDvbDataBroadcastDescriptorVtbl;
interface IDvbDataBroadcastDescriptor
{
    CONST_VTBL struct IDvbDataBroadcastDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbDataBroadcastDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbDataBroadcastDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbDataBroadcastDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbDataBroadcastDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbDataBroadcastDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbDataBroadcastDescriptor_GetDataBroadcastID(This,pwVal)     ( (This)->lpVtbl -> GetDataBroadcastID(This,pwVal) ) 
#define IDvbDataBroadcastDescriptor_GetComponentTag(This,pbVal)     ( (This)->lpVtbl -> GetComponentTag(This,pbVal) ) 
#define IDvbDataBroadcastDescriptor_GetSelectorLength(This,pbVal)     ( (This)->lpVtbl -> GetSelectorLength(This,pbVal) ) 
#define IDvbDataBroadcastDescriptor_GetSelectorBytes(This,pbLen,pbVal)     ( (This)->lpVtbl -> GetSelectorBytes(This,pbLen,pbVal) ) 
#define IDvbDataBroadcastDescriptor_GetLangID(This,pulVal)     ( (This)->lpVtbl -> GetLangID(This,pulVal) ) 
#define IDvbDataBroadcastDescriptor_GetTextLength(This,pbVal)     ( (This)->lpVtbl -> GetTextLength(This,pbVal) ) 
#define IDvbDataBroadcastDescriptor_GetText(This,pbLen,pbVal)     ( (This)->lpVtbl -> GetText(This,pbLen,pbVal) ) 
#endif
#endif 
typedef enum __MIDL___MIDL_itf_dvbsiparser_0000_0036_0001
{
	DESC_LINKAGE_RESERVED0	= 0,
	DESC_LINKAGE_INFORMATION	= ( DESC_LINKAGE_RESERVED0 + 1 ) ,
	DESC_LINKAGE_EPG	= ( DESC_LINKAGE_INFORMATION + 1 ) ,
	DESC_LINKAGE_CA_REPLACEMENT	= ( DESC_LINKAGE_EPG + 1 ) ,
	DESC_LINKAGE_COMPLETE_NET_BOUQUET_SI	= ( DESC_LINKAGE_CA_REPLACEMENT + 1 ) ,
	DESC_LINKAGE_REPLACEMENT	= ( DESC_LINKAGE_COMPLETE_NET_BOUQUET_SI + 1 ) ,
	DESC_LINKAGE_DATA	= ( DESC_LINKAGE_REPLACEMENT + 1 ) ,
	DESC_LINKAGE_RESERVED1	= 0x7,
	DESC_LINKAGE_USER	= 0x8,
	DESC_LINKAGE_RESERVED2	= 0xff
} 	DESC_LINKAGE_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0036_v0_0_s_ifspec;
#ifndef __IDvbLinkageDescriptor_INTERFACE_DEFINED__
#define __IDvbLinkageDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbLinkageDescriptor;
typedef struct IDvbLinkageDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbLinkageDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbLinkageDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbLinkageDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbLinkageDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbLinkageDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTSId) (IDvbLinkageDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetONId) (IDvbLinkageDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetServiceId) (IDvbLinkageDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetLinkageType) (IDvbLinkageDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetPrivateDataLength) (IDvbLinkageDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (IDvbLinkageDescriptor * This, BYTE * pbLen, BYTE * pbData);
	END_INTERFACE
} IDvbLinkageDescriptorVtbl;
interface IDvbLinkageDescriptor
{
    CONST_VTBL struct IDvbLinkageDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbLinkageDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbLinkageDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbLinkageDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbLinkageDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbLinkageDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbLinkageDescriptor_GetTSId(This,pwVal)     ( (This)->lpVtbl -> GetTSId(This,pwVal) ) 
#define IDvbLinkageDescriptor_GetONId(This,pwVal)     ( (This)->lpVtbl -> GetONId(This,pwVal) ) 
#define IDvbLinkageDescriptor_GetServiceId(This,pwVal)     ( (This)->lpVtbl -> GetServiceId(This,pwVal) ) 
#define IDvbLinkageDescriptor_GetLinkageType(This,pbVal)     ( (This)->lpVtbl -> GetLinkageType(This,pbVal) ) 
#define IDvbLinkageDescriptor_GetPrivateDataLength(This,pbVal)     ( (This)->lpVtbl -> GetPrivateDataLength(This,pbVal) ) 
#define IDvbLinkageDescriptor_GetPrivateData(This,pbLen,pbData)     ( (This)->lpVtbl -> GetPrivateData(This,pbLen,pbData) ) 
#endif
#endif
#ifndef __IDvbTeletextDescriptor_INTERFACE_DEFINED__
#define __IDvbTeletextDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbTeletextDescriptor;
typedef struct IDvbTeletextDescriptorVtbl
{
    BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
		IDvbTeletextDescriptor *This, REFIID riid, void **ppvObject);
		ULONG(STDMETHODCALLTYPE * AddRef) (IDvbTeletextDescriptor * This);
		ULONG(STDMETHODCALLTYPE * Release) (IDvbTeletextDescriptor * This);
		HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbTeletextDescriptor * This, BYTE * pbVal);
		HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbTeletextDescriptor * This, BYTE * pbVal);
		HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbTeletextDescriptor * This, BYTE * pbVal);
		HRESULT(STDMETHODCALLTYPE * GetRecordLangId) (IDvbTeletextDescriptor * This, BYTE bRecordIndex, ULONG * pulVal);
		HRESULT(STDMETHODCALLTYPE * GetRecordTeletextType) (IDvbTeletextDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
		HRESULT(STDMETHODCALLTYPE * GetRecordMagazineNumber) (IDvbTeletextDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
		HRESULT(STDMETHODCALLTYPE * GetRecordPageNumber) (IDvbTeletextDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
		END_INTERFACE
} IDvbTeletextDescriptorVtbl;
interface IDvbTeletextDescriptor
{
    CONST_VTBL struct IDvbTeletextDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbTeletextDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbTeletextDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbTeletextDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbTeletextDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbTeletextDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbTeletextDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbTeletextDescriptor_GetRecordLangId(This,bRecordIndex,pulVal)     ( (This)->lpVtbl -> GetRecordLangId(This,bRecordIndex,pulVal) ) 
#define IDvbTeletextDescriptor_GetRecordTeletextType(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordTeletextType(This,bRecordIndex,pbVal) ) 
#define IDvbTeletextDescriptor_GetRecordMagazineNumber(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordMagazineNumber(This,bRecordIndex,pbVal) ) 
#define IDvbTeletextDescriptor_GetRecordPageNumber(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordPageNumber(This,bRecordIndex,pbVal) ) 
#endif
#endif
#ifndef __IDvbSubtitlingDescriptor_INTERFACE_DEFINED__
#define __IDvbSubtitlingDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbSubtitlingDescriptor;
typedef struct IDvbSubtitlingDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbSubtitlingDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbSubtitlingDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbSubtitlingDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbSubtitlingDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbSubtitlingDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbSubtitlingDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordLangId) (IDvbSubtitlingDescriptor * This, BYTE bRecordIndex, ULONG * pulVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordSubtitlingType) (IDvbSubtitlingDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCompositionPageID) (IDvbSubtitlingDescriptor * This, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordAncillaryPageID) (IDvbSubtitlingDescriptor * This, BYTE bRecordIndex, WORD * pwVal);
	END_INTERFACE
} IDvbSubtitlingDescriptorVtbl;
interface IDvbSubtitlingDescriptor
{
    CONST_VTBL struct IDvbSubtitlingDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbSubtitlingDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbSubtitlingDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbSubtitlingDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbSubtitlingDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbSubtitlingDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbSubtitlingDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbSubtitlingDescriptor_GetRecordLangId(This,bRecordIndex,pulVal)     ( (This)->lpVtbl -> GetRecordLangId(This,bRecordIndex,pulVal) ) 
#define IDvbSubtitlingDescriptor_GetRecordSubtitlingType(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordSubtitlingType(This,bRecordIndex,pbVal) ) 
#define IDvbSubtitlingDescriptor_GetRecordCompositionPageID(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordCompositionPageID(This,bRecordIndex,pwVal) ) 
#define IDvbSubtitlingDescriptor_GetRecordAncillaryPageID(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordAncillaryPageID(This,bRecordIndex,pwVal) ) 
#endif
#endif
#ifndef __IDvbServiceDescriptor_INTERFACE_DEFINED__
#define __IDvbServiceDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbServiceDescriptor;
typedef struct IDvbServiceDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbServiceDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbServiceDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbServiceDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbServiceDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbServiceDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetServiceType) (IDvbServiceDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetServiceProviderName) (IDvbServiceDescriptor * This, char **pszName);
	HRESULT(STDMETHODCALLTYPE * GetServiceProviderNameW) (IDvbServiceDescriptor * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetServiceName) (IDvbServiceDescriptor * This, char **pszName);
	HRESULT(STDMETHODCALLTYPE * GetProcessedServiceName) (IDvbServiceDescriptor * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetServiceNameEmphasized) (IDvbServiceDescriptor * This, BSTR * pbstrName);
	END_INTERFACE
} IDvbServiceDescriptorVtbl;
interface IDvbServiceDescriptor
{
    CONST_VTBL struct IDvbServiceDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbServiceDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbServiceDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbServiceDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbServiceDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbServiceDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbServiceDescriptor_GetServiceType(This,pbVal)     ( (This)->lpVtbl -> GetServiceType(This,pbVal) ) 
#define IDvbServiceDescriptor_GetServiceProviderName(This,pszName)     ( (This)->lpVtbl -> GetServiceProviderName(This,pszName) ) 
#define IDvbServiceDescriptor_GetServiceProviderNameW(This,pbstrName)     ( (This)->lpVtbl -> GetServiceProviderNameW(This,pbstrName) ) 
#define IDvbServiceDescriptor_GetServiceName(This,pszName)     ( (This)->lpVtbl -> GetServiceName(This,pszName) ) 
#define IDvbServiceDescriptor_GetProcessedServiceName(This,pbstrName)     ( (This)->lpVtbl -> GetProcessedServiceName(This,pbstrName) ) 
#define IDvbServiceDescriptor_GetServiceNameEmphasized(This,pbstrName)     ( (This)->lpVtbl -> GetServiceNameEmphasized(This,pbstrName) ) 
#endif
#endif
#ifndef __IDvbServiceDescriptor2_INTERFACE_DEFINED__
#define __IDvbServiceDescriptor2_INTERFACE_DEFINED__ 
extern const IID IID_IDvbServiceDescriptor2;
typedef struct IDvbServiceDescriptor2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbServiceDescriptor2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbServiceDescriptor2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbServiceDescriptor2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbServiceDescriptor2 * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbServiceDescriptor2 * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetServiceType) (IDvbServiceDescriptor2 * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetServiceProviderName) (IDvbServiceDescriptor2 * This, char **pszName);
	HRESULT(STDMETHODCALLTYPE * GetServiceProviderNameW) (IDvbServiceDescriptor2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetServiceName) (IDvbServiceDescriptor2 * This, char **pszName);
	HRESULT(STDMETHODCALLTYPE * GetProcessedServiceName) (IDvbServiceDescriptor2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetServiceNameEmphasized) (IDvbServiceDescriptor2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetServiceProviderName2W) (IDvbServiceDescriptor2 * This, DVB_STRCONV_MODE convMode, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetServiceNameW) (IDvbServiceDescriptor2 * This, DVB_STRCONV_MODE convMode, BSTR * pbstrName);
	END_INTERFACE
} IDvbServiceDescriptor2Vtbl;
interface IDvbServiceDescriptor2
{
    CONST_VTBL struct IDvbServiceDescriptor2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbServiceDescriptor2_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbServiceDescriptor2_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbServiceDescriptor2_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbServiceDescriptor2_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbServiceDescriptor2_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbServiceDescriptor2_GetServiceType(This,pbVal)     ( (This)->lpVtbl -> GetServiceType(This,pbVal) ) 
#define IDvbServiceDescriptor2_GetServiceProviderName(This,pszName)     ( (This)->lpVtbl -> GetServiceProviderName(This,pszName) ) 
#define IDvbServiceDescriptor2_GetServiceProviderNameW(This,pbstrName)     ( (This)->lpVtbl -> GetServiceProviderNameW(This,pbstrName) ) 
#define IDvbServiceDescriptor2_GetServiceName(This,pszName)     ( (This)->lpVtbl -> GetServiceName(This,pszName) ) 
#define IDvbServiceDescriptor2_GetProcessedServiceName(This,pbstrName)     ( (This)->lpVtbl -> GetProcessedServiceName(This,pbstrName) ) 
#define IDvbServiceDescriptor2_GetServiceNameEmphasized(This,pbstrName)     ( (This)->lpVtbl -> GetServiceNameEmphasized(This,pbstrName) ) 
#define IDvbServiceDescriptor2_GetServiceProviderName2W(This,convMode,pbstrName)     ( (This)->lpVtbl -> GetServiceProviderNameW(This,convMode,pbstrName) ) 
#define IDvbServiceDescriptor2_GetServiceNameW(This,convMode,pbstrName)     ( (This)->lpVtbl -> GetServiceNameW(This,convMode,pbstrName) ) 
#endif
#endif
#ifndef __IDvbServiceListDescriptor_INTERFACE_DEFINED__
#define __IDvbServiceListDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbServiceListDescriptor;
typedef struct IDvbServiceListDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbServiceListDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbServiceListDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbServiceListDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbServiceListDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbServiceListDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbServiceListDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceId) (IDvbServiceListDescriptor * This, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceType) (IDvbServiceListDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
	END_INTERFACE
} IDvbServiceListDescriptorVtbl;
interface IDvbServiceListDescriptor
{
    CONST_VTBL struct IDvbServiceListDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbServiceListDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbServiceListDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbServiceListDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbServiceListDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbServiceListDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbServiceListDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbServiceListDescriptor_GetRecordServiceId(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordServiceId(This,bRecordIndex,pwVal) ) 
#define IDvbServiceListDescriptor_GetRecordServiceType(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordServiceType(This,bRecordIndex,pbVal) ) 
#endif
#endif
#ifndef __IDvbMultilingualServiceNameDescriptor_INTERFACE_DEFINED__
#define __IDvbMultilingualServiceNameDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbMultilingualServiceNameDescriptor;
typedef struct IDvbMultilingualServiceNameDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbMultilingualServiceNameDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbMultilingualServiceNameDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbMultilingualServiceNameDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbMultilingualServiceNameDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbMultilingualServiceNameDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbMultilingualServiceNameDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordLangId) (IDvbMultilingualServiceNameDescriptor * This, BYTE bRecordIndex, ULONG * ulVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceProviderNameW) (IDvbMultilingualServiceNameDescriptor * This, BYTE bRecordIndex, DVB_STRCONV_MODE convMode, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceNameW) (IDvbMultilingualServiceNameDescriptor * This, BYTE bRecordIndex, DVB_STRCONV_MODE convMode, BSTR * pbstrName);
	END_INTERFACE
} IDvbMultilingualServiceNameDescriptorVtbl;
interface IDvbMultilingualServiceNameDescriptor
{
    CONST_VTBL struct IDvbMultilingualServiceNameDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbMultilingualServiceNameDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbMultilingualServiceNameDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbMultilingualServiceNameDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbMultilingualServiceNameDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbMultilingualServiceNameDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbMultilingualServiceNameDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbMultilingualServiceNameDescriptor_GetRecordLangId(This,bRecordIndex,ulVal)     ( (This)->lpVtbl -> GetRecordLangId(This,bRecordIndex,ulVal) ) 
#define IDvbMultilingualServiceNameDescriptor_GetRecordServiceProviderNameW(This,bRecordIndex,convMode,pbstrName)     ( (This)->lpVtbl -> GetRecordServiceProviderNameW(This,bRecordIndex,convMode,pbstrName) ) 
#define IDvbMultilingualServiceNameDescriptor_GetRecordServiceNameW(This,bRecordIndex,convMode,pbstrName)     ( (This)->lpVtbl -> GetRecordServiceNameW(This,bRecordIndex,convMode,pbstrName) ) 
#endif
#endif
#ifndef __IDvbNetworkNameDescriptor_INTERFACE_DEFINED__
#define __IDvbNetworkNameDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbNetworkNameDescriptor;
typedef struct IDvbNetworkNameDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbNetworkNameDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbNetworkNameDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbNetworkNameDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbNetworkNameDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbNetworkNameDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetNetworkName) (IDvbNetworkNameDescriptor * This, char **pszName);
	HRESULT(STDMETHODCALLTYPE * GetNetworkNameW) (IDvbNetworkNameDescriptor * This, DVB_STRCONV_MODE convMode, BSTR * pbstrName);
	END_INTERFACE
} IDvbNetworkNameDescriptorVtbl;
interface IDvbNetworkNameDescriptor
{
    CONST_VTBL struct IDvbNetworkNameDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbNetworkNameDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbNetworkNameDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbNetworkNameDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbNetworkNameDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbNetworkNameDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbNetworkNameDescriptor_GetNetworkName(This,pszName)     ( (This)->lpVtbl -> GetNetworkName(This,pszName) ) 
#define IDvbNetworkNameDescriptor_GetNetworkNameW(This,convMode,pbstrName)     ( (This)->lpVtbl -> GetNetworkNameW(This,convMode,pbstrName) ) 
#endif
#endif
#ifndef __IDvbShortEventDescriptor_INTERFACE_DEFINED__
#define __IDvbShortEventDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbShortEventDescriptor;
typedef struct IDvbShortEventDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbShortEventDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbShortEventDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbShortEventDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbShortEventDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbShortEventDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLanguageCode) (IDvbShortEventDescriptor * This, char *pszCode);
	HRESULT(STDMETHODCALLTYPE * GetEventNameW) (IDvbShortEventDescriptor * This, DVB_STRCONV_MODE convMode, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetTextW) (IDvbShortEventDescriptor * This, DVB_STRCONV_MODE convMode, BSTR * pbstrText);
	END_INTERFACE
} IDvbShortEventDescriptorVtbl;
interface IDvbShortEventDescriptor
{
    CONST_VTBL struct IDvbShortEventDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbShortEventDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbShortEventDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbShortEventDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbShortEventDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbShortEventDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbShortEventDescriptor_GetLanguageCode(This,pszCode)     ( (This)->lpVtbl -> GetLanguageCode(This,pszCode) ) 
#define IDvbShortEventDescriptor_GetEventNameW(This,convMode,pbstrName)     ( (This)->lpVtbl -> GetEventNameW(This,convMode,pbstrName) ) 
#define IDvbShortEventDescriptor_GetTextW(This,convMode,pbstrText)     ( (This)->lpVtbl -> GetTextW(This,convMode,pbstrText) ) 
#endif
#endif
#ifndef __IDvbExtendedEventDescriptor_INTERFACE_DEFINED__
#define __IDvbExtendedEventDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbExtendedEventDescriptor;
typedef struct IDvbExtendedEventDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbExtendedEventDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbExtendedEventDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbExtendedEventDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbExtendedEventDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbExtendedEventDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetDescriptorNumber) (IDvbExtendedEventDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLastDescriptorNumber) (IDvbExtendedEventDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLanguageCode) (IDvbExtendedEventDescriptor * This, char *pszCode);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbExtendedEventDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordItemW) (IDvbExtendedEventDescriptor * This, BYTE bRecordIndex, DVB_STRCONV_MODE convMode, BSTR * pbstrDesc, BSTR * pbstrItem);
	HRESULT(STDMETHODCALLTYPE * GetConcatenatedItemW) (IDvbExtendedEventDescriptor * This, IDvbExtendedEventDescriptor * pFollowingDescriptor, DVB_STRCONV_MODE convMode, BSTR * pbstrDesc, BSTR * pbstrItem);
	HRESULT(STDMETHODCALLTYPE * GetTextW) (IDvbExtendedEventDescriptor * This, DVB_STRCONV_MODE convMode, BSTR * pbstrText);
	HRESULT(STDMETHODCALLTYPE * GetConcatenatedTextW) (IDvbExtendedEventDescriptor * This, IDvbExtendedEventDescriptor * FollowingDescriptor, DVB_STRCONV_MODE convMode, BSTR * pbstrText);
	HRESULT(STDMETHODCALLTYPE * GetRecordItemRawBytes) (IDvbExtendedEventDescriptor * This, BYTE bRecordIndex, BYTE ** ppbRawItem, BYTE * pbItemLength);
	END_INTERFACE
} IDvbExtendedEventDescriptorVtbl;
interface IDvbExtendedEventDescriptor
{
    CONST_VTBL struct IDvbExtendedEventDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbExtendedEventDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbExtendedEventDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbExtendedEventDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbExtendedEventDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbExtendedEventDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbExtendedEventDescriptor_GetDescriptorNumber(This,pbVal)     ( (This)->lpVtbl -> GetDescriptorNumber(This,pbVal) ) 
#define IDvbExtendedEventDescriptor_GetLastDescriptorNumber(This,pbVal)     ( (This)->lpVtbl -> GetLastDescriptorNumber(This,pbVal) ) 
#define IDvbExtendedEventDescriptor_GetLanguageCode(This,pszCode)     ( (This)->lpVtbl -> GetLanguageCode(This,pszCode) ) 
#define IDvbExtendedEventDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbExtendedEventDescriptor_GetRecordItemW(This,bRecordIndex,convMode,pbstrDesc,pbstrItem)     ( (This)->lpVtbl -> GetRecordItemW(This,bRecordIndex,convMode,pbstrDesc,pbstrItem) ) 
#define IDvbExtendedEventDescriptor_GetConcatenatedItemW(This,pFollowingDescriptor,convMode,pbstrDesc,pbstrItem)     ( (This)->lpVtbl -> GetConcatenatedItemW(This,pFollowingDescriptor,convMode,pbstrDesc,pbstrItem) ) 
#define IDvbExtendedEventDescriptor_GetTextW(This,convMode,pbstrText)     ( (This)->lpVtbl -> GetTextW(This,convMode,pbstrText) ) 
#define IDvbExtendedEventDescriptor_GetConcatenatedTextW(This,FollowingDescriptor,convMode,pbstrText)     ( (This)->lpVtbl -> GetConcatenatedTextW(This,FollowingDescriptor,convMode,pbstrText) ) 
#define IDvbExtendedEventDescriptor_GetRecordItemRawBytes(This,bRecordIndex,ppbRawItem,pbItemLength)     ( (This)->lpVtbl -> GetRecordItemRawBytes(This,bRecordIndex,ppbRawItem,pbItemLength) ) 
#endif
#endif
#ifndef __IDvbComponentDescriptor_INTERFACE_DEFINED__
#define __IDvbComponentDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbComponentDescriptor;
typedef struct IDvbComponentDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbComponentDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbComponentDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbComponentDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetStreamContent) (IDvbComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetComponentType) (IDvbComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetComponentTag) (IDvbComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLanguageCode) (IDvbComponentDescriptor * This, char *pszCode);
	HRESULT(STDMETHODCALLTYPE * GetTextW) (IDvbComponentDescriptor * This, DVB_STRCONV_MODE convMode, BSTR * pbstrText);
	END_INTERFACE
} IDvbComponentDescriptorVtbl;
interface IDvbComponentDescriptor
{
    CONST_VTBL struct IDvbComponentDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbComponentDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbComponentDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbComponentDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbComponentDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbComponentDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbComponentDescriptor_GetStreamContent(This,pbVal)     ( (This)->lpVtbl -> GetStreamContent(This,pbVal) ) 
#define IDvbComponentDescriptor_GetComponentType(This,pbVal)     ( (This)->lpVtbl -> GetComponentType(This,pbVal) ) 
#define IDvbComponentDescriptor_GetComponentTag(This,pbVal)     ( (This)->lpVtbl -> GetComponentTag(This,pbVal) ) 
#define IDvbComponentDescriptor_GetLanguageCode(This,pszCode)     ( (This)->lpVtbl -> GetLanguageCode(This,pszCode) ) 
#define IDvbComponentDescriptor_GetTextW(This,convMode,pbstrText)     ( (This)->lpVtbl -> GetTextW(This,convMode,pbstrText) ) 
#endif
#endif
#ifndef __IDvbContentDescriptor_INTERFACE_DEFINED__
#define __IDvbContentDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbContentDescriptor;
typedef struct IDvbContentDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbContentDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbContentDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbContentDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbContentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbContentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbContentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordContentNibbles) (IDvbContentDescriptor * This, BYTE bRecordIndex, BYTE * pbValLevel1, BYTE * pbValLevel2);
	HRESULT(STDMETHODCALLTYPE * GetRecordUserNibbles) (IDvbContentDescriptor * This, BYTE bRecordIndex, BYTE * pbVal1, BYTE * pbVal2);
	END_INTERFACE
} IDvbContentDescriptorVtbl;
interface IDvbContentDescriptor
{
    CONST_VTBL struct IDvbContentDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbContentDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbContentDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbContentDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbContentDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbContentDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbContentDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbContentDescriptor_GetRecordContentNibbles(This,bRecordIndex,pbValLevel1,pbValLevel2)     ( (This)->lpVtbl -> GetRecordContentNibbles(This,bRecordIndex,pbValLevel1,pbValLevel2) ) 
#define IDvbContentDescriptor_GetRecordUserNibbles(This,bRecordIndex,pbVal1,pbVal2)     ( (This)->lpVtbl -> GetRecordUserNibbles(This,bRecordIndex,pbVal1,pbVal2) ) 
#endif
#endif
#ifndef __IDvbParentalRatingDescriptor_INTERFACE_DEFINED__
#define __IDvbParentalRatingDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IDvbParentalRatingDescriptor;
typedef struct IDvbParentalRatingDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvbParentalRatingDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvbParentalRatingDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvbParentalRatingDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IDvbParentalRatingDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IDvbParentalRatingDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IDvbParentalRatingDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordRating) (IDvbParentalRatingDescriptor * This, BYTE bRecordIndex, char *pszCountryCode, BYTE * pbVal);
	END_INTERFACE
} IDvbParentalRatingDescriptorVtbl;
interface IDvbParentalRatingDescriptor
{
    CONST_VTBL struct IDvbParentalRatingDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvbParentalRatingDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDvbParentalRatingDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IDvbParentalRatingDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IDvbParentalRatingDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IDvbParentalRatingDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IDvbParentalRatingDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IDvbParentalRatingDescriptor_GetRecordRating(This,bRecordIndex,pszCountryCode,pbVal)     ( (This)->lpVtbl -> GetRecordRating(This,bRecordIndex,pszCountryCode,pbVal) ) 
#endif
#endif
#ifndef __IIsdbTerrestrialDeliverySystemDescriptor_INTERFACE_DEFINED__
#define __IIsdbTerrestrialDeliverySystemDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbTerrestrialDeliverySystemDescriptor;
typedef struct IIsdbTerrestrialDeliverySystemDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbTerrestrialDeliverySystemDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbTerrestrialDeliverySystemDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbTerrestrialDeliverySystemDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetAreaCode) (IIsdbTerrestrialDeliverySystemDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetGuardInterval) (IIsdbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTransmissionMode) (IIsdbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IIsdbTerrestrialDeliverySystemDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordFrequency) (IIsdbTerrestrialDeliverySystemDescriptor * This, BYTE bRecordIndex, DWORD * pdwVal);
	END_INTERFACE
} IIsdbTerrestrialDeliverySystemDescriptorVtbl;
interface IIsdbTerrestrialDeliverySystemDescriptor
{
    CONST_VTBL struct IIsdbTerrestrialDeliverySystemDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbTerrestrialDeliverySystemDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbTerrestrialDeliverySystemDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbTerrestrialDeliverySystemDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbTerrestrialDeliverySystemDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbTerrestrialDeliverySystemDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbTerrestrialDeliverySystemDescriptor_GetAreaCode(This,pwVal)     ( (This)->lpVtbl -> GetAreaCode(This,pwVal) ) 
#define IIsdbTerrestrialDeliverySystemDescriptor_GetGuardInterval(This,pbVal)     ( (This)->lpVtbl -> GetGuardInterval(This,pbVal) ) 
#define IIsdbTerrestrialDeliverySystemDescriptor_GetTransmissionMode(This,pbVal)     ( (This)->lpVtbl -> GetTransmissionMode(This,pbVal) ) 
#define IIsdbTerrestrialDeliverySystemDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IIsdbTerrestrialDeliverySystemDescriptor_GetRecordFrequency(This,bRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordFrequency(This,bRecordIndex,pdwVal) ) 
#endif
#endif
#ifndef __IIsdbTSInformationDescriptor_INTERFACE_DEFINED__
#define __IIsdbTSInformationDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbTSInformationDescriptor;
typedef struct IIsdbTSInformationDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbTSInformationDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbTSInformationDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbTSInformationDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbTSInformationDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbTSInformationDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRemoteControlKeyId) (IIsdbTSInformationDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTSNameW) (IIsdbTSInformationDescriptor * This, DVB_STRCONV_MODE convMode, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IIsdbTSInformationDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordTransmissionTypeInfo) (IIsdbTSInformationDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordNumberOfServices) (IIsdbTSInformationDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceIdByIndex) (IIsdbTSInformationDescriptor * This, BYTE bRecordIndex, BYTE bServiceIndex, WORD * pdwVal);
	END_INTERFACE
} IIsdbTSInformationDescriptorVtbl;
interface IIsdbTSInformationDescriptor
{
    CONST_VTBL struct IIsdbTSInformationDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbTSInformationDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbTSInformationDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbTSInformationDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbTSInformationDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbTSInformationDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbTSInformationDescriptor_GetRemoteControlKeyId(This,pbVal)     ( (This)->lpVtbl -> GetRemoteControlKeyId(This,pbVal) ) 
#define IIsdbTSInformationDescriptor_GetTSNameW(This,convMode,pbstrName)     ( (This)->lpVtbl -> GetTSNameW(This,convMode,pbstrName) ) 
#define IIsdbTSInformationDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IIsdbTSInformationDescriptor_GetRecordTransmissionTypeInfo(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordTransmissionTypeInfo(This,bRecordIndex,pbVal) ) 
#define IIsdbTSInformationDescriptor_GetRecordNumberOfServices(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordNumberOfServices(This,bRecordIndex,pbVal) ) 
#define IIsdbTSInformationDescriptor_GetRecordServiceIdByIndex(This,bRecordIndex,bServiceIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordServiceIdByIndex(This,bRecordIndex,bServiceIndex,pdwVal) ) 
#endif
#endif
#ifndef __IIsdbDigitalCopyControlDescriptor_INTERFACE_DEFINED__
#define __IIsdbDigitalCopyControlDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbDigitalCopyControlDescriptor;
typedef struct IIsdbDigitalCopyControlDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbDigitalCopyControlDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbDigitalCopyControlDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbDigitalCopyControlDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbDigitalCopyControlDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbDigitalCopyControlDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCopyControl) (IIsdbDigitalCopyControlDescriptor * This, BYTE * pbDigitalRecordingControlData, BYTE * pbCopyControlType, BYTE * pbAPSControlData, BYTE * pbMaximumBitrate);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IIsdbDigitalCopyControlDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCopyControl) (IIsdbDigitalCopyControlDescriptor * This, BYTE bRecordIndex, BYTE * pbComponentTag, BYTE * pbDigitalRecordingControlData, BYTE * pbCopyControlType, BYTE * pbAPSControlData, BYTE * pbMaximumBitrate);
    END_INTERFACE
} IIsdbDigitalCopyControlDescriptorVtbl;
interface IIsdbDigitalCopyControlDescriptor
{
    CONST_VTBL struct IIsdbDigitalCopyControlDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbDigitalCopyControlDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbDigitalCopyControlDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbDigitalCopyControlDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbDigitalCopyControlDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbDigitalCopyControlDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbDigitalCopyControlDescriptor_GetCopyControl(This,pbDigitalRecordingControlData,pbCopyControlType,pbAPSControlData,pbMaximumBitrate)     ( (This)->lpVtbl -> GetCopyControl(This,pbDigitalRecordingControlData,pbCopyControlType,pbAPSControlData,pbMaximumBitrate) ) 
#define IIsdbDigitalCopyControlDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IIsdbDigitalCopyControlDescriptor_GetRecordCopyControl(This,bRecordIndex,pbComponentTag,pbDigitalRecordingControlData,pbCopyControlType,pbAPSControlData,pbMaximumBitrate)     ( (This)->lpVtbl -> GetRecordCopyControl(This,bRecordIndex,pbComponentTag,pbDigitalRecordingControlData,pbCopyControlType,pbAPSControlData,pbMaximumBitrate) ) 
#endif
#endif
#ifndef __IIsdbAudioComponentDescriptor_INTERFACE_DEFINED__
#define __IIsdbAudioComponentDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbAudioComponentDescriptor;
typedef struct IIsdbAudioComponentDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbAudioComponentDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbAudioComponentDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbAudioComponentDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbAudioComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbAudioComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetStreamContent) (IIsdbAudioComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetComponentType) (IIsdbAudioComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetComponentTag) (IIsdbAudioComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetStreamType) (IIsdbAudioComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetSimulcastGroupTag) (IIsdbAudioComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetESMultiLingualFlag) (IIsdbAudioComponentDescriptor * This, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetMainComponentFlag) (IIsdbAudioComponentDescriptor * This, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetQualityIndicator) (IIsdbAudioComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetSamplingRate) (IIsdbAudioComponentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLanguageCode) (IIsdbAudioComponentDescriptor * This, char *pszCode);
	HRESULT(STDMETHODCALLTYPE * GetLanguageCode2) (IIsdbAudioComponentDescriptor * This, char *pszCode);
	HRESULT(STDMETHODCALLTYPE * GetTextW) (IIsdbAudioComponentDescriptor * This, DVB_STRCONV_MODE convMode, BSTR * pbstrText);
	END_INTERFACE
} IIsdbAudioComponentDescriptorVtbl;
interface IIsdbAudioComponentDescriptor
{
    CONST_VTBL struct IIsdbAudioComponentDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbAudioComponentDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbAudioComponentDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbAudioComponentDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbAudioComponentDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbAudioComponentDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbAudioComponentDescriptor_GetStreamContent(This,pbVal)     ( (This)->lpVtbl -> GetStreamContent(This,pbVal) ) 
#define IIsdbAudioComponentDescriptor_GetComponentType(This,pbVal)     ( (This)->lpVtbl -> GetComponentType(This,pbVal) ) 
#define IIsdbAudioComponentDescriptor_GetComponentTag(This,pbVal)     ( (This)->lpVtbl -> GetComponentTag(This,pbVal) ) 
#define IIsdbAudioComponentDescriptor_GetStreamType(This,pbVal)     ( (This)->lpVtbl -> GetStreamType(This,pbVal) ) 
#define IIsdbAudioComponentDescriptor_GetSimulcastGroupTag(This,pbVal)     ( (This)->lpVtbl -> GetSimulcastGroupTag(This,pbVal) ) 
#define IIsdbAudioComponentDescriptor_GetESMultiLingualFlag(This,pfVal)     ( (This)->lpVtbl -> GetESMultiLingualFlag(This,pfVal) ) 
#define IIsdbAudioComponentDescriptor_GetMainComponentFlag(This,pfVal)     ( (This)->lpVtbl -> GetMainComponentFlag(This,pfVal) ) 
#define IIsdbAudioComponentDescriptor_GetQualityIndicator(This,pbVal)     ( (This)->lpVtbl -> GetQualityIndicator(This,pbVal) ) 
#define IIsdbAudioComponentDescriptor_GetSamplingRate(This,pbVal)     ( (This)->lpVtbl -> GetSamplingRate(This,pbVal) ) 
#define IIsdbAudioComponentDescriptor_GetLanguageCode(This,pszCode)     ( (This)->lpVtbl -> GetLanguageCode(This,pszCode) ) 
#define IIsdbAudioComponentDescriptor_GetLanguageCode2(This,pszCode)     ( (This)->lpVtbl -> GetLanguageCode2(This,pszCode) ) 
#define IIsdbAudioComponentDescriptor_GetTextW(This,convMode,pbstrText)     ( (This)->lpVtbl -> GetTextW(This,convMode,pbstrText) ) 
#endif
#endif
#ifndef __IIsdbDataContentDescriptor_INTERFACE_DEFINED__
#define __IIsdbDataContentDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbDataContentDescriptor;
typedef struct IIsdbDataContentDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbDataContentDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbDataContentDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbDataContentDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbDataContentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbDataContentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetDataComponentId) (IIsdbDataContentDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetEntryComponent) (IIsdbDataContentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetSelectorLength) (IIsdbDataContentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetSelectorBytes) (IIsdbDataContentDescriptor * This, BYTE bBufLength, BYTE * pbBuf);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IIsdbDataContentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordComponentRef) (IIsdbDataContentDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLanguageCode) (IIsdbDataContentDescriptor * This, char *pszCode);
	HRESULT(STDMETHODCALLTYPE * GetTextW) (IIsdbDataContentDescriptor * This, DVB_STRCONV_MODE convMode, BSTR * pbstrText);
	END_INTERFACE
} IIsdbDataContentDescriptorVtbl;
interface IIsdbDataContentDescriptor
{
    CONST_VTBL struct IIsdbDataContentDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbDataContentDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbDataContentDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbDataContentDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbDataContentDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbDataContentDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbDataContentDescriptor_GetDataComponentId(This,pwVal)     ( (This)->lpVtbl -> GetDataComponentId(This,pwVal) ) 
#define IIsdbDataContentDescriptor_GetEntryComponent(This,pbVal)     ( (This)->lpVtbl -> GetEntryComponent(This,pbVal) ) 
#define IIsdbDataContentDescriptor_GetSelectorLength(This,pbVal)     ( (This)->lpVtbl -> GetSelectorLength(This,pbVal) ) 
#define IIsdbDataContentDescriptor_GetSelectorBytes(This,bBufLength,pbBuf)     ( (This)->lpVtbl -> GetSelectorBytes(This,bBufLength,pbBuf) ) 
#define IIsdbDataContentDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IIsdbDataContentDescriptor_GetRecordComponentRef(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordComponentRef(This,bRecordIndex,pbVal) ) 
#define IIsdbDataContentDescriptor_GetLanguageCode(This,pszCode)     ( (This)->lpVtbl -> GetLanguageCode(This,pszCode) ) 
#define IIsdbDataContentDescriptor_GetTextW(This,convMode,pbstrText)     ( (This)->lpVtbl -> GetTextW(This,convMode,pbstrText) ) 
#endif
#endif
#ifndef __IIsdbCAContractInformationDescriptor_INTERFACE_DEFINED__
#define __IIsdbCAContractInformationDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbCAContractInformationDescriptor;
typedef struct IIsdbCAContractInformationDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbCAContractInformationDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbCAContractInformationDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbCAContractInformationDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbCAContractInformationDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbCAContractInformationDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCASystemId) (IIsdbCAContractInformationDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetCAUnitId) (IIsdbCAContractInformationDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IIsdbCAContractInformationDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordComponentTag) (IIsdbCAContractInformationDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetContractVerificationInfoLength) (IIsdbCAContractInformationDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetContractVerificationInfo) (IIsdbCAContractInformationDescriptor * This, BYTE bBufLength, BYTE * pbBuf);
	HRESULT(STDMETHODCALLTYPE * GetFeeNameW) (IIsdbCAContractInformationDescriptor * This, DVB_STRCONV_MODE convMode, BSTR * pbstrName);
	END_INTERFACE
} IIsdbCAContractInformationDescriptorVtbl;
interface IIsdbCAContractInformationDescriptor
{
    CONST_VTBL struct IIsdbCAContractInformationDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbCAContractInformationDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbCAContractInformationDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbCAContractInformationDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbCAContractInformationDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbCAContractInformationDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbCAContractInformationDescriptor_GetCASystemId(This,pwVal)     ( (This)->lpVtbl -> GetCASystemId(This,pwVal) ) 
#define IIsdbCAContractInformationDescriptor_GetCAUnitId(This,pbVal)     ( (This)->lpVtbl -> GetCAUnitId(This,pbVal) ) 
#define IIsdbCAContractInformationDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IIsdbCAContractInformationDescriptor_GetRecordComponentTag(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordComponentTag(This,bRecordIndex,pbVal) ) 
#define IIsdbCAContractInformationDescriptor_GetContractVerificationInfoLength(This,pbVal)     ( (This)->lpVtbl -> GetContractVerificationInfoLength(This,pbVal) ) 
#define IIsdbCAContractInformationDescriptor_GetContractVerificationInfo(This,bBufLength,pbBuf)     ( (This)->lpVtbl -> GetContractVerificationInfo(This,bBufLength,pbBuf) ) 
#define IIsdbCAContractInformationDescriptor_GetFeeNameW(This,convMode,pbstrName)     ( (This)->lpVtbl -> GetFeeNameW(This,convMode,pbstrName) ) 
#endif
#endif
#ifndef __IIsdbEventGroupDescriptor_INTERFACE_DEFINED__
#define __IIsdbEventGroupDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbEventGroupDescriptor;
typedef struct IIsdbEventGroupDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbEventGroupDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbEventGroupDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbEventGroupDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbEventGroupDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbEventGroupDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetGroupType) (IIsdbEventGroupDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IIsdbEventGroupDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordEvent) (IIsdbEventGroupDescriptor * This, BYTE bRecordIndex, WORD * pwServiceId, WORD * pwEventId);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRefRecords) (IIsdbEventGroupDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRefRecordEvent) (IIsdbEventGroupDescriptor * This, BYTE bRecordIndex, WORD * pwOriginalNetworkId, WORD * pwTransportStreamId, WORD * pwServiceId, WORD * pwEventId);
	END_INTERFACE
} IIsdbEventGroupDescriptorVtbl;
interface IIsdbEventGroupDescriptor
{
    CONST_VTBL struct IIsdbEventGroupDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbEventGroupDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbEventGroupDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbEventGroupDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbEventGroupDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbEventGroupDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbEventGroupDescriptor_GetGroupType(This,pbVal)     ( (This)->lpVtbl -> GetGroupType(This,pbVal) ) 
#define IIsdbEventGroupDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IIsdbEventGroupDescriptor_GetRecordEvent(This,bRecordIndex,pwServiceId,pwEventId)     ( (This)->lpVtbl -> GetRecordEvent(This,bRecordIndex,pwServiceId,pwEventId) ) 
#define IIsdbEventGroupDescriptor_GetCountOfRefRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRefRecords(This,pbVal) ) 
#define IIsdbEventGroupDescriptor_GetRefRecordEvent(This,bRecordIndex,pwOriginalNetworkId,pwTransportStreamId,pwServiceId,pwEventId)     ( (This)->lpVtbl -> GetRefRecordEvent(This,bRecordIndex,pwOriginalNetworkId,pwTransportStreamId,pwServiceId,pwEventId) ) 
#endif
#endif
#ifndef __IIsdbComponentGroupDescriptor_INTERFACE_DEFINED__
#define __IIsdbComponentGroupDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbComponentGroupDescriptor;
typedef struct IIsdbComponentGroupDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbComponentGroupDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbComponentGroupDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbComponentGroupDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbComponentGroupDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbComponentGroupDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetComponentGroupType) (IIsdbComponentGroupDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IIsdbComponentGroupDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordGroupId) (IIsdbComponentGroupDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordNumberOfCAUnit) (IIsdbComponentGroupDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCAUnitCAUnitId) (IIsdbComponentGroupDescriptor * This, BYTE bRecordIndex, BYTE bCAUnitIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCAUnitNumberOfComponents) (IIsdbComponentGroupDescriptor * This, BYTE bRecordIndex, BYTE bCAUnitIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCAUnitComponentTag) (IIsdbComponentGroupDescriptor * This, BYTE bRecordIndex, BYTE bCAUnitIndex, BYTE bComponentIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordTotalBitRate) (IIsdbComponentGroupDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordTextW) (IIsdbComponentGroupDescriptor * This, BYTE bRecordIndex, DVB_STRCONV_MODE convMode, BSTR * pbstrText);
	END_INTERFACE
} IIsdbComponentGroupDescriptorVtbl;
interface IIsdbComponentGroupDescriptor
{
    CONST_VTBL struct IIsdbComponentGroupDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbComponentGroupDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbComponentGroupDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbComponentGroupDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbComponentGroupDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbComponentGroupDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbComponentGroupDescriptor_GetComponentGroupType(This,pbVal)     ( (This)->lpVtbl -> GetComponentGroupType(This,pbVal) ) 
#define IIsdbComponentGroupDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IIsdbComponentGroupDescriptor_GetRecordGroupId(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordGroupId(This,bRecordIndex,pbVal) ) 
#define IIsdbComponentGroupDescriptor_GetRecordNumberOfCAUnit(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordNumberOfCAUnit(This,bRecordIndex,pbVal) ) 
#define IIsdbComponentGroupDescriptor_GetRecordCAUnitCAUnitId(This,bRecordIndex,bCAUnitIndex,pbVal)     ( (This)->lpVtbl -> GetRecordCAUnitCAUnitId(This,bRecordIndex,bCAUnitIndex,pbVal) ) 
#define IIsdbComponentGroupDescriptor_GetRecordCAUnitNumberOfComponents(This,bRecordIndex,bCAUnitIndex,pbVal)     ( (This)->lpVtbl -> GetRecordCAUnitNumberOfComponents(This,bRecordIndex,bCAUnitIndex,pbVal) ) 
#define IIsdbComponentGroupDescriptor_GetRecordCAUnitComponentTag(This,bRecordIndex,bCAUnitIndex,bComponentIndex,pbVal)     ( (This)->lpVtbl -> GetRecordCAUnitComponentTag(This,bRecordIndex,bCAUnitIndex,bComponentIndex,pbVal) ) 
#define IIsdbComponentGroupDescriptor_GetRecordTotalBitRate(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordTotalBitRate(This,bRecordIndex,pbVal) ) 
#define IIsdbComponentGroupDescriptor_GetRecordTextW(This,bRecordIndex,convMode,pbstrText)     ( (This)->lpVtbl -> GetRecordTextW(This,bRecordIndex,convMode,pbstrText) ) 
#endif
#endif
#ifndef __IIsdbSeriesDescriptor_INTERFACE_DEFINED__
#define __IIsdbSeriesDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbSeriesDescriptor;
typedef struct IIsdbSeriesDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbSeriesDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbSeriesDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbSeriesDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbSeriesDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbSeriesDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetSeriesId) (IIsdbSeriesDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRepeatLabel) (IIsdbSeriesDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetProgramPattern) (IIsdbSeriesDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetExpireDate) (IIsdbSeriesDescriptor * This, BOOL * pfValid, MPEG_DATE_AND_TIME * pmdtVal);
	HRESULT(STDMETHODCALLTYPE * GetEpisodeNumber) (IIsdbSeriesDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetLastEpisodeNumber) (IIsdbSeriesDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetSeriesNameW) (IIsdbSeriesDescriptor * This, DVB_STRCONV_MODE convMode, BSTR * pbstrName);
	END_INTERFACE
} IIsdbSeriesDescriptorVtbl;
interface IIsdbSeriesDescriptor
{
    CONST_VTBL struct IIsdbSeriesDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbSeriesDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbSeriesDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbSeriesDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbSeriesDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbSeriesDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbSeriesDescriptor_GetSeriesId(This,pwVal)     ( (This)->lpVtbl -> GetSeriesId(This,pwVal) ) 
#define IIsdbSeriesDescriptor_GetRepeatLabel(This,pbVal)     ( (This)->lpVtbl -> GetRepeatLabel(This,pbVal) ) 
#define IIsdbSeriesDescriptor_GetProgramPattern(This,pbVal)     ( (This)->lpVtbl -> GetProgramPattern(This,pbVal) ) 
#define IIsdbSeriesDescriptor_GetExpireDate(This,pfValid,pmdtVal)     ( (This)->lpVtbl -> GetExpireDate(This,pfValid,pmdtVal) ) 
#define IIsdbSeriesDescriptor_GetEpisodeNumber(This,pwVal)     ( (This)->lpVtbl -> GetEpisodeNumber(This,pwVal) ) 
#define IIsdbSeriesDescriptor_GetLastEpisodeNumber(This,pwVal)     ( (This)->lpVtbl -> GetLastEpisodeNumber(This,pwVal) ) 
#define IIsdbSeriesDescriptor_GetSeriesNameW(This,convMode,pbstrName)     ( (This)->lpVtbl -> GetSeriesNameW(This,convMode,pbstrName) ) 
#endif
#endif
#ifndef __IIsdbDownloadContentDescriptor_INTERFACE_DEFINED__
#define __IIsdbDownloadContentDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbDownloadContentDescriptor;
typedef struct IIsdbDownloadContentDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbDownloadContentDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbDownloadContentDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbDownloadContentDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbDownloadContentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbDownloadContentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IIsdbDownloadContentDescriptor * This, BOOL * pfReboot, BOOL * pfAddOn, BOOL * pfCompatibility, BOOL * pfModuleInfo, BOOL * pfTextInfo);
	HRESULT(STDMETHODCALLTYPE * GetComponentSize) (IIsdbDownloadContentDescriptor * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetDownloadId) (IIsdbDownloadContentDescriptor * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTimeOutValueDII) (IIsdbDownloadContentDescriptor * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetLeakRate) (IIsdbDownloadContentDescriptor * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetComponentTag) (IIsdbDownloadContentDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCompatiblityDescriptorLength) (IIsdbDownloadContentDescriptor * This, WORD * pwLength);
	HRESULT(STDMETHODCALLTYPE * GetCompatiblityDescriptor) (IIsdbDownloadContentDescriptor * This, BYTE ** ppbData);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IIsdbDownloadContentDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordModuleId) (IIsdbDownloadContentDescriptor * This, WORD wRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordModuleSize) (IIsdbDownloadContentDescriptor * This, WORD wRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordModuleInfoLength) (IIsdbDownloadContentDescriptor * This, WORD wRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordModuleInfo) (IIsdbDownloadContentDescriptor * This, WORD wRecordIndex, BYTE ** ppbData);
	HRESULT(STDMETHODCALLTYPE * GetTextLanguageCode) (IIsdbDownloadContentDescriptor * This, char *szCode);
	HRESULT(STDMETHODCALLTYPE * GetTextW) (IIsdbDownloadContentDescriptor * This, DVB_STRCONV_MODE convMode, BSTR * pbstrName);
	END_INTERFACE
} IIsdbDownloadContentDescriptorVtbl;
interface IIsdbDownloadContentDescriptor
{
    CONST_VTBL struct IIsdbDownloadContentDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbDownloadContentDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbDownloadContentDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbDownloadContentDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbDownloadContentDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbDownloadContentDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbDownloadContentDescriptor_GetFlags(This,pfReboot,pfAddOn,pfCompatibility,pfModuleInfo,pfTextInfo)     ( (This)->lpVtbl -> GetFlags(This,pfReboot,pfAddOn,pfCompatibility,pfModuleInfo,pfTextInfo) ) 
#define IIsdbDownloadContentDescriptor_GetComponentSize(This,pdwVal)     ( (This)->lpVtbl -> GetComponentSize(This,pdwVal) ) 
#define IIsdbDownloadContentDescriptor_GetDownloadId(This,pdwVal)     ( (This)->lpVtbl -> GetDownloadId(This,pdwVal) ) 
#define IIsdbDownloadContentDescriptor_GetTimeOutValueDII(This,pdwVal)     ( (This)->lpVtbl -> GetTimeOutValueDII(This,pdwVal) ) 
#define IIsdbDownloadContentDescriptor_GetLeakRate(This,pdwVal)     ( (This)->lpVtbl -> GetLeakRate(This,pdwVal) ) 
#define IIsdbDownloadContentDescriptor_GetComponentTag(This,pbVal)     ( (This)->lpVtbl -> GetComponentTag(This,pbVal) ) 
#define IIsdbDownloadContentDescriptor_GetCompatiblityDescriptorLength(This,pwLength)     ( (This)->lpVtbl -> GetCompatiblityDescriptorLength(This,pwLength) ) 
#define IIsdbDownloadContentDescriptor_GetCompatiblityDescriptor(This,ppbData)     ( (This)->lpVtbl -> GetCompatiblityDescriptor(This,ppbData) ) 
#define IIsdbDownloadContentDescriptor_GetCountOfRecords(This,pwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pwVal) ) 
#define IIsdbDownloadContentDescriptor_GetRecordModuleId(This,wRecordIndex,pwVal)     ( (This)->lpVtbl -> GetRecordModuleId(This,wRecordIndex,pwVal) ) 
#define IIsdbDownloadContentDescriptor_GetRecordModuleSize(This,wRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordModuleSize(This,wRecordIndex,pdwVal) ) 
#define IIsdbDownloadContentDescriptor_GetRecordModuleInfoLength(This,wRecordIndex,pbVal)     ( (This)->lpVtbl -> GetRecordModuleInfoLength(This,wRecordIndex,pbVal) ) 
#define IIsdbDownloadContentDescriptor_GetRecordModuleInfo(This,wRecordIndex,ppbData)     ( (This)->lpVtbl -> GetRecordModuleInfo(This,wRecordIndex,ppbData) ) 
#define IIsdbDownloadContentDescriptor_GetTextLanguageCode(This,szCode)     ( (This)->lpVtbl -> GetTextLanguageCode(This,szCode) ) 
#define IIsdbDownloadContentDescriptor_GetTextW(This,convMode,pbstrName)     ( (This)->lpVtbl -> GetTextW(This,convMode,pbstrName) ) 
#endif
#endif
#ifndef __IIsdbLogoTransmissionDescriptor_INTERFACE_DEFINED__
#define __IIsdbLogoTransmissionDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbLogoTransmissionDescriptor;
typedef struct IIsdbLogoTransmissionDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbLogoTransmissionDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbLogoTransmissionDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbLogoTransmissionDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbLogoTransmissionDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbLogoTransmissionDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLogoTransmissionType) (IIsdbLogoTransmissionDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLogoId) (IIsdbLogoTransmissionDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetLogoVersion) (IIsdbLogoTransmissionDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetDownloadDataId) (IIsdbLogoTransmissionDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetLogoCharW) (IIsdbLogoTransmissionDescriptor * This, DVB_STRCONV_MODE convMode, BSTR * pbstrChar);
	END_INTERFACE
} IIsdbLogoTransmissionDescriptorVtbl;
interface IIsdbLogoTransmissionDescriptor
{
    CONST_VTBL struct IIsdbLogoTransmissionDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbLogoTransmissionDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbLogoTransmissionDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbLogoTransmissionDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbLogoTransmissionDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbLogoTransmissionDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbLogoTransmissionDescriptor_GetLogoTransmissionType(This,pbVal)     ( (This)->lpVtbl -> GetLogoTransmissionType(This,pbVal) ) 
#define IIsdbLogoTransmissionDescriptor_GetLogoId(This,pwVal)     ( (This)->lpVtbl -> GetLogoId(This,pwVal) ) 
#define IIsdbLogoTransmissionDescriptor_GetLogoVersion(This,pwVal)     ( (This)->lpVtbl -> GetLogoVersion(This,pwVal) ) 
#define IIsdbLogoTransmissionDescriptor_GetDownloadDataId(This,pwVal)     ( (This)->lpVtbl -> GetDownloadDataId(This,pwVal) ) 
#define IIsdbLogoTransmissionDescriptor_GetLogoCharW(This,convMode,pbstrChar)     ( (This)->lpVtbl -> GetLogoCharW(This,convMode,pbstrChar) ) 
#endif
#endif
#ifndef __IIsdbSIParameterDescriptor_INTERFACE_DEFINED__
#define __IIsdbSIParameterDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbSIParameterDescriptor;
typedef struct IIsdbSIParameterDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbSIParameterDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbSIParameterDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbSIParameterDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbSIParameterDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbSIParameterDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetParameterVersion) (IIsdbSIParameterDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetUpdateTime) (IIsdbSIParameterDescriptor * This, MPEG_DATE * pVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordNumberOfTable) (IIsdbSIParameterDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTableId) (IIsdbSIParameterDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptionLength) (IIsdbSIParameterDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptionBytes) (IIsdbSIParameterDescriptor * This, BYTE bRecordIndex, BYTE * pbBufferLength, BYTE * pbBuffer);
	END_INTERFACE
} IIsdbSIParameterDescriptorVtbl;
interface IIsdbSIParameterDescriptor
{
    CONST_VTBL struct IIsdbSIParameterDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbSIParameterDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbSIParameterDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbSIParameterDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbSIParameterDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbSIParameterDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbSIParameterDescriptor_GetParameterVersion(This,pbVal)     ( (This)->lpVtbl -> GetParameterVersion(This,pbVal) ) 
#define IIsdbSIParameterDescriptor_GetUpdateTime(This,pVal)     ( (This)->lpVtbl -> GetUpdateTime(This,pVal) ) 
#define IIsdbSIParameterDescriptor_GetRecordNumberOfTable(This,pbVal)     ( (This)->lpVtbl -> GetRecordNumberOfTable(This,pbVal) ) 
#define IIsdbSIParameterDescriptor_GetTableId(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetTableId(This,bRecordIndex,pbVal) ) 
#define IIsdbSIParameterDescriptor_GetTableDescriptionLength(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetTableDescriptionLength(This,bRecordIndex,pbVal) ) 
#define IIsdbSIParameterDescriptor_GetTableDescriptionBytes(This,bRecordIndex,pbBufferLength,pbBuffer)     ( (This)->lpVtbl -> GetTableDescriptionBytes(This,bRecordIndex,pbBufferLength,pbBuffer) ) 
#endif
#endif
#ifndef __IIsdbEmergencyInformationDescriptor_INTERFACE_DEFINED__
#define __IIsdbEmergencyInformationDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbEmergencyInformationDescriptor;
typedef struct IIsdbEmergencyInformationDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbEmergencyInformationDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbEmergencyInformationDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbEmergencyInformationDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbEmergencyInformationDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbEmergencyInformationDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IIsdbEmergencyInformationDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetServiceId) (IIsdbEmergencyInformationDescriptor * This, BYTE bRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetStartEndFlag) (IIsdbEmergencyInformationDescriptor * This, BYTE bRecordIndex, BYTE * pVal);
	HRESULT(STDMETHODCALLTYPE * GetSignalLevel) (IIsdbEmergencyInformationDescriptor * This, BYTE bRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetAreaCode) (IIsdbEmergencyInformationDescriptor * This, BYTE bRecordIndex, WORD ** ppwVal, BYTE * pbNumAreaCodes);
	END_INTERFACE
} IIsdbEmergencyInformationDescriptorVtbl;
interface IIsdbEmergencyInformationDescriptor
{
    CONST_VTBL struct IIsdbEmergencyInformationDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbEmergencyInformationDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbEmergencyInformationDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbEmergencyInformationDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbEmergencyInformationDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbEmergencyInformationDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbEmergencyInformationDescriptor_GetCountOfRecords(This,pbVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) ) 
#define IIsdbEmergencyInformationDescriptor_GetServiceId(This,bRecordIndex,pwVal)     ( (This)->lpVtbl -> GetServiceId(This,bRecordIndex,pwVal) ) 
#define IIsdbEmergencyInformationDescriptor_GetStartEndFlag(This,bRecordIndex,pVal)     ( (This)->lpVtbl -> GetStartEndFlag(This,bRecordIndex,pVal) ) 
#define IIsdbEmergencyInformationDescriptor_GetSignalLevel(This,bRecordIndex,pbVal)     ( (This)->lpVtbl -> GetSignalLevel(This,bRecordIndex,pbVal) ) 
#define IIsdbEmergencyInformationDescriptor_GetAreaCode(This,bRecordIndex,ppwVal,pbNumAreaCodes)     ( (This)->lpVtbl -> GetAreaCode(This,bRecordIndex,ppwVal,pbNumAreaCodes) ) 
#endif
#endif
#ifndef __IIsdbCADescriptor_INTERFACE_DEFINED__
#define __IIsdbCADescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbCADescriptor;
typedef struct IIsdbCADescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbCADescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbCADescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbCADescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbCADescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbCADescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCASystemId) (IIsdbCADescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetReservedBits) (IIsdbCADescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCAPID) (IIsdbCADescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetPrivateDataBytes) (IIsdbCADescriptor * This, BYTE * pbBufferLength, BYTE * pbBuffer);
	END_INTERFACE
} IIsdbCADescriptorVtbl;
interface IIsdbCADescriptor
{
    CONST_VTBL struct IIsdbCADescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbCADescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbCADescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbCADescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbCADescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbCADescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbCADescriptor_GetCASystemId(This,pwVal)     ( (This)->lpVtbl -> GetCASystemId(This,pwVal) ) 
#define IIsdbCADescriptor_GetReservedBits(This,pbVal)     ( (This)->lpVtbl -> GetReservedBits(This,pbVal) ) 
#define IIsdbCADescriptor_GetCAPID(This,pwVal)     ( (This)->lpVtbl -> GetCAPID(This,pwVal) ) 
#define IIsdbCADescriptor_GetPrivateDataBytes(This,pbBufferLength,pbBuffer)     ( (This)->lpVtbl -> GetPrivateDataBytes(This,pbBufferLength,pbBuffer) ) 
#endif
#endif
#ifndef __IIsdbCAServiceDescriptor_INTERFACE_DEFINED__
#define __IIsdbCAServiceDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbCAServiceDescriptor;
typedef struct IIsdbCAServiceDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbCAServiceDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbCAServiceDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbCAServiceDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbCAServiceDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbCAServiceDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCASystemId) (IIsdbCAServiceDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetCABroadcasterGroupId) (IIsdbCAServiceDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetMessageControl) (IIsdbCAServiceDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetServiceIds) (IIsdbCAServiceDescriptor * This, BYTE * pbNumServiceIds, WORD * pwServiceIds);
	END_INTERFACE
} IIsdbCAServiceDescriptorVtbl;
interface IIsdbCAServiceDescriptor
{
    CONST_VTBL struct IIsdbCAServiceDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbCAServiceDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbCAServiceDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbCAServiceDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbCAServiceDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbCAServiceDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbCAServiceDescriptor_GetCASystemId(This,pwVal)     ( (This)->lpVtbl -> GetCASystemId(This,pwVal) ) 
#define IIsdbCAServiceDescriptor_GetCABroadcasterGroupId(This,pbVal)     ( (This)->lpVtbl -> GetCABroadcasterGroupId(This,pbVal) ) 
#define IIsdbCAServiceDescriptor_GetMessageControl(This,pbVal)     ( (This)->lpVtbl -> GetMessageControl(This,pbVal) ) 
#define IIsdbCAServiceDescriptor_GetServiceIds(This,pbNumServiceIds,pwServiceIds)     ( (This)->lpVtbl -> GetServiceIds(This,pbNumServiceIds,pwServiceIds) ) 
#endif
#endif
#ifndef __IIsdbHierarchicalTransmissionDescriptor_INTERFACE_DEFINED__
#define __IIsdbHierarchicalTransmissionDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IIsdbHierarchicalTransmissionDescriptor;
typedef struct IIsdbHierarchicalTransmissionDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIsdbHierarchicalTransmissionDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIsdbHierarchicalTransmissionDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIsdbHierarchicalTransmissionDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IIsdbHierarchicalTransmissionDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IIsdbHierarchicalTransmissionDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetFutureUse1) (IIsdbHierarchicalTransmissionDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetQualityLevel) (IIsdbHierarchicalTransmissionDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetFutureUse2) (IIsdbHierarchicalTransmissionDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetReferencePid) (IIsdbHierarchicalTransmissionDescriptor * This, WORD * pwVal);
	END_INTERFACE
} IIsdbHierarchicalTransmissionDescriptorVtbl;
interface IIsdbHierarchicalTransmissionDescriptor
{
    CONST_VTBL struct IIsdbHierarchicalTransmissionDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIsdbHierarchicalTransmissionDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IIsdbHierarchicalTransmissionDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IIsdbHierarchicalTransmissionDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IIsdbHierarchicalTransmissionDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IIsdbHierarchicalTransmissionDescriptor_GetLength(This,pbVal)     ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IIsdbHierarchicalTransmissionDescriptor_GetFutureUse1(This,pbVal)     ( (This)->lpVtbl -> GetFutureUse1(This,pbVal) ) 
#define IIsdbHierarchicalTransmissionDescriptor_GetQualityLevel(This,pbVal)     ( (This)->lpVtbl -> GetQualityLevel(This,pbVal) ) 
#define IIsdbHierarchicalTransmissionDescriptor_GetFutureUse2(This,pbVal)     ( (This)->lpVtbl -> GetFutureUse2(This,pbVal) ) 
#define IIsdbHierarchicalTransmissionDescriptor_GetReferencePid(This,pwVal)     ( (This)->lpVtbl -> GetReferencePid(This,pwVal) ) 
#endif
#endif 
#define COMPONENT_TAG_CAPTION_MIN            0x30
#define COMPONENT_TAG_CAPTION_MAX            0x37
#define COMPONENT_TAG_SUPERIMPOSE_MIN        0x38
#define COMPONENT_TAG_SUPERIMPOSE_MAX        0x3F
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0065_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0065_v0_0_s_ifspec;
#ifndef __IPBDASiParser_INTERFACE_DEFINED__
#define __IPBDASiParser_INTERFACE_DEFINED__ 
extern const IID IID_IPBDASiParser;
typedef struct IPBDASiParserVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPBDASiParser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPBDASiParser * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPBDASiParser * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IPBDASiParser * This, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * GetEIT) (IPBDASiParser * This, DWORD dwSize, BYTE * pBuffer, IPBDA_EIT ** ppEIT);
	HRESULT(STDMETHODCALLTYPE * GetServices) (IPBDASiParser * This, DWORD dwSize, const BYTE * pBuffer, IPBDA_Services ** ppServices);
	END_INTERFACE
} IPBDASiParserVtbl;
interface IPBDASiParser
{
    CONST_VTBL struct IPBDASiParserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPBDASiParser_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IPBDASiParser_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IPBDASiParser_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IPBDASiParser_Initialize(This,punk)     ( (This)->lpVtbl -> Initialize(This,punk) ) 
#define IPBDASiParser_GetEIT(This,dwSize,pBuffer,ppEIT)     ( (This)->lpVtbl -> GetEIT(This,dwSize,pBuffer,ppEIT) ) 
#define IPBDASiParser_GetServices(This,dwSize,pBuffer,ppServices)     ( (This)->lpVtbl -> GetServices(This,dwSize,pBuffer,ppServices) ) 
#endif
#endif
#ifndef __IPBDA_EIT_INTERFACE_DEFINED__
#define __IPBDA_EIT_INTERFACE_DEFINED__ 
extern const IID IID_IPBDA_EIT;
typedef struct IPBDA_EITVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPBDA_EIT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPBDA_EIT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPBDA_EIT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IPBDA_EIT * This, DWORD size, const BYTE * pBuffer);
	HRESULT(STDMETHODCALLTYPE * GetTableId) (IPBDA_EIT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IPBDA_EIT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetServiceIdx) (IPBDA_EIT * This, ULONG64 * plwVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IPBDA_EIT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordEventId) (IPBDA_EIT * This, DWORD dwRecordIndex, ULONG64 * plwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordStartTime) (IPBDA_EIT * This, DWORD dwRecordIndex, MPEG_DATE_AND_TIME * pmdtVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDuration) (IPBDA_EIT * This, DWORD dwRecordIndex, MPEG_DURATION * pmdVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IPBDA_EIT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IPBDA_EIT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IPBDA_EIT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	END_INTERFACE
} IPBDA_EITVtbl;
interface IPBDA_EIT
{
    CONST_VTBL struct IPBDA_EITVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPBDA_EIT_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IPBDA_EIT_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IPBDA_EIT_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IPBDA_EIT_Initialize(This,size,pBuffer)     ( (This)->lpVtbl -> Initialize(This,size,pBuffer) ) 
#define IPBDA_EIT_GetTableId(This,pbVal)     ( (This)->lpVtbl -> GetTableId(This,pbVal) ) 
#define IPBDA_EIT_GetVersionNumber(This,pwVal)     ( (This)->lpVtbl -> GetVersionNumber(This,pwVal) ) 
#define IPBDA_EIT_GetServiceIdx(This,plwVal)     ( (This)->lpVtbl -> GetServiceIdx(This,plwVal) ) 
#define IPBDA_EIT_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IPBDA_EIT_GetRecordEventId(This,dwRecordIndex,plwVal)     ( (This)->lpVtbl -> GetRecordEventId(This,dwRecordIndex,plwVal) ) 
#define IPBDA_EIT_GetRecordStartTime(This,dwRecordIndex,pmdtVal)     ( (This)->lpVtbl -> GetRecordStartTime(This,dwRecordIndex,pmdtVal) ) 
#define IPBDA_EIT_GetRecordDuration(This,dwRecordIndex,pmdVal)     ( (This)->lpVtbl -> GetRecordDuration(This,dwRecordIndex,pmdVal) ) 
#define IPBDA_EIT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)     ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) ) 
#define IPBDA_EIT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) ) 
#define IPBDA_EIT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)     ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) ) 
#endif
#endif
#ifndef __IPBDA_Services_INTERFACE_DEFINED__
#define __IPBDA_Services_INTERFACE_DEFINED__ 
extern const IID IID_IPBDA_Services;
typedef struct IPBDA_ServicesVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPBDA_Services * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPBDA_Services * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPBDA_Services * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IPBDA_Services * This, DWORD size, BYTE * pBuffer);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IPBDA_Services * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordByIndex) (IPBDA_Services * This, DWORD dwRecordIndex, ULONG64 * pul64ServiceIdx);
	END_INTERFACE
} IPBDA_ServicesVtbl;
interface IPBDA_Services
{
    CONST_VTBL struct IPBDA_ServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPBDA_Services_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IPBDA_Services_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IPBDA_Services_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IPBDA_Services_Initialize(This,size,pBuffer)     ( (This)->lpVtbl -> Initialize(This,size,pBuffer) ) 
#define IPBDA_Services_GetCountOfRecords(This,pdwVal)     ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IPBDA_Services_GetRecordByIndex(This,dwRecordIndex,pul64ServiceIdx)     ( (This)->lpVtbl -> GetRecordByIndex(This,dwRecordIndex,pul64ServiceIdx) ) 
#endif
#endif
#ifndef __IPBDAEntitlementDescriptor_INTERFACE_DEFINED__
#define __IPBDAEntitlementDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IPBDAEntitlementDescriptor;
typedef struct IPBDAEntitlementDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        IPBDAEntitlementDescriptor * This, REFIID riid, 
          void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( 
        IPBDAEntitlementDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( 
        IPBDAEntitlementDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetTag )( 
        IPBDAEntitlementDescriptor * This, BYTE *pbVal);
    HRESULT ( STDMETHODCALLTYPE *GetLength )( 
        IPBDAEntitlementDescriptor * This, WORD *pwVal);
    HRESULT ( STDMETHODCALLTYPE *GetToken )( 
        IPBDAEntitlementDescriptor * This, BYTE **ppbTokenBuffer, DWORD *pdwTokenLength);
    END_INTERFACE
} IPBDAEntitlementDescriptorVtbl;
interface IPBDAEntitlementDescriptor
{
    CONST_VTBL struct IPBDAEntitlementDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPBDAEntitlementDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IPBDAEntitlementDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IPBDAEntitlementDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IPBDAEntitlementDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IPBDAEntitlementDescriptor_GetLength(This,pwVal)     ( (This)->lpVtbl -> GetLength(This,pwVal) ) 
#define IPBDAEntitlementDescriptor_GetToken(This,ppbTokenBuffer,pdwTokenLength)     ( (This)->lpVtbl -> GetToken(This,ppbTokenBuffer,pdwTokenLength) ) 
#endif
#endif
#ifndef __IPBDAAttributesDescriptor_INTERFACE_DEFINED__
#define __IPBDAAttributesDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IPBDAAttributesDescriptor;
typedef struct IPBDAAttributesDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPBDAAttributesDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPBDAAttributesDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPBDAAttributesDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IPBDAAttributesDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IPBDAAttributesDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetAttributePayload) (IPBDAAttributesDescriptor * This, BYTE ** ppbAttributeBuffer, DWORD * pdwAttributeLength);
	END_INTERFACE
} IPBDAAttributesDescriptorVtbl;
interface IPBDAAttributesDescriptor
{
    CONST_VTBL struct IPBDAAttributesDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPBDAAttributesDescriptor_QueryInterface(This,riid,ppvObject)     ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IPBDAAttributesDescriptor_AddRef(This)     ( (This)->lpVtbl -> AddRef(This) ) 
#define IPBDAAttributesDescriptor_Release(This)     ( (This)->lpVtbl -> Release(This) ) 
#define IPBDAAttributesDescriptor_GetTag(This,pbVal)     ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IPBDAAttributesDescriptor_GetLength(This,pwVal)     ( (This)->lpVtbl -> GetLength(This,pwVal) ) 
#define IPBDAAttributesDescriptor_GetAttributePayload(This,ppbAttributeBuffer,pdwAttributeLength)     ( (This)->lpVtbl -> GetAttributePayload(This,ppbAttributeBuffer,pdwAttributeLength) ) 
#endif
#endif
#endif
