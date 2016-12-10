/*+@@file@@----------------------------------------------------------------*//*!
 \file		mpeg2structs.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jun 25 18:53:40 2016
 \date		Modified on Sat Jun 25 18:53:40 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#if __POCC__ >= 500
#pragma once
#endif

#pragma warning( disable: 4049 )
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
#ifndef __mpeg2structs_h__
#define __mpeg2structs_h__
#include <wtypes.h>
 
#pragma once
#pragma pack(push)
#pragma pack(1)
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0001
    {
    WORD Bits;
    } 	PID_BITS_MIDL;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0002
    {
    WORD Bits;
    } 	MPEG_HEADER_BITS_MIDL;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0003
    {
    BYTE Bits;
    } 	MPEG_HEADER_VERSION_BITS_MIDL;
#pragma pack(pop)
#pragma pack(push)
#pragma pack(1)
typedef WORD PID;
typedef BYTE TID;
typedef WORD TEID;
typedef UINT ClientKey;
typedef 
enum __MIDL___MIDL_itf_mpeg2structs_0000_0000_0004
    {	MPEG_SECTION_IS_NEXT	= 0,
	MPEG_SECTION_IS_CURRENT	= 1
    } 	MPEG_CURRENT_NEXT_BIT;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0005
    {
    WORD wTidExt;
    WORD wCount;
    } 	TID_EXTENSION;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0005 *PTID_EXTENSION;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0006
    {
    TID TableId;
    union 
        {
        MPEG_HEADER_BITS_MIDL S;
        WORD W;
        } 	Header;
    BYTE SectionData[ 1 ];
    } 	SECTION;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0006 *PSECTION;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0008
    {
    TID TableId;
    union 
        {
        MPEG_HEADER_BITS_MIDL S;
        WORD W;
        } 	Header;
    TEID TableIdExtension;
    union 
        {
        MPEG_HEADER_VERSION_BITS_MIDL S;
        BYTE B;
        } 	Version;
    BYTE SectionNumber;
    BYTE LastSectionNumber;
    BYTE RemainingData[ 1 ];
    } 	LONG_SECTION;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0008 *PLONG_SECTION;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0011
    {
    TID TableId;
    union 
        {
        MPEG_HEADER_BITS_MIDL S;
        WORD W;
        } 	Header;
    TEID TableIdExtension;
    union 
        {
        MPEG_HEADER_VERSION_BITS_MIDL S;
        BYTE B;
        } 	Version;
    BYTE SectionNumber;
    BYTE LastSectionNumber;
    BYTE ProtocolDiscriminator;
    BYTE DsmccType;
    WORD MessageId;
    DWORD TransactionId;
    BYTE Reserved;
    BYTE AdaptationLength;
    WORD MessageLength;
    BYTE RemainingData[ 1 ];
    } 	DSMCC_SECTION;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0011 *PDSMCC_SECTION;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0014
    {
    DWORD dwLength;
    PSECTION pSection;
    } 	MPEG_RQST_PACKET;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0014 *PMPEG_RQST_PACKET;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0015
    {
    WORD wPacketCount;
    PMPEG_RQST_PACKET PacketList[ 1 ];
    } 	MPEG_PACKET_LIST;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0015 *PMPEG_PACKET_LIST;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0016
    {
    BOOL fSpecifyProtocol;
    BYTE Protocol;
    BOOL fSpecifyType;
    BYTE Type;
    BOOL fSpecifyMessageId;
    WORD MessageId;
    BOOL fSpecifyTransactionId;
    BOOL fUseTrxIdMessageIdMask;
    DWORD TransactionId;
    BOOL fSpecifyModuleVersion;
    BYTE ModuleVersion;
    BOOL fSpecifyBlockNumber;
    WORD BlockNumber;
    BOOL fGetModuleCall;
    WORD NumberOfBlocksInModule;
    } 	DSMCC_FILTER_OPTIONS;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0017
    {
    BOOL fSpecifyEtmId;
    DWORD EtmId;
    } 	ATSC_FILTER_OPTIONS;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0018
    {
    BOOL fSpecifySegment;
    BYTE bSegment;
    } 	DVB_EIT_FILTER_OPTIONS;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0019
    {
    BYTE bVersionNumber;
    WORD wFilterSize;
    BOOL fUseRawFilteringBits;
    BYTE Filter[ 16 ];
    BYTE Mask[ 16 ];
    BOOL fSpecifyTableIdExtension;
    WORD TableIdExtension;
    BOOL fSpecifyVersion;
    BYTE Version;
    BOOL fSpecifySectionNumber;
    BYTE SectionNumber;
    BOOL fSpecifyCurrentNext;
    BOOL fNext;
    BOOL fSpecifyDsmccOptions;
    DSMCC_FILTER_OPTIONS Dsmcc;
    BOOL fSpecifyAtscOptions;
    ATSC_FILTER_OPTIONS Atsc;
    } 	MPEG2_FILTER;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0019 *PMPEG2_FILTER;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0020
    {
    union 
        {
        struct 
            {
            BYTE bVersionNumber;
            WORD wFilterSize;
            BOOL fUseRawFilteringBits;
            BYTE Filter[ 16 ];
            BYTE Mask[ 16 ];
            BOOL fSpecifyTableIdExtension;
            WORD TableIdExtension;
            BOOL fSpecifyVersion;
            BYTE Version;
            BOOL fSpecifySectionNumber;
            BYTE SectionNumber;
            BOOL fSpecifyCurrentNext;
            BOOL fNext;
            BOOL fSpecifyDsmccOptions;
            DSMCC_FILTER_OPTIONS Dsmcc;
            BOOL fSpecifyAtscOptions;
            ATSC_FILTER_OPTIONS Atsc;
            } 	;
        BYTE bVersion1Bytes[ 124 ];
        } 	;
    BOOL fSpecifyDvbEitOptions;
    DVB_EIT_FILTER_OPTIONS DvbEit;
    } 	MPEG2_FILTER2;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0020 *PMPEG2_FILTER2;
#define MPEG2_FILTER_VERSION_1_SIZE  124
#define MPEG2_FILTER_VERSION_2_SIZE  133
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0023
    {
    HRESULT hr;
    DWORD dwDataBufferSize;
    DWORD dwSizeOfDataRead;
    BYTE *pDataBuffer;
    } 	MPEG_STREAM_BUFFER;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0023 *PMPEG_STREAM_BUFFER;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0024
    {
    BYTE Hours;
    BYTE Minutes;
    BYTE Seconds;
    } 	MPEG_TIME;
typedef MPEG_TIME MPEG_DURATION;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0025
    {
    BYTE Date;
    BYTE Month;
    WORD Year;
    } 	MPEG_DATE;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0026
    {
    MPEG_DATE D;
    MPEG_TIME T;
    } 	MPEG_DATE_AND_TIME;
typedef 
enum __MIDL___MIDL_itf_mpeg2structs_0000_0000_0027
    {	MPEG_CONTEXT_BCS_DEMUX	= 0,
	MPEG_CONTEXT_WINSOCK	= ( MPEG_CONTEXT_BCS_DEMUX + 1 ) 
    } 	MPEG_CONTEXT_TYPE;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0028
    {
    DWORD AVMGraphId;
    } 	MPEG_BCS_DEMUX;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0029
    {
    DWORD AVMGraphId;
    } 	MPEG_WINSOCK;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0030
    {
    MPEG_CONTEXT_TYPE Type;
    union 
        {
        MPEG_BCS_DEMUX Demux;
        MPEG_WINSOCK Winsock;
        } 	U;
    } 	MPEG_CONTEXT;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0030 *PMPEG_CONTEXT;
typedef 
enum __MIDL___MIDL_itf_mpeg2structs_0000_0000_0032
    {	MPEG_RQST_UNKNOWN	= 0,
	MPEG_RQST_GET_SECTION	= ( MPEG_RQST_UNKNOWN + 1 ) ,
	MPEG_RQST_GET_SECTION_ASYNC	= ( MPEG_RQST_GET_SECTION + 1 ) ,
	MPEG_RQST_GET_TABLE	= ( MPEG_RQST_GET_SECTION_ASYNC + 1 ) ,
	MPEG_RQST_GET_TABLE_ASYNC	= ( MPEG_RQST_GET_TABLE + 1 ) ,
	MPEG_RQST_GET_SECTIONS_STREAM	= ( MPEG_RQST_GET_TABLE_ASYNC + 1 ) ,
	MPEG_RQST_GET_PES_STREAM	= ( MPEG_RQST_GET_SECTIONS_STREAM + 1 ) ,
	MPEG_RQST_GET_TS_STREAM	= ( MPEG_RQST_GET_PES_STREAM + 1 ) ,
	MPEG_RQST_START_MPE_STREAM	= ( MPEG_RQST_GET_TS_STREAM + 1 ) 
    } 	MPEG_REQUEST_TYPE;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0033
    {
    MPEG_REQUEST_TYPE Type;
    MPEG_CONTEXT Context;
    PID Pid;
    TID TableId;
    MPEG2_FILTER Filter;
    DWORD Flags;
    } 	MPEG_SERVICE_REQUEST;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0033 *PMPEG_SERVICE_REQUEST;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0034
    {
    DWORD IPAddress;
    WORD Port;
    } 	MPEG_SERVICE_RESPONSE;
typedef struct __MIDL___MIDL_itf_mpeg2structs_0000_0000_0034 *PMPEG_SERVICE_RESPONSE;
typedef struct _DSMCC_ELEMENT
    {
    PID pid;
    BYTE bComponentTag;
    DWORD dwCarouselId;
    DWORD dwTransactionId;
    struct _DSMCC_ELEMENT *pNext;
    } 	DSMCC_ELEMENT;
typedef struct _DSMCC_ELEMENT *PDSMCC_ELEMENT;
typedef struct _MPE_ELEMENT
    {
    PID pid;
    BYTE bComponentTag;
    struct _MPE_ELEMENT *pNext;
    } 	MPE_ELEMENT;
typedef struct _MPE_ELEMENT *PMPE_ELEMENT;
typedef struct _MPEG_STREAM_FILTER
    {
    WORD wPidValue;
    DWORD dwFilterSize;
    BOOL fCrcEnabled;
    BYTE rgchFilter[ 16 ];
    BYTE rgchMask[ 16 ];
    } 	MPEG_STREAM_FILTER;
#undef BIG_ENDIAN_MACHINE
#define LITTLE_ENDIAN_MACHINE
#define XCHG(x)             MAKEWORD(HIBYTE(x), LOBYTE(x))
#define DXCHG(x)            MAKELONG(XCHG(HIWORD(x)), XCHG(LOWORD(x)))
#undef SWAPBYTES
#undef SWAPWORDS
#ifdef LITTLE_ENDIAN_MACHINE
#define SWAPBYTES(w)        ((w) = XCHG(w))
#define SWAPWORDS(d)        ((d) = DXCHG(d))
#endif
#ifdef BIG_ENDIAN_MACHINE
#define SWAPBYTES(w)        (w)
#define SWAPWORDS(d)        (d)
#endif
#define SWAP_MPEG_SECTION_HEADER_BYTES(_pSection)                                   \
    {                                                                       \
        if (_pSection)                                                      \
        {                                                                   \
            SWAPBYTES((_pSection)->Header.W);                                 \
                                                                            \
            if (reinterpret_cast<PMPEG_HEADER_BITS>(&((reinterpret_cast<PLONG_SECTION>(_pSection)->Header.W)))->SectionSyntaxIndicator || \
                    (_pSection)->TableId == 0x00 ||                           \
                    (_pSection)->TableId == 0x3A ||                           \
                    (_pSection)->TableId == 0x3B ||                           \
                    (_pSection)->TableId == 0x3C ||                           \
                    (_pSection)->TableId == 0x3D ||                           \
                    (_pSection)->TableId == 0x3E)                             \
            {                                                               \
                SWAPBYTES(reinterpret_cast<PLONG_SECTION>(_pSection)->TableIdExtension);    \
            }                                                               \
        }                                                                   \
    }
#define SWAP_MPEG_HEADER_BYTES(_pSection)                                   \
    {                                                                       \
        if (_pSection)                                                      \
        {                                                                   \
            SWAP_MPEG_SECTION_HEADER_BYTES(_pSection)                       \
            if ((_pSection)->TableId == 0x3B ||                             \
                (_pSection)->TableId == 0x3C)                               \
            {                                                               \
                SWAPBYTES(reinterpret_cast<PDSMCC_SECTION>(_pSection)->MessageId);          \
                SWAPWORDS(reinterpret_cast<PDSMCC_SECTION>(_pSection)->TransactionId);      \
                SWAPBYTES(reinterpret_cast<PDSMCC_SECTION>(_pSection)->MessageLength);      \
            }                                                               \
        }                                                                   \
    }
#define UNSWAP_MPEG_HEADER_BYTES(_pSection)                                 \
    {                                                                       \
        if (_pSection)                                                      \
        {                                                                   \
            if ((_pSection)->TableId == 0x3B ||                             \
                (_pSection)->TableId == 0x3C)                               \
            {                                                               \
                SWAPBYTES((reinterpret_cast<PDSMCC_SECTION>(_pSection))->MessageId);          \
                SWAPWORDS((reinterpret_cast<PDSMCC_SECTION>(_pSection))->TransactionId);      \
                SWAPBYTES((reinterpret_cast<PDSMCC_SECTION>(_pSection))->MessageLength);      \
            }                                                                                 \
            UNSWAP_MPEG_SECTION_HEADER_BYTES(_pSection)                       \
        }                                                                     \
    }
#define UNSWAP_MPEG_SECTION_HEADER_BYTES(_pSection)                         \
    {                                                                       \
        if (_pSection)                                                      \
        {                                                                   \
            if (reinterpret_cast<PMPEG_HEADER_BITS>(&((reinterpret_cast<PLONG_SECTION>(_pSection)->Header.W)))->SectionSyntaxIndicator || \
                    (_pSection)->TableId == 0x00 ||                           \
                    (_pSection)->TableId == 0x3A ||                           \
                    (_pSection)->TableId == 0x3B ||                           \
                    (_pSection)->TableId == 0x3C ||                           \
                    (_pSection)->TableId == 0x3D ||                           \
                    (_pSection)->TableId == 0x3E)                             \
            {                                                                 \
                SWAPBYTES(reinterpret_cast<PLONG_SECTION>(_pSection)->TableIdExtension);    \
            }                                                                               \
            SWAPBYTES(reinterpret_cast<PLONG_SECTION>(_pSection)->Header.W);                \
        }                                                                                   \
    }
#pragma pack(pop)
extern RPC_IF_HANDLE __MIDL_itf_mpeg2structs_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mpeg2structs_0000_0000_v0_0_s_ifspec;

#endif




