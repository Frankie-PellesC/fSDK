/*+@@file@@----------------------------------------------------------------*//*!
 \file		msber.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 18:16:56 2016
 \date		Modified on Sun Aug 14 18:16:56 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __MS_BER_H__
#define __MS_BER_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <msasn1.h>
#include <pshpack8.h>
extern ASN1_PUBLIC int ASN1API ASN1BEREncCharString(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t len, ASN1char_t *val);
extern ASN1_PUBLIC int ASN1API ASN1DEREncCharString(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t len, ASN1char_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BEREncChar16String(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t len, ASN1char16_t *val);
extern ASN1_PUBLIC int ASN1API ASN1DEREncChar16String(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t len, ASN1char16_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BEREncChar32String(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t len, ASN1char32_t *val);
extern ASN1_PUBLIC int ASN1API ASN1DEREncChar32String(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t len, ASN1char32_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BEREncOctetString(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t len, ASN1octet_t *val);
extern ASN1_PUBLIC int ASN1API ASN1DEREncOctetString(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t len, ASN1octet_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BEREncBitString(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t bitlen, ASN1octet_t *val);
extern ASN1_PUBLIC int ASN1API ASN1DEREncBitString(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t bitlen, ASN1octet_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BEREncGeneralizedTime(ASN1encoding_t enc, ASN1uint32_t tag, ASN1generalizedtime_t *);
extern ASN1_PUBLIC int ASN1API ASN1DEREncGeneralizedTime(ASN1encoding_t enc, ASN1uint32_t tag, ASN1generalizedtime_t *);
extern ASN1_PUBLIC int ASN1API ASN1BEREncS32(ASN1encoding_t enc, ASN1uint32_t tag, ASN1int32_t);
extern ASN1_PUBLIC int ASN1API ASN1BEREncSX(ASN1encoding_t enc, ASN1uint32_t tag, ASN1intx_t *);
extern ASN1_PUBLIC int ASN1API ASN1BEREncZeroMultibyteString(ASN1encoding_t enc, ASN1uint32_t tag, ASN1ztcharstring_t);
extern ASN1_PUBLIC int ASN1API ASN1DEREncZeroMultibyteString(ASN1encoding_t enc, ASN1uint32_t tag, ASN1ztcharstring_t);
extern ASN1_PUBLIC int ASN1API ASN1BEREncMultibyteString(ASN1encoding_t enc, ASN1uint32_t tag, ASN1charstring_t *);
extern ASN1_PUBLIC int ASN1API ASN1DEREncMultibyteString(ASN1encoding_t enc, ASN1uint32_t tag, ASN1charstring_t *);
extern ASN1_PUBLIC int ASN1API ASN1BEREncNull(ASN1encoding_t enc, ASN1uint32_t tag);
extern ASN1_PUBLIC int ASN1API ASN1BEREncObjectIdentifier(ASN1encoding_t enc, ASN1uint32_t tag, ASN1objectidentifier_t *);
extern ASN1_PUBLIC int ASN1API ASN1BEREncObjectIdentifier2(ASN1encoding_t enc, ASN1uint32_t tag, ASN1objectidentifier2_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BEREncRemoveZeroBits(ASN1uint32_t *nbits, ASN1octet_t *val);
extern int ASN1API     ASN1BEREncRemoveZeroBits2(ASN1uint32_t *nbits, ASN1octet_t *val, ASN1uint32_t minlen);
extern ASN1_PUBLIC int ASN1API ASN1BEREncUTCTime(ASN1encoding_t enc, ASN1uint32_t tag, ASN1utctime_t *);
extern ASN1_PUBLIC int ASN1API ASN1DEREncUTCTime(ASN1encoding_t enc, ASN1uint32_t tag, ASN1utctime_t *);
extern ASN1_PUBLIC int ASN1API ASN1BEREncFlush(ASN1encoding_t enc);
extern ASN1_PUBLIC int ASN1API ASN1BEREncOpenType(ASN1encoding_t enc, ASN1open_t *);
extern ASN1_PUBLIC int ASN1API ASN1BERDecExplicitTag(ASN1decoding_t dec, ASN1uint32_t tag, ASN1decoding_t *dd, ASN1octet_t **ppBufEnd);
extern ASN1_PUBLIC int ASN1API ASN1BERDecEndOfContents(ASN1decoding_t dec, ASN1decoding_t dd, ASN1octet_t *pBufEnd);
extern ASN1_PUBLIC int ASN1API ASN1BERDecOctetString(ASN1decoding_t dec, ASN1uint32_t tag, ASN1octetstring_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecOctetString2(ASN1decoding_t dec, ASN1uint32_t tag, ASN1octetstring_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecBitString(ASN1decoding_t dec, ASN1uint32_t tag, ASN1bitstring_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecBitString2(ASN1decoding_t dec, ASN1uint32_t tag, ASN1bitstring_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecChar16String(ASN1decoding_t dec, ASN1uint32_t tag, ASN1char16string_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecChar32String(ASN1decoding_t dec, ASN1uint32_t tag, ASN1char32string_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecCharString(ASN1decoding_t dec, ASN1uint32_t tag, ASN1charstring_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecGeneralizedTime(ASN1decoding_t dec, ASN1uint32_t tag, ASN1generalizedtime_t *);
extern ASN1_PUBLIC int ASN1API ASN1BERDecZeroMultibyteString(ASN1decoding_t dec, ASN1uint32_t tag, ASN1ztcharstring_t *);
extern ASN1_PUBLIC int ASN1API ASN1BERDecMultibyteString(ASN1decoding_t dec, ASN1uint32_t tag, ASN1charstring_t *);
extern ASN1_PUBLIC int ASN1API ASN1BERDecNull(ASN1decoding_t dec, ASN1uint32_t tag);
extern ASN1_PUBLIC int ASN1API ASN1BERDecObjectIdentifier(ASN1decoding_t dec, ASN1uint32_t tag, ASN1objectidentifier_t *);
extern ASN1_PUBLIC int ASN1API ASN1BERDecObjectIdentifier2(ASN1decoding_t dec, ASN1uint32_t tag, ASN1objectidentifier2_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecS8Val(ASN1decoding_t dec, ASN1uint32_t tag, ASN1int8_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecS16Val(ASN1decoding_t dec, ASN1uint32_t tag, ASN1int16_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecS32Val(ASN1decoding_t dec, ASN1uint32_t tag, ASN1int32_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecSXVal(ASN1decoding_t dec, ASN1uint32_t tag, ASN1intx_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecU8Val(ASN1decoding_t dec, ASN1uint32_t tag, ASN1uint8_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecU16Val(ASN1decoding_t dec, ASN1uint32_t tag, ASN1uint16_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecU32Val(ASN1decoding_t dec, ASN1uint32_t tag, ASN1uint32_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecUTCTime(ASN1decoding_t dec, ASN1uint32_t tag, ASN1utctime_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecZeroCharString(ASN1decoding_t dec, ASN1uint32_t tag, ASN1ztcharstring_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecZeroChar16String(ASN1decoding_t dec, ASN1uint32_t tag, ASN1ztchar16string_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecZeroChar32String(ASN1decoding_t dec, ASN1uint32_t tag, ASN1ztchar32string_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecSkip(ASN1decoding_t dec);
extern ASN1_PUBLIC int ASN1API ASN1BERDecFlush(ASN1decoding_t dec);
extern ASN1_PUBLIC int ASN1API ASN1BERDecOpenType(ASN1decoding_t dec, ASN1open_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecOpenType2(ASN1decoding_t dec, ASN1open_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BEREncCheck(ASN1encoding_t enc, ASN1uint32_t noctets);
extern ASN1_PUBLIC int ASN1API ASN1BEREncTag(ASN1encoding_t enc, ASN1uint32_t tag);
extern ASN1_PUBLIC int ASN1API ASN1BEREncExplicitTag(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t *pnLenOff);
extern ASN1_PUBLIC int ASN1API ASN1BEREncEndOfContents(ASN1encoding_t enc, ASN1uint32_t nLenOff);
extern ASN1_PUBLIC int ASN1API ASN1BEREncLength(ASN1encoding_t enc, ASN1uint32_t len);
extern ASN1_PUBLIC int ASN1API ASN1BERDecCheck(ASN1decoding_t dec, ASN1uint32_t len);
extern ASN1_PUBLIC int ASN1API ASN1BERDecTag(ASN1decoding_t dec, ASN1uint32_t tag, ASN1uint32_t *constructed);
extern ASN1_PUBLIC int ASN1API ASN1BERDecLength(ASN1decoding_t dec, ASN1uint32_t *len, ASN1uint32_t *infinite);
extern ASN1_PUBLIC int ASN1API ASN1BERDecNotEndOfContents(ASN1decoding_t dec, ASN1octet_t *pBufEnd);
extern ASN1_PUBLIC int ASN1API ASN1BERDecPeekTag(ASN1decoding_t dec, ASN1uint32_t *tag);
extern ASN1_PUBLIC int ASN1API ASN1BEREncU32(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t);
extern ASN1_PUBLIC int ASN1API ASN1BEREncBool(ASN1encoding_t enc, ASN1uint32_t tag, ASN1bool_t val);
extern ASN1_PUBLIC int ASN1API ASN1BERDecBool(ASN1decoding_t dec, ASN1uint32_t tag, ASN1bool_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BEREncEoid(ASN1encoding_t enc, ASN1uint32_t tag, ASN1encodedOID_t *);
extern ASN1_PUBLIC int ASN1API ASN1BERDecEoid(ASN1decoding_t dec, ASN1uint32_t tag, ASN1encodedOID_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BERDotVal2Eoid(ASN1encoding_t enc, char *pszDotVal, ASN1encodedOID_t *pOut);
extern ASN1_PUBLIC int ASN1API ASN1BEREoid2DotVal(ASN1decoding_t dec, ASN1encodedOID_t *pIn, char **ppszDotVal);
extern ASN1_PUBLIC void ASN1API ASN1BEREoid_free(ASN1encodedOID_t *val);
extern ASN1_PUBLIC int ASN1API ASN1BEREncUTF8String(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t length, WCHAR *value);
extern ASN1_PUBLIC int ASN1API ASN1DEREncUTF8String(ASN1encoding_t enc, ASN1uint32_t tag, ASN1uint32_t length, WCHAR *value);
extern ASN1_PUBLIC int ASN1API ASN1BERDecUTF8String(ASN1decoding_t dec, ASN1uint32_t tag, ASN1wstring_t *val);
extern ASN1_PUBLIC int ASN1API ASN1DEREncBeginBlk(ASN1encoding_t enc, ASN1blocktype_e eBlkType, void **ppBlk);
extern ASN1_PUBLIC int ASN1API ASN1DEREncNewBlkElement(void *pBlk, ASN1encoding_t *enc2);
extern ASN1_PUBLIC int ASN1API ASN1DEREncFlushBlkElement(void *pBlk);
extern ASN1_PUBLIC int ASN1API ASN1DEREncEndBlk(void *pBlk);
extern ASN1_PUBLIC int ASN1API ASN1BERDecDouble(ASN1decoding_t dec, ASN1uint32_t tag, double *);
extern ASN1_PUBLIC int ASN1API ASN1BEREncDouble(ASN1encoding_t enc, ASN1uint32_t tag, double);
extern ASN1_PUBLIC int ASN1API ASN1CEREncBitString(ASN1encoding_t enc, ASN1uint32_t, ASN1uint32_t, ASN1octet_t *);
extern ASN1_PUBLIC int ASN1API ASN1CEREncChar16String(ASN1encoding_t enc, ASN1uint32_t, ASN1uint32_t, ASN1char16_t *);
extern ASN1_PUBLIC int ASN1API ASN1CEREncChar32String(ASN1encoding_t enc, ASN1uint32_t, ASN1uint32_t, ASN1char32_t *);
extern ASN1_PUBLIC int ASN1API ASN1CEREncCharString(ASN1encoding_t enc, ASN1uint32_t, ASN1uint32_t, ASN1char_t *);
extern ASN1_PUBLIC int ASN1API ASN1CEREncMultibyteString(ASN1encoding_t enc, ASN1uint32_t, ASN1charstring_t *);
extern ASN1_PUBLIC int ASN1API ASN1CEREncOctetString(ASN1encoding_t enc, ASN1uint32_t, ASN1uint32_t, ASN1octet_t *);
extern ASN1_PUBLIC int ASN1API ASN1CEREncZeroMultibyteString(ASN1encoding_t enc, ASN1uint32_t, ASN1ztcharstring_t);
#include <poppack.h>
#endif
