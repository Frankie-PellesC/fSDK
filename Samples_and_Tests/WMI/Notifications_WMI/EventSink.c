// EventSink.cpp
#include "eventsink.h"

DEFINE_INTERFACE(IWbemObjectSink,				//Interface type
				 EventSink,						//Local interface name
				 EventSink_QueryInterface,		//Interface functions list ...
				 EventSink_AddRef,
				 EventSink_Release,
				 EventSink_Indicate,
				 EventSink_SetStatus);

IWbemObjectSink STDMETHODCALLTYPE *CreateEventSink(void)
{
	Class_EventSink *p = malloc(sizeof(Class_EventSink));
	if (!p)
		return NULL;	//Failure

	p->m_lRef = 0;
	p->bDone  = FALSE;
	p->lpVtbl = EventSink.lpVtbl;

	return (IWbemObjectSink *)p;
}

void STDMETHODCALLTYPE DestroyEventSink(IWbemObjectSink *p)
{
	//bDone = TRUE;
	free(p);
}

ULONG STDMETHODCALLTYPE EventSink_AddRef(IWbemObjectSink * this)
{
    return InterlockedIncrement(&(IFACE_GET_PRIVATE(this, Class_EventSink, m_lRef)));
}

ULONG STDMETHODCALLTYPE EventSink_Release(IWbemObjectSink * this)
{
    LONG lRef = InterlockedDecrement(&(IFACE_GET_PRIVATE(this, Class_EventSink, m_lRef)));
    if(lRef == 0)
        DestroyEventSink(this);
    return lRef;
}

HRESULT STDMETHODCALLTYPE EventSink_QueryInterface(IWbemObjectSink * this, REFIID riid, void** ppv)
{
    if (IsEqualCLSID(riid, &IID_IUnknown) || IsEqualCLSID(riid, &IID_IWbemObjectSink))
    {
        *ppv = (IWbemObjectSink *) this;
        EventSink_AddRef(this);
        return WBEM_S_NO_ERROR;
    }
    else return E_NOINTERFACE;
}


HRESULT STDMETHODCALLTYPE EventSink_Indicate(IWbemObjectSink * this, long lObjectCount, IWbemClassObject **apObjArray)
{
    for (int i = 0; i < lObjectCount; i++)
    {
        printf("Event occurred\n");
    }

    return WBEM_S_NO_ERROR;
}

HRESULT STDMETHODCALLTYPE EventSink_SetStatus(IWbemObjectSink * this, LONG lFlags, HRESULT hResult, BSTR strParam, IWbemClassObject __RPC_FAR *pObjParam)
{
    if(lFlags == WBEM_STATUS_COMPLETE)
    {
        printf("Call complete. hResult = 0x%X\n", hResult);
    }
    else if(lFlags == WBEM_STATUS_PROGRESS)
    {
        printf("Call in progress.\n");
    }

    return WBEM_S_NO_ERROR;
}
