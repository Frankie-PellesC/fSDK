/*+@@file@@----------------------------------------------------------------*//*!
 \file		atscpsipparser.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 18:31:47 2016
 \date		Modified on Sat Jul  2 18:31:47 2016
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
#ifndef __atscpsipparser_h__
#define __atscpsipparser_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAtscPsipParser_FWD_DEFINED__
#define __IAtscPsipParser_FWD_DEFINED__
typedef interface IAtscPsipParser IAtscPsipParser;
#endif
#ifndef __IATSC_MGT_FWD_DEFINED__
#define __IATSC_MGT_FWD_DEFINED__
typedef interface IATSC_MGT IATSC_MGT;
#endif
#ifndef __IATSC_VCT_FWD_DEFINED__
#define __IATSC_VCT_FWD_DEFINED__
typedef interface IATSC_VCT IATSC_VCT;
#endif
#ifndef __IATSC_EIT_FWD_DEFINED__
#define __IATSC_EIT_FWD_DEFINED__
typedef interface IATSC_EIT IATSC_EIT;
#endif
#ifndef __IATSC_ETT_FWD_DEFINED__
#define __IATSC_ETT_FWD_DEFINED__
typedef interface IATSC_ETT IATSC_ETT;
#endif
#ifndef __IATSC_STT_FWD_DEFINED__
#define __IATSC_STT_FWD_DEFINED__
typedef interface IATSC_STT IATSC_STT;
#endif
#ifndef __ISCTE_EAS_FWD_DEFINED__
#define __ISCTE_EAS_FWD_DEFINED__
typedef interface ISCTE_EAS ISCTE_EAS;
#endif
#ifndef __IAtscContentAdvisoryDescriptor_FWD_DEFINED__
#define __IAtscContentAdvisoryDescriptor_FWD_DEFINED__
typedef interface IAtscContentAdvisoryDescriptor IAtscContentAdvisoryDescriptor;
#endif
#ifndef __ICaptionServiceDescriptor_FWD_DEFINED__
#define __ICaptionServiceDescriptor_FWD_DEFINED__
typedef interface ICaptionServiceDescriptor ICaptionServiceDescriptor;
#endif
#ifndef __IServiceLocationDescriptor_FWD_DEFINED__
#define __IServiceLocationDescriptor_FWD_DEFINED__
typedef interface IServiceLocationDescriptor IServiceLocationDescriptor;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <mpeg2structs.h>
#include <mpeg2data.h>
#include <mpeg2psiparser.h>
#define ATSC_ETM_LOCATION_NOT_PRESENT        0x00
#define ATSC_ETM_LOCATION_IN_PTC_FOR_PSIP    0x01
#define ATSC_ETM_LOCATION_IN_PTC_FOR_EVENT   0x02
#define ATSC_ETM_LOCATION_RESERVED           0x03
extern RPC_IF_HANDLE __MIDL_itf_atscpsipparser_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_atscpsipparser_0000_0000_v0_0_s_ifspec;
#ifndef __IAtscPsipParser_INTERFACE_DEFINED__
#define __IAtscPsipParser_INTERFACE_DEFINED__
extern const IID IID_IAtscPsipParser;
typedef struct IAtscPsipParserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAtscPsipParser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAtscPsipParser * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAtscPsipParser * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IAtscPsipParser * This, IUnknown * punkMpeg2Data);
	HRESULT(STDMETHODCALLTYPE * GetPAT) (IAtscPsipParser * This, IPAT ** ppPAT);
	HRESULT(STDMETHODCALLTYPE * GetCAT) (IAtscPsipParser * This, DWORD dwTimeout, ICAT ** ppCAT);
	HRESULT(STDMETHODCALLTYPE * GetPMT) (IAtscPsipParser * This, PID pid, WORD * pwProgramNumber, IPMT ** ppPMT);
	HRESULT(STDMETHODCALLTYPE * GetTSDT) (IAtscPsipParser * This, ITSDT ** ppTSDT);
	HRESULT(STDMETHODCALLTYPE * GetMGT) (IAtscPsipParser * This, IATSC_MGT ** ppMGT);
	HRESULT(STDMETHODCALLTYPE * GetVCT) (IAtscPsipParser * This, TID tableId, BOOL fGetNextTable, IATSC_VCT ** ppVCT);
	HRESULT(STDMETHODCALLTYPE * GetEIT) (IAtscPsipParser * This, PID pid, WORD * pwSourceId, DWORD dwTimeout, IATSC_EIT ** ppEIT);
	HRESULT(STDMETHODCALLTYPE * GetETT) (IAtscPsipParser * This, PID pid, WORD * wSourceId, WORD * pwEventId, IATSC_ETT ** ppETT);
	HRESULT(STDMETHODCALLTYPE * GetSTT) (IAtscPsipParser * This, IATSC_STT ** ppSTT);
	HRESULT(STDMETHODCALLTYPE * GetEAS) (IAtscPsipParser * This, PID pid, ISCTE_EAS ** ppEAS);
	END_INTERFACE
}  IAtscPsipParserVtbl;
interface IAtscPsipParser
{
	CONST_VTBL struct IAtscPsipParserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAtscPsipParser_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAtscPsipParser_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAtscPsipParser_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAtscPsipParser_Initialize(This,punkMpeg2Data)( (This)->lpVtbl -> Initialize(This,punkMpeg2Data) )
#define IAtscPsipParser_GetPAT(This,ppPAT)( (This)->lpVtbl -> GetPAT(This,ppPAT) )
#define IAtscPsipParser_GetCAT(This,dwTimeout,ppCAT)( (This)->lpVtbl -> GetCAT(This,dwTimeout,ppCAT) )
#define IAtscPsipParser_GetPMT(This,pid,pwProgramNumber,ppPMT)( (This)->lpVtbl -> GetPMT(This,pid,pwProgramNumber,ppPMT) )
#define IAtscPsipParser_GetTSDT(This,ppTSDT)( (This)->lpVtbl -> GetTSDT(This,ppTSDT) )
#define IAtscPsipParser_GetMGT(This,ppMGT)( (This)->lpVtbl -> GetMGT(This,ppMGT) )
#define IAtscPsipParser_GetVCT(This,tableId,fGetNextTable,ppVCT)( (This)->lpVtbl -> GetVCT(This,tableId,fGetNextTable,ppVCT) )
#define IAtscPsipParser_GetEIT(This,pid,pwSourceId,dwTimeout,ppEIT)( (This)->lpVtbl -> GetEIT(This,pid,pwSourceId,dwTimeout,ppEIT) )
#define IAtscPsipParser_GetETT(This,pid,wSourceId,pwEventId,ppETT)( (This)->lpVtbl -> GetETT(This,pid,wSourceId,pwEventId,ppETT) )
#define IAtscPsipParser_GetSTT(This,ppSTT)( (This)->lpVtbl -> GetSTT(This,ppSTT) )
#define IAtscPsipParser_GetEAS(This,pid,ppEAS)( (This)->lpVtbl -> GetEAS(This,pid,ppEAS) )
#endif
#endif
#ifndef __IATSC_MGT_INTERFACE_DEFINED__
#define __IATSC_MGT_INTERFACE_DEFINED__
extern const IID IID_IATSC_MGT;
typedef struct IATSC_MGTVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IATSC_MGT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IATSC_MGT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IATSC_MGT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IATSC_MGT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IATSC_MGT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetProtocolVersion) (IATSC_MGT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IATSC_MGT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordType) (IATSC_MGT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordTypePid) (IATSC_MGT * This, DWORD dwRecordIndex, PID * ppidVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordVersionNumber) (IATSC_MGT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IATSC_MGT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IATSC_MGT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IATSC_MGT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetCountOfTableDescriptors) (IATSC_MGT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByIndex) (IATSC_MGT * This, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByTag) (IATSC_MGT * This, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	END_INTERFACE
}  IATSC_MGTVtbl;
interface IATSC_MGT
{
	CONST_VTBL struct IATSC_MGTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IATSC_MGT_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IATSC_MGT_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IATSC_MGT_Release(This)( (This)->lpVtbl -> Release(This) )
#define IATSC_MGT_Initialize(This,pSectionList,pMPEGData)( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
#define IATSC_MGT_GetVersionNumber(This,pbVal)( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
#define IATSC_MGT_GetProtocolVersion(This,pbVal)( (This)->lpVtbl -> GetProtocolVersion(This,pbVal) )
#define IATSC_MGT_GetCountOfRecords(This,pdwVal)( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
#define IATSC_MGT_GetRecordType(This,dwRecordIndex,pwVal)( (This)->lpVtbl -> GetRecordType(This,dwRecordIndex,pwVal) )
#define IATSC_MGT_GetRecordTypePid(This,dwRecordIndex,ppidVal)( (This)->lpVtbl -> GetRecordTypePid(This,dwRecordIndex,ppidVal) )
#define IATSC_MGT_GetRecordVersionNumber(This,dwRecordIndex,pbVal)( (This)->lpVtbl -> GetRecordVersionNumber(This,dwRecordIndex,pbVal) )
#define IATSC_MGT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
#define IATSC_MGT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
#define IATSC_MGT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
#define IATSC_MGT_GetCountOfTableDescriptors(This,pdwVal)( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
#define IATSC_MGT_GetTableDescriptorByIndex(This,dwIndex,ppDescriptor)( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
#define IATSC_MGT_GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor)( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
#endif
#endif
#ifndef __IATSC_VCT_INTERFACE_DEFINED__
#define __IATSC_VCT_INTERFACE_DEFINED__
extern const IID IID_IATSC_VCT;
typedef struct IATSC_VCTVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IATSC_VCT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IATSC_VCT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IATSC_VCT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IATSC_VCT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IATSC_VCT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetTransportStreamId) (IATSC_VCT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetProtocolVersion) (IATSC_VCT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IATSC_VCT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordName) (IATSC_VCT * This, DWORD dwRecordIndex, WCHAR ** pwsName);
	HRESULT(STDMETHODCALLTYPE * GetRecordMajorChannelNumber) (IATSC_VCT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordMinorChannelNumber) (IATSC_VCT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordModulationMode) (IATSC_VCT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCarrierFrequency) (IATSC_VCT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordTransportStreamId) (IATSC_VCT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordProgramNumber) (IATSC_VCT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordEtmLocation) (IATSC_VCT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordIsAccessControlledBitSet) (IATSC_VCT * This, DWORD dwRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordIsHiddenBitSet) (IATSC_VCT * This, DWORD dwRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordIsPathSelectBitSet) (IATSC_VCT * This, DWORD dwRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordIsOutOfBandBitSet) (IATSC_VCT * This, DWORD dwRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordIsHideGuideBitSet) (IATSC_VCT * This, DWORD dwRecordIndex, BOOL * pfVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordServiceType) (IATSC_VCT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordSourceId) (IATSC_VCT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IATSC_VCT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IATSC_VCT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IATSC_VCT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetCountOfTableDescriptors) (IATSC_VCT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByIndex) (IATSC_VCT * This, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByTag) (IATSC_VCT * This, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	END_INTERFACE
}  IATSC_VCTVtbl;
interface IATSC_VCT
{
	CONST_VTBL struct IATSC_VCTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IATSC_VCT_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IATSC_VCT_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IATSC_VCT_Release(This)( (This)->lpVtbl -> Release(This) )
#define IATSC_VCT_Initialize(This,pSectionList,pMPEGData)( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
#define IATSC_VCT_GetVersionNumber(This,pbVal)( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
#define IATSC_VCT_GetTransportStreamId(This,pwVal)( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) )
#define IATSC_VCT_GetProtocolVersion(This,pbVal)( (This)->lpVtbl -> GetProtocolVersion(This,pbVal) )
#define IATSC_VCT_GetCountOfRecords(This,pdwVal)( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
#define IATSC_VCT_GetRecordName(This,dwRecordIndex,pwsName)( (This)->lpVtbl -> GetRecordName(This,dwRecordIndex,pwsName) )
#define IATSC_VCT_GetRecordMajorChannelNumber(This,dwRecordIndex,pwVal)( (This)->lpVtbl -> GetRecordMajorChannelNumber(This,dwRecordIndex,pwVal) )
#define IATSC_VCT_GetRecordMinorChannelNumber(This,dwRecordIndex,pwVal)( (This)->lpVtbl -> GetRecordMinorChannelNumber(This,dwRecordIndex,pwVal) )
#define IATSC_VCT_GetRecordModulationMode(This,dwRecordIndex,pbVal)( (This)->lpVtbl -> GetRecordModulationMode(This,dwRecordIndex,pbVal) )
#define IATSC_VCT_GetRecordCarrierFrequency(This,dwRecordIndex,pdwVal)( (This)->lpVtbl -> GetRecordCarrierFrequency(This,dwRecordIndex,pdwVal) )
#define IATSC_VCT_GetRecordTransportStreamId(This,dwRecordIndex,pwVal)( (This)->lpVtbl -> GetRecordTransportStreamId(This,dwRecordIndex,pwVal) )
#define IATSC_VCT_GetRecordProgramNumber(This,dwRecordIndex,pwVal)( (This)->lpVtbl -> GetRecordProgramNumber(This,dwRecordIndex,pwVal) )
#define IATSC_VCT_GetRecordEtmLocation(This,dwRecordIndex,pbVal)( (This)->lpVtbl -> GetRecordEtmLocation(This,dwRecordIndex,pbVal) )
#define IATSC_VCT_GetRecordIsAccessControlledBitSet(This,dwRecordIndex,pfVal)( (This)->lpVtbl -> GetRecordIsAccessControlledBitSet(This,dwRecordIndex,pfVal) )
#define IATSC_VCT_GetRecordIsHiddenBitSet(This,dwRecordIndex,pfVal)( (This)->lpVtbl -> GetRecordIsHiddenBitSet(This,dwRecordIndex,pfVal) )
#define IATSC_VCT_GetRecordIsPathSelectBitSet(This,dwRecordIndex,pfVal)( (This)->lpVtbl -> GetRecordIsPathSelectBitSet(This,dwRecordIndex,pfVal) )
#define IATSC_VCT_GetRecordIsOutOfBandBitSet(This,dwRecordIndex,pfVal)( (This)->lpVtbl -> GetRecordIsOutOfBandBitSet(This,dwRecordIndex,pfVal) )
#define IATSC_VCT_GetRecordIsHideGuideBitSet(This,dwRecordIndex,pfVal)( (This)->lpVtbl -> GetRecordIsHideGuideBitSet(This,dwRecordIndex,pfVal) )
#define IATSC_VCT_GetRecordServiceType(This,dwRecordIndex,pbVal)( (This)->lpVtbl -> GetRecordServiceType(This,dwRecordIndex,pbVal) )
#define IATSC_VCT_GetRecordSourceId(This,dwRecordIndex,pwVal)( (This)->lpVtbl -> GetRecordSourceId(This,dwRecordIndex,pwVal) )
#define IATSC_VCT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
#define IATSC_VCT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
#define IATSC_VCT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
#define IATSC_VCT_GetCountOfTableDescriptors(This,pdwVal)( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
#define IATSC_VCT_GetTableDescriptorByIndex(This,dwIndex,ppDescriptor)( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
#define IATSC_VCT_GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor)( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
#endif
#endif
#ifndef __IATSC_EIT_INTERFACE_DEFINED__
#define __IATSC_EIT_INTERFACE_DEFINED__
extern const IID IID_IATSC_EIT;
typedef struct IATSC_EITVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IATSC_EIT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IATSC_EIT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IATSC_EIT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IATSC_EIT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IATSC_EIT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetSourceId) (IATSC_EIT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetProtocolVersion) (IATSC_EIT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IATSC_EIT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordEventId) (IATSC_EIT * This, DWORD dwRecordIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordStartTime) (IATSC_EIT * This, DWORD dwRecordIndex, MPEG_DATE_AND_TIME * pmdtVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordEtmLocation) (IATSC_EIT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDuration) (IATSC_EIT * This, DWORD dwRecordIndex, MPEG_DURATION * pmdVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordTitleText) (IATSC_EIT * This, DWORD dwRecordIndex, DWORD * pdwLength, BYTE ** ppText);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IATSC_EIT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IATSC_EIT * This, DWORD dwRecordIndex, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IATSC_EIT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	END_INTERFACE
}  IATSC_EITVtbl;
interface IATSC_EIT
{
	CONST_VTBL struct IATSC_EITVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IATSC_EIT_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IATSC_EIT_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IATSC_EIT_Release(This)( (This)->lpVtbl -> Release(This) )
#define IATSC_EIT_Initialize(This,pSectionList,pMPEGData)( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
#define IATSC_EIT_GetVersionNumber(This,pbVal)( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
#define IATSC_EIT_GetSourceId(This,pwVal)( (This)->lpVtbl -> GetSourceId(This,pwVal) )
#define IATSC_EIT_GetProtocolVersion(This,pbVal)( (This)->lpVtbl -> GetProtocolVersion(This,pbVal) )
#define IATSC_EIT_GetCountOfRecords(This,pdwVal)( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
#define IATSC_EIT_GetRecordEventId(This,dwRecordIndex,pwVal)( (This)->lpVtbl -> GetRecordEventId(This,dwRecordIndex,pwVal) )
#define IATSC_EIT_GetRecordStartTime(This,dwRecordIndex,pmdtVal)( (This)->lpVtbl -> GetRecordStartTime(This,dwRecordIndex,pmdtVal) )
#define IATSC_EIT_GetRecordEtmLocation(This,dwRecordIndex,pbVal)( (This)->lpVtbl -> GetRecordEtmLocation(This,dwRecordIndex,pbVal) )
#define IATSC_EIT_GetRecordDuration(This,dwRecordIndex,pmdVal)( (This)->lpVtbl -> GetRecordDuration(This,dwRecordIndex,pmdVal) )
#define IATSC_EIT_GetRecordTitleText(This,dwRecordIndex,pdwLength,ppText)( (This)->lpVtbl -> GetRecordTitleText(This,dwRecordIndex,pdwLength,ppText) )
#define IATSC_EIT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
#define IATSC_EIT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor)( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
#define IATSC_EIT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
#endif
#endif
#ifndef __IATSC_ETT_INTERFACE_DEFINED__
#define __IATSC_ETT_INTERFACE_DEFINED__
extern const IID IID_IATSC_ETT;
typedef struct IATSC_ETTVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IATSC_ETT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IATSC_ETT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IATSC_ETT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IATSC_ETT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IATSC_ETT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetProtocolVersion) (IATSC_ETT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetEtmId) (IATSC_ETT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetExtendedMessageText) (IATSC_ETT * This, DWORD * pdwLength, BYTE ** ppText);
	END_INTERFACE
}  IATSC_ETTVtbl;
interface IATSC_ETT
{
	CONST_VTBL struct IATSC_ETTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IATSC_ETT_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IATSC_ETT_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IATSC_ETT_Release(This)( (This)->lpVtbl -> Release(This) )
#define IATSC_ETT_Initialize(This,pSectionList,pMPEGData)( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
#define IATSC_ETT_GetVersionNumber(This,pbVal)( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
#define IATSC_ETT_GetProtocolVersion(This,pbVal)( (This)->lpVtbl -> GetProtocolVersion(This,pbVal) )
#define IATSC_ETT_GetEtmId(This,pdwVal)( (This)->lpVtbl -> GetEtmId(This,pdwVal) )
#define IATSC_ETT_GetExtendedMessageText(This,pdwLength,ppText)( (This)->lpVtbl -> GetExtendedMessageText(This,pdwLength,ppText) )
#endif
#endif
#ifndef __IATSC_STT_INTERFACE_DEFINED__
#define __IATSC_STT_INTERFACE_DEFINED__
extern const IID IID_IATSC_STT;
typedef struct IATSC_STTVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IATSC_STT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IATSC_STT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IATSC_STT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IATSC_STT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetProtocolVersion) (IATSC_STT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetSystemTime) (IATSC_STT * This, MPEG_DATE_AND_TIME * pmdtSystemTime);
	HRESULT(STDMETHODCALLTYPE * GetGpsUtcOffset) (IATSC_STT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetDaylightSavings) (IATSC_STT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfTableDescriptors) (IATSC_STT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByIndex) (IATSC_STT * This, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByTag) (IATSC_STT * This, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	END_INTERFACE
}  IATSC_STTVtbl;
interface IATSC_STT
{
	CONST_VTBL struct IATSC_STTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IATSC_STT_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IATSC_STT_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IATSC_STT_Release(This)( (This)->lpVtbl -> Release(This) )
#define IATSC_STT_Initialize(This,pSectionList,pMPEGData)( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
#define IATSC_STT_GetProtocolVersion(This,pbVal)( (This)->lpVtbl -> GetProtocolVersion(This,pbVal) )
#define IATSC_STT_GetSystemTime(This,pmdtSystemTime)( (This)->lpVtbl -> GetSystemTime(This,pmdtSystemTime) )
#define IATSC_STT_GetGpsUtcOffset(This,pbVal)( (This)->lpVtbl -> GetGpsUtcOffset(This,pbVal) )
#define IATSC_STT_GetDaylightSavings(This,pwVal)( (This)->lpVtbl -> GetDaylightSavings(This,pwVal) )
#define IATSC_STT_GetCountOfTableDescriptors(This,pdwVal)( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
#define IATSC_STT_GetTableDescriptorByIndex(This,dwIndex,ppDescriptor)( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
#define IATSC_STT_GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor)( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
#endif
#endif
#ifndef __ISCTE_EAS_INTERFACE_DEFINED__
#define __ISCTE_EAS_INTERFACE_DEFINED__
extern const IID IID_ISCTE_EAS;
typedef struct ISCTE_EASVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISCTE_EAS * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISCTE_EAS * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISCTE_EAS * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ISCTE_EAS * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (ISCTE_EAS * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetSequencyNumber) (ISCTE_EAS * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetProtocolVersion) (ISCTE_EAS * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetEASEventID) (ISCTE_EAS * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetOriginatorCode) (ISCTE_EAS * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetEASEventCodeLen) (ISCTE_EAS * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetEASEventCode) (ISCTE_EAS * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRawNatureOfActivationTextLen) (ISCTE_EAS * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRawNatureOfActivationText) (ISCTE_EAS * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetNatureOfActivationText) (ISCTE_EAS * This, BSTR bstrIS0639code, BSTR * pbstrString);
	HRESULT(STDMETHODCALLTYPE * GetTimeRemaining) (ISCTE_EAS * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetStartTime) (ISCTE_EAS * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetDuration) (ISCTE_EAS * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetAlertPriority) (ISCTE_EAS * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetDetailsOOBSourceID) (ISCTE_EAS * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetDetailsMajor) (ISCTE_EAS * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetDetailsMinor) (ISCTE_EAS * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetDetailsAudioOOBSourceID) (ISCTE_EAS * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetAlertText) (ISCTE_EAS * This, BSTR bstrIS0639code, BSTR * pbstrString);
	HRESULT(STDMETHODCALLTYPE * GetRawAlertTextLen) (ISCTE_EAS * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRawAlertText) (ISCTE_EAS * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLocationCount) (ISCTE_EAS * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLocationCodes) (ISCTE_EAS * This, BYTE bIndex, BYTE * pbState, BYTE * pbCountySubdivision, WORD * pwCounty);
	HRESULT(STDMETHODCALLTYPE * GetExceptionCount) (ISCTE_EAS * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetExceptionService) (ISCTE_EAS * This, BYTE bIndex, BYTE * pbIBRef, WORD * pwFirst, WORD * pwSecond);
	HRESULT(STDMETHODCALLTYPE * GetCountOfTableDescriptors) (ISCTE_EAS * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByIndex) (ISCTE_EAS * This, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByTag) (ISCTE_EAS * This, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	END_INTERFACE
}  ISCTE_EASVtbl;
interface ISCTE_EAS
{
	CONST_VTBL struct ISCTE_EASVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISCTE_EAS_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISCTE_EAS_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISCTE_EAS_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISCTE_EAS_Initialize(This,pSectionList,pMPEGData)( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
#define ISCTE_EAS_GetVersionNumber(This,pbVal)( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
#define ISCTE_EAS_GetSequencyNumber(This,pbVal)( (This)->lpVtbl -> GetSequencyNumber(This,pbVal) )
#define ISCTE_EAS_GetProtocolVersion(This,pbVal)( (This)->lpVtbl -> GetProtocolVersion(This,pbVal) )
#define ISCTE_EAS_GetEASEventID(This,pwVal)( (This)->lpVtbl -> GetEASEventID(This,pwVal) )
#define ISCTE_EAS_GetOriginatorCode(This,pbVal)( (This)->lpVtbl -> GetOriginatorCode(This,pbVal) )
#define ISCTE_EAS_GetEASEventCodeLen(This,pbVal)( (This)->lpVtbl -> GetEASEventCodeLen(This,pbVal) )
#define ISCTE_EAS_GetEASEventCode(This,pbVal)( (This)->lpVtbl -> GetEASEventCode(This,pbVal) )
#define ISCTE_EAS_GetRawNatureOfActivationTextLen(This,pbVal)( (This)->lpVtbl -> GetRawNatureOfActivationTextLen(This,pbVal) )
#define ISCTE_EAS_GetRawNatureOfActivationText(This,pbVal)( (This)->lpVtbl -> GetRawNatureOfActivationText(This,pbVal) )
#define ISCTE_EAS_GetNatureOfActivationText(This,bstrIS0639code,pbstrString)( (This)->lpVtbl -> GetNatureOfActivationText(This,bstrIS0639code,pbstrString) )
#define ISCTE_EAS_GetTimeRemaining(This,pbVal)( (This)->lpVtbl -> GetTimeRemaining(This,pbVal) )
#define ISCTE_EAS_GetStartTime(This,pdwVal)( (This)->lpVtbl -> GetStartTime(This,pdwVal) )
#define ISCTE_EAS_GetDuration(This,pwVal)( (This)->lpVtbl -> GetDuration(This,pwVal) )
#define ISCTE_EAS_GetAlertPriority(This,pbVal)( (This)->lpVtbl -> GetAlertPriority(This,pbVal) )
#define ISCTE_EAS_GetDetailsOOBSourceID(This,pwVal)( (This)->lpVtbl -> GetDetailsOOBSourceID(This,pwVal) )
#define ISCTE_EAS_GetDetailsMajor(This,pwVal)( (This)->lpVtbl -> GetDetailsMajor(This,pwVal) )
#define ISCTE_EAS_GetDetailsMinor(This,pwVal)( (This)->lpVtbl -> GetDetailsMinor(This,pwVal) )
#define ISCTE_EAS_GetDetailsAudioOOBSourceID(This,pwVal)( (This)->lpVtbl -> GetDetailsAudioOOBSourceID(This,pwVal) )
#define ISCTE_EAS_GetAlertText(This,bstrIS0639code,pbstrString)( (This)->lpVtbl -> GetAlertText(This,bstrIS0639code,pbstrString) )
#define ISCTE_EAS_GetRawAlertTextLen(This,pwVal)( (This)->lpVtbl -> GetRawAlertTextLen(This,pwVal) )
#define ISCTE_EAS_GetRawAlertText(This,pbVal)( (This)->lpVtbl -> GetRawAlertText(This,pbVal) )
#define ISCTE_EAS_GetLocationCount(This,pbVal)( (This)->lpVtbl -> GetLocationCount(This,pbVal) )
#define ISCTE_EAS_GetLocationCodes(This,bIndex,pbState,pbCountySubdivision,pwCounty)( (This)->lpVtbl -> GetLocationCodes(This,bIndex,pbState,pbCountySubdivision,pwCounty) )
#define ISCTE_EAS_GetExceptionCount(This,pbVal)( (This)->lpVtbl -> GetExceptionCount(This,pbVal) )
#define ISCTE_EAS_GetExceptionService(This,bIndex,pbIBRef,pwFirst,pwSecond)( (This)->lpVtbl -> GetExceptionService(This,bIndex,pbIBRef,pwFirst,pwSecond) )
#define ISCTE_EAS_GetCountOfTableDescriptors(This,pdwVal)( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
#define ISCTE_EAS_GetTableDescriptorByIndex(This,dwIndex,ppDescriptor)( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
#define ISCTE_EAS_GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor)( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
#endif
#endif
#ifndef __IAtscContentAdvisoryDescriptor_INTERFACE_DEFINED__
#define __IAtscContentAdvisoryDescriptor_INTERFACE_DEFINED__
extern const IID IID_IAtscContentAdvisoryDescriptor;
typedef struct IAtscContentAdvisoryDescriptorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAtscContentAdvisoryDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAtscContentAdvisoryDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAtscContentAdvisoryDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IAtscContentAdvisoryDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IAtscContentAdvisoryDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRatingRegionCount) (IAtscContentAdvisoryDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordRatingRegion) (IAtscContentAdvisoryDescriptor * This, BYTE bIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordRatedDimensions) (IAtscContentAdvisoryDescriptor * This, BYTE bIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordRatingDimension) (IAtscContentAdvisoryDescriptor * This, BYTE bIndexOuter, BYTE bIndexInner, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordRatingValue) (IAtscContentAdvisoryDescriptor * This, BYTE bIndexOuter, BYTE bIndexInner, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordRatingDescriptionText) (IAtscContentAdvisoryDescriptor * This, BYTE bIndex, BYTE * pbLength, BYTE ** ppText);
	END_INTERFACE
}  IAtscContentAdvisoryDescriptorVtbl;
interface IAtscContentAdvisoryDescriptor
{
	CONST_VTBL struct IAtscContentAdvisoryDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAtscContentAdvisoryDescriptor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAtscContentAdvisoryDescriptor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAtscContentAdvisoryDescriptor_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAtscContentAdvisoryDescriptor_GetTag(This,pbVal)( (This)->lpVtbl -> GetTag(This,pbVal) )
#define IAtscContentAdvisoryDescriptor_GetLength(This,pbVal)( (This)->lpVtbl -> GetLength(This,pbVal) )
#define IAtscContentAdvisoryDescriptor_GetRatingRegionCount(This,pbVal)( (This)->lpVtbl -> GetRatingRegionCount(This,pbVal) )
#define IAtscContentAdvisoryDescriptor_GetRecordRatingRegion(This,bIndex,pbVal)( (This)->lpVtbl -> GetRecordRatingRegion(This,bIndex,pbVal) )
#define IAtscContentAdvisoryDescriptor_GetRecordRatedDimensions(This,bIndex,pbVal)( (This)->lpVtbl -> GetRecordRatedDimensions(This,bIndex,pbVal) )
#define IAtscContentAdvisoryDescriptor_GetRecordRatingDimension(This,bIndexOuter,bIndexInner,pbVal)( (This)->lpVtbl -> GetRecordRatingDimension(This,bIndexOuter,bIndexInner,pbVal) )
#define IAtscContentAdvisoryDescriptor_GetRecordRatingValue(This,bIndexOuter,bIndexInner,pbVal)( (This)->lpVtbl -> GetRecordRatingValue(This,bIndexOuter,bIndexInner,pbVal) )
#define IAtscContentAdvisoryDescriptor_GetRecordRatingDescriptionText(This,bIndex,pbLength,ppText)( (This)->lpVtbl -> GetRecordRatingDescriptionText(This,bIndex,pbLength,ppText) )
#endif
#endif
#ifndef __ICaptionServiceDescriptor_INTERFACE_DEFINED__
#define __ICaptionServiceDescriptor_INTERFACE_DEFINED__
extern const IID IID_ICaptionServiceDescriptor;
typedef struct ICaptionServiceDescriptorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICaptionServiceDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICaptionServiceDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICaptionServiceDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfServices) (ICaptionServiceDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLanguageCode) (ICaptionServiceDescriptor * This, BYTE bIndex, BYTE LangCode[3]);
	HRESULT(STDMETHODCALLTYPE * GetCaptionServiceNumber) (ICaptionServiceDescriptor * This, BYTE bIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCCType) (ICaptionServiceDescriptor * This, BYTE bIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetEasyReader) (ICaptionServiceDescriptor * This, BYTE bIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetWideAspectRatio) (ICaptionServiceDescriptor * This, BYTE bIndex, BYTE * pbVal);
	END_INTERFACE
}  ICaptionServiceDescriptorVtbl;
interface ICaptionServiceDescriptor
{
	CONST_VTBL struct ICaptionServiceDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICaptionServiceDescriptor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICaptionServiceDescriptor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICaptionServiceDescriptor_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICaptionServiceDescriptor_GetNumberOfServices(This,pbVal)( (This)->lpVtbl -> GetNumberOfServices(This,pbVal) )
#define ICaptionServiceDescriptor_GetLanguageCode(This,bIndex,LangCode)( (This)->lpVtbl -> GetLanguageCode(This,bIndex,LangCode) )
#define ICaptionServiceDescriptor_GetCaptionServiceNumber(This,bIndex,pbVal)( (This)->lpVtbl -> GetCaptionServiceNumber(This,bIndex,pbVal) )
#define ICaptionServiceDescriptor_GetCCType(This,bIndex,pbVal)( (This)->lpVtbl -> GetCCType(This,bIndex,pbVal) )
#define ICaptionServiceDescriptor_GetEasyReader(This,bIndex,pbVal)( (This)->lpVtbl -> GetEasyReader(This,bIndex,pbVal) )
#define ICaptionServiceDescriptor_GetWideAspectRatio(This,bIndex,pbVal)( (This)->lpVtbl -> GetWideAspectRatio(This,bIndex,pbVal) )
#endif
#endif
#ifndef __IServiceLocationDescriptor_INTERFACE_DEFINED__
#define __IServiceLocationDescriptor_INTERFACE_DEFINED__
extern const IID IID_IServiceLocationDescriptor;
typedef struct IServiceLocationDescriptorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IServiceLocationDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IServiceLocationDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IServiceLocationDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetPCR_PID) (IServiceLocationDescriptor * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfElements) (IServiceLocationDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetElementStreamType) (IServiceLocationDescriptor * This, BYTE bIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetElementPID) (IServiceLocationDescriptor * This, BYTE bIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetElementLanguageCode) (IServiceLocationDescriptor * This, BYTE bIndex, BYTE LangCode[3]);
	END_INTERFACE
}  IServiceLocationDescriptorVtbl;
interface IServiceLocationDescriptor
{
	CONST_VTBL struct IServiceLocationDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IServiceLocationDescriptor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IServiceLocationDescriptor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IServiceLocationDescriptor_Release(This)( (This)->lpVtbl -> Release(This) )
#define IServiceLocationDescriptor_GetPCR_PID(This,pwVal)( (This)->lpVtbl -> GetPCR_PID(This,pwVal) )
#define IServiceLocationDescriptor_GetNumberOfElements(This,pbVal)( (This)->lpVtbl -> GetNumberOfElements(This,pbVal) )
#define IServiceLocationDescriptor_GetElementStreamType(This,bIndex,pbVal)( (This)->lpVtbl -> GetElementStreamType(This,bIndex,pbVal) )
#define IServiceLocationDescriptor_GetElementPID(This,bIndex,pwVal)( (This)->lpVtbl -> GetElementPID(This,bIndex,pwVal) )
#define IServiceLocationDescriptor_GetElementLanguageCode(This,bIndex,LangCode)( (This)->lpVtbl -> GetElementLanguageCode(This,bIndex,LangCode) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif
