/*+@@file@@----------------------------------------------------------------*//*!
 \file		msasn1.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 18:09:16 2016
 \date		Modified on Sun Aug 14 18:09:16 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __MS_ASN1_H__
#define __MS_ASN1_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <pshpack8.h>
typedef unsigned char   ASN1uint8_t;
typedef signed char     ASN1int8_t;
typedef unsigned short  ASN1uint16_t;
typedef signed short    ASN1int16_t;
typedef unsigned long   ASN1uint32_t;
typedef signed long     ASN1int32_t;
#ifdef ASN1LIB
#define ASN1_PUBLIC
#elif defined(ASN1C)
#define ASN1_PUBLIC
#else
#define ASN1_PUBLIC     __declspec(dllimport)
#endif
#define ASN1API         __stdcall
#define ASN1CALL        __stdcall
#ifdef _M_CEE_PURE
#define ASN1API_INLINE  __clrcall
#else
#define ASN1API_INLINE  ASN1API
#endif
typedef ASN1uint8_t ASN1octet_t;
typedef ASN1uint8_t ASN1bool_t;
typedef struct tagASN1intx_t
{
    ASN1uint32_t length;
    ASN1octet_t *value;
} ASN1intx_t;
typedef struct tagASN1octetstring_t
{
    ASN1uint32_t length;
    ASN1octet_t *value;
} ASN1octetstring_t;
typedef struct tagASN1octetstring2_t
{
    ASN1uint32_t length;
    ASN1octet_t value[1];
} ASN1octetstring2_t;
typedef struct ASN1iterator_s
{
    struct ASN1iterator_s *next;
    void *value;
} ASN1iterator_t;
typedef struct tagASN1bitstring_t
{
    ASN1uint32_t length;
    ASN1octet_t *value;
} ASN1bitstring_t;
typedef char ASN1char_t;
typedef struct tagASN1charstring_t
{
    ASN1uint32_t length;
    
    ASN1char_t *value;
}
ASN1charstring_t;
typedef ASN1uint16_t ASN1char16_t;
typedef struct tagASN1char16string_t
{
    ASN1uint32_t length;
    ASN1char16_t *value;
} ASN1char16string_t;
typedef ASN1uint32_t ASN1char32_t;
typedef struct tagASN1char32string_t
{
    ASN1uint32_t length;
    ASN1char32_t *value;
} ASN1char32string_t;
typedef ASN1char_t *ASN1ztcharstring_t;
typedef ASN1char16_t *ASN1ztchar16string_t;
typedef ASN1char32_t *ASN1ztchar32string_t;
typedef struct tagASN1wstring_t
{
    ASN1uint32_t length;
    WCHAR *value;
} ASN1wstring_t;
typedef struct ASN1objectidentifier_s
{
    struct ASN1objectidentifier_s *next;
    ASN1uint32_t value;
} *ASN1objectidentifier_t;
typedef struct tagASN1objectidentifier2_t
{
    ASN1uint16_t count;
    ASN1uint32_t value[16];
} ASN1objectidentifier2_t;
typedef struct tagASN1encodedOID_t
{
    ASN1uint16_t length;
    ASN1octet_t  *value;
} ASN1encodedOID_t;
typedef ASN1ztcharstring_t ASN1objectdescriptor_t;
typedef struct tagASN1generalizedtime_t
{
    ASN1uint16_t year;
    ASN1uint8_t month;
    ASN1uint8_t day;
    ASN1uint8_t hour;
    ASN1uint8_t minute;
    ASN1uint8_t second;
    ASN1uint16_t millisecond;
    ASN1bool_t universal;
    ASN1int16_t diff;
} ASN1generalizedtime_t;
typedef struct tagASN1utctime_t
{
    ASN1uint8_t year;
    ASN1uint8_t month;
    ASN1uint8_t day;
    ASN1uint8_t hour;
    ASN1uint8_t minute;
    ASN1uint8_t second;
    ASN1bool_t universal;
    ASN1int16_t diff;
} ASN1utctime_t;
typedef struct tagASN1open_t
{
    ASN1uint32_t    length;
    union
    {
        void           *encoded;
        void           *value;
    };
} ASN1open_t;
typedef enum tagASN1blocktype_e
{
    ASN1_DER_SET_OF_BLOCK,
} ASN1blocktype_e;
typedef ASN1int32_t     ASN1enum_t;
typedef ASN1uint16_t    ASN1choice_t;
typedef ASN1uint32_t    ASN1magic_t;
#define ASN1_MAKE_VERSION(major,minor)  (((major) << 16) | (minor))
#define ASN1_THIS_VERSION               ASN1_MAKE_VERSION(1,0)
enum
{
    ASN1_CHOICE_BASE      = 1,
    ASN1_CHOICE_INVALID   = -1,
    ASN1_CHOICE_EXTENSION = 0,
};
typedef enum tagASN1error_e
{
    ASN1_SUCCESS        = 0,
    ASN1_ERR_INTERNAL   = (-1001),
    ASN1_ERR_EOD        = (-1002),
    ASN1_ERR_CORRUPT    = (-1003),
    ASN1_ERR_LARGE      = (-1004),
    ASN1_ERR_CONSTRAINT = (-1005),
    ASN1_ERR_MEMORY     = (-1006),
    ASN1_ERR_OVERFLOW   = (-1007),
    ASN1_ERR_BADPDU     = (-1008),
    ASN1_ERR_BADARGS    = (-1009),
    ASN1_ERR_BADREAL    = (-1010),
    ASN1_ERR_BADTAG     = (-1011),
    ASN1_ERR_CHOICE     = (-1012),
    ASN1_ERR_RULE       = (-1013),
    ASN1_ERR_UTF8       = (-1014),
    ASN1_ERR_PDU_TYPE   = (-1051),
    ASN1_ERR_NYI        = (-1052),
    ASN1_WRN_EXTENDED   = 1001,
    ASN1_WRN_NOEOD      = 1002,
} ASN1error_e;
#define ASN1_SUCCEEDED(ret)     (((int) (ret)) >= 0)
#define ASN1_FAILED(ret)        (((int) (ret)) < 0)
typedef enum
{
    ASN1_BER_RULE_BER           = 0x0100,
    ASN1_BER_RULE_CER           = 0x0200,
    ASN1_BER_RULE_DER           = 0x0400,
    ASN1_BER_RULE               = ASN1_BER_RULE_BER | ASN1_BER_RULE_CER | ASN1_BER_RULE_DER,
} ASN1encodingrule_e;
typedef struct ASN1encoding_s   *ASN1encoding_t;
typedef struct ASN1decoding_s   *ASN1decoding_t;
typedef ASN1int32_t (ASN1CALL *ASN1BerEncFun_t)( ASN1encoding_t enc, ASN1uint32_t tag, void *data);
typedef ASN1int32_t (ASN1CALL *ASN1BerDecFun_t)( ASN1decoding_t enc, ASN1uint32_t tag, void *data);
typedef struct tagASN1BerFunArr_t
{
    const ASN1BerEncFun_t *apfnEncoder;
    const ASN1BerDecFun_t *apfnDecoder;
} ASN1BerFunArr_t;
typedef void (ASN1CALL *ASN1GenericFun_t)(void);
typedef void (ASN1CALL *ASN1FreeFun_t)( void *data);
typedef struct tagASN1module_t
{
    ASN1magic_t             nModuleName;
    ASN1encodingrule_e      eRule;
    ASN1uint32_t            dwFlags;
    ASN1uint32_t            cPDUs;
    const ASN1FreeFun_t    *apfnFreeMemory;
    const ASN1uint32_t     *acbStructSize;
    ASN1BerFunArr_t         BER;
} *ASN1module_t;
struct ASN1encoding_s
{
    ASN1magic_t         magic;
    ASN1uint32_t        version;
    ASN1module_t        module;
    ASN1octet_t        *buf;
    ASN1uint32_t        size;
    ASN1uint32_t        len;
    ASN1error_e         err;
    ASN1uint32_t        bit;
    ASN1octet_t        *pos;
    ASN1uint32_t        cbExtraHeader;
    ASN1encodingrule_e  eRule;
    ASN1uint32_t        dwFlags;
};
struct ASN1decoding_s
{
    ASN1magic_t         magic;
    ASN1uint32_t        version;
    ASN1module_t        module;
    ASN1octet_t        *buf;
    ASN1uint32_t        size;
    ASN1uint32_t        len;
    ASN1error_e         err;
    ASN1uint32_t        bit;
    ASN1octet_t        *pos;
    ASN1encodingrule_e  eRule;
    ASN1uint32_t        dwFlags;
};
#define ASN1DECFREE_NON_PDU_ID    ((ASN1uint32_t) -1)
enum
{
    ASN1FLAGS_NONE              = 0x00000000L,
    ASN1FLAGS_NOASSERT          = 0x00001000L,
};
enum
{
    ASN1ENCODE_APPEND           = 0x00000001L,
    ASN1ENCODE_REUSEBUFFER      = 0x00000004L,
    ASN1ENCODE_SETBUFFER        = 0x00000008L,
    ASN1ENCODE_ALLOCATEBUFFER   = 0x00000010L,
    ASN1ENCODE_NOASSERT         = ASN1FLAGS_NOASSERT,
};
enum
{
    ASN1DECODE_APPENDED         = 0x00000001L,
    ASN1DECODE_REWINDBUFFER     = 0x00000004L,
    ASN1DECODE_SETBUFFER        = 0x00000008L,
    ASN1DECODE_AUTOFREEBUFFER   = 0x00000010L,
    ASN1DECODE_NOASSERT         = ASN1FLAGS_NOASSERT,
};
extern ASN1_PUBLIC ASN1module_t ASN1API ASN1_CreateModule(ASN1uint32_t nVersion, ASN1encodingrule_e eRule, ASN1uint32_t dwFlags, ASN1uint32_t cPDU, const ASN1GenericFun_t apfnEncoder[], const ASN1GenericFun_t apfnDecoder[], const ASN1FreeFun_t apfnFreeMemory[], const ASN1uint32_t acbStructSize[], ASN1magic_t nModuleName);
extern ASN1_PUBLIC void ASN1API ASN1_CloseModule(ASN1module_t pModule);
extern ASN1_PUBLIC ASN1error_e ASN1API ASN1_CreateEncoder(ASN1module_t pModule, ASN1encoding_t *ppEncoderInfo, ASN1octet_t *pbBuf, ASN1uint32_t cbBufSize, ASN1encoding_t pParent);
extern ASN1_PUBLIC ASN1error_e ASN1API ASN1_Encode(ASN1encoding_t pEncoderInfo, void *pDataStruct, ASN1uint32_t nPduNum, ASN1uint32_t dwFlags, ASN1octet_t *pbBuf, ASN1uint32_t cbBufSize);
extern ASN1_PUBLIC void ASN1API ASN1_CloseEncoder(ASN1encoding_t pEncoderInfo);
extern ASN1_PUBLIC void ASN1API ASN1_CloseEncoder2(ASN1encoding_t pEncoderInfo);
extern ASN1_PUBLIC ASN1error_e ASN1API ASN1_CreateDecoder(ASN1module_t pModule, ASN1decoding_t *ppDecoderInfo, ASN1octet_t *pbBuf, ASN1uint32_t cbBufSize, ASN1decoding_t pParent);
extern ASN1_PUBLIC ASN1error_e ASN1API ASN1_CreateDecoderEx(ASN1module_t pModule, ASN1decoding_t *ppDecoderInfo, ASN1octet_t *pbBuf, ASN1uint32_t cbBufSize, ASN1decoding_t pParent, ASN1uint32_t dwFlags);
extern ASN1_PUBLIC ASN1error_e ASN1API ASN1_Decode(ASN1decoding_t pDecoderInfo, void **ppDataStruct, ASN1uint32_t nPduNum, ASN1uint32_t dwFlags, ASN1octet_t *pbBuf, ASN1uint32_t cbBufSize);
extern ASN1_PUBLIC void ASN1API ASN1_CloseDecoder(ASN1decoding_t pDecoderInfo);
extern ASN1_PUBLIC void ASN1API ASN1_FreeEncoded(ASN1encoding_t pEncoderInfo, void *pBuf);
extern ASN1_PUBLIC void ASN1API ASN1_FreeDecoded(ASN1decoding_t pDecoderInfo, void *pDataStruct, ASN1uint32_t nPduNum);
typedef enum
{
    ASN1OPT_CHANGE_RULE                 = 0x101,
    ASN1OPT_GET_RULE                    = 0x201,
    ASN1OPT_NOT_REUSE_BUFFER            = 0x301,
    ASN1OPT_REWIND_BUFFER               = 0x302,
    ASN1OPT_SET_DECODED_BUFFER          = 0x501,
    ASN1OPT_DEL_DECODED_BUFFER          = 0x502,
    ASN1OPT_GET_DECODED_BUFFER_SIZE     = 0x601,
} ASN1option_e;
typedef struct tagASN1optionparam_t
{
    ASN1option_e    eOption;
    union
    {
        ASN1encodingrule_e              eRule;
        ASN1uint32_t                    cbRequiredDecodedBufSize;
        struct
        {
            ASN1octet_t    *pbBuf;
            ASN1uint32_t    cbBufSize;
        }                               Buffer;
    };
} ASN1optionparam_t, ASN1optionparam_s;
extern ASN1_PUBLIC ASN1error_e ASN1API ASN1_SetEncoderOption(ASN1encoding_t pEncoderInfo, ASN1optionparam_t *pOptParam);
extern ASN1_PUBLIC ASN1error_e ASN1API ASN1_GetEncoderOption(ASN1encoding_t pEncoderInfo, ASN1optionparam_t *pOptParam);
extern ASN1_PUBLIC ASN1error_e ASN1API ASN1_SetDecoderOption(ASN1decoding_t pDecoderInfo, ASN1optionparam_t *pOptParam);
extern ASN1_PUBLIC ASN1error_e ASN1API ASN1_GetDecoderOption(ASN1decoding_t pDecoderInfo, ASN1optionparam_t *pOptParam);
extern ASN1_PUBLIC void ASN1API ASN1bitstring_free(ASN1bitstring_t *);
extern ASN1_PUBLIC void ASN1API ASN1octetstring_free(ASN1octetstring_t *);
extern ASN1_PUBLIC void ASN1API ASN1objectidentifier_free(ASN1objectidentifier_t *);
extern ASN1_PUBLIC void ASN1API ASN1charstring_free(ASN1charstring_t *);
extern ASN1_PUBLIC void ASN1API ASN1char16string_free(ASN1char16string_t *);
extern ASN1_PUBLIC void ASN1API ASN1char32string_free(ASN1char32string_t *);
extern ASN1_PUBLIC void ASN1API ASN1ztcharstring_free(ASN1ztcharstring_t);
extern ASN1_PUBLIC void ASN1API ASN1ztchar16string_free(ASN1ztchar16string_t);
extern ASN1_PUBLIC void ASN1API ASN1ztchar32string_free(ASN1ztchar32string_t);
extern ASN1_PUBLIC void ASN1API ASN1open_free(ASN1open_t *);
extern ASN1_PUBLIC void ASN1API ASN1utf8string_free(ASN1wstring_t *);
extern ASN1_PUBLIC LPVOID ASN1API ASN1DecAlloc(ASN1decoding_t dec, ASN1uint32_t size);
extern ASN1_PUBLIC LPVOID ASN1API ASN1DecRealloc(ASN1decoding_t dec, LPVOID ptr, ASN1uint32_t size);
extern ASN1_PUBLIC void ASN1API ASN1Free(LPVOID ptr);
extern ASN1_PUBLIC ASN1error_e ASN1API ASN1EncSetError(ASN1encoding_t enc, ASN1error_e err);
extern ASN1_PUBLIC ASN1error_e ASN1API ASN1DecSetError(ASN1decoding_t dec, ASN1error_e err);
extern ASN1_PUBLIC ASN1uint32_t ASN1API ASN1intx_uoctets(ASN1intx_t *);
extern ASN1_PUBLIC void ASN1API ASN1intx_free(ASN1intx_t *);
extern ASN1_PUBLIC ASN1int32_t ASN1API ASN1intx2int32(ASN1intx_t *);
extern ASN1_PUBLIC ASN1uint32_t ASN1API ASN1intx2uint32(ASN1intx_t *);
extern ASN1_PUBLIC int ASN1API ASN1intxisuint32(ASN1intx_t *);
extern ASN1_PUBLIC void ASN1API ASN1intx_setuint32(ASN1intx_t *dst, ASN1uint32_t val);
extern ASN1_PUBLIC ASN1uint32_t ASN1API ASN1uint32_uoctets(ASN1uint32_t);
extern ASN1_PUBLIC int ASN1API ASN1intx_cmp(ASN1intx_t *, ASN1intx_t *);
extern ASN1_PUBLIC int ASN1API ASN1objectidentifier_cmp(ASN1objectidentifier_t *, ASN1objectidentifier_t *);
extern ASN1_PUBLIC int ASN1API ASN1objectidentifier2_cmp(ASN1objectidentifier2_t *, ASN1objectidentifier2_t *);
extern ASN1_PUBLIC int ASN1API ASN1bitstring_cmp(ASN1bitstring_t *, ASN1bitstring_t *, int);
extern ASN1_PUBLIC int ASN1API ASN1octetstring_cmp(ASN1octetstring_t *, ASN1octetstring_t *);
extern ASN1_PUBLIC int ASN1API ASN1charstring_cmp(ASN1charstring_t *, ASN1charstring_t *);
extern ASN1_PUBLIC int ASN1API ASN1char16string_cmp(ASN1char16string_t *, ASN1char16string_t *);
extern ASN1_PUBLIC int ASN1API ASN1char32string_cmp(ASN1char32string_t *, ASN1char32string_t *);
extern ASN1_PUBLIC int ASN1API ASN1ztcharstring_cmp(ASN1ztcharstring_t, ASN1ztcharstring_t);
extern ASN1_PUBLIC int ASN1API ASN1ztchar16string_cmp(ASN1ztchar16string_t, ASN1ztchar16string_t);
extern ASN1_PUBLIC int ASN1API ASN1ztchar32string_cmp(ASN1ztchar32string_t, ASN1ztchar32string_t);
extern ASN1_PUBLIC int ASN1API ASN1open_cmp(ASN1open_t *, ASN1open_t *);
extern ASN1_PUBLIC int ASN1API ASN1generalizedtime_cmp(ASN1generalizedtime_t *, ASN1generalizedtime_t *);
extern ASN1_PUBLIC int ASN1API ASN1utctime_cmp(ASN1utctime_t *, ASN1utctime_t *);
#include <poppack.h>
#endif
