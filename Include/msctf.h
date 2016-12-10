/*+@@file@@----------------------------------------------------------------*//*!
 \file		msctf.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 18:23:00 2016
 \date		Modified on Mon Jul  4 18:23:00 2016
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
#ifndef __msctf_h__
#define __msctf_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITfThreadMgr_FWD_DEFINED__
#define __ITfThreadMgr_FWD_DEFINED__
typedef interface ITfThreadMgr ITfThreadMgr;
#endif
#ifndef __ITfThreadMgrEx_FWD_DEFINED__
#define __ITfThreadMgrEx_FWD_DEFINED__
typedef interface ITfThreadMgrEx ITfThreadMgrEx;
#endif
#ifndef __ITfThreadMgrEventSink_FWD_DEFINED__
#define __ITfThreadMgrEventSink_FWD_DEFINED__
typedef interface ITfThreadMgrEventSink ITfThreadMgrEventSink;
#endif
#ifndef __ITfConfigureSystemKeystrokeFeed_FWD_DEFINED__
#define __ITfConfigureSystemKeystrokeFeed_FWD_DEFINED__
typedef interface ITfConfigureSystemKeystrokeFeed ITfConfigureSystemKeystrokeFeed;
#endif
#ifndef __IEnumTfDocumentMgrs_FWD_DEFINED__
#define __IEnumTfDocumentMgrs_FWD_DEFINED__
typedef interface IEnumTfDocumentMgrs IEnumTfDocumentMgrs;
#endif
#ifndef __ITfDocumentMgr_FWD_DEFINED__
#define __ITfDocumentMgr_FWD_DEFINED__
typedef interface ITfDocumentMgr ITfDocumentMgr;
#endif
#ifndef __IEnumTfContexts_FWD_DEFINED__
#define __IEnumTfContexts_FWD_DEFINED__
typedef interface IEnumTfContexts IEnumTfContexts;
#endif
#ifndef __ITfCompositionView_FWD_DEFINED__
#define __ITfCompositionView_FWD_DEFINED__
typedef interface ITfCompositionView ITfCompositionView;
#endif
#ifndef __IEnumITfCompositionView_FWD_DEFINED__
#define __IEnumITfCompositionView_FWD_DEFINED__
typedef interface IEnumITfCompositionView IEnumITfCompositionView;
#endif
#ifndef __ITfComposition_FWD_DEFINED__
#define __ITfComposition_FWD_DEFINED__
typedef interface ITfComposition ITfComposition;
#endif
#ifndef __ITfCompositionSink_FWD_DEFINED__
#define __ITfCompositionSink_FWD_DEFINED__
typedef interface ITfCompositionSink ITfCompositionSink;
#endif
#ifndef __ITfContextComposition_FWD_DEFINED__
#define __ITfContextComposition_FWD_DEFINED__
typedef interface ITfContextComposition ITfContextComposition;
#endif
#ifndef __ITfContextOwnerCompositionServices_FWD_DEFINED__
#define __ITfContextOwnerCompositionServices_FWD_DEFINED__
typedef interface ITfContextOwnerCompositionServices ITfContextOwnerCompositionServices;
#endif
#ifndef __ITfContextOwnerCompositionSink_FWD_DEFINED__
#define __ITfContextOwnerCompositionSink_FWD_DEFINED__
typedef interface ITfContextOwnerCompositionSink ITfContextOwnerCompositionSink;
#endif
#ifndef __ITfContextView_FWD_DEFINED__
#define __ITfContextView_FWD_DEFINED__
typedef interface ITfContextView ITfContextView;
#endif
#ifndef __IEnumTfContextViews_FWD_DEFINED__
#define __IEnumTfContextViews_FWD_DEFINED__
typedef interface IEnumTfContextViews IEnumTfContextViews;
#endif
#ifndef __ITfContext_FWD_DEFINED__
#define __ITfContext_FWD_DEFINED__
typedef interface ITfContext ITfContext;
#endif
#ifndef __ITfQueryEmbedded_FWD_DEFINED__
#define __ITfQueryEmbedded_FWD_DEFINED__
typedef interface ITfQueryEmbedded ITfQueryEmbedded;
#endif
#ifndef __ITfInsertAtSelection_FWD_DEFINED__
#define __ITfInsertAtSelection_FWD_DEFINED__
typedef interface ITfInsertAtSelection ITfInsertAtSelection;
#endif
#ifndef __ITfCleanupContextSink_FWD_DEFINED__
#define __ITfCleanupContextSink_FWD_DEFINED__
typedef interface ITfCleanupContextSink ITfCleanupContextSink;
#endif
#ifndef __ITfCleanupContextDurationSink_FWD_DEFINED__
#define __ITfCleanupContextDurationSink_FWD_DEFINED__
typedef interface ITfCleanupContextDurationSink ITfCleanupContextDurationSink;
#endif
#ifndef __ITfReadOnlyProperty_FWD_DEFINED__
#define __ITfReadOnlyProperty_FWD_DEFINED__
typedef interface ITfReadOnlyProperty ITfReadOnlyProperty;
#endif
#ifndef __IEnumTfPropertyValue_FWD_DEFINED__
#define __IEnumTfPropertyValue_FWD_DEFINED__
typedef interface IEnumTfPropertyValue IEnumTfPropertyValue;
#endif
#ifndef __ITfMouseTracker_FWD_DEFINED__
#define __ITfMouseTracker_FWD_DEFINED__
typedef interface ITfMouseTracker ITfMouseTracker;
#endif
#ifndef __ITfMouseTrackerACP_FWD_DEFINED__
#define __ITfMouseTrackerACP_FWD_DEFINED__
typedef interface ITfMouseTrackerACP ITfMouseTrackerACP;
#endif
#ifndef __ITfMouseSink_FWD_DEFINED__
#define __ITfMouseSink_FWD_DEFINED__
typedef interface ITfMouseSink ITfMouseSink;
#endif
#ifndef __ITfEditRecord_FWD_DEFINED__
#define __ITfEditRecord_FWD_DEFINED__
typedef interface ITfEditRecord ITfEditRecord;
#endif
#ifndef __ITfTextEditSink_FWD_DEFINED__
#define __ITfTextEditSink_FWD_DEFINED__
typedef interface ITfTextEditSink ITfTextEditSink;
#endif
#ifndef __ITfTextLayoutSink_FWD_DEFINED__
#define __ITfTextLayoutSink_FWD_DEFINED__
typedef interface ITfTextLayoutSink ITfTextLayoutSink;
#endif
#ifndef __ITfStatusSink_FWD_DEFINED__
#define __ITfStatusSink_FWD_DEFINED__
typedef interface ITfStatusSink ITfStatusSink;
#endif
#ifndef __ITfEditTransactionSink_FWD_DEFINED__
#define __ITfEditTransactionSink_FWD_DEFINED__
typedef interface ITfEditTransactionSink ITfEditTransactionSink;
#endif
#ifndef __ITfContextOwner_FWD_DEFINED__
#define __ITfContextOwner_FWD_DEFINED__
typedef interface ITfContextOwner ITfContextOwner;
#endif
#ifndef __ITfContextOwnerServices_FWD_DEFINED__
#define __ITfContextOwnerServices_FWD_DEFINED__
typedef interface ITfContextOwnerServices ITfContextOwnerServices;
#endif
#ifndef __ITfContextKeyEventSink_FWD_DEFINED__
#define __ITfContextKeyEventSink_FWD_DEFINED__
typedef interface ITfContextKeyEventSink ITfContextKeyEventSink;
#endif
#ifndef __ITfEditSession_FWD_DEFINED__
#define __ITfEditSession_FWD_DEFINED__
typedef interface ITfEditSession ITfEditSession;
#endif
#ifndef __ITfRange_FWD_DEFINED__
#define __ITfRange_FWD_DEFINED__
typedef interface ITfRange ITfRange;
#endif
#ifndef __ITfRangeACP_FWD_DEFINED__
#define __ITfRangeACP_FWD_DEFINED__
typedef interface ITfRangeACP ITfRangeACP;
#endif
#ifndef __ITextStoreACPServices_FWD_DEFINED__
#define __ITextStoreACPServices_FWD_DEFINED__
typedef interface ITextStoreACPServices ITextStoreACPServices;
#endif
#ifndef __ITfRangeBackup_FWD_DEFINED__
#define __ITfRangeBackup_FWD_DEFINED__
typedef interface ITfRangeBackup ITfRangeBackup;
#endif
#ifndef __ITfPropertyStore_FWD_DEFINED__
#define __ITfPropertyStore_FWD_DEFINED__
typedef interface ITfPropertyStore ITfPropertyStore;
#endif
#ifndef __IEnumTfRanges_FWD_DEFINED__
#define __IEnumTfRanges_FWD_DEFINED__
typedef interface IEnumTfRanges IEnumTfRanges;
#endif
#ifndef __ITfCreatePropertyStore_FWD_DEFINED__
#define __ITfCreatePropertyStore_FWD_DEFINED__
typedef interface ITfCreatePropertyStore ITfCreatePropertyStore;
#endif
#ifndef __ITfPersistentPropertyLoaderACP_FWD_DEFINED__
#define __ITfPersistentPropertyLoaderACP_FWD_DEFINED__
typedef interface ITfPersistentPropertyLoaderACP ITfPersistentPropertyLoaderACP;
#endif
#ifndef __ITfProperty_FWD_DEFINED__
#define __ITfProperty_FWD_DEFINED__
typedef interface ITfProperty ITfProperty;
#endif
#ifndef __IEnumTfProperties_FWD_DEFINED__
#define __IEnumTfProperties_FWD_DEFINED__
typedef interface IEnumTfProperties IEnumTfProperties;
#endif
#ifndef __ITfCompartment_FWD_DEFINED__
#define __ITfCompartment_FWD_DEFINED__
typedef interface ITfCompartment ITfCompartment;
#endif
#ifndef __ITfCompartmentEventSink_FWD_DEFINED__
#define __ITfCompartmentEventSink_FWD_DEFINED__
typedef interface ITfCompartmentEventSink ITfCompartmentEventSink;
#endif
#ifndef __ITfCompartmentMgr_FWD_DEFINED__
#define __ITfCompartmentMgr_FWD_DEFINED__
typedef interface ITfCompartmentMgr ITfCompartmentMgr;
#endif
#ifndef __ITfFunction_FWD_DEFINED__
#define __ITfFunction_FWD_DEFINED__
typedef interface ITfFunction ITfFunction;
#endif
#ifndef __ITfFunctionProvider_FWD_DEFINED__
#define __ITfFunctionProvider_FWD_DEFINED__
typedef interface ITfFunctionProvider ITfFunctionProvider;
#endif
#ifndef __IEnumTfFunctionProviders_FWD_DEFINED__
#define __IEnumTfFunctionProviders_FWD_DEFINED__
typedef interface IEnumTfFunctionProviders IEnumTfFunctionProviders;
#endif
#ifndef __ITfInputProcessorProfiles_FWD_DEFINED__
#define __ITfInputProcessorProfiles_FWD_DEFINED__
typedef interface ITfInputProcessorProfiles ITfInputProcessorProfiles;
#endif
#ifndef __ITfInputProcessorProfilesEx_FWD_DEFINED__
#define __ITfInputProcessorProfilesEx_FWD_DEFINED__
typedef interface ITfInputProcessorProfilesEx ITfInputProcessorProfilesEx;
#endif
#ifndef __ITfInputProcessorProfileSubstituteLayout_FWD_DEFINED__
#define __ITfInputProcessorProfileSubstituteLayout_FWD_DEFINED__
typedef interface ITfInputProcessorProfileSubstituteLayout ITfInputProcessorProfileSubstituteLayout;
#endif
#ifndef __ITfActiveLanguageProfileNotifySink_FWD_DEFINED__
#define __ITfActiveLanguageProfileNotifySink_FWD_DEFINED__
typedef interface ITfActiveLanguageProfileNotifySink ITfActiveLanguageProfileNotifySink;
#endif
#ifndef __IEnumTfLanguageProfiles_FWD_DEFINED__
#define __IEnumTfLanguageProfiles_FWD_DEFINED__
typedef interface IEnumTfLanguageProfiles IEnumTfLanguageProfiles;
#endif
#ifndef __ITfLanguageProfileNotifySink_FWD_DEFINED__
#define __ITfLanguageProfileNotifySink_FWD_DEFINED__
typedef interface ITfLanguageProfileNotifySink ITfLanguageProfileNotifySink;
#endif
#ifndef __ITfInputProcessorProfileMgr_FWD_DEFINED__
#define __ITfInputProcessorProfileMgr_FWD_DEFINED__
typedef interface ITfInputProcessorProfileMgr ITfInputProcessorProfileMgr;
#endif
#ifndef __IEnumTfInputProcessorProfiles_FWD_DEFINED__
#define __IEnumTfInputProcessorProfiles_FWD_DEFINED__
typedef interface IEnumTfInputProcessorProfiles IEnumTfInputProcessorProfiles;
#endif
#ifndef __ITfInputProcessorProfileActivationSink_FWD_DEFINED__
#define __ITfInputProcessorProfileActivationSink_FWD_DEFINED__
typedef interface ITfInputProcessorProfileActivationSink ITfInputProcessorProfileActivationSink;
#endif
#ifndef __ITfKeystrokeMgr_FWD_DEFINED__
#define __ITfKeystrokeMgr_FWD_DEFINED__
typedef interface ITfKeystrokeMgr ITfKeystrokeMgr;
#endif
#ifndef __ITfKeyEventSink_FWD_DEFINED__
#define __ITfKeyEventSink_FWD_DEFINED__
typedef interface ITfKeyEventSink ITfKeyEventSink;
#endif
#ifndef __ITfKeyTraceEventSink_FWD_DEFINED__
#define __ITfKeyTraceEventSink_FWD_DEFINED__
typedef interface ITfKeyTraceEventSink ITfKeyTraceEventSink;
#endif
#ifndef __ITfPreservedKeyNotifySink_FWD_DEFINED__
#define __ITfPreservedKeyNotifySink_FWD_DEFINED__
typedef interface ITfPreservedKeyNotifySink ITfPreservedKeyNotifySink;
#endif
#ifndef __ITfMessagePump_FWD_DEFINED__
#define __ITfMessagePump_FWD_DEFINED__
typedef interface ITfMessagePump ITfMessagePump;
#endif
#ifndef __ITfThreadFocusSink_FWD_DEFINED__
#define __ITfThreadFocusSink_FWD_DEFINED__
typedef interface ITfThreadFocusSink ITfThreadFocusSink;
#endif
#ifndef __ITfTextInputProcessor_FWD_DEFINED__
#define __ITfTextInputProcessor_FWD_DEFINED__
typedef interface ITfTextInputProcessor ITfTextInputProcessor;
#endif
#ifndef __ITfTextInputProcessorEx_FWD_DEFINED__
#define __ITfTextInputProcessorEx_FWD_DEFINED__
typedef interface ITfTextInputProcessorEx ITfTextInputProcessorEx;
#endif
#ifndef __ITfClientId_FWD_DEFINED__
#define __ITfClientId_FWD_DEFINED__
typedef interface ITfClientId ITfClientId;
#endif
#ifndef __ITfDisplayAttributeInfo_FWD_DEFINED__
#define __ITfDisplayAttributeInfo_FWD_DEFINED__
typedef interface ITfDisplayAttributeInfo ITfDisplayAttributeInfo;
#endif
#ifndef __IEnumTfDisplayAttributeInfo_FWD_DEFINED__
#define __IEnumTfDisplayAttributeInfo_FWD_DEFINED__
typedef interface IEnumTfDisplayAttributeInfo IEnumTfDisplayAttributeInfo;
#endif
#ifndef __ITfDisplayAttributeProvider_FWD_DEFINED__
#define __ITfDisplayAttributeProvider_FWD_DEFINED__
typedef interface ITfDisplayAttributeProvider ITfDisplayAttributeProvider;
#endif
#ifndef __ITfDisplayAttributeMgr_FWD_DEFINED__
#define __ITfDisplayAttributeMgr_FWD_DEFINED__
typedef interface ITfDisplayAttributeMgr ITfDisplayAttributeMgr;
#endif
#ifndef __ITfDisplayAttributeNotifySink_FWD_DEFINED__
#define __ITfDisplayAttributeNotifySink_FWD_DEFINED__
typedef interface ITfDisplayAttributeNotifySink ITfDisplayAttributeNotifySink;
#endif
#ifndef __ITfCategoryMgr_FWD_DEFINED__
#define __ITfCategoryMgr_FWD_DEFINED__
typedef interface ITfCategoryMgr ITfCategoryMgr;
#endif
#ifndef __ITfSource_FWD_DEFINED__
#define __ITfSource_FWD_DEFINED__
typedef interface ITfSource ITfSource;
#endif
#ifndef __ITfSourceSingle_FWD_DEFINED__
#define __ITfSourceSingle_FWD_DEFINED__
typedef interface ITfSourceSingle ITfSourceSingle;
#endif
#ifndef __ITfUIElementMgr_FWD_DEFINED__
#define __ITfUIElementMgr_FWD_DEFINED__
typedef interface ITfUIElementMgr ITfUIElementMgr;
#endif
#ifndef __IEnumTfUIElements_FWD_DEFINED__
#define __IEnumTfUIElements_FWD_DEFINED__
typedef interface IEnumTfUIElements IEnumTfUIElements;
#endif
#ifndef __ITfUIElementSink_FWD_DEFINED__
#define __ITfUIElementSink_FWD_DEFINED__
typedef interface ITfUIElementSink ITfUIElementSink;
#endif
#ifndef __ITfUIElement_FWD_DEFINED__
#define __ITfUIElement_FWD_DEFINED__
typedef interface ITfUIElement ITfUIElement;
#endif
#ifndef __ITfCandidateListUIElement_FWD_DEFINED__
#define __ITfCandidateListUIElement_FWD_DEFINED__
typedef interface ITfCandidateListUIElement ITfCandidateListUIElement;
#endif
#ifndef __ITfCandidateListUIElementBehavior_FWD_DEFINED__
#define __ITfCandidateListUIElementBehavior_FWD_DEFINED__
typedef interface ITfCandidateListUIElementBehavior ITfCandidateListUIElementBehavior;
#endif
#ifndef __ITfReadingInformationUIElement_FWD_DEFINED__
#define __ITfReadingInformationUIElement_FWD_DEFINED__
typedef interface ITfReadingInformationUIElement ITfReadingInformationUIElement;
#endif
#ifndef __ITfTransitoryExtensionUIElement_FWD_DEFINED__
#define __ITfTransitoryExtensionUIElement_FWD_DEFINED__
typedef interface ITfTransitoryExtensionUIElement ITfTransitoryExtensionUIElement;
#endif
#ifndef __ITfTransitoryExtensionSink_FWD_DEFINED__
#define __ITfTransitoryExtensionSink_FWD_DEFINED__
typedef interface ITfTransitoryExtensionSink ITfTransitoryExtensionSink;
#endif
#ifndef __ITfToolTipUIElement_FWD_DEFINED__
#define __ITfToolTipUIElement_FWD_DEFINED__
typedef interface ITfToolTipUIElement ITfToolTipUIElement;
#endif
#ifndef __ITfReverseConversionList_FWD_DEFINED__
#define __ITfReverseConversionList_FWD_DEFINED__
typedef interface ITfReverseConversionList ITfReverseConversionList;
#endif
#ifndef __ITfReverseConversion_FWD_DEFINED__
#define __ITfReverseConversion_FWD_DEFINED__
typedef interface ITfReverseConversion ITfReverseConversion;
#endif
#ifndef __ITfReverseConversionMgr_FWD_DEFINED__
#define __ITfReverseConversionMgr_FWD_DEFINED__
typedef interface ITfReverseConversionMgr ITfReverseConversionMgr;
#endif
#include <oaidl.h>
#include <comcat.h>
#include <textstor.h>
#include <ctfutb.h>
#ifndef MSCTF_DEFINED
#define MSCTF_DEFINED
#include <windows.h>
#define TF_E_LOCKED          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0500)
#define TF_E_STACKFULL       MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0501)
#define TF_E_NOTOWNEDRANGE   MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0502)
#define TF_E_NOPROVIDER      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0503)
#define TF_E_DISCONNECTED    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0504)
#define TF_E_INVALIDVIEW     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0505)
#define TF_E_ALREADY_EXISTS  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0506)
#define TF_E_RANGE_NOT_COVERED MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0507)
#define TF_E_COMPOSITION_REJECTED MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0508)
#define TF_E_EMPTYCONTEXT    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0509)
#define TF_E_INVALIDPOS      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0200)
#define TF_E_NOLOCK          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0201)
#define TF_E_NOOBJECT        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0202)
#define TF_E_NOSERVICE       MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0203)
#define TF_E_NOINTERFACE     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0204)
#define TF_E_NOSELECTION     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0205)
#define TF_E_NOLAYOUT        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0206)
#define TF_E_INVALIDPOINT    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0207)
#define TF_E_SYNCHRONOUS     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0208)
#define TF_E_READONLY        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0209)
#define TF_E_FORMAT          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x020a)
#define TF_S_ASYNC           MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x0300)
#define TF_RCM_COMLESS                          0x00000001
#define TF_RCM_VKEY                             0x00000002
#define TF_RCM_HINT_READING_LENGTH              0x00000004
#define TF_RCM_HINT_COLLISION                   0x00000008
HRESULT WINAPI TF_CreateThreadMgr(ITfThreadMgr **pptim);
HRESULT WINAPI TF_GetThreadMgr(ITfThreadMgr **pptim);
HRESULT WINAPI TF_CreateInputProcessorProfiles(ITfInputProcessorProfiles **ppipr);
HRESULT WINAPI TF_CreateDisplayAttributeMgr(ITfDisplayAttributeMgr **ppdam);
HRESULT WINAPI TF_CreateLangBarMgr(ITfLangBarMgr **pppbm);
HRESULT WINAPI TF_CreateLangBarItemMgr(ITfLangBarItemMgr **pplbim);
HRESULT WINAPI TF_CreateCategoryMgr(ITfCategoryMgr **ppcat);
extern const GUID GUID_PROP_TEXTOWNER;
extern const GUID GUID_PROP_ATTRIBUTE;
extern const GUID GUID_PROP_LANGID;
extern const GUID GUID_PROP_READING;
extern const GUID GUID_PROP_COMPOSING;
extern const CLSID CLSID_TF_ThreadMgr;
extern const CLSID CLSID_TF_InputProcessorProfiles;
extern const CLSID CLSID_TF_LangBarMgr;
extern const CLSID CLSID_TF_DisplayAttributeMgr;
extern const CLSID CLSID_TF_CategoryMgr;
extern const CLSID CLSID_TF_LangBarItemMgr;
extern const GUID GUID_SYSTEM_FUNCTIONPROVIDER;
extern const GUID GUID_APP_FUNCTIONPROVIDER;
extern const GUID GUID_COMPARTMENT_KEYBOARD_DISABLED;
extern const GUID GUID_COMPARTMENT_KEYBOARD_OPENCLOSE;
extern const GUID GUID_COMPARTMENT_HANDWRITING_OPENCLOSE;
extern const GUID GUID_COMPARTMENT_SPEECH_DISABLED;
extern const GUID GUID_COMPARTMENT_SPEECH_OPENCLOSE;
extern const GUID GUID_COMPARTMENT_SPEECH_GLOBALSTATE;
extern const GUID GUID_COMPARTMENT_PERSISTMENUENABLED;
extern const GUID GUID_COMPARTMENT_EMPTYCONTEXT;
extern const GUID GUID_COMPARTMENT_TIPUISTATUS;
extern const GUID GUID_COMPARTMENT_KEYBOARD_INPUTMODE_CONVERSION;
extern const GUID GUID_COMPARTMENT_KEYBOARD_INPUTMODE_SENTENCE;
extern const GUID GUID_COMPARTMENT_TRANSITORYEXTENSION;
extern const GUID GUID_COMPARTMENT_TRANSITORYEXTENSION_DOCUMENTMANAGER;
extern const GUID GUID_COMPARTMENT_TRANSITORYEXTENSION_PARENT;
extern const GUID GUID_PROP_MODEBIAS;
extern const GUID GUID_MODEBIAS_NONE;
extern const GUID GUID_MODEBIAS_URLHISTORY;
extern const GUID GUID_MODEBIAS_FILENAME;
extern const GUID GUID_MODEBIAS_READING;
extern const GUID GUID_MODEBIAS_DATETIME;
extern const GUID GUID_MODEBIAS_NAME;
extern const GUID GUID_MODEBIAS_CONVERSATION;
extern const GUID GUID_MODEBIAS_NUMERIC;
extern const GUID GUID_MODEBIAS_HIRAGANA;
extern const GUID GUID_MODEBIAS_KATAKANA;
extern const GUID GUID_MODEBIAS_HANGUL;
extern const GUID GUID_MODEBIAS_CHINESE;
extern const GUID GUID_MODEBIAS_HALFWIDTHKATAKANA;
extern const GUID GUID_MODEBIAS_FULLWIDTHALPHANUMERIC;
extern const GUID GUID_MODEBIAS_HALFWIDTHALPHANUMERIC;
extern const GUID GUID_MODEBIAS_FULLWIDTHHANGUL;
extern const GUID GUID_TFCAT_CATEGORY_OF_TIP;
extern const GUID GUID_TFCAT_TIP_KEYBOARD;
extern const GUID GUID_TFCAT_TIP_SPEECH;
extern const GUID GUID_TFCAT_TIP_HANDWRITING;
extern const GUID GUID_TFCAT_TIPCAP_SECUREMODE;
extern const GUID GUID_TFCAT_TIPCAP_UIELEMENTENABLED;
extern const GUID GUID_TFCAT_TIPCAP_INPUTMODECOMPARTMENT;
extern const GUID GUID_TFCAT_TIPCAP_COMLESS;
extern const GUID GUID_TFCAT_TIPCAP_WOW16;
extern const GUID GUID_TFCAT_PROP_AUDIODATA;
extern const GUID GUID_TFCAT_PROP_INKDATA;
extern const GUID GUID_TFCAT_PROPSTYLE_CUSTOM;
extern const GUID GUID_TFCAT_PROPSTYLE_STATIC;
extern const GUID GUID_TFCAT_PROPSTYLE_STATICCOMPACT;
extern const GUID GUID_TFCAT_DISPLAYATTRIBUTEPROVIDER;
extern const GUID GUID_TFCAT_DISPLAYATTRIBUTEPROPERTY;
#define TF_INVALID_GUIDATOM ((TfGuidAtom)0)
#define TF_CLIENTID_NULL    ((TfClientId)0)
#define TF_TMAE_NOACTIVATETIP              0x00000001
#define TF_TMAE_SECUREMODE                 0x00000002
#define TF_TMAE_UIELEMENTENABLEDONLY       0x00000004
#define TF_TMAE_COMLESS                    0x00000008
#define TF_TMAE_WOW16                      0x00000010
#define TF_TMAE_NOACTIVATEKEYBOARDLAYOUT   0x00000020
#define TF_TMAE_CONSOLE                    0x00000040
#define TF_TMF_NOACTIVATETIP          TF_TMAE_NOACTIVATETIP
#define TF_TMF_SECUREMODE             TF_TMAE_SECUREMODE
#define TF_TMF_UIELEMENTENABLEDONLY   TF_TMAE_UIELEMENTENABLEDONLY
#define TF_TMF_COMLESS                TF_TMAE_COMLESS
#define TF_TMF_WOW16                  TF_TMAE_WOW16
#define TF_TMF_CONSOLE                TF_TMAE_CONSOLE
#define TF_TMF_ACTIVATED              0x80000000
#define TF_MOD_ALT                         0x0001
#define TF_MOD_CONTROL                     0x0002
#define TF_MOD_SHIFT                       0x0004
#define TF_MOD_RALT                        0x0008
#define TF_MOD_RCONTROL                    0x0010
#define TF_MOD_RSHIFT                      0x0020
#define TF_MOD_LALT                        0x0040
#define TF_MOD_LCONTROL                    0x0080
#define TF_MOD_LSHIFT                      0x0100
#define TF_MOD_ON_KEYUP                    0x0200
#define TF_MOD_IGNORE_ALL_MODIFIER         0x0400
#define TF_US_HIDETIPUI         0x00000001
#define TF_DISABLE_SPEECH         0x00000001
#define TF_DISABLE_DICTATION      0x00000002
#define TF_DISABLE_COMMANDING     0x00000004
#define TF_PROCESS_ATOM             TEXT("_CTF_PROCESS_ATOM_")
#define TF_ENABLE_PROCESS_ATOM      TEXT("_CTF_ENABLE_PROCESS_ATOM_")
#define TF_INVALID_UIELEMENTID    DWORD(-1)
#define TF_CLUIE_DOCUMENTMGR      0x00000001
#define TF_CLUIE_COUNT            0x00000002
#define TF_CLUIE_SELECTION        0x00000004
#define TF_CLUIE_STRING           0x00000008
#define TF_CLUIE_PAGEINDEX        0x00000010
#define TF_CLUIE_CURRENTPAGE      0x00000020
#define TF_RIUIE_CONTEXT                 0x00000001
#define TF_RIUIE_STRING                  0x00000002
#define TF_RIUIE_MAXREADINGSTRINGLENGTH  0x00000004
#define TF_RIUIE_ERRORINDEX              0x00000008
#define TF_RIUIE_VERTICALORDER           0x00000010
#define TF_CONVERSIONMODE_ALPHANUMERIC        0x0000
#define TF_CONVERSIONMODE_NATIVE              0x0001
#define TF_CONVERSIONMODE_KATAKANA            0x0002
#define TF_CONVERSIONMODE_FULLSHAPE           0x0008
#define TF_CONVERSIONMODE_ROMAN               0x0010
#define TF_CONVERSIONMODE_CHARCODE            0x0020
#define TF_CONVERSIONMODE_SOFTKEYBOARD        0x0080
#define TF_CONVERSIONMODE_NOCONVERSION        0x0100
#define TF_CONVERSIONMODE_EUDC                0x0200
#define TF_CONVERSIONMODE_SYMBOL              0x0400
#define TF_CONVERSIONMODE_FIXED               0x0800
#define TF_SENTENCEMODE_NONE                  0x0000
#define TF_SENTENCEMODE_PLAURALCLAUSE         0x0001
#define TF_SENTENCEMODE_SINGLECONVERT         0x0002
#define TF_SENTENCEMODE_AUTOMATIC             0x0004
#define TF_SENTENCEMODE_PHRASEPREDICT         0x0008
#define TF_SENTENCEMODE_CONVERSATION          0x0010
#define TF_TRANSITORYEXTENSION_NONE           0x0000
#define TF_TRANSITORYEXTENSION_FLOATING       0x0001
#define TF_TRANSITORYEXTENSION_ATSELECTION    0x0002
#define TF_PROFILETYPE_INPUTPROCESSOR         0x0001
#define TF_PROFILETYPE_KEYBOARDLAYOUT         0x0002
#define TF_RIP_FLAG_FREEUNUSEDLIBRARIES         0x00000001
#define TF_IPP_FLAG_ACTIVE                      0x00000001
#define TF_IPP_FLAG_ENABLED                     0x00000002
#define TF_IPP_FLAG_SUBSTITUTEDBYINPUTPROCESSOR 0x00000004
#define TF_IPP_CAPS_DISABLEONTRANSITORY         0x00000001
#define TF_IPP_CAPS_SECUREMODESUPPORT           0x00000002
#define TF_IPP_CAPS_UIELEMENTENABLED            0x00000004
#define TF_IPP_CAPS_COMLESSSUPPORT              0x00000008
#define TF_IPP_CAPS_WOW16SUPPORT                0x00000010
#define TF_IPPMF_FORPROCESS                     0x10000000
#define TF_IPPMF_FORSESSION                     0x20000000
#define TF_IPPMF_FORSYSTEMALL                   0x40000000
#define TF_IPPMF_ENABLEPROFILE                  0x00000001
#define TF_IPPMF_DISABLEPROFILE                 0x00000002
#define TF_IPPMF_DONTCARECURRENTINPUTLANGUAGE   0x00000004
#define TF_RP_HIDDENINSETTINGUI                 0x00000002
#define TF_RP_LOCALPROCESS                      0x00000004
#define TF_RP_LOCALTHREAD                       0x00000008
#define TF_RP_SUBITEMINSETTINGUI                0x00000010
#define TF_URP_ALLPROFILES                      0x00000002
#define TF_URP_LOCALPROCESS                     0x00000004
#define TF_URP_LOCALTHREAD                      0x00000008
#define TF_IPSINK_FLAG_ACTIVE                   0x0001
#if 0
typedef DECLSPEC_UUID("4f5d560f-5ab5-4dde-8c4d-404592857ab0")
	UINT_PTR HKL;
#endif
	typedef DECLSPEC_UUID("7213778c-7bb0-4270-b050-6189ee594e97")
	DWORD TfEditCookie;
#define	TF_INVALID_EDIT_COOKIE	( 0 )
	typedef DECLSPEC_UUID("88a9c478-f3ec-4763-8345-cd9250443f8d")
	DWORD TfGuidAtom;
	typedef DECLSPEC_UUID("de403c21-89fd-4f85-8b87-64584d063fbc")
	DWORD TfClientId;
	typedef DECLSPEC_UUID("e26d9e1d-691e-4f29-90d7-338dcf1f8cef")
struct TF_PERSISTENT_PROPERTY_HEADER_ACP
{
	GUID guidType;
	LONG ichStart;
	LONG cch;
	ULONG cb;
	DWORD dwPrivate;
	CLSID clsidTIP;
} TF_PERSISTENT_PROPERTY_HEADER_ACP;
typedef DECLSPEC_UUID("e1b5808d-1e46-4c19-84dc-68c5f5978cc8")
struct TF_LANGUAGEPROFILE
{
	CLSID clsid;
	LANGID langid;
	GUID catid;
	BOOL fActive;
	GUID guidProfile;
} TF_LANGUAGEPROFILE;
typedef DECLSPEC_UUID("5a886226-ae9a-489b-b991-2b1e25ee59a9")
enum __MIDL___MIDL_itf_msctf_0000_0000_0001
{
	TF_ANCHOR_START = 0,
	TF_ANCHOR_END = 1
} TfAnchor;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0000_v0_0_s_ifspec;
#ifndef __ITfThreadMgr_INTERFACE_DEFINED__
#define __ITfThreadMgr_INTERFACE_DEFINED__
extern const IID IID_ITfThreadMgr;
typedef struct ITfThreadMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfThreadMgr *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfThreadMgr *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfThreadMgr *This);
	HRESULT(STDMETHODCALLTYPE *Activate) (ITfThreadMgr *This, TfClientId *ptid);
	HRESULT(STDMETHODCALLTYPE *Deactivate) (ITfThreadMgr *This);
	HRESULT(STDMETHODCALLTYPE *CreateDocumentMgr) (ITfThreadMgr *This, ITfDocumentMgr **ppdim);
	HRESULT(STDMETHODCALLTYPE *EnumDocumentMgrs) (ITfThreadMgr *This, IEnumTfDocumentMgrs **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetFocus) (ITfThreadMgr *This, ITfDocumentMgr **ppdimFocus);
	HRESULT(STDMETHODCALLTYPE *SetFocus) (ITfThreadMgr *This, ITfDocumentMgr *pdimFocus);
	HRESULT(STDMETHODCALLTYPE *AssociateFocus) (ITfThreadMgr *This, HWND hwnd, ITfDocumentMgr *pdimNew, ITfDocumentMgr **ppdimPrev);
	HRESULT(STDMETHODCALLTYPE *IsThreadFocus) (ITfThreadMgr *This, BOOL *pfThreadFocus);
	HRESULT(STDMETHODCALLTYPE *GetFunctionProvider) (ITfThreadMgr *This, REFCLSID clsid, ITfFunctionProvider **ppFuncProv);
	HRESULT(STDMETHODCALLTYPE *EnumFunctionProviders) (ITfThreadMgr *This, IEnumTfFunctionProviders **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetGlobalCompartment) (ITfThreadMgr *This, ITfCompartmentMgr **ppCompMgr);
	END_INTERFACE
}  ITfThreadMgrVtbl;
interface ITfThreadMgr
{
	CONST_VTBL struct ITfThreadMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfThreadMgr_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfThreadMgr_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfThreadMgr_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfThreadMgr_Activate(This,ptid)( (This)->lpVtbl -> Activate(This,ptid) )
#define ITfThreadMgr_Deactivate(This)( (This)->lpVtbl -> Deactivate(This) )
#define ITfThreadMgr_CreateDocumentMgr(This,ppdim)( (This)->lpVtbl -> CreateDocumentMgr(This,ppdim) )
#define ITfThreadMgr_EnumDocumentMgrs(This,ppEnum)( (This)->lpVtbl -> EnumDocumentMgrs(This,ppEnum) )
#define ITfThreadMgr_GetFocus(This,ppdimFocus)( (This)->lpVtbl -> GetFocus(This,ppdimFocus) )
#define ITfThreadMgr_SetFocus(This,pdimFocus)( (This)->lpVtbl -> SetFocus(This,pdimFocus) )
#define ITfThreadMgr_AssociateFocus(This,hwnd,pdimNew,ppdimPrev)( (This)->lpVtbl -> AssociateFocus(This,hwnd,pdimNew,ppdimPrev) )
#define ITfThreadMgr_IsThreadFocus(This,pfThreadFocus)( (This)->lpVtbl -> IsThreadFocus(This,pfThreadFocus) )
#define ITfThreadMgr_GetFunctionProvider(This,clsid,ppFuncProv)( (This)->lpVtbl -> GetFunctionProvider(This,clsid,ppFuncProv) )
#define ITfThreadMgr_EnumFunctionProviders(This,ppEnum)( (This)->lpVtbl -> EnumFunctionProviders(This,ppEnum) )
#define ITfThreadMgr_GetGlobalCompartment(This,ppCompMgr)( (This)->lpVtbl -> GetGlobalCompartment(This,ppCompMgr) )
#endif
#endif
#ifndef __ITfThreadMgrEx_INTERFACE_DEFINED__
#define __ITfThreadMgrEx_INTERFACE_DEFINED__
extern const IID IID_ITfThreadMgrEx;
typedef struct ITfThreadMgrExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfThreadMgrEx *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfThreadMgrEx *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfThreadMgrEx *This);
	HRESULT(STDMETHODCALLTYPE *Activate) (ITfThreadMgrEx *This, TfClientId *ptid);
	HRESULT(STDMETHODCALLTYPE *Deactivate) (ITfThreadMgrEx *This);
	HRESULT(STDMETHODCALLTYPE *CreateDocumentMgr) (ITfThreadMgrEx *This, ITfDocumentMgr **ppdim);
	HRESULT(STDMETHODCALLTYPE *EnumDocumentMgrs) (ITfThreadMgrEx *This, IEnumTfDocumentMgrs **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetFocus) (ITfThreadMgrEx *This, ITfDocumentMgr **ppdimFocus);
	HRESULT(STDMETHODCALLTYPE *SetFocus) (ITfThreadMgrEx *This, ITfDocumentMgr *pdimFocus);
	HRESULT(STDMETHODCALLTYPE *AssociateFocus) (ITfThreadMgrEx *This, HWND hwnd, ITfDocumentMgr *pdimNew, ITfDocumentMgr **ppdimPrev);
	HRESULT(STDMETHODCALLTYPE *IsThreadFocus) (ITfThreadMgrEx *This, BOOL *pfThreadFocus);
	HRESULT(STDMETHODCALLTYPE *GetFunctionProvider) (ITfThreadMgrEx *This, REFCLSID clsid, ITfFunctionProvider **ppFuncProv);
	HRESULT(STDMETHODCALLTYPE *EnumFunctionProviders) (ITfThreadMgrEx *This, IEnumTfFunctionProviders **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetGlobalCompartment) (ITfThreadMgrEx *This, ITfCompartmentMgr **ppCompMgr);
	HRESULT(STDMETHODCALLTYPE *ActivateEx) (ITfThreadMgrEx *This, TfClientId *ptid, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *GetActiveFlags) (ITfThreadMgrEx *This, DWORD *lpdwFlags);
	END_INTERFACE
}  ITfThreadMgrExVtbl;
interface ITfThreadMgrEx
{
	CONST_VTBL struct ITfThreadMgrExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfThreadMgrEx_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfThreadMgrEx_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfThreadMgrEx_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfThreadMgrEx_Activate(This,ptid)( (This)->lpVtbl -> Activate(This,ptid) )
#define ITfThreadMgrEx_Deactivate(This)( (This)->lpVtbl -> Deactivate(This) )
#define ITfThreadMgrEx_CreateDocumentMgr(This,ppdim)( (This)->lpVtbl -> CreateDocumentMgr(This,ppdim) )
#define ITfThreadMgrEx_EnumDocumentMgrs(This,ppEnum)( (This)->lpVtbl -> EnumDocumentMgrs(This,ppEnum) )
#define ITfThreadMgrEx_GetFocus(This,ppdimFocus)( (This)->lpVtbl -> GetFocus(This,ppdimFocus) )
#define ITfThreadMgrEx_SetFocus(This,pdimFocus)( (This)->lpVtbl -> SetFocus(This,pdimFocus) )
#define ITfThreadMgrEx_AssociateFocus(This,hwnd,pdimNew,ppdimPrev)( (This)->lpVtbl -> AssociateFocus(This,hwnd,pdimNew,ppdimPrev) )
#define ITfThreadMgrEx_IsThreadFocus(This,pfThreadFocus)( (This)->lpVtbl -> IsThreadFocus(This,pfThreadFocus) )
#define ITfThreadMgrEx_GetFunctionProvider(This,clsid,ppFuncProv)( (This)->lpVtbl -> GetFunctionProvider(This,clsid,ppFuncProv) )
#define ITfThreadMgrEx_EnumFunctionProviders(This,ppEnum)( (This)->lpVtbl -> EnumFunctionProviders(This,ppEnum) )
#define ITfThreadMgrEx_GetGlobalCompartment(This,ppCompMgr)( (This)->lpVtbl -> GetGlobalCompartment(This,ppCompMgr) )
#define ITfThreadMgrEx_ActivateEx(This,ptid,dwFlags)( (This)->lpVtbl -> ActivateEx(This,ptid,dwFlags) )
#define ITfThreadMgrEx_GetActiveFlags(This,lpdwFlags)( (This)->lpVtbl -> GetActiveFlags(This,lpdwFlags) )
#endif
#endif
#ifndef __ITfThreadMgrEventSink_INTERFACE_DEFINED__
#define __ITfThreadMgrEventSink_INTERFACE_DEFINED__
extern const IID IID_ITfThreadMgrEventSink;
typedef struct ITfThreadMgrEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfThreadMgrEventSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfThreadMgrEventSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfThreadMgrEventSink *This);
	HRESULT(STDMETHODCALLTYPE *OnInitDocumentMgr) (ITfThreadMgrEventSink *This, ITfDocumentMgr *pdim);
	HRESULT(STDMETHODCALLTYPE *OnUninitDocumentMgr) (ITfThreadMgrEventSink *This, ITfDocumentMgr *pdim);
	HRESULT(STDMETHODCALLTYPE *OnSetFocus) (ITfThreadMgrEventSink *This, ITfDocumentMgr *pdimFocus, ITfDocumentMgr *pdimPrevFocus);
	HRESULT(STDMETHODCALLTYPE *OnPushContext) (ITfThreadMgrEventSink *This, ITfContext *pic);
	HRESULT(STDMETHODCALLTYPE *OnPopContext) (ITfThreadMgrEventSink *This, ITfContext *pic);
	END_INTERFACE
}  ITfThreadMgrEventSinkVtbl;
interface ITfThreadMgrEventSink
{
	CONST_VTBL struct ITfThreadMgrEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfThreadMgrEventSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfThreadMgrEventSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfThreadMgrEventSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfThreadMgrEventSink_OnInitDocumentMgr(This,pdim)( (This)->lpVtbl -> OnInitDocumentMgr(This,pdim) )
#define ITfThreadMgrEventSink_OnUninitDocumentMgr(This,pdim)( (This)->lpVtbl -> OnUninitDocumentMgr(This,pdim) )
#define ITfThreadMgrEventSink_OnSetFocus(This,pdimFocus,pdimPrevFocus)( (This)->lpVtbl -> OnSetFocus(This,pdimFocus,pdimPrevFocus) )
#define ITfThreadMgrEventSink_OnPushContext(This,pic)( (This)->lpVtbl -> OnPushContext(This,pic) )
#define ITfThreadMgrEventSink_OnPopContext(This,pic)( (This)->lpVtbl -> OnPopContext(This,pic) )
#endif
#endif
#ifndef __ITfConfigureSystemKeystrokeFeed_INTERFACE_DEFINED__
#define __ITfConfigureSystemKeystrokeFeed_INTERFACE_DEFINED__
extern const IID IID_ITfConfigureSystemKeystrokeFeed;
typedef struct ITfConfigureSystemKeystrokeFeedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfConfigureSystemKeystrokeFeed *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfConfigureSystemKeystrokeFeed *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfConfigureSystemKeystrokeFeed *This);
	HRESULT(STDMETHODCALLTYPE *DisableSystemKeystrokeFeed) (ITfConfigureSystemKeystrokeFeed *This);
	HRESULT(STDMETHODCALLTYPE *EnableSystemKeystrokeFeed) (ITfConfigureSystemKeystrokeFeed *This);
	END_INTERFACE
}  ITfConfigureSystemKeystrokeFeedVtbl;
interface ITfConfigureSystemKeystrokeFeed
{
	CONST_VTBL struct ITfConfigureSystemKeystrokeFeedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfConfigureSystemKeystrokeFeed_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfConfigureSystemKeystrokeFeed_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfConfigureSystemKeystrokeFeed_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfConfigureSystemKeystrokeFeed_DisableSystemKeystrokeFeed(This)( (This)->lpVtbl -> DisableSystemKeystrokeFeed(This) )
#define ITfConfigureSystemKeystrokeFeed_EnableSystemKeystrokeFeed(This)( (This)->lpVtbl -> EnableSystemKeystrokeFeed(This) )
#endif
#endif
#ifndef __IEnumTfDocumentMgrs_INTERFACE_DEFINED__
#define __IEnumTfDocumentMgrs_INTERFACE_DEFINED__
extern const IID IID_IEnumTfDocumentMgrs;
typedef struct IEnumTfDocumentMgrsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumTfDocumentMgrs *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumTfDocumentMgrs *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumTfDocumentMgrs *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumTfDocumentMgrs *This, IEnumTfDocumentMgrs **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumTfDocumentMgrs *This, ULONG ulCount, ITfDocumentMgr **rgDocumentMgr, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumTfDocumentMgrs *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumTfDocumentMgrs *This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfDocumentMgrsVtbl;
interface IEnumTfDocumentMgrs
{
	CONST_VTBL struct IEnumTfDocumentMgrsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfDocumentMgrs_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfDocumentMgrs_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfDocumentMgrs_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfDocumentMgrs_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfDocumentMgrs_Next(This,ulCount,rgDocumentMgr,pcFetched)( (This)->lpVtbl -> Next(This,ulCount,rgDocumentMgr,pcFetched) )
#define IEnumTfDocumentMgrs_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfDocumentMgrs_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfDocumentMgr_INTERFACE_DEFINED__
#define __ITfDocumentMgr_INTERFACE_DEFINED__
#define	TF_POPF_ALL	( 0x1 )
extern const IID IID_ITfDocumentMgr;
typedef struct ITfDocumentMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfDocumentMgr *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfDocumentMgr *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfDocumentMgr *This);
	HRESULT(STDMETHODCALLTYPE *CreateContext) (ITfDocumentMgr *This, TfClientId tidOwner, DWORD dwFlags, IUnknown *punk, ITfContext **ppic, TfEditCookie *pecTextStore);
	HRESULT(STDMETHODCALLTYPE *Push) (ITfDocumentMgr *This, ITfContext *pic);
	HRESULT(STDMETHODCALLTYPE *Pop) (ITfDocumentMgr *This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *GetTop) (ITfDocumentMgr *This, ITfContext **ppic);
	HRESULT(STDMETHODCALLTYPE *GetBase) (ITfDocumentMgr *This, ITfContext **ppic);
	HRESULT(STDMETHODCALLTYPE *EnumContexts) (ITfDocumentMgr *This, IEnumTfContexts **ppEnum);
	END_INTERFACE
}  ITfDocumentMgrVtbl;
interface ITfDocumentMgr
{
	CONST_VTBL struct ITfDocumentMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfDocumentMgr_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfDocumentMgr_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfDocumentMgr_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfDocumentMgr_CreateContext(This,tidOwner,dwFlags,punk,ppic,pecTextStore)( (This)->lpVtbl -> CreateContext(This,tidOwner,dwFlags,punk,ppic,pecTextStore) )
#define ITfDocumentMgr_Push(This,pic)( (This)->lpVtbl -> Push(This,pic) )
#define ITfDocumentMgr_Pop(This,dwFlags)( (This)->lpVtbl -> Pop(This,dwFlags) )
#define ITfDocumentMgr_GetTop(This,ppic)( (This)->lpVtbl -> GetTop(This,ppic) )
#define ITfDocumentMgr_GetBase(This,ppic)( (This)->lpVtbl -> GetBase(This,ppic) )
#define ITfDocumentMgr_EnumContexts(This,ppEnum)( (This)->lpVtbl -> EnumContexts(This,ppEnum) )
#endif
#endif
#ifndef __IEnumTfContexts_INTERFACE_DEFINED__
#define __IEnumTfContexts_INTERFACE_DEFINED__
extern const IID IID_IEnumTfContexts;
typedef struct IEnumTfContextsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumTfContexts *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumTfContexts *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumTfContexts *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumTfContexts *This, IEnumTfContexts **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumTfContexts *This, ULONG ulCount, ITfContext **rgContext, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumTfContexts *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumTfContexts *This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfContextsVtbl;
interface IEnumTfContexts
{
	CONST_VTBL struct IEnumTfContextsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfContexts_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfContexts_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfContexts_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfContexts_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfContexts_Next(This,ulCount,rgContext,pcFetched)( (This)->lpVtbl -> Next(This,ulCount,rgContext,pcFetched) )
#define IEnumTfContexts_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfContexts_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfCompositionView_INTERFACE_DEFINED__
#define __ITfCompositionView_INTERFACE_DEFINED__
extern const IID IID_ITfCompositionView;
typedef struct ITfCompositionViewVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfCompositionView *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfCompositionView *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfCompositionView *This);
	HRESULT(STDMETHODCALLTYPE *GetOwnerClsid) (ITfCompositionView *This, CLSID *pclsid);
	HRESULT(STDMETHODCALLTYPE *GetRange) (ITfCompositionView *This, ITfRange **ppRange);
	END_INTERFACE
}  ITfCompositionViewVtbl;
interface ITfCompositionView
{
	CONST_VTBL struct ITfCompositionViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfCompositionView_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfCompositionView_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfCompositionView_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfCompositionView_GetOwnerClsid(This,pclsid)( (This)->lpVtbl -> GetOwnerClsid(This,pclsid) )
#define ITfCompositionView_GetRange(This,ppRange)( (This)->lpVtbl -> GetRange(This,ppRange) )
#endif
#endif
#ifndef __IEnumITfCompositionView_INTERFACE_DEFINED__
#define __IEnumITfCompositionView_INTERFACE_DEFINED__
extern const IID IID_IEnumITfCompositionView;
typedef struct IEnumITfCompositionViewVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumITfCompositionView *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumITfCompositionView *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumITfCompositionView *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumITfCompositionView *This, IEnumITfCompositionView **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumITfCompositionView *This, ULONG ulCount, ITfCompositionView **rgCompositionView, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumITfCompositionView *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumITfCompositionView *This, ULONG ulCount);
	END_INTERFACE
}  IEnumITfCompositionViewVtbl;
interface IEnumITfCompositionView
{
	CONST_VTBL struct IEnumITfCompositionViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumITfCompositionView_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumITfCompositionView_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumITfCompositionView_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumITfCompositionView_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumITfCompositionView_Next(This,ulCount,rgCompositionView,pcFetched)( (This)->lpVtbl -> Next(This,ulCount,rgCompositionView,pcFetched) )
#define IEnumITfCompositionView_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumITfCompositionView_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfComposition_INTERFACE_DEFINED__
#define __ITfComposition_INTERFACE_DEFINED__
extern const IID IID_ITfComposition;
typedef struct ITfCompositionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfComposition *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfComposition *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfComposition *This);
	HRESULT(STDMETHODCALLTYPE *GetRange) (ITfComposition *This, ITfRange **ppRange);
	HRESULT(STDMETHODCALLTYPE *ShiftStart) (ITfComposition *This, TfEditCookie ecWrite, ITfRange *pNewStart);
	HRESULT(STDMETHODCALLTYPE *ShiftEnd) (ITfComposition *This, TfEditCookie ecWrite, ITfRange *pNewEnd);
	HRESULT(STDMETHODCALLTYPE *EndComposition) (ITfComposition *This, TfEditCookie ecWrite);
	END_INTERFACE
}  ITfCompositionVtbl;
interface ITfComposition
{
	CONST_VTBL struct ITfCompositionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfComposition_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfComposition_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfComposition_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfComposition_GetRange(This,ppRange)( (This)->lpVtbl -> GetRange(This,ppRange) )
#define ITfComposition_ShiftStart(This,ecWrite,pNewStart)( (This)->lpVtbl -> ShiftStart(This,ecWrite,pNewStart) )
#define ITfComposition_ShiftEnd(This,ecWrite,pNewEnd)( (This)->lpVtbl -> ShiftEnd(This,ecWrite,pNewEnd) )
#define ITfComposition_EndComposition(This,ecWrite)( (This)->lpVtbl -> EndComposition(This,ecWrite) )
#endif
#endif
#ifndef __ITfCompositionSink_INTERFACE_DEFINED__
#define __ITfCompositionSink_INTERFACE_DEFINED__
extern const IID IID_ITfCompositionSink;
typedef struct ITfCompositionSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfCompositionSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfCompositionSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfCompositionSink *This);
	HRESULT(STDMETHODCALLTYPE *OnCompositionTerminated) (ITfCompositionSink *This, TfEditCookie ecWrite, ITfComposition *pComposition);
	END_INTERFACE
}  ITfCompositionSinkVtbl;
interface ITfCompositionSink
{
	CONST_VTBL struct ITfCompositionSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfCompositionSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfCompositionSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfCompositionSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfCompositionSink_OnCompositionTerminated(This,ecWrite,pComposition)( (This)->lpVtbl -> OnCompositionTerminated(This,ecWrite,pComposition) )
#endif
#endif
#ifndef __ITfContextComposition_INTERFACE_DEFINED__
#define __ITfContextComposition_INTERFACE_DEFINED__
extern const IID IID_ITfContextComposition;
typedef struct ITfContextCompositionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfContextComposition *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfContextComposition *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfContextComposition *This);
	HRESULT(STDMETHODCALLTYPE *StartComposition) (ITfContextComposition *This, TfEditCookie ecWrite, ITfRange *pCompositionRange, ITfCompositionSink *pSink, ITfComposition **ppComposition);
	HRESULT(STDMETHODCALLTYPE *EnumCompositions) (ITfContextComposition *This, IEnumITfCompositionView **ppEnum);
	HRESULT(STDMETHODCALLTYPE *FindComposition) (ITfContextComposition *This, TfEditCookie ecRead, ITfRange *pTestRange, IEnumITfCompositionView **ppEnum);
	HRESULT(STDMETHODCALLTYPE *TakeOwnership) (ITfContextComposition *This, TfEditCookie ecWrite, ITfCompositionView *pComposition, ITfCompositionSink *pSink, ITfComposition **ppComposition);
	END_INTERFACE
}  ITfContextCompositionVtbl;
interface ITfContextComposition
{
	CONST_VTBL struct ITfContextCompositionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfContextComposition_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfContextComposition_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfContextComposition_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfContextComposition_StartComposition(This,ecWrite,pCompositionRange,pSink,ppComposition)( (This)->lpVtbl -> StartComposition(This,ecWrite,pCompositionRange,pSink,ppComposition) )
#define ITfContextComposition_EnumCompositions(This,ppEnum)( (This)->lpVtbl -> EnumCompositions(This,ppEnum) )
#define ITfContextComposition_FindComposition(This,ecRead,pTestRange,ppEnum)( (This)->lpVtbl -> FindComposition(This,ecRead,pTestRange,ppEnum) )
#define ITfContextComposition_TakeOwnership(This,ecWrite,pComposition,pSink,ppComposition)( (This)->lpVtbl -> TakeOwnership(This,ecWrite,pComposition,pSink,ppComposition) )
#endif
#endif
#ifndef __ITfContextOwnerCompositionServices_INTERFACE_DEFINED__
#define __ITfContextOwnerCompositionServices_INTERFACE_DEFINED__
extern const IID IID_ITfContextOwnerCompositionServices;
typedef struct ITfContextOwnerCompositionServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfContextOwnerCompositionServices *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfContextOwnerCompositionServices *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfContextOwnerCompositionServices *This);
	HRESULT(STDMETHODCALLTYPE *StartComposition) (ITfContextOwnerCompositionServices *This, TfEditCookie ecWrite, ITfRange *pCompositionRange, ITfCompositionSink *pSink, ITfComposition **ppComposition);
	HRESULT(STDMETHODCALLTYPE *EnumCompositions) (ITfContextOwnerCompositionServices *This, IEnumITfCompositionView **ppEnum);
	HRESULT(STDMETHODCALLTYPE *FindComposition) (ITfContextOwnerCompositionServices *This, TfEditCookie ecRead, ITfRange *pTestRange, IEnumITfCompositionView **ppEnum);
	HRESULT(STDMETHODCALLTYPE *TakeOwnership) (ITfContextOwnerCompositionServices *This, TfEditCookie ecWrite, ITfCompositionView *pComposition, ITfCompositionSink *pSink, ITfComposition **ppComposition);
	HRESULT(STDMETHODCALLTYPE *TerminateComposition) (ITfContextOwnerCompositionServices *This, ITfCompositionView *pComposition);
	END_INTERFACE
}  ITfContextOwnerCompositionServicesVtbl;
interface ITfContextOwnerCompositionServices
{
	CONST_VTBL struct ITfContextOwnerCompositionServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfContextOwnerCompositionServices_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfContextOwnerCompositionServices_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfContextOwnerCompositionServices_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfContextOwnerCompositionServices_StartComposition(This,ecWrite,pCompositionRange,pSink,ppComposition)( (This)->lpVtbl -> StartComposition(This,ecWrite,pCompositionRange,pSink,ppComposition) )
#define ITfContextOwnerCompositionServices_EnumCompositions(This,ppEnum)( (This)->lpVtbl -> EnumCompositions(This,ppEnum) )
#define ITfContextOwnerCompositionServices_FindComposition(This,ecRead,pTestRange,ppEnum)( (This)->lpVtbl -> FindComposition(This,ecRead,pTestRange,ppEnum) )
#define ITfContextOwnerCompositionServices_TakeOwnership(This,ecWrite,pComposition,pSink,ppComposition)( (This)->lpVtbl -> TakeOwnership(This,ecWrite,pComposition,pSink,ppComposition) )
#define ITfContextOwnerCompositionServices_TerminateComposition(This,pComposition)( (This)->lpVtbl -> TerminateComposition(This,pComposition) )
#endif
#endif
#ifndef __ITfContextOwnerCompositionSink_INTERFACE_DEFINED__
#define __ITfContextOwnerCompositionSink_INTERFACE_DEFINED__
extern const IID IID_ITfContextOwnerCompositionSink;
typedef struct ITfContextOwnerCompositionSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfContextOwnerCompositionSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfContextOwnerCompositionSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfContextOwnerCompositionSink *This);
	HRESULT(STDMETHODCALLTYPE *OnStartComposition) (ITfContextOwnerCompositionSink *This, ITfCompositionView *pComposition, BOOL *pfOk);
	HRESULT(STDMETHODCALLTYPE *OnUpdateComposition) (ITfContextOwnerCompositionSink *This, ITfCompositionView *pComposition, ITfRange *pRangeNew);
	HRESULT(STDMETHODCALLTYPE *OnEndComposition) (ITfContextOwnerCompositionSink *This, ITfCompositionView *pComposition);
	END_INTERFACE
}  ITfContextOwnerCompositionSinkVtbl;
interface ITfContextOwnerCompositionSink
{
	CONST_VTBL struct ITfContextOwnerCompositionSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfContextOwnerCompositionSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfContextOwnerCompositionSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfContextOwnerCompositionSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfContextOwnerCompositionSink_OnStartComposition(This,pComposition,pfOk)( (This)->lpVtbl -> OnStartComposition(This,pComposition,pfOk) )
#define ITfContextOwnerCompositionSink_OnUpdateComposition(This,pComposition,pRangeNew)( (This)->lpVtbl -> OnUpdateComposition(This,pComposition,pRangeNew) )
#define ITfContextOwnerCompositionSink_OnEndComposition(This,pComposition)( (This)->lpVtbl -> OnEndComposition(This,pComposition) )
#endif
#endif
#ifndef __ITfContextView_INTERFACE_DEFINED__
#define __ITfContextView_INTERFACE_DEFINED__
extern const IID IID_ITfContextView;
typedef struct ITfContextViewVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfContextView *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfContextView *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfContextView *This);
	HRESULT(STDMETHODCALLTYPE *GetRangeFromPoint) (ITfContextView *This, TfEditCookie ec, const POINT *ppt, DWORD dwFlags, ITfRange **ppRange);
	HRESULT(STDMETHODCALLTYPE *GetTextExt) (ITfContextView *This, TfEditCookie ec, ITfRange *pRange, RECT *prc, BOOL *pfClipped);
	HRESULT(STDMETHODCALLTYPE *GetScreenExt) (ITfContextView *This, RECT *prc);
	HRESULT(STDMETHODCALLTYPE *GetWnd) (ITfContextView *This, HWND *phwnd);
	END_INTERFACE
}  ITfContextViewVtbl;
interface ITfContextView
{
	CONST_VTBL struct ITfContextViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfContextView_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfContextView_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfContextView_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfContextView_GetRangeFromPoint(This,ec,ppt,dwFlags,ppRange)( (This)->lpVtbl -> GetRangeFromPoint(This,ec,ppt,dwFlags,ppRange) )
#define ITfContextView_GetTextExt(This,ec,pRange,prc,pfClipped)( (This)->lpVtbl -> GetTextExt(This,ec,pRange,prc,pfClipped) )
#define ITfContextView_GetScreenExt(This,prc)( (This)->lpVtbl -> GetScreenExt(This,prc) )
#define ITfContextView_GetWnd(This,phwnd)( (This)->lpVtbl -> GetWnd(This,phwnd) )
#endif
#endif
#ifndef __IEnumTfContextViews_INTERFACE_DEFINED__
#define __IEnumTfContextViews_INTERFACE_DEFINED__
extern const IID IID_IEnumTfContextViews;
typedef struct IEnumTfContextViewsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumTfContextViews *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumTfContextViews *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumTfContextViews *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumTfContextViews *This, IEnumTfContextViews **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumTfContextViews *This, ULONG ulCount, ITfContextView **rgViews, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumTfContextViews *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumTfContextViews *This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfContextViewsVtbl;
interface IEnumTfContextViews
{
	CONST_VTBL struct IEnumTfContextViewsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfContextViews_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfContextViews_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfContextViews_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfContextViews_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfContextViews_Next(This,ulCount,rgViews,pcFetched)( (This)->lpVtbl -> Next(This,ulCount,rgViews,pcFetched) )
#define IEnumTfContextViews_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfContextViews_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfContext_INTERFACE_DEFINED__
#define __ITfContext_INTERFACE_DEFINED__
#define	TF_ES_ASYNCDONTCARE	( 0 )
#define	TF_ES_SYNC	( 0x1 )
#define	TF_ES_READ	( 0x2 )
#define	TF_ES_READWRITE	( 0x6 )
#define	TF_ES_ASYNC	( 0x8 )
typedef DECLSPEC_UUID("1690be9b-d3e9-49f6-8d8b-51b905af4c43")
enum __MIDL_ITfContext_0001
{
	TF_AE_NONE = 0,
	TF_AE_START = 1,
	TF_AE_END = 2
} TfActiveSelEnd;
typedef DECLSPEC_UUID("36ae42a4-6989-4bdc-b48a-6137b7bf2e42")
struct TF_SELECTIONSTYLE
{
	TfActiveSelEnd ase;
	BOOL fInterimChar;
} TF_SELECTIONSTYLE;
typedef DECLSPEC_UUID("75eb22f2-b0bf-46a8-8006-975a3b6efcf1")
struct TF_SELECTION
{
	ITfRange *range;
	TF_SELECTIONSTYLE style;
} TF_SELECTION;
#define	TF_DEFAULT_SELECTION	( TS_DEFAULT_SELECTION )
#define	TF_SD_READONLY	( TS_SD_READONLY )
#define	TF_SD_LOADING	( TS_SD_LOADING )
#define	TF_SS_DISJOINTSEL	( TS_SS_DISJOINTSEL )
#define	TF_SS_REGIONS	( TS_SS_REGIONS )
#define	TF_SS_TRANSITORY	( TS_SS_TRANSITORY )
typedef DECLSPEC_UUID("bc7d979a-846a-444d-afef-0a9bfa82b961")
TS_STATUS TF_STATUS;
extern const IID IID_ITfContext;
typedef struct ITfContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfContext *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfContext *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfContext *This);
	HRESULT(STDMETHODCALLTYPE *RequestEditSession) (ITfContext *This, TfClientId tid, ITfEditSession *pes, DWORD dwFlags, HRESULT *phrSession);
	HRESULT(STDMETHODCALLTYPE *InWriteSession) (ITfContext *This, TfClientId tid, BOOL *pfWriteSession);
	HRESULT(STDMETHODCALLTYPE *GetSelection) (ITfContext *This, TfEditCookie ec, ULONG ulIndex, ULONG ulCount, TF_SELECTION *pSelection, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *SetSelection) (ITfContext *This, TfEditCookie ec, ULONG ulCount, const TF_SELECTION *pSelection);
	HRESULT(STDMETHODCALLTYPE *GetStart) (ITfContext *This, TfEditCookie ec, ITfRange **ppStart);
	HRESULT(STDMETHODCALLTYPE *GetEnd) (ITfContext *This, TfEditCookie ec, ITfRange **ppEnd);
	HRESULT(STDMETHODCALLTYPE *GetActiveView) (ITfContext *This, ITfContextView **ppView);
	HRESULT(STDMETHODCALLTYPE *EnumViews) (ITfContext *This, IEnumTfContextViews **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetStatus) (ITfContext *This, TF_STATUS *pdcs);
	HRESULT(STDMETHODCALLTYPE *GetProperty) (ITfContext *This, REFGUID guidProp, ITfProperty **ppProp);
	HRESULT(STDMETHODCALLTYPE *GetAppProperty) (ITfContext *This, REFGUID guidProp, ITfReadOnlyProperty **ppProp);
	HRESULT(STDMETHODCALLTYPE *TrackProperties) (ITfContext *This, const GUID **prgProp, ULONG cProp, const GUID **prgAppProp, ULONG cAppProp, ITfReadOnlyProperty **ppProperty);
	HRESULT(STDMETHODCALLTYPE *EnumProperties) (ITfContext *This, IEnumTfProperties **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetDocumentMgr) (ITfContext *This, ITfDocumentMgr **ppDm);
	HRESULT(STDMETHODCALLTYPE *CreateRangeBackup) (ITfContext *This, TfEditCookie ec, ITfRange *pRange, ITfRangeBackup **ppBackup);
	END_INTERFACE
}  ITfContextVtbl;
interface ITfContext
{
	CONST_VTBL struct ITfContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfContext_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfContext_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfContext_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfContext_RequestEditSession(This,tid,pes,dwFlags,phrSession)( (This)->lpVtbl -> RequestEditSession(This,tid,pes,dwFlags,phrSession) )
#define ITfContext_InWriteSession(This,tid,pfWriteSession)( (This)->lpVtbl -> InWriteSession(This,tid,pfWriteSession) )
#define ITfContext_GetSelection(This,ec,ulIndex,ulCount,pSelection,pcFetched)( (This)->lpVtbl -> GetSelection(This,ec,ulIndex,ulCount,pSelection,pcFetched) )
#define ITfContext_SetSelection(This,ec,ulCount,pSelection)( (This)->lpVtbl -> SetSelection(This,ec,ulCount,pSelection) )
#define ITfContext_GetStart(This,ec,ppStart)( (This)->lpVtbl -> GetStart(This,ec,ppStart) )
#define ITfContext_GetEnd(This,ec,ppEnd)( (This)->lpVtbl -> GetEnd(This,ec,ppEnd) )
#define ITfContext_GetActiveView(This,ppView)( (This)->lpVtbl -> GetActiveView(This,ppView) )
#define ITfContext_EnumViews(This,ppEnum)( (This)->lpVtbl -> EnumViews(This,ppEnum) )
#define ITfContext_GetStatus(This,pdcs)( (This)->lpVtbl -> GetStatus(This,pdcs) )
#define ITfContext_GetProperty(This,guidProp,ppProp)( (This)->lpVtbl -> GetProperty(This,guidProp,ppProp) )
#define ITfContext_GetAppProperty(This,guidProp,ppProp)( (This)->lpVtbl -> GetAppProperty(This,guidProp,ppProp) )
#define ITfContext_TrackProperties(This,prgProp,cProp,prgAppProp,cAppProp,ppProperty)( (This)->lpVtbl -> TrackProperties(This,prgProp,cProp,prgAppProp,cAppProp,ppProperty) )
#define ITfContext_EnumProperties(This,ppEnum)( (This)->lpVtbl -> EnumProperties(This,ppEnum) )
#define ITfContext_GetDocumentMgr(This,ppDm)( (This)->lpVtbl -> GetDocumentMgr(This,ppDm) )
#define ITfContext_CreateRangeBackup(This,ec,pRange,ppBackup)( (This)->lpVtbl -> CreateRangeBackup(This,ec,pRange,ppBackup) )
#endif
#endif
#ifndef __ITfQueryEmbedded_INTERFACE_DEFINED__
#define __ITfQueryEmbedded_INTERFACE_DEFINED__
extern const IID IID_ITfQueryEmbedded;
typedef struct ITfQueryEmbeddedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfQueryEmbedded *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfQueryEmbedded *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfQueryEmbedded *This);
	HRESULT(STDMETHODCALLTYPE *QueryInsertEmbedded) (ITfQueryEmbedded *This, const GUID *pguidService, const FORMATETC *pFormatEtc, BOOL *pfInsertable);
	END_INTERFACE
}  ITfQueryEmbeddedVtbl;
interface ITfQueryEmbedded
{
	CONST_VTBL struct ITfQueryEmbeddedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfQueryEmbedded_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfQueryEmbedded_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfQueryEmbedded_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfQueryEmbedded_QueryInsertEmbedded(This,pguidService,pFormatEtc,pfInsertable)( (This)->lpVtbl -> QueryInsertEmbedded(This,pguidService,pFormatEtc,pfInsertable) )
#endif
#endif
#ifndef __ITfInsertAtSelection_INTERFACE_DEFINED__
#define __ITfInsertAtSelection_INTERFACE_DEFINED__
#define	TF_IAS_NOQUERY	( 0x1 )
#define	TF_IAS_QUERYONLY	( 0x2 )
#define	TF_IAS_NO_DEFAULT_COMPOSITION	( 0x80000000 )
extern const IID IID_ITfInsertAtSelection;
typedef struct ITfInsertAtSelectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfInsertAtSelection *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfInsertAtSelection *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfInsertAtSelection *This);
	HRESULT(STDMETHODCALLTYPE *InsertTextAtSelection) (ITfInsertAtSelection *This, TfEditCookie ec, DWORD dwFlags, const WCHAR *pchText, LONG cch, ITfRange **ppRange);
	HRESULT(STDMETHODCALLTYPE *InsertEmbeddedAtSelection) (ITfInsertAtSelection *This, TfEditCookie ec, DWORD dwFlags, IDataObject *pDataObject, ITfRange **ppRange);
	END_INTERFACE
}  ITfInsertAtSelectionVtbl;
interface ITfInsertAtSelection
{
	CONST_VTBL struct ITfInsertAtSelectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfInsertAtSelection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfInsertAtSelection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfInsertAtSelection_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfInsertAtSelection_InsertTextAtSelection(This,ec,dwFlags,pchText,cch,ppRange)( (This)->lpVtbl -> InsertTextAtSelection(This,ec,dwFlags,pchText,cch,ppRange) )
#define ITfInsertAtSelection_InsertEmbeddedAtSelection(This,ec,dwFlags,pDataObject,ppRange)( (This)->lpVtbl -> InsertEmbeddedAtSelection(This,ec,dwFlags,pDataObject,ppRange) )
#endif
#endif
#ifndef __ITfCleanupContextSink_INTERFACE_DEFINED__
#define __ITfCleanupContextSink_INTERFACE_DEFINED__
extern const IID IID_ITfCleanupContextSink;
typedef struct ITfCleanupContextSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfCleanupContextSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfCleanupContextSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfCleanupContextSink *This);
	HRESULT(STDMETHODCALLTYPE *OnCleanupContext) (ITfCleanupContextSink *This, TfEditCookie ecWrite, ITfContext *pic);
	END_INTERFACE
}  ITfCleanupContextSinkVtbl;
interface ITfCleanupContextSink
{
	CONST_VTBL struct ITfCleanupContextSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfCleanupContextSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfCleanupContextSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfCleanupContextSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfCleanupContextSink_OnCleanupContext(This,ecWrite,pic)( (This)->lpVtbl -> OnCleanupContext(This,ecWrite,pic) )
#endif
#endif
#ifndef __ITfCleanupContextDurationSink_INTERFACE_DEFINED__
#define __ITfCleanupContextDurationSink_INTERFACE_DEFINED__
extern const IID IID_ITfCleanupContextDurationSink;
typedef struct ITfCleanupContextDurationSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfCleanupContextDurationSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfCleanupContextDurationSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfCleanupContextDurationSink *This);
	HRESULT(STDMETHODCALLTYPE *OnStartCleanupContext) (ITfCleanupContextDurationSink *This);
	HRESULT(STDMETHODCALLTYPE *OnEndCleanupContext) (ITfCleanupContextDurationSink *This);
	END_INTERFACE
}  ITfCleanupContextDurationSinkVtbl;
interface ITfCleanupContextDurationSink
{
	CONST_VTBL struct ITfCleanupContextDurationSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfCleanupContextDurationSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfCleanupContextDurationSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfCleanupContextDurationSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfCleanupContextDurationSink_OnStartCleanupContext(This)( (This)->lpVtbl -> OnStartCleanupContext(This) )
#define ITfCleanupContextDurationSink_OnEndCleanupContext(This)( (This)->lpVtbl -> OnEndCleanupContext(This) )
#endif
#endif
#ifndef __ITfReadOnlyProperty_INTERFACE_DEFINED__
#define __ITfReadOnlyProperty_INTERFACE_DEFINED__
extern const IID IID_ITfReadOnlyProperty;
typedef struct ITfReadOnlyPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfReadOnlyProperty *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfReadOnlyProperty *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfReadOnlyProperty *This);
	HRESULT(STDMETHODCALLTYPE *GetType) (ITfReadOnlyProperty *This, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *EnumRanges) (ITfReadOnlyProperty *This, TfEditCookie ec, IEnumTfRanges **ppEnum, ITfRange *pTargetRange);
	HRESULT(STDMETHODCALLTYPE *GetValue) (ITfReadOnlyProperty *This, TfEditCookie ec, ITfRange *pRange, VARIANT *pvarValue);
	HRESULT(STDMETHODCALLTYPE *GetContext) (ITfReadOnlyProperty *This, ITfContext **ppContext);
	END_INTERFACE
}  ITfReadOnlyPropertyVtbl;
interface ITfReadOnlyProperty
{
	CONST_VTBL struct ITfReadOnlyPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfReadOnlyProperty_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfReadOnlyProperty_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfReadOnlyProperty_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfReadOnlyProperty_GetType(This,pguid)( (This)->lpVtbl -> GetType(This,pguid) )
#define ITfReadOnlyProperty_EnumRanges(This,ec,ppEnum,pTargetRange)( (This)->lpVtbl -> EnumRanges(This,ec,ppEnum,pTargetRange) )
#define ITfReadOnlyProperty_GetValue(This,ec,pRange,pvarValue)( (This)->lpVtbl -> GetValue(This,ec,pRange,pvarValue) )
#define ITfReadOnlyProperty_GetContext(This,ppContext)( (This)->lpVtbl -> GetContext(This,ppContext) )
#endif
#endif
typedef DECLSPEC_UUID("d678c645-eb6a-45c9-b4ee-0f3e3a991348")
struct TF_PROPERTYVAL
{
	GUID guidId;
	VARIANT varValue;
} TF_PROPERTYVAL;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0022_v0_0_s_ifspec;
#ifndef __IEnumTfPropertyValue_INTERFACE_DEFINED__
#define __IEnumTfPropertyValue_INTERFACE_DEFINED__
extern const IID IID_IEnumTfPropertyValue;
typedef struct IEnumTfPropertyValueVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumTfPropertyValue *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumTfPropertyValue *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumTfPropertyValue *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumTfPropertyValue *This, IEnumTfPropertyValue **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumTfPropertyValue *This, ULONG ulCount, TF_PROPERTYVAL *rgValues, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumTfPropertyValue *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumTfPropertyValue *This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfPropertyValueVtbl;
interface IEnumTfPropertyValue
{
	CONST_VTBL struct IEnumTfPropertyValueVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfPropertyValue_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfPropertyValue_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfPropertyValue_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfPropertyValue_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfPropertyValue_Next(This,ulCount,rgValues,pcFetched)( (This)->lpVtbl -> Next(This,ulCount,rgValues,pcFetched) )
#define IEnumTfPropertyValue_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfPropertyValue_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfMouseTracker_INTERFACE_DEFINED__
#define __ITfMouseTracker_INTERFACE_DEFINED__
extern const IID IID_ITfMouseTracker;
typedef struct ITfMouseTrackerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfMouseTracker *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfMouseTracker *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfMouseTracker *This);
	HRESULT(STDMETHODCALLTYPE *AdviseMouseSink) (ITfMouseTracker *This, ITfRange *range, ITfMouseSink *pSink, DWORD *pdwCookie);
	HRESULT(STDMETHODCALLTYPE *UnadviseMouseSink) (ITfMouseTracker *This, DWORD dwCookie);
	END_INTERFACE
}  ITfMouseTrackerVtbl;
interface ITfMouseTracker
{
	CONST_VTBL struct ITfMouseTrackerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfMouseTracker_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfMouseTracker_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfMouseTracker_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfMouseTracker_AdviseMouseSink(This,range,pSink,pdwCookie)( (This)->lpVtbl -> AdviseMouseSink(This,range,pSink,pdwCookie) )
#define ITfMouseTracker_UnadviseMouseSink(This,dwCookie)( (This)->lpVtbl -> UnadviseMouseSink(This,dwCookie) )
#endif
#endif
#ifndef __ITfMouseTrackerACP_INTERFACE_DEFINED__
#define __ITfMouseTrackerACP_INTERFACE_DEFINED__
extern const IID IID_ITfMouseTrackerACP;
typedef struct ITfMouseTrackerACPVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfMouseTrackerACP *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfMouseTrackerACP *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfMouseTrackerACP *This);
	HRESULT(STDMETHODCALLTYPE *AdviseMouseSink) (ITfMouseTrackerACP *This, ITfRangeACP *range, ITfMouseSink *pSink, DWORD *pdwCookie);
	HRESULT(STDMETHODCALLTYPE *UnadviseMouseSink) (ITfMouseTrackerACP *This, DWORD dwCookie);
	END_INTERFACE
}  ITfMouseTrackerACPVtbl;
interface ITfMouseTrackerACP
{
	CONST_VTBL struct ITfMouseTrackerACPVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfMouseTrackerACP_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfMouseTrackerACP_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfMouseTrackerACP_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfMouseTrackerACP_AdviseMouseSink(This,range,pSink,pdwCookie)( (This)->lpVtbl -> AdviseMouseSink(This,range,pSink,pdwCookie) )
#define ITfMouseTrackerACP_UnadviseMouseSink(This,dwCookie)( (This)->lpVtbl -> UnadviseMouseSink(This,dwCookie) )
#endif
#endif
#ifndef __ITfMouseSink_INTERFACE_DEFINED__
#define __ITfMouseSink_INTERFACE_DEFINED__
extern const IID IID_ITfMouseSink;
typedef struct ITfMouseSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfMouseSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfMouseSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfMouseSink *This);
	HRESULT(STDMETHODCALLTYPE *OnMouseEvent) (ITfMouseSink *This, ULONG uEdge, ULONG uQuadrant, DWORD dwBtnStatus, BOOL *pfEaten);
	END_INTERFACE
}  ITfMouseSinkVtbl;
interface ITfMouseSink
{
	CONST_VTBL struct ITfMouseSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfMouseSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfMouseSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfMouseSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfMouseSink_OnMouseEvent(This,uEdge,uQuadrant,dwBtnStatus,pfEaten)( (This)->lpVtbl -> OnMouseEvent(This,uEdge,uQuadrant,dwBtnStatus,pfEaten) )
#endif
#endif
#ifndef __ITfEditRecord_INTERFACE_DEFINED__
#define __ITfEditRecord_INTERFACE_DEFINED__
#define	TF_GTP_INCL_TEXT	( 0x1 )
extern const IID IID_ITfEditRecord;
typedef struct ITfEditRecordVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfEditRecord *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfEditRecord *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfEditRecord *This);
	HRESULT(STDMETHODCALLTYPE *GetSelectionStatus) (ITfEditRecord *This, BOOL *pfChanged);
	HRESULT(STDMETHODCALLTYPE *GetTextAndPropertyUpdates) (ITfEditRecord *This, DWORD dwFlags, const GUID **prgProperties, ULONG cProperties, IEnumTfRanges **ppEnum);
	END_INTERFACE
}  ITfEditRecordVtbl;
interface ITfEditRecord
{
	CONST_VTBL struct ITfEditRecordVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfEditRecord_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfEditRecord_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfEditRecord_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfEditRecord_GetSelectionStatus(This,pfChanged)( (This)->lpVtbl -> GetSelectionStatus(This,pfChanged) )
#define ITfEditRecord_GetTextAndPropertyUpdates(This,dwFlags,prgProperties,cProperties,ppEnum)( (This)->lpVtbl -> GetTextAndPropertyUpdates(This,dwFlags,prgProperties,cProperties,ppEnum) )
#endif
#endif
#ifndef __ITfTextEditSink_INTERFACE_DEFINED__
#define __ITfTextEditSink_INTERFACE_DEFINED__
extern const IID IID_ITfTextEditSink;
typedef struct ITfTextEditSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfTextEditSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfTextEditSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfTextEditSink *This);
	HRESULT(STDMETHODCALLTYPE *OnEndEdit) (ITfTextEditSink *This, ITfContext *pic, TfEditCookie ecReadOnly, ITfEditRecord *pEditRecord);
	END_INTERFACE
}  ITfTextEditSinkVtbl;
interface ITfTextEditSink
{
	CONST_VTBL struct ITfTextEditSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfTextEditSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfTextEditSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfTextEditSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfTextEditSink_OnEndEdit(This,pic,ecReadOnly,pEditRecord)( (This)->lpVtbl -> OnEndEdit(This,pic,ecReadOnly,pEditRecord) )
#endif
#endif
#ifndef __ITfTextLayoutSink_INTERFACE_DEFINED__
#define __ITfTextLayoutSink_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("603553cf-9edd-4cc1-9ecc-069e4a427734")
enum __MIDL_ITfTextLayoutSink_0001
{
	TF_LC_CREATE = 0,
	TF_LC_CHANGE = 1,
	TF_LC_DESTROY = 2
} TfLayoutCode;
extern const IID IID_ITfTextLayoutSink;
typedef struct ITfTextLayoutSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfTextLayoutSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfTextLayoutSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfTextLayoutSink *This);
	HRESULT(STDMETHODCALLTYPE *OnLayoutChange) (ITfTextLayoutSink *This, ITfContext *pic, TfLayoutCode lcode, ITfContextView *pView);
	END_INTERFACE
}  ITfTextLayoutSinkVtbl;
interface ITfTextLayoutSink
{
	CONST_VTBL struct ITfTextLayoutSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfTextLayoutSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfTextLayoutSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfTextLayoutSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfTextLayoutSink_OnLayoutChange(This,pic,lcode,pView)( (This)->lpVtbl -> OnLayoutChange(This,pic,lcode,pView) )
#endif
#endif
#ifndef __ITfStatusSink_INTERFACE_DEFINED__
#define __ITfStatusSink_INTERFACE_DEFINED__
extern const IID IID_ITfStatusSink;
typedef struct ITfStatusSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfStatusSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfStatusSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfStatusSink *This);
	HRESULT(STDMETHODCALLTYPE *OnStatusChange) (ITfStatusSink *This, ITfContext *pic, DWORD dwFlags);
	END_INTERFACE
}  ITfStatusSinkVtbl;
interface ITfStatusSink
{
	CONST_VTBL struct ITfStatusSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfStatusSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfStatusSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfStatusSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfStatusSink_OnStatusChange(This,pic,dwFlags)( (This)->lpVtbl -> OnStatusChange(This,pic,dwFlags) )
#endif
#endif
#ifndef __ITfEditTransactionSink_INTERFACE_DEFINED__
#define __ITfEditTransactionSink_INTERFACE_DEFINED__
extern const IID IID_ITfEditTransactionSink;
typedef struct ITfEditTransactionSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfEditTransactionSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfEditTransactionSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfEditTransactionSink *This);
	HRESULT(STDMETHODCALLTYPE *OnStartEditTransaction) (ITfEditTransactionSink *This, ITfContext *pic);
	HRESULT(STDMETHODCALLTYPE *OnEndEditTransaction) (ITfEditTransactionSink *This, ITfContext *pic);
	END_INTERFACE
}  ITfEditTransactionSinkVtbl;
interface ITfEditTransactionSink
{
	CONST_VTBL struct ITfEditTransactionSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfEditTransactionSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfEditTransactionSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfEditTransactionSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfEditTransactionSink_OnStartEditTransaction(This,pic)( (This)->lpVtbl -> OnStartEditTransaction(This,pic) )
#define ITfEditTransactionSink_OnEndEditTransaction(This,pic)( (This)->lpVtbl -> OnEndEditTransaction(This,pic) )
#endif
#endif
#ifndef __ITfContextOwner_INTERFACE_DEFINED__
#define __ITfContextOwner_INTERFACE_DEFINED__
extern const IID IID_ITfContextOwner;
typedef struct ITfContextOwnerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfContextOwner *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfContextOwner *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfContextOwner *This);
	HRESULT(STDMETHODCALLTYPE *GetACPFromPoint) (ITfContextOwner *This, const POINT *ptScreen, DWORD dwFlags, LONG *pacp);
	HRESULT(STDMETHODCALLTYPE *GetTextExt) (ITfContextOwner *This, LONG acpStart, LONG acpEnd, RECT *prc, BOOL *pfClipped);
	HRESULT(STDMETHODCALLTYPE *GetScreenExt) (ITfContextOwner *This, RECT *prc);
	HRESULT(STDMETHODCALLTYPE *GetStatus) (ITfContextOwner *This, TF_STATUS *pdcs);
	HRESULT(STDMETHODCALLTYPE *GetWnd) (ITfContextOwner *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *GetAttribute) (ITfContextOwner *This, REFGUID rguidAttribute, VARIANT *pvarValue);
	END_INTERFACE
}  ITfContextOwnerVtbl;
interface ITfContextOwner
{
	CONST_VTBL struct ITfContextOwnerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfContextOwner_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfContextOwner_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfContextOwner_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfContextOwner_GetACPFromPoint(This,ptScreen,dwFlags,pacp)( (This)->lpVtbl -> GetACPFromPoint(This,ptScreen,dwFlags,pacp) )
#define ITfContextOwner_GetTextExt(This,acpStart,acpEnd,prc,pfClipped)( (This)->lpVtbl -> GetTextExt(This,acpStart,acpEnd,prc,pfClipped) )
#define ITfContextOwner_GetScreenExt(This,prc)( (This)->lpVtbl -> GetScreenExt(This,prc) )
#define ITfContextOwner_GetStatus(This,pdcs)( (This)->lpVtbl -> GetStatus(This,pdcs) )
#define ITfContextOwner_GetWnd(This,phwnd)( (This)->lpVtbl -> GetWnd(This,phwnd) )
#define ITfContextOwner_GetAttribute(This,rguidAttribute,pvarValue)( (This)->lpVtbl -> GetAttribute(This,rguidAttribute,pvarValue) )
#endif
#endif
#ifndef __ITfContextOwnerServices_INTERFACE_DEFINED__
#define __ITfContextOwnerServices_INTERFACE_DEFINED__
extern const IID IID_ITfContextOwnerServices;
typedef struct ITfContextOwnerServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfContextOwnerServices *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfContextOwnerServices *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfContextOwnerServices *This);
	HRESULT(STDMETHODCALLTYPE *OnLayoutChange) (ITfContextOwnerServices *This);
	HRESULT(STDMETHODCALLTYPE *OnStatusChange) (ITfContextOwnerServices *This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *OnAttributeChange) (ITfContextOwnerServices *This, REFGUID rguidAttribute);
	HRESULT(STDMETHODCALLTYPE *Serialize) (ITfContextOwnerServices *This, ITfProperty *pProp, ITfRange *pRange, TF_PERSISTENT_PROPERTY_HEADER_ACP *pHdr, IStream *pStream);
	HRESULT(STDMETHODCALLTYPE *Unserialize) (ITfContextOwnerServices *This, ITfProperty *pProp, const TF_PERSISTENT_PROPERTY_HEADER_ACP *pHdr, IStream *pStream, ITfPersistentPropertyLoaderACP *pLoader);
	HRESULT(STDMETHODCALLTYPE *ForceLoadProperty) (ITfContextOwnerServices *This, ITfProperty *pProp);
	HRESULT(STDMETHODCALLTYPE *CreateRange) (ITfContextOwnerServices *This, LONG acpStart, LONG acpEnd, ITfRangeACP **ppRange);
	END_INTERFACE
}  ITfContextOwnerServicesVtbl;
interface ITfContextOwnerServices
{
	CONST_VTBL struct ITfContextOwnerServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfContextOwnerServices_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfContextOwnerServices_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfContextOwnerServices_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfContextOwnerServices_OnLayoutChange(This)( (This)->lpVtbl -> OnLayoutChange(This) )
#define ITfContextOwnerServices_OnStatusChange(This,dwFlags)( (This)->lpVtbl -> OnStatusChange(This,dwFlags) )
#define ITfContextOwnerServices_OnAttributeChange(This,rguidAttribute)( (This)->lpVtbl -> OnAttributeChange(This,rguidAttribute) )
#define ITfContextOwnerServices_Serialize(This,pProp,pRange,pHdr,pStream)( (This)->lpVtbl -> Serialize(This,pProp,pRange,pHdr,pStream) )
#define ITfContextOwnerServices_Unserialize(This,pProp,pHdr,pStream,pLoader)( (This)->lpVtbl -> Unserialize(This,pProp,pHdr,pStream,pLoader) )
#define ITfContextOwnerServices_ForceLoadProperty(This,pProp)( (This)->lpVtbl -> ForceLoadProperty(This,pProp) )
#define ITfContextOwnerServices_CreateRange(This,acpStart,acpEnd,ppRange)( (This)->lpVtbl -> CreateRange(This,acpStart,acpEnd,ppRange) )
#endif
#endif
#ifndef __ITfContextKeyEventSink_INTERFACE_DEFINED__
#define __ITfContextKeyEventSink_INTERFACE_DEFINED__
extern const IID IID_ITfContextKeyEventSink;
typedef struct ITfContextKeyEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfContextKeyEventSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfContextKeyEventSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfContextKeyEventSink *This);
	HRESULT(STDMETHODCALLTYPE *OnKeyDown) (ITfContextKeyEventSink *This, WPARAM wParam, LPARAM lParam, BOOL *pfEaten);
	HRESULT(STDMETHODCALLTYPE *OnKeyUp) (ITfContextKeyEventSink *This, WPARAM wParam, LPARAM lParam, BOOL *pfEaten);
	HRESULT(STDMETHODCALLTYPE *OnTestKeyDown) (ITfContextKeyEventSink *This, WPARAM wParam, LPARAM lParam, BOOL *pfEaten);
	HRESULT(STDMETHODCALLTYPE *OnTestKeyUp) (ITfContextKeyEventSink *This, WPARAM wParam, LPARAM lParam, BOOL *pfEaten);
	END_INTERFACE
}  ITfContextKeyEventSinkVtbl;
interface ITfContextKeyEventSink
{
	CONST_VTBL struct ITfContextKeyEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfContextKeyEventSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfContextKeyEventSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfContextKeyEventSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfContextKeyEventSink_OnKeyDown(This,wParam,lParam,pfEaten)( (This)->lpVtbl -> OnKeyDown(This,wParam,lParam,pfEaten) )
#define ITfContextKeyEventSink_OnKeyUp(This,wParam,lParam,pfEaten)( (This)->lpVtbl -> OnKeyUp(This,wParam,lParam,pfEaten) )
#define ITfContextKeyEventSink_OnTestKeyDown(This,wParam,lParam,pfEaten)( (This)->lpVtbl -> OnTestKeyDown(This,wParam,lParam,pfEaten) )
#define ITfContextKeyEventSink_OnTestKeyUp(This,wParam,lParam,pfEaten)( (This)->lpVtbl -> OnTestKeyUp(This,wParam,lParam,pfEaten) )
#endif
#endif
#ifndef __ITfEditSession_INTERFACE_DEFINED__
#define __ITfEditSession_INTERFACE_DEFINED__
extern const IID IID_ITfEditSession;
typedef struct ITfEditSessionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfEditSession *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfEditSession *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfEditSession *This);
	HRESULT(STDMETHODCALLTYPE *DoEditSession) (ITfEditSession *This, TfEditCookie ec);
	END_INTERFACE
}  ITfEditSessionVtbl;
interface ITfEditSession
{
	CONST_VTBL struct ITfEditSessionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfEditSession_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfEditSession_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfEditSession_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfEditSession_DoEditSession(This,ec)( (This)->lpVtbl -> DoEditSession(This,ec) )
#endif
#endif
#ifndef __ITfRange_INTERFACE_DEFINED__
#define __ITfRange_INTERFACE_DEFINED__
#define	TF_CHAR_EMBEDDED	( TS_CHAR_EMBEDDED )
typedef DECLSPEC_UUID("cf610f06-2882-46f6-abe5-298568b664c4")
enum __MIDL_ITfRange_0001
{
	TF_GRAVITY_BACKWARD = 0,
	TF_GRAVITY_FORWARD = 1
} TfGravity;
typedef DECLSPEC_UUID("1e512533-bbdc-4530-9a8e-a1dc0af67468")
enum __MIDL_ITfRange_0002
{
	TF_SD_BACKWARD = 0,
	TF_SD_FORWARD = 1
} TfShiftDir;
#define	TF_HF_OBJECT	( 1 )
#define	TF_TF_MOVESTART	( 1 )
#define	TF_TF_IGNOREEND	( 2 )
#define	TF_ST_CORRECTION	( 1 )
#define	TF_IE_CORRECTION	( 1 )
typedef DECLSPEC_UUID("49930d51-7d93-448c-a48c-fea5dac192b1")
struct TF_HALTCOND
{
	ITfRange *pHaltRange;
	TfAnchor aHaltPos;
	DWORD dwFlags;
} TF_HALTCOND;
extern const IID IID_ITfRange;
typedef struct ITfRangeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfRange *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfRange *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfRange *This);
	HRESULT(STDMETHODCALLTYPE *GetText) (ITfRange *This, TfEditCookie ec, DWORD dwFlags, WCHAR *pchText, ULONG cchMax, ULONG *pcch);
	HRESULT(STDMETHODCALLTYPE *SetText) (ITfRange *This, TfEditCookie ec, DWORD dwFlags, const WCHAR *pchText, LONG cch);
	HRESULT(STDMETHODCALLTYPE *GetFormattedText) (ITfRange *This, TfEditCookie ec, IDataObject **ppDataObject);
	HRESULT(STDMETHODCALLTYPE *GetEmbedded) (ITfRange *This, TfEditCookie ec, REFGUID rguidService, REFIID riid, IUnknown **ppunk);
	HRESULT(STDMETHODCALLTYPE *InsertEmbedded) (ITfRange *This, TfEditCookie ec, DWORD dwFlags, IDataObject *pDataObject);
	HRESULT(STDMETHODCALLTYPE *ShiftStart) (ITfRange *This, TfEditCookie ec, LONG cchReq, LONG *pcch, const TF_HALTCOND *pHalt);
	HRESULT(STDMETHODCALLTYPE *ShiftEnd) (ITfRange *This, TfEditCookie ec, LONG cchReq, LONG *pcch, const TF_HALTCOND *pHalt);
	HRESULT(STDMETHODCALLTYPE *ShiftStartToRange) (ITfRange *This, TfEditCookie ec, ITfRange *pRange, TfAnchor aPos);
	HRESULT(STDMETHODCALLTYPE *ShiftEndToRange) (ITfRange *This, TfEditCookie ec, ITfRange *pRange, TfAnchor aPos);
	HRESULT(STDMETHODCALLTYPE *ShiftStartRegion) (ITfRange *This, TfEditCookie ec, TfShiftDir dir, BOOL *pfNoRegion);
	HRESULT(STDMETHODCALLTYPE *ShiftEndRegion) (ITfRange *This, TfEditCookie ec, TfShiftDir dir, BOOL *pfNoRegion);
	HRESULT(STDMETHODCALLTYPE *IsEmpty) (ITfRange *This, TfEditCookie ec, BOOL *pfEmpty);
	HRESULT(STDMETHODCALLTYPE *Collapse) (ITfRange *This, TfEditCookie ec, TfAnchor aPos);
	HRESULT(STDMETHODCALLTYPE *IsEqualStart) (ITfRange *This, TfEditCookie ec, ITfRange *pWith, TfAnchor aPos, BOOL *pfEqual);
	HRESULT(STDMETHODCALLTYPE *IsEqualEnd) (ITfRange *This, TfEditCookie ec, ITfRange *pWith, TfAnchor aPos, BOOL *pfEqual);
	HRESULT(STDMETHODCALLTYPE *CompareStart) (ITfRange *This, TfEditCookie ec, ITfRange *pWith, TfAnchor aPos, LONG *plResult);
	HRESULT(STDMETHODCALLTYPE *CompareEnd) (ITfRange *This, TfEditCookie ec, ITfRange *pWith, TfAnchor aPos, LONG *plResult);
	HRESULT(STDMETHODCALLTYPE *AdjustForInsert) (ITfRange *This, TfEditCookie ec, ULONG cchInsert, BOOL *pfInsertOk);
	HRESULT(STDMETHODCALLTYPE *GetGravity) (ITfRange *This, TfGravity *pgStart, TfGravity *pgEnd);
	HRESULT(STDMETHODCALLTYPE *SetGravity) (ITfRange *This, TfEditCookie ec, TfGravity gStart, TfGravity gEnd);
	HRESULT(STDMETHODCALLTYPE *Clone) (ITfRange *This, ITfRange **ppClone);
	HRESULT(STDMETHODCALLTYPE *GetContext) (ITfRange *This, ITfContext **ppContext);
	END_INTERFACE
}  ITfRangeVtbl;
interface ITfRange
{
	CONST_VTBL struct ITfRangeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfRange_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfRange_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfRange_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfRange_GetText(This,ec,dwFlags,pchText,cchMax,pcch)( (This)->lpVtbl -> GetText(This,ec,dwFlags,pchText,cchMax,pcch) )
#define ITfRange_SetText(This,ec,dwFlags,pchText,cch)( (This)->lpVtbl -> SetText(This,ec,dwFlags,pchText,cch) )
#define ITfRange_GetFormattedText(This,ec,ppDataObject)( (This)->lpVtbl -> GetFormattedText(This,ec,ppDataObject) )
#define ITfRange_GetEmbedded(This,ec,rguidService,riid,ppunk)( (This)->lpVtbl -> GetEmbedded(This,ec,rguidService,riid,ppunk) )
#define ITfRange_InsertEmbedded(This,ec,dwFlags,pDataObject)( (This)->lpVtbl -> InsertEmbedded(This,ec,dwFlags,pDataObject) )
#define ITfRange_ShiftStart(This,ec,cchReq,pcch,pHalt)( (This)->lpVtbl -> ShiftStart(This,ec,cchReq,pcch,pHalt) )
#define ITfRange_ShiftEnd(This,ec,cchReq,pcch,pHalt)( (This)->lpVtbl -> ShiftEnd(This,ec,cchReq,pcch,pHalt) )
#define ITfRange_ShiftStartToRange(This,ec,pRange,aPos)( (This)->lpVtbl -> ShiftStartToRange(This,ec,pRange,aPos) )
#define ITfRange_ShiftEndToRange(This,ec,pRange,aPos)( (This)->lpVtbl -> ShiftEndToRange(This,ec,pRange,aPos) )
#define ITfRange_ShiftStartRegion(This,ec,dir,pfNoRegion)( (This)->lpVtbl -> ShiftStartRegion(This,ec,dir,pfNoRegion) )
#define ITfRange_ShiftEndRegion(This,ec,dir,pfNoRegion)( (This)->lpVtbl -> ShiftEndRegion(This,ec,dir,pfNoRegion) )
#define ITfRange_IsEmpty(This,ec,pfEmpty)( (This)->lpVtbl -> IsEmpty(This,ec,pfEmpty) )
#define ITfRange_Collapse(This,ec,aPos)( (This)->lpVtbl -> Collapse(This,ec,aPos) )
#define ITfRange_IsEqualStart(This,ec,pWith,aPos,pfEqual)( (This)->lpVtbl -> IsEqualStart(This,ec,pWith,aPos,pfEqual) )
#define ITfRange_IsEqualEnd(This,ec,pWith,aPos,pfEqual)( (This)->lpVtbl -> IsEqualEnd(This,ec,pWith,aPos,pfEqual) )
#define ITfRange_CompareStart(This,ec,pWith,aPos,plResult)( (This)->lpVtbl -> CompareStart(This,ec,pWith,aPos,plResult) )
#define ITfRange_CompareEnd(This,ec,pWith,aPos,plResult)( (This)->lpVtbl -> CompareEnd(This,ec,pWith,aPos,plResult) )
#define ITfRange_AdjustForInsert(This,ec,cchInsert,pfInsertOk)( (This)->lpVtbl -> AdjustForInsert(This,ec,cchInsert,pfInsertOk) )
#define ITfRange_GetGravity(This,pgStart,pgEnd)( (This)->lpVtbl -> GetGravity(This,pgStart,pgEnd) )
#define ITfRange_SetGravity(This,ec,gStart,gEnd)( (This)->lpVtbl -> SetGravity(This,ec,gStart,gEnd) )
#define ITfRange_Clone(This,ppClone)( (This)->lpVtbl -> Clone(This,ppClone) )
#define ITfRange_GetContext(This,ppContext)( (This)->lpVtbl -> GetContext(This,ppContext) )
#endif
#endif
#ifndef __ITfRangeACP_INTERFACE_DEFINED__
#define __ITfRangeACP_INTERFACE_DEFINED__
extern const IID IID_ITfRangeACP;
typedef struct ITfRangeACPVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfRangeACP *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfRangeACP *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfRangeACP *This);
	HRESULT(STDMETHODCALLTYPE *GetText) (ITfRangeACP *This, TfEditCookie ec, DWORD dwFlags, WCHAR *pchText, ULONG cchMax, ULONG *pcch);
	HRESULT(STDMETHODCALLTYPE *SetText) (ITfRangeACP *This, TfEditCookie ec, DWORD dwFlags, const WCHAR *pchText, LONG cch);
	HRESULT(STDMETHODCALLTYPE *GetFormattedText) (ITfRangeACP *This, TfEditCookie ec, IDataObject **ppDataObject);
	HRESULT(STDMETHODCALLTYPE *GetEmbedded) (ITfRangeACP *This, TfEditCookie ec, REFGUID rguidService, REFIID riid, IUnknown **ppunk);
	HRESULT(STDMETHODCALLTYPE *InsertEmbedded) (ITfRangeACP *This, TfEditCookie ec, DWORD dwFlags, IDataObject *pDataObject);
	HRESULT(STDMETHODCALLTYPE *ShiftStart) (ITfRangeACP *This, TfEditCookie ec, LONG cchReq, LONG *pcch, const TF_HALTCOND *pHalt);
	HRESULT(STDMETHODCALLTYPE *ShiftEnd) (ITfRangeACP *This, TfEditCookie ec, LONG cchReq, LONG *pcch, const TF_HALTCOND *pHalt);
	HRESULT(STDMETHODCALLTYPE *ShiftStartToRange) (ITfRangeACP *This, TfEditCookie ec, ITfRange *pRange, TfAnchor aPos);
	HRESULT(STDMETHODCALLTYPE *ShiftEndToRange) (ITfRangeACP *This, TfEditCookie ec, ITfRange *pRange, TfAnchor aPos);
	HRESULT(STDMETHODCALLTYPE *ShiftStartRegion) (ITfRangeACP *This, TfEditCookie ec, TfShiftDir dir, BOOL *pfNoRegion);
	HRESULT(STDMETHODCALLTYPE *ShiftEndRegion) (ITfRangeACP *This, TfEditCookie ec, TfShiftDir dir, BOOL *pfNoRegion);
	HRESULT(STDMETHODCALLTYPE *IsEmpty) (ITfRangeACP *This, TfEditCookie ec, BOOL *pfEmpty);
	HRESULT(STDMETHODCALLTYPE *Collapse) (ITfRangeACP *This, TfEditCookie ec, TfAnchor aPos);
	HRESULT(STDMETHODCALLTYPE *IsEqualStart) (ITfRangeACP *This, TfEditCookie ec, ITfRange *pWith, TfAnchor aPos, BOOL *pfEqual);
	HRESULT(STDMETHODCALLTYPE *IsEqualEnd) (ITfRangeACP *This, TfEditCookie ec, ITfRange *pWith, TfAnchor aPos, BOOL *pfEqual);
	HRESULT(STDMETHODCALLTYPE *CompareStart) (ITfRangeACP *This, TfEditCookie ec, ITfRange *pWith, TfAnchor aPos, LONG *plResult);
	HRESULT(STDMETHODCALLTYPE *CompareEnd) (ITfRangeACP *This, TfEditCookie ec, ITfRange *pWith, TfAnchor aPos, LONG *plResult);
	HRESULT(STDMETHODCALLTYPE *AdjustForInsert) (ITfRangeACP *This, TfEditCookie ec, ULONG cchInsert, BOOL *pfInsertOk);
	HRESULT(STDMETHODCALLTYPE *GetGravity) (ITfRangeACP *This, TfGravity *pgStart, TfGravity *pgEnd);
	HRESULT(STDMETHODCALLTYPE *SetGravity) (ITfRangeACP *This, TfEditCookie ec, TfGravity gStart, TfGravity gEnd);
	HRESULT(STDMETHODCALLTYPE *Clone) (ITfRangeACP *This, ITfRange **ppClone);
	HRESULT(STDMETHODCALLTYPE *GetContext) (ITfRangeACP *This, ITfContext **ppContext);
	HRESULT(STDMETHODCALLTYPE *GetExtent) (ITfRangeACP *This, LONG *pacpAnchor, LONG *pcch);
	HRESULT(STDMETHODCALLTYPE *SetExtent) (ITfRangeACP *This, LONG acpAnchor, LONG cch);
	END_INTERFACE
}  ITfRangeACPVtbl;
interface ITfRangeACP
{
	CONST_VTBL struct ITfRangeACPVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfRangeACP_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfRangeACP_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfRangeACP_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfRangeACP_GetText(This,ec,dwFlags,pchText,cchMax,pcch)( (This)->lpVtbl -> GetText(This,ec,dwFlags,pchText,cchMax,pcch) )
#define ITfRangeACP_SetText(This,ec,dwFlags,pchText,cch)( (This)->lpVtbl -> SetText(This,ec,dwFlags,pchText,cch) )
#define ITfRangeACP_GetFormattedText(This,ec,ppDataObject)( (This)->lpVtbl -> GetFormattedText(This,ec,ppDataObject) )
#define ITfRangeACP_GetEmbedded(This,ec,rguidService,riid,ppunk)( (This)->lpVtbl -> GetEmbedded(This,ec,rguidService,riid,ppunk) )
#define ITfRangeACP_InsertEmbedded(This,ec,dwFlags,pDataObject)( (This)->lpVtbl -> InsertEmbedded(This,ec,dwFlags,pDataObject) )
#define ITfRangeACP_ShiftStart(This,ec,cchReq,pcch,pHalt)( (This)->lpVtbl -> ShiftStart(This,ec,cchReq,pcch,pHalt) )
#define ITfRangeACP_ShiftEnd(This,ec,cchReq,pcch,pHalt)( (This)->lpVtbl -> ShiftEnd(This,ec,cchReq,pcch,pHalt) )
#define ITfRangeACP_ShiftStartToRange(This,ec,pRange,aPos)( (This)->lpVtbl -> ShiftStartToRange(This,ec,pRange,aPos) )
#define ITfRangeACP_ShiftEndToRange(This,ec,pRange,aPos)( (This)->lpVtbl -> ShiftEndToRange(This,ec,pRange,aPos) )
#define ITfRangeACP_ShiftStartRegion(This,ec,dir,pfNoRegion)( (This)->lpVtbl -> ShiftStartRegion(This,ec,dir,pfNoRegion) )
#define ITfRangeACP_ShiftEndRegion(This,ec,dir,pfNoRegion)( (This)->lpVtbl -> ShiftEndRegion(This,ec,dir,pfNoRegion) )
#define ITfRangeACP_IsEmpty(This,ec,pfEmpty)( (This)->lpVtbl -> IsEmpty(This,ec,pfEmpty) )
#define ITfRangeACP_Collapse(This,ec,aPos)( (This)->lpVtbl -> Collapse(This,ec,aPos) )
#define ITfRangeACP_IsEqualStart(This,ec,pWith,aPos,pfEqual)( (This)->lpVtbl -> IsEqualStart(This,ec,pWith,aPos,pfEqual) )
#define ITfRangeACP_IsEqualEnd(This,ec,pWith,aPos,pfEqual)( (This)->lpVtbl -> IsEqualEnd(This,ec,pWith,aPos,pfEqual) )
#define ITfRangeACP_CompareStart(This,ec,pWith,aPos,plResult)( (This)->lpVtbl -> CompareStart(This,ec,pWith,aPos,plResult) )
#define ITfRangeACP_CompareEnd(This,ec,pWith,aPos,plResult)( (This)->lpVtbl -> CompareEnd(This,ec,pWith,aPos,plResult) )
#define ITfRangeACP_AdjustForInsert(This,ec,cchInsert,pfInsertOk)( (This)->lpVtbl -> AdjustForInsert(This,ec,cchInsert,pfInsertOk) )
#define ITfRangeACP_GetGravity(This,pgStart,pgEnd)( (This)->lpVtbl -> GetGravity(This,pgStart,pgEnd) )
#define ITfRangeACP_SetGravity(This,ec,gStart,gEnd)( (This)->lpVtbl -> SetGravity(This,ec,gStart,gEnd) )
#define ITfRangeACP_Clone(This,ppClone)( (This)->lpVtbl -> Clone(This,ppClone) )
#define ITfRangeACP_GetContext(This,ppContext)( (This)->lpVtbl -> GetContext(This,ppContext) )
#define ITfRangeACP_GetExtent(This,pacpAnchor,pcch)( (This)->lpVtbl -> GetExtent(This,pacpAnchor,pcch) )
#define ITfRangeACP_SetExtent(This,acpAnchor,cch)( (This)->lpVtbl -> SetExtent(This,acpAnchor,cch) )
#endif
#endif
#ifndef __ITextStoreACPServices_INTERFACE_DEFINED__
#define __ITextStoreACPServices_INTERFACE_DEFINED__
extern const IID IID_ITextStoreACPServices;
typedef struct ITextStoreACPServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITextStoreACPServices *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITextStoreACPServices *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITextStoreACPServices *This);
	HRESULT(STDMETHODCALLTYPE *Serialize) (ITextStoreACPServices *This, ITfProperty *pProp, ITfRange *pRange, TF_PERSISTENT_PROPERTY_HEADER_ACP *pHdr, IStream *pStream);
	HRESULT(STDMETHODCALLTYPE *Unserialize) (ITextStoreACPServices *This, ITfProperty *pProp, const TF_PERSISTENT_PROPERTY_HEADER_ACP *pHdr, IStream *pStream, ITfPersistentPropertyLoaderACP *pLoader);
	HRESULT(STDMETHODCALLTYPE *ForceLoadProperty) (ITextStoreACPServices *This, ITfProperty *pProp);
	HRESULT(STDMETHODCALLTYPE *CreateRange) (ITextStoreACPServices *This, LONG acpStart, LONG acpEnd, ITfRangeACP **ppRange);
	END_INTERFACE
}  ITextStoreACPServicesVtbl;
interface ITextStoreACPServices
{
	CONST_VTBL struct ITextStoreACPServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITextStoreACPServices_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITextStoreACPServices_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITextStoreACPServices_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITextStoreACPServices_Serialize(This,pProp,pRange,pHdr,pStream)( (This)->lpVtbl -> Serialize(This,pProp,pRange,pHdr,pStream) )
#define ITextStoreACPServices_Unserialize(This,pProp,pHdr,pStream,pLoader)( (This)->lpVtbl -> Unserialize(This,pProp,pHdr,pStream,pLoader) )
#define ITextStoreACPServices_ForceLoadProperty(This,pProp)( (This)->lpVtbl -> ForceLoadProperty(This,pProp) )
#define ITextStoreACPServices_CreateRange(This,acpStart,acpEnd,ppRange)( (This)->lpVtbl -> CreateRange(This,acpStart,acpEnd,ppRange) )
#endif
#endif
#ifndef __ITfRangeBackup_INTERFACE_DEFINED__
#define __ITfRangeBackup_INTERFACE_DEFINED__
extern const IID IID_ITfRangeBackup;
typedef struct ITfRangeBackupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfRangeBackup *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfRangeBackup *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfRangeBackup *This);
	HRESULT(STDMETHODCALLTYPE *Restore) (ITfRangeBackup *This, TfEditCookie ec, ITfRange *pRange);
	END_INTERFACE
}  ITfRangeBackupVtbl;
interface ITfRangeBackup
{
	CONST_VTBL struct ITfRangeBackupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfRangeBackup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfRangeBackup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfRangeBackup_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfRangeBackup_Restore(This,ec,pRange)( (This)->lpVtbl -> Restore(This,ec,pRange) )
#endif
#endif
#ifndef __ITfPropertyStore_INTERFACE_DEFINED__
#define __ITfPropertyStore_INTERFACE_DEFINED__
#define	TF_TU_CORRECTION	( 0x1 )
extern const IID IID_ITfPropertyStore;
typedef struct ITfPropertyStoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfPropertyStore *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfPropertyStore *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfPropertyStore *This);
	HRESULT(STDMETHODCALLTYPE *GetType) (ITfPropertyStore *This, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *GetDataType) (ITfPropertyStore *This, DWORD *pdwReserved);
	HRESULT(STDMETHODCALLTYPE *GetData) (ITfPropertyStore *This, VARIANT *pvarValue);
	HRESULT(STDMETHODCALLTYPE *OnTextUpdated) (ITfPropertyStore *This, DWORD dwFlags, ITfRange *pRangeNew, BOOL *pfAccept);
	HRESULT(STDMETHODCALLTYPE *Shrink) (ITfPropertyStore *This, ITfRange *pRangeNew, BOOL *pfFree);
	HRESULT(STDMETHODCALLTYPE *Divide) (ITfPropertyStore *This, ITfRange *pRangeThis, ITfRange *pRangeNew, ITfPropertyStore **ppPropStore);
	HRESULT(STDMETHODCALLTYPE *Clone) (ITfPropertyStore *This, ITfPropertyStore **pPropStore);
	HRESULT(STDMETHODCALLTYPE *GetPropertyRangeCreator) (ITfPropertyStore *This, CLSID *pclsid);
	HRESULT(STDMETHODCALLTYPE *Serialize) (ITfPropertyStore *This, IStream *pStream, ULONG *pcb);
	END_INTERFACE
}  ITfPropertyStoreVtbl;
interface ITfPropertyStore
{
	CONST_VTBL struct ITfPropertyStoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfPropertyStore_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfPropertyStore_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfPropertyStore_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfPropertyStore_GetType(This,pguid)( (This)->lpVtbl -> GetType(This,pguid) )
#define ITfPropertyStore_GetDataType(This,pdwReserved)( (This)->lpVtbl -> GetDataType(This,pdwReserved) )
#define ITfPropertyStore_GetData(This,pvarValue)( (This)->lpVtbl -> GetData(This,pvarValue) )
#define ITfPropertyStore_OnTextUpdated(This,dwFlags,pRangeNew,pfAccept)( (This)->lpVtbl -> OnTextUpdated(This,dwFlags,pRangeNew,pfAccept) )
#define ITfPropertyStore_Shrink(This,pRangeNew,pfFree)( (This)->lpVtbl -> Shrink(This,pRangeNew,pfFree) )
#define ITfPropertyStore_Divide(This,pRangeThis,pRangeNew,ppPropStore)( (This)->lpVtbl -> Divide(This,pRangeThis,pRangeNew,ppPropStore) )
#define ITfPropertyStore_Clone(This,pPropStore)( (This)->lpVtbl -> Clone(This,pPropStore) )
#define ITfPropertyStore_GetPropertyRangeCreator(This,pclsid)( (This)->lpVtbl -> GetPropertyRangeCreator(This,pclsid) )
#define ITfPropertyStore_Serialize(This,pStream,pcb)( (This)->lpVtbl -> Serialize(This,pStream,pcb) )
#endif
#endif
#ifndef __IEnumTfRanges_INTERFACE_DEFINED__
#define __IEnumTfRanges_INTERFACE_DEFINED__
extern const IID IID_IEnumTfRanges;
typedef struct IEnumTfRangesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumTfRanges *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumTfRanges *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumTfRanges *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumTfRanges *This, IEnumTfRanges **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumTfRanges *This, ULONG ulCount, ITfRange **ppRange, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumTfRanges *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumTfRanges *This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfRangesVtbl;
interface IEnumTfRanges
{
	CONST_VTBL struct IEnumTfRangesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfRanges_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfRanges_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfRanges_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfRanges_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfRanges_Next(This,ulCount,ppRange,pcFetched)( (This)->lpVtbl -> Next(This,ulCount,ppRange,pcFetched) )
#define IEnumTfRanges_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfRanges_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfCreatePropertyStore_INTERFACE_DEFINED__
#define __ITfCreatePropertyStore_INTERFACE_DEFINED__
extern const IID IID_ITfCreatePropertyStore;
typedef struct ITfCreatePropertyStoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfCreatePropertyStore *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfCreatePropertyStore *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfCreatePropertyStore *This);
	HRESULT(STDMETHODCALLTYPE *IsStoreSerializable) (ITfCreatePropertyStore *This, REFGUID guidProp, ITfRange *pRange, ITfPropertyStore *pPropStore, BOOL *pfSerializable);
	HRESULT(STDMETHODCALLTYPE *CreatePropertyStore) (ITfCreatePropertyStore *This, REFGUID guidProp, ITfRange *pRange, ULONG cb, IStream *pStream, ITfPropertyStore **ppStore);
	END_INTERFACE
}  ITfCreatePropertyStoreVtbl;
interface ITfCreatePropertyStore
{
	CONST_VTBL struct ITfCreatePropertyStoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfCreatePropertyStore_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfCreatePropertyStore_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfCreatePropertyStore_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfCreatePropertyStore_IsStoreSerializable(This,guidProp,pRange,pPropStore,pfSerializable)( (This)->lpVtbl -> IsStoreSerializable(This,guidProp,pRange,pPropStore,pfSerializable) )
#define ITfCreatePropertyStore_CreatePropertyStore(This,guidProp,pRange,cb,pStream,ppStore)( (This)->lpVtbl -> CreatePropertyStore(This,guidProp,pRange,cb,pStream,ppStore) )
#endif
#endif
#ifndef __ITfPersistentPropertyLoaderACP_INTERFACE_DEFINED__
#define __ITfPersistentPropertyLoaderACP_INTERFACE_DEFINED__
extern const IID IID_ITfPersistentPropertyLoaderACP;
typedef struct ITfPersistentPropertyLoaderACPVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfPersistentPropertyLoaderACP *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfPersistentPropertyLoaderACP *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfPersistentPropertyLoaderACP *This);
	HRESULT(STDMETHODCALLTYPE *LoadProperty) (ITfPersistentPropertyLoaderACP *This, const TF_PERSISTENT_PROPERTY_HEADER_ACP *pHdr, IStream **ppStream);
	END_INTERFACE
}  ITfPersistentPropertyLoaderACPVtbl;
interface ITfPersistentPropertyLoaderACP
{
	CONST_VTBL struct ITfPersistentPropertyLoaderACPVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfPersistentPropertyLoaderACP_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfPersistentPropertyLoaderACP_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfPersistentPropertyLoaderACP_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfPersistentPropertyLoaderACP_LoadProperty(This,pHdr,ppStream)( (This)->lpVtbl -> LoadProperty(This,pHdr,ppStream) )
#endif
#endif
#ifndef __ITfProperty_INTERFACE_DEFINED__
#define __ITfProperty_INTERFACE_DEFINED__
extern const IID IID_ITfProperty;
typedef struct ITfPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfProperty *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfProperty *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfProperty *This);
	HRESULT(STDMETHODCALLTYPE *GetType) (ITfProperty *This, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *EnumRanges) (ITfProperty *This, TfEditCookie ec, IEnumTfRanges **ppEnum, ITfRange *pTargetRange);
	HRESULT(STDMETHODCALLTYPE *GetValue) (ITfProperty *This, TfEditCookie ec, ITfRange *pRange, VARIANT *pvarValue);
	HRESULT(STDMETHODCALLTYPE *GetContext) (ITfProperty *This, ITfContext **ppContext);
	HRESULT(STDMETHODCALLTYPE *FindRange) (ITfProperty *This, TfEditCookie ec, ITfRange *pRange, ITfRange **ppRange, TfAnchor aPos);
	HRESULT(STDMETHODCALLTYPE *SetValueStore) (ITfProperty *This, TfEditCookie ec, ITfRange *pRange, ITfPropertyStore *pPropStore);
	HRESULT(STDMETHODCALLTYPE *SetValue) (ITfProperty *This, TfEditCookie ec, ITfRange *pRange, const VARIANT *pvarValue);
	HRESULT(STDMETHODCALLTYPE *Clear) (ITfProperty *This, TfEditCookie ec, ITfRange *pRange);
	END_INTERFACE
}  ITfPropertyVtbl;
interface ITfProperty
{
	CONST_VTBL struct ITfPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfProperty_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfProperty_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfProperty_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfProperty_GetType(This,pguid)( (This)->lpVtbl -> GetType(This,pguid) )
#define ITfProperty_EnumRanges(This,ec,ppEnum,pTargetRange)( (This)->lpVtbl -> EnumRanges(This,ec,ppEnum,pTargetRange) )
#define ITfProperty_GetValue(This,ec,pRange,pvarValue)( (This)->lpVtbl -> GetValue(This,ec,pRange,pvarValue) )
#define ITfProperty_GetContext(This,ppContext)( (This)->lpVtbl -> GetContext(This,ppContext) )
#define ITfProperty_FindRange(This,ec,pRange,ppRange,aPos)( (This)->lpVtbl -> FindRange(This,ec,pRange,ppRange,aPos) )
#define ITfProperty_SetValueStore(This,ec,pRange,pPropStore)( (This)->lpVtbl -> SetValueStore(This,ec,pRange,pPropStore) )
#define ITfProperty_SetValue(This,ec,pRange,pvarValue)( (This)->lpVtbl -> SetValue(This,ec,pRange,pvarValue) )
#define ITfProperty_Clear(This,ec,pRange)( (This)->lpVtbl -> Clear(This,ec,pRange) )
#endif
#endif
#ifndef __IEnumTfProperties_INTERFACE_DEFINED__
#define __IEnumTfProperties_INTERFACE_DEFINED__
extern const IID IID_IEnumTfProperties;
typedef struct IEnumTfPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumTfProperties *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumTfProperties *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumTfProperties *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumTfProperties *This, IEnumTfProperties **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumTfProperties *This, ULONG ulCount, ITfProperty **ppProp, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumTfProperties *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumTfProperties *This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfPropertiesVtbl;
interface IEnumTfProperties
{
	CONST_VTBL struct IEnumTfPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfProperties_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfProperties_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfProperties_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfProperties_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfProperties_Next(This,ulCount,ppProp,pcFetched)( (This)->lpVtbl -> Next(This,ulCount,ppProp,pcFetched) )
#define IEnumTfProperties_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfProperties_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfCompartment_INTERFACE_DEFINED__
#define __ITfCompartment_INTERFACE_DEFINED__
extern const IID IID_ITfCompartment;
typedef struct ITfCompartmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfCompartment *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfCompartment *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfCompartment *This);
	HRESULT(STDMETHODCALLTYPE *SetValue) (ITfCompartment *This, TfClientId tid, const VARIANT *pvarValue);
	HRESULT(STDMETHODCALLTYPE *GetValue) (ITfCompartment *This, VARIANT *pvarValue);
	END_INTERFACE
}  ITfCompartmentVtbl;
interface ITfCompartment
{
	CONST_VTBL struct ITfCompartmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfCompartment_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfCompartment_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfCompartment_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfCompartment_SetValue(This,tid,pvarValue)( (This)->lpVtbl -> SetValue(This,tid,pvarValue) )
#define ITfCompartment_GetValue(This,pvarValue)( (This)->lpVtbl -> GetValue(This,pvarValue) )
#endif
#endif
#ifndef __ITfCompartmentEventSink_INTERFACE_DEFINED__
#define __ITfCompartmentEventSink_INTERFACE_DEFINED__
extern const IID IID_ITfCompartmentEventSink;
typedef struct ITfCompartmentEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfCompartmentEventSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfCompartmentEventSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfCompartmentEventSink *This);
	HRESULT(STDMETHODCALLTYPE *OnChange) (ITfCompartmentEventSink *This, REFGUID rguid);
	END_INTERFACE
}  ITfCompartmentEventSinkVtbl;
interface ITfCompartmentEventSink
{
	CONST_VTBL struct ITfCompartmentEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfCompartmentEventSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfCompartmentEventSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfCompartmentEventSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfCompartmentEventSink_OnChange(This,rguid)( (This)->lpVtbl -> OnChange(This,rguid) )
#endif
#endif
#ifndef __ITfCompartmentMgr_INTERFACE_DEFINED__
#define __ITfCompartmentMgr_INTERFACE_DEFINED__
extern const IID IID_ITfCompartmentMgr;
typedef struct ITfCompartmentMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfCompartmentMgr *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfCompartmentMgr *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfCompartmentMgr *This);
	HRESULT(STDMETHODCALLTYPE *GetCompartment) (ITfCompartmentMgr *This, REFGUID rguid, ITfCompartment **ppcomp);
	HRESULT(STDMETHODCALLTYPE *ClearCompartment) (ITfCompartmentMgr *This, TfClientId tid, REFGUID rguid);
	HRESULT(STDMETHODCALLTYPE *EnumCompartments) (ITfCompartmentMgr *This, IEnumGUID **ppEnum);
	END_INTERFACE
}  ITfCompartmentMgrVtbl;
interface ITfCompartmentMgr
{
	CONST_VTBL struct ITfCompartmentMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfCompartmentMgr_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfCompartmentMgr_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfCompartmentMgr_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfCompartmentMgr_GetCompartment(This,rguid,ppcomp)( (This)->lpVtbl -> GetCompartment(This,rguid,ppcomp) )
#define ITfCompartmentMgr_ClearCompartment(This,tid,rguid)( (This)->lpVtbl -> ClearCompartment(This,tid,rguid) )
#define ITfCompartmentMgr_EnumCompartments(This,ppEnum)( (This)->lpVtbl -> EnumCompartments(This,ppEnum) )
#endif
#endif
#ifndef __ITfFunction_INTERFACE_DEFINED__
#define __ITfFunction_INTERFACE_DEFINED__
extern const IID IID_ITfFunction;
typedef struct ITfFunctionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFunction *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFunction *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFunction *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFunction *This, BSTR *pbstrName);
	END_INTERFACE
}  ITfFunctionVtbl;
interface ITfFunction
{
	CONST_VTBL struct ITfFunctionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFunction_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFunction_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFunction_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFunction_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#endif
#endif
#ifndef __ITfFunctionProvider_INTERFACE_DEFINED__
#define __ITfFunctionProvider_INTERFACE_DEFINED__
extern const IID IID_ITfFunctionProvider;
typedef struct ITfFunctionProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFunctionProvider *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFunctionProvider *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFunctionProvider *This);
	HRESULT(STDMETHODCALLTYPE *GetType) (ITfFunctionProvider *This, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *GetDescription) (ITfFunctionProvider *This, BSTR *pbstrDesc);
	HRESULT(STDMETHODCALLTYPE *GetFunction) (ITfFunctionProvider *This, REFGUID rguid, REFIID riid, IUnknown **ppunk);
	END_INTERFACE
}  ITfFunctionProviderVtbl;
interface ITfFunctionProvider
{
	CONST_VTBL struct ITfFunctionProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFunctionProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFunctionProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFunctionProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFunctionProvider_GetType(This,pguid)( (This)->lpVtbl -> GetType(This,pguid) )
#define ITfFunctionProvider_GetDescription(This,pbstrDesc)( (This)->lpVtbl -> GetDescription(This,pbstrDesc) )
#define ITfFunctionProvider_GetFunction(This,rguid,riid,ppunk)( (This)->lpVtbl -> GetFunction(This,rguid,riid,ppunk) )
#endif
#endif
#ifndef __IEnumTfFunctionProviders_INTERFACE_DEFINED__
#define __IEnumTfFunctionProviders_INTERFACE_DEFINED__
extern const IID IID_IEnumTfFunctionProviders;
typedef struct IEnumTfFunctionProvidersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumTfFunctionProviders *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumTfFunctionProviders *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumTfFunctionProviders *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumTfFunctionProviders *This, IEnumTfFunctionProviders **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumTfFunctionProviders *This, ULONG ulCount, ITfFunctionProvider **ppCmdobj, ULONG *pcFetch);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumTfFunctionProviders *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumTfFunctionProviders *This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfFunctionProvidersVtbl;
interface IEnumTfFunctionProviders
{
	CONST_VTBL struct IEnumTfFunctionProvidersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfFunctionProviders_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfFunctionProviders_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfFunctionProviders_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfFunctionProviders_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfFunctionProviders_Next(This,ulCount,ppCmdobj,pcFetch)( (This)->lpVtbl -> Next(This,ulCount,ppCmdobj,pcFetch) )
#define IEnumTfFunctionProviders_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfFunctionProviders_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfInputProcessorProfiles_INTERFACE_DEFINED__
#define __ITfInputProcessorProfiles_INTERFACE_DEFINED__
extern const IID IID_ITfInputProcessorProfiles;
typedef struct ITfInputProcessorProfilesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfInputProcessorProfiles *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfInputProcessorProfiles *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfInputProcessorProfiles *This);
	HRESULT(STDMETHODCALLTYPE *Register) (ITfInputProcessorProfiles *This, REFCLSID rclsid);
	HRESULT(STDMETHODCALLTYPE *Unregister) (ITfInputProcessorProfiles *This, REFCLSID rclsid);
	HRESULT(STDMETHODCALLTYPE *AddLanguageProfile) (ITfInputProcessorProfiles *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, const WCHAR *pchDesc, ULONG cchDesc, const WCHAR *pchIconFile, ULONG cchFile, ULONG uIconIndex);
	HRESULT(STDMETHODCALLTYPE *RemoveLanguageProfile) (ITfInputProcessorProfiles *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile);
	HRESULT(STDMETHODCALLTYPE *EnumInputProcessorInfo) (ITfInputProcessorProfiles *This, IEnumGUID **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetDefaultLanguageProfile) (ITfInputProcessorProfiles *This, LANGID langid, REFGUID catid, CLSID *pclsid, GUID *pguidProfile);
	HRESULT(STDMETHODCALLTYPE *SetDefaultLanguageProfile) (ITfInputProcessorProfiles *This, LANGID langid, REFCLSID rclsid, REFGUID guidProfiles);
	HRESULT(STDMETHODCALLTYPE *ActivateLanguageProfile) (ITfInputProcessorProfiles *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfiles);
	HRESULT(STDMETHODCALLTYPE *GetActiveLanguageProfile) (ITfInputProcessorProfiles *This, REFCLSID rclsid, LANGID *plangid, GUID *pguidProfile);
	HRESULT(STDMETHODCALLTYPE *GetLanguageProfileDescription) (ITfInputProcessorProfiles *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, BSTR *pbstrProfile);
	HRESULT(STDMETHODCALLTYPE *GetCurrentLanguage) (ITfInputProcessorProfiles *This, LANGID *plangid);
	HRESULT(STDMETHODCALLTYPE *ChangeCurrentLanguage) (ITfInputProcessorProfiles *This, LANGID langid);
	HRESULT(STDMETHODCALLTYPE *GetLanguageList) (ITfInputProcessorProfiles *This, LANGID **ppLangId, ULONG *pulCount);
	HRESULT(STDMETHODCALLTYPE *EnumLanguageProfiles) (ITfInputProcessorProfiles *This, LANGID langid, IEnumTfLanguageProfiles **ppEnum);
	HRESULT(STDMETHODCALLTYPE *EnableLanguageProfile) (ITfInputProcessorProfiles *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE *IsEnabledLanguageProfile) (ITfInputProcessorProfiles *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, BOOL *pfEnable);
	HRESULT(STDMETHODCALLTYPE *EnableLanguageProfileByDefault) (ITfInputProcessorProfiles *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE *SubstituteKeyboardLayout) (ITfInputProcessorProfiles *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, HKL hKL);
	END_INTERFACE
}  ITfInputProcessorProfilesVtbl;
interface ITfInputProcessorProfiles
{
	CONST_VTBL struct ITfInputProcessorProfilesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfInputProcessorProfiles_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfInputProcessorProfiles_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfInputProcessorProfiles_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfInputProcessorProfiles_Register(This,rclsid)( (This)->lpVtbl -> Register(This,rclsid) )
#define ITfInputProcessorProfiles_Unregister(This,rclsid)( (This)->lpVtbl -> Unregister(This,rclsid) )
#define ITfInputProcessorProfiles_AddLanguageProfile(This,rclsid,langid,guidProfile,pchDesc,cchDesc,pchIconFile,cchFile,uIconIndex)( (This)->lpVtbl -> AddLanguageProfile(This,rclsid,langid,guidProfile,pchDesc,cchDesc,pchIconFile,cchFile,uIconIndex) )
#define ITfInputProcessorProfiles_RemoveLanguageProfile(This,rclsid,langid,guidProfile)( (This)->lpVtbl -> RemoveLanguageProfile(This,rclsid,langid,guidProfile) )
#define ITfInputProcessorProfiles_EnumInputProcessorInfo(This,ppEnum)( (This)->lpVtbl -> EnumInputProcessorInfo(This,ppEnum) )
#define ITfInputProcessorProfiles_GetDefaultLanguageProfile(This,langid,catid,pclsid,pguidProfile)( (This)->lpVtbl -> GetDefaultLanguageProfile(This,langid,catid,pclsid,pguidProfile) )
#define ITfInputProcessorProfiles_SetDefaultLanguageProfile(This,langid,rclsid,guidProfiles)( (This)->lpVtbl -> SetDefaultLanguageProfile(This,langid,rclsid,guidProfiles) )
#define ITfInputProcessorProfiles_ActivateLanguageProfile(This,rclsid,langid,guidProfiles)( (This)->lpVtbl -> ActivateLanguageProfile(This,rclsid,langid,guidProfiles) )
#define ITfInputProcessorProfiles_GetActiveLanguageProfile(This,rclsid,plangid,pguidProfile)( (This)->lpVtbl -> GetActiveLanguageProfile(This,rclsid,plangid,pguidProfile) )
#define ITfInputProcessorProfiles_GetLanguageProfileDescription(This,rclsid,langid,guidProfile,pbstrProfile)( (This)->lpVtbl -> GetLanguageProfileDescription(This,rclsid,langid,guidProfile,pbstrProfile) )
#define ITfInputProcessorProfiles_GetCurrentLanguage(This,plangid)( (This)->lpVtbl -> GetCurrentLanguage(This,plangid) )
#define ITfInputProcessorProfiles_ChangeCurrentLanguage(This,langid)( (This)->lpVtbl -> ChangeCurrentLanguage(This,langid) )
#define ITfInputProcessorProfiles_GetLanguageList(This,ppLangId,pulCount)( (This)->lpVtbl -> GetLanguageList(This,ppLangId,pulCount) )
#define ITfInputProcessorProfiles_EnumLanguageProfiles(This,langid,ppEnum)( (This)->lpVtbl -> EnumLanguageProfiles(This,langid,ppEnum) )
#define ITfInputProcessorProfiles_EnableLanguageProfile(This,rclsid,langid,guidProfile,fEnable)( (This)->lpVtbl -> EnableLanguageProfile(This,rclsid,langid,guidProfile,fEnable) )
#define ITfInputProcessorProfiles_IsEnabledLanguageProfile(This,rclsid,langid,guidProfile,pfEnable)( (This)->lpVtbl -> IsEnabledLanguageProfile(This,rclsid,langid,guidProfile,pfEnable) )
#define ITfInputProcessorProfiles_EnableLanguageProfileByDefault(This,rclsid,langid,guidProfile,fEnable)( (This)->lpVtbl -> EnableLanguageProfileByDefault(This,rclsid,langid,guidProfile,fEnable) )
#define ITfInputProcessorProfiles_SubstituteKeyboardLayout(This,rclsid,langid,guidProfile,hKL)( (This)->lpVtbl -> SubstituteKeyboardLayout(This,rclsid,langid,guidProfile,hKL) )
#endif
#endif
#ifndef __ITfInputProcessorProfilesEx_INTERFACE_DEFINED__
#define __ITfInputProcessorProfilesEx_INTERFACE_DEFINED__
extern const IID IID_ITfInputProcessorProfilesEx;
typedef struct ITfInputProcessorProfilesExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfInputProcessorProfilesEx *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfInputProcessorProfilesEx *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfInputProcessorProfilesEx *This);
	HRESULT(STDMETHODCALLTYPE *Register) (ITfInputProcessorProfilesEx *This, REFCLSID rclsid);
	HRESULT(STDMETHODCALLTYPE *Unregister) (ITfInputProcessorProfilesEx *This, REFCLSID rclsid);
	HRESULT(STDMETHODCALLTYPE *AddLanguageProfile) (ITfInputProcessorProfilesEx *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, const WCHAR *pchDesc, ULONG cchDesc, const WCHAR *pchIconFile, ULONG cchFile, ULONG uIconIndex);
	HRESULT(STDMETHODCALLTYPE *RemoveLanguageProfile) (ITfInputProcessorProfilesEx *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile);
	HRESULT(STDMETHODCALLTYPE *EnumInputProcessorInfo) (ITfInputProcessorProfilesEx *This, IEnumGUID **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetDefaultLanguageProfile) (ITfInputProcessorProfilesEx *This, LANGID langid, REFGUID catid, CLSID *pclsid, GUID *pguidProfile);
	HRESULT(STDMETHODCALLTYPE *SetDefaultLanguageProfile) (ITfInputProcessorProfilesEx *This, LANGID langid, REFCLSID rclsid, REFGUID guidProfiles);
	HRESULT(STDMETHODCALLTYPE *ActivateLanguageProfile) (ITfInputProcessorProfilesEx *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfiles);
	HRESULT(STDMETHODCALLTYPE *GetActiveLanguageProfile) (ITfInputProcessorProfilesEx *This, REFCLSID rclsid, LANGID *plangid, GUID *pguidProfile);
	HRESULT(STDMETHODCALLTYPE *GetLanguageProfileDescription) (ITfInputProcessorProfilesEx *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, BSTR *pbstrProfile);
	HRESULT(STDMETHODCALLTYPE *GetCurrentLanguage) (ITfInputProcessorProfilesEx *This, LANGID *plangid);
	HRESULT(STDMETHODCALLTYPE *ChangeCurrentLanguage) (ITfInputProcessorProfilesEx *This, LANGID langid);
	HRESULT(STDMETHODCALLTYPE *GetLanguageList) (ITfInputProcessorProfilesEx *This, LANGID **ppLangId, ULONG *pulCount);
	HRESULT(STDMETHODCALLTYPE *EnumLanguageProfiles) (ITfInputProcessorProfilesEx *This, LANGID langid, IEnumTfLanguageProfiles **ppEnum);
	HRESULT(STDMETHODCALLTYPE *EnableLanguageProfile) (ITfInputProcessorProfilesEx *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE *IsEnabledLanguageProfile) (ITfInputProcessorProfilesEx *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, BOOL *pfEnable);
	HRESULT(STDMETHODCALLTYPE *EnableLanguageProfileByDefault) (ITfInputProcessorProfilesEx *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE *SubstituteKeyboardLayout) (ITfInputProcessorProfilesEx *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, HKL hKL);
	HRESULT(STDMETHODCALLTYPE *SetLanguageProfileDisplayName) (ITfInputProcessorProfilesEx *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, const WCHAR *pchFile, ULONG cchFile, ULONG uResId);
	END_INTERFACE
}  ITfInputProcessorProfilesExVtbl;
interface ITfInputProcessorProfilesEx
{
	CONST_VTBL struct ITfInputProcessorProfilesExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfInputProcessorProfilesEx_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfInputProcessorProfilesEx_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfInputProcessorProfilesEx_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfInputProcessorProfilesEx_Register(This,rclsid)( (This)->lpVtbl -> Register(This,rclsid) )
#define ITfInputProcessorProfilesEx_Unregister(This,rclsid)( (This)->lpVtbl -> Unregister(This,rclsid) )
#define ITfInputProcessorProfilesEx_AddLanguageProfile(This,rclsid,langid,guidProfile,pchDesc,cchDesc,pchIconFile,cchFile,uIconIndex)( (This)->lpVtbl -> AddLanguageProfile(This,rclsid,langid,guidProfile,pchDesc,cchDesc,pchIconFile,cchFile,uIconIndex) )
#define ITfInputProcessorProfilesEx_RemoveLanguageProfile(This,rclsid,langid,guidProfile)( (This)->lpVtbl -> RemoveLanguageProfile(This,rclsid,langid,guidProfile) )
#define ITfInputProcessorProfilesEx_EnumInputProcessorInfo(This,ppEnum)( (This)->lpVtbl -> EnumInputProcessorInfo(This,ppEnum) )
#define ITfInputProcessorProfilesEx_GetDefaultLanguageProfile(This,langid,catid,pclsid,pguidProfile)( (This)->lpVtbl -> GetDefaultLanguageProfile(This,langid,catid,pclsid,pguidProfile) )
#define ITfInputProcessorProfilesEx_SetDefaultLanguageProfile(This,langid,rclsid,guidProfiles)( (This)->lpVtbl -> SetDefaultLanguageProfile(This,langid,rclsid,guidProfiles) )
#define ITfInputProcessorProfilesEx_ActivateLanguageProfile(This,rclsid,langid,guidProfiles)( (This)->lpVtbl -> ActivateLanguageProfile(This,rclsid,langid,guidProfiles) )
#define ITfInputProcessorProfilesEx_GetActiveLanguageProfile(This,rclsid,plangid,pguidProfile)( (This)->lpVtbl -> GetActiveLanguageProfile(This,rclsid,plangid,pguidProfile) )
#define ITfInputProcessorProfilesEx_GetLanguageProfileDescription(This,rclsid,langid,guidProfile,pbstrProfile)( (This)->lpVtbl -> GetLanguageProfileDescription(This,rclsid,langid,guidProfile,pbstrProfile) )
#define ITfInputProcessorProfilesEx_GetCurrentLanguage(This,plangid)( (This)->lpVtbl -> GetCurrentLanguage(This,plangid) )
#define ITfInputProcessorProfilesEx_ChangeCurrentLanguage(This,langid)( (This)->lpVtbl -> ChangeCurrentLanguage(This,langid) )
#define ITfInputProcessorProfilesEx_GetLanguageList(This,ppLangId,pulCount)( (This)->lpVtbl -> GetLanguageList(This,ppLangId,pulCount) )
#define ITfInputProcessorProfilesEx_EnumLanguageProfiles(This,langid,ppEnum)( (This)->lpVtbl -> EnumLanguageProfiles(This,langid,ppEnum) )
#define ITfInputProcessorProfilesEx_EnableLanguageProfile(This,rclsid,langid,guidProfile,fEnable)( (This)->lpVtbl -> EnableLanguageProfile(This,rclsid,langid,guidProfile,fEnable) )
#define ITfInputProcessorProfilesEx_IsEnabledLanguageProfile(This,rclsid,langid,guidProfile,pfEnable)( (This)->lpVtbl -> IsEnabledLanguageProfile(This,rclsid,langid,guidProfile,pfEnable) )
#define ITfInputProcessorProfilesEx_EnableLanguageProfileByDefault(This,rclsid,langid,guidProfile,fEnable)( (This)->lpVtbl -> EnableLanguageProfileByDefault(This,rclsid,langid,guidProfile,fEnable) )
#define ITfInputProcessorProfilesEx_SubstituteKeyboardLayout(This,rclsid,langid,guidProfile,hKL)( (This)->lpVtbl -> SubstituteKeyboardLayout(This,rclsid,langid,guidProfile,hKL) )
#define ITfInputProcessorProfilesEx_SetLanguageProfileDisplayName(This,rclsid,langid,guidProfile,pchFile,cchFile,uResId)( (This)->lpVtbl -> SetLanguageProfileDisplayName(This,rclsid,langid,guidProfile,pchFile,cchFile,uResId) )
#endif
#endif
#ifndef __ITfInputProcessorProfileSubstituteLayout_INTERFACE_DEFINED__
#define __ITfInputProcessorProfileSubstituteLayout_INTERFACE_DEFINED__
extern const IID IID_ITfInputProcessorProfileSubstituteLayout;
typedef struct ITfInputProcessorProfileSubstituteLayoutVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfInputProcessorProfileSubstituteLayout *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfInputProcessorProfileSubstituteLayout *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfInputProcessorProfileSubstituteLayout *This);
	HRESULT(STDMETHODCALLTYPE *GetSubstituteKeyboardLayout) (ITfInputProcessorProfileSubstituteLayout *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, HKL *phKL);
	END_INTERFACE
}  ITfInputProcessorProfileSubstituteLayoutVtbl;
interface ITfInputProcessorProfileSubstituteLayout
{
	CONST_VTBL struct ITfInputProcessorProfileSubstituteLayoutVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfInputProcessorProfileSubstituteLayout_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfInputProcessorProfileSubstituteLayout_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfInputProcessorProfileSubstituteLayout_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfInputProcessorProfileSubstituteLayout_GetSubstituteKeyboardLayout(This,rclsid,langid,guidProfile,phKL)( (This)->lpVtbl -> GetSubstituteKeyboardLayout(This,rclsid,langid,guidProfile,phKL) )
#endif
#endif
#ifndef __ITfActiveLanguageProfileNotifySink_INTERFACE_DEFINED__
#define __ITfActiveLanguageProfileNotifySink_INTERFACE_DEFINED__
extern const IID IID_ITfActiveLanguageProfileNotifySink;
typedef struct ITfActiveLanguageProfileNotifySinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfActiveLanguageProfileNotifySink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfActiveLanguageProfileNotifySink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfActiveLanguageProfileNotifySink *This);
	HRESULT(STDMETHODCALLTYPE *OnActivated) (ITfActiveLanguageProfileNotifySink *This, REFCLSID clsid, REFGUID guidProfile, BOOL fActivated);
	END_INTERFACE
}  ITfActiveLanguageProfileNotifySinkVtbl;
interface ITfActiveLanguageProfileNotifySink
{
	CONST_VTBL struct ITfActiveLanguageProfileNotifySinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfActiveLanguageProfileNotifySink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfActiveLanguageProfileNotifySink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfActiveLanguageProfileNotifySink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfActiveLanguageProfileNotifySink_OnActivated(This,clsid,guidProfile,fActivated)( (This)->lpVtbl -> OnActivated(This,clsid,guidProfile,fActivated) )
#endif
#endif
#ifndef __IEnumTfLanguageProfiles_INTERFACE_DEFINED__
#define __IEnumTfLanguageProfiles_INTERFACE_DEFINED__
extern const IID IID_IEnumTfLanguageProfiles;
typedef struct IEnumTfLanguageProfilesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumTfLanguageProfiles *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumTfLanguageProfiles *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumTfLanguageProfiles *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumTfLanguageProfiles *This, IEnumTfLanguageProfiles **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumTfLanguageProfiles *This, ULONG ulCount, TF_LANGUAGEPROFILE *pProfile, ULONG *pcFetch);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumTfLanguageProfiles *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumTfLanguageProfiles *This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfLanguageProfilesVtbl;
interface IEnumTfLanguageProfiles
{
	CONST_VTBL struct IEnumTfLanguageProfilesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfLanguageProfiles_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfLanguageProfiles_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfLanguageProfiles_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfLanguageProfiles_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfLanguageProfiles_Next(This,ulCount,pProfile,pcFetch)( (This)->lpVtbl -> Next(This,ulCount,pProfile,pcFetch) )
#define IEnumTfLanguageProfiles_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfLanguageProfiles_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfLanguageProfileNotifySink_INTERFACE_DEFINED__
#define __ITfLanguageProfileNotifySink_INTERFACE_DEFINED__
extern const IID IID_ITfLanguageProfileNotifySink;
typedef struct ITfLanguageProfileNotifySinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfLanguageProfileNotifySink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfLanguageProfileNotifySink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfLanguageProfileNotifySink *This);
	HRESULT(STDMETHODCALLTYPE *OnLanguageChange) (ITfLanguageProfileNotifySink *This, LANGID langid, BOOL *pfAccept);
	HRESULT(STDMETHODCALLTYPE *OnLanguageChanged) (ITfLanguageProfileNotifySink *This);
	END_INTERFACE
}  ITfLanguageProfileNotifySinkVtbl;
interface ITfLanguageProfileNotifySink
{
	CONST_VTBL struct ITfLanguageProfileNotifySinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfLanguageProfileNotifySink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfLanguageProfileNotifySink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfLanguageProfileNotifySink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfLanguageProfileNotifySink_OnLanguageChange(This,langid,pfAccept)( (This)->lpVtbl -> OnLanguageChange(This,langid,pfAccept) )
#define ITfLanguageProfileNotifySink_OnLanguageChanged(This)( (This)->lpVtbl -> OnLanguageChanged(This) )
#endif
#endif
typedef DECLSPEC_UUID("44d2825a-10e5-43b2-877f-6cb2f43b7e7e")
struct TF_INPUTPROCESSORPROFILE
{
	DWORD dwProfileType;
	LANGID langid;
	CLSID clsid;
	GUID guidProfile;
	GUID catid;
	HKL hklSubstitute;
	DWORD dwCaps;
	HKL hkl;
	DWORD dwFlags;
} TF_INPUTPROCESSORPROFILE;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0057_v0_0_s_ifspec;
#ifndef __ITfInputProcessorProfileMgr_INTERFACE_DEFINED__
#define __ITfInputProcessorProfileMgr_INTERFACE_DEFINED__
extern const IID IID_ITfInputProcessorProfileMgr;
typedef struct ITfInputProcessorProfileMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfInputProcessorProfileMgr *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfInputProcessorProfileMgr *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfInputProcessorProfileMgr *This);
	HRESULT(STDMETHODCALLTYPE *ActivateProfile) (ITfInputProcessorProfileMgr *This, DWORD dwProfileType, LANGID langid, REFCLSID clsid, REFGUID guidProfile, HKL hkl, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *DeactivateProfile) (ITfInputProcessorProfileMgr *This, DWORD dwProfileType, LANGID langid, REFCLSID clsid, REFGUID guidProfile, HKL hkl, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *GetProfile) (ITfInputProcessorProfileMgr *This, DWORD dwProfileType, LANGID langid, REFCLSID clsid, REFGUID guidProfile, HKL hkl, TF_INPUTPROCESSORPROFILE *pProfile);
	HRESULT(STDMETHODCALLTYPE *EnumProfiles) (ITfInputProcessorProfileMgr *This, LANGID langid, IEnumTfInputProcessorProfiles **ppEnum);
	HRESULT(STDMETHODCALLTYPE *ReleaseInputProcessor) (ITfInputProcessorProfileMgr *This, REFCLSID rclsid, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *RegisterProfile) (ITfInputProcessorProfileMgr *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, const WCHAR *pchDesc, ULONG cchDesc, const WCHAR *pchIconFile, ULONG cchFile, ULONG uIconIndex, HKL hklsubstitute, DWORD dwPreferredLayout, BOOL bEnabledByDefault, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *UnregisterProfile) (ITfInputProcessorProfileMgr *This, REFCLSID rclsid, LANGID langid, REFGUID guidProfile, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *GetActiveProfile) (ITfInputProcessorProfileMgr *This, REFGUID catid, TF_INPUTPROCESSORPROFILE *pProfile);
	END_INTERFACE
}  ITfInputProcessorProfileMgrVtbl;
interface ITfInputProcessorProfileMgr
{
	CONST_VTBL struct ITfInputProcessorProfileMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfInputProcessorProfileMgr_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfInputProcessorProfileMgr_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfInputProcessorProfileMgr_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfInputProcessorProfileMgr_ActivateProfile(This,dwProfileType,langid,clsid,guidProfile,hkl,dwFlags)( (This)->lpVtbl -> ActivateProfile(This,dwProfileType,langid,clsid,guidProfile,hkl,dwFlags) )
#define ITfInputProcessorProfileMgr_DeactivateProfile(This,dwProfileType,langid,clsid,guidProfile,hkl,dwFlags)( (This)->lpVtbl -> DeactivateProfile(This,dwProfileType,langid,clsid,guidProfile,hkl,dwFlags) )
#define ITfInputProcessorProfileMgr_GetProfile(This,dwProfileType,langid,clsid,guidProfile,hkl,pProfile)( (This)->lpVtbl -> GetProfile(This,dwProfileType,langid,clsid,guidProfile,hkl,pProfile) )
#define ITfInputProcessorProfileMgr_EnumProfiles(This,langid,ppEnum)( (This)->lpVtbl -> EnumProfiles(This,langid,ppEnum) )
#define ITfInputProcessorProfileMgr_ReleaseInputProcessor(This,rclsid,dwFlags)( (This)->lpVtbl -> ReleaseInputProcessor(This,rclsid,dwFlags) )
#define ITfInputProcessorProfileMgr_RegisterProfile(This,rclsid,langid,guidProfile,pchDesc,cchDesc,pchIconFile,cchFile,uIconIndex,hklsubstitute,dwPreferredLayout,bEnabledByDefault,dwFlags)( (This)->lpVtbl -> RegisterProfile(This,rclsid,langid,guidProfile,pchDesc,cchDesc,pchIconFile,cchFile,uIconIndex,hklsubstitute,dwPreferredLayout,bEnabledByDefault,dwFlags) )
#define ITfInputProcessorProfileMgr_UnregisterProfile(This,rclsid,langid,guidProfile,dwFlags)( (This)->lpVtbl -> UnregisterProfile(This,rclsid,langid,guidProfile,dwFlags) )
#define ITfInputProcessorProfileMgr_GetActiveProfile(This,catid,pProfile)( (This)->lpVtbl -> GetActiveProfile(This,catid,pProfile) )
#endif
#endif
#ifndef __IEnumTfInputProcessorProfiles_INTERFACE_DEFINED__
#define __IEnumTfInputProcessorProfiles_INTERFACE_DEFINED__
extern const IID IID_IEnumTfInputProcessorProfiles;
typedef struct IEnumTfInputProcessorProfilesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumTfInputProcessorProfiles *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumTfInputProcessorProfiles *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumTfInputProcessorProfiles *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumTfInputProcessorProfiles *This, IEnumTfInputProcessorProfiles **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumTfInputProcessorProfiles *This, ULONG ulCount, TF_INPUTPROCESSORPROFILE *pProfile, ULONG *pcFetch);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumTfInputProcessorProfiles *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumTfInputProcessorProfiles *This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfInputProcessorProfilesVtbl;
interface IEnumTfInputProcessorProfiles
{
	CONST_VTBL struct IEnumTfInputProcessorProfilesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfInputProcessorProfiles_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfInputProcessorProfiles_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfInputProcessorProfiles_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfInputProcessorProfiles_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfInputProcessorProfiles_Next(This,ulCount,pProfile,pcFetch)( (This)->lpVtbl -> Next(This,ulCount,pProfile,pcFetch) )
#define IEnumTfInputProcessorProfiles_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfInputProcessorProfiles_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfInputProcessorProfileActivationSink_INTERFACE_DEFINED__
#define __ITfInputProcessorProfileActivationSink_INTERFACE_DEFINED__
extern const IID IID_ITfInputProcessorProfileActivationSink;
typedef struct ITfInputProcessorProfileActivationSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfInputProcessorProfileActivationSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfInputProcessorProfileActivationSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfInputProcessorProfileActivationSink *This);
	HRESULT(STDMETHODCALLTYPE *OnActivated) (ITfInputProcessorProfileActivationSink *This, DWORD dwProfileType, LANGID langid, REFCLSID clsid, REFGUID catid, REFGUID guidProfile, HKL hkl, DWORD dwFlags);
	END_INTERFACE
}  ITfInputProcessorProfileActivationSinkVtbl;
interface ITfInputProcessorProfileActivationSink
{
	CONST_VTBL struct ITfInputProcessorProfileActivationSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfInputProcessorProfileActivationSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfInputProcessorProfileActivationSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfInputProcessorProfileActivationSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfInputProcessorProfileActivationSink_OnActivated(This,dwProfileType,langid,clsid,catid,guidProfile,hkl,dwFlags)( (This)->lpVtbl -> OnActivated(This,dwProfileType,langid,clsid,catid,guidProfile,hkl,dwFlags) )
#endif
#endif
typedef DECLSPEC_UUID("77c12f95-b783-450d-879f-1cd2362c6521")
struct TF_PRESERVEDKEY
{
	UINT uVKey;
	UINT uModifiers;
} TF_PRESERVEDKEY;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0060_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0060_v0_0_s_ifspec;
#ifndef __ITfKeystrokeMgr_INTERFACE_DEFINED__
#define __ITfKeystrokeMgr_INTERFACE_DEFINED__
extern const IID IID_ITfKeystrokeMgr;
typedef struct ITfKeystrokeMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfKeystrokeMgr *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfKeystrokeMgr *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfKeystrokeMgr *This);
	HRESULT(STDMETHODCALLTYPE *AdviseKeyEventSink) (ITfKeystrokeMgr *This, TfClientId tid, ITfKeyEventSink *pSink, BOOL fForeground);
	HRESULT(STDMETHODCALLTYPE *UnadviseKeyEventSink) (ITfKeystrokeMgr *This, TfClientId tid);
	HRESULT(STDMETHODCALLTYPE *GetForeground) (ITfKeystrokeMgr *This, CLSID *pclsid);
	HRESULT(STDMETHODCALLTYPE *TestKeyDown) (ITfKeystrokeMgr *This, WPARAM wParam, LPARAM lParam, BOOL *pfEaten);
	HRESULT(STDMETHODCALLTYPE *TestKeyUp) (ITfKeystrokeMgr *This, WPARAM wParam, LPARAM lParam, BOOL *pfEaten);
	HRESULT(STDMETHODCALLTYPE *KeyDown) (ITfKeystrokeMgr *This, WPARAM wParam, LPARAM lParam, BOOL *pfEaten);
	HRESULT(STDMETHODCALLTYPE *KeyUp) (ITfKeystrokeMgr *This, WPARAM wParam, LPARAM lParam, BOOL *pfEaten);
	HRESULT(STDMETHODCALLTYPE *GetPreservedKey) (ITfKeystrokeMgr *This, ITfContext *pic, const TF_PRESERVEDKEY *pprekey, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *IsPreservedKey) (ITfKeystrokeMgr *This, REFGUID rguid, const TF_PRESERVEDKEY *pprekey, BOOL *pfRegistered);
	HRESULT(STDMETHODCALLTYPE *PreserveKey) (ITfKeystrokeMgr *This, TfClientId tid, REFGUID rguid, const TF_PRESERVEDKEY *prekey, const WCHAR *pchDesc, ULONG cchDesc);
	HRESULT(STDMETHODCALLTYPE *UnpreserveKey) (ITfKeystrokeMgr *This, REFGUID rguid, const TF_PRESERVEDKEY *pprekey);
	HRESULT(STDMETHODCALLTYPE *SetPreservedKeyDescription) (ITfKeystrokeMgr *This, REFGUID rguid, const WCHAR *pchDesc, ULONG cchDesc);
	HRESULT(STDMETHODCALLTYPE *GetPreservedKeyDescription) (ITfKeystrokeMgr *This, REFGUID rguid, BSTR *pbstrDesc);
	HRESULT(STDMETHODCALLTYPE *SimulatePreservedKey) (ITfKeystrokeMgr *This, ITfContext *pic, REFGUID rguid, BOOL *pfEaten);
	END_INTERFACE
}  ITfKeystrokeMgrVtbl;
interface ITfKeystrokeMgr
{
	CONST_VTBL struct ITfKeystrokeMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfKeystrokeMgr_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfKeystrokeMgr_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfKeystrokeMgr_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfKeystrokeMgr_AdviseKeyEventSink(This,tid,pSink,fForeground)( (This)->lpVtbl -> AdviseKeyEventSink(This,tid,pSink,fForeground) )
#define ITfKeystrokeMgr_UnadviseKeyEventSink(This,tid)( (This)->lpVtbl -> UnadviseKeyEventSink(This,tid) )
#define ITfKeystrokeMgr_GetForeground(This,pclsid)( (This)->lpVtbl -> GetForeground(This,pclsid) )
#define ITfKeystrokeMgr_TestKeyDown(This,wParam,lParam,pfEaten)( (This)->lpVtbl -> TestKeyDown(This,wParam,lParam,pfEaten) )
#define ITfKeystrokeMgr_TestKeyUp(This,wParam,lParam,pfEaten)( (This)->lpVtbl -> TestKeyUp(This,wParam,lParam,pfEaten) )
#define ITfKeystrokeMgr_KeyDown(This,wParam,lParam,pfEaten)( (This)->lpVtbl -> KeyDown(This,wParam,lParam,pfEaten) )
#define ITfKeystrokeMgr_KeyUp(This,wParam,lParam,pfEaten)( (This)->lpVtbl -> KeyUp(This,wParam,lParam,pfEaten) )
#define ITfKeystrokeMgr_GetPreservedKey(This,pic,pprekey,pguid)( (This)->lpVtbl -> GetPreservedKey(This,pic,pprekey,pguid) )
#define ITfKeystrokeMgr_IsPreservedKey(This,rguid,pprekey,pfRegistered)( (This)->lpVtbl -> IsPreservedKey(This,rguid,pprekey,pfRegistered) )
#define ITfKeystrokeMgr_PreserveKey(This,tid,rguid,prekey,pchDesc,cchDesc)( (This)->lpVtbl -> PreserveKey(This,tid,rguid,prekey,pchDesc,cchDesc) )
#define ITfKeystrokeMgr_UnpreserveKey(This,rguid,pprekey)( (This)->lpVtbl -> UnpreserveKey(This,rguid,pprekey) )
#define ITfKeystrokeMgr_SetPreservedKeyDescription(This,rguid,pchDesc,cchDesc)( (This)->lpVtbl -> SetPreservedKeyDescription(This,rguid,pchDesc,cchDesc) )
#define ITfKeystrokeMgr_GetPreservedKeyDescription(This,rguid,pbstrDesc)( (This)->lpVtbl -> GetPreservedKeyDescription(This,rguid,pbstrDesc) )
#define ITfKeystrokeMgr_SimulatePreservedKey(This,pic,rguid,pfEaten)( (This)->lpVtbl -> SimulatePreservedKey(This,pic,rguid,pfEaten) )
#endif
#endif
#ifndef __ITfKeyEventSink_INTERFACE_DEFINED__
#define __ITfKeyEventSink_INTERFACE_DEFINED__
extern const IID IID_ITfKeyEventSink;
typedef struct ITfKeyEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfKeyEventSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfKeyEventSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfKeyEventSink *This);
	HRESULT(STDMETHODCALLTYPE *OnSetFocus) (ITfKeyEventSink *This, BOOL fForeground);
	HRESULT(STDMETHODCALLTYPE *OnTestKeyDown) (ITfKeyEventSink *This, ITfContext *pic, WPARAM wParam, LPARAM lParam, BOOL *pfEaten);
	HRESULT(STDMETHODCALLTYPE *OnTestKeyUp) (ITfKeyEventSink *This, ITfContext *pic, WPARAM wParam, LPARAM lParam, BOOL *pfEaten);
	HRESULT(STDMETHODCALLTYPE *OnKeyDown) (ITfKeyEventSink *This, ITfContext *pic, WPARAM wParam, LPARAM lParam, BOOL *pfEaten);
	HRESULT(STDMETHODCALLTYPE *OnKeyUp) (ITfKeyEventSink *This, ITfContext *pic, WPARAM wParam, LPARAM lParam, BOOL *pfEaten);
	HRESULT(STDMETHODCALLTYPE *OnPreservedKey) (ITfKeyEventSink *This, ITfContext *pic, REFGUID rguid, BOOL *pfEaten);
	END_INTERFACE
}  ITfKeyEventSinkVtbl;
interface ITfKeyEventSink
{
	CONST_VTBL struct ITfKeyEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfKeyEventSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfKeyEventSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfKeyEventSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfKeyEventSink_OnSetFocus(This,fForeground)( (This)->lpVtbl -> OnSetFocus(This,fForeground) )
#define ITfKeyEventSink_OnTestKeyDown(This,pic,wParam,lParam,pfEaten)( (This)->lpVtbl -> OnTestKeyDown(This,pic,wParam,lParam,pfEaten) )
#define ITfKeyEventSink_OnTestKeyUp(This,pic,wParam,lParam,pfEaten)( (This)->lpVtbl -> OnTestKeyUp(This,pic,wParam,lParam,pfEaten) )
#define ITfKeyEventSink_OnKeyDown(This,pic,wParam,lParam,pfEaten)( (This)->lpVtbl -> OnKeyDown(This,pic,wParam,lParam,pfEaten) )
#define ITfKeyEventSink_OnKeyUp(This,pic,wParam,lParam,pfEaten)( (This)->lpVtbl -> OnKeyUp(This,pic,wParam,lParam,pfEaten) )
#define ITfKeyEventSink_OnPreservedKey(This,pic,rguid,pfEaten)( (This)->lpVtbl -> OnPreservedKey(This,pic,rguid,pfEaten) )
#endif
#endif
#ifndef __ITfKeyTraceEventSink_INTERFACE_DEFINED__
#define __ITfKeyTraceEventSink_INTERFACE_DEFINED__
extern const IID IID_ITfKeyTraceEventSink;
typedef struct ITfKeyTraceEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfKeyTraceEventSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfKeyTraceEventSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfKeyTraceEventSink *This);
	HRESULT(STDMETHODCALLTYPE *OnKeyTraceDown) (ITfKeyTraceEventSink *This, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE *OnKeyTraceUp) (ITfKeyTraceEventSink *This, WPARAM wParam, LPARAM lParam);
	END_INTERFACE
}  ITfKeyTraceEventSinkVtbl;
interface ITfKeyTraceEventSink
{
	CONST_VTBL struct ITfKeyTraceEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfKeyTraceEventSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfKeyTraceEventSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfKeyTraceEventSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfKeyTraceEventSink_OnKeyTraceDown(This,wParam,lParam)( (This)->lpVtbl -> OnKeyTraceDown(This,wParam,lParam) )
#define ITfKeyTraceEventSink_OnKeyTraceUp(This,wParam,lParam)( (This)->lpVtbl -> OnKeyTraceUp(This,wParam,lParam) )
#endif
#endif
#ifndef __ITfPreservedKeyNotifySink_INTERFACE_DEFINED__
#define __ITfPreservedKeyNotifySink_INTERFACE_DEFINED__
extern const IID IID_ITfPreservedKeyNotifySink;
typedef struct ITfPreservedKeyNotifySinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfPreservedKeyNotifySink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfPreservedKeyNotifySink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfPreservedKeyNotifySink *This);
	HRESULT(STDMETHODCALLTYPE *OnUpdated) (ITfPreservedKeyNotifySink *This, const TF_PRESERVEDKEY *pprekey);
	END_INTERFACE
}  ITfPreservedKeyNotifySinkVtbl;
interface ITfPreservedKeyNotifySink
{
	CONST_VTBL struct ITfPreservedKeyNotifySinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfPreservedKeyNotifySink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfPreservedKeyNotifySink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfPreservedKeyNotifySink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfPreservedKeyNotifySink_OnUpdated(This,pprekey)( (This)->lpVtbl -> OnUpdated(This,pprekey) )
#endif
#endif
#ifndef __ITfMessagePump_INTERFACE_DEFINED__
#define __ITfMessagePump_INTERFACE_DEFINED__
extern const IID IID_ITfMessagePump;
typedef struct ITfMessagePumpVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfMessagePump *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfMessagePump *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfMessagePump *This);
	HRESULT(STDMETHODCALLTYPE *PeekMessageA) (ITfMessagePump *This, LPMSG pMsg, HWND hwnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg, BOOL *pfResult);
	HRESULT(STDMETHODCALLTYPE *GetMessageA) (ITfMessagePump *This, LPMSG pMsg, HWND hwnd, UINT wMsgFilterMin, UINT wMsgFilterMax, BOOL *pfResult);
	HRESULT(STDMETHODCALLTYPE *PeekMessageW) (ITfMessagePump *This, LPMSG pMsg, HWND hwnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg, BOOL *pfResult);
	HRESULT(STDMETHODCALLTYPE *GetMessageW) (ITfMessagePump *This, LPMSG pMsg, HWND hwnd, UINT wMsgFilterMin, UINT wMsgFilterMax, BOOL *pfResult);
	END_INTERFACE
}  ITfMessagePumpVtbl;
interface ITfMessagePump
{
	CONST_VTBL struct ITfMessagePumpVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfMessagePump_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfMessagePump_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfMessagePump_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfMessagePump_PeekMessageA(This,pMsg,hwnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg,pfResult)( (This)->lpVtbl -> PeekMessageA(This,pMsg,hwnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg,pfResult) )
#define ITfMessagePump_GetMessageA(This,pMsg,hwnd,wMsgFilterMin,wMsgFilterMax,pfResult)( (This)->lpVtbl -> GetMessageA(This,pMsg,hwnd,wMsgFilterMin,wMsgFilterMax,pfResult) )
#define ITfMessagePump_PeekMessageW(This,pMsg,hwnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg,pfResult)( (This)->lpVtbl -> PeekMessageW(This,pMsg,hwnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg,pfResult) )
#define ITfMessagePump_GetMessageW(This,pMsg,hwnd,wMsgFilterMin,wMsgFilterMax,pfResult)( (This)->lpVtbl -> GetMessageW(This,pMsg,hwnd,wMsgFilterMin,wMsgFilterMax,pfResult) )
#endif
#endif
#ifndef __ITfThreadFocusSink_INTERFACE_DEFINED__
#define __ITfThreadFocusSink_INTERFACE_DEFINED__
extern const IID IID_ITfThreadFocusSink;
typedef struct ITfThreadFocusSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfThreadFocusSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfThreadFocusSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfThreadFocusSink *This);
	HRESULT(STDMETHODCALLTYPE *OnSetThreadFocus) (ITfThreadFocusSink *This);
	HRESULT(STDMETHODCALLTYPE *OnKillThreadFocus) (ITfThreadFocusSink *This);
	END_INTERFACE
}  ITfThreadFocusSinkVtbl;
interface ITfThreadFocusSink
{
	CONST_VTBL struct ITfThreadFocusSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfThreadFocusSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfThreadFocusSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfThreadFocusSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfThreadFocusSink_OnSetThreadFocus(This)( (This)->lpVtbl -> OnSetThreadFocus(This) )
#define ITfThreadFocusSink_OnKillThreadFocus(This)( (This)->lpVtbl -> OnKillThreadFocus(This) )
#endif
#endif
#ifndef __ITfTextInputProcessor_INTERFACE_DEFINED__
#define __ITfTextInputProcessor_INTERFACE_DEFINED__
extern const IID IID_ITfTextInputProcessor;
typedef struct ITfTextInputProcessorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfTextInputProcessor *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfTextInputProcessor *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfTextInputProcessor *This);
	HRESULT(STDMETHODCALLTYPE *Activate) (ITfTextInputProcessor *This, ITfThreadMgr *ptim, TfClientId tid);
	HRESULT(STDMETHODCALLTYPE *Deactivate) (ITfTextInputProcessor *This);
	END_INTERFACE
}  ITfTextInputProcessorVtbl;
interface ITfTextInputProcessor
{
	CONST_VTBL struct ITfTextInputProcessorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfTextInputProcessor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfTextInputProcessor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfTextInputProcessor_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfTextInputProcessor_Activate(This,ptim,tid)( (This)->lpVtbl -> Activate(This,ptim,tid) )
#define ITfTextInputProcessor_Deactivate(This)( (This)->lpVtbl -> Deactivate(This) )
#endif
#endif
#ifndef __ITfTextInputProcessorEx_INTERFACE_DEFINED__
#define __ITfTextInputProcessorEx_INTERFACE_DEFINED__
extern const IID IID_ITfTextInputProcessorEx;
typedef struct ITfTextInputProcessorExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfTextInputProcessorEx *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfTextInputProcessorEx *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfTextInputProcessorEx *This);
	HRESULT(STDMETHODCALLTYPE *Activate) (ITfTextInputProcessorEx *This, ITfThreadMgr *ptim, TfClientId tid);
	HRESULT(STDMETHODCALLTYPE *Deactivate) (ITfTextInputProcessorEx *This);
	HRESULT(STDMETHODCALLTYPE *ActivateEx) (ITfTextInputProcessorEx *This, ITfThreadMgr *ptim, TfClientId tid, DWORD dwFlags);
	END_INTERFACE
}  ITfTextInputProcessorExVtbl;
interface ITfTextInputProcessorEx
{
	CONST_VTBL struct ITfTextInputProcessorExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfTextInputProcessorEx_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfTextInputProcessorEx_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfTextInputProcessorEx_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfTextInputProcessorEx_Activate(This,ptim,tid)( (This)->lpVtbl -> Activate(This,ptim,tid) )
#define ITfTextInputProcessorEx_Deactivate(This)( (This)->lpVtbl -> Deactivate(This) )
#define ITfTextInputProcessorEx_ActivateEx(This,ptim,tid,dwFlags)( (This)->lpVtbl -> ActivateEx(This,ptim,tid,dwFlags) )
#endif
#endif
#ifndef __ITfClientId_INTERFACE_DEFINED__
#define __ITfClientId_INTERFACE_DEFINED__
extern const IID IID_ITfClientId;
typedef struct ITfClientIdVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfClientId *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfClientId *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfClientId *This);
	HRESULT(STDMETHODCALLTYPE *GetClientId) (ITfClientId *This, REFCLSID rclsid, TfClientId *ptid);
	END_INTERFACE
}  ITfClientIdVtbl;
interface ITfClientId
{
	CONST_VTBL struct ITfClientIdVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfClientId_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfClientId_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfClientId_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfClientId_GetClientId(This,rclsid,ptid)( (This)->lpVtbl -> GetClientId(This,rclsid,ptid) )
#endif
#endif
typedef DECLSPEC_UUID("c4cc07f1-80cc-4a7b-bc54-98512782cbe3")
enum __MIDL___MIDL_itf_msctf_0000_0069_0001
{
	TF_LS_NONE = 0,
	TF_LS_SOLID = 1,
	TF_LS_DOT = 2,
	TF_LS_DASH = 3,
	TF_LS_SQUIGGLE = 4
} TF_DA_LINESTYLE;
typedef DECLSPEC_UUID("d9b92e21-084a-401b-9c64-1e6dad91a1ab")
enum __MIDL___MIDL_itf_msctf_0000_0069_0002
{
	TF_CT_NONE = 0,
	TF_CT_SYSCOLOR = 1,
	TF_CT_COLORREF = 2
} TF_DA_COLORTYPE;
typedef DECLSPEC_UUID("90d0cb5e-6520-4a0f-b47c-c39bd955f0d6")
struct TF_DA_COLOR
{
	TF_DA_COLORTYPE type;
	union
	{
		int nIndex;
		COLORREF cr;
	};
} TF_DA_COLOR;
typedef DECLSPEC_UUID("33d2fe4b-6c24-4f67-8d75-3bc1819e4126")
enum __MIDL___MIDL_itf_msctf_0000_0069_0004
{
	TF_ATTR_INPUT = 0,
	TF_ATTR_TARGET_CONVERTED = 1,
	TF_ATTR_CONVERTED = 2,
	TF_ATTR_TARGET_NOTCONVERTED = 3,
	TF_ATTR_INPUT_ERROR = 4,
	TF_ATTR_FIXEDCONVERTED = 5,
	TF_ATTR_OTHER = -1
} TF_DA_ATTR_INFO;
typedef DECLSPEC_UUID("1bf1c305-419b-4182-a4d2-9bfadc3f021f")
struct TF_DISPLAYATTRIBUTE
{
	TF_DA_COLOR crText;
	TF_DA_COLOR crBk;
	TF_DA_LINESTYLE lsStyle;
	BOOL fBoldLine;
	TF_DA_COLOR crLine;
	TF_DA_ATTR_INFO bAttr;
} TF_DISPLAYATTRIBUTE;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0069_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0069_v0_0_s_ifspec;
#ifndef __ITfDisplayAttributeInfo_INTERFACE_DEFINED__
#define __ITfDisplayAttributeInfo_INTERFACE_DEFINED__
extern const IID IID_ITfDisplayAttributeInfo;
typedef struct ITfDisplayAttributeInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfDisplayAttributeInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfDisplayAttributeInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfDisplayAttributeInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetGUID) (ITfDisplayAttributeInfo *This, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *GetDescription) (ITfDisplayAttributeInfo *This, BSTR *pbstrDesc);
	HRESULT(STDMETHODCALLTYPE *GetAttributeInfo) (ITfDisplayAttributeInfo *This, TF_DISPLAYATTRIBUTE *pda);
	HRESULT(STDMETHODCALLTYPE *SetAttributeInfo) (ITfDisplayAttributeInfo *This, const TF_DISPLAYATTRIBUTE *pda);
	HRESULT(STDMETHODCALLTYPE *Reset) (ITfDisplayAttributeInfo *This);
	END_INTERFACE
}  ITfDisplayAttributeInfoVtbl;
interface ITfDisplayAttributeInfo
{
	CONST_VTBL struct ITfDisplayAttributeInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfDisplayAttributeInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfDisplayAttributeInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfDisplayAttributeInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfDisplayAttributeInfo_GetGUID(This,pguid)( (This)->lpVtbl -> GetGUID(This,pguid) )
#define ITfDisplayAttributeInfo_GetDescription(This,pbstrDesc)( (This)->lpVtbl -> GetDescription(This,pbstrDesc) )
#define ITfDisplayAttributeInfo_GetAttributeInfo(This,pda)( (This)->lpVtbl -> GetAttributeInfo(This,pda) )
#define ITfDisplayAttributeInfo_SetAttributeInfo(This,pda)( (This)->lpVtbl -> SetAttributeInfo(This,pda) )
#define ITfDisplayAttributeInfo_Reset(This)( (This)->lpVtbl -> Reset(This) )
#endif
#endif
#ifndef __IEnumTfDisplayAttributeInfo_INTERFACE_DEFINED__
#define __IEnumTfDisplayAttributeInfo_INTERFACE_DEFINED__
extern const IID IID_IEnumTfDisplayAttributeInfo;
typedef struct IEnumTfDisplayAttributeInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumTfDisplayAttributeInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumTfDisplayAttributeInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumTfDisplayAttributeInfo *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumTfDisplayAttributeInfo *This, IEnumTfDisplayAttributeInfo **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumTfDisplayAttributeInfo *This, ULONG ulCount, ITfDisplayAttributeInfo **rgInfo, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumTfDisplayAttributeInfo *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumTfDisplayAttributeInfo *This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfDisplayAttributeInfoVtbl;
interface IEnumTfDisplayAttributeInfo
{
	CONST_VTBL struct IEnumTfDisplayAttributeInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfDisplayAttributeInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfDisplayAttributeInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfDisplayAttributeInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfDisplayAttributeInfo_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfDisplayAttributeInfo_Next(This,ulCount,rgInfo,pcFetched)( (This)->lpVtbl -> Next(This,ulCount,rgInfo,pcFetched) )
#define IEnumTfDisplayAttributeInfo_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfDisplayAttributeInfo_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfDisplayAttributeProvider_INTERFACE_DEFINED__
#define __ITfDisplayAttributeProvider_INTERFACE_DEFINED__
extern const IID IID_ITfDisplayAttributeProvider;
typedef struct ITfDisplayAttributeProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfDisplayAttributeProvider *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfDisplayAttributeProvider *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfDisplayAttributeProvider *This);
	HRESULT(STDMETHODCALLTYPE *EnumDisplayAttributeInfo) (ITfDisplayAttributeProvider *This, IEnumTfDisplayAttributeInfo **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetDisplayAttributeInfo) (ITfDisplayAttributeProvider *This, REFGUID guid, ITfDisplayAttributeInfo **ppInfo);
	END_INTERFACE
}  ITfDisplayAttributeProviderVtbl;
interface ITfDisplayAttributeProvider
{
	CONST_VTBL struct ITfDisplayAttributeProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfDisplayAttributeProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfDisplayAttributeProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfDisplayAttributeProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfDisplayAttributeProvider_EnumDisplayAttributeInfo(This,ppEnum)( (This)->lpVtbl -> EnumDisplayAttributeInfo(This,ppEnum) )
#define ITfDisplayAttributeProvider_GetDisplayAttributeInfo(This,guid,ppInfo)( (This)->lpVtbl -> GetDisplayAttributeInfo(This,guid,ppInfo) )
#endif
#endif
#ifndef __ITfDisplayAttributeMgr_INTERFACE_DEFINED__
#define __ITfDisplayAttributeMgr_INTERFACE_DEFINED__
extern const IID IID_ITfDisplayAttributeMgr;
typedef struct ITfDisplayAttributeMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfDisplayAttributeMgr *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfDisplayAttributeMgr *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfDisplayAttributeMgr *This);
	HRESULT(STDMETHODCALLTYPE *OnUpdateInfo) (ITfDisplayAttributeMgr *This);
	HRESULT(STDMETHODCALLTYPE *EnumDisplayAttributeInfo) (ITfDisplayAttributeMgr *This, IEnumTfDisplayAttributeInfo **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetDisplayAttributeInfo) (ITfDisplayAttributeMgr *This, REFGUID guid, ITfDisplayAttributeInfo **ppInfo, CLSID *pclsidOwner);
	END_INTERFACE
}  ITfDisplayAttributeMgrVtbl;
interface ITfDisplayAttributeMgr
{
	CONST_VTBL struct ITfDisplayAttributeMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfDisplayAttributeMgr_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfDisplayAttributeMgr_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfDisplayAttributeMgr_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfDisplayAttributeMgr_OnUpdateInfo(This)( (This)->lpVtbl -> OnUpdateInfo(This) )
#define ITfDisplayAttributeMgr_EnumDisplayAttributeInfo(This,ppEnum)( (This)->lpVtbl -> EnumDisplayAttributeInfo(This,ppEnum) )
#define ITfDisplayAttributeMgr_GetDisplayAttributeInfo(This,guid,ppInfo,pclsidOwner)( (This)->lpVtbl -> GetDisplayAttributeInfo(This,guid,ppInfo,pclsidOwner) )
#endif
#endif
#ifndef __ITfDisplayAttributeNotifySink_INTERFACE_DEFINED__
#define __ITfDisplayAttributeNotifySink_INTERFACE_DEFINED__
extern const IID IID_ITfDisplayAttributeNotifySink;
typedef struct ITfDisplayAttributeNotifySinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfDisplayAttributeNotifySink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfDisplayAttributeNotifySink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfDisplayAttributeNotifySink *This);
	HRESULT(STDMETHODCALLTYPE *OnUpdateInfo) (ITfDisplayAttributeNotifySink *This);
	END_INTERFACE
}  ITfDisplayAttributeNotifySinkVtbl;
interface ITfDisplayAttributeNotifySink
{
	CONST_VTBL struct ITfDisplayAttributeNotifySinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfDisplayAttributeNotifySink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfDisplayAttributeNotifySink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfDisplayAttributeNotifySink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfDisplayAttributeNotifySink_OnUpdateInfo(This)( (This)->lpVtbl -> OnUpdateInfo(This) )
#endif
#endif
#ifndef __ITfCategoryMgr_INTERFACE_DEFINED__
#define __ITfCategoryMgr_INTERFACE_DEFINED__
extern const IID IID_ITfCategoryMgr;
typedef struct ITfCategoryMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfCategoryMgr *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfCategoryMgr *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfCategoryMgr *This);
	HRESULT(STDMETHODCALLTYPE *RegisterCategory) (ITfCategoryMgr *This, REFCLSID rclsid, REFGUID rcatid, REFGUID rguid);
	HRESULT(STDMETHODCALLTYPE *UnregisterCategory) (ITfCategoryMgr *This, REFCLSID rclsid, REFGUID rcatid, REFGUID rguid);
	HRESULT(STDMETHODCALLTYPE *EnumCategoriesInItem) (ITfCategoryMgr *This, REFGUID rguid, IEnumGUID **ppEnum);
	HRESULT(STDMETHODCALLTYPE *EnumItemsInCategory) (ITfCategoryMgr *This, REFGUID rcatid, IEnumGUID **ppEnum);
	HRESULT(STDMETHODCALLTYPE *FindClosestCategory) (ITfCategoryMgr *This, REFGUID rguid, GUID *pcatid, const GUID **ppcatidList, ULONG ulCount);
	HRESULT(STDMETHODCALLTYPE *RegisterGUIDDescription) (ITfCategoryMgr *This, REFCLSID rclsid, REFGUID rguid, const WCHAR *pchDesc, ULONG cch);
	HRESULT(STDMETHODCALLTYPE *UnregisterGUIDDescription) (ITfCategoryMgr *This, REFCLSID rclsid, REFGUID rguid);
	HRESULT(STDMETHODCALLTYPE *GetGUIDDescription) (ITfCategoryMgr *This, REFGUID rguid, BSTR *pbstrDesc);
	HRESULT(STDMETHODCALLTYPE *RegisterGUIDDWORD) (ITfCategoryMgr *This, REFCLSID rclsid, REFGUID rguid, DWORD dw);
	HRESULT(STDMETHODCALLTYPE *UnregisterGUIDDWORD) (ITfCategoryMgr *This, REFCLSID rclsid, REFGUID rguid);
	HRESULT(STDMETHODCALLTYPE *GetGUIDDWORD) (ITfCategoryMgr *This, REFGUID rguid, DWORD *pdw);
	HRESULT(STDMETHODCALLTYPE *RegisterGUID) (ITfCategoryMgr *This, REFGUID rguid, TfGuidAtom *pguidatom);
	HRESULT(STDMETHODCALLTYPE *GetGUID) (ITfCategoryMgr *This, TfGuidAtom guidatom, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *IsEqualTfGuidAtom) (ITfCategoryMgr *This, TfGuidAtom guidatom, REFGUID rguid, BOOL *pfEqual);
	END_INTERFACE
}  ITfCategoryMgrVtbl;
interface ITfCategoryMgr
{
	CONST_VTBL struct ITfCategoryMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfCategoryMgr_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfCategoryMgr_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfCategoryMgr_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfCategoryMgr_RegisterCategory(This,rclsid,rcatid,rguid)( (This)->lpVtbl -> RegisterCategory(This,rclsid,rcatid,rguid) )
#define ITfCategoryMgr_UnregisterCategory(This,rclsid,rcatid,rguid)( (This)->lpVtbl -> UnregisterCategory(This,rclsid,rcatid,rguid) )
#define ITfCategoryMgr_EnumCategoriesInItem(This,rguid,ppEnum)( (This)->lpVtbl -> EnumCategoriesInItem(This,rguid,ppEnum) )
#define ITfCategoryMgr_EnumItemsInCategory(This,rcatid,ppEnum)( (This)->lpVtbl -> EnumItemsInCategory(This,rcatid,ppEnum) )
#define ITfCategoryMgr_FindClosestCategory(This,rguid,pcatid,ppcatidList,ulCount)( (This)->lpVtbl -> FindClosestCategory(This,rguid,pcatid,ppcatidList,ulCount) )
#define ITfCategoryMgr_RegisterGUIDDescription(This,rclsid,rguid,pchDesc,cch)( (This)->lpVtbl -> RegisterGUIDDescription(This,rclsid,rguid,pchDesc,cch) )
#define ITfCategoryMgr_UnregisterGUIDDescription(This,rclsid,rguid)( (This)->lpVtbl -> UnregisterGUIDDescription(This,rclsid,rguid) )
#define ITfCategoryMgr_GetGUIDDescription(This,rguid,pbstrDesc)( (This)->lpVtbl -> GetGUIDDescription(This,rguid,pbstrDesc) )
#define ITfCategoryMgr_RegisterGUIDDWORD(This,rclsid,rguid,dw)( (This)->lpVtbl -> RegisterGUIDDWORD(This,rclsid,rguid,dw) )
#define ITfCategoryMgr_UnregisterGUIDDWORD(This,rclsid,rguid)( (This)->lpVtbl -> UnregisterGUIDDWORD(This,rclsid,rguid) )
#define ITfCategoryMgr_GetGUIDDWORD(This,rguid,pdw)( (This)->lpVtbl -> GetGUIDDWORD(This,rguid,pdw) )
#define ITfCategoryMgr_RegisterGUID(This,rguid,pguidatom)( (This)->lpVtbl -> RegisterGUID(This,rguid,pguidatom) )
#define ITfCategoryMgr_GetGUID(This,guidatom,pguid)( (This)->lpVtbl -> GetGUID(This,guidatom,pguid) )
#define ITfCategoryMgr_IsEqualTfGuidAtom(This,guidatom,rguid,pfEqual)( (This)->lpVtbl -> IsEqualTfGuidAtom(This,guidatom,rguid,pfEqual) )
#endif
#endif
#define	TF_INVALID_COOKIE	( 0xffffffff )
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0075_v0_0_s_ifspec;
#ifndef __ITfSource_INTERFACE_DEFINED__
#define __ITfSource_INTERFACE_DEFINED__
extern const IID IID_ITfSource;
typedef struct ITfSourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfSource *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfSource *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfSource *This);
	HRESULT(STDMETHODCALLTYPE *AdviseSink) (ITfSource *This, REFIID riid, IUnknown *punk, DWORD *pdwCookie);
	HRESULT(STDMETHODCALLTYPE *UnadviseSink) (ITfSource *This, DWORD dwCookie);
	END_INTERFACE
}  ITfSourceVtbl;
interface ITfSource
{
	CONST_VTBL struct ITfSourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfSource_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfSource_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfSource_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfSource_AdviseSink(This,riid,punk,pdwCookie)( (This)->lpVtbl -> AdviseSink(This,riid,punk,pdwCookie) )
#define ITfSource_UnadviseSink(This,dwCookie)( (This)->lpVtbl -> UnadviseSink(This,dwCookie) )
#endif
#endif
#ifndef __ITfSourceSingle_INTERFACE_DEFINED__
#define __ITfSourceSingle_INTERFACE_DEFINED__
extern const IID IID_ITfSourceSingle;
typedef struct ITfSourceSingleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfSourceSingle *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfSourceSingle *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfSourceSingle *This);
	HRESULT(STDMETHODCALLTYPE *AdviseSingleSink) (ITfSourceSingle *This, TfClientId tid, REFIID riid, IUnknown *punk);
	HRESULT(STDMETHODCALLTYPE *UnadviseSingleSink) (ITfSourceSingle *This, TfClientId tid, REFIID riid);
	END_INTERFACE
}  ITfSourceSingleVtbl;
interface ITfSourceSingle
{
	CONST_VTBL struct ITfSourceSingleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfSourceSingle_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfSourceSingle_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfSourceSingle_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfSourceSingle_AdviseSingleSink(This,tid,riid,punk)( (This)->lpVtbl -> AdviseSingleSink(This,tid,riid,punk) )
#define ITfSourceSingle_UnadviseSingleSink(This,tid,riid)( (This)->lpVtbl -> UnadviseSingleSink(This,tid,riid) )
#endif
#endif
#ifndef __ITfUIElementMgr_INTERFACE_DEFINED__
#define __ITfUIElementMgr_INTERFACE_DEFINED__
extern const IID IID_ITfUIElementMgr;
typedef struct ITfUIElementMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfUIElementMgr *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfUIElementMgr *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfUIElementMgr *This);
	HRESULT(STDMETHODCALLTYPE *BeginUIElement) (ITfUIElementMgr *This, ITfUIElement *pElement, BOOL *pbShow, DWORD *pdwUIElementId);
	HRESULT(STDMETHODCALLTYPE *UpdateUIElement) (ITfUIElementMgr *This, DWORD dwUIElementId);
	HRESULT(STDMETHODCALLTYPE *EndUIElement) (ITfUIElementMgr *This, DWORD dwUIElementId);
	HRESULT(STDMETHODCALLTYPE *GetUIElement) (ITfUIElementMgr *This, DWORD dwUIELementId, ITfUIElement **ppElement);
	HRESULT(STDMETHODCALLTYPE *EnumUIElements) (ITfUIElementMgr *This, IEnumTfUIElements **ppEnum);
	END_INTERFACE
}  ITfUIElementMgrVtbl;
interface ITfUIElementMgr
{
	CONST_VTBL struct ITfUIElementMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfUIElementMgr_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfUIElementMgr_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfUIElementMgr_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfUIElementMgr_BeginUIElement(This,pElement,pbShow,pdwUIElementId)( (This)->lpVtbl -> BeginUIElement(This,pElement,pbShow,pdwUIElementId) )
#define ITfUIElementMgr_UpdateUIElement(This,dwUIElementId)( (This)->lpVtbl -> UpdateUIElement(This,dwUIElementId) )
#define ITfUIElementMgr_EndUIElement(This,dwUIElementId)( (This)->lpVtbl -> EndUIElement(This,dwUIElementId) )
#define ITfUIElementMgr_GetUIElement(This,dwUIELementId,ppElement)( (This)->lpVtbl -> GetUIElement(This,dwUIELementId,ppElement) )
#define ITfUIElementMgr_EnumUIElements(This,ppEnum)( (This)->lpVtbl -> EnumUIElements(This,ppEnum) )
#endif
#endif
#ifndef __IEnumTfUIElements_INTERFACE_DEFINED__
#define __IEnumTfUIElements_INTERFACE_DEFINED__
extern const IID IID_IEnumTfUIElements;
typedef struct IEnumTfUIElementsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumTfUIElements *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumTfUIElements *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumTfUIElements *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumTfUIElements *This, IEnumTfUIElements **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumTfUIElements *This, ULONG ulCount, ITfUIElement **ppElement, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumTfUIElements *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumTfUIElements *This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfUIElementsVtbl;
interface IEnumTfUIElements
{
	CONST_VTBL struct IEnumTfUIElementsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfUIElements_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfUIElements_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfUIElements_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfUIElements_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfUIElements_Next(This,ulCount,ppElement,pcFetched)( (This)->lpVtbl -> Next(This,ulCount,ppElement,pcFetched) )
#define IEnumTfUIElements_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfUIElements_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfUIElementSink_INTERFACE_DEFINED__
#define __ITfUIElementSink_INTERFACE_DEFINED__
extern const IID IID_ITfUIElementSink;
typedef struct ITfUIElementSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfUIElementSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfUIElementSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfUIElementSink *This);
	HRESULT(STDMETHODCALLTYPE *BeginUIElement) (ITfUIElementSink *This, DWORD dwUIElementId, BOOL *pbShow);
	HRESULT(STDMETHODCALLTYPE *UpdateUIElement) (ITfUIElementSink *This, DWORD dwUIElementId);
	HRESULT(STDMETHODCALLTYPE *EndUIElement) (ITfUIElementSink *This, DWORD dwUIElementId);
	END_INTERFACE
}  ITfUIElementSinkVtbl;
interface ITfUIElementSink
{
	CONST_VTBL struct ITfUIElementSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfUIElementSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfUIElementSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfUIElementSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfUIElementSink_BeginUIElement(This,dwUIElementId,pbShow)( (This)->lpVtbl -> BeginUIElement(This,dwUIElementId,pbShow) )
#define ITfUIElementSink_UpdateUIElement(This,dwUIElementId)( (This)->lpVtbl -> UpdateUIElement(This,dwUIElementId) )
#define ITfUIElementSink_EndUIElement(This,dwUIElementId)( (This)->lpVtbl -> EndUIElement(This,dwUIElementId) )
#endif
#endif
#ifndef __ITfUIElement_INTERFACE_DEFINED__
#define __ITfUIElement_INTERFACE_DEFINED__
extern const IID IID_ITfUIElement;
typedef struct ITfUIElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfUIElement *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfUIElement *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfUIElement *This);
	HRESULT(STDMETHODCALLTYPE *GetDescription) (ITfUIElement *This, BSTR *pbstrDescription);
	HRESULT(STDMETHODCALLTYPE *GetGUID) (ITfUIElement *This, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfUIElement *This, BOOL bShow);
	HRESULT(STDMETHODCALLTYPE *IsShown) (ITfUIElement *This, BOOL *pbShow);
	END_INTERFACE
}  ITfUIElementVtbl;
interface ITfUIElement
{
	CONST_VTBL struct ITfUIElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfUIElement_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfUIElement_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfUIElement_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfUIElement_GetDescription(This,pbstrDescription)( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
#define ITfUIElement_GetGUID(This,pguid)( (This)->lpVtbl -> GetGUID(This,pguid) )
#define ITfUIElement_Show(This,bShow)( (This)->lpVtbl -> Show(This,bShow) )
#define ITfUIElement_IsShown(This,pbShow)( (This)->lpVtbl -> IsShown(This,pbShow) )
#endif
#endif
#ifndef __ITfCandidateListUIElement_INTERFACE_DEFINED__
#define __ITfCandidateListUIElement_INTERFACE_DEFINED__
extern const IID IID_ITfCandidateListUIElement;
typedef struct ITfCandidateListUIElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfCandidateListUIElement *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfCandidateListUIElement *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfCandidateListUIElement *This);
	HRESULT(STDMETHODCALLTYPE *GetDescription) (ITfCandidateListUIElement *This, BSTR *pbstrDescription);
	HRESULT(STDMETHODCALLTYPE *GetGUID) (ITfCandidateListUIElement *This, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfCandidateListUIElement *This, BOOL bShow);
	HRESULT(STDMETHODCALLTYPE *IsShown) (ITfCandidateListUIElement *This, BOOL *pbShow);
	HRESULT(STDMETHODCALLTYPE *GetUpdatedFlags) (ITfCandidateListUIElement *This, DWORD *pdwFlags);
	HRESULT(STDMETHODCALLTYPE *GetDocumentMgr) (ITfCandidateListUIElement *This, ITfDocumentMgr **ppdim);
	HRESULT(STDMETHODCALLTYPE *GetCount) (ITfCandidateListUIElement *This, UINT *puCount);
	HRESULT(STDMETHODCALLTYPE *GetSelection) (ITfCandidateListUIElement *This, UINT *puIndex);
	HRESULT(STDMETHODCALLTYPE *GetString) (ITfCandidateListUIElement *This, UINT uIndex, BSTR *pstr);
	HRESULT(STDMETHODCALLTYPE *GetPageIndex) (ITfCandidateListUIElement *This, UINT *pIndex, UINT uSize, UINT *puPageCnt);
	HRESULT(STDMETHODCALLTYPE *SetPageIndex) (ITfCandidateListUIElement *This, UINT *pIndex, UINT uPageCnt);
	HRESULT(STDMETHODCALLTYPE *GetCurrentPage) (ITfCandidateListUIElement *This, UINT *puPage);
	END_INTERFACE
}  ITfCandidateListUIElementVtbl;
interface ITfCandidateListUIElement
{
	CONST_VTBL struct ITfCandidateListUIElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfCandidateListUIElement_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfCandidateListUIElement_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfCandidateListUIElement_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfCandidateListUIElement_GetDescription(This,pbstrDescription)( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
#define ITfCandidateListUIElement_GetGUID(This,pguid)( (This)->lpVtbl -> GetGUID(This,pguid) )
#define ITfCandidateListUIElement_Show(This,bShow)( (This)->lpVtbl -> Show(This,bShow) )
#define ITfCandidateListUIElement_IsShown(This,pbShow)( (This)->lpVtbl -> IsShown(This,pbShow) )
#define ITfCandidateListUIElement_GetUpdatedFlags(This,pdwFlags)( (This)->lpVtbl -> GetUpdatedFlags(This,pdwFlags) )
#define ITfCandidateListUIElement_GetDocumentMgr(This,ppdim)( (This)->lpVtbl -> GetDocumentMgr(This,ppdim) )
#define ITfCandidateListUIElement_GetCount(This,puCount)( (This)->lpVtbl -> GetCount(This,puCount) )
#define ITfCandidateListUIElement_GetSelection(This,puIndex)( (This)->lpVtbl -> GetSelection(This,puIndex) )
#define ITfCandidateListUIElement_GetString(This,uIndex,pstr)( (This)->lpVtbl -> GetString(This,uIndex,pstr) )
#define ITfCandidateListUIElement_GetPageIndex(This,pIndex,uSize,puPageCnt)( (This)->lpVtbl -> GetPageIndex(This,pIndex,uSize,puPageCnt) )
#define ITfCandidateListUIElement_SetPageIndex(This,pIndex,uPageCnt)( (This)->lpVtbl -> SetPageIndex(This,pIndex,uPageCnt) )
#define ITfCandidateListUIElement_GetCurrentPage(This,puPage)( (This)->lpVtbl -> GetCurrentPage(This,puPage) )
#endif
#endif
#ifndef __ITfCandidateListUIElementBehavior_INTERFACE_DEFINED__
#define __ITfCandidateListUIElementBehavior_INTERFACE_DEFINED__
extern const IID IID_ITfCandidateListUIElementBehavior;
typedef struct ITfCandidateListUIElementBehaviorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfCandidateListUIElementBehavior *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfCandidateListUIElementBehavior *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfCandidateListUIElementBehavior *This);
	HRESULT(STDMETHODCALLTYPE *GetDescription) (ITfCandidateListUIElementBehavior *This, BSTR *pbstrDescription);
	HRESULT(STDMETHODCALLTYPE *GetGUID) (ITfCandidateListUIElementBehavior *This, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfCandidateListUIElementBehavior *This, BOOL bShow);
	HRESULT(STDMETHODCALLTYPE *IsShown) (ITfCandidateListUIElementBehavior *This, BOOL *pbShow);
	HRESULT(STDMETHODCALLTYPE *GetUpdatedFlags) (ITfCandidateListUIElementBehavior *This, DWORD *pdwFlags);
	HRESULT(STDMETHODCALLTYPE *GetDocumentMgr) (ITfCandidateListUIElementBehavior *This, ITfDocumentMgr **ppdim);
	HRESULT(STDMETHODCALLTYPE *GetCount) (ITfCandidateListUIElementBehavior *This, UINT *puCount);
	HRESULT(STDMETHODCALLTYPE *GetSelection) (ITfCandidateListUIElementBehavior *This, UINT *puIndex);
	HRESULT(STDMETHODCALLTYPE *GetString) (ITfCandidateListUIElementBehavior *This, UINT uIndex, BSTR *pstr);
	HRESULT(STDMETHODCALLTYPE *GetPageIndex) (ITfCandidateListUIElementBehavior *This, UINT *pIndex, UINT uSize, UINT *puPageCnt);
	HRESULT(STDMETHODCALLTYPE *SetPageIndex) (ITfCandidateListUIElementBehavior *This, UINT *pIndex, UINT uPageCnt);
	HRESULT(STDMETHODCALLTYPE *GetCurrentPage) (ITfCandidateListUIElementBehavior *This, UINT *puPage);
	HRESULT(STDMETHODCALLTYPE *SetSelection) (ITfCandidateListUIElementBehavior *This, UINT nIndex);
	HRESULT(STDMETHODCALLTYPE *Finalize) (ITfCandidateListUIElementBehavior *This);
	HRESULT(STDMETHODCALLTYPE *Abort) (ITfCandidateListUIElementBehavior *This);
	END_INTERFACE
}  ITfCandidateListUIElementBehaviorVtbl;
interface ITfCandidateListUIElementBehavior
{
	CONST_VTBL struct ITfCandidateListUIElementBehaviorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfCandidateListUIElementBehavior_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfCandidateListUIElementBehavior_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfCandidateListUIElementBehavior_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfCandidateListUIElementBehavior_GetDescription(This,pbstrDescription)( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
#define ITfCandidateListUIElementBehavior_GetGUID(This,pguid)( (This)->lpVtbl -> GetGUID(This,pguid) )
#define ITfCandidateListUIElementBehavior_Show(This,bShow)( (This)->lpVtbl -> Show(This,bShow) )
#define ITfCandidateListUIElementBehavior_IsShown(This,pbShow)( (This)->lpVtbl -> IsShown(This,pbShow) )
#define ITfCandidateListUIElementBehavior_GetUpdatedFlags(This,pdwFlags)( (This)->lpVtbl -> GetUpdatedFlags(This,pdwFlags) )
#define ITfCandidateListUIElementBehavior_GetDocumentMgr(This,ppdim)( (This)->lpVtbl -> GetDocumentMgr(This,ppdim) )
#define ITfCandidateListUIElementBehavior_GetCount(This,puCount)( (This)->lpVtbl -> GetCount(This,puCount) )
#define ITfCandidateListUIElementBehavior_GetSelection(This,puIndex)( (This)->lpVtbl -> GetSelection(This,puIndex) )
#define ITfCandidateListUIElementBehavior_GetString(This,uIndex,pstr)( (This)->lpVtbl -> GetString(This,uIndex,pstr) )
#define ITfCandidateListUIElementBehavior_GetPageIndex(This,pIndex,uSize,puPageCnt)( (This)->lpVtbl -> GetPageIndex(This,pIndex,uSize,puPageCnt) )
#define ITfCandidateListUIElementBehavior_SetPageIndex(This,pIndex,uPageCnt)( (This)->lpVtbl -> SetPageIndex(This,pIndex,uPageCnt) )
#define ITfCandidateListUIElementBehavior_GetCurrentPage(This,puPage)( (This)->lpVtbl -> GetCurrentPage(This,puPage) )
#define ITfCandidateListUIElementBehavior_SetSelection(This,nIndex)( (This)->lpVtbl -> SetSelection(This,nIndex) )
#define ITfCandidateListUIElementBehavior_Finalize(This)( (This)->lpVtbl -> Finalize(This) )
#define ITfCandidateListUIElementBehavior_Abort(This)( (This)->lpVtbl -> Abort(This) )
#endif
#endif
#ifndef __ITfReadingInformationUIElement_INTERFACE_DEFINED__
#define __ITfReadingInformationUIElement_INTERFACE_DEFINED__
extern const IID IID_ITfReadingInformationUIElement;
typedef struct ITfReadingInformationUIElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfReadingInformationUIElement *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfReadingInformationUIElement *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfReadingInformationUIElement *This);
	HRESULT(STDMETHODCALLTYPE *GetDescription) (ITfReadingInformationUIElement *This, BSTR *pbstrDescription);
	HRESULT(STDMETHODCALLTYPE *GetGUID) (ITfReadingInformationUIElement *This, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfReadingInformationUIElement *This, BOOL bShow);
	HRESULT(STDMETHODCALLTYPE *IsShown) (ITfReadingInformationUIElement *This, BOOL *pbShow);
	HRESULT(STDMETHODCALLTYPE *GetUpdatedFlags) (ITfReadingInformationUIElement *This, DWORD *pdwFlags);
	HRESULT(STDMETHODCALLTYPE *GetContext) (ITfReadingInformationUIElement *This, ITfContext **ppic);
	HRESULT(STDMETHODCALLTYPE *GetString) (ITfReadingInformationUIElement *This, BSTR *pstr);
	HRESULT(STDMETHODCALLTYPE *GetMaxReadingStringLength) (ITfReadingInformationUIElement *This, UINT *pcchMax);
	HRESULT(STDMETHODCALLTYPE *GetErrorIndex) (ITfReadingInformationUIElement *This, UINT *pErrorIndex);
	HRESULT(STDMETHODCALLTYPE *IsVerticalOrderPreferred) (ITfReadingInformationUIElement *This, BOOL *pfVertical);
	END_INTERFACE
}  ITfReadingInformationUIElementVtbl;
interface ITfReadingInformationUIElement
{
	CONST_VTBL struct ITfReadingInformationUIElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfReadingInformationUIElement_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfReadingInformationUIElement_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfReadingInformationUIElement_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfReadingInformationUIElement_GetDescription(This,pbstrDescription)( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
#define ITfReadingInformationUIElement_GetGUID(This,pguid)( (This)->lpVtbl -> GetGUID(This,pguid) )
#define ITfReadingInformationUIElement_Show(This,bShow)( (This)->lpVtbl -> Show(This,bShow) )
#define ITfReadingInformationUIElement_IsShown(This,pbShow)( (This)->lpVtbl -> IsShown(This,pbShow) )
#define ITfReadingInformationUIElement_GetUpdatedFlags(This,pdwFlags)( (This)->lpVtbl -> GetUpdatedFlags(This,pdwFlags) )
#define ITfReadingInformationUIElement_GetContext(This,ppic)( (This)->lpVtbl -> GetContext(This,ppic) )
#define ITfReadingInformationUIElement_GetString(This,pstr)( (This)->lpVtbl -> GetString(This,pstr) )
#define ITfReadingInformationUIElement_GetMaxReadingStringLength(This,pcchMax)( (This)->lpVtbl -> GetMaxReadingStringLength(This,pcchMax) )
#define ITfReadingInformationUIElement_GetErrorIndex(This,pErrorIndex)( (This)->lpVtbl -> GetErrorIndex(This,pErrorIndex) )
#define ITfReadingInformationUIElement_IsVerticalOrderPreferred(This,pfVertical)( (This)->lpVtbl -> IsVerticalOrderPreferred(This,pfVertical) )
#endif
#endif
#ifndef __ITfTransitoryExtensionUIElement_INTERFACE_DEFINED__
#define __ITfTransitoryExtensionUIElement_INTERFACE_DEFINED__
extern const IID IID_ITfTransitoryExtensionUIElement;
typedef struct ITfTransitoryExtensionUIElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfTransitoryExtensionUIElement *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfTransitoryExtensionUIElement *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfTransitoryExtensionUIElement *This);
	HRESULT(STDMETHODCALLTYPE *GetDescription) (ITfTransitoryExtensionUIElement *This, BSTR *pbstrDescription);
	HRESULT(STDMETHODCALLTYPE *GetGUID) (ITfTransitoryExtensionUIElement *This, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfTransitoryExtensionUIElement *This, BOOL bShow);
	HRESULT(STDMETHODCALLTYPE *IsShown) (ITfTransitoryExtensionUIElement *This, BOOL *pbShow);
	HRESULT(STDMETHODCALLTYPE *GetDocumentMgr) (ITfTransitoryExtensionUIElement *This, ITfDocumentMgr **ppdim);
	END_INTERFACE
}  ITfTransitoryExtensionUIElementVtbl;
interface ITfTransitoryExtensionUIElement
{
	CONST_VTBL struct ITfTransitoryExtensionUIElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfTransitoryExtensionUIElement_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfTransitoryExtensionUIElement_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfTransitoryExtensionUIElement_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfTransitoryExtensionUIElement_GetDescription(This,pbstrDescription)( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
#define ITfTransitoryExtensionUIElement_GetGUID(This,pguid)( (This)->lpVtbl -> GetGUID(This,pguid) )
#define ITfTransitoryExtensionUIElement_Show(This,bShow)( (This)->lpVtbl -> Show(This,bShow) )
#define ITfTransitoryExtensionUIElement_IsShown(This,pbShow)( (This)->lpVtbl -> IsShown(This,pbShow) )
#define ITfTransitoryExtensionUIElement_GetDocumentMgr(This,ppdim)( (This)->lpVtbl -> GetDocumentMgr(This,ppdim) )
#endif
#endif
#ifndef __ITfTransitoryExtensionSink_INTERFACE_DEFINED__
#define __ITfTransitoryExtensionSink_INTERFACE_DEFINED__
extern const IID IID_ITfTransitoryExtensionSink;
typedef struct ITfTransitoryExtensionSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfTransitoryExtensionSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfTransitoryExtensionSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfTransitoryExtensionSink *This);
	HRESULT(STDMETHODCALLTYPE *OnTransitoryExtensionUpdated) (ITfTransitoryExtensionSink *This, ITfContext *pic, TfEditCookie ecReadOnly, ITfRange *pResultRange, ITfRange *pCompositionRange, BOOL *pfDeleteResultRange);
	END_INTERFACE
}  ITfTransitoryExtensionSinkVtbl;
interface ITfTransitoryExtensionSink
{
	CONST_VTBL struct ITfTransitoryExtensionSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfTransitoryExtensionSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfTransitoryExtensionSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfTransitoryExtensionSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfTransitoryExtensionSink_OnTransitoryExtensionUpdated(This,pic,ecReadOnly,pResultRange,pCompositionRange,pfDeleteResultRange)( (This)->lpVtbl -> OnTransitoryExtensionUpdated(This,pic,ecReadOnly,pResultRange,pCompositionRange,pfDeleteResultRange) )
#endif
#endif
#ifndef __ITfToolTipUIElement_INTERFACE_DEFINED__
#define __ITfToolTipUIElement_INTERFACE_DEFINED__
extern const IID IID_ITfToolTipUIElement;
typedef struct ITfToolTipUIElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfToolTipUIElement *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfToolTipUIElement *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfToolTipUIElement *This);
	HRESULT(STDMETHODCALLTYPE *GetDescription) (ITfToolTipUIElement *This, BSTR *pbstrDescription);
	HRESULT(STDMETHODCALLTYPE *GetGUID) (ITfToolTipUIElement *This, GUID *pguid);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfToolTipUIElement *This, BOOL bShow);
	HRESULT(STDMETHODCALLTYPE *IsShown) (ITfToolTipUIElement *This, BOOL *pbShow);
	HRESULT(STDMETHODCALLTYPE *GetString) (ITfToolTipUIElement *This, BSTR *pstr);
	END_INTERFACE
}  ITfToolTipUIElementVtbl;
interface ITfToolTipUIElement
{
	CONST_VTBL struct ITfToolTipUIElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfToolTipUIElement_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfToolTipUIElement_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfToolTipUIElement_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfToolTipUIElement_GetDescription(This,pbstrDescription)( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
#define ITfToolTipUIElement_GetGUID(This,pguid)( (This)->lpVtbl -> GetGUID(This,pguid) )
#define ITfToolTipUIElement_Show(This,bShow)( (This)->lpVtbl -> Show(This,bShow) )
#define ITfToolTipUIElement_IsShown(This,pbShow)( (This)->lpVtbl -> IsShown(This,pbShow) )
#define ITfToolTipUIElement_GetString(This,pstr)( (This)->lpVtbl -> GetString(This,pstr) )
#endif
#endif
#ifndef __ITfReverseConversionList_INTERFACE_DEFINED__
#define __ITfReverseConversionList_INTERFACE_DEFINED__
extern const IID IID_ITfReverseConversionList;
typedef struct ITfReverseConversionListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfReverseConversionList *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfReverseConversionList *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfReverseConversionList *This);
	HRESULT(STDMETHODCALLTYPE *GetLength) (ITfReverseConversionList *This, UINT *puIndex);
	HRESULT(STDMETHODCALLTYPE *GetString) (ITfReverseConversionList *This, UINT uIndex, BSTR *pbstr);
	END_INTERFACE
}  ITfReverseConversionListVtbl;
interface ITfReverseConversionList
{
	CONST_VTBL struct ITfReverseConversionListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfReverseConversionList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfReverseConversionList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfReverseConversionList_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfReverseConversionList_GetLength(This,puIndex)( (This)->lpVtbl -> GetLength(This,puIndex) )
#define ITfReverseConversionList_GetString(This,uIndex,pbstr)( (This)->lpVtbl -> GetString(This,uIndex,pbstr) )
#endif
#endif
#ifndef __ITfReverseConversion_INTERFACE_DEFINED__
#define __ITfReverseConversion_INTERFACE_DEFINED__
extern const IID IID_ITfReverseConversion;
typedef struct ITfReverseConversionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfReverseConversion *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfReverseConversion *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfReverseConversion *This);
	HRESULT(STDMETHODCALLTYPE *DoReverseConversion) (ITfReverseConversion *This, LPCWSTR lpstr, ITfReverseConversionList **ppList);
	END_INTERFACE
}  ITfReverseConversionVtbl;
interface ITfReverseConversion
{
	CONST_VTBL struct ITfReverseConversionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfReverseConversion_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfReverseConversion_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfReverseConversion_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfReverseConversion_DoReverseConversion(This,lpstr,ppList)( (This)->lpVtbl -> DoReverseConversion(This,lpstr,ppList) )
#endif
#endif
#ifndef __ITfReverseConversionMgr_INTERFACE_DEFINED__
#define __ITfReverseConversionMgr_INTERFACE_DEFINED__
extern const IID IID_ITfReverseConversionMgr;
typedef struct ITfReverseConversionMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfReverseConversionMgr *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfReverseConversionMgr *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfReverseConversionMgr *This);
	HRESULT(STDMETHODCALLTYPE *GetReverseConversion) (ITfReverseConversionMgr *This, LANGID langid, REFGUID guidProfile, DWORD dwflag, ITfReverseConversion **ppReverseConversion);
	END_INTERFACE
}  ITfReverseConversionMgrVtbl;
interface ITfReverseConversionMgr
{
	CONST_VTBL struct ITfReverseConversionMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfReverseConversionMgr_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfReverseConversionMgr_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfReverseConversionMgr_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfReverseConversionMgr_GetReverseConversion(This,langid,guidProfile,dwflag,ppReverseConversion)( (This)->lpVtbl -> GetReverseConversion(This,langid,guidProfile,dwflag,ppReverseConversion) )
#endif
#endif
DEFINE_GUID(TF_PROFILE_NEWPHONETIC, 0xB2F9C502, 0x1742, 0x11D4, 0x97, 0x90, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID(TF_PROFILE_PHONETIC, 0x761309DE, 0x317A, 0x11D4, 0x9B, 0x5D, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID(TF_PROFILE_NEWCHANGJIE, 0xF3BA907A, 0x6C7E, 0x11D4, 0x97, 0xFA, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID(TF_PROFILE_CHANGJIE, 0x4BDF9F03, 0xC7D3, 0x11D4, 0xB2, 0xAB, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID(TF_PROFILE_NEWQUICK, 0x0B883BA0, 0xC1C7, 0x11D4, 0x87, 0xF9, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID(TF_PROFILE_QUICK, 0x6024B45F, 0x5C54, 0x11D4, 0xB9, 0x21, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID(TF_PROFILE_CANTONESE, 0x0AEC109C, 0x7E96, 0x11D4, 0xB2, 0xEF, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID(TF_PROFILE_PINYIN, 0xF3BA9077, 0x6C7E, 0x11D4, 0x97, 0xFA, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID(TF_PROFILE_DAYI, 0x037B2C25, 0x480C, 0x4D7F, 0xB0, 0x27, 0xD6, 0xCA, 0x6B, 0x69, 0x78, 0x8A);
DEFINE_GUID(TF_PROFILE_ARRAY, 0xD38EFF65, 0xAA46, 0x4FD5, 0x91, 0xA7, 0x67, 0x84, 0x5F, 0xB0, 0x2F, 0x5B);
DEFINE_GUID(TF_PROFILE_QUANPIN, 0x54FC610E, 0x6ABD, 0x4685, 0x9D, 0xDD, 0xA1, 0x30, 0xBD, 0xF1, 0xB1, 0x70);
DEFINE_GUID(TF_PROFILE_ZHENGMA, 0x733B4D81, 0x3BC3, 0x4132, 0xB9, 0x1A, 0xE9, 0xCD, 0xD5, 0xE2, 0xBF, 0xC9);
DEFINE_GUID(TF_PROFILE_SHUANGPIN, 0xEF63706D, 0x31C4, 0x490E, 0x9D, 0xBB, 0xBD, 0x15, 0x0A, 0xDC, 0x45, 0x4B);
DEFINE_GUID(TF_PROFILE_YI, 0x409C8376, 0x007B, 0x4357, 0xAE, 0x8E, 0x26, 0x31, 0x6E, 0xE3, 0xFB, 0x0D);
#endif
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0090_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0090_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER CLIPFORMAT_UserSize(unsigned long *, unsigned long, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserMarshal(unsigned long *, unsigned char *, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserUnmarshal(unsigned long *, unsigned char *, CLIPFORMAT *);
void __RPC_USER CLIPFORMAT_UserFree(unsigned long *, CLIPFORMAT *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER CLIPFORMAT_UserSize64(unsigned long *, unsigned long, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserMarshal64(unsigned long *, unsigned char *, CLIPFORMAT *);
unsigned char *__RPC_USER CLIPFORMAT_UserUnmarshal64(unsigned long *, unsigned char *, CLIPFORMAT *);
void __RPC_USER CLIPFORMAT_UserFree64(unsigned long *, CLIPFORMAT *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
