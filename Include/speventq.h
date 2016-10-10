/*+@@file@@----------------------------------------------------------------*//*!
 \file		speventq.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 00:59:01 2016
 \date		Modified on Sat Sep 17 00:59:01 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef SPEventQ_h
#define SPEventQ_h
#if __POCC__ >= 500
#pragma once
#endif
#error C++ only header!
#if 0
#ifndef SPHelper_h
#include <SPHelper.h>
#endif
#ifdef ETW_TRACE_HEADER
#ifdef SOFTWARE_TRACING
#include <speventq.tmh>
#endif
#endif
class CSpEventExNode : public SPEVENTEX
{
public
    CSpEventExNode()
    {
        memset(this, 0, sizeof(SPEVENTEX));
    }
    ~CSpEventExNode()
    {
        Clear();
    }
    CSpEventExNode    * m_pNext;
    static LONG Compare(const CSpEventExNode * p1, const CSpEventExNode *p2)
    {
        if (p1->ulStreamNum < p2->ulStreamNum)
        {
            return -1;
        }
        else if (p1->ulStreamNum > p2->ulStreamNum)
        {
            return 1;
        }
        else if (p1->ullAudioStreamOffset < p2->ullAudioStreamOffset)
        {
            return -1;
        }
        else if (p1->ullAudioStreamOffset > p2->ullAudioStreamOffset)
        {
            return 1;
        }
        return 0;
    }
    void Clear()
    {
        if (elParamType != SPEI_UNDEFINED)
        {
            if (elParamType == SPET_LPARAM_IS_POINTER ||
                elParamType == SPET_LPARAM_IS_STRING)
            {
                ::CoTaskMemFree((void *)lParam);
            }
            else if (elParamType == SPET_LPARAM_IS_TOKEN ||
                elParamType == SPET_LPARAM_IS_OBJECT)
            {
                ((IUnknown*)lParam)->Release();
            }
        }
        memset(this, 0, sizeof(SPEVENTEX));
    }
    HRESULT CopyTo(SPEVENTEX * pDestEvent) const
    {
        memcpy(pDestEvent, this, sizeof(*pDestEvent));
        if ((elParamType == SPET_LPARAM_IS_POINTER) && lParam)
        {
            _ASSERT(wParam && (wParam < 0x100000));
            pDestEvent->lParam = (LPARAM)::CoTaskMemAlloc(wParam);
            if (pDestEvent->lParam)
            {
                memcpy((void *)pDestEvent->lParam, (void *)lParam, wParam);
            }
            else
            {
                pDestEvent->eEventId = SPEI_UNDEFINED;
                return E_OUTOFMEMORY;
            }
        }
        else if (elParamType == SPET_LPARAM_IS_STRING && lParam != NULL)
        {
			size_t cbLen = (wcslen((WCHAR*)lParam) + 1) * sizeof(WCHAR);
            pDestEvent->lParam = (LPARAM)::CoTaskMemAlloc(cbLen);
            if (pDestEvent->lParam)
            {
                StringCbCopyW ((WCHAR*)pDestEvent->lParam, cbLen, (WCHAR*)lParam);
            }
            else
            {
                pDestEvent->eEventId = SPEI_UNDEFINED;
                return E_OUTOFMEMORY;
            }
        }
        else if (elParamType == SPET_LPARAM_IS_TOKEN ||
               elParamType == SPET_LPARAM_IS_OBJECT)
        {
            ((IUnknown*)lParam)->AddRef();
        }
        return S_OK;
    }
    HRESULT CopyFrom(const SPEVENTEX * pSrcEvent)
    {
        Clear();
        return static_cast<const CSpEventExNode *>(pSrcEvent)->CopyTo(this);
    }
    ULONG ExtraDataSize() const
    {
        ULONG ulSize = 0;
        if( ( elParamType == SPET_LPARAM_IS_POINTER ) && lParam )
        {
            ulSize += ULONG(wParam);
        }
        else if ((elParamType == SPET_LPARAM_IS_STRING) && lParam != NULL)
        {
            ulSize += ((ULONG) wcslen((WCHAR*)lParam) + 1) * sizeof( WCHAR );
        }
        else if( elParamType == SPET_LPARAM_IS_TOKEN )
        {
            CSpDynamicString dstrObjectId;
            if( ((ISpObjectToken*)(lParam))->GetId( &dstrObjectId ) == S_OK )
            {
                ulSize += (dstrObjectId.Length() + 1) * sizeof( WCHAR );
            }
            else
            {
                return (ULONG)-1;
            }
        }
        ulSize += 3;
        ulSize -= ulSize % 4;
        return ulSize;
    }
    ULONG SerializeSizeEx() const
    {
        ULONG ulSize = ExtraDataSize();
        return (ulSize == (ULONG)-1) ? 0 : sizeof(SPSERIALIZEDEVENT64) + ulSize + sizeof(ULONGLONG);
    }
    ULONG SerializeSize() const
    {
        ULONG ulSize = ExtraDataSize();
        return (ulSize == (ULONG)-1) ? 0 : sizeof(SPSERIALIZEDEVENT) + ulSize;
    }
    template <class T>
    HRESULT Serialize(T * pSerEvent) const
    {
        HRESULT hr = S_OK;
        _ASSERT(elParamType != SPET_LPARAM_IS_OBJECT);
        pSerEvent->eEventId = this->eEventId;
        pSerEvent->elParamType = this->elParamType;
        pSerEvent->ulStreamNum = this->ulStreamNum;
        pSerEvent->ullAudioStreamOffset = this->ullAudioStreamOffset;
        SerializeParams(pSerEvent);
        if (lParam)
        {
            switch(elParamType)
            {
            case SPET_LPARAM_IS_POINTER
                memcpy(pSerEvent + 1, (void *)lParam, wParam);
                pSerEvent->SerializedlParam = sizeof(T);
                break;
            case SPET_LPARAM_IS_STRING
                StringCchCopyW ((WCHAR *)(pSerEvent + 1), wcslen ((WCHAR*) lParam) + 1, (WCHAR*)lParam);
                pSerEvent->SerializedlParam = sizeof(T);
                break;
            case SPET_LPARAM_IS_TOKEN
                {
                    CSpDynamicString dstrObjectId;
                    hr = ((ISpObjectToken*)lParam)->GetId( &dstrObjectId );
                    if( SUCCEEDED( hr ) )
                    {
                        pSerEvent->SerializedwParam = (dstrObjectId.Length() + 1) * sizeof( WCHAR );;
                        memcpy( pSerEvent + 1, (void *)dstrObjectId.m_psz, static_cast<ULONG>(pSerEvent->SerializedwParam) );
                    }
                    pSerEvent->SerializedlParam = sizeof(T);
                }
                break;
            default
                break;
            }
        }
        return hr;
    }
    void SerializeParams(__unaligned SPSERIALIZEDEVENT * pSerEvent) const
    {
        pSerEvent->SerializedwParam = (ULONG)this->wParam;
        pSerEvent->SerializedlParam = (LONG)this->lParam;
    }
    void SerializeParams(__unaligned SPSERIALIZEDEVENT64 * pSerEvent) const
    {
        pSerEvent->SerializedwParam = (ULONGLONG)this->wParam;
        pSerEvent->SerializedlParam = (LONGLONG)this->lParam;
    }
    HRESULT SerializeEx(SPSERIALIZEDEVENT64* pSerEvent) const
    {
        ULONG ulSize = SerializeSizeEx();
        if (ulSize == 0) 
        {
            return E_FAIL;
        }
        *(UNALIGNED ULONGLONG*)((BYTE*)pSerEvent + ulSize - sizeof(ULONGLONG)) = ullAudioTimeOffset;
        return Serialize(pSerEvent);
    }
    HRESULT DeserializeEx(const SPSERIALIZEDEVENT64 *pSerEvent, ULONG cbSize)
    {
        Clear();
        HRESULT hr = S_OK;
        const UNALIGNED SPSERIALIZEDEVENT64 * pTemp = pSerEvent;
        if (cbSize < sizeof(*pTemp) + sizeof(ULONGLONG))
        {
            return E_INVALIDARG;
        }
        size_t cbExtraSize = cbSize - sizeof(*pTemp) - sizeof(ULONGLONG);
        this->eEventId = pTemp->eEventId;
        this->elParamType = pTemp->elParamType;
        this->ulStreamNum = pTemp->ulStreamNum;
        this->ullAudioStreamOffset = pTemp->ullAudioStreamOffset;
        this->wParam = static_cast<WPARAM>(pTemp->SerializedwParam);
        this->lParam = static_cast<LPARAM>(pTemp->SerializedlParam);
        size_t cbAlloc = 0;
        if (pTemp->SerializedlParam)
        {
            switch (pTemp->elParamType)
            {
            case SPET_LPARAM_IS_POINTER
                cbAlloc = static_cast<ULONG>(wParam);
                if (cbAlloc > cbExtraSize)
                {
                    hr = E_INVALIDARG;
                }
                break;
            case SPET_LPARAM_IS_STRING
                hr = CheckStringSizeBytes((WCHAR *)(pTemp + 1), cbExtraSize, &cbAlloc);
                break;
            case SPET_LPARAM_IS_TOKEN
                {
                    hr = CheckStringSizeBytes((WCHAR *)(pTemp + 1), cbExtraSize, NULL);
                    if (SUCCEEDED(hr))
                    {
                        hr = SpGetTokenFromId( (const WCHAR*)(pTemp + 1), (ISpObjectToken **)&lParam );
                        wParam = 0;
                    }
                }
                break;
            case SPET_LPARAM_IS_UNDEFINED
                break;
            case SPET_LPARAM_IS_OBJECT
                hr = E_INVALIDARG;
                break;
            default
                hr = E_INVALIDARG;
                break;
            }
            if (SUCCEEDED(hr) && cbAlloc)
            {
                void * pvBuff = ::CoTaskMemAlloc(cbAlloc);
                this->lParam = (LPARAM)pvBuff;
                if (pvBuff)
                {
                    memcpy(pvBuff, pTemp + 1, cbAlloc);
                }
                else
                {
                    hr = E_OUTOFMEMORY;
                }
            }
        }
        if (SUCCEEDED(hr))
        {
            ullAudioTimeOffset = *(UNALIGNED ULONGLONG*)((BYTE*)pTemp + cbSize - sizeof(ULONGLONG));
            _ASSERT(cbSize == SerializeSizeEx());
        }
        else
        {
            memset(this, 0, sizeof(*this));
        }
        return hr;
    }
};
typedef CSpBasicQueue<CSpEventExNode, TRUE, TRUE> CSpEventList;
#define DECLARE_SPNOTIFYSOURCE_METHODS(T) \
STDMETHODIMP SetNotifySink(ISpNotifySink * pNotifySink) \
{ return T._SetNotifySink(pNotifySink); } \
STDMETHODIMP SetNotifyWindowMessage(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam) \
{ return T._SetNotifyWindowMessage(hWnd, Msg, wParam, lParam); } \
STDMETHODIMP SetNotifyCallbackFunction(SPNOTIFYCALLBACK * pfnCallback, WPARAM wParam, LPARAM lParam) \
{ return T._SetNotifyCallbackFunction(pfnCallback, wParam, lParam); } \
STDMETHODIMP SetNotifyCallbackInterface(ISpNotifyCallback * pSpCallback, WPARAM wParam, LPARAM lParam) \
{ return T._SetNotifyCallbackInterface(pSpCallback, wParam, lParam); } \
STDMETHODIMP SetNotifyWin32Event() \
{ return T._SetNotifyWin32Event(); } \
STDMETHODIMP WaitForNotifyEvent(DWORD dwMilliseconds) \
{ return T._WaitForNotifyEvent(dwMilliseconds); } \
STDMETHODIMP_(HANDLE) GetNotifyEventHandle() \
{ return T._GetNotifyEventHandle(); } 
#define DECLARE_SPEVENTSOURCE_METHODS(T) \
DECLARE_SPNOTIFYSOURCE_METHODS(T) \
STDMETHODIMP SetInterest(ULONGLONG ullEventInterest, ULONGLONG ullQueuedInterest) \
{ return T._SetInterest(ullEventInterest, ullQueuedInterest); } \
STDMETHODIMP GetEvents(ULONG ulCount, SPEVENT* pEventArray, ULONG * pulFetched) \
{ return T._GetEvents(ulCount, pEventArray, pulFetched); } \
STDMETHODIMP GetInfo(SPEVENTSOURCEINFO *pInfo) \
{ return T._GetInfo(pInfo); }
class CSpEventSource 
{
  public
    CSpEventSource(CComObjectRootEx<CComMultiThreadModel> * pParent, bool fSortEvents = true) 
        m_pParent(pParent),
        m_fSortEvents(fSortEvents)
    {
        m_ullEventInterest = 0; m_ullQueuedInterest = 0;
        m_ulStreamNum = 0;
    }
    HRESULT _SetNotifySink(ISpNotifySink * pNotifySink);
    HRESULT _SetNotifyWindowMessage(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
    HRESULT _SetNotifyCallbackFunction(SPNOTIFYCALLBACK * pfnCallback, WPARAM wParam, LPARAM lParam);
    HRESULT _SetNotifyCallbackInterface(ISpNotifyCallback * pSpCallback, WPARAM wParam, LPARAM lParam);
    HRESULT _SetNotifyWin32Event();
    HRESULT _WaitForNotifyEvent(DWORD dwMilliseconds);
    HANDLE  _GetNotifyEventHandle();
    HRESULT _SetInterest(ULONGLONG ullEventInterest , ULONGLONG ullQueuedInterest);
    template <class T>
    inline HRESULT _GetEvents( ULONG ulCount, T* pEventArray, ULONG *pulFetched )
    {
        HRESULT hr = S_OK;
        m_pParent->Lock();
        if( SPIsBadWritePtr( pEventArray, sizeof(T) * ulCount ) ||
            SP_IS_BAD_OPTIONAL_WRITE_PTR(pulFetched) )
        {
            hr = E_INVALIDARG;
        }
        else 
        {
            ULONG ulCopied = 0;
            ULONG ulRemaining = ulCount;
            CSpEventExNode * pCur = m_CompletedList.m_pHead;
            CSpEventExNode * pLastCopied = NULL;
            while (ulRemaining && pCur)
            {
#ifdef ETW_TRACE_HEADER
#ifdef SOFTWARE_TRACING
                if(pCur->eEventId == SPEI_RECOGNITION || pCur->eEventId == SPEI_FALSE_RECOGNITION || pCur->eEventId == SPEI_RECOGNITION_ALL)
                {
                    DoTraceMessage(Trace_Verbose, "CpEventSource::Removed event with offset %I64u and Id %u from queue",pCur->ullAudioStreamOffset,pCur->eEventId);
                }
#endif
#endif
                memcpy(pEventArray + ulCopied, pCur, sizeof(T));
                memset((SPEVENTEX*)pCur, 0, sizeof(SPEVENTEX));
                pLastCopied = pCur;
                ulCopied++;
                pCur = pCur->m_pNext;
                ulRemaining--;
            }
            if (ulCopied)
            {
                if (m_FreeList.m_pHead == NULL)
                {
                    m_FreeList.m_pTail = pLastCopied;
                }
                pLastCopied->m_pNext = m_FreeList.m_pHead;
                m_FreeList.m_pHead = m_CompletedList.m_pHead;
                m_CompletedList.m_pHead = pCur;
                m_CompletedList.m_cElements -= ulCopied;
                m_FreeList.m_cElements += ulCopied;
            }
            if (ulCopied < ulCount)
            {
                hr = S_FALSE;
            }
            if (pulFetched) 
            {
                *pulFetched = ulCopied;
            }
        }
        m_pParent->Unlock();
        return hr;
    }
    HRESULT _GetInfo(SPEVENTSOURCEINFO *pInfo );
    HRESULT _CompleteEvents( ULONGLONG ullPos = 0xFFFFFFFFFFFFFFFF );
    inline void _MoveAllToFreeList(CSpEventList * pList);
    inline void _RemoveAllEvents();
    inline HRESULT _AddEvent(const SPEVENTEX & Event);
    inline HRESULT _AddEvents(const SPEVENT* pEventArray, ULONG ulCount);
    inline HRESULT _AddEvents(const SPEVENTEX* pEventArray, ULONG ulCount);
    inline HRESULT _GetStreamNumber(const ULONGLONG ullAudioOffset, ULONG *pulStreamNum);
  public
    ULONGLONG                   m_ullEventInterest;
    ULONGLONG                   m_ullQueuedInterest;
    ULONG                       m_ulStreamNum;
    CSpEventList                m_PendingList;
    CSpEventList                m_CompletedList;
    CSpEventList                m_FreeList;
    CComPtr<ISpNotifySink>      m_cpNotifySink;
    CComPtr<ISpNotifyTranslator> m_cpEventTranslator;
    CComObjectRootEx<CComMultiThreadModel> * m_pParent;
    CComAutoCriticalSection     m_NotifyObjChangeCrit;
  private
    bool                        m_fSortEvents;
};
inline HRESULT CSpEventSource::_SetNotifySink(ISpNotifySink * pNotifySink)
{
    if (SP_IS_BAD_OPTIONAL_INTERFACE_PTR(pNotifySink))
    {
        return E_INVALIDARG;
    }
    else
    {
        m_pParent->Lock();
        m_NotifyObjChangeCrit.Lock();
        m_cpEventTranslator.Release();
        m_cpNotifySink = pNotifySink;
        if (m_cpNotifySink && m_CompletedList.GetHead())
        {
            m_cpNotifySink->Notify();
        }
        m_NotifyObjChangeCrit.Unlock();
        m_pParent->Unlock();
        return S_OK;
    }
}
inline HRESULT CSpEventSource::_SetNotifyWindowMessage(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    HRESULT hr = S_OK;
    CComPtr<ISpNotifyTranslator> cpTranslator;
    hr = cpTranslator.CoCreateInstance(CLSID_SpNotifyTranslator);
    if (SUCCEEDED(hr))
    {
        hr = cpTranslator->InitWindowMessage(hWnd, Msg, wParam, lParam);
    }
    if (SUCCEEDED(hr))
    {
        hr = _SetNotifySink(cpTranslator);
    }
    return hr;
}
inline HRESULT CSpEventSource::_SetNotifyCallbackFunction(SPNOTIFYCALLBACK * pfnCallback, WPARAM wParam, LPARAM lParam)
{
    HRESULT hr = S_OK;
    CComPtr<ISpNotifyTranslator> cpTranslator;
    hr = cpTranslator.CoCreateInstance(CLSID_SpNotifyTranslator);
    if (SUCCEEDED(hr))
    {
        hr = cpTranslator->InitCallback(pfnCallback, wParam, lParam);
    }
    if (SUCCEEDED(hr))
    {
        hr = _SetNotifySink(cpTranslator);
    }
    return hr;
}
inline HRESULT CSpEventSource::_SetNotifyCallbackInterface(ISpNotifyCallback * pSpCallback, WPARAM wParam, LPARAM lParam)
{
    HRESULT hr = S_OK;
    CComPtr<ISpNotifyTranslator> cpTranslator;
    hr = cpTranslator.CoCreateInstance(CLSID_SpNotifyTranslator);
    if (SUCCEEDED(hr))
    {
        hr = cpTranslator->InitSpNotifyCallback(pSpCallback, wParam, lParam);
    }
    if (SUCCEEDED(hr))
    {
        hr = _SetNotifySink(cpTranslator);
    }
    return hr;
}
inline HRESULT CSpEventSource::_SetNotifyWin32Event(void)
{
    HRESULT hr = S_OK;
    CComPtr<ISpNotifyTranslator> cpTranslator;
    hr = cpTranslator.CoCreateInstance(CLSID_SpNotifyTranslator);
    if (SUCCEEDED(hr))
    {
        hr = cpTranslator->InitWin32Event(NULL, TRUE);
    }
    if (SUCCEEDED(hr))
    {
        m_pParent->Lock();
        m_NotifyObjChangeCrit.Lock();
        m_cpEventTranslator = cpTranslator;
        m_cpNotifySink = cpTranslator;
        if (m_cpNotifySink && m_CompletedList.GetHead())
        {
            m_cpNotifySink->Notify();
        }
        m_NotifyObjChangeCrit.Unlock();
        m_pParent->Unlock();
    }
    return hr;
}
inline HRESULT CSpEventSource::_WaitForNotifyEvent(DWORD dwMilliseconds)
{
    HRESULT hr = S_OK;
    m_NotifyObjChangeCrit.Lock();
    if (m_cpEventTranslator)
    {
        hr = m_cpEventTranslator->Wait(dwMilliseconds);
    }
    else
    {
        if (m_cpNotifySink)
        {
            hr = SPERR_ALREADY_INITIALIZED;
        }
        else
        {
            hr = _SetNotifyWin32Event();
            if (SUCCEEDED(hr))
            {
                hr = m_cpEventTranslator->Wait(dwMilliseconds);
            }
        }
    }
    m_NotifyObjChangeCrit.Unlock();
    return hr;
}
inline HANDLE CSpEventSource::_GetNotifyEventHandle()
{
    HANDLE h = NULL;
    m_NotifyObjChangeCrit.Lock();
    if (!m_cpNotifySink)
    {
        _SetNotifyWin32Event();
    }
    if (m_cpEventTranslator)
    {
        h = m_cpEventTranslator->GetEventHandle();
    }
    m_NotifyObjChangeCrit.Unlock();
    return h;
}
inline HRESULT CSpEventSource::_SetInterest( ULONGLONG ullEventInterest, ULONGLONG ullQueuedInterest )
{
    HRESULT hr = S_OK;
    m_pParent->Lock();
    if(ullEventInterest && SPFEI_FLAGCHECK != (ullEventInterest & SPFEI_FLAGCHECK))
    {
        hr = E_INVALIDARG;
    }
    else if(ullQueuedInterest && SPFEI_FLAGCHECK != (ullQueuedInterest & SPFEI_FLAGCHECK))
    {
        hr = E_INVALIDARG;
    }
    else if ((ullQueuedInterest | ullEventInterest) != ullEventInterest)
    {
        hr = E_INVALIDARG;
    }
    else
    {
        m_ullEventInterest = ullEventInterest;
        m_ullQueuedInterest = ullQueuedInterest;
    }
    m_pParent->Unlock();
    return hr;
}
inline HRESULT CSpEventSource::_AddEvents( const SPEVENT* pEventArray, ULONG ulCount )
{
    HRESULT hr = S_OK;
    for( ULONG i = 0; i < ulCount && SUCCEEDED(hr); ++i )
    {
        SPEVENTEX EventEx;
        memcpy(&EventEx, pEventArray + i, sizeof(SPEVENT));
        EventEx.ullAudioTimeOffset = 0;
        hr = _AddEvent(EventEx);
    }
    return hr;
}
inline HRESULT CSpEventSource::_AddEvents( const SPEVENTEX* pEventArray, ULONG ulCount )
{
    HRESULT hr = S_OK;
    for( ULONG i = 0; i < ulCount && SUCCEEDED(hr = _AddEvent(pEventArray[i])); ++i ) {}
    return hr;
}
inline HRESULT CSpEventSource::_AddEvent(const SPEVENTEX & Event)
{
    _ASSERT(Event.eEventId < 64);
    _ASSERT(Event.elParamType == SPET_LPARAM_IS_UNDEFINED ||
                 Event.elParamType == SPET_LPARAM_IS_TOKEN ||
                 Event.elParamType == SPET_LPARAM_IS_OBJECT ||
                 Event.elParamType == SPET_LPARAM_IS_POINTER ||
                 Event.elParamType == SPET_LPARAM_IS_STRING);
#ifdef _DEBUG
    if (Event.eEventId == SPEI_VOICE_CHANGE)
    {
        _ASSERT(Event.elParamType == SPET_LPARAM_IS_TOKEN);
    }
    else if (Event.eEventId == SPEI_RECOGNITION || Event.eEventId == SPEI_FALSE_RECOGNITION || Event.eEventId == SPEI_HYPOTHESIS)
    {
        _ASSERT(Event.elParamType == SPET_LPARAM_IS_OBJECT);
    }
    else if (Event.eEventId ==SPEI_REQUEST_UI || Event.eEventId == SPEI_TTS_BOOKMARK)
    {
        _ASSERT(Event.elParamType == SPET_LPARAM_IS_STRING);
    }
#endif
    if ( (1i64 << Event.eEventId) & m_ullEventInterest )
    {
        CSpEventExNode *pNode = m_FreeList.RemoveHead();
        if (pNode == NULL)
        {
            pNode = new CSpEventExNode();
            if (pNode == NULL)
            {
                return E_OUTOFMEMORY;
            }
        }
        pNode->CopyFrom(&Event);
        if (m_fSortEvents)
        {
            m_PendingList.InsertSorted(pNode);
        }
        else
        {
            m_PendingList.InsertTail(pNode);
        }
    }
    return S_OK;
}
inline HRESULT CSpEventSource::_GetInfo( SPEVENTSOURCEINFO * pInfo )
{
    HRESULT hr = S_OK;
    m_pParent->Lock();    
    if( SP_IS_BAD_WRITE_PTR( pInfo ) )
    {
        hr = E_POINTER;
    }
    else
    {
        pInfo->ulCount = m_CompletedList.GetCount();
        pInfo->ullEventInterest = m_ullEventInterest;
        pInfo->ullQueuedInterest= m_ullQueuedInterest;
    }
    m_pParent->Unlock();
    return hr;
}
inline HRESULT CSpEventSource::_CompleteEvents( ULONGLONG ullPos )
{
    HRESULT hr = S_OK;
    if (m_PendingList.m_pHead && m_PendingList.m_pHead->ullAudioStreamOffset <= ullPos)
    {
        BOOL bNotify = FALSE;
        while (m_PendingList.m_pHead &&
               m_PendingList.m_pHead->ullAudioStreamOffset <= ullPos)
        {
            CSpEventExNode *pNode = m_PendingList.RemoveHead();
            if(pNode->ulStreamNum != m_ulStreamNum)
            {
                m_ulStreamNum = pNode->ulStreamNum;
            }
            if ( (1i64 << pNode->eEventId) & m_ullEventInterest )
            {
                bNotify = TRUE;
                if ( (1i64 << pNode->eEventId) & m_ullQueuedInterest )
                {
                    if (m_fSortEvents)
                    {
                        m_CompletedList.InsertSorted(pNode);
                    }
                    else
                    {
                        m_CompletedList.InsertTail(pNode);
                    }
#ifdef ETW_TRACE_HEADER
#ifdef SOFTWARE_TRACING
                    if(pNode->eEventId == SPEI_RECOGNITION || pNode->eEventId == SPEI_FALSE_RECOGNITION || pNode->eEventId == SPEI_RECOGNITION_ALL)
                    {
                        DoTraceMessage(Trace_Verbose, "CpEventSource::Added reco event with offset %I64u and event id %u to queue",pNode->ullAudioStreamOffset,pNode->eEventId);
                    }
#endif
#endif
                }
                else
                {
                    pNode->Clear();
                    m_FreeList.InsertHead(pNode);
                }
            }
            else
            {
                pNode->Clear();
                m_FreeList.InsertHead(pNode);
            }
        }    
        if (bNotify && m_cpNotifySink)
        {
            hr = m_cpNotifySink->Notify();
        }
    }
    return hr;
};
inline void CSpEventSource::_MoveAllToFreeList(CSpEventList * pList)
{
    CSpEventExNode * pNode;
    while ((pNode = pList->RemoveHead()) != NULL)
    {
        pNode->Clear();
        m_FreeList.InsertHead(pNode);
    }
}
inline void CSpEventSource::_RemoveAllEvents( )
{
    m_pParent->Lock();
    _MoveAllToFreeList(&m_CompletedList);
    _MoveAllToFreeList(&m_PendingList);
    m_pParent->Unlock();
}
inline HRESULT CSpEventSource::_GetStreamNumber(const ULONGLONG ullAudioOffset, ULONG *pulStreamNum)
{
    CSpEventExNode *pNode = m_PendingList.m_pHead;
    *pulStreamNum = m_ulStreamNum;
    for(;pNode && pNode->ullAudioStreamOffset <= ullAudioOffset; pNode = pNode->m_pNext)
    {
        *pulStreamNum = pNode->ulStreamNum;
    }
    return S_OK;
}
#endif
#endif
