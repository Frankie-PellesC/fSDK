/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmsXMLDOMExtensions.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 16:36:22 2016
 \date		Modified on Mon Sep 19 16:36:22 2016
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
#ifndef __wmsxmldomextensions_h__
#define __wmsxmldomextensions_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSActiveStream_FWD_DEFINED__
#define __IWMSActiveStream_FWD_DEFINED__
typedef interface IWMSActiveStream IWMSActiveStream;
#endif
#ifndef __IWMSActiveStreams_FWD_DEFINED__
#define __IWMSActiveStreams_FWD_DEFINED__
typedef interface IWMSActiveStreams IWMSActiveStreams;
#endif
#ifndef __IWMSActiveMedia_FWD_DEFINED__
#define __IWMSActiveMedia_FWD_DEFINED__
typedef interface IWMSActiveMedia IWMSActiveMedia;
#endif
#ifndef __IWMSPlaylist_FWD_DEFINED__
#define __IWMSPlaylist_FWD_DEFINED__
typedef interface IWMSPlaylist IWMSPlaylist;
#endif
#include <oaidl.h>
#include <xmldom.h>
#pragma once
#ifndef __WMS_XML_DOM_EXTENSIONS_IDL__
#define __WMS_XML_DOM_EXTENSIONS_IDL__
#include <WMSDefs.h>
extern RPC_IF_HANDLE __MIDL_itf_wmsxmldomextensions_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsxmldomextensions_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSActiveStream_INTERFACE_DEFINED__
#define __IWMSActiveStream_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("9D6A9BE7-B08C-48a8-9755-ACBC5E79973A")
enum WMS_ACTIVE_STREAM_TYPE
{
	WMS_STREAM_TYPE_VIDEO = 0,
	WMS_STREAM_TYPE_AUDIO = 1,
	WMS_STREAM_TYPE_OTHER = 2
} WMS_ACTIVE_STREAM_TYPE;
extern const IID IID_IWMSActiveStream;
typedef struct IWMSActiveStreamVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSActiveStream *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSActiveStream *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSActiveStream *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSActiveStream *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSActiveStream *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSActiveStream *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSActiveStream *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IWMSActiveStream *This, WMS_ACTIVE_STREAM_TYPE *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWMSActiveStream *This, BSTR *pVal);
	HRESULT(STDMETHODCALLTYPE *get_BitRate) (IWMSActiveStream *This, long *pVal);
	END_INTERFACE
}  IWMSActiveStreamVtbl;
interface IWMSActiveStream
{
	CONST_VTBL struct IWMSActiveStreamVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSActiveStream_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSActiveStream_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSActiveStream_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSActiveStream_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSActiveStream_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSActiveStream_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSActiveStream_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSActiveStream_get_Type(This,pVal) ( (This)->lpVtbl -> get_Type(This,pVal) )
#define IWMSActiveStream_get_Name(This,pVal) ( (This)->lpVtbl -> get_Name(This,pVal) )
#define IWMSActiveStream_get_BitRate(This,pVal) ( (This)->lpVtbl -> get_BitRate(This,pVal) )
#endif
#endif
#ifndef __IWMSActiveStreams_INTERFACE_DEFINED__
#define __IWMSActiveStreams_INTERFACE_DEFINED__
extern const IID IID_IWMSActiveStreams;
typedef struct IWMSActiveStreamsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSActiveStreams *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSActiveStreams *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSActiveStreams *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSActiveStreams *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSActiveStreams *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSActiveStreams *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSActiveStreams *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Item) (IWMSActiveStreams *This, const VARIANT varIndex, IWMSActiveStream **pVal);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IWMSActiveStreams *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_length) (IWMSActiveStreams *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get__NewEnum) (IWMSActiveStreams *This, IUnknown **pVal);
	END_INTERFACE
}  IWMSActiveStreamsVtbl;
interface IWMSActiveStreams
{
	CONST_VTBL struct IWMSActiveStreamsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSActiveStreams_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSActiveStreams_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSActiveStreams_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSActiveStreams_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSActiveStreams_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSActiveStreams_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSActiveStreams_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSActiveStreams_get_Item(This,varIndex,pVal) ( (This)->lpVtbl -> get_Item(This,varIndex,pVal) )
#define IWMSActiveStreams_get_Count(This,pVal) ( (This)->lpVtbl -> get_Count(This,pVal) )
#define IWMSActiveStreams_get_length(This,pVal) ( (This)->lpVtbl -> get_length(This,pVal) )
#define IWMSActiveStreams_get__NewEnum(This,pVal) ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#endif
#endif
#ifndef __IWMSActiveMedia_INTERFACE_DEFINED__
#define __IWMSActiveMedia_INTERFACE_DEFINED__
extern const IID IID_IWMSActiveMedia;
typedef struct IWMSActiveMediaVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSActiveMedia *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSActiveMedia *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSActiveMedia *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSActiveMedia *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSActiveMedia *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSActiveMedia *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSActiveMedia *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Duration) (IWMSActiveMedia *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_TotalPackets) (IWMSActiveMedia *This, long *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Live) (IWMSActiveMedia *This, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *get_Streams) (IWMSActiveMedia *This, IWMSActiveStreams **pVal);
	HRESULT(STDMETHODCALLTYPE *GetProperty) (IWMSActiveMedia *This, BSTR bstrName, BSTR bstrLanguage, BSTR *pProperty);
	END_INTERFACE
}  IWMSActiveMediaVtbl;
interface IWMSActiveMedia
{
	CONST_VTBL struct IWMSActiveMediaVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSActiveMedia_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSActiveMedia_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSActiveMedia_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSActiveMedia_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSActiveMedia_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSActiveMedia_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSActiveMedia_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSActiveMedia_get_Duration(This,pVal) ( (This)->lpVtbl -> get_Duration(This,pVal) )
#define IWMSActiveMedia_get_TotalPackets(This,pVal) ( (This)->lpVtbl -> get_TotalPackets(This,pVal) )
#define IWMSActiveMedia_get_Live(This,pVal) ( (This)->lpVtbl -> get_Live(This,pVal) )
#define IWMSActiveMedia_get_Streams(This,pVal) ( (This)->lpVtbl -> get_Streams(This,pVal) )
#define IWMSActiveMedia_GetProperty(This,bstrName,bstrLanguage,pProperty) ( (This)->lpVtbl -> GetProperty(This,bstrName,bstrLanguage,pProperty) )
#endif
#endif
#ifndef __IWMSPlaylist_INTERFACE_DEFINED__
#define __IWMSPlaylist_INTERFACE_DEFINED__
extern const IID IID_IWMSPlaylist;
typedef struct IWMSPlaylistVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWMSPlaylist *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWMSPlaylist *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWMSPlaylist *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWMSPlaylist *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWMSPlaylist *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWMSPlaylist *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWMSPlaylist *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_nodeName) (IWMSPlaylist *This, BSTR *name);
	HRESULT(STDMETHODCALLTYPE *get_nodeValue) (IWMSPlaylist *This, VARIANT *value);
	HRESULT(STDMETHODCALLTYPE *put_nodeValue) (IWMSPlaylist *This, VARIANT value);
	HRESULT(STDMETHODCALLTYPE *get_nodeType) (IWMSPlaylist *This, DOMNodeType *type);
	HRESULT(STDMETHODCALLTYPE *get_parentNode) (IWMSPlaylist *This, IXMLDOMNode **parent);
	HRESULT(STDMETHODCALLTYPE *get_childNodes) (IWMSPlaylist *This, IXMLDOMNodeList **childList);
	HRESULT(STDMETHODCALLTYPE *get_firstChild) (IWMSPlaylist *This, IXMLDOMNode **firstChild);
	HRESULT(STDMETHODCALLTYPE *get_lastChild) (IWMSPlaylist *This, IXMLDOMNode **lastChild);
	HRESULT(STDMETHODCALLTYPE *get_previousSibling) (IWMSPlaylist *This, IXMLDOMNode **previousSibling);
	HRESULT(STDMETHODCALLTYPE *get_nextSibling) (IWMSPlaylist *This, IXMLDOMNode **nextSibling);
	HRESULT(STDMETHODCALLTYPE *get_attributes) (IWMSPlaylist *This, IXMLDOMNamedNodeMap **attributeMap);
	HRESULT(STDMETHODCALLTYPE *insertBefore) (IWMSPlaylist *This, IXMLDOMNode *newChild, VARIANT refChild, IXMLDOMNode **outNewChild);
	HRESULT(STDMETHODCALLTYPE *replaceChild) (IWMSPlaylist *This, IXMLDOMNode *newChild, IXMLDOMNode *oldChild, IXMLDOMNode **outOldChild);
	HRESULT(STDMETHODCALLTYPE *removeChild) (IWMSPlaylist *This, IXMLDOMNode *childNode, IXMLDOMNode **oldChild);
	HRESULT(STDMETHODCALLTYPE *appendChild) (IWMSPlaylist *This, IXMLDOMNode *newChild, IXMLDOMNode **outNewChild);
	HRESULT(STDMETHODCALLTYPE *hasChildNodes) (IWMSPlaylist *This, VARIANT_BOOL *hasChild);
	HRESULT(STDMETHODCALLTYPE *get_ownerDocument) (IWMSPlaylist *This, IXMLDOMDocument **DOMDocument);
	HRESULT(STDMETHODCALLTYPE *cloneNode) (IWMSPlaylist *This, VARIANT_BOOL deep, IXMLDOMNode **cloneRoot);
	HRESULT(STDMETHODCALLTYPE *get_nodeTypeString) (IWMSPlaylist *This, BSTR *nodeType);
	HRESULT(STDMETHODCALLTYPE *get_text) (IWMSPlaylist *This, BSTR *text);
	HRESULT(STDMETHODCALLTYPE *put_text) (IWMSPlaylist *This, BSTR text);
	HRESULT(STDMETHODCALLTYPE *get_specified) (IWMSPlaylist *This, VARIANT_BOOL *isSpecified);
	HRESULT(STDMETHODCALLTYPE *get_definition) (IWMSPlaylist *This, IXMLDOMNode **definitionNode);
	HRESULT(STDMETHODCALLTYPE *get_nodeTypedValue) (IWMSPlaylist *This, VARIANT *typedValue);
	HRESULT(STDMETHODCALLTYPE *put_nodeTypedValue) (IWMSPlaylist *This, VARIANT typedValue);
	HRESULT(STDMETHODCALLTYPE *get_dataType) (IWMSPlaylist *This, VARIANT *dataTypeName);
	HRESULT(STDMETHODCALLTYPE *put_dataType) (IWMSPlaylist *This, BSTR dataTypeName);
	HRESULT(STDMETHODCALLTYPE *get_xml) (IWMSPlaylist *This, BSTR *xmlString);
	HRESULT(STDMETHODCALLTYPE *transformNode) (IWMSPlaylist *This, IXMLDOMNode *stylesheet, BSTR *xmlString);
	HRESULT(STDMETHODCALLTYPE *selectNodes) (IWMSPlaylist *This, BSTR queryString, IXMLDOMNodeList **resultList);
	HRESULT(STDMETHODCALLTYPE *selectSingleNode) (IWMSPlaylist *This, BSTR queryString, IXMLDOMNode **resultNode);
	HRESULT(STDMETHODCALLTYPE *get_parsed) (IWMSPlaylist *This, VARIANT_BOOL *isParsed);
	HRESULT(STDMETHODCALLTYPE *get_namespaceURI) (IWMSPlaylist *This, BSTR *namespaceURI);
	HRESULT(STDMETHODCALLTYPE *get_prefix) (IWMSPlaylist *This, BSTR *prefixString);
	HRESULT(STDMETHODCALLTYPE *get_baseName) (IWMSPlaylist *This, BSTR *nameString);
	HRESULT(STDMETHODCALLTYPE *transformNodeToObject) (IWMSPlaylist *This, IXMLDOMNode *stylesheet, VARIANT outputObject);
	HRESULT(STDMETHODCALLTYPE *get_doctype) (IWMSPlaylist *This, IXMLDOMDocumentType **documentType);
	HRESULT(STDMETHODCALLTYPE *get_implementation) (IWMSPlaylist *This, IXMLDOMImplementation **impl);
	HRESULT(STDMETHODCALLTYPE *get_documentElement) (IWMSPlaylist *This, IXMLDOMElement **DOMElement);
	HRESULT(STDMETHODCALLTYPE *putref_documentElement) (IWMSPlaylist *This, IXMLDOMElement *DOMElement);
	HRESULT(STDMETHODCALLTYPE *createElement) (IWMSPlaylist *This, BSTR tagName, IXMLDOMElement **element);
	HRESULT(STDMETHODCALLTYPE *createDocumentFragment) (IWMSPlaylist *This, IXMLDOMDocumentFragment **docFrag);
	HRESULT(STDMETHODCALLTYPE *createTextNode) (IWMSPlaylist *This, BSTR data, IXMLDOMText **text);
	HRESULT(STDMETHODCALLTYPE *createComment) (IWMSPlaylist *This, BSTR data, IXMLDOMComment **comment);
	HRESULT(STDMETHODCALLTYPE *createCDATASection) (IWMSPlaylist *This, BSTR data, IXMLDOMCDATASection **cdata);
	HRESULT(STDMETHODCALLTYPE *createProcessingInstruction) (IWMSPlaylist *This, BSTR target, BSTR data, IXMLDOMProcessingInstruction **pi);
	HRESULT(STDMETHODCALLTYPE *createAttribute) (IWMSPlaylist *This, BSTR name, IXMLDOMAttribute **attribute);
	HRESULT(STDMETHODCALLTYPE *createEntityReference) (IWMSPlaylist *This, BSTR name, IXMLDOMEntityReference **entityRef);
	HRESULT(STDMETHODCALLTYPE *getElementsByTagName) (IWMSPlaylist *This, BSTR tagName, IXMLDOMNodeList **resultList);
	HRESULT(STDMETHODCALLTYPE *createNode) (IWMSPlaylist *This, VARIANT Type, BSTR name, BSTR namespaceURI, IXMLDOMNode **node);
	HRESULT(STDMETHODCALLTYPE *nodeFromID) (IWMSPlaylist *This, BSTR idString, IXMLDOMNode **node);
	HRESULT(STDMETHODCALLTYPE *load) (IWMSPlaylist *This, VARIANT xmlSource, VARIANT_BOOL *isSuccessful);
	HRESULT(STDMETHODCALLTYPE *get_readyState) (IWMSPlaylist *This, long *value);
	HRESULT(STDMETHODCALLTYPE *get_parseError) (IWMSPlaylist *This, IXMLDOMParseError **errorObj);
	HRESULT(STDMETHODCALLTYPE *get_url) (IWMSPlaylist *This, BSTR *urlString);
	HRESULT(STDMETHODCALLTYPE *get_async) (IWMSPlaylist *This, VARIANT_BOOL *isAsync);
	HRESULT(STDMETHODCALLTYPE *put_async) (IWMSPlaylist *This, VARIANT_BOOL isAsync);
	HRESULT(STDMETHODCALLTYPE *abort) (IWMSPlaylist *This);
	HRESULT(STDMETHODCALLTYPE *loadXML) (IWMSPlaylist *This, BSTR bstrXML, VARIANT_BOOL *isSuccessful);
	HRESULT(STDMETHODCALLTYPE *save) (IWMSPlaylist *This, VARIANT desination);
	HRESULT(STDMETHODCALLTYPE *get_validateOnParse) (IWMSPlaylist *This, VARIANT_BOOL *isValidating);
	HRESULT(STDMETHODCALLTYPE *put_validateOnParse) (IWMSPlaylist *This, VARIANT_BOOL isValidating);
	HRESULT(STDMETHODCALLTYPE *get_resolveExternals) (IWMSPlaylist *This, VARIANT_BOOL *isResolving);
	HRESULT(STDMETHODCALLTYPE *put_resolveExternals) (IWMSPlaylist *This, VARIANT_BOOL isResolving);
	HRESULT(STDMETHODCALLTYPE *get_preserveWhiteSpace) (IWMSPlaylist *This, VARIANT_BOOL *isPreserving);
	HRESULT(STDMETHODCALLTYPE *put_preserveWhiteSpace) (IWMSPlaylist *This, VARIANT_BOOL isPreserving);
	HRESULT(STDMETHODCALLTYPE *put_onreadystatechange) (IWMSPlaylist *This, VARIANT readystatechangeSink);
	HRESULT(STDMETHODCALLTYPE *put_ondataavailable) (IWMSPlaylist *This, VARIANT ondataavailableSink);
	HRESULT(STDMETHODCALLTYPE *put_ontransformnode) (IWMSPlaylist *This, VARIANT ontransformnodeSink);
	HRESULT(STDMETHODCALLTYPE *get_CurrentPlaylistEntry) (IWMSPlaylist *This, IXMLDOMElement **ppPlaylistEntry);
	HRESULT(STDMETHODCALLTYPE *put_CurrentPlaylistEntry) (IWMSPlaylist *This, IXMLDOMElement *pPlaylistEntry);
	HRESULT(STDMETHODCALLTYPE *get_CallerEntry) (IWMSPlaylist *This, IXMLDOMElement *pPlaylistEntry, IXMLDOMElement **ppCallerPlaylistEntry);
	HRESULT(STDMETHODCALLTYPE *get_IsStreamCued) (IWMSPlaylist *This, IXMLDOMElement *pPlaylistEntry, VARIANT_BOOL *pVal);
	HRESULT(STDMETHODCALLTYPE *get_ElapsedSimpleTime) (IWMSPlaylist *This, long *pSimpleTime);
	HRESULT(STDMETHODCALLTYPE *get_CurrentMediaInformation) (IWMSPlaylist *This, IWMSActiveMedia **ppMediaInfo);
	HRESULT(STDMETHODCALLTYPE *FireEvent) (IWMSPlaylist *This, BSTR bstrEventName);
	HRESULT(STDMETHODCALLTYPE *CueStream) (IWMSPlaylist *This, IXMLDOMElement *pPlaylistEntry);
	HRESULT(STDMETHODCALLTYPE *UncueStream) (IWMSPlaylist *This, IXMLDOMElement *pPlaylistEntry);
	HRESULT(STDMETHODCALLTYPE *get_NestedPlaylist) (IWMSPlaylist *This, IXMLDOMElement *pPlaylistEntry, IWMSPlaylist **ppPlaylist);
	END_INTERFACE
}  IWMSPlaylistVtbl;
interface IWMSPlaylist
{
	CONST_VTBL struct IWMSPlaylistVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSPlaylist_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSPlaylist_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSPlaylist_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSPlaylist_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWMSPlaylist_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWMSPlaylist_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWMSPlaylist_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWMSPlaylist_get_nodeName(This,name) ( (This)->lpVtbl -> get_nodeName(This,name) )
#define IWMSPlaylist_get_nodeValue(This,value) ( (This)->lpVtbl -> get_nodeValue(This,value) )
#define IWMSPlaylist_put_nodeValue(This,value) ( (This)->lpVtbl -> put_nodeValue(This,value) )
#define IWMSPlaylist_get_nodeType(This,type) ( (This)->lpVtbl -> get_nodeType(This,type) )
#define IWMSPlaylist_get_parentNode(This,parent) ( (This)->lpVtbl -> get_parentNode(This,parent) )
#define IWMSPlaylist_get_childNodes(This,childList) ( (This)->lpVtbl -> get_childNodes(This,childList) )
#define IWMSPlaylist_get_firstChild(This,firstChild) ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
#define IWMSPlaylist_get_lastChild(This,lastChild) ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
#define IWMSPlaylist_get_previousSibling(This,previousSibling) ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
#define IWMSPlaylist_get_nextSibling(This,nextSibling) ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
#define IWMSPlaylist_get_attributes(This,attributeMap) ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
#define IWMSPlaylist_insertBefore(This,newChild,refChild,outNewChild) ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
#define IWMSPlaylist_replaceChild(This,newChild,oldChild,outOldChild) ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
#define IWMSPlaylist_removeChild(This,childNode,oldChild) ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
#define IWMSPlaylist_appendChild(This,newChild,outNewChild) ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
#define IWMSPlaylist_hasChildNodes(This,hasChild) ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
#define IWMSPlaylist_get_ownerDocument(This,DOMDocument) ( (This)->lpVtbl -> get_ownerDocument(This,DOMDocument) )
#define IWMSPlaylist_cloneNode(This,deep,cloneRoot) ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
#define IWMSPlaylist_get_nodeTypeString(This,nodeType) ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
#define IWMSPlaylist_get_text(This,text) ( (This)->lpVtbl -> get_text(This,text) )
#define IWMSPlaylist_put_text(This,text) ( (This)->lpVtbl -> put_text(This,text) )
#define IWMSPlaylist_get_specified(This,isSpecified) ( (This)->lpVtbl -> get_specified(This,isSpecified) )
#define IWMSPlaylist_get_definition(This,definitionNode) ( (This)->lpVtbl -> get_definition(This,definitionNode) )
#define IWMSPlaylist_get_nodeTypedValue(This,typedValue) ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
#define IWMSPlaylist_put_nodeTypedValue(This,typedValue) ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
#define IWMSPlaylist_get_dataType(This,dataTypeName) ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
#define IWMSPlaylist_put_dataType(This,dataTypeName) ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
#define IWMSPlaylist_get_xml(This,xmlString) ( (This)->lpVtbl -> get_xml(This,xmlString) )
#define IWMSPlaylist_transformNode(This,stylesheet,xmlString) ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
#define IWMSPlaylist_selectNodes(This,queryString,resultList) ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
#define IWMSPlaylist_selectSingleNode(This,queryString,resultNode) ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
#define IWMSPlaylist_get_parsed(This,isParsed) ( (This)->lpVtbl -> get_parsed(This,isParsed) )
#define IWMSPlaylist_get_namespaceURI(This,namespaceURI) ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
#define IWMSPlaylist_get_prefix(This,prefixString) ( (This)->lpVtbl -> get_prefix(This,prefixString) )
#define IWMSPlaylist_get_baseName(This,nameString) ( (This)->lpVtbl -> get_baseName(This,nameString) )
#define IWMSPlaylist_transformNodeToObject(This,stylesheet,outputObject) ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
#define IWMSPlaylist_get_doctype(This,documentType) ( (This)->lpVtbl -> get_doctype(This,documentType) )
#define IWMSPlaylist_get_implementation(This,impl) ( (This)->lpVtbl -> get_implementation(This,impl) )
#define IWMSPlaylist_get_documentElement(This,DOMElement) ( (This)->lpVtbl -> get_documentElement(This,DOMElement) )
#define IWMSPlaylist_putref_documentElement(This,DOMElement) ( (This)->lpVtbl -> putref_documentElement(This,DOMElement) )
#define IWMSPlaylist_createElement(This,tagName,element) ( (This)->lpVtbl -> createElement(This,tagName,element) )
#define IWMSPlaylist_createDocumentFragment(This,docFrag) ( (This)->lpVtbl -> createDocumentFragment(This,docFrag) )
#define IWMSPlaylist_createTextNode(This,data,text) ( (This)->lpVtbl -> createTextNode(This,data,text) )
#define IWMSPlaylist_createComment(This,data,comment) ( (This)->lpVtbl -> createComment(This,data,comment) )
#define IWMSPlaylist_createCDATASection(This,data,cdata) ( (This)->lpVtbl -> createCDATASection(This,data,cdata) )
#define IWMSPlaylist_createProcessingInstruction(This,target,data,pi) ( (This)->lpVtbl -> createProcessingInstruction(This,target,data,pi) )
#define IWMSPlaylist_createAttribute(This,name,attribute) ( (This)->lpVtbl -> createAttribute(This,name,attribute) )
#define IWMSPlaylist_createEntityReference(This,name,entityRef) ( (This)->lpVtbl -> createEntityReference(This,name,entityRef) )
#define IWMSPlaylist_getElementsByTagName(This,tagName,resultList) ( (This)->lpVtbl -> getElementsByTagName(This,tagName,resultList) )
#define IWMSPlaylist_createNode(This,Type,name,namespaceURI,node) ( (This)->lpVtbl -> createNode(This,Type,name,namespaceURI,node) )
#define IWMSPlaylist_nodeFromID(This,idString,node) ( (This)->lpVtbl -> nodeFromID(This,idString,node) )
#define IWMSPlaylist_load(This,xmlSource,isSuccessful) ( (This)->lpVtbl -> load(This,xmlSource,isSuccessful) )
#define IWMSPlaylist_get_readyState(This,value) ( (This)->lpVtbl -> get_readyState(This,value) )
#define IWMSPlaylist_get_parseError(This,errorObj) ( (This)->lpVtbl -> get_parseError(This,errorObj) )
#define IWMSPlaylist_get_url(This,urlString) ( (This)->lpVtbl -> get_url(This,urlString) )
#define IWMSPlaylist_get_async(This,isAsync) ( (This)->lpVtbl -> get_async(This,isAsync) )
#define IWMSPlaylist_put_async(This,isAsync) ( (This)->lpVtbl -> put_async(This,isAsync) )
#define IWMSPlaylist_abort(This) ( (This)->lpVtbl -> abort(This) )
#define IWMSPlaylist_loadXML(This,bstrXML,isSuccessful) ( (This)->lpVtbl -> loadXML(This,bstrXML,isSuccessful) )
#define IWMSPlaylist_save(This,desination) ( (This)->lpVtbl -> save(This,desination) )
#define IWMSPlaylist_get_validateOnParse(This,isValidating) ( (This)->lpVtbl -> get_validateOnParse(This,isValidating) )
#define IWMSPlaylist_put_validateOnParse(This,isValidating) ( (This)->lpVtbl -> put_validateOnParse(This,isValidating) )
#define IWMSPlaylist_get_resolveExternals(This,isResolving) ( (This)->lpVtbl -> get_resolveExternals(This,isResolving) )
#define IWMSPlaylist_put_resolveExternals(This,isResolving) ( (This)->lpVtbl -> put_resolveExternals(This,isResolving) )
#define IWMSPlaylist_get_preserveWhiteSpace(This,isPreserving) ( (This)->lpVtbl -> get_preserveWhiteSpace(This,isPreserving) )
#define IWMSPlaylist_put_preserveWhiteSpace(This,isPreserving) ( (This)->lpVtbl -> put_preserveWhiteSpace(This,isPreserving) )
#define IWMSPlaylist_put_onreadystatechange(This,readystatechangeSink) ( (This)->lpVtbl -> put_onreadystatechange(This,readystatechangeSink) )
#define IWMSPlaylist_put_ondataavailable(This,ondataavailableSink) ( (This)->lpVtbl -> put_ondataavailable(This,ondataavailableSink) )
#define IWMSPlaylist_put_ontransformnode(This,ontransformnodeSink) ( (This)->lpVtbl -> put_ontransformnode(This,ontransformnodeSink) )
#define IWMSPlaylist_get_CurrentPlaylistEntry(This,ppPlaylistEntry) ( (This)->lpVtbl -> get_CurrentPlaylistEntry(This,ppPlaylistEntry) )
#define IWMSPlaylist_put_CurrentPlaylistEntry(This,pPlaylistEntry) ( (This)->lpVtbl -> put_CurrentPlaylistEntry(This,pPlaylistEntry) )
#define IWMSPlaylist_get_CallerEntry(This,pPlaylistEntry,ppCallerPlaylistEntry) ( (This)->lpVtbl -> get_CallerEntry(This,pPlaylistEntry,ppCallerPlaylistEntry) )
#define IWMSPlaylist_get_IsStreamCued(This,pPlaylistEntry,pVal) ( (This)->lpVtbl -> get_IsStreamCued(This,pPlaylistEntry,pVal) )
#define IWMSPlaylist_get_ElapsedSimpleTime(This,pSimpleTime) ( (This)->lpVtbl -> get_ElapsedSimpleTime(This,pSimpleTime) )
#define IWMSPlaylist_get_CurrentMediaInformation(This,ppMediaInfo) ( (This)->lpVtbl -> get_CurrentMediaInformation(This,ppMediaInfo) )
#define IWMSPlaylist_FireEvent(This,bstrEventName) ( (This)->lpVtbl -> FireEvent(This,bstrEventName) )
#define IWMSPlaylist_CueStream(This,pPlaylistEntry) ( (This)->lpVtbl -> CueStream(This,pPlaylistEntry) )
#define IWMSPlaylist_UncueStream(This,pPlaylistEntry) ( (This)->lpVtbl -> UncueStream(This,pPlaylistEntry) )
#define IWMSPlaylist_get_NestedPlaylist(This,pPlaylistEntry,ppPlaylist) ( (This)->lpVtbl -> get_NestedPlaylist(This,pPlaylistEntry,ppPlaylist) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_wmsxmldomextensions_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsxmldomextensions_0000_0004_v0_0_s_ifspec;
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
