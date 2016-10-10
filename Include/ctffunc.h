/*+@@file@@----------------------------------------------------------------*//*!
 \file		ctffunc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 18:15:39 2016
 \date		Modified on Mon Jul  4 18:15:39 2016
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
#ifndef __ctffunc_h__
#define __ctffunc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITfCandidateString_FWD_DEFINED__
#define __ITfCandidateString_FWD_DEFINED__
typedef interface ITfCandidateString ITfCandidateString;
#endif
#ifndef __IEnumTfCandidates_FWD_DEFINED__
#define __IEnumTfCandidates_FWD_DEFINED__
typedef interface IEnumTfCandidates IEnumTfCandidates;
#endif
#ifndef __ITfCandidateList_FWD_DEFINED__
#define __ITfCandidateList_FWD_DEFINED__
typedef interface ITfCandidateList ITfCandidateList;
#endif
#ifndef __ITfFnReconversion_FWD_DEFINED__
#define __ITfFnReconversion_FWD_DEFINED__
typedef interface ITfFnReconversion ITfFnReconversion;
#endif
#ifndef __ITfFnPlayBack_FWD_DEFINED__
#define __ITfFnPlayBack_FWD_DEFINED__
typedef interface ITfFnPlayBack ITfFnPlayBack;
#endif
#ifndef __ITfFnLangProfileUtil_FWD_DEFINED__
#define __ITfFnLangProfileUtil_FWD_DEFINED__
typedef interface ITfFnLangProfileUtil ITfFnLangProfileUtil;
#endif
#ifndef __ITfFnConfigure_FWD_DEFINED__
#define __ITfFnConfigure_FWD_DEFINED__
typedef interface ITfFnConfigure ITfFnConfigure;
#endif
#ifndef __ITfFnConfigureRegisterWord_FWD_DEFINED__
#define __ITfFnConfigureRegisterWord_FWD_DEFINED__
typedef interface ITfFnConfigureRegisterWord ITfFnConfigureRegisterWord;
#endif
#ifndef __ITfFnConfigureRegisterEudc_FWD_DEFINED__
#define __ITfFnConfigureRegisterEudc_FWD_DEFINED__
typedef interface ITfFnConfigureRegisterEudc ITfFnConfigureRegisterEudc;
#endif
#ifndef __ITfFnShowHelp_FWD_DEFINED__
#define __ITfFnShowHelp_FWD_DEFINED__
typedef interface ITfFnShowHelp ITfFnShowHelp;
#endif
#ifndef __ITfFnBalloon_FWD_DEFINED__
#define __ITfFnBalloon_FWD_DEFINED__
typedef interface ITfFnBalloon ITfFnBalloon;
#endif
#ifndef __ITfFnGetSAPIObject_FWD_DEFINED__
#define __ITfFnGetSAPIObject_FWD_DEFINED__
typedef interface ITfFnGetSAPIObject ITfFnGetSAPIObject;
#endif
#ifndef __ITfFnPropertyUIStatus_FWD_DEFINED__
#define __ITfFnPropertyUIStatus_FWD_DEFINED__
typedef interface ITfFnPropertyUIStatus ITfFnPropertyUIStatus;
#endif
#ifndef __IEnumSpeechCommands_FWD_DEFINED__
#define __IEnumSpeechCommands_FWD_DEFINED__
typedef interface IEnumSpeechCommands IEnumSpeechCommands;
#endif
#ifndef __ISpeechCommandProvider_FWD_DEFINED__
#define __ISpeechCommandProvider_FWD_DEFINED__
typedef interface ISpeechCommandProvider ISpeechCommandProvider;
#endif
#ifndef __ITfFnCustomSpeechCommand_FWD_DEFINED__
#define __ITfFnCustomSpeechCommand_FWD_DEFINED__
typedef interface ITfFnCustomSpeechCommand ITfFnCustomSpeechCommand;
#endif
#ifndef __ITfFnLMProcessor_FWD_DEFINED__
#define __ITfFnLMProcessor_FWD_DEFINED__
typedef interface ITfFnLMProcessor ITfFnLMProcessor;
#endif
#ifndef __ITfFnLMInternal_FWD_DEFINED__
#define __ITfFnLMInternal_FWD_DEFINED__
typedef interface ITfFnLMInternal ITfFnLMInternal;
#endif
#ifndef __IEnumTfLatticeElements_FWD_DEFINED__
#define __IEnumTfLatticeElements_FWD_DEFINED__
typedef interface IEnumTfLatticeElements IEnumTfLatticeElements;
#endif
#ifndef __ITfLMLattice_FWD_DEFINED__
#define __ITfLMLattice_FWD_DEFINED__
typedef interface ITfLMLattice ITfLMLattice;
#endif
#ifndef __ITfFnAdviseText_FWD_DEFINED__
#define __ITfFnAdviseText_FWD_DEFINED__
typedef interface ITfFnAdviseText ITfFnAdviseText;
#endif
#include "oaidl.h"
#include "msctf.h"
#ifndef CTFFUNC_DEFINED
#define CTFFUNC_DEFINED
#include <windows.h>
#define TF_E_NOCONVERSION     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x0600)
extern const CLSID CLSID_SapiLayr;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0000_v0_0_s_ifspec;
#ifndef __ITfCandidateString_INTERFACE_DEFINED__
#define __ITfCandidateString_INTERFACE_DEFINED__
extern const IID IID_ITfCandidateString;
typedef struct ITfCandidateStringVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITfCandidateString * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITfCandidateString * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITfCandidateString * This);
	HRESULT(STDMETHODCALLTYPE * GetString) (ITfCandidateString * This, BSTR * pbstr);
	HRESULT(STDMETHODCALLTYPE * GetIndex) (ITfCandidateString * This, ULONG * pnIndex);
	END_INTERFACE
}  ITfCandidateStringVtbl;
interface ITfCandidateString
{
	CONST_VTBL struct ITfCandidateStringVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfCandidateString_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfCandidateString_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfCandidateString_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfCandidateString_GetString(This,pbstr)( (This)->lpVtbl -> GetString(This,pbstr) )
#define ITfCandidateString_GetIndex(This,pnIndex)( (This)->lpVtbl -> GetIndex(This,pnIndex) )
#endif
#endif
#ifndef __IEnumTfCandidates_INTERFACE_DEFINED__
#define __IEnumTfCandidates_INTERFACE_DEFINED__
extern const IID IID_IEnumTfCandidates;
typedef struct IEnumTfCandidatesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumTfCandidates * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumTfCandidates * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumTfCandidates * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumTfCandidates * This, IEnumTfCandidates ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumTfCandidates * This, ULONG ulCount, ITfCandidateString ** ppCand, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumTfCandidates * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumTfCandidates * This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfCandidatesVtbl;
interface IEnumTfCandidates
{
	CONST_VTBL struct IEnumTfCandidatesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfCandidates_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfCandidates_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfCandidates_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfCandidates_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfCandidates_Next(This,ulCount,ppCand,pcFetched)( (This)->lpVtbl -> Next(This,ulCount,ppCand,pcFetched) )
#define IEnumTfCandidates_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfCandidates_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfCandidateList_INTERFACE_DEFINED__
#define __ITfCandidateList_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("baa898f2-0207-4643-92ca-f3f7b0cf6f80")
enum __MIDL_ITfCandidateList_0001
{
	CAND_FINALIZED = 0,
	CAND_SELECTED = 0x1,
	CAND_CANCELED = 0x2
} TfCandidateResult;
extern const IID IID_ITfCandidateList;
typedef struct ITfCandidateListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfCandidateList *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfCandidateList *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfCandidateList *This);
	HRESULT(STDMETHODCALLTYPE *EnumCandidates) (ITfCandidateList *This, IEnumTfCandidates **ppEnum);
	HRESULT(STDMETHODCALLTYPE *GetCandidate) (ITfCandidateList *This, ULONG nIndex, ITfCandidateString **ppCand);
	HRESULT(STDMETHODCALLTYPE *GetCandidateNum) (ITfCandidateList *This, ULONG *pnCnt);
	HRESULT(STDMETHODCALLTYPE *SetResult) (ITfCandidateList *This, ULONG nIndex, TfCandidateResult imcr);
	END_INTERFACE
}  ITfCandidateListVtbl;
interface ITfCandidateList
{
	CONST_VTBL struct ITfCandidateListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfCandidateList_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfCandidateList_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfCandidateList_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfCandidateList_EnumCandidates(This,ppEnum)( (This)->lpVtbl -> EnumCandidates(This,ppEnum) )
#define ITfCandidateList_GetCandidate(This,nIndex,ppCand)( (This)->lpVtbl -> GetCandidate(This,nIndex,ppCand) )
#define ITfCandidateList_GetCandidateNum(This,pnCnt)( (This)->lpVtbl -> GetCandidateNum(This,pnCnt) )
#define ITfCandidateList_SetResult(This,nIndex,imcr)( (This)->lpVtbl -> SetResult(This,nIndex,imcr) )
#endif
#endif
#ifndef __ITfFnReconversion_INTERFACE_DEFINED__
#define __ITfFnReconversion_INTERFACE_DEFINED__
extern const IID IID_ITfFnReconversion;
typedef struct ITfFnReconversionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnReconversion *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnReconversion *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnReconversion *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFnReconversion *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *QueryRange) (ITfFnReconversion *This, ITfRange *pRange, ITfRange **ppNewRange, BOOL *pfConvertable);
	HRESULT(STDMETHODCALLTYPE *GetReconversion) (ITfFnReconversion *This, ITfRange *pRange, ITfCandidateList **ppCandList);
	HRESULT(STDMETHODCALLTYPE *Reconvert) (ITfFnReconversion *This, ITfRange *pRange);
	END_INTERFACE
}  ITfFnReconversionVtbl;
interface ITfFnReconversion
{
	CONST_VTBL struct ITfFnReconversionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnReconversion_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnReconversion_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnReconversion_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnReconversion_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#define ITfFnReconversion_QueryRange(This,pRange,ppNewRange,pfConvertable)( (This)->lpVtbl -> QueryRange(This,pRange,ppNewRange,pfConvertable) )
#define ITfFnReconversion_GetReconversion(This,pRange,ppCandList)( (This)->lpVtbl -> GetReconversion(This,pRange,ppCandList) )
#define ITfFnReconversion_Reconvert(This,pRange)( (This)->lpVtbl -> Reconvert(This,pRange) )
#endif
#endif
extern const GUID GUID_COMPARTMENT_SAPI_AUDIO;
extern const GUID GUID_COMPARTMENT_SPEECH_DICTATIONSTAT;
#define TF_DICTATION_ON          0x00000001
#define TF_DICTATION_ENABLED     0x00000002
#define TF_COMMANDING_ENABLED    0x00000004
#define TF_COMMANDING_ON         0x00000008
#define TF_SPEECHUI_SHOWN        0x00000010
extern const GUID GUID_COMPARTMENT_SPEECH_UI_STATUS;
#define TF_SHOW_BALLOON          0x00000001
#define TF_DISABLE_BALLOON       0x00000002
extern const GUID GUID_COMPARTMENT_SPEECH_CFGMENU;
#define TF_MENUREADY          0x00000001
extern const GUID GUID_LBI_SAPILAYR_CFGMENUBUTTON;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0004_v0_0_s_ifspec;
#ifndef __ITfFnPlayBack_INTERFACE_DEFINED__
#define __ITfFnPlayBack_INTERFACE_DEFINED__
extern const IID IID_ITfFnPlayBack;
typedef struct ITfFnPlayBackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnPlayBack *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnPlayBack *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnPlayBack *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFnPlayBack *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *QueryRange) (ITfFnPlayBack *This, ITfRange *pRange, ITfRange **ppNewRange, BOOL *pfPlayable);
	HRESULT(STDMETHODCALLTYPE *Play) (ITfFnPlayBack *This, ITfRange *pRange);
	END_INTERFACE
}  ITfFnPlayBackVtbl;
interface ITfFnPlayBack
{
	CONST_VTBL struct ITfFnPlayBackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnPlayBack_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnPlayBack_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnPlayBack_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnPlayBack_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#define ITfFnPlayBack_QueryRange(This,pRange,ppNewRange,pfPlayable)( (This)->lpVtbl -> QueryRange(This,pRange,ppNewRange,pfPlayable) )
#define ITfFnPlayBack_Play(This,pRange)( (This)->lpVtbl -> Play(This,pRange) )
#endif
#endif
#ifndef __ITfFnLangProfileUtil_INTERFACE_DEFINED__
#define __ITfFnLangProfileUtil_INTERFACE_DEFINED__
extern const IID IID_ITfFnLangProfileUtil;
typedef struct ITfFnLangProfileUtilVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnLangProfileUtil *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnLangProfileUtil *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnLangProfileUtil *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFnLangProfileUtil *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *RegisterActiveProfiles) (ITfFnLangProfileUtil *This);
	HRESULT(STDMETHODCALLTYPE *IsProfileAvailableForLang) (ITfFnLangProfileUtil *This, LANGID langid, BOOL *pfAvailable);
	END_INTERFACE
}  ITfFnLangProfileUtilVtbl;
interface ITfFnLangProfileUtil
{
	CONST_VTBL struct ITfFnLangProfileUtilVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnLangProfileUtil_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnLangProfileUtil_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnLangProfileUtil_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnLangProfileUtil_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#define ITfFnLangProfileUtil_RegisterActiveProfiles(This)( (This)->lpVtbl -> RegisterActiveProfiles(This) )
#define ITfFnLangProfileUtil_IsProfileAvailableForLang(This,langid,pfAvailable)( (This)->lpVtbl -> IsProfileAvailableForLang(This,langid,pfAvailable) )
#endif
#endif
#ifndef __ITfFnConfigure_INTERFACE_DEFINED__
#define __ITfFnConfigure_INTERFACE_DEFINED__
extern const IID IID_ITfFnConfigure;
typedef struct ITfFnConfigureVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnConfigure *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnConfigure *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnConfigure *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFnConfigure *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfFnConfigure *This, HWND hwndParent, LANGID langid, REFGUID rguidProfile);
	END_INTERFACE
}  ITfFnConfigureVtbl;
interface ITfFnConfigure
{
	CONST_VTBL struct ITfFnConfigureVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnConfigure_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnConfigure_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnConfigure_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnConfigure_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#define ITfFnConfigure_Show(This,hwndParent,langid,rguidProfile)( (This)->lpVtbl -> Show(This,hwndParent,langid,rguidProfile) )
#endif
#endif
#ifndef __ITfFnConfigureRegisterWord_INTERFACE_DEFINED__
#define __ITfFnConfigureRegisterWord_INTERFACE_DEFINED__
extern const IID IID_ITfFnConfigureRegisterWord;
typedef struct ITfFnConfigureRegisterWordVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnConfigureRegisterWord *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnConfigureRegisterWord *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnConfigureRegisterWord *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFnConfigureRegisterWord *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfFnConfigureRegisterWord *This, HWND hwndParent, LANGID langid, REFGUID rguidProfile, BSTR bstrRegistered);
	END_INTERFACE
}  ITfFnConfigureRegisterWordVtbl;
interface ITfFnConfigureRegisterWord
{
	CONST_VTBL struct ITfFnConfigureRegisterWordVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnConfigureRegisterWord_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnConfigureRegisterWord_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnConfigureRegisterWord_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnConfigureRegisterWord_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#define ITfFnConfigureRegisterWord_Show(This,hwndParent,langid,rguidProfile,bstrRegistered)( (This)->lpVtbl -> Show(This,hwndParent,langid,rguidProfile,bstrRegistered) )
#endif
#endif
#ifndef __ITfFnConfigureRegisterEudc_INTERFACE_DEFINED__
#define __ITfFnConfigureRegisterEudc_INTERFACE_DEFINED__
extern const IID IID_ITfFnConfigureRegisterEudc;
typedef struct ITfFnConfigureRegisterEudcVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnConfigureRegisterEudc *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnConfigureRegisterEudc *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnConfigureRegisterEudc *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFnConfigureRegisterEudc *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfFnConfigureRegisterEudc *This, HWND hwndParent, LANGID langid, REFGUID rguidProfile, BSTR bstrRegistered);
	END_INTERFACE
}  ITfFnConfigureRegisterEudcVtbl;
interface ITfFnConfigureRegisterEudc
{
	CONST_VTBL struct ITfFnConfigureRegisterEudcVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnConfigureRegisterEudc_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnConfigureRegisterEudc_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnConfigureRegisterEudc_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnConfigureRegisterEudc_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#define ITfFnConfigureRegisterEudc_Show(This,hwndParent,langid,rguidProfile,bstrRegistered)( (This)->lpVtbl -> Show(This,hwndParent,langid,rguidProfile,bstrRegistered) )
#endif
#endif
#ifndef __ITfFnShowHelp_INTERFACE_DEFINED__
#define __ITfFnShowHelp_INTERFACE_DEFINED__
extern const IID IID_ITfFnShowHelp;
typedef struct ITfFnShowHelpVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnShowHelp *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnShowHelp *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnShowHelp *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFnShowHelp *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *Show) (ITfFnShowHelp *This, HWND hwndParent);
	END_INTERFACE
}  ITfFnShowHelpVtbl;
interface ITfFnShowHelp
{
	CONST_VTBL struct ITfFnShowHelpVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnShowHelp_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnShowHelp_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnShowHelp_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnShowHelp_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#define ITfFnShowHelp_Show(This,hwndParent)( (This)->lpVtbl -> Show(This,hwndParent) )
#endif
#endif
#ifndef __ITfFnBalloon_INTERFACE_DEFINED__
#define __ITfFnBalloon_INTERFACE_DEFINED__
extern const IID IID_ITfFnBalloon;
typedef struct ITfFnBalloonVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnBalloon *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnBalloon *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnBalloon *This);
	HRESULT(STDMETHODCALLTYPE *UpdateBalloon) (ITfFnBalloon *This, TfLBBalloonStyle style, const WCHAR *pch, ULONG cch);
	END_INTERFACE
}  ITfFnBalloonVtbl;
interface ITfFnBalloon
{
	CONST_VTBL struct ITfFnBalloonVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnBalloon_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnBalloon_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnBalloon_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnBalloon_UpdateBalloon(This,style,pch,cch)( (This)->lpVtbl -> UpdateBalloon(This,style,pch,cch) )
#endif
#endif
typedef DECLSPEC_UUID("36adb6d9-da1f-45d8-a499-86167e0f936b")
enum __MIDL___MIDL_itf_ctffunc_0000_0011_0001
{
	GETIF_RESMGR = 0,
	GETIF_RECOCONTEXT = 0x1,
	GETIF_RECOGNIZER = 0x2,
	GETIF_VOICE = 0x3,
	GETIF_DICTGRAM = 0x4,
	GETIF_RECOGNIZERNOINIT = 0x5
} TfSapiObject;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0011_v0_0_s_ifspec;
#ifndef __ITfFnGetSAPIObject_INTERFACE_DEFINED__
#define __ITfFnGetSAPIObject_INTERFACE_DEFINED__
extern const IID IID_ITfFnGetSAPIObject;
typedef struct ITfFnGetSAPIObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnGetSAPIObject *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnGetSAPIObject *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnGetSAPIObject *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFnGetSAPIObject *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *Get) (ITfFnGetSAPIObject *This, TfSapiObject sObj, IUnknown **ppunk);
	END_INTERFACE
}  ITfFnGetSAPIObjectVtbl;
interface ITfFnGetSAPIObject
{
	CONST_VTBL struct ITfFnGetSAPIObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnGetSAPIObject_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnGetSAPIObject_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnGetSAPIObject_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnGetSAPIObject_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#define ITfFnGetSAPIObject_Get(This,sObj,ppunk)( (This)->lpVtbl -> Get(This,sObj,ppunk) )
#endif
#endif
#ifndef __ITfFnPropertyUIStatus_INTERFACE_DEFINED__
#define __ITfFnPropertyUIStatus_INTERFACE_DEFINED__
extern const IID IID_ITfFnPropertyUIStatus;
typedef struct ITfFnPropertyUIStatusVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnPropertyUIStatus *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnPropertyUIStatus *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnPropertyUIStatus *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFnPropertyUIStatus *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *GetStatus) (ITfFnPropertyUIStatus *This, REFGUID refguidProp, DWORD *pdw);
	HRESULT(STDMETHODCALLTYPE *SetStatus) (ITfFnPropertyUIStatus *This, REFGUID refguidProp, DWORD dw);
	END_INTERFACE
}  ITfFnPropertyUIStatusVtbl;
interface ITfFnPropertyUIStatus
{
	CONST_VTBL struct ITfFnPropertyUIStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnPropertyUIStatus_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnPropertyUIStatus_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnPropertyUIStatus_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnPropertyUIStatus_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#define ITfFnPropertyUIStatus_GetStatus(This,refguidProp,pdw)( (This)->lpVtbl -> GetStatus(This,refguidProp,pdw) )
#define ITfFnPropertyUIStatus_SetStatus(This,refguidProp,dw)( (This)->lpVtbl -> SetStatus(This,refguidProp,dw) )
#endif
#endif
#define TF_PROPUI_STATUS_SAVETOFILE  0x00000001
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0013_v0_0_s_ifspec;
#ifndef __IEnumSpeechCommands_INTERFACE_DEFINED__
#define __IEnumSpeechCommands_INTERFACE_DEFINED__
extern const IID IID_IEnumSpeechCommands;
typedef struct IEnumSpeechCommandsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumSpeechCommands *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumSpeechCommands *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumSpeechCommands *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumSpeechCommands *This, IEnumSpeechCommands **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumSpeechCommands *This, ULONG ulCount, WCHAR **pSpCmds, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumSpeechCommands *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumSpeechCommands *This, ULONG ulCount);
	END_INTERFACE
}  IEnumSpeechCommandsVtbl;
interface IEnumSpeechCommands
{
	CONST_VTBL struct IEnumSpeechCommandsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSpeechCommands_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSpeechCommands_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumSpeechCommands_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumSpeechCommands_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumSpeechCommands_Next(This,ulCount,pSpCmds,pcFetched)( (This)->lpVtbl -> Next(This,ulCount,pSpCmds,pcFetched) )
#define IEnumSpeechCommands_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumSpeechCommands_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ISpeechCommandProvider_INTERFACE_DEFINED__
#define __ISpeechCommandProvider_INTERFACE_DEFINED__
extern const IID IID_ISpeechCommandProvider;
typedef struct ISpeechCommandProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISpeechCommandProvider *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISpeechCommandProvider *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISpeechCommandProvider *This);
	HRESULT(STDMETHODCALLTYPE *EnumSpeechCommands) (ISpeechCommandProvider *This, LANGID langid, IEnumSpeechCommands **ppEnum);
	HRESULT(STDMETHODCALLTYPE *ProcessCommand) (ISpeechCommandProvider *This, const WCHAR *pszCommand, ULONG cch, LANGID langid);
	END_INTERFACE
}  ISpeechCommandProviderVtbl;
interface ISpeechCommandProvider
{
	CONST_VTBL struct ISpeechCommandProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISpeechCommandProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISpeechCommandProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ISpeechCommandProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define ISpeechCommandProvider_EnumSpeechCommands(This,langid,ppEnum)( (This)->lpVtbl -> EnumSpeechCommands(This,langid,ppEnum) )
#define ISpeechCommandProvider_ProcessCommand(This,pszCommand,cch,langid)( (This)->lpVtbl -> ProcessCommand(This,pszCommand,cch,langid) )
#endif
#endif
#ifndef __ITfFnCustomSpeechCommand_INTERFACE_DEFINED__
#define __ITfFnCustomSpeechCommand_INTERFACE_DEFINED__
extern const IID IID_ITfFnCustomSpeechCommand;
typedef struct ITfFnCustomSpeechCommandVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnCustomSpeechCommand *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnCustomSpeechCommand *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnCustomSpeechCommand *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFnCustomSpeechCommand *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *SetSpeechCommandProvider) (ITfFnCustomSpeechCommand *This, IUnknown *pspcmdProvider);
	END_INTERFACE
}  ITfFnCustomSpeechCommandVtbl;
interface ITfFnCustomSpeechCommand
{
	CONST_VTBL struct ITfFnCustomSpeechCommandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnCustomSpeechCommand_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnCustomSpeechCommand_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnCustomSpeechCommand_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnCustomSpeechCommand_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#define ITfFnCustomSpeechCommand_SetSpeechCommandProvider(This,pspcmdProvider)( (This)->lpVtbl -> SetSpeechCommandProvider(This,pspcmdProvider) )
#endif
#endif
extern const GUID GUID_TFCAT_TIP_MASTERLM;
extern const GUID GUID_MASTERLM_FUNCTIONPROVIDER;
extern const GUID GUID_LMLATTICE_VER1_0;
extern const GUID GUID_PROP_LMLATTICE;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0016_v0_0_s_ifspec;
#ifndef __ITfFnLMProcessor_INTERFACE_DEFINED__
#define __ITfFnLMProcessor_INTERFACE_DEFINED__
extern const IID IID_ITfFnLMProcessor;
typedef struct ITfFnLMProcessorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnLMProcessor *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnLMProcessor *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnLMProcessor *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFnLMProcessor *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *QueryRange) (ITfFnLMProcessor *This, ITfRange *pRange, ITfRange **ppNewRange, BOOL *pfAccepted);
	HRESULT(STDMETHODCALLTYPE *QueryLangID) (ITfFnLMProcessor *This, LANGID langid, BOOL *pfAccepted);
	HRESULT(STDMETHODCALLTYPE *GetReconversion) (ITfFnLMProcessor *This, ITfRange *pRange, ITfCandidateList **ppCandList);
	HRESULT(STDMETHODCALLTYPE *Reconvert) (ITfFnLMProcessor *This, ITfRange *pRange);
	HRESULT(STDMETHODCALLTYPE *QueryKey) (ITfFnLMProcessor *This, BOOL fUp, WPARAM vKey, LPARAM lparamKeydata, BOOL *pfInterested);
	HRESULT(STDMETHODCALLTYPE *InvokeKey) (ITfFnLMProcessor *This, BOOL fUp, WPARAM vKey, LPARAM lparamKeyData);
	HRESULT(STDMETHODCALLTYPE *InvokeFunc) (ITfFnLMProcessor *This, ITfContext *pic, REFGUID refguidFunc);
	END_INTERFACE
}  ITfFnLMProcessorVtbl;
interface ITfFnLMProcessor
{
	CONST_VTBL struct ITfFnLMProcessorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnLMProcessor_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnLMProcessor_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnLMProcessor_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnLMProcessor_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#define ITfFnLMProcessor_QueryRange(This,pRange,ppNewRange,pfAccepted)( (This)->lpVtbl -> QueryRange(This,pRange,ppNewRange,pfAccepted) )
#define ITfFnLMProcessor_QueryLangID(This,langid,pfAccepted)( (This)->lpVtbl -> QueryLangID(This,langid,pfAccepted) )
#define ITfFnLMProcessor_GetReconversion(This,pRange,ppCandList)( (This)->lpVtbl -> GetReconversion(This,pRange,ppCandList) )
#define ITfFnLMProcessor_Reconvert(This,pRange)( (This)->lpVtbl -> Reconvert(This,pRange) )
#define ITfFnLMProcessor_QueryKey(This,fUp,vKey,lparamKeydata,pfInterested)( (This)->lpVtbl -> QueryKey(This,fUp,vKey,lparamKeydata,pfInterested) )
#define ITfFnLMProcessor_InvokeKey(This,fUp,vKey,lparamKeyData)( (This)->lpVtbl -> InvokeKey(This,fUp,vKey,lparamKeyData) )
#define ITfFnLMProcessor_InvokeFunc(This,pic,refguidFunc)( (This)->lpVtbl -> InvokeFunc(This,pic,refguidFunc) )
#endif
#endif
#ifndef __ITfFnLMInternal_INTERFACE_DEFINED__
#define __ITfFnLMInternal_INTERFACE_DEFINED__
extern const IID IID_ITfFnLMInternal;
typedef struct ITfFnLMInternalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnLMInternal *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnLMInternal *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnLMInternal *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFnLMInternal *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *QueryRange) (ITfFnLMInternal *This, ITfRange *pRange, ITfRange **ppNewRange, BOOL *pfAccepted);
	HRESULT(STDMETHODCALLTYPE *QueryLangID) (ITfFnLMInternal *This, LANGID langid, BOOL *pfAccepted);
	HRESULT(STDMETHODCALLTYPE *GetReconversion) (ITfFnLMInternal *This, ITfRange *pRange, ITfCandidateList **ppCandList);
	HRESULT(STDMETHODCALLTYPE *Reconvert) (ITfFnLMInternal *This, ITfRange *pRange);
	HRESULT(STDMETHODCALLTYPE *QueryKey) (ITfFnLMInternal *This, BOOL fUp, WPARAM vKey, LPARAM lparamKeydata, BOOL *pfInterested);
	HRESULT(STDMETHODCALLTYPE *InvokeKey) (ITfFnLMInternal *This, BOOL fUp, WPARAM vKey, LPARAM lparamKeyData);
	HRESULT(STDMETHODCALLTYPE *InvokeFunc) (ITfFnLMInternal *This, ITfContext *pic, REFGUID refguidFunc);
	HRESULT(STDMETHODCALLTYPE *ProcessLattice) (ITfFnLMInternal *This, ITfRange *pRange);
	END_INTERFACE
}  ITfFnLMInternalVtbl;
interface ITfFnLMInternal
{
	CONST_VTBL struct ITfFnLMInternalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnLMInternal_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnLMInternal_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnLMInternal_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnLMInternal_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#define ITfFnLMInternal_QueryRange(This,pRange,ppNewRange,pfAccepted)( (This)->lpVtbl -> QueryRange(This,pRange,ppNewRange,pfAccepted) )
#define ITfFnLMInternal_QueryLangID(This,langid,pfAccepted)( (This)->lpVtbl -> QueryLangID(This,langid,pfAccepted) )
#define ITfFnLMInternal_GetReconversion(This,pRange,ppCandList)( (This)->lpVtbl -> GetReconversion(This,pRange,ppCandList) )
#define ITfFnLMInternal_Reconvert(This,pRange)( (This)->lpVtbl -> Reconvert(This,pRange) )
#define ITfFnLMInternal_QueryKey(This,fUp,vKey,lparamKeydata,pfInterested)( (This)->lpVtbl -> QueryKey(This,fUp,vKey,lparamKeydata,pfInterested) )
#define ITfFnLMInternal_InvokeKey(This,fUp,vKey,lparamKeyData)( (This)->lpVtbl -> InvokeKey(This,fUp,vKey,lparamKeyData) )
#define ITfFnLMInternal_InvokeFunc(This,pic,refguidFunc)( (This)->lpVtbl -> InvokeFunc(This,pic,refguidFunc) )
#define ITfFnLMInternal_ProcessLattice(This,pRange)( (This)->lpVtbl -> ProcessLattice(This,pRange) )
#endif
#endif
typedef DECLSPEC_UUID("1b646efe-3ce3-4ce2-b41f-35b93fe5552f")
struct TF_LMLATTELEMENT
{
	DWORD dwFrameStart;
	DWORD dwFrameLen;
	DWORD dwFlags;
	union
	{
		INT iCost;
	};
	BSTR bstrText;
} TF_LMLATTELEMENT;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0018_v0_0_s_ifspec;
#ifndef __IEnumTfLatticeElements_INTERFACE_DEFINED__
#define __IEnumTfLatticeElements_INTERFACE_DEFINED__
extern const IID IID_IEnumTfLatticeElements;
typedef struct IEnumTfLatticeElementsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumTfLatticeElements *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumTfLatticeElements *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumTfLatticeElements *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumTfLatticeElements *This, IEnumTfLatticeElements **ppEnum);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumTfLatticeElements *This, ULONG ulCount, TF_LMLATTELEMENT *rgsElements, ULONG *pcFetched);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumTfLatticeElements *This);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumTfLatticeElements *This, ULONG ulCount);
	END_INTERFACE
}  IEnumTfLatticeElementsVtbl;
interface IEnumTfLatticeElements
{
	CONST_VTBL struct IEnumTfLatticeElementsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTfLatticeElements_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTfLatticeElements_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumTfLatticeElements_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumTfLatticeElements_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#define IEnumTfLatticeElements_Next(This,ulCount,rgsElements,pcFetched)( (This)->lpVtbl -> Next(This,ulCount,rgsElements,pcFetched) )
#define IEnumTfLatticeElements_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumTfLatticeElements_Skip(This,ulCount)( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#endif
#ifndef __ITfLMLattice_INTERFACE_DEFINED__
#define __ITfLMLattice_INTERFACE_DEFINED__
extern const IID IID_ITfLMLattice;
typedef struct ITfLMLatticeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfLMLattice *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfLMLattice *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfLMLattice *This);
	HRESULT(STDMETHODCALLTYPE *QueryType) (ITfLMLattice *This, REFGUID rguidType, BOOL *pfSupported);
	HRESULT(STDMETHODCALLTYPE *EnumLatticeElements) (ITfLMLattice *This, DWORD dwFrameStart, REFGUID rguidType, IEnumTfLatticeElements **ppEnum);
	END_INTERFACE
}  ITfLMLatticeVtbl;
interface ITfLMLattice
{
	CONST_VTBL struct ITfLMLatticeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfLMLattice_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfLMLattice_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfLMLattice_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfLMLattice_QueryType(This,rguidType,pfSupported)( (This)->lpVtbl -> QueryType(This,rguidType,pfSupported) )
#define ITfLMLattice_EnumLatticeElements(This,dwFrameStart,rguidType,ppEnum)( (This)->lpVtbl -> EnumLatticeElements(This,dwFrameStart,rguidType,ppEnum) )
#endif
#endif
#ifndef __ITfFnAdviseText_INTERFACE_DEFINED__
#define __ITfFnAdviseText_INTERFACE_DEFINED__
extern const IID IID_ITfFnAdviseText;
typedef struct ITfFnAdviseTextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITfFnAdviseText *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITfFnAdviseText *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITfFnAdviseText *This);
	HRESULT(STDMETHODCALLTYPE *GetDisplayName) (ITfFnAdviseText *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *OnTextUpdate) (ITfFnAdviseText *This, ITfRange *pRange, const WCHAR *pchText, LONG cch);
	HRESULT(STDMETHODCALLTYPE *OnLatticeUpdate) (ITfFnAdviseText *This, ITfRange *pRange, ITfLMLattice *pLattice);
	END_INTERFACE
}  ITfFnAdviseTextVtbl;
interface ITfFnAdviseText
{
	CONST_VTBL struct ITfFnAdviseTextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITfFnAdviseText_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITfFnAdviseText_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITfFnAdviseText_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITfFnAdviseText_GetDisplayName(This,pbstrName)( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
#define ITfFnAdviseText_OnTextUpdate(This,pRange,pchText,cch)( (This)->lpVtbl -> OnTextUpdate(This,pRange,pchText,cch) )
#define ITfFnAdviseText_OnLatticeUpdate(This,pRange,pLattice)( (This)->lpVtbl -> OnLatticeUpdate(This,pRange,pLattice) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0021_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
#endif
