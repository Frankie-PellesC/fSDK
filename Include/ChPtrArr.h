/*+@@file@@----------------------------------------------------------------*//*!
 \file		ChPtrArr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 16:21:32 2016
 \date		Modified on Sun Jul  3 16:21:32 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#if __POCC__ >= 500
#pragma once
#endif

#if _MSC_VER > 1000
#pragma once
#endif
#ifndef __CHPTRARRAY__
#define __CHPTRARRAY__
#include <windows.h>
#include <limits.h>
#include <assert.h>
#include <tchar.h>
#include <polarity.h>
#include <ProvExce.h>
#if 0
//ONLY C++
class POLARITY CHPtrArray {
	public CHPtrArray();
	int GetSize()const;
	int GetUpperBound()const;
	void SetSize(int nNewSize, int nGrowBy = -1)throw(CHeap_Exception);
	void FreeExtra() throw(CHeap_Exception);
	void RemoveAll();
	void *GetAt(int nIndex)const;
	void SetAt(int nIndex, void *newElement);
	void *&ElementAt(int nIndex);
	const void **GetData()const;
	void **GetData();
	void SetAtGrow(int nIndex, void *newElement) throw(CHeap_Exception);
	int Add(void *newElement) throw(CHeap_Exception);
	int Append(const CHPtrArray & src) throw(CHeap_Exception);
	void Copy(const CHPtrArray & src) throw(CHeap_Exception);
	void *operator[] (int nIndex)const;
	void *&operator[] (int nIndex);
	void InsertAt(int nIndex, void *newElement, int nCount = 1)throw(CHeap_Exception);
	void RemoveAt(int nIndex, int nCount = 1);
	void InsertAt(int nStartIndex, CHPtrArray * pNewArray) throw(CHeap_Exception);
	    protected void **m_pData;
	int m_nSize;
	int m_nMaxSize;
	int m_nGrowBy;
	    public ~ CHPtrArray();
#ifdef _DEBUG
	void AssertValid()const;
#endif
	      protected typedef void *BASE_TYPE;
	typedef void *BASE_ARG_TYPE;
};
#endif
#endif


