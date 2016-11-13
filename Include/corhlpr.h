/*+@@file@@----------------------------------------------------------------*//*!
 \file		corhlpr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 11:39:20 2016
 \date		Modified on Mon Jul  4 11:39:20 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __CORHLPR_H__
#define __CORHLPR_H__
#if __POCC__ >= 500
#pragma once
#endif
#error Only C++
#if 0
#if defined(_MSC_VER) && defined(_X86_)
#pragma optimize("y", on)
#endif
#if defined(_MSC_VER) && defined(_X86_) && !defined(FPO_ON)
#pragma optimize("y", on)
#define FPO_ON 1
#define CORHLPR_TURNED_FPO_ON 1
#endif
#include <cor.h>
#include <corhdr.h>
#include <corerror.h>
#ifdef _BLD_CLR
#include <new.hpp>
#define NEW_NOTHROW(_bytes) new (nothrow) BYTE[_bytes]
#define NEW_THROWS(_bytes) new BYTE[_bytes]
void DECLSPEC_NORETURN ThrowOutOfMemory();
inline void DECLSPEC_NORETURN THROW_OUT_OF_MEMORY()
{
    ThrowOutOfMemory();
}
#else
#define NEW_NOTHROW(_bytes) new BYTE[_bytes]
#define NEW_THROWS(_bytes) __CorHlprNewThrows(_bytes)
static inline void DECLSPEC_NORETURN __CorHlprThrowOOM()
{
    RaiseException(STATUS_NO_MEMORY, 0, 0, NULL);
}
static inline BYTE *__CorHlprNewThrows(size_t bytes)
{
    BYTE *pbMemory = new BYTE[bytes];
    if (pbMemory == NULL)
        __CorHlprThrowOOM();
    return pbMemory;
}
inline void DECLSPEC_NORETURN THROW_OUT_OF_MEMORY()
{
    __CorHlprThrowOOM();
}
#endif
#ifndef IfFailGoto
#define IfFailGoto(EXPR, LABEL) \
do { hr = (EXPR); if(FAILED(hr)) { goto LABEL; } } while (0)
#endif
#ifndef IfFailGo
#define IfFailGo(EXPR) IfFailGoto(EXPR, ErrExit)
#endif
#ifndef IfFailRet
#define IfFailRet(EXPR) do { hr = (EXPR); if(FAILED(hr)) { return (hr); } } while (0)
#endif
#ifndef IfNullRet
#define IfNullRet(EXPR) do { if ((EXPR) == NULL){ return (E_OUTOFMEMORY); } } while (0)
#endif
#ifndef _ASSERTE
#define _ASSERTE(expr)
#endif
#ifndef COUNTOF
#define COUNTOF(a) (sizeof(a) / sizeof(*a))
#endif
#if !BIGENDIAN
#define VAL16(x) x
#define VAL32(x) x
#endif
#define CHECK_LOCAL_STATIC_VAR(x)   \
    x                                \
#define MAX_CLASSNAME_LENGTH 1024
inline bool isCallConv(unsigned sigByte, CorCallingConvention conv)
{
    return ((sigByte & IMAGE_CEE_CS_CALLCONV_MASK) == (unsigned) conv);
}
typedef struct tagCOR_ILMETHOD_SECT_SMALL : IMAGE_COR_ILMETHOD_SECT_SMALL {
    const BYTE* Data() const 
    { 
        return(((const BYTE*) this) + sizeof(struct tagCOR_ILMETHOD_SECT_SMALL)); 
    }
    bool IsSmall() const
    { 
        return (Kind & CorILMethod_Sect_FatFormat) == 0;
    }
    bool More() const
    {
        return (Kind & CorILMethod_Sect_MoreSects) != 0;
    }
} COR_ILMETHOD_SECT_SMALL;
typedef struct tagCOR_ILMETHOD_SECT_FAT : IMAGE_COR_ILMETHOD_SECT_FAT {
    const BYTE* Data() const 
    { 
        return(((const BYTE*) this) + sizeof(struct tagCOR_ILMETHOD_SECT_FAT)); 
    }
    unsigned GetKind() const {
        return *(BYTE*)this;
    }
    void SetKind(unsigned kind) {
        *(BYTE*)this = (BYTE)kind;
    }
    unsigned GetDataSize() const {
        BYTE* p = (BYTE*)this;
        return ((unsigned)*(p+1)) |
            (((unsigned)*(p+2)) << 8) |
            (((unsigned)*(p+3)) << 16);
    }
    void SetDataSize(unsigned datasize) {
        BYTE* p = (BYTE*)this;
        *(p+1) = (BYTE)(datasize);
        *(p+2) = (BYTE)(datasize >> 8);
        *(p+3) = (BYTE)(datasize >> 16);
    }
} COR_ILMETHOD_SECT_FAT;
typedef struct tagCOR_ILMETHOD_SECT_EH_CLAUSE_FAT : public IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT {
    CorExceptionFlag GetFlags() const {
        return (CorExceptionFlag)VAL32((unsigned)Flags);
    }
    void SetFlags(CorExceptionFlag flags) {
        Flags = (CorExceptionFlag)VAL32((unsigned)flags);
    }
    DWORD GetTryOffset() const {
        return VAL32(TryOffset);
    }
    void SetTryOffset(DWORD Offset) {
        TryOffset = VAL32(Offset);
    }
    DWORD GetTryLength() const {
        return VAL32(TryLength);
    }
    void SetTryLength(DWORD Length) {
        TryLength = VAL32(Length);
    }
    DWORD GetHandlerOffset() const {
        return VAL32(HandlerOffset);
    }
    void SetHandlerOffset(DWORD Offset) {
        HandlerOffset = VAL32(Offset);
    }
    DWORD GetHandlerLength() const {
        return VAL32(HandlerLength);
    }
    void SetHandlerLength(DWORD Length) {
        HandlerLength = VAL32(Length);
    }
    DWORD GetClassToken() const {
        return VAL32(ClassToken);
    }
    void SetClassToken(DWORD tok) {
        ClassToken = VAL32(tok);
    }
    DWORD GetFilterOffset() const {
        return VAL32(FilterOffset);
    }
    void SetFilterOffset(DWORD offset) {
        FilterOffset = VAL32(offset);
    }
} COR_ILMETHOD_SECT_EH_CLAUSE_FAT;
struct COR_ILMETHOD_SECT_EH_FAT : public COR_ILMETHOD_SECT_FAT {
    static unsigned Size(unsigned ehCount) {
        return (sizeof(COR_ILMETHOD_SECT_EH_FAT) +
                sizeof(IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT) * (ehCount-1));
        }
    IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT Clauses[1];
};
typedef struct tagCOR_ILMETHOD_SECT_EH_CLAUSE_SMALL : public IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL {
    CorExceptionFlag GetFlags() const {
        return (CorExceptionFlag)VAL16((SHORT)Flags);
    }
    void SetFlags(CorExceptionFlag flags) {
        Flags = (CorExceptionFlag)VAL16((SHORT)flags);
    }
    DWORD GetTryOffset() const {
        return VAL16(TryOffset);
    }
    void SetTryOffset(DWORD Offset) {
        _ASSERTE((Offset & ~0xffff) == 0);
        TryOffset = VAL16(Offset);
    }
    DWORD GetTryLength() const {
        return TryLength;
    }
    void SetTryLength(DWORD Length) {
        _ASSERTE((Length & ~0xff) == 0);
        TryLength = Length;
    }
    DWORD GetHandlerOffset() const {
        return VAL16(HandlerOffset);
    }
    void SetHandlerOffset(DWORD Offset) {
        _ASSERTE((Offset & ~0xffff) == 0);
        HandlerOffset = VAL16(Offset);
    }
    DWORD GetHandlerLength() const {
        return HandlerLength;
    }
    void SetHandlerLength(DWORD Length) {
        _ASSERTE((Length & ~0xff) == 0);
        HandlerLength = Length;
    }
    DWORD GetClassToken() const {
        return VAL32(ClassToken);
    }
    void SetClassToken(DWORD tok) {
        ClassToken = VAL32(tok);
    }
    DWORD GetFilterOffset() const {
        return VAL32(FilterOffset);
    }
    void SetFilterOffset(DWORD offset) {
        FilterOffset = VAL32(offset);
    }
} COR_ILMETHOD_SECT_EH_CLAUSE_SMALL;
struct COR_ILMETHOD_SECT_EH_SMALL : public COR_ILMETHOD_SECT_SMALL {
    static unsigned Size(unsigned ehCount) {
        return (sizeof(COR_ILMETHOD_SECT_EH_SMALL) +
                sizeof(IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL) * (ehCount-1));
        }
    WORD Reserved;
    IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL Clauses[1];
};
struct COR_ILMETHOD_SECT
{
    bool More() const           
    { 
        return((AsSmall()->Kind & CorILMethod_Sect_MoreSects) != 0); 
    }
    CorILMethodSect Kind() const
    { 
        return((CorILMethodSect) (AsSmall()->Kind & CorILMethod_Sect_KindMask)); 
    }
    const COR_ILMETHOD_SECT* Next() const   
    {
        if (!More()) return(0);
        return ((COR_ILMETHOD_SECT*)(((BYTE *)this) + DataSize()))->Align();
    }
    const BYTE* Data() const 
    {
        if (IsFat()) return(AsFat()->Data());
        return(AsSmall()->Data());
    }
    unsigned DataSize() const
    {
        if (Kind() == CorILMethod_Sect_EHTable) 
        {
            if (IsFat())
                return Fat.Size(Fat.GetDataSize() / sizeof(IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT));
            else
                return Small.Size(Small.DataSize / sizeof(IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL));
        }
        else
    {
        if (IsFat()) return(AsFat()->GetDataSize());
        return(AsSmall()->DataSize);
    }
    }
    friend struct COR_ILMETHOD;
    friend struct tagCOR_ILMETHOD_FAT;
    friend struct tagCOR_ILMETHOD_TINY;
    bool IsFat() const                            
    { 
        return((AsSmall()->Kind & CorILMethod_Sect_FatFormat) != 0); 
    }
    const COR_ILMETHOD_SECT* Align() const        
    { 
        return((COR_ILMETHOD_SECT*) ((((UINT_PTR) this) + 3) & ~3));  
    }
protected
    const COR_ILMETHOD_SECT_FAT*   AsFat() const  
    { 
        return((COR_ILMETHOD_SECT_FAT*) this); 
    }
    const COR_ILMETHOD_SECT_SMALL* AsSmall() const
    { 
        return((COR_ILMETHOD_SECT_SMALL*) this); 
    }
public
    union {
        COR_ILMETHOD_SECT_EH_SMALL Small;
        COR_ILMETHOD_SECT_EH_FAT Fat;
        };
};
extern "C" {
IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT* __stdcall SectEH_EHClause(void *pSectEH, unsigned idx, IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT* buff);
unsigned __stdcall SectEH_SizeWithCode(unsigned ehCount, unsigned codeSize);
unsigned __stdcall SectEH_SizeWorst(unsigned ehCount);
unsigned __stdcall SectEH_SizeExact(unsigned ehCount, IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT* clauses);
unsigned __stdcall SectEH_Emit(unsigned size, unsigned ehCount,
                  IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT* clauses,
                  BOOL moreSections, BYTE* outBuff,
                  ULONG* ehTypeOffsets = 0);
}
struct COR_ILMETHOD_SECT_EH : public COR_ILMETHOD_SECT
{
    unsigned EHCount() const 
    {
        return (unsigned)(IsFat() ? (Fat.GetDataSize() / sizeof(IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT)) 
                        (Small.DataSize / sizeof(IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_SMALL)));
    }
    const IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT* EHClause(unsigned idx, IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT* buff) const
    { 
        return SectEH_EHClause((void *)this, idx, buff); 
    };
    unsigned static Size(unsigned ehCount, unsigned codeSize)
    { 
        return SectEH_SizeWithCode(ehCount, codeSize); 
    };
    unsigned static Size(unsigned ehCount)
    { 
        return SectEH_SizeWorst(ehCount); 
    };
    unsigned static Size(unsigned ehCount, const IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT* clauses)
    { 
        return SectEH_SizeExact(ehCount, (IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT*)clauses);  
    };
    unsigned static Emit(unsigned size, unsigned ehCount,
                  const IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT* clauses,
                  bool moreSections, BYTE* outBuff,
                  ULONG* ehTypeOffsets = 0)
    { 
        return SectEH_Emit(size, ehCount,
                           (IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT*)clauses,
                           moreSections, outBuff, ehTypeOffsets); 
    };
};
typedef struct tagCOR_ILMETHOD_TINY : IMAGE_COR_ILMETHOD_TINY
{
    bool     IsTiny() const         
    { 
        return((Flags_CodeSize & (CorILMethod_FormatMask >> 1)) == CorILMethod_TinyFormat); 
    }
    unsigned GetCodeSize() const    
    { 
        return(((unsigned) Flags_CodeSize) >> (CorILMethod_FormatShift-1)); 
    }
    unsigned GetMaxStack() const    
    { 
        return(8); 
    }
    BYTE*    GetCode() const        
    { 
        return(((BYTE*) this) + sizeof(struct tagCOR_ILMETHOD_TINY)); 
    }
    DWORD    GetLocalVarSigTok() const  
    { 
        return(0); 
    }
    COR_ILMETHOD_SECT* GetSect() const 
    { 
        return(0); 
    }
} COR_ILMETHOD_TINY;
typedef struct tagCOR_ILMETHOD_FAT : IMAGE_COR_ILMETHOD_FAT
{
    unsigned GetSize() const {
        BYTE* p = (BYTE*)this;
        return *(p+1) >> 4;
    }
    void SetSize(unsigned size) {
        BYTE* p = (BYTE*)this;
        *(p+1) = (BYTE)((*(p+1) & 0x0F) | (size << 4));
    }
    unsigned GetFlags() const {
        BYTE* p = (BYTE*)this;
        return ((unsigned)*(p+0)) | (( ((unsigned)*(p+1)) & 0x0F) << 8);
    }
    void SetFlags(unsigned flags) {
        BYTE* p = (BYTE*)this;
        *p = (BYTE)flags;
        *(p+1) = (BYTE)((*(p+1) & 0xF0) | ((flags >> 8) & 0x0F));
    }
    bool IsFat() const {
        return (*(BYTE*)this & CorILMethod_FormatMask) == CorILMethod_FatFormat;
    }
    unsigned GetMaxStack() const {
        return VAL16(*(USHORT*)((BYTE*)this+2));
    }
    void SetMaxStack(unsigned maxStack) {
        *(USHORT*)((BYTE*)this+2) = VAL16((USHORT)maxStack);
    }
    unsigned GetCodeSize() const        
    { 
        return VAL32(CodeSize); 
    }
    void SetCodeSize(DWORD Size)        
    { 
        CodeSize = VAL32(Size); 
    }
    mdToken  GetLocalVarSigTok() const      
    { 
        return VAL32(LocalVarSigTok); 
    }
    void SetLocalVarSigTok(mdSignature tok) 
    { 
        LocalVarSigTok = VAL32(tok); 
    }
    BYTE* GetCode() const {
        return(((BYTE*) this) + 4*GetSize());
    }
    bool More() const {
        return (*(BYTE*)this & CorILMethod_MoreSects) != 0;
    }
    const COR_ILMETHOD_SECT* GetSect() const {
        if (!More()) return (0);
        return(((COR_ILMETHOD_SECT*) (GetCode() + GetCodeSize()))->Align());
    }
} COR_ILMETHOD_FAT;
extern "C" {
unsigned __stdcall IlmethodSize(COR_ILMETHOD_FAT* header, BOOL MoreSections);
unsigned __stdcall IlmethodEmit(unsigned size, COR_ILMETHOD_FAT* header,
                  BOOL moreSections, BYTE* outBuff);
}
struct COR_ILMETHOD
{
    friend class COR_ILMETHOD_DECODER;
    unsigned static Size(const COR_ILMETHOD_FAT* header, bool MoreSections)
    { 
        return IlmethodSize((COR_ILMETHOD_FAT*)header,MoreSections); 
    };
    unsigned static Emit(unsigned size, const COR_ILMETHOD_FAT* header,
                  bool moreSections, BYTE* outBuff)
    { 
        return IlmethodEmit(size, (COR_ILMETHOD_FAT*)header, moreSections, outBuff); 
    };
    union
    {
        COR_ILMETHOD_TINY       Tiny;
        COR_ILMETHOD_FAT        Fat;
    };
};
extern "C" {
    void __stdcall DecoderInit(void * pThis, COR_ILMETHOD* header);
    int  __stdcall DecoderGetOnDiskSize(void * pThis, COR_ILMETHOD* header);
}
class COR_ILMETHOD_DECODER : public COR_ILMETHOD_FAT
{
public
    COR_ILMETHOD_DECODER(const COR_ILMETHOD* header) 
    { 
        DecoderInit(this,(COR_ILMETHOD*)header); 
    };
    enum DecoderStatus {SUCCESS, FORMAT_ERROR, VERIFICATION_ERROR};
    COR_ILMETHOD_DECODER(COR_ILMETHOD* header, 
                         void *pInternalImport,
                         DecoderStatus* wbStatus);
    unsigned EHCount() const 
    {
        return (EH != 0) ? EH->EHCount() : 0;
    }
    unsigned GetHeaderSize() const
    {
        return GetCodeSize() + ((EH != 0) ? EH->DataSize() : 0);
    }
    int GetOnDiskSize(const COR_ILMETHOD* header) 
    { 
        return DecoderGetOnDiskSize(this,(COR_ILMETHOD*)header); 
    }
    const BYTE *    Code;
    PCCOR_SIGNATURE LocalVarSig;
    DWORD           cbLocalVarSig;
    const COR_ILMETHOD_SECT_EH * EH;
    const COR_ILMETHOD_SECT *    Sect;
};
#if defined(_MSC_VER) && defined(_X86_)
#pragma optimize("", on)
#endif
#endif
#endif
