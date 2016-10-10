/*+@@file@@----------------------------------------------------------------*//*!
 \file		mpeg2data.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jun 25 18:54:33 2016
 \date		Modified on Sat Jun 25 18:54:33 2016
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
#ifndef __mpeg2data_h__
#define __mpeg2data_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMpeg2TableFilter_FWD_DEFINED__
#define __IMpeg2TableFilter_FWD_DEFINED__
typedef interface IMpeg2TableFilter IMpeg2TableFilter;
#endif
#ifndef __IMpeg2Data_FWD_DEFINED__
#define __IMpeg2Data_FWD_DEFINED__
typedef interface IMpeg2Data IMpeg2Data;
#endif
#ifndef __ISectionList_FWD_DEFINED__
#define __ISectionList_FWD_DEFINED__
typedef interface ISectionList ISectionList;
#endif
#ifndef __IMpeg2Stream_FWD_DEFINED__
#define __IMpeg2Stream_FWD_DEFINED__
typedef interface IMpeg2Stream IMpeg2Stream;
#endif
#ifndef __SectionList_FWD_DEFINED__
#define __SectionList_FWD_DEFINED__
typedef struct SectionList SectionList;
#endif
#ifndef __Mpeg2Stream_FWD_DEFINED__
#define __Mpeg2Stream_FWD_DEFINED__
typedef struct Mpeg2Stream Mpeg2Stream;
#endif
#ifndef __Mpeg2Data_FWD_DEFINED__
#define __Mpeg2Data_FWD_DEFINED__
typedef struct Mpeg2Data Mpeg2Data;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "bdaiface.h"
#include "mpeg2structs.h"
#pragma pack(push)
#pragma pack(1)
#define MPEG_PAT_PID                0x0000
#define MPEG_PAT_TID                0x00
#define MPEG_CAT_PID                0x0001
#define MPEG_CAT_TID                0x01
#define MPEG_PMT_TID                0x02
#define MPEG_TSDT_PID               0x0002
#define MPEG_TSDT_TID               0x03
#define ATSC_MGT_PID                0x1FFB
#define ATSC_MGT_TID                0xC7
#define ATSC_VCT_PID                0x1FFB
#define ATSC_VCT_TERR_TID           0xC8
#define ATSC_VCT_CABL_TID           0xC9
#define ATSC_EIT_TID                0xCB
#define ATSC_ETT_TID                0xCC
#define ATSC_RRT_TID                0xCA
#define ATSC_RRT_PID                0x1FFB
#define ATSC_STT_PID                0x1FFB
#define ATSC_STT_TID                0xCD
#define ATSC_PIT_TID                0xD0
#define DVB_NIT_PID                 0x0010
#define DVB_NIT_ACTUAL_TID          0x40
#define DVB_NIT_OTHER_TID           0x41
#define DVB_SDT_PID                 0x0011
#define DVB_SDT_ACTUAL_TID          0x42
#define DVB_SDT_OTHER_TID           0x46
#define DVB_BAT_PID                 0x0011
#define DVB_BAT_TID                 0x4A
#define DVB_EIT_PID                 0x0012
#define DVB_EIT_ACTUAL_TID          0x4E
#define DVB_EIT_OTHER_TID           0x4F
#define DVB_RST_PID                 0x0013
#define DVB_RST_TID                 0x71
#define DVB_TDT_PID                 0x0014
#define DVB_TDT_TID                 0x70
#define DVB_ST_PID_16               0x0010
#define DVB_ST_PID_17               0x0011
#define DVB_ST_PID_18               0x0012
#define DVB_ST_PID_19               0x0013
#define DVB_ST_PID_20               0x0014
#define DVB_ST_TID                  0x72
#define ISDB_ST_TID                 0x72
#define DVB_TOT_PID                 0x0014
#define DVB_TOT_TID                 0x73
#define DVB_DIT_PID                 0x001E
#define DVB_DIT_TID                 0x7E
#define DVB_SIT_PID                 0x001F
#define DVB_SIT_TID                 0x7F
#define ISDB_EMM_TID                0x85
#define ISDB_BIT_PID                0x0024
#define ISDB_BIT_TID                0xC4
#define ISDB_NBIT_PID               0x0025
#define ISDB_NBIT_MSG_TID           0xC5
#define ISDB_NBIT_REF_TID           0xC6
#define ISDB_LDT_PID                0x0025
#define ISDB_LDT_TID                0xC7
#define ISDB_SDTT_PID               0x0023
#define ISDB_SDTT_ALT_PID           0x0028
#define ISDB_SDTT_TID               0xC3
#define ISDB_CDT_PID                0x0029
#define ISDB_CDT_TID                0xC8
#define SCTE_EAS_TID                0xD8
#define SCTE_EAS_IB_PID             0x1FFB
#define SCTE_EAS_OOB_PID            0x1FFC
extern RPC_IF_HANDLE __MIDL_itf_mpeg2data_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mpeg2data_0000_0000_v0_0_s_ifspec;
#ifndef __IMpeg2TableFilter_INTERFACE_DEFINED__
#define __IMpeg2TableFilter_INTERFACE_DEFINED__ 
extern const IID IID_IMpeg2TableFilter;
typedef struct IMpeg2TableFilterVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMpeg2TableFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMpeg2TableFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMpeg2TableFilter * This);
	HRESULT(STDMETHODCALLTYPE * AddPID) (IMpeg2TableFilter * This, PID p);
	HRESULT(STDMETHODCALLTYPE * AddTable) (IMpeg2TableFilter * This, PID p, TID t);
	HRESULT(STDMETHODCALLTYPE * AddExtension) (IMpeg2TableFilter * This, PID p, TID t, TEID e);
	HRESULT(STDMETHODCALLTYPE * RemovePID) (IMpeg2TableFilter * This, PID p);
	HRESULT(STDMETHODCALLTYPE * RemoveTable) (IMpeg2TableFilter * This, PID p, TID t);
	HRESULT(STDMETHODCALLTYPE * RemoveExtension) (IMpeg2TableFilter * This, PID p, TID t, TEID e);
	END_INTERFACE
} IMpeg2TableFilterVtbl;
interface IMpeg2TableFilter
{
    CONST_VTBL struct IMpeg2TableFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMpeg2TableFilter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMpeg2TableFilter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMpeg2TableFilter_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IMpeg2TableFilter_AddPID(This,p)    ( (This)->lpVtbl -> AddPID(This,p) ) 
#define IMpeg2TableFilter_AddTable(This,p,t)    ( (This)->lpVtbl -> AddTable(This,p,t) ) 
#define IMpeg2TableFilter_AddExtension(This,p,t,e)    ( (This)->lpVtbl -> AddExtension(This,p,t,e) ) 
#define IMpeg2TableFilter_RemovePID(This,p)    ( (This)->lpVtbl -> RemovePID(This,p) ) 
#define IMpeg2TableFilter_RemoveTable(This,p,t)    ( (This)->lpVtbl -> RemoveTable(This,p,t) ) 
#define IMpeg2TableFilter_RemoveExtension(This,p,t,e)    ( (This)->lpVtbl -> RemoveExtension(This,p,t,e) ) 
#endif
#endif 
typedef struct Mpeg2TableSampleHdr
{
    BYTE SectionCount;
    BYTE Reserved[ 3 ];
    long SectionOffsets[ 1 ];
} 	Mpeg2TableSampleHdr;
DEFINE_GUID(CLSID_Mpeg2TableFilter, 0x752845f1, 0x758f, 0x4c83, 0xa0, 0x43, 0x42, 0x70, 0xc5, 0x93, 0x30, 0x8e);
DEFINE_GUID(Mpeg2DataLib,           0xDBAF6C1B, 0xB6A4, 0x4898, 0xAE, 0x65, 0x20, 0x4F, 0x0D, 0x95, 0x09, 0xA1);
extern RPC_IF_HANDLE __MIDL_itf_mpeg2data_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mpeg2data_0000_0001_v0_0_s_ifspec;
#ifndef __Mpeg2DataLib_LIBRARY_DEFINED__
#define __Mpeg2DataLib_LIBRARY_DEFINED__ 
extern const IID LIBID_Mpeg2DataLib;
#ifndef __IMpeg2Data_INTERFACE_DEFINED__
#define __IMpeg2Data_INTERFACE_DEFINED__ 
extern const IID IID_IMpeg2Data;
typedef struct IMpeg2DataVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMpeg2Data * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMpeg2Data * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMpeg2Data * This);
	HRESULT(STDMETHODCALLTYPE * GetSection) (IMpeg2Data * This, PID pid, TID tid, PMPEG2_FILTER pFilter, DWORD dwTimeout, ISectionList ** ppSectionList);
	HRESULT(STDMETHODCALLTYPE * GetTable) (IMpeg2Data * This, PID pid, TID tid, PMPEG2_FILTER pFilter, DWORD dwTimeout, ISectionList ** ppSectionList);
	HRESULT(STDMETHODCALLTYPE * GetStreamOfSections) (IMpeg2Data * This, PID pid, TID tid, PMPEG2_FILTER pFilter, HANDLE hDataReadyEvent, IMpeg2Stream ** ppMpegStream);
	END_INTERFACE
} IMpeg2DataVtbl;
interface IMpeg2Data
{
    CONST_VTBL struct IMpeg2DataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMpeg2Data_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMpeg2Data_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMpeg2Data_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IMpeg2Data_GetSection(This,pid,tid,pFilter,dwTimeout,ppSectionList)    ( (This)->lpVtbl -> GetSection(This,pid,tid,pFilter,dwTimeout,ppSectionList) ) 
#define IMpeg2Data_GetTable(This,pid,tid,pFilter,dwTimeout,ppSectionList)    ( (This)->lpVtbl -> GetTable(This,pid,tid,pFilter,dwTimeout,ppSectionList) ) 
#define IMpeg2Data_GetStreamOfSections(This,pid,tid,pFilter,hDataReadyEvent,ppMpegStream)    ( (This)->lpVtbl -> GetStreamOfSections(This,pid,tid,pFilter,hDataReadyEvent,ppMpegStream) ) 
#endif
#endif
#ifndef __ISectionList_INTERFACE_DEFINED__
#define __ISectionList_INTERFACE_DEFINED__ 
extern const IID IID_ISectionList;
typedef struct ISectionListVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISectionList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISectionList * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISectionList * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ISectionList * This, MPEG_REQUEST_TYPE requestType, IMpeg2Data * pMpeg2Data, PMPEG_CONTEXT pContext, PID pid, TID tid, PMPEG2_FILTER pFilter, DWORD timeout, HANDLE hDoneEvent);
	HRESULT(STDMETHODCALLTYPE * InitializeWithRawSections) (ISectionList * This, PMPEG_PACKET_LIST pmplSections);
	HRESULT(STDMETHODCALLTYPE * CancelPendingRequest) (ISectionList * This);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfSections) (ISectionList * This, WORD * pCount);
	HRESULT(STDMETHODCALLTYPE * GetSectionData) (ISectionList * This, WORD sectionNumber, DWORD * pdwRawPacketLength, PSECTION * ppSection);
	HRESULT(STDMETHODCALLTYPE * GetProgramIdentifier) (ISectionList * This, PID * pPid);
	HRESULT(STDMETHODCALLTYPE * GetTableIdentifier) (ISectionList * This, TID * pTableId);
	END_INTERFACE
} ISectionListVtbl;
interface ISectionList
{
    CONST_VTBL struct ISectionListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISectionList_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define ISectionList_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define ISectionList_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define ISectionList_Initialize(This,requestType,pMpeg2Data,pContext,pid,tid,pFilter,timeout,hDoneEvent)    ( (This)->lpVtbl -> Initialize(This,requestType,pMpeg2Data,pContext,pid,tid,pFilter,timeout,hDoneEvent) ) 
#define ISectionList_InitializeWithRawSections(This,pmplSections)    ( (This)->lpVtbl -> InitializeWithRawSections(This,pmplSections) ) 
#define ISectionList_CancelPendingRequest(This)    ( (This)->lpVtbl -> CancelPendingRequest(This) ) 
#define ISectionList_GetNumberOfSections(This,pCount)    ( (This)->lpVtbl -> GetNumberOfSections(This,pCount) ) 
#define ISectionList_GetSectionData(This,sectionNumber,pdwRawPacketLength,ppSection)    ( (This)->lpVtbl -> GetSectionData(This,sectionNumber,pdwRawPacketLength,ppSection) ) 
#define ISectionList_GetProgramIdentifier(This,pPid)    ( (This)->lpVtbl -> GetProgramIdentifier(This,pPid) ) 
#define ISectionList_GetTableIdentifier(This,pTableId)    ( (This)->lpVtbl -> GetTableIdentifier(This,pTableId) ) 
#endif
#endif
#ifndef __IMpeg2Stream_INTERFACE_DEFINED__
#define __IMpeg2Stream_INTERFACE_DEFINED__ 
extern const IID IID_IMpeg2Stream;
typedef struct IMpeg2StreamVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMpeg2Stream * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMpeg2Stream * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMpeg2Stream * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IMpeg2Stream * This, MPEG_REQUEST_TYPE requestType, IMpeg2Data * pMpeg2Data, PMPEG_CONTEXT pContext, PID pid, TID tid, PMPEG2_FILTER pFilter, HANDLE hDataReadyEvent);
	HRESULT(STDMETHODCALLTYPE * SupplyDataBuffer) (IMpeg2Stream * This, PMPEG_STREAM_BUFFER pStreamBuffer);
	END_INTERFACE
} IMpeg2StreamVtbl;
interface IMpeg2Stream
{
    CONST_VTBL struct IMpeg2StreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMpeg2Stream_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMpeg2Stream_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMpeg2Stream_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IMpeg2Stream_Initialize(This,requestType,pMpeg2Data,pContext,pid,tid,pFilter,hDataReadyEvent)    ( (This)->lpVtbl -> Initialize(This,requestType,pMpeg2Data,pContext,pid,tid,pFilter,hDataReadyEvent) ) 
#define IMpeg2Stream_SupplyDataBuffer(This,pStreamBuffer)    ( (This)->lpVtbl -> SupplyDataBuffer(This,pStreamBuffer) ) 
#endif
#endif
extern const CLSID CLSID_SectionList;
extern const CLSID CLSID_Mpeg2Stream;
extern const CLSID CLSID_Mpeg2Data;
#endif 
#pragma pack(pop)
extern RPC_IF_HANDLE __MIDL_itf_mpeg2data_0001_0114_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mpeg2data_0001_0114_v0_0_s_ifspec;
#endif
