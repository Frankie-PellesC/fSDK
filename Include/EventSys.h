/*+@@file@@----------------------------------------------------------------*//*!
 \file		EventSys.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 21:14:28 2016
 \date		Modified on Sat Jul  9 21:14:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __eventsys_h__
#define __eventsys_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IEventSystem_FWD_DEFINED__
#define __IEventSystem_FWD_DEFINED__
typedef interface IEventSystem IEventSystem;
#endif
#ifndef __IEventPublisher_FWD_DEFINED__
#define __IEventPublisher_FWD_DEFINED__
typedef interface IEventPublisher IEventPublisher;
#endif
#ifndef __IEventClass_FWD_DEFINED__
#define __IEventClass_FWD_DEFINED__
typedef interface IEventClass IEventClass;
#endif
#ifndef __IEventClass2_FWD_DEFINED__
#define __IEventClass2_FWD_DEFINED__
typedef interface IEventClass2 IEventClass2;
#endif
#ifndef __IEventSubscription_FWD_DEFINED__
#define __IEventSubscription_FWD_DEFINED__
typedef interface IEventSubscription IEventSubscription;
#endif
#ifndef __IFiringControl_FWD_DEFINED__
#define __IFiringControl_FWD_DEFINED__
typedef interface IFiringControl IFiringControl;
#endif
#ifndef __IPublisherFilter_FWD_DEFINED__
#define __IPublisherFilter_FWD_DEFINED__
typedef interface IPublisherFilter IPublisherFilter;
#endif
#ifndef __IMultiInterfacePublisherFilter_FWD_DEFINED__
#define __IMultiInterfacePublisherFilter_FWD_DEFINED__
typedef interface IMultiInterfacePublisherFilter IMultiInterfacePublisherFilter;
#endif
#ifndef __IEventObjectChange_FWD_DEFINED__
#define __IEventObjectChange_FWD_DEFINED__
typedef interface IEventObjectChange IEventObjectChange;
#endif
#ifndef __IEventObjectChange2_FWD_DEFINED__
#define __IEventObjectChange2_FWD_DEFINED__
typedef interface IEventObjectChange2 IEventObjectChange2;
#endif
#ifndef __IEnumEventObject_FWD_DEFINED__
#define __IEnumEventObject_FWD_DEFINED__
typedef interface IEnumEventObject IEnumEventObject;
#endif
#ifndef __IEventObjectCollection_FWD_DEFINED__
#define __IEventObjectCollection_FWD_DEFINED__
typedef interface IEventObjectCollection IEventObjectCollection;
#endif
#ifndef __IEventProperty_FWD_DEFINED__
#define __IEventProperty_FWD_DEFINED__
typedef interface IEventProperty IEventProperty;
#endif
#ifndef __IEventControl_FWD_DEFINED__
#define __IEventControl_FWD_DEFINED__
typedef interface IEventControl IEventControl;
#endif
#ifndef __IMultiInterfaceEventControl_FWD_DEFINED__
#define __IMultiInterfaceEventControl_FWD_DEFINED__
typedef interface IMultiInterfaceEventControl IMultiInterfaceEventControl;
#endif
#ifndef __IDontSupportEventSubscription_FWD_DEFINED__
#define __IDontSupportEventSubscription_FWD_DEFINED__
typedef interface IDontSupportEventSubscription IDontSupportEventSubscription;
#endif
#ifndef __CEventSystem_FWD_DEFINED__
#define __CEventSystem_FWD_DEFINED__
typedef struct CEventSystem CEventSystem;
#endif
#ifndef __CEventPublisher_FWD_DEFINED__
#define __CEventPublisher_FWD_DEFINED__
typedef struct CEventPublisher CEventPublisher;
#endif
#ifndef __CEventClass_FWD_DEFINED__
#define __CEventClass_FWD_DEFINED__
typedef struct CEventClass CEventClass;
#endif
#ifndef __CEventSubscription_FWD_DEFINED__
#define __CEventSubscription_FWD_DEFINED__
typedef struct CEventSubscription CEventSubscription;
#endif
#ifndef __EventObjectChange_FWD_DEFINED__
#define __EventObjectChange_FWD_DEFINED__
typedef struct EventObjectChange EventObjectChange;
#endif
#ifndef __EventObjectChange2_FWD_DEFINED__
#define __EventObjectChange2_FWD_DEFINED__
typedef struct EventObjectChange2 EventObjectChange2;
#endif
#include <oaidl.h>
#include <ocidl.h>
#define PROGID_EventSystem OLESTR("EventSystem.EventSystem")
#define PROGID_EventPublisher OLESTR("EventSystem.EventPublisher")
#define PROGID_EventClass OLESTR("EventSystem.EventClass")
#define PROGID_EventSubscription OLESTR("EventSystem.EventSubscription")
#define PROGID_EventPublisherCollection OLESTR("EventSystem.EventPublisherCollection")
#define PROGID_EventClassCollection OLESTR("EventSystem.EventClassCollection")
#define PROGID_EventSubscriptionCollection OLESTR("EventSystem.EventSubscriptionCollection")
#define PROGID_EventSubsystem OLESTR("EventSystem.EventSubsystem")
#define EVENTSYSTEM_PUBLISHER_ID OLESTR("{d0564c30-9df4-11d1-a281-00c04fca0aa7}")
#define EVENTSYSTEM_SUBSYSTEM_CLSID OLESTR("{503c1fd8-b605-11d2-a92d-006008c60e24}")
extern RPC_IF_HANDLE __MIDL_itf_eventsys_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_eventsys_0000_0000_v0_0_s_ifspec;
#ifndef __IEventSystem_INTERFACE_DEFINED__
#define __IEventSystem_INTERFACE_DEFINED__
extern const IID IID_IEventSystem;
typedef struct IEventSystemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEventSystem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEventSystem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEventSystem * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEventSystem * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEventSystem * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEventSystem * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEventSystem * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Query) (IEventSystem * This, BSTR progID, BSTR queryCriteria, int *errorIndex, IUnknown ** ppInterface);
	HRESULT(STDMETHODCALLTYPE * Store) (IEventSystem * This, BSTR ProgID, IUnknown * pInterface);
	HRESULT(STDMETHODCALLTYPE * Remove) (IEventSystem * This, BSTR progID, BSTR queryCriteria, int *errorIndex);
	HRESULT(STDMETHODCALLTYPE * get_EventObjectChangeEventClassID) (IEventSystem * This, BSTR * pbstrEventClassID);
	HRESULT(STDMETHODCALLTYPE * QueryS) (IEventSystem * This, BSTR progID, BSTR queryCriteria, IUnknown ** ppInterface);
	HRESULT(STDMETHODCALLTYPE * RemoveS) (IEventSystem * This, BSTR progID, BSTR queryCriteria);
	END_INTERFACE
}  IEventSystemVtbl;
interface IEventSystem
{
	CONST_VTBL struct IEventSystemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEventSystem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEventSystem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEventSystem_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEventSystem_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEventSystem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEventSystem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEventSystem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEventSystem_Query(This,progID,queryCriteria,errorIndex,ppInterface)( (This)->lpVtbl -> Query(This,progID,queryCriteria,errorIndex,ppInterface) )
#define IEventSystem_Store(This,ProgID,pInterface)( (This)->lpVtbl -> Store(This,ProgID,pInterface) )
#define IEventSystem_Remove(This,progID,queryCriteria,errorIndex)( (This)->lpVtbl -> Remove(This,progID,queryCriteria,errorIndex) )
#define IEventSystem_get_EventObjectChangeEventClassID(This,pbstrEventClassID)( (This)->lpVtbl -> get_EventObjectChangeEventClassID(This,pbstrEventClassID) )
#define IEventSystem_QueryS(This,progID,queryCriteria,ppInterface)( (This)->lpVtbl -> QueryS(This,progID,queryCriteria,ppInterface) )
#define IEventSystem_RemoveS(This,progID,queryCriteria)( (This)->lpVtbl -> RemoveS(This,progID,queryCriteria) )
#endif
#endif
#ifndef __IEventPublisher_INTERFACE_DEFINED__
#define __IEventPublisher_INTERFACE_DEFINED__
extern const IID IID_IEventPublisher;
typedef struct IEventPublisherVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEventPublisher * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEventPublisher * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEventPublisher * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEventPublisher * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEventPublisher * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEventPublisher * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEventPublisher * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_PublisherID) (IEventPublisher * This, BSTR * pbstrPublisherID);
	HRESULT(STDMETHODCALLTYPE * put_PublisherID) (IEventPublisher * This, BSTR bstrPublisherID);
	HRESULT(STDMETHODCALLTYPE * get_PublisherName) (IEventPublisher * This, BSTR * pbstrPublisherName);
	HRESULT(STDMETHODCALLTYPE * put_PublisherName) (IEventPublisher * This, BSTR bstrPublisherName);
	HRESULT(STDMETHODCALLTYPE * get_PublisherType) (IEventPublisher * This, BSTR * pbstrPublisherType);
	HRESULT(STDMETHODCALLTYPE * put_PublisherType) (IEventPublisher * This, BSTR bstrPublisherType);
	HRESULT(STDMETHODCALLTYPE * get_OwnerSID) (IEventPublisher * This, BSTR * pbstrOwnerSID);
	HRESULT(STDMETHODCALLTYPE * put_OwnerSID) (IEventPublisher * This, BSTR bstrOwnerSID);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IEventPublisher * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IEventPublisher * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * GetDefaultProperty) (IEventPublisher * This, BSTR bstrPropertyName, VARIANT * propertyValue);
	HRESULT(STDMETHODCALLTYPE * PutDefaultProperty) (IEventPublisher * This, BSTR bstrPropertyName, VARIANT * propertyValue);
	HRESULT(STDMETHODCALLTYPE * RemoveDefaultProperty) (IEventPublisher * This, BSTR bstrPropertyName);
	HRESULT(STDMETHODCALLTYPE * GetDefaultPropertyCollection) (IEventPublisher * This, IEventObjectCollection ** collection);
	END_INTERFACE
}  IEventPublisherVtbl;
interface IEventPublisher
{
	CONST_VTBL struct IEventPublisherVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEventPublisher_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEventPublisher_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEventPublisher_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEventPublisher_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEventPublisher_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEventPublisher_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEventPublisher_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEventPublisher_get_PublisherID(This,pbstrPublisherID)( (This)->lpVtbl -> get_PublisherID(This,pbstrPublisherID) )
#define IEventPublisher_put_PublisherID(This,bstrPublisherID)( (This)->lpVtbl -> put_PublisherID(This,bstrPublisherID) )
#define IEventPublisher_get_PublisherName(This,pbstrPublisherName)( (This)->lpVtbl -> get_PublisherName(This,pbstrPublisherName) )
#define IEventPublisher_put_PublisherName(This,bstrPublisherName)( (This)->lpVtbl -> put_PublisherName(This,bstrPublisherName) )
#define IEventPublisher_get_PublisherType(This,pbstrPublisherType)( (This)->lpVtbl -> get_PublisherType(This,pbstrPublisherType) )
#define IEventPublisher_put_PublisherType(This,bstrPublisherType)( (This)->lpVtbl -> put_PublisherType(This,bstrPublisherType) )
#define IEventPublisher_get_OwnerSID(This,pbstrOwnerSID)( (This)->lpVtbl -> get_OwnerSID(This,pbstrOwnerSID) )
#define IEventPublisher_put_OwnerSID(This,bstrOwnerSID)( (This)->lpVtbl -> put_OwnerSID(This,bstrOwnerSID) )
#define IEventPublisher_get_Description(This,pbstrDescription)( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IEventPublisher_put_Description(This,bstrDescription)( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IEventPublisher_GetDefaultProperty(This,bstrPropertyName,propertyValue)( (This)->lpVtbl -> GetDefaultProperty(This,bstrPropertyName,propertyValue) )
#define IEventPublisher_PutDefaultProperty(This,bstrPropertyName,propertyValue)( (This)->lpVtbl -> PutDefaultProperty(This,bstrPropertyName,propertyValue) )
#define IEventPublisher_RemoveDefaultProperty(This,bstrPropertyName)( (This)->lpVtbl -> RemoveDefaultProperty(This,bstrPropertyName) )
#define IEventPublisher_GetDefaultPropertyCollection(This,collection)( (This)->lpVtbl -> GetDefaultPropertyCollection(This,collection) )
#endif
#endif
#ifndef __IEventClass_INTERFACE_DEFINED__
#define __IEventClass_INTERFACE_DEFINED__
extern const IID IID_IEventClass;
typedef struct IEventClassVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEventClass * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEventClass * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEventClass * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEventClass * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEventClass * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEventClass * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEventClass * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_EventClassID) (IEventClass * This, BSTR * pbstrEventClassID);
	HRESULT(STDMETHODCALLTYPE * put_EventClassID) (IEventClass * This, BSTR bstrEventClassID);
	HRESULT(STDMETHODCALLTYPE * get_EventClassName) (IEventClass * This, BSTR * pbstrEventClassName);
	HRESULT(STDMETHODCALLTYPE * put_EventClassName) (IEventClass * This, BSTR bstrEventClassName);
	HRESULT(STDMETHODCALLTYPE * get_OwnerSID) (IEventClass * This, BSTR * pbstrOwnerSID);
	HRESULT(STDMETHODCALLTYPE * put_OwnerSID) (IEventClass * This, BSTR bstrOwnerSID);
	HRESULT(STDMETHODCALLTYPE * get_FiringInterfaceID) (IEventClass * This, BSTR * pbstrFiringInterfaceID);
	HRESULT(STDMETHODCALLTYPE * put_FiringInterfaceID) (IEventClass * This, BSTR bstrFiringInterfaceID);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IEventClass * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IEventClass * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_CustomConfigCLSID) (IEventClass * This, BSTR * pbstrCustomConfigCLSID);
	HRESULT(STDMETHODCALLTYPE * put_CustomConfigCLSID) (IEventClass * This, BSTR bstrCustomConfigCLSID);
	HRESULT(STDMETHODCALLTYPE * get_TypeLib) (IEventClass * This, BSTR * pbstrTypeLib);
	HRESULT(STDMETHODCALLTYPE * put_TypeLib) (IEventClass * This, BSTR bstrTypeLib);
	END_INTERFACE
}  IEventClassVtbl;
interface IEventClass
{
	CONST_VTBL struct IEventClassVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEventClass_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEventClass_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEventClass_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEventClass_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEventClass_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEventClass_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEventClass_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEventClass_get_EventClassID(This,pbstrEventClassID)( (This)->lpVtbl -> get_EventClassID(This,pbstrEventClassID) )
#define IEventClass_put_EventClassID(This,bstrEventClassID)( (This)->lpVtbl -> put_EventClassID(This,bstrEventClassID) )
#define IEventClass_get_EventClassName(This,pbstrEventClassName)( (This)->lpVtbl -> get_EventClassName(This,pbstrEventClassName) )
#define IEventClass_put_EventClassName(This,bstrEventClassName)( (This)->lpVtbl -> put_EventClassName(This,bstrEventClassName) )
#define IEventClass_get_OwnerSID(This,pbstrOwnerSID)( (This)->lpVtbl -> get_OwnerSID(This,pbstrOwnerSID) )
#define IEventClass_put_OwnerSID(This,bstrOwnerSID)( (This)->lpVtbl -> put_OwnerSID(This,bstrOwnerSID) )
#define IEventClass_get_FiringInterfaceID(This,pbstrFiringInterfaceID)( (This)->lpVtbl -> get_FiringInterfaceID(This,pbstrFiringInterfaceID) )
#define IEventClass_put_FiringInterfaceID(This,bstrFiringInterfaceID)( (This)->lpVtbl -> put_FiringInterfaceID(This,bstrFiringInterfaceID) )
#define IEventClass_get_Description(This,pbstrDescription)( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IEventClass_put_Description(This,bstrDescription)( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IEventClass_get_CustomConfigCLSID(This,pbstrCustomConfigCLSID)( (This)->lpVtbl -> get_CustomConfigCLSID(This,pbstrCustomConfigCLSID) )
#define IEventClass_put_CustomConfigCLSID(This,bstrCustomConfigCLSID)( (This)->lpVtbl -> put_CustomConfigCLSID(This,bstrCustomConfigCLSID) )
#define IEventClass_get_TypeLib(This,pbstrTypeLib)( (This)->lpVtbl -> get_TypeLib(This,pbstrTypeLib) )
#define IEventClass_put_TypeLib(This,bstrTypeLib)( (This)->lpVtbl -> put_TypeLib(This,bstrTypeLib) )
#endif
#endif
#ifndef __IEventClass2_INTERFACE_DEFINED__
#define __IEventClass2_INTERFACE_DEFINED__
extern const IID IID_IEventClass2;
typedef struct IEventClass2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEventClass2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEventClass2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEventClass2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEventClass2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEventClass2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEventClass2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEventClass2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_EventClassID) (IEventClass2 * This, BSTR * pbstrEventClassID);
	HRESULT(STDMETHODCALLTYPE * put_EventClassID) (IEventClass2 * This, BSTR bstrEventClassID);
	HRESULT(STDMETHODCALLTYPE * get_EventClassName) (IEventClass2 * This, BSTR * pbstrEventClassName);
	HRESULT(STDMETHODCALLTYPE * put_EventClassName) (IEventClass2 * This, BSTR bstrEventClassName);
	HRESULT(STDMETHODCALLTYPE * get_OwnerSID) (IEventClass2 * This, BSTR * pbstrOwnerSID);
	HRESULT(STDMETHODCALLTYPE * put_OwnerSID) (IEventClass2 * This, BSTR bstrOwnerSID);
	HRESULT(STDMETHODCALLTYPE * get_FiringInterfaceID) (IEventClass2 * This, BSTR * pbstrFiringInterfaceID);
	HRESULT(STDMETHODCALLTYPE * put_FiringInterfaceID) (IEventClass2 * This, BSTR bstrFiringInterfaceID);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IEventClass2 * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IEventClass2 * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_CustomConfigCLSID) (IEventClass2 * This, BSTR * pbstrCustomConfigCLSID);
	HRESULT(STDMETHODCALLTYPE * put_CustomConfigCLSID) (IEventClass2 * This, BSTR bstrCustomConfigCLSID);
	HRESULT(STDMETHODCALLTYPE * get_TypeLib) (IEventClass2 * This, BSTR * pbstrTypeLib);
	HRESULT(STDMETHODCALLTYPE * put_TypeLib) (IEventClass2 * This, BSTR bstrTypeLib);
	HRESULT(STDMETHODCALLTYPE * get_PublisherID) (IEventClass2 * This, BSTR * pbstrPublisherID);
	HRESULT(STDMETHODCALLTYPE * put_PublisherID) (IEventClass2 * This, BSTR bstrPublisherID);
	HRESULT(STDMETHODCALLTYPE * get_MultiInterfacePublisherFilterCLSID) (IEventClass2 * This, BSTR * pbstrPubFilCLSID);
	HRESULT(STDMETHODCALLTYPE * put_MultiInterfacePublisherFilterCLSID) (IEventClass2 * This, BSTR bstrPubFilCLSID);
	HRESULT(STDMETHODCALLTYPE * get_AllowInprocActivation) (IEventClass2 * This, BOOL * pfAllowInprocActivation);
	HRESULT(STDMETHODCALLTYPE * put_AllowInprocActivation) (IEventClass2 * This, BOOL fAllowInprocActivation);
	HRESULT(STDMETHODCALLTYPE * get_FireInParallel) (IEventClass2 * This, BOOL * pfFireInParallel);
	HRESULT(STDMETHODCALLTYPE * put_FireInParallel) (IEventClass2 * This, BOOL fFireInParallel);
	END_INTERFACE
}  IEventClass2Vtbl;
interface IEventClass2
{
	CONST_VTBL struct IEventClass2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEventClass2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEventClass2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEventClass2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEventClass2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEventClass2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEventClass2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEventClass2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEventClass2_get_EventClassID(This,pbstrEventClassID)( (This)->lpVtbl -> get_EventClassID(This,pbstrEventClassID) )
#define IEventClass2_put_EventClassID(This,bstrEventClassID)( (This)->lpVtbl -> put_EventClassID(This,bstrEventClassID) )
#define IEventClass2_get_EventClassName(This,pbstrEventClassName)( (This)->lpVtbl -> get_EventClassName(This,pbstrEventClassName) )
#define IEventClass2_put_EventClassName(This,bstrEventClassName)( (This)->lpVtbl -> put_EventClassName(This,bstrEventClassName) )
#define IEventClass2_get_OwnerSID(This,pbstrOwnerSID)( (This)->lpVtbl -> get_OwnerSID(This,pbstrOwnerSID) )
#define IEventClass2_put_OwnerSID(This,bstrOwnerSID)( (This)->lpVtbl -> put_OwnerSID(This,bstrOwnerSID) )
#define IEventClass2_get_FiringInterfaceID(This,pbstrFiringInterfaceID)( (This)->lpVtbl -> get_FiringInterfaceID(This,pbstrFiringInterfaceID) )
#define IEventClass2_put_FiringInterfaceID(This,bstrFiringInterfaceID)( (This)->lpVtbl -> put_FiringInterfaceID(This,bstrFiringInterfaceID) )
#define IEventClass2_get_Description(This,pbstrDescription)( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IEventClass2_put_Description(This,bstrDescription)( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IEventClass2_get_CustomConfigCLSID(This,pbstrCustomConfigCLSID)( (This)->lpVtbl -> get_CustomConfigCLSID(This,pbstrCustomConfigCLSID) )
#define IEventClass2_put_CustomConfigCLSID(This,bstrCustomConfigCLSID)( (This)->lpVtbl -> put_CustomConfigCLSID(This,bstrCustomConfigCLSID) )
#define IEventClass2_get_TypeLib(This,pbstrTypeLib)( (This)->lpVtbl -> get_TypeLib(This,pbstrTypeLib) )
#define IEventClass2_put_TypeLib(This,bstrTypeLib)( (This)->lpVtbl -> put_TypeLib(This,bstrTypeLib) )
#define IEventClass2_get_PublisherID(This,pbstrPublisherID)( (This)->lpVtbl -> get_PublisherID(This,pbstrPublisherID) )
#define IEventClass2_put_PublisherID(This,bstrPublisherID)( (This)->lpVtbl -> put_PublisherID(This,bstrPublisherID) )
#define IEventClass2_get_MultiInterfacePublisherFilterCLSID(This,pbstrPubFilCLSID)( (This)->lpVtbl -> get_MultiInterfacePublisherFilterCLSID(This,pbstrPubFilCLSID) )
#define IEventClass2_put_MultiInterfacePublisherFilterCLSID(This,bstrPubFilCLSID)( (This)->lpVtbl -> put_MultiInterfacePublisherFilterCLSID(This,bstrPubFilCLSID) )
#define IEventClass2_get_AllowInprocActivation(This,pfAllowInprocActivation)( (This)->lpVtbl -> get_AllowInprocActivation(This,pfAllowInprocActivation) )
#define IEventClass2_put_AllowInprocActivation(This,fAllowInprocActivation)( (This)->lpVtbl -> put_AllowInprocActivation(This,fAllowInprocActivation) )
#define IEventClass2_get_FireInParallel(This,pfFireInParallel)( (This)->lpVtbl -> get_FireInParallel(This,pfFireInParallel) )
#define IEventClass2_put_FireInParallel(This,fFireInParallel)( (This)->lpVtbl -> put_FireInParallel(This,fFireInParallel) )
#endif
#endif
#ifndef __IEventSubscription_INTERFACE_DEFINED__
#define __IEventSubscription_INTERFACE_DEFINED__
extern const IID IID_IEventSubscription;
typedef struct IEventSubscriptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEventSubscription * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEventSubscription * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEventSubscription * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEventSubscription * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEventSubscription * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEventSubscription * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEventSubscription * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_SubscriptionID) (IEventSubscription * This, BSTR * pbstrSubscriptionID);
	HRESULT(STDMETHODCALLTYPE * put_SubscriptionID) (IEventSubscription * This, BSTR bstrSubscriptionID);
	HRESULT(STDMETHODCALLTYPE * get_SubscriptionName) (IEventSubscription * This, BSTR * pbstrSubscriptionName);
	HRESULT(STDMETHODCALLTYPE * put_SubscriptionName) (IEventSubscription * This, BSTR bstrSubscriptionName);
	HRESULT(STDMETHODCALLTYPE * get_PublisherID) (IEventSubscription * This, BSTR * pbstrPublisherID);
	HRESULT(STDMETHODCALLTYPE * put_PublisherID) (IEventSubscription * This, BSTR bstrPublisherID);
	HRESULT(STDMETHODCALLTYPE * get_EventClassID) (IEventSubscription * This, BSTR * pbstrEventClassID);
	HRESULT(STDMETHODCALLTYPE * put_EventClassID) (IEventSubscription * This, BSTR bstrEventClassID);
	HRESULT(STDMETHODCALLTYPE * get_MethodName) (IEventSubscription * This, BSTR * pbstrMethodName);
	HRESULT(STDMETHODCALLTYPE * put_MethodName) (IEventSubscription * This, BSTR bstrMethodName);
	HRESULT(STDMETHODCALLTYPE * get_SubscriberCLSID) (IEventSubscription * This, BSTR * pbstrSubscriberCLSID);
	HRESULT(STDMETHODCALLTYPE * put_SubscriberCLSID) (IEventSubscription * This, BSTR bstrSubscriberCLSID);
	HRESULT(STDMETHODCALLTYPE * get_SubscriberInterface) (IEventSubscription * This, IUnknown ** ppSubscriberInterface);
	HRESULT(STDMETHODCALLTYPE * put_SubscriberInterface) (IEventSubscription * This, IUnknown * pSubscriberInterface);
	HRESULT(STDMETHODCALLTYPE * get_PerUser) (IEventSubscription * This, BOOL * pfPerUser);
	HRESULT(STDMETHODCALLTYPE * put_PerUser) (IEventSubscription * This, BOOL fPerUser);
	HRESULT(STDMETHODCALLTYPE * get_OwnerSID) (IEventSubscription * This, BSTR * pbstrOwnerSID);
	HRESULT(STDMETHODCALLTYPE * put_OwnerSID) (IEventSubscription * This, BSTR bstrOwnerSID);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IEventSubscription * This, BOOL * pfEnabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IEventSubscription * This, BOOL fEnabled);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IEventSubscription * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IEventSubscription * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_MachineName) (IEventSubscription * This, BSTR * pbstrMachineName);
	HRESULT(STDMETHODCALLTYPE * put_MachineName) (IEventSubscription * This, BSTR bstrMachineName);
	HRESULT(STDMETHODCALLTYPE * GetPublisherProperty) (IEventSubscription * This, BSTR bstrPropertyName, VARIANT * propertyValue);
	HRESULT(STDMETHODCALLTYPE * PutPublisherProperty) (IEventSubscription * This, BSTR bstrPropertyName, VARIANT * propertyValue);
	HRESULT(STDMETHODCALLTYPE * RemovePublisherProperty) (IEventSubscription * This, BSTR bstrPropertyName);
	HRESULT(STDMETHODCALLTYPE * GetPublisherPropertyCollection) (IEventSubscription * This, IEventObjectCollection ** collection);
	HRESULT(STDMETHODCALLTYPE * GetSubscriberProperty) (IEventSubscription * This, BSTR bstrPropertyName, VARIANT * propertyValue);
	HRESULT(STDMETHODCALLTYPE * PutSubscriberProperty) (IEventSubscription * This, BSTR bstrPropertyName, VARIANT * propertyValue);
	HRESULT(STDMETHODCALLTYPE * RemoveSubscriberProperty) (IEventSubscription * This, BSTR bstrPropertyName);
	HRESULT(STDMETHODCALLTYPE * GetSubscriberPropertyCollection) (IEventSubscription * This, IEventObjectCollection ** collection);
	HRESULT(STDMETHODCALLTYPE * get_InterfaceID) (IEventSubscription * This, BSTR * pbstrInterfaceID);
	HRESULT(STDMETHODCALLTYPE * put_InterfaceID) (IEventSubscription * This, BSTR bstrInterfaceID);
	END_INTERFACE
}  IEventSubscriptionVtbl;
interface IEventSubscription
{
	CONST_VTBL struct IEventSubscriptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEventSubscription_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEventSubscription_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEventSubscription_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEventSubscription_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEventSubscription_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEventSubscription_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEventSubscription_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEventSubscription_get_SubscriptionID(This,pbstrSubscriptionID)( (This)->lpVtbl -> get_SubscriptionID(This,pbstrSubscriptionID) )
#define IEventSubscription_put_SubscriptionID(This,bstrSubscriptionID)( (This)->lpVtbl -> put_SubscriptionID(This,bstrSubscriptionID) )
#define IEventSubscription_get_SubscriptionName(This,pbstrSubscriptionName)( (This)->lpVtbl -> get_SubscriptionName(This,pbstrSubscriptionName) )
#define IEventSubscription_put_SubscriptionName(This,bstrSubscriptionName)( (This)->lpVtbl -> put_SubscriptionName(This,bstrSubscriptionName) )
#define IEventSubscription_get_PublisherID(This,pbstrPublisherID)( (This)->lpVtbl -> get_PublisherID(This,pbstrPublisherID) )
#define IEventSubscription_put_PublisherID(This,bstrPublisherID)( (This)->lpVtbl -> put_PublisherID(This,bstrPublisherID) )
#define IEventSubscription_get_EventClassID(This,pbstrEventClassID)( (This)->lpVtbl -> get_EventClassID(This,pbstrEventClassID) )
#define IEventSubscription_put_EventClassID(This,bstrEventClassID)( (This)->lpVtbl -> put_EventClassID(This,bstrEventClassID) )
#define IEventSubscription_get_MethodName(This,pbstrMethodName)( (This)->lpVtbl -> get_MethodName(This,pbstrMethodName) )
#define IEventSubscription_put_MethodName(This,bstrMethodName)( (This)->lpVtbl -> put_MethodName(This,bstrMethodName) )
#define IEventSubscription_get_SubscriberCLSID(This,pbstrSubscriberCLSID)( (This)->lpVtbl -> get_SubscriberCLSID(This,pbstrSubscriberCLSID) )
#define IEventSubscription_put_SubscriberCLSID(This,bstrSubscriberCLSID)( (This)->lpVtbl -> put_SubscriberCLSID(This,bstrSubscriberCLSID) )
#define IEventSubscription_get_SubscriberInterface(This,ppSubscriberInterface)( (This)->lpVtbl -> get_SubscriberInterface(This,ppSubscriberInterface) )
#define IEventSubscription_put_SubscriberInterface(This,pSubscriberInterface)( (This)->lpVtbl -> put_SubscriberInterface(This,pSubscriberInterface) )
#define IEventSubscription_get_PerUser(This,pfPerUser)( (This)->lpVtbl -> get_PerUser(This,pfPerUser) )
#define IEventSubscription_put_PerUser(This,fPerUser)( (This)->lpVtbl -> put_PerUser(This,fPerUser) )
#define IEventSubscription_get_OwnerSID(This,pbstrOwnerSID)( (This)->lpVtbl -> get_OwnerSID(This,pbstrOwnerSID) )
#define IEventSubscription_put_OwnerSID(This,bstrOwnerSID)( (This)->lpVtbl -> put_OwnerSID(This,bstrOwnerSID) )
#define IEventSubscription_get_Enabled(This,pfEnabled)( (This)->lpVtbl -> get_Enabled(This,pfEnabled) )
#define IEventSubscription_put_Enabled(This,fEnabled)( (This)->lpVtbl -> put_Enabled(This,fEnabled) )
#define IEventSubscription_get_Description(This,pbstrDescription)( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IEventSubscription_put_Description(This,bstrDescription)( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IEventSubscription_get_MachineName(This,pbstrMachineName)( (This)->lpVtbl -> get_MachineName(This,pbstrMachineName) )
#define IEventSubscription_put_MachineName(This,bstrMachineName)( (This)->lpVtbl -> put_MachineName(This,bstrMachineName) )
#define IEventSubscription_GetPublisherProperty(This,bstrPropertyName,propertyValue)( (This)->lpVtbl -> GetPublisherProperty(This,bstrPropertyName,propertyValue) )
#define IEventSubscription_PutPublisherProperty(This,bstrPropertyName,propertyValue)( (This)->lpVtbl -> PutPublisherProperty(This,bstrPropertyName,propertyValue) )
#define IEventSubscription_RemovePublisherProperty(This,bstrPropertyName)( (This)->lpVtbl -> RemovePublisherProperty(This,bstrPropertyName) )
#define IEventSubscription_GetPublisherPropertyCollection(This,collection)( (This)->lpVtbl -> GetPublisherPropertyCollection(This,collection) )
#define IEventSubscription_GetSubscriberProperty(This,bstrPropertyName,propertyValue)( (This)->lpVtbl -> GetSubscriberProperty(This,bstrPropertyName,propertyValue) )
#define IEventSubscription_PutSubscriberProperty(This,bstrPropertyName,propertyValue)( (This)->lpVtbl -> PutSubscriberProperty(This,bstrPropertyName,propertyValue) )
#define IEventSubscription_RemoveSubscriberProperty(This,bstrPropertyName)( (This)->lpVtbl -> RemoveSubscriberProperty(This,bstrPropertyName) )
#define IEventSubscription_GetSubscriberPropertyCollection(This,collection)( (This)->lpVtbl -> GetSubscriberPropertyCollection(This,collection) )
#define IEventSubscription_get_InterfaceID(This,pbstrInterfaceID)( (This)->lpVtbl -> get_InterfaceID(This,pbstrInterfaceID) )
#define IEventSubscription_put_InterfaceID(This,bstrInterfaceID)( (This)->lpVtbl -> put_InterfaceID(This,bstrInterfaceID) )
#endif
#endif
#ifndef __IFiringControl_INTERFACE_DEFINED__
#define __IFiringControl_INTERFACE_DEFINED__
extern const IID IID_IFiringControl;
typedef struct IFiringControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFiringControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFiringControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFiringControl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFiringControl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFiringControl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFiringControl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFiringControl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * FireSubscription) (IFiringControl * This, IEventSubscription * subscription);
	END_INTERFACE
}  IFiringControlVtbl;
interface IFiringControl
{
	CONST_VTBL struct IFiringControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFiringControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFiringControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFiringControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFiringControl_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFiringControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFiringControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFiringControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFiringControl_FireSubscription(This,subscription)( (This)->lpVtbl -> FireSubscription(This,subscription) )
#endif
#endif
#ifndef __IPublisherFilter_INTERFACE_DEFINED__
#define __IPublisherFilter_INTERFACE_DEFINED__
extern const IID IID_IPublisherFilter;
typedef struct IPublisherFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPublisherFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPublisherFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPublisherFilter * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IPublisherFilter * This, BSTR methodName, IDispatch * dispUserDefined);
	HRESULT(STDMETHODCALLTYPE * PrepareToFire) (IPublisherFilter * This, BSTR methodName, IFiringControl * firingControl);
	END_INTERFACE
}  IPublisherFilterVtbl;
interface IPublisherFilter
{
	CONST_VTBL struct IPublisherFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPublisherFilter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPublisherFilter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPublisherFilter_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPublisherFilter_Initialize(This,methodName,dispUserDefined)( (This)->lpVtbl -> Initialize(This,methodName,dispUserDefined) )
#define IPublisherFilter_PrepareToFire(This,methodName,firingControl)( (This)->lpVtbl -> PrepareToFire(This,methodName,firingControl) )
#endif
#endif
#ifndef __IMultiInterfacePublisherFilter_INTERFACE_DEFINED__
#define __IMultiInterfacePublisherFilter_INTERFACE_DEFINED__
extern const IID IID_IMultiInterfacePublisherFilter;
typedef struct IMultiInterfacePublisherFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMultiInterfacePublisherFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMultiInterfacePublisherFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMultiInterfacePublisherFilter * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IMultiInterfacePublisherFilter * This, IMultiInterfaceEventControl * pEIC);
	HRESULT(STDMETHODCALLTYPE * PrepareToFire) (IMultiInterfacePublisherFilter * This, REFIID iid, BSTR methodName, IFiringControl * firingControl);
	END_INTERFACE
}  IMultiInterfacePublisherFilterVtbl;
interface IMultiInterfacePublisherFilter
{
	CONST_VTBL struct IMultiInterfacePublisherFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMultiInterfacePublisherFilter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMultiInterfacePublisherFilter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMultiInterfacePublisherFilter_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMultiInterfacePublisherFilter_Initialize(This,pEIC)( (This)->lpVtbl -> Initialize(This,pEIC) )
#define IMultiInterfacePublisherFilter_PrepareToFire(This,iid,methodName,firingControl)( (This)->lpVtbl -> PrepareToFire(This,iid,methodName,firingControl) )
#endif
#endif
#ifndef __IEventObjectChange_INTERFACE_DEFINED__
#define __IEventObjectChange_INTERFACE_DEFINED__
typedef enum __MIDL_IEventObjectChange_0001
{
	EOC_NewObject = 0,
	EOC_ModifiedObject = (EOC_NewObject + 1),
	EOC_DeletedObject = (EOC_ModifiedObject + 1)
} EOC_ChangeType;
extern const IID IID_IEventObjectChange;
typedef struct IEventObjectChangeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEventObjectChange * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEventObjectChange * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEventObjectChange * This);
	HRESULT(STDMETHODCALLTYPE * ChangedSubscription) (IEventObjectChange * This, EOC_ChangeType changeType, BSTR bstrSubscriptionID);
	HRESULT(STDMETHODCALLTYPE * ChangedEventClass) (IEventObjectChange * This, EOC_ChangeType changeType, BSTR bstrEventClassID);
	HRESULT(STDMETHODCALLTYPE * ChangedPublisher) (IEventObjectChange * This, EOC_ChangeType changeType, BSTR bstrPublisherID);
	END_INTERFACE
}  IEventObjectChangeVtbl;
interface IEventObjectChange
{
	CONST_VTBL struct IEventObjectChangeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEventObjectChange_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEventObjectChange_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEventObjectChange_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEventObjectChange_ChangedSubscription(This,changeType,bstrSubscriptionID)( (This)->lpVtbl -> ChangedSubscription(This,changeType,bstrSubscriptionID) )
#define IEventObjectChange_ChangedEventClass(This,changeType,bstrEventClassID)( (This)->lpVtbl -> ChangedEventClass(This,changeType,bstrEventClassID) )
#define IEventObjectChange_ChangedPublisher(This,changeType,bstrPublisherID)( (This)->lpVtbl -> ChangedPublisher(This,changeType,bstrPublisherID) )
#endif
#endif
#ifndef _COMEVENTSYSCHANGEINFO_
#define _COMEVENTSYSCHANGEINFO_
typedef struct __MIDL___MIDL_itf_eventsys_0000_0009_0001
{
	DWORD cbSize;
	EOC_ChangeType changeType;
	BSTR objectId;
	BSTR partitionId;
	BSTR applicationId;
	GUID reserved[10];
} COMEVENTSYSCHANGEINFO;
#endif /* _COMEVENTSYSCHANGEINFO_ */
extern RPC_IF_HANDLE __MIDL_itf_eventsys_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_eventsys_0000_0009_v0_0_s_ifspec;
#ifndef __IEventObjectChange2_INTERFACE_DEFINED__
#define __IEventObjectChange2_INTERFACE_DEFINED__
extern const IID IID_IEventObjectChange2;
typedef struct IEventObjectChange2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEventObjectChange2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEventObjectChange2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEventObjectChange2 * This);
	HRESULT(STDMETHODCALLTYPE * ChangedSubscription) (IEventObjectChange2 * This, COMEVENTSYSCHANGEINFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * ChangedEventClass) (IEventObjectChange2 * This, COMEVENTSYSCHANGEINFO * pInfo);
	END_INTERFACE
}  IEventObjectChange2Vtbl;
interface IEventObjectChange2
{
	CONST_VTBL struct IEventObjectChange2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEventObjectChange2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEventObjectChange2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEventObjectChange2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEventObjectChange2_ChangedSubscription(This,pInfo)( (This)->lpVtbl -> ChangedSubscription(This,pInfo) )
#define IEventObjectChange2_ChangedEventClass(This,pInfo)( (This)->lpVtbl -> ChangedEventClass(This,pInfo) )
#endif
#endif
#ifndef __IEnumEventObject_INTERFACE_DEFINED__
#define __IEnumEventObject_INTERFACE_DEFINED__
extern const IID IID_IEnumEventObject;
typedef struct IEnumEventObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumEventObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumEventObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumEventObject * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumEventObject * This, IEnumEventObject ** ppInterface);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumEventObject * This, ULONG cReqElem, IUnknown ** ppInterface, ULONG * cRetElem);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumEventObject * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumEventObject * This, ULONG cSkipElem);
	END_INTERFACE
}  IEnumEventObjectVtbl;
interface IEnumEventObject
{
	CONST_VTBL struct IEnumEventObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumEventObject_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumEventObject_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumEventObject_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumEventObject_Clone(This,ppInterface)( (This)->lpVtbl -> Clone(This,ppInterface) )
#define IEnumEventObject_Next(This,cReqElem,ppInterface,cRetElem)( (This)->lpVtbl -> Next(This,cReqElem,ppInterface,cRetElem) )
#define IEnumEventObject_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumEventObject_Skip(This,cSkipElem)( (This)->lpVtbl -> Skip(This,cSkipElem) )
#endif
#endif
#ifndef __IEventObjectCollection_INTERFACE_DEFINED__
#define __IEventObjectCollection_INTERFACE_DEFINED__
extern const IID IID_IEventObjectCollection;
typedef struct IEventObjectCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEventObjectCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEventObjectCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEventObjectCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEventObjectCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEventObjectCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEventObjectCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEventObjectCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IEventObjectCollection * This, IUnknown ** ppUnkEnum);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IEventObjectCollection * This, BSTR objectID, VARIANT * pItem);
	HRESULT(STDMETHODCALLTYPE * get_NewEnum) (IEventObjectCollection * This, IEnumEventObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IEventObjectCollection * This, long *pCount);
	HRESULT(STDMETHODCALLTYPE * Add) (IEventObjectCollection * This, VARIANT * item, BSTR objectID);
	HRESULT(STDMETHODCALLTYPE * Remove) (IEventObjectCollection * This, BSTR objectID);
	END_INTERFACE
}  IEventObjectCollectionVtbl;
interface IEventObjectCollection
{
	CONST_VTBL struct IEventObjectCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEventObjectCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEventObjectCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEventObjectCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEventObjectCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEventObjectCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEventObjectCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEventObjectCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEventObjectCollection_get__NewEnum(This,ppUnkEnum)( (This)->lpVtbl -> get__NewEnum(This,ppUnkEnum) )
#define IEventObjectCollection_get_Item(This,objectID,pItem)( (This)->lpVtbl -> get_Item(This,objectID,pItem) )
#define IEventObjectCollection_get_NewEnum(This,ppEnum)( (This)->lpVtbl -> get_NewEnum(This,ppEnum) )
#define IEventObjectCollection_get_Count(This,pCount)( (This)->lpVtbl -> get_Count(This,pCount) )
#define IEventObjectCollection_Add(This,item,objectID)( (This)->lpVtbl -> Add(This,item,objectID) )
#define IEventObjectCollection_Remove(This,objectID)( (This)->lpVtbl -> Remove(This,objectID) )
#endif
#endif
#ifndef __IEventProperty_INTERFACE_DEFINED__
#define __IEventProperty_INTERFACE_DEFINED__
extern const IID IID_IEventProperty;
typedef struct IEventPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEventProperty * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEventProperty * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEventProperty * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEventProperty * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEventProperty * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEventProperty * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEventProperty * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IEventProperty * This, BSTR * propertyName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IEventProperty * This, BSTR propertyName);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IEventProperty * This, VARIANT * propertyValue);
	HRESULT(STDMETHODCALLTYPE * put_Value) (IEventProperty * This, VARIANT * propertyValue);
	END_INTERFACE
}  IEventPropertyVtbl;
interface IEventProperty
{
	CONST_VTBL struct IEventPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEventProperty_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEventProperty_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEventProperty_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEventProperty_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEventProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEventProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEventProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEventProperty_get_Name(This,propertyName)( (This)->lpVtbl -> get_Name(This,propertyName) )
#define IEventProperty_put_Name(This,propertyName)( (This)->lpVtbl -> put_Name(This,propertyName) )
#define IEventProperty_get_Value(This,propertyValue)( (This)->lpVtbl -> get_Value(This,propertyValue) )
#define IEventProperty_put_Value(This,propertyValue)( (This)->lpVtbl -> put_Value(This,propertyValue) )
#endif
#endif
#ifndef __IEventControl_INTERFACE_DEFINED__
#define __IEventControl_INTERFACE_DEFINED__
extern const IID IID_IEventControl;
typedef struct IEventControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEventControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEventControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEventControl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IEventControl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IEventControl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IEventControl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEventControl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * SetPublisherFilter) (IEventControl * This, BSTR methodName, IPublisherFilter * pPublisherFilter);
	HRESULT(STDMETHODCALLTYPE * get_AllowInprocActivation) (IEventControl * This, BOOL * pfAllowInprocActivation);
	HRESULT(STDMETHODCALLTYPE * put_AllowInprocActivation) (IEventControl * This, BOOL fAllowInprocActivation);
	HRESULT(STDMETHODCALLTYPE * GetSubscriptions) (IEventControl * This, BSTR methodName, BSTR optionalCriteria, int *optionalErrorIndex, IEventObjectCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * SetDefaultQuery) (IEventControl * This, BSTR methodName, BSTR criteria, int *errorIndex);
	END_INTERFACE
}  IEventControlVtbl;
interface IEventControl
{
	CONST_VTBL struct IEventControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEventControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEventControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEventControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEventControl_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IEventControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IEventControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IEventControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IEventControl_SetPublisherFilter(This,methodName,pPublisherFilter)( (This)->lpVtbl -> SetPublisherFilter(This,methodName,pPublisherFilter) )
#define IEventControl_get_AllowInprocActivation(This,pfAllowInprocActivation)( (This)->lpVtbl -> get_AllowInprocActivation(This,pfAllowInprocActivation) )
#define IEventControl_put_AllowInprocActivation(This,fAllowInprocActivation)( (This)->lpVtbl -> put_AllowInprocActivation(This,fAllowInprocActivation) )
#define IEventControl_GetSubscriptions(This,methodName,optionalCriteria,optionalErrorIndex,ppCollection)( (This)->lpVtbl -> GetSubscriptions(This,methodName,optionalCriteria,optionalErrorIndex,ppCollection) )
#define IEventControl_SetDefaultQuery(This,methodName,criteria,errorIndex)( (This)->lpVtbl -> SetDefaultQuery(This,methodName,criteria,errorIndex) )
#endif
#endif
#ifndef __IMultiInterfaceEventControl_INTERFACE_DEFINED__
#define __IMultiInterfaceEventControl_INTERFACE_DEFINED__
extern const IID IID_IMultiInterfaceEventControl;
typedef struct IMultiInterfaceEventControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMultiInterfaceEventControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMultiInterfaceEventControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMultiInterfaceEventControl * This);
	HRESULT(STDMETHODCALLTYPE * SetMultiInterfacePublisherFilter) (IMultiInterfaceEventControl * This, IMultiInterfacePublisherFilter * classFilter);
	HRESULT(STDMETHODCALLTYPE * GetSubscriptions) (IMultiInterfaceEventControl * This, REFIID eventIID, BSTR bstrMethodName, BSTR optionalCriteria, int *optionalErrorIndex, IEventObjectCollection ** ppCollection);
	HRESULT(STDMETHODCALLTYPE * SetDefaultQuery) (IMultiInterfaceEventControl * This, REFIID eventIID, BSTR bstrMethodName, BSTR bstrCriteria, int *errorIndex);
	HRESULT(STDMETHODCALLTYPE * get_AllowInprocActivation) (IMultiInterfaceEventControl * This, BOOL * pfAllowInprocActivation);
	HRESULT(STDMETHODCALLTYPE * put_AllowInprocActivation) (IMultiInterfaceEventControl * This, BOOL fAllowInprocActivation);
	HRESULT(STDMETHODCALLTYPE * get_FireInParallel) (IMultiInterfaceEventControl * This, BOOL * pfFireInParallel);
	HRESULT(STDMETHODCALLTYPE * put_FireInParallel) (IMultiInterfaceEventControl * This, BOOL fFireInParallel);
	END_INTERFACE
}  IMultiInterfaceEventControlVtbl;
interface IMultiInterfaceEventControl
{
	CONST_VTBL struct IMultiInterfaceEventControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMultiInterfaceEventControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMultiInterfaceEventControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMultiInterfaceEventControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMultiInterfaceEventControl_SetMultiInterfacePublisherFilter(This,classFilter)( (This)->lpVtbl -> SetMultiInterfacePublisherFilter(This,classFilter) )
#define IMultiInterfaceEventControl_GetSubscriptions(This,eventIID,bstrMethodName,optionalCriteria,optionalErrorIndex,ppCollection)( (This)->lpVtbl -> GetSubscriptions(This,eventIID,bstrMethodName,optionalCriteria,optionalErrorIndex,ppCollection) )
#define IMultiInterfaceEventControl_SetDefaultQuery(This,eventIID,bstrMethodName,bstrCriteria,errorIndex)( (This)->lpVtbl -> SetDefaultQuery(This,eventIID,bstrMethodName,bstrCriteria,errorIndex) )
#define IMultiInterfaceEventControl_get_AllowInprocActivation(This,pfAllowInprocActivation)( (This)->lpVtbl -> get_AllowInprocActivation(This,pfAllowInprocActivation) )
#define IMultiInterfaceEventControl_put_AllowInprocActivation(This,fAllowInprocActivation)( (This)->lpVtbl -> put_AllowInprocActivation(This,fAllowInprocActivation) )
#define IMultiInterfaceEventControl_get_FireInParallel(This,pfFireInParallel)( (This)->lpVtbl -> get_FireInParallel(This,pfFireInParallel) )
#define IMultiInterfaceEventControl_put_FireInParallel(This,fFireInParallel)( (This)->lpVtbl -> put_FireInParallel(This,fFireInParallel) )
#endif
#endif
#ifndef __IDontSupportEventSubscription_INTERFACE_DEFINED__
#define __IDontSupportEventSubscription_INTERFACE_DEFINED__
extern const IID IID_IDontSupportEventSubscription;
typedef struct IDontSupportEventSubscriptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDontSupportEventSubscription * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDontSupportEventSubscription * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDontSupportEventSubscription * This);
	END_INTERFACE
}  IDontSupportEventSubscriptionVtbl;
interface IDontSupportEventSubscription
{
	CONST_VTBL struct IDontSupportEventSubscriptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDontSupportEventSubscription_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDontSupportEventSubscription_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDontSupportEventSubscription_Release(This)( (This)->lpVtbl -> Release(This) )
#endif
#endif
#ifndef __DummyEventSystemLib_LIBRARY_DEFINED__
#define __DummyEventSystemLib_LIBRARY_DEFINED__
extern const IID LIBID_DummyEventSystemLib;
extern const CLSID CLSID_CEventSystem;
extern const CLSID CLSID_CEventPublisher;
extern const CLSID CLSID_CEventClass;
extern const CLSID CLSID_CEventSubscription;
extern const CLSID CLSID_EventObjectChange;
extern const CLSID CLSID_EventObjectChange2;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
