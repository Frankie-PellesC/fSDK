#include <stdio.h>
#include "querysink.h"

DEFINE_INTERFACE(IWbemObjectSink,				//Interface type
				 QuerySink,						//Local interface name
				 QuerySink_QueryInterface,		//Interface functions list ...
				 QuerySink_AddRef,
				 QuerySink_Release,
				 QuerySink_Indicate,
				 QuerySink_SetStatus);

IWbemObjectSink STDMETHODCALLTYPE *CreateQuerySink(void)
{
	Class_QuerySink *p = malloc(sizeof(Class_QuerySink));
	if (!p)
		return NULL;	//Failure

	p->m_lRef = 0;
	p->bDone  = FALSE;
	InitializeCriticalSection(&p->threadLock);
	p->lpVtbl = QuerySink.lpVtbl;

	return (IWbemObjectSink *)p;
}

void STDMETHODCALLTYPE DestroyQuerySink(IWbemObjectSink *p)
{
	DeleteCriticalSection(&(IFACE_GET_PRIVATE(p, Class_QuerySink, threadLock)));
	free(p);
}

ULONG STDMETHODCALLTYPE QuerySink_AddRef(IWbemObjectSink * this)
{
    return InterlockedIncrement(&(IFACE_GET_PRIVATE(this, Class_QuerySink, m_lRef)));
}

ULONG STDMETHODCALLTYPE QuerySink_Release(IWbemObjectSink * this)
{
    LONG lRef = InterlockedDecrement(&(IFACE_GET_PRIVATE(this, Class_QuerySink, m_lRef)));
    if(lRef == 0)
        DestroyQuerySink(this);
    return lRef;
}

HRESULT STDMETHODCALLTYPE QuerySink_QueryInterface(IWbemObjectSink * this, REFIID riid, void** ppv)
{
    if ( IsEqualCLSID(riid, &IID_IUnknown) || IsEqualCLSID(riid, &IID_IWbemObjectSink) )
    {
        *ppv = (IWbemObjectSink *) this;
        QuerySink_AddRef(this);
        return WBEM_S_NO_ERROR;
    }
    else return E_NOINTERFACE;
}


HRESULT STDMETHODCALLTYPE QuerySink_Indicate(IWbemObjectSink * this, long lObjectCount, IWbemClassObject **apObjArray)
{
 HRESULT hres = S_OK;

    for (int i = 0; i < lObjectCount; i++)
    {
        VARIANT varName;
		BSTR bstr = SysAllocString(L"Name");
        hres      = apObjArray[i]->lpVtbl->Get(apObjArray[i], bstr, 0, &varName, 0, 0);
		SysFreeString(bstr);

        if (FAILED(hres))
        {
            printf("Failed to get the data from the query\n Error code = 0x%08x\n", hres);
            return WBEM_E_FAILED;       // Program has failed.
        }

        printf("Name: %ls\n", V_BSTR(&varName));
    }

    return WBEM_S_NO_ERROR;
}

HRESULT STDMETHODCALLTYPE QuerySink_SetStatus(IWbemObjectSink *this, LONG lFlags, HRESULT hResult, BSTR strParam, IWbemClassObject __RPC_FAR *pObjParam)
{
	if (lFlags == WBEM_STATUS_COMPLETE)
	{
		printf("Call complete.\n");

		EnterCriticalSection(&(IFACE_GET_PRIVATE(this, Class_QuerySink, threadLock)));
		IFACE_GET_PRIVATE(this, Class_QuerySink, bDone) = TRUE;
		LeaveCriticalSection(&(IFACE_GET_PRIVATE(this, Class_QuerySink, threadLock)));
	}
	else if (lFlags == WBEM_STATUS_PROGRESS)
	{
		printf("Call in progress.\n");
	}

	return WBEM_S_NO_ERROR;
}


BOOL STDMETHODCALLTYPE QuerySink_IsDone(IWbemObjectSink * this)
{
    BOOL done = TRUE;

 EnterCriticalSection(&(IFACE_GET_PRIVATE(this, Class_QuerySink, threadLock)));
 done = IFACE_GET_PRIVATE(this, Class_QuerySink, bDone);
 LeaveCriticalSection(&(IFACE_GET_PRIVATE(this, Class_QuerySink, threadLock)));

    return done;
}
