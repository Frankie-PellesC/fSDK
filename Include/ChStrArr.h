/*+@@file@@----------------------------------------------------------------*//*!
 \file		ChStrArr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 16:39:10 2016
 \date		Modified on Sun Jul  3 16:39:10 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#if __POCC__ >= 500
#pragma once
#endif

#if _MSC_VER > 1000
#pragma once
#endif
#ifndef _CHStringArray_
#define _CHStringArray_
#include <polarity.h>
#include <ProvExce.h>
#if 0
//ONLY C++
class POLARITY CHStringArray 
{
    public
        CHStringArray();
        ~CHStringArray();
        int GetSize() const             { return m_nSize; }
        int GetUpperBound() const       { return m_nSize-1; }
        void SetSize(int nNewSize, int nGrowBy = -1) throw ( CHeap_Exception ) ;
        void FreeExtra() throw ( CHeap_Exception ) ;
        void RemoveAll()                { SetSize(0); }
#if (!defined DEBUG && !defined _DEBUG)
        CHString GetAt(int nIndex) const{ return m_pData[nIndex]; }
        void SetAt(int nIndex, LPCWSTR newElement){ m_pData[nIndex] = newElement; }
        CHString& ElementAt(int nIndex) { return m_pData[nIndex]; }
#else
        CHString GetAt(int nIndex) const;
        void SetAt(int nIndex, LPCWSTR newElement);
        CHString& ElementAt(int nIndex);
#endif
        const CHString* GetData() const { return (const CHString*)m_pData; }
        CHString* GetData()             { return (CHString*)m_pData; }
        void SetAtGrow(int nIndex, LPCWSTR newElement) throw ( CHeap_Exception ) ;
        int Add(LPCWSTR newElement) throw ( CHeap_Exception ) 
        { 
            int nIndex = m_nSize;
            SetAtGrow(nIndex, newElement);
            return nIndex; 
        }
        int Append(const CHStringArray& src) throw ( CHeap_Exception ) ;
        void Copy(const CHStringArray& src) throw ( CHeap_Exception ) ;
        CHString operator[](int nIndex) const { return GetAt(nIndex); }
        CHString& operator[](int nIndex)      { return ElementAt(nIndex); }
        void InsertAt(int nIndex, LPCWSTR newElement, int nCount = 1) throw ( CHeap_Exception ) ;
        void RemoveAt(int nIndex, int nCount = 1);
        void InsertAt(int nStartIndex, CHStringArray* pNewArray) throw ( CHeap_Exception ) ;
    protected
        CHString* m_pData;
        int m_nSize;
        int m_nMaxSize;
        int m_nGrowBy;
        typedef CHString BASE_TYPE;
        typedef LPCWSTR BASE_ARG_TYPE;
};
#endif
#endif


