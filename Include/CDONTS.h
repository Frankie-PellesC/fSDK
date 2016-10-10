/*+@@file@@----------------------------------------------------------------*//*!
 \file		CDONTS.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 23:52:59 2016
 \date		Modified on Sat Jul  2 23:52:59 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __cdonts_h__
#define __cdonts_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __INewMail_FWD_DEFINED__
#define __INewMail_FWD_DEFINED__
typedef interface INewMail INewMail;
#endif
#ifndef __ISession_FWD_DEFINED__
#define __ISession_FWD_DEFINED__
typedef interface ISession ISession;
#endif
#ifndef __Folder_FWD_DEFINED__
#define __Folder_FWD_DEFINED__
typedef interface Folder Folder;
#endif
#ifndef __Messages_FWD_DEFINED__
#define __Messages_FWD_DEFINED__
typedef interface Messages Messages;
#endif
#ifndef __Message_FWD_DEFINED__
#define __Message_FWD_DEFINED__
typedef interface Message Message;
#endif
#ifndef __Recipients_FWD_DEFINED__
#define __Recipients_FWD_DEFINED__
typedef interface Recipients Recipients;
#endif
#ifndef __Recipient_FWD_DEFINED__
#define __Recipient_FWD_DEFINED__
typedef interface Recipient Recipient;
#endif
#ifndef __Attachments_FWD_DEFINED__
#define __Attachments_FWD_DEFINED__
typedef interface Attachments Attachments;
#endif
#ifndef __Attachment_FWD_DEFINED__
#define __Attachment_FWD_DEFINED__
typedef interface Attachment Attachment;
#endif
#ifndef __AddressEntry_FWD_DEFINED__
#define __AddressEntry_FWD_DEFINED__
typedef interface AddressEntry AddressEntry;
#endif
#ifndef __NewMail_FWD_DEFINED__
#define __NewMail_FWD_DEFINED__
typedef struct NewMail NewMail;
#endif
#ifndef __Session_FWD_DEFINED__
#define __Session_FWD_DEFINED__
typedef struct Session Session;
#endif
#ifndef __AddressEntry_FWD_DEFINED__
#define __AddressEntry_FWD_DEFINED__
typedef interface AddressEntry AddressEntry;
#endif
#ifndef __Attachment_FWD_DEFINED__
#define __Attachment_FWD_DEFINED__
typedef interface Attachment Attachment;
#endif
#ifndef __Attachments_FWD_DEFINED__
#define __Attachments_FWD_DEFINED__
typedef interface Attachments Attachments;
#endif
#ifndef __Folder_FWD_DEFINED__
#define __Folder_FWD_DEFINED__
typedef interface Folder Folder;
#endif
#ifndef __Messages_FWD_DEFINED__
#define __Messages_FWD_DEFINED__
typedef interface Messages Messages;
#endif
#ifndef __Message_FWD_DEFINED__
#define __Message_FWD_DEFINED__
typedef interface Message Message;
#endif
#ifndef __Recipient_FWD_DEFINED__
#define __Recipient_FWD_DEFINED__
typedef interface Recipient Recipient;
#endif
#ifndef __Recipients_FWD_DEFINED__
#define __Recipients_FWD_DEFINED__
typedef interface Recipients Recipients;
#endif
#include "oaidl.h"
#include "ocidl.h"
void __RPC_FAR *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void __RPC_FAR *);
typedef enum CdoErrorType
{
	CdoE_CALL_FAILED = 0x80004005,
	CdoE_NOT_ENOUGH_MEMORY = 0x8007000e,
	CdoE_INVALID_PARAMETER = 0x80070057,
	CdoE_INTERFACE_NOT_SUPPORTED = 0x80004002,
	CdoE_NO_ACCESS = 0x80070005,
	CdoE_NO_SUPPORT = 0x80040102,
	CdoE_BAD_CHARWIDTH = 0x80040103,
	CdoE_STRING_TOO_LONG = 0x80040105,
	CdoE_UNKNOWN_FLAGS = 0x80040106,
	CdoE_INVALID_ENTRYID = 0x80040107,
	CdoE_INVALID_OBJECT = 0x80040108,
	CdoE_OBJECT_CHANGED = 0x80040109,
	CdoE_OBJECT_DELETED = 0x8004010a,
	CdoE_BUSY = 0x8004010b,
	CdoE_NOT_ENOUGH_DISK = 0x8004010d,
	CdoE_NOT_ENOUGH_RESOURCES = 0x8004010e,
	CdoE_NOT_FOUND = 0x8004010f,
	CdoE_VERSION = 0x80040110,
	CdoE_LOGON_FAILED = 0x80040111,
	CdoE_SESSION_LIMIT = 0x80040112,
	CdoE_USER_CANCEL = 0x80040113,
	CdoE_UNABLE_TO_ABORT = 0x80040114,
	CdoE_NETWORK_ERROR = 0x80040115,
	CdoE_DISK_ERROR = 0x80040116,
	CdoE_TOO_COMPLEX = 0x80040117,
	CdoE_BAD_COLUMN = 0x80040118,
	CdoE_EXTENDED_ERROR = 0x80040119,
	CdoE_COMPUTED = 0x8004011a,
	CdoE_CORRUPT_DATA = 0x8004011b,
	CdoE_UNCONFIGURED = 0x8004011c,
	CdoE_FAILONEPROVIDER = 0x8004011d,
	CdoE_UNKNOWN_CPID = 0x8004011e,
	CdoE_UNKNOWN_LCID = 0x8004011f,
	CdoE_PASSWORD_CHANGE_REQUIRED = 0x80040120,
	CdoE_PASSWORD_EXPIRED = 0x80040121,
	CdoE_INVALID_WORKSTATION_ACCOUNT = 0x80040122,
	CdoE_INVALID_ACCESS_TIME = 0x80040123,
	CdoE_ACCOUNT_DISABLED = 0x80040124,
	CdoE_END_OF_SESSION = 0x80040200,
	CdoE_UNKNOWN_ENTRYID = 0x80040201,
	CdoE_MISSING_REQUIRED_COLUMN = 0x80040202,
	CdoW_NO_SERVICE = 0x40203,
	CdoE_BAD_VALUE = 0x80040301,
	CdoE_INVALID_TYPE = 0x80040302,
	CdoE_TYPE_NO_SUPPORT = 0x80040303,
	CdoE_UNEXPECTED_TYPE = 0x80040304,
	CdoE_TOO_BIG = 0x80040305,
	CdoE_DECLINE_COPY = 0x80040306,
	CdoE_UNEXPECTED_ID = 0x80040307,
	CdoW_ERRORS_RETURNED = 0x40380,
	CdoE_UNABLE_TO_COMPLETE = 0x80040400,
	CdoE_TIMEOUT = 0x80040401,
	CdoE_TABLE_EMPTY = 0x80040402,
	CdoE_TABLE_TOO_BIG = 0x80040403,
	CdoE_INVALID_BOOKMARK = 0x80040405,
	CdoW_POSITION_CHANGED = 0x40481,
	CdoW_APPROX_COUNT = 0x40482,
	CdoE_WAIT = 0x80040500,
	CdoE_CANCEL = 0x80040501,
	CdoE_NOT_ME = 0x80040502,
	CdoW_CANCEL_MESSAGE = 0x40580,
	CdoE_CORRUPT_STORE = 0x80040600,
	CdoE_NOT_IN_QUEUE = 0x80040601,
	CdoE_NO_SUPPRESS = 0x80040602,
	CdoE_COLLISION = 0x80040604,
	CdoE_NOT_INITIALIZED = 0x80040605,
	CdoE_NON_STANDARD = 0x80040606,
	CdoE_NO_RECIPIENTS = 0x80040607,
	CdoE_SUBMITTED = 0x80040608,
	CdoE_HAS_FOLDERS = 0x80040609,
	CdoE_HAS_MESSAGES = 0x8004060a,
	CdoE_FOLDER_CYCLE = 0x8004060b,
	CdoW_PARTIAL_COMPLETION = 0x40680,
	CdoE_AMBIGUOUS_RECIP = 0x80040700
} CdoErrorType;
#pragma comment(lib,"uuid.lib")
DEFINE_GUID(LIBID_CDONTS, 0x0E064ADD, 0x9D99, 0x11D0, 0xAB, 0xE5, 0x00, 0xAA, 0x00, 0x64, 0xD4, 0x70);
DEFINE_GUID(CLSID_NewMail, 0xAF0EB60E, 0x0775, 0x11D1, 0xA7, 0x7D, 0x00, 0xC0, 0x4F, 0xC2, 0xF5, 0xB3);
DEFINE_GUID(CLSID_Session, 0x0E064AEC, 0x9D99, 0x11D0, 0xAB, 0xE5, 0x00, 0xAA, 0x00, 0x64, 0xD4, 0x70);
DEFINE_GUID(IID_INewMail, 0xAF0EB60D, 0x0775, 0x11D1, 0xA7, 0x7D, 0x00, 0xC0, 0x4F, 0xC2, 0xF5, 0xB3);
DEFINE_GUID(IID_ISession, 0x0E064AEB, 0x9D99, 0x11D0, 0xAB, 0xE5, 0x00, 0xAA, 0x00, 0x64, 0xD4, 0x70);
DEFINE_GUID(IID_Folder, 0x0E064A01, 0x9D99, 0x11D0, 0xAB, 0xE5, 0x00, 0xAA, 0x00, 0x64, 0xD4, 0x70);
DEFINE_GUID(IID_Messages, 0x0E064A02, 0x9D99, 0x11D0, 0xAB, 0xE5, 0x00, 0xAA, 0x00, 0x64, 0xD4, 0x70);
DEFINE_GUID(IID_Message, 0x0E064A03, 0x9D99, 0x11D0, 0xAB, 0xE5, 0x00, 0xAA, 0x00, 0x64, 0xD4, 0x70);
DEFINE_GUID(IID_Recipients, 0x0E064A04, 0x9D99, 0x11D0, 0xAB, 0xE5, 0x00, 0xAA, 0x00, 0x64, 0xD4, 0x70);
DEFINE_GUID(IID_Recipient, 0x0E064A05, 0x9D99, 0x11D0, 0xAB, 0xE5, 0x00, 0xAA, 0x00, 0x64, 0xD4, 0x70);
DEFINE_GUID(IID_Attachments, 0x0E064A06, 0x9D99, 0x11D0, 0xAB, 0xE5, 0x00, 0xAA, 0x00, 0x64, 0xD4, 0x70);
DEFINE_GUID(IID_Attachment, 0x0E064A07, 0x9D99, 0x11D0, 0xAB, 0xE5, 0x00, 0xAA, 0x00, 0x64, 0xD4, 0x70);
DEFINE_GUID(IID_AddressEntry, 0x0E064A08, 0x9D99, 0x11D0, 0xAB, 0xE5, 0x00, 0xAA, 0x00, 0x64, 0xD4, 0x70);
extern RPC_IF_HANDLE __MIDL_itf_actmsg_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_actmsg_0000_v0_0_s_ifspec;
#ifndef __INewMail_INTERFACE_DEFINED__
#define __INewMail_INTERFACE_DEFINED__
extern const IID IID_INewMail;
typedef struct INewMailVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * QueryInterface) (INewMail __RPC_FAR * This, REFIID riid, void __RPC_FAR * __RPC_FAR * ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * AddRef) (INewMail __RPC_FAR * This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR * Release) (INewMail __RPC_FAR * This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfoCount) (INewMail __RPC_FAR * This, UINT __RPC_FAR * pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetTypeInfo) (INewMail __RPC_FAR * This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR * __RPC_FAR * ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * GetIDsOfNames) (INewMail __RPC_FAR * This, REFIID riid, LPOLESTR __RPC_FAR * rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR * rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Invoke) (INewMail __RPC_FAR * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR * pDispParams, VARIANT __RPC_FAR * pVarResult, EXCEPINFO __RPC_FAR * pExcepInfo, UINT __RPC_FAR * puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_Value) (INewMail __RPC_FAR * This, BSTR bstrHeader, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_To) (INewMail __RPC_FAR * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_Cc) (INewMail __RPC_FAR * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_Bcc) (INewMail __RPC_FAR * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_Body) (INewMail __RPC_FAR * This, VARIANT newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_Importance) (INewMail __RPC_FAR * This, long newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_BodyFormat) (INewMail __RPC_FAR * This, long newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_MailFormat) (INewMail __RPC_FAR * This, long newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_Subject) (INewMail __RPC_FAR * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_From) (INewMail __RPC_FAR * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * Send) (INewMail __RPC_FAR * This, VARIANT From, VARIANT To, VARIANT Subject, VARIANT Body, VARIANT Importance);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * AttachFile) (INewMail __RPC_FAR * This, VARIANT Source, VARIANT FileName, VARIANT EncodingMethod);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * AttachURL) (INewMail __RPC_FAR * This, VARIANT Source, VARIANT ContentLocation, VARIANT ContentBase, VARIANT EncodingMethod);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * SetLocaleIDs) (INewMail __RPC_FAR * This, long CodePageID);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_ContentLocation) (INewMail __RPC_FAR * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * put_ContentBase) (INewMail __RPC_FAR * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR * get_Version) (INewMail __RPC_FAR * This, BSTR __RPC_FAR * Version);
	END_INTERFACE
}  INewMailVtbl;
interface INewMail
{
	CONST_VTBL struct INewMailVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define INewMail_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define INewMail_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define INewMail_Release(This)(This)->lpVtbl -> Release(This)
#define INewMail_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define INewMail_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define INewMail_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define INewMail_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define INewMail_put_Value(This,bstrHeader,newVal)(This)->lpVtbl -> put_Value(This,bstrHeader,newVal)
#define INewMail_put_To(This,newVal)(This)->lpVtbl -> put_To(This,newVal)
#define INewMail_put_Cc(This,newVal)(This)->lpVtbl -> put_Cc(This,newVal)
#define INewMail_put_Bcc(This,newVal)(This)->lpVtbl -> put_Bcc(This,newVal)
#define INewMail_put_Body(This,newVal)(This)->lpVtbl -> put_Body(This,newVal)
#define INewMail_put_Importance(This,newVal)(This)->lpVtbl -> put_Importance(This,newVal)
#define INewMail_put_BodyFormat(This,newVal)(This)->lpVtbl -> put_BodyFormat(This,newVal)
#define INewMail_put_MailFormat(This,newVal)(This)->lpVtbl -> put_MailFormat(This,newVal)
#define INewMail_put_Subject(This,newVal)(This)->lpVtbl -> put_Subject(This,newVal)
#define INewMail_put_From(This,newVal)(This)->lpVtbl -> put_From(This,newVal)
#define INewMail_Send(This,From,To,Subject,Body,Importance)(This)->lpVtbl -> Send(This,From,To,Subject,Body,Importance)
#define INewMail_AttachFile(This,Source,FileName,EncodingMethod)(This)->lpVtbl -> AttachFile(This,Source,FileName,EncodingMethod)
#define INewMail_AttachURL(This,Source,ContentLocation,ContentBase,EncodingMethod)(This)->lpVtbl -> AttachURL(This,Source,ContentLocation,ContentBase,EncodingMethod)
#define INewMail_SetLocaleIDs(This,CodePageID)(This)->lpVtbl -> SetLocaleIDs(This,CodePageID)
#define INewMail_put_ContentLocation(This,newVal)(This)->lpVtbl -> put_ContentLocation(This,newVal)
#define INewMail_put_ContentBase(This,newVal)(This)->lpVtbl -> put_ContentBase(This,newVal)
#define INewMail_get_Version(This,Version)(This)->lpVtbl -> get_Version(This,Version)
#endif
HRESULT STDMETHODCALLTYPE INewMail_put_Value_Proxy(INewMail __RPC_FAR *This, BSTR bstrHeader, BSTR newVal);
void __RPC_STUB INewMail_put_Value_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_put_To_Proxy(INewMail __RPC_FAR *This, BSTR newVal);
void __RPC_STUB INewMail_put_To_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_put_Cc_Proxy(INewMail __RPC_FAR *This, BSTR newVal);
void __RPC_STUB INewMail_put_Cc_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_put_Bcc_Proxy(INewMail __RPC_FAR *This, BSTR newVal);
void __RPC_STUB INewMail_put_Bcc_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_put_Body_Proxy(INewMail __RPC_FAR *This, VARIANT newVal);
void __RPC_STUB INewMail_put_Body_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_put_Importance_Proxy(INewMail __RPC_FAR *This, long newVal);
void __RPC_STUB INewMail_put_Importance_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_put_BodyFormat_Proxy(INewMail __RPC_FAR *This, long newVal);
void __RPC_STUB INewMail_put_BodyFormat_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_put_MailFormat_Proxy(INewMail __RPC_FAR *This, long newVal);
void __RPC_STUB INewMail_put_MailFormat_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_put_Subject_Proxy(INewMail __RPC_FAR *This, BSTR newVal);
void __RPC_STUB INewMail_put_Subject_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_put_From_Proxy(INewMail __RPC_FAR *This, BSTR newVal);
void __RPC_STUB INewMail_put_From_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_Send_Proxy(INewMail __RPC_FAR *This, VARIANT From, VARIANT To, VARIANT Subject, VARIANT Body, VARIANT Importance);
void __RPC_STUB INewMail_Send_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_AttachFile_Proxy(INewMail __RPC_FAR *This, VARIANT Source, VARIANT FileName, VARIANT EncodingMethod);
void __RPC_STUB INewMail_AttachFile_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_AttachURL_Proxy(INewMail __RPC_FAR *This, VARIANT Source, VARIANT ContentLocation, VARIANT ContentBase, VARIANT EncodingMethod);
void __RPC_STUB INewMail_AttachURL_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_SetLocaleIDs_Proxy(INewMail __RPC_FAR *This, long CodePageID);
void __RPC_STUB INewMail_SetLocaleIDs_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_put_ContentLocation_Proxy(INewMail __RPC_FAR *This, BSTR newVal);
void __RPC_STUB INewMail_put_ContentLocation_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_put_ContentBase_Proxy(INewMail __RPC_FAR *This, BSTR newVal);
void __RPC_STUB INewMail_put_ContentBase_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE INewMail_get_Version_Proxy(INewMail __RPC_FAR *This, BSTR __RPC_FAR *Version);
void __RPC_STUB INewMail_get_Version_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ISession_INTERFACE_DEFINED__
#define __ISession_INTERFACE_DEFINED__
extern const IID IID_ISession;
typedef struct ISessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (ISession __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (ISession __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (ISession __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (ISession __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (ISession __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (ISession __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (ISession __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Application) (ISession __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Parent) (ISession __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Session) (ISession __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Class) (ISession __RPC_FAR *This, long __RPC_FAR *varClass);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Version) (ISession __RPC_FAR *This, BSTR __RPC_FAR *varVersion);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Name) (ISession __RPC_FAR *This, BSTR __RPC_FAR *varName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Inbox) (ISession __RPC_FAR *This, VARIANT __RPC_FAR *varInbox);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Outbox) (ISession __RPC_FAR *This, VARIANT __RPC_FAR *varOutbox);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_MessageFormat) (ISession __RPC_FAR *This, long __RPC_FAR *pMessageFormat);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_MessageFormat) (ISession __RPC_FAR *This, long varMessageFormat);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *LogonSMTP) (ISession __RPC_FAR *This, VARIANT DisplayName, VARIANT Address);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Logoff) (ISession __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetDefaultFolder) (ISession __RPC_FAR *This, VARIANT Type, VARIANT __RPC_FAR *pvarResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetMessage) (ISession __RPC_FAR *This, VARIANT MessageID, VARIANT StoreID, VARIANT __RPC_FAR *pvarResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *SetLocaleIDs) (ISession __RPC_FAR *This, long CodePageID);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *SetReserved) (ISession __RPC_FAR *This, VARIANT var1, VARIANT var2);
	END_INTERFACE
}  ISessionVtbl;
interface ISession
{
	CONST_VTBL struct ISessionVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define ISession_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define ISession_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define ISession_Release(This)(This)->lpVtbl -> Release(This)
#define ISession_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define ISession_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define ISession_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define ISession_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define ISession_get_Application(This,varApplication)(This)->lpVtbl -> get_Application(This,varApplication)
#define ISession_get_Parent(This,varParent)(This)->lpVtbl -> get_Parent(This,varParent)
#define ISession_get_Session(This,varSession)(This)->lpVtbl -> get_Session(This,varSession)
#define ISession_get_Class(This,varClass)(This)->lpVtbl -> get_Class(This,varClass)
#define ISession_get_Version(This,varVersion)(This)->lpVtbl -> get_Version(This,varVersion)
#define ISession_get_Name(This,varName)(This)->lpVtbl -> get_Name(This,varName)
#define ISession_get_Inbox(This,varInbox)(This)->lpVtbl -> get_Inbox(This,varInbox)
#define ISession_get_Outbox(This,varOutbox)(This)->lpVtbl -> get_Outbox(This,varOutbox)
#define ISession_get_MessageFormat(This,pMessageFormat)(This)->lpVtbl -> get_MessageFormat(This,pMessageFormat)
#define ISession_put_MessageFormat(This,varMessageFormat)(This)->lpVtbl -> put_MessageFormat(This,varMessageFormat)
#define ISession_LogonSMTP(This,DisplayName,Address)(This)->lpVtbl -> LogonSMTP(This,DisplayName,Address)
#define ISession_Logoff(This)(This)->lpVtbl -> Logoff(This)
#define ISession_GetDefaultFolder(This,Type,pvarResult)(This)->lpVtbl -> GetDefaultFolder(This,Type,pvarResult)
#define ISession_GetMessage(This,MessageID,StoreID,pvarResult)(This)->lpVtbl -> GetMessage(This,MessageID,StoreID,pvarResult)
#define ISession_SetLocaleIDs(This,CodePageID)(This)->lpVtbl -> SetLocaleIDs(This,CodePageID)
#define ISession_SetReserved(This,var1,var2)(This)->lpVtbl -> SetReserved(This,var1,var2)
#endif
HRESULT STDMETHODCALLTYPE ISession_get_Application_Proxy(ISession __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
void __RPC_STUB ISession_get_Application_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_get_Parent_Proxy(ISession __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
void __RPC_STUB ISession_get_Parent_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_get_Session_Proxy(ISession __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
void __RPC_STUB ISession_get_Session_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_get_Class_Proxy(ISession __RPC_FAR *This, long __RPC_FAR *varClass);
void __RPC_STUB ISession_get_Class_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_get_Version_Proxy(ISession __RPC_FAR *This, BSTR __RPC_FAR *varVersion);
void __RPC_STUB ISession_get_Version_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_get_Name_Proxy(ISession __RPC_FAR *This, BSTR __RPC_FAR *varName);
void __RPC_STUB ISession_get_Name_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_get_Inbox_Proxy(ISession __RPC_FAR *This, VARIANT __RPC_FAR *varInbox);
void __RPC_STUB ISession_get_Inbox_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_get_Outbox_Proxy(ISession __RPC_FAR *This, VARIANT __RPC_FAR *varOutbox);
void __RPC_STUB ISession_get_Outbox_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_get_MessageFormat_Proxy(ISession __RPC_FAR *This, long __RPC_FAR *pMessageFormat);
void __RPC_STUB ISession_get_MessageFormat_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_put_MessageFormat_Proxy(ISession __RPC_FAR *This, long varMessageFormat);
void __RPC_STUB ISession_put_MessageFormat_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_LogonSMTP_Proxy(ISession __RPC_FAR *This, VARIANT DisplayName, VARIANT Address);
void __RPC_STUB ISession_LogonSMTP_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_Logoff_Proxy(ISession __RPC_FAR *This);
void __RPC_STUB ISession_Logoff_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_GetDefaultFolder_Proxy(ISession __RPC_FAR *This, VARIANT Type, VARIANT __RPC_FAR *pvarResult);
void __RPC_STUB ISession_GetDefaultFolder_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_GetMessage_Proxy(ISession __RPC_FAR *This, VARIANT MessageID, VARIANT StoreID, VARIANT __RPC_FAR *pvarResult);
void __RPC_STUB ISession_GetMessage_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_SetLocaleIDs_Proxy(ISession __RPC_FAR *This, long CodePageID);
void __RPC_STUB ISession_SetLocaleIDs_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE ISession_SetReserved_Proxy(ISession __RPC_FAR *This, VARIANT var1, VARIANT var2);
void __RPC_STUB ISession_SetReserved_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __Folder_INTERFACE_DEFINED__
#define __Folder_INTERFACE_DEFINED__
extern const IID IID_Folder;
typedef struct FolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (Folder __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (Folder __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (Folder __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (Folder __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (Folder __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (Folder __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (Folder __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Application) (Folder __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Parent) (Folder __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Session) (Folder __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Class) (Folder __RPC_FAR *This, long __RPC_FAR *varClass);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Name) (Folder __RPC_FAR *This, BSTR __RPC_FAR *varName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Messages) (Folder __RPC_FAR *This, VARIANT __RPC_FAR *varMessages);
	END_INTERFACE
}  FolderVtbl;
interface Folder
{
	CONST_VTBL struct FolderVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define Folder_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define Folder_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define Folder_Release(This)(This)->lpVtbl -> Release(This)
#define Folder_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define Folder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define Folder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define Folder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define Folder_get_Application(This,varApplication)(This)->lpVtbl -> get_Application(This,varApplication)
#define Folder_get_Parent(This,varParent)(This)->lpVtbl -> get_Parent(This,varParent)
#define Folder_get_Session(This,varSession)(This)->lpVtbl -> get_Session(This,varSession)
#define Folder_get_Class(This,varClass)(This)->lpVtbl -> get_Class(This,varClass)
#define Folder_get_Name(This,varName)(This)->lpVtbl -> get_Name(This,varName)
#define Folder_get_Messages(This,varMessages)(This)->lpVtbl -> get_Messages(This,varMessages)
#endif
HRESULT STDMETHODCALLTYPE Folder_get_Application_Proxy(Folder __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
void __RPC_STUB Folder_get_Application_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Folder_get_Parent_Proxy(Folder __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
void __RPC_STUB Folder_get_Parent_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Folder_get_Session_Proxy(Folder __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
void __RPC_STUB Folder_get_Session_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Folder_get_Class_Proxy(Folder __RPC_FAR *This, long __RPC_FAR *varClass);
void __RPC_STUB Folder_get_Class_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Folder_get_Name_Proxy(Folder __RPC_FAR *This, BSTR __RPC_FAR *varName);
void __RPC_STUB Folder_get_Name_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Folder_get_Messages_Proxy(Folder __RPC_FAR *This, VARIANT __RPC_FAR *varMessages);
void __RPC_STUB Folder_get_Messages_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __Messages_INTERFACE_DEFINED__
#define __Messages_INTERFACE_DEFINED__
extern const IID IID_Messages;
typedef struct MessagesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (Messages __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (Messages __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (Messages __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (Messages __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (Messages __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (Messages __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (Messages __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Application) (Messages __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Parent) (Messages __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Session) (Messages __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Class) (Messages __RPC_FAR *This, long __RPC_FAR *varClass);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Count) (Messages __RPC_FAR *This, long __RPC_FAR *varCount);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Item) (Messages __RPC_FAR *This, VARIANT __RPC_FAR *var, VARIANT __RPC_FAR *pvarResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get__NewEnum) (Messages __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *ppunkResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Add) (Messages __RPC_FAR *This, VARIANT Subject, VARIANT Text, VARIANT Importance, VARIANT __RPC_FAR *pvarResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Delete) (Messages __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetFirst) (Messages __RPC_FAR *This, VARIANT __RPC_FAR *pvarResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetNext) (Messages __RPC_FAR *This, VARIANT __RPC_FAR *pvarResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetLast) (Messages __RPC_FAR *This, VARIANT __RPC_FAR *pvarResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetPrevious) (Messages __RPC_FAR *This, VARIANT __RPC_FAR *pvarResult);
	END_INTERFACE
}  MessagesVtbl;
interface Messages
{
	CONST_VTBL struct MessagesVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define Messages_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define Messages_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define Messages_Release(This)(This)->lpVtbl -> Release(This)
#define Messages_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define Messages_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define Messages_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define Messages_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define Messages_get_Application(This,varApplication)(This)->lpVtbl -> get_Application(This,varApplication)
#define Messages_get_Parent(This,varParent)(This)->lpVtbl -> get_Parent(This,varParent)
#define Messages_get_Session(This,varSession)(This)->lpVtbl -> get_Session(This,varSession)
#define Messages_get_Class(This,varClass)(This)->lpVtbl -> get_Class(This,varClass)
#define Messages_get_Count(This,varCount)(This)->lpVtbl -> get_Count(This,varCount)
#define Messages_get_Item(This,var,pvarResult)(This)->lpVtbl -> get_Item(This,var,pvarResult)
#define Messages_get__NewEnum(This,ppunkResult)(This)->lpVtbl -> get__NewEnum(This,ppunkResult)
#define Messages_Add(This,Subject,Text,Importance,pvarResult)(This)->lpVtbl -> Add(This,Subject,Text,Importance,pvarResult)
#define Messages_Delete(This)(This)->lpVtbl -> Delete(This)
#define Messages_GetFirst(This,pvarResult)(This)->lpVtbl -> GetFirst(This,pvarResult)
#define Messages_GetNext(This,pvarResult)(This)->lpVtbl -> GetNext(This,pvarResult)
#define Messages_GetLast(This,pvarResult)(This)->lpVtbl -> GetLast(This,pvarResult)
#define Messages_GetPrevious(This,pvarResult)(This)->lpVtbl -> GetPrevious(This,pvarResult)
#endif
HRESULT STDMETHODCALLTYPE Messages_get_Application_Proxy(Messages __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
void __RPC_STUB Messages_get_Application_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Messages_get_Parent_Proxy(Messages __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
void __RPC_STUB Messages_get_Parent_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Messages_get_Session_Proxy(Messages __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
void __RPC_STUB Messages_get_Session_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Messages_get_Class_Proxy(Messages __RPC_FAR *This, long __RPC_FAR *varClass);
void __RPC_STUB Messages_get_Class_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Messages_get_Count_Proxy(Messages __RPC_FAR *This, long __RPC_FAR *varCount);
void __RPC_STUB Messages_get_Count_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Messages_get_Item_Proxy(Messages __RPC_FAR *This, VARIANT __RPC_FAR *var, VARIANT __RPC_FAR *pvarResult);
void __RPC_STUB Messages_get_Item_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Messages_get__NewEnum_Proxy(Messages __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *ppunkResult);
void __RPC_STUB Messages_get__NewEnum_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Messages_Add_Proxy(Messages __RPC_FAR *This, VARIANT Subject, VARIANT Text, VARIANT Importance, VARIANT __RPC_FAR *pvarResult);
void __RPC_STUB Messages_Add_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Messages_Delete_Proxy(Messages __RPC_FAR *This);
void __RPC_STUB Messages_Delete_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Messages_GetFirst_Proxy(Messages __RPC_FAR *This, VARIANT __RPC_FAR *pvarResult);
void __RPC_STUB Messages_GetFirst_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Messages_GetNext_Proxy(Messages __RPC_FAR *This, VARIANT __RPC_FAR *pvarResult);
void __RPC_STUB Messages_GetNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Messages_GetLast_Proxy(Messages __RPC_FAR *This, VARIANT __RPC_FAR *pvarResult);
void __RPC_STUB Messages_GetLast_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Messages_GetPrevious_Proxy(Messages __RPC_FAR *This, VARIANT __RPC_FAR *pvarResult);
void __RPC_STUB Messages_GetPrevious_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __Message_INTERFACE_DEFINED__
#define __Message_INTERFACE_DEFINED__
extern const IID IID_Message;
typedef struct MessageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (Message __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (Message __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (Message __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (Message __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (Message __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (Message __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (Message __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Application) (Message __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Parent) (Message __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Session) (Message __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Class) (Message __RPC_FAR *This, long __RPC_FAR *varClass);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Size) (Message __RPC_FAR *This, long __RPC_FAR *varSize);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Importance) (Message __RPC_FAR *This, long __RPC_FAR *pImportance);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Importance) (Message __RPC_FAR *This, long varImportance);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Subject) (Message __RPC_FAR *This, BSTR __RPC_FAR *pSubject);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Subject) (Message __RPC_FAR *This, BSTR varSubject);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Sender) (Message __RPC_FAR *This, VARIANT __RPC_FAR *varSender);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_TimeSent) (Message __RPC_FAR *This, VARIANT __RPC_FAR *varTimeSent);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_TimeSent) (Message __RPC_FAR *This, VARIANT varTimeSent);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_TimeReceived) (Message __RPC_FAR *This, VARIANT __RPC_FAR *varTimeReceived);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_TimeReceived) (Message __RPC_FAR *This, VARIANT varTimeReceived);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Text) (Message __RPC_FAR *This, VARIANT __RPC_FAR *varText);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Text) (Message __RPC_FAR *This, VARIANT varText);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_HTMLText) (Message __RPC_FAR *This, VARIANT __RPC_FAR *varHTMLText);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_HTMLText) (Message __RPC_FAR *This, VARIANT varHTMLText);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Recipients) (Message __RPC_FAR *This, VARIANT __RPC_FAR *varRecipients);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Recipients) (Message __RPC_FAR *This, VARIANT varRecipients);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Attachments) (Message __RPC_FAR *This, VARIANT __RPC_FAR *varAttachments);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_MessageFormat) (Message __RPC_FAR *This, long __MIDL_0011);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ContentLocation) (Message __RPC_FAR *This, VARIANT __RPC_FAR *varContentLocation);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_ContentLocation) (Message __RPC_FAR *This, VARIANT varContentLocation);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ContentBase) (Message __RPC_FAR *This, VARIANT __RPC_FAR *varContentBase);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_ContentBase) (Message __RPC_FAR *This, VARIANT varContentBase);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ContentID) (Message __RPC_FAR *This, VARIANT __RPC_FAR *varContentID);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_ContentID) (Message __RPC_FAR *This, VARIANT varContentID);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Delete) (Message __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Send) (Message __RPC_FAR *This);
	END_INTERFACE
}  MessageVtbl;
interface Message
{
	CONST_VTBL struct MessageVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define Message_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define Message_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define Message_Release(This)(This)->lpVtbl -> Release(This)
#define Message_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define Message_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define Message_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define Message_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define Message_get_Application(This,varApplication)(This)->lpVtbl -> get_Application(This,varApplication)
#define Message_get_Parent(This,varParent)(This)->lpVtbl -> get_Parent(This,varParent)
#define Message_get_Session(This,varSession)(This)->lpVtbl -> get_Session(This,varSession)
#define Message_get_Class(This,varClass)(This)->lpVtbl -> get_Class(This,varClass)
#define Message_get_Size(This,varSize)(This)->lpVtbl -> get_Size(This,varSize)
#define Message_get_Importance(This,pImportance)(This)->lpVtbl -> get_Importance(This,pImportance)
#define Message_put_Importance(This,varImportance)(This)->lpVtbl -> put_Importance(This,varImportance)
#define Message_get_Subject(This,pSubject)(This)->lpVtbl -> get_Subject(This,pSubject)
#define Message_put_Subject(This,varSubject)(This)->lpVtbl -> put_Subject(This,varSubject)
#define Message_get_Sender(This,varSender)(This)->lpVtbl -> get_Sender(This,varSender)
#define Message_get_TimeSent(This,varTimeSent)(This)->lpVtbl -> get_TimeSent(This,varTimeSent)
#define Message_put_TimeSent(This,varTimeSent)(This)->lpVtbl -> put_TimeSent(This,varTimeSent)
#define Message_get_TimeReceived(This,varTimeReceived)(This)->lpVtbl -> get_TimeReceived(This,varTimeReceived)
#define Message_put_TimeReceived(This,varTimeReceived)(This)->lpVtbl -> put_TimeReceived(This,varTimeReceived)
#define Message_get_Text(This,varText)(This)->lpVtbl -> get_Text(This,varText)
#define Message_put_Text(This,varText)(This)->lpVtbl -> put_Text(This,varText)
#define Message_get_HTMLText(This,varHTMLText)(This)->lpVtbl -> get_HTMLText(This,varHTMLText)
#define Message_put_HTMLText(This,varHTMLText)(This)->lpVtbl -> put_HTMLText(This,varHTMLText)
#define Message_get_Recipients(This,varRecipients)(This)->lpVtbl -> get_Recipients(This,varRecipients)
#define Message_put_Recipients(This,varRecipients)(This)->lpVtbl -> put_Recipients(This,varRecipients)
#define Message_get_Attachments(This,varAttachments)(This)->lpVtbl -> get_Attachments(This,varAttachments)
#define Message_put_MessageFormat(This,__MIDL_0011)(This)->lpVtbl -> put_MessageFormat(This,__MIDL_0011)
#define Message_get_ContentLocation(This,varContentLocation)(This)->lpVtbl -> get_ContentLocation(This,varContentLocation)
#define Message_put_ContentLocation(This,varContentLocation)(This)->lpVtbl -> put_ContentLocation(This,varContentLocation)
#define Message_get_ContentBase(This,varContentBase)(This)->lpVtbl -> get_ContentBase(This,varContentBase)
#define Message_put_ContentBase(This,varContentBase)(This)->lpVtbl -> put_ContentBase(This,varContentBase)
#define Message_get_ContentID(This,varContentID)(This)->lpVtbl -> get_ContentID(This,varContentID)
#define Message_put_ContentID(This,varContentID)(This)->lpVtbl -> put_ContentID(This,varContentID)
#define Message_Delete(This)(This)->lpVtbl -> Delete(This)
#define Message_Send(This)(This)->lpVtbl -> Send(This)
#endif
HRESULT STDMETHODCALLTYPE Message_get_Application_Proxy(Message __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
void __RPC_STUB Message_get_Application_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_Parent_Proxy(Message __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
void __RPC_STUB Message_get_Parent_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_Session_Proxy(Message __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
void __RPC_STUB Message_get_Session_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_Class_Proxy(Message __RPC_FAR *This, long __RPC_FAR *varClass);
void __RPC_STUB Message_get_Class_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_Size_Proxy(Message __RPC_FAR *This, long __RPC_FAR *varSize);
void __RPC_STUB Message_get_Size_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_Importance_Proxy(Message __RPC_FAR *This, long __RPC_FAR *pImportance);
void __RPC_STUB Message_get_Importance_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_put_Importance_Proxy(Message __RPC_FAR *This, long varImportance);
void __RPC_STUB Message_put_Importance_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_Subject_Proxy(Message __RPC_FAR *This, BSTR __RPC_FAR *pSubject);
void __RPC_STUB Message_get_Subject_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_put_Subject_Proxy(Message __RPC_FAR *This, BSTR varSubject);
void __RPC_STUB Message_put_Subject_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_Sender_Proxy(Message __RPC_FAR *This, VARIANT __RPC_FAR *varSender);
void __RPC_STUB Message_get_Sender_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_TimeSent_Proxy(Message __RPC_FAR *This, VARIANT __RPC_FAR *varTimeSent);
void __RPC_STUB Message_get_TimeSent_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_put_TimeSent_Proxy(Message __RPC_FAR *This, VARIANT varTimeSent);
void __RPC_STUB Message_put_TimeSent_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_TimeReceived_Proxy(Message __RPC_FAR *This, VARIANT __RPC_FAR *varTimeReceived);
void __RPC_STUB Message_get_TimeReceived_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_put_TimeReceived_Proxy(Message __RPC_FAR *This, VARIANT varTimeReceived);
void __RPC_STUB Message_put_TimeReceived_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_Text_Proxy(Message __RPC_FAR *This, VARIANT __RPC_FAR *varText);
void __RPC_STUB Message_get_Text_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_put_Text_Proxy(Message __RPC_FAR *This, VARIANT varText);
void __RPC_STUB Message_put_Text_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_HTMLText_Proxy(Message __RPC_FAR *This, VARIANT __RPC_FAR *varHTMLText);
void __RPC_STUB Message_get_HTMLText_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_put_HTMLText_Proxy(Message __RPC_FAR *This, VARIANT varHTMLText);
void __RPC_STUB Message_put_HTMLText_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_Recipients_Proxy(Message __RPC_FAR *This, VARIANT __RPC_FAR *varRecipients);
void __RPC_STUB Message_get_Recipients_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_put_Recipients_Proxy(Message __RPC_FAR *This, VARIANT varRecipients);
void __RPC_STUB Message_put_Recipients_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_Attachments_Proxy(Message __RPC_FAR *This, VARIANT __RPC_FAR *varAttachments);
void __RPC_STUB Message_get_Attachments_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_put_MessageFormat_Proxy(Message __RPC_FAR *This, long __MIDL_0011);
void __RPC_STUB Message_put_MessageFormat_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_ContentLocation_Proxy(Message __RPC_FAR *This, VARIANT __RPC_FAR *varContentLocation);
void __RPC_STUB Message_get_ContentLocation_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_put_ContentLocation_Proxy(Message __RPC_FAR *This, VARIANT varContentLocation);
void __RPC_STUB Message_put_ContentLocation_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_ContentBase_Proxy(Message __RPC_FAR *This, VARIANT __RPC_FAR *varContentBase);
void __RPC_STUB Message_get_ContentBase_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_put_ContentBase_Proxy(Message __RPC_FAR *This, VARIANT varContentBase);
void __RPC_STUB Message_put_ContentBase_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_get_ContentID_Proxy(Message __RPC_FAR *This, VARIANT __RPC_FAR *varContentID);
void __RPC_STUB Message_get_ContentID_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_put_ContentID_Proxy(Message __RPC_FAR *This, VARIANT varContentID);
void __RPC_STUB Message_put_ContentID_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_Delete_Proxy(Message __RPC_FAR *This);
void __RPC_STUB Message_Delete_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Message_Send_Proxy(Message __RPC_FAR *This);
void __RPC_STUB Message_Send_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __Recipients_INTERFACE_DEFINED__
#define __Recipients_INTERFACE_DEFINED__
extern const IID IID_Recipients;
typedef struct RecipientsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (Recipients __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (Recipients __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (Recipients __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (Recipients __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (Recipients __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (Recipients __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (Recipients __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Application) (Recipients __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Parent) (Recipients __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Session) (Recipients __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Class) (Recipients __RPC_FAR *This, long __RPC_FAR *varClass);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Item) (Recipients __RPC_FAR *This, VARIANT __RPC_FAR *var, VARIANT __RPC_FAR *pvarResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Count) (Recipients __RPC_FAR *This, long __RPC_FAR *varCount);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get__NewEnum) (Recipients __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *ppunkResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Add) (Recipients __RPC_FAR *This, VARIANT Name, VARIANT Address, VARIANT Type, VARIANT __RPC_FAR *pvarResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Delete) (Recipients __RPC_FAR *This);
	END_INTERFACE
}  RecipientsVtbl;
interface Recipients
{
	CONST_VTBL struct RecipientsVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define Recipients_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define Recipients_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define Recipients_Release(This)(This)->lpVtbl -> Release(This)
#define Recipients_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define Recipients_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define Recipients_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define Recipients_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define Recipients_get_Application(This,varApplication)(This)->lpVtbl -> get_Application(This,varApplication)
#define Recipients_get_Parent(This,varParent)(This)->lpVtbl -> get_Parent(This,varParent)
#define Recipients_get_Session(This,varSession)(This)->lpVtbl -> get_Session(This,varSession)
#define Recipients_get_Class(This,varClass)(This)->lpVtbl -> get_Class(This,varClass)
#define Recipients_get_Item(This,var,pvarResult)(This)->lpVtbl -> get_Item(This,var,pvarResult)
#define Recipients_get_Count(This,varCount)(This)->lpVtbl -> get_Count(This,varCount)
#define Recipients_get__NewEnum(This,ppunkResult)(This)->lpVtbl -> get__NewEnum(This,ppunkResult)
#define Recipients_Add(This,Name,Address,Type,pvarResult)(This)->lpVtbl -> Add(This,Name,Address,Type,pvarResult)
#define Recipients_Delete(This)(This)->lpVtbl -> Delete(This)
#endif
HRESULT STDMETHODCALLTYPE Recipients_get_Application_Proxy(Recipients __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
void __RPC_STUB Recipients_get_Application_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipients_get_Parent_Proxy(Recipients __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
void __RPC_STUB Recipients_get_Parent_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipients_get_Session_Proxy(Recipients __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
void __RPC_STUB Recipients_get_Session_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipients_get_Class_Proxy(Recipients __RPC_FAR *This, long __RPC_FAR *varClass);
void __RPC_STUB Recipients_get_Class_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipients_get_Item_Proxy(Recipients __RPC_FAR *This, VARIANT __RPC_FAR *var, VARIANT __RPC_FAR *pvarResult);
void __RPC_STUB Recipients_get_Item_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipients_get_Count_Proxy(Recipients __RPC_FAR *This, long __RPC_FAR *varCount);
void __RPC_STUB Recipients_get_Count_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipients_get__NewEnum_Proxy(Recipients __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *ppunkResult);
void __RPC_STUB Recipients_get__NewEnum_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipients_Add_Proxy(Recipients __RPC_FAR *This, VARIANT Name, VARIANT Address, VARIANT Type, VARIANT __RPC_FAR *pvarResult);
void __RPC_STUB Recipients_Add_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipients_Delete_Proxy(Recipients __RPC_FAR *This);
void __RPC_STUB Recipients_Delete_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __Recipient_INTERFACE_DEFINED__
#define __Recipient_INTERFACE_DEFINED__
extern const IID IID_Recipient;
typedef struct RecipientVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (Recipient __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (Recipient __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (Recipient __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (Recipient __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (Recipient __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (Recipient __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (Recipient __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Application) (Recipient __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Parent) (Recipient __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Session) (Recipient __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Class) (Recipient __RPC_FAR *This, long __RPC_FAR *varClass);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Name) (Recipient __RPC_FAR *This, BSTR __RPC_FAR *pbstrName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Name) (Recipient __RPC_FAR *This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Type) (Recipient __RPC_FAR *This, long __RPC_FAR *pType);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Type) (Recipient __RPC_FAR *This, long varType);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Address) (Recipient __RPC_FAR *This, BSTR __RPC_FAR *pAddress);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Address) (Recipient __RPC_FAR *This, BSTR varAddress);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Delete) (Recipient __RPC_FAR *This);
	END_INTERFACE
}  RecipientVtbl;
interface Recipient
{
	CONST_VTBL struct RecipientVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define Recipient_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define Recipient_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define Recipient_Release(This)(This)->lpVtbl -> Release(This)
#define Recipient_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define Recipient_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define Recipient_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define Recipient_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define Recipient_get_Application(This,varApplication)(This)->lpVtbl -> get_Application(This,varApplication)
#define Recipient_get_Parent(This,varParent)(This)->lpVtbl -> get_Parent(This,varParent)
#define Recipient_get_Session(This,varSession)(This)->lpVtbl -> get_Session(This,varSession)
#define Recipient_get_Class(This,varClass)(This)->lpVtbl -> get_Class(This,varClass)
#define Recipient_get_Name(This,pbstrName)(This)->lpVtbl -> get_Name(This,pbstrName)
#define Recipient_put_Name(This,bstrName)(This)->lpVtbl -> put_Name(This,bstrName)
#define Recipient_get_Type(This,pType)(This)->lpVtbl -> get_Type(This,pType)
#define Recipient_put_Type(This,varType)(This)->lpVtbl -> put_Type(This,varType)
#define Recipient_get_Address(This,pAddress)(This)->lpVtbl -> get_Address(This,pAddress)
#define Recipient_put_Address(This,varAddress)(This)->lpVtbl -> put_Address(This,varAddress)
#define Recipient_Delete(This)(This)->lpVtbl -> Delete(This)
#endif
HRESULT STDMETHODCALLTYPE Recipient_get_Application_Proxy(Recipient __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
void __RPC_STUB Recipient_get_Application_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipient_get_Parent_Proxy(Recipient __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
void __RPC_STUB Recipient_get_Parent_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipient_get_Session_Proxy(Recipient __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
void __RPC_STUB Recipient_get_Session_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipient_get_Class_Proxy(Recipient __RPC_FAR *This, long __RPC_FAR *varClass);
void __RPC_STUB Recipient_get_Class_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipient_get_Name_Proxy(Recipient __RPC_FAR *This, BSTR __RPC_FAR *pbstrName);
void __RPC_STUB Recipient_get_Name_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipient_put_Name_Proxy(Recipient __RPC_FAR *This, BSTR bstrName);
void __RPC_STUB Recipient_put_Name_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipient_get_Type_Proxy(Recipient __RPC_FAR *This, long __RPC_FAR *pType);
void __RPC_STUB Recipient_get_Type_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipient_put_Type_Proxy(Recipient __RPC_FAR *This, long varType);
void __RPC_STUB Recipient_put_Type_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipient_get_Address_Proxy(Recipient __RPC_FAR *This, BSTR __RPC_FAR *pAddress);
void __RPC_STUB Recipient_get_Address_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipient_put_Address_Proxy(Recipient __RPC_FAR *This, BSTR varAddress);
void __RPC_STUB Recipient_put_Address_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Recipient_Delete_Proxy(Recipient __RPC_FAR *This);
void __RPC_STUB Recipient_Delete_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __Attachments_INTERFACE_DEFINED__
#define __Attachments_INTERFACE_DEFINED__
extern const IID IID_Attachments;
typedef struct AttachmentsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (Attachments __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (Attachments __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (Attachments __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (Attachments __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (Attachments __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (Attachments __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (Attachments __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Application) (Attachments __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Parent) (Attachments __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Session) (Attachments __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Class) (Attachments __RPC_FAR *This, long __RPC_FAR *varClass);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Item) (Attachments __RPC_FAR *This, VARIANT __RPC_FAR *var, VARIANT __RPC_FAR *pvarResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Count) (Attachments __RPC_FAR *This, long __RPC_FAR *varCount);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get__NewEnum) (Attachments __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *ppunkResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Add) (Attachments __RPC_FAR *This, VARIANT Name, VARIANT Type, VARIANT Source, VARIANT ContentLocation, VARIANT ContentBase, VARIANT __RPC_FAR *pvarResult);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Delete) (Attachments __RPC_FAR *This);
	END_INTERFACE
}  AttachmentsVtbl;
interface Attachments
{
	CONST_VTBL struct AttachmentsVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define Attachments_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define Attachments_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define Attachments_Release(This)(This)->lpVtbl -> Release(This)
#define Attachments_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define Attachments_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define Attachments_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define Attachments_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define Attachments_get_Application(This,varApplication)(This)->lpVtbl -> get_Application(This,varApplication)
#define Attachments_get_Parent(This,varParent)(This)->lpVtbl -> get_Parent(This,varParent)
#define Attachments_get_Session(This,varSession)(This)->lpVtbl -> get_Session(This,varSession)
#define Attachments_get_Class(This,varClass)(This)->lpVtbl -> get_Class(This,varClass)
#define Attachments_get_Item(This,var,pvarResult)(This)->lpVtbl -> get_Item(This,var,pvarResult)
#define Attachments_get_Count(This,varCount)(This)->lpVtbl -> get_Count(This,varCount)
#define Attachments_get__NewEnum(This,ppunkResult)(This)->lpVtbl -> get__NewEnum(This,ppunkResult)
#define Attachments_Add(This,Name,Type,Source,ContentLocation,ContentBase,pvarResult)(This)->lpVtbl -> Add(This,Name,Type,Source,ContentLocation,ContentBase,pvarResult)
#define Attachments_Delete(This)(This)->lpVtbl -> Delete(This)
#endif
HRESULT STDMETHODCALLTYPE Attachments_get_Application_Proxy(Attachments __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
void __RPC_STUB Attachments_get_Application_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachments_get_Parent_Proxy(Attachments __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
void __RPC_STUB Attachments_get_Parent_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachments_get_Session_Proxy(Attachments __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
void __RPC_STUB Attachments_get_Session_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachments_get_Class_Proxy(Attachments __RPC_FAR *This, long __RPC_FAR *varClass);
void __RPC_STUB Attachments_get_Class_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachments_get_Item_Proxy(Attachments __RPC_FAR *This, VARIANT __RPC_FAR *var, VARIANT __RPC_FAR *pvarResult);
void __RPC_STUB Attachments_get_Item_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachments_get_Count_Proxy(Attachments __RPC_FAR *This, long __RPC_FAR *varCount);
void __RPC_STUB Attachments_get_Count_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachments_get__NewEnum_Proxy(Attachments __RPC_FAR *This, IUnknown __RPC_FAR *__RPC_FAR *ppunkResult);
void __RPC_STUB Attachments_get__NewEnum_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachments_Add_Proxy(Attachments __RPC_FAR *This, VARIANT Name, VARIANT Type, VARIANT Source, VARIANT ContentLocation, VARIANT ContentBase, VARIANT __RPC_FAR *pvarResult);
void __RPC_STUB Attachments_Add_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachments_Delete_Proxy(Attachments __RPC_FAR *This);
void __RPC_STUB Attachments_Delete_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __Attachment_INTERFACE_DEFINED__
#define __Attachment_INTERFACE_DEFINED__
extern const IID IID_Attachment;
typedef struct AttachmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (Attachment __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (Attachment __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (Attachment __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (Attachment __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (Attachment __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (Attachment __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (Attachment __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Application) (Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Parent) (Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Session) (Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Class) (Attachment __RPC_FAR *This, long __RPC_FAR *varClass);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Name) (Attachment __RPC_FAR *This, BSTR __RPC_FAR *pbstrName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Name) (Attachment __RPC_FAR *This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Type) (Attachment __RPC_FAR *This, long __RPC_FAR *pType);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Type) (Attachment __RPC_FAR *This, long varType);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Source) (Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varSource);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *put_Source) (Attachment __RPC_FAR *This, VARIANT varSource);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ContentLocation) (Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varContentLocation);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ContentBase) (Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varContentBase);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_ContentID) (Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varContentID);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Delete) (Attachment __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *ReadFromFile) (Attachment __RPC_FAR *This, BSTR FileName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *WriteToFile) (Attachment __RPC_FAR *This, BSTR FileName);
	END_INTERFACE
}  AttachmentVtbl;
interface Attachment
{
	CONST_VTBL struct AttachmentVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define Attachment_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define Attachment_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define Attachment_Release(This)(This)->lpVtbl -> Release(This)
#define Attachment_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define Attachment_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define Attachment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define Attachment_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define Attachment_get_Application(This,varApplication)(This)->lpVtbl -> get_Application(This,varApplication)
#define Attachment_get_Parent(This,varParent)(This)->lpVtbl -> get_Parent(This,varParent)
#define Attachment_get_Session(This,varSession)(This)->lpVtbl -> get_Session(This,varSession)
#define Attachment_get_Class(This,varClass)(This)->lpVtbl -> get_Class(This,varClass)
#define Attachment_get_Name(This,pbstrName)(This)->lpVtbl -> get_Name(This,pbstrName)
#define Attachment_put_Name(This,bstrName)(This)->lpVtbl -> put_Name(This,bstrName)
#define Attachment_get_Type(This,pType)(This)->lpVtbl -> get_Type(This,pType)
#define Attachment_put_Type(This,varType)(This)->lpVtbl -> put_Type(This,varType)
#define Attachment_get_Source(This,varSource)(This)->lpVtbl -> get_Source(This,varSource)
#define Attachment_put_Source(This,varSource)(This)->lpVtbl -> put_Source(This,varSource)
#define Attachment_get_ContentLocation(This,varContentLocation)(This)->lpVtbl -> get_ContentLocation(This,varContentLocation)
#define Attachment_get_ContentBase(This,varContentBase)(This)->lpVtbl -> get_ContentBase(This,varContentBase)
#define Attachment_get_ContentID(This,varContentID)(This)->lpVtbl -> get_ContentID(This,varContentID)
#define Attachment_Delete(This)(This)->lpVtbl -> Delete(This)
#define Attachment_ReadFromFile(This,FileName)(This)->lpVtbl -> ReadFromFile(This,FileName)
#define Attachment_WriteToFile(This,FileName)(This)->lpVtbl -> WriteToFile(This,FileName)
#endif
HRESULT STDMETHODCALLTYPE Attachment_get_Application_Proxy(Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
void __RPC_STUB Attachment_get_Application_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_get_Parent_Proxy(Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
void __RPC_STUB Attachment_get_Parent_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_get_Session_Proxy(Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
void __RPC_STUB Attachment_get_Session_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_get_Class_Proxy(Attachment __RPC_FAR *This, long __RPC_FAR *varClass);
void __RPC_STUB Attachment_get_Class_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_get_Name_Proxy(Attachment __RPC_FAR *This, BSTR __RPC_FAR *pbstrName);
void __RPC_STUB Attachment_get_Name_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_put_Name_Proxy(Attachment __RPC_FAR *This, BSTR bstrName);
void __RPC_STUB Attachment_put_Name_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_get_Type_Proxy(Attachment __RPC_FAR *This, long __RPC_FAR *pType);
void __RPC_STUB Attachment_get_Type_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_put_Type_Proxy(Attachment __RPC_FAR *This, long varType);
void __RPC_STUB Attachment_put_Type_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_get_Source_Proxy(Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varSource);
void __RPC_STUB Attachment_get_Source_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_put_Source_Proxy(Attachment __RPC_FAR *This, VARIANT varSource);
void __RPC_STUB Attachment_put_Source_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_get_ContentLocation_Proxy(Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varContentLocation);
void __RPC_STUB Attachment_get_ContentLocation_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_get_ContentBase_Proxy(Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varContentBase);
void __RPC_STUB Attachment_get_ContentBase_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_get_ContentID_Proxy(Attachment __RPC_FAR *This, VARIANT __RPC_FAR *varContentID);
void __RPC_STUB Attachment_get_ContentID_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_Delete_Proxy(Attachment __RPC_FAR *This);
void __RPC_STUB Attachment_Delete_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_ReadFromFile_Proxy(Attachment __RPC_FAR *This, BSTR FileName);
void __RPC_STUB Attachment_ReadFromFile_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE Attachment_WriteToFile_Proxy(Attachment __RPC_FAR *This, BSTR FileName);
void __RPC_STUB Attachment_WriteToFile_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __AddressEntry_INTERFACE_DEFINED__
#define __AddressEntry_INTERFACE_DEFINED__
extern const IID IID_AddressEntry;
typedef struct AddressEntryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *QueryInterface) (AddressEntry __RPC_FAR *This, REFIID riid, void __RPC_FAR *__RPC_FAR *ppvObject);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *AddRef) (AddressEntry __RPC_FAR *This);
	ULONG(STDMETHODCALLTYPE __RPC_FAR *Release) (AddressEntry __RPC_FAR *This);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount) (AddressEntry __RPC_FAR *This, UINT __RPC_FAR *pctinfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo) (AddressEntry __RPC_FAR *This, UINT iTInfo, LCID lcid, ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames) (AddressEntry __RPC_FAR *This, REFIID riid, LPOLESTR __RPC_FAR *rgszNames, UINT cNames, LCID lcid, DISPID __RPC_FAR *rgDispId);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *Invoke) (AddressEntry __RPC_FAR *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS __RPC_FAR *pDispParams, VARIANT __RPC_FAR *pVarResult, EXCEPINFO __RPC_FAR *pExcepInfo, UINT __RPC_FAR *puArgErr);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Application) (AddressEntry __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Parent) (AddressEntry __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Session) (AddressEntry __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Class) (AddressEntry __RPC_FAR *This, long __RPC_FAR *varClass);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Name) (AddressEntry __RPC_FAR *This, BSTR __RPC_FAR *pbstrName);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Address) (AddressEntry __RPC_FAR *This, BSTR __RPC_FAR *varAddress);
	HRESULT(STDMETHODCALLTYPE __RPC_FAR *get_Type) (AddressEntry __RPC_FAR *This, BSTR __RPC_FAR *varType);
	END_INTERFACE
}  AddressEntryVtbl;
interface AddressEntry
{
	CONST_VTBL struct AddressEntryVtbl __RPC_FAR *lpVtbl;
};
#ifdef COBJMACROS
#define AddressEntry_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define AddressEntry_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define AddressEntry_Release(This)(This)->lpVtbl -> Release(This)
#define AddressEntry_GetTypeInfoCount(This,pctinfo)(This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
#define AddressEntry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)(This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define AddressEntry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)(This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define AddressEntry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)(This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
#define AddressEntry_get_Application(This,varApplication)(This)->lpVtbl -> get_Application(This,varApplication)
#define AddressEntry_get_Parent(This,varParent)(This)->lpVtbl -> get_Parent(This,varParent)
#define AddressEntry_get_Session(This,varSession)(This)->lpVtbl -> get_Session(This,varSession)
#define AddressEntry_get_Class(This,varClass)(This)->lpVtbl -> get_Class(This,varClass)
#define AddressEntry_get_Name(This,pbstrName)(This)->lpVtbl -> get_Name(This,pbstrName)
#define AddressEntry_get_Address(This,varAddress)(This)->lpVtbl -> get_Address(This,varAddress)
#define AddressEntry_get_Type(This,varType)(This)->lpVtbl -> get_Type(This,varType)
#endif
HRESULT STDMETHODCALLTYPE AddressEntry_get_Application_Proxy(AddressEntry __RPC_FAR *This, VARIANT __RPC_FAR *varApplication);
void __RPC_STUB AddressEntry_get_Application_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AddressEntry_get_Parent_Proxy(AddressEntry __RPC_FAR *This, VARIANT __RPC_FAR *varParent);
void __RPC_STUB AddressEntry_get_Parent_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AddressEntry_get_Session_Proxy(AddressEntry __RPC_FAR *This, VARIANT __RPC_FAR *varSession);
void __RPC_STUB AddressEntry_get_Session_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AddressEntry_get_Class_Proxy(AddressEntry __RPC_FAR *This, long __RPC_FAR *varClass);
void __RPC_STUB AddressEntry_get_Class_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AddressEntry_get_Name_Proxy(AddressEntry __RPC_FAR *This, BSTR __RPC_FAR *pbstrName);
void __RPC_STUB AddressEntry_get_Name_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AddressEntry_get_Address_Proxy(AddressEntry __RPC_FAR *This, BSTR __RPC_FAR *varAddress);
void __RPC_STUB AddressEntry_get_Address_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE AddressEntry_get_Type_Proxy(AddressEntry __RPC_FAR *This, BSTR __RPC_FAR *varType);
void __RPC_STUB AddressEntry_get_Type_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __CDONTS_LIBRARY_DEFINED__
#define __CDONTS_LIBRARY_DEFINED__
typedef enum CdoRecipientTypes
{
	CdoTo = 1,
	CdoCc = 2,
	CdoBcc = 3
} CdoRecipientTypes;
typedef enum CdoImportance
{
	CdoLow = 0,
	CdoNormal = 1,
	CdoHigh = 2
} CdoImportance;
typedef enum CdoAttachmentTypes
{
	CdoFileData = 1,
	CdoEmbeddedMessage = 4
} CdoAttachmentTypes;
typedef enum CdoFolderTypes
{
	CdoDefaultFolderInbox = 1,
	CdoDefaultFolderOutbox = 2
} CdoFolderTypes;
typedef enum CdoMessageFormats
{
	CdoMime = 0,
	CdoText = 1
} CdoMessageFormats;
typedef enum CdoMailFormats
{
	CdoMailFormatMime = 0,
	CdoMailFormatText = 1
} CdoMailFormats;
typedef enum CdoBodyFormats
{
	CdoBodyFormatHTML = 0,
	CdoBodyFormatText = 1
} CdoBodyFormats;
typedef enum CdoEncodingMethod
{
	CdoEncodingUUencode = 0,
	CdoEncodingBase64 = 1
} CdoEncodingMethod;
typedef enum __MIDL___MIDL_itf_actmsg_0253_0001
{
	CdoSession = 0,
	CdoFolder = 2,
	CdoMsg = 3,
	CdoRecipient = 4,
	CdoAttachment = 5,
	CdoAddressEntry = 8,
	CdoMessages = 16,
	CdoRecipients = 17,
	CdoAttachments = 18,
	CdoClassTotal = 29
} CdoObjectClass;
extern const IID LIBID_CDONTS;
extern const CLSID CLSID_NewMail;
extern const CLSID CLSID_Session;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long __RPC_FAR *, unsigned long, BSTR __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER BSTR_UserMarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR *);
void __RPC_USER BSTR_UserFree(unsigned long __RPC_FAR *, BSTR __RPC_FAR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long __RPC_FAR *, unsigned long, VARIANT __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER VARIANT_UserMarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR *);
unsigned char __RPC_FAR *__RPC_USER VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR *);
void __RPC_USER VARIANT_UserFree(unsigned long __RPC_FAR *, VARIANT __RPC_FAR *);
#endif
