/*+@@file@@----------------------------------------------------------------*//*!
 \file		streamdescription.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 01:41:49 2016
 \date		Modified on Sat Sep 17 01:41:49 2016
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
#ifndef __streamdescription_h__
#define __streamdescription_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSStreamHeader_FWD_DEFINED__
#define __IWMSStreamHeader_FWD_DEFINED__
typedef interface IWMSStreamHeader IWMSStreamHeader;
#endif
#ifndef __IWMSStreamHeaderList_FWD_DEFINED__
#define __IWMSStreamHeaderList_FWD_DEFINED__
typedef interface IWMSStreamHeaderList IWMSStreamHeaderList;
#endif
#ifndef __IWMSContentDescriptionList_FWD_DEFINED__
#define __IWMSContentDescriptionList_FWD_DEFINED__
typedef interface IWMSContentDescriptionList IWMSContentDescriptionList;
#endif
#ifndef __IWMSStreamSwitchDescriptionList_FWD_DEFINED__
#define __IWMSStreamSwitchDescriptionList_FWD_DEFINED__
typedef interface IWMSStreamSwitchDescriptionList IWMSStreamSwitchDescriptionList;
#endif
#include "objidl.h"
#include "WMSBuffer.h"
#include "WMSContext.h"
#if _MSC_VER > 1000
#pragma once
#endif
EXTERN_GUID(IID_IWMSStreamHeader, 0x3309C903, 0x10A4, 0x11d2, 0x9E, 0xEE, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSStreamHeaderList, 0x42176202, 0x2B30, 0x11d2, 0x9E, 0xF7, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSContentDescriptionList, 0x105d6f73, 0x6df0, 0x11d2, 0x9f, 0x14, 0x0, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
EXTERN_GUID(IID_IWMSStreamSwitchDescriptionList, 0x75c3017c, 0x6b3a, 0x4e25, 0xbe, 0x9f, 0xa9, 0x92, 0x7f, 0x4d, 0xd0, 0x58);
EXTERN_GUID(IID_IWMSUnknownStreamFormat, 0x52769631, 0x38aa, 0x11d2, 0x9e, 0xfa, 0x0, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
EXTERN_GUID(IID_IWMSUnknownStreamType, 0x52769632, 0x38aa, 0x11d2, 0x9e, 0xfa, 0x0, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
EXTERN_GUID(IID_IWMSUnknownContainerFormat, 0x52769631, 0x38aa, 0x11d2, 0x9e, 0xfa, 0x0, 0x60, 0x97, 0xd2, 0xd7, 0xcf);
extern RPC_IF_HANDLE __MIDL_itf_streamdescription_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_streamdescription_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSStreamHeader_INTERFACE_DEFINED__
#define __IWMSStreamHeader_INTERFACE_DEFINED__
extern const IID IID_IWMSStreamHeader;
typedef struct IWMSStreamHeaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSStreamHeader * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSStreamHeader * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSStreamHeader * This);
	HRESULT(STDMETHODCALLTYPE * GetFormat) (IWMSStreamHeader * This, GUID * pFormat);
	HRESULT(STDMETHODCALLTYPE * SetFormat) (IWMSStreamHeader * This, GUID Format);
	HRESULT(STDMETHODCALLTYPE * GetStreamType) (IWMSStreamHeader * This, GUID * pStreamType);
	HRESULT(STDMETHODCALLTYPE * SetStreamType) (IWMSStreamHeader * This, GUID StreamType);
	HRESULT(STDMETHODCALLTYPE * GetIntegerAttribute) (IWMSStreamHeader * This, DWORD dwAttributeId, DWORD * pdwAttribute);
	HRESULT(STDMETHODCALLTYPE * SetIntegerAttribute) (IWMSStreamHeader * This, DWORD dwAttributeId, DWORD dwAttribute);
	HRESULT(STDMETHODCALLTYPE * GetStringAttribute) (IWMSStreamHeader * This, DWORD dwAttributeId, BSTR * pszAttribute);
	HRESULT(STDMETHODCALLTYPE * SetStringAttribute) (IWMSStreamHeader * This, DWORD dwAttributeId, BSTR szAttribute);
	HRESULT(STDMETHODCALLTYPE * GetExtendedAttribute) (IWMSStreamHeader * This, DWORD dwValueName, VARIANT * pVariantValue);
	HRESULT(STDMETHODCALLTYPE * SetExtendedAttribute) (IWMSStreamHeader * This, DWORD dwValueName, VARIANT VariantValue);
	HRESULT(STDMETHODCALLTYPE * GetNthExtendedAttribute) (IWMSStreamHeader * This, DWORD dwIndex, DWORD * pdwValueName, VARIANT * pVariantValue);
	HRESULT(STDMETHODCALLTYPE * GetNumExtendedAttributes) (IWMSStreamHeader * This, DWORD * pdwValueName);
	HRESULT(STDMETHODCALLTYPE * CloneStreamHeader) (IWMSStreamHeader * This, IWMSStreamHeader ** ppHeader);
	END_INTERFACE
}  IWMSStreamHeaderVtbl;
interface IWMSStreamHeader
{
	CONST_VTBL struct IWMSStreamHeaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSStreamHeader_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSStreamHeader_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSStreamHeader_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSStreamHeader_GetFormat(This,pFormat) ( (This)->lpVtbl -> GetFormat(This,pFormat) )
#define IWMSStreamHeader_SetFormat(This,Format) ( (This)->lpVtbl -> SetFormat(This,Format) )
#define IWMSStreamHeader_GetStreamType(This,pStreamType) ( (This)->lpVtbl -> GetStreamType(This,pStreamType) )
#define IWMSStreamHeader_SetStreamType(This,StreamType) ( (This)->lpVtbl -> SetStreamType(This,StreamType) )
#define IWMSStreamHeader_GetIntegerAttribute(This,dwAttributeId,pdwAttribute) ( (This)->lpVtbl -> GetIntegerAttribute(This,dwAttributeId,pdwAttribute) )
#define IWMSStreamHeader_SetIntegerAttribute(This,dwAttributeId,dwAttribute) ( (This)->lpVtbl -> SetIntegerAttribute(This,dwAttributeId,dwAttribute) )
#define IWMSStreamHeader_GetStringAttribute(This,dwAttributeId,pszAttribute) ( (This)->lpVtbl -> GetStringAttribute(This,dwAttributeId,pszAttribute) )
#define IWMSStreamHeader_SetStringAttribute(This,dwAttributeId,szAttribute) ( (This)->lpVtbl -> SetStringAttribute(This,dwAttributeId,szAttribute) )
#define IWMSStreamHeader_GetExtendedAttribute(This,dwValueName,pVariantValue) ( (This)->lpVtbl -> GetExtendedAttribute(This,dwValueName,pVariantValue) )
#define IWMSStreamHeader_SetExtendedAttribute(This,dwValueName,VariantValue) ( (This)->lpVtbl -> SetExtendedAttribute(This,dwValueName,VariantValue) )
#define IWMSStreamHeader_GetNthExtendedAttribute(This,dwIndex,pdwValueName,pVariantValue) ( (This)->lpVtbl -> GetNthExtendedAttribute(This,dwIndex,pdwValueName,pVariantValue) )
#define IWMSStreamHeader_GetNumExtendedAttributes(This,pdwValueName) ( (This)->lpVtbl -> GetNumExtendedAttributes(This,pdwValueName) )
#define IWMSStreamHeader_CloneStreamHeader(This,ppHeader) ( (This)->lpVtbl -> CloneStreamHeader(This,ppHeader) )
#endif
#endif
#define WMS_STREAM_ID                    0
#define WMS_STREAM_MIN_BITRATE           1
#define WMS_STREAM_MAX_BITRATE           2
#define WMS_STREAM_AVG_BITRATE           3
#define WMS_STREAM_MAX_PACKET_SIZE       4
#define WMS_STREAM_AVG_PACKET_SIZE       5
#define WMS_STREAM_PREROLL               6
#define WMS_STREAM_FLAGS                 7
#define WMS_STREAM_NAME                  8
#define WMS_STREAM_SHARING_GROUP         9
#define WMS_STREAM_SHARING_BANDWIDTH     10
#define WMS_NUM_STREAMHEADER_ATTRIBUTES  11
#define WMS_STREAM_HAS_NON_KEY_FRAMES    0x0001
#define WMS_STREAM_RELIABLE_FLAG         0x0002
#define WMS_STREAM_CONCEALED_FLAG        0x0004
#define WMS_ASF_THRESHOLD_DURATION       500
extern RPC_IF_HANDLE __MIDL_itf_streamdescription_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_streamdescription_0000_0001_v0_0_s_ifspec;
#ifndef __IWMSStreamHeaderList_INTERFACE_DEFINED__
#define __IWMSStreamHeaderList_INTERFACE_DEFINED__
extern const IID IID_IWMSStreamHeaderList;
typedef struct IWMSStreamHeaderListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSStreamHeaderList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSStreamHeaderList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSStreamHeaderList * This);
	HRESULT(STDMETHODCALLTYPE * GetHeaderCount) (IWMSStreamHeaderList * This, DWORD * pdwNumHeaders);
	HRESULT(STDMETHODCALLTYPE * GetHeader) (IWMSStreamHeaderList * This, DWORD dwHeaderNum, IWMSStreamHeader ** ppHeader);
	HRESULT(STDMETHODCALLTYPE * AppendHeader) (IWMSStreamHeaderList * This, IWMSStreamHeader * pHeader);
	HRESULT(STDMETHODCALLTYPE * RemoveAllHeaders) (IWMSStreamHeaderList * This);
	HRESULT(STDMETHODCALLTYPE * GetContainerFormat) (IWMSStreamHeaderList * This, GUID * pFormat);
	HRESULT(STDMETHODCALLTYPE * SetContainerFormat) (IWMSStreamHeaderList * This, GUID Format);
	HRESULT(STDMETHODCALLTYPE * GetDataVersion) (IWMSStreamHeaderList * This, GUID * pFormat);
	HRESULT(STDMETHODCALLTYPE * SetDataVersion) (IWMSStreamHeaderList * This, GUID Format);
	HRESULT(STDMETHODCALLTYPE * GetNativeContainerHeader) (IWMSStreamHeaderList * This, INSSBuffer ** ppBuffer, DWORD * pdwOffset, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * SetNativeContainerHeader) (IWMSStreamHeaderList * This, INSSBuffer * pBuffer, DWORD dwOffset, DWORD dwLength);
	HRESULT(STDMETHODCALLTYPE * GetContentDescription) (IWMSStreamHeaderList * This, IWMSContentDescriptionList ** ppDescription);
	HRESULT(STDMETHODCALLTYPE * SetContentDescription) (IWMSStreamHeaderList * This, IWMSContentDescriptionList * pDescription);
	HRESULT(STDMETHODCALLTYPE * GetIntegerAttribute) (IWMSStreamHeaderList * This, DWORD dwAttributeId, DWORD * pdwAttribute);
	HRESULT(STDMETHODCALLTYPE * SetIntegerAttribute) (IWMSStreamHeaderList * This, DWORD dwAttributeId, DWORD dwAttribute);
	HRESULT(STDMETHODCALLTYPE * GetStringAttribute) (IWMSStreamHeaderList * This, DWORD dwAttributeId, BSTR * pszAttribute);
	HRESULT(STDMETHODCALLTYPE * SetStringAttribute) (IWMSStreamHeaderList * This, DWORD dwAttributeId, BSTR szAttribute);
	HRESULT(STDMETHODCALLTYPE * GetExtendedAttribute) (IWMSStreamHeaderList * This, DWORD dwValueName, VARIANT * pVariantValue);
	HRESULT(STDMETHODCALLTYPE * SetExtendedAttribute) (IWMSStreamHeaderList * This, DWORD dwValueName, VARIANT VariantValue);
	HRESULT(STDMETHODCALLTYPE * GetNthExtendedAttribute) (IWMSStreamHeaderList * This, DWORD dwIndex, DWORD * pdwValueName, VARIANT * pVariantValue);
	HRESULT(STDMETHODCALLTYPE * GetNumExtendedAttributes) (IWMSStreamHeaderList * This, DWORD * pdwValueName);
	HRESULT(STDMETHODCALLTYPE * CloneStreamHeaderList) (IWMSStreamHeaderList * This, IWMSBufferAllocator * pBufferAllocator, IWMSStreamHeaderList ** ppHeader);
	HRESULT(STDMETHODCALLTYPE * RecordPlaylistGenerationId) (IWMSStreamHeaderList * This, IWMSCommandContext * pCommand);
	HRESULT(STDMETHODCALLTYPE * CheckPlaylistGenerationId) (IWMSStreamHeaderList * This, IWMSCommandContext * pCommand);
	END_INTERFACE
}  IWMSStreamHeaderListVtbl;
interface IWMSStreamHeaderList
{
	CONST_VTBL struct IWMSStreamHeaderListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSStreamHeaderList_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSStreamHeaderList_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSStreamHeaderList_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSStreamHeaderList_GetHeaderCount(This,pdwNumHeaders) ( (This)->lpVtbl -> GetHeaderCount(This,pdwNumHeaders) )
#define IWMSStreamHeaderList_GetHeader(This,dwHeaderNum,ppHeader) ( (This)->lpVtbl -> GetHeader(This,dwHeaderNum,ppHeader) )
#define IWMSStreamHeaderList_AppendHeader(This,pHeader) ( (This)->lpVtbl -> AppendHeader(This,pHeader) )
#define IWMSStreamHeaderList_RemoveAllHeaders(This) ( (This)->lpVtbl -> RemoveAllHeaders(This) )
#define IWMSStreamHeaderList_GetContainerFormat(This,pFormat) ( (This)->lpVtbl -> GetContainerFormat(This,pFormat) )
#define IWMSStreamHeaderList_SetContainerFormat(This,Format) ( (This)->lpVtbl -> SetContainerFormat(This,Format) )
#define IWMSStreamHeaderList_GetDataVersion(This,pFormat) ( (This)->lpVtbl -> GetDataVersion(This,pFormat) )
#define IWMSStreamHeaderList_SetDataVersion(This,Format) ( (This)->lpVtbl -> SetDataVersion(This,Format) )
#define IWMSStreamHeaderList_GetNativeContainerHeader(This,ppBuffer,pdwOffset,pdwLength) ( (This)->lpVtbl -> GetNativeContainerHeader(This,ppBuffer,pdwOffset,pdwLength) )
#define IWMSStreamHeaderList_SetNativeContainerHeader(This,pBuffer,dwOffset,dwLength) ( (This)->lpVtbl -> SetNativeContainerHeader(This,pBuffer,dwOffset,dwLength) )
#define IWMSStreamHeaderList_GetContentDescription(This,ppDescription) ( (This)->lpVtbl -> GetContentDescription(This,ppDescription) )
#define IWMSStreamHeaderList_SetContentDescription(This,pDescription) ( (This)->lpVtbl -> SetContentDescription(This,pDescription) )
#define IWMSStreamHeaderList_GetIntegerAttribute(This,dwAttributeId,pdwAttribute) ( (This)->lpVtbl -> GetIntegerAttribute(This,dwAttributeId,pdwAttribute) )
#define IWMSStreamHeaderList_SetIntegerAttribute(This,dwAttributeId,dwAttribute) ( (This)->lpVtbl -> SetIntegerAttribute(This,dwAttributeId,dwAttribute) )
#define IWMSStreamHeaderList_GetStringAttribute(This,dwAttributeId,pszAttribute) ( (This)->lpVtbl -> GetStringAttribute(This,dwAttributeId,pszAttribute) )
#define IWMSStreamHeaderList_SetStringAttribute(This,dwAttributeId,szAttribute) ( (This)->lpVtbl -> SetStringAttribute(This,dwAttributeId,szAttribute) )
#define IWMSStreamHeaderList_GetExtendedAttribute(This,dwValueName,pVariantValue) ( (This)->lpVtbl -> GetExtendedAttribute(This,dwValueName,pVariantValue) )
#define IWMSStreamHeaderList_SetExtendedAttribute(This,dwValueName,VariantValue) ( (This)->lpVtbl -> SetExtendedAttribute(This,dwValueName,VariantValue) )
#define IWMSStreamHeaderList_GetNthExtendedAttribute(This,dwIndex,pdwValueName,pVariantValue) ( (This)->lpVtbl -> GetNthExtendedAttribute(This,dwIndex,pdwValueName,pVariantValue) )
#define IWMSStreamHeaderList_GetNumExtendedAttributes(This,pdwValueName) ( (This)->lpVtbl -> GetNumExtendedAttributes(This,pdwValueName) )
#define IWMSStreamHeaderList_CloneStreamHeaderList(This,pBufferAllocator,ppHeader) ( (This)->lpVtbl -> CloneStreamHeaderList(This,pBufferAllocator,ppHeader) )
#define IWMSStreamHeaderList_RecordPlaylistGenerationId(This,pCommand) ( (This)->lpVtbl -> RecordPlaylistGenerationId(This,pCommand) )
#define IWMSStreamHeaderList_CheckPlaylistGenerationId(This,pCommand) ( (This)->lpVtbl -> CheckPlaylistGenerationId(This,pCommand) )
#endif
#endif
#define WMS_TOTAL_MIN_BITRATE                            0
#define WMS_TOTAL_MAX_BITRATE                            1
#define WMS_TOTAL_AVG_BITRATE                            2
#define WMS_CONTAINER_FLAGS                              3
#define WMS_CONTAINER_DURATION_LO                        4
#define WMS_CONTAINER_DURATION_HI                        5
#define WMS_CONTAINER_MAX_PACKET_SIZE                    6
#define WMS_CONTAINER_PLAYLIST_ENTRY_NAME                7
#define WMS_TOTAL_PACKETS_LO                             8
#define WMS_TOTAL_PACKETS_HI                             9
#define WMS_STREAM_PLAYLIST_GENERATION_ID                10
#define WMS_CONTAINER_FILESIZE_LO                        11
#define WMS_CONTAINER_FILESIZE_HI                        12
#define WMS_STREAM_DISTRIBUTION_PLAYLIST_GENERATION_ID   13
#define WMS_CONTAINER_LOG_PHYSICAL_URL                   14
#define WMS_CONTAINER_IS_VBR                             15
#define WMS_STREAM_BROADCAST_GENERATION_ID               16
#define WMS_STREAM_DISTRIBUTION_BROADCAST_GENERATION_ID  17
#define WMS_NUM_STREAMHEADERLIST_ATTRIBUTES              18
#define WMS_CONTAINER_BROADCAST                          0x0001
#define WMS_CONTAINER_CANSEEK                            0x0002
#define WMS_CONTAINER_CANSTRIDE                          0x0004
#define WMS_CONTAINER_LIVE                               0x0008
#define WMS_CONTAINER_RECORDABLE                         0x0010
#define WMS_CONTAINER_PART_OF_PLAYLIST                   0x0020
#define WMS_CONTAINER_ONDEMAND_PLAYLIST_EMULATING_BCAST  0x0040
#define WMS_CONTAINER_PART_OF_WRAPPER_PLAYLIST           0x0080
#define WMS_CONTAINER_ALLOW_PLAYLIST_SKIP_FORWARD        0x0100
#define WMS_CONTAINER_ALLOW_PLAYLIST_SKIP_BACKWARD       0x0200
#define WMS_CONTAINER_SEEKABLE_EMULATING_BROADCAST       0x0400
#define WMS_CONTAINER_LAST_ENTRY_IN_PLAYLIST             0x0800
extern RPC_IF_HANDLE __MIDL_itf_streamdescription_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_streamdescription_0000_0002_v0_0_s_ifspec;
#ifndef __IWMSContentDescriptionList_INTERFACE_DEFINED__
#define __IWMSContentDescriptionList_INTERFACE_DEFINED__
extern const IID IID_IWMSContentDescriptionList;
typedef struct IWMSContentDescriptionListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSContentDescriptionList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSContentDescriptionList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSContentDescriptionList * This);
	HRESULT(STDMETHODCALLTYPE * GetDescriptionCount) (IWMSContentDescriptionList * This, DWORD * pdwNumDescriptions);
	HRESULT(STDMETHODCALLTYPE * GetIndexedDescription) (IWMSContentDescriptionList * This, DWORD dwDescriptionNum, LPWSTR * pstrLanguage, IWMSContext ** ppDescription);
	HRESULT(STDMETHODCALLTYPE * GetDescriptionInLanguage) (IWMSContentDescriptionList * This, LPCWSTR pstrLanguage, IWMSContext ** ppDescription);
	HRESULT(STDMETHODCALLTYPE * AppendDescription) (IWMSContentDescriptionList * This, LPCWSTR pstrLanguage, IWMSContext * pDescription);
	HRESULT(STDMETHODCALLTYPE * RemoveAllDescriptions) (IWMSContentDescriptionList * This);
	HRESULT(STDMETHODCALLTYPE * GetPlaylistGenid) (IWMSContentDescriptionList * This, DWORD * pdwPlaylistGenerationId);
	HRESULT(STDMETHODCALLTYPE * SetPlaylistGenid) (IWMSContentDescriptionList * This, DWORD dwPlaylistGenerationId);
	HRESULT(STDMETHODCALLTYPE * GetBroadcastid) (IWMSContentDescriptionList * This, DWORD * pdwPlaylistGenerationId);
	HRESULT(STDMETHODCALLTYPE * SetBroadcastid) (IWMSContentDescriptionList * This, DWORD dwPlaylistGenerationId);
	HRESULT(STDMETHODCALLTYPE * SetValueOnAllDescriptions) (IWMSContentDescriptionList * This, LPCWSTR pstrName, long lNameHint, VARIANT Value, long lOptions);
	HRESULT(STDMETHODCALLTYPE * RemoveValueFromAllDescriptions) (IWMSContentDescriptionList * This, LPCWSTR pstrName, long lNameHint, long lOptions);
	END_INTERFACE
}  IWMSContentDescriptionListVtbl;
interface IWMSContentDescriptionList
{
	CONST_VTBL struct IWMSContentDescriptionListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSContentDescriptionList_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSContentDescriptionList_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSContentDescriptionList_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSContentDescriptionList_GetDescriptionCount(This,pdwNumDescriptions) ( (This)->lpVtbl -> GetDescriptionCount(This,pdwNumDescriptions) )
#define IWMSContentDescriptionList_GetIndexedDescription(This,dwDescriptionNum,pstrLanguage,ppDescription) ( (This)->lpVtbl -> GetIndexedDescription(This,dwDescriptionNum,pstrLanguage,ppDescription) )
#define IWMSContentDescriptionList_GetDescriptionInLanguage(This,pstrLanguage,ppDescription) ( (This)->lpVtbl -> GetDescriptionInLanguage(This,pstrLanguage,ppDescription) )
#define IWMSContentDescriptionList_AppendDescription(This,pstrLanguage,pDescription) ( (This)->lpVtbl -> AppendDescription(This,pstrLanguage,pDescription) )
#define IWMSContentDescriptionList_RemoveAllDescriptions(This) ( (This)->lpVtbl -> RemoveAllDescriptions(This) )
#define IWMSContentDescriptionList_GetPlaylistGenid(This,pdwPlaylistGenerationId) ( (This)->lpVtbl -> GetPlaylistGenid(This,pdwPlaylistGenerationId) )
#define IWMSContentDescriptionList_SetPlaylistGenid(This,dwPlaylistGenerationId) ( (This)->lpVtbl -> SetPlaylistGenid(This,dwPlaylistGenerationId) )
#define IWMSContentDescriptionList_GetBroadcastid(This,pdwPlaylistGenerationId) ( (This)->lpVtbl -> GetBroadcastid(This,pdwPlaylistGenerationId) )
#define IWMSContentDescriptionList_SetBroadcastid(This,dwPlaylistGenerationId) ( (This)->lpVtbl -> SetBroadcastid(This,dwPlaylistGenerationId) )
#define IWMSContentDescriptionList_SetValueOnAllDescriptions(This,pstrName,lNameHint,Value,lOptions) ( (This)->lpVtbl -> SetValueOnAllDescriptions(This,pstrName,lNameHint,Value,lOptions) )
#define IWMSContentDescriptionList_RemoveValueFromAllDescriptions(This,pstrName,lNameHint,lOptions) ( (This)->lpVtbl -> RemoveValueFromAllDescriptions(This,pstrName,lNameHint,lOptions) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_streamdescription_0000_0003_0001
{
	WMS_DATA_STREAM_MIN = 0,
	WMS_DATA_STREAM_MAX = 0xfffe,
	WMS_NO_STREAM = 0xffff,
	WMS_RETRANSMISSION_STREAM_MIN = 0x10000,
	WMS_RETRANSMISSION_STREAM_MAX = 0x1fffe,
	WMS_FEC_STREAM_MIN = 0x20000,
	WMS_FEC_STREAM_MAX = 0x2fffe
} WMS_STREAM_CONSTANTS;
#define IS_DATA_STREAM(x)   ( ( x ) >= WMS_DATA_STREAM_MIN && ( x ) <= WMS_DATA_STREAM_MAX )
#define IS_RETRANSMISSION_STREAM(x)    ( ( x ) >= WMS_RETRANSMISSION_STREAM_MIN && ( x ) <= WMS_RETRANSMISSION_STREAM_MAX )
#define IS_FEC_STREAM(x)    ( ( x ) >= WMS_FEC_STREAM_MIN && ( x ) <= WMS_FEC_STREAM_MAX )
typedef enum __MIDL___MIDL_itf_streamdescription_0000_0003_0002
{
	WMS_NO_MODIFIER = 0,
	WMS_THINNING_MODIFIER = 1,
	WMS_REMOVE_ALL_FRAMES_MODIFIER = 2
} WMS_STREAM_MODIFIERS;
typedef enum __MIDL___MIDL_itf_streamdescription_0000_0003_0003
{
	WMS_NO_THINNING = 0,
	WMS_INTERMEDIATE_FRAME_THINNING = 1,
	WMS_REMOVE_ALL_FRAMES = 2
} WMS_THINNING_MODIFIER_TYPES;
typedef struct CWMSStreamSwitch
{
	WORD wPlaylistSequenceNumber;
	DWORD dwOldStreamNumber;
	DWORD dwNewStreamNumber;
	WMS_STREAM_MODIFIERS ModifierType;
	DWORD dwModifier;
	DWORD dwPredictiveStreamSelections;
} CWMSStreamSwitch;
extern RPC_IF_HANDLE __MIDL_itf_streamdescription_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_streamdescription_0000_0003_v0_0_s_ifspec;
#ifndef __IWMSStreamSwitchDescriptionList_INTERFACE_DEFINED__
#define __IWMSStreamSwitchDescriptionList_INTERFACE_DEFINED__
extern const IID IID_IWMSStreamSwitchDescriptionList;
typedef struct IWMSStreamSwitchDescriptionListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSStreamSwitchDescriptionList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSStreamSwitchDescriptionList * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSStreamSwitchDescriptionList * This);
	HRESULT(STDMETHODCALLTYPE * GetDescriptionCount) (IWMSStreamSwitchDescriptionList * This, DWORD * pdwNumDescriptions);
	HRESULT(STDMETHODCALLTYPE * GetIndexedDescription) (IWMSStreamSwitchDescriptionList * This, DWORD dwDescriptionNum, CWMSStreamSwitch * pStreamSwitchDesc);
	HRESULT(STDMETHODCALLTYPE * ChangeIndexedDescription) (IWMSStreamSwitchDescriptionList * This, DWORD dwDescriptionNum, CWMSStreamSwitch * pStreamSwitchDesc);
	HRESULT(STDMETHODCALLTYPE * RemoveIndexedDescription) (IWMSStreamSwitchDescriptionList * This, DWORD dwDescriptionNum);
	HRESULT(STDMETHODCALLTYPE * AppendDescription) (IWMSStreamSwitchDescriptionList * This, CWMSStreamSwitch * const pStreamSwitchDesc);
	HRESULT(STDMETHODCALLTYPE * RemoveAllDescriptions) (IWMSStreamSwitchDescriptionList * This);
	END_INTERFACE
}  IWMSStreamSwitchDescriptionListVtbl;
interface IWMSStreamSwitchDescriptionList
{
	CONST_VTBL struct IWMSStreamSwitchDescriptionListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSStreamSwitchDescriptionList_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSStreamSwitchDescriptionList_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSStreamSwitchDescriptionList_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSStreamSwitchDescriptionList_GetDescriptionCount(This,pdwNumDescriptions) ( (This)->lpVtbl -> GetDescriptionCount(This,pdwNumDescriptions) )
#define IWMSStreamSwitchDescriptionList_GetIndexedDescription(This,dwDescriptionNum,pStreamSwitchDesc) ( (This)->lpVtbl -> GetIndexedDescription(This,dwDescriptionNum,pStreamSwitchDesc) )
#define IWMSStreamSwitchDescriptionList_ChangeIndexedDescription(This,dwDescriptionNum,pStreamSwitchDesc) ( (This)->lpVtbl -> ChangeIndexedDescription(This,dwDescriptionNum,pStreamSwitchDesc) )
#define IWMSStreamSwitchDescriptionList_RemoveIndexedDescription(This,dwDescriptionNum) ( (This)->lpVtbl -> RemoveIndexedDescription(This,dwDescriptionNum) )
#define IWMSStreamSwitchDescriptionList_AppendDescription(This,pStreamSwitchDesc) ( (This)->lpVtbl -> AppendDescription(This,pStreamSwitchDesc) )
#define IWMSStreamSwitchDescriptionList_RemoveAllDescriptions(This) ( (This)->lpVtbl -> RemoveAllDescriptions(This) )
#endif
#endif
typedef enum WMS_SEEK_TYPE
{
	WMS_SEEK_TO_TIME = 1,
	WMS_SEEK_TO_PACKET = 2,
	WMS_SEEK_TO_PLAYLIST_ENTRY = 3,
	WMS_SEEK_TO_BYTE_OFFSET = 4
} WMS_SEEK_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_streamdescription_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_streamdescription_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
