// QuerySink.h
#ifndef QUERYSINK_H
#define QUERYSINK_H

#define _WIN32_DCOM
#include <Wbemidl.h>

#pragma comment(lib, "wbemuuid.lib")

#define DEFINE_INTERFACE(iface, name, ...)	iface name = {.lpVtbl=&((iface##Vtbl){__VA_ARGS__})}
#define GET_IFACE_CLASS(iface)	Class_##iface
#define IFACE_GET_PRIVATE(obj, class, private_member)	(((class *)(obj))->private_member)

IWbemObjectSink STDMETHODCALLTYPE *CreateQuerySink(void);
void            STDMETHODCALLTYPE DestroyQuerySink(IWbemObjectSink *p);
ULONG   STDMETHODCALLTYPE QuerySink_AddRef(IWbemObjectSink * This);
ULONG   STDMETHODCALLTYPE QuerySink_Release(IWbemObjectSink * This);
HRESULT STDMETHODCALLTYPE QuerySink_QueryInterface(IWbemObjectSink * This, REFIID riid, void** ppv);
HRESULT STDMETHODCALLTYPE QuerySink_Indicate(IWbemObjectSink * This, long lObjectCount, IWbemClassObject **apObjArray);
HRESULT STDMETHODCALLTYPE QuerySink_SetStatus(IWbemObjectSink * This, LONG lFlags,  HRESULT hResult,  BSTR strParam,  IWbemClassObject __RPC_FAR *pObjParam );
BOOL STDMETHODCALLTYPE QuerySink_IsDone(IWbemObjectSink * This);
typedef struct
{
	IWbemObjectSink;
    LONG m_lRef;
	CRITICAL_SECTION threadLock; // for thread safety
    BOOL bDone;
} Class_QuerySink;

#endif    // end of QuerySink.h
