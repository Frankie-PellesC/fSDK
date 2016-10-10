/*+@@file@@----------------------------------------------------------------*//*!
 \file		IACOM.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sat Jul 16 18:24:23 2016
 \date		Modified on Sat Jul 16 18:24:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __iacom_h__
#define __iacom_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IInkAnalyzer_FWD_DEFINED__
#define __IInkAnalyzer_FWD_DEFINED__
typedef interface IInkAnalyzer IInkAnalyzer;
#endif
#ifndef __IContextNode_FWD_DEFINED__
#define __IContextNode_FWD_DEFINED__
typedef interface IContextNode IContextNode;
#endif
#ifndef __IContextNodes_FWD_DEFINED__
#define __IContextNodes_FWD_DEFINED__
typedef interface IContextNodes IContextNodes;
#endif
#ifndef __IAnalysisRegion_FWD_DEFINED__
#define __IAnalysisRegion_FWD_DEFINED__
typedef interface IAnalysisRegion IAnalysisRegion;
#endif
#ifndef __IContextLink_FWD_DEFINED__
#define __IContextLink_FWD_DEFINED__
typedef interface IContextLink IContextLink;
#endif
#ifndef __IContextLinks_FWD_DEFINED__
#define __IContextLinks_FWD_DEFINED__
typedef interface IContextLinks IContextLinks;
#endif
#ifndef __IInkAnalysisRecognizer_FWD_DEFINED__
#define __IInkAnalysisRecognizer_FWD_DEFINED__
typedef interface IInkAnalysisRecognizer IInkAnalysisRecognizer;
#endif
#ifndef __IInkAnalysisRecognizers_FWD_DEFINED__
#define __IInkAnalysisRecognizers_FWD_DEFINED__
typedef interface IInkAnalysisRecognizers IInkAnalysisRecognizers;
#endif
#ifndef __IAnalysisAlternate_FWD_DEFINED__
#define __IAnalysisAlternate_FWD_DEFINED__
typedef interface IAnalysisAlternate IAnalysisAlternate;
#endif
#ifndef __IAnalysisAlternates_FWD_DEFINED__
#define __IAnalysisAlternates_FWD_DEFINED__
typedef interface IAnalysisAlternates IAnalysisAlternates;
#endif
#ifndef __IAnalysisWarning_FWD_DEFINED__
#define __IAnalysisWarning_FWD_DEFINED__
typedef interface IAnalysisWarning IAnalysisWarning;
#endif
#ifndef __IAnalysisWarnings_FWD_DEFINED__
#define __IAnalysisWarnings_FWD_DEFINED__
typedef interface IAnalysisWarnings IAnalysisWarnings;
#endif
#ifndef __IAnalysisStatus_FWD_DEFINED__
#define __IAnalysisStatus_FWD_DEFINED__
typedef interface IAnalysisStatus IAnalysisStatus;
#endif
#ifndef __IMatchesCriteriaCallBack_FWD_DEFINED__
#define __IMatchesCriteriaCallBack_FWD_DEFINED__
typedef interface IMatchesCriteriaCallBack IMatchesCriteriaCallBack;
#endif
#ifndef ___IAnalysisEvents_FWD_DEFINED__
#define ___IAnalysisEvents_FWD_DEFINED__
typedef interface _IAnalysisEvents _IAnalysisEvents;
#endif
#ifndef ___IAnalysisProxyEvents_FWD_DEFINED__
#define ___IAnalysisProxyEvents_FWD_DEFINED__
typedef interface _IAnalysisProxyEvents _IAnalysisProxyEvents;
#endif
#ifndef __InkAnalyzer_FWD_DEFINED__
#define __InkAnalyzer_FWD_DEFINED__
typedef struct InkAnalyzer InkAnalyzer;
#endif
#ifndef __AnalysisRegion_FWD_DEFINED__
#define __AnalysisRegion_FWD_DEFINED__
typedef struct AnalysisRegion AnalysisRegion;
#endif
#include "oaidl.h"
#include "ocidl.h"
void *__RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free(void *);
#ifndef _COMINKANALYSIS_H_
#define _COMINKANALYSIS_H_
extern RPC_IF_HANDLE __MIDL_itf_iacom_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iacom_0000_v0_0_s_ifspec;
#ifndef __COMINKANALYSISLib_LIBRARY_DEFINED__
#define __COMINKANALYSISLib_LIBRARY_DEFINED__
typedef enum StrokeType
{
	StrokeType_Unclassified = 0,
	StrokeType_Writing = 1,
	StrokeType_Drawing = 2
} StrokeType;
typedef enum ConfirmationType
{
	ConfirmationType_None = 0,
	ConfirmationType_NodeTypeAndProperties = 3,
	ConfirmationType_TopBoundary = 4
} ConfirmationType;
typedef enum AnalysisModes
{
	AnalysisModes_None = 0,
	AnalysisModes_AutomaticReconciliation = 0x2,
	AnalysisModes_StrokeCacheAutoCleanup = 0x4,
	AnalysisModes_Personalization = 0x8,
	AnalysisModes_Default = 0xd
} AnalysisModes;
typedef enum SemanticType
{
	SemanticType_None = 0,
	SemanticType_Underline = 1,
	SemanticType_Strikethrough = 2,
	SemanticType_Highlight = 3,
	SemanticType_ScratchOut = 4,
	SemanticType_VerticalRange = 5,
	SemanticType_Callout = 6,
	SemanticType_Enclosure = 7,
	SemanticType_Comment = 100,
	SemanticType_Container = 200,
	SemanticType_Connector = 201
} SemanticType;
typedef enum ContextLinkDirection
{
	ContextLinkDirection_LinksWith = 0,
	ContextLinkDirection_LinksFrom = 1,
	ContextLinkDirection_LinksTo = 2
} ContextLinkDirection;
typedef enum AnalysisWarningCode
{
	AnalysisWarningCode_Aborted = 0,
	AnalysisWarningCode_NoMatchingInkAnalysisRecognizerFound = 1,
	AnalysisWarningCode_FactoidNotSupported = 2,
	AnalysisWarningCode_FactoidCoercionNotSupported = 3,
	AnalysisWarningCode_GuideNotSupported = 4,
	AnalysisWarningCode_WordlistNotSupported = 5,
	AnalysisWarningCode_WordModeNotSupported = 6,
	AnalysisWarningCode_PartialDictionaryTermsNotSupported = 7,
	AnalysisWarningCode_TextRecognitionProcessFailed = 8,
	AnalysisWarningCode_AddInkToRecognizerFailed = 9,
	AnalysisWarningCode_SetPrefixSuffixFailed = 10,
	AnalysisWarningCode_InkAnalysisRecognizerInitializationFailed = 11,
	AnalysisWarningCode_ConfirmedWithoutInkRecognition = 12,
	AnalysisWarningCode_BackgroundException = 13,
	AnalysisWarningCode_ContextNodeLocationNotSet = 14,
	AnalysisWarningCode_LanguageIdNotRespected = 15,
	AnalysisWarningCode_EnableUnicodeCharacterRangesNotSupported = 16,
	AnalysisWarningCode_TopInkBreaksOnlyNotSupported = 17,
	AnalysisWarningCode_AnalysisAlreadyRunning = 18
} AnalysisWarningCode;
typedef enum RecognitionConfidence
{
	RecognitionConfidence_Strong = 0,
	RecognitionConfidence_Intermediate = 1,
	RecognitionConfidence_Poor = 2,
	RecognitionConfidence_Unknown = 3
} RecognitionConfidence;
typedef enum InkAnalysisRecognizerCapabilities
{
	RC_None = 0,
	RC_DoNotCare = 0x1,
	RC_Object = 0x2,
	RC_FreeInput = 0x4,
	RC_LinedInput = 0x8,
	RC_BoxedInput = 0x10,
	RC_CharacterAutoCompletionInput = 0x20,
	RC_RightAndDown = 0x40,
	RC_LeftAndDown = 0x80,
	RC_DownAndLeft = 0x100,
	RC_DownAndRight = 0x200,
	RC_ArbitraryAngle = 0x400,
	RC_Lattice = 0x800,
	RC_AdviseInkChange = 0x1000,
	RC_StrokeReorder = 0x2000,
	RC_Personalizable = 0x4000,
	RC_PrefersArbitraryAngle = 0x8000,
	RC_PrefersParagraphBreaking = 0x10000,
	RC_PrefersSegmentationRecognition = 0x20000
} InkAnalysisRecognizerCapabilities;
typedef struct InkAnalysisRecognizerGuide
{
	RECT rectWritingBox;
	RECT rectDrawnBox;
	long cRows;
	long cColumns;
	long midline;
} InkAnalysisRecognizerGuide;
extern const IID LIBID_COMINKANALYSISLib;
#ifndef __IInkAnalyzer_INTERFACE_DEFINED__
#define __IInkAnalyzer_INTERFACE_DEFINED__
extern const IID IID_IInkAnalyzer;
typedef struct IInkAnalyzerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IInkAnalyzer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IInkAnalyzer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IInkAnalyzer *This);
	HRESULT(STDMETHODCALLTYPE *GetDirtyRegion) (IInkAnalyzer *This, IAnalysisRegion **ppDirtyRegion);
	HRESULT(STDMETHODCALLTYPE *SetDirtyRegion) (IInkAnalyzer *This, IAnalysisRegion *pDirtyRegion);
	HRESULT(STDMETHODCALLTYPE *SetStrokeType) (IInkAnalyzer *This, LONG lStrokeId, StrokeType StrokeType);
	HRESULT(STDMETHODCALLTYPE *SetStrokesType) (IInkAnalyzer *This, ULONG ulStrokeIdCount, LONG *plStrokes, StrokeType StrokeType);
	HRESULT(STDMETHODCALLTYPE *GetStrokeType) (IInkAnalyzer *This, LONG lStrokeId, StrokeType *pStrokeType);
	HRESULT(STDMETHODCALLTYPE *SetStrokeLanguageId) (IInkAnalyzer *This, LONG lStrokeId, LONG lLanguageId);
	HRESULT(STDMETHODCALLTYPE *SetStrokesLanguageId) (IInkAnalyzer *This, ULONG ulStrokeIdCount, LONG *plStrokes, LONG lStrokesLCID);
	HRESULT(STDMETHODCALLTYPE *GetStrokeLanguageId) (IInkAnalyzer *This, LONG strokeId, LONG *plLanguageId);
	HRESULT(STDMETHODCALLTYPE *GetRootNode) (IInkAnalyzer *This, IContextNode **ppRootNode);
	HRESULT(STDMETHODCALLTYPE *BackgroundAnalyze) (IInkAnalyzer *This);
	HRESULT(STDMETHODCALLTYPE *Analyze) (IInkAnalyzer *This, IAnalysisStatus **ppStatus);
	HRESULT(STDMETHODCALLTYPE *IsAnalyzing) (IInkAnalyzer *This, VARIANT_BOOL *pbAnalyzing);
	HRESULT(STDMETHODCALLTYPE *Reconcile) (IInkAnalyzer *This);
	HRESULT(STDMETHODCALLTYPE *TransactionalReconcile) (IInkAnalyzer *This, LONG lTimeLimit, VARIANT_BOOL *pbMoreToReconcile);
	HRESULT(STDMETHODCALLTYPE *Abort) (IInkAnalyzer *This, IAnalysisRegion **ppAbortedRegion);
	HRESULT(STDMETHODCALLTYPE *GetInkAnalysisRecognizersByPriority) (IInkAnalyzer *This, IInkAnalysisRecognizers **ppInkAnalysisRecognizers);
	HRESULT(STDMETHODCALLTYPE *GetRecognizedString) (IInkAnalyzer *This, BSTR *pbstrRecognizedString);
	HRESULT(STDMETHODCALLTYPE *AddStroke) (IInkAnalyzer *This, LONG lStrokeId, ULONG ulStrokePacketDataCount, LONG *plStrokePacketData, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, IContextNode **ppContextNodeStrokeAddedTo);
	HRESULT(STDMETHODCALLTYPE *AddStrokes) (IInkAnalyzer *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, ULONG *pulPacketDataCountPerStroke, LONG *plStrokePacketData, IContextNode **ppContextNodeStrokeAddedTo);
	HRESULT(STDMETHODCALLTYPE *AddStrokeForLanguage) (IInkAnalyzer *This, LONG lStrokeId, LONG lStrokeLCID, ULONG ulStrokePacketDataCount, LONG *plStrokePacketData, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, IContextNode **ppContextNodeStrokeAddedTo);
	HRESULT(STDMETHODCALLTYPE *AddStrokesForLanguage) (IInkAnalyzer *This, ULONG ulStrokeIdsCount, LONG *plIdofStrokesToAdd, LONG lStrokesLCID, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, ULONG *pulPacketDataCountPerStroke, LONG *plStrokePacketData, IContextNode **ppContextNodeStrokeAddedTo);
	HRESULT(STDMETHODCALLTYPE *ClearStrokeData) (IInkAnalyzer *This, LONG lStrokeId);
	HRESULT(STDMETHODCALLTYPE *RemoveStroke) (IInkAnalyzer *This, LONG lStrokeId);
	HRESULT(STDMETHODCALLTYPE *RemoveStrokes) (IInkAnalyzer *This, ULONG ulStrokeIdCount, LONG *plStrokeIds);
	HRESULT(STDMETHODCALLTYPE *UpdateStrokesData) (IInkAnalyzer *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, ULONG *pulPacketDataCountPerStroke, LONG *plStrokePacketData);
	HRESULT(STDMETHODCALLTYPE *GetAnalysisModes) (IInkAnalyzer *This, AnalysisModes *pAnalysisMode);
	HRESULT(STDMETHODCALLTYPE *SetAnalysisModes) (IInkAnalyzer *This, AnalysisModes analysisMode);
	HRESULT(STDMETHODCALLTYPE *CreateAnalysisHint) (IInkAnalyzer *This, IContextNode **ppAnalysisHint);
	HRESULT(STDMETHODCALLTYPE *DeleteAnalysisHint) (IInkAnalyzer *This, IContextNode *pHintToDelete);
	HRESULT(STDMETHODCALLTYPE *GetAnalysisHints) (IInkAnalyzer *This, IContextNodes **ppAnalysisHints);
	HRESULT(STDMETHODCALLTYPE *GetAnalysisHintsByName) (IInkAnalyzer *This, BSTR hintName, IContextNodes **ppAnalysisHints);
	HRESULT(STDMETHODCALLTYPE *CreateContextNodes) (IInkAnalyzer *This, IContextNodes **ppContextNodes);
	HRESULT(STDMETHODCALLTYPE *GetAlternatesForContextNodes) (IInkAnalyzer *This, IContextNodes *pContextNodes, ULONG ulMaximumAlternates, IAnalysisAlternates **ppAlternates);
	HRESULT(STDMETHODCALLTYPE *GetAlternatesForStrokes) (IInkAnalyzer *This, ULONG ulStrokeIdsCount, LONG *plStrokes, ULONG ulMaximumAlternates, IAnalysisAlternates **ppAlternates);
	HRESULT(STDMETHODCALLTYPE *GetAlternates) (IInkAnalyzer *This, IAnalysisAlternates **ppAlternates);
	HRESULT(STDMETHODCALLTYPE *ModifyTopAlternate) (IInkAnalyzer *This, IAnalysisAlternate *pAlternate);
	HRESULT(STDMETHODCALLTYPE *ModifyTopAlternateWithConfirmation) (IInkAnalyzer *This, IAnalysisAlternate *alternate, VARIANT_BOOL fconfirmAutomatically);
	HRESULT(STDMETHODCALLTYPE *CreateCustomRecognizer) (IInkAnalyzer *This, const GUID *pInkAnalysisRecognizerId, IContextNode **ppContextNode);
	HRESULT(STDMETHODCALLTYPE *AddStrokeToCustomRecognizer) (IInkAnalyzer *This, LONG lStrokeId, ULONG ulStrokePacketDataCount, LONG *plStrokePacketData, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, IContextNode *pCustomRecognizer, IContextNode **ppContextNodeStrokeAddedTo);
	HRESULT(STDMETHODCALLTYPE *AddStrokesToCustomRecognizer) (IInkAnalyzer *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, ULONG *pulPacketDataCountPerStroke, LONG *plStrokePacketData, IContextNode *pCustomRecognizer, IContextNode **ppContextNodeStrokeAddedTo);
	HRESULT(STDMETHODCALLTYPE *FindNode) (IInkAnalyzer *This, const GUID *pId, IContextNode **ppContextNodeFound);
	HRESULT(STDMETHODCALLTYPE *FindLeafNodes) (IInkAnalyzer *This, IContextNodes **ppContextNodesFound);
	HRESULT(STDMETHODCALLTYPE *FindInkLeafNodesForStrokes) (IInkAnalyzer *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds, IContextNodes **ppContextNodesFound);
	HRESULT(STDMETHODCALLTYPE *FindInkLeafNodes) (IInkAnalyzer *This, IContextNodes **ppContextNodesFound);
	HRESULT(STDMETHODCALLTYPE *FindNodesOfType) (IInkAnalyzer *This, const GUID *pNodeType, IContextNodes **ppContextNodesFound);
	HRESULT(STDMETHODCALLTYPE *FindNodesOfTypeForStrokes) (IInkAnalyzer *This, const GUID *pNodeType, ULONG ulStrokeIdsCount, LONG *plStrokeIds, IContextNodes **ppContextNodesFound);
	HRESULT(STDMETHODCALLTYPE *FindNodesOfTypeInSubTree) (IInkAnalyzer *This, const GUID *pNodeType, IContextNode *pContextNodeToSearchFrom, IContextNodes **ppContextNodesFound);
	HRESULT(STDMETHODCALLTYPE *FindNodesWithCallBack) (IInkAnalyzer *This, IMatchesCriteriaCallBack *pCriteria, IContextNodes **ppContextNodesFound);
	HRESULT(STDMETHODCALLTYPE *FindNodesWithCallBackInSubTree) (IInkAnalyzer *This, IMatchesCriteriaCallBack *pCriteria, IContextNode *pContextNodeToSearchFrom, IContextNodes **ppContextNodesFound);
	HRESULT(STDMETHODCALLTYPE *LoadResults) (IInkAnalyzer *This, ULONG ulDataSize, BYTE *pbSerializedData, ULONG ulStrokeIdsCount, LONG *plOriginalStrokeIds, LONG *plModifiedStrokeIds, VARIANT_BOOL *pfRetVal);
	HRESULT(STDMETHODCALLTYPE *SaveResults) (IInkAnalyzer *This, ULONG ulMappedStrokeIdsCount, LONG *plOriginalStrokeIds, LONG *plModifiedStrokeIds, ULONG *pulSerializedDataSize, BYTE **ppbSerializedData);
	HRESULT(STDMETHODCALLTYPE *SaveResultsForNodes) (IInkAnalyzer *This, ULONG ulMappedStrokeIdsCount, LONG *plOriginalStrokeIds, LONG *plModifiedStrokeIds, IContextNodes *pContextNodes, ULONG *pulSerializedDataSize, BYTE **ppbSerializedData);
	HRESULT(STDMETHODCALLTYPE *SaveResultsForStrokes) (IInkAnalyzer *This, ULONG ulMappedStrokeIdsCount, LONG *plOriginalStrokeIds, LONG *plModifiedStrokeIds, ULONG ulStrokeIdCount, LONG *plStrokeIds, ULONG *pulSerializedDataSize, BYTE **ppbSerializedData);
	HRESULT(STDMETHODCALLTYPE *GetNodesFromTextRange) (IInkAnalyzer *This, LONG *plStart, LONG *plLength, IContextNodes **ppContextNodes, IContextNodes *pNodesToSearch);
	HRESULT(STDMETHODCALLTYPE *GetTextRangeFromNodes) (IInkAnalyzer *This, LONG *plStart, LONG *plLength, IContextNodes *pNodesToSearch);
	HRESULT(STDMETHODCALLTYPE *Search) (IInkAnalyzer *This, BSTR bstrPhraseToMatch, ULONG *pulSearchResultCount, ULONG **ppulStrokeCountPerResult, ULONG *pulStrokeIdsCount, ULONG **ppulStrokeIds);
	HRESULT(STDMETHODCALLTYPE *SearchWithLanguageId) (IInkAnalyzer *This, BSTR bstrPhraseToMatch, LONG lSearchStringLanguageId, ULONG *pulSearchResultCount, ULONG **ppulStrokeCountPerResult, ULONG *pulStrokeIdsCount, ULONG **ppulStrokeIds);
	END_INTERFACE
}  IInkAnalyzerVtbl;
interface IInkAnalyzer
{
	CONST_VTBL struct IInkAnalyzerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkAnalyzer_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IInkAnalyzer_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IInkAnalyzer_Release(This)(This)->lpVtbl -> Release(This)
#define IInkAnalyzer_GetDirtyRegion(This,ppDirtyRegion)(This)->lpVtbl -> GetDirtyRegion(This,ppDirtyRegion)
#define IInkAnalyzer_SetDirtyRegion(This,pDirtyRegion)(This)->lpVtbl -> SetDirtyRegion(This,pDirtyRegion)
#define IInkAnalyzer_SetStrokeType(This,lStrokeId,StrokeType)(This)->lpVtbl -> SetStrokeType(This,lStrokeId,StrokeType)
#define IInkAnalyzer_SetStrokesType(This,ulStrokeIdCount,plStrokes,StrokeType)(This)->lpVtbl -> SetStrokesType(This,ulStrokeIdCount,plStrokes,StrokeType)
#define IInkAnalyzer_GetStrokeType(This,lStrokeId,pStrokeType)(This)->lpVtbl -> GetStrokeType(This,lStrokeId,pStrokeType)
#define IInkAnalyzer_SetStrokeLanguageId(This,lStrokeId,lLanguageId)(This)->lpVtbl -> SetStrokeLanguageId(This,lStrokeId,lLanguageId)
#define IInkAnalyzer_SetStrokesLanguageId(This,ulStrokeIdCount,plStrokes,lStrokesLCID)(This)->lpVtbl -> SetStrokesLanguageId(This,ulStrokeIdCount,plStrokes,lStrokesLCID)
#define IInkAnalyzer_GetStrokeLanguageId(This,strokeId,plLanguageId)(This)->lpVtbl -> GetStrokeLanguageId(This,strokeId,plLanguageId)
#define IInkAnalyzer_GetRootNode(This,ppRootNode)(This)->lpVtbl -> GetRootNode(This,ppRootNode)
#define IInkAnalyzer_BackgroundAnalyze(This)(This)->lpVtbl -> BackgroundAnalyze(This)
#define IInkAnalyzer_Analyze(This,ppStatus)(This)->lpVtbl -> Analyze(This,ppStatus)
#define IInkAnalyzer_IsAnalyzing(This,pbAnalyzing)(This)->lpVtbl -> IsAnalyzing(This,pbAnalyzing)
#define IInkAnalyzer_Reconcile(This)(This)->lpVtbl -> Reconcile(This)
#define IInkAnalyzer_TransactionalReconcile(This,lTimeLimit,pbMoreToReconcile)(This)->lpVtbl -> TransactionalReconcile(This,lTimeLimit,pbMoreToReconcile)
#define IInkAnalyzer_Abort(This,ppAbortedRegion)(This)->lpVtbl -> Abort(This,ppAbortedRegion)
#define IInkAnalyzer_GetInkAnalysisRecognizersByPriority(This,ppInkAnalysisRecognizers)(This)->lpVtbl -> GetInkAnalysisRecognizersByPriority(This,ppInkAnalysisRecognizers)
#define IInkAnalyzer_GetRecognizedString(This,pbstrRecognizedString)(This)->lpVtbl -> GetRecognizedString(This,pbstrRecognizedString)
#define IInkAnalyzer_AddStroke(This,lStrokeId,ulStrokePacketDataCount,plStrokePacketData,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,ppContextNodeStrokeAddedTo)(This)->lpVtbl -> AddStroke(This,lStrokeId,ulStrokePacketDataCount,plStrokePacketData,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,ppContextNodeStrokeAddedTo)
#define IInkAnalyzer_AddStrokes(This,ulStrokeIdsCount,plStrokeIds,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,pulPacketDataCountPerStroke,plStrokePacketData,ppContextNodeStrokeAddedTo)(This)->lpVtbl -> AddStrokes(This,ulStrokeIdsCount,plStrokeIds,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,pulPacketDataCountPerStroke,plStrokePacketData,ppContextNodeStrokeAddedTo)
#define IInkAnalyzer_AddStrokeForLanguage(This,lStrokeId,lStrokeLCID,ulStrokePacketDataCount,plStrokePacketData,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,ppContextNodeStrokeAddedTo)(This)->lpVtbl -> AddStrokeForLanguage(This,lStrokeId,lStrokeLCID,ulStrokePacketDataCount,plStrokePacketData,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,ppContextNodeStrokeAddedTo)
#define IInkAnalyzer_AddStrokesForLanguage(This,ulStrokeIdsCount,plIdofStrokesToAdd,lStrokesLCID,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,pulPacketDataCountPerStroke,plStrokePacketData,ppContextNodeStrokeAddedTo)(This)->lpVtbl -> AddStrokesForLanguage(This,ulStrokeIdsCount,plIdofStrokesToAdd,lStrokesLCID,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,pulPacketDataCountPerStroke,plStrokePacketData,ppContextNodeStrokeAddedTo)
#define IInkAnalyzer_ClearStrokeData(This,lStrokeId)(This)->lpVtbl -> ClearStrokeData(This,lStrokeId)
#define IInkAnalyzer_RemoveStroke(This,lStrokeId)(This)->lpVtbl -> RemoveStroke(This,lStrokeId)
#define IInkAnalyzer_RemoveStrokes(This,ulStrokeIdCount,plStrokeIds)(This)->lpVtbl -> RemoveStrokes(This,ulStrokeIdCount,plStrokeIds)
#define IInkAnalyzer_UpdateStrokesData(This,ulStrokeIdsCount,plStrokeIds,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,pulPacketDataCountPerStroke,plStrokePacketData)(This)->lpVtbl -> UpdateStrokesData(This,ulStrokeIdsCount,plStrokeIds,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,pulPacketDataCountPerStroke,plStrokePacketData)
#define IInkAnalyzer_GetAnalysisModes(This,pAnalysisMode)(This)->lpVtbl -> GetAnalysisModes(This,pAnalysisMode)
#define IInkAnalyzer_SetAnalysisModes(This,analysisMode)(This)->lpVtbl -> SetAnalysisModes(This,analysisMode)
#define IInkAnalyzer_CreateAnalysisHint(This,ppAnalysisHint)(This)->lpVtbl -> CreateAnalysisHint(This,ppAnalysisHint)
#define IInkAnalyzer_DeleteAnalysisHint(This,pHintToDelete)(This)->lpVtbl -> DeleteAnalysisHint(This,pHintToDelete)
#define IInkAnalyzer_GetAnalysisHints(This,ppAnalysisHints)(This)->lpVtbl -> GetAnalysisHints(This,ppAnalysisHints)
#define IInkAnalyzer_GetAnalysisHintsByName(This,hintName,ppAnalysisHints)(This)->lpVtbl -> GetAnalysisHintsByName(This,hintName,ppAnalysisHints)
#define IInkAnalyzer_CreateContextNodes(This,ppContextNodes)(This)->lpVtbl -> CreateContextNodes(This,ppContextNodes)
#define IInkAnalyzer_GetAlternatesForContextNodes(This,pContextNodes,ulMaximumAlternates,ppAlternates)(This)->lpVtbl -> GetAlternatesForContextNodes(This,pContextNodes,ulMaximumAlternates,ppAlternates)
#define IInkAnalyzer_GetAlternatesForStrokes(This,ulStrokeIdsCount,plStrokes,ulMaximumAlternates,ppAlternates)(This)->lpVtbl -> GetAlternatesForStrokes(This,ulStrokeIdsCount,plStrokes,ulMaximumAlternates,ppAlternates)
#define IInkAnalyzer_GetAlternates(This,ppAlternates)(This)->lpVtbl -> GetAlternates(This,ppAlternates)
#define IInkAnalyzer_ModifyTopAlternate(This,pAlternate)(This)->lpVtbl -> ModifyTopAlternate(This,pAlternate)
#define IInkAnalyzer_ModifyTopAlternateWithConfirmation(This,alternate,fconfirmAutomatically)(This)->lpVtbl -> ModifyTopAlternateWithConfirmation(This,alternate,fconfirmAutomatically)
#define IInkAnalyzer_CreateCustomRecognizer(This,pInkAnalysisRecognizerId,ppContextNode)(This)->lpVtbl -> CreateCustomRecognizer(This,pInkAnalysisRecognizerId,ppContextNode)
#define IInkAnalyzer_AddStrokeToCustomRecognizer(This,lStrokeId,ulStrokePacketDataCount,plStrokePacketData,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,pCustomRecognizer,ppContextNodeStrokeAddedTo)(This)->lpVtbl -> AddStrokeToCustomRecognizer(This,lStrokeId,ulStrokePacketDataCount,plStrokePacketData,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,pCustomRecognizer,ppContextNodeStrokeAddedTo)
#define IInkAnalyzer_AddStrokesToCustomRecognizer(This,ulStrokeIdsCount,plStrokeIds,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,pulPacketDataCountPerStroke,plStrokePacketData,pCustomRecognizer,ppContextNodeStrokeAddedTo)(This)->lpVtbl -> AddStrokesToCustomRecognizer(This,ulStrokeIdsCount,plStrokeIds,ulStrokePacketDescriptionCount,pStrokePacketDescriptionGuids,pulPacketDataCountPerStroke,plStrokePacketData,pCustomRecognizer,ppContextNodeStrokeAddedTo)
#define IInkAnalyzer_FindNode(This,pId,ppContextNodeFound)(This)->lpVtbl -> FindNode(This,pId,ppContextNodeFound)
#define IInkAnalyzer_FindLeafNodes(This,ppContextNodesFound)(This)->lpVtbl -> FindLeafNodes(This,ppContextNodesFound)
#define IInkAnalyzer_FindInkLeafNodesForStrokes(This,ulStrokeIdsCount,plStrokeIds,ppContextNodesFound)(This)->lpVtbl -> FindInkLeafNodesForStrokes(This,ulStrokeIdsCount,plStrokeIds,ppContextNodesFound)
#define IInkAnalyzer_FindInkLeafNodes(This,ppContextNodesFound)(This)->lpVtbl -> FindInkLeafNodes(This,ppContextNodesFound)
#define IInkAnalyzer_FindNodesOfType(This,pNodeType,ppContextNodesFound)(This)->lpVtbl -> FindNodesOfType(This,pNodeType,ppContextNodesFound)
#define IInkAnalyzer_FindNodesOfTypeForStrokes(This,pNodeType,ulStrokeIdsCount,plStrokeIds,ppContextNodesFound)(This)->lpVtbl -> FindNodesOfTypeForStrokes(This,pNodeType,ulStrokeIdsCount,plStrokeIds,ppContextNodesFound)
#define IInkAnalyzer_FindNodesOfTypeInSubTree(This,pNodeType,pContextNodeToSearchFrom,ppContextNodesFound)(This)->lpVtbl -> FindNodesOfTypeInSubTree(This,pNodeType,pContextNodeToSearchFrom,ppContextNodesFound)
#define IInkAnalyzer_FindNodesWithCallBack(This,pCriteria,ppContextNodesFound)(This)->lpVtbl -> FindNodesWithCallBack(This,pCriteria,ppContextNodesFound)
#define IInkAnalyzer_FindNodesWithCallBackInSubTree(This,pCriteria,pContextNodeToSearchFrom,ppContextNodesFound)(This)->lpVtbl -> FindNodesWithCallBackInSubTree(This,pCriteria,pContextNodeToSearchFrom,ppContextNodesFound)
#define IInkAnalyzer_LoadResults(This,ulDataSize,pbSerializedData,ulStrokeIdsCount,plOriginalStrokeIds,plModifiedStrokeIds,pfRetVal)(This)->lpVtbl -> LoadResults(This,ulDataSize,pbSerializedData,ulStrokeIdsCount,plOriginalStrokeIds,plModifiedStrokeIds,pfRetVal)
#define IInkAnalyzer_SaveResults(This,ulMappedStrokeIdsCount,plOriginalStrokeIds,plModifiedStrokeIds,pulSerializedDataSize,ppbSerializedData)(This)->lpVtbl -> SaveResults(This,ulMappedStrokeIdsCount,plOriginalStrokeIds,plModifiedStrokeIds,pulSerializedDataSize,ppbSerializedData)
#define IInkAnalyzer_SaveResultsForNodes(This,ulMappedStrokeIdsCount,plOriginalStrokeIds,plModifiedStrokeIds,pContextNodes,pulSerializedDataSize,ppbSerializedData)(This)->lpVtbl -> SaveResultsForNodes(This,ulMappedStrokeIdsCount,plOriginalStrokeIds,plModifiedStrokeIds,pContextNodes,pulSerializedDataSize,ppbSerializedData)
#define IInkAnalyzer_SaveResultsForStrokes(This,ulMappedStrokeIdsCount,plOriginalStrokeIds,plModifiedStrokeIds,ulStrokeIdCount,plStrokeIds,pulSerializedDataSize,ppbSerializedData)(This)->lpVtbl -> SaveResultsForStrokes(This,ulMappedStrokeIdsCount,plOriginalStrokeIds,plModifiedStrokeIds,ulStrokeIdCount,plStrokeIds,pulSerializedDataSize,ppbSerializedData)
#define IInkAnalyzer_GetNodesFromTextRange(This,plStart,plLength,ppContextNodes,pNodesToSearch)(This)->lpVtbl -> GetNodesFromTextRange(This,plStart,plLength,ppContextNodes,pNodesToSearch)
#define IInkAnalyzer_GetTextRangeFromNodes(This,plStart,plLength,pNodesToSearch)(This)->lpVtbl -> GetTextRangeFromNodes(This,plStart,plLength,pNodesToSearch)
#define IInkAnalyzer_Search(This,bstrPhraseToMatch,pulSearchResultCount,ppulStrokeCountPerResult,pulStrokeIdsCount,ppulStrokeIds)(This)->lpVtbl -> Search(This,bstrPhraseToMatch,pulSearchResultCount,ppulStrokeCountPerResult,pulStrokeIdsCount,ppulStrokeIds)
#define IInkAnalyzer_SearchWithLanguageId(This,bstrPhraseToMatch,lSearchStringLanguageId,pulSearchResultCount,ppulStrokeCountPerResult,pulStrokeIdsCount,ppulStrokeIds)(This)->lpVtbl -> SearchWithLanguageId(This,bstrPhraseToMatch,lSearchStringLanguageId,pulSearchResultCount,ppulStrokeCountPerResult,pulStrokeIdsCount,ppulStrokeIds)
#endif
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetDirtyRegion_Proxy(IInkAnalyzer *This, IAnalysisRegion **ppDirtyRegion);
void __RPC_STUB IInkAnalyzer_GetDirtyRegion_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_SetDirtyRegion_Proxy(IInkAnalyzer *This, IAnalysisRegion *pDirtyRegion);
void __RPC_STUB IInkAnalyzer_SetDirtyRegion_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_SetStrokeType_Proxy(IInkAnalyzer *This, LONG lStrokeId, StrokeType StrokeType);
void __RPC_STUB IInkAnalyzer_SetStrokeType_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_SetStrokesType_Proxy(IInkAnalyzer *This, ULONG ulStrokeIdCount, LONG *plStrokes, StrokeType StrokeType);
void __RPC_STUB IInkAnalyzer_SetStrokesType_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetStrokeType_Proxy(IInkAnalyzer *This, LONG lStrokeId, StrokeType *pStrokeType);
void __RPC_STUB IInkAnalyzer_GetStrokeType_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_SetStrokeLanguageId_Proxy(IInkAnalyzer *This, LONG lStrokeId, LONG lLanguageId);
void __RPC_STUB IInkAnalyzer_SetStrokeLanguageId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_SetStrokesLanguageId_Proxy(IInkAnalyzer *This, ULONG ulStrokeIdCount, LONG *plStrokes, LONG lStrokesLCID);
void __RPC_STUB IInkAnalyzer_SetStrokesLanguageId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetStrokeLanguageId_Proxy(IInkAnalyzer *This, LONG strokeId, LONG *plLanguageId);
void __RPC_STUB IInkAnalyzer_GetStrokeLanguageId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetRootNode_Proxy(IInkAnalyzer *This, IContextNode **ppRootNode);
void __RPC_STUB IInkAnalyzer_GetRootNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_BackgroundAnalyze_Proxy(IInkAnalyzer *This);
void __RPC_STUB IInkAnalyzer_BackgroundAnalyze_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_Analyze_Proxy(IInkAnalyzer *This, IAnalysisStatus **ppStatus);
void __RPC_STUB IInkAnalyzer_Analyze_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_IsAnalyzing_Proxy(IInkAnalyzer *This, VARIANT_BOOL *pbAnalyzing);
void __RPC_STUB IInkAnalyzer_IsAnalyzing_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_Reconcile_Proxy(IInkAnalyzer *This);
void __RPC_STUB IInkAnalyzer_Reconcile_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_TransactionalReconcile_Proxy(IInkAnalyzer *This, LONG lTimeLimit, VARIANT_BOOL *pbMoreToReconcile);
void __RPC_STUB IInkAnalyzer_TransactionalReconcile_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_Abort_Proxy(IInkAnalyzer *This, IAnalysisRegion **ppAbortedRegion);
void __RPC_STUB IInkAnalyzer_Abort_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetInkAnalysisRecognizersByPriority_Proxy(IInkAnalyzer *This, IInkAnalysisRecognizers **ppInkAnalysisRecognizers);
void __RPC_STUB IInkAnalyzer_GetInkAnalysisRecognizersByPriority_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetRecognizedString_Proxy(IInkAnalyzer *This, BSTR *pbstrRecognizedString);
void __RPC_STUB IInkAnalyzer_GetRecognizedString_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_AddStroke_Proxy(IInkAnalyzer *This, LONG lStrokeId, ULONG ulStrokePacketDataCount, LONG *plStrokePacketData, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, IContextNode **ppContextNodeStrokeAddedTo);
void __RPC_STUB IInkAnalyzer_AddStroke_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_AddStrokes_Proxy(IInkAnalyzer *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, ULONG *pulPacketDataCountPerStroke, LONG *plStrokePacketData, IContextNode **ppContextNodeStrokeAddedTo);
void __RPC_STUB IInkAnalyzer_AddStrokes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_AddStrokeForLanguage_Proxy(IInkAnalyzer *This, LONG lStrokeId, LONG lStrokeLCID, ULONG ulStrokePacketDataCount, LONG *plStrokePacketData, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, IContextNode **ppContextNodeStrokeAddedTo);
void __RPC_STUB IInkAnalyzer_AddStrokeForLanguage_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_AddStrokesForLanguage_Proxy(IInkAnalyzer *This, ULONG ulStrokeIdsCount, LONG *plIdofStrokesToAdd, LONG lStrokesLCID, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, ULONG *pulPacketDataCountPerStroke, LONG *plStrokePacketData, IContextNode **ppContextNodeStrokeAddedTo);
void __RPC_STUB IInkAnalyzer_AddStrokesForLanguage_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_ClearStrokeData_Proxy(IInkAnalyzer *This, LONG lStrokeId);
void __RPC_STUB IInkAnalyzer_ClearStrokeData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_RemoveStroke_Proxy(IInkAnalyzer *This, LONG lStrokeId);
void __RPC_STUB IInkAnalyzer_RemoveStroke_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_RemoveStrokes_Proxy(IInkAnalyzer *This, ULONG ulStrokeIdCount, LONG *plStrokeIds);
void __RPC_STUB IInkAnalyzer_RemoveStrokes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_UpdateStrokesData_Proxy(IInkAnalyzer *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, ULONG *pulPacketDataCountPerStroke, LONG *plStrokePacketData);
void __RPC_STUB IInkAnalyzer_UpdateStrokesData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetAnalysisModes_Proxy(IInkAnalyzer *This, AnalysisModes *pAnalysisMode);
void __RPC_STUB IInkAnalyzer_GetAnalysisModes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_SetAnalysisModes_Proxy(IInkAnalyzer *This, AnalysisModes analysisMode);
void __RPC_STUB IInkAnalyzer_SetAnalysisModes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_CreateAnalysisHint_Proxy(IInkAnalyzer *This, IContextNode **ppAnalysisHint);
void __RPC_STUB IInkAnalyzer_CreateAnalysisHint_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_DeleteAnalysisHint_Proxy(IInkAnalyzer *This, IContextNode *pHintToDelete);
void __RPC_STUB IInkAnalyzer_DeleteAnalysisHint_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetAnalysisHints_Proxy(IInkAnalyzer *This, IContextNodes **ppAnalysisHints);
void __RPC_STUB IInkAnalyzer_GetAnalysisHints_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetAnalysisHintsByName_Proxy(IInkAnalyzer *This, BSTR hintName, IContextNodes **ppAnalysisHints);
void __RPC_STUB IInkAnalyzer_GetAnalysisHintsByName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_CreateContextNodes_Proxy(IInkAnalyzer *This, IContextNodes **ppContextNodes);
void __RPC_STUB IInkAnalyzer_CreateContextNodes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetAlternatesForContextNodes_Proxy(IInkAnalyzer *This, IContextNodes *pContextNodes, ULONG ulMaximumAlternates, IAnalysisAlternates **ppAlternates);
void __RPC_STUB IInkAnalyzer_GetAlternatesForContextNodes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetAlternatesForStrokes_Proxy(IInkAnalyzer *This, ULONG ulStrokeIdsCount, LONG *plStrokes, ULONG ulMaximumAlternates, IAnalysisAlternates **ppAlternates);
void __RPC_STUB IInkAnalyzer_GetAlternatesForStrokes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetAlternates_Proxy(IInkAnalyzer *This, IAnalysisAlternates **ppAlternates);
void __RPC_STUB IInkAnalyzer_GetAlternates_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_ModifyTopAlternate_Proxy(IInkAnalyzer *This, IAnalysisAlternate *pAlternate);
void __RPC_STUB IInkAnalyzer_ModifyTopAlternate_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_ModifyTopAlternateWithConfirmation_Proxy(IInkAnalyzer *This, IAnalysisAlternate *alternate, VARIANT_BOOL fconfirmAutomatically);
void __RPC_STUB IInkAnalyzer_ModifyTopAlternateWithConfirmation_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_CreateCustomRecognizer_Proxy(IInkAnalyzer *This, const GUID *pInkAnalysisRecognizerId, IContextNode **ppContextNode);
void __RPC_STUB IInkAnalyzer_CreateCustomRecognizer_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_AddStrokeToCustomRecognizer_Proxy(IInkAnalyzer *This, LONG lStrokeId, ULONG ulStrokePacketDataCount, LONG *plStrokePacketData, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, IContextNode *pCustomRecognizer, IContextNode **ppContextNodeStrokeAddedTo);
void __RPC_STUB IInkAnalyzer_AddStrokeToCustomRecognizer_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_AddStrokesToCustomRecognizer_Proxy(IInkAnalyzer *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds, ULONG ulStrokePacketDescriptionCount, GUID *pStrokePacketDescriptionGuids, ULONG *pulPacketDataCountPerStroke, LONG *plStrokePacketData, IContextNode *pCustomRecognizer, IContextNode **ppContextNodeStrokeAddedTo);
void __RPC_STUB IInkAnalyzer_AddStrokesToCustomRecognizer_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_FindNode_Proxy(IInkAnalyzer *This, const GUID *pId, IContextNode **ppContextNodeFound);
void __RPC_STUB IInkAnalyzer_FindNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_FindLeafNodes_Proxy(IInkAnalyzer *This, IContextNodes **ppContextNodesFound);
void __RPC_STUB IInkAnalyzer_FindLeafNodes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_FindInkLeafNodesForStrokes_Proxy(IInkAnalyzer *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds, IContextNodes **ppContextNodesFound);
void __RPC_STUB IInkAnalyzer_FindInkLeafNodesForStrokes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_FindInkLeafNodes_Proxy(IInkAnalyzer *This, IContextNodes **ppContextNodesFound);
void __RPC_STUB IInkAnalyzer_FindInkLeafNodes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_FindNodesOfType_Proxy(IInkAnalyzer *This, const GUID *pNodeType, IContextNodes **ppContextNodesFound);
void __RPC_STUB IInkAnalyzer_FindNodesOfType_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_FindNodesOfTypeForStrokes_Proxy(IInkAnalyzer *This, const GUID *pNodeType, ULONG ulStrokeIdsCount, LONG *plStrokeIds, IContextNodes **ppContextNodesFound);
void __RPC_STUB IInkAnalyzer_FindNodesOfTypeForStrokes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_FindNodesOfTypeInSubTree_Proxy(IInkAnalyzer *This, const GUID *pNodeType, IContextNode *pContextNodeToSearchFrom, IContextNodes **ppContextNodesFound);
void __RPC_STUB IInkAnalyzer_FindNodesOfTypeInSubTree_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_FindNodesWithCallBack_Proxy(IInkAnalyzer *This, IMatchesCriteriaCallBack *pCriteria, IContextNodes **ppContextNodesFound);
void __RPC_STUB IInkAnalyzer_FindNodesWithCallBack_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_FindNodesWithCallBackInSubTree_Proxy(IInkAnalyzer *This, IMatchesCriteriaCallBack *pCriteria, IContextNode *pContextNodeToSearchFrom, IContextNodes **ppContextNodesFound);
void __RPC_STUB IInkAnalyzer_FindNodesWithCallBackInSubTree_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_LoadResults_Proxy(IInkAnalyzer *This, ULONG ulDataSize, BYTE *pbSerializedData, ULONG ulStrokeIdsCount, LONG *plOriginalStrokeIds, LONG *plModifiedStrokeIds, VARIANT_BOOL *pfRetVal);
void __RPC_STUB IInkAnalyzer_LoadResults_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_SaveResults_Proxy(IInkAnalyzer *This, ULONG ulMappedStrokeIdsCount, LONG *plOriginalStrokeIds, LONG *plModifiedStrokeIds, ULONG *pulSerializedDataSize, BYTE **ppbSerializedData);
void __RPC_STUB IInkAnalyzer_SaveResults_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_SaveResultsForNodes_Proxy(IInkAnalyzer *This, ULONG ulMappedStrokeIdsCount, LONG *plOriginalStrokeIds, LONG *plModifiedStrokeIds, IContextNodes *pContextNodes, ULONG *pulSerializedDataSize, BYTE **ppbSerializedData);
void __RPC_STUB IInkAnalyzer_SaveResultsForNodes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_SaveResultsForStrokes_Proxy(IInkAnalyzer *This, ULONG ulMappedStrokeIdsCount, LONG *plOriginalStrokeIds, LONG *plModifiedStrokeIds, ULONG ulStrokeIdCount, LONG *plStrokeIds, ULONG *pulSerializedDataSize, BYTE **ppbSerializedData);
void __RPC_STUB IInkAnalyzer_SaveResultsForStrokes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetNodesFromTextRange_Proxy(IInkAnalyzer *This, LONG *plStart, LONG *plLength, IContextNodes **ppContextNodes, IContextNodes *pNodesToSearch);
void __RPC_STUB IInkAnalyzer_GetNodesFromTextRange_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_GetTextRangeFromNodes_Proxy(IInkAnalyzer *This, LONG *plStart, LONG *plLength, IContextNodes *pNodesToSearch);
void __RPC_STUB IInkAnalyzer_GetTextRangeFromNodes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_Search_Proxy(IInkAnalyzer *This, BSTR bstrPhraseToMatch, ULONG *pulSearchResultCount, ULONG **ppulStrokeCountPerResult, ULONG *pulStrokeIdsCount, ULONG **ppulStrokeIds);
void __RPC_STUB IInkAnalyzer_Search_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalyzer_SearchWithLanguageId_Proxy(IInkAnalyzer *This, BSTR bstrPhraseToMatch, LONG lSearchStringLanguageId, ULONG *pulSearchResultCount, ULONG **ppulStrokeCountPerResult, ULONG *pulStrokeIdsCount, ULONG **ppulStrokeIds);
void __RPC_STUB IInkAnalyzer_SearchWithLanguageId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IContextNode_INTERFACE_DEFINED__
#define __IContextNode_INTERFACE_DEFINED__
extern const IID IID_IContextNode;
typedef struct IContextNodeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContextNode *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContextNode *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContextNode *This);
	HRESULT(STDMETHODCALLTYPE *GetId) (IContextNode *This, GUID *pId);
	HRESULT(STDMETHODCALLTYPE *GetType) (IContextNode *This, GUID *pContextNodeType);
	HRESULT(STDMETHODCALLTYPE *GetLocation) (IContextNode *This, IAnalysisRegion **ppIAnalysisRegion);
	HRESULT(STDMETHODCALLTYPE *GetTypeName) (IContextNode *This, BSTR *pbstrContextNodeType);
	HRESULT(STDMETHODCALLTYPE *SetLocation) (IContextNode *This, IAnalysisRegion *pIAnalysisRegion);
	HRESULT(STDMETHODCALLTYPE *GetParentNode) (IContextNode *This, IContextNode **ppParentContextNode);
	HRESULT(STDMETHODCALLTYPE *Reparent) (IContextNode *This, IContextNode *pNewParent);
	HRESULT(STDMETHODCALLTYPE *GetSubNodes) (IContextNode *This, IContextNodes **ppSubContextNodes);
	HRESULT(STDMETHODCALLTYPE *CreateSubNode) (IContextNode *This, const GUID *pNodeType, IContextNode **ppContextNodeCreated);
	HRESULT(STDMETHODCALLTYPE *CreatePartiallyPopulatedSubNode) (IContextNode *This, const GUID *pNodeType, const GUID *pNodeId, IAnalysisRegion *pNodeLocation, IContextNode **ppPartiallyPopulatedContextNodeCreated);
	HRESULT(STDMETHODCALLTYPE *GetPartiallyPopulated) (IContextNode *This, VARIANT_BOOL *pfPartiallyPopulated);
	HRESULT(STDMETHODCALLTYPE *SetPartiallyPopulated) (IContextNode *This, VARIANT_BOOL fPartiallyPopulated);
	HRESULT(STDMETHODCALLTYPE *LoadPropertiesData) (IContextNode *This, ULONG cbPropertiesDataSize, BYTE *pbPropertiesData, VARIANT_BOOL *pfSuccessful);
	HRESULT(STDMETHODCALLTYPE *SavePropertiesData) (IContextNode *This, ULONG *pulPropertiesDataSize, BYTE **ppbPropertiesData);
	HRESULT(STDMETHODCALLTYPE *DeleteSubNode) (IContextNode *This, IContextNode *pContextNodeToDelete);
	HRESULT(STDMETHODCALLTYPE *AddPropertyData) (IContextNode *This, const GUID *pPropertyDataId, ULONG ulPropertyDataSize, BYTE *pbPropertyData);
	HRESULT(STDMETHODCALLTYPE *GetPropertyData) (IContextNode *This, const GUID *pPropertyDataId, ULONG *pulPropertyDataSize, BYTE **ppbPropertyData);
	HRESULT(STDMETHODCALLTYPE *RemovePropertyData) (IContextNode *This, const GUID *pPropertyDataId);
	HRESULT(STDMETHODCALLTYPE *GetPropertyDataIds) (IContextNode *This, ULONG *pulGuidCount, GUID **ppGuids);
	HRESULT(STDMETHODCALLTYPE *ContainsPropertyData) (IContextNode *This, const GUID *pPropertyDataId, VARIANT_BOOL *pbContains);
	HRESULT(STDMETHODCALLTYPE *SetStrokes) (IContextNode *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds);
	HRESULT(STDMETHODCALLTYPE *GetStrokeIds) (IContextNode *This, ULONG *pulStrokeIdsCount, LONG **pplStrokes);
	HRESULT(STDMETHODCALLTYPE *GetStrokeCount) (IContextNode *This, ULONG *pulStrokeCount);
	HRESULT(STDMETHODCALLTYPE *GetStrokePacketDataById) (IContextNode *This, LONG strokeId, ULONG *pStrokePacketDataCount, LONG **pplStrokePacketData);
	HRESULT(STDMETHODCALLTYPE *GetStrokePacketDescriptionById) (IContextNode *This, LONG lStrokeId, ULONG *pulStrokePacketDescriptionCount, GUID **ppStrokePacketDescriptionGuids);
	HRESULT(STDMETHODCALLTYPE *MoveSubNodeToPosition) (IContextNode *This, IContextNode *pSubnodeToMove, ULONG ulNewIndex);
	HRESULT(STDMETHODCALLTYPE *ReparentStrokesByIdToNode) (IContextNode *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds, IContextNode *pContextNodeDestination);
	HRESULT(STDMETHODCALLTYPE *Confirm) (IContextNode *This, ConfirmationType confirmedType);
	HRESULT(STDMETHODCALLTYPE *IsConfirmed) (IContextNode *This, ConfirmationType confirmedType, VARIANT_BOOL *pfTypeConfirmed);
	HRESULT(STDMETHODCALLTYPE *GetContextLinks) (IContextNode *This, IContextLinks **ppContextLinks);
	HRESULT(STDMETHODCALLTYPE *IsAlternateStringSupported) (IContextNode *This, BSTR bstrAlternateString, VARIANT_BOOL *pfIsSupported);
	HRESULT(STDMETHODCALLTYPE *IsStringSupported) (IContextNode *This, VARIANT_BOOL *pfIsSupported);
	END_INTERFACE
}  IContextNodeVtbl;
interface IContextNode
{
	CONST_VTBL struct IContextNodeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextNode_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IContextNode_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IContextNode_Release(This)(This)->lpVtbl -> Release(This)
#define IContextNode_GetId(This,pId)(This)->lpVtbl -> GetId(This,pId)
#define IContextNode_GetType(This,pContextNodeType)(This)->lpVtbl -> GetType(This,pContextNodeType)
#define IContextNode_GetLocation(This,ppIAnalysisRegion)(This)->lpVtbl -> GetLocation(This,ppIAnalysisRegion)
#define IContextNode_GetTypeName(This,pbstrContextNodeType)(This)->lpVtbl -> GetTypeName(This,pbstrContextNodeType)
#define IContextNode_SetLocation(This,pIAnalysisRegion)(This)->lpVtbl -> SetLocation(This,pIAnalysisRegion)
#define IContextNode_GetParentNode(This,ppParentContextNode)(This)->lpVtbl -> GetParentNode(This,ppParentContextNode)
#define IContextNode_Reparent(This,pNewParent)(This)->lpVtbl -> Reparent(This,pNewParent)
#define IContextNode_GetSubNodes(This,ppSubContextNodes)(This)->lpVtbl -> GetSubNodes(This,ppSubContextNodes)
#define IContextNode_CreateSubNode(This,pNodeType,ppContextNodeCreated)(This)->lpVtbl -> CreateSubNode(This,pNodeType,ppContextNodeCreated)
#define IContextNode_CreatePartiallyPopulatedSubNode(This,pNodeType,pNodeId,pNodeLocation,ppPartiallyPopulatedContextNodeCreated)(This)->lpVtbl -> CreatePartiallyPopulatedSubNode(This,pNodeType,pNodeId,pNodeLocation,ppPartiallyPopulatedContextNodeCreated)
#define IContextNode_GetPartiallyPopulated(This,pfPartiallyPopulated)(This)->lpVtbl -> GetPartiallyPopulated(This,pfPartiallyPopulated)
#define IContextNode_SetPartiallyPopulated(This,fPartiallyPopulated)(This)->lpVtbl -> SetPartiallyPopulated(This,fPartiallyPopulated)
#define IContextNode_LoadPropertiesData(This,cbPropertiesDataSize,pbPropertiesData,pfSuccessful)(This)->lpVtbl -> LoadPropertiesData(This,cbPropertiesDataSize,pbPropertiesData,pfSuccessful)
#define IContextNode_SavePropertiesData(This,pulPropertiesDataSize,ppbPropertiesData)(This)->lpVtbl -> SavePropertiesData(This,pulPropertiesDataSize,ppbPropertiesData)
#define IContextNode_DeleteSubNode(This,pContextNodeToDelete)(This)->lpVtbl -> DeleteSubNode(This,pContextNodeToDelete)
#define IContextNode_AddPropertyData(This,pPropertyDataId,ulPropertyDataSize,pbPropertyData)(This)->lpVtbl -> AddPropertyData(This,pPropertyDataId,ulPropertyDataSize,pbPropertyData)
#define IContextNode_GetPropertyData(This,pPropertyDataId,pulPropertyDataSize,ppbPropertyData)(This)->lpVtbl -> GetPropertyData(This,pPropertyDataId,pulPropertyDataSize,ppbPropertyData)
#define IContextNode_RemovePropertyData(This,pPropertyDataId)(This)->lpVtbl -> RemovePropertyData(This,pPropertyDataId)
#define IContextNode_GetPropertyDataIds(This,pulGuidCount,ppGuids)(This)->lpVtbl -> GetPropertyDataIds(This,pulGuidCount,ppGuids)
#define IContextNode_ContainsPropertyData(This,pPropertyDataId,pbContains)(This)->lpVtbl -> ContainsPropertyData(This,pPropertyDataId,pbContains)
#define IContextNode_SetStrokes(This,ulStrokeIdsCount,plStrokeIds)(This)->lpVtbl -> SetStrokes(This,ulStrokeIdsCount,plStrokeIds)
#define IContextNode_GetStrokeIds(This,pulStrokeIdsCount,pplStrokes)(This)->lpVtbl -> GetStrokeIds(This,pulStrokeIdsCount,pplStrokes)
#define IContextNode_GetStrokeCount(This,pulStrokeCount)(This)->lpVtbl -> GetStrokeCount(This,pulStrokeCount)
#define IContextNode_GetStrokePacketDataById(This,strokeId,pStrokePacketDataCount,pplStrokePacketData)(This)->lpVtbl -> GetStrokePacketDataById(This,strokeId,pStrokePacketDataCount,pplStrokePacketData)
#define IContextNode_GetStrokePacketDescriptionById(This,lStrokeId,pulStrokePacketDescriptionCount,ppStrokePacketDescriptionGuids)(This)->lpVtbl -> GetStrokePacketDescriptionById(This,lStrokeId,pulStrokePacketDescriptionCount,ppStrokePacketDescriptionGuids)
#define IContextNode_MoveSubNodeToPosition(This,pSubnodeToMove,ulNewIndex)(This)->lpVtbl -> MoveSubNodeToPosition(This,pSubnodeToMove,ulNewIndex)
#define IContextNode_ReparentStrokesByIdToNode(This,ulStrokeIdsCount,plStrokeIds,pContextNodeDestination)(This)->lpVtbl -> ReparentStrokesByIdToNode(This,ulStrokeIdsCount,plStrokeIds,pContextNodeDestination)
#define IContextNode_Confirm(This,confirmedType)(This)->lpVtbl -> Confirm(This,confirmedType)
#define IContextNode_IsConfirmed(This,confirmedType,pfTypeConfirmed)(This)->lpVtbl -> IsConfirmed(This,confirmedType,pfTypeConfirmed)
#define IContextNode_GetContextLinks(This,ppContextLinks)(This)->lpVtbl -> GetContextLinks(This,ppContextLinks)
#define IContextNode_IsAlternateStringSupported(This,bstrAlternateString,pfIsSupported)(This)->lpVtbl -> IsAlternateStringSupported(This,bstrAlternateString,pfIsSupported)
#define IContextNode_IsStringSupported(This,pfIsSupported)(This)->lpVtbl -> IsStringSupported(This,pfIsSupported)
#endif
HRESULT STDMETHODCALLTYPE IContextNode_GetId_Proxy(IContextNode *This, GUID *pId);
void __RPC_STUB IContextNode_GetId_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_GetType_Proxy(IContextNode *This, GUID *pContextNodeType);
void __RPC_STUB IContextNode_GetType_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_GetLocation_Proxy(IContextNode *This, IAnalysisRegion **ppIAnalysisRegion);
void __RPC_STUB IContextNode_GetLocation_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_GetTypeName_Proxy(IContextNode *This, BSTR *pbstrContextNodeType);
void __RPC_STUB IContextNode_GetTypeName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_SetLocation_Proxy(IContextNode *This, IAnalysisRegion *pIAnalysisRegion);
void __RPC_STUB IContextNode_SetLocation_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_GetParentNode_Proxy(IContextNode *This, IContextNode **ppParentContextNode);
void __RPC_STUB IContextNode_GetParentNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_Reparent_Proxy(IContextNode *This, IContextNode *pNewParent);
void __RPC_STUB IContextNode_Reparent_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_GetSubNodes_Proxy(IContextNode *This, IContextNodes **ppSubContextNodes);
void __RPC_STUB IContextNode_GetSubNodes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_CreateSubNode_Proxy(IContextNode *This, const GUID *pNodeType, IContextNode **ppContextNodeCreated);
void __RPC_STUB IContextNode_CreateSubNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_CreatePartiallyPopulatedSubNode_Proxy(IContextNode *This, const GUID *pNodeType, const GUID *pNodeId, IAnalysisRegion *pNodeLocation, IContextNode **ppPartiallyPopulatedContextNodeCreated);
void __RPC_STUB IContextNode_CreatePartiallyPopulatedSubNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_GetPartiallyPopulated_Proxy(IContextNode *This, VARIANT_BOOL *pfPartiallyPopulated);
void __RPC_STUB IContextNode_GetPartiallyPopulated_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_SetPartiallyPopulated_Proxy(IContextNode *This, VARIANT_BOOL fPartiallyPopulated);
void __RPC_STUB IContextNode_SetPartiallyPopulated_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_LoadPropertiesData_Proxy(IContextNode *This, ULONG cbPropertiesDataSize, BYTE *pbPropertiesData, VARIANT_BOOL *pfSuccessful);
void __RPC_STUB IContextNode_LoadPropertiesData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_SavePropertiesData_Proxy(IContextNode *This, ULONG *pulPropertiesDataSize, BYTE **ppbPropertiesData);
void __RPC_STUB IContextNode_SavePropertiesData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_DeleteSubNode_Proxy(IContextNode *This, IContextNode *pContextNodeToDelete);
void __RPC_STUB IContextNode_DeleteSubNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_AddPropertyData_Proxy(IContextNode *This, const GUID *pPropertyDataId, ULONG ulPropertyDataSize, BYTE *pbPropertyData);
void __RPC_STUB IContextNode_AddPropertyData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_GetPropertyData_Proxy(IContextNode *This, const GUID *pPropertyDataId, ULONG *pulPropertyDataSize, BYTE **ppbPropertyData);
void __RPC_STUB IContextNode_GetPropertyData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_RemovePropertyData_Proxy(IContextNode *This, const GUID *pPropertyDataId);
void __RPC_STUB IContextNode_RemovePropertyData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_GetPropertyDataIds_Proxy(IContextNode *This, ULONG *pulGuidCount, GUID **ppGuids);
void __RPC_STUB IContextNode_GetPropertyDataIds_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_ContainsPropertyData_Proxy(IContextNode *This, const GUID *pPropertyDataId, VARIANT_BOOL *pbContains);
void __RPC_STUB IContextNode_ContainsPropertyData_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_SetStrokes_Proxy(IContextNode *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds);
void __RPC_STUB IContextNode_SetStrokes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_GetStrokeIds_Proxy(IContextNode *This, ULONG *pulStrokeIdsCount, LONG **pplStrokes);
void __RPC_STUB IContextNode_GetStrokeIds_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_GetStrokeCount_Proxy(IContextNode *This, ULONG *pulStrokeCount);
void __RPC_STUB IContextNode_GetStrokeCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_GetStrokePacketDataById_Proxy(IContextNode *This, LONG strokeId, ULONG *pStrokePacketDataCount, LONG **pplStrokePacketData);
void __RPC_STUB IContextNode_GetStrokePacketDataById_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_GetStrokePacketDescriptionById_Proxy(IContextNode *This, LONG lStrokeId, ULONG *pulStrokePacketDescriptionCount, GUID **ppStrokePacketDescriptionGuids);
void __RPC_STUB IContextNode_GetStrokePacketDescriptionById_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_MoveSubNodeToPosition_Proxy(IContextNode *This, IContextNode *pSubnodeToMove, ULONG ulNewIndex);
void __RPC_STUB IContextNode_MoveSubNodeToPosition_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_ReparentStrokesByIdToNode_Proxy(IContextNode *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds, IContextNode *pContextNodeDestination);
void __RPC_STUB IContextNode_ReparentStrokesByIdToNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_Confirm_Proxy(IContextNode *This, ConfirmationType confirmedType);
void __RPC_STUB IContextNode_Confirm_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_IsConfirmed_Proxy(IContextNode *This, ConfirmationType confirmedType, VARIANT_BOOL *pfTypeConfirmed);
void __RPC_STUB IContextNode_IsConfirmed_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_GetContextLinks_Proxy(IContextNode *This, IContextLinks **ppContextLinks);
void __RPC_STUB IContextNode_GetContextLinks_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_IsAlternateStringSupported_Proxy(IContextNode *This, BSTR bstrAlternateString, VARIANT_BOOL *pfIsSupported);
void __RPC_STUB IContextNode_IsAlternateStringSupported_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNode_IsStringSupported_Proxy(IContextNode *This, VARIANT_BOOL *pfIsSupported);
void __RPC_STUB IContextNode_IsStringSupported_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IContextNodes_INTERFACE_DEFINED__
#define __IContextNodes_INTERFACE_DEFINED__
extern const IID IID_IContextNodes;
typedef struct IContextNodesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContextNodes *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContextNodes *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContextNodes *This);
	HRESULT(STDMETHODCALLTYPE *GetCount) (IContextNodes *This, ULONG *pulCount);
	HRESULT(STDMETHODCALLTYPE *GetContextNode) (IContextNodes *This, ULONG ulIndex, IContextNode **ppContextNode);
	HRESULT(STDMETHODCALLTYPE *AddContextNode) (IContextNodes *This, IContextNode *pContextNode);
	HRESULT(STDMETHODCALLTYPE *RemoveContextNode) (IContextNodes *This, IContextNode *pContextNode);
	END_INTERFACE
}  IContextNodesVtbl;
interface IContextNodes
{
	CONST_VTBL struct IContextNodesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextNodes_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IContextNodes_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IContextNodes_Release(This)(This)->lpVtbl -> Release(This)
#define IContextNodes_GetCount(This,pulCount)(This)->lpVtbl -> GetCount(This,pulCount)
#define IContextNodes_GetContextNode(This,ulIndex,ppContextNode)(This)->lpVtbl -> GetContextNode(This,ulIndex,ppContextNode)
#define IContextNodes_AddContextNode(This,pContextNode)(This)->lpVtbl -> AddContextNode(This,pContextNode)
#define IContextNodes_RemoveContextNode(This,pContextNode)(This)->lpVtbl -> RemoveContextNode(This,pContextNode)
#endif
HRESULT STDMETHODCALLTYPE IContextNodes_GetCount_Proxy(IContextNodes *This, ULONG *pulCount);
void __RPC_STUB IContextNodes_GetCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNodes_GetContextNode_Proxy(IContextNodes *This, ULONG ulIndex, IContextNode **ppContextNode);
void __RPC_STUB IContextNodes_GetContextNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNodes_AddContextNode_Proxy(IContextNodes *This, IContextNode *pContextNode);
void __RPC_STUB IContextNodes_AddContextNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextNodes_RemoveContextNode_Proxy(IContextNodes *This, IContextNode *pContextNode);
void __RPC_STUB IContextNodes_RemoveContextNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IAnalysisRegion_INTERFACE_DEFINED__
#define __IAnalysisRegion_INTERFACE_DEFINED__
extern const IID IID_IAnalysisRegion;
typedef struct IAnalysisRegionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAnalysisRegion *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAnalysisRegion *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAnalysisRegion *This);
	HRESULT(STDMETHODCALLTYPE *IsEmpty) (IAnalysisRegion *This, VARIANT_BOOL *pfIsEmpty);
	HRESULT(STDMETHODCALLTYPE *MakeEmpty) (IAnalysisRegion *This);
	HRESULT(STDMETHODCALLTYPE *MakeInfinite) (IAnalysisRegion *This);
	HRESULT(STDMETHODCALLTYPE *IsInfinite) (IAnalysisRegion *This, VARIANT_BOOL *pfIsInfinite);
	HRESULT(STDMETHODCALLTYPE *Clone) (IAnalysisRegion *This, IAnalysisRegion **pClonedRegion);
	HRESULT(STDMETHODCALLTYPE *GetRegionScans) (IAnalysisRegion *This, ULONG *pulRectCount, RECT **pRegionScans);
	HRESULT(STDMETHODCALLTYPE *UnionRectangle) (IAnalysisRegion *This, RECT *pRectangle);
	HRESULT(STDMETHODCALLTYPE *UnionRegion) (IAnalysisRegion *This, IAnalysisRegion *pRegionToUnion);
	HRESULT(STDMETHODCALLTYPE *GetBounds) (IAnalysisRegion *This, RECT *pBoundingRectangle);
	HRESULT(STDMETHODCALLTYPE *IntersectRectangle) (IAnalysisRegion *This, RECT *pIntersectingRectangle);
	HRESULT(STDMETHODCALLTYPE *IntersectRegion) (IAnalysisRegion *This, IAnalysisRegion *pRegionToIntersect);
	HRESULT(STDMETHODCALLTYPE *IntersectsWith) (IAnalysisRegion *This, RECT *pRectangle, VARIANT_BOOL *pfIsIntersecting);
	HRESULT(STDMETHODCALLTYPE *ExcludeRectangle) (IAnalysisRegion *This, RECT *pExcludingRectangle);
	HRESULT(STDMETHODCALLTYPE *ExcludeRegion) (IAnalysisRegion *This, IAnalysisRegion *pRegionToExclude);
	HRESULT(STDMETHODCALLTYPE *EqualsRegion) (IAnalysisRegion *This, IAnalysisRegion *pOtherRegion, VARIANT_BOOL *pfRegionsEqual);
	END_INTERFACE
}  IAnalysisRegionVtbl;
interface IAnalysisRegion
{
	CONST_VTBL struct IAnalysisRegionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnalysisRegion_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IAnalysisRegion_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IAnalysisRegion_Release(This)(This)->lpVtbl -> Release(This)
#define IAnalysisRegion_IsEmpty(This,pfIsEmpty)(This)->lpVtbl -> IsEmpty(This,pfIsEmpty)
#define IAnalysisRegion_MakeEmpty(This)(This)->lpVtbl -> MakeEmpty(This)
#define IAnalysisRegion_MakeInfinite(This)(This)->lpVtbl -> MakeInfinite(This)
#define IAnalysisRegion_IsInfinite(This,pfIsInfinite)(This)->lpVtbl -> IsInfinite(This,pfIsInfinite)
#define IAnalysisRegion_Clone(This,pClonedRegion)(This)->lpVtbl -> Clone(This,pClonedRegion)
#define IAnalysisRegion_GetRegionScans(This,pulRectCount,pRegionScans)(This)->lpVtbl -> GetRegionScans(This,pulRectCount,pRegionScans)
#define IAnalysisRegion_UnionRectangle(This,pRectangle)(This)->lpVtbl -> UnionRectangle(This,pRectangle)
#define IAnalysisRegion_UnionRegion(This,pRegionToUnion)(This)->lpVtbl -> UnionRegion(This,pRegionToUnion)
#define IAnalysisRegion_GetBounds(This,pBoundingRectangle)(This)->lpVtbl -> GetBounds(This,pBoundingRectangle)
#define IAnalysisRegion_IntersectRectangle(This,pIntersectingRectangle)(This)->lpVtbl -> IntersectRectangle(This,pIntersectingRectangle)
#define IAnalysisRegion_IntersectRegion(This,pRegionToIntersect)(This)->lpVtbl -> IntersectRegion(This,pRegionToIntersect)
#define IAnalysisRegion_IntersectsWith(This,pRectangle,pfIsIntersecting)(This)->lpVtbl -> IntersectsWith(This,pRectangle,pfIsIntersecting)
#define IAnalysisRegion_ExcludeRectangle(This,pExcludingRectangle)(This)->lpVtbl -> ExcludeRectangle(This,pExcludingRectangle)
#define IAnalysisRegion_ExcludeRegion(This,pRegionToExclude)(This)->lpVtbl -> ExcludeRegion(This,pRegionToExclude)
#define IAnalysisRegion_EqualsRegion(This,pOtherRegion,pfRegionsEqual)(This)->lpVtbl -> EqualsRegion(This,pOtherRegion,pfRegionsEqual)
#endif
HRESULT STDMETHODCALLTYPE IAnalysisRegion_IsEmpty_Proxy(IAnalysisRegion *This, VARIANT_BOOL *pfIsEmpty);
void __RPC_STUB IAnalysisRegion_IsEmpty_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_MakeEmpty_Proxy(IAnalysisRegion *This);
void __RPC_STUB IAnalysisRegion_MakeEmpty_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_MakeInfinite_Proxy(IAnalysisRegion *This);
void __RPC_STUB IAnalysisRegion_MakeInfinite_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_IsInfinite_Proxy(IAnalysisRegion *This, VARIANT_BOOL *pfIsInfinite);
void __RPC_STUB IAnalysisRegion_IsInfinite_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_Clone_Proxy(IAnalysisRegion *This, IAnalysisRegion **pClonedRegion);
void __RPC_STUB IAnalysisRegion_Clone_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_GetRegionScans_Proxy(IAnalysisRegion *This, ULONG *pulRectCount, RECT **pRegionScans);
void __RPC_STUB IAnalysisRegion_GetRegionScans_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_UnionRectangle_Proxy(IAnalysisRegion *This, RECT *pRectangle);
void __RPC_STUB IAnalysisRegion_UnionRectangle_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_UnionRegion_Proxy(IAnalysisRegion *This, IAnalysisRegion *pRegionToUnion);
void __RPC_STUB IAnalysisRegion_UnionRegion_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_GetBounds_Proxy(IAnalysisRegion *This, RECT *pBoundingRectangle);
void __RPC_STUB IAnalysisRegion_GetBounds_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_IntersectRectangle_Proxy(IAnalysisRegion *This, RECT *pIntersectingRectangle);
void __RPC_STUB IAnalysisRegion_IntersectRectangle_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_IntersectRegion_Proxy(IAnalysisRegion *This, IAnalysisRegion *pRegionToIntersect);
void __RPC_STUB IAnalysisRegion_IntersectRegion_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_IntersectsWith_Proxy(IAnalysisRegion *This, RECT *pRectangle, VARIANT_BOOL *pfIsIntersecting);
void __RPC_STUB IAnalysisRegion_IntersectsWith_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_ExcludeRectangle_Proxy(IAnalysisRegion *This, RECT *pExcludingRectangle);
void __RPC_STUB IAnalysisRegion_ExcludeRectangle_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_ExcludeRegion_Proxy(IAnalysisRegion *This, IAnalysisRegion *pRegionToExclude);
void __RPC_STUB IAnalysisRegion_ExcludeRegion_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisRegion_EqualsRegion_Proxy(IAnalysisRegion *This, IAnalysisRegion *pOtherRegion, VARIANT_BOOL *pfRegionsEqual);
void __RPC_STUB IAnalysisRegion_EqualsRegion_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IContextLink_INTERFACE_DEFINED__
#define __IContextLink_INTERFACE_DEFINED__
extern const IID IID_IContextLink;
typedef struct IContextLinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContextLink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContextLink *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContextLink *This);
	HRESULT(STDMETHODCALLTYPE *GetDestinationNode) (IContextLink *This, IContextNode **ppDstContextNodeId);
	HRESULT(STDMETHODCALLTYPE *GetSourceNode) (IContextLink *This, IContextNode **ppSrcContextNodeId);
	HRESULT(STDMETHODCALLTYPE *GetContextLinkDirection) (IContextLink *This, ContextLinkDirection *pContextLinkDirection);
	END_INTERFACE
}  IContextLinkVtbl;
interface IContextLink
{
	CONST_VTBL struct IContextLinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextLink_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IContextLink_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IContextLink_Release(This)(This)->lpVtbl -> Release(This)
#define IContextLink_GetDestinationNode(This,ppDstContextNodeId)(This)->lpVtbl -> GetDestinationNode(This,ppDstContextNodeId)
#define IContextLink_GetSourceNode(This,ppSrcContextNodeId)(This)->lpVtbl -> GetSourceNode(This,ppSrcContextNodeId)
#define IContextLink_GetContextLinkDirection(This,pContextLinkDirection)(This)->lpVtbl -> GetContextLinkDirection(This,pContextLinkDirection)
#endif
HRESULT STDMETHODCALLTYPE IContextLink_GetDestinationNode_Proxy(IContextLink *This, IContextNode **ppDstContextNodeId);
void __RPC_STUB IContextLink_GetDestinationNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextLink_GetSourceNode_Proxy(IContextLink *This, IContextNode **ppSrcContextNodeId);
void __RPC_STUB IContextLink_GetSourceNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextLink_GetContextLinkDirection_Proxy(IContextLink *This, ContextLinkDirection *pContextLinkDirection);
void __RPC_STUB IContextLink_GetContextLinkDirection_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IContextLinks_INTERFACE_DEFINED__
#define __IContextLinks_INTERFACE_DEFINED__
extern const IID IID_IContextLinks;
typedef struct IContextLinksVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IContextLinks *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IContextLinks *This);
	ULONG(STDMETHODCALLTYPE *Release) (IContextLinks *This);
	HRESULT(STDMETHODCALLTYPE *GetCount) (IContextLinks *This, ULONG *pulCount);
	HRESULT(STDMETHODCALLTYPE *GetContextLink) (IContextLinks *This, ULONG ulIndex, IContextLink **ppContextLink);
	HRESULT(STDMETHODCALLTYPE *AddContextLink) (IContextLinks *This, IContextNode *pDestinationNode, ContextLinkDirection linkDirection, IContextLink **ppContextLinkToAdd);
	HRESULT(STDMETHODCALLTYPE *DeleteContextLink) (IContextLinks *This, IContextLink *pContextLinkToDelete);
	END_INTERFACE
}  IContextLinksVtbl;
interface IContextLinks
{
	CONST_VTBL struct IContextLinksVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IContextLinks_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IContextLinks_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IContextLinks_Release(This)(This)->lpVtbl -> Release(This)
#define IContextLinks_GetCount(This,pulCount)(This)->lpVtbl -> GetCount(This,pulCount)
#define IContextLinks_GetContextLink(This,ulIndex,ppContextLink)(This)->lpVtbl -> GetContextLink(This,ulIndex,ppContextLink)
#define IContextLinks_AddContextLink(This,pDestinationNode,linkDirection,ppContextLinkToAdd)(This)->lpVtbl -> AddContextLink(This,pDestinationNode,linkDirection,ppContextLinkToAdd)
#define IContextLinks_DeleteContextLink(This,pContextLinkToDelete)(This)->lpVtbl -> DeleteContextLink(This,pContextLinkToDelete)
#endif
HRESULT STDMETHODCALLTYPE IContextLinks_GetCount_Proxy(IContextLinks *This, ULONG *pulCount);
void __RPC_STUB IContextLinks_GetCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextLinks_GetContextLink_Proxy(IContextLinks *This, ULONG ulIndex, IContextLink **ppContextLink);
void __RPC_STUB IContextLinks_GetContextLink_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextLinks_AddContextLink_Proxy(IContextLinks *This, IContextNode *pDestinationNode, ContextLinkDirection linkDirection, IContextLink **ppContextLinkToAdd);
void __RPC_STUB IContextLinks_AddContextLink_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IContextLinks_DeleteContextLink_Proxy(IContextLinks *This, IContextLink *pContextLinkToDelete);
void __RPC_STUB IContextLinks_DeleteContextLink_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IInkAnalysisRecognizer_INTERFACE_DEFINED__
#define __IInkAnalysisRecognizer_INTERFACE_DEFINED__
extern const IID IID_IInkAnalysisRecognizer;
typedef struct IInkAnalysisRecognizerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IInkAnalysisRecognizer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IInkAnalysisRecognizer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IInkAnalysisRecognizer *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (IInkAnalysisRecognizer *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *GetGuid) (IInkAnalysisRecognizer *This, GUID *pId);
	HRESULT(STDMETHODCALLTYPE *GetVendor) (IInkAnalysisRecognizer *This, BSTR *pbstrVendor);
	HRESULT(STDMETHODCALLTYPE *GetCapabilities) (IInkAnalysisRecognizer *This, InkAnalysisRecognizerCapabilities *pCapabilities);
	HRESULT(STDMETHODCALLTYPE *GetSupportedProperties) (IInkAnalysisRecognizer *This, ULONG *pulPropertiesCount, GUID **ppProperties);
	HRESULT(STDMETHODCALLTYPE *GetLanguages) (IInkAnalysisRecognizer *This, ULONG *pulLanguagesCount, ULONG **ppulLanguages);
	HRESULT(STDMETHODCALLTYPE *GetUnicodeRanges) (IInkAnalysisRecognizer *This, ULONG *pulNumberOfRanges, WCHAR **ppulLowUnicode, USHORT **ppusUnicodeRangeLength);
	HRESULT(STDMETHODCALLTYPE *SetAsHighestPriorityInkAnalysisRecognizer) (IInkAnalysisRecognizer *This);
	END_INTERFACE
}  IInkAnalysisRecognizerVtbl;
interface IInkAnalysisRecognizer
{
	CONST_VTBL struct IInkAnalysisRecognizerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkAnalysisRecognizer_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IInkAnalysisRecognizer_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IInkAnalysisRecognizer_Release(This)(This)->lpVtbl -> Release(This)
#define IInkAnalysisRecognizer_GetName(This,pbstrName)(This)->lpVtbl -> GetName(This,pbstrName)
#define IInkAnalysisRecognizer_GetGuid(This,pId)(This)->lpVtbl -> GetGuid(This,pId)
#define IInkAnalysisRecognizer_GetVendor(This,pbstrVendor)(This)->lpVtbl -> GetVendor(This,pbstrVendor)
#define IInkAnalysisRecognizer_GetCapabilities(This,pCapabilities)(This)->lpVtbl -> GetCapabilities(This,pCapabilities)
#define IInkAnalysisRecognizer_GetSupportedProperties(This,pulPropertiesCount,ppProperties)(This)->lpVtbl -> GetSupportedProperties(This,pulPropertiesCount,ppProperties)
#define IInkAnalysisRecognizer_GetLanguages(This,pulLanguagesCount,ppulLanguages)(This)->lpVtbl -> GetLanguages(This,pulLanguagesCount,ppulLanguages)
#define IInkAnalysisRecognizer_GetUnicodeRanges(This,pulNumberOfRanges,ppulLowUnicode,ppusUnicodeRangeLength)(This)->lpVtbl -> GetUnicodeRanges(This,pulNumberOfRanges,ppulLowUnicode,ppusUnicodeRangeLength)
#define IInkAnalysisRecognizer_SetAsHighestPriorityInkAnalysisRecognizer(This)(This)->lpVtbl -> SetAsHighestPriorityInkAnalysisRecognizer(This)
#endif
HRESULT STDMETHODCALLTYPE IInkAnalysisRecognizer_GetName_Proxy(IInkAnalysisRecognizer *This, BSTR *pbstrName);
void __RPC_STUB IInkAnalysisRecognizer_GetName_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalysisRecognizer_GetGuid_Proxy(IInkAnalysisRecognizer *This, GUID *pId);
void __RPC_STUB IInkAnalysisRecognizer_GetGuid_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalysisRecognizer_GetVendor_Proxy(IInkAnalysisRecognizer *This, BSTR *pbstrVendor);
void __RPC_STUB IInkAnalysisRecognizer_GetVendor_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalysisRecognizer_GetCapabilities_Proxy(IInkAnalysisRecognizer *This, InkAnalysisRecognizerCapabilities *pCapabilities);
void __RPC_STUB IInkAnalysisRecognizer_GetCapabilities_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalysisRecognizer_GetSupportedProperties_Proxy(IInkAnalysisRecognizer *This, ULONG *pulPropertiesCount, GUID **ppProperties);
void __RPC_STUB IInkAnalysisRecognizer_GetSupportedProperties_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalysisRecognizer_GetLanguages_Proxy(IInkAnalysisRecognizer *This, ULONG *pulLanguagesCount, ULONG **ppulLanguages);
void __RPC_STUB IInkAnalysisRecognizer_GetLanguages_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalysisRecognizer_GetUnicodeRanges_Proxy(IInkAnalysisRecognizer *This, ULONG *pulNumberOfRanges, WCHAR **ppulLowUnicode, USHORT **ppusUnicodeRangeLength);
void __RPC_STUB IInkAnalysisRecognizer_GetUnicodeRanges_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalysisRecognizer_SetAsHighestPriorityInkAnalysisRecognizer_Proxy(IInkAnalysisRecognizer *This);
void __RPC_STUB IInkAnalysisRecognizer_SetAsHighestPriorityInkAnalysisRecognizer_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IInkAnalysisRecognizers_INTERFACE_DEFINED__
#define __IInkAnalysisRecognizers_INTERFACE_DEFINED__
extern const IID IID_IInkAnalysisRecognizers;
typedef struct IInkAnalysisRecognizersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IInkAnalysisRecognizers *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IInkAnalysisRecognizers *This);
	ULONG(STDMETHODCALLTYPE *Release) (IInkAnalysisRecognizers *This);
	HRESULT(STDMETHODCALLTYPE *GetCount) (IInkAnalysisRecognizers *This, ULONG *pulCount);
	HRESULT(STDMETHODCALLTYPE *GetInkAnalysisRecognizer) (IInkAnalysisRecognizers *This, ULONG ulIndex, IInkAnalysisRecognizer **ppInkAnalysisRecognizer);
	END_INTERFACE
}  IInkAnalysisRecognizersVtbl;
interface IInkAnalysisRecognizers
{
	CONST_VTBL struct IInkAnalysisRecognizersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IInkAnalysisRecognizers_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IInkAnalysisRecognizers_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IInkAnalysisRecognizers_Release(This)(This)->lpVtbl -> Release(This)
#define IInkAnalysisRecognizers_GetCount(This,pulCount)(This)->lpVtbl -> GetCount(This,pulCount)
#define IInkAnalysisRecognizers_GetInkAnalysisRecognizer(This,ulIndex,ppInkAnalysisRecognizer)(This)->lpVtbl -> GetInkAnalysisRecognizer(This,ulIndex,ppInkAnalysisRecognizer)
#endif
HRESULT STDMETHODCALLTYPE IInkAnalysisRecognizers_GetCount_Proxy(IInkAnalysisRecognizers *This, ULONG *pulCount);
void __RPC_STUB IInkAnalysisRecognizers_GetCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IInkAnalysisRecognizers_GetInkAnalysisRecognizer_Proxy(IInkAnalysisRecognizers *This, ULONG ulIndex, IInkAnalysisRecognizer **ppInkAnalysisRecognizer);
void __RPC_STUB IInkAnalysisRecognizers_GetInkAnalysisRecognizer_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IAnalysisAlternate_INTERFACE_DEFINED__
#define __IAnalysisAlternate_INTERFACE_DEFINED__
extern const IID IID_IAnalysisAlternate;
typedef struct IAnalysisAlternateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAnalysisAlternate *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAnalysisAlternate *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAnalysisAlternate *This);
	HRESULT(STDMETHODCALLTYPE *GetAlternateNodes) (IAnalysisAlternate *This, IContextNodes **ppAlternateNodes);
	HRESULT(STDMETHODCALLTYPE *GetRecognizedString) (IAnalysisAlternate *This, BSTR *pbstrRecognizedString);
	HRESULT(STDMETHODCALLTYPE *GetStrokeIds) (IAnalysisAlternate *This, ULONG *pulStrokeIdsCount, LONG **pplStrokeIds);
	HRESULT(STDMETHODCALLTYPE *GetRecognitionConfidence) (IAnalysisAlternate *This, RecognitionConfidence *pConfidence);
	END_INTERFACE
}  IAnalysisAlternateVtbl;
interface IAnalysisAlternate
{
	CONST_VTBL struct IAnalysisAlternateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnalysisAlternate_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IAnalysisAlternate_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IAnalysisAlternate_Release(This)(This)->lpVtbl -> Release(This)
#define IAnalysisAlternate_GetAlternateNodes(This,ppAlternateNodes)(This)->lpVtbl -> GetAlternateNodes(This,ppAlternateNodes)
#define IAnalysisAlternate_GetRecognizedString(This,pbstrRecognizedString)(This)->lpVtbl -> GetRecognizedString(This,pbstrRecognizedString)
#define IAnalysisAlternate_GetStrokeIds(This,pulStrokeIdsCount,pplStrokeIds)(This)->lpVtbl -> GetStrokeIds(This,pulStrokeIdsCount,pplStrokeIds)
#define IAnalysisAlternate_GetRecognitionConfidence(This,pConfidence)(This)->lpVtbl -> GetRecognitionConfidence(This,pConfidence)
#endif
HRESULT STDMETHODCALLTYPE IAnalysisAlternate_GetAlternateNodes_Proxy(IAnalysisAlternate *This, IContextNodes **ppAlternateNodes);
void __RPC_STUB IAnalysisAlternate_GetAlternateNodes_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisAlternate_GetRecognizedString_Proxy(IAnalysisAlternate *This, BSTR *pbstrRecognizedString);
void __RPC_STUB IAnalysisAlternate_GetRecognizedString_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisAlternate_GetStrokeIds_Proxy(IAnalysisAlternate *This, ULONG *pulStrokeIdsCount, LONG **pplStrokeIds);
void __RPC_STUB IAnalysisAlternate_GetStrokeIds_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisAlternate_GetRecognitionConfidence_Proxy(IAnalysisAlternate *This, RecognitionConfidence *pConfidence);
void __RPC_STUB IAnalysisAlternate_GetRecognitionConfidence_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IAnalysisAlternates_INTERFACE_DEFINED__
#define __IAnalysisAlternates_INTERFACE_DEFINED__
extern const IID IID_IAnalysisAlternates;
typedef struct IAnalysisAlternatesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAnalysisAlternates *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAnalysisAlternates *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAnalysisAlternates *This);
	HRESULT(STDMETHODCALLTYPE *GetCount) (IAnalysisAlternates *This, ULONG *pulCount);
	HRESULT(STDMETHODCALLTYPE *GetAnalysisAlternate) (IAnalysisAlternates *This, ULONG ulIndex, IAnalysisAlternate **ppAlternate);
	END_INTERFACE
}  IAnalysisAlternatesVtbl;
interface IAnalysisAlternates
{
	CONST_VTBL struct IAnalysisAlternatesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnalysisAlternates_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IAnalysisAlternates_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IAnalysisAlternates_Release(This)(This)->lpVtbl -> Release(This)
#define IAnalysisAlternates_GetCount(This,pulCount)(This)->lpVtbl -> GetCount(This,pulCount)
#define IAnalysisAlternates_GetAnalysisAlternate(This,ulIndex,ppAlternate)(This)->lpVtbl -> GetAnalysisAlternate(This,ulIndex,ppAlternate)
#endif
HRESULT STDMETHODCALLTYPE IAnalysisAlternates_GetCount_Proxy(IAnalysisAlternates *This, ULONG *pulCount);
void __RPC_STUB IAnalysisAlternates_GetCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisAlternates_GetAnalysisAlternate_Proxy(IAnalysisAlternates *This, ULONG ulIndex, IAnalysisAlternate **ppAlternate);
void __RPC_STUB IAnalysisAlternates_GetAnalysisAlternate_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IAnalysisWarning_INTERFACE_DEFINED__
#define __IAnalysisWarning_INTERFACE_DEFINED__
extern const IID IID_IAnalysisWarning;
typedef struct IAnalysisWarningVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAnalysisWarning *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAnalysisWarning *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAnalysisWarning *This);
	HRESULT(STDMETHODCALLTYPE *GetWarningCode) (IAnalysisWarning *This, AnalysisWarningCode *pWarningCode);
	HRESULT(STDMETHODCALLTYPE *GetNodeIds) (IAnalysisWarning *This, ULONG *pulNodeIdCount, GUID **ppNodeIds);
	HRESULT(STDMETHODCALLTYPE *GetHint) (IAnalysisWarning *This, IContextNode **pAnalysisHint);
	HRESULT(STDMETHODCALLTYPE *GetBackgroundError) (IAnalysisWarning *This);
	END_INTERFACE
}  IAnalysisWarningVtbl;
interface IAnalysisWarning
{
	CONST_VTBL struct IAnalysisWarningVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnalysisWarning_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IAnalysisWarning_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IAnalysisWarning_Release(This)(This)->lpVtbl -> Release(This)
#define IAnalysisWarning_GetWarningCode(This,pWarningCode)(This)->lpVtbl -> GetWarningCode(This,pWarningCode)
#define IAnalysisWarning_GetNodeIds(This,pulNodeIdCount,ppNodeIds)(This)->lpVtbl -> GetNodeIds(This,pulNodeIdCount,ppNodeIds)
#define IAnalysisWarning_GetHint(This,pAnalysisHint)(This)->lpVtbl -> GetHint(This,pAnalysisHint)
#define IAnalysisWarning_GetBackgroundError(This)(This)->lpVtbl -> GetBackgroundError(This)
#endif
HRESULT STDMETHODCALLTYPE IAnalysisWarning_GetWarningCode_Proxy(IAnalysisWarning *This, AnalysisWarningCode *pWarningCode);
void __RPC_STUB IAnalysisWarning_GetWarningCode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisWarning_GetNodeIds_Proxy(IAnalysisWarning *This, ULONG *pulNodeIdCount, GUID **ppNodeIds);
void __RPC_STUB IAnalysisWarning_GetNodeIds_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisWarning_GetHint_Proxy(IAnalysisWarning *This, IContextNode **pAnalysisHint);
void __RPC_STUB IAnalysisWarning_GetHint_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisWarning_GetBackgroundError_Proxy(IAnalysisWarning *This);
void __RPC_STUB IAnalysisWarning_GetBackgroundError_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IAnalysisWarnings_INTERFACE_DEFINED__
#define __IAnalysisWarnings_INTERFACE_DEFINED__
extern const IID IID_IAnalysisWarnings;
typedef struct IAnalysisWarningsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAnalysisWarnings *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAnalysisWarnings *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAnalysisWarnings *This);
	HRESULT(STDMETHODCALLTYPE *GetCount) (IAnalysisWarnings *This, ULONG *pulCount);
	HRESULT(STDMETHODCALLTYPE *GetAnalysisWarning) (IAnalysisWarnings *This, ULONG ulIndex, IAnalysisWarning **ppIAnalysisWarning);
	END_INTERFACE
}  IAnalysisWarningsVtbl;
interface IAnalysisWarnings
{
	CONST_VTBL struct IAnalysisWarningsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnalysisWarnings_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IAnalysisWarnings_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IAnalysisWarnings_Release(This)(This)->lpVtbl -> Release(This)
#define IAnalysisWarnings_GetCount(This,pulCount)(This)->lpVtbl -> GetCount(This,pulCount)
#define IAnalysisWarnings_GetAnalysisWarning(This,ulIndex,ppIAnalysisWarning)(This)->lpVtbl -> GetAnalysisWarning(This,ulIndex,ppIAnalysisWarning)
#endif
HRESULT STDMETHODCALLTYPE IAnalysisWarnings_GetCount_Proxy(IAnalysisWarnings *This, ULONG *pulCount);
void __RPC_STUB IAnalysisWarnings_GetCount_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisWarnings_GetAnalysisWarning_Proxy(IAnalysisWarnings *This, ULONG ulIndex, IAnalysisWarning **ppIAnalysisWarning);
void __RPC_STUB IAnalysisWarnings_GetAnalysisWarning_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IAnalysisStatus_INTERFACE_DEFINED__
#define __IAnalysisStatus_INTERFACE_DEFINED__
extern const IID IID_IAnalysisStatus;
typedef struct IAnalysisStatusVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAnalysisStatus *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAnalysisStatus *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAnalysisStatus *This);
	HRESULT(STDMETHODCALLTYPE *IsSuccessful) (IAnalysisStatus *This, VARIANT_BOOL *pfSuccessful);
	HRESULT(STDMETHODCALLTYPE *GetAppliedChangesRegion) (IAnalysisStatus *This, IAnalysisRegion **pAppliedChangesRegion);
	HRESULT(STDMETHODCALLTYPE *GetWarnings) (IAnalysisStatus *This, IAnalysisWarnings **ppAnalysisWarnings);
	END_INTERFACE
}  IAnalysisStatusVtbl;
interface IAnalysisStatus
{
	CONST_VTBL struct IAnalysisStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnalysisStatus_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IAnalysisStatus_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IAnalysisStatus_Release(This)(This)->lpVtbl -> Release(This)
#define IAnalysisStatus_IsSuccessful(This,pfSuccessful)(This)->lpVtbl -> IsSuccessful(This,pfSuccessful)
#define IAnalysisStatus_GetAppliedChangesRegion(This,pAppliedChangesRegion)(This)->lpVtbl -> GetAppliedChangesRegion(This,pAppliedChangesRegion)
#define IAnalysisStatus_GetWarnings(This,ppAnalysisWarnings)(This)->lpVtbl -> GetWarnings(This,ppAnalysisWarnings)
#endif
HRESULT STDMETHODCALLTYPE IAnalysisStatus_IsSuccessful_Proxy(IAnalysisStatus *This, VARIANT_BOOL *pfSuccessful);
void __RPC_STUB IAnalysisStatus_IsSuccessful_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisStatus_GetAppliedChangesRegion_Proxy(IAnalysisStatus *This, IAnalysisRegion **pAppliedChangesRegion);
void __RPC_STUB IAnalysisStatus_GetAppliedChangesRegion_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAnalysisStatus_GetWarnings_Proxy(IAnalysisStatus *This, IAnalysisWarnings **ppAnalysisWarnings);
void __RPC_STUB IAnalysisStatus_GetWarnings_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IMatchesCriteriaCallBack_INTERFACE_DEFINED__
#define __IMatchesCriteriaCallBack_INTERFACE_DEFINED__
extern const IID IID_IMatchesCriteriaCallBack;
typedef struct IMatchesCriteriaCallBackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMatchesCriteriaCallBack *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMatchesCriteriaCallBack *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMatchesCriteriaCallBack *This);
	HRESULT(STDMETHODCALLTYPE *EvaluateContextNode) (IMatchesCriteriaCallBack *This, IContextNode *pContextNodeToEvaluate, VARIANT_BOOL *pbResult);
	END_INTERFACE
}  IMatchesCriteriaCallBackVtbl;
interface IMatchesCriteriaCallBack
{
	CONST_VTBL struct IMatchesCriteriaCallBackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMatchesCriteriaCallBack_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define IMatchesCriteriaCallBack_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define IMatchesCriteriaCallBack_Release(This)(This)->lpVtbl -> Release(This)
#define IMatchesCriteriaCallBack_EvaluateContextNode(This,pContextNodeToEvaluate,pbResult)(This)->lpVtbl -> EvaluateContextNode(This,pContextNodeToEvaluate,pbResult)
#endif
HRESULT STDMETHODCALLTYPE IMatchesCriteriaCallBack_EvaluateContextNode_Proxy(IMatchesCriteriaCallBack *This, IContextNode *pContextNodeToEvaluate, VARIANT_BOOL *pbResult);
void __RPC_STUB IMatchesCriteriaCallBack_EvaluateContextNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef ___IAnalysisEvents_INTERFACE_DEFINED__
#define ___IAnalysisEvents_INTERFACE_DEFINED__
extern const IID IID__IAnalysisEvents;
typedef struct _IAnalysisEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (_IAnalysisEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (_IAnalysisEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (_IAnalysisEvents *This);
	HRESULT(STDMETHODCALLTYPE *ResultsUpdated) (_IAnalysisEvents *This, IInkAnalyzer *pInkAnalyzer, IAnalysisStatus *pAnalysisStatus);
	HRESULT(STDMETHODCALLTYPE *IntermediateResultsUpdated) (_IAnalysisEvents *This, IInkAnalyzer *pInkAnalyzer, IAnalysisStatus *pAnalysisStatus);
	HRESULT(STDMETHODCALLTYPE *Activity) (_IAnalysisEvents *This);
	HRESULT(STDMETHODCALLTYPE *UpdateStrokesCache) (_IAnalysisEvents *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds);
	HRESULT(STDMETHODCALLTYPE *ReadyToReconcile) (_IAnalysisEvents *This);
	END_INTERFACE
}  _IAnalysisEventsVtbl;
interface _IAnalysisEvents
{
	CONST_VTBL struct _IAnalysisEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IAnalysisEvents_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define _IAnalysisEvents_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define _IAnalysisEvents_Release(This)(This)->lpVtbl -> Release(This)
#define _IAnalysisEvents_ResultsUpdated(This,pInkAnalyzer,pAnalysisStatus)(This)->lpVtbl -> ResultsUpdated(This,pInkAnalyzer,pAnalysisStatus)
#define _IAnalysisEvents_IntermediateResultsUpdated(This,pInkAnalyzer,pAnalysisStatus)(This)->lpVtbl -> IntermediateResultsUpdated(This,pInkAnalyzer,pAnalysisStatus)
#define _IAnalysisEvents_Activity(This)(This)->lpVtbl -> Activity(This)
#define _IAnalysisEvents_UpdateStrokesCache(This,ulStrokeIdsCount,plStrokeIds)(This)->lpVtbl -> UpdateStrokesCache(This,ulStrokeIdsCount,plStrokeIds)
#define _IAnalysisEvents_ReadyToReconcile(This)(This)->lpVtbl -> ReadyToReconcile(This)
#endif
HRESULT STDMETHODCALLTYPE _IAnalysisEvents_ResultsUpdated_Proxy(_IAnalysisEvents *This, IInkAnalyzer *pInkAnalyzer, IAnalysisStatus *pAnalysisStatus);
void __RPC_STUB _IAnalysisEvents_ResultsUpdated_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisEvents_IntermediateResultsUpdated_Proxy(_IAnalysisEvents *This, IInkAnalyzer *pInkAnalyzer, IAnalysisStatus *pAnalysisStatus);
void __RPC_STUB _IAnalysisEvents_IntermediateResultsUpdated_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisEvents_Activity_Proxy(_IAnalysisEvents *This);
void __RPC_STUB _IAnalysisEvents_Activity_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisEvents_UpdateStrokesCache_Proxy(_IAnalysisEvents *This, ULONG ulStrokeIdsCount, LONG *plStrokeIds);
void __RPC_STUB _IAnalysisEvents_UpdateStrokesCache_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisEvents_ReadyToReconcile_Proxy(_IAnalysisEvents *This);
void __RPC_STUB _IAnalysisEvents_ReadyToReconcile_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef ___IAnalysisProxyEvents_INTERFACE_DEFINED__
#define ___IAnalysisProxyEvents_INTERFACE_DEFINED__
extern const IID IID__IAnalysisProxyEvents;
typedef struct _IAnalysisProxyEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (_IAnalysisProxyEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (_IAnalysisProxyEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (_IAnalysisProxyEvents *This);
	HRESULT(STDMETHODCALLTYPE *InkAnalyzerStateChanging) (_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer);
	HRESULT(STDMETHODCALLTYPE *ContextNodePropertiesUpdated) (_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextNode *pContextNodeUpdated, ULONG ulPropertiesIdsCount, GUID *pUpdatedProperties);
	HRESULT(STDMETHODCALLTYPE *PopulateContextNode) (_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextNode *pContextNodeToPopulate, VARIANT_BOOL bPopulateSubTree);
	HRESULT(STDMETHODCALLTYPE *ContextNodeCreated) (_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextNode *pContextNodeCreated);
	HRESULT(STDMETHODCALLTYPE *ContextNodeDeleting) (_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextNode *pContextNodeToBeDeleted);
	HRESULT(STDMETHODCALLTYPE *ContextNodeReparenting) (_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextNode *pNewParentContextNode, IContextNode *pContextNodeToBeReparented);
	HRESULT(STDMETHODCALLTYPE *ContextNodeMovingToPosition) (_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextNode *pSubnodeToMove, IContextNode *pParentContextNode, ULONG ulNewIndex);
	HRESULT(STDMETHODCALLTYPE *StrokesReparented) (_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, ULONG ulStrokeIdsCount, LONG *plStrokeIds, IContextNode *pSourceContextNode, IContextNode *pDestinationContextNode);
	HRESULT(STDMETHODCALLTYPE *NewStrokesLoaded) (_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, ULONG ulStrokeIdsCount, LONG *plStrokeIds, IContextNode *pNodeWithStrokes);
	HRESULT(STDMETHODCALLTYPE *ContextNodeLinkAdding) (_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextLink *pContextLinkToBeAdded);
	HRESULT(STDMETHODCALLTYPE *ContextNodeLinkDeleting) (_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextLink *pContextLinkToBeDeleted);
	END_INTERFACE
}  _IAnalysisProxyEventsVtbl;
interface _IAnalysisProxyEvents
{
	CONST_VTBL struct _IAnalysisProxyEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IAnalysisProxyEvents_QueryInterface(This,riid,ppvObject)(This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
#define _IAnalysisProxyEvents_AddRef(This)(This)->lpVtbl -> AddRef(This)
#define _IAnalysisProxyEvents_Release(This)(This)->lpVtbl -> Release(This)
#define _IAnalysisProxyEvents_InkAnalyzerStateChanging(This,pInkAnalyzer)(This)->lpVtbl -> InkAnalyzerStateChanging(This,pInkAnalyzer)
#define _IAnalysisProxyEvents_ContextNodePropertiesUpdated(This,pInkAnalyzer,pContextNodeUpdated,ulPropertiesIdsCount,pUpdatedProperties)(This)->lpVtbl -> ContextNodePropertiesUpdated(This,pInkAnalyzer,pContextNodeUpdated,ulPropertiesIdsCount,pUpdatedProperties)
#define _IAnalysisProxyEvents_PopulateContextNode(This,pInkAnalyzer,pContextNodeToPopulate,bPopulateSubTree)(This)->lpVtbl -> PopulateContextNode(This,pInkAnalyzer,pContextNodeToPopulate,bPopulateSubTree)
#define _IAnalysisProxyEvents_ContextNodeCreated(This,pInkAnalyzer,pContextNodeCreated)(This)->lpVtbl -> ContextNodeCreated(This,pInkAnalyzer,pContextNodeCreated)
#define _IAnalysisProxyEvents_ContextNodeDeleting(This,pInkAnalyzer,pContextNodeToBeDeleted)(This)->lpVtbl -> ContextNodeDeleting(This,pInkAnalyzer,pContextNodeToBeDeleted)
#define _IAnalysisProxyEvents_ContextNodeReparenting(This,pInkAnalyzer,pNewParentContextNode,pContextNodeToBeReparented)(This)->lpVtbl -> ContextNodeReparenting(This,pInkAnalyzer,pNewParentContextNode,pContextNodeToBeReparented)
#define _IAnalysisProxyEvents_ContextNodeMovingToPosition(This,pInkAnalyzer,pSubnodeToMove,pParentContextNode,ulNewIndex)(This)->lpVtbl -> ContextNodeMovingToPosition(This,pInkAnalyzer,pSubnodeToMove,pParentContextNode,ulNewIndex)
#define _IAnalysisProxyEvents_StrokesReparented(This,pInkAnalyzer,ulStrokeIdsCount,plStrokeIds,pSourceContextNode,pDestinationContextNode)(This)->lpVtbl -> StrokesReparented(This,pInkAnalyzer,ulStrokeIdsCount,plStrokeIds,pSourceContextNode,pDestinationContextNode)
#define _IAnalysisProxyEvents_NewStrokesLoaded(This,pInkAnalyzer,ulStrokeIdsCount,plStrokeIds,pNodeWithStrokes)(This)->lpVtbl -> NewStrokesLoaded(This,pInkAnalyzer,ulStrokeIdsCount,plStrokeIds,pNodeWithStrokes)
#define _IAnalysisProxyEvents_ContextNodeLinkAdding(This,pInkAnalyzer,pContextLinkToBeAdded)(This)->lpVtbl -> ContextNodeLinkAdding(This,pInkAnalyzer,pContextLinkToBeAdded)
#define _IAnalysisProxyEvents_ContextNodeLinkDeleting(This,pInkAnalyzer,pContextLinkToBeDeleted)(This)->lpVtbl -> ContextNodeLinkDeleting(This,pInkAnalyzer,pContextLinkToBeDeleted)
#endif
HRESULT STDMETHODCALLTYPE _IAnalysisProxyEvents_InkAnalyzerStateChanging_Proxy(_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer);
void __RPC_STUB _IAnalysisProxyEvents_InkAnalyzerStateChanging_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisProxyEvents_ContextNodePropertiesUpdated_Proxy(_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextNode *pContextNodeUpdated, ULONG ulPropertiesIdsCount, GUID *pUpdatedProperties);
void __RPC_STUB _IAnalysisProxyEvents_ContextNodePropertiesUpdated_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisProxyEvents_PopulateContextNode_Proxy(_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextNode *pContextNodeToPopulate, VARIANT_BOOL bPopulateSubTree);
void __RPC_STUB _IAnalysisProxyEvents_PopulateContextNode_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisProxyEvents_ContextNodeCreated_Proxy(_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextNode *pContextNodeCreated);
void __RPC_STUB _IAnalysisProxyEvents_ContextNodeCreated_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisProxyEvents_ContextNodeDeleting_Proxy(_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextNode *pContextNodeToBeDeleted);
void __RPC_STUB _IAnalysisProxyEvents_ContextNodeDeleting_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisProxyEvents_ContextNodeReparenting_Proxy(_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextNode *pNewParentContextNode, IContextNode *pContextNodeToBeReparented);
void __RPC_STUB _IAnalysisProxyEvents_ContextNodeReparenting_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisProxyEvents_ContextNodeMovingToPosition_Proxy(_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextNode *pSubnodeToMove, IContextNode *pParentContextNode, ULONG ulNewIndex);
void __RPC_STUB _IAnalysisProxyEvents_ContextNodeMovingToPosition_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisProxyEvents_StrokesReparented_Proxy(_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, ULONG ulStrokeIdsCount, LONG *plStrokeIds, IContextNode *pSourceContextNode, IContextNode *pDestinationContextNode);
void __RPC_STUB _IAnalysisProxyEvents_StrokesReparented_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisProxyEvents_NewStrokesLoaded_Proxy(_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, ULONG ulStrokeIdsCount, LONG *plStrokeIds, IContextNode *pNodeWithStrokes);
void __RPC_STUB _IAnalysisProxyEvents_NewStrokesLoaded_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisProxyEvents_ContextNodeLinkAdding_Proxy(_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextLink *pContextLinkToBeAdded);
void __RPC_STUB _IAnalysisProxyEvents_ContextNodeLinkAdding_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE _IAnalysisProxyEvents_ContextNodeLinkDeleting_Proxy(_IAnalysisProxyEvents *This, IInkAnalyzer *pInkAnalyzer, IContextLink *pContextLinkToBeDeleted);
void __RPC_STUB _IAnalysisProxyEvents_ContextNodeLinkDeleting_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
extern const CLSID CLSID_InkAnalyzer;
extern const CLSID CLSID_AnalysisRegion;
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_iacom_0272_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iacom_0272_v0_0_s_ifspec;
#endif
