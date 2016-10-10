/*+@@file@@----------------------------------------------------------------*//*!
 \file		recapis.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 19:30:23 2016
 \date		Modified on Fri Sep 16 19:30:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef RECAPIS_H__
#define RECAPIS_H__
#if __POCC__ >= 500
#pragma once
#endif
#include "tpcshrd.h"
#include "RecTypes.h"
#ifndef __HRECOALT__
#define __HRECOALT__
DECLARE_HANDLE(HRECOALT);
#endif
#ifndef __HRECOCONTEXT__
#define __HRECOCONTEXT__
DECLARE_HANDLE(HRECOCONTEXT);
#endif
#ifndef __HRECOGNIZER__
#define __HRECOGNIZER__
DECLARE_HANDLE(HRECOGNIZER);
#endif
#ifndef __HRECOLATTICE__
#define __HRECOLATTICE__
DECLARE_HANDLE(HRECOLATTICE);
#endif
#ifndef __HRECOWORDLIST__
#define __HRECOWORDLIST__
DECLARE_HANDLE(HRECOWORDLIST);
#endif
typedef HRESULT (*PfnRecoCallback)(DWORD, LPBYTE, HRECOCONTEXT);
#ifndef __IID_DEFINED__
#define __IID_DEFINED__
typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;
#endif
#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif
HRESULT WINAPI CreateRecognizer(CLSID *pCLSID, HRECOGNIZER *phrec);
HRESULT WINAPI DestroyRecognizer(HRECOGNIZER hrec);
HRESULT WINAPI GetRecoAttributes(HRECOGNIZER hrec, RECO_ATTRS* pRecoAttrs);
HRESULT WINAPI CreateContext(HRECOGNIZER hrec, HRECOCONTEXT *phrc);
HRESULT WINAPI DestroyContext(HRECOCONTEXT hrc);
HRESULT WINAPI GetResultPropertyList(HRECOGNIZER hrec, ULONG* pPropertyCount, GUID*pPropertyGuid);
HRESULT WINAPI GetPreferredPacketDescription(HRECOGNIZER hrec, PACKET_DESCRIPTION* pPacketDescription);
HRESULT WINAPI GetUnicodeRanges(HRECOGNIZER hrec, ULONG *pcRanges, CHARACTER_RANGE *pcr);
HRESULT WINAPI AddStroke(HRECOCONTEXT hrc, const PACKET_DESCRIPTION* pPacketDesc, ULONG cbPacket, const BYTE *pPacket, const XFORM *pXForm);
HRESULT WINAPI GetBestResultString(HRECOCONTEXT hrc, ULONG *pcSize, WCHAR* pwcBestResult);
HRESULT WINAPI DestroyAlternate(HRECOALT hrcalt);
HRESULT WINAPI SetGuide(HRECOCONTEXT hrc, const RECO_GUIDE* pGuide, ULONG iIndex);
HRESULT WINAPI GetGuide(HRECOCONTEXT hrc, RECO_GUIDE* pGuide, ULONG *piIndex);
HRESULT WINAPI AdviseInkChange(HRECOCONTEXT hrc, BOOL bNewStroke);
HRESULT WINAPI SetCACMode(HRECOCONTEXT hrc, int iMode);
HRESULT WINAPI EndInkInput(HRECOCONTEXT hrc);
HRESULT WINAPI CloneContext(HRECOCONTEXT hrc, HRECOCONTEXT* pCloneHrc);
HRESULT WINAPI ResetContext(HRECOCONTEXT hrc);
HRESULT WINAPI Process(HRECOCONTEXT hrc, BOOL *pbPartialProcessing);
HRESULT WINAPI SetFactoid(HRECOCONTEXT hrc, ULONG cwcFactoid, const WCHAR *pwcFactoid);
HRESULT WINAPI SetFlags(HRECOCONTEXT hrc, DWORD dwFlags);
HRESULT WINAPI GetLatticePtr(HRECOCONTEXT hrc, RECO_LATTICE **ppLattice);
HRESULT WINAPI SetTextContext(HRECOCONTEXT hrc, ULONG cwcBefore, const WCHAR *pwcBefore, ULONG cwcAfter, const WCHAR *pwcAfter);
HRESULT WINAPI GetEnabledUnicodeRanges(HRECOCONTEXT hrc, ULONG *pcRanges, CHARACTER_RANGE *pcr);
HRESULT WINAPI SetEnabledUnicodeRanges(HRECOCONTEXT hrc, ULONG cRanges, CHARACTER_RANGE *pcr);
HRESULT WINAPI GetContextPropertyList(HRECOCONTEXT hrc, ULONG *pcProperties, GUID *pPropertyGUIDS);
HRESULT WINAPI GetContextPropertyValue(HRECOCONTEXT hrc, GUID *pGuid, ULONG *pcbSize, BYTE *pProperty);
HRESULT WINAPI SetContextPropertyValue(HRECOCONTEXT hrc, GUID *pGuid, ULONG cbSize, BYTE *pProperty);
HRESULT WINAPI IsStringSupported(HRECOCONTEXT hrc, ULONG wcString, const WCHAR *pwcString);
HRESULT WINAPI SetWordList(HRECOCONTEXT hrc, HRECOWORDLIST hwl);
HRESULT WINAPI GetContextPreferenceFlags(HRECOCONTEXT hrc, DWORD *pdwContextPreferenceFlags);
HRESULT WINAPI GetRightSeparator(HRECOCONTEXT hrc, ULONG *pcSize, WCHAR* pwcRightSeparator);
HRESULT WINAPI GetLeftSeparator(HRECOCONTEXT hrc, ULONG *pcSize, WCHAR* pwcLeftSeparator);
HRESULT WINAPI DestroyWordList(HRECOWORDLIST hwl);
HRESULT WINAPI AddWordsToWordList(HRECOWORDLIST hwl, WCHAR * pwcWords);
HRESULT WINAPI MakeWordList(HRECOGNIZER hrec, WCHAR *pBuffer, HRECOWORDLIST *phwl);
#endif
