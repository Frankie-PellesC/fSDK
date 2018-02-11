// EventSink.h
#ifndef EVENTSINK_H
#define EVENTSINK_H

#define _WIN32_DCOM
#include <stdio.h>
#include <Wbemidl.h>

#pragma comment(lib, "wbemuuid.lib")

#define DEFINE_INTERFACE(iface, name, ...)	iface name = {.lpVtbl=&((iface##Vtbl){__VA_ARGS__})}
#define GET_IFACE_CLASS(iface)	Class_##iface
#define IFACE_GET_PRIVATE(obj, class, private_member)	(((class *)(obj))->private_member)

IWbemObjectSink STDMETHODCALLTYPE *CreateEventSink(void);
void            STDMETHODCALLTYPE DestroyEventSink(IWbemObjectSink *p);
ULONG   STDMETHODCALLTYPE EventSink_AddRef(IWbemObjectSink * This);
ULONG   STDMETHODCALLTYPE EventSink_Release(IWbemObjectSink * This);
HRESULT STDMETHODCALLTYPE EventSink_QueryInterface(IWbemObjectSink * This, REFIID riid, void** ppv);
HRESULT STDMETHODCALLTYPE EventSink_Indicate(IWbemObjectSink * This, long lObjectCount, IWbemClassObject **apObjArray);
HRESULT STDMETHODCALLTYPE EventSink_SetStatus(IWbemObjectSink * This, LONG lFlags,  HRESULT hResult,  BSTR strParam,  IWbemClassObject __RPC_FAR *pObjParam );

typedef struct
{
	IWbemObjectSink;
    LONG m_lRef;
    BOOL bDone;
} Class_EventSink;

#endif    // end of EventSink.h
