/*+@@file@@----------------------------------------------------------------*//*!
 \file		FaxComEx.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 10 16:43:56 2016
 \date		Modified on Sun Jul 10 16:43:56 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
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
#ifndef __faxcomex_h__
#define __faxcomex_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IFaxJobStatus_FWD_DEFINED__
#define __IFaxJobStatus_FWD_DEFINED__
typedef interface IFaxJobStatus IFaxJobStatus;
#endif
#ifndef __IFaxServer_FWD_DEFINED__
#define __IFaxServer_FWD_DEFINED__
typedef interface IFaxServer IFaxServer;
#endif
#ifndef __IFaxDeviceProviders_FWD_DEFINED__
#define __IFaxDeviceProviders_FWD_DEFINED__
typedef interface IFaxDeviceProviders IFaxDeviceProviders;
#endif
#ifndef __IFaxDevices_FWD_DEFINED__
#define __IFaxDevices_FWD_DEFINED__
typedef interface IFaxDevices IFaxDevices;
#endif
#ifndef __IFaxInboundRouting_FWD_DEFINED__
#define __IFaxInboundRouting_FWD_DEFINED__
typedef interface IFaxInboundRouting IFaxInboundRouting;
#endif
#ifndef __IFaxFolders_FWD_DEFINED__
#define __IFaxFolders_FWD_DEFINED__
typedef interface IFaxFolders IFaxFolders;
#endif
#ifndef __IFaxLoggingOptions_FWD_DEFINED__
#define __IFaxLoggingOptions_FWD_DEFINED__
typedef interface IFaxLoggingOptions IFaxLoggingOptions;
#endif
#ifndef __IFaxActivity_FWD_DEFINED__
#define __IFaxActivity_FWD_DEFINED__
typedef interface IFaxActivity IFaxActivity;
#endif
#ifndef __IFaxOutboundRouting_FWD_DEFINED__
#define __IFaxOutboundRouting_FWD_DEFINED__
typedef interface IFaxOutboundRouting IFaxOutboundRouting;
#endif
#ifndef __IFaxReceiptOptions_FWD_DEFINED__
#define __IFaxReceiptOptions_FWD_DEFINED__
typedef interface IFaxReceiptOptions IFaxReceiptOptions;
#endif
#ifndef __IFaxSecurity_FWD_DEFINED__
#define __IFaxSecurity_FWD_DEFINED__
typedef interface IFaxSecurity IFaxSecurity;
#endif
#ifndef __IFaxDocument_FWD_DEFINED__
#define __IFaxDocument_FWD_DEFINED__
typedef interface IFaxDocument IFaxDocument;
#endif
#ifndef __IFaxSender_FWD_DEFINED__
#define __IFaxSender_FWD_DEFINED__
typedef interface IFaxSender IFaxSender;
#endif
#ifndef __IFaxRecipient_FWD_DEFINED__
#define __IFaxRecipient_FWD_DEFINED__
typedef interface IFaxRecipient IFaxRecipient;
#endif
#ifndef __IFaxRecipients_FWD_DEFINED__
#define __IFaxRecipients_FWD_DEFINED__
typedef interface IFaxRecipients IFaxRecipients;
#endif
#ifndef __IFaxIncomingArchive_FWD_DEFINED__
#define __IFaxIncomingArchive_FWD_DEFINED__
typedef interface IFaxIncomingArchive IFaxIncomingArchive;
#endif
#ifndef __IFaxIncomingQueue_FWD_DEFINED__
#define __IFaxIncomingQueue_FWD_DEFINED__
typedef interface IFaxIncomingQueue IFaxIncomingQueue;
#endif
#ifndef __IFaxOutgoingArchive_FWD_DEFINED__
#define __IFaxOutgoingArchive_FWD_DEFINED__
typedef interface IFaxOutgoingArchive IFaxOutgoingArchive;
#endif
#ifndef __IFaxOutgoingQueue_FWD_DEFINED__
#define __IFaxOutgoingQueue_FWD_DEFINED__
typedef interface IFaxOutgoingQueue IFaxOutgoingQueue;
#endif
#ifndef __IFaxIncomingMessageIterator_FWD_DEFINED__
#define __IFaxIncomingMessageIterator_FWD_DEFINED__
typedef interface IFaxIncomingMessageIterator IFaxIncomingMessageIterator;
#endif
#ifndef __IFaxIncomingMessage_FWD_DEFINED__
#define __IFaxIncomingMessage_FWD_DEFINED__
typedef interface IFaxIncomingMessage IFaxIncomingMessage;
#endif
#ifndef __IFaxOutgoingJobs_FWD_DEFINED__
#define __IFaxOutgoingJobs_FWD_DEFINED__
typedef interface IFaxOutgoingJobs IFaxOutgoingJobs;
#endif
#ifndef __IFaxOutgoingJob_FWD_DEFINED__
#define __IFaxOutgoingJob_FWD_DEFINED__
typedef interface IFaxOutgoingJob IFaxOutgoingJob;
#endif
#ifndef __IFaxOutgoingMessageIterator_FWD_DEFINED__
#define __IFaxOutgoingMessageIterator_FWD_DEFINED__
typedef interface IFaxOutgoingMessageIterator IFaxOutgoingMessageIterator;
#endif
#ifndef __IFaxOutgoingMessage_FWD_DEFINED__
#define __IFaxOutgoingMessage_FWD_DEFINED__
typedef interface IFaxOutgoingMessage IFaxOutgoingMessage;
#endif
#ifndef __IFaxIncomingJobs_FWD_DEFINED__
#define __IFaxIncomingJobs_FWD_DEFINED__
typedef interface IFaxIncomingJobs IFaxIncomingJobs;
#endif
#ifndef __IFaxIncomingJob_FWD_DEFINED__
#define __IFaxIncomingJob_FWD_DEFINED__
typedef interface IFaxIncomingJob IFaxIncomingJob;
#endif
#ifndef __IFaxDeviceProvider_FWD_DEFINED__
#define __IFaxDeviceProvider_FWD_DEFINED__
typedef interface IFaxDeviceProvider IFaxDeviceProvider;
#endif
#ifndef __IFaxDevice_FWD_DEFINED__
#define __IFaxDevice_FWD_DEFINED__
typedef interface IFaxDevice IFaxDevice;
#endif
#ifndef __IFaxActivityLogging_FWD_DEFINED__
#define __IFaxActivityLogging_FWD_DEFINED__
typedef interface IFaxActivityLogging IFaxActivityLogging;
#endif
#ifndef __IFaxEventLogging_FWD_DEFINED__
#define __IFaxEventLogging_FWD_DEFINED__
typedef interface IFaxEventLogging IFaxEventLogging;
#endif
#ifndef __IFaxOutboundRoutingGroups_FWD_DEFINED__
#define __IFaxOutboundRoutingGroups_FWD_DEFINED__
typedef interface IFaxOutboundRoutingGroups IFaxOutboundRoutingGroups;
#endif
#ifndef __IFaxOutboundRoutingGroup_FWD_DEFINED__
#define __IFaxOutboundRoutingGroup_FWD_DEFINED__
typedef interface IFaxOutboundRoutingGroup IFaxOutboundRoutingGroup;
#endif
#ifndef __IFaxDeviceIds_FWD_DEFINED__
#define __IFaxDeviceIds_FWD_DEFINED__
typedef interface IFaxDeviceIds IFaxDeviceIds;
#endif
#ifndef __IFaxOutboundRoutingRules_FWD_DEFINED__
#define __IFaxOutboundRoutingRules_FWD_DEFINED__
typedef interface IFaxOutboundRoutingRules IFaxOutboundRoutingRules;
#endif
#ifndef __IFaxOutboundRoutingRule_FWD_DEFINED__
#define __IFaxOutboundRoutingRule_FWD_DEFINED__
typedef interface IFaxOutboundRoutingRule IFaxOutboundRoutingRule;
#endif
#ifndef __IFaxInboundRoutingExtensions_FWD_DEFINED__
#define __IFaxInboundRoutingExtensions_FWD_DEFINED__
typedef interface IFaxInboundRoutingExtensions IFaxInboundRoutingExtensions;
#endif
#ifndef __IFaxInboundRoutingExtension_FWD_DEFINED__
#define __IFaxInboundRoutingExtension_FWD_DEFINED__
typedef interface IFaxInboundRoutingExtension IFaxInboundRoutingExtension;
#endif
#ifndef __IFaxInboundRoutingMethods_FWD_DEFINED__
#define __IFaxInboundRoutingMethods_FWD_DEFINED__
typedef interface IFaxInboundRoutingMethods IFaxInboundRoutingMethods;
#endif
#ifndef __IFaxInboundRoutingMethod_FWD_DEFINED__
#define __IFaxInboundRoutingMethod_FWD_DEFINED__
typedef interface IFaxInboundRoutingMethod IFaxInboundRoutingMethod;
#endif
#ifndef __IFaxDocument2_FWD_DEFINED__
#define __IFaxDocument2_FWD_DEFINED__
typedef interface IFaxDocument2 IFaxDocument2;
#endif
#ifndef __IFaxConfiguration_FWD_DEFINED__
#define __IFaxConfiguration_FWD_DEFINED__
typedef interface IFaxConfiguration IFaxConfiguration;
#endif
#ifndef __IFaxServer2_FWD_DEFINED__
#define __IFaxServer2_FWD_DEFINED__
typedef interface IFaxServer2 IFaxServer2;
#endif
#ifndef __IFaxAccountSet_FWD_DEFINED__
#define __IFaxAccountSet_FWD_DEFINED__
typedef interface IFaxAccountSet IFaxAccountSet;
#endif
#ifndef __IFaxAccounts_FWD_DEFINED__
#define __IFaxAccounts_FWD_DEFINED__
typedef interface IFaxAccounts IFaxAccounts;
#endif
#ifndef __IFaxAccount_FWD_DEFINED__
#define __IFaxAccount_FWD_DEFINED__
typedef interface IFaxAccount IFaxAccount;
#endif
#ifndef __IFaxOutgoingJob2_FWD_DEFINED__
#define __IFaxOutgoingJob2_FWD_DEFINED__
typedef interface IFaxOutgoingJob2 IFaxOutgoingJob2;
#endif
#ifndef __IFaxAccountFolders_FWD_DEFINED__
#define __IFaxAccountFolders_FWD_DEFINED__
typedef interface IFaxAccountFolders IFaxAccountFolders;
#endif
#ifndef __IFaxAccountIncomingQueue_FWD_DEFINED__
#define __IFaxAccountIncomingQueue_FWD_DEFINED__
typedef interface IFaxAccountIncomingQueue IFaxAccountIncomingQueue;
#endif
#ifndef __IFaxAccountOutgoingQueue_FWD_DEFINED__
#define __IFaxAccountOutgoingQueue_FWD_DEFINED__
typedef interface IFaxAccountOutgoingQueue IFaxAccountOutgoingQueue;
#endif
#ifndef __IFaxOutgoingMessage2_FWD_DEFINED__
#define __IFaxOutgoingMessage2_FWD_DEFINED__
typedef interface IFaxOutgoingMessage2 IFaxOutgoingMessage2;
#endif
#ifndef __IFaxAccountIncomingArchive_FWD_DEFINED__
#define __IFaxAccountIncomingArchive_FWD_DEFINED__
typedef interface IFaxAccountIncomingArchive IFaxAccountIncomingArchive;
#endif
#ifndef __IFaxAccountOutgoingArchive_FWD_DEFINED__
#define __IFaxAccountOutgoingArchive_FWD_DEFINED__
typedef interface IFaxAccountOutgoingArchive IFaxAccountOutgoingArchive;
#endif
#ifndef __IFaxSecurity2_FWD_DEFINED__
#define __IFaxSecurity2_FWD_DEFINED__
typedef interface IFaxSecurity2 IFaxSecurity2;
#endif
#ifndef __IFaxIncomingMessage2_FWD_DEFINED__
#define __IFaxIncomingMessage2_FWD_DEFINED__
typedef interface IFaxIncomingMessage2 IFaxIncomingMessage2;
#endif
#ifndef __IFaxServerNotify_FWD_DEFINED__
#define __IFaxServerNotify_FWD_DEFINED__
typedef interface IFaxServerNotify IFaxServerNotify;
#endif
#ifndef ___IFaxServerNotify2_FWD_DEFINED__
#define ___IFaxServerNotify2_FWD_DEFINED__
typedef interface _IFaxServerNotify2 _IFaxServerNotify2;
#endif
#ifndef __IFaxServerNotify2_FWD_DEFINED__
#define __IFaxServerNotify2_FWD_DEFINED__
typedef interface IFaxServerNotify2 IFaxServerNotify2;
#endif
#ifndef ___IFaxAccountNotify_FWD_DEFINED__
#define ___IFaxAccountNotify_FWD_DEFINED__
typedef interface _IFaxAccountNotify _IFaxAccountNotify;
#endif
#ifndef __IFaxAccountNotify_FWD_DEFINED__
#define __IFaxAccountNotify_FWD_DEFINED__
typedef interface IFaxAccountNotify IFaxAccountNotify;
#endif
#ifndef __FaxServer_FWD_DEFINED__
#define __FaxServer_FWD_DEFINED__
typedef struct FaxServer FaxServer;
#endif
#ifndef __FaxDeviceProviders_FWD_DEFINED__
#define __FaxDeviceProviders_FWD_DEFINED__
typedef struct FaxDeviceProviders FaxDeviceProviders;
#endif
#ifndef __FaxDevices_FWD_DEFINED__
#define __FaxDevices_FWD_DEFINED__
typedef struct FaxDevices FaxDevices;
#endif
#ifndef __FaxInboundRouting_FWD_DEFINED__
#define __FaxInboundRouting_FWD_DEFINED__
typedef struct FaxInboundRouting FaxInboundRouting;
#endif
#ifndef __FaxFolders_FWD_DEFINED__
#define __FaxFolders_FWD_DEFINED__
typedef struct FaxFolders FaxFolders;
#endif
#ifndef __FaxLoggingOptions_FWD_DEFINED__
#define __FaxLoggingOptions_FWD_DEFINED__
typedef struct FaxLoggingOptions FaxLoggingOptions;
#endif
#ifndef __FaxActivity_FWD_DEFINED__
#define __FaxActivity_FWD_DEFINED__
typedef struct FaxActivity FaxActivity;
#endif
#ifndef __FaxOutboundRouting_FWD_DEFINED__
#define __FaxOutboundRouting_FWD_DEFINED__
typedef struct FaxOutboundRouting FaxOutboundRouting;
#endif
#ifndef __FaxReceiptOptions_FWD_DEFINED__
#define __FaxReceiptOptions_FWD_DEFINED__
typedef struct FaxReceiptOptions FaxReceiptOptions;
#endif
#ifndef __FaxSecurity_FWD_DEFINED__
#define __FaxSecurity_FWD_DEFINED__
typedef struct FaxSecurity FaxSecurity;
#endif
#ifndef __FaxDocument_FWD_DEFINED__
#define __FaxDocument_FWD_DEFINED__
typedef struct FaxDocument FaxDocument;
#endif
#ifndef __FaxSender_FWD_DEFINED__
#define __FaxSender_FWD_DEFINED__
typedef struct FaxSender FaxSender;
#endif
#ifndef __FaxRecipients_FWD_DEFINED__
#define __FaxRecipients_FWD_DEFINED__
typedef struct FaxRecipients FaxRecipients;
#endif
#ifndef __FaxIncomingArchive_FWD_DEFINED__
#define __FaxIncomingArchive_FWD_DEFINED__
typedef struct FaxIncomingArchive FaxIncomingArchive;
#endif
#ifndef __FaxIncomingQueue_FWD_DEFINED__
#define __FaxIncomingQueue_FWD_DEFINED__
typedef struct FaxIncomingQueue FaxIncomingQueue;
#endif
#ifndef __FaxOutgoingArchive_FWD_DEFINED__
#define __FaxOutgoingArchive_FWD_DEFINED__
typedef struct FaxOutgoingArchive FaxOutgoingArchive;
#endif
#ifndef __FaxOutgoingQueue_FWD_DEFINED__
#define __FaxOutgoingQueue_FWD_DEFINED__
typedef struct FaxOutgoingQueue FaxOutgoingQueue;
#endif
#ifndef __FaxIncomingMessageIterator_FWD_DEFINED__
#define __FaxIncomingMessageIterator_FWD_DEFINED__
typedef struct FaxIncomingMessageIterator FaxIncomingMessageIterator;
#endif
#ifndef __FaxIncomingMessage_FWD_DEFINED__
#define __FaxIncomingMessage_FWD_DEFINED__
typedef struct FaxIncomingMessage FaxIncomingMessage;
#endif
#ifndef __FaxOutgoingJobs_FWD_DEFINED__
#define __FaxOutgoingJobs_FWD_DEFINED__
typedef struct FaxOutgoingJobs FaxOutgoingJobs;
#endif
#ifndef __FaxOutgoingJob_FWD_DEFINED__
#define __FaxOutgoingJob_FWD_DEFINED__
typedef struct FaxOutgoingJob FaxOutgoingJob;
#endif
#ifndef __FaxOutgoingMessageIterator_FWD_DEFINED__
#define __FaxOutgoingMessageIterator_FWD_DEFINED__
typedef struct FaxOutgoingMessageIterator FaxOutgoingMessageIterator;
#endif
#ifndef __FaxOutgoingMessage_FWD_DEFINED__
#define __FaxOutgoingMessage_FWD_DEFINED__
typedef struct FaxOutgoingMessage FaxOutgoingMessage;
#endif
#ifndef __FaxIncomingJobs_FWD_DEFINED__
#define __FaxIncomingJobs_FWD_DEFINED__
typedef struct FaxIncomingJobs FaxIncomingJobs;
#endif
#ifndef __FaxIncomingJob_FWD_DEFINED__
#define __FaxIncomingJob_FWD_DEFINED__
typedef struct FaxIncomingJob FaxIncomingJob;
#endif
#ifndef __FaxDeviceProvider_FWD_DEFINED__
#define __FaxDeviceProvider_FWD_DEFINED__
typedef struct FaxDeviceProvider FaxDeviceProvider;
#endif
#ifndef __FaxDevice_FWD_DEFINED__
#define __FaxDevice_FWD_DEFINED__
typedef struct FaxDevice FaxDevice;
#endif
#ifndef __FaxActivityLogging_FWD_DEFINED__
#define __FaxActivityLogging_FWD_DEFINED__
typedef struct FaxActivityLogging FaxActivityLogging;
#endif
#ifndef __FaxEventLogging_FWD_DEFINED__
#define __FaxEventLogging_FWD_DEFINED__
typedef struct FaxEventLogging FaxEventLogging;
#endif
#ifndef __FaxOutboundRoutingGroups_FWD_DEFINED__
#define __FaxOutboundRoutingGroups_FWD_DEFINED__
typedef struct FaxOutboundRoutingGroups FaxOutboundRoutingGroups;
#endif
#ifndef __FaxOutboundRoutingGroup_FWD_DEFINED__
#define __FaxOutboundRoutingGroup_FWD_DEFINED__
typedef struct FaxOutboundRoutingGroup FaxOutboundRoutingGroup;
#endif
#ifndef __FaxDeviceIds_FWD_DEFINED__
#define __FaxDeviceIds_FWD_DEFINED__
typedef struct FaxDeviceIds FaxDeviceIds;
#endif
#ifndef __FaxOutboundRoutingRules_FWD_DEFINED__
#define __FaxOutboundRoutingRules_FWD_DEFINED__
typedef struct FaxOutboundRoutingRules FaxOutboundRoutingRules;
#endif
#ifndef __FaxOutboundRoutingRule_FWD_DEFINED__
#define __FaxOutboundRoutingRule_FWD_DEFINED__
typedef struct FaxOutboundRoutingRule FaxOutboundRoutingRule;
#endif
#ifndef __FaxInboundRoutingExtensions_FWD_DEFINED__
#define __FaxInboundRoutingExtensions_FWD_DEFINED__
typedef struct FaxInboundRoutingExtensions FaxInboundRoutingExtensions;
#endif
#ifndef __FaxInboundRoutingExtension_FWD_DEFINED__
#define __FaxInboundRoutingExtension_FWD_DEFINED__
typedef struct FaxInboundRoutingExtension FaxInboundRoutingExtension;
#endif
#ifndef __FaxInboundRoutingMethods_FWD_DEFINED__
#define __FaxInboundRoutingMethods_FWD_DEFINED__
typedef struct FaxInboundRoutingMethods FaxInboundRoutingMethods;
#endif
#ifndef __FaxInboundRoutingMethod_FWD_DEFINED__
#define __FaxInboundRoutingMethod_FWD_DEFINED__
typedef struct FaxInboundRoutingMethod FaxInboundRoutingMethod;
#endif
#ifndef __FaxJobStatus_FWD_DEFINED__
#define __FaxJobStatus_FWD_DEFINED__
typedef struct FaxJobStatus FaxJobStatus;
#endif
#ifndef __FaxRecipient_FWD_DEFINED__
#define __FaxRecipient_FWD_DEFINED__
typedef struct FaxRecipient FaxRecipient;
#endif
#ifndef __FaxConfiguration_FWD_DEFINED__
#define __FaxConfiguration_FWD_DEFINED__
typedef struct FaxConfiguration FaxConfiguration;
#endif
#ifndef __FaxAccountSet_FWD_DEFINED__
#define __FaxAccountSet_FWD_DEFINED__
typedef struct FaxAccountSet FaxAccountSet;
#endif
#ifndef __FaxAccounts_FWD_DEFINED__
#define __FaxAccounts_FWD_DEFINED__
typedef struct FaxAccounts FaxAccounts;
#endif
#ifndef __FaxAccount_FWD_DEFINED__
#define __FaxAccount_FWD_DEFINED__
typedef struct FaxAccount FaxAccount;
#endif
#ifndef __FaxAccountFolders_FWD_DEFINED__
#define __FaxAccountFolders_FWD_DEFINED__
typedef struct FaxAccountFolders FaxAccountFolders;
#endif
#ifndef __FaxAccountIncomingQueue_FWD_DEFINED__
#define __FaxAccountIncomingQueue_FWD_DEFINED__
typedef struct FaxAccountIncomingQueue FaxAccountIncomingQueue;
#endif
#ifndef __FaxAccountOutgoingQueue_FWD_DEFINED__
#define __FaxAccountOutgoingQueue_FWD_DEFINED__
typedef struct FaxAccountOutgoingQueue FaxAccountOutgoingQueue;
#endif
#ifndef __FaxAccountIncomingArchive_FWD_DEFINED__
#define __FaxAccountIncomingArchive_FWD_DEFINED__
typedef struct FaxAccountIncomingArchive FaxAccountIncomingArchive;
#endif
#ifndef __FaxAccountOutgoingArchive_FWD_DEFINED__
#define __FaxAccountOutgoingArchive_FWD_DEFINED__
typedef struct FaxAccountOutgoingArchive FaxAccountOutgoingArchive;
#endif
#ifndef __FaxSecurity2_FWD_DEFINED__
#define __FaxSecurity2_FWD_DEFINED__
typedef struct FaxSecurity2 FaxSecurity2;
#endif
#include "oaidl.h"
#include "ocidl.h"
#define	prv_DEFAULT_PREFETCH_SIZE	( 100 )
extern RPC_IF_HANDLE __MIDL_itf_faxcomex_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_faxcomex_0000_0000_v0_0_s_ifspec;
#ifndef __IFaxJobStatus_INTERFACE_DEFINED__
#define __IFaxJobStatus_INTERFACE_DEFINED__
typedef enum FAX_JOB_STATUS_ENUM
{
	fjsPENDING = 0x1,
	fjsINPROGRESS = 0x2,
	fjsFAILED = 0x8,
	fjsPAUSED = 0x10,
	fjsNOLINE = 0x20,
	fjsRETRYING = 0x40,
	fjsRETRIES_EXCEEDED = 0x80,
	fjsCOMPLETED = 0x100,
	fjsCANCELED = 0x200,
	fjsCANCELING = 0x400,
	fjsROUTING = 0x800
} FAX_JOB_STATUS_ENUM;
typedef enum FAX_JOB_EXTENDED_STATUS_ENUM
{
	fjesNONE = 0,
	fjesDISCONNECTED = (fjesNONE + 1),
	fjesINITIALIZING = (fjesDISCONNECTED + 1),
	fjesDIALING = (fjesINITIALIZING + 1),
	fjesTRANSMITTING = (fjesDIALING + 1),
	fjesANSWERED = (fjesTRANSMITTING + 1),
	fjesRECEIVING = (fjesANSWERED + 1),
	fjesLINE_UNAVAILABLE = (fjesRECEIVING + 1),
	fjesBUSY = (fjesLINE_UNAVAILABLE + 1),
	fjesNO_ANSWER = (fjesBUSY + 1),
	fjesBAD_ADDRESS = (fjesNO_ANSWER + 1),
	fjesNO_DIAL_TONE = (fjesBAD_ADDRESS + 1),
	fjesFATAL_ERROR = (fjesNO_DIAL_TONE + 1),
	fjesCALL_DELAYED = (fjesFATAL_ERROR + 1),
	fjesCALL_BLACKLISTED = (fjesCALL_DELAYED + 1),
	fjesNOT_FAX_CALL = (fjesCALL_BLACKLISTED + 1),
	fjesPARTIALLY_RECEIVED = (fjesNOT_FAX_CALL + 1),
	fjesHANDLED = (fjesPARTIALLY_RECEIVED + 1),
	fjesCALL_COMPLETED = (fjesHANDLED + 1),
	fjesCALL_ABORTED = (fjesCALL_COMPLETED + 1),
	fjesPROPRIETARY = 0x1000000
} FAX_JOB_EXTENDED_STATUS_ENUM;
typedef enum FAX_JOB_OPERATIONS_ENUM
{
	fjoVIEW = 0x1,
	fjoPAUSE = 0x2,
	fjoRESUME = 0x4,
	fjoRESTART = 0x8,
	fjoDELETE = 0x10,
	fjoRECIPIENT_INFO = 0x20,
	fjoSENDER_INFO = 0x40
} FAX_JOB_OPERATIONS_ENUM;
typedef enum FAX_JOB_TYPE_ENUM
{
	 fjtSEND = 0,
	fjtRECEIVE = (fjtSEND + 1),
	fjtROUTING = (fjtRECEIVE + 1)
} FAX_JOB_TYPE_ENUM;
extern const IID IID_IFaxJobStatus;
typedef struct IFaxJobStatusVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxJobStatus * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxJobStatus * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxJobStatus * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxJobStatus * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxJobStatus * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxJobStatus * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxJobStatus * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IFaxJobStatus * This, FAX_JOB_STATUS_ENUM * pStatus);
	HRESULT(STDMETHODCALLTYPE * get_Pages) (IFaxJobStatus * This, long *plPages);
	HRESULT(STDMETHODCALLTYPE * get_Size) (IFaxJobStatus * This, long *plSize);
	HRESULT(STDMETHODCALLTYPE * get_CurrentPage) (IFaxJobStatus * This, long *plCurrentPage);
	HRESULT(STDMETHODCALLTYPE * get_DeviceId) (IFaxJobStatus * This, long *plDeviceId);
	HRESULT(STDMETHODCALLTYPE * get_CSID) (IFaxJobStatus * This, BSTR * pbstrCSID);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IFaxJobStatus * This, BSTR * pbstrTSID);
	HRESULT(STDMETHODCALLTYPE * get_ExtendedStatusCode) (IFaxJobStatus * This, FAX_JOB_EXTENDED_STATUS_ENUM * pExtendedStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_ExtendedStatus) (IFaxJobStatus * This, BSTR * pbstrExtendedStatus);
	HRESULT(STDMETHODCALLTYPE * get_AvailableOperations) (IFaxJobStatus * This, FAX_JOB_OPERATIONS_ENUM * pAvailableOperations);
	HRESULT(STDMETHODCALLTYPE * get_Retries) (IFaxJobStatus * This, long *plRetries);
	HRESULT(STDMETHODCALLTYPE * get_JobType) (IFaxJobStatus * This, FAX_JOB_TYPE_ENUM * pJobType);
	HRESULT(STDMETHODCALLTYPE * get_ScheduledTime) (IFaxJobStatus * This, DATE * pdateScheduledTime);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionStart) (IFaxJobStatus * This, DATE * pdateTransmissionStart);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionEnd) (IFaxJobStatus * This, DATE * pdateTransmissionEnd);
	HRESULT(STDMETHODCALLTYPE * get_CallerId) (IFaxJobStatus * This, BSTR * pbstrCallerId);
	HRESULT(STDMETHODCALLTYPE * get_RoutingInformation) (IFaxJobStatus * This, BSTR * pbstrRoutingInformation);
	END_INTERFACE
}  IFaxJobStatusVtbl;
interface IFaxJobStatus
{
	CONST_VTBL struct IFaxJobStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxJobStatus_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxJobStatus_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxJobStatus_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxJobStatus_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxJobStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxJobStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxJobStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxJobStatus_get_Status(This,pStatus)( (This)->lpVtbl -> get_Status(This,pStatus) )
#define IFaxJobStatus_get_Pages(This,plPages)( (This)->lpVtbl -> get_Pages(This,plPages) )
#define IFaxJobStatus_get_Size(This,plSize)( (This)->lpVtbl -> get_Size(This,plSize) )
#define IFaxJobStatus_get_CurrentPage(This,plCurrentPage)( (This)->lpVtbl -> get_CurrentPage(This,plCurrentPage) )
#define IFaxJobStatus_get_DeviceId(This,plDeviceId)( (This)->lpVtbl -> get_DeviceId(This,plDeviceId) )
#define IFaxJobStatus_get_CSID(This,pbstrCSID)( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
#define IFaxJobStatus_get_TSID(This,pbstrTSID)( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
#define IFaxJobStatus_get_ExtendedStatusCode(This,pExtendedStatusCode)( (This)->lpVtbl -> get_ExtendedStatusCode(This,pExtendedStatusCode) )
#define IFaxJobStatus_get_ExtendedStatus(This,pbstrExtendedStatus)( (This)->lpVtbl -> get_ExtendedStatus(This,pbstrExtendedStatus) )
#define IFaxJobStatus_get_AvailableOperations(This,pAvailableOperations)( (This)->lpVtbl -> get_AvailableOperations(This,pAvailableOperations) )
#define IFaxJobStatus_get_Retries(This,plRetries)( (This)->lpVtbl -> get_Retries(This,plRetries) )
#define IFaxJobStatus_get_JobType(This,pJobType)( (This)->lpVtbl -> get_JobType(This,pJobType) )
#define IFaxJobStatus_get_ScheduledTime(This,pdateScheduledTime)( (This)->lpVtbl -> get_ScheduledTime(This,pdateScheduledTime) )
#define IFaxJobStatus_get_TransmissionStart(This,pdateTransmissionStart)( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
#define IFaxJobStatus_get_TransmissionEnd(This,pdateTransmissionEnd)( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
#define IFaxJobStatus_get_CallerId(This,pbstrCallerId)( (This)->lpVtbl -> get_CallerId(This,pbstrCallerId) )
#define IFaxJobStatus_get_RoutingInformation(This,pbstrRoutingInformation)( (This)->lpVtbl -> get_RoutingInformation(This,pbstrRoutingInformation) )
#endif
#endif
typedef enum FAX_SERVER_EVENTS_TYPE_ENUM
{
	fsetNONE = 0,
	fsetIN_QUEUE = 0x1,
	fsetOUT_QUEUE = 0x2,
	fsetCONFIG = 0x4,
	fsetACTIVITY = 0x8,
	fsetQUEUE_STATE = 0x10,
	fsetIN_ARCHIVE = 0x20,
	fsetOUT_ARCHIVE = 0x40,
	fsetFXSSVC_ENDED = 0x80,
	fsetDEVICE_STATUS = 0x100,
	fsetINCOMING_CALL = 0x200
} FAX_SERVER_EVENTS_TYPE_ENUM;
typedef enum FAX_SERVER_APIVERSION_ENUM
{
	fsAPI_VERSION_0 = 0,
	fsAPI_VERSION_1 = 0x10000,
	fsAPI_VERSION_2 = 0x20000,
	fsAPI_VERSION_3 = 0x30000
} FAX_SERVER_APIVERSION_ENUM;
#ifndef __IFaxServer_INTERFACE_DEFINED__
#define __IFaxServer_INTERFACE_DEFINED__
extern const IID IID_IFaxServer;
typedef struct IFaxServerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxServer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxServer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxServer * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxServer * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxServer * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxServer * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxServer * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Connect) (IFaxServer * This, BSTR bstrServerName);
	HRESULT(STDMETHODCALLTYPE * get_ServerName) (IFaxServer * This, BSTR * pbstrServerName);
	HRESULT(STDMETHODCALLTYPE * GetDeviceProviders) (IFaxServer * This, IFaxDeviceProviders ** ppFaxDeviceProviders);
	HRESULT(STDMETHODCALLTYPE * GetDevices) (IFaxServer * This, IFaxDevices ** ppFaxDevices);
	HRESULT(STDMETHODCALLTYPE * get_InboundRouting) (IFaxServer * This, IFaxInboundRouting ** ppFaxInboundRouting);
	HRESULT(STDMETHODCALLTYPE * get_Folders) (IFaxServer * This, IFaxFolders ** pFaxFolders);
	HRESULT(STDMETHODCALLTYPE * get_LoggingOptions) (IFaxServer * This, IFaxLoggingOptions ** ppFaxLoggingOptions);
	HRESULT(STDMETHODCALLTYPE * get_MajorVersion) (IFaxServer * This, long *plMajorVersion);
	HRESULT(STDMETHODCALLTYPE * get_MinorVersion) (IFaxServer * This, long *plMinorVersion);
	HRESULT(STDMETHODCALLTYPE * get_MajorBuild) (IFaxServer * This, long *plMajorBuild);
	HRESULT(STDMETHODCALLTYPE * get_MinorBuild) (IFaxServer * This, long *plMinorBuild);
	HRESULT(STDMETHODCALLTYPE * get_Debug) (IFaxServer * This, VARIANT_BOOL * pbDebug);
	HRESULT(STDMETHODCALLTYPE * get_Activity) (IFaxServer * This, IFaxActivity ** ppFaxActivity);
	HRESULT(STDMETHODCALLTYPE * get_OutboundRouting) (IFaxServer * This, IFaxOutboundRouting ** ppFaxOutboundRouting);
	HRESULT(STDMETHODCALLTYPE * get_ReceiptOptions) (IFaxServer * This, IFaxReceiptOptions ** ppFaxReceiptOptions);
	HRESULT(STDMETHODCALLTYPE * get_Security) (IFaxServer * This, IFaxSecurity ** ppFaxSecurity);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IFaxServer * This);
	HRESULT(STDMETHODCALLTYPE * GetExtensionProperty) (IFaxServer * This, BSTR bstrGUID, VARIANT * pvProperty);
	HRESULT(STDMETHODCALLTYPE * SetExtensionProperty) (IFaxServer * This, BSTR bstrGUID, VARIANT vProperty);
	HRESULT(STDMETHODCALLTYPE * ListenToServerEvents) (IFaxServer * This, FAX_SERVER_EVENTS_TYPE_ENUM EventTypes);
	HRESULT(STDMETHODCALLTYPE * RegisterDeviceProvider) (IFaxServer * This, BSTR bstrGUID, BSTR bstrFriendlyName, BSTR bstrImageName, BSTR TspName, long lFSPIVersion);
	HRESULT(STDMETHODCALLTYPE * UnregisterDeviceProvider) (IFaxServer * This, BSTR bstrUniqueName);
	HRESULT(STDMETHODCALLTYPE * RegisterInboundRoutingExtension) (IFaxServer * This, BSTR bstrExtensionName, BSTR bstrFriendlyName, BSTR bstrImageName, VARIANT vMethods);
	HRESULT(STDMETHODCALLTYPE * UnregisterInboundRoutingExtension) (IFaxServer * This, BSTR bstrExtensionUniqueName);
	HRESULT(STDMETHODCALLTYPE * get_RegisteredEvents) (IFaxServer * This, FAX_SERVER_EVENTS_TYPE_ENUM * pEventTypes);
	HRESULT(STDMETHODCALLTYPE * get_APIVersion) (IFaxServer * This, FAX_SERVER_APIVERSION_ENUM * pAPIVersion);
	END_INTERFACE
}  IFaxServerVtbl;
interface IFaxServer
{
	CONST_VTBL struct IFaxServerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxServer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxServer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxServer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxServer_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxServer_Connect(This,bstrServerName)( (This)->lpVtbl -> Connect(This,bstrServerName) )
#define IFaxServer_get_ServerName(This,pbstrServerName)( (This)->lpVtbl -> get_ServerName(This,pbstrServerName) )
#define IFaxServer_GetDeviceProviders(This,ppFaxDeviceProviders)( (This)->lpVtbl -> GetDeviceProviders(This,ppFaxDeviceProviders) )
#define IFaxServer_GetDevices(This,ppFaxDevices)( (This)->lpVtbl -> GetDevices(This,ppFaxDevices) )
#define IFaxServer_get_InboundRouting(This,ppFaxInboundRouting)( (This)->lpVtbl -> get_InboundRouting(This,ppFaxInboundRouting) )
#define IFaxServer_get_Folders(This,pFaxFolders)( (This)->lpVtbl -> get_Folders(This,pFaxFolders) )
#define IFaxServer_get_LoggingOptions(This,ppFaxLoggingOptions)( (This)->lpVtbl -> get_LoggingOptions(This,ppFaxLoggingOptions) )
#define IFaxServer_get_MajorVersion(This,plMajorVersion)( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) )
#define IFaxServer_get_MinorVersion(This,plMinorVersion)( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) )
#define IFaxServer_get_MajorBuild(This,plMajorBuild)( (This)->lpVtbl -> get_MajorBuild(This,plMajorBuild) )
#define IFaxServer_get_MinorBuild(This,plMinorBuild)( (This)->lpVtbl -> get_MinorBuild(This,plMinorBuild) )
#define IFaxServer_get_Debug(This,pbDebug)( (This)->lpVtbl -> get_Debug(This,pbDebug) )
#define IFaxServer_get_Activity(This,ppFaxActivity)( (This)->lpVtbl -> get_Activity(This,ppFaxActivity) )
#define IFaxServer_get_OutboundRouting(This,ppFaxOutboundRouting)( (This)->lpVtbl -> get_OutboundRouting(This,ppFaxOutboundRouting) )
#define IFaxServer_get_ReceiptOptions(This,ppFaxReceiptOptions)( (This)->lpVtbl -> get_ReceiptOptions(This,ppFaxReceiptOptions) )
#define IFaxServer_get_Security(This,ppFaxSecurity)( (This)->lpVtbl -> get_Security(This,ppFaxSecurity) )
#define IFaxServer_Disconnect(This)( (This)->lpVtbl -> Disconnect(This) )
#define IFaxServer_GetExtensionProperty(This,bstrGUID,pvProperty)( (This)->lpVtbl -> GetExtensionProperty(This,bstrGUID,pvProperty) )
#define IFaxServer_SetExtensionProperty(This,bstrGUID,vProperty)( (This)->lpVtbl -> SetExtensionProperty(This,bstrGUID,vProperty) )
#define IFaxServer_ListenToServerEvents(This,EventTypes)( (This)->lpVtbl -> ListenToServerEvents(This,EventTypes) )
#define IFaxServer_RegisterDeviceProvider(This,bstrGUID,bstrFriendlyName,bstrImageName,TspName,lFSPIVersion)( (This)->lpVtbl -> RegisterDeviceProvider(This,bstrGUID,bstrFriendlyName,bstrImageName,TspName,lFSPIVersion) )
#define IFaxServer_UnregisterDeviceProvider(This,bstrUniqueName)( (This)->lpVtbl -> UnregisterDeviceProvider(This,bstrUniqueName) )
#define IFaxServer_RegisterInboundRoutingExtension(This,bstrExtensionName,bstrFriendlyName,bstrImageName,vMethods)( (This)->lpVtbl -> RegisterInboundRoutingExtension(This,bstrExtensionName,bstrFriendlyName,bstrImageName,vMethods) )
#define IFaxServer_UnregisterInboundRoutingExtension(This,bstrExtensionUniqueName)( (This)->lpVtbl -> UnregisterInboundRoutingExtension(This,bstrExtensionUniqueName) )
#define IFaxServer_get_RegisteredEvents(This,pEventTypes)( (This)->lpVtbl -> get_RegisteredEvents(This,pEventTypes) )
#define IFaxServer_get_APIVersion(This,pAPIVersion)( (This)->lpVtbl -> get_APIVersion(This,pAPIVersion) )
#endif
#endif
#ifndef __IFaxDeviceProviders_INTERFACE_DEFINED__
#define __IFaxDeviceProviders_INTERFACE_DEFINED__
extern const IID IID_IFaxDeviceProviders;
typedef struct IFaxDeviceProvidersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxDeviceProviders * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxDeviceProviders * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxDeviceProviders * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxDeviceProviders * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxDeviceProviders * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxDeviceProviders * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxDeviceProviders * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFaxDeviceProviders * This, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxDeviceProviders * This, VARIANT vIndex, IFaxDeviceProvider ** pFaxDeviceProvider);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxDeviceProviders * This, long *plCount);
	END_INTERFACE
}  IFaxDeviceProvidersVtbl;
interface IFaxDeviceProviders
{
	CONST_VTBL struct IFaxDeviceProvidersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxDeviceProviders_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxDeviceProviders_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxDeviceProviders_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxDeviceProviders_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxDeviceProviders_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxDeviceProviders_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxDeviceProviders_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxDeviceProviders_get__NewEnum(This,ppUnk)( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
#define IFaxDeviceProviders_get_Item(This,vIndex,pFaxDeviceProvider)( (This)->lpVtbl -> get_Item(This,vIndex,pFaxDeviceProvider) )
#define IFaxDeviceProviders_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#endif
#endif
#ifndef __IFaxDevices_INTERFACE_DEFINED__
#define __IFaxDevices_INTERFACE_DEFINED__
extern const IID IID_IFaxDevices;
typedef struct IFaxDevicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxDevices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxDevices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxDevices * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxDevices * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxDevices * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxDevices * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxDevices * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFaxDevices * This, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxDevices * This, VARIANT vIndex, IFaxDevice ** pFaxDevice);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxDevices * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * get_ItemById) (IFaxDevices * This, long lId, IFaxDevice ** ppFaxDevice);
	END_INTERFACE
}  IFaxDevicesVtbl;
interface IFaxDevices
{
	CONST_VTBL struct IFaxDevicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxDevices_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxDevices_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxDevices_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxDevices_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxDevices_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxDevices_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxDevices_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxDevices_get__NewEnum(This,ppUnk)( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
#define IFaxDevices_get_Item(This,vIndex,pFaxDevice)( (This)->lpVtbl -> get_Item(This,vIndex,pFaxDevice) )
#define IFaxDevices_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#define IFaxDevices_get_ItemById(This,lId,ppFaxDevice)( (This)->lpVtbl -> get_ItemById(This,lId,ppFaxDevice) )
#endif
#endif
#ifndef __IFaxInboundRouting_INTERFACE_DEFINED__
#define __IFaxInboundRouting_INTERFACE_DEFINED__
extern const IID IID_IFaxInboundRouting;
typedef struct IFaxInboundRoutingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxInboundRouting * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxInboundRouting * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxInboundRouting * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxInboundRouting * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxInboundRouting * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxInboundRouting * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxInboundRouting * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetExtensions) (IFaxInboundRouting * This, IFaxInboundRoutingExtensions ** pFaxInboundRoutingExtensions);
	HRESULT(STDMETHODCALLTYPE * GetMethods) (IFaxInboundRouting * This, IFaxInboundRoutingMethods ** pFaxInboundRoutingMethods);
	END_INTERFACE
}  IFaxInboundRoutingVtbl;
interface IFaxInboundRouting
{
	CONST_VTBL struct IFaxInboundRoutingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxInboundRouting_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxInboundRouting_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxInboundRouting_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxInboundRouting_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxInboundRouting_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxInboundRouting_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxInboundRouting_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxInboundRouting_GetExtensions(This,pFaxInboundRoutingExtensions)( (This)->lpVtbl -> GetExtensions(This,pFaxInboundRoutingExtensions) )
#define IFaxInboundRouting_GetMethods(This,pFaxInboundRoutingMethods)( (This)->lpVtbl -> GetMethods(This,pFaxInboundRoutingMethods) )
#endif
#endif
#ifndef __IFaxFolders_INTERFACE_DEFINED__
#define __IFaxFolders_INTERFACE_DEFINED__
extern const IID IID_IFaxFolders;
typedef struct IFaxFoldersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxFolders * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxFolders * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxFolders * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxFolders * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxFolders * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxFolders * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxFolders * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_OutgoingQueue) (IFaxFolders * This, IFaxOutgoingQueue ** pFaxOutgoingQueue);
	HRESULT(STDMETHODCALLTYPE * get_IncomingQueue) (IFaxFolders * This, IFaxIncomingQueue ** pFaxIncomingQueue);
	HRESULT(STDMETHODCALLTYPE * get_IncomingArchive) (IFaxFolders * This, IFaxIncomingArchive ** pFaxIncomingArchive);
	HRESULT(STDMETHODCALLTYPE * get_OutgoingArchive) (IFaxFolders * This, IFaxOutgoingArchive ** pFaxOutgoingArchive);
	END_INTERFACE
}  IFaxFoldersVtbl;
interface IFaxFolders
{
	CONST_VTBL struct IFaxFoldersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxFolders_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxFolders_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxFolders_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxFolders_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxFolders_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxFolders_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxFolders_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxFolders_get_OutgoingQueue(This,pFaxOutgoingQueue)( (This)->lpVtbl -> get_OutgoingQueue(This,pFaxOutgoingQueue) )
#define IFaxFolders_get_IncomingQueue(This,pFaxIncomingQueue)( (This)->lpVtbl -> get_IncomingQueue(This,pFaxIncomingQueue) )
#define IFaxFolders_get_IncomingArchive(This,pFaxIncomingArchive)( (This)->lpVtbl -> get_IncomingArchive(This,pFaxIncomingArchive) )
#define IFaxFolders_get_OutgoingArchive(This,pFaxOutgoingArchive)( (This)->lpVtbl -> get_OutgoingArchive(This,pFaxOutgoingArchive) )
#endif
#endif
#ifndef __IFaxLoggingOptions_INTERFACE_DEFINED__
#define __IFaxLoggingOptions_INTERFACE_DEFINED__
extern const IID IID_IFaxLoggingOptions;
typedef struct IFaxLoggingOptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxLoggingOptions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxLoggingOptions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxLoggingOptions * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxLoggingOptions * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxLoggingOptions * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxLoggingOptions * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxLoggingOptions * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_EventLogging) (IFaxLoggingOptions * This, IFaxEventLogging ** pFaxEventLogging);
	HRESULT(STDMETHODCALLTYPE * get_ActivityLogging) (IFaxLoggingOptions * This, IFaxActivityLogging ** pFaxActivityLogging);
	END_INTERFACE
}  IFaxLoggingOptionsVtbl;
interface IFaxLoggingOptions
{
	CONST_VTBL struct IFaxLoggingOptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxLoggingOptions_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxLoggingOptions_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxLoggingOptions_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxLoggingOptions_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxLoggingOptions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxLoggingOptions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxLoggingOptions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxLoggingOptions_get_EventLogging(This,pFaxEventLogging)( (This)->lpVtbl -> get_EventLogging(This,pFaxEventLogging) )
#define IFaxLoggingOptions_get_ActivityLogging(This,pFaxActivityLogging)( (This)->lpVtbl -> get_ActivityLogging(This,pFaxActivityLogging) )
#endif
#endif
#ifndef __IFaxActivity_INTERFACE_DEFINED__
#define __IFaxActivity_INTERFACE_DEFINED__
extern const IID IID_IFaxActivity;
typedef struct IFaxActivityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxActivity * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxActivity * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxActivity * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxActivity * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxActivity * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxActivity * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxActivity * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_IncomingMessages) (IFaxActivity * This, long *plIncomingMessages);
	HRESULT(STDMETHODCALLTYPE * get_RoutingMessages) (IFaxActivity * This, long *plRoutingMessages);
	HRESULT(STDMETHODCALLTYPE * get_OutgoingMessages) (IFaxActivity * This, long *plOutgoingMessages);
	HRESULT(STDMETHODCALLTYPE * get_QueuedMessages) (IFaxActivity * This, long *plQueuedMessages);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxActivity * This);
	END_INTERFACE
}  IFaxActivityVtbl;
interface IFaxActivity
{
	CONST_VTBL struct IFaxActivityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxActivity_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxActivity_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxActivity_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxActivity_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxActivity_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxActivity_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxActivity_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxActivity_get_IncomingMessages(This,plIncomingMessages)( (This)->lpVtbl -> get_IncomingMessages(This,plIncomingMessages) )
#define IFaxActivity_get_RoutingMessages(This,plRoutingMessages)( (This)->lpVtbl -> get_RoutingMessages(This,plRoutingMessages) )
#define IFaxActivity_get_OutgoingMessages(This,plOutgoingMessages)( (This)->lpVtbl -> get_OutgoingMessages(This,plOutgoingMessages) )
#define IFaxActivity_get_QueuedMessages(This,plQueuedMessages)( (This)->lpVtbl -> get_QueuedMessages(This,plQueuedMessages) )
#define IFaxActivity_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#endif
#endif
#ifndef __IFaxOutboundRouting_INTERFACE_DEFINED__
#define __IFaxOutboundRouting_INTERFACE_DEFINED__
extern const IID IID_IFaxOutboundRouting;
typedef struct IFaxOutboundRoutingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxOutboundRouting * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxOutboundRouting * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxOutboundRouting * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxOutboundRouting * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxOutboundRouting * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxOutboundRouting * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxOutboundRouting * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetGroups) (IFaxOutboundRouting * This, IFaxOutboundRoutingGroups ** pFaxOutboundRoutingGroups);
	HRESULT(STDMETHODCALLTYPE * GetRules) (IFaxOutboundRouting * This, IFaxOutboundRoutingRules ** pFaxOutboundRoutingRules);
	END_INTERFACE
}  IFaxOutboundRoutingVtbl;
interface IFaxOutboundRouting
{
	CONST_VTBL struct IFaxOutboundRoutingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxOutboundRouting_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxOutboundRouting_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxOutboundRouting_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxOutboundRouting_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxOutboundRouting_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxOutboundRouting_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxOutboundRouting_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxOutboundRouting_GetGroups(This,pFaxOutboundRoutingGroups)( (This)->lpVtbl -> GetGroups(This,pFaxOutboundRoutingGroups) )
#define IFaxOutboundRouting_GetRules(This,pFaxOutboundRoutingRules)( (This)->lpVtbl -> GetRules(This,pFaxOutboundRoutingRules) )
#endif
#endif
#ifndef __IFaxReceiptOptions_INTERFACE_DEFINED__
#define __IFaxReceiptOptions_INTERFACE_DEFINED__
typedef enum FAX_SMTP_AUTHENTICATION_TYPE_ENUM
{
	fsatANONYMOUS = 0,
	fsatBASIC = (fsatANONYMOUS + 1),
	fsatNTLM = (fsatBASIC + 1)
} FAX_SMTP_AUTHENTICATION_TYPE_ENUM;
typedef enum FAX_RECEIPT_TYPE_ENUM
{
	frtNONE = 0,
	frtMAIL = 0x1,
	frtMSGBOX = 0x4
} FAX_RECEIPT_TYPE_ENUM;
extern const IID IID_IFaxReceiptOptions;
typedef struct IFaxReceiptOptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxReceiptOptions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxReceiptOptions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxReceiptOptions * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxReceiptOptions * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxReceiptOptions * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxReceiptOptions * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxReceiptOptions * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AuthenticationType) (IFaxReceiptOptions * This, FAX_SMTP_AUTHENTICATION_TYPE_ENUM * pType);
	HRESULT(STDMETHODCALLTYPE * put_AuthenticationType) (IFaxReceiptOptions * This, FAX_SMTP_AUTHENTICATION_TYPE_ENUM Type);
	HRESULT(STDMETHODCALLTYPE * get_SMTPServer) (IFaxReceiptOptions * This, BSTR * pbstrSMTPServer);
	HRESULT(STDMETHODCALLTYPE * put_SMTPServer) (IFaxReceiptOptions * This, BSTR bstrSMTPServer);
	HRESULT(STDMETHODCALLTYPE * get_SMTPPort) (IFaxReceiptOptions * This, long *plSMTPPort);
	HRESULT(STDMETHODCALLTYPE * put_SMTPPort) (IFaxReceiptOptions * This, long lSMTPPort);
	HRESULT(STDMETHODCALLTYPE * get_SMTPSender) (IFaxReceiptOptions * This, BSTR * pbstrSMTPSender);
	HRESULT(STDMETHODCALLTYPE * put_SMTPSender) (IFaxReceiptOptions * This, BSTR bstrSMTPSender);
	HRESULT(STDMETHODCALLTYPE * get_SMTPUser) (IFaxReceiptOptions * This, BSTR * pbstrSMTPUser);
	HRESULT(STDMETHODCALLTYPE * put_SMTPUser) (IFaxReceiptOptions * This, BSTR bstrSMTPUser);
	HRESULT(STDMETHODCALLTYPE * get_AllowedReceipts) (IFaxReceiptOptions * This, FAX_RECEIPT_TYPE_ENUM * pAllowedReceipts);
	HRESULT(STDMETHODCALLTYPE * put_AllowedReceipts) (IFaxReceiptOptions * This, FAX_RECEIPT_TYPE_ENUM AllowedReceipts);
	HRESULT(STDMETHODCALLTYPE * get_SMTPPassword) (IFaxReceiptOptions * This, BSTR * pbstrSMTPPassword);
	HRESULT(STDMETHODCALLTYPE * put_SMTPPassword) (IFaxReceiptOptions * This, BSTR bstrSMTPPassword);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxReceiptOptions * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxReceiptOptions * This);
	HRESULT(STDMETHODCALLTYPE * get_UseForInboundRouting) (IFaxReceiptOptions * This, VARIANT_BOOL * pbUseForInboundRouting);
	HRESULT(STDMETHODCALLTYPE * put_UseForInboundRouting) (IFaxReceiptOptions * This, VARIANT_BOOL bUseForInboundRouting);
	END_INTERFACE
}  IFaxReceiptOptionsVtbl;
interface IFaxReceiptOptions
{
	CONST_VTBL struct IFaxReceiptOptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxReceiptOptions_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxReceiptOptions_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxReceiptOptions_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxReceiptOptions_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxReceiptOptions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxReceiptOptions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxReceiptOptions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxReceiptOptions_get_AuthenticationType(This,pType)( (This)->lpVtbl -> get_AuthenticationType(This,pType) )
#define IFaxReceiptOptions_put_AuthenticationType(This,Type)( (This)->lpVtbl -> put_AuthenticationType(This,Type) )
#define IFaxReceiptOptions_get_SMTPServer(This,pbstrSMTPServer)( (This)->lpVtbl -> get_SMTPServer(This,pbstrSMTPServer) )
#define IFaxReceiptOptions_put_SMTPServer(This,bstrSMTPServer)( (This)->lpVtbl -> put_SMTPServer(This,bstrSMTPServer) )
#define IFaxReceiptOptions_get_SMTPPort(This,plSMTPPort)( (This)->lpVtbl -> get_SMTPPort(This,plSMTPPort) )
#define IFaxReceiptOptions_put_SMTPPort(This,lSMTPPort)( (This)->lpVtbl -> put_SMTPPort(This,lSMTPPort) )
#define IFaxReceiptOptions_get_SMTPSender(This,pbstrSMTPSender)( (This)->lpVtbl -> get_SMTPSender(This,pbstrSMTPSender) )
#define IFaxReceiptOptions_put_SMTPSender(This,bstrSMTPSender)( (This)->lpVtbl -> put_SMTPSender(This,bstrSMTPSender) )
#define IFaxReceiptOptions_get_SMTPUser(This,pbstrSMTPUser)( (This)->lpVtbl -> get_SMTPUser(This,pbstrSMTPUser) )
#define IFaxReceiptOptions_put_SMTPUser(This,bstrSMTPUser)( (This)->lpVtbl -> put_SMTPUser(This,bstrSMTPUser) )
#define IFaxReceiptOptions_get_AllowedReceipts(This,pAllowedReceipts)( (This)->lpVtbl -> get_AllowedReceipts(This,pAllowedReceipts) )
#define IFaxReceiptOptions_put_AllowedReceipts(This,AllowedReceipts)( (This)->lpVtbl -> put_AllowedReceipts(This,AllowedReceipts) )
#define IFaxReceiptOptions_get_SMTPPassword(This,pbstrSMTPPassword)( (This)->lpVtbl -> get_SMTPPassword(This,pbstrSMTPPassword) )
#define IFaxReceiptOptions_put_SMTPPassword(This,bstrSMTPPassword)( (This)->lpVtbl -> put_SMTPPassword(This,bstrSMTPPassword) )
#define IFaxReceiptOptions_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxReceiptOptions_Save(This)( (This)->lpVtbl -> Save(This) )
#define IFaxReceiptOptions_get_UseForInboundRouting(This,pbUseForInboundRouting)( (This)->lpVtbl -> get_UseForInboundRouting(This,pbUseForInboundRouting) )
#define IFaxReceiptOptions_put_UseForInboundRouting(This,bUseForInboundRouting)( (This)->lpVtbl -> put_UseForInboundRouting(This,bUseForInboundRouting) )
#endif
#endif
#ifndef __IFaxSecurity_INTERFACE_DEFINED__
#define __IFaxSecurity_INTERFACE_DEFINED__
typedef enum FAX_ACCESS_RIGHTS_ENUM
{
	farSUBMIT_LOW = 0x1,
	farSUBMIT_NORMAL = 0x2,
	farSUBMIT_HIGH = 0x4,
	farQUERY_JOBS = 0x8,
	farMANAGE_JOBS = 0x10,
	farQUERY_CONFIG = 0x20,
	farMANAGE_CONFIG = 0x40,
	farQUERY_IN_ARCHIVE = 0x80,
	farMANAGE_IN_ARCHIVE = 0x100,
	farQUERY_OUT_ARCHIVE = 0x200,
	farMANAGE_OUT_ARCHIVE = 0x400
} FAX_ACCESS_RIGHTS_ENUM;
extern const IID IID_IFaxSecurity;
typedef struct IFaxSecurityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxSecurity * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxSecurity * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxSecurity * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxSecurity * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxSecurity * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxSecurity * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxSecurity * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Descriptor) (IFaxSecurity * This, VARIANT * pvDescriptor);
	HRESULT(STDMETHODCALLTYPE * put_Descriptor) (IFaxSecurity * This, VARIANT vDescriptor);
	HRESULT(STDMETHODCALLTYPE * get_GrantedRights) (IFaxSecurity * This, FAX_ACCESS_RIGHTS_ENUM * pGrantedRights);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxSecurity * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxSecurity * This);
	HRESULT(STDMETHODCALLTYPE * get_InformationType) (IFaxSecurity * This, long *plInformationType);
	HRESULT(STDMETHODCALLTYPE * put_InformationType) (IFaxSecurity * This, long lInformationType);
	END_INTERFACE
}  IFaxSecurityVtbl;
interface IFaxSecurity
{
	CONST_VTBL struct IFaxSecurityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxSecurity_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxSecurity_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxSecurity_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxSecurity_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxSecurity_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxSecurity_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxSecurity_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxSecurity_get_Descriptor(This,pvDescriptor)( (This)->lpVtbl -> get_Descriptor(This,pvDescriptor) )
#define IFaxSecurity_put_Descriptor(This,vDescriptor)( (This)->lpVtbl -> put_Descriptor(This,vDescriptor) )
#define IFaxSecurity_get_GrantedRights(This,pGrantedRights)( (This)->lpVtbl -> get_GrantedRights(This,pGrantedRights) )
#define IFaxSecurity_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxSecurity_Save(This)( (This)->lpVtbl -> Save(This) )
#define IFaxSecurity_get_InformationType(This,plInformationType)( (This)->lpVtbl -> get_InformationType(This,plInformationType) )
#define IFaxSecurity_put_InformationType(This,lInformationType)( (This)->lpVtbl -> put_InformationType(This,lInformationType) )
#endif
#endif
#ifndef __IFaxDocument_INTERFACE_DEFINED__
#define __IFaxDocument_INTERFACE_DEFINED__
typedef enum FAX_PRIORITY_TYPE_ENUM
{
	fptLOW = 0,
	fptNORMAL = (fptLOW + 1),
	fptHIGH = (fptNORMAL + 1)
} FAX_PRIORITY_TYPE_ENUM;
typedef enum FAX_COVERPAGE_TYPE_ENUM
{
	fcptNONE = 0,
	fcptLOCAL = (fcptNONE + 1),
	fcptSERVER = (fcptLOCAL + 1)
} FAX_COVERPAGE_TYPE_ENUM;
typedef enum FAX_SCHEDULE_TYPE_ENUM
{
	fstNOW = 0,
	fstSPECIFIC_TIME = (fstNOW + 1),
	fstDISCOUNT_PERIOD = (fstSPECIFIC_TIME + 1)
} FAX_SCHEDULE_TYPE_ENUM;
extern const IID IID_IFaxDocument;
typedef struct IFaxDocumentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxDocument * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxDocument * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxDocument * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxDocument * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxDocument * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxDocument * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxDocument * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Body) (IFaxDocument * This, BSTR * pbstrBody);
	HRESULT(STDMETHODCALLTYPE * put_Body) (IFaxDocument * This, BSTR bstrBody);
	HRESULT(STDMETHODCALLTYPE * get_Sender) (IFaxDocument * This, IFaxSender ** ppFaxSender);
	HRESULT(STDMETHODCALLTYPE * get_Recipients) (IFaxDocument * This, IFaxRecipients ** ppFaxRecipients);
	HRESULT(STDMETHODCALLTYPE * get_CoverPage) (IFaxDocument * This, BSTR * pbstrCoverPage);
	HRESULT(STDMETHODCALLTYPE * put_CoverPage) (IFaxDocument * This, BSTR bstrCoverPage);
	HRESULT(STDMETHODCALLTYPE * get_Subject) (IFaxDocument * This, BSTR * pbstrSubject);
	HRESULT(STDMETHODCALLTYPE * put_Subject) (IFaxDocument * This, BSTR bstrSubject);
	HRESULT(STDMETHODCALLTYPE * get_Note) (IFaxDocument * This, BSTR * pbstrNote);
	HRESULT(STDMETHODCALLTYPE * put_Note) (IFaxDocument * This, BSTR bstrNote);
	HRESULT(STDMETHODCALLTYPE * get_ScheduleTime) (IFaxDocument * This, DATE * pdateScheduleTime);
	HRESULT(STDMETHODCALLTYPE * put_ScheduleTime) (IFaxDocument * This, DATE dateScheduleTime);
	HRESULT(STDMETHODCALLTYPE * get_ReceiptAddress) (IFaxDocument * This, BSTR * pbstrReceiptAddress);
	HRESULT(STDMETHODCALLTYPE * put_ReceiptAddress) (IFaxDocument * This, BSTR bstrReceiptAddress);
	HRESULT(STDMETHODCALLTYPE * get_DocumentName) (IFaxDocument * This, BSTR * pbstrDocumentName);
	HRESULT(STDMETHODCALLTYPE * put_DocumentName) (IFaxDocument * This, BSTR bstrDocumentName);
	HRESULT(STDMETHODCALLTYPE * get_CallHandle) (IFaxDocument * This, long *plCallHandle);
	HRESULT(STDMETHODCALLTYPE * put_CallHandle) (IFaxDocument * This, long lCallHandle);
	HRESULT(STDMETHODCALLTYPE * get_CoverPageType) (IFaxDocument * This, FAX_COVERPAGE_TYPE_ENUM * pCoverPageType);
	HRESULT(STDMETHODCALLTYPE * put_CoverPageType) (IFaxDocument * This, FAX_COVERPAGE_TYPE_ENUM CoverPageType);
	HRESULT(STDMETHODCALLTYPE * get_ScheduleType) (IFaxDocument * This, FAX_SCHEDULE_TYPE_ENUM * pScheduleType);
	HRESULT(STDMETHODCALLTYPE * put_ScheduleType) (IFaxDocument * This, FAX_SCHEDULE_TYPE_ENUM ScheduleType);
	HRESULT(STDMETHODCALLTYPE * get_ReceiptType) (IFaxDocument * This, FAX_RECEIPT_TYPE_ENUM * pReceiptType);
	HRESULT(STDMETHODCALLTYPE * put_ReceiptType) (IFaxDocument * This, FAX_RECEIPT_TYPE_ENUM ReceiptType);
	HRESULT(STDMETHODCALLTYPE * get_GroupBroadcastReceipts) (IFaxDocument * This, VARIANT_BOOL * pbUseGrouping);
	HRESULT(STDMETHODCALLTYPE * put_GroupBroadcastReceipts) (IFaxDocument * This, VARIANT_BOOL bUseGrouping);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IFaxDocument * This, FAX_PRIORITY_TYPE_ENUM * pPriority);
	HRESULT(STDMETHODCALLTYPE * put_Priority) (IFaxDocument * This, FAX_PRIORITY_TYPE_ENUM Priority);
	HRESULT(STDMETHODCALLTYPE * get_TapiConnection) (IFaxDocument * This, IDispatch ** ppTapiConnection);
	HRESULT(STDMETHODCALLTYPE * putref_TapiConnection) (IFaxDocument * This, IDispatch * pTapiConnection);
	HRESULT(STDMETHODCALLTYPE * Submit) (IFaxDocument * This, BSTR bstrFaxServerName, VARIANT * pvFaxOutgoingJobIDs);
	HRESULT(STDMETHODCALLTYPE * ConnectedSubmit) (IFaxDocument * This, IFaxServer * pFaxServer, VARIANT * pvFaxOutgoingJobIDs);
	HRESULT(STDMETHODCALLTYPE * get_AttachFaxToReceipt) (IFaxDocument * This, VARIANT_BOOL * pbAttachFax);
	HRESULT(STDMETHODCALLTYPE * put_AttachFaxToReceipt) (IFaxDocument * This, VARIANT_BOOL bAttachFax);
	END_INTERFACE
}  IFaxDocumentVtbl;
interface IFaxDocument
{
	CONST_VTBL struct IFaxDocumentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxDocument_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxDocument_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxDocument_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxDocument_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxDocument_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxDocument_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxDocument_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxDocument_get_Body(This,pbstrBody)( (This)->lpVtbl -> get_Body(This,pbstrBody) )
#define IFaxDocument_put_Body(This,bstrBody)( (This)->lpVtbl -> put_Body(This,bstrBody) )
#define IFaxDocument_get_Sender(This,ppFaxSender)( (This)->lpVtbl -> get_Sender(This,ppFaxSender) )
#define IFaxDocument_get_Recipients(This,ppFaxRecipients)( (This)->lpVtbl -> get_Recipients(This,ppFaxRecipients) )
#define IFaxDocument_get_CoverPage(This,pbstrCoverPage)( (This)->lpVtbl -> get_CoverPage(This,pbstrCoverPage) )
#define IFaxDocument_put_CoverPage(This,bstrCoverPage)( (This)->lpVtbl -> put_CoverPage(This,bstrCoverPage) )
#define IFaxDocument_get_Subject(This,pbstrSubject)( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
#define IFaxDocument_put_Subject(This,bstrSubject)( (This)->lpVtbl -> put_Subject(This,bstrSubject) )
#define IFaxDocument_get_Note(This,pbstrNote)( (This)->lpVtbl -> get_Note(This,pbstrNote) )
#define IFaxDocument_put_Note(This,bstrNote)( (This)->lpVtbl -> put_Note(This,bstrNote) )
#define IFaxDocument_get_ScheduleTime(This,pdateScheduleTime)( (This)->lpVtbl -> get_ScheduleTime(This,pdateScheduleTime) )
#define IFaxDocument_put_ScheduleTime(This,dateScheduleTime)( (This)->lpVtbl -> put_ScheduleTime(This,dateScheduleTime) )
#define IFaxDocument_get_ReceiptAddress(This,pbstrReceiptAddress)( (This)->lpVtbl -> get_ReceiptAddress(This,pbstrReceiptAddress) )
#define IFaxDocument_put_ReceiptAddress(This,bstrReceiptAddress)( (This)->lpVtbl -> put_ReceiptAddress(This,bstrReceiptAddress) )
#define IFaxDocument_get_DocumentName(This,pbstrDocumentName)( (This)->lpVtbl -> get_DocumentName(This,pbstrDocumentName) )
#define IFaxDocument_put_DocumentName(This,bstrDocumentName)( (This)->lpVtbl -> put_DocumentName(This,bstrDocumentName) )
#define IFaxDocument_get_CallHandle(This,plCallHandle)( (This)->lpVtbl -> get_CallHandle(This,plCallHandle) )
#define IFaxDocument_put_CallHandle(This,lCallHandle)( (This)->lpVtbl -> put_CallHandle(This,lCallHandle) )
#define IFaxDocument_get_CoverPageType(This,pCoverPageType)( (This)->lpVtbl -> get_CoverPageType(This,pCoverPageType) )
#define IFaxDocument_put_CoverPageType(This,CoverPageType)( (This)->lpVtbl -> put_CoverPageType(This,CoverPageType) )
#define IFaxDocument_get_ScheduleType(This,pScheduleType)( (This)->lpVtbl -> get_ScheduleType(This,pScheduleType) )
#define IFaxDocument_put_ScheduleType(This,ScheduleType)( (This)->lpVtbl -> put_ScheduleType(This,ScheduleType) )
#define IFaxDocument_get_ReceiptType(This,pReceiptType)( (This)->lpVtbl -> get_ReceiptType(This,pReceiptType) )
#define IFaxDocument_put_ReceiptType(This,ReceiptType)( (This)->lpVtbl -> put_ReceiptType(This,ReceiptType) )
#define IFaxDocument_get_GroupBroadcastReceipts(This,pbUseGrouping)( (This)->lpVtbl -> get_GroupBroadcastReceipts(This,pbUseGrouping) )
#define IFaxDocument_put_GroupBroadcastReceipts(This,bUseGrouping)( (This)->lpVtbl -> put_GroupBroadcastReceipts(This,bUseGrouping) )
#define IFaxDocument_get_Priority(This,pPriority)( (This)->lpVtbl -> get_Priority(This,pPriority) )
#define IFaxDocument_put_Priority(This,Priority)( (This)->lpVtbl -> put_Priority(This,Priority) )
#define IFaxDocument_get_TapiConnection(This,ppTapiConnection)( (This)->lpVtbl -> get_TapiConnection(This,ppTapiConnection) )
#define IFaxDocument_putref_TapiConnection(This,pTapiConnection)( (This)->lpVtbl -> putref_TapiConnection(This,pTapiConnection) )
#define IFaxDocument_Submit(This,bstrFaxServerName,pvFaxOutgoingJobIDs)( (This)->lpVtbl -> Submit(This,bstrFaxServerName,pvFaxOutgoingJobIDs) )
#define IFaxDocument_ConnectedSubmit(This,pFaxServer,pvFaxOutgoingJobIDs)( (This)->lpVtbl -> ConnectedSubmit(This,pFaxServer,pvFaxOutgoingJobIDs) )
#define IFaxDocument_get_AttachFaxToReceipt(This,pbAttachFax)( (This)->lpVtbl -> get_AttachFaxToReceipt(This,pbAttachFax) )
#define IFaxDocument_put_AttachFaxToReceipt(This,bAttachFax)( (This)->lpVtbl -> put_AttachFaxToReceipt(This,bAttachFax) )
#endif
#endif
#ifndef __IFaxSender_INTERFACE_DEFINED__
#define __IFaxSender_INTERFACE_DEFINED__
extern const IID IID_IFaxSender;
typedef struct IFaxSenderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxSender * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxSender * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxSender * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxSender * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxSender * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxSender * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxSender * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_BillingCode) (IFaxSender * This, BSTR * pbstrBillingCode);
	HRESULT(STDMETHODCALLTYPE * put_BillingCode) (IFaxSender * This, BSTR bstrBillingCode);
	HRESULT(STDMETHODCALLTYPE * get_City) (IFaxSender * This, BSTR * pbstrCity);
	HRESULT(STDMETHODCALLTYPE * put_City) (IFaxSender * This, BSTR bstrCity);
	HRESULT(STDMETHODCALLTYPE * get_Company) (IFaxSender * This, BSTR * pbstrCompany);
	HRESULT(STDMETHODCALLTYPE * put_Company) (IFaxSender * This, BSTR bstrCompany);
	HRESULT(STDMETHODCALLTYPE * get_Country) (IFaxSender * This, BSTR * pbstrCountry);
	HRESULT(STDMETHODCALLTYPE * put_Country) (IFaxSender * This, BSTR bstrCountry);
	HRESULT(STDMETHODCALLTYPE * get_Department) (IFaxSender * This, BSTR * pbstrDepartment);
	HRESULT(STDMETHODCALLTYPE * put_Department) (IFaxSender * This, BSTR bstrDepartment);
	HRESULT(STDMETHODCALLTYPE * get_Email) (IFaxSender * This, BSTR * pbstrEmail);
	HRESULT(STDMETHODCALLTYPE * put_Email) (IFaxSender * This, BSTR bstrEmail);
	HRESULT(STDMETHODCALLTYPE * get_FaxNumber) (IFaxSender * This, BSTR * pbstrFaxNumber);
	HRESULT(STDMETHODCALLTYPE * put_FaxNumber) (IFaxSender * This, BSTR bstrFaxNumber);
	HRESULT(STDMETHODCALLTYPE * get_HomePhone) (IFaxSender * This, BSTR * pbstrHomePhone);
	HRESULT(STDMETHODCALLTYPE * put_HomePhone) (IFaxSender * This, BSTR bstrHomePhone);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFaxSender * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFaxSender * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IFaxSender * This, BSTR * pbstrTSID);
	HRESULT(STDMETHODCALLTYPE * put_TSID) (IFaxSender * This, BSTR bstrTSID);
	HRESULT(STDMETHODCALLTYPE * get_OfficePhone) (IFaxSender * This, BSTR * pbstrOfficePhone);
	HRESULT(STDMETHODCALLTYPE * put_OfficePhone) (IFaxSender * This, BSTR bstrOfficePhone);
	HRESULT(STDMETHODCALLTYPE * get_OfficeLocation) (IFaxSender * This, BSTR * pbstrOfficeLocation);
	HRESULT(STDMETHODCALLTYPE * put_OfficeLocation) (IFaxSender * This, BSTR bstrOfficeLocation);
	HRESULT(STDMETHODCALLTYPE * get_State) (IFaxSender * This, BSTR * pbstrState);
	HRESULT(STDMETHODCALLTYPE * put_State) (IFaxSender * This, BSTR bstrState);
	HRESULT(STDMETHODCALLTYPE * get_StreetAddress) (IFaxSender * This, BSTR * pbstrStreetAddress);
	HRESULT(STDMETHODCALLTYPE * put_StreetAddress) (IFaxSender * This, BSTR bstrStreetAddress);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IFaxSender * This, BSTR * pbstrTitle);
	HRESULT(STDMETHODCALLTYPE * put_Title) (IFaxSender * This, BSTR bstrTitle);
	HRESULT(STDMETHODCALLTYPE * get_ZipCode) (IFaxSender * This, BSTR * pbstrZipCode);
	HRESULT(STDMETHODCALLTYPE * put_ZipCode) (IFaxSender * This, BSTR bstrZipCode);
	HRESULT(STDMETHODCALLTYPE * LoadDefaultSender) (IFaxSender * This);
	HRESULT(STDMETHODCALLTYPE * SaveDefaultSender) (IFaxSender * This);
	END_INTERFACE
}  IFaxSenderVtbl;
interface IFaxSender
{
	CONST_VTBL struct IFaxSenderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxSender_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxSender_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxSender_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxSender_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxSender_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxSender_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxSender_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxSender_get_BillingCode(This,pbstrBillingCode)( (This)->lpVtbl -> get_BillingCode(This,pbstrBillingCode) )
#define IFaxSender_put_BillingCode(This,bstrBillingCode)( (This)->lpVtbl -> put_BillingCode(This,bstrBillingCode) )
#define IFaxSender_get_City(This,pbstrCity)( (This)->lpVtbl -> get_City(This,pbstrCity) )
#define IFaxSender_put_City(This,bstrCity)( (This)->lpVtbl -> put_City(This,bstrCity) )
#define IFaxSender_get_Company(This,pbstrCompany)( (This)->lpVtbl -> get_Company(This,pbstrCompany) )
#define IFaxSender_put_Company(This,bstrCompany)( (This)->lpVtbl -> put_Company(This,bstrCompany) )
#define IFaxSender_get_Country(This,pbstrCountry)( (This)->lpVtbl -> get_Country(This,pbstrCountry) )
#define IFaxSender_put_Country(This,bstrCountry)( (This)->lpVtbl -> put_Country(This,bstrCountry) )
#define IFaxSender_get_Department(This,pbstrDepartment)( (This)->lpVtbl -> get_Department(This,pbstrDepartment) )
#define IFaxSender_put_Department(This,bstrDepartment)( (This)->lpVtbl -> put_Department(This,bstrDepartment) )
#define IFaxSender_get_Email(This,pbstrEmail)( (This)->lpVtbl -> get_Email(This,pbstrEmail) )
#define IFaxSender_put_Email(This,bstrEmail)( (This)->lpVtbl -> put_Email(This,bstrEmail) )
#define IFaxSender_get_FaxNumber(This,pbstrFaxNumber)( (This)->lpVtbl -> get_FaxNumber(This,pbstrFaxNumber) )
#define IFaxSender_put_FaxNumber(This,bstrFaxNumber)( (This)->lpVtbl -> put_FaxNumber(This,bstrFaxNumber) )
#define IFaxSender_get_HomePhone(This,pbstrHomePhone)( (This)->lpVtbl -> get_HomePhone(This,pbstrHomePhone) )
#define IFaxSender_put_HomePhone(This,bstrHomePhone)( (This)->lpVtbl -> put_HomePhone(This,bstrHomePhone) )
#define IFaxSender_get_Name(This,pbstrName)( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IFaxSender_put_Name(This,bstrName)( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IFaxSender_get_TSID(This,pbstrTSID)( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
#define IFaxSender_put_TSID(This,bstrTSID)( (This)->lpVtbl -> put_TSID(This,bstrTSID) )
#define IFaxSender_get_OfficePhone(This,pbstrOfficePhone)( (This)->lpVtbl -> get_OfficePhone(This,pbstrOfficePhone) )
#define IFaxSender_put_OfficePhone(This,bstrOfficePhone)( (This)->lpVtbl -> put_OfficePhone(This,bstrOfficePhone) )
#define IFaxSender_get_OfficeLocation(This,pbstrOfficeLocation)( (This)->lpVtbl -> get_OfficeLocation(This,pbstrOfficeLocation) )
#define IFaxSender_put_OfficeLocation(This,bstrOfficeLocation)( (This)->lpVtbl -> put_OfficeLocation(This,bstrOfficeLocation) )
#define IFaxSender_get_State(This,pbstrState)( (This)->lpVtbl -> get_State(This,pbstrState) )
#define IFaxSender_put_State(This,bstrState)( (This)->lpVtbl -> put_State(This,bstrState) )
#define IFaxSender_get_StreetAddress(This,pbstrStreetAddress)( (This)->lpVtbl -> get_StreetAddress(This,pbstrStreetAddress) )
#define IFaxSender_put_StreetAddress(This,bstrStreetAddress)( (This)->lpVtbl -> put_StreetAddress(This,bstrStreetAddress) )
#define IFaxSender_get_Title(This,pbstrTitle)( (This)->lpVtbl -> get_Title(This,pbstrTitle) )
#define IFaxSender_put_Title(This,bstrTitle)( (This)->lpVtbl -> put_Title(This,bstrTitle) )
#define IFaxSender_get_ZipCode(This,pbstrZipCode)( (This)->lpVtbl -> get_ZipCode(This,pbstrZipCode) )
#define IFaxSender_put_ZipCode(This,bstrZipCode)( (This)->lpVtbl -> put_ZipCode(This,bstrZipCode) )
#define IFaxSender_LoadDefaultSender(This)( (This)->lpVtbl -> LoadDefaultSender(This) )
#define IFaxSender_SaveDefaultSender(This)( (This)->lpVtbl -> SaveDefaultSender(This) )
#endif
#endif
#ifndef __IFaxRecipient_INTERFACE_DEFINED__
#define __IFaxRecipient_INTERFACE_DEFINED__
extern const IID IID_IFaxRecipient;
typedef struct IFaxRecipientVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxRecipient * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxRecipient * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxRecipient * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxRecipient * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxRecipient * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxRecipient * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxRecipient * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_FaxNumber) (IFaxRecipient * This, BSTR * pbstrFaxNumber);
	HRESULT(STDMETHODCALLTYPE * put_FaxNumber) (IFaxRecipient * This, BSTR bstrFaxNumber);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFaxRecipient * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFaxRecipient * This, BSTR bstrName);
	END_INTERFACE
}  IFaxRecipientVtbl;
interface IFaxRecipient
{
	CONST_VTBL struct IFaxRecipientVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxRecipient_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxRecipient_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxRecipient_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxRecipient_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxRecipient_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxRecipient_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxRecipient_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxRecipient_get_FaxNumber(This,pbstrFaxNumber)( (This)->lpVtbl -> get_FaxNumber(This,pbstrFaxNumber) )
#define IFaxRecipient_put_FaxNumber(This,bstrFaxNumber)( (This)->lpVtbl -> put_FaxNumber(This,bstrFaxNumber) )
#define IFaxRecipient_get_Name(This,pbstrName)( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IFaxRecipient_put_Name(This,bstrName)( (This)->lpVtbl -> put_Name(This,bstrName) )
#endif
#endif
#ifndef __IFaxRecipients_INTERFACE_DEFINED__
#define __IFaxRecipients_INTERFACE_DEFINED__
extern const IID IID_IFaxRecipients;
typedef struct IFaxRecipientsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxRecipients * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxRecipients * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxRecipients * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxRecipients * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxRecipients * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxRecipients * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxRecipients * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFaxRecipients * This, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxRecipients * This, long lIndex, IFaxRecipient ** ppFaxRecipient);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxRecipients * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * Add) (IFaxRecipients * This, BSTR bstrFaxNumber, BSTR bstrRecipientName, IFaxRecipient ** ppFaxRecipient);
	HRESULT(STDMETHODCALLTYPE * Remove) (IFaxRecipients * This, long lIndex);
	END_INTERFACE
}  IFaxRecipientsVtbl;
interface IFaxRecipients
{
	CONST_VTBL struct IFaxRecipientsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxRecipients_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxRecipients_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxRecipients_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxRecipients_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxRecipients_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxRecipients_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxRecipients_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxRecipients_get__NewEnum(This,ppUnk)( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
#define IFaxRecipients_get_Item(This,lIndex,ppFaxRecipient)( (This)->lpVtbl -> get_Item(This,lIndex,ppFaxRecipient) )
#define IFaxRecipients_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#define IFaxRecipients_Add(This,bstrFaxNumber,bstrRecipientName,ppFaxRecipient)( (This)->lpVtbl -> Add(This,bstrFaxNumber,bstrRecipientName,ppFaxRecipient) )
#define IFaxRecipients_Remove(This,lIndex)( (This)->lpVtbl -> Remove(This,lIndex) )
#endif
#endif
#ifndef __IFaxIncomingArchive_INTERFACE_DEFINED__
#define __IFaxIncomingArchive_INTERFACE_DEFINED__
extern const IID IID_IFaxIncomingArchive;
typedef struct IFaxIncomingArchiveVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxIncomingArchive * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxIncomingArchive * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxIncomingArchive * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxIncomingArchive * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxIncomingArchive * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxIncomingArchive * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxIncomingArchive * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UseArchive) (IFaxIncomingArchive * This, VARIANT_BOOL * pbUseArchive);
	HRESULT(STDMETHODCALLTYPE * put_UseArchive) (IFaxIncomingArchive * This, VARIANT_BOOL bUseArchive);
	HRESULT(STDMETHODCALLTYPE * get_ArchiveFolder) (IFaxIncomingArchive * This, BSTR * pbstrArchiveFolder);
	HRESULT(STDMETHODCALLTYPE * put_ArchiveFolder) (IFaxIncomingArchive * This, BSTR bstrArchiveFolder);
	HRESULT(STDMETHODCALLTYPE * get_SizeQuotaWarning) (IFaxIncomingArchive * This, VARIANT_BOOL * pbSizeQuotaWarning);
	HRESULT(STDMETHODCALLTYPE * put_SizeQuotaWarning) (IFaxIncomingArchive * This, VARIANT_BOOL bSizeQuotaWarning);
	HRESULT(STDMETHODCALLTYPE * get_HighQuotaWaterMark) (IFaxIncomingArchive * This, long *plHighQuotaWaterMark);
	HRESULT(STDMETHODCALLTYPE * put_HighQuotaWaterMark) (IFaxIncomingArchive * This, long lHighQuotaWaterMark);
	HRESULT(STDMETHODCALLTYPE * get_LowQuotaWaterMark) (IFaxIncomingArchive * This, long *plLowQuotaWaterMark);
	HRESULT(STDMETHODCALLTYPE * put_LowQuotaWaterMark) (IFaxIncomingArchive * This, long lLowQuotaWaterMark);
	HRESULT(STDMETHODCALLTYPE * get_AgeLimit) (IFaxIncomingArchive * This, long *plAgeLimit);
	HRESULT(STDMETHODCALLTYPE * put_AgeLimit) (IFaxIncomingArchive * This, long lAgeLimit);
	HRESULT(STDMETHODCALLTYPE * get_SizeLow) (IFaxIncomingArchive * This, long *plSizeLow);
	HRESULT(STDMETHODCALLTYPE * get_SizeHigh) (IFaxIncomingArchive * This, long *plSizeHigh);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxIncomingArchive * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxIncomingArchive * This);
	HRESULT(STDMETHODCALLTYPE * GetMessages) (IFaxIncomingArchive * This, long lPrefetchSize, IFaxIncomingMessageIterator ** pFaxIncomingMessageIterator);
	HRESULT(STDMETHODCALLTYPE * GetMessage) (IFaxIncomingArchive * This, BSTR bstrMessageId, IFaxIncomingMessage ** pFaxIncomingMessage);
	END_INTERFACE
}  IFaxIncomingArchiveVtbl;
interface IFaxIncomingArchive
{
	CONST_VTBL struct IFaxIncomingArchiveVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxIncomingArchive_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxIncomingArchive_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxIncomingArchive_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxIncomingArchive_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxIncomingArchive_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxIncomingArchive_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxIncomingArchive_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxIncomingArchive_get_UseArchive(This,pbUseArchive)( (This)->lpVtbl -> get_UseArchive(This,pbUseArchive) )
#define IFaxIncomingArchive_put_UseArchive(This,bUseArchive)( (This)->lpVtbl -> put_UseArchive(This,bUseArchive) )
#define IFaxIncomingArchive_get_ArchiveFolder(This,pbstrArchiveFolder)( (This)->lpVtbl -> get_ArchiveFolder(This,pbstrArchiveFolder) )
#define IFaxIncomingArchive_put_ArchiveFolder(This,bstrArchiveFolder)( (This)->lpVtbl -> put_ArchiveFolder(This,bstrArchiveFolder) )
#define IFaxIncomingArchive_get_SizeQuotaWarning(This,pbSizeQuotaWarning)( (This)->lpVtbl -> get_SizeQuotaWarning(This,pbSizeQuotaWarning) )
#define IFaxIncomingArchive_put_SizeQuotaWarning(This,bSizeQuotaWarning)( (This)->lpVtbl -> put_SizeQuotaWarning(This,bSizeQuotaWarning) )
#define IFaxIncomingArchive_get_HighQuotaWaterMark(This,plHighQuotaWaterMark)( (This)->lpVtbl -> get_HighQuotaWaterMark(This,plHighQuotaWaterMark) )
#define IFaxIncomingArchive_put_HighQuotaWaterMark(This,lHighQuotaWaterMark)( (This)->lpVtbl -> put_HighQuotaWaterMark(This,lHighQuotaWaterMark) )
#define IFaxIncomingArchive_get_LowQuotaWaterMark(This,plLowQuotaWaterMark)( (This)->lpVtbl -> get_LowQuotaWaterMark(This,plLowQuotaWaterMark) )
#define IFaxIncomingArchive_put_LowQuotaWaterMark(This,lLowQuotaWaterMark)( (This)->lpVtbl -> put_LowQuotaWaterMark(This,lLowQuotaWaterMark) )
#define IFaxIncomingArchive_get_AgeLimit(This,plAgeLimit)( (This)->lpVtbl -> get_AgeLimit(This,plAgeLimit) )
#define IFaxIncomingArchive_put_AgeLimit(This,lAgeLimit)( (This)->lpVtbl -> put_AgeLimit(This,lAgeLimit) )
#define IFaxIncomingArchive_get_SizeLow(This,plSizeLow)( (This)->lpVtbl -> get_SizeLow(This,plSizeLow) )
#define IFaxIncomingArchive_get_SizeHigh(This,plSizeHigh)( (This)->lpVtbl -> get_SizeHigh(This,plSizeHigh) )
#define IFaxIncomingArchive_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxIncomingArchive_Save(This)( (This)->lpVtbl -> Save(This) )
#define IFaxIncomingArchive_GetMessages(This,lPrefetchSize,pFaxIncomingMessageIterator)( (This)->lpVtbl -> GetMessages(This,lPrefetchSize,pFaxIncomingMessageIterator) )
#define IFaxIncomingArchive_GetMessage(This,bstrMessageId,pFaxIncomingMessage)( (This)->lpVtbl -> GetMessage(This,bstrMessageId,pFaxIncomingMessage) )
#endif
#endif
#ifndef __IFaxIncomingQueue_INTERFACE_DEFINED__
#define __IFaxIncomingQueue_INTERFACE_DEFINED__
extern const IID IID_IFaxIncomingQueue;
typedef struct IFaxIncomingQueueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxIncomingQueue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxIncomingQueue * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxIncomingQueue * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxIncomingQueue * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxIncomingQueue * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxIncomingQueue * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxIncomingQueue * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Blocked) (IFaxIncomingQueue * This, VARIANT_BOOL * pbBlocked);
	HRESULT(STDMETHODCALLTYPE * put_Blocked) (IFaxIncomingQueue * This, VARIANT_BOOL bBlocked);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxIncomingQueue * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxIncomingQueue * This);
	HRESULT(STDMETHODCALLTYPE * GetJobs) (IFaxIncomingQueue * This, IFaxIncomingJobs ** pFaxIncomingJobs);
	HRESULT(STDMETHODCALLTYPE * GetJob) (IFaxIncomingQueue * This, BSTR bstrJobId, IFaxIncomingJob ** pFaxIncomingJob);
	END_INTERFACE
}  IFaxIncomingQueueVtbl;
interface IFaxIncomingQueue
{
	CONST_VTBL struct IFaxIncomingQueueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxIncomingQueue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxIncomingQueue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxIncomingQueue_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxIncomingQueue_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxIncomingQueue_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxIncomingQueue_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxIncomingQueue_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxIncomingQueue_get_Blocked(This,pbBlocked)( (This)->lpVtbl -> get_Blocked(This,pbBlocked) )
#define IFaxIncomingQueue_put_Blocked(This,bBlocked)( (This)->lpVtbl -> put_Blocked(This,bBlocked) )
#define IFaxIncomingQueue_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxIncomingQueue_Save(This)( (This)->lpVtbl -> Save(This) )
#define IFaxIncomingQueue_GetJobs(This,pFaxIncomingJobs)( (This)->lpVtbl -> GetJobs(This,pFaxIncomingJobs) )
#define IFaxIncomingQueue_GetJob(This,bstrJobId,pFaxIncomingJob)( (This)->lpVtbl -> GetJob(This,bstrJobId,pFaxIncomingJob) )
#endif
#endif
#ifndef __IFaxOutgoingArchive_INTERFACE_DEFINED__
#define __IFaxOutgoingArchive_INTERFACE_DEFINED__
extern const IID IID_IFaxOutgoingArchive;
typedef struct IFaxOutgoingArchiveVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxOutgoingArchive * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxOutgoingArchive * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxOutgoingArchive * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxOutgoingArchive * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxOutgoingArchive * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxOutgoingArchive * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxOutgoingArchive * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UseArchive) (IFaxOutgoingArchive * This, VARIANT_BOOL * pbUseArchive);
	HRESULT(STDMETHODCALLTYPE * put_UseArchive) (IFaxOutgoingArchive * This, VARIANT_BOOL bUseArchive);
	HRESULT(STDMETHODCALLTYPE * get_ArchiveFolder) (IFaxOutgoingArchive * This, BSTR * pbstrArchiveFolder);
	HRESULT(STDMETHODCALLTYPE * put_ArchiveFolder) (IFaxOutgoingArchive * This, BSTR bstrArchiveFolder);
	HRESULT(STDMETHODCALLTYPE * get_SizeQuotaWarning) (IFaxOutgoingArchive * This, VARIANT_BOOL * pbSizeQuotaWarning);
	HRESULT(STDMETHODCALLTYPE * put_SizeQuotaWarning) (IFaxOutgoingArchive * This, VARIANT_BOOL bSizeQuotaWarning);
	HRESULT(STDMETHODCALLTYPE * get_HighQuotaWaterMark) (IFaxOutgoingArchive * This, long *plHighQuotaWaterMark);
	HRESULT(STDMETHODCALLTYPE * put_HighQuotaWaterMark) (IFaxOutgoingArchive * This, long lHighQuotaWaterMark);
	HRESULT(STDMETHODCALLTYPE * get_LowQuotaWaterMark) (IFaxOutgoingArchive * This, long *plLowQuotaWaterMark);
	HRESULT(STDMETHODCALLTYPE * put_LowQuotaWaterMark) (IFaxOutgoingArchive * This, long lLowQuotaWaterMark);
	HRESULT(STDMETHODCALLTYPE * get_AgeLimit) (IFaxOutgoingArchive * This, long *plAgeLimit);
	HRESULT(STDMETHODCALLTYPE * put_AgeLimit) (IFaxOutgoingArchive * This, long lAgeLimit);
	HRESULT(STDMETHODCALLTYPE * get_SizeLow) (IFaxOutgoingArchive * This, long *plSizeLow);
	HRESULT(STDMETHODCALLTYPE * get_SizeHigh) (IFaxOutgoingArchive * This, long *plSizeHigh);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxOutgoingArchive * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxOutgoingArchive * This);
	HRESULT(STDMETHODCALLTYPE * GetMessages) (IFaxOutgoingArchive * This, long lPrefetchSize, IFaxOutgoingMessageIterator ** pFaxOutgoingMessageIterator);
	HRESULT(STDMETHODCALLTYPE * GetMessage) (IFaxOutgoingArchive * This, BSTR bstrMessageId, IFaxOutgoingMessage ** pFaxOutgoingMessage);
	END_INTERFACE
}  IFaxOutgoingArchiveVtbl;
interface IFaxOutgoingArchive
{
	CONST_VTBL struct IFaxOutgoingArchiveVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxOutgoingArchive_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxOutgoingArchive_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxOutgoingArchive_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxOutgoingArchive_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxOutgoingArchive_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxOutgoingArchive_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxOutgoingArchive_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxOutgoingArchive_get_UseArchive(This,pbUseArchive)( (This)->lpVtbl -> get_UseArchive(This,pbUseArchive) )
#define IFaxOutgoingArchive_put_UseArchive(This,bUseArchive)( (This)->lpVtbl -> put_UseArchive(This,bUseArchive) )
#define IFaxOutgoingArchive_get_ArchiveFolder(This,pbstrArchiveFolder)( (This)->lpVtbl -> get_ArchiveFolder(This,pbstrArchiveFolder) )
#define IFaxOutgoingArchive_put_ArchiveFolder(This,bstrArchiveFolder)( (This)->lpVtbl -> put_ArchiveFolder(This,bstrArchiveFolder) )
#define IFaxOutgoingArchive_get_SizeQuotaWarning(This,pbSizeQuotaWarning)( (This)->lpVtbl -> get_SizeQuotaWarning(This,pbSizeQuotaWarning) )
#define IFaxOutgoingArchive_put_SizeQuotaWarning(This,bSizeQuotaWarning)( (This)->lpVtbl -> put_SizeQuotaWarning(This,bSizeQuotaWarning) )
#define IFaxOutgoingArchive_get_HighQuotaWaterMark(This,plHighQuotaWaterMark)( (This)->lpVtbl -> get_HighQuotaWaterMark(This,plHighQuotaWaterMark) )
#define IFaxOutgoingArchive_put_HighQuotaWaterMark(This,lHighQuotaWaterMark)( (This)->lpVtbl -> put_HighQuotaWaterMark(This,lHighQuotaWaterMark) )
#define IFaxOutgoingArchive_get_LowQuotaWaterMark(This,plLowQuotaWaterMark)( (This)->lpVtbl -> get_LowQuotaWaterMark(This,plLowQuotaWaterMark) )
#define IFaxOutgoingArchive_put_LowQuotaWaterMark(This,lLowQuotaWaterMark)( (This)->lpVtbl -> put_LowQuotaWaterMark(This,lLowQuotaWaterMark) )
#define IFaxOutgoingArchive_get_AgeLimit(This,plAgeLimit)( (This)->lpVtbl -> get_AgeLimit(This,plAgeLimit) )
#define IFaxOutgoingArchive_put_AgeLimit(This,lAgeLimit)( (This)->lpVtbl -> put_AgeLimit(This,lAgeLimit) )
#define IFaxOutgoingArchive_get_SizeLow(This,plSizeLow)( (This)->lpVtbl -> get_SizeLow(This,plSizeLow) )
#define IFaxOutgoingArchive_get_SizeHigh(This,plSizeHigh)( (This)->lpVtbl -> get_SizeHigh(This,plSizeHigh) )
#define IFaxOutgoingArchive_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxOutgoingArchive_Save(This)( (This)->lpVtbl -> Save(This) )
#define IFaxOutgoingArchive_GetMessages(This,lPrefetchSize,pFaxOutgoingMessageIterator)( (This)->lpVtbl -> GetMessages(This,lPrefetchSize,pFaxOutgoingMessageIterator) )
#define IFaxOutgoingArchive_GetMessage(This,bstrMessageId,pFaxOutgoingMessage)( (This)->lpVtbl -> GetMessage(This,bstrMessageId,pFaxOutgoingMessage) )
#endif
#endif
#ifndef __IFaxOutgoingQueue_INTERFACE_DEFINED__
#define __IFaxOutgoingQueue_INTERFACE_DEFINED__
extern const IID IID_IFaxOutgoingQueue;
typedef struct IFaxOutgoingQueueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxOutgoingQueue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxOutgoingQueue * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxOutgoingQueue * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxOutgoingQueue * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxOutgoingQueue * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxOutgoingQueue * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxOutgoingQueue * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Blocked) (IFaxOutgoingQueue * This, VARIANT_BOOL * pbBlocked);
	HRESULT(STDMETHODCALLTYPE * put_Blocked) (IFaxOutgoingQueue * This, VARIANT_BOOL bBlocked);
	HRESULT(STDMETHODCALLTYPE * get_Paused) (IFaxOutgoingQueue * This, VARIANT_BOOL * pbPaused);
	HRESULT(STDMETHODCALLTYPE * put_Paused) (IFaxOutgoingQueue * This, VARIANT_BOOL bPaused);
	HRESULT(STDMETHODCALLTYPE * get_AllowPersonalCoverPages) (IFaxOutgoingQueue * This, VARIANT_BOOL * pbAllowPersonalCoverPages);
	HRESULT(STDMETHODCALLTYPE * put_AllowPersonalCoverPages) (IFaxOutgoingQueue * This, VARIANT_BOOL bAllowPersonalCoverPages);
	HRESULT(STDMETHODCALLTYPE * get_UseDeviceTSID) (IFaxOutgoingQueue * This, VARIANT_BOOL * pbUseDeviceTSID);
	HRESULT(STDMETHODCALLTYPE * put_UseDeviceTSID) (IFaxOutgoingQueue * This, VARIANT_BOOL bUseDeviceTSID);
	HRESULT(STDMETHODCALLTYPE * get_Retries) (IFaxOutgoingQueue * This, long *plRetries);
	HRESULT(STDMETHODCALLTYPE * put_Retries) (IFaxOutgoingQueue * This, long lRetries);
	HRESULT(STDMETHODCALLTYPE * get_RetryDelay) (IFaxOutgoingQueue * This, long *plRetryDelay);
	HRESULT(STDMETHODCALLTYPE * put_RetryDelay) (IFaxOutgoingQueue * This, long lRetryDelay);
	HRESULT(STDMETHODCALLTYPE * get_DiscountRateStart) (IFaxOutgoingQueue * This, DATE * pdateDiscountRateStart);
	HRESULT(STDMETHODCALLTYPE * put_DiscountRateStart) (IFaxOutgoingQueue * This, DATE dateDiscountRateStart);
	HRESULT(STDMETHODCALLTYPE * get_DiscountRateEnd) (IFaxOutgoingQueue * This, DATE * pdateDiscountRateEnd);
	HRESULT(STDMETHODCALLTYPE * put_DiscountRateEnd) (IFaxOutgoingQueue * This, DATE dateDiscountRateEnd);
	HRESULT(STDMETHODCALLTYPE * get_AgeLimit) (IFaxOutgoingQueue * This, long *plAgeLimit);
	HRESULT(STDMETHODCALLTYPE * put_AgeLimit) (IFaxOutgoingQueue * This, long lAgeLimit);
	HRESULT(STDMETHODCALLTYPE * get_Branding) (IFaxOutgoingQueue * This, VARIANT_BOOL * pbBranding);
	HRESULT(STDMETHODCALLTYPE * put_Branding) (IFaxOutgoingQueue * This, VARIANT_BOOL bBranding);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxOutgoingQueue * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxOutgoingQueue * This);
	HRESULT(STDMETHODCALLTYPE * GetJobs) (IFaxOutgoingQueue * This, IFaxOutgoingJobs ** pFaxOutgoingJobs);
	HRESULT(STDMETHODCALLTYPE * GetJob) (IFaxOutgoingQueue * This, BSTR bstrJobId, IFaxOutgoingJob ** pFaxOutgoingJob);
	END_INTERFACE
}  IFaxOutgoingQueueVtbl;
interface IFaxOutgoingQueue
{
	CONST_VTBL struct IFaxOutgoingQueueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxOutgoingQueue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxOutgoingQueue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxOutgoingQueue_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxOutgoingQueue_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxOutgoingQueue_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxOutgoingQueue_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxOutgoingQueue_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxOutgoingQueue_get_Blocked(This,pbBlocked)( (This)->lpVtbl -> get_Blocked(This,pbBlocked) )
#define IFaxOutgoingQueue_put_Blocked(This,bBlocked)( (This)->lpVtbl -> put_Blocked(This,bBlocked) )
#define IFaxOutgoingQueue_get_Paused(This,pbPaused)( (This)->lpVtbl -> get_Paused(This,pbPaused) )
#define IFaxOutgoingQueue_put_Paused(This,bPaused)( (This)->lpVtbl -> put_Paused(This,bPaused) )
#define IFaxOutgoingQueue_get_AllowPersonalCoverPages(This,pbAllowPersonalCoverPages)( (This)->lpVtbl -> get_AllowPersonalCoverPages(This,pbAllowPersonalCoverPages) )
#define IFaxOutgoingQueue_put_AllowPersonalCoverPages(This,bAllowPersonalCoverPages)( (This)->lpVtbl -> put_AllowPersonalCoverPages(This,bAllowPersonalCoverPages) )
#define IFaxOutgoingQueue_get_UseDeviceTSID(This,pbUseDeviceTSID)( (This)->lpVtbl -> get_UseDeviceTSID(This,pbUseDeviceTSID) )
#define IFaxOutgoingQueue_put_UseDeviceTSID(This,bUseDeviceTSID)( (This)->lpVtbl -> put_UseDeviceTSID(This,bUseDeviceTSID) )
#define IFaxOutgoingQueue_get_Retries(This,plRetries)( (This)->lpVtbl -> get_Retries(This,plRetries) )
#define IFaxOutgoingQueue_put_Retries(This,lRetries)( (This)->lpVtbl -> put_Retries(This,lRetries) )
#define IFaxOutgoingQueue_get_RetryDelay(This,plRetryDelay)( (This)->lpVtbl -> get_RetryDelay(This,plRetryDelay) )
#define IFaxOutgoingQueue_put_RetryDelay(This,lRetryDelay)( (This)->lpVtbl -> put_RetryDelay(This,lRetryDelay) )
#define IFaxOutgoingQueue_get_DiscountRateStart(This,pdateDiscountRateStart)( (This)->lpVtbl -> get_DiscountRateStart(This,pdateDiscountRateStart) )
#define IFaxOutgoingQueue_put_DiscountRateStart(This,dateDiscountRateStart)( (This)->lpVtbl -> put_DiscountRateStart(This,dateDiscountRateStart) )
#define IFaxOutgoingQueue_get_DiscountRateEnd(This,pdateDiscountRateEnd)( (This)->lpVtbl -> get_DiscountRateEnd(This,pdateDiscountRateEnd) )
#define IFaxOutgoingQueue_put_DiscountRateEnd(This,dateDiscountRateEnd)( (This)->lpVtbl -> put_DiscountRateEnd(This,dateDiscountRateEnd) )
#define IFaxOutgoingQueue_get_AgeLimit(This,plAgeLimit)( (This)->lpVtbl -> get_AgeLimit(This,plAgeLimit) )
#define IFaxOutgoingQueue_put_AgeLimit(This,lAgeLimit)( (This)->lpVtbl -> put_AgeLimit(This,lAgeLimit) )
#define IFaxOutgoingQueue_get_Branding(This,pbBranding)( (This)->lpVtbl -> get_Branding(This,pbBranding) )
#define IFaxOutgoingQueue_put_Branding(This,bBranding)( (This)->lpVtbl -> put_Branding(This,bBranding) )
#define IFaxOutgoingQueue_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxOutgoingQueue_Save(This)( (This)->lpVtbl -> Save(This) )
#define IFaxOutgoingQueue_GetJobs(This,pFaxOutgoingJobs)( (This)->lpVtbl -> GetJobs(This,pFaxOutgoingJobs) )
#define IFaxOutgoingQueue_GetJob(This,bstrJobId,pFaxOutgoingJob)( (This)->lpVtbl -> GetJob(This,bstrJobId,pFaxOutgoingJob) )
#endif
#endif
#ifndef __IFaxIncomingMessageIterator_INTERFACE_DEFINED__
#define __IFaxIncomingMessageIterator_INTERFACE_DEFINED__
extern const IID IID_IFaxIncomingMessageIterator;
typedef struct IFaxIncomingMessageIteratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxIncomingMessageIterator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxIncomingMessageIterator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxIncomingMessageIterator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxIncomingMessageIterator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxIncomingMessageIterator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxIncomingMessageIterator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxIncomingMessageIterator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Message) (IFaxIncomingMessageIterator * This, IFaxIncomingMessage ** pFaxIncomingMessage);
	HRESULT(STDMETHODCALLTYPE * get_PrefetchSize) (IFaxIncomingMessageIterator * This, long *plPrefetchSize);
	HRESULT(STDMETHODCALLTYPE * put_PrefetchSize) (IFaxIncomingMessageIterator * This, long lPrefetchSize);
	HRESULT(STDMETHODCALLTYPE * get_AtEOF) (IFaxIncomingMessageIterator * This, VARIANT_BOOL * pbEOF);
	HRESULT(STDMETHODCALLTYPE * MoveFirst) (IFaxIncomingMessageIterator * This);
	HRESULT(STDMETHODCALLTYPE * MoveNext) (IFaxIncomingMessageIterator * This);
	END_INTERFACE
}  IFaxIncomingMessageIteratorVtbl;
interface IFaxIncomingMessageIterator
{
	CONST_VTBL struct IFaxIncomingMessageIteratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxIncomingMessageIterator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxIncomingMessageIterator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxIncomingMessageIterator_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxIncomingMessageIterator_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxIncomingMessageIterator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxIncomingMessageIterator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxIncomingMessageIterator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxIncomingMessageIterator_get_Message(This,pFaxIncomingMessage)( (This)->lpVtbl -> get_Message(This,pFaxIncomingMessage) )
#define IFaxIncomingMessageIterator_get_PrefetchSize(This,plPrefetchSize)( (This)->lpVtbl -> get_PrefetchSize(This,plPrefetchSize) )
#define IFaxIncomingMessageIterator_put_PrefetchSize(This,lPrefetchSize)( (This)->lpVtbl -> put_PrefetchSize(This,lPrefetchSize) )
#define IFaxIncomingMessageIterator_get_AtEOF(This,pbEOF)( (This)->lpVtbl -> get_AtEOF(This,pbEOF) )
#define IFaxIncomingMessageIterator_MoveFirst(This)( (This)->lpVtbl -> MoveFirst(This) )
#define IFaxIncomingMessageIterator_MoveNext(This)( (This)->lpVtbl -> MoveNext(This) )
#endif
#endif
#ifndef __IFaxIncomingMessage_INTERFACE_DEFINED__
#define __IFaxIncomingMessage_INTERFACE_DEFINED__
extern const IID IID_IFaxIncomingMessage;
typedef struct IFaxIncomingMessageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxIncomingMessage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxIncomingMessage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxIncomingMessage * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxIncomingMessage * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxIncomingMessage * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxIncomingMessage * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxIncomingMessage * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFaxIncomingMessage * This, BSTR * pbstrId);
	HRESULT(STDMETHODCALLTYPE * get_Pages) (IFaxIncomingMessage * This, long *plPages);
	HRESULT(STDMETHODCALLTYPE * get_Size) (IFaxIncomingMessage * This, long *plSize);
	HRESULT(STDMETHODCALLTYPE * get_DeviceName) (IFaxIncomingMessage * This, BSTR * pbstrDeviceName);
	HRESULT(STDMETHODCALLTYPE * get_Retries) (IFaxIncomingMessage * This, long *plRetries);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionStart) (IFaxIncomingMessage * This, DATE * pdateTransmissionStart);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionEnd) (IFaxIncomingMessage * This, DATE * pdateTransmissionEnd);
	HRESULT(STDMETHODCALLTYPE * get_CSID) (IFaxIncomingMessage * This, BSTR * pbstrCSID);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IFaxIncomingMessage * This, BSTR * pbstrTSID);
	HRESULT(STDMETHODCALLTYPE * get_CallerId) (IFaxIncomingMessage * This, BSTR * pbstrCallerId);
	HRESULT(STDMETHODCALLTYPE * get_RoutingInformation) (IFaxIncomingMessage * This, BSTR * pbstrRoutingInformation);
	HRESULT(STDMETHODCALLTYPE * CopyTiff) (IFaxIncomingMessage * This, BSTR bstrTiffPath);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFaxIncomingMessage * This);
	END_INTERFACE
}  IFaxIncomingMessageVtbl;
interface IFaxIncomingMessage
{
	CONST_VTBL struct IFaxIncomingMessageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxIncomingMessage_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxIncomingMessage_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxIncomingMessage_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxIncomingMessage_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxIncomingMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxIncomingMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxIncomingMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxIncomingMessage_get_Id(This,pbstrId)( (This)->lpVtbl -> get_Id(This,pbstrId) )
#define IFaxIncomingMessage_get_Pages(This,plPages)( (This)->lpVtbl -> get_Pages(This,plPages) )
#define IFaxIncomingMessage_get_Size(This,plSize)( (This)->lpVtbl -> get_Size(This,plSize) )
#define IFaxIncomingMessage_get_DeviceName(This,pbstrDeviceName)( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
#define IFaxIncomingMessage_get_Retries(This,plRetries)( (This)->lpVtbl -> get_Retries(This,plRetries) )
#define IFaxIncomingMessage_get_TransmissionStart(This,pdateTransmissionStart)( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
#define IFaxIncomingMessage_get_TransmissionEnd(This,pdateTransmissionEnd)( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
#define IFaxIncomingMessage_get_CSID(This,pbstrCSID)( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
#define IFaxIncomingMessage_get_TSID(This,pbstrTSID)( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
#define IFaxIncomingMessage_get_CallerId(This,pbstrCallerId)( (This)->lpVtbl -> get_CallerId(This,pbstrCallerId) )
#define IFaxIncomingMessage_get_RoutingInformation(This,pbstrRoutingInformation)( (This)->lpVtbl -> get_RoutingInformation(This,pbstrRoutingInformation) )
#define IFaxIncomingMessage_CopyTiff(This,bstrTiffPath)( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
#define IFaxIncomingMessage_Delete(This)( (This)->lpVtbl -> Delete(This) )
#endif
#endif
#ifndef __IFaxOutgoingJobs_INTERFACE_DEFINED__
#define __IFaxOutgoingJobs_INTERFACE_DEFINED__
extern const IID IID_IFaxOutgoingJobs;
typedef struct IFaxOutgoingJobsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxOutgoingJobs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxOutgoingJobs * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxOutgoingJobs * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxOutgoingJobs * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxOutgoingJobs * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxOutgoingJobs * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxOutgoingJobs * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFaxOutgoingJobs * This, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxOutgoingJobs * This, VARIANT vIndex, IFaxOutgoingJob ** pFaxOutgoingJob);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxOutgoingJobs * This, long *plCount);
	END_INTERFACE
}  IFaxOutgoingJobsVtbl;
interface IFaxOutgoingJobs
{
	CONST_VTBL struct IFaxOutgoingJobsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxOutgoingJobs_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxOutgoingJobs_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxOutgoingJobs_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxOutgoingJobs_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxOutgoingJobs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxOutgoingJobs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxOutgoingJobs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxOutgoingJobs_get__NewEnum(This,ppUnk)( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
#define IFaxOutgoingJobs_get_Item(This,vIndex,pFaxOutgoingJob)( (This)->lpVtbl -> get_Item(This,vIndex,pFaxOutgoingJob) )
#define IFaxOutgoingJobs_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#endif
#endif
#ifndef __IFaxOutgoingJob_INTERFACE_DEFINED__
#define __IFaxOutgoingJob_INTERFACE_DEFINED__
extern const IID IID_IFaxOutgoingJob;
typedef struct IFaxOutgoingJobVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxOutgoingJob * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxOutgoingJob * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxOutgoingJob * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxOutgoingJob * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxOutgoingJob * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxOutgoingJob * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxOutgoingJob * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Subject) (IFaxOutgoingJob * This, BSTR * pbstrSubject);
	HRESULT(STDMETHODCALLTYPE * get_DocumentName) (IFaxOutgoingJob * This, BSTR * pbstrDocumentName);
	HRESULT(STDMETHODCALLTYPE * get_Pages) (IFaxOutgoingJob * This, long *plPages);
	HRESULT(STDMETHODCALLTYPE * get_Size) (IFaxOutgoingJob * This, long *plSize);
	HRESULT(STDMETHODCALLTYPE * get_SubmissionId) (IFaxOutgoingJob * This, BSTR * pbstrSubmissionId);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFaxOutgoingJob * This, BSTR * pbstrId);
	HRESULT(STDMETHODCALLTYPE * get_OriginalScheduledTime) (IFaxOutgoingJob * This, DATE * pdateOriginalScheduledTime);
	HRESULT(STDMETHODCALLTYPE * get_SubmissionTime) (IFaxOutgoingJob * This, DATE * pdateSubmissionTime);
	HRESULT(STDMETHODCALLTYPE * get_ReceiptType) (IFaxOutgoingJob * This, FAX_RECEIPT_TYPE_ENUM * pReceiptType);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IFaxOutgoingJob * This, FAX_PRIORITY_TYPE_ENUM * pPriority);
	HRESULT(STDMETHODCALLTYPE * get_Sender) (IFaxOutgoingJob * This, IFaxSender ** ppFaxSender);
	HRESULT(STDMETHODCALLTYPE * get_Recipient) (IFaxOutgoingJob * This, IFaxRecipient ** ppFaxRecipient);
	HRESULT(STDMETHODCALLTYPE * get_CurrentPage) (IFaxOutgoingJob * This, long *plCurrentPage);
	HRESULT(STDMETHODCALLTYPE * get_DeviceId) (IFaxOutgoingJob * This, long *plDeviceId);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IFaxOutgoingJob * This, FAX_JOB_STATUS_ENUM * pStatus);
	HRESULT(STDMETHODCALLTYPE * get_ExtendedStatusCode) (IFaxOutgoingJob * This, FAX_JOB_EXTENDED_STATUS_ENUM * pExtendedStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_ExtendedStatus) (IFaxOutgoingJob * This, BSTR * pbstrExtendedStatus);
	HRESULT(STDMETHODCALLTYPE * get_AvailableOperations) (IFaxOutgoingJob * This, FAX_JOB_OPERATIONS_ENUM * pAvailableOperations);
	HRESULT(STDMETHODCALLTYPE * get_Retries) (IFaxOutgoingJob * This, long *plRetries);
	HRESULT(STDMETHODCALLTYPE * get_ScheduledTime) (IFaxOutgoingJob * This, DATE * pdateScheduledTime);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionStart) (IFaxOutgoingJob * This, DATE * pdateTransmissionStart);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionEnd) (IFaxOutgoingJob * This, DATE * pdateTransmissionEnd);
	HRESULT(STDMETHODCALLTYPE * get_CSID) (IFaxOutgoingJob * This, BSTR * pbstrCSID);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IFaxOutgoingJob * This, BSTR * pbstrTSID);
	HRESULT(STDMETHODCALLTYPE * get_GroupBroadcastReceipts) (IFaxOutgoingJob * This, VARIANT_BOOL * pbGroupBroadcastReceipts);
	HRESULT(STDMETHODCALLTYPE * Pause) (IFaxOutgoingJob * This);
	HRESULT(STDMETHODCALLTYPE * Resume) (IFaxOutgoingJob * This);
	HRESULT(STDMETHODCALLTYPE * Restart) (IFaxOutgoingJob * This);
	HRESULT(STDMETHODCALLTYPE * CopyTiff) (IFaxOutgoingJob * This, BSTR bstrTiffPath);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxOutgoingJob * This);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IFaxOutgoingJob * This);
	END_INTERFACE
}  IFaxOutgoingJobVtbl;
interface IFaxOutgoingJob
{
	CONST_VTBL struct IFaxOutgoingJobVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxOutgoingJob_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxOutgoingJob_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxOutgoingJob_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxOutgoingJob_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxOutgoingJob_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxOutgoingJob_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxOutgoingJob_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxOutgoingJob_get_Subject(This,pbstrSubject)( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
#define IFaxOutgoingJob_get_DocumentName(This,pbstrDocumentName)( (This)->lpVtbl -> get_DocumentName(This,pbstrDocumentName) )
#define IFaxOutgoingJob_get_Pages(This,plPages)( (This)->lpVtbl -> get_Pages(This,plPages) )
#define IFaxOutgoingJob_get_Size(This,plSize)( (This)->lpVtbl -> get_Size(This,plSize) )
#define IFaxOutgoingJob_get_SubmissionId(This,pbstrSubmissionId)( (This)->lpVtbl -> get_SubmissionId(This,pbstrSubmissionId) )
#define IFaxOutgoingJob_get_Id(This,pbstrId)( (This)->lpVtbl -> get_Id(This,pbstrId) )
#define IFaxOutgoingJob_get_OriginalScheduledTime(This,pdateOriginalScheduledTime)( (This)->lpVtbl -> get_OriginalScheduledTime(This,pdateOriginalScheduledTime) )
#define IFaxOutgoingJob_get_SubmissionTime(This,pdateSubmissionTime)( (This)->lpVtbl -> get_SubmissionTime(This,pdateSubmissionTime) )
#define IFaxOutgoingJob_get_ReceiptType(This,pReceiptType)( (This)->lpVtbl -> get_ReceiptType(This,pReceiptType) )
#define IFaxOutgoingJob_get_Priority(This,pPriority)( (This)->lpVtbl -> get_Priority(This,pPriority) )
#define IFaxOutgoingJob_get_Sender(This,ppFaxSender)( (This)->lpVtbl -> get_Sender(This,ppFaxSender) )
#define IFaxOutgoingJob_get_Recipient(This,ppFaxRecipient)( (This)->lpVtbl -> get_Recipient(This,ppFaxRecipient) )
#define IFaxOutgoingJob_get_CurrentPage(This,plCurrentPage)( (This)->lpVtbl -> get_CurrentPage(This,plCurrentPage) )
#define IFaxOutgoingJob_get_DeviceId(This,plDeviceId)( (This)->lpVtbl -> get_DeviceId(This,plDeviceId) )
#define IFaxOutgoingJob_get_Status(This,pStatus)( (This)->lpVtbl -> get_Status(This,pStatus) )
#define IFaxOutgoingJob_get_ExtendedStatusCode(This,pExtendedStatusCode)( (This)->lpVtbl -> get_ExtendedStatusCode(This,pExtendedStatusCode) )
#define IFaxOutgoingJob_get_ExtendedStatus(This,pbstrExtendedStatus)( (This)->lpVtbl -> get_ExtendedStatus(This,pbstrExtendedStatus) )
#define IFaxOutgoingJob_get_AvailableOperations(This,pAvailableOperations)( (This)->lpVtbl -> get_AvailableOperations(This,pAvailableOperations) )
#define IFaxOutgoingJob_get_Retries(This,plRetries)( (This)->lpVtbl -> get_Retries(This,plRetries) )
#define IFaxOutgoingJob_get_ScheduledTime(This,pdateScheduledTime)( (This)->lpVtbl -> get_ScheduledTime(This,pdateScheduledTime) )
#define IFaxOutgoingJob_get_TransmissionStart(This,pdateTransmissionStart)( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
#define IFaxOutgoingJob_get_TransmissionEnd(This,pdateTransmissionEnd)( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
#define IFaxOutgoingJob_get_CSID(This,pbstrCSID)( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
#define IFaxOutgoingJob_get_TSID(This,pbstrTSID)( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
#define IFaxOutgoingJob_get_GroupBroadcastReceipts(This,pbGroupBroadcastReceipts)( (This)->lpVtbl -> get_GroupBroadcastReceipts(This,pbGroupBroadcastReceipts) )
#define IFaxOutgoingJob_Pause(This)( (This)->lpVtbl -> Pause(This) )
#define IFaxOutgoingJob_Resume(This)( (This)->lpVtbl -> Resume(This) )
#define IFaxOutgoingJob_Restart(This)( (This)->lpVtbl -> Restart(This) )
#define IFaxOutgoingJob_CopyTiff(This,bstrTiffPath)( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
#define IFaxOutgoingJob_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxOutgoingJob_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#endif
#endif
#ifndef __IFaxOutgoingMessageIterator_INTERFACE_DEFINED__
#define __IFaxOutgoingMessageIterator_INTERFACE_DEFINED__
extern const IID IID_IFaxOutgoingMessageIterator;
typedef struct IFaxOutgoingMessageIteratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxOutgoingMessageIterator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxOutgoingMessageIterator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxOutgoingMessageIterator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxOutgoingMessageIterator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxOutgoingMessageIterator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxOutgoingMessageIterator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxOutgoingMessageIterator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Message) (IFaxOutgoingMessageIterator * This, IFaxOutgoingMessage ** pFaxOutgoingMessage);
	HRESULT(STDMETHODCALLTYPE * get_AtEOF) (IFaxOutgoingMessageIterator * This, VARIANT_BOOL * pbEOF);
	HRESULT(STDMETHODCALLTYPE * get_PrefetchSize) (IFaxOutgoingMessageIterator * This, long *plPrefetchSize);
	HRESULT(STDMETHODCALLTYPE * put_PrefetchSize) (IFaxOutgoingMessageIterator * This, long lPrefetchSize);
	HRESULT(STDMETHODCALLTYPE * MoveFirst) (IFaxOutgoingMessageIterator * This);
	HRESULT(STDMETHODCALLTYPE * MoveNext) (IFaxOutgoingMessageIterator * This);
	END_INTERFACE
}  IFaxOutgoingMessageIteratorVtbl;
interface IFaxOutgoingMessageIterator
{
	CONST_VTBL struct IFaxOutgoingMessageIteratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxOutgoingMessageIterator_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxOutgoingMessageIterator_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxOutgoingMessageIterator_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxOutgoingMessageIterator_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxOutgoingMessageIterator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxOutgoingMessageIterator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxOutgoingMessageIterator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxOutgoingMessageIterator_get_Message(This,pFaxOutgoingMessage)( (This)->lpVtbl -> get_Message(This,pFaxOutgoingMessage) )
#define IFaxOutgoingMessageIterator_get_AtEOF(This,pbEOF)( (This)->lpVtbl -> get_AtEOF(This,pbEOF) )
#define IFaxOutgoingMessageIterator_get_PrefetchSize(This,plPrefetchSize)( (This)->lpVtbl -> get_PrefetchSize(This,plPrefetchSize) )
#define IFaxOutgoingMessageIterator_put_PrefetchSize(This,lPrefetchSize)( (This)->lpVtbl -> put_PrefetchSize(This,lPrefetchSize) )
#define IFaxOutgoingMessageIterator_MoveFirst(This)( (This)->lpVtbl -> MoveFirst(This) )
#define IFaxOutgoingMessageIterator_MoveNext(This)( (This)->lpVtbl -> MoveNext(This) )
#endif
#endif
#ifndef __IFaxOutgoingMessage_INTERFACE_DEFINED__
#define __IFaxOutgoingMessage_INTERFACE_DEFINED__
extern const IID IID_IFaxOutgoingMessage;
typedef struct IFaxOutgoingMessageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxOutgoingMessage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxOutgoingMessage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxOutgoingMessage * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxOutgoingMessage * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxOutgoingMessage * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxOutgoingMessage * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxOutgoingMessage * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_SubmissionId) (IFaxOutgoingMessage * This, BSTR * pbstrSubmissionId);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFaxOutgoingMessage * This, BSTR * pbstrId);
	HRESULT(STDMETHODCALLTYPE * get_Subject) (IFaxOutgoingMessage * This, BSTR * pbstrSubject);
	HRESULT(STDMETHODCALLTYPE * get_DocumentName) (IFaxOutgoingMessage * This, BSTR * pbstrDocumentName);
	HRESULT(STDMETHODCALLTYPE * get_Retries) (IFaxOutgoingMessage * This, long *plRetries);
	HRESULT(STDMETHODCALLTYPE * get_Pages) (IFaxOutgoingMessage * This, long *plPages);
	HRESULT(STDMETHODCALLTYPE * get_Size) (IFaxOutgoingMessage * This, long *plSize);
	HRESULT(STDMETHODCALLTYPE * get_OriginalScheduledTime) (IFaxOutgoingMessage * This, DATE * pdateOriginalScheduledTime);
	HRESULT(STDMETHODCALLTYPE * get_SubmissionTime) (IFaxOutgoingMessage * This, DATE * pdateSubmissionTime);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IFaxOutgoingMessage * This, FAX_PRIORITY_TYPE_ENUM * pPriority);
	HRESULT(STDMETHODCALLTYPE * get_Sender) (IFaxOutgoingMessage * This, IFaxSender ** ppFaxSender);
	HRESULT(STDMETHODCALLTYPE * get_Recipient) (IFaxOutgoingMessage * This, IFaxRecipient ** ppFaxRecipient);
	HRESULT(STDMETHODCALLTYPE * get_DeviceName) (IFaxOutgoingMessage * This, BSTR * pbstrDeviceName);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionStart) (IFaxOutgoingMessage * This, DATE * pdateTransmissionStart);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionEnd) (IFaxOutgoingMessage * This, DATE * pdateTransmissionEnd);
	HRESULT(STDMETHODCALLTYPE * get_CSID) (IFaxOutgoingMessage * This, BSTR * pbstrCSID);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IFaxOutgoingMessage * This, BSTR * pbstrTSID);
	HRESULT(STDMETHODCALLTYPE * CopyTiff) (IFaxOutgoingMessage * This, BSTR bstrTiffPath);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFaxOutgoingMessage * This);
	END_INTERFACE
}  IFaxOutgoingMessageVtbl;
interface IFaxOutgoingMessage
{
	CONST_VTBL struct IFaxOutgoingMessageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxOutgoingMessage_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxOutgoingMessage_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxOutgoingMessage_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxOutgoingMessage_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxOutgoingMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxOutgoingMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxOutgoingMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxOutgoingMessage_get_SubmissionId(This,pbstrSubmissionId)( (This)->lpVtbl -> get_SubmissionId(This,pbstrSubmissionId) )
#define IFaxOutgoingMessage_get_Id(This,pbstrId)( (This)->lpVtbl -> get_Id(This,pbstrId) )
#define IFaxOutgoingMessage_get_Subject(This,pbstrSubject)( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
#define IFaxOutgoingMessage_get_DocumentName(This,pbstrDocumentName)( (This)->lpVtbl -> get_DocumentName(This,pbstrDocumentName) )
#define IFaxOutgoingMessage_get_Retries(This,plRetries)( (This)->lpVtbl -> get_Retries(This,plRetries) )
#define IFaxOutgoingMessage_get_Pages(This,plPages)( (This)->lpVtbl -> get_Pages(This,plPages) )
#define IFaxOutgoingMessage_get_Size(This,plSize)( (This)->lpVtbl -> get_Size(This,plSize) )
#define IFaxOutgoingMessage_get_OriginalScheduledTime(This,pdateOriginalScheduledTime)( (This)->lpVtbl -> get_OriginalScheduledTime(This,pdateOriginalScheduledTime) )
#define IFaxOutgoingMessage_get_SubmissionTime(This,pdateSubmissionTime)( (This)->lpVtbl -> get_SubmissionTime(This,pdateSubmissionTime) )
#define IFaxOutgoingMessage_get_Priority(This,pPriority)( (This)->lpVtbl -> get_Priority(This,pPriority) )
#define IFaxOutgoingMessage_get_Sender(This,ppFaxSender)( (This)->lpVtbl -> get_Sender(This,ppFaxSender) )
#define IFaxOutgoingMessage_get_Recipient(This,ppFaxRecipient)( (This)->lpVtbl -> get_Recipient(This,ppFaxRecipient) )
#define IFaxOutgoingMessage_get_DeviceName(This,pbstrDeviceName)( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
#define IFaxOutgoingMessage_get_TransmissionStart(This,pdateTransmissionStart)( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
#define IFaxOutgoingMessage_get_TransmissionEnd(This,pdateTransmissionEnd)( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
#define IFaxOutgoingMessage_get_CSID(This,pbstrCSID)( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
#define IFaxOutgoingMessage_get_TSID(This,pbstrTSID)( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
#define IFaxOutgoingMessage_CopyTiff(This,bstrTiffPath)( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
#define IFaxOutgoingMessage_Delete(This)( (This)->lpVtbl -> Delete(This) )
#endif
#endif
#ifndef __IFaxIncomingJobs_INTERFACE_DEFINED__
#define __IFaxIncomingJobs_INTERFACE_DEFINED__
extern const IID IID_IFaxIncomingJobs;
typedef struct IFaxIncomingJobsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxIncomingJobs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxIncomingJobs * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxIncomingJobs * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxIncomingJobs * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxIncomingJobs * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxIncomingJobs * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxIncomingJobs * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFaxIncomingJobs * This, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxIncomingJobs * This, VARIANT vIndex, IFaxIncomingJob ** pFaxIncomingJob);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxIncomingJobs * This, long *plCount);
	END_INTERFACE
}  IFaxIncomingJobsVtbl;
interface IFaxIncomingJobs
{
	CONST_VTBL struct IFaxIncomingJobsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxIncomingJobs_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxIncomingJobs_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxIncomingJobs_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxIncomingJobs_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxIncomingJobs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxIncomingJobs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxIncomingJobs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxIncomingJobs_get__NewEnum(This,ppUnk)( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
#define IFaxIncomingJobs_get_Item(This,vIndex,pFaxIncomingJob)( (This)->lpVtbl -> get_Item(This,vIndex,pFaxIncomingJob) )
#define IFaxIncomingJobs_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#endif
#endif
#ifndef __IFaxIncomingJob_INTERFACE_DEFINED__
#define __IFaxIncomingJob_INTERFACE_DEFINED__
extern const IID IID_IFaxIncomingJob;
typedef struct IFaxIncomingJobVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxIncomingJob * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxIncomingJob * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxIncomingJob * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxIncomingJob * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxIncomingJob * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxIncomingJob * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxIncomingJob * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Size) (IFaxIncomingJob * This, long *plSize);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFaxIncomingJob * This, BSTR * pbstrId);
	HRESULT(STDMETHODCALLTYPE * get_CurrentPage) (IFaxIncomingJob * This, long *plCurrentPage);
	HRESULT(STDMETHODCALLTYPE * get_DeviceId) (IFaxIncomingJob * This, long *plDeviceId);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IFaxIncomingJob * This, FAX_JOB_STATUS_ENUM * pStatus);
	HRESULT(STDMETHODCALLTYPE * get_ExtendedStatusCode) (IFaxIncomingJob * This, FAX_JOB_EXTENDED_STATUS_ENUM * pExtendedStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_ExtendedStatus) (IFaxIncomingJob * This, BSTR * pbstrExtendedStatus);
	HRESULT(STDMETHODCALLTYPE * get_AvailableOperations) (IFaxIncomingJob * This, FAX_JOB_OPERATIONS_ENUM * pAvailableOperations);
	HRESULT(STDMETHODCALLTYPE * get_Retries) (IFaxIncomingJob * This, long *plRetries);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionStart) (IFaxIncomingJob * This, DATE * pdateTransmissionStart);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionEnd) (IFaxIncomingJob * This, DATE * pdateTransmissionEnd);
	HRESULT(STDMETHODCALLTYPE * get_CSID) (IFaxIncomingJob * This, BSTR * pbstrCSID);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IFaxIncomingJob * This, BSTR * pbstrTSID);
	HRESULT(STDMETHODCALLTYPE * get_CallerId) (IFaxIncomingJob * This, BSTR * pbstrCallerId);
	HRESULT(STDMETHODCALLTYPE * get_RoutingInformation) (IFaxIncomingJob * This, BSTR * pbstrRoutingInformation);
	HRESULT(STDMETHODCALLTYPE * get_JobType) (IFaxIncomingJob * This, FAX_JOB_TYPE_ENUM * pJobType);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IFaxIncomingJob * This);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxIncomingJob * This);
	HRESULT(STDMETHODCALLTYPE * CopyTiff) (IFaxIncomingJob * This, BSTR bstrTiffPath);
	END_INTERFACE
}  IFaxIncomingJobVtbl;
interface IFaxIncomingJob
{
	CONST_VTBL struct IFaxIncomingJobVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxIncomingJob_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxIncomingJob_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxIncomingJob_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxIncomingJob_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxIncomingJob_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxIncomingJob_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxIncomingJob_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxIncomingJob_get_Size(This,plSize)( (This)->lpVtbl -> get_Size(This,plSize) )
#define IFaxIncomingJob_get_Id(This,pbstrId)( (This)->lpVtbl -> get_Id(This,pbstrId) )
#define IFaxIncomingJob_get_CurrentPage(This,plCurrentPage)( (This)->lpVtbl -> get_CurrentPage(This,plCurrentPage) )
#define IFaxIncomingJob_get_DeviceId(This,plDeviceId)( (This)->lpVtbl -> get_DeviceId(This,plDeviceId) )
#define IFaxIncomingJob_get_Status(This,pStatus)( (This)->lpVtbl -> get_Status(This,pStatus) )
#define IFaxIncomingJob_get_ExtendedStatusCode(This,pExtendedStatusCode)( (This)->lpVtbl -> get_ExtendedStatusCode(This,pExtendedStatusCode) )
#define IFaxIncomingJob_get_ExtendedStatus(This,pbstrExtendedStatus)( (This)->lpVtbl -> get_ExtendedStatus(This,pbstrExtendedStatus) )
#define IFaxIncomingJob_get_AvailableOperations(This,pAvailableOperations)( (This)->lpVtbl -> get_AvailableOperations(This,pAvailableOperations) )
#define IFaxIncomingJob_get_Retries(This,plRetries)( (This)->lpVtbl -> get_Retries(This,plRetries) )
#define IFaxIncomingJob_get_TransmissionStart(This,pdateTransmissionStart)( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
#define IFaxIncomingJob_get_TransmissionEnd(This,pdateTransmissionEnd)( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
#define IFaxIncomingJob_get_CSID(This,pbstrCSID)( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
#define IFaxIncomingJob_get_TSID(This,pbstrTSID)( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
#define IFaxIncomingJob_get_CallerId(This,pbstrCallerId)( (This)->lpVtbl -> get_CallerId(This,pbstrCallerId) )
#define IFaxIncomingJob_get_RoutingInformation(This,pbstrRoutingInformation)( (This)->lpVtbl -> get_RoutingInformation(This,pbstrRoutingInformation) )
#define IFaxIncomingJob_get_JobType(This,pJobType)( (This)->lpVtbl -> get_JobType(This,pJobType) )
#define IFaxIncomingJob_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define IFaxIncomingJob_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxIncomingJob_CopyTiff(This,bstrTiffPath)( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
#endif
#endif
#ifndef __IFaxDeviceProvider_INTERFACE_DEFINED__
#define __IFaxDeviceProvider_INTERFACE_DEFINED__
typedef enum FAX_PROVIDER_STATUS_ENUM
{
	fpsSUCCESS = 0,
	fpsSERVER_ERROR = (fpsSUCCESS + 1),
	fpsBAD_GUID = (fpsSERVER_ERROR + 1),
	fpsBAD_VERSION = (fpsBAD_GUID + 1),
	fpsCANT_LOAD = (fpsBAD_VERSION + 1),
	fpsCANT_LINK = (fpsCANT_LOAD + 1),
	fpsCANT_INIT = (fpsCANT_LINK + 1)
} FAX_PROVIDER_STATUS_ENUM;
extern const IID IID_IFaxDeviceProvider;
typedef struct IFaxDeviceProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxDeviceProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxDeviceProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxDeviceProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxDeviceProvider * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxDeviceProvider * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxDeviceProvider * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxDeviceProvider * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IFaxDeviceProvider * This, BSTR * pbstrFriendlyName);
	HRESULT(STDMETHODCALLTYPE * get_ImageName) (IFaxDeviceProvider * This, BSTR * pbstrImageName);
	HRESULT(STDMETHODCALLTYPE * get_UniqueName) (IFaxDeviceProvider * This, BSTR * pbstrUniqueName);
	HRESULT(STDMETHODCALLTYPE * get_TapiProviderName) (IFaxDeviceProvider * This, BSTR * pbstrTapiProviderName);
	HRESULT(STDMETHODCALLTYPE * get_MajorVersion) (IFaxDeviceProvider * This, long *plMajorVersion);
	HRESULT(STDMETHODCALLTYPE * get_MinorVersion) (IFaxDeviceProvider * This, long *plMinorVersion);
	HRESULT(STDMETHODCALLTYPE * get_MajorBuild) (IFaxDeviceProvider * This, long *plMajorBuild);
	HRESULT(STDMETHODCALLTYPE * get_MinorBuild) (IFaxDeviceProvider * This, long *plMinorBuild);
	HRESULT(STDMETHODCALLTYPE * get_Debug) (IFaxDeviceProvider * This, VARIANT_BOOL * pbDebug);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IFaxDeviceProvider * This, FAX_PROVIDER_STATUS_ENUM * pStatus);
	HRESULT(STDMETHODCALLTYPE * get_InitErrorCode) (IFaxDeviceProvider * This, long *plInitErrorCode);
	HRESULT(STDMETHODCALLTYPE * get_DeviceIds) (IFaxDeviceProvider * This, VARIANT * pvDeviceIds);
	END_INTERFACE
}  IFaxDeviceProviderVtbl;
interface IFaxDeviceProvider
{
	CONST_VTBL struct IFaxDeviceProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxDeviceProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxDeviceProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxDeviceProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxDeviceProvider_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxDeviceProvider_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxDeviceProvider_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxDeviceProvider_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxDeviceProvider_get_FriendlyName(This,pbstrFriendlyName)( (This)->lpVtbl -> get_FriendlyName(This,pbstrFriendlyName) )
#define IFaxDeviceProvider_get_ImageName(This,pbstrImageName)( (This)->lpVtbl -> get_ImageName(This,pbstrImageName) )
#define IFaxDeviceProvider_get_UniqueName(This,pbstrUniqueName)( (This)->lpVtbl -> get_UniqueName(This,pbstrUniqueName) )
#define IFaxDeviceProvider_get_TapiProviderName(This,pbstrTapiProviderName)( (This)->lpVtbl -> get_TapiProviderName(This,pbstrTapiProviderName) )
#define IFaxDeviceProvider_get_MajorVersion(This,plMajorVersion)( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) )
#define IFaxDeviceProvider_get_MinorVersion(This,plMinorVersion)( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) )
#define IFaxDeviceProvider_get_MajorBuild(This,plMajorBuild)( (This)->lpVtbl -> get_MajorBuild(This,plMajorBuild) )
#define IFaxDeviceProvider_get_MinorBuild(This,plMinorBuild)( (This)->lpVtbl -> get_MinorBuild(This,plMinorBuild) )
#define IFaxDeviceProvider_get_Debug(This,pbDebug)( (This)->lpVtbl -> get_Debug(This,pbDebug) )
#define IFaxDeviceProvider_get_Status(This,pStatus)( (This)->lpVtbl -> get_Status(This,pStatus) )
#define IFaxDeviceProvider_get_InitErrorCode(This,plInitErrorCode)( (This)->lpVtbl -> get_InitErrorCode(This,plInitErrorCode) )
#define IFaxDeviceProvider_get_DeviceIds(This,pvDeviceIds)( (This)->lpVtbl -> get_DeviceIds(This,pvDeviceIds) )
#endif
#endif
#ifndef __IFaxDevice_INTERFACE_DEFINED__
#define __IFaxDevice_INTERFACE_DEFINED__
typedef enum FAX_DEVICE_RECEIVE_MODE_ENUM
{
	fdrmNO_ANSWER = 0,
	fdrmAUTO_ANSWER = (fdrmNO_ANSWER + 1),
	fdrmMANUAL_ANSWER = (fdrmAUTO_ANSWER + 1)
} FAX_DEVICE_RECEIVE_MODE_ENUM;
extern const IID IID_IFaxDevice;
typedef struct IFaxDeviceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxDevice * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxDevice * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxDevice * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxDevice * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxDevice * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxDevice * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxDevice * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFaxDevice * This, long *plId);
	HRESULT(STDMETHODCALLTYPE * get_DeviceName) (IFaxDevice * This, BSTR * pbstrDeviceName);
	HRESULT(STDMETHODCALLTYPE * get_ProviderUniqueName) (IFaxDevice * This, BSTR * pbstrProviderUniqueName);
	HRESULT(STDMETHODCALLTYPE * get_PoweredOff) (IFaxDevice * This, VARIANT_BOOL * pbPoweredOff);
	HRESULT(STDMETHODCALLTYPE * get_ReceivingNow) (IFaxDevice * This, VARIANT_BOOL * pbReceivingNow);
	HRESULT(STDMETHODCALLTYPE * get_SendingNow) (IFaxDevice * This, VARIANT_BOOL * pbSendingNow);
	HRESULT(STDMETHODCALLTYPE * get_UsedRoutingMethods) (IFaxDevice * This, VARIANT * pvUsedRoutingMethods);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFaxDevice * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFaxDevice * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_SendEnabled) (IFaxDevice * This, VARIANT_BOOL * pbSendEnabled);
	HRESULT(STDMETHODCALLTYPE * put_SendEnabled) (IFaxDevice * This, VARIANT_BOOL bSendEnabled);
	HRESULT(STDMETHODCALLTYPE * get_ReceiveMode) (IFaxDevice * This, FAX_DEVICE_RECEIVE_MODE_ENUM * pReceiveMode);
	HRESULT(STDMETHODCALLTYPE * put_ReceiveMode) (IFaxDevice * This, FAX_DEVICE_RECEIVE_MODE_ENUM ReceiveMode);
	HRESULT(STDMETHODCALLTYPE * get_RingsBeforeAnswer) (IFaxDevice * This, long *plRingsBeforeAnswer);
	HRESULT(STDMETHODCALLTYPE * put_RingsBeforeAnswer) (IFaxDevice * This, long lRingsBeforeAnswer);
	HRESULT(STDMETHODCALLTYPE * get_CSID) (IFaxDevice * This, BSTR * pbstrCSID);
	HRESULT(STDMETHODCALLTYPE * put_CSID) (IFaxDevice * This, BSTR bstrCSID);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IFaxDevice * This, BSTR * pbstrTSID);
	HRESULT(STDMETHODCALLTYPE * put_TSID) (IFaxDevice * This, BSTR bstrTSID);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxDevice * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxDevice * This);
	HRESULT(STDMETHODCALLTYPE * GetExtensionProperty) (IFaxDevice * This, BSTR bstrGUID, VARIANT * pvProperty);
	HRESULT(STDMETHODCALLTYPE * SetExtensionProperty) (IFaxDevice * This, BSTR bstrGUID, VARIANT vProperty);
	HRESULT(STDMETHODCALLTYPE * UseRoutingMethod) (IFaxDevice * This, BSTR bstrMethodGUID, VARIANT_BOOL bUse);
	HRESULT(STDMETHODCALLTYPE * get_RingingNow) (IFaxDevice * This, VARIANT_BOOL * pbRingingNow);
	HRESULT(STDMETHODCALLTYPE * AnswerCall) (IFaxDevice * This);
	END_INTERFACE
}  IFaxDeviceVtbl;
interface IFaxDevice
{
	CONST_VTBL struct IFaxDeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxDevice_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxDevice_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxDevice_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxDevice_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxDevice_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxDevice_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxDevice_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxDevice_get_Id(This,plId)( (This)->lpVtbl -> get_Id(This,plId) )
#define IFaxDevice_get_DeviceName(This,pbstrDeviceName)( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
#define IFaxDevice_get_ProviderUniqueName(This,pbstrProviderUniqueName)( (This)->lpVtbl -> get_ProviderUniqueName(This,pbstrProviderUniqueName) )
#define IFaxDevice_get_PoweredOff(This,pbPoweredOff)( (This)->lpVtbl -> get_PoweredOff(This,pbPoweredOff) )
#define IFaxDevice_get_ReceivingNow(This,pbReceivingNow)( (This)->lpVtbl -> get_ReceivingNow(This,pbReceivingNow) )
#define IFaxDevice_get_SendingNow(This,pbSendingNow)( (This)->lpVtbl -> get_SendingNow(This,pbSendingNow) )
#define IFaxDevice_get_UsedRoutingMethods(This,pvUsedRoutingMethods)( (This)->lpVtbl -> get_UsedRoutingMethods(This,pvUsedRoutingMethods) )
#define IFaxDevice_get_Description(This,pbstrDescription)( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IFaxDevice_put_Description(This,bstrDescription)( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IFaxDevice_get_SendEnabled(This,pbSendEnabled)( (This)->lpVtbl -> get_SendEnabled(This,pbSendEnabled) )
#define IFaxDevice_put_SendEnabled(This,bSendEnabled)( (This)->lpVtbl -> put_SendEnabled(This,bSendEnabled) )
#define IFaxDevice_get_ReceiveMode(This,pReceiveMode)( (This)->lpVtbl -> get_ReceiveMode(This,pReceiveMode) )
#define IFaxDevice_put_ReceiveMode(This,ReceiveMode)( (This)->lpVtbl -> put_ReceiveMode(This,ReceiveMode) )
#define IFaxDevice_get_RingsBeforeAnswer(This,plRingsBeforeAnswer)( (This)->lpVtbl -> get_RingsBeforeAnswer(This,plRingsBeforeAnswer) )
#define IFaxDevice_put_RingsBeforeAnswer(This,lRingsBeforeAnswer)( (This)->lpVtbl -> put_RingsBeforeAnswer(This,lRingsBeforeAnswer) )
#define IFaxDevice_get_CSID(This,pbstrCSID)( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
#define IFaxDevice_put_CSID(This,bstrCSID)( (This)->lpVtbl -> put_CSID(This,bstrCSID) )
#define IFaxDevice_get_TSID(This,pbstrTSID)( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
#define IFaxDevice_put_TSID(This,bstrTSID)( (This)->lpVtbl -> put_TSID(This,bstrTSID) )
#define IFaxDevice_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxDevice_Save(This)( (This)->lpVtbl -> Save(This) )
#define IFaxDevice_GetExtensionProperty(This,bstrGUID,pvProperty)( (This)->lpVtbl -> GetExtensionProperty(This,bstrGUID,pvProperty) )
#define IFaxDevice_SetExtensionProperty(This,bstrGUID,vProperty)( (This)->lpVtbl -> SetExtensionProperty(This,bstrGUID,vProperty) )
#define IFaxDevice_UseRoutingMethod(This,bstrMethodGUID,bUse)( (This)->lpVtbl -> UseRoutingMethod(This,bstrMethodGUID,bUse) )
#define IFaxDevice_get_RingingNow(This,pbRingingNow)( (This)->lpVtbl -> get_RingingNow(This,pbRingingNow) )
#define IFaxDevice_AnswerCall(This)( (This)->lpVtbl -> AnswerCall(This) )
#endif
#endif
#ifndef __IFaxActivityLogging_INTERFACE_DEFINED__
#define __IFaxActivityLogging_INTERFACE_DEFINED__
extern const IID IID_IFaxActivityLogging;
typedef struct IFaxActivityLoggingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxActivityLogging * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxActivityLogging * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxActivityLogging * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxActivityLogging * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxActivityLogging * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxActivityLogging * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxActivityLogging * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_LogIncoming) (IFaxActivityLogging * This, VARIANT_BOOL * pbLogIncoming);
	HRESULT(STDMETHODCALLTYPE * put_LogIncoming) (IFaxActivityLogging * This, VARIANT_BOOL bLogIncoming);
	HRESULT(STDMETHODCALLTYPE * get_LogOutgoing) (IFaxActivityLogging * This, VARIANT_BOOL * pbLogOutgoing);
	HRESULT(STDMETHODCALLTYPE * put_LogOutgoing) (IFaxActivityLogging * This, VARIANT_BOOL bLogOutgoing);
	HRESULT(STDMETHODCALLTYPE * get_DatabasePath) (IFaxActivityLogging * This, BSTR * pbstrDatabasePath);
	HRESULT(STDMETHODCALLTYPE * put_DatabasePath) (IFaxActivityLogging * This, BSTR bstrDatabasePath);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxActivityLogging * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxActivityLogging * This);
	END_INTERFACE
}  IFaxActivityLoggingVtbl;
interface IFaxActivityLogging
{
	CONST_VTBL struct IFaxActivityLoggingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxActivityLogging_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxActivityLogging_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxActivityLogging_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxActivityLogging_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxActivityLogging_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxActivityLogging_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxActivityLogging_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxActivityLogging_get_LogIncoming(This,pbLogIncoming)( (This)->lpVtbl -> get_LogIncoming(This,pbLogIncoming) )
#define IFaxActivityLogging_put_LogIncoming(This,bLogIncoming)( (This)->lpVtbl -> put_LogIncoming(This,bLogIncoming) )
#define IFaxActivityLogging_get_LogOutgoing(This,pbLogOutgoing)( (This)->lpVtbl -> get_LogOutgoing(This,pbLogOutgoing) )
#define IFaxActivityLogging_put_LogOutgoing(This,bLogOutgoing)( (This)->lpVtbl -> put_LogOutgoing(This,bLogOutgoing) )
#define IFaxActivityLogging_get_DatabasePath(This,pbstrDatabasePath)( (This)->lpVtbl -> get_DatabasePath(This,pbstrDatabasePath) )
#define IFaxActivityLogging_put_DatabasePath(This,bstrDatabasePath)( (This)->lpVtbl -> put_DatabasePath(This,bstrDatabasePath) )
#define IFaxActivityLogging_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxActivityLogging_Save(This)( (This)->lpVtbl -> Save(This) )
#endif
#endif
#ifndef __IFaxEventLogging_INTERFACE_DEFINED__
#define __IFaxEventLogging_INTERFACE_DEFINED__
typedef enum FAX_LOG_LEVEL_ENUM
{
	fllNONE = 0,
	fllMIN = (fllNONE + 1),
	fllMED = (fllMIN + 1),
	fllMAX = (fllMED + 1)
} FAX_LOG_LEVEL_ENUM;
extern const IID IID_IFaxEventLogging;
typedef struct IFaxEventLoggingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxEventLogging * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxEventLogging * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxEventLogging * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxEventLogging * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxEventLogging * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxEventLogging * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxEventLogging * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_InitEventsLevel) (IFaxEventLogging * This, FAX_LOG_LEVEL_ENUM * pInitEventLevel);
	HRESULT(STDMETHODCALLTYPE * put_InitEventsLevel) (IFaxEventLogging * This, FAX_LOG_LEVEL_ENUM InitEventLevel);
	HRESULT(STDMETHODCALLTYPE * get_InboundEventsLevel) (IFaxEventLogging * This, FAX_LOG_LEVEL_ENUM * pInboundEventLevel);
	HRESULT(STDMETHODCALLTYPE * put_InboundEventsLevel) (IFaxEventLogging * This, FAX_LOG_LEVEL_ENUM InboundEventLevel);
	HRESULT(STDMETHODCALLTYPE * get_OutboundEventsLevel) (IFaxEventLogging * This, FAX_LOG_LEVEL_ENUM * pOutboundEventLevel);
	HRESULT(STDMETHODCALLTYPE * put_OutboundEventsLevel) (IFaxEventLogging * This, FAX_LOG_LEVEL_ENUM OutboundEventLevel);
	HRESULT(STDMETHODCALLTYPE * get_GeneralEventsLevel) (IFaxEventLogging * This, FAX_LOG_LEVEL_ENUM * pGeneralEventLevel);
	HRESULT(STDMETHODCALLTYPE * put_GeneralEventsLevel) (IFaxEventLogging * This, FAX_LOG_LEVEL_ENUM GeneralEventLevel);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxEventLogging * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxEventLogging * This);
	END_INTERFACE
}  IFaxEventLoggingVtbl;
interface IFaxEventLogging
{
	CONST_VTBL struct IFaxEventLoggingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxEventLogging_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxEventLogging_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxEventLogging_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxEventLogging_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxEventLogging_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxEventLogging_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxEventLogging_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxEventLogging_get_InitEventsLevel(This,pInitEventLevel)( (This)->lpVtbl -> get_InitEventsLevel(This,pInitEventLevel) )
#define IFaxEventLogging_put_InitEventsLevel(This,InitEventLevel)( (This)->lpVtbl -> put_InitEventsLevel(This,InitEventLevel) )
#define IFaxEventLogging_get_InboundEventsLevel(This,pInboundEventLevel)( (This)->lpVtbl -> get_InboundEventsLevel(This,pInboundEventLevel) )
#define IFaxEventLogging_put_InboundEventsLevel(This,InboundEventLevel)( (This)->lpVtbl -> put_InboundEventsLevel(This,InboundEventLevel) )
#define IFaxEventLogging_get_OutboundEventsLevel(This,pOutboundEventLevel)( (This)->lpVtbl -> get_OutboundEventsLevel(This,pOutboundEventLevel) )
#define IFaxEventLogging_put_OutboundEventsLevel(This,OutboundEventLevel)( (This)->lpVtbl -> put_OutboundEventsLevel(This,OutboundEventLevel) )
#define IFaxEventLogging_get_GeneralEventsLevel(This,pGeneralEventLevel)( (This)->lpVtbl -> get_GeneralEventsLevel(This,pGeneralEventLevel) )
#define IFaxEventLogging_put_GeneralEventsLevel(This,GeneralEventLevel)( (This)->lpVtbl -> put_GeneralEventsLevel(This,GeneralEventLevel) )
#define IFaxEventLogging_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxEventLogging_Save(This)( (This)->lpVtbl -> Save(This) )
#endif
#endif
#ifndef __IFaxOutboundRoutingGroups_INTERFACE_DEFINED__
#define __IFaxOutboundRoutingGroups_INTERFACE_DEFINED__
extern const IID IID_IFaxOutboundRoutingGroups;
typedef struct IFaxOutboundRoutingGroupsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxOutboundRoutingGroups * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxOutboundRoutingGroups * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxOutboundRoutingGroups * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxOutboundRoutingGroups * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxOutboundRoutingGroups * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxOutboundRoutingGroups * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxOutboundRoutingGroups * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFaxOutboundRoutingGroups * This, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxOutboundRoutingGroups * This, VARIANT vIndex, IFaxOutboundRoutingGroup ** pFaxOutboundRoutingGroup);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxOutboundRoutingGroups * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * Add) (IFaxOutboundRoutingGroups * This, BSTR bstrName, IFaxOutboundRoutingGroup ** pFaxOutboundRoutingGroup);
	HRESULT(STDMETHODCALLTYPE * Remove) (IFaxOutboundRoutingGroups * This, VARIANT vIndex);
	END_INTERFACE
}  IFaxOutboundRoutingGroupsVtbl;
interface IFaxOutboundRoutingGroups
{
	CONST_VTBL struct IFaxOutboundRoutingGroupsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxOutboundRoutingGroups_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxOutboundRoutingGroups_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxOutboundRoutingGroups_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxOutboundRoutingGroups_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxOutboundRoutingGroups_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxOutboundRoutingGroups_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxOutboundRoutingGroups_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxOutboundRoutingGroups_get__NewEnum(This,ppUnk)( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
#define IFaxOutboundRoutingGroups_get_Item(This,vIndex,pFaxOutboundRoutingGroup)( (This)->lpVtbl -> get_Item(This,vIndex,pFaxOutboundRoutingGroup) )
#define IFaxOutboundRoutingGroups_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#define IFaxOutboundRoutingGroups_Add(This,bstrName,pFaxOutboundRoutingGroup)( (This)->lpVtbl -> Add(This,bstrName,pFaxOutboundRoutingGroup) )
#define IFaxOutboundRoutingGroups_Remove(This,vIndex)( (This)->lpVtbl -> Remove(This,vIndex) )
#endif
#endif
#ifndef __IFaxOutboundRoutingGroup_INTERFACE_DEFINED__
#define __IFaxOutboundRoutingGroup_INTERFACE_DEFINED__
typedef enum FAX_GROUP_STATUS_ENUM
{
	 fgsALL_DEV_VALID = 0,
	fgsEMPTY = (fgsALL_DEV_VALID + 1),
	fgsALL_DEV_NOT_VALID = (fgsEMPTY + 1),
	fgsSOME_DEV_NOT_VALID = (fgsALL_DEV_NOT_VALID + 1)
} FAX_GROUP_STATUS_ENUM;
extern const IID IID_IFaxOutboundRoutingGroup;
typedef struct IFaxOutboundRoutingGroupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxOutboundRoutingGroup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxOutboundRoutingGroup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxOutboundRoutingGroup * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxOutboundRoutingGroup * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxOutboundRoutingGroup * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxOutboundRoutingGroup * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxOutboundRoutingGroup * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFaxOutboundRoutingGroup * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IFaxOutboundRoutingGroup * This, FAX_GROUP_STATUS_ENUM * pStatus);
	HRESULT(STDMETHODCALLTYPE * get_DeviceIds) (IFaxOutboundRoutingGroup * This, IFaxDeviceIds ** pFaxDeviceIds);
	END_INTERFACE
}  IFaxOutboundRoutingGroupVtbl;
interface IFaxOutboundRoutingGroup
{
	CONST_VTBL struct IFaxOutboundRoutingGroupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxOutboundRoutingGroup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxOutboundRoutingGroup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxOutboundRoutingGroup_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxOutboundRoutingGroup_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxOutboundRoutingGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxOutboundRoutingGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxOutboundRoutingGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxOutboundRoutingGroup_get_Name(This,pbstrName)( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IFaxOutboundRoutingGroup_get_Status(This,pStatus)( (This)->lpVtbl -> get_Status(This,pStatus) )
#define IFaxOutboundRoutingGroup_get_DeviceIds(This,pFaxDeviceIds)( (This)->lpVtbl -> get_DeviceIds(This,pFaxDeviceIds) )
#endif
#endif
#ifndef __IFaxDeviceIds_INTERFACE_DEFINED__
#define __IFaxDeviceIds_INTERFACE_DEFINED__
extern const IID IID_IFaxDeviceIds;
typedef struct IFaxDeviceIdsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxDeviceIds * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxDeviceIds * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxDeviceIds * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxDeviceIds * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxDeviceIds * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxDeviceIds * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxDeviceIds * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFaxDeviceIds * This, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxDeviceIds * This, long lIndex, long *plDeviceId);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxDeviceIds * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * Add) (IFaxDeviceIds * This, long lDeviceId);
	HRESULT(STDMETHODCALLTYPE * Remove) (IFaxDeviceIds * This, long lIndex);
	HRESULT(STDMETHODCALLTYPE * SetOrder) (IFaxDeviceIds * This, long lDeviceId, long lNewOrder);
	END_INTERFACE
}  IFaxDeviceIdsVtbl;
interface IFaxDeviceIds
{
	CONST_VTBL struct IFaxDeviceIdsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxDeviceIds_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxDeviceIds_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxDeviceIds_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxDeviceIds_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxDeviceIds_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxDeviceIds_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxDeviceIds_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxDeviceIds_get__NewEnum(This,ppUnk)( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
#define IFaxDeviceIds_get_Item(This,lIndex,plDeviceId)( (This)->lpVtbl -> get_Item(This,lIndex,plDeviceId) )
#define IFaxDeviceIds_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#define IFaxDeviceIds_Add(This,lDeviceId)( (This)->lpVtbl -> Add(This,lDeviceId) )
#define IFaxDeviceIds_Remove(This,lIndex)( (This)->lpVtbl -> Remove(This,lIndex) )
#define IFaxDeviceIds_SetOrder(This,lDeviceId,lNewOrder)( (This)->lpVtbl -> SetOrder(This,lDeviceId,lNewOrder) )
#endif
#endif
#ifndef __IFaxOutboundRoutingRules_INTERFACE_DEFINED__
#define __IFaxOutboundRoutingRules_INTERFACE_DEFINED__
extern const IID IID_IFaxOutboundRoutingRules;
typedef struct IFaxOutboundRoutingRulesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxOutboundRoutingRules * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxOutboundRoutingRules * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxOutboundRoutingRules * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxOutboundRoutingRules * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxOutboundRoutingRules * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxOutboundRoutingRules * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxOutboundRoutingRules * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFaxOutboundRoutingRules * This, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxOutboundRoutingRules * This, long lIndex, IFaxOutboundRoutingRule ** pFaxOutboundRoutingRule);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxOutboundRoutingRules * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * ItemByCountryAndArea) (IFaxOutboundRoutingRules * This, long lCountryCode, long lAreaCode, IFaxOutboundRoutingRule ** pFaxOutboundRoutingRule);
	HRESULT(STDMETHODCALLTYPE * RemoveByCountryAndArea) (IFaxOutboundRoutingRules * This, long lCountryCode, long lAreaCode);
	HRESULT(STDMETHODCALLTYPE * Remove) (IFaxOutboundRoutingRules * This, long lIndex);
	HRESULT(STDMETHODCALLTYPE * Add) (IFaxOutboundRoutingRules * This, long lCountryCode, long lAreaCode, VARIANT_BOOL bUseDevice, BSTR bstrGroupName, long lDeviceId, IFaxOutboundRoutingRule ** pFaxOutboundRoutingRule);
	END_INTERFACE
}  IFaxOutboundRoutingRulesVtbl;
interface IFaxOutboundRoutingRules
{
	CONST_VTBL struct IFaxOutboundRoutingRulesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxOutboundRoutingRules_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxOutboundRoutingRules_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxOutboundRoutingRules_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxOutboundRoutingRules_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxOutboundRoutingRules_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxOutboundRoutingRules_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxOutboundRoutingRules_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxOutboundRoutingRules_get__NewEnum(This,ppUnk)( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
#define IFaxOutboundRoutingRules_get_Item(This,lIndex,pFaxOutboundRoutingRule)( (This)->lpVtbl -> get_Item(This,lIndex,pFaxOutboundRoutingRule) )
#define IFaxOutboundRoutingRules_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#define IFaxOutboundRoutingRules_ItemByCountryAndArea(This,lCountryCode,lAreaCode,pFaxOutboundRoutingRule)( (This)->lpVtbl -> ItemByCountryAndArea(This,lCountryCode,lAreaCode,pFaxOutboundRoutingRule) )
#define IFaxOutboundRoutingRules_RemoveByCountryAndArea(This,lCountryCode,lAreaCode)( (This)->lpVtbl -> RemoveByCountryAndArea(This,lCountryCode,lAreaCode) )
#define IFaxOutboundRoutingRules_Remove(This,lIndex)( (This)->lpVtbl -> Remove(This,lIndex) )
#define IFaxOutboundRoutingRules_Add(This,lCountryCode,lAreaCode,bUseDevice,bstrGroupName,lDeviceId,pFaxOutboundRoutingRule)( (This)->lpVtbl -> Add(This,lCountryCode,lAreaCode,bUseDevice,bstrGroupName,lDeviceId,pFaxOutboundRoutingRule) )
#endif
#endif
#ifndef __IFaxOutboundRoutingRule_INTERFACE_DEFINED__
#define __IFaxOutboundRoutingRule_INTERFACE_DEFINED__
typedef enum FAX_RULE_STATUS_ENUM
{
	frsVALID = 0,
	frsEMPTY_GROUP = (frsVALID + 1),
	frsALL_GROUP_DEV_NOT_VALID = (frsEMPTY_GROUP + 1),
	frsSOME_GROUP_DEV_NOT_VALID = (frsALL_GROUP_DEV_NOT_VALID + 1),
	frsBAD_DEVICE = (frsSOME_GROUP_DEV_NOT_VALID + 1)
} FAX_RULE_STATUS_ENUM;
extern const IID IID_IFaxOutboundRoutingRule;
typedef struct IFaxOutboundRoutingRuleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxOutboundRoutingRule * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxOutboundRoutingRule * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxOutboundRoutingRule * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxOutboundRoutingRule * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxOutboundRoutingRule * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxOutboundRoutingRule * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxOutboundRoutingRule * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_CountryCode) (IFaxOutboundRoutingRule * This, long *plCountryCode);
	HRESULT(STDMETHODCALLTYPE * get_AreaCode) (IFaxOutboundRoutingRule * This, long *plAreaCode);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IFaxOutboundRoutingRule * This, FAX_RULE_STATUS_ENUM * pStatus);
	HRESULT(STDMETHODCALLTYPE * get_UseDevice) (IFaxOutboundRoutingRule * This, VARIANT_BOOL * pbUseDevice);
	HRESULT(STDMETHODCALLTYPE * put_UseDevice) (IFaxOutboundRoutingRule * This, VARIANT_BOOL bUseDevice);
	HRESULT(STDMETHODCALLTYPE * get_DeviceId) (IFaxOutboundRoutingRule * This, long *plDeviceId);
	HRESULT(STDMETHODCALLTYPE * put_DeviceId) (IFaxOutboundRoutingRule * This, long DeviceId);
	HRESULT(STDMETHODCALLTYPE * get_GroupName) (IFaxOutboundRoutingRule * This, BSTR * pbstrGroupName);
	HRESULT(STDMETHODCALLTYPE * put_GroupName) (IFaxOutboundRoutingRule * This, BSTR bstrGroupName);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxOutboundRoutingRule * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxOutboundRoutingRule * This);
	END_INTERFACE
}  IFaxOutboundRoutingRuleVtbl;
interface IFaxOutboundRoutingRule
{
	CONST_VTBL struct IFaxOutboundRoutingRuleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxOutboundRoutingRule_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxOutboundRoutingRule_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxOutboundRoutingRule_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxOutboundRoutingRule_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxOutboundRoutingRule_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxOutboundRoutingRule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxOutboundRoutingRule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxOutboundRoutingRule_get_CountryCode(This,plCountryCode)( (This)->lpVtbl -> get_CountryCode(This,plCountryCode) )
#define IFaxOutboundRoutingRule_get_AreaCode(This,plAreaCode)( (This)->lpVtbl -> get_AreaCode(This,plAreaCode) )
#define IFaxOutboundRoutingRule_get_Status(This,pStatus)( (This)->lpVtbl -> get_Status(This,pStatus) )
#define IFaxOutboundRoutingRule_get_UseDevice(This,pbUseDevice)( (This)->lpVtbl -> get_UseDevice(This,pbUseDevice) )
#define IFaxOutboundRoutingRule_put_UseDevice(This,bUseDevice)( (This)->lpVtbl -> put_UseDevice(This,bUseDevice) )
#define IFaxOutboundRoutingRule_get_DeviceId(This,plDeviceId)( (This)->lpVtbl -> get_DeviceId(This,plDeviceId) )
#define IFaxOutboundRoutingRule_put_DeviceId(This,DeviceId)( (This)->lpVtbl -> put_DeviceId(This,DeviceId) )
#define IFaxOutboundRoutingRule_get_GroupName(This,pbstrGroupName)( (This)->lpVtbl -> get_GroupName(This,pbstrGroupName) )
#define IFaxOutboundRoutingRule_put_GroupName(This,bstrGroupName)( (This)->lpVtbl -> put_GroupName(This,bstrGroupName) )
#define IFaxOutboundRoutingRule_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxOutboundRoutingRule_Save(This)( (This)->lpVtbl -> Save(This) )
#endif
#endif
#ifndef __IFaxInboundRoutingExtensions_INTERFACE_DEFINED__
#define __IFaxInboundRoutingExtensions_INTERFACE_DEFINED__
extern const IID IID_IFaxInboundRoutingExtensions;
typedef struct IFaxInboundRoutingExtensionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxInboundRoutingExtensions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxInboundRoutingExtensions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxInboundRoutingExtensions * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxInboundRoutingExtensions * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxInboundRoutingExtensions * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxInboundRoutingExtensions * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxInboundRoutingExtensions * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFaxInboundRoutingExtensions * This, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxInboundRoutingExtensions * This, VARIANT vIndex, IFaxInboundRoutingExtension ** pFaxInboundRoutingExtension);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxInboundRoutingExtensions * This, long *plCount);
	END_INTERFACE
}  IFaxInboundRoutingExtensionsVtbl;
interface IFaxInboundRoutingExtensions
{
	CONST_VTBL struct IFaxInboundRoutingExtensionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxInboundRoutingExtensions_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxInboundRoutingExtensions_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxInboundRoutingExtensions_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxInboundRoutingExtensions_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxInboundRoutingExtensions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxInboundRoutingExtensions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxInboundRoutingExtensions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxInboundRoutingExtensions_get__NewEnum(This,ppUnk)( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
#define IFaxInboundRoutingExtensions_get_Item(This,vIndex,pFaxInboundRoutingExtension)( (This)->lpVtbl -> get_Item(This,vIndex,pFaxInboundRoutingExtension) )
#define IFaxInboundRoutingExtensions_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#endif
#endif
#ifndef __IFaxInboundRoutingExtension_INTERFACE_DEFINED__
#define __IFaxInboundRoutingExtension_INTERFACE_DEFINED__
extern const IID IID_IFaxInboundRoutingExtension;
typedef struct IFaxInboundRoutingExtensionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxInboundRoutingExtension * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxInboundRoutingExtension * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxInboundRoutingExtension * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxInboundRoutingExtension * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxInboundRoutingExtension * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxInboundRoutingExtension * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxInboundRoutingExtension * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_FriendlyName) (IFaxInboundRoutingExtension * This, BSTR * pbstrFriendlyName);
	HRESULT(STDMETHODCALLTYPE * get_ImageName) (IFaxInboundRoutingExtension * This, BSTR * pbstrImageName);
	HRESULT(STDMETHODCALLTYPE * get_UniqueName) (IFaxInboundRoutingExtension * This, BSTR * pbstrUniqueName);
	HRESULT(STDMETHODCALLTYPE * get_MajorVersion) (IFaxInboundRoutingExtension * This, long *plMajorVersion);
	HRESULT(STDMETHODCALLTYPE * get_MinorVersion) (IFaxInboundRoutingExtension * This, long *plMinorVersion);
	HRESULT(STDMETHODCALLTYPE * get_MajorBuild) (IFaxInboundRoutingExtension * This, long *plMajorBuild);
	HRESULT(STDMETHODCALLTYPE * get_MinorBuild) (IFaxInboundRoutingExtension * This, long *plMinorBuild);
	HRESULT(STDMETHODCALLTYPE * get_Debug) (IFaxInboundRoutingExtension * This, VARIANT_BOOL * pbDebug);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IFaxInboundRoutingExtension * This, FAX_PROVIDER_STATUS_ENUM * pStatus);
	HRESULT(STDMETHODCALLTYPE * get_InitErrorCode) (IFaxInboundRoutingExtension * This, long *plInitErrorCode);
	HRESULT(STDMETHODCALLTYPE * get_Methods) (IFaxInboundRoutingExtension * This, VARIANT * pvMethods);
	END_INTERFACE
}  IFaxInboundRoutingExtensionVtbl;
interface IFaxInboundRoutingExtension
{
	CONST_VTBL struct IFaxInboundRoutingExtensionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxInboundRoutingExtension_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxInboundRoutingExtension_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxInboundRoutingExtension_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxInboundRoutingExtension_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxInboundRoutingExtension_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxInboundRoutingExtension_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxInboundRoutingExtension_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxInboundRoutingExtension_get_FriendlyName(This,pbstrFriendlyName)( (This)->lpVtbl -> get_FriendlyName(This,pbstrFriendlyName) )
#define IFaxInboundRoutingExtension_get_ImageName(This,pbstrImageName)( (This)->lpVtbl -> get_ImageName(This,pbstrImageName) )
#define IFaxInboundRoutingExtension_get_UniqueName(This,pbstrUniqueName)( (This)->lpVtbl -> get_UniqueName(This,pbstrUniqueName) )
#define IFaxInboundRoutingExtension_get_MajorVersion(This,plMajorVersion)( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) )
#define IFaxInboundRoutingExtension_get_MinorVersion(This,plMinorVersion)( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) )
#define IFaxInboundRoutingExtension_get_MajorBuild(This,plMajorBuild)( (This)->lpVtbl -> get_MajorBuild(This,plMajorBuild) )
#define IFaxInboundRoutingExtension_get_MinorBuild(This,plMinorBuild)( (This)->lpVtbl -> get_MinorBuild(This,plMinorBuild) )
#define IFaxInboundRoutingExtension_get_Debug(This,pbDebug)( (This)->lpVtbl -> get_Debug(This,pbDebug) )
#define IFaxInboundRoutingExtension_get_Status(This,pStatus)( (This)->lpVtbl -> get_Status(This,pStatus) )
#define IFaxInboundRoutingExtension_get_InitErrorCode(This,plInitErrorCode)( (This)->lpVtbl -> get_InitErrorCode(This,plInitErrorCode) )
#define IFaxInboundRoutingExtension_get_Methods(This,pvMethods)( (This)->lpVtbl -> get_Methods(This,pvMethods) )
#endif
#endif
#ifndef __IFaxInboundRoutingMethods_INTERFACE_DEFINED__
#define __IFaxInboundRoutingMethods_INTERFACE_DEFINED__
extern const IID IID_IFaxInboundRoutingMethods;
typedef struct IFaxInboundRoutingMethodsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxInboundRoutingMethods * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxInboundRoutingMethods * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxInboundRoutingMethods * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxInboundRoutingMethods * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxInboundRoutingMethods * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxInboundRoutingMethods * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxInboundRoutingMethods * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFaxInboundRoutingMethods * This, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxInboundRoutingMethods * This, VARIANT vIndex, IFaxInboundRoutingMethod ** pFaxInboundRoutingMethod);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxInboundRoutingMethods * This, long *plCount);
	END_INTERFACE
}  IFaxInboundRoutingMethodsVtbl;
interface IFaxInboundRoutingMethods
{
	CONST_VTBL struct IFaxInboundRoutingMethodsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxInboundRoutingMethods_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxInboundRoutingMethods_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxInboundRoutingMethods_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxInboundRoutingMethods_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxInboundRoutingMethods_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxInboundRoutingMethods_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxInboundRoutingMethods_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxInboundRoutingMethods_get__NewEnum(This,ppUnk)( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
#define IFaxInboundRoutingMethods_get_Item(This,vIndex,pFaxInboundRoutingMethod)( (This)->lpVtbl -> get_Item(This,vIndex,pFaxInboundRoutingMethod) )
#define IFaxInboundRoutingMethods_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#endif
#endif
#ifndef __IFaxInboundRoutingMethod_INTERFACE_DEFINED__
#define __IFaxInboundRoutingMethod_INTERFACE_DEFINED__
extern const IID IID_IFaxInboundRoutingMethod;
typedef struct IFaxInboundRoutingMethodVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxInboundRoutingMethod * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxInboundRoutingMethod * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxInboundRoutingMethod * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxInboundRoutingMethod * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxInboundRoutingMethod * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxInboundRoutingMethod * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxInboundRoutingMethod * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFaxInboundRoutingMethod * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * get_GUID) (IFaxInboundRoutingMethod * This, BSTR * pbstrGUID);
	HRESULT(STDMETHODCALLTYPE * get_FunctionName) (IFaxInboundRoutingMethod * This, BSTR * pbstrFunctionName);
	HRESULT(STDMETHODCALLTYPE * get_ExtensionFriendlyName) (IFaxInboundRoutingMethod * This, BSTR * pbstrExtensionFriendlyName);
	HRESULT(STDMETHODCALLTYPE * get_ExtensionImageName) (IFaxInboundRoutingMethod * This, BSTR * pbstrExtensionImageName);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IFaxInboundRoutingMethod * This, long *plPriority);
	HRESULT(STDMETHODCALLTYPE * put_Priority) (IFaxInboundRoutingMethod * This, long lPriority);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxInboundRoutingMethod * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxInboundRoutingMethod * This);
	END_INTERFACE
}  IFaxInboundRoutingMethodVtbl;
interface IFaxInboundRoutingMethod
{
	CONST_VTBL struct IFaxInboundRoutingMethodVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxInboundRoutingMethod_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxInboundRoutingMethod_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxInboundRoutingMethod_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxInboundRoutingMethod_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxInboundRoutingMethod_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxInboundRoutingMethod_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxInboundRoutingMethod_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxInboundRoutingMethod_get_Name(This,pbstrName)( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IFaxInboundRoutingMethod_get_GUID(This,pbstrGUID)( (This)->lpVtbl -> get_GUID(This,pbstrGUID) )
#define IFaxInboundRoutingMethod_get_FunctionName(This,pbstrFunctionName)( (This)->lpVtbl -> get_FunctionName(This,pbstrFunctionName) )
#define IFaxInboundRoutingMethod_get_ExtensionFriendlyName(This,pbstrExtensionFriendlyName)( (This)->lpVtbl -> get_ExtensionFriendlyName(This,pbstrExtensionFriendlyName) )
#define IFaxInboundRoutingMethod_get_ExtensionImageName(This,pbstrExtensionImageName)( (This)->lpVtbl -> get_ExtensionImageName(This,pbstrExtensionImageName) )
#define IFaxInboundRoutingMethod_get_Priority(This,plPriority)( (This)->lpVtbl -> get_Priority(This,plPriority) )
#define IFaxInboundRoutingMethod_put_Priority(This,lPriority)( (This)->lpVtbl -> put_Priority(This,lPriority) )
#define IFaxInboundRoutingMethod_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxInboundRoutingMethod_Save(This)( (This)->lpVtbl -> Save(This) )
#endif
#endif
#ifndef __IFaxDocument2_INTERFACE_DEFINED__
#define __IFaxDocument2_INTERFACE_DEFINED__
extern const IID IID_IFaxDocument2;
typedef struct IFaxDocument2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxDocument2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxDocument2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxDocument2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxDocument2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxDocument2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxDocument2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxDocument2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Body) (IFaxDocument2 * This, BSTR * pbstrBody);
	HRESULT(STDMETHODCALLTYPE * put_Body) (IFaxDocument2 * This, BSTR bstrBody);
	HRESULT(STDMETHODCALLTYPE * get_Sender) (IFaxDocument2 * This, IFaxSender ** ppFaxSender);
	HRESULT(STDMETHODCALLTYPE * get_Recipients) (IFaxDocument2 * This, IFaxRecipients ** ppFaxRecipients);
	HRESULT(STDMETHODCALLTYPE * get_CoverPage) (IFaxDocument2 * This, BSTR * pbstrCoverPage);
	HRESULT(STDMETHODCALLTYPE * put_CoverPage) (IFaxDocument2 * This, BSTR bstrCoverPage);
	HRESULT(STDMETHODCALLTYPE * get_Subject) (IFaxDocument2 * This, BSTR * pbstrSubject);
	HRESULT(STDMETHODCALLTYPE * put_Subject) (IFaxDocument2 * This, BSTR bstrSubject);
	HRESULT(STDMETHODCALLTYPE * get_Note) (IFaxDocument2 * This, BSTR * pbstrNote);
	HRESULT(STDMETHODCALLTYPE * put_Note) (IFaxDocument2 * This, BSTR bstrNote);
	HRESULT(STDMETHODCALLTYPE * get_ScheduleTime) (IFaxDocument2 * This, DATE * pdateScheduleTime);
	HRESULT(STDMETHODCALLTYPE * put_ScheduleTime) (IFaxDocument2 * This, DATE dateScheduleTime);
	HRESULT(STDMETHODCALLTYPE * get_ReceiptAddress) (IFaxDocument2 * This, BSTR * pbstrReceiptAddress);
	HRESULT(STDMETHODCALLTYPE * put_ReceiptAddress) (IFaxDocument2 * This, BSTR bstrReceiptAddress);
	HRESULT(STDMETHODCALLTYPE * get_DocumentName) (IFaxDocument2 * This, BSTR * pbstrDocumentName);
	HRESULT(STDMETHODCALLTYPE * put_DocumentName) (IFaxDocument2 * This, BSTR bstrDocumentName);
	HRESULT(STDMETHODCALLTYPE * get_CallHandle) (IFaxDocument2 * This, long *plCallHandle);
	HRESULT(STDMETHODCALLTYPE * put_CallHandle) (IFaxDocument2 * This, long lCallHandle);
	HRESULT(STDMETHODCALLTYPE * get_CoverPageType) (IFaxDocument2 * This, FAX_COVERPAGE_TYPE_ENUM * pCoverPageType);
	HRESULT(STDMETHODCALLTYPE * put_CoverPageType) (IFaxDocument2 * This, FAX_COVERPAGE_TYPE_ENUM CoverPageType);
	HRESULT(STDMETHODCALLTYPE * get_ScheduleType) (IFaxDocument2 * This, FAX_SCHEDULE_TYPE_ENUM * pScheduleType);
	HRESULT(STDMETHODCALLTYPE * put_ScheduleType) (IFaxDocument2 * This, FAX_SCHEDULE_TYPE_ENUM ScheduleType);
	HRESULT(STDMETHODCALLTYPE * get_ReceiptType) (IFaxDocument2 * This, FAX_RECEIPT_TYPE_ENUM * pReceiptType);
	HRESULT(STDMETHODCALLTYPE * put_ReceiptType) (IFaxDocument2 * This, FAX_RECEIPT_TYPE_ENUM ReceiptType);
	HRESULT(STDMETHODCALLTYPE * get_GroupBroadcastReceipts) (IFaxDocument2 * This, VARIANT_BOOL * pbUseGrouping);
	HRESULT(STDMETHODCALLTYPE * put_GroupBroadcastReceipts) (IFaxDocument2 * This, VARIANT_BOOL bUseGrouping);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IFaxDocument2 * This, FAX_PRIORITY_TYPE_ENUM * pPriority);
	HRESULT(STDMETHODCALLTYPE * put_Priority) (IFaxDocument2 * This, FAX_PRIORITY_TYPE_ENUM Priority);
	HRESULT(STDMETHODCALLTYPE * get_TapiConnection) (IFaxDocument2 * This, IDispatch ** ppTapiConnection);
	HRESULT(STDMETHODCALLTYPE * putref_TapiConnection) (IFaxDocument2 * This, IDispatch * pTapiConnection);
	HRESULT(STDMETHODCALLTYPE * Submit) (IFaxDocument2 * This, BSTR bstrFaxServerName, VARIANT * pvFaxOutgoingJobIDs);
	HRESULT(STDMETHODCALLTYPE * ConnectedSubmit) (IFaxDocument2 * This, IFaxServer * pFaxServer, VARIANT * pvFaxOutgoingJobIDs);
	HRESULT(STDMETHODCALLTYPE * get_AttachFaxToReceipt) (IFaxDocument2 * This, VARIANT_BOOL * pbAttachFax);
	HRESULT(STDMETHODCALLTYPE * put_AttachFaxToReceipt) (IFaxDocument2 * This, VARIANT_BOOL bAttachFax);
	HRESULT(STDMETHODCALLTYPE * get_SubmissionId) (IFaxDocument2 * This, BSTR * pbstrSubmissionId);
	HRESULT(STDMETHODCALLTYPE * get_Bodies) (IFaxDocument2 * This, VARIANT * pvBodies);
	HRESULT(STDMETHODCALLTYPE * put_Bodies) (IFaxDocument2 * This, VARIANT vBodies);
	HRESULT(STDMETHODCALLTYPE * Submit2) (IFaxDocument2 * This, BSTR bstrFaxServerName, VARIANT * pvFaxOutgoingJobIDs, long *plErrorBodyFile);
	HRESULT(STDMETHODCALLTYPE * ConnectedSubmit2) (IFaxDocument2 * This, IFaxServer * pFaxServer, VARIANT * pvFaxOutgoingJobIDs, long *plErrorBodyFile);
	END_INTERFACE
}  IFaxDocument2Vtbl;
interface IFaxDocument2
{
	CONST_VTBL struct IFaxDocument2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxDocument2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxDocument2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxDocument2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxDocument2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxDocument2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxDocument2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxDocument2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxDocument2_get_Body(This,pbstrBody)( (This)->lpVtbl -> get_Body(This,pbstrBody) )
#define IFaxDocument2_put_Body(This,bstrBody)( (This)->lpVtbl -> put_Body(This,bstrBody) )
#define IFaxDocument2_get_Sender(This,ppFaxSender)( (This)->lpVtbl -> get_Sender(This,ppFaxSender) )
#define IFaxDocument2_get_Recipients(This,ppFaxRecipients)( (This)->lpVtbl -> get_Recipients(This,ppFaxRecipients) )
#define IFaxDocument2_get_CoverPage(This,pbstrCoverPage)( (This)->lpVtbl -> get_CoverPage(This,pbstrCoverPage) )
#define IFaxDocument2_put_CoverPage(This,bstrCoverPage)( (This)->lpVtbl -> put_CoverPage(This,bstrCoverPage) )
#define IFaxDocument2_get_Subject(This,pbstrSubject)( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
#define IFaxDocument2_put_Subject(This,bstrSubject)( (This)->lpVtbl -> put_Subject(This,bstrSubject) )
#define IFaxDocument2_get_Note(This,pbstrNote)( (This)->lpVtbl -> get_Note(This,pbstrNote) )
#define IFaxDocument2_put_Note(This,bstrNote)( (This)->lpVtbl -> put_Note(This,bstrNote) )
#define IFaxDocument2_get_ScheduleTime(This,pdateScheduleTime)( (This)->lpVtbl -> get_ScheduleTime(This,pdateScheduleTime) )
#define IFaxDocument2_put_ScheduleTime(This,dateScheduleTime)( (This)->lpVtbl -> put_ScheduleTime(This,dateScheduleTime) )
#define IFaxDocument2_get_ReceiptAddress(This,pbstrReceiptAddress)( (This)->lpVtbl -> get_ReceiptAddress(This,pbstrReceiptAddress) )
#define IFaxDocument2_put_ReceiptAddress(This,bstrReceiptAddress)( (This)->lpVtbl -> put_ReceiptAddress(This,bstrReceiptAddress) )
#define IFaxDocument2_get_DocumentName(This,pbstrDocumentName)( (This)->lpVtbl -> get_DocumentName(This,pbstrDocumentName) )
#define IFaxDocument2_put_DocumentName(This,bstrDocumentName)( (This)->lpVtbl -> put_DocumentName(This,bstrDocumentName) )
#define IFaxDocument2_get_CallHandle(This,plCallHandle)( (This)->lpVtbl -> get_CallHandle(This,plCallHandle) )
#define IFaxDocument2_put_CallHandle(This,lCallHandle)( (This)->lpVtbl -> put_CallHandle(This,lCallHandle) )
#define IFaxDocument2_get_CoverPageType(This,pCoverPageType)( (This)->lpVtbl -> get_CoverPageType(This,pCoverPageType) )
#define IFaxDocument2_put_CoverPageType(This,CoverPageType)( (This)->lpVtbl -> put_CoverPageType(This,CoverPageType) )
#define IFaxDocument2_get_ScheduleType(This,pScheduleType)( (This)->lpVtbl -> get_ScheduleType(This,pScheduleType) )
#define IFaxDocument2_put_ScheduleType(This,ScheduleType)( (This)->lpVtbl -> put_ScheduleType(This,ScheduleType) )
#define IFaxDocument2_get_ReceiptType(This,pReceiptType)( (This)->lpVtbl -> get_ReceiptType(This,pReceiptType) )
#define IFaxDocument2_put_ReceiptType(This,ReceiptType)( (This)->lpVtbl -> put_ReceiptType(This,ReceiptType) )
#define IFaxDocument2_get_GroupBroadcastReceipts(This,pbUseGrouping)( (This)->lpVtbl -> get_GroupBroadcastReceipts(This,pbUseGrouping) )
#define IFaxDocument2_put_GroupBroadcastReceipts(This,bUseGrouping)( (This)->lpVtbl -> put_GroupBroadcastReceipts(This,bUseGrouping) )
#define IFaxDocument2_get_Priority(This,pPriority)( (This)->lpVtbl -> get_Priority(This,pPriority) )
#define IFaxDocument2_put_Priority(This,Priority)( (This)->lpVtbl -> put_Priority(This,Priority) )
#define IFaxDocument2_get_TapiConnection(This,ppTapiConnection)( (This)->lpVtbl -> get_TapiConnection(This,ppTapiConnection) )
#define IFaxDocument2_putref_TapiConnection(This,pTapiConnection)( (This)->lpVtbl -> putref_TapiConnection(This,pTapiConnection) )
#define IFaxDocument2_Submit(This,bstrFaxServerName,pvFaxOutgoingJobIDs)( (This)->lpVtbl -> Submit(This,bstrFaxServerName,pvFaxOutgoingJobIDs) )
#define IFaxDocument2_ConnectedSubmit(This,pFaxServer,pvFaxOutgoingJobIDs)( (This)->lpVtbl -> ConnectedSubmit(This,pFaxServer,pvFaxOutgoingJobIDs) )
#define IFaxDocument2_get_AttachFaxToReceipt(This,pbAttachFax)( (This)->lpVtbl -> get_AttachFaxToReceipt(This,pbAttachFax) )
#define IFaxDocument2_put_AttachFaxToReceipt(This,bAttachFax)( (This)->lpVtbl -> put_AttachFaxToReceipt(This,bAttachFax) )
#define IFaxDocument2_get_SubmissionId(This,pbstrSubmissionId)( (This)->lpVtbl -> get_SubmissionId(This,pbstrSubmissionId) )
#define IFaxDocument2_get_Bodies(This,pvBodies)( (This)->lpVtbl -> get_Bodies(This,pvBodies) )
#define IFaxDocument2_put_Bodies(This,vBodies)( (This)->lpVtbl -> put_Bodies(This,vBodies) )
#define IFaxDocument2_Submit2(This,bstrFaxServerName,pvFaxOutgoingJobIDs,plErrorBodyFile)( (This)->lpVtbl -> Submit2(This,bstrFaxServerName,pvFaxOutgoingJobIDs,plErrorBodyFile) )
#define IFaxDocument2_ConnectedSubmit2(This,pFaxServer,pvFaxOutgoingJobIDs,plErrorBodyFile)( (This)->lpVtbl -> ConnectedSubmit2(This,pFaxServer,pvFaxOutgoingJobIDs,plErrorBodyFile) )
#endif
#endif
#ifndef __IFaxConfiguration_INTERFACE_DEFINED__
#define __IFaxConfiguration_INTERFACE_DEFINED__
extern const IID IID_IFaxConfiguration;
typedef struct IFaxConfigurationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxConfiguration * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxConfiguration * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxConfiguration * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxConfiguration * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxConfiguration * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxConfiguration * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxConfiguration * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_UseArchive) (IFaxConfiguration * This, VARIANT_BOOL * pbUseArchive);
	HRESULT(STDMETHODCALLTYPE * put_UseArchive) (IFaxConfiguration * This, VARIANT_BOOL bUseArchive);
	HRESULT(STDMETHODCALLTYPE * get_ArchiveLocation) (IFaxConfiguration * This, BSTR * pbstrArchiveLocation);
	HRESULT(STDMETHODCALLTYPE * put_ArchiveLocation) (IFaxConfiguration * This, BSTR bstrArchiveLocation);
	HRESULT(STDMETHODCALLTYPE * get_SizeQuotaWarning) (IFaxConfiguration * This, VARIANT_BOOL * pbSizeQuotaWarning);
	HRESULT(STDMETHODCALLTYPE * put_SizeQuotaWarning) (IFaxConfiguration * This, VARIANT_BOOL bSizeQuotaWarning);
	HRESULT(STDMETHODCALLTYPE * get_HighQuotaWaterMark) (IFaxConfiguration * This, long *plHighQuotaWaterMark);
	HRESULT(STDMETHODCALLTYPE * put_HighQuotaWaterMark) (IFaxConfiguration * This, long lHighQuotaWaterMark);
	HRESULT(STDMETHODCALLTYPE * get_LowQuotaWaterMark) (IFaxConfiguration * This, long *plLowQuotaWaterMark);
	HRESULT(STDMETHODCALLTYPE * put_LowQuotaWaterMark) (IFaxConfiguration * This, long lLowQuotaWaterMark);
	HRESULT(STDMETHODCALLTYPE * get_ArchiveAgeLimit) (IFaxConfiguration * This, long *plArchiveAgeLimit);
	HRESULT(STDMETHODCALLTYPE * put_ArchiveAgeLimit) (IFaxConfiguration * This, long lArchiveAgeLimit);
	HRESULT(STDMETHODCALLTYPE * get_ArchiveSizeLow) (IFaxConfiguration * This, long *plSizeLow);
	HRESULT(STDMETHODCALLTYPE * get_ArchiveSizeHigh) (IFaxConfiguration * This, long *plSizeHigh);
	HRESULT(STDMETHODCALLTYPE * get_OutgoingQueueBlocked) (IFaxConfiguration * This, VARIANT_BOOL * pbOutgoingBlocked);
	HRESULT(STDMETHODCALLTYPE * put_OutgoingQueueBlocked) (IFaxConfiguration * This, VARIANT_BOOL bOutgoingBlocked);
	HRESULT(STDMETHODCALLTYPE * get_OutgoingQueuePaused) (IFaxConfiguration * This, VARIANT_BOOL * pbOutgoingPaused);
	HRESULT(STDMETHODCALLTYPE * put_OutgoingQueuePaused) (IFaxConfiguration * This, VARIANT_BOOL bOutgoingPaused);
	HRESULT(STDMETHODCALLTYPE * get_AllowPersonalCoverPages) (IFaxConfiguration * This, VARIANT_BOOL * pbAllowPersonalCoverPages);
	HRESULT(STDMETHODCALLTYPE * put_AllowPersonalCoverPages) (IFaxConfiguration * This, VARIANT_BOOL bAllowPersonalCoverPages);
	HRESULT(STDMETHODCALLTYPE * get_UseDeviceTSID) (IFaxConfiguration * This, VARIANT_BOOL * pbUseDeviceTSID);
	HRESULT(STDMETHODCALLTYPE * put_UseDeviceTSID) (IFaxConfiguration * This, VARIANT_BOOL bUseDeviceTSID);
	HRESULT(STDMETHODCALLTYPE * get_Retries) (IFaxConfiguration * This, long *plRetries);
	HRESULT(STDMETHODCALLTYPE * put_Retries) (IFaxConfiguration * This, long lRetries);
	HRESULT(STDMETHODCALLTYPE * get_RetryDelay) (IFaxConfiguration * This, long *plRetryDelay);
	HRESULT(STDMETHODCALLTYPE * put_RetryDelay) (IFaxConfiguration * This, long lRetryDelay);
	HRESULT(STDMETHODCALLTYPE * get_DiscountRateStart) (IFaxConfiguration * This, DATE * pdateDiscountRateStart);
	HRESULT(STDMETHODCALLTYPE * put_DiscountRateStart) (IFaxConfiguration * This, DATE dateDiscountRateStart);
	HRESULT(STDMETHODCALLTYPE * get_DiscountRateEnd) (IFaxConfiguration * This, DATE * pdateDiscountRateEnd);
	HRESULT(STDMETHODCALLTYPE * put_DiscountRateEnd) (IFaxConfiguration * This, DATE dateDiscountRateEnd);
	HRESULT(STDMETHODCALLTYPE * get_OutgoingQueueAgeLimit) (IFaxConfiguration * This, long *plOutgoingQueueAgeLimit);
	HRESULT(STDMETHODCALLTYPE * put_OutgoingQueueAgeLimit) (IFaxConfiguration * This, long lOutgoingQueueAgeLimit);
	HRESULT(STDMETHODCALLTYPE * get_Branding) (IFaxConfiguration * This, VARIANT_BOOL * pbBranding);
	HRESULT(STDMETHODCALLTYPE * put_Branding) (IFaxConfiguration * This, VARIANT_BOOL bBranding);
	HRESULT(STDMETHODCALLTYPE * get_IncomingQueueBlocked) (IFaxConfiguration * This, VARIANT_BOOL * pbIncomingBlocked);
	HRESULT(STDMETHODCALLTYPE * put_IncomingQueueBlocked) (IFaxConfiguration * This, VARIANT_BOOL bIncomingBlocked);
	HRESULT(STDMETHODCALLTYPE * get_AutoCreateAccountOnConnect) (IFaxConfiguration * This, VARIANT_BOOL * pbAutoCreateAccountOnConnect);
	HRESULT(STDMETHODCALLTYPE * put_AutoCreateAccountOnConnect) (IFaxConfiguration * This, VARIANT_BOOL bAutoCreateAccountOnConnect);
	HRESULT(STDMETHODCALLTYPE * get_IncomingFaxesArePublic) (IFaxConfiguration * This, VARIANT_BOOL * pbIncomingFaxesArePublic);
	HRESULT(STDMETHODCALLTYPE * put_IncomingFaxesArePublic) (IFaxConfiguration * This, VARIANT_BOOL bIncomingFaxesArePublic);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxConfiguration * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxConfiguration * This);
	END_INTERFACE
}  IFaxConfigurationVtbl;
interface IFaxConfiguration
{
	CONST_VTBL struct IFaxConfigurationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxConfiguration_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxConfiguration_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxConfiguration_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxConfiguration_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxConfiguration_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxConfiguration_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxConfiguration_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxConfiguration_get_UseArchive(This,pbUseArchive)( (This)->lpVtbl -> get_UseArchive(This,pbUseArchive) )
#define IFaxConfiguration_put_UseArchive(This,bUseArchive)( (This)->lpVtbl -> put_UseArchive(This,bUseArchive) )
#define IFaxConfiguration_get_ArchiveLocation(This,pbstrArchiveLocation)( (This)->lpVtbl -> get_ArchiveLocation(This,pbstrArchiveLocation) )
#define IFaxConfiguration_put_ArchiveLocation(This,bstrArchiveLocation)( (This)->lpVtbl -> put_ArchiveLocation(This,bstrArchiveLocation) )
#define IFaxConfiguration_get_SizeQuotaWarning(This,pbSizeQuotaWarning)( (This)->lpVtbl -> get_SizeQuotaWarning(This,pbSizeQuotaWarning) )
#define IFaxConfiguration_put_SizeQuotaWarning(This,bSizeQuotaWarning)( (This)->lpVtbl -> put_SizeQuotaWarning(This,bSizeQuotaWarning) )
#define IFaxConfiguration_get_HighQuotaWaterMark(This,plHighQuotaWaterMark)( (This)->lpVtbl -> get_HighQuotaWaterMark(This,plHighQuotaWaterMark) )
#define IFaxConfiguration_put_HighQuotaWaterMark(This,lHighQuotaWaterMark)( (This)->lpVtbl -> put_HighQuotaWaterMark(This,lHighQuotaWaterMark) )
#define IFaxConfiguration_get_LowQuotaWaterMark(This,plLowQuotaWaterMark)( (This)->lpVtbl -> get_LowQuotaWaterMark(This,plLowQuotaWaterMark) )
#define IFaxConfiguration_put_LowQuotaWaterMark(This,lLowQuotaWaterMark)( (This)->lpVtbl -> put_LowQuotaWaterMark(This,lLowQuotaWaterMark) )
#define IFaxConfiguration_get_ArchiveAgeLimit(This,plArchiveAgeLimit)( (This)->lpVtbl -> get_ArchiveAgeLimit(This,plArchiveAgeLimit) )
#define IFaxConfiguration_put_ArchiveAgeLimit(This,lArchiveAgeLimit)( (This)->lpVtbl -> put_ArchiveAgeLimit(This,lArchiveAgeLimit) )
#define IFaxConfiguration_get_ArchiveSizeLow(This,plSizeLow)( (This)->lpVtbl -> get_ArchiveSizeLow(This,plSizeLow) )
#define IFaxConfiguration_get_ArchiveSizeHigh(This,plSizeHigh)( (This)->lpVtbl -> get_ArchiveSizeHigh(This,plSizeHigh) )
#define IFaxConfiguration_get_OutgoingQueueBlocked(This,pbOutgoingBlocked)( (This)->lpVtbl -> get_OutgoingQueueBlocked(This,pbOutgoingBlocked) )
#define IFaxConfiguration_put_OutgoingQueueBlocked(This,bOutgoingBlocked)( (This)->lpVtbl -> put_OutgoingQueueBlocked(This,bOutgoingBlocked) )
#define IFaxConfiguration_get_OutgoingQueuePaused(This,pbOutgoingPaused)( (This)->lpVtbl -> get_OutgoingQueuePaused(This,pbOutgoingPaused) )
#define IFaxConfiguration_put_OutgoingQueuePaused(This,bOutgoingPaused)( (This)->lpVtbl -> put_OutgoingQueuePaused(This,bOutgoingPaused) )
#define IFaxConfiguration_get_AllowPersonalCoverPages(This,pbAllowPersonalCoverPages)( (This)->lpVtbl -> get_AllowPersonalCoverPages(This,pbAllowPersonalCoverPages) )
#define IFaxConfiguration_put_AllowPersonalCoverPages(This,bAllowPersonalCoverPages)( (This)->lpVtbl -> put_AllowPersonalCoverPages(This,bAllowPersonalCoverPages) )
#define IFaxConfiguration_get_UseDeviceTSID(This,pbUseDeviceTSID)( (This)->lpVtbl -> get_UseDeviceTSID(This,pbUseDeviceTSID) )
#define IFaxConfiguration_put_UseDeviceTSID(This,bUseDeviceTSID)( (This)->lpVtbl -> put_UseDeviceTSID(This,bUseDeviceTSID) )
#define IFaxConfiguration_get_Retries(This,plRetries)( (This)->lpVtbl -> get_Retries(This,plRetries) )
#define IFaxConfiguration_put_Retries(This,lRetries)( (This)->lpVtbl -> put_Retries(This,lRetries) )
#define IFaxConfiguration_get_RetryDelay(This,plRetryDelay)( (This)->lpVtbl -> get_RetryDelay(This,plRetryDelay) )
#define IFaxConfiguration_put_RetryDelay(This,lRetryDelay)( (This)->lpVtbl -> put_RetryDelay(This,lRetryDelay) )
#define IFaxConfiguration_get_DiscountRateStart(This,pdateDiscountRateStart)( (This)->lpVtbl -> get_DiscountRateStart(This,pdateDiscountRateStart) )
#define IFaxConfiguration_put_DiscountRateStart(This,dateDiscountRateStart)( (This)->lpVtbl -> put_DiscountRateStart(This,dateDiscountRateStart) )
#define IFaxConfiguration_get_DiscountRateEnd(This,pdateDiscountRateEnd)( (This)->lpVtbl -> get_DiscountRateEnd(This,pdateDiscountRateEnd) )
#define IFaxConfiguration_put_DiscountRateEnd(This,dateDiscountRateEnd)( (This)->lpVtbl -> put_DiscountRateEnd(This,dateDiscountRateEnd) )
#define IFaxConfiguration_get_OutgoingQueueAgeLimit(This,plOutgoingQueueAgeLimit)( (This)->lpVtbl -> get_OutgoingQueueAgeLimit(This,plOutgoingQueueAgeLimit) )
#define IFaxConfiguration_put_OutgoingQueueAgeLimit(This,lOutgoingQueueAgeLimit)( (This)->lpVtbl -> put_OutgoingQueueAgeLimit(This,lOutgoingQueueAgeLimit) )
#define IFaxConfiguration_get_Branding(This,pbBranding)( (This)->lpVtbl -> get_Branding(This,pbBranding) )
#define IFaxConfiguration_put_Branding(This,bBranding)( (This)->lpVtbl -> put_Branding(This,bBranding) )
#define IFaxConfiguration_get_IncomingQueueBlocked(This,pbIncomingBlocked)( (This)->lpVtbl -> get_IncomingQueueBlocked(This,pbIncomingBlocked) )
#define IFaxConfiguration_put_IncomingQueueBlocked(This,bIncomingBlocked)( (This)->lpVtbl -> put_IncomingQueueBlocked(This,bIncomingBlocked) )
#define IFaxConfiguration_get_AutoCreateAccountOnConnect(This,pbAutoCreateAccountOnConnect)( (This)->lpVtbl -> get_AutoCreateAccountOnConnect(This,pbAutoCreateAccountOnConnect) )
#define IFaxConfiguration_put_AutoCreateAccountOnConnect(This,bAutoCreateAccountOnConnect)( (This)->lpVtbl -> put_AutoCreateAccountOnConnect(This,bAutoCreateAccountOnConnect) )
#define IFaxConfiguration_get_IncomingFaxesArePublic(This,pbIncomingFaxesArePublic)( (This)->lpVtbl -> get_IncomingFaxesArePublic(This,pbIncomingFaxesArePublic) )
#define IFaxConfiguration_put_IncomingFaxesArePublic(This,bIncomingFaxesArePublic)( (This)->lpVtbl -> put_IncomingFaxesArePublic(This,bIncomingFaxesArePublic) )
#define IFaxConfiguration_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxConfiguration_Save(This)( (This)->lpVtbl -> Save(This) )
#endif
#endif
#ifndef __IFaxServer2_INTERFACE_DEFINED__
#define __IFaxServer2_INTERFACE_DEFINED__
extern const IID IID_IFaxServer2;
typedef struct IFaxServer2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxServer2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxServer2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxServer2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxServer2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxServer2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxServer2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxServer2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Connect) (IFaxServer2 * This, BSTR bstrServerName);
	HRESULT(STDMETHODCALLTYPE * get_ServerName) (IFaxServer2 * This, BSTR * pbstrServerName);
	HRESULT(STDMETHODCALLTYPE * GetDeviceProviders) (IFaxServer2 * This, IFaxDeviceProviders ** ppFaxDeviceProviders);
	HRESULT(STDMETHODCALLTYPE * GetDevices) (IFaxServer2 * This, IFaxDevices ** ppFaxDevices);
	HRESULT(STDMETHODCALLTYPE * get_InboundRouting) (IFaxServer2 * This, IFaxInboundRouting ** ppFaxInboundRouting);
	HRESULT(STDMETHODCALLTYPE * get_Folders) (IFaxServer2 * This, IFaxFolders ** pFaxFolders);
	HRESULT(STDMETHODCALLTYPE * get_LoggingOptions) (IFaxServer2 * This, IFaxLoggingOptions ** ppFaxLoggingOptions);
	HRESULT(STDMETHODCALLTYPE * get_MajorVersion) (IFaxServer2 * This, long *plMajorVersion);
	HRESULT(STDMETHODCALLTYPE * get_MinorVersion) (IFaxServer2 * This, long *plMinorVersion);
	HRESULT(STDMETHODCALLTYPE * get_MajorBuild) (IFaxServer2 * This, long *plMajorBuild);
	HRESULT(STDMETHODCALLTYPE * get_MinorBuild) (IFaxServer2 * This, long *plMinorBuild);
	HRESULT(STDMETHODCALLTYPE * get_Debug) (IFaxServer2 * This, VARIANT_BOOL * pbDebug);
	HRESULT(STDMETHODCALLTYPE * get_Activity) (IFaxServer2 * This, IFaxActivity ** ppFaxActivity);
	HRESULT(STDMETHODCALLTYPE * get_OutboundRouting) (IFaxServer2 * This, IFaxOutboundRouting ** ppFaxOutboundRouting);
	HRESULT(STDMETHODCALLTYPE * get_ReceiptOptions) (IFaxServer2 * This, IFaxReceiptOptions ** ppFaxReceiptOptions);
	HRESULT(STDMETHODCALLTYPE * get_Security) (IFaxServer2 * This, IFaxSecurity ** ppFaxSecurity);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IFaxServer2 * This);
	HRESULT(STDMETHODCALLTYPE * GetExtensionProperty) (IFaxServer2 * This, BSTR bstrGUID, VARIANT * pvProperty);
	HRESULT(STDMETHODCALLTYPE * SetExtensionProperty) (IFaxServer2 * This, BSTR bstrGUID, VARIANT vProperty);
	HRESULT(STDMETHODCALLTYPE * ListenToServerEvents) (IFaxServer2 * This, FAX_SERVER_EVENTS_TYPE_ENUM EventTypes);
	HRESULT(STDMETHODCALLTYPE * RegisterDeviceProvider) (IFaxServer2 * This, BSTR bstrGUID, BSTR bstrFriendlyName, BSTR bstrImageName, BSTR TspName, long lFSPIVersion);
	HRESULT(STDMETHODCALLTYPE * UnregisterDeviceProvider) (IFaxServer2 * This, BSTR bstrUniqueName);
	HRESULT(STDMETHODCALLTYPE * RegisterInboundRoutingExtension) (IFaxServer2 * This, BSTR bstrExtensionName, BSTR bstrFriendlyName, BSTR bstrImageName, VARIANT vMethods);
	HRESULT(STDMETHODCALLTYPE * UnregisterInboundRoutingExtension) (IFaxServer2 * This, BSTR bstrExtensionUniqueName);
	HRESULT(STDMETHODCALLTYPE * get_RegisteredEvents) (IFaxServer2 * This, FAX_SERVER_EVENTS_TYPE_ENUM * pEventTypes);
	HRESULT(STDMETHODCALLTYPE * get_APIVersion) (IFaxServer2 * This, FAX_SERVER_APIVERSION_ENUM * pAPIVersion);
	HRESULT(STDMETHODCALLTYPE * get_Configuration) (IFaxServer2 * This, IFaxConfiguration ** ppFaxConfiguration);
	HRESULT(STDMETHODCALLTYPE * get_CurrentAccount) (IFaxServer2 * This, IFaxAccount ** ppCurrentAccount);
	HRESULT(STDMETHODCALLTYPE * get_FaxAccountSet) (IFaxServer2 * This, IFaxAccountSet ** ppFaxAccountSet);
	HRESULT(STDMETHODCALLTYPE * get_Security2) (IFaxServer2 * This, IFaxSecurity2 ** ppFaxSecurity2);
	END_INTERFACE
}  IFaxServer2Vtbl;
interface IFaxServer2
{
	CONST_VTBL struct IFaxServer2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxServer2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxServer2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxServer2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxServer2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxServer2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxServer2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxServer2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxServer2_Connect(This,bstrServerName)( (This)->lpVtbl -> Connect(This,bstrServerName) )
#define IFaxServer2_get_ServerName(This,pbstrServerName)( (This)->lpVtbl -> get_ServerName(This,pbstrServerName) )
#define IFaxServer2_GetDeviceProviders(This,ppFaxDeviceProviders)( (This)->lpVtbl -> GetDeviceProviders(This,ppFaxDeviceProviders) )
#define IFaxServer2_GetDevices(This,ppFaxDevices)( (This)->lpVtbl -> GetDevices(This,ppFaxDevices) )
#define IFaxServer2_get_InboundRouting(This,ppFaxInboundRouting)( (This)->lpVtbl -> get_InboundRouting(This,ppFaxInboundRouting) )
#define IFaxServer2_get_Folders(This,pFaxFolders)( (This)->lpVtbl -> get_Folders(This,pFaxFolders) )
#define IFaxServer2_get_LoggingOptions(This,ppFaxLoggingOptions)( (This)->lpVtbl -> get_LoggingOptions(This,ppFaxLoggingOptions) )
#define IFaxServer2_get_MajorVersion(This,plMajorVersion)( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) )
#define IFaxServer2_get_MinorVersion(This,plMinorVersion)( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) )
#define IFaxServer2_get_MajorBuild(This,plMajorBuild)( (This)->lpVtbl -> get_MajorBuild(This,plMajorBuild) )
#define IFaxServer2_get_MinorBuild(This,plMinorBuild)( (This)->lpVtbl -> get_MinorBuild(This,plMinorBuild) )
#define IFaxServer2_get_Debug(This,pbDebug)( (This)->lpVtbl -> get_Debug(This,pbDebug) )
#define IFaxServer2_get_Activity(This,ppFaxActivity)( (This)->lpVtbl -> get_Activity(This,ppFaxActivity) )
#define IFaxServer2_get_OutboundRouting(This,ppFaxOutboundRouting)( (This)->lpVtbl -> get_OutboundRouting(This,ppFaxOutboundRouting) )
#define IFaxServer2_get_ReceiptOptions(This,ppFaxReceiptOptions)( (This)->lpVtbl -> get_ReceiptOptions(This,ppFaxReceiptOptions) )
#define IFaxServer2_get_Security(This,ppFaxSecurity)( (This)->lpVtbl -> get_Security(This,ppFaxSecurity) )
#define IFaxServer2_Disconnect(This)( (This)->lpVtbl -> Disconnect(This) )
#define IFaxServer2_GetExtensionProperty(This,bstrGUID,pvProperty)( (This)->lpVtbl -> GetExtensionProperty(This,bstrGUID,pvProperty) )
#define IFaxServer2_SetExtensionProperty(This,bstrGUID,vProperty)( (This)->lpVtbl -> SetExtensionProperty(This,bstrGUID,vProperty) )
#define IFaxServer2_ListenToServerEvents(This,EventTypes)( (This)->lpVtbl -> ListenToServerEvents(This,EventTypes) )
#define IFaxServer2_RegisterDeviceProvider(This,bstrGUID,bstrFriendlyName,bstrImageName,TspName,lFSPIVersion)( (This)->lpVtbl -> RegisterDeviceProvider(This,bstrGUID,bstrFriendlyName,bstrImageName,TspName,lFSPIVersion) )
#define IFaxServer2_UnregisterDeviceProvider(This,bstrUniqueName)( (This)->lpVtbl -> UnregisterDeviceProvider(This,bstrUniqueName) )
#define IFaxServer2_RegisterInboundRoutingExtension(This,bstrExtensionName,bstrFriendlyName,bstrImageName,vMethods)( (This)->lpVtbl -> RegisterInboundRoutingExtension(This,bstrExtensionName,bstrFriendlyName,bstrImageName,vMethods) )
#define IFaxServer2_UnregisterInboundRoutingExtension(This,bstrExtensionUniqueName)( (This)->lpVtbl -> UnregisterInboundRoutingExtension(This,bstrExtensionUniqueName) )
#define IFaxServer2_get_RegisteredEvents(This,pEventTypes)( (This)->lpVtbl -> get_RegisteredEvents(This,pEventTypes) )
#define IFaxServer2_get_APIVersion(This,pAPIVersion)( (This)->lpVtbl -> get_APIVersion(This,pAPIVersion) )
#define IFaxServer2_get_Configuration(This,ppFaxConfiguration)( (This)->lpVtbl -> get_Configuration(This,ppFaxConfiguration) )
#define IFaxServer2_get_CurrentAccount(This,ppCurrentAccount)( (This)->lpVtbl -> get_CurrentAccount(This,ppCurrentAccount) )
#define IFaxServer2_get_FaxAccountSet(This,ppFaxAccountSet)( (This)->lpVtbl -> get_FaxAccountSet(This,ppFaxAccountSet) )
#define IFaxServer2_get_Security2(This,ppFaxSecurity2)( (This)->lpVtbl -> get_Security2(This,ppFaxSecurity2) )
#endif
#endif
#ifndef __IFaxAccountSet_INTERFACE_DEFINED__
#define __IFaxAccountSet_INTERFACE_DEFINED__
extern const IID IID_IFaxAccountSet;
typedef struct IFaxAccountSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxAccountSet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxAccountSet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxAccountSet * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxAccountSet * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxAccountSet * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxAccountSet * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxAccountSet * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetAccounts) (IFaxAccountSet * This, IFaxAccounts ** ppFaxAccounts);
	HRESULT(STDMETHODCALLTYPE * GetAccount) (IFaxAccountSet * This, BSTR bstrAccountName, IFaxAccount ** pFaxAccount);
	HRESULT(STDMETHODCALLTYPE * AddAccount) (IFaxAccountSet * This, BSTR bstrAccountName, IFaxAccount ** pFaxAccount);
	HRESULT(STDMETHODCALLTYPE * RemoveAccount) (IFaxAccountSet * This, BSTR bstrAccountName);
	END_INTERFACE
}  IFaxAccountSetVtbl;
interface IFaxAccountSet
{
	CONST_VTBL struct IFaxAccountSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxAccountSet_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxAccountSet_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxAccountSet_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxAccountSet_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxAccountSet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxAccountSet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxAccountSet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxAccountSet_GetAccounts(This,ppFaxAccounts)( (This)->lpVtbl -> GetAccounts(This,ppFaxAccounts) )
#define IFaxAccountSet_GetAccount(This,bstrAccountName,pFaxAccount)( (This)->lpVtbl -> GetAccount(This,bstrAccountName,pFaxAccount) )
#define IFaxAccountSet_AddAccount(This,bstrAccountName,pFaxAccount)( (This)->lpVtbl -> AddAccount(This,bstrAccountName,pFaxAccount) )
#define IFaxAccountSet_RemoveAccount(This,bstrAccountName)( (This)->lpVtbl -> RemoveAccount(This,bstrAccountName) )
#endif
#endif
#ifndef __IFaxAccounts_INTERFACE_DEFINED__
#define __IFaxAccounts_INTERFACE_DEFINED__
extern const IID IID_IFaxAccounts;
typedef struct IFaxAccountsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxAccounts * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxAccounts * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxAccounts * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxAccounts * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxAccounts * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxAccounts * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxAccounts * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFaxAccounts * This, IUnknown ** ppUnk);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IFaxAccounts * This, VARIANT vIndex, IFaxAccount ** pFaxAccount);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFaxAccounts * This, long *plCount);
	END_INTERFACE
}  IFaxAccountsVtbl;
interface IFaxAccounts
{
	CONST_VTBL struct IFaxAccountsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxAccounts_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxAccounts_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxAccounts_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxAccounts_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxAccounts_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxAccounts_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxAccounts_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxAccounts_get__NewEnum(This,ppUnk)( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
#define IFaxAccounts_get_Item(This,vIndex,pFaxAccount)( (This)->lpVtbl -> get_Item(This,vIndex,pFaxAccount) )
#define IFaxAccounts_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#endif
#endif
#ifndef __IFaxAccount_INTERFACE_DEFINED__
#define __IFaxAccount_INTERFACE_DEFINED__
typedef enum FAX_ACCOUNT_EVENTS_TYPE_ENUM
{
	faetNONE = 0,
	faetIN_QUEUE = 0x1,
	faetOUT_QUEUE = 0x2,
	faetIN_ARCHIVE = 0x4,
	faetOUT_ARCHIVE = 0x8,
	faetFXSSVC_ENDED = 0x10
} FAX_ACCOUNT_EVENTS_TYPE_ENUM;
extern const IID IID_IFaxAccount;
typedef struct IFaxAccountVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxAccount * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxAccount * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxAccount * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxAccount * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxAccount * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxAccount * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxAccount * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AccountName) (IFaxAccount * This, BSTR * pbstrAccountName);
	HRESULT(STDMETHODCALLTYPE * get_Folders) (IFaxAccount * This, IFaxAccountFolders ** ppFolders);
	HRESULT(STDMETHODCALLTYPE * ListenToAccountEvents) (IFaxAccount * This, FAX_ACCOUNT_EVENTS_TYPE_ENUM EventTypes);
	HRESULT(STDMETHODCALLTYPE * get_RegisteredEvents) (IFaxAccount * This, FAX_ACCOUNT_EVENTS_TYPE_ENUM * pRegisteredEvents);
	END_INTERFACE
}  IFaxAccountVtbl;
interface IFaxAccount
{
	CONST_VTBL struct IFaxAccountVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxAccount_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxAccount_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxAccount_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxAccount_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxAccount_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxAccount_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxAccount_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxAccount_get_AccountName(This,pbstrAccountName)( (This)->lpVtbl -> get_AccountName(This,pbstrAccountName) )
#define IFaxAccount_get_Folders(This,ppFolders)( (This)->lpVtbl -> get_Folders(This,ppFolders) )
#define IFaxAccount_ListenToAccountEvents(This,EventTypes)( (This)->lpVtbl -> ListenToAccountEvents(This,EventTypes) )
#define IFaxAccount_get_RegisteredEvents(This,pRegisteredEvents)( (This)->lpVtbl -> get_RegisteredEvents(This,pRegisteredEvents) )
#endif
#endif
#ifndef __IFaxOutgoingJob2_INTERFACE_DEFINED__
#define __IFaxOutgoingJob2_INTERFACE_DEFINED__
extern const IID IID_IFaxOutgoingJob2;
typedef struct IFaxOutgoingJob2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxOutgoingJob2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxOutgoingJob2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxOutgoingJob2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxOutgoingJob2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxOutgoingJob2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxOutgoingJob2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxOutgoingJob2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Subject) (IFaxOutgoingJob2 * This, BSTR * pbstrSubject);
	HRESULT(STDMETHODCALLTYPE * get_DocumentName) (IFaxOutgoingJob2 * This, BSTR * pbstrDocumentName);
	HRESULT(STDMETHODCALLTYPE * get_Pages) (IFaxOutgoingJob2 * This, long *plPages);
	HRESULT(STDMETHODCALLTYPE * get_Size) (IFaxOutgoingJob2 * This, long *plSize);
	HRESULT(STDMETHODCALLTYPE * get_SubmissionId) (IFaxOutgoingJob2 * This, BSTR * pbstrSubmissionId);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFaxOutgoingJob2 * This, BSTR * pbstrId);
	HRESULT(STDMETHODCALLTYPE * get_OriginalScheduledTime) (IFaxOutgoingJob2 * This, DATE * pdateOriginalScheduledTime);
	HRESULT(STDMETHODCALLTYPE * get_SubmissionTime) (IFaxOutgoingJob2 * This, DATE * pdateSubmissionTime);
	HRESULT(STDMETHODCALLTYPE * get_ReceiptType) (IFaxOutgoingJob2 * This, FAX_RECEIPT_TYPE_ENUM * pReceiptType);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IFaxOutgoingJob2 * This, FAX_PRIORITY_TYPE_ENUM * pPriority);
	HRESULT(STDMETHODCALLTYPE * get_Sender) (IFaxOutgoingJob2 * This, IFaxSender ** ppFaxSender);
	HRESULT(STDMETHODCALLTYPE * get_Recipient) (IFaxOutgoingJob2 * This, IFaxRecipient ** ppFaxRecipient);
	HRESULT(STDMETHODCALLTYPE * get_CurrentPage) (IFaxOutgoingJob2 * This, long *plCurrentPage);
	HRESULT(STDMETHODCALLTYPE * get_DeviceId) (IFaxOutgoingJob2 * This, long *plDeviceId);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IFaxOutgoingJob2 * This, FAX_JOB_STATUS_ENUM * pStatus);
	HRESULT(STDMETHODCALLTYPE * get_ExtendedStatusCode) (IFaxOutgoingJob2 * This, FAX_JOB_EXTENDED_STATUS_ENUM * pExtendedStatusCode);
	HRESULT(STDMETHODCALLTYPE * get_ExtendedStatus) (IFaxOutgoingJob2 * This, BSTR * pbstrExtendedStatus);
	HRESULT(STDMETHODCALLTYPE * get_AvailableOperations) (IFaxOutgoingJob2 * This, FAX_JOB_OPERATIONS_ENUM * pAvailableOperations);
	HRESULT(STDMETHODCALLTYPE * get_Retries) (IFaxOutgoingJob2 * This, long *plRetries);
	HRESULT(STDMETHODCALLTYPE * get_ScheduledTime) (IFaxOutgoingJob2 * This, DATE * pdateScheduledTime);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionStart) (IFaxOutgoingJob2 * This, DATE * pdateTransmissionStart);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionEnd) (IFaxOutgoingJob2 * This, DATE * pdateTransmissionEnd);
	HRESULT(STDMETHODCALLTYPE * get_CSID) (IFaxOutgoingJob2 * This, BSTR * pbstrCSID);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IFaxOutgoingJob2 * This, BSTR * pbstrTSID);
	HRESULT(STDMETHODCALLTYPE * get_GroupBroadcastReceipts) (IFaxOutgoingJob2 * This, VARIANT_BOOL * pbGroupBroadcastReceipts);
	HRESULT(STDMETHODCALLTYPE * Pause) (IFaxOutgoingJob2 * This);
	HRESULT(STDMETHODCALLTYPE * Resume) (IFaxOutgoingJob2 * This);
	HRESULT(STDMETHODCALLTYPE * Restart) (IFaxOutgoingJob2 * This);
	HRESULT(STDMETHODCALLTYPE * CopyTiff) (IFaxOutgoingJob2 * This, BSTR bstrTiffPath);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxOutgoingJob2 * This);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IFaxOutgoingJob2 * This);
	HRESULT(STDMETHODCALLTYPE * get_HasCoverPage) (IFaxOutgoingJob2 * This, VARIANT_BOOL * pbHasCoverPage);
	HRESULT(STDMETHODCALLTYPE * get_ReceiptAddress) (IFaxOutgoingJob2 * This, BSTR * pbstrReceiptAddress);
	HRESULT(STDMETHODCALLTYPE * get_ScheduleType) (IFaxOutgoingJob2 * This, FAX_SCHEDULE_TYPE_ENUM * pScheduleType);
	END_INTERFACE
}  IFaxOutgoingJob2Vtbl;
interface IFaxOutgoingJob2
{
	CONST_VTBL struct IFaxOutgoingJob2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxOutgoingJob2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxOutgoingJob2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxOutgoingJob2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxOutgoingJob2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxOutgoingJob2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxOutgoingJob2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxOutgoingJob2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxOutgoingJob2_get_Subject(This,pbstrSubject)( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
#define IFaxOutgoingJob2_get_DocumentName(This,pbstrDocumentName)( (This)->lpVtbl -> get_DocumentName(This,pbstrDocumentName) )
#define IFaxOutgoingJob2_get_Pages(This,plPages)( (This)->lpVtbl -> get_Pages(This,plPages) )
#define IFaxOutgoingJob2_get_Size(This,plSize)( (This)->lpVtbl -> get_Size(This,plSize) )
#define IFaxOutgoingJob2_get_SubmissionId(This,pbstrSubmissionId)( (This)->lpVtbl -> get_SubmissionId(This,pbstrSubmissionId) )
#define IFaxOutgoingJob2_get_Id(This,pbstrId)( (This)->lpVtbl -> get_Id(This,pbstrId) )
#define IFaxOutgoingJob2_get_OriginalScheduledTime(This,pdateOriginalScheduledTime)( (This)->lpVtbl -> get_OriginalScheduledTime(This,pdateOriginalScheduledTime) )
#define IFaxOutgoingJob2_get_SubmissionTime(This,pdateSubmissionTime)( (This)->lpVtbl -> get_SubmissionTime(This,pdateSubmissionTime) )
#define IFaxOutgoingJob2_get_ReceiptType(This,pReceiptType)( (This)->lpVtbl -> get_ReceiptType(This,pReceiptType) )
#define IFaxOutgoingJob2_get_Priority(This,pPriority)( (This)->lpVtbl -> get_Priority(This,pPriority) )
#define IFaxOutgoingJob2_get_Sender(This,ppFaxSender)( (This)->lpVtbl -> get_Sender(This,ppFaxSender) )
#define IFaxOutgoingJob2_get_Recipient(This,ppFaxRecipient)( (This)->lpVtbl -> get_Recipient(This,ppFaxRecipient) )
#define IFaxOutgoingJob2_get_CurrentPage(This,plCurrentPage)( (This)->lpVtbl -> get_CurrentPage(This,plCurrentPage) )
#define IFaxOutgoingJob2_get_DeviceId(This,plDeviceId)( (This)->lpVtbl -> get_DeviceId(This,plDeviceId) )
#define IFaxOutgoingJob2_get_Status(This,pStatus)( (This)->lpVtbl -> get_Status(This,pStatus) )
#define IFaxOutgoingJob2_get_ExtendedStatusCode(This,pExtendedStatusCode)( (This)->lpVtbl -> get_ExtendedStatusCode(This,pExtendedStatusCode) )
#define IFaxOutgoingJob2_get_ExtendedStatus(This,pbstrExtendedStatus)( (This)->lpVtbl -> get_ExtendedStatus(This,pbstrExtendedStatus) )
#define IFaxOutgoingJob2_get_AvailableOperations(This,pAvailableOperations)( (This)->lpVtbl -> get_AvailableOperations(This,pAvailableOperations) )
#define IFaxOutgoingJob2_get_Retries(This,plRetries)( (This)->lpVtbl -> get_Retries(This,plRetries) )
#define IFaxOutgoingJob2_get_ScheduledTime(This,pdateScheduledTime)( (This)->lpVtbl -> get_ScheduledTime(This,pdateScheduledTime) )
#define IFaxOutgoingJob2_get_TransmissionStart(This,pdateTransmissionStart)( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
#define IFaxOutgoingJob2_get_TransmissionEnd(This,pdateTransmissionEnd)( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
#define IFaxOutgoingJob2_get_CSID(This,pbstrCSID)( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
#define IFaxOutgoingJob2_get_TSID(This,pbstrTSID)( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
#define IFaxOutgoingJob2_get_GroupBroadcastReceipts(This,pbGroupBroadcastReceipts)( (This)->lpVtbl -> get_GroupBroadcastReceipts(This,pbGroupBroadcastReceipts) )
#define IFaxOutgoingJob2_Pause(This)( (This)->lpVtbl -> Pause(This) )
#define IFaxOutgoingJob2_Resume(This)( (This)->lpVtbl -> Resume(This) )
#define IFaxOutgoingJob2_Restart(This)( (This)->lpVtbl -> Restart(This) )
#define IFaxOutgoingJob2_CopyTiff(This,bstrTiffPath)( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
#define IFaxOutgoingJob2_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxOutgoingJob2_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define IFaxOutgoingJob2_get_HasCoverPage(This,pbHasCoverPage)( (This)->lpVtbl -> get_HasCoverPage(This,pbHasCoverPage) )
#define IFaxOutgoingJob2_get_ReceiptAddress(This,pbstrReceiptAddress)( (This)->lpVtbl -> get_ReceiptAddress(This,pbstrReceiptAddress) )
#define IFaxOutgoingJob2_get_ScheduleType(This,pScheduleType)( (This)->lpVtbl -> get_ScheduleType(This,pScheduleType) )
#endif
#endif
#ifndef __IFaxAccountFolders_INTERFACE_DEFINED__
#define __IFaxAccountFolders_INTERFACE_DEFINED__
extern const IID IID_IFaxAccountFolders;
typedef struct IFaxAccountFoldersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxAccountFolders * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxAccountFolders * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxAccountFolders * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxAccountFolders * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxAccountFolders * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxAccountFolders * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxAccountFolders * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_OutgoingQueue) (IFaxAccountFolders * This, IFaxAccountOutgoingQueue ** pFaxOutgoingQueue);
	HRESULT(STDMETHODCALLTYPE * get_IncomingQueue) (IFaxAccountFolders * This, IFaxAccountIncomingQueue ** pFaxIncomingQueue);
	HRESULT(STDMETHODCALLTYPE * get_IncomingArchive) (IFaxAccountFolders * This, IFaxAccountIncomingArchive ** pFaxIncomingArchive);
	HRESULT(STDMETHODCALLTYPE * get_OutgoingArchive) (IFaxAccountFolders * This, IFaxAccountOutgoingArchive ** pFaxOutgoingArchive);
	END_INTERFACE
}  IFaxAccountFoldersVtbl;
interface IFaxAccountFolders
{
	CONST_VTBL struct IFaxAccountFoldersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxAccountFolders_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxAccountFolders_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxAccountFolders_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxAccountFolders_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxAccountFolders_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxAccountFolders_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxAccountFolders_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxAccountFolders_get_OutgoingQueue(This,pFaxOutgoingQueue)( (This)->lpVtbl -> get_OutgoingQueue(This,pFaxOutgoingQueue) )
#define IFaxAccountFolders_get_IncomingQueue(This,pFaxIncomingQueue)( (This)->lpVtbl -> get_IncomingQueue(This,pFaxIncomingQueue) )
#define IFaxAccountFolders_get_IncomingArchive(This,pFaxIncomingArchive)( (This)->lpVtbl -> get_IncomingArchive(This,pFaxIncomingArchive) )
#define IFaxAccountFolders_get_OutgoingArchive(This,pFaxOutgoingArchive)( (This)->lpVtbl -> get_OutgoingArchive(This,pFaxOutgoingArchive) )
#endif
#endif
#ifndef __IFaxAccountIncomingQueue_INTERFACE_DEFINED__
#define __IFaxAccountIncomingQueue_INTERFACE_DEFINED__
extern const IID IID_IFaxAccountIncomingQueue;
typedef struct IFaxAccountIncomingQueueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxAccountIncomingQueue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxAccountIncomingQueue * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxAccountIncomingQueue * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxAccountIncomingQueue * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxAccountIncomingQueue * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxAccountIncomingQueue * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxAccountIncomingQueue * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetJobs) (IFaxAccountIncomingQueue * This, IFaxIncomingJobs ** pFaxIncomingJobs);
	HRESULT(STDMETHODCALLTYPE * GetJob) (IFaxAccountIncomingQueue * This, BSTR bstrJobId, IFaxIncomingJob ** pFaxIncomingJob);
	END_INTERFACE
}  IFaxAccountIncomingQueueVtbl;
interface IFaxAccountIncomingQueue
{
	CONST_VTBL struct IFaxAccountIncomingQueueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxAccountIncomingQueue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxAccountIncomingQueue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxAccountIncomingQueue_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxAccountIncomingQueue_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxAccountIncomingQueue_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxAccountIncomingQueue_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxAccountIncomingQueue_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxAccountIncomingQueue_GetJobs(This,pFaxIncomingJobs)( (This)->lpVtbl -> GetJobs(This,pFaxIncomingJobs) )
#define IFaxAccountIncomingQueue_GetJob(This,bstrJobId,pFaxIncomingJob)( (This)->lpVtbl -> GetJob(This,bstrJobId,pFaxIncomingJob) )
#endif
#endif
#ifndef __IFaxAccountOutgoingQueue_INTERFACE_DEFINED__
#define __IFaxAccountOutgoingQueue_INTERFACE_DEFINED__
extern const IID IID_IFaxAccountOutgoingQueue;
typedef struct IFaxAccountOutgoingQueueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxAccountOutgoingQueue * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxAccountOutgoingQueue * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxAccountOutgoingQueue * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxAccountOutgoingQueue * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxAccountOutgoingQueue * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxAccountOutgoingQueue * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxAccountOutgoingQueue * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetJobs) (IFaxAccountOutgoingQueue * This, IFaxOutgoingJobs ** pFaxOutgoingJobs);
	HRESULT(STDMETHODCALLTYPE * GetJob) (IFaxAccountOutgoingQueue * This, BSTR bstrJobId, IFaxOutgoingJob ** pFaxOutgoingJob);
	END_INTERFACE
}  IFaxAccountOutgoingQueueVtbl;
interface IFaxAccountOutgoingQueue
{
	CONST_VTBL struct IFaxAccountOutgoingQueueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxAccountOutgoingQueue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxAccountOutgoingQueue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxAccountOutgoingQueue_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxAccountOutgoingQueue_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxAccountOutgoingQueue_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxAccountOutgoingQueue_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxAccountOutgoingQueue_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxAccountOutgoingQueue_GetJobs(This,pFaxOutgoingJobs)( (This)->lpVtbl -> GetJobs(This,pFaxOutgoingJobs) )
#define IFaxAccountOutgoingQueue_GetJob(This,bstrJobId,pFaxOutgoingJob)( (This)->lpVtbl -> GetJob(This,bstrJobId,pFaxOutgoingJob) )
#endif
#endif
#ifndef __IFaxOutgoingMessage2_INTERFACE_DEFINED__
#define __IFaxOutgoingMessage2_INTERFACE_DEFINED__
extern const IID IID_IFaxOutgoingMessage2;
typedef struct IFaxOutgoingMessage2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxOutgoingMessage2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxOutgoingMessage2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxOutgoingMessage2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxOutgoingMessage2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxOutgoingMessage2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxOutgoingMessage2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxOutgoingMessage2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_SubmissionId) (IFaxOutgoingMessage2 * This, BSTR * pbstrSubmissionId);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFaxOutgoingMessage2 * This, BSTR * pbstrId);
	HRESULT(STDMETHODCALLTYPE * get_Subject) (IFaxOutgoingMessage2 * This, BSTR * pbstrSubject);
	HRESULT(STDMETHODCALLTYPE * get_DocumentName) (IFaxOutgoingMessage2 * This, BSTR * pbstrDocumentName);
	HRESULT(STDMETHODCALLTYPE * get_Retries) (IFaxOutgoingMessage2 * This, long *plRetries);
	HRESULT(STDMETHODCALLTYPE * get_Pages) (IFaxOutgoingMessage2 * This, long *plPages);
	HRESULT(STDMETHODCALLTYPE * get_Size) (IFaxOutgoingMessage2 * This, long *plSize);
	HRESULT(STDMETHODCALLTYPE * get_OriginalScheduledTime) (IFaxOutgoingMessage2 * This, DATE * pdateOriginalScheduledTime);
	HRESULT(STDMETHODCALLTYPE * get_SubmissionTime) (IFaxOutgoingMessage2 * This, DATE * pdateSubmissionTime);
	HRESULT(STDMETHODCALLTYPE * get_Priority) (IFaxOutgoingMessage2 * This, FAX_PRIORITY_TYPE_ENUM * pPriority);
	HRESULT(STDMETHODCALLTYPE * get_Sender) (IFaxOutgoingMessage2 * This, IFaxSender ** ppFaxSender);
	HRESULT(STDMETHODCALLTYPE * get_Recipient) (IFaxOutgoingMessage2 * This, IFaxRecipient ** ppFaxRecipient);
	HRESULT(STDMETHODCALLTYPE * get_DeviceName) (IFaxOutgoingMessage2 * This, BSTR * pbstrDeviceName);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionStart) (IFaxOutgoingMessage2 * This, DATE * pdateTransmissionStart);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionEnd) (IFaxOutgoingMessage2 * This, DATE * pdateTransmissionEnd);
	HRESULT(STDMETHODCALLTYPE * get_CSID) (IFaxOutgoingMessage2 * This, BSTR * pbstrCSID);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IFaxOutgoingMessage2 * This, BSTR * pbstrTSID);
	HRESULT(STDMETHODCALLTYPE * CopyTiff) (IFaxOutgoingMessage2 * This, BSTR bstrTiffPath);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFaxOutgoingMessage2 * This);
	HRESULT(STDMETHODCALLTYPE * get_HasCoverPage) (IFaxOutgoingMessage2 * This, VARIANT_BOOL * pbHasCoverPage);
	HRESULT(STDMETHODCALLTYPE * get_ReceiptType) (IFaxOutgoingMessage2 * This, FAX_RECEIPT_TYPE_ENUM * pReceiptType);
	HRESULT(STDMETHODCALLTYPE * get_ReceiptAddress) (IFaxOutgoingMessage2 * This, BSTR * pbstrReceiptAddress);
	HRESULT(STDMETHODCALLTYPE * get_Read) (IFaxOutgoingMessage2 * This, VARIANT_BOOL * pbRead);
	HRESULT(STDMETHODCALLTYPE * put_Read) (IFaxOutgoingMessage2 * This, VARIANT_BOOL bRead);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxOutgoingMessage2 * This);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxOutgoingMessage2 * This);
	END_INTERFACE
}  IFaxOutgoingMessage2Vtbl;
interface IFaxOutgoingMessage2
{
	CONST_VTBL struct IFaxOutgoingMessage2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxOutgoingMessage2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxOutgoingMessage2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxOutgoingMessage2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxOutgoingMessage2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxOutgoingMessage2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxOutgoingMessage2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxOutgoingMessage2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxOutgoingMessage2_get_SubmissionId(This,pbstrSubmissionId)( (This)->lpVtbl -> get_SubmissionId(This,pbstrSubmissionId) )
#define IFaxOutgoingMessage2_get_Id(This,pbstrId)( (This)->lpVtbl -> get_Id(This,pbstrId) )
#define IFaxOutgoingMessage2_get_Subject(This,pbstrSubject)( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
#define IFaxOutgoingMessage2_get_DocumentName(This,pbstrDocumentName)( (This)->lpVtbl -> get_DocumentName(This,pbstrDocumentName) )
#define IFaxOutgoingMessage2_get_Retries(This,plRetries)( (This)->lpVtbl -> get_Retries(This,plRetries) )
#define IFaxOutgoingMessage2_get_Pages(This,plPages)( (This)->lpVtbl -> get_Pages(This,plPages) )
#define IFaxOutgoingMessage2_get_Size(This,plSize)( (This)->lpVtbl -> get_Size(This,plSize) )
#define IFaxOutgoingMessage2_get_OriginalScheduledTime(This,pdateOriginalScheduledTime)( (This)->lpVtbl -> get_OriginalScheduledTime(This,pdateOriginalScheduledTime) )
#define IFaxOutgoingMessage2_get_SubmissionTime(This,pdateSubmissionTime)( (This)->lpVtbl -> get_SubmissionTime(This,pdateSubmissionTime) )
#define IFaxOutgoingMessage2_get_Priority(This,pPriority)( (This)->lpVtbl -> get_Priority(This,pPriority) )
#define IFaxOutgoingMessage2_get_Sender(This,ppFaxSender)( (This)->lpVtbl -> get_Sender(This,ppFaxSender) )
#define IFaxOutgoingMessage2_get_Recipient(This,ppFaxRecipient)( (This)->lpVtbl -> get_Recipient(This,ppFaxRecipient) )
#define IFaxOutgoingMessage2_get_DeviceName(This,pbstrDeviceName)( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
#define IFaxOutgoingMessage2_get_TransmissionStart(This,pdateTransmissionStart)( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
#define IFaxOutgoingMessage2_get_TransmissionEnd(This,pdateTransmissionEnd)( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
#define IFaxOutgoingMessage2_get_CSID(This,pbstrCSID)( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
#define IFaxOutgoingMessage2_get_TSID(This,pbstrTSID)( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
#define IFaxOutgoingMessage2_CopyTiff(This,bstrTiffPath)( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
#define IFaxOutgoingMessage2_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFaxOutgoingMessage2_get_HasCoverPage(This,pbHasCoverPage)( (This)->lpVtbl -> get_HasCoverPage(This,pbHasCoverPage) )
#define IFaxOutgoingMessage2_get_ReceiptType(This,pReceiptType)( (This)->lpVtbl -> get_ReceiptType(This,pReceiptType) )
#define IFaxOutgoingMessage2_get_ReceiptAddress(This,pbstrReceiptAddress)( (This)->lpVtbl -> get_ReceiptAddress(This,pbstrReceiptAddress) )
#define IFaxOutgoingMessage2_get_Read(This,pbRead)( (This)->lpVtbl -> get_Read(This,pbRead) )
#define IFaxOutgoingMessage2_put_Read(This,bRead)( (This)->lpVtbl -> put_Read(This,bRead) )
#define IFaxOutgoingMessage2_Save(This)( (This)->lpVtbl -> Save(This) )
#define IFaxOutgoingMessage2_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#endif
#endif
#ifndef __IFaxAccountIncomingArchive_INTERFACE_DEFINED__
#define __IFaxAccountIncomingArchive_INTERFACE_DEFINED__
extern const IID IID_IFaxAccountIncomingArchive;
typedef struct IFaxAccountIncomingArchiveVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxAccountIncomingArchive * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxAccountIncomingArchive * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxAccountIncomingArchive * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxAccountIncomingArchive * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxAccountIncomingArchive * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxAccountIncomingArchive * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxAccountIncomingArchive * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_SizeLow) (IFaxAccountIncomingArchive * This, long *plSizeLow);
	HRESULT(STDMETHODCALLTYPE * get_SizeHigh) (IFaxAccountIncomingArchive * This, long *plSizeHigh);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxAccountIncomingArchive * This);
	HRESULT(STDMETHODCALLTYPE * GetMessages) (IFaxAccountIncomingArchive * This, long lPrefetchSize, IFaxIncomingMessageIterator ** pFaxIncomingMessageIterator);
	HRESULT(STDMETHODCALLTYPE * GetMessage) (IFaxAccountIncomingArchive * This, BSTR bstrMessageId, IFaxIncomingMessage ** pFaxIncomingMessage);
	END_INTERFACE
}  IFaxAccountIncomingArchiveVtbl;
interface IFaxAccountIncomingArchive
{
	CONST_VTBL struct IFaxAccountIncomingArchiveVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxAccountIncomingArchive_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxAccountIncomingArchive_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxAccountIncomingArchive_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxAccountIncomingArchive_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxAccountIncomingArchive_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxAccountIncomingArchive_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxAccountIncomingArchive_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxAccountIncomingArchive_get_SizeLow(This,plSizeLow)( (This)->lpVtbl -> get_SizeLow(This,plSizeLow) )
#define IFaxAccountIncomingArchive_get_SizeHigh(This,plSizeHigh)( (This)->lpVtbl -> get_SizeHigh(This,plSizeHigh) )
#define IFaxAccountIncomingArchive_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxAccountIncomingArchive_GetMessages(This,lPrefetchSize,pFaxIncomingMessageIterator)( (This)->lpVtbl -> GetMessages(This,lPrefetchSize,pFaxIncomingMessageIterator) )
#define IFaxAccountIncomingArchive_GetMessage(This,bstrMessageId,pFaxIncomingMessage)( (This)->lpVtbl -> GetMessage(This,bstrMessageId,pFaxIncomingMessage) )
#endif
#endif
#ifndef __IFaxAccountOutgoingArchive_INTERFACE_DEFINED__
#define __IFaxAccountOutgoingArchive_INTERFACE_DEFINED__
extern const IID IID_IFaxAccountOutgoingArchive;
typedef struct IFaxAccountOutgoingArchiveVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxAccountOutgoingArchive * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxAccountOutgoingArchive * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxAccountOutgoingArchive * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxAccountOutgoingArchive * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxAccountOutgoingArchive * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxAccountOutgoingArchive * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxAccountOutgoingArchive * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_SizeLow) (IFaxAccountOutgoingArchive * This, long *plSizeLow);
	HRESULT(STDMETHODCALLTYPE * get_SizeHigh) (IFaxAccountOutgoingArchive * This, long *plSizeHigh);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxAccountOutgoingArchive * This);
	HRESULT(STDMETHODCALLTYPE * GetMessages) (IFaxAccountOutgoingArchive * This, long lPrefetchSize, IFaxOutgoingMessageIterator ** pFaxOutgoingMessageIterator);
	HRESULT(STDMETHODCALLTYPE * GetMessage) (IFaxAccountOutgoingArchive * This, BSTR bstrMessageId, IFaxOutgoingMessage ** pFaxOutgoingMessage);
	END_INTERFACE
}  IFaxAccountOutgoingArchiveVtbl;
interface IFaxAccountOutgoingArchive
{
	CONST_VTBL struct IFaxAccountOutgoingArchiveVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxAccountOutgoingArchive_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxAccountOutgoingArchive_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxAccountOutgoingArchive_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxAccountOutgoingArchive_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxAccountOutgoingArchive_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxAccountOutgoingArchive_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxAccountOutgoingArchive_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxAccountOutgoingArchive_get_SizeLow(This,plSizeLow)( (This)->lpVtbl -> get_SizeLow(This,plSizeLow) )
#define IFaxAccountOutgoingArchive_get_SizeHigh(This,plSizeHigh)( (This)->lpVtbl -> get_SizeHigh(This,plSizeHigh) )
#define IFaxAccountOutgoingArchive_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxAccountOutgoingArchive_GetMessages(This,lPrefetchSize,pFaxOutgoingMessageIterator)( (This)->lpVtbl -> GetMessages(This,lPrefetchSize,pFaxOutgoingMessageIterator) )
#define IFaxAccountOutgoingArchive_GetMessage(This,bstrMessageId,pFaxOutgoingMessage)( (This)->lpVtbl -> GetMessage(This,bstrMessageId,pFaxOutgoingMessage) )
#endif
#endif
#ifndef __IFaxSecurity2_INTERFACE_DEFINED__
#define __IFaxSecurity2_INTERFACE_DEFINED__
typedef enum FAX_ACCESS_RIGHTS_ENUM_2
{
	far2SUBMIT_LOW = 0x1,
	far2SUBMIT_NORMAL = 0x2,
	far2SUBMIT_HIGH = 0x4,
	far2QUERY_OUT_JOBS = 0x8,
	far2MANAGE_OUT_JOBS = 0x10,
	far2QUERY_CONFIG = 0x20,
	far2MANAGE_CONFIG = 0x40,
	far2QUERY_ARCHIVES = 0x80,
	far2MANAGE_ARCHIVES = 0x100,
	far2MANAGE_RECEIVE_FOLDER = 0x200
} FAX_ACCESS_RIGHTS_ENUM_2;
extern const IID IID_IFaxSecurity2;
typedef struct IFaxSecurity2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxSecurity2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxSecurity2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxSecurity2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxSecurity2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxSecurity2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxSecurity2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxSecurity2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Descriptor) (IFaxSecurity2 * This, VARIANT * pvDescriptor);
	HRESULT(STDMETHODCALLTYPE * put_Descriptor) (IFaxSecurity2 * This, VARIANT vDescriptor);
	HRESULT(STDMETHODCALLTYPE * get_GrantedRights) (IFaxSecurity2 * This, FAX_ACCESS_RIGHTS_ENUM_2 * pGrantedRights);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxSecurity2 * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxSecurity2 * This);
	HRESULT(STDMETHODCALLTYPE * get_InformationType) (IFaxSecurity2 * This, long *plInformationType);
	HRESULT(STDMETHODCALLTYPE * put_InformationType) (IFaxSecurity2 * This, long lInformationType);
	END_INTERFACE
}  IFaxSecurity2Vtbl;
interface IFaxSecurity2
{
	CONST_VTBL struct IFaxSecurity2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxSecurity2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxSecurity2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxSecurity2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxSecurity2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxSecurity2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxSecurity2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxSecurity2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxSecurity2_get_Descriptor(This,pvDescriptor)( (This)->lpVtbl -> get_Descriptor(This,pvDescriptor) )
#define IFaxSecurity2_put_Descriptor(This,vDescriptor)( (This)->lpVtbl -> put_Descriptor(This,vDescriptor) )
#define IFaxSecurity2_get_GrantedRights(This,pGrantedRights)( (This)->lpVtbl -> get_GrantedRights(This,pGrantedRights) )
#define IFaxSecurity2_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#define IFaxSecurity2_Save(This)( (This)->lpVtbl -> Save(This) )
#define IFaxSecurity2_get_InformationType(This,plInformationType)( (This)->lpVtbl -> get_InformationType(This,plInformationType) )
#define IFaxSecurity2_put_InformationType(This,lInformationType)( (This)->lpVtbl -> put_InformationType(This,lInformationType) )
#endif
#endif
#ifndef __IFaxIncomingMessage2_INTERFACE_DEFINED__
#define __IFaxIncomingMessage2_INTERFACE_DEFINED__
extern const IID IID_IFaxIncomingMessage2;
typedef struct IFaxIncomingMessage2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxIncomingMessage2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxIncomingMessage2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxIncomingMessage2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxIncomingMessage2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxIncomingMessage2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxIncomingMessage2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxIncomingMessage2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFaxIncomingMessage2 * This, BSTR * pbstrId);
	HRESULT(STDMETHODCALLTYPE * get_Pages) (IFaxIncomingMessage2 * This, long *plPages);
	HRESULT(STDMETHODCALLTYPE * get_Size) (IFaxIncomingMessage2 * This, long *plSize);
	HRESULT(STDMETHODCALLTYPE * get_DeviceName) (IFaxIncomingMessage2 * This, BSTR * pbstrDeviceName);
	HRESULT(STDMETHODCALLTYPE * get_Retries) (IFaxIncomingMessage2 * This, long *plRetries);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionStart) (IFaxIncomingMessage2 * This, DATE * pdateTransmissionStart);
	HRESULT(STDMETHODCALLTYPE * get_TransmissionEnd) (IFaxIncomingMessage2 * This, DATE * pdateTransmissionEnd);
	HRESULT(STDMETHODCALLTYPE * get_CSID) (IFaxIncomingMessage2 * This, BSTR * pbstrCSID);
	HRESULT(STDMETHODCALLTYPE * get_TSID) (IFaxIncomingMessage2 * This, BSTR * pbstrTSID);
	HRESULT(STDMETHODCALLTYPE * get_CallerId) (IFaxIncomingMessage2 * This, BSTR * pbstrCallerId);
	HRESULT(STDMETHODCALLTYPE * get_RoutingInformation) (IFaxIncomingMessage2 * This, BSTR * pbstrRoutingInformation);
	HRESULT(STDMETHODCALLTYPE * CopyTiff) (IFaxIncomingMessage2 * This, BSTR bstrTiffPath);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFaxIncomingMessage2 * This);
	HRESULT(STDMETHODCALLTYPE * get_Subject) (IFaxIncomingMessage2 * This, BSTR * pbstrSubject);
	HRESULT(STDMETHODCALLTYPE * put_Subject) (IFaxIncomingMessage2 * This, BSTR bstrSubject);
	HRESULT(STDMETHODCALLTYPE * get_SenderName) (IFaxIncomingMessage2 * This, BSTR * pbstrSenderName);
	HRESULT(STDMETHODCALLTYPE * put_SenderName) (IFaxIncomingMessage2 * This, BSTR bstrSenderName);
	HRESULT(STDMETHODCALLTYPE * get_SenderFaxNumber) (IFaxIncomingMessage2 * This, BSTR * pbstrSenderFaxNumber);
	HRESULT(STDMETHODCALLTYPE * put_SenderFaxNumber) (IFaxIncomingMessage2 * This, BSTR bstrSenderFaxNumber);
	HRESULT(STDMETHODCALLTYPE * get_HasCoverPage) (IFaxIncomingMessage2 * This, VARIANT_BOOL * pbHasCoverPage);
	HRESULT(STDMETHODCALLTYPE * put_HasCoverPage) (IFaxIncomingMessage2 * This, VARIANT_BOOL bHasCoverPage);
	HRESULT(STDMETHODCALLTYPE * get_Recipients) (IFaxIncomingMessage2 * This, BSTR * pbstrRecipients);
	HRESULT(STDMETHODCALLTYPE * put_Recipients) (IFaxIncomingMessage2 * This, BSTR bstrRecipients);
	HRESULT(STDMETHODCALLTYPE * get_WasReAssigned) (IFaxIncomingMessage2 * This, VARIANT_BOOL * pbWasReAssigned);
	HRESULT(STDMETHODCALLTYPE * get_Read) (IFaxIncomingMessage2 * This, VARIANT_BOOL * pbRead);
	HRESULT(STDMETHODCALLTYPE * put_Read) (IFaxIncomingMessage2 * This, VARIANT_BOOL bRead);
	HRESULT(STDMETHODCALLTYPE * ReAssign) (IFaxIncomingMessage2 * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IFaxIncomingMessage2 * This);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IFaxIncomingMessage2 * This);
	END_INTERFACE
}  IFaxIncomingMessage2Vtbl;
interface IFaxIncomingMessage2
{
	CONST_VTBL struct IFaxIncomingMessage2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxIncomingMessage2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxIncomingMessage2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxIncomingMessage2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxIncomingMessage2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxIncomingMessage2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxIncomingMessage2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxIncomingMessage2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFaxIncomingMessage2_get_Id(This,pbstrId)( (This)->lpVtbl -> get_Id(This,pbstrId) )
#define IFaxIncomingMessage2_get_Pages(This,plPages)( (This)->lpVtbl -> get_Pages(This,plPages) )
#define IFaxIncomingMessage2_get_Size(This,plSize)( (This)->lpVtbl -> get_Size(This,plSize) )
#define IFaxIncomingMessage2_get_DeviceName(This,pbstrDeviceName)( (This)->lpVtbl -> get_DeviceName(This,pbstrDeviceName) )
#define IFaxIncomingMessage2_get_Retries(This,plRetries)( (This)->lpVtbl -> get_Retries(This,plRetries) )
#define IFaxIncomingMessage2_get_TransmissionStart(This,pdateTransmissionStart)( (This)->lpVtbl -> get_TransmissionStart(This,pdateTransmissionStart) )
#define IFaxIncomingMessage2_get_TransmissionEnd(This,pdateTransmissionEnd)( (This)->lpVtbl -> get_TransmissionEnd(This,pdateTransmissionEnd) )
#define IFaxIncomingMessage2_get_CSID(This,pbstrCSID)( (This)->lpVtbl -> get_CSID(This,pbstrCSID) )
#define IFaxIncomingMessage2_get_TSID(This,pbstrTSID)( (This)->lpVtbl -> get_TSID(This,pbstrTSID) )
#define IFaxIncomingMessage2_get_CallerId(This,pbstrCallerId)( (This)->lpVtbl -> get_CallerId(This,pbstrCallerId) )
#define IFaxIncomingMessage2_get_RoutingInformation(This,pbstrRoutingInformation)( (This)->lpVtbl -> get_RoutingInformation(This,pbstrRoutingInformation) )
#define IFaxIncomingMessage2_CopyTiff(This,bstrTiffPath)( (This)->lpVtbl -> CopyTiff(This,bstrTiffPath) )
#define IFaxIncomingMessage2_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFaxIncomingMessage2_get_Subject(This,pbstrSubject)( (This)->lpVtbl -> get_Subject(This,pbstrSubject) )
#define IFaxIncomingMessage2_put_Subject(This,bstrSubject)( (This)->lpVtbl -> put_Subject(This,bstrSubject) )
#define IFaxIncomingMessage2_get_SenderName(This,pbstrSenderName)( (This)->lpVtbl -> get_SenderName(This,pbstrSenderName) )
#define IFaxIncomingMessage2_put_SenderName(This,bstrSenderName)( (This)->lpVtbl -> put_SenderName(This,bstrSenderName) )
#define IFaxIncomingMessage2_get_SenderFaxNumber(This,pbstrSenderFaxNumber)( (This)->lpVtbl -> get_SenderFaxNumber(This,pbstrSenderFaxNumber) )
#define IFaxIncomingMessage2_put_SenderFaxNumber(This,bstrSenderFaxNumber)( (This)->lpVtbl -> put_SenderFaxNumber(This,bstrSenderFaxNumber) )
#define IFaxIncomingMessage2_get_HasCoverPage(This,pbHasCoverPage)( (This)->lpVtbl -> get_HasCoverPage(This,pbHasCoverPage) )
#define IFaxIncomingMessage2_put_HasCoverPage(This,bHasCoverPage)( (This)->lpVtbl -> put_HasCoverPage(This,bHasCoverPage) )
#define IFaxIncomingMessage2_get_Recipients(This,pbstrRecipients)( (This)->lpVtbl -> get_Recipients(This,pbstrRecipients) )
#define IFaxIncomingMessage2_put_Recipients(This,bstrRecipients)( (This)->lpVtbl -> put_Recipients(This,bstrRecipients) )
#define IFaxIncomingMessage2_get_WasReAssigned(This,pbWasReAssigned)( (This)->lpVtbl -> get_WasReAssigned(This,pbWasReAssigned) )
#define IFaxIncomingMessage2_get_Read(This,pbRead)( (This)->lpVtbl -> get_Read(This,pbRead) )
#define IFaxIncomingMessage2_put_Read(This,bRead)( (This)->lpVtbl -> put_Read(This,bRead) )
#define IFaxIncomingMessage2_ReAssign(This)( (This)->lpVtbl -> ReAssign(This) )
#define IFaxIncomingMessage2_Save(This)( (This)->lpVtbl -> Save(This) )
#define IFaxIncomingMessage2_Refresh(This)( (This)->lpVtbl -> Refresh(This) )
#endif
#endif
#ifndef __FAXCOMEXLib_LIBRARY_DEFINED__
#define __FAXCOMEXLib_LIBRARY_DEFINED__
typedef enum FAX_ROUTING_RULE_CODE_ENUM
{
	 frrcANY_CODE = 0
} FAX_ROUTING_RULE_CODE_ENUM;
extern const IID LIBID_FAXCOMEXLib;
#ifndef __IFaxServerNotify_DISPINTERFACE_DEFINED__
#define __IFaxServerNotify_DISPINTERFACE_DEFINED__
extern const IID DIID_IFaxServerNotify;
typedef struct IFaxServerNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxServerNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxServerNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxServerNotify * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxServerNotify * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxServerNotify * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxServerNotify * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxServerNotify * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  IFaxServerNotifyVtbl;
interface IFaxServerNotify
{
	CONST_VTBL struct IFaxServerNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxServerNotify_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxServerNotify_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxServerNotify_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxServerNotify_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxServerNotify_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxServerNotify_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxServerNotify_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef ___IFaxServerNotify2_INTERFACE_DEFINED__
#define ___IFaxServerNotify2_INTERFACE_DEFINED__
extern const IID IID__IFaxServerNotify2;
typedef struct _IFaxServerNotify2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_IFaxServerNotify2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_IFaxServerNotify2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (_IFaxServerNotify2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_IFaxServerNotify2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_IFaxServerNotify2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_IFaxServerNotify2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_IFaxServerNotify2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * OnIncomingJobAdded) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, BSTR bstrJobId);
	HRESULT(STDMETHODCALLTYPE * OnIncomingJobRemoved) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, BSTR bstrJobId);
	HRESULT(STDMETHODCALLTYPE * OnIncomingJobChanged) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, BSTR bstrJobId, IFaxJobStatus * pJobStatus);
	HRESULT(STDMETHODCALLTYPE * OnOutgoingJobAdded) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, BSTR bstrJobId);
	HRESULT(STDMETHODCALLTYPE * OnOutgoingJobRemoved) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, BSTR bstrJobId);
	HRESULT(STDMETHODCALLTYPE * OnOutgoingJobChanged) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, BSTR bstrJobId, IFaxJobStatus * pJobStatus);
	HRESULT(STDMETHODCALLTYPE * OnIncomingMessageAdded) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, BSTR bstrMessageId);
	HRESULT(STDMETHODCALLTYPE * OnIncomingMessageRemoved) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, BSTR bstrMessageId);
	HRESULT(STDMETHODCALLTYPE * OnOutgoingMessageAdded) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, BSTR bstrMessageId);
	HRESULT(STDMETHODCALLTYPE * OnOutgoingMessageRemoved) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, BSTR bstrMessageId);
	HRESULT(STDMETHODCALLTYPE * OnReceiptOptionsChange) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer);
	HRESULT(STDMETHODCALLTYPE * OnActivityLoggingConfigChange) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer);
	HRESULT(STDMETHODCALLTYPE * OnSecurityConfigChange) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer);
	HRESULT(STDMETHODCALLTYPE * OnEventLoggingConfigChange) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer);
	HRESULT(STDMETHODCALLTYPE * OnOutgoingQueueConfigChange) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer);
	HRESULT(STDMETHODCALLTYPE * OnOutgoingArchiveConfigChange) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer);
	HRESULT(STDMETHODCALLTYPE * OnIncomingArchiveConfigChange) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer);
	HRESULT(STDMETHODCALLTYPE * OnDevicesConfigChange) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer);
	HRESULT(STDMETHODCALLTYPE * OnOutboundRoutingGroupsConfigChange) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer);
	HRESULT(STDMETHODCALLTYPE * OnOutboundRoutingRulesConfigChange) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer);
	HRESULT(STDMETHODCALLTYPE * OnServerActivityChange) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, long lIncomingMessages, long lRoutingMessages, long lOutgoingMessages, long lQueuedMessages);
	HRESULT(STDMETHODCALLTYPE * OnQueuesStatusChange) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, VARIANT_BOOL bOutgoingQueueBlocked, VARIANT_BOOL bOutgoingQueuePaused, VARIANT_BOOL bIncomingQueueBlocked);
	HRESULT(STDMETHODCALLTYPE * OnNewCall) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, long lCallId, long lDeviceId, BSTR bstrCallerId);
	HRESULT(STDMETHODCALLTYPE * OnServerShutDown) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer);
	HRESULT(STDMETHODCALLTYPE * OnDeviceStatusChange) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer, long lDeviceId, VARIANT_BOOL bPoweredOff, VARIANT_BOOL bSending, VARIANT_BOOL bReceiving, VARIANT_BOOL bRinging);
	HRESULT(STDMETHODCALLTYPE * OnGeneralServerConfigChanged) (_IFaxServerNotify2 * This, IFaxServer2 * pFaxServer);
	END_INTERFACE
}  _IFaxServerNotify2Vtbl;
interface _IFaxServerNotify2
{
	CONST_VTBL struct _IFaxServerNotify2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IFaxServerNotify2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _IFaxServerNotify2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _IFaxServerNotify2_Release(This)( (This)->lpVtbl -> Release(This) )
#define _IFaxServerNotify2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _IFaxServerNotify2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _IFaxServerNotify2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _IFaxServerNotify2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define _IFaxServerNotify2_OnIncomingJobAdded(This,pFaxServer,bstrJobId)( (This)->lpVtbl -> OnIncomingJobAdded(This,pFaxServer,bstrJobId) )
#define _IFaxServerNotify2_OnIncomingJobRemoved(This,pFaxServer,bstrJobId)( (This)->lpVtbl -> OnIncomingJobRemoved(This,pFaxServer,bstrJobId) )
#define _IFaxServerNotify2_OnIncomingJobChanged(This,pFaxServer,bstrJobId,pJobStatus)( (This)->lpVtbl -> OnIncomingJobChanged(This,pFaxServer,bstrJobId,pJobStatus) )
#define _IFaxServerNotify2_OnOutgoingJobAdded(This,pFaxServer,bstrJobId)( (This)->lpVtbl -> OnOutgoingJobAdded(This,pFaxServer,bstrJobId) )
#define _IFaxServerNotify2_OnOutgoingJobRemoved(This,pFaxServer,bstrJobId)( (This)->lpVtbl -> OnOutgoingJobRemoved(This,pFaxServer,bstrJobId) )
#define _IFaxServerNotify2_OnOutgoingJobChanged(This,pFaxServer,bstrJobId,pJobStatus)( (This)->lpVtbl -> OnOutgoingJobChanged(This,pFaxServer,bstrJobId,pJobStatus) )
#define _IFaxServerNotify2_OnIncomingMessageAdded(This,pFaxServer,bstrMessageId)( (This)->lpVtbl -> OnIncomingMessageAdded(This,pFaxServer,bstrMessageId) )
#define _IFaxServerNotify2_OnIncomingMessageRemoved(This,pFaxServer,bstrMessageId)( (This)->lpVtbl -> OnIncomingMessageRemoved(This,pFaxServer,bstrMessageId) )
#define _IFaxServerNotify2_OnOutgoingMessageAdded(This,pFaxServer,bstrMessageId)( (This)->lpVtbl -> OnOutgoingMessageAdded(This,pFaxServer,bstrMessageId) )
#define _IFaxServerNotify2_OnOutgoingMessageRemoved(This,pFaxServer,bstrMessageId)( (This)->lpVtbl -> OnOutgoingMessageRemoved(This,pFaxServer,bstrMessageId) )
#define _IFaxServerNotify2_OnReceiptOptionsChange(This,pFaxServer)( (This)->lpVtbl -> OnReceiptOptionsChange(This,pFaxServer) )
#define _IFaxServerNotify2_OnActivityLoggingConfigChange(This,pFaxServer)( (This)->lpVtbl -> OnActivityLoggingConfigChange(This,pFaxServer) )
#define _IFaxServerNotify2_OnSecurityConfigChange(This,pFaxServer)( (This)->lpVtbl -> OnSecurityConfigChange(This,pFaxServer) )
#define _IFaxServerNotify2_OnEventLoggingConfigChange(This,pFaxServer)( (This)->lpVtbl -> OnEventLoggingConfigChange(This,pFaxServer) )
#define _IFaxServerNotify2_OnOutgoingQueueConfigChange(This,pFaxServer)( (This)->lpVtbl -> OnOutgoingQueueConfigChange(This,pFaxServer) )
#define _IFaxServerNotify2_OnOutgoingArchiveConfigChange(This,pFaxServer)( (This)->lpVtbl -> OnOutgoingArchiveConfigChange(This,pFaxServer) )
#define _IFaxServerNotify2_OnIncomingArchiveConfigChange(This,pFaxServer)( (This)->lpVtbl -> OnIncomingArchiveConfigChange(This,pFaxServer) )
#define _IFaxServerNotify2_OnDevicesConfigChange(This,pFaxServer)( (This)->lpVtbl -> OnDevicesConfigChange(This,pFaxServer) )
#define _IFaxServerNotify2_OnOutboundRoutingGroupsConfigChange(This,pFaxServer)( (This)->lpVtbl -> OnOutboundRoutingGroupsConfigChange(This,pFaxServer) )
#define _IFaxServerNotify2_OnOutboundRoutingRulesConfigChange(This,pFaxServer)( (This)->lpVtbl -> OnOutboundRoutingRulesConfigChange(This,pFaxServer) )
#define _IFaxServerNotify2_OnServerActivityChange(This,pFaxServer,lIncomingMessages,lRoutingMessages,lOutgoingMessages,lQueuedMessages)( (This)->lpVtbl -> OnServerActivityChange(This,pFaxServer,lIncomingMessages,lRoutingMessages,lOutgoingMessages,lQueuedMessages) )
#define _IFaxServerNotify2_OnQueuesStatusChange(This,pFaxServer,bOutgoingQueueBlocked,bOutgoingQueuePaused,bIncomingQueueBlocked)( (This)->lpVtbl -> OnQueuesStatusChange(This,pFaxServer,bOutgoingQueueBlocked,bOutgoingQueuePaused,bIncomingQueueBlocked) )
#define _IFaxServerNotify2_OnNewCall(This,pFaxServer,lCallId,lDeviceId,bstrCallerId)( (This)->lpVtbl -> OnNewCall(This,pFaxServer,lCallId,lDeviceId,bstrCallerId) )
#define _IFaxServerNotify2_OnServerShutDown(This,pFaxServer)( (This)->lpVtbl -> OnServerShutDown(This,pFaxServer) )
#define _IFaxServerNotify2_OnDeviceStatusChange(This,pFaxServer,lDeviceId,bPoweredOff,bSending,bReceiving,bRinging)( (This)->lpVtbl -> OnDeviceStatusChange(This,pFaxServer,lDeviceId,bPoweredOff,bSending,bReceiving,bRinging) )
#define _IFaxServerNotify2_OnGeneralServerConfigChanged(This,pFaxServer)( (This)->lpVtbl -> OnGeneralServerConfigChanged(This,pFaxServer) )
#endif
#endif
#ifndef __IFaxServerNotify2_DISPINTERFACE_DEFINED__
#define __IFaxServerNotify2_DISPINTERFACE_DEFINED__
extern const IID DIID_IFaxServerNotify2;
typedef struct IFaxServerNotify2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxServerNotify2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxServerNotify2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxServerNotify2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxServerNotify2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxServerNotify2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxServerNotify2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxServerNotify2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  IFaxServerNotify2Vtbl;
interface IFaxServerNotify2
{
	CONST_VTBL struct IFaxServerNotify2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxServerNotify2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxServerNotify2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxServerNotify2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxServerNotify2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxServerNotify2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxServerNotify2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxServerNotify2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef ___IFaxAccountNotify_INTERFACE_DEFINED__
#define ___IFaxAccountNotify_INTERFACE_DEFINED__
extern const IID IID__IFaxAccountNotify;
typedef struct _IFaxAccountNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_IFaxAccountNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_IFaxAccountNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (_IFaxAccountNotify * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_IFaxAccountNotify * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_IFaxAccountNotify * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_IFaxAccountNotify * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_IFaxAccountNotify * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * OnIncomingJobAdded) (_IFaxAccountNotify * This, IFaxAccount * pFaxAccount, BSTR bstrJobId);
	HRESULT(STDMETHODCALLTYPE * OnIncomingJobRemoved) (_IFaxAccountNotify * This, IFaxAccount * pFaxAccount, BSTR bstrJobId);
	HRESULT(STDMETHODCALLTYPE * OnIncomingJobChanged) (_IFaxAccountNotify * This, IFaxAccount * pFaxAccount, BSTR bstrJobId, IFaxJobStatus * pJobStatus);
	HRESULT(STDMETHODCALLTYPE * OnOutgoingJobAdded) (_IFaxAccountNotify * This, IFaxAccount * pFaxAccount, BSTR bstrJobId);
	HRESULT(STDMETHODCALLTYPE * OnOutgoingJobRemoved) (_IFaxAccountNotify * This, IFaxAccount * pFaxAccount, BSTR bstrJobId);
	HRESULT(STDMETHODCALLTYPE * OnOutgoingJobChanged) (_IFaxAccountNotify * This, IFaxAccount * pFaxAccount, BSTR bstrJobId, IFaxJobStatus * pJobStatus);
	HRESULT(STDMETHODCALLTYPE * OnIncomingMessageAdded) (_IFaxAccountNotify * This, IFaxAccount * pFaxAccount, BSTR bstrMessageId, VARIANT_BOOL fAddedToReceiveFolder);
	HRESULT(STDMETHODCALLTYPE * OnIncomingMessageRemoved) (_IFaxAccountNotify * This, IFaxAccount * pFaxAccount, BSTR bstrMessageId, VARIANT_BOOL fRemovedFromReceiveFolder);
	HRESULT(STDMETHODCALLTYPE * OnOutgoingMessageAdded) (_IFaxAccountNotify * This, IFaxAccount * pFaxAccount, BSTR bstrMessageId);
	HRESULT(STDMETHODCALLTYPE * OnOutgoingMessageRemoved) (_IFaxAccountNotify * This, IFaxAccount * pFaxAccount, BSTR bstrMessageId);
	HRESULT(STDMETHODCALLTYPE * OnServerShutDown) (_IFaxAccountNotify * This, IFaxServer2 * pFaxServer);
	END_INTERFACE
}  _IFaxAccountNotifyVtbl;
interface _IFaxAccountNotify
{
	CONST_VTBL struct _IFaxAccountNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IFaxAccountNotify_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _IFaxAccountNotify_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define _IFaxAccountNotify_Release(This)( (This)->lpVtbl -> Release(This) )
#define _IFaxAccountNotify_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _IFaxAccountNotify_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _IFaxAccountNotify_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _IFaxAccountNotify_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define _IFaxAccountNotify_OnIncomingJobAdded(This,pFaxAccount,bstrJobId)( (This)->lpVtbl -> OnIncomingJobAdded(This,pFaxAccount,bstrJobId) )
#define _IFaxAccountNotify_OnIncomingJobRemoved(This,pFaxAccount,bstrJobId)( (This)->lpVtbl -> OnIncomingJobRemoved(This,pFaxAccount,bstrJobId) )
#define _IFaxAccountNotify_OnIncomingJobChanged(This,pFaxAccount,bstrJobId,pJobStatus)( (This)->lpVtbl -> OnIncomingJobChanged(This,pFaxAccount,bstrJobId,pJobStatus) )
#define _IFaxAccountNotify_OnOutgoingJobAdded(This,pFaxAccount,bstrJobId)( (This)->lpVtbl -> OnOutgoingJobAdded(This,pFaxAccount,bstrJobId) )
#define _IFaxAccountNotify_OnOutgoingJobRemoved(This,pFaxAccount,bstrJobId)( (This)->lpVtbl -> OnOutgoingJobRemoved(This,pFaxAccount,bstrJobId) )
#define _IFaxAccountNotify_OnOutgoingJobChanged(This,pFaxAccount,bstrJobId,pJobStatus)( (This)->lpVtbl -> OnOutgoingJobChanged(This,pFaxAccount,bstrJobId,pJobStatus) )
#define _IFaxAccountNotify_OnIncomingMessageAdded(This,pFaxAccount,bstrMessageId,fAddedToReceiveFolder)( (This)->lpVtbl -> OnIncomingMessageAdded(This,pFaxAccount,bstrMessageId,fAddedToReceiveFolder) )
#define _IFaxAccountNotify_OnIncomingMessageRemoved(This,pFaxAccount,bstrMessageId,fRemovedFromReceiveFolder)( (This)->lpVtbl -> OnIncomingMessageRemoved(This,pFaxAccount,bstrMessageId,fRemovedFromReceiveFolder) )
#define _IFaxAccountNotify_OnOutgoingMessageAdded(This,pFaxAccount,bstrMessageId)( (This)->lpVtbl -> OnOutgoingMessageAdded(This,pFaxAccount,bstrMessageId) )
#define _IFaxAccountNotify_OnOutgoingMessageRemoved(This,pFaxAccount,bstrMessageId)( (This)->lpVtbl -> OnOutgoingMessageRemoved(This,pFaxAccount,bstrMessageId) )
#define _IFaxAccountNotify_OnServerShutDown(This,pFaxServer)( (This)->lpVtbl -> OnServerShutDown(This,pFaxServer) )
#endif
#endif
#ifndef __IFaxAccountNotify_DISPINTERFACE_DEFINED__
#define __IFaxAccountNotify_DISPINTERFACE_DEFINED__
extern const IID DIID_IFaxAccountNotify;
typedef struct IFaxAccountNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFaxAccountNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFaxAccountNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFaxAccountNotify * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFaxAccountNotify * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFaxAccountNotify * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFaxAccountNotify * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFaxAccountNotify * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  IFaxAccountNotifyVtbl;
interface IFaxAccountNotify
{
	CONST_VTBL struct IFaxAccountNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFaxAccountNotify_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFaxAccountNotify_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFaxAccountNotify_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFaxAccountNotify_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFaxAccountNotify_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFaxAccountNotify_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFaxAccountNotify_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_FaxServer;
extern const CLSID CLSID_FaxDeviceProviders;
extern const CLSID CLSID_FaxDevices;
extern const CLSID CLSID_FaxInboundRouting;
extern const CLSID CLSID_FaxFolders;
extern const CLSID CLSID_FaxLoggingOptions;
extern const CLSID CLSID_FaxActivity;
extern const CLSID CLSID_FaxOutboundRouting;
extern const CLSID CLSID_FaxReceiptOptions;
extern const CLSID CLSID_FaxSecurity;
extern const CLSID CLSID_FaxDocument;
extern const CLSID CLSID_FaxSender;
extern const CLSID CLSID_FaxRecipients;
extern const CLSID CLSID_FaxIncomingArchive;
extern const CLSID CLSID_FaxIncomingQueue;
extern const CLSID CLSID_FaxOutgoingArchive;
extern const CLSID CLSID_FaxOutgoingQueue;
extern const CLSID CLSID_FaxIncomingMessageIterator;
extern const CLSID CLSID_FaxIncomingMessage;
extern const CLSID CLSID_FaxOutgoingJobs;
extern const CLSID CLSID_FaxOutgoingJob;
extern const CLSID CLSID_FaxOutgoingMessageIterator;
extern const CLSID CLSID_FaxOutgoingMessage;
extern const CLSID CLSID_FaxIncomingJobs;
extern const CLSID CLSID_FaxIncomingJob;
extern const CLSID CLSID_FaxDeviceProvider;
extern const CLSID CLSID_FaxDevice;
extern const CLSID CLSID_FaxActivityLogging;
extern const CLSID CLSID_FaxEventLogging;
extern const CLSID CLSID_FaxOutboundRoutingGroups;
extern const CLSID CLSID_FaxOutboundRoutingGroup;
extern const CLSID CLSID_FaxDeviceIds;
extern const CLSID CLSID_FaxOutboundRoutingRules;
extern const CLSID CLSID_FaxOutboundRoutingRule;
extern const CLSID CLSID_FaxInboundRoutingExtensions;
extern const CLSID CLSID_FaxInboundRoutingExtension;
extern const CLSID CLSID_FaxInboundRoutingMethods;
extern const CLSID CLSID_FaxInboundRoutingMethod;
extern const CLSID CLSID_FaxJobStatus;
extern const CLSID CLSID_FaxRecipient;
extern const CLSID CLSID_FaxConfiguration;
extern const CLSID CLSID_FaxAccountSet;
extern const CLSID CLSID_FaxAccounts;
extern const CLSID CLSID_FaxAccount;
extern const CLSID CLSID_FaxAccountFolders;
extern const CLSID CLSID_FaxAccountIncomingQueue;
extern const CLSID CLSID_FaxAccountOutgoingQueue;
extern const CLSID CLSID_FaxAccountIncomingArchive;
extern const CLSID CLSID_FaxAccountOutgoingArchive;
extern const CLSID CLSID_FaxSecurity2;
#ifndef __FaxConstants_MODULE_DEFINED__
#define __FaxConstants_MODULE_DEFINED__ const long lDEFAULT_PREFETCH_SIZE	=	prv_DEFAULT_PREFETCH_SIZE; const BSTR bstrGROUPNAME_ALLDEVICES	=	L"<All Devices>"; const wchar_t wcharREASSIGN_RECIPIENTS_DELIMITER	=	L';';
#endif
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
