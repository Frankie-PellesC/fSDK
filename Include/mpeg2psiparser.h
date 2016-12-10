/*+@@file@@----------------------------------------------------------------*//*!
 \file		mpeg2psiparser.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jun 25 18:55:53 2016
 \date		Modified on Sat Jun 25 18:55:53 2016
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
#ifndef __mpeg2psiparser_h__
#define __mpeg2psiparser_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IGenericDescriptor_FWD_DEFINED__
#define __IGenericDescriptor_FWD_DEFINED__
typedef interface IGenericDescriptor IGenericDescriptor;
#endif
#ifndef __IGenericDescriptor2_FWD_DEFINED__
#define __IGenericDescriptor2_FWD_DEFINED__
typedef interface IGenericDescriptor2 IGenericDescriptor2;
#endif
#ifndef __IPAT_FWD_DEFINED__
#define __IPAT_FWD_DEFINED__
typedef interface IPAT IPAT;
#endif
#ifndef __ICAT_FWD_DEFINED__
#define __ICAT_FWD_DEFINED__
typedef interface ICAT ICAT;
#endif
#ifndef __IPMT_FWD_DEFINED__
#define __IPMT_FWD_DEFINED__
typedef interface IPMT IPMT;
#endif
#ifndef __ITSDT_FWD_DEFINED__
#define __ITSDT_FWD_DEFINED__
typedef interface ITSDT ITSDT;
#endif
#ifndef __IPSITables_FWD_DEFINED__
#define __IPSITables_FWD_DEFINED__
typedef interface IPSITables IPSITables;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <mpeg2structs.h>
#include <mpeg2data.h>
extern RPC_IF_HANDLE __MIDL_itf_mpeg2psiparser_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mpeg2psiparser_0000_0000_v0_0_s_ifspec;
#ifndef __IGenericDescriptor_INTERFACE_DEFINED__
#define __IGenericDescriptor_INTERFACE_DEFINED__ 
extern const IID IID_IGenericDescriptor;
typedef struct IGenericDescriptorVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGenericDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGenericDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGenericDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IGenericDescriptor * This, BYTE * pbDesc, INT bCount);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IGenericDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IGenericDescriptor * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetBody) (IGenericDescriptor * This, BYTE ** ppbVal);
	END_INTERFACE
} IGenericDescriptorVtbl;
interface IGenericDescriptor
{
    CONST_VTBL struct IGenericDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGenericDescriptor_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IGenericDescriptor_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IGenericDescriptor_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IGenericDescriptor_Initialize(This,pbDesc,bCount)    ( (This)->lpVtbl -> Initialize(This,pbDesc,bCount) ) 
#define IGenericDescriptor_GetTag(This,pbVal)    ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IGenericDescriptor_GetLength(This,pbVal)    ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IGenericDescriptor_GetBody(This,ppbVal)    ( (This)->lpVtbl -> GetBody(This,ppbVal) ) 
#endif
#endif
#ifndef __IGenericDescriptor2_INTERFACE_DEFINED__
#define __IGenericDescriptor2_INTERFACE_DEFINED__ 
extern const IID IID_IGenericDescriptor2;
typedef struct IGenericDescriptor2Vtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGenericDescriptor2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGenericDescriptor2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGenericDescriptor2 * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IGenericDescriptor2 * This, BYTE * pbDesc, INT bCount);
	HRESULT(STDMETHODCALLTYPE * GetTag) (IGenericDescriptor2 * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IGenericDescriptor2 * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetBody) (IGenericDescriptor2 * This, BYTE ** ppbVal);
	HRESULT(STDMETHODCALLTYPE * Initialize2) (IGenericDescriptor2 * This, BYTE * pbDesc, WORD wCount);
	HRESULT(STDMETHODCALLTYPE * GetLength2) (IGenericDescriptor2 * This, WORD * pwVal);
	END_INTERFACE
} IGenericDescriptor2Vtbl;
interface IGenericDescriptor2
{
    CONST_VTBL struct IGenericDescriptor2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGenericDescriptor2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IGenericDescriptor2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IGenericDescriptor2_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IGenericDescriptor2_Initialize(This,pbDesc,bCount)    ( (This)->lpVtbl -> Initialize(This,pbDesc,bCount) ) 
#define IGenericDescriptor2_GetTag(This,pbVal)    ( (This)->lpVtbl -> GetTag(This,pbVal) ) 
#define IGenericDescriptor2_GetLength(This,pbVal)    ( (This)->lpVtbl -> GetLength(This,pbVal) ) 
#define IGenericDescriptor2_GetBody(This,ppbVal)    ( (This)->lpVtbl -> GetBody(This,ppbVal) ) 
#define IGenericDescriptor2_Initialize2(This,pbDesc,wCount)    ( (This)->lpVtbl -> Initialize(This,pbDesc,wCount) ) 
#define IGenericDescriptor2_GetLength2(This,pwVal)    ( (This)->lpVtbl -> GetLength(This,pwVal) ) 
#endif
#endif
#ifndef __IPAT_INTERFACE_DEFINED__
#define __IPAT_INTERFACE_DEFINED__ 
typedef struct __MIDL_IPAT_0001
{
    WORD wProgramNumber;
    WORD wProgramMapPID;
} 	ProgramElement;
extern const IID IID_IPAT;
typedef struct IPATVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPAT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPAT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPAT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IPAT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetTransportStreamId) (IPAT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IPAT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IPAT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordProgramNumber) (IPAT * This, DWORD dwIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordProgramMapPid) (IPAT * This, DWORD dwIndex, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * FindRecordProgramMapPid) (IPAT * This, WORD wProgramNumber, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * RegisterForNextTable) (IPAT * This, HANDLE hNextTableAvailable);
	HRESULT(STDMETHODCALLTYPE * GetNextTable) (IPAT * This, IPAT ** ppPAT);
	HRESULT(STDMETHODCALLTYPE * RegisterForWhenCurrent) (IPAT * This, HANDLE hNextTableIsCurrent);
	HRESULT(STDMETHODCALLTYPE * ConvertNextToCurrent) (IPAT * This);
	END_INTERFACE
} IPATVtbl;
interface IPAT
{
    CONST_VTBL struct IPATVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPAT_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IPAT_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IPAT_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IPAT_Initialize(This,pSectionList,pMPEGData)    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IPAT_GetTransportStreamId(This,pwVal)    ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) ) 
#define IPAT_GetVersionNumber(This,pbVal)    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IPAT_GetCountOfRecords(This,pdwVal)    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) ) 
#define IPAT_GetRecordProgramNumber(This,dwIndex,pwVal)    ( (This)->lpVtbl -> GetRecordProgramNumber(This,dwIndex,pwVal) ) 
#define IPAT_GetRecordProgramMapPid(This,dwIndex,pwVal)    ( (This)->lpVtbl -> GetRecordProgramMapPid(This,dwIndex,pwVal) ) 
#define IPAT_FindRecordProgramMapPid(This,wProgramNumber,pwVal)    ( (This)->lpVtbl -> FindRecordProgramMapPid(This,wProgramNumber,pwVal) ) 
#define IPAT_RegisterForNextTable(This,hNextTableAvailable)    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) ) 
#define IPAT_GetNextTable(This,ppPAT)    ( (This)->lpVtbl -> GetNextTable(This,ppPAT) ) 
#define IPAT_RegisterForWhenCurrent(This,hNextTableIsCurrent)    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) ) 
#define IPAT_ConvertNextToCurrent(This)    ( (This)->lpVtbl -> ConvertNextToCurrent(This) ) 
#endif
#endif
#ifndef __ICAT_INTERFACE_DEFINED__
#define __ICAT_INTERFACE_DEFINED__ 
extern const IID IID_ICAT;
typedef struct ICATVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICAT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICAT * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICAT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ICAT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (ICAT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfTableDescriptors) (ICAT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByIndex) (ICAT * This, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByTag) (ICAT * This, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * RegisterForNextTable) (ICAT * This, HANDLE hNextTableAvailable);
	HRESULT(STDMETHODCALLTYPE * GetNextTable) (ICAT * This, DWORD dwTimeout, ICAT ** ppCAT);
	HRESULT(STDMETHODCALLTYPE * RegisterForWhenCurrent) (ICAT * This, HANDLE hNextTableIsCurrent);
	HRESULT(STDMETHODCALLTYPE * ConvertNextToCurrent) (ICAT * This);
	END_INTERFACE
} ICATVtbl;
interface ICAT
{
    CONST_VTBL struct ICATVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICAT_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define ICAT_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define ICAT_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define ICAT_Initialize(This,pSectionList,pMPEGData)    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define ICAT_GetVersionNumber(This,pbVal)    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define ICAT_GetCountOfTableDescriptors(This,pdwVal)    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) ) 
#define ICAT_GetTableDescriptorByIndex(This,dwIndex,ppDescriptor)    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) ) 
#define ICAT_GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor)    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) ) 
#define ICAT_RegisterForNextTable(This,hNextTableAvailable)    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) ) 
#define ICAT_GetNextTable(This,dwTimeout,ppCAT)    ( (This)->lpVtbl -> GetNextTable(This,dwTimeout,ppCAT) ) 
#define ICAT_RegisterForWhenCurrent(This,hNextTableIsCurrent)    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) ) 
#define ICAT_ConvertNextToCurrent(This)    ( (This)->lpVtbl -> ConvertNextToCurrent(This) ) 
#endif
#endif
#ifndef __IPMT_INTERFACE_DEFINED__
#define __IPMT_INTERFACE_DEFINED__ 
extern const IID IID_IPMT;
typedef struct IPMTVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPMT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPMT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPMT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IPMT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetProgramNumber) (IPMT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (IPMT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetPcrPid) (IPMT * This, PID * pPidVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfTableDescriptors) (IPMT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByIndex) (IPMT * This, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByTag) (IPMT * This, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetCountOfRecords) (IPMT * This, WORD * pwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordStreamType) (IPMT * This, DWORD dwRecordIndex, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordElementaryPid) (IPMT * This, DWORD dwRecordIndex, PID * pPidVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordCountOfDescriptors) (IPMT * This, DWORD dwRecordIndex, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByIndex) (IPMT * This, DWORD dwRecordIndex, DWORD dwDescIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetRecordDescriptorByTag) (IPMT * This, DWORD dwRecordIndex, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * QueryServiceGatewayInfo) (IPMT * This, DSMCC_ELEMENT ** ppDSMCCList, UINT * puiCount);
	HRESULT(STDMETHODCALLTYPE * QueryMPEInfo) (IPMT * This, MPE_ELEMENT ** ppMPEList, UINT * puiCount);
	HRESULT(STDMETHODCALLTYPE * RegisterForNextTable) (IPMT * This, HANDLE hNextTableAvailable);
	HRESULT(STDMETHODCALLTYPE * GetNextTable) (IPMT * This, IPMT ** ppPMT);
	HRESULT(STDMETHODCALLTYPE * RegisterForWhenCurrent) (IPMT * This, HANDLE hNextTableIsCurrent);
	HRESULT(STDMETHODCALLTYPE * ConvertNextToCurrent) (IPMT * This);
	END_INTERFACE
} IPMTVtbl;
interface IPMT
{
    CONST_VTBL struct IPMTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPMT_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IPMT_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IPMT_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IPMT_Initialize(This,pSectionList,pMPEGData)    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define IPMT_GetProgramNumber(This,pwVal)    ( (This)->lpVtbl -> GetProgramNumber(This,pwVal) ) 
#define IPMT_GetVersionNumber(This,pbVal)    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define IPMT_GetPcrPid(This,pPidVal)    ( (This)->lpVtbl -> GetPcrPid(This,pPidVal) ) 
#define IPMT_GetCountOfTableDescriptors(This,pdwVal)    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) ) 
#define IPMT_GetTableDescriptorByIndex(This,dwIndex,ppDescriptor)    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) ) 
#define IPMT_GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor)    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) ) 
#define IPMT_GetCountOfRecords(This,pwVal)    ( (This)->lpVtbl -> GetCountOfRecords(This,pwVal) ) 
#define IPMT_GetRecordStreamType(This,dwRecordIndex,pbVal)    ( (This)->lpVtbl -> GetRecordStreamType(This,dwRecordIndex,pbVal) ) 
#define IPMT_GetRecordElementaryPid(This,dwRecordIndex,pPidVal)    ( (This)->lpVtbl -> GetRecordElementaryPid(This,dwRecordIndex,pPidVal) ) 
#define IPMT_GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal)    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) ) 
#define IPMT_GetRecordDescriptorByIndex(This,dwRecordIndex,dwDescIndex,ppDescriptor)    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwDescIndex,ppDescriptor) ) 
#define IPMT_GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor)    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) ) 
#define IPMT_QueryServiceGatewayInfo(This,ppDSMCCList,puiCount)    ( (This)->lpVtbl -> QueryServiceGatewayInfo(This,ppDSMCCList,puiCount) ) 
#define IPMT_QueryMPEInfo(This,ppMPEList,puiCount)    ( (This)->lpVtbl -> QueryMPEInfo(This,ppMPEList,puiCount) ) 
#define IPMT_RegisterForNextTable(This,hNextTableAvailable)    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) ) 
#define IPMT_GetNextTable(This,ppPMT)    ( (This)->lpVtbl -> GetNextTable(This,ppPMT) ) 
#define IPMT_RegisterForWhenCurrent(This,hNextTableIsCurrent)    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) ) 
#define IPMT_ConvertNextToCurrent(This)    ( (This)->lpVtbl -> ConvertNextToCurrent(This) ) 
#endif
#endif
#ifndef __ITSDT_INTERFACE_DEFINED__
#define __ITSDT_INTERFACE_DEFINED__ 
extern const IID IID_ITSDT;
typedef struct ITSDTVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITSDT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITSDT * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITSDT * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ITSDT * This, ISectionList * pSectionList, IMpeg2Data * pMPEGData);
	HRESULT(STDMETHODCALLTYPE * GetVersionNumber) (ITSDT * This, BYTE * pbVal);
	HRESULT(STDMETHODCALLTYPE * GetCountOfTableDescriptors) (ITSDT * This, DWORD * pdwVal);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByIndex) (ITSDT * This, DWORD dwIndex, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetTableDescriptorByTag) (ITSDT * This, BYTE bTag, DWORD * pdwCookie, IGenericDescriptor ** ppDescriptor);
	HRESULT(STDMETHODCALLTYPE * RegisterForNextTable) (ITSDT * This, HANDLE hNextTableAvailable);
	HRESULT(STDMETHODCALLTYPE * GetNextTable) (ITSDT * This, ITSDT ** ppTSDT);
	HRESULT(STDMETHODCALLTYPE * RegisterForWhenCurrent) (ITSDT * This, HANDLE hNextTableIsCurrent);
	HRESULT(STDMETHODCALLTYPE * ConvertNextToCurrent) (ITSDT * This);
	END_INTERFACE
} ITSDTVtbl;
interface ITSDT
{
    CONST_VTBL struct ITSDTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITSDT_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define ITSDT_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define ITSDT_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define ITSDT_Initialize(This,pSectionList,pMPEGData)    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) ) 
#define ITSDT_GetVersionNumber(This,pbVal)    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) ) 
#define ITSDT_GetCountOfTableDescriptors(This,pdwVal)    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) ) 
#define ITSDT_GetTableDescriptorByIndex(This,dwIndex,ppDescriptor)    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) ) 
#define ITSDT_GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor)    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) ) 
#define ITSDT_RegisterForNextTable(This,hNextTableAvailable)    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) ) 
#define ITSDT_GetNextTable(This,ppTSDT)    ( (This)->lpVtbl -> GetNextTable(This,ppTSDT) ) 
#define ITSDT_RegisterForWhenCurrent(This,hNextTableIsCurrent)    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) ) 
#define ITSDT_ConvertNextToCurrent(This)    ( (This)->lpVtbl -> ConvertNextToCurrent(This) ) 
#endif
#endif
#ifndef __IPSITables_INTERFACE_DEFINED__
#define __IPSITables_INTERFACE_DEFINED__ 
extern const IID IID_IPSITables;
typedef struct IPSITablesVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPSITables * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPSITables * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPSITables * This);
	HRESULT(STDMETHODCALLTYPE * GetTable) (IPSITables * This, DWORD dwTSID, DWORD dwTID_PID, DWORD dwHashedVer, DWORD dwPara4, IUnknown ** ppIUnknown);
	END_INTERFACE
} IPSITablesVtbl;
interface IPSITables
{
    CONST_VTBL struct IPSITablesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPSITables_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IPSITables_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IPSITables_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IPSITables_GetTable(This,dwTSID,dwTID_PID,dwHashedVer,dwPara4,ppIUnknown)    ( (This)->lpVtbl -> GetTable(This,dwTSID,dwTID_PID,dwHashedVer,dwPara4,ppIUnknown) ) 
#endif
#endif
#endif
