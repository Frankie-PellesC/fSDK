/*+@@file@@----------------------------------------------------------------*//*!
 \file		CDOSys.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 23:59:45 2016
 \date		Modified on Sat Jul  2 23:59:45 2016
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
#ifndef __cdo_h__
#define __cdo_h__
#include <cdosysstr.h>
#undef IDataSource
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDataSource_FWD_DEFINED__
#define __IDataSource_FWD_DEFINED__
typedef interface IDataSource IDataSource;
#endif
#ifndef __IMessage_FWD_DEFINED__
#define __IMessage_FWD_DEFINED__
typedef interface IMessage IMessage;
#endif
#ifndef __IBodyPart_FWD_DEFINED__
#define __IBodyPart_FWD_DEFINED__
typedef interface IBodyPart IBodyPart;
#endif
#ifndef __IConfiguration_FWD_DEFINED__
#define __IConfiguration_FWD_DEFINED__
typedef interface IConfiguration IConfiguration;
#endif
#ifndef __IMessages_FWD_DEFINED__
#define __IMessages_FWD_DEFINED__
typedef interface IMessages IMessages;
#endif
#ifndef __IDropDirectory_FWD_DEFINED__
#define __IDropDirectory_FWD_DEFINED__
typedef interface IDropDirectory IDropDirectory;
#endif
#ifndef __IBodyParts_FWD_DEFINED__
#define __IBodyParts_FWD_DEFINED__
typedef interface IBodyParts IBodyParts;
#endif
#ifndef __ISMTPScriptConnector_FWD_DEFINED__
#define __ISMTPScriptConnector_FWD_DEFINED__
typedef interface ISMTPScriptConnector ISMTPScriptConnector;
#endif
#ifndef __INNTPEarlyScriptConnector_FWD_DEFINED__
#define __INNTPEarlyScriptConnector_FWD_DEFINED__
typedef interface INNTPEarlyScriptConnector INNTPEarlyScriptConnector;
#endif
#ifndef __INNTPPostScriptConnector_FWD_DEFINED__
#define __INNTPPostScriptConnector_FWD_DEFINED__
typedef interface INNTPPostScriptConnector INNTPPostScriptConnector;
#endif
#ifndef __INNTPFinalScriptConnector_FWD_DEFINED__
#define __INNTPFinalScriptConnector_FWD_DEFINED__
typedef interface INNTPFinalScriptConnector INNTPFinalScriptConnector;
#endif
#ifndef __ISMTPOnArrival_FWD_DEFINED__
#define __ISMTPOnArrival_FWD_DEFINED__
typedef interface ISMTPOnArrival ISMTPOnArrival;
#endif
#ifndef __INNTPOnPostEarly_FWD_DEFINED__
#define __INNTPOnPostEarly_FWD_DEFINED__
typedef interface INNTPOnPostEarly INNTPOnPostEarly;
#endif
#ifndef __INNTPOnPost_FWD_DEFINED__
#define __INNTPOnPost_FWD_DEFINED__
typedef interface INNTPOnPost INNTPOnPost;
#endif
#ifndef __INNTPOnPostFinal_FWD_DEFINED__
#define __INNTPOnPostFinal_FWD_DEFINED__
typedef interface INNTPOnPostFinal INNTPOnPostFinal;
#endif
#ifndef __IProxyObject_FWD_DEFINED__
#define __IProxyObject_FWD_DEFINED__
typedef interface IProxyObject IProxyObject;
#endif
#ifndef __IGetInterface_FWD_DEFINED__
#define __IGetInterface_FWD_DEFINED__
typedef interface IGetInterface IGetInterface;
#endif
#ifndef __IBodyParts_FWD_DEFINED__
#define __IBodyParts_FWD_DEFINED__
typedef interface IBodyParts IBodyParts;
#endif
#ifndef __IMessages_FWD_DEFINED__
#define __IMessages_FWD_DEFINED__
typedef interface IMessages IMessages;
#endif
#ifndef __Message_FWD_DEFINED__
#define __Message_FWD_DEFINED__
typedef struct Message Message;
#endif
#ifndef __Configuration_FWD_DEFINED__
#define __Configuration_FWD_DEFINED__
typedef struct Configuration Configuration;
#endif
#ifndef __DropDirectory_FWD_DEFINED__
#define __DropDirectory_FWD_DEFINED__
typedef struct DropDirectory DropDirectory;
#endif
#ifndef __SMTPConnector_FWD_DEFINED__
#define __SMTPConnector_FWD_DEFINED__
typedef struct SMTPConnector SMTPConnector;
#endif
#ifndef __NNTPEarlyConnector_FWD_DEFINED__
#define __NNTPEarlyConnector_FWD_DEFINED__
typedef struct NNTPEarlyConnector NNTPEarlyConnector;
#endif
#ifndef __NNTPPostConnector_FWD_DEFINED__
#define __NNTPPostConnector_FWD_DEFINED__
typedef struct NNTPPostConnector NNTPPostConnector;
#endif
#ifndef __NNTPFinalConnector_FWD_DEFINED__
#define __NNTPFinalConnector_FWD_DEFINED__
typedef struct NNTPFinalConnector NNTPFinalConnector;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <adoint.h>
typedef enum CdoConfigSource
{
	cdoDefaults = -1,
	cdoIIS = 1,
	cdoOutlookExpress = 2
} CdoConfigSource;
typedef enum CdoDSNOptions
{
	cdoDSNDefault = 0,
	cdoDSNNever = 1,
	cdoDSNFailure = 2,
	cdoDSNSuccess = 4,
	cdoDSNDelay = 8,
	cdoDSNSuccessFailOrDelay = 14
} CdoDSNOptions;
typedef enum CdoEventStatus
{
	cdoRunNextSink = 0,
	cdoSkipRemainingSinks = 1
} CdoEventStatus;
typedef enum CdoEventType
{
	cdoSMTPOnArrival = 1,
	cdoNNTPOnPostEarly = 2,
	cdoNNTPOnPost = 3,
	cdoNNTPOnPostFinal = 4
} CdoEventType;
typedef enum cdoImportanceValues
{
	cdoLow = 0,
	cdoNormal = 1,
	cdoHigh = 2
} cdoImportanceValues;
typedef enum CdoMessageStat
{
	cdoStatSuccess = 0,
	cdoStatAbortDelivery = 2,
	cdoStatBadMail = 3
} CdoMessageStat;
typedef enum CdoMHTMLFlags
{
	cdoSuppressNone = 0,
	cdoSuppressImages = 1,
	cdoSuppressBGSounds = 2,
	cdoSuppressFrames = 4,
	cdoSuppressObjects = 8,
	cdoSuppressStyleSheets = 16,
	cdoSuppressAll = 31
} CdoMHTMLFlags;
typedef enum CdoNNTPProcessingField
{
	cdoPostMessage = 1,
	cdoProcessControl = 2,
	cdoProcessModerator = 4
} CdoNNTPProcessingField;
typedef enum CdoPostUsing
{
	cdoPostUsingPickup = 1,
	cdoPostUsingPort = 2
} CdoPostUsing;
typedef enum cdoPriorityValues
{
	cdoPriorityNonUrgent = -1,
	cdoPriorityNormal = 0,
	cdoPriorityUrgent = 1
} cdoPriorityValues;
typedef enum CdoProtocolsAuthentication
{
	cdoAnonymous = 0,
	cdoBasic = 1,
	cdoNTLM = 2
} CdoProtocolsAuthentication;
typedef enum CdoReferenceType
{
	cdoRefTypeId = 0,
	cdoRefTypeLocation = 1
} CdoReferenceType;
typedef enum CdoSendUsing
{
	cdoSendUsingPickup = 1,
	cdoSendUsingPort = 2
} CdoSendUsing;
typedef enum cdoSensitivityValues
{
	cdoSensitivityNone = 0,
	cdoPersonal = 1,
	cdoPrivate = 2,
	cdoCompanyConfidential = 3
} cdoSensitivityValues;
typedef enum CdoTimeZoneId
{
	cdoUTC = 0,
	cdoGMT = 1,
	cdoSarajevo = 2,
	cdoParis = 3,
	cdoBerlin = 4,
	cdoEasternEurope = 5,
	cdoPrague = 6,
	cdoAthens = 7,
	cdoBrasilia = 8,
	cdoAtlanticCanada = 9,
	cdoEastern = 10,
	cdoCentral = 11,
	cdoMountain = 12,
	cdoPacific = 13,
	cdoAlaska = 14,
	cdoHawaii = 15,
	cdoMidwayIsland = 16,
	cdoWellington = 17,
	cdoBrisbane = 18,
	cdoAdelaide = 19,
	cdoTokyo = 20,
	cdoSingapore = 21,
	cdoBangkok = 22,
	cdoBombay = 23,
	cdoAbuDhabi = 24,
	cdoTehran = 25,
	cdoBaghdad = 26,
	cdoIsrael = 27,
	cdoNewfoundland = 28,
	cdoAzores = 29,
	cdoMidAtlantic = 30,
	cdoMonrovia = 31,
	cdoBuenosAires = 32,
	cdoCaracas = 33,
	cdoIndiana = 34,
	cdoBogota = 35,
	cdoSaskatchewan = 36,
	cdoMexicoCity = 37,
	cdoArizona = 38,
	cdoEniwetok = 39,
	cdoFiji = 40,
	cdoMagadan = 41,
	cdoHobart = 42,
	cdoGuam = 43,
	cdoDarwin = 44,
	cdoBeijing = 45,
	cdoAlmaty = 46,
	cdoIslamabad = 47,
	cdoKabul = 48,
	cdoCairo = 49,
	cdoHarare = 50,
	cdoMoscow = 51,
	cdoFloating = 52,
	cdoCapeVerde = 53,
	cdoCaucasus = 54,
	cdoCentralAmerica = 55,
	cdoEastAfrica = 56,
	cdoMelbourne = 57,
	cdoEkaterinburg = 58,
	cdoHelsinki = 59,
	cdoGreenland = 60,
	cdoRangoon = 61,
	cdoNepal = 62,
	cdoIrkutsk = 63,
	cdoKrasnoyarsk = 64,
	cdoSantiago = 65,
	cdoSriLanka = 66,
	cdoTonga = 67,
	cdoVladivostok = 68,
	cdoWestCentralAfrica = 69,
	cdoYakutsk = 70,
	cdoDhaka = 71,
	cdoSeoul = 72,
	cdoPerth = 73,
	cdoArab = 74,
	cdoTaipei = 75,
	cdoSydney2000 = 76,
	cdoChihuahua = 77,
	cdoCanberraCommonwealthGames2006 = 78,
	cdoAdelaideCommonwealthGames2006 = 79,
	cdoHobartCommonwealthGames2006 = 80,
	cdoTijuana = 81,
	cdoInvalidTimeZone = 82
} CdoTimeZoneId;
extern RPC_IF_HANDLE __MIDL_itf_cdo_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cdo_0000_0000_v0_0_s_ifspec;
#ifndef __IDataSource_INTERFACE_DEFINED__
#define __IDataSource_INTERFACE_DEFINED__
extern const IID IID_IDataSource;
typedef struct IDataSourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDataSource * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDataSource * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDataSource * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDataSource * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDataSource * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDataSource * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDataSource * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_SourceClass) (IDataSource * This, BSTR * varSourceClass);
	HRESULT(STDMETHODCALLTYPE * get_Source) (IDataSource * This, IUnknown ** varSource);
	HRESULT(STDMETHODCALLTYPE * get_IsDirty) (IDataSource * This, VARIANT_BOOL * pIsDirty);
	HRESULT(STDMETHODCALLTYPE * put_IsDirty) (IDataSource * This, VARIANT_BOOL varIsDirty);
	HRESULT(STDMETHODCALLTYPE * get_SourceURL) (IDataSource * This, BSTR * varSourceURL);
	HRESULT(STDMETHODCALLTYPE * get_ActiveConnection) (IDataSource * This, _Connection ** varActiveConnection);
	HRESULT(STDMETHODCALLTYPE * SaveToObject) (IDataSource * This, IUnknown * Source, BSTR InterfaceName);
	HRESULT(STDMETHODCALLTYPE * OpenObject) (IDataSource * This, IUnknown * Source, BSTR InterfaceName);
	HRESULT(STDMETHODCALLTYPE * SaveTo) (IDataSource * This, BSTR SourceURL, IDispatch * ActiveConnection, ConnectModeEnum Mode, RecordCreateOptionsEnum CreateOptions, RecordOpenOptionsEnum Options, BSTR UserName, BSTR Password);
	HRESULT(STDMETHODCALLTYPE * Open) (IDataSource * This, BSTR SourceURL, IDispatch * ActiveConnection, ConnectModeEnum Mode, RecordCreateOptionsEnum CreateOptions, RecordOpenOptionsEnum Options, BSTR UserName, BSTR Password);
	HRESULT(STDMETHODCALLTYPE * Save) (IDataSource * This);
	HRESULT(STDMETHODCALLTYPE * SaveToContainer) (IDataSource * This, BSTR ContainerURL, IDispatch * ActiveConnection, ConnectModeEnum Mode, RecordCreateOptionsEnum CreateOptions, RecordOpenOptionsEnum Options, BSTR UserName, BSTR Password);
	END_INTERFACE
}  IDataSourceVtbl;
interface IDataSource
{
	CONST_VTBL struct IDataSourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDataSource_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDataSource_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDataSource_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDataSource_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDataSource_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDataSource_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDataSource_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDataSource_get_SourceClass(This,varSourceClass)( (This)->lpVtbl -> get_SourceClass(This,varSourceClass) )
#define IDataSource_get_Source(This,varSource)( (This)->lpVtbl -> get_Source(This,varSource) )
#define IDataSource_get_IsDirty(This,pIsDirty)( (This)->lpVtbl -> get_IsDirty(This,pIsDirty) )
#define IDataSource_put_IsDirty(This,varIsDirty)( (This)->lpVtbl -> put_IsDirty(This,varIsDirty) )
#define IDataSource_get_SourceURL(This,varSourceURL)( (This)->lpVtbl -> get_SourceURL(This,varSourceURL) )
#define IDataSource_get_ActiveConnection(This,varActiveConnection)( (This)->lpVtbl -> get_ActiveConnection(This,varActiveConnection) )
#define IDataSource_SaveToObject(This,Source,InterfaceName)( (This)->lpVtbl -> SaveToObject(This,Source,InterfaceName) )
#define IDataSource_OpenObject(This,Source,InterfaceName)( (This)->lpVtbl -> OpenObject(This,Source,InterfaceName) )
#define IDataSource_SaveTo(This,SourceURL,ActiveConnection,Mode,CreateOptions,Options,UserName,Password)( (This)->lpVtbl -> SaveTo(This,SourceURL,ActiveConnection,Mode,CreateOptions,Options,UserName,Password) )
#define IDataSource_Open(This,SourceURL,ActiveConnection,Mode,CreateOptions,Options,UserName,Password)( (This)->lpVtbl -> Open(This,SourceURL,ActiveConnection,Mode,CreateOptions,Options,UserName,Password) )
#define IDataSource_Save(This)( (This)->lpVtbl -> Save(This) )
#define IDataSource_SaveToContainer(This,ContainerURL,ActiveConnection,Mode,CreateOptions,Options,UserName,Password)( (This)->lpVtbl -> SaveToContainer(This,ContainerURL,ActiveConnection,Mode,CreateOptions,Options,UserName,Password) )
#endif
#endif
#ifndef __IMessage_INTERFACE_DEFINED__
#define __IMessage_INTERFACE_DEFINED__
extern const IID IID_IMessage;
typedef struct IMessageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMessage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMessage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMessage * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMessage * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMessage * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMessage * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMessage * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_BCC) (IMessage * This, BSTR * pBCC);
	HRESULT(STDMETHODCALLTYPE * put_BCC) (IMessage * This, BSTR varBCC);
	HRESULT(STDMETHODCALLTYPE * get_CC) (IMessage * This, BSTR * pCC);
	HRESULT(STDMETHODCALLTYPE * put_CC) (IMessage * This, BSTR varCC);
	HRESULT(STDMETHODCALLTYPE * get_FollowUpTo) (IMessage * This, BSTR * pFollowUpTo);
	HRESULT(STDMETHODCALLTYPE * put_FollowUpTo) (IMessage * This, BSTR varFollowUpTo);
	HRESULT(STDMETHODCALLTYPE * get_From) (IMessage * This, BSTR * pFrom);
	HRESULT(STDMETHODCALLTYPE * put_From) (IMessage * This, BSTR varFrom);
	HRESULT(STDMETHODCALLTYPE * get_Keywords) (IMessage * This, BSTR * pKeywords);
	HRESULT(STDMETHODCALLTYPE * put_Keywords) (IMessage * This, BSTR varKeywords);
	HRESULT(STDMETHODCALLTYPE * get_MimeFormatted) (IMessage * This, VARIANT_BOOL * pMimeFormatted);
	HRESULT(STDMETHODCALLTYPE * put_MimeFormatted) (IMessage * This, VARIANT_BOOL varMimeFormatted);
	HRESULT(STDMETHODCALLTYPE * get_Newsgroups) (IMessage * This, BSTR * pNewsgroups);
	HRESULT(STDMETHODCALLTYPE * put_Newsgroups) (IMessage * This, BSTR varNewsgroups);
	HRESULT(STDMETHODCALLTYPE * get_Organization) (IMessage * This, BSTR * pOrganization);
	HRESULT(STDMETHODCALLTYPE * put_Organization) (IMessage * This, BSTR varOrganization);
	HRESULT(STDMETHODCALLTYPE * get_ReceivedTime) (IMessage * This, DATE * varReceivedTime);
	HRESULT(STDMETHODCALLTYPE * get_ReplyTo) (IMessage * This, BSTR * pReplyTo);
	HRESULT(STDMETHODCALLTYPE * put_ReplyTo) (IMessage * This, BSTR varReplyTo);
	HRESULT(STDMETHODCALLTYPE * get_DSNOptions) (IMessage * This, CdoDSNOptions * pDSNOptions);
	HRESULT(STDMETHODCALLTYPE * put_DSNOptions) (IMessage * This, CdoDSNOptions varDSNOptions);
	HRESULT(STDMETHODCALLTYPE * get_SentOn) (IMessage * This, DATE * varSentOn);
	HRESULT(STDMETHODCALLTYPE * get_Subject) (IMessage * This, BSTR * pSubject);
	HRESULT(STDMETHODCALLTYPE * put_Subject) (IMessage * This, BSTR varSubject);
	HRESULT(STDMETHODCALLTYPE * get_To) (IMessage * This, BSTR * pTo);
	HRESULT(STDMETHODCALLTYPE * put_To) (IMessage * This, BSTR varTo);
	HRESULT(STDMETHODCALLTYPE * get_TextBody) (IMessage * This, BSTR * pTextBody);
	HRESULT(STDMETHODCALLTYPE * put_TextBody) (IMessage * This, BSTR varTextBody);
	HRESULT(STDMETHODCALLTYPE * get_HTMLBody) (IMessage * This, BSTR * pHTMLBody);
	HRESULT(STDMETHODCALLTYPE * put_HTMLBody) (IMessage * This, BSTR varHTMLBody);
	HRESULT(STDMETHODCALLTYPE * get_Attachments) (IMessage * This, IBodyParts ** varAttachments);
	HRESULT(STDMETHODCALLTYPE * get_Sender) (IMessage * This, BSTR * pSender);
	HRESULT(STDMETHODCALLTYPE * put_Sender) (IMessage * This, BSTR varSender);
	HRESULT(STDMETHODCALLTYPE * get_Configuration) (IMessage * This, IConfiguration ** pConfiguration);
	HRESULT(STDMETHODCALLTYPE * put_Configuration) (IMessage * This, IConfiguration * varConfiguration);
	HRESULT(STDMETHODCALLTYPE * putref_Configuration) (IMessage * This, IConfiguration * varConfiguration);
	HRESULT(STDMETHODCALLTYPE * get_AutoGenerateTextBody) (IMessage * This, VARIANT_BOOL * pAutoGenerateTextBody);
	HRESULT(STDMETHODCALLTYPE * put_AutoGenerateTextBody) (IMessage * This, VARIANT_BOOL varAutoGenerateTextBody);
	HRESULT(STDMETHODCALLTYPE * get_EnvelopeFields) (IMessage * This, Fields ** varEnvelopeFields);
	HRESULT(STDMETHODCALLTYPE * get_TextBodyPart) (IMessage * This, IBodyPart ** varTextBodyPart);
	HRESULT(STDMETHODCALLTYPE * get_HTMLBodyPart) (IMessage * This, IBodyPart ** varHTMLBodyPart);
	HRESULT(STDMETHODCALLTYPE * get_BodyPart) (IMessage * This, IBodyPart ** varBodyPart);
	HRESULT(STDMETHODCALLTYPE * get_DataSource) (IMessage * This, IDataSource ** varDataSource);
	HRESULT(STDMETHODCALLTYPE * get_Fields) (IMessage * This, Fields ** varFields);
	HRESULT(STDMETHODCALLTYPE * get_MDNRequested) (IMessage * This, VARIANT_BOOL * pMDNRequested);
	HRESULT(STDMETHODCALLTYPE * put_MDNRequested) (IMessage * This, VARIANT_BOOL varMDNRequested);
	HRESULT(STDMETHODCALLTYPE * AddRelatedBodyPart) (IMessage * This, BSTR URL, BSTR Reference, CdoReferenceType ReferenceType, BSTR UserName, BSTR Password, IBodyPart ** ppBody);
	HRESULT(STDMETHODCALLTYPE * AddAttachment) (IMessage * This, BSTR URL, BSTR UserName, BSTR Password, IBodyPart ** ppBody);
	HRESULT(STDMETHODCALLTYPE * CreateMHTMLBody) (IMessage * This, BSTR URL, CdoMHTMLFlags Flags, BSTR UserName, BSTR Password);
	HRESULT(STDMETHODCALLTYPE * Forward) (IMessage * This, IMessage ** ppMsg);
	HRESULT(STDMETHODCALLTYPE * Post) (IMessage * This);
	HRESULT(STDMETHODCALLTYPE * PostReply) (IMessage * This, IMessage ** ppMsg);
	HRESULT(STDMETHODCALLTYPE * Reply) (IMessage * This, IMessage ** ppMsg);
	HRESULT(STDMETHODCALLTYPE * ReplyAll) (IMessage * This, IMessage ** ppMsg);
	HRESULT(STDMETHODCALLTYPE * Send) (IMessage * This);
	HRESULT(STDMETHODCALLTYPE * GetStream) (IMessage * This, _Stream ** ppStream);
	HRESULT(STDMETHODCALLTYPE * GetInterface) (IMessage * This, BSTR Interface, IDispatch ** ppUnknown);
	END_INTERFACE
}  IMessageVtbl;
interface IMessage
{
	CONST_VTBL struct IMessageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMessage_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMessage_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMessage_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMessage_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMessage_get_BCC(This,pBCC)( (This)->lpVtbl -> get_BCC(This,pBCC) )
#define IMessage_put_BCC(This,varBCC)( (This)->lpVtbl -> put_BCC(This,varBCC) )
#define IMessage_get_CC(This,pCC)( (This)->lpVtbl -> get_CC(This,pCC) )
#define IMessage_put_CC(This,varCC)( (This)->lpVtbl -> put_CC(This,varCC) )
#define IMessage_get_FollowUpTo(This,pFollowUpTo)( (This)->lpVtbl -> get_FollowUpTo(This,pFollowUpTo) )
#define IMessage_put_FollowUpTo(This,varFollowUpTo)( (This)->lpVtbl -> put_FollowUpTo(This,varFollowUpTo) )
#define IMessage_get_From(This,pFrom)( (This)->lpVtbl -> get_From(This,pFrom) )
#define IMessage_put_From(This,varFrom)( (This)->lpVtbl -> put_From(This,varFrom) )
#define IMessage_get_Keywords(This,pKeywords)( (This)->lpVtbl -> get_Keywords(This,pKeywords) )
#define IMessage_put_Keywords(This,varKeywords)( (This)->lpVtbl -> put_Keywords(This,varKeywords) )
#define IMessage_get_MimeFormatted(This,pMimeFormatted)( (This)->lpVtbl -> get_MimeFormatted(This,pMimeFormatted) )
#define IMessage_put_MimeFormatted(This,varMimeFormatted)( (This)->lpVtbl -> put_MimeFormatted(This,varMimeFormatted) )
#define IMessage_get_Newsgroups(This,pNewsgroups)( (This)->lpVtbl -> get_Newsgroups(This,pNewsgroups) )
#define IMessage_put_Newsgroups(This,varNewsgroups)( (This)->lpVtbl -> put_Newsgroups(This,varNewsgroups) )
#define IMessage_get_Organization(This,pOrganization)( (This)->lpVtbl -> get_Organization(This,pOrganization) )
#define IMessage_put_Organization(This,varOrganization)( (This)->lpVtbl -> put_Organization(This,varOrganization) )
#define IMessage_get_ReceivedTime(This,varReceivedTime)( (This)->lpVtbl -> get_ReceivedTime(This,varReceivedTime) )
#define IMessage_get_ReplyTo(This,pReplyTo)( (This)->lpVtbl -> get_ReplyTo(This,pReplyTo) )
#define IMessage_put_ReplyTo(This,varReplyTo)( (This)->lpVtbl -> put_ReplyTo(This,varReplyTo) )
#define IMessage_get_DSNOptions(This,pDSNOptions)( (This)->lpVtbl -> get_DSNOptions(This,pDSNOptions) )
#define IMessage_put_DSNOptions(This,varDSNOptions)( (This)->lpVtbl -> put_DSNOptions(This,varDSNOptions) )
#define IMessage_get_SentOn(This,varSentOn)( (This)->lpVtbl -> get_SentOn(This,varSentOn) )
#define IMessage_get_Subject(This,pSubject)( (This)->lpVtbl -> get_Subject(This,pSubject) )
#define IMessage_put_Subject(This,varSubject)( (This)->lpVtbl -> put_Subject(This,varSubject) )
#define IMessage_get_To(This,pTo)( (This)->lpVtbl -> get_To(This,pTo) )
#define IMessage_put_To(This,varTo)( (This)->lpVtbl -> put_To(This,varTo) )
#define IMessage_get_TextBody(This,pTextBody)( (This)->lpVtbl -> get_TextBody(This,pTextBody) )
#define IMessage_put_TextBody(This,varTextBody)( (This)->lpVtbl -> put_TextBody(This,varTextBody) )
#define IMessage_get_HTMLBody(This,pHTMLBody)( (This)->lpVtbl -> get_HTMLBody(This,pHTMLBody) )
#define IMessage_put_HTMLBody(This,varHTMLBody)( (This)->lpVtbl -> put_HTMLBody(This,varHTMLBody) )
#define IMessage_get_Attachments(This,varAttachments)( (This)->lpVtbl -> get_Attachments(This,varAttachments) )
#define IMessage_get_Sender(This,pSender)( (This)->lpVtbl -> get_Sender(This,pSender) )
#define IMessage_put_Sender(This,varSender)( (This)->lpVtbl -> put_Sender(This,varSender) )
#define IMessage_get_Configuration(This,pConfiguration)( (This)->lpVtbl -> get_Configuration(This,pConfiguration) )
#define IMessage_put_Configuration(This,varConfiguration)( (This)->lpVtbl -> put_Configuration(This,varConfiguration) )
#define IMessage_putref_Configuration(This,varConfiguration)( (This)->lpVtbl -> putref_Configuration(This,varConfiguration) )
#define IMessage_get_AutoGenerateTextBody(This,pAutoGenerateTextBody)( (This)->lpVtbl -> get_AutoGenerateTextBody(This,pAutoGenerateTextBody) )
#define IMessage_put_AutoGenerateTextBody(This,varAutoGenerateTextBody)( (This)->lpVtbl -> put_AutoGenerateTextBody(This,varAutoGenerateTextBody) )
#define IMessage_get_EnvelopeFields(This,varEnvelopeFields)( (This)->lpVtbl -> get_EnvelopeFields(This,varEnvelopeFields) )
#define IMessage_get_TextBodyPart(This,varTextBodyPart)( (This)->lpVtbl -> get_TextBodyPart(This,varTextBodyPart) )
#define IMessage_get_HTMLBodyPart(This,varHTMLBodyPart)( (This)->lpVtbl -> get_HTMLBodyPart(This,varHTMLBodyPart) )
#define IMessage_get_BodyPart(This,varBodyPart)( (This)->lpVtbl -> get_BodyPart(This,varBodyPart) )
#define IMessage_get_DataSource(This,varDataSource)( (This)->lpVtbl -> get_DataSource(This,varDataSource) )
#define IMessage_get_Fields(This,varFields)( (This)->lpVtbl -> get_Fields(This,varFields) )
#define IMessage_get_MDNRequested(This,pMDNRequested)( (This)->lpVtbl -> get_MDNRequested(This,pMDNRequested) )
#define IMessage_put_MDNRequested(This,varMDNRequested)( (This)->lpVtbl -> put_MDNRequested(This,varMDNRequested) )
#define IMessage_AddRelatedBodyPart(This,URL,Reference,ReferenceType,UserName,Password,ppBody)( (This)->lpVtbl -> AddRelatedBodyPart(This,URL,Reference,ReferenceType,UserName,Password,ppBody) )
#define IMessage_AddAttachment(This,URL,UserName,Password,ppBody)( (This)->lpVtbl -> AddAttachment(This,URL,UserName,Password,ppBody) )
#define IMessage_CreateMHTMLBody(This,URL,Flags,UserName,Password)( (This)->lpVtbl -> CreateMHTMLBody(This,URL,Flags,UserName,Password) )
#define IMessage_Forward(This,ppMsg)( (This)->lpVtbl -> Forward(This,ppMsg) )
#define IMessage_Post(This)( (This)->lpVtbl -> Post(This) )
#define IMessage_PostReply(This,ppMsg)( (This)->lpVtbl -> PostReply(This,ppMsg) )
#define IMessage_Reply(This,ppMsg)( (This)->lpVtbl -> Reply(This,ppMsg) )
#define IMessage_ReplyAll(This,ppMsg)( (This)->lpVtbl -> ReplyAll(This,ppMsg) )
#define IMessage_Send(This)( (This)->lpVtbl -> Send(This) )
#define IMessage_GetStream(This,ppStream)( (This)->lpVtbl -> GetStream(This,ppStream) )
#define IMessage_GetInterface(This,Interface,ppUnknown)( (This)->lpVtbl -> GetInterface(This,Interface,ppUnknown) )
#endif
#endif
#ifndef __IBodyPart_INTERFACE_DEFINED__
#define __IBodyPart_INTERFACE_DEFINED__
extern const IID IID_IBodyPart;
typedef struct IBodyPartVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBodyPart * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBodyPart * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBodyPart * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IBodyPart * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IBodyPart * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IBodyPart * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IBodyPart * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_BodyParts) (IBodyPart * This, IBodyParts ** varBodyParts);
	HRESULT(STDMETHODCALLTYPE * get_ContentTransferEncoding) (IBodyPart * This, BSTR * pContentTransferEncoding);
	HRESULT(STDMETHODCALLTYPE * put_ContentTransferEncoding) (IBodyPart * This, BSTR varContentTransferEncoding);
	HRESULT(STDMETHODCALLTYPE * get_ContentMediaType) (IBodyPart * This, BSTR * pContentMediaType);
	HRESULT(STDMETHODCALLTYPE * put_ContentMediaType) (IBodyPart * This, BSTR varContentMediaType);
	HRESULT(STDMETHODCALLTYPE * get_Fields) (IBodyPart * This, Fields ** varFields);
	HRESULT(STDMETHODCALLTYPE * get_Charset) (IBodyPart * This, BSTR * pCharset);
	HRESULT(STDMETHODCALLTYPE * put_Charset) (IBodyPart * This, BSTR varCharset);
	HRESULT(STDMETHODCALLTYPE * get_FileName) (IBodyPart * This, BSTR * varFileName);
	HRESULT(STDMETHODCALLTYPE * get_DataSource) (IBodyPart * This, IDataSource ** varDataSource);
	HRESULT(STDMETHODCALLTYPE * get_ContentClass) (IBodyPart * This, BSTR * pContentClass);
	HRESULT(STDMETHODCALLTYPE * put_ContentClass) (IBodyPart * This, BSTR varContentClass);
	HRESULT(STDMETHODCALLTYPE * get_ContentClassName) (IBodyPart * This, BSTR * pContentClassName);
	HRESULT(STDMETHODCALLTYPE * put_ContentClassName) (IBodyPart * This, BSTR varContentClassName);
	HRESULT(STDMETHODCALLTYPE * get_Parent) (IBodyPart * This, IBodyPart ** varParent);
	HRESULT(STDMETHODCALLTYPE * AddBodyPart) (IBodyPart * This, long Index, IBodyPart ** ppPart);
	HRESULT(STDMETHODCALLTYPE * SaveToFile) (IBodyPart * This, BSTR FileName);
	HRESULT(STDMETHODCALLTYPE * GetEncodedContentStream) (IBodyPart * This, _Stream ** ppStream);
	HRESULT(STDMETHODCALLTYPE * GetDecodedContentStream) (IBodyPart * This, _Stream ** ppStream);
	HRESULT(STDMETHODCALLTYPE * GetStream) (IBodyPart * This, _Stream ** ppStream);
	HRESULT(STDMETHODCALLTYPE * GetFieldParameter) (IBodyPart * This, BSTR FieldName, BSTR Parameter, BSTR * pbstrValue);
	HRESULT(STDMETHODCALLTYPE * GetInterface) (IBodyPart * This, BSTR Interface, IDispatch ** ppUnknown);
	END_INTERFACE
}  IBodyPartVtbl;
interface IBodyPart
{
	CONST_VTBL struct IBodyPartVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBodyPart_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBodyPart_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBodyPart_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBodyPart_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IBodyPart_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IBodyPart_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IBodyPart_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IBodyPart_get_BodyParts(This,varBodyParts)( (This)->lpVtbl -> get_BodyParts(This,varBodyParts) )
#define IBodyPart_get_ContentTransferEncoding(This,pContentTransferEncoding)( (This)->lpVtbl -> get_ContentTransferEncoding(This,pContentTransferEncoding) )
#define IBodyPart_put_ContentTransferEncoding(This,varContentTransferEncoding)( (This)->lpVtbl -> put_ContentTransferEncoding(This,varContentTransferEncoding) )
#define IBodyPart_get_ContentMediaType(This,pContentMediaType)( (This)->lpVtbl -> get_ContentMediaType(This,pContentMediaType) )
#define IBodyPart_put_ContentMediaType(This,varContentMediaType)( (This)->lpVtbl -> put_ContentMediaType(This,varContentMediaType) )
#define IBodyPart_get_Fields(This,varFields)( (This)->lpVtbl -> get_Fields(This,varFields) )
#define IBodyPart_get_Charset(This,pCharset)( (This)->lpVtbl -> get_Charset(This,pCharset) )
#define IBodyPart_put_Charset(This,varCharset)( (This)->lpVtbl -> put_Charset(This,varCharset) )
#define IBodyPart_get_FileName(This,varFileName)( (This)->lpVtbl -> get_FileName(This,varFileName) )
#define IBodyPart_get_DataSource(This,varDataSource)( (This)->lpVtbl -> get_DataSource(This,varDataSource) )
#define IBodyPart_get_ContentClass(This,pContentClass)( (This)->lpVtbl -> get_ContentClass(This,pContentClass) )
#define IBodyPart_put_ContentClass(This,varContentClass)( (This)->lpVtbl -> put_ContentClass(This,varContentClass) )
#define IBodyPart_get_ContentClassName(This,pContentClassName)( (This)->lpVtbl -> get_ContentClassName(This,pContentClassName) )
#define IBodyPart_put_ContentClassName(This,varContentClassName)( (This)->lpVtbl -> put_ContentClassName(This,varContentClassName) )
#define IBodyPart_get_Parent(This,varParent)( (This)->lpVtbl -> get_Parent(This,varParent) )
#define IBodyPart_AddBodyPart(This,Index,ppPart)( (This)->lpVtbl -> AddBodyPart(This,Index,ppPart) )
#define IBodyPart_SaveToFile(This,FileName)( (This)->lpVtbl -> SaveToFile(This,FileName) )
#define IBodyPart_GetEncodedContentStream(This,ppStream)( (This)->lpVtbl -> GetEncodedContentStream(This,ppStream) )
#define IBodyPart_GetDecodedContentStream(This,ppStream)( (This)->lpVtbl -> GetDecodedContentStream(This,ppStream) )
#define IBodyPart_GetStream(This,ppStream)( (This)->lpVtbl -> GetStream(This,ppStream) )
#define IBodyPart_GetFieldParameter(This,FieldName,Parameter,pbstrValue)( (This)->lpVtbl -> GetFieldParameter(This,FieldName,Parameter,pbstrValue) )
#define IBodyPart_GetInterface(This,Interface,ppUnknown)( (This)->lpVtbl -> GetInterface(This,Interface,ppUnknown) )
#endif
#endif
#ifndef __IConfiguration_INTERFACE_DEFINED__
#define __IConfiguration_INTERFACE_DEFINED__
extern const IID IID_IConfiguration;
typedef struct IConfigurationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IConfiguration * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IConfiguration * This);
	ULONG(STDMETHODCALLTYPE * Release) (IConfiguration * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IConfiguration * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IConfiguration * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IConfiguration * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IConfiguration * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Fields) (IConfiguration * This, Fields ** varFields);
	HRESULT(STDMETHODCALLTYPE * Load) (IConfiguration * This, CdoConfigSource LoadFrom, BSTR URL);
	HRESULT(STDMETHODCALLTYPE * GetInterface) (IConfiguration * This, BSTR Interface, IDispatch ** ppUnknown);
	END_INTERFACE
}  IConfigurationVtbl;
interface IConfiguration
{
	CONST_VTBL struct IConfigurationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConfiguration_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConfiguration_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IConfiguration_Release(This)( (This)->lpVtbl -> Release(This) )
#define IConfiguration_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IConfiguration_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IConfiguration_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IConfiguration_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IConfiguration_get_Fields(This,varFields)( (This)->lpVtbl -> get_Fields(This,varFields) )
#define IConfiguration_Load(This,LoadFrom,URL)( (This)->lpVtbl -> Load(This,LoadFrom,URL) )
#define IConfiguration_GetInterface(This,Interface,ppUnknown)( (This)->lpVtbl -> GetInterface(This,Interface,ppUnknown) )
#endif
#endif
#ifndef __IMessages_INTERFACE_DEFINED__
#define __IMessages_INTERFACE_DEFINED__
extern const IID IID_IMessages;
typedef struct IMessagesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMessages * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMessages * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMessages * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMessages * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMessages * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMessages * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMessages * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IMessages * This, long Index, IMessage ** ppMessage);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IMessages * This, long *varCount);
	HRESULT(STDMETHODCALLTYPE * Delete) (IMessages * This, long Index);
	HRESULT(STDMETHODCALLTYPE * DeleteAll) (IMessages * This);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IMessages * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Filename) (IMessages * This, VARIANT var, BSTR * Filename);
	END_INTERFACE
}  IMessagesVtbl;
interface IMessages
{
	CONST_VTBL struct IMessagesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMessages_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMessages_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMessages_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMessages_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IMessages_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IMessages_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IMessages_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IMessages_get_Item(This,Index,ppMessage)( (This)->lpVtbl -> get_Item(This,Index,ppMessage) )
#define IMessages_get_Count(This,varCount)( (This)->lpVtbl -> get_Count(This,varCount) )
#define IMessages_Delete(This,Index)( (This)->lpVtbl -> Delete(This,Index) )
#define IMessages_DeleteAll(This)( (This)->lpVtbl -> DeleteAll(This) )
#define IMessages_get__NewEnum(This,retval)( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IMessages_get_Filename(This,var,Filename)( (This)->lpVtbl -> get_Filename(This,var,Filename) )
#endif
#endif
#ifndef __IDropDirectory_INTERFACE_DEFINED__
#define __IDropDirectory_INTERFACE_DEFINED__
extern const IID IID_IDropDirectory;
typedef struct IDropDirectoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDropDirectory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDropDirectory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDropDirectory * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDropDirectory * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDropDirectory * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDropDirectory * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDropDirectory * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetMessages) (IDropDirectory * This, BSTR DirName, IMessages ** Msgs);
	END_INTERFACE
}  IDropDirectoryVtbl;
interface IDropDirectory
{
	CONST_VTBL struct IDropDirectoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDropDirectory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDropDirectory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDropDirectory_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDropDirectory_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDropDirectory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDropDirectory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDropDirectory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDropDirectory_GetMessages(This,DirName,Msgs)( (This)->lpVtbl -> GetMessages(This,DirName,Msgs) )
#endif
#endif
#ifndef __IBodyParts_INTERFACE_DEFINED__
#define __IBodyParts_INTERFACE_DEFINED__
extern const IID IID_IBodyParts;
typedef struct IBodyPartsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBodyParts * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBodyParts * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBodyParts * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IBodyParts * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IBodyParts * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IBodyParts * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IBodyParts * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IBodyParts * This, long *varCount);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IBodyParts * This, long Index, IBodyPart ** ppBody);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IBodyParts * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * Delete) (IBodyParts * This, VARIANT varBP);
	HRESULT(STDMETHODCALLTYPE * DeleteAll) (IBodyParts * This);
	HRESULT(STDMETHODCALLTYPE * Add) (IBodyParts * This, long Index, IBodyPart ** ppPart);
	END_INTERFACE
}  IBodyPartsVtbl;
interface IBodyParts
{
	CONST_VTBL struct IBodyPartsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBodyParts_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBodyParts_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IBodyParts_Release(This)( (This)->lpVtbl -> Release(This) )
#define IBodyParts_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IBodyParts_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IBodyParts_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IBodyParts_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IBodyParts_get_Count(This,varCount)( (This)->lpVtbl -> get_Count(This,varCount) )
#define IBodyParts_get_Item(This,Index,ppBody)( (This)->lpVtbl -> get_Item(This,Index,ppBody) )
#define IBodyParts_get__NewEnum(This,retval)( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define IBodyParts_Delete(This,varBP)( (This)->lpVtbl -> Delete(This,varBP) )
#define IBodyParts_DeleteAll(This)( (This)->lpVtbl -> DeleteAll(This) )
#define IBodyParts_Add(This,Index,ppPart)( (This)->lpVtbl -> Add(This,Index,ppPart) )
#endif
#endif
#ifndef __ISMTPScriptConnector_INTERFACE_DEFINED__
#define __ISMTPScriptConnector_INTERFACE_DEFINED__
extern const IID IID_ISMTPScriptConnector;
typedef struct ISMTPScriptConnectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISMTPScriptConnector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISMTPScriptConnector * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISMTPScriptConnector * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISMTPScriptConnector * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISMTPScriptConnector * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISMTPScriptConnector * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISMTPScriptConnector * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  ISMTPScriptConnectorVtbl;
interface ISMTPScriptConnector
{
	CONST_VTBL struct ISMTPScriptConnectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISMTPScriptConnector_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISMTPScriptConnector_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISMTPScriptConnector_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISMTPScriptConnector_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISMTPScriptConnector_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISMTPScriptConnector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISMTPScriptConnector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __INNTPEarlyScriptConnector_INTERFACE_DEFINED__
#define __INNTPEarlyScriptConnector_INTERFACE_DEFINED__
extern const IID IID_INNTPEarlyScriptConnector;
typedef struct INNTPEarlyScriptConnectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INNTPEarlyScriptConnector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INNTPEarlyScriptConnector * This);
	ULONG(STDMETHODCALLTYPE * Release) (INNTPEarlyScriptConnector * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INNTPEarlyScriptConnector * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INNTPEarlyScriptConnector * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INNTPEarlyScriptConnector * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INNTPEarlyScriptConnector * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  INNTPEarlyScriptConnectorVtbl;
interface INNTPEarlyScriptConnector
{
	CONST_VTBL struct INNTPEarlyScriptConnectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INNTPEarlyScriptConnector_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INNTPEarlyScriptConnector_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INNTPEarlyScriptConnector_Release(This)( (This)->lpVtbl -> Release(This) )
#define INNTPEarlyScriptConnector_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INNTPEarlyScriptConnector_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INNTPEarlyScriptConnector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INNTPEarlyScriptConnector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __INNTPPostScriptConnector_INTERFACE_DEFINED__
#define __INNTPPostScriptConnector_INTERFACE_DEFINED__
extern const IID IID_INNTPPostScriptConnector;
typedef struct INNTPPostScriptConnectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INNTPPostScriptConnector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INNTPPostScriptConnector * This);
	ULONG(STDMETHODCALLTYPE * Release) (INNTPPostScriptConnector * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INNTPPostScriptConnector * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INNTPPostScriptConnector * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INNTPPostScriptConnector * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INNTPPostScriptConnector * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  INNTPPostScriptConnectorVtbl;
interface INNTPPostScriptConnector
{
	CONST_VTBL struct INNTPPostScriptConnectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INNTPPostScriptConnector_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INNTPPostScriptConnector_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INNTPPostScriptConnector_Release(This)( (This)->lpVtbl -> Release(This) )
#define INNTPPostScriptConnector_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INNTPPostScriptConnector_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INNTPPostScriptConnector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INNTPPostScriptConnector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __INNTPFinalScriptConnector_INTERFACE_DEFINED__
#define __INNTPFinalScriptConnector_INTERFACE_DEFINED__
extern const IID IID_INNTPFinalScriptConnector;
typedef struct INNTPFinalScriptConnectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INNTPFinalScriptConnector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INNTPFinalScriptConnector * This);
	ULONG(STDMETHODCALLTYPE * Release) (INNTPFinalScriptConnector * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INNTPFinalScriptConnector * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INNTPFinalScriptConnector * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INNTPFinalScriptConnector * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INNTPFinalScriptConnector * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  INNTPFinalScriptConnectorVtbl;
interface INNTPFinalScriptConnector
{
	CONST_VTBL struct INNTPFinalScriptConnectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INNTPFinalScriptConnector_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INNTPFinalScriptConnector_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INNTPFinalScriptConnector_Release(This)( (This)->lpVtbl -> Release(This) )
#define INNTPFinalScriptConnector_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INNTPFinalScriptConnector_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INNTPFinalScriptConnector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INNTPFinalScriptConnector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __ISMTPOnArrival_INTERFACE_DEFINED__
#define __ISMTPOnArrival_INTERFACE_DEFINED__
extern const IID IID_ISMTPOnArrival;
typedef struct ISMTPOnArrivalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISMTPOnArrival * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISMTPOnArrival * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISMTPOnArrival * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ISMTPOnArrival * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ISMTPOnArrival * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ISMTPOnArrival * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ISMTPOnArrival * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * OnArrival) (ISMTPOnArrival * This, IMessage * Msg, CdoEventStatus * EventStatus);
	END_INTERFACE
}  ISMTPOnArrivalVtbl;
interface ISMTPOnArrival
{
	CONST_VTBL struct ISMTPOnArrivalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISMTPOnArrival_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISMTPOnArrival_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISMTPOnArrival_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISMTPOnArrival_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ISMTPOnArrival_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ISMTPOnArrival_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ISMTPOnArrival_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ISMTPOnArrival_OnArrival(This,Msg,EventStatus)( (This)->lpVtbl -> OnArrival(This,Msg,EventStatus) )
#endif
#endif
#ifndef __INNTPOnPostEarly_INTERFACE_DEFINED__
#define __INNTPOnPostEarly_INTERFACE_DEFINED__
extern const IID IID_INNTPOnPostEarly;
typedef struct INNTPOnPostEarlyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INNTPOnPostEarly * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INNTPOnPostEarly * This);
	ULONG(STDMETHODCALLTYPE * Release) (INNTPOnPostEarly * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INNTPOnPostEarly * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INNTPOnPostEarly * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INNTPOnPostEarly * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INNTPOnPostEarly * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * OnPostEarly) (INNTPOnPostEarly * This, IMessage * Msg, CdoEventStatus * EventStatus);
	END_INTERFACE
}  INNTPOnPostEarlyVtbl;
interface INNTPOnPostEarly
{
	CONST_VTBL struct INNTPOnPostEarlyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INNTPOnPostEarly_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INNTPOnPostEarly_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INNTPOnPostEarly_Release(This)( (This)->lpVtbl -> Release(This) )
#define INNTPOnPostEarly_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INNTPOnPostEarly_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INNTPOnPostEarly_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INNTPOnPostEarly_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INNTPOnPostEarly_OnPostEarly(This,Msg,EventStatus)( (This)->lpVtbl -> OnPostEarly(This,Msg,EventStatus) )
#endif
#endif
#ifndef __INNTPOnPost_INTERFACE_DEFINED__
#define __INNTPOnPost_INTERFACE_DEFINED__
extern const IID IID_INNTPOnPost;
typedef struct INNTPOnPostVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INNTPOnPost * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INNTPOnPost * This);
	ULONG(STDMETHODCALLTYPE * Release) (INNTPOnPost * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INNTPOnPost * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INNTPOnPost * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INNTPOnPost * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INNTPOnPost * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * OnPost) (INNTPOnPost * This, IMessage * Msg, CdoEventStatus * EventStatus);
	END_INTERFACE
}  INNTPOnPostVtbl;
interface INNTPOnPost
{
	CONST_VTBL struct INNTPOnPostVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INNTPOnPost_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INNTPOnPost_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INNTPOnPost_Release(This)( (This)->lpVtbl -> Release(This) )
#define INNTPOnPost_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INNTPOnPost_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INNTPOnPost_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INNTPOnPost_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INNTPOnPost_OnPost(This,Msg,EventStatus)( (This)->lpVtbl -> OnPost(This,Msg,EventStatus) )
#endif
#endif
#ifndef __INNTPOnPostFinal_INTERFACE_DEFINED__
#define __INNTPOnPostFinal_INTERFACE_DEFINED__
extern const IID IID_INNTPOnPostFinal;
typedef struct INNTPOnPostFinalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (INNTPOnPostFinal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (INNTPOnPostFinal * This);
	ULONG(STDMETHODCALLTYPE * Release) (INNTPOnPostFinal * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (INNTPOnPostFinal * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (INNTPOnPostFinal * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (INNTPOnPostFinal * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (INNTPOnPostFinal * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * OnPostFinal) (INNTPOnPostFinal * This, IMessage * Msg, CdoEventStatus * EventStatus);
	END_INTERFACE
}  INNTPOnPostFinalVtbl;
interface INNTPOnPostFinal
{
	CONST_VTBL struct INNTPOnPostFinalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INNTPOnPostFinal_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INNTPOnPostFinal_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INNTPOnPostFinal_Release(This)( (This)->lpVtbl -> Release(This) )
#define INNTPOnPostFinal_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INNTPOnPostFinal_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INNTPOnPostFinal_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INNTPOnPostFinal_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INNTPOnPostFinal_OnPostFinal(This,Msg,EventStatus)( (This)->lpVtbl -> OnPostFinal(This,Msg,EventStatus) )
#endif
#endif
#ifndef __IProxyObject_INTERFACE_DEFINED__
#define __IProxyObject_INTERFACE_DEFINED__
extern const IID IID_IProxyObject;
typedef struct IProxyObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProxyObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProxyObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProxyObject * This);
	HRESULT(STDMETHODCALLTYPE * get_Object) (IProxyObject * This, IUnknown ** ppParent);
	END_INTERFACE
}  IProxyObjectVtbl;
interface IProxyObject
{
	CONST_VTBL struct IProxyObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProxyObject_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProxyObject_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IProxyObject_Release(This)( (This)->lpVtbl -> Release(This) )
#define IProxyObject_get_Object(This,ppParent)( (This)->lpVtbl -> get_Object(This,ppParent) )
#endif
#endif
#ifndef __IGetInterface_INTERFACE_DEFINED__
#define __IGetInterface_INTERFACE_DEFINED__
extern const IID IID_IGetInterface;
typedef struct IGetInterfaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGetInterface * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGetInterface * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGetInterface * This);
	HRESULT(STDMETHODCALLTYPE * GetInterface) (IGetInterface * This, BSTR Interface, IDispatch ** ppUnknown);
	HRESULT(STDMETHODCALLTYPE * GetInterfaceInner) (IGetInterface * This, BSTR Interface, IDispatch ** ppUnknown);
	END_INTERFACE
}  IGetInterfaceVtbl;
interface IGetInterface
{
	CONST_VTBL struct IGetInterfaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetInterface_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetInterface_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGetInterface_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGetInterface_GetInterface(This,Interface,ppUnknown)( (This)->lpVtbl -> GetInterface(This,Interface,ppUnknown) )
#define IGetInterface_GetInterfaceInner(This,Interface,ppUnknown)( (This)->lpVtbl -> GetInterfaceInner(This,Interface,ppUnknown) )
#endif
#endif
#ifndef __CDO_LIBRARY_DEFINED__
#define __CDO_LIBRARY_DEFINED__
extern const IID LIBID_CDO;
#ifndef __CdoErrors_MODULE_DEFINED__
#define __CdoErrors_MODULE_DEFINED__
const LONG CDO_E_UNCAUGHT_EXCEPTION = 0x80040201L;
const LONG CDO_E_NOT_OPENED = 0x80040202L;
const LONG CDO_E_UNSUPPORTED_DATASOURCE = 0x80040203L;
const LONG CDO_E_INVALID_PROPERTYNAME = 0x80040204L;
const LONG CDO_E_PROP_UNSUPPORTED = 0x80040205L;
const LONG CDO_E_INACTIVE = 0x80040206L;
const LONG CDO_E_NO_SUPPORT_FOR_OBJECTS = 0x80040207L;
const LONG CDO_E_NOT_AVAILABLE = 0x80040208L;
const LONG CDO_E_NO_DEFAULT_DROP_DIR = 0x80040209L;
const LONG CDO_E_SMTP_SERVER_REQUIRED = 0x8004020aL;
const LONG CDO_E_NNTP_SERVER_REQUIRED = 0x8004020bL;
const LONG CDO_E_RECIPIENT_MISSING = 0x8004020cL;
const LONG CDO_E_FROM_MISSING = 0x8004020dL;
const LONG CDO_E_SENDER_REJECTED = 0x8004020eL;
const LONG CDO_E_RECIPIENTS_REJECTED = 0x8004020fL;
const LONG CDO_E_NNTP_POST_FAILED = 0x80040210L;
const LONG CDO_E_SMTP_SEND_FAILED = 0x80040211L;
const LONG CDO_E_CONNECTION_DROPPED = 0x80040212L;
const LONG CDO_E_FAILED_TO_CONNECT = 0x80040213L;
const LONG CDO_E_INVALID_POST = 0x80040214L;
const LONG CDO_E_AUTHENTICATION_FAILURE = 0x80040215L;
const LONG CDO_E_INVALID_CONTENT_TYPE = 0x80040216L;
const LONG CDO_E_LOGON_FAILURE = 0x80040217L;
const LONG CDO_E_HTTP_NOT_FOUND = 0x80040218L;
const LONG CDO_E_HTTP_FORBIDDEN = 0x80040219L;
const LONG CDO_E_HTTP_FAILED = 0x8004021aL;
const LONG CDO_E_MULTIPART_NO_DATA = 0x8004021bL;
const LONG CDO_E_INVALID_ENCODING_FOR_MULTIPART = 0x8004021cL;
const LONG CDO_E_UNSAFE_OPERATION = 0x8004021dL;
const LONG CDO_E_PROP_NOT_FOUND = 0x8004021eL;
const LONG CDO_E_INVALID_SEND_OPTION = 0x80040220L;
const LONG CDO_E_INVALID_POST_OPTION = 0x80040221L;
const LONG CDO_E_NO_PICKUP_DIR = 0x80040222L;
const LONG CDO_E_NOT_ALL_DELETED = 0x80040223L;
const LONG CDO_E_NO_METHOD = 0x80040224L;
const LONG CDO_E_PROP_READONLY = 0x80040227L;
const LONG CDO_E_PROP_CANNOT_DELETE = 0x80040228L;
const LONG CDO_E_BAD_DATA = 0x80040229L;
const LONG CDO_E_PROP_NONHEADER = 0x8004022aL;
const LONG CDO_E_INVALID_CHARSET = 0x8004022bL;
const LONG CDO_E_ADOSTREAM_NOT_BOUND = 0x8004022cL;
const LONG CDO_E_CONTENTPROPXML_NOT_FOUND = 0x8004022dL;
const LONG CDO_E_CONTENTPROPXML_WRONG_CHARSET = 0x8004022eL;
const LONG CDO_E_CONTENTPROPXML_PARSE_FAILED = 0x8004022fL;
const LONG CDO_E_CONTENTPROPXML_CONVERT_FAILED = 0x80040230L;
const LONG CDO_E_NO_DIRECTORIES_SPECIFIED = 0x80040231L;
const LONG CDO_E_DIRECTORIES_UNREACHABLE = 0x80040232L;
const LONG CDO_E_BAD_SENDER = 0x80040233L;
const LONG CDO_E_SELF_BINDING = 0x80040234L;
const LONG CDO_E_BAD_ATTENDEE_DATA = 0x80040235L;
const LONG CDO_E_ROLE_NOMORE_AVAILABLE = 0x80040236L;
const LONG CDO_E_BAD_TASKTYPE_ONASSIGN = 0x80040237L;
const LONG CDO_E_NOT_ASSIGNEDTO_USER = 0x80040238L;
const LONG CDO_E_OUTOFDATE = 0x80040239L;
const LONG CDO_E_ARGUMENT1 = 0x80044000L;
const LONG CDO_E_ARGUMENT2 = 0x80044001L;
const LONG CDO_E_ARGUMENT3 = 0x80044002L;
const LONG CDO_E_ARGUMENT4 = 0x80044003L;
const LONG CDO_E_ARGUMENT5 = 0x80044004L;
const LONG CDO_E_NOT_FOUND = 0x800cce05L;
const LONG CDO_E_INVALID_ENCODING_TYPE = 0x800cce1dL;
#endif
extern const CLSID CLSID_Message;
extern const CLSID CLSID_Configuration;
extern const CLSID CLSID_DropDirectory;
extern const CLSID CLSID_SMTPConnector;
extern const CLSID CLSID_NNTPEarlyConnector;
extern const CLSID CLSID_NNTPPostConnector;
extern const CLSID CLSID_NNTPFinalConnector;
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
