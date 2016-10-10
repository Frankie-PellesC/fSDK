/*+@@file@@----------------------------------------------------------------*//*!
 \file		GenLex.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 22:07:45 2016
 \date		Modified on Sun Jul 10 22:07:45 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _GENLEX_H_
#define _GENLEX_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <Polarity.h>
#if 0
class CGenLexSource
{
public
    virtual wchar_t NextChar() = 0;
    virtual void Pushback(wchar_t) = 0;
    virtual void Reset() = 0;
};
class CTextLexSource : public CGenLexSource
{
    const wchar_t *m_pSrcBuf;
    const wchar_t *m_pStart;
public
    CTextLexSource(const wchar_t *pSrc) { SetString(pSrc); }
    wchar_t NextChar()
    {
        if (!m_pSrcBuf)
            return 0;
        else
            return *m_pSrcBuf++ ? m_pSrcBuf[-1] : 0;
    }
    void Pushback(wchar_t)
    {
        if (m_pSrcBuf)
            --m_pSrcBuf;
    }
    void Reset() { m_pSrcBuf = m_pStart; }
    void SetString (const wchar_t *pSrc) { m_pSrcBuf = m_pStart = pSrc; }
};
#endif
#pragma pack(2)
typedef struct LexEl
{
    wchar_t cFirst, cLast;
    WORD wGotoState;
    WORD wReturnTok;
    WORD wInstructions;
} LexEl;
#pragma pack()
#define GLEX_ACCEPT      0x1
#define GLEX_CONSUME     0x2
#define GLEX_PUSHBACK    0x4
#define GLEX_NOT         0x8
#define GLEX_LINEFEED    0x10
#define GLEX_RETURN      0x20
#define GLEX_ANY         wchar_t(0xFFFF)
#define GLEX_EMPTY       wchar_t(0xFFFE)
#if 0
class CGenLexer
{
    wchar_t    *m_pTokenBuf;
    int         m_nCurrentLine;
    int         m_nCurBufSize;
    CGenLexSource   *m_pSrc;
    LexEl           *m_pTable;
    
public
    CGenLexer(LexEl *pTbl, CGenLexSource *pSrc);
    
   ~CGenLexer(); 
    int NextToken();
    wchar_t* GetTokenText() { return m_pTokenBuf; }
    int GetLineNum() { return m_nCurrentLine; }
    void Reset();
};
#endif
#endif
