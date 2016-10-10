/*+@@file@@----------------------------------------------------------------*//*!
 \file		spcollec.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 00:38:48 2016
 \date		Modified on Sat Sep 17 00:38:48 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef SPCollec_h
#define SPCollec_h
#if __POCC__ >= 500
#pragma once
#endif
#error C++ Onlly header!
#if 0
#ifndef _INC_LIMITS
#include <limits.h>
#endif
#ifndef _INC_STDLIB
#include <stdlib.h>
#endif
#ifndef _INC_SEARCH
#include <search.h>
#endif
#include <intsafe.h>
#define SPASSERT_VALID( a )
typedef void* SPLISTPOS;
typedef DWORD SPLISTHANDLE;
#define SP_BEFORE_START_POSITION ((void*)-1L)
inline BOOL SPIsValidAddress(const void *lp, UINT, BOOL)
{
	return (lp != NULL);
}
inline HRESULT SPConstructElementsVoid(void *pElements, size_t sizeof_TYPE, int nCount)
{
	HRESULT hr = S_OK;
	_ASSERT(nCount == 0 || SPIsValidAddress(pElements, nCount * (UINT)sizeof_TYPE, TRUE));
	memset(pElements, 0, nCount * sizeof_TYPE);
	return hr;
}
template < class TYPE > inline HRESULT SPConstructElements(TYPE * pElements, int nCount)
{
	HRESULT hr = S_OK;
	_ASSERT(nCount == 0 || SPIsValidAddress(pElements, nCount * sizeof(TYPE), TRUE));
	memset((void *)pElements, 0, nCount * sizeof(TYPE));
	return hr;
}
inline void SPDestructElementsVoid(void *pElements, size_t sizeof_TYPE, int nCount)
{
	_ASSERT((nCount == 0 || SPIsValidAddress(pElements, nCount * (UINT)sizeof_TYPE, TRUE)));
	pElements;
	nCount;
	sizeof_TYPE;
}
template < class TYPE > inline void SPDestructElements(TYPE *pElements, int nCount)
{
	_ASSERT((nCount == 0 || SPIsValidAddress(pElements, nCount * sizeof(TYPE), TRUE)));
	pElements;
	nCount;
}
inline HRESULT SPCopyElementsVoid(void *pDest, const void *pSrc, size_t sizeof_TYPE, int nCount)
{
	HRESULT hr = S_OK;
	_ASSERT((nCount == 0 || SPIsValidAddress(pDest, nCount * (UINT)sizeof_TYPE, TRUE)));
	_ASSERT((nCount == 0 || SPIsValidAddress(pSrc, nCount * (UINT)sizeof_TYPE, FALSE)));
	memcpy(pDest, pSrc, nCount * sizeof_TYPE);
	return hr;
}
template < class TYPE > inline HRESULT SPCopyElements(TYPE * pDest, const TYPE * pSrc, int nCount)
{
	HRESULT hr = S_OK;
	_ASSERT((nCount == 0 || SPIsValidAddress(pDest, nCount * sizeof(TYPE), TRUE)));
	_ASSERT((nCount == 0 || SPIsValidAddress(pSrc, nCount * sizeof(TYPE), FALSE)));
	memcpy(pDest, pSrc, nCount * sizeof(TYPE));
	return hr;
}
template < class TYPE, class ARG_TYPE > BOOL SPCompareElements(const TYPE * pElement1, const ARG_TYPE * pElement2)
{
	_ASSERT(SPIsValidAddress(pElement1, sizeof(TYPE), FALSE));
	_ASSERT(SPIsValidAddress(pElement2, sizeof(ARG_TYPE), FALSE));
	return *pElement1 == *pElement2;
}
template < class ARG_KEY > inline UINT SPHashKey(ARG_KEY key)
{
	return ((UINT) (DWORD_PTR)key) >> 4;
}
struct CSPPlex {
	CSPPlex *pNext;
	UINT nMax;
	UINT nCur;
	void *data() {
		return this + 1;
	}
	static CSPPlex *PASCAL Create(CSPPlex *&pHead, UINT nMax, UINT cbElement) {
		CSPPlex *p = NULL;
		UINT cbSize;
		if (SUCCEEDED(UIntMult(nMax, cbElement, &cbSize)) && SUCCEEDED(UIntAdd(cbSize, sizeof(CSPPlex), &cbSize)))
		{
			p = (CSPPlex *)new BYTE[cbSize];
		}
		if (p != NULL)
		{
			p->nMax = nMax;
			p->nCur = 0;
			p->pNext = pHead;
			pHead = p;
		}
		return p;
	}
	void FreeDataChain() {
		CSPPlex *p = this;
		while (p != NULL)
		{
			BYTE *bytes = (BYTE *)p;
			CSPPlex *pNext = p->pNext;
			delete[]bytes;
			p = pNext;
		}
	}
};
class CSPArrayVoid {
	public CSPArrayVoid();
	int GetSize()const;
	int GetUpperBound()const;
	HRESULT SetSize(int nNewSize, int nGrowBy = -1);
	void FreeExtra();
	void RemoveAll();
	void RemoveAt(int nIndex, int nCount = 1);
	void Sort(int (__cdecl *compare) (const void *elem1, const void *elem2));
	protected void *m_pData;
	int m_nSize;
	int m_nMaxSize;
	int m_nGrowBy;
	size_t m_sizeofTYPE;

	       public ~ CSPArrayVoid();
#ifdef _DEBUG
	void AssertValid()const;
#endif
};
inline int CSPArrayVoid::GetSize()
	const {
		return m_nSize;
	}
	inline int CSPArrayVoid::GetUpperBound()
	const {
		return m_nSize - 1;
	}
	inline void CSPArrayVoid::RemoveAll()
{
	SetSize(0, -1);
}
inline CSPArrayVoid::CSPArrayVoid()
{
	m_pData = NULL;
	m_nSize = m_nMaxSize = m_nGrowBy = 0;
}
inline CSPArrayVoid::~CSPArrayVoid()
{
	SPASSERT_VALID(this);
	if (m_pData != NULL)
	{
		SPDestructElementsVoid(m_pData, m_sizeofTYPE, m_nSize);
		delete[](BYTE *)m_pData;
	}
}
inline HRESULT CSPArrayVoid::SetSize(int nNewSize, int nGrowBy)
{
	SPASSERT_VALID(this);
	_ASSERT(nNewSize >= 0);
	HRESULT hr = S_OK;
	if (nGrowBy != -1)
		m_nGrowBy = nGrowBy;
	if (nNewSize == 0)
	{
		if (m_pData != NULL)
		{
			SPDestructElementsVoid(m_pData, m_sizeofTYPE, m_nSize);
			delete[](BYTE *)m_pData;
			m_pData = NULL;
		}
		m_nSize = m_nMaxSize = 0;
	}
	else if (m_pData == NULL)
	{
#ifdef SIZE_T_MAX
		_ASSERT((UINT)nNewSize <= SIZE_T_MAX / m_sizeofTYPE);
#endif
		m_pData = (void *)new BYTE[nNewSize *m_sizeofTYPE];
		if (m_pData)
		{
			hr = SPConstructElementsVoid(m_pData, m_sizeofTYPE, nNewSize);
			if (SUCCEEDED(hr))
			{
				m_nSize = m_nMaxSize = nNewSize;
			}
			else
			{
				delete[](BYTE *)m_pData;
				m_pData = NULL;
			}
		}
		else
		{
			hr = E_OUTOFMEMORY;
		}
	}
	else if (nNewSize <= m_nMaxSize)
	{
		if (nNewSize > m_nSize)
		{
			hr = SPConstructElementsVoid((BYTE *)m_pData + m_nSize * m_sizeofTYPE, m_sizeofTYPE, nNewSize - m_nSize);
		}
		else if (m_nSize > nNewSize)
		{
			SPDestructElementsVoid((BYTE *)m_pData + nNewSize * m_sizeofTYPE, m_sizeofTYPE, m_nSize - nNewSize);
		}
		if (SUCCEEDED(hr))
		{
			m_nSize = nNewSize;
		}
	}
	else
	{
		nGrowBy = m_nGrowBy;
		if (nGrowBy == 0)
		{
			nGrowBy = min(1024, max(4, m_nSize / 8));
		}
		int nNewMax;
		if (nNewSize < m_nMaxSize + nGrowBy)
			nNewMax = m_nMaxSize + nGrowBy;
		else
			nNewMax = nNewSize;
		_ASSERT(nNewMax >= m_nMaxSize);
#ifdef SIZE_T_MAX
		_ASSERT((UINT)nNewMax <= SIZE_T_MAX / m_sizeofTYPE);
#endif
		void *pNewData = (void *)new BYTE[nNewMax * m_sizeofTYPE];
		if (pNewData)
		{
			memcpy(pNewData, m_pData, m_nSize * m_sizeofTYPE);
			_ASSERT(nNewSize > m_nSize);
			hr = SPConstructElementsVoid((BYTE *)pNewData + m_nSize * m_sizeofTYPE, m_sizeofTYPE, nNewSize - m_nSize);
			delete[](BYTE *)m_pData;
			m_pData = pNewData;
			m_nSize = nNewSize;
			m_nMaxSize = nNewMax;
		}
		else
		{
			hr = E_OUTOFMEMORY;
		}
	}
	return hr;
}
inline void CSPArrayVoid::FreeExtra()
{
	SPASSERT_VALID(this);
	if (m_nSize != m_nMaxSize)
	{
#ifdef SIZE_T_MAX
		_ASSERT((UINT)m_nSize <= SIZE_T_MAX / m_sizeofTYPE);
#endif
		void *pNewData = NULL;
		if (m_nSize != 0)
		{
			pNewData = (void *)new BYTE[m_nSize *m_sizeofTYPE];
			_ASSERT(pNewData);
			memcpy(pNewData, m_pData, m_nSize * m_sizeofTYPE);
		}
		delete[](BYTE *)m_pData;
		m_pData = pNewData;
		m_nMaxSize = m_nSize;
	}
}
inline void CSPArrayVoid::RemoveAt(int nIndex, int nCount)
{
	SPASSERT_VALID(this);
	_ASSERT(nIndex >= 0);
	_ASSERT(nCount >= 0);
	_ASSERT(nIndex + nCount <= m_nSize);
	int nMoveCount = m_nSize - (nIndex + nCount);
	SPDestructElementsVoid((BYTE *)m_pData + nIndex * m_sizeofTYPE, m_sizeofTYPE, nCount);
	if (nMoveCount)
		memcpy((BYTE *)m_pData + nIndex * m_sizeofTYPE, (BYTE *)m_pData + (nIndex + nCount) * m_sizeofTYPE, nMoveCount * m_sizeofTYPE);
	m_nSize -= nCount;
}
inline void CSPArrayVoid::Sort(int (__cdecl *compare) (const void *elem1, const void *elem2))
{
	SPASSERT_VALID(this);
	_ASSERT(m_pData != NULL);
	qsort(m_pData, m_nSize, m_sizeofTYPE, compare);
}
#ifdef _DEBUG
inline void CSPArrayVoid::AssertValid()
	const {
		if (m_pData == NULL)
		{
			_ASSERT(m_nSize == 0);
			_ASSERT(m_nMaxSize == 0);
		}
		else {
			_ASSERT(m_nSize >= 0);
			_ASSERT(m_nMaxSize >= 0);
			_ASSERT(m_nSize <= m_nMaxSize);
			_ASSERT(SPIsValidAddress(m_pData, m_nMaxSize * (UINT)m_sizeofTYPE, TRUE));
		}
	}
#endif
template < class TYPE, class ARG_TYPE > class CSPArray:public CSPArrayVoid
{
	public CSPArray();
	TYPE GetAt(int nIndex)const;
	void SetAt(int nIndex, ARG_TYPE newElement);
	TYPE & ElementAt(int nIndex);
	const TYPE *GetData()const;
	TYPE *GetData();
	HRESULT SetAtGrow(int nIndex, ARG_TYPE newElement);
	int Add(ARG_TYPE newElement);
	HRESULT AddHR(ARG_TYPE newElement);
	int Append(const CSPArray & src);
	HRESULT Copy(const CSPArray & src);
	TYPE operator[] (int nIndex)const;
	TYPE & operator[](int nIndex);
	HRESULT InsertAt(int nIndex, ARG_TYPE newElement, int nCount = 1);
	HRESULT InsertAt(int nStartIndex, CSPArray *pNewArray);
	public ~ CSPArray()
	{
	};
#ifdef _DEBUG
	void AssertValid()const;
#endif
};
template < class TYPE, class ARG_TYPE > inline TYPE CSPArray < TYPE, ARG_TYPE >: :GetAt(int nIndex)
	const {
		_ASSERT((nIndex >= 0 && nIndex < m_nSize));
		return ((TYPE *)m_pData)[nIndex];
	}
	template < class TYPE, class ARG_TYPE > inline void CSPArray < TYPE, ARG_TYPE >::SetAt(int nIndex, ARG_TYPE newElement)
{
	_ASSERT((nIndex >= 0 && nIndex < m_nSize));
	((TYPE *)m_pData)[nIndex] = newElement;
}
template < class TYPE, class ARG_TYPE > inline TYPE & CSPArray < TYPE, ARG_TYPE >: :ElementAt(int nIndex)
{
	_ASSERT((nIndex >= 0 && nIndex < m_nSize));
	return ((TYPE *)m_pData)[nIndex];
}
template < class TYPE, class ARG_TYPE > inline const TYPE *CSPArray < TYPE, ARG_TYPE >::GetData()
	const {
		return (const TYPE *)m_pData;
	}
template < class TYPE, class ARG_TYPE > inline TYPE * CSPArray < TYPE, ARG_TYPE >::GetData()
{
	return (TYPE *)m_pData;
}
template < class TYPE, class ARG_TYPE > inline int CSPArray < TYPE, ARG_TYPE >::Add(ARG_TYPE newElement)
{
	int nIndex = m_nSize;
	SetAtGrow(nIndex, newElement);
	return nIndex;
}
template < class TYPE, class ARG_TYPE > inline HRESULT CSPArray < TYPE, ARG_TYPE >: :AddHR(ARG_TYPE newElement)
{
	return SetAtGrow(m_nSize, newElement);
}
template < class TYPE, class ARG_TYPE > inline TYPE CSPArray < TYPE, ARG_TYPE >: :operator[](int nIndex)
	const {
		return GetAt(nIndex);
	}
template < class TYPE, class ARG_TYPE > inline TYPE & CSPArray < TYPE, ARG_TYPE >::operator[] (int nIndex)
{
	return ElementAt(nIndex);
}
template < class TYPE, class ARG_TYPE > inline CSPArray < TYPE, ARG_TYPE >: :CSPArray()
{
	m_sizeofTYPE = sizeof(TYPE);
}
template < class TYPE, class ARG_TYPE > int CSPArray < TYPE, ARG_TYPE >::Append(const CSPArray & src)
{
	SPASSERT_VALID(this);
	_ASSERT(this != &src);
	int nOldSize = m_nSize;
	HRESULT hr = SetSize(m_nSize + src.m_nSize);
	if (SUCCEEDED(hr))
	{
		hr = SPCopyElements((TYPE *)m_pData + nOldSize, (TYPE *) (src.m_pData), src.m_nSize);
	}
	return (SUCCEEDED(hr)) ? (nOldSize) : (-1);
}
template < class TYPE, class ARG_TYPE > HRESULT CSPArray < TYPE, ARG_TYPE >: :Copy(const CSPArray & src)
{
	SPASSERT_VALID(this);
	_ASSERT(this != &src);
	HRESULT hr = SetSize(src.m_nSize);
	if (SUCCEEDED(hr))
	{
		hr = SPCopyElements((TYPE *)m_pData, (TYPE *) (src.m_pData), src.m_nSize);
	}
	return hr;
}
template < class TYPE, class ARG_TYPE > HRESULT CSPArray < TYPE, ARG_TYPE >: :SetAtGrow(int nIndex, ARG_TYPE newElement)
{
	SPASSERT_VALID(this);
	_ASSERT(nIndex >= 0);
	HRESULT hr = S_OK;
	if (nIndex >= m_nSize)
	{
		hr = SetSize(nIndex + 1, -1);
	}
	if (SUCCEEDED(hr))
	{
		((TYPE *)m_pData)[nIndex] = newElement;
	}
	return hr;
}
template < class TYPE, class ARG_TYPE > HRESULT CSPArray < TYPE, ARG_TYPE >: :InsertAt(int nIndex, ARG_TYPE newElement, int nCount)
{
	SPASSERT_VALID(this);
	_ASSERT(nIndex >= 0);
	_ASSERT(nCount > 0);
	HRESULT hr = S_OK;
	if (nIndex >= m_nSize)
	{
		hr = SetSize(nIndex + nCount, -1);
	}
	else
	{
		int nOldSize = m_nSize;
		hr = SetSize(m_nSize + nCount, -1);
		if (SUCCEEDED(hr))
		{
			memmove(&m_pData[nIndex + nCount], &m_pData[nIndex], (nOldSize - nIndex) * sizeof(TYPE));
			hr = SPConstructElements(&m_pData[nIndex], nCount);
		}
	}
	if (SUCCEEDED(hr))
	{
		_ASSERT(nIndex + nCount <= m_nSize);
		while (nCount--)
			((TYPE *)m_pData)[nIndex++] = newElement;
	}
	return hr;
}
template < class TYPE, class ARG_TYPE > HRESULT CSPArray < TYPE, ARG_TYPE >: :InsertAt(int nStartIndex, CSPArray * pNewArray)
{
	SPASSERT_VALID(this);
	SPASSERT_VALID(pNewArray);
	_ASSERT(nStartIndex >= 0);
	HRESULT hr = S_OK;
	if (pNewArray->GetSize() > 0)
	{
		hr = InsertAt(nStartIndex, pNewArray->GetAt(0), pNewArray->GetSize());
		for (int i = 0; SUCCEEDED(hr) && (i < pNewArray->GetSize()); i++)
		{
			SetAt(nStartIndex + i, pNewArray->GetAt(i));
		}
	}
	return hr;
}
template < class TYPE, class ARG_TYPE > class CSPList
{
	protected struct CNode {
		CNode *pNext;
		CNode *pPrev;
		TYPE data;
	};
	public CSPList(int nBlockSize = 10);
	int GetCount()const;
	BOOL IsEmpty()const;
	TYPE & GetHead();
	TYPE GetHead()const;
	TYPE & GetTail();
	TYPE GetTail()const;
	TYPE RemoveHead();
	TYPE RemoveTail();
	SPLISTPOS AddHead(ARG_TYPE newElement);
	SPLISTPOS AddTail(ARG_TYPE newElement);
	void AddHead(CSPList * pNewList);
	void AddTail(CSPList * pNewList);
	void RemoveAll();
	SPLISTPOS GetHeadPosition()const;
	SPLISTPOS GetTailPosition()const;
	TYPE & GetNext(SPLISTPOS & rPosition);
	TYPE GetNext(SPLISTPOS & rPosition)const;
	TYPE & GetPrev(SPLISTPOS & rPosition);
	TYPE GetPrev(SPLISTPOS & rPosition)const;
	TYPE & GetAt(SPLISTPOS position);
	TYPE GetAt(SPLISTPOS position)const;
	void SetAt(SPLISTPOS pos, ARG_TYPE newElement);
	void RemoveAt(SPLISTPOS position);
	SPLISTPOS InsertBefore(SPLISTPOS position, ARG_TYPE newElement);
	SPLISTPOS InsertAfter(SPLISTPOS position, ARG_TYPE newElement);
	SPLISTPOS Find(ARG_TYPE searchValue, SPLISTPOS startAfter = NULL)const;
	SPLISTPOS FindIndex(int nIndex)const;
	protected CNode *m_pNodeHead;
	CNode *m_pNodeTail;
	int m_nCount;
	CNode *m_pNodeFree;
	struct CSPPlex *m_pBlocks;
	int m_nBlockSize;
	CNode *NewNode(CNode * pPrev, CNode * pNext) {
		if (m_pNodeFree == NULL)
		{
		  CSPPlex *pNewBlock = CSPPlex: :Create(m_pBlocks, m_nBlockSize, sizeof(CNode));
			if (pNewBlock != NULL)
			{
				CNode *pNode = (CNode *)pNewBlock->data();
				pNode += m_nBlockSize - 1;
				for (int i = m_nBlockSize - 1; i >= 0; i--, pNode--)
				{
					pNode->pNext = m_pNodeFree;
					m_pNodeFree = pNode;
				}
			}
		}
		CNode *pNode = m_pNodeFree;
		if (pNode)
		{
			if (SUCCEEDED(SPConstructElements(&pNode->data, 1)))
			{
				m_pNodeFree = m_pNodeFree->pNext;
				pNode->pPrev = pPrev;
				pNode->pNext = pNext;
				m_nCount++;
				_ASSERT(m_nCount > 0);
			}
		}
		return pNode;
	}
	void FreeNode(CNode * pNode) {
		SPDestructElements(&pNode->data, 1);
		pNode->pNext = m_pNodeFree;
		m_pNodeFree = pNode;
		m_nCount--;
		_ASSERT(m_nCount >= 0);
	}
	public ~ CSPList();
#ifdef _DEBUG
	void AssertValid()const;
#endif
};
template < class TYPE, class ARG_TYPE > inline int CSPList < TYPE, ARG_TYPE >::GetCount()
	const {
		return m_nCount;
	}
template < class TYPE, class ARG_TYPE > inline BOOL CSPList < TYPE, ARG_TYPE >::IsEmpty()
	const {
		return m_nCount == 0;
	}
template < class TYPE, class ARG_TYPE > inline TYPE & CSPList < TYPE, ARG_TYPE >::GetHead()
{
	_ASSERT(m_pNodeHead != NULL);
	return m_pNodeHead->data;
}
template < class TYPE, class ARG_TYPE > inline TYPE CSPList < TYPE, ARG_TYPE >: :GetHead()
	const {
		_ASSERT(m_pNodeHead != NULL);
		return m_pNodeHead->data;
	}
template < class TYPE, class ARG_TYPE > inline TYPE & CSPList < TYPE, ARG_TYPE >::GetTail()
{
	_ASSERT(m_pNodeTail != NULL);
	return m_pNodeTail->data;
}
template < class TYPE, class ARG_TYPE > inline TYPE CSPList < TYPE, ARG_TYPE >: :GetTail()
	const {
		_ASSERT(m_pNodeTail != NULL);
		return m_pNodeTail->data;
	}
template < class TYPE, class ARG_TYPE > inline SPLISTPOS CSPList < TYPE, ARG_TYPE >::GetHeadPosition()
	const {
		return (SPLISTPOS) m_pNodeHead;
	}
template < class TYPE, class ARG_TYPE > inline SPLISTPOS CSPList < TYPE, ARG_TYPE >::GetTailPosition()
	const {
		return (SPLISTPOS) m_pNodeTail;
	}
template < class TYPE, class ARG_TYPE > inline TYPE & CSPList < TYPE, ARG_TYPE >::GetNext(SPLISTPOS & rPosition)
{
	CNode *pNode = (CNode *)rPosition;
	_ASSERT(SPIsValidAddress(pNode, sizeof(CNode), TRUE));
	rPosition = (SPLISTPOS)pNode->pNext;
	return pNode->data;
}
template < class TYPE, class ARG_TYPE > inline TYPE CSPList < TYPE, ARG_TYPE >: :GetNext(SPLISTPOS & rPosition)
	const {
		CNode *pNode = (CNode *)rPosition;
		      _ASSERT(SPIsValidAddress(pNode, sizeof(CNode), TRUE));
		      rPosition = (SPLISTPOS)pNode->pNext;
		      return pNode->data;
	}
template < class TYPE, class ARG_TYPE > inline TYPE & CSPList < TYPE, ARG_TYPE >::GetPrev(SPLISTPOS & rPosition)
{
	CNode *pNode = (CNode *)rPosition;
	_ASSERT(SPIsValidAddress(pNode, sizeof(CNode), TRUE));
	rPosition = (SPLISTPOS)pNode->pPrev;
	return pNode->data;
}
template < class TYPE, class ARG_TYPE > inline TYPE CSPList < TYPE, ARG_TYPE >: :GetPrev(SPLISTPOS & rPosition)
	const {
		CNode *pNode = (CNode *)rPosition;
		      _ASSERT(SPIsValidAddress(pNode, sizeof(CNode), TRUE));
		      rPosition = (SPLISTPOS)pNode->pPrev;
		      return pNode->data;
	}
template < class TYPE, class ARG_TYPE > inline TYPE & CSPList < TYPE, ARG_TYPE >::GetAt(SPLISTPOS position)
{
	CNode *pNode = (CNode *)position;
	_ASSERT(SPIsValidAddress(pNode, sizeof(CNode), TRUE));
	return pNode->data;
}
template < class TYPE, class ARG_TYPE > inline TYPE CSPList < TYPE, ARG_TYPE >: :GetAt(SPLISTPOS position)
	const {
		CNode *pNode = (CNode *)position;
		      _ASSERT(SPIsValidAddress(pNode, sizeof(CNode), TRUE));
		      return pNode->data;
	}
	template < class TYPE, class ARG_TYPE > inline void CSPList < TYPE, ARG_TYPE >::SetAt(SPLISTPOS pos, ARG_TYPE newElement)
{
	CNode *pNode = (CNode *)pos;
	_ASSERT(SPIsValidAddress(pNode, sizeof(CNode), TRUE));
	pNode->data = newElement;
}
template < class TYPE, class ARG_TYPE > CSPList < TYPE, ARG_TYPE >: :CSPList(int nBlockSize)
{
	_ASSERT(nBlockSize > 0);
	m_nCount = 0;
	m_pNodeHead = m_pNodeTail = m_pNodeFree = NULL;
	m_pBlocks = NULL;
	m_nBlockSize = nBlockSize;
}
template < class TYPE, class ARG_TYPE > void CSPList < TYPE, ARG_TYPE >::RemoveAll()
{
	SPASSERT_VALID(this);
	CNode *pNode;
	for (pNode = m_pNodeHead; pNode != NULL; pNode = pNode->pNext)
		SPDestructElements(&pNode->data, 1);
	m_nCount = 0;
	m_pNodeHead = m_pNodeTail = m_pNodeFree = NULL;

	if (m_pBlocks != NULL)
	{
		m_pBlocks->FreeDataChain();
		m_pBlocks = NULL;
	}
}
template < class TYPE, class ARG_TYPE > CSPList < TYPE, ARG_TYPE >: :~CSPList()
{
	RemoveAll();
	_ASSERT(m_nCount == 0);
}
template < class TYPE, class ARG_TYPE > SPLISTPOS CSPList < TYPE, ARG_TYPE >: :AddHead(ARG_TYPE newElement)
{
	SPASSERT_VALID(this);
	CNode *pNewNode = NewNode(NULL, m_pNodeHead);
	if (pNewNode)
	{
		pNewNode->data = newElement;
		if (m_pNodeHead != NULL)
			m_pNodeHead->pPrev = pNewNode;
		else
			m_pNodeTail = pNewNode;
		m_pNodeHead = pNewNode;
	}
	return (SPLISTPOS)pNewNode;
}
template < class TYPE, class ARG_TYPE > SPLISTPOS CSPList < TYPE, ARG_TYPE >: :AddTail(ARG_TYPE newElement)
{
	SPASSERT_VALID(this);
	CNode *pNewNode = NewNode(m_pNodeTail, NULL);
	if (pNewNode)
	{
		pNewNode->data = newElement;
		if (m_pNodeTail != NULL)
			m_pNodeTail->pNext = pNewNode;
		else
			m_pNodeHead = pNewNode;
		m_pNodeTail = pNewNode;
	}
	return (SPLISTPOS)pNewNode;
}
template < class TYPE, class ARG_TYPE > void CSPList < TYPE, ARG_TYPE >::AddHead(CSPList *pNewList)
{
	SPASSERT_VALID(this);
	SPASSERT_VALID(pNewList);
	SPLISTPOS pos = pNewList->GetTailPosition();
	while (pos != NULL)
		AddHead(pNewList->GetPrev(pos));
}
template < class TYPE, class ARG_TYPE > void CSPList < TYPE, ARG_TYPE >::AddTail(CSPList *pNewList)
{
	SPASSERT_VALID(this);
	SPASSERT_VALID(pNewList);
	SPLISTPOS pos = pNewList->GetHeadPosition();
	while (pos != NULL)
		AddTail(pNewList->GetNext(pos));
}
template < class TYPE, class ARG_TYPE > TYPE CSPList < TYPE, ARG_TYPE >: :RemoveHead()
{
	SPASSERT_VALID(this);
	_ASSERT(m_pNodeHead != NULL);
	_ASSERT(SPIsValidAddress(m_pNodeHead, sizeof(CNode), TRUE));
	CNode *pOldNode = m_pNodeHead;
	TYPE returnValue = pOldNode->data;
	m_pNodeHead = pOldNode->pNext;
	if (m_pNodeHead != NULL)
		m_pNodeHead->pPrev = NULL;
	else
		m_pNodeTail = NULL;
	FreeNode(pOldNode);
	return returnValue;
}
template < class TYPE, class ARG_TYPE > TYPE CSPList < TYPE, ARG_TYPE >: :RemoveTail()
{
	SPASSERT_VALID(this);
	_ASSERT(m_pNodeTail != NULL);
	_ASSERT(SPIsValidAddress(m_pNodeTail, sizeof(CNode), TRUE));
	CNode *pOldNode = m_pNodeTail;
	TYPE returnValue = pOldNode->data;
	m_pNodeTail = pOldNode->pPrev;
	if (m_pNodeTail != NULL)
		m_pNodeTail->pNext = NULL;
	else
		m_pNodeHead = NULL;
	FreeNode(pOldNode);
	return returnValue;
}
template < class TYPE, class ARG_TYPE > SPLISTPOS CSPList < TYPE, ARG_TYPE >: :InsertBefore(SPLISTPOS position, ARG_TYPE newElement)
{
	SPASSERT_VALID(this);
	if (position == NULL)
		return AddHead(newElement);
	CNode *pOldNode = (CNode *)position;
	CNode *pNewNode = NewNode(pOldNode->pPrev, pOldNode);
	if (pNewNode)
	{
		pNewNode->data = newElement;
		if (pOldNode->pPrev != NULL)
		{
			_ASSERT(SPIsValidAddress(pOldNode->pPrev, sizeof(CNode), TRUE));
			pOldNode->pPrev->pNext = pNewNode;
		}
		else
		{
			_ASSERT(pOldNode == m_pNodeHead);
			m_pNodeHead = pNewNode;
		}
		pOldNode->pPrev = pNewNode;
	}
	return (SPLISTPOS)pNewNode;
}
template < class TYPE, class ARG_TYPE > SPLISTPOS CSPList < TYPE, ARG_TYPE >: :InsertAfter(SPLISTPOS position, ARG_TYPE newElement)
{
	SPASSERT_VALID(this);
	if (position == NULL)
		return AddTail(newElement);
	CNode *pOldNode = (CNode *)position;
	_ASSERT(SPIsValidAddress(pOldNode, sizeof(CNode), TRUE));
	CNode *pNewNode = NewNode(pOldNode, pOldNode->pNext);
	if (pNewNode)
	{
		pNewNode->data = newElement;
		if (pOldNode->pNext != NULL)
		{
			_ASSERT(SPIsValidAddress(pOldNode->pNext, sizeof(CNode), TRUE));
			pOldNode->pNext->pPrev = pNewNode;
		}
		else
		{
			_ASSERT(pOldNode == m_pNodeTail);
			m_pNodeTail = pNewNode;
		}
		pOldNode->pNext = pNewNode;
	}
	return (SPLISTPOS)pNewNode;
}
template < class TYPE, class ARG_TYPE > void CSPList < TYPE, ARG_TYPE >::RemoveAt(SPLISTPOS position)
{
	SPASSERT_VALID(this);
	CNode *pOldNode = (CNode *)position;
	_ASSERT(SPIsValidAddress(pOldNode, sizeof(CNode), TRUE));
	if (pOldNode == m_pNodeHead)
	{
		m_pNodeHead = pOldNode->pNext;
	}
	else
	{
		_ASSERT(SPIsValidAddress(pOldNode->pPrev, sizeof(CNode), TRUE));
		pOldNode->pPrev->pNext = pOldNode->pNext;
	}
	if (pOldNode == m_pNodeTail)
	{
		m_pNodeTail = pOldNode->pPrev;
	}
	else
	{
		_ASSERT(SPIsValidAddress(pOldNode->pNext, sizeof(CNode), TRUE));
		pOldNode->pNext->pPrev = pOldNode->pPrev;
	}
	FreeNode(pOldNode);
}
template < class TYPE, class ARG_TYPE > SPLISTPOS CSPList < TYPE, ARG_TYPE >: :FindIndex(int nIndex)
	const {
		SPASSERT_VALID(this);
		_ASSERT(nIndex >= 0);
		if (nIndex >= m_nCount)
			return NULL;
		CNode *pNode = m_pNodeHead;
		while (nIndex--)
		{
			_ASSERT(SPIsValidAddress(pNode, sizeof(CNode), TRUE));
			pNode = pNode->pNext;
		}
		return (SPLISTPOS) pNode;
	}
template < class TYPE, class ARG_TYPE > SPLISTPOS CSPList < TYPE, ARG_TYPE >: :Find(ARG_TYPE searchValue, SPLISTPOS startAfter)
	const {
		SPASSERT_VALID(this);
		CNode *pNode = (CNode *)startAfter;
		if    (pNode == NULL)
		{
			pNode = m_pNodeHead;
		}
		else {
			_ASSERT(SPIsValidAddress(pNode, sizeof(CNode), TRUE));
			pNode = pNode->pNext;
		}
		for (; pNode != NULL; pNode = pNode->pNext)
			if (SPCompareElements(&pNode->data, &searchValue))
				return (SPLISTPOS)pNode;
		return NULL;
	}
#ifdef _DEBUG
template < class TYPE, class ARG_TYPE > void CSPList < TYPE, ARG_TYPE >::AssertValid()
	const {
		if (m_nCount == 0)
		{
			_ASSERT(m_pNodeHead == NULL);
			_ASSERT(m_pNodeTail == NULL);
		}
		else {
			_ASSERT(SPIsValidAddress(m_pNodeHead, sizeof(CNode), TRUE));
			_ASSERT(SPIsValidAddress(m_pNodeTail, sizeof(CNode), TRUE));
		}
	}
#endif
#endif
#endif
