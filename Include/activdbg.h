/*+@@file@@----------------------------------------------------------------*//*!
 \file		activdbg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 14:39:00 2016
 \date		Modified on Fri Jul  1 14:39:00 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __activdbg_h__
#define __activdbg_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IActiveScriptDebug32_FWD_DEFINED__
#define __IActiveScriptDebug32_FWD_DEFINED__
typedef interface IActiveScriptDebug32 IActiveScriptDebug32;
#endif
#ifndef __IActiveScriptDebug64_FWD_DEFINED__
#define __IActiveScriptDebug64_FWD_DEFINED__
typedef interface IActiveScriptDebug64 IActiveScriptDebug64;
#endif
#ifndef __IActiveScriptSiteDebug32_FWD_DEFINED__
#define __IActiveScriptSiteDebug32_FWD_DEFINED__
typedef interface IActiveScriptSiteDebug32 IActiveScriptSiteDebug32;
#endif
#ifndef __IActiveScriptSiteDebug64_FWD_DEFINED__
#define __IActiveScriptSiteDebug64_FWD_DEFINED__
typedef interface IActiveScriptSiteDebug64 IActiveScriptSiteDebug64;
#endif
#ifndef __IActiveScriptSiteDebugEx_FWD_DEFINED__
#define __IActiveScriptSiteDebugEx_FWD_DEFINED__
typedef interface IActiveScriptSiteDebugEx IActiveScriptSiteDebugEx;
#endif
#ifndef __IActiveScriptErrorDebug_FWD_DEFINED__
#define __IActiveScriptErrorDebug_FWD_DEFINED__
typedef interface IActiveScriptErrorDebug IActiveScriptErrorDebug;
#endif
#ifndef __IDebugCodeContext_FWD_DEFINED__
#define __IDebugCodeContext_FWD_DEFINED__
typedef interface IDebugCodeContext IDebugCodeContext;
#endif
#ifndef __IDebugExpression_FWD_DEFINED__
#define __IDebugExpression_FWD_DEFINED__
typedef interface IDebugExpression IDebugExpression;
#endif
#ifndef __IDebugExpressionContext_FWD_DEFINED__
#define __IDebugExpressionContext_FWD_DEFINED__
typedef interface IDebugExpressionContext IDebugExpressionContext;
#endif
#ifndef __IDebugExpressionCallBack_FWD_DEFINED__
#define __IDebugExpressionCallBack_FWD_DEFINED__
typedef interface IDebugExpressionCallBack IDebugExpressionCallBack;
#endif
#ifndef __IDebugStackFrame_FWD_DEFINED__
#define __IDebugStackFrame_FWD_DEFINED__
typedef interface IDebugStackFrame IDebugStackFrame;
#endif
#ifndef __IDebugStackFrameSniffer_FWD_DEFINED__
#define __IDebugStackFrameSniffer_FWD_DEFINED__
typedef interface IDebugStackFrameSniffer IDebugStackFrameSniffer;
#endif
#ifndef __IDebugStackFrameSnifferEx32_FWD_DEFINED__
#define __IDebugStackFrameSnifferEx32_FWD_DEFINED__
typedef interface IDebugStackFrameSnifferEx32 IDebugStackFrameSnifferEx32;
#endif
#ifndef __IDebugStackFrameSnifferEx64_FWD_DEFINED__
#define __IDebugStackFrameSnifferEx64_FWD_DEFINED__
typedef interface IDebugStackFrameSnifferEx64 IDebugStackFrameSnifferEx64;
#endif
#ifndef __IDebugSyncOperation_FWD_DEFINED__
#define __IDebugSyncOperation_FWD_DEFINED__
typedef interface IDebugSyncOperation IDebugSyncOperation;
#endif
#ifndef __IDebugAsyncOperation_FWD_DEFINED__
#define __IDebugAsyncOperation_FWD_DEFINED__
typedef interface IDebugAsyncOperation IDebugAsyncOperation;
#endif
#ifndef __IDebugAsyncOperationCallBack_FWD_DEFINED__
#define __IDebugAsyncOperationCallBack_FWD_DEFINED__
typedef interface IDebugAsyncOperationCallBack IDebugAsyncOperationCallBack;
#endif
#ifndef __IEnumDebugCodeContexts_FWD_DEFINED__
#define __IEnumDebugCodeContexts_FWD_DEFINED__
typedef interface IEnumDebugCodeContexts IEnumDebugCodeContexts;
#endif
#ifndef __IEnumDebugStackFrames_FWD_DEFINED__
#define __IEnumDebugStackFrames_FWD_DEFINED__
typedef interface IEnumDebugStackFrames IEnumDebugStackFrames;
#endif
#ifndef __IEnumDebugStackFrames64_FWD_DEFINED__
#define __IEnumDebugStackFrames64_FWD_DEFINED__
typedef interface IEnumDebugStackFrames64 IEnumDebugStackFrames64;
#endif
#ifndef __IDebugDocumentInfo_FWD_DEFINED__
#define __IDebugDocumentInfo_FWD_DEFINED__
typedef interface IDebugDocumentInfo IDebugDocumentInfo;
#endif
#ifndef __IDebugDocumentProvider_FWD_DEFINED__
#define __IDebugDocumentProvider_FWD_DEFINED__
typedef interface IDebugDocumentProvider IDebugDocumentProvider;
#endif
#ifndef __IDebugDocument_FWD_DEFINED__
#define __IDebugDocument_FWD_DEFINED__
typedef interface IDebugDocument IDebugDocument;
#endif
#ifndef __IDebugDocumentText_FWD_DEFINED__
#define __IDebugDocumentText_FWD_DEFINED__
typedef interface IDebugDocumentText IDebugDocumentText;
#endif
#ifndef __IDebugDocumentTextEvents_FWD_DEFINED__
#define __IDebugDocumentTextEvents_FWD_DEFINED__
typedef interface IDebugDocumentTextEvents IDebugDocumentTextEvents;
#endif
#ifndef __IDebugDocumentTextAuthor_FWD_DEFINED__
#define __IDebugDocumentTextAuthor_FWD_DEFINED__
typedef interface IDebugDocumentTextAuthor IDebugDocumentTextAuthor;
#endif
#ifndef __IDebugDocumentTextExternalAuthor_FWD_DEFINED__
#define __IDebugDocumentTextExternalAuthor_FWD_DEFINED__
typedef interface IDebugDocumentTextExternalAuthor IDebugDocumentTextExternalAuthor;
#endif
#ifndef __IDebugDocumentHelper32_FWD_DEFINED__
#define __IDebugDocumentHelper32_FWD_DEFINED__
typedef interface IDebugDocumentHelper32 IDebugDocumentHelper32;
#endif
#ifndef __IDebugDocumentHelper64_FWD_DEFINED__
#define __IDebugDocumentHelper64_FWD_DEFINED__
typedef interface IDebugDocumentHelper64 IDebugDocumentHelper64;
#endif
#ifndef __IDebugDocumentHost_FWD_DEFINED__
#define __IDebugDocumentHost_FWD_DEFINED__
typedef interface IDebugDocumentHost IDebugDocumentHost;
#endif
#ifndef __IDebugDocumentContext_FWD_DEFINED__
#define __IDebugDocumentContext_FWD_DEFINED__
typedef interface IDebugDocumentContext IDebugDocumentContext;
#endif
#ifndef __IDebugSessionProvider_FWD_DEFINED__
#define __IDebugSessionProvider_FWD_DEFINED__
typedef interface IDebugSessionProvider IDebugSessionProvider;
#endif
#ifndef __IApplicationDebugger_FWD_DEFINED__
#define __IApplicationDebugger_FWD_DEFINED__
typedef interface IApplicationDebugger IApplicationDebugger;
#endif
#ifndef __IApplicationDebuggerUI_FWD_DEFINED__
#define __IApplicationDebuggerUI_FWD_DEFINED__
typedef interface IApplicationDebuggerUI IApplicationDebuggerUI;
#endif
#ifndef __IMachineDebugManager_FWD_DEFINED__
#define __IMachineDebugManager_FWD_DEFINED__
typedef interface IMachineDebugManager IMachineDebugManager;
#endif
#ifndef __IMachineDebugManagerCookie_FWD_DEFINED__
#define __IMachineDebugManagerCookie_FWD_DEFINED__
typedef interface IMachineDebugManagerCookie IMachineDebugManagerCookie;
#endif
#ifndef __IMachineDebugManagerEvents_FWD_DEFINED__
#define __IMachineDebugManagerEvents_FWD_DEFINED__
typedef interface IMachineDebugManagerEvents IMachineDebugManagerEvents;
#endif
#ifndef __IProcessDebugManager32_FWD_DEFINED__
#define __IProcessDebugManager32_FWD_DEFINED__
typedef interface IProcessDebugManager32 IProcessDebugManager32;
#endif
#ifndef __IProcessDebugManager64_FWD_DEFINED__
#define __IProcessDebugManager64_FWD_DEFINED__
typedef interface IProcessDebugManager64 IProcessDebugManager64;
#endif
#ifndef __IRemoteDebugApplication_FWD_DEFINED__
#define __IRemoteDebugApplication_FWD_DEFINED__
typedef interface IRemoteDebugApplication IRemoteDebugApplication;
#endif
#ifndef __IDebugApplication32_FWD_DEFINED__
#define __IDebugApplication32_FWD_DEFINED__
typedef interface IDebugApplication32 IDebugApplication32;
#endif
#ifndef __IDebugApplication64_FWD_DEFINED__
#define __IDebugApplication64_FWD_DEFINED__
typedef interface IDebugApplication64 IDebugApplication64;
#endif
#ifndef __IRemoteDebugApplicationEvents_FWD_DEFINED__
#define __IRemoteDebugApplicationEvents_FWD_DEFINED__
typedef interface IRemoteDebugApplicationEvents IRemoteDebugApplicationEvents;
#endif
#ifndef __IDebugApplicationNode_FWD_DEFINED__
#define __IDebugApplicationNode_FWD_DEFINED__
typedef interface IDebugApplicationNode IDebugApplicationNode;
#endif
#ifndef __IDebugApplicationNodeEvents_FWD_DEFINED__
#define __IDebugApplicationNodeEvents_FWD_DEFINED__
typedef interface IDebugApplicationNodeEvents IDebugApplicationNodeEvents;
#endif
#ifndef __AsyncIDebugApplicationNodeEvents_FWD_DEFINED__
#define __AsyncIDebugApplicationNodeEvents_FWD_DEFINED__
typedef interface AsyncIDebugApplicationNodeEvents AsyncIDebugApplicationNodeEvents;
#endif
#ifndef __IDebugThreadCall32_FWD_DEFINED__
#define __IDebugThreadCall32_FWD_DEFINED__
typedef interface IDebugThreadCall32 IDebugThreadCall32;
#endif
#ifndef __IDebugThreadCall64_FWD_DEFINED__
#define __IDebugThreadCall64_FWD_DEFINED__
typedef interface IDebugThreadCall64 IDebugThreadCall64;
#endif
#ifndef __IRemoteDebugApplicationThread_FWD_DEFINED__
#define __IRemoteDebugApplicationThread_FWD_DEFINED__
typedef interface IRemoteDebugApplicationThread IRemoteDebugApplicationThread;
#endif
#ifndef __IDebugApplicationThread_FWD_DEFINED__
#define __IDebugApplicationThread_FWD_DEFINED__
typedef interface IDebugApplicationThread IDebugApplicationThread;
#endif
#ifndef __IDebugApplicationThread64_FWD_DEFINED__
#define __IDebugApplicationThread64_FWD_DEFINED__
typedef interface IDebugApplicationThread64 IDebugApplicationThread64;
#endif
#ifndef __IDebugCookie_FWD_DEFINED__
#define __IDebugCookie_FWD_DEFINED__
typedef interface IDebugCookie IDebugCookie;
#endif
#ifndef __IEnumDebugApplicationNodes_FWD_DEFINED__
#define __IEnumDebugApplicationNodes_FWD_DEFINED__
typedef interface IEnumDebugApplicationNodes IEnumDebugApplicationNodes;
#endif
#ifndef __IEnumRemoteDebugApplications_FWD_DEFINED__
#define __IEnumRemoteDebugApplications_FWD_DEFINED__
typedef interface IEnumRemoteDebugApplications IEnumRemoteDebugApplications;
#endif
#ifndef __IEnumRemoteDebugApplicationThreads_FWD_DEFINED__
#define __IEnumRemoteDebugApplicationThreads_FWD_DEFINED__
typedef interface IEnumRemoteDebugApplicationThreads IEnumRemoteDebugApplicationThreads;
#endif
#ifndef __IDebugFormatter_FWD_DEFINED__
#define __IDebugFormatter_FWD_DEFINED__
typedef interface IDebugFormatter IDebugFormatter;
#endif
#ifndef __ISimpleConnectionPoint_FWD_DEFINED__
#define __ISimpleConnectionPoint_FWD_DEFINED__
typedef interface ISimpleConnectionPoint ISimpleConnectionPoint;
#endif
#ifndef __IDebugHelper_FWD_DEFINED__
#define __IDebugHelper_FWD_DEFINED__
typedef interface IDebugHelper IDebugHelper;
#endif
#ifndef __IEnumDebugExpressionContexts_FWD_DEFINED__
#define __IEnumDebugExpressionContexts_FWD_DEFINED__
typedef interface IEnumDebugExpressionContexts IEnumDebugExpressionContexts;
#endif
#ifndef __IProvideExpressionContexts_FWD_DEFINED__
#define __IProvideExpressionContexts_FWD_DEFINED__
typedef interface IProvideExpressionContexts IProvideExpressionContexts;
#endif
#ifndef __IActiveScriptDebug32_FWD_DEFINED__
#define __IActiveScriptDebug32_FWD_DEFINED__
typedef interface IActiveScriptDebug32 IActiveScriptDebug32;
#endif
#ifndef __IActiveScriptDebug64_FWD_DEFINED__
#define __IActiveScriptDebug64_FWD_DEFINED__
typedef interface IActiveScriptDebug64 IActiveScriptDebug64;
#endif
#ifndef __IActiveScriptErrorDebug_FWD_DEFINED__
#define __IActiveScriptErrorDebug_FWD_DEFINED__
typedef interface IActiveScriptErrorDebug IActiveScriptErrorDebug;
#endif
#ifndef __IActiveScriptSiteDebug32_FWD_DEFINED__
#define __IActiveScriptSiteDebug32_FWD_DEFINED__
typedef interface IActiveScriptSiteDebug32 IActiveScriptSiteDebug32;
#endif
#ifndef __IActiveScriptSiteDebug64_FWD_DEFINED__
#define __IActiveScriptSiteDebug64_FWD_DEFINED__
typedef interface IActiveScriptSiteDebug64 IActiveScriptSiteDebug64;
#endif
#ifndef __IActiveScriptSiteDebugEx_FWD_DEFINED__
#define __IActiveScriptSiteDebugEx_FWD_DEFINED__
typedef interface IActiveScriptSiteDebugEx IActiveScriptSiteDebugEx;
#endif
#ifndef __IApplicationDebugger_FWD_DEFINED__
#define __IApplicationDebugger_FWD_DEFINED__
typedef interface IApplicationDebugger IApplicationDebugger;
#endif
#ifndef __IApplicationDebuggerUI_FWD_DEFINED__
#define __IApplicationDebuggerUI_FWD_DEFINED__
typedef interface IApplicationDebuggerUI IApplicationDebuggerUI;
#endif
#ifndef __IRemoteDebugApplication_FWD_DEFINED__
#define __IRemoteDebugApplication_FWD_DEFINED__
typedef interface IRemoteDebugApplication IRemoteDebugApplication;
#endif
#ifndef __IDebugApplication32_FWD_DEFINED__
#define __IDebugApplication32_FWD_DEFINED__
typedef interface IDebugApplication32 IDebugApplication32;
#endif
#ifndef __IDebugApplication64_FWD_DEFINED__
#define __IDebugApplication64_FWD_DEFINED__
typedef interface IDebugApplication64 IDebugApplication64;
#endif
#ifndef __IDebugDocumentInfo_FWD_DEFINED__
#define __IDebugDocumentInfo_FWD_DEFINED__
typedef interface IDebugDocumentInfo IDebugDocumentInfo;
#endif
#ifndef __IDebugDocumentProvider_FWD_DEFINED__
#define __IDebugDocumentProvider_FWD_DEFINED__
typedef interface IDebugDocumentProvider IDebugDocumentProvider;
#endif
#ifndef __IDebugApplicationNode_FWD_DEFINED__
#define __IDebugApplicationNode_FWD_DEFINED__
typedef interface IDebugApplicationNode IDebugApplicationNode;
#endif
#ifndef __IDebugApplicationNodeEvents_FWD_DEFINED__
#define __IDebugApplicationNodeEvents_FWD_DEFINED__
typedef interface IDebugApplicationNodeEvents IDebugApplicationNodeEvents;
#endif
#ifndef __IRemoteDebugApplicationThread_FWD_DEFINED__
#define __IRemoteDebugApplicationThread_FWD_DEFINED__
typedef interface IRemoteDebugApplicationThread IRemoteDebugApplicationThread;
#endif
#ifndef __IDebugApplicationThread_FWD_DEFINED__
#define __IDebugApplicationThread_FWD_DEFINED__
typedef interface IDebugApplicationThread IDebugApplicationThread;
#endif
#ifndef __IDebugAsyncOperation_FWD_DEFINED__
#define __IDebugAsyncOperation_FWD_DEFINED__
typedef interface IDebugAsyncOperation IDebugAsyncOperation;
#endif
#ifndef __IDebugAsyncOperationCallBack_FWD_DEFINED__
#define __IDebugAsyncOperationCallBack_FWD_DEFINED__
typedef interface IDebugAsyncOperationCallBack IDebugAsyncOperationCallBack;
#endif
#ifndef __IDebugCodeContext_FWD_DEFINED__
#define __IDebugCodeContext_FWD_DEFINED__
typedef interface IDebugCodeContext IDebugCodeContext;
#endif
#ifndef __IDebugCookie_FWD_DEFINED__
#define __IDebugCookie_FWD_DEFINED__
typedef interface IDebugCookie IDebugCookie;
#endif
#ifndef __IDebugDocument_FWD_DEFINED__
#define __IDebugDocument_FWD_DEFINED__
typedef interface IDebugDocument IDebugDocument;
#endif
#ifndef __IDebugDocumentContext_FWD_DEFINED__
#define __IDebugDocumentContext_FWD_DEFINED__
typedef interface IDebugDocumentContext IDebugDocumentContext;
#endif
#ifndef __IDebugDocumentHelper32_FWD_DEFINED__
#define __IDebugDocumentHelper32_FWD_DEFINED__
typedef interface IDebugDocumentHelper32 IDebugDocumentHelper32;
#endif
#ifndef __IDebugDocumentHelper64_FWD_DEFINED__
#define __IDebugDocumentHelper64_FWD_DEFINED__
typedef interface IDebugDocumentHelper64 IDebugDocumentHelper64;
#endif
#ifndef __IDebugDocumentHost_FWD_DEFINED__
#define __IDebugDocumentHost_FWD_DEFINED__
typedef interface IDebugDocumentHost IDebugDocumentHost;
#endif
#ifndef __IDebugDocumentText_FWD_DEFINED__
#define __IDebugDocumentText_FWD_DEFINED__
typedef interface IDebugDocumentText IDebugDocumentText;
#endif
#ifndef __IDebugDocumentTextAuthor_FWD_DEFINED__
#define __IDebugDocumentTextAuthor_FWD_DEFINED__
typedef interface IDebugDocumentTextAuthor IDebugDocumentTextAuthor;
#endif
#ifndef __IDebugDocumentTextEvents_FWD_DEFINED__
#define __IDebugDocumentTextEvents_FWD_DEFINED__
typedef interface IDebugDocumentTextEvents IDebugDocumentTextEvents;
#endif
#ifndef __IDebugDocumentTextExternalAuthor_FWD_DEFINED__
#define __IDebugDocumentTextExternalAuthor_FWD_DEFINED__
typedef interface IDebugDocumentTextExternalAuthor IDebugDocumentTextExternalAuthor;
#endif
#ifndef __IDebugExpression_FWD_DEFINED__
#define __IDebugExpression_FWD_DEFINED__
typedef interface IDebugExpression IDebugExpression;
#endif
#ifndef __IDebugExpressionCallBack_FWD_DEFINED__
#define __IDebugExpressionCallBack_FWD_DEFINED__
typedef interface IDebugExpressionCallBack IDebugExpressionCallBack;
#endif
#ifndef __IDebugExpressionContext_FWD_DEFINED__
#define __IDebugExpressionContext_FWD_DEFINED__
typedef interface IDebugExpressionContext IDebugExpressionContext;
#endif
#ifndef __IDebugFormatter_FWD_DEFINED__
#define __IDebugFormatter_FWD_DEFINED__
typedef interface IDebugFormatter IDebugFormatter;
#endif
#ifndef __IDebugHelper_FWD_DEFINED__
#define __IDebugHelper_FWD_DEFINED__
typedef interface IDebugHelper IDebugHelper;
#endif
#ifndef __IDebugSessionProvider_FWD_DEFINED__
#define __IDebugSessionProvider_FWD_DEFINED__
typedef interface IDebugSessionProvider IDebugSessionProvider;
#endif
#ifndef __IDebugStackFrame_FWD_DEFINED__
#define __IDebugStackFrame_FWD_DEFINED__
typedef interface IDebugStackFrame IDebugStackFrame;
#endif
#ifndef __IDebugStackFrameSniffer_FWD_DEFINED__
#define __IDebugStackFrameSniffer_FWD_DEFINED__
typedef interface IDebugStackFrameSniffer IDebugStackFrameSniffer;
#endif
#ifndef __IDebugStackFrameSnifferEx32_FWD_DEFINED__
#define __IDebugStackFrameSnifferEx32_FWD_DEFINED__
typedef interface IDebugStackFrameSnifferEx32 IDebugStackFrameSnifferEx32;
#endif
#ifndef __IDebugStackFrameSnifferEx64_FWD_DEFINED__
#define __IDebugStackFrameSnifferEx64_FWD_DEFINED__
typedef interface IDebugStackFrameSnifferEx64 IDebugStackFrameSnifferEx64;
#endif
#ifndef __IDebugSyncOperation_FWD_DEFINED__
#define __IDebugSyncOperation_FWD_DEFINED__
typedef interface IDebugSyncOperation IDebugSyncOperation;
#endif
#ifndef __IDebugThreadCall32_FWD_DEFINED__
#define __IDebugThreadCall32_FWD_DEFINED__
typedef interface IDebugThreadCall32 IDebugThreadCall32;
#endif
#ifndef __IDebugThreadCall64_FWD_DEFINED__
#define __IDebugThreadCall64_FWD_DEFINED__
typedef interface IDebugThreadCall64 IDebugThreadCall64;
#endif
#ifndef __IEnumDebugApplicationNodes_FWD_DEFINED__
#define __IEnumDebugApplicationNodes_FWD_DEFINED__
typedef interface IEnumDebugApplicationNodes IEnumDebugApplicationNodes;
#endif
#ifndef __IEnumDebugCodeContexts_FWD_DEFINED__
#define __IEnumDebugCodeContexts_FWD_DEFINED__
typedef interface IEnumDebugCodeContexts IEnumDebugCodeContexts;
#endif
#ifndef __IEnumDebugExpressionContexts_FWD_DEFINED__
#define __IEnumDebugExpressionContexts_FWD_DEFINED__
typedef interface IEnumDebugExpressionContexts IEnumDebugExpressionContexts;
#endif
#ifndef __IEnumDebugStackFrames_FWD_DEFINED__
#define __IEnumDebugStackFrames_FWD_DEFINED__
typedef interface IEnumDebugStackFrames IEnumDebugStackFrames;
#endif
#ifndef __IEnumDebugStackFrames64_FWD_DEFINED__
#define __IEnumDebugStackFrames64_FWD_DEFINED__
typedef interface IEnumDebugStackFrames64 IEnumDebugStackFrames64;
#endif
#ifndef __IEnumRemoteDebugApplications_FWD_DEFINED__
#define __IEnumRemoteDebugApplications_FWD_DEFINED__
typedef interface IEnumRemoteDebugApplications IEnumRemoteDebugApplications;
#endif
#ifndef __IEnumRemoteDebugApplicationThreads_FWD_DEFINED__
#define __IEnumRemoteDebugApplicationThreads_FWD_DEFINED__
typedef interface IEnumRemoteDebugApplicationThreads IEnumRemoteDebugApplicationThreads;
#endif
#ifndef __IProcessDebugManager32_FWD_DEFINED__
#define __IProcessDebugManager32_FWD_DEFINED__
typedef interface IProcessDebugManager32 IProcessDebugManager32;
#endif
#ifndef __IProcessDebugManager64_FWD_DEFINED__
#define __IProcessDebugManager64_FWD_DEFINED__
typedef interface IProcessDebugManager64 IProcessDebugManager64;
#endif
#ifndef __IProvideExpressionContexts_FWD_DEFINED__
#define __IProvideExpressionContexts_FWD_DEFINED__
typedef interface IProvideExpressionContexts IProvideExpressionContexts;
#endif
#ifndef __IMachineDebugManager_FWD_DEFINED__
#define __IMachineDebugManager_FWD_DEFINED__
typedef interface IMachineDebugManager IMachineDebugManager;
#endif
#ifndef __IMachineDebugManagerCookie_FWD_DEFINED__
#define __IMachineDebugManagerCookie_FWD_DEFINED__
typedef interface IMachineDebugManagerCookie IMachineDebugManagerCookie;
#endif
#ifndef __IMachineDebugManagerEvents_FWD_DEFINED__
#define __IMachineDebugManagerEvents_FWD_DEFINED__
typedef interface IMachineDebugManagerEvents IMachineDebugManagerEvents;
#endif
#ifndef __IRemoteDebugApplicationEvents_FWD_DEFINED__
#define __IRemoteDebugApplicationEvents_FWD_DEFINED__
typedef interface IRemoteDebugApplicationEvents IRemoteDebugApplicationEvents;
#endif
#ifndef __ISimpleConnectionPoint_FWD_DEFINED__
#define __ISimpleConnectionPoint_FWD_DEFINED__
typedef interface ISimpleConnectionPoint ISimpleConnectionPoint;
#endif
#ifndef __ProcessDebugManager_FWD_DEFINED__
#define __ProcessDebugManager_FWD_DEFINED__
typedef struct ProcessDebugManager ProcessDebugManager;
#endif
#ifndef __DebugHelper_FWD_DEFINED__
#define __DebugHelper_FWD_DEFINED__
typedef struct DebugHelper DebugHelper;
#endif
#ifndef __CDebugDocumentHelper_FWD_DEFINED__
#define __CDebugDocumentHelper_FWD_DEFINED__
typedef struct CDebugDocumentHelper CDebugDocumentHelper;
#endif
#ifndef __MachineDebugManager_RETAIL_FWD_DEFINED__
#define __MachineDebugManager_RETAIL_FWD_DEFINED__
typedef struct MachineDebugManager_RETAIL MachineDebugManager_RETAIL;
#endif
#ifndef __MachineDebugManager_DEBUG_FWD_DEFINED__
#define __MachineDebugManager_DEBUG_FWD_DEFINED__
typedef struct MachineDebugManager_DEBUG MachineDebugManager_DEBUG;
#endif
#ifndef __DefaultDebugSessionProvider_FWD_DEFINED__
#define __DefaultDebugSessionProvider_FWD_DEFINED__
typedef struct DefaultDebugSessionProvider DefaultDebugSessionProvider;
#endif
#include "ocidl.h"
#include "activscp.h"
#include "dbgprop.h"
#pragma comment(lib,"uuid.lib")
#ifndef __ActivDbg_h
#define __ActivDbg_h
typedef enum tagBREAKPOINT_STATE
{
	BREAKPOINT_DELETED = 0,
	BREAKPOINT_DISABLED = 1,
	BREAKPOINT_ENABLED = 2
} BREAKPOINT_STATE;
typedef DWORD APPBREAKFLAGS;
#define	APPBREAKFLAG_DEBUGGER_BLOCK	( 0x1 )
#define	APPBREAKFLAG_DEBUGGER_HALT	( 0x2 )
#define	APPBREAKFLAG_STEP	( 0x10000 )
#define	APPBREAKFLAG_NESTED	( 0x20000 )
#define	APPBREAKFLAG_STEPTYPE_SOURCE	( 0 )
#define	APPBREAKFLAG_STEPTYPE_BYTECODE	( 0x100000 )
#define	APPBREAKFLAG_STEPTYPE_MACHINE	( 0x200000 )
#define	APPBREAKFLAG_STEPTYPE_MASK	( 0xf00000 )
#define	APPBREAKFLAG_IN_BREAKPOINT	( 0x80000000 )
typedef enum tagBREAKREASON
{
	BREAKREASON_STEP = 0,
	BREAKREASON_BREAKPOINT = (BREAKREASON_STEP + 1),
	BREAKREASON_DEBUGGER_BLOCK = (BREAKREASON_BREAKPOINT + 1),
	BREAKREASON_HOST_INITIATED = (BREAKREASON_DEBUGGER_BLOCK + 1),
	BREAKREASON_LANGUAGE_INITIATED = (BREAKREASON_HOST_INITIATED + 1),
	BREAKREASON_DEBUGGER_HALT = (BREAKREASON_LANGUAGE_INITIATED + 1),
	BREAKREASON_ERROR = (BREAKREASON_DEBUGGER_HALT + 1),
	BREAKREASON_JIT = (BREAKREASON_ERROR + 1)
} BREAKREASON;
typedef enum tagBREAKRESUME_ACTION
{
	BREAKRESUMEACTION_ABORT = 0,
	BREAKRESUMEACTION_CONTINUE = (BREAKRESUMEACTION_ABORT + 1),
	BREAKRESUMEACTION_STEP_INTO = (BREAKRESUMEACTION_CONTINUE + 1),
	BREAKRESUMEACTION_STEP_OVER = (BREAKRESUMEACTION_STEP_INTO + 1),
	BREAKRESUMEACTION_STEP_OUT = (BREAKRESUMEACTION_STEP_OVER + 1),
	BREAKRESUMEACTION_IGNORE = (BREAKRESUMEACTION_STEP_OUT + 1)
} BREAKRESUMEACTION;
typedef enum tagERRORRESUMEACTION
{
	ERRORRESUMEACTION_ReexecuteErrorStatement = 0,
	ERRORRESUMEACTION_AbortCallAndReturnErrorToCaller = (ERRORRESUMEACTION_ReexecuteErrorStatement + 1),
	ERRORRESUMEACTION_SkipErrorStatement = (ERRORRESUMEACTION_AbortCallAndReturnErrorToCaller + 1)
} ERRORRESUMEACTION;
typedef enum tagDOCUMENTNAMETYPE
{
	DOCUMENTNAMETYPE_APPNODE = 0,
	DOCUMENTNAMETYPE_TITLE = (DOCUMENTNAMETYPE_APPNODE + 1),
	DOCUMENTNAMETYPE_FILE_TAIL = (DOCUMENTNAMETYPE_TITLE + 1),
	DOCUMENTNAMETYPE_URL = (DOCUMENTNAMETYPE_FILE_TAIL + 1)
} DOCUMENTNAMETYPE;
typedef WORD SOURCE_TEXT_ATTR;
#define	SOURCETEXT_ATTR_KEYWORD	( 0x1 )
#define	SOURCETEXT_ATTR_COMMENT	( 0x2 )
#define	SOURCETEXT_ATTR_NONSOURCE	( 0x4 )
#define	SOURCETEXT_ATTR_OPERATOR	( 0x8 )
#define	SOURCETEXT_ATTR_NUMBER	( 0x10 )
#define	SOURCETEXT_ATTR_STRING	( 0x20 )
#define	SOURCETEXT_ATTR_FUNCTION_START	( 0x40 )
typedef DWORD TEXT_DOC_ATTR;
#define	TEXT_DOC_ATTR_READONLY	( 0x1 )
#define	DEBUG_TEXT_ISEXPRESSION	( 0x1 )
#define	DEBUG_TEXT_RETURNVALUE	( 0x2 )
#define	DEBUG_TEXT_NOSIDEEFFECTS	( 0x4 )
#define	DEBUG_TEXT_ALLOWBREAKPOINTS	( 0x8 )
#define	DEBUG_TEXT_ALLOWERRORREPORT	( 0x10 )
#define	DEBUG_TEXT_EVALUATETOCODECONTEXT	( 0x20 )
#ifndef DISABLE_ACTIVDBG_INTERFACE_WRAPPERS
#ifdef _WIN64
#define IActiveScriptDebug IActiveScriptDebug64
#define IID_IActiveScriptDebug IID_IActiveScriptDebug64
#else
#define IActiveScriptDebug IActiveScriptDebug32
#define IID_IActiveScriptDebug IID_IActiveScriptDebug32
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0000_v0_0_s_ifspec;
#ifndef __IActiveScriptDebug32_INTERFACE_DEFINED__
#define __IActiveScriptDebug32_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptDebug32;
typedef struct IActiveScriptDebug32Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActiveScriptDebug32 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IActiveScriptDebug32 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IActiveScriptDebug32 * This);
	HRESULT(STDMETHODCALLTYPE * GetScriptTextAttributes) (IActiveScriptDebug32 * This, LPCOLESTR pstrCode, ULONG uNumCodeChars, LPCOLESTR pstrDelimiter, DWORD dwFlags, SOURCE_TEXT_ATTR * pattr);
	HRESULT(STDMETHODCALLTYPE * GetScriptletTextAttributes) (IActiveScriptDebug32 * This, LPCOLESTR pstrCode, ULONG uNumCodeChars, LPCOLESTR pstrDelimiter, DWORD dwFlags, SOURCE_TEXT_ATTR * pattr);
	HRESULT(STDMETHODCALLTYPE * EnumCodeContextsOfPosition) (IActiveScriptDebug32 * This, DWORD dwSourceContext, ULONG uCharacterOffset, ULONG uNumChars, IEnumDebugCodeContexts ** ppescc);
	END_INTERFACE
}  IActiveScriptDebug32Vtbl;
interface IActiveScriptDebug32
{
	CONST_VTBL struct IActiveScriptDebug32Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptDebug32_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptDebug32_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptDebug32_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptDebug32_GetScriptTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr)    ( (This)->lpVtbl -> GetScriptTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr) )
#define IActiveScriptDebug32_GetScriptletTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr)    ( (This)->lpVtbl -> GetScriptletTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr) )
#define IActiveScriptDebug32_EnumCodeContextsOfPosition(This,dwSourceContext,uCharacterOffset,uNumChars,ppescc)    ( (This)->lpVtbl -> EnumCodeContextsOfPosition(This,dwSourceContext,uCharacterOffset,uNumChars,ppescc) )
#endif
#endif
#ifndef __IActiveScriptDebug64_INTERFACE_DEFINED__
#define __IActiveScriptDebug64_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptDebug64;
typedef struct IActiveScriptDebug64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActiveScriptDebug64 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IActiveScriptDebug64 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IActiveScriptDebug64 * This);
	HRESULT(STDMETHODCALLTYPE * GetScriptTextAttributes) (IActiveScriptDebug64 * This, LPCOLESTR pstrCode, ULONG uNumCodeChars, LPCOLESTR pstrDelimiter, DWORD dwFlags, SOURCE_TEXT_ATTR * pattr);
	HRESULT(STDMETHODCALLTYPE * GetScriptletTextAttributes) (IActiveScriptDebug64 * This, LPCOLESTR pstrCode, ULONG uNumCodeChars, LPCOLESTR pstrDelimiter, DWORD dwFlags, SOURCE_TEXT_ATTR * pattr);
	HRESULT(STDMETHODCALLTYPE * EnumCodeContextsOfPosition) (IActiveScriptDebug64 * This, DWORDLONG dwSourceContext, ULONG uCharacterOffset, ULONG uNumChars, IEnumDebugCodeContexts ** ppescc);
	END_INTERFACE
}  IActiveScriptDebug64Vtbl;
interface IActiveScriptDebug64
{
	CONST_VTBL struct IActiveScriptDebug64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptDebug64_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptDebug64_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptDebug64_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptDebug64_GetScriptTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr)    ( (This)->lpVtbl -> GetScriptTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr) )
#define IActiveScriptDebug64_GetScriptletTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr)    ( (This)->lpVtbl -> GetScriptletTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr) )
#define IActiveScriptDebug64_EnumCodeContextsOfPosition(This,dwSourceContext,uCharacterOffset,uNumChars,ppescc)    ( (This)->lpVtbl -> EnumCodeContextsOfPosition(This,dwSourceContext,uCharacterOffset,uNumChars,ppescc) )
#endif
#endif
#ifndef DISABLE_ACTIVDBG_INTERFACE_WRAPPERS
#ifdef _WIN64
#define IActiveScriptSiteDebug IActiveScriptSiteDebug64
#define IID_IActiveScriptSiteDebug IID_IActiveScriptSiteDebug64
#else
#define IActiveScriptSiteDebug IActiveScriptSiteDebug32
#define IID_IActiveScriptSiteDebug IID_IActiveScriptSiteDebug32
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0002_v0_0_s_ifspec;
#ifndef __IActiveScriptSiteDebug32_INTERFACE_DEFINED__
#define __IActiveScriptSiteDebug32_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptSiteDebug32;
typedef struct IActiveScriptSiteDebug32Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActiveScriptSiteDebug32 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IActiveScriptSiteDebug32 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IActiveScriptSiteDebug32 * This);
	HRESULT(STDMETHODCALLTYPE * GetDocumentContextFromPosition) (IActiveScriptSiteDebug32 * This, DWORD dwSourceContext, ULONG uCharacterOffset, ULONG uNumChars, IDebugDocumentContext ** ppsc);
	HRESULT(STDMETHODCALLTYPE * GetApplication) (IActiveScriptSiteDebug32 * This, IDebugApplication32 ** ppda);
	HRESULT(STDMETHODCALLTYPE * GetRootApplicationNode) (IActiveScriptSiteDebug32 * This, IDebugApplicationNode ** ppdanRoot);
	HRESULT(STDMETHODCALLTYPE * OnScriptErrorDebug) (IActiveScriptSiteDebug32 * This, IActiveScriptErrorDebug * pErrorDebug, BOOL * pfEnterDebugger, BOOL * pfCallOnScriptErrorWhenContinuing);
	END_INTERFACE
}  IActiveScriptSiteDebug32Vtbl;
interface IActiveScriptSiteDebug32
{
	CONST_VTBL struct IActiveScriptSiteDebug32Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptSiteDebug32_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptSiteDebug32_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptSiteDebug32_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptSiteDebug32_GetDocumentContextFromPosition(This,dwSourceContext,uCharacterOffset,uNumChars,ppsc)    ( (This)->lpVtbl -> GetDocumentContextFromPosition(This,dwSourceContext,uCharacterOffset,uNumChars,ppsc) )
#define IActiveScriptSiteDebug32_GetApplication(This,ppda)    ( (This)->lpVtbl -> GetApplication(This,ppda) )
#define IActiveScriptSiteDebug32_GetRootApplicationNode(This,ppdanRoot)    ( (This)->lpVtbl -> GetRootApplicationNode(This,ppdanRoot) )
#define IActiveScriptSiteDebug32_OnScriptErrorDebug(This,pErrorDebug,pfEnterDebugger,pfCallOnScriptErrorWhenContinuing)    ( (This)->lpVtbl -> OnScriptErrorDebug(This,pErrorDebug,pfEnterDebugger,pfCallOnScriptErrorWhenContinuing) )
#endif
#endif
#ifndef __IActiveScriptSiteDebug64_INTERFACE_DEFINED__
#define __IActiveScriptSiteDebug64_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptSiteDebug64;
typedef struct IActiveScriptSiteDebug64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActiveScriptSiteDebug64 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IActiveScriptSiteDebug64 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IActiveScriptSiteDebug64 * This);
	HRESULT(STDMETHODCALLTYPE * GetDocumentContextFromPosition) (IActiveScriptSiteDebug64 * This, DWORDLONG dwSourceContext, ULONG uCharacterOffset, ULONG uNumChars, IDebugDocumentContext ** ppsc);
	HRESULT(STDMETHODCALLTYPE * GetApplication) (IActiveScriptSiteDebug64 * This, IDebugApplication64 ** ppda);
	HRESULT(STDMETHODCALLTYPE * GetRootApplicationNode) (IActiveScriptSiteDebug64 * This, IDebugApplicationNode ** ppdanRoot);
	HRESULT(STDMETHODCALLTYPE * OnScriptErrorDebug) (IActiveScriptSiteDebug64 * This, IActiveScriptErrorDebug * pErrorDebug, BOOL * pfEnterDebugger, BOOL * pfCallOnScriptErrorWhenContinuing);
	END_INTERFACE
}  IActiveScriptSiteDebug64Vtbl;
interface IActiveScriptSiteDebug64
{
	CONST_VTBL struct IActiveScriptSiteDebug64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptSiteDebug64_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptSiteDebug64_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptSiteDebug64_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptSiteDebug64_GetDocumentContextFromPosition(This,dwSourceContext,uCharacterOffset,uNumChars,ppsc)    ( (This)->lpVtbl -> GetDocumentContextFromPosition(This,dwSourceContext,uCharacterOffset,uNumChars,ppsc) )
#define IActiveScriptSiteDebug64_GetApplication(This,ppda)    ( (This)->lpVtbl -> GetApplication(This,ppda) )
#define IActiveScriptSiteDebug64_GetRootApplicationNode(This,ppdanRoot)    ( (This)->lpVtbl -> GetRootApplicationNode(This,ppdanRoot) )
#define IActiveScriptSiteDebug64_OnScriptErrorDebug(This,pErrorDebug,pfEnterDebugger,pfCallOnScriptErrorWhenContinuing)    ( (This)->lpVtbl -> OnScriptErrorDebug(This,pErrorDebug,pfEnterDebugger,pfCallOnScriptErrorWhenContinuing) )
#endif
#endif
#ifndef __IActiveScriptSiteDebugEx_INTERFACE_DEFINED__
#define __IActiveScriptSiteDebugEx_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptSiteDebugEx;
typedef struct IActiveScriptSiteDebugExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActiveScriptSiteDebugEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IActiveScriptSiteDebugEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IActiveScriptSiteDebugEx * This);
	HRESULT(STDMETHODCALLTYPE * OnCanNotJITScriptErrorDebug) (IActiveScriptSiteDebugEx * This, IActiveScriptErrorDebug * pErrorDebug, BOOL * pfCallOnScriptErrorWhenContinuing);
	END_INTERFACE
}  IActiveScriptSiteDebugExVtbl;
interface IActiveScriptSiteDebugEx
{
	CONST_VTBL struct IActiveScriptSiteDebugExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptSiteDebugEx_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptSiteDebugEx_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptSiteDebugEx_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptSiteDebugEx_OnCanNotJITScriptErrorDebug(This,pErrorDebug,pfCallOnScriptErrorWhenContinuing)    ( (This)->lpVtbl -> OnCanNotJITScriptErrorDebug(This,pErrorDebug,pfCallOnScriptErrorWhenContinuing) )
#endif
#endif
#ifndef __IActiveScriptErrorDebug_INTERFACE_DEFINED__
#define __IActiveScriptErrorDebug_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptErrorDebug;
typedef struct IActiveScriptErrorDebugVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActiveScriptErrorDebug * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IActiveScriptErrorDebug * This);
	ULONG(STDMETHODCALLTYPE * Release) (IActiveScriptErrorDebug * This);
	HRESULT(STDMETHODCALLTYPE * GetExceptionInfo) (IActiveScriptErrorDebug * This, EXCEPINFO * pexcepinfo);
	HRESULT(STDMETHODCALLTYPE * GetSourcePosition) (IActiveScriptErrorDebug * This, DWORD * pdwSourceContext, ULONG * pulLineNumber, LONG * plCharacterPosition);
	HRESULT(STDMETHODCALLTYPE * GetSourceLineText) (IActiveScriptErrorDebug * This, BSTR * pbstrSourceLine);
	HRESULT(STDMETHODCALLTYPE * GetDocumentContext) (IActiveScriptErrorDebug * This, IDebugDocumentContext ** ppssc);
	HRESULT(STDMETHODCALLTYPE * GetStackFrame) (IActiveScriptErrorDebug * This, IDebugStackFrame ** ppdsf);
	END_INTERFACE
}  IActiveScriptErrorDebugVtbl;
interface IActiveScriptErrorDebug
{
	CONST_VTBL struct IActiveScriptErrorDebugVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptErrorDebug_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptErrorDebug_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptErrorDebug_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptErrorDebug_GetExceptionInfo(This,pexcepinfo)    ( (This)->lpVtbl -> GetExceptionInfo(This,pexcepinfo) )
#define IActiveScriptErrorDebug_GetSourcePosition(This,pdwSourceContext,pulLineNumber,plCharacterPosition)    ( (This)->lpVtbl -> GetSourcePosition(This,pdwSourceContext,pulLineNumber,plCharacterPosition) )
#define IActiveScriptErrorDebug_GetSourceLineText(This,pbstrSourceLine)    ( (This)->lpVtbl -> GetSourceLineText(This,pbstrSourceLine) )
#define IActiveScriptErrorDebug_GetDocumentContext(This,ppssc)    ( (This)->lpVtbl -> GetDocumentContext(This,ppssc) )
#define IActiveScriptErrorDebug_GetStackFrame(This,ppdsf)    ( (This)->lpVtbl -> GetStackFrame(This,ppdsf) )
#endif
#endif
#ifndef __IDebugCodeContext_INTERFACE_DEFINED__
#define __IDebugCodeContext_INTERFACE_DEFINED__
extern const IID IID_IDebugCodeContext;
typedef struct IDebugCodeContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDebugCodeContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDebugCodeContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDebugCodeContext * This);
	HRESULT(STDMETHODCALLTYPE * GetDocumentContext) (IDebugCodeContext * This, IDebugDocumentContext ** ppsc);
	HRESULT(STDMETHODCALLTYPE * SetBreakPoint) (IDebugCodeContext * This, BREAKPOINT_STATE bps);
	END_INTERFACE
}  IDebugCodeContextVtbl;
interface IDebugCodeContext
{
	CONST_VTBL struct IDebugCodeContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugCodeContext_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugCodeContext_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugCodeContext_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugCodeContext_GetDocumentContext(This,ppsc)    ( (This)->lpVtbl -> GetDocumentContext(This,ppsc) )
#define IDebugCodeContext_SetBreakPoint(This,bps)    ( (This)->lpVtbl -> SetBreakPoint(This,bps) )
#endif
#endif
#ifndef __IDebugExpression_INTERFACE_DEFINED__
#define __IDebugExpression_INTERFACE_DEFINED__
extern const IID IID_IDebugExpression;
typedef struct IDebugExpressionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDebugExpression * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDebugExpression * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDebugExpression * This);
	HRESULT(STDMETHODCALLTYPE * Start) (IDebugExpression * This, IDebugExpressionCallBack * pdecb);
	HRESULT(STDMETHODCALLTYPE * Abort) (IDebugExpression * This);
	HRESULT(STDMETHODCALLTYPE * QueryIsComplete) (IDebugExpression * This);
	HRESULT(STDMETHODCALLTYPE * GetResultAsString) (IDebugExpression * This, HRESULT * phrResult, BSTR * pbstrResult);
	HRESULT(STDMETHODCALLTYPE * GetResultAsDebugProperty) (IDebugExpression * This, HRESULT * phrResult, IDebugProperty ** ppdp);
	END_INTERFACE
}  IDebugExpressionVtbl;
interface IDebugExpression
{
	CONST_VTBL struct IDebugExpressionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugExpression_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugExpression_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugExpression_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugExpression_Start(This,pdecb)    ( (This)->lpVtbl -> Start(This,pdecb) )
#define IDebugExpression_Abort(This)    ( (This)->lpVtbl -> Abort(This) )
#define IDebugExpression_QueryIsComplete(This)    ( (This)->lpVtbl -> QueryIsComplete(This) )
#define IDebugExpression_GetResultAsString(This,phrResult,pbstrResult)    ( (This)->lpVtbl -> GetResultAsString(This,phrResult,pbstrResult) )
#define IDebugExpression_GetResultAsDebugProperty(This,phrResult,ppdp)    ( (This)->lpVtbl -> GetResultAsDebugProperty(This,phrResult,ppdp) )
#endif
#endif
#ifndef __IDebugExpressionContext_INTERFACE_DEFINED__
#define __IDebugExpressionContext_INTERFACE_DEFINED__
extern const IID IID_IDebugExpressionContext;
typedef struct IDebugExpressionContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDebugExpressionContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDebugExpressionContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDebugExpressionContext * This);
	HRESULT(STDMETHODCALLTYPE * ParseLanguageText) (IDebugExpressionContext * This, LPCOLESTR pstrCode, UINT nRadix, LPCOLESTR pstrDelimiter, DWORD dwFlags, IDebugExpression ** ppe);
	HRESULT(STDMETHODCALLTYPE * GetLanguageInfo) (IDebugExpressionContext * This, BSTR * pbstrLanguageName, GUID * pLanguageID);
	END_INTERFACE
}  IDebugExpressionContextVtbl;
interface IDebugExpressionContext
{
	CONST_VTBL struct IDebugExpressionContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugExpressionContext_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugExpressionContext_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugExpressionContext_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugExpressionContext_ParseLanguageText(This,pstrCode,nRadix,pstrDelimiter,dwFlags,ppe)    ( (This)->lpVtbl -> ParseLanguageText(This,pstrCode,nRadix,pstrDelimiter,dwFlags,ppe) )
#define IDebugExpressionContext_GetLanguageInfo(This,pbstrLanguageName,pLanguageID)    ( (This)->lpVtbl -> GetLanguageInfo(This,pbstrLanguageName,pLanguageID) )
#endif
#endif
#ifndef __IDebugExpressionCallBack_INTERFACE_DEFINED__
#define __IDebugExpressionCallBack_INTERFACE_DEFINED__
extern const IID IID_IDebugExpressionCallBack;
typedef struct IDebugExpressionCallBackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDebugExpressionCallBack * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDebugExpressionCallBack * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDebugExpressionCallBack * This);
	HRESULT(STDMETHODCALLTYPE * onComplete) (IDebugExpressionCallBack * This);
	END_INTERFACE
}  IDebugExpressionCallBackVtbl;
interface IDebugExpressionCallBack
{
	CONST_VTBL struct IDebugExpressionCallBackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugExpressionCallBack_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugExpressionCallBack_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugExpressionCallBack_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugExpressionCallBack_onComplete(This)    ( (This)->lpVtbl -> onComplete(This) )
#endif
#endif
#ifndef __IDebugStackFrame_INTERFACE_DEFINED__
#define __IDebugStackFrame_INTERFACE_DEFINED__
extern const IID IID_IDebugStackFrame;
typedef struct IDebugStackFrameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDebugStackFrame * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDebugStackFrame * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDebugStackFrame * This);
	HRESULT(STDMETHODCALLTYPE * GetCodeContext) (IDebugStackFrame * This, IDebugCodeContext ** ppcc);
	HRESULT(STDMETHODCALLTYPE * GetDescriptionString) (IDebugStackFrame * This, BOOL fLong, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * GetLanguageString) (IDebugStackFrame * This, BOOL fLong, BSTR * pbstrLanguage);
	HRESULT(STDMETHODCALLTYPE * GetThread) (IDebugStackFrame * This, IDebugApplicationThread ** ppat);
	HRESULT(STDMETHODCALLTYPE * GetDebugProperty) (IDebugStackFrame * This, IDebugProperty ** ppDebugProp);
	END_INTERFACE
}  IDebugStackFrameVtbl;
interface IDebugStackFrame
{
	CONST_VTBL struct IDebugStackFrameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugStackFrame_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugStackFrame_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugStackFrame_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugStackFrame_GetCodeContext(This,ppcc)    ( (This)->lpVtbl -> GetCodeContext(This,ppcc) )
#define IDebugStackFrame_GetDescriptionString(This,fLong,pbstrDescription)    ( (This)->lpVtbl -> GetDescriptionString(This,fLong,pbstrDescription) )
#define IDebugStackFrame_GetLanguageString(This,fLong,pbstrLanguage)    ( (This)->lpVtbl -> GetLanguageString(This,fLong,pbstrLanguage) )
#define IDebugStackFrame_GetThread(This,ppat)    ( (This)->lpVtbl -> GetThread(This,ppat) )
#define IDebugStackFrame_GetDebugProperty(This,ppDebugProp)    ( (This)->lpVtbl -> GetDebugProperty(This,ppDebugProp) )
#endif
#endif
#ifndef __IDebugStackFrameSniffer_INTERFACE_DEFINED__
#define __IDebugStackFrameSniffer_INTERFACE_DEFINED__
extern const IID IID_IDebugStackFrameSniffer;
typedef struct IDebugStackFrameSnifferVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDebugStackFrameSniffer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDebugStackFrameSniffer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDebugStackFrameSniffer * This);
	HRESULT(STDMETHODCALLTYPE * EnumStackFrames) (IDebugStackFrameSniffer * This, IEnumDebugStackFrames ** ppedsf);
	END_INTERFACE
}  IDebugStackFrameSnifferVtbl;
interface IDebugStackFrameSniffer
{
	CONST_VTBL struct IDebugStackFrameSnifferVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugStackFrameSniffer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugStackFrameSniffer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugStackFrameSniffer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugStackFrameSniffer_EnumStackFrames(This,ppedsf)    ( (This)->lpVtbl -> EnumStackFrames(This,ppedsf) )
#endif
#endif
#ifndef DISABLE_ACTIVDBG_INTERFACE_WRAPPERS
#ifdef _WIN64
#define IDebugStackFrameSnifferEx IDebugStackFrameSnifferEx64
#define IID_IDebugStackFrameSnifferEx IID_IDebugStackFrameSnifferEx64
#define EnumStackFramesEx EnumStackFramesEx64
#else
#define IDebugStackFrameSnifferEx IDebugStackFrameSnifferEx32
#define IID_IDebugStackFrameSnifferEx IID_IDebugStackFrameSnifferEx32
#define EnumStackFramesEx EnumStackFramesEx32
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0012_v0_0_s_ifspec;
#ifndef __IDebugStackFrameSnifferEx32_INTERFACE_DEFINED__
#define __IDebugStackFrameSnifferEx32_INTERFACE_DEFINED__
extern const IID IID_IDebugStackFrameSnifferEx32;
typedef struct IDebugStackFrameSnifferEx32Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDebugStackFrameSnifferEx32 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDebugStackFrameSnifferEx32 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDebugStackFrameSnifferEx32 * This);
	HRESULT(STDMETHODCALLTYPE * EnumStackFrames) (IDebugStackFrameSnifferEx32 * This, IEnumDebugStackFrames ** ppedsf);
	HRESULT(STDMETHODCALLTYPE * EnumStackFramesEx32) (IDebugStackFrameSnifferEx32 * This, DWORD dwSpMin, IEnumDebugStackFrames ** ppedsf);
	END_INTERFACE
}  IDebugStackFrameSnifferEx32Vtbl;
interface IDebugStackFrameSnifferEx32
{
	CONST_VTBL struct IDebugStackFrameSnifferEx32Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugStackFrameSnifferEx32_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugStackFrameSnifferEx32_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugStackFrameSnifferEx32_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugStackFrameSnifferEx32_EnumStackFrames(This,ppedsf)    ( (This)->lpVtbl -> EnumStackFrames(This,ppedsf) )
#define IDebugStackFrameSnifferEx32_EnumStackFramesEx32(This,dwSpMin,ppedsf)    ( (This)->lpVtbl -> EnumStackFramesEx32(This,dwSpMin,ppedsf) )
#endif
#endif
#ifndef __IDebugStackFrameSnifferEx64_INTERFACE_DEFINED__
#define __IDebugStackFrameSnifferEx64_INTERFACE_DEFINED__
extern const IID IID_IDebugStackFrameSnifferEx64;
typedef struct IDebugStackFrameSnifferEx64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDebugStackFrameSnifferEx64 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDebugStackFrameSnifferEx64 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDebugStackFrameSnifferEx64 * This);
	HRESULT(STDMETHODCALLTYPE * EnumStackFrames) (IDebugStackFrameSnifferEx64 * This, IEnumDebugStackFrames ** ppedsf);
	HRESULT(STDMETHODCALLTYPE * EnumStackFramesEx64) (IDebugStackFrameSnifferEx64 * This, DWORDLONG dwSpMin, IEnumDebugStackFrames64 ** ppedsf);
	END_INTERFACE
}  IDebugStackFrameSnifferEx64Vtbl;
interface IDebugStackFrameSnifferEx64
{
	CONST_VTBL struct IDebugStackFrameSnifferEx64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugStackFrameSnifferEx64_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugStackFrameSnifferEx64_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugStackFrameSnifferEx64_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugStackFrameSnifferEx64_EnumStackFrames(This,ppedsf)    ( (This)->lpVtbl -> EnumStackFrames(This,ppedsf) )
#define IDebugStackFrameSnifferEx64_EnumStackFramesEx64(This,dwSpMin,ppedsf)    ( (This)->lpVtbl -> EnumStackFramesEx64(This,dwSpMin,ppedsf) )
#endif
#endif
#ifndef __IDebugSyncOperation_INTERFACE_DEFINED__
#define __IDebugSyncOperation_INTERFACE_DEFINED__
extern const IID IID_IDebugSyncOperation;
typedef struct IDebugSyncOperationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDebugSyncOperation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDebugSyncOperation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDebugSyncOperation * This);
	HRESULT(STDMETHODCALLTYPE * GetTargetThread) (IDebugSyncOperation * This, IDebugApplicationThread ** ppatTarget);
	HRESULT(STDMETHODCALLTYPE * Execute) (IDebugSyncOperation * This, IUnknown ** ppunkResult);
	HRESULT(STDMETHODCALLTYPE * InProgressAbort) (IDebugSyncOperation * This);
	END_INTERFACE
}  IDebugSyncOperationVtbl;
interface IDebugSyncOperation
{
	CONST_VTBL struct IDebugSyncOperationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugSyncOperation_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugSyncOperation_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugSyncOperation_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugSyncOperation_GetTargetThread(This,ppatTarget)    ( (This)->lpVtbl -> GetTargetThread(This,ppatTarget) )
#define IDebugSyncOperation_Execute(This,ppunkResult)    ( (This)->lpVtbl -> Execute(This,ppunkResult) )
#define IDebugSyncOperation_InProgressAbort(This)    ( (This)->lpVtbl -> InProgressAbort(This) )
#endif
#endif
#ifndef __IDebugAsyncOperation_INTERFACE_DEFINED__
#define __IDebugAsyncOperation_INTERFACE_DEFINED__
extern const IID IID_IDebugAsyncOperation;
typedef struct IDebugAsyncOperationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDebugAsyncOperation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDebugAsyncOperation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDebugAsyncOperation * This);
	HRESULT(STDMETHODCALLTYPE * GetSyncDebugOperation) (IDebugAsyncOperation * This, IDebugSyncOperation ** ppsdo);
	HRESULT(STDMETHODCALLTYPE * Start) (IDebugAsyncOperation * This, IDebugAsyncOperationCallBack * padocb);
	HRESULT(STDMETHODCALLTYPE * Abort) (IDebugAsyncOperation * This);
	HRESULT(STDMETHODCALLTYPE * QueryIsComplete) (IDebugAsyncOperation * This);
	HRESULT(STDMETHODCALLTYPE * GetResult) (IDebugAsyncOperation * This, HRESULT * phrResult, IUnknown ** ppunkResult);
	END_INTERFACE
}  IDebugAsyncOperationVtbl;
interface IDebugAsyncOperation
{
	CONST_VTBL struct IDebugAsyncOperationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugAsyncOperation_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugAsyncOperation_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugAsyncOperation_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugAsyncOperation_GetSyncDebugOperation(This,ppsdo)    ( (This)->lpVtbl -> GetSyncDebugOperation(This,ppsdo) )
#define IDebugAsyncOperation_Start(This,padocb)    ( (This)->lpVtbl -> Start(This,padocb) )
#define IDebugAsyncOperation_Abort(This)    ( (This)->lpVtbl -> Abort(This) )
#define IDebugAsyncOperation_QueryIsComplete(This)    ( (This)->lpVtbl -> QueryIsComplete(This) )
#define IDebugAsyncOperation_GetResult(This,phrResult,ppunkResult)    ( (This)->lpVtbl -> GetResult(This,phrResult,ppunkResult) )
#endif
#endif
#ifndef __IDebugAsyncOperationCallBack_INTERFACE_DEFINED__
#define __IDebugAsyncOperationCallBack_INTERFACE_DEFINED__
extern const IID IID_IDebugAsyncOperationCallBack;
typedef struct IDebugAsyncOperationCallBackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDebugAsyncOperationCallBack * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDebugAsyncOperationCallBack * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDebugAsyncOperationCallBack * This);
	HRESULT(STDMETHODCALLTYPE * onComplete) (IDebugAsyncOperationCallBack * This);
	END_INTERFACE
}  IDebugAsyncOperationCallBackVtbl;
interface IDebugAsyncOperationCallBack
{
	CONST_VTBL struct IDebugAsyncOperationCallBackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugAsyncOperationCallBack_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugAsyncOperationCallBack_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugAsyncOperationCallBack_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugAsyncOperationCallBack_onComplete(This)    ( (This)->lpVtbl -> onComplete(This) )
#endif
#endif
#ifndef __IEnumDebugCodeContexts_INTERFACE_DEFINED__
#define __IEnumDebugCodeContexts_INTERFACE_DEFINED__
extern const IID IID_IEnumDebugCodeContexts;
typedef struct IEnumDebugCodeContextsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumDebugCodeContexts * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumDebugCodeContexts * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumDebugCodeContexts * This);
	HRESULT(__stdcall * Next) (IEnumDebugCodeContexts * This, ULONG celt, IDebugCodeContext ** pscc, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumDebugCodeContexts * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumDebugCodeContexts * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumDebugCodeContexts * This, IEnumDebugCodeContexts ** ppescc);
	END_INTERFACE
}  IEnumDebugCodeContextsVtbl;
interface IEnumDebugCodeContexts
{
	CONST_VTBL struct IEnumDebugCodeContextsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDebugCodeContexts_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDebugCodeContexts_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumDebugCodeContexts_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumDebugCodeContexts_Next(This,celt,pscc,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,pscc,pceltFetched) )
#define IEnumDebugCodeContexts_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumDebugCodeContexts_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumDebugCodeContexts_Clone(This,ppescc)    ( (This)->lpVtbl -> Clone(This,ppescc) )
#endif
HRESULT __stdcall IEnumDebugCodeContexts_RemoteNext_Proxy(IEnumDebugCodeContexts *This, ULONG celt, IDebugCodeContext **pscc, ULONG *pceltFetched);
void __RPC_STUB IEnumDebugCodeContexts_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
typedef struct tagDebugStackFrameDescriptor
{
	IDebugStackFrame *pdsf;
	DWORD dwMin;
	DWORD dwLim;
	BOOL fFinal;
	IUnknown *punkFinal;
} DebugStackFrameDescriptor;
typedef struct tagDebugStackFrameDescriptor64
{
	IDebugStackFrame *pdsf;
	DWORDLONG dwMin;
	DWORDLONG dwLim;
	BOOL fFinal;
	IUnknown *punkFinal;
} DebugStackFrameDescriptor64;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0018_v0_0_s_ifspec;
#ifndef __IEnumDebugStackFrames_INTERFACE_DEFINED__
#define __IEnumDebugStackFrames_INTERFACE_DEFINED__
extern const IID IID_IEnumDebugStackFrames;
typedef struct IEnumDebugStackFramesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumDebugStackFrames *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumDebugStackFrames *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumDebugStackFrames *This);
	HRESULT(__stdcall *Next) (IEnumDebugStackFrames *This, ULONG celt, DebugStackFrameDescriptor *prgdsfd, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumDebugStackFrames *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumDebugStackFrames *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumDebugStackFrames *This, IEnumDebugStackFrames **ppedsf);
	END_INTERFACE
}  IEnumDebugStackFramesVtbl;
interface IEnumDebugStackFrames
{
	CONST_VTBL struct IEnumDebugStackFramesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDebugStackFrames_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDebugStackFrames_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumDebugStackFrames_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumDebugStackFrames_Next(This,celt,prgdsfd,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,prgdsfd,pceltFetched) )
#define IEnumDebugStackFrames_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumDebugStackFrames_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumDebugStackFrames_Clone(This,ppedsf)    ( (This)->lpVtbl -> Clone(This,ppedsf) )
#endif
HRESULT __stdcall IEnumDebugStackFrames_RemoteNext_Proxy(IEnumDebugStackFrames *This, ULONG celt, DebugStackFrameDescriptor *prgdsfd, ULONG *pceltFetched);
void __RPC_STUB IEnumDebugStackFrames_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumDebugStackFrames64_INTERFACE_DEFINED__
#define __IEnumDebugStackFrames64_INTERFACE_DEFINED__
extern const IID IID_IEnumDebugStackFrames64;
typedef struct IEnumDebugStackFrames64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumDebugStackFrames64 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumDebugStackFrames64 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumDebugStackFrames64 *This);
	HRESULT(__stdcall *Next) (IEnumDebugStackFrames64 *This, ULONG celt, DebugStackFrameDescriptor *prgdsfd, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumDebugStackFrames64 *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumDebugStackFrames64 *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumDebugStackFrames64 *This, IEnumDebugStackFrames **ppedsf);
	HRESULT(__stdcall *Next64) (IEnumDebugStackFrames64 *This, ULONG celt, DebugStackFrameDescriptor64 *prgdsfd, ULONG *pceltFetched);
	END_INTERFACE
}  IEnumDebugStackFrames64Vtbl;
interface IEnumDebugStackFrames64
{
	CONST_VTBL struct IEnumDebugStackFrames64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDebugStackFrames64_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDebugStackFrames64_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumDebugStackFrames64_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumDebugStackFrames64_Next(This,celt,prgdsfd,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,prgdsfd,pceltFetched) )
#define IEnumDebugStackFrames64_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumDebugStackFrames64_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumDebugStackFrames64_Clone(This,ppedsf)    ( (This)->lpVtbl -> Clone(This,ppedsf) )
#define IEnumDebugStackFrames64_Next64(This,celt,prgdsfd,pceltFetched)    ( (This)->lpVtbl -> Next64(This,celt,prgdsfd,pceltFetched) )
#endif
HRESULT __stdcall IEnumDebugStackFrames64_RemoteNext64_Proxy(IEnumDebugStackFrames64 *This, ULONG celt, DebugStackFrameDescriptor64 *prgdsfd, ULONG *pceltFetched);
void __RPC_STUB IEnumDebugStackFrames64_RemoteNext64_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IDebugDocumentInfo_INTERFACE_DEFINED__
#define __IDebugDocumentInfo_INTERFACE_DEFINED__
extern const IID IID_IDebugDocumentInfo;
typedef struct IDebugDocumentInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugDocumentInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugDocumentInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugDocumentInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (IDebugDocumentInfo *This, DOCUMENTNAMETYPE dnt, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *GetDocumentClassId) (IDebugDocumentInfo *This, CLSID *pclsidDocument);
	END_INTERFACE
}  IDebugDocumentInfoVtbl;
interface IDebugDocumentInfo
{
	CONST_VTBL struct IDebugDocumentInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugDocumentInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugDocumentInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugDocumentInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugDocumentInfo_GetName(This,dnt,pbstrName)    ( (This)->lpVtbl -> GetName(This,dnt,pbstrName) )
#define IDebugDocumentInfo_GetDocumentClassId(This,pclsidDocument)    ( (This)->lpVtbl -> GetDocumentClassId(This,pclsidDocument) )
#endif
#endif
#ifndef __IDebugDocumentProvider_INTERFACE_DEFINED__
#define __IDebugDocumentProvider_INTERFACE_DEFINED__
extern const IID IID_IDebugDocumentProvider;
typedef struct IDebugDocumentProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugDocumentProvider *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugDocumentProvider *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugDocumentProvider *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (IDebugDocumentProvider *This, DOCUMENTNAMETYPE dnt, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *GetDocumentClassId) (IDebugDocumentProvider *This, CLSID *pclsidDocument);
	HRESULT(STDMETHODCALLTYPE *GetDocument) (IDebugDocumentProvider *This, IDebugDocument **ppssd);
	END_INTERFACE
}  IDebugDocumentProviderVtbl;
interface IDebugDocumentProvider
{
	CONST_VTBL struct IDebugDocumentProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugDocumentProvider_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugDocumentProvider_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugDocumentProvider_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugDocumentProvider_GetName(This,dnt,pbstrName)    ( (This)->lpVtbl -> GetName(This,dnt,pbstrName) )
#define IDebugDocumentProvider_GetDocumentClassId(This,pclsidDocument)    ( (This)->lpVtbl -> GetDocumentClassId(This,pclsidDocument) )
#define IDebugDocumentProvider_GetDocument(This,ppssd)    ( (This)->lpVtbl -> GetDocument(This,ppssd) )
#endif
#endif
#ifndef __IDebugDocument_INTERFACE_DEFINED__
#define __IDebugDocument_INTERFACE_DEFINED__
extern const IID IID_IDebugDocument;
typedef struct IDebugDocumentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugDocument *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugDocument *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugDocument *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (IDebugDocument *This, DOCUMENTNAMETYPE dnt, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *GetDocumentClassId) (IDebugDocument *This, CLSID *pclsidDocument);
	END_INTERFACE
}  IDebugDocumentVtbl;
interface IDebugDocument
{
	CONST_VTBL struct IDebugDocumentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugDocument_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugDocument_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugDocument_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugDocument_GetName(This,dnt,pbstrName)    ( (This)->lpVtbl -> GetName(This,dnt,pbstrName) )
#define IDebugDocument_GetDocumentClassId(This,pclsidDocument)    ( (This)->lpVtbl -> GetDocumentClassId(This,pclsidDocument) )
#endif
#endif
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0023_v0_0_s_ifspec;
#ifndef __IDebugDocumentText_INTERFACE_DEFINED__
#define __IDebugDocumentText_INTERFACE_DEFINED__
extern const IID IID_IDebugDocumentText;
typedef struct IDebugDocumentTextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugDocumentText *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugDocumentText *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugDocumentText *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (IDebugDocumentText *This, DOCUMENTNAMETYPE dnt, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *GetDocumentClassId) (IDebugDocumentText *This, CLSID *pclsidDocument);
	HRESULT(STDMETHODCALLTYPE *GetDocumentAttributes) (IDebugDocumentText *This, TEXT_DOC_ATTR *ptextdocattr);
	HRESULT(STDMETHODCALLTYPE *GetSize) (IDebugDocumentText *This, ULONG *pcNumLines, ULONG *pcNumChars);
	HRESULT(STDMETHODCALLTYPE *GetPositionOfLine) (IDebugDocumentText *This, ULONG cLineNumber, ULONG *pcCharacterPosition);
	HRESULT(STDMETHODCALLTYPE *GetLineOfPosition) (IDebugDocumentText *This, ULONG cCharacterPosition, ULONG *pcLineNumber, ULONG *pcCharacterOffsetInLine);
	HRESULT(STDMETHODCALLTYPE *GetText) (IDebugDocumentText *This, ULONG cCharacterPosition, WCHAR *pcharText, SOURCE_TEXT_ATTR *pstaTextAttr, ULONG *pcNumChars, ULONG cMaxChars);
	HRESULT(STDMETHODCALLTYPE *GetPositionOfContext) (IDebugDocumentText *This, IDebugDocumentContext *psc, ULONG *pcCharacterPosition, ULONG *cNumChars);
	HRESULT(STDMETHODCALLTYPE *GetContextOfPosition) (IDebugDocumentText *This, ULONG cCharacterPosition, ULONG cNumChars, IDebugDocumentContext **ppsc);
	END_INTERFACE
}  IDebugDocumentTextVtbl;
interface IDebugDocumentText
{
	CONST_VTBL struct IDebugDocumentTextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugDocumentText_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugDocumentText_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugDocumentText_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugDocumentText_GetName(This,dnt,pbstrName)    ( (This)->lpVtbl -> GetName(This,dnt,pbstrName) )
#define IDebugDocumentText_GetDocumentClassId(This,pclsidDocument)    ( (This)->lpVtbl -> GetDocumentClassId(This,pclsidDocument) )
#define IDebugDocumentText_GetDocumentAttributes(This,ptextdocattr)    ( (This)->lpVtbl -> GetDocumentAttributes(This,ptextdocattr) )
#define IDebugDocumentText_GetSize(This,pcNumLines,pcNumChars)    ( (This)->lpVtbl -> GetSize(This,pcNumLines,pcNumChars) )
#define IDebugDocumentText_GetPositionOfLine(This,cLineNumber,pcCharacterPosition)    ( (This)->lpVtbl -> GetPositionOfLine(This,cLineNumber,pcCharacterPosition) )
#define IDebugDocumentText_GetLineOfPosition(This,cCharacterPosition,pcLineNumber,pcCharacterOffsetInLine)    ( (This)->lpVtbl -> GetLineOfPosition(This,cCharacterPosition,pcLineNumber,pcCharacterOffsetInLine) )
#define IDebugDocumentText_GetText(This,cCharacterPosition,pcharText,pstaTextAttr,pcNumChars,cMaxChars)    ( (This)->lpVtbl -> GetText(This,cCharacterPosition,pcharText,pstaTextAttr,pcNumChars,cMaxChars) )
#define IDebugDocumentText_GetPositionOfContext(This,psc,pcCharacterPosition,cNumChars)    ( (This)->lpVtbl -> GetPositionOfContext(This,psc,pcCharacterPosition,cNumChars) )
#define IDebugDocumentText_GetContextOfPosition(This,cCharacterPosition,cNumChars,ppsc)    ( (This)->lpVtbl -> GetContextOfPosition(This,cCharacterPosition,cNumChars,ppsc) )
#endif
#endif
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0024_v0_0_s_ifspec;
#ifndef __IDebugDocumentTextEvents_INTERFACE_DEFINED__
#define __IDebugDocumentTextEvents_INTERFACE_DEFINED__
extern const IID IID_IDebugDocumentTextEvents;
typedef struct IDebugDocumentTextEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugDocumentTextEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugDocumentTextEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugDocumentTextEvents *This);
	HRESULT(STDMETHODCALLTYPE *onDestroy) (IDebugDocumentTextEvents *This);
	HRESULT(STDMETHODCALLTYPE *onInsertText) (IDebugDocumentTextEvents *This, ULONG cCharacterPosition, ULONG cNumToInsert);
	HRESULT(STDMETHODCALLTYPE *onRemoveText) (IDebugDocumentTextEvents *This, ULONG cCharacterPosition, ULONG cNumToRemove);
	HRESULT(STDMETHODCALLTYPE *onReplaceText) (IDebugDocumentTextEvents *This, ULONG cCharacterPosition, ULONG cNumToReplace);
	HRESULT(STDMETHODCALLTYPE *onUpdateTextAttributes) (IDebugDocumentTextEvents *This, ULONG cCharacterPosition, ULONG cNumToUpdate);
	HRESULT(STDMETHODCALLTYPE *onUpdateDocumentAttributes) (IDebugDocumentTextEvents *This, TEXT_DOC_ATTR textdocattr);
	END_INTERFACE
}  IDebugDocumentTextEventsVtbl;
interface IDebugDocumentTextEvents
{
	CONST_VTBL struct IDebugDocumentTextEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugDocumentTextEvents_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugDocumentTextEvents_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugDocumentTextEvents_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugDocumentTextEvents_onDestroy(This)    ( (This)->lpVtbl -> onDestroy(This) )
#define IDebugDocumentTextEvents_onInsertText(This,cCharacterPosition,cNumToInsert)    ( (This)->lpVtbl -> onInsertText(This,cCharacterPosition,cNumToInsert) )
#define IDebugDocumentTextEvents_onRemoveText(This,cCharacterPosition,cNumToRemove)    ( (This)->lpVtbl -> onRemoveText(This,cCharacterPosition,cNumToRemove) )
#define IDebugDocumentTextEvents_onReplaceText(This,cCharacterPosition,cNumToReplace)    ( (This)->lpVtbl -> onReplaceText(This,cCharacterPosition,cNumToReplace) )
#define IDebugDocumentTextEvents_onUpdateTextAttributes(This,cCharacterPosition,cNumToUpdate)    ( (This)->lpVtbl -> onUpdateTextAttributes(This,cCharacterPosition,cNumToUpdate) )
#define IDebugDocumentTextEvents_onUpdateDocumentAttributes(This,textdocattr)    ( (This)->lpVtbl -> onUpdateDocumentAttributes(This,textdocattr) )
#endif
#endif
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0025_v0_0_s_ifspec;
#ifndef __IDebugDocumentTextAuthor_INTERFACE_DEFINED__
#define __IDebugDocumentTextAuthor_INTERFACE_DEFINED__
extern const IID IID_IDebugDocumentTextAuthor;
typedef struct IDebugDocumentTextAuthorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugDocumentTextAuthor *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugDocumentTextAuthor *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugDocumentTextAuthor *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (IDebugDocumentTextAuthor *This, DOCUMENTNAMETYPE dnt, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *GetDocumentClassId) (IDebugDocumentTextAuthor *This, CLSID *pclsidDocument);
	HRESULT(STDMETHODCALLTYPE *GetDocumentAttributes) (IDebugDocumentTextAuthor *This, TEXT_DOC_ATTR *ptextdocattr);
	HRESULT(STDMETHODCALLTYPE *GetSize) (IDebugDocumentTextAuthor *This, ULONG *pcNumLines, ULONG *pcNumChars);
	HRESULT(STDMETHODCALLTYPE *GetPositionOfLine) (IDebugDocumentTextAuthor *This, ULONG cLineNumber, ULONG *pcCharacterPosition);
	HRESULT(STDMETHODCALLTYPE *GetLineOfPosition) (IDebugDocumentTextAuthor *This, ULONG cCharacterPosition, ULONG *pcLineNumber, ULONG *pcCharacterOffsetInLine);
	HRESULT(STDMETHODCALLTYPE *GetText) (IDebugDocumentTextAuthor *This, ULONG cCharacterPosition, WCHAR *pcharText, SOURCE_TEXT_ATTR *pstaTextAttr, ULONG *pcNumChars, ULONG cMaxChars);
	HRESULT(STDMETHODCALLTYPE *GetPositionOfContext) (IDebugDocumentTextAuthor *This, IDebugDocumentContext *psc, ULONG *pcCharacterPosition, ULONG *cNumChars);
	HRESULT(STDMETHODCALLTYPE *GetContextOfPosition) (IDebugDocumentTextAuthor *This, ULONG cCharacterPosition, ULONG cNumChars, IDebugDocumentContext **ppsc);
	HRESULT(STDMETHODCALLTYPE *InsertText) (IDebugDocumentTextAuthor *This, ULONG cCharacterPosition, ULONG cNumToInsert, OLECHAR pcharText[]);
	HRESULT(STDMETHODCALLTYPE *RemoveText) (IDebugDocumentTextAuthor *This, ULONG cCharacterPosition, ULONG cNumToRemove);
	HRESULT(STDMETHODCALLTYPE *ReplaceText) (IDebugDocumentTextAuthor *This, ULONG cCharacterPosition, ULONG cNumToReplace, OLECHAR pcharText[]);
	END_INTERFACE
}  IDebugDocumentTextAuthorVtbl;
interface IDebugDocumentTextAuthor
{
	CONST_VTBL struct IDebugDocumentTextAuthorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugDocumentTextAuthor_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugDocumentTextAuthor_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugDocumentTextAuthor_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugDocumentTextAuthor_GetName(This,dnt,pbstrName)    ( (This)->lpVtbl -> GetName(This,dnt,pbstrName) )
#define IDebugDocumentTextAuthor_GetDocumentClassId(This,pclsidDocument)    ( (This)->lpVtbl -> GetDocumentClassId(This,pclsidDocument) )
#define IDebugDocumentTextAuthor_GetDocumentAttributes(This,ptextdocattr)    ( (This)->lpVtbl -> GetDocumentAttributes(This,ptextdocattr) )
#define IDebugDocumentTextAuthor_GetSize(This,pcNumLines,pcNumChars)    ( (This)->lpVtbl -> GetSize(This,pcNumLines,pcNumChars) )
#define IDebugDocumentTextAuthor_GetPositionOfLine(This,cLineNumber,pcCharacterPosition)    ( (This)->lpVtbl -> GetPositionOfLine(This,cLineNumber,pcCharacterPosition) )
#define IDebugDocumentTextAuthor_GetLineOfPosition(This,cCharacterPosition,pcLineNumber,pcCharacterOffsetInLine)    ( (This)->lpVtbl -> GetLineOfPosition(This,cCharacterPosition,pcLineNumber,pcCharacterOffsetInLine) )
#define IDebugDocumentTextAuthor_GetText(This,cCharacterPosition,pcharText,pstaTextAttr,pcNumChars,cMaxChars)    ( (This)->lpVtbl -> GetText(This,cCharacterPosition,pcharText,pstaTextAttr,pcNumChars,cMaxChars) )
#define IDebugDocumentTextAuthor_GetPositionOfContext(This,psc,pcCharacterPosition,cNumChars)    ( (This)->lpVtbl -> GetPositionOfContext(This,psc,pcCharacterPosition,cNumChars) )
#define IDebugDocumentTextAuthor_GetContextOfPosition(This,cCharacterPosition,cNumChars,ppsc)    ( (This)->lpVtbl -> GetContextOfPosition(This,cCharacterPosition,cNumChars,ppsc) )
#define IDebugDocumentTextAuthor_InsertText(This,cCharacterPosition,cNumToInsert,pcharText)    ( (This)->lpVtbl -> InsertText(This,cCharacterPosition,cNumToInsert,pcharText) )
#define IDebugDocumentTextAuthor_RemoveText(This,cCharacterPosition,cNumToRemove)    ( (This)->lpVtbl -> RemoveText(This,cCharacterPosition,cNumToRemove) )
#define IDebugDocumentTextAuthor_ReplaceText(This,cCharacterPosition,cNumToReplace,pcharText)    ( (This)->lpVtbl -> ReplaceText(This,cCharacterPosition,cNumToReplace,pcharText) )
#endif
#endif
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0026_v0_0_s_ifspec;
#ifndef __IDebugDocumentTextExternalAuthor_INTERFACE_DEFINED__
#define __IDebugDocumentTextExternalAuthor_INTERFACE_DEFINED__
extern const IID IID_IDebugDocumentTextExternalAuthor;
typedef struct IDebugDocumentTextExternalAuthorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugDocumentTextExternalAuthor *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugDocumentTextExternalAuthor *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugDocumentTextExternalAuthor *This);
	HRESULT(STDMETHODCALLTYPE *GetPathName) (IDebugDocumentTextExternalAuthor *This, BSTR *pbstrLongName, BOOL *pfIsOriginalFile);
	HRESULT(STDMETHODCALLTYPE *GetFileName) (IDebugDocumentTextExternalAuthor *This, BSTR *pbstrShortName);
	HRESULT(STDMETHODCALLTYPE *NotifyChanged) (IDebugDocumentTextExternalAuthor *This);
	END_INTERFACE
}  IDebugDocumentTextExternalAuthorVtbl;
interface IDebugDocumentTextExternalAuthor
{
	CONST_VTBL struct IDebugDocumentTextExternalAuthorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugDocumentTextExternalAuthor_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugDocumentTextExternalAuthor_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugDocumentTextExternalAuthor_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugDocumentTextExternalAuthor_GetPathName(This,pbstrLongName,pfIsOriginalFile)    ( (This)->lpVtbl -> GetPathName(This,pbstrLongName,pfIsOriginalFile) )
#define IDebugDocumentTextExternalAuthor_GetFileName(This,pbstrShortName)    ( (This)->lpVtbl -> GetFileName(This,pbstrShortName) )
#define IDebugDocumentTextExternalAuthor_NotifyChanged(This)    ( (This)->lpVtbl -> NotifyChanged(This) )
#endif
#endif
#ifndef DISABLE_ACTIVDBG_INTERFACE_WRAPPERS
#ifdef _WIN64
#define IDebugDocumentHelper IDebugDocumentHelper64
#define IID_IDebugDocumentHelper IID_IDebugDocumentHelper64
#else
#define IDebugDocumentHelper IDebugDocumentHelper32
#define IID_IDebugDocumentHelper IID_IDebugDocumentHelper32
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0027_v0_0_s_ifspec;
#ifndef __IDebugDocumentHelper32_INTERFACE_DEFINED__
#define __IDebugDocumentHelper32_INTERFACE_DEFINED__
extern const IID IID_IDebugDocumentHelper32;
typedef struct IDebugDocumentHelper32Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugDocumentHelper32 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugDocumentHelper32 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugDocumentHelper32 *This);
	HRESULT(STDMETHODCALLTYPE *Init) (IDebugDocumentHelper32 *This, IDebugApplication32 *pda, LPCOLESTR pszShortName, LPCOLESTR pszLongName, TEXT_DOC_ATTR docAttr);
	HRESULT(STDMETHODCALLTYPE *Attach) (IDebugDocumentHelper32 *This, IDebugDocumentHelper32 *pddhParent);
	HRESULT(STDMETHODCALLTYPE *Detach) (IDebugDocumentHelper32 *This);
	HRESULT(STDMETHODCALLTYPE *AddUnicodeText) (IDebugDocumentHelper32 *This, LPCOLESTR pszText);
	HRESULT(STDMETHODCALLTYPE *AddDBCSText) (IDebugDocumentHelper32 *This, LPCSTR pszText);
	HRESULT(STDMETHODCALLTYPE *SetDebugDocumentHost) (IDebugDocumentHelper32 *This, IDebugDocumentHost *pddh);
	HRESULT(STDMETHODCALLTYPE *AddDeferredText) (IDebugDocumentHelper32 *This, ULONG cChars, DWORD dwTextStartCookie);
	HRESULT(STDMETHODCALLTYPE *DefineScriptBlock) (IDebugDocumentHelper32 *This, ULONG ulCharOffset, ULONG cChars, IActiveScript *pas, BOOL fScriptlet, DWORD *pdwSourceContext);
	HRESULT(STDMETHODCALLTYPE *SetDefaultTextAttr) (IDebugDocumentHelper32 *This, SOURCE_TEXT_ATTR staTextAttr);
	HRESULT(STDMETHODCALLTYPE *SetTextAttributes) (IDebugDocumentHelper32 *This, ULONG ulCharOffset, ULONG cChars, SOURCE_TEXT_ATTR *pstaTextAttr);
	HRESULT(STDMETHODCALLTYPE *SetLongName) (IDebugDocumentHelper32 *This, LPCOLESTR pszLongName);
	HRESULT(STDMETHODCALLTYPE *SetShortName) (IDebugDocumentHelper32 *This, LPCOLESTR pszShortName);
	HRESULT(STDMETHODCALLTYPE *SetDocumentAttr) (IDebugDocumentHelper32 *This, TEXT_DOC_ATTR pszAttributes);
	HRESULT(STDMETHODCALLTYPE *GetDebugApplicationNode) (IDebugDocumentHelper32 *This, IDebugApplicationNode **ppdan);
	HRESULT(STDMETHODCALLTYPE *GetScriptBlockInfo) (IDebugDocumentHelper32 *This, DWORD dwSourceContext, IActiveScript **ppasd, ULONG *piCharPos, ULONG *pcChars);
	HRESULT(STDMETHODCALLTYPE *CreateDebugDocumentContext) (IDebugDocumentHelper32 *This, ULONG iCharPos, ULONG cChars, IDebugDocumentContext **ppddc);
	HRESULT(STDMETHODCALLTYPE *BringDocumentToTop) (IDebugDocumentHelper32 *This);
	HRESULT(STDMETHODCALLTYPE *BringDocumentContextToTop) (IDebugDocumentHelper32 *This, IDebugDocumentContext *pddc);
	END_INTERFACE
}  IDebugDocumentHelper32Vtbl;
interface IDebugDocumentHelper32
{
	CONST_VTBL struct IDebugDocumentHelper32Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugDocumentHelper32_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugDocumentHelper32_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugDocumentHelper32_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugDocumentHelper32_Init(This,pda,pszShortName,pszLongName,docAttr)    ( (This)->lpVtbl -> Init(This,pda,pszShortName,pszLongName,docAttr) )
#define IDebugDocumentHelper32_Attach(This,pddhParent)    ( (This)->lpVtbl -> Attach(This,pddhParent) )
#define IDebugDocumentHelper32_Detach(This)    ( (This)->lpVtbl -> Detach(This) )
#define IDebugDocumentHelper32_AddUnicodeText(This,pszText)    ( (This)->lpVtbl -> AddUnicodeText(This,pszText) )
#define IDebugDocumentHelper32_AddDBCSText(This,pszText)    ( (This)->lpVtbl -> AddDBCSText(This,pszText) )
#define IDebugDocumentHelper32_SetDebugDocumentHost(This,pddh)    ( (This)->lpVtbl -> SetDebugDocumentHost(This,pddh) )
#define IDebugDocumentHelper32_AddDeferredText(This,cChars,dwTextStartCookie)    ( (This)->lpVtbl -> AddDeferredText(This,cChars,dwTextStartCookie) )
#define IDebugDocumentHelper32_DefineScriptBlock(This,ulCharOffset,cChars,pas,fScriptlet,pdwSourceContext)    ( (This)->lpVtbl -> DefineScriptBlock(This,ulCharOffset,cChars,pas,fScriptlet,pdwSourceContext) )
#define IDebugDocumentHelper32_SetDefaultTextAttr(This,staTextAttr)    ( (This)->lpVtbl -> SetDefaultTextAttr(This,staTextAttr) )
#define IDebugDocumentHelper32_SetTextAttributes(This,ulCharOffset,cChars,pstaTextAttr)    ( (This)->lpVtbl -> SetTextAttributes(This,ulCharOffset,cChars,pstaTextAttr) )
#define IDebugDocumentHelper32_SetLongName(This,pszLongName)    ( (This)->lpVtbl -> SetLongName(This,pszLongName) )
#define IDebugDocumentHelper32_SetShortName(This,pszShortName)    ( (This)->lpVtbl -> SetShortName(This,pszShortName) )
#define IDebugDocumentHelper32_SetDocumentAttr(This,pszAttributes)    ( (This)->lpVtbl -> SetDocumentAttr(This,pszAttributes) )
#define IDebugDocumentHelper32_GetDebugApplicationNode(This,ppdan)    ( (This)->lpVtbl -> GetDebugApplicationNode(This,ppdan) )
#define IDebugDocumentHelper32_GetScriptBlockInfo(This,dwSourceContext,ppasd,piCharPos,pcChars)    ( (This)->lpVtbl -> GetScriptBlockInfo(This,dwSourceContext,ppasd,piCharPos,pcChars) )
#define IDebugDocumentHelper32_CreateDebugDocumentContext(This,iCharPos,cChars,ppddc)    ( (This)->lpVtbl -> CreateDebugDocumentContext(This,iCharPos,cChars,ppddc) )
#define IDebugDocumentHelper32_BringDocumentToTop(This)    ( (This)->lpVtbl -> BringDocumentToTop(This) )
#define IDebugDocumentHelper32_BringDocumentContextToTop(This,pddc)    ( (This)->lpVtbl -> BringDocumentContextToTop(This,pddc) )
#endif
#endif
#ifndef __IDebugDocumentHelper64_INTERFACE_DEFINED__
#define __IDebugDocumentHelper64_INTERFACE_DEFINED__
extern const IID IID_IDebugDocumentHelper64;
typedef struct IDebugDocumentHelper64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugDocumentHelper64 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugDocumentHelper64 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugDocumentHelper64 *This);
	HRESULT(STDMETHODCALLTYPE *Init) (IDebugDocumentHelper64 *This, IDebugApplication64 *pda, LPCOLESTR pszShortName, LPCOLESTR pszLongName, TEXT_DOC_ATTR docAttr);
	HRESULT(STDMETHODCALLTYPE *Attach) (IDebugDocumentHelper64 *This, IDebugDocumentHelper64 *pddhParent);
	HRESULT(STDMETHODCALLTYPE *Detach) (IDebugDocumentHelper64 *This);
	HRESULT(STDMETHODCALLTYPE *AddUnicodeText) (IDebugDocumentHelper64 *This, LPCOLESTR pszText);
	HRESULT(STDMETHODCALLTYPE *AddDBCSText) (IDebugDocumentHelper64 *This, LPCSTR pszText);
	HRESULT(STDMETHODCALLTYPE *SetDebugDocumentHost) (IDebugDocumentHelper64 *This, IDebugDocumentHost *pddh);
	HRESULT(STDMETHODCALLTYPE *AddDeferredText) (IDebugDocumentHelper64 *This, ULONG cChars, DWORD dwTextStartCookie);
	HRESULT(STDMETHODCALLTYPE *DefineScriptBlock) (IDebugDocumentHelper64 *This, ULONG ulCharOffset, ULONG cChars, IActiveScript *pas, BOOL fScriptlet, DWORDLONG *pdwSourceContext);
	HRESULT(STDMETHODCALLTYPE *SetDefaultTextAttr) (IDebugDocumentHelper64 *This, SOURCE_TEXT_ATTR staTextAttr);
	HRESULT(STDMETHODCALLTYPE *SetTextAttributes) (IDebugDocumentHelper64 *This, ULONG ulCharOffset, ULONG cChars, SOURCE_TEXT_ATTR *pstaTextAttr);
	HRESULT(STDMETHODCALLTYPE *SetLongName) (IDebugDocumentHelper64 *This, LPCOLESTR pszLongName);
	HRESULT(STDMETHODCALLTYPE *SetShortName) (IDebugDocumentHelper64 *This, LPCOLESTR pszShortName);
	HRESULT(STDMETHODCALLTYPE *SetDocumentAttr) (IDebugDocumentHelper64 *This, TEXT_DOC_ATTR pszAttributes);
	HRESULT(STDMETHODCALLTYPE *GetDebugApplicationNode) (IDebugDocumentHelper64 *This, IDebugApplicationNode **ppdan);
	HRESULT(STDMETHODCALLTYPE *GetScriptBlockInfo) (IDebugDocumentHelper64 *This, DWORDLONG dwSourceContext, IActiveScript **ppasd, ULONG *piCharPos, ULONG *pcChars);
	HRESULT(STDMETHODCALLTYPE *CreateDebugDocumentContext) (IDebugDocumentHelper64 *This, ULONG iCharPos, ULONG cChars, IDebugDocumentContext **ppddc);
	HRESULT(STDMETHODCALLTYPE *BringDocumentToTop) (IDebugDocumentHelper64 *This);
	HRESULT(STDMETHODCALLTYPE *BringDocumentContextToTop) (IDebugDocumentHelper64 *This, IDebugDocumentContext *pddc);
	END_INTERFACE
}  IDebugDocumentHelper64Vtbl;
interface IDebugDocumentHelper64
{
	CONST_VTBL struct IDebugDocumentHelper64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugDocumentHelper64_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugDocumentHelper64_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugDocumentHelper64_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugDocumentHelper64_Init(This,pda,pszShortName,pszLongName,docAttr)    ( (This)->lpVtbl -> Init(This,pda,pszShortName,pszLongName,docAttr) )
#define IDebugDocumentHelper64_Attach(This,pddhParent)    ( (This)->lpVtbl -> Attach(This,pddhParent) )
#define IDebugDocumentHelper64_Detach(This)    ( (This)->lpVtbl -> Detach(This) )
#define IDebugDocumentHelper64_AddUnicodeText(This,pszText)    ( (This)->lpVtbl -> AddUnicodeText(This,pszText) )
#define IDebugDocumentHelper64_AddDBCSText(This,pszText)    ( (This)->lpVtbl -> AddDBCSText(This,pszText) )
#define IDebugDocumentHelper64_SetDebugDocumentHost(This,pddh)    ( (This)->lpVtbl -> SetDebugDocumentHost(This,pddh) )
#define IDebugDocumentHelper64_AddDeferredText(This,cChars,dwTextStartCookie)    ( (This)->lpVtbl -> AddDeferredText(This,cChars,dwTextStartCookie) )
#define IDebugDocumentHelper64_DefineScriptBlock(This,ulCharOffset,cChars,pas,fScriptlet,pdwSourceContext)    ( (This)->lpVtbl -> DefineScriptBlock(This,ulCharOffset,cChars,pas,fScriptlet,pdwSourceContext) )
#define IDebugDocumentHelper64_SetDefaultTextAttr(This,staTextAttr)    ( (This)->lpVtbl -> SetDefaultTextAttr(This,staTextAttr) )
#define IDebugDocumentHelper64_SetTextAttributes(This,ulCharOffset,cChars,pstaTextAttr)    ( (This)->lpVtbl -> SetTextAttributes(This,ulCharOffset,cChars,pstaTextAttr) )
#define IDebugDocumentHelper64_SetLongName(This,pszLongName)    ( (This)->lpVtbl -> SetLongName(This,pszLongName) )
#define IDebugDocumentHelper64_SetShortName(This,pszShortName)    ( (This)->lpVtbl -> SetShortName(This,pszShortName) )
#define IDebugDocumentHelper64_SetDocumentAttr(This,pszAttributes)    ( (This)->lpVtbl -> SetDocumentAttr(This,pszAttributes) )
#define IDebugDocumentHelper64_GetDebugApplicationNode(This,ppdan)    ( (This)->lpVtbl -> GetDebugApplicationNode(This,ppdan) )
#define IDebugDocumentHelper64_GetScriptBlockInfo(This,dwSourceContext,ppasd,piCharPos,pcChars)    ( (This)->lpVtbl -> GetScriptBlockInfo(This,dwSourceContext,ppasd,piCharPos,pcChars) )
#define IDebugDocumentHelper64_CreateDebugDocumentContext(This,iCharPos,cChars,ppddc)    ( (This)->lpVtbl -> CreateDebugDocumentContext(This,iCharPos,cChars,ppddc) )
#define IDebugDocumentHelper64_BringDocumentToTop(This)    ( (This)->lpVtbl -> BringDocumentToTop(This) )
#define IDebugDocumentHelper64_BringDocumentContextToTop(This,pddc)    ( (This)->lpVtbl -> BringDocumentContextToTop(This,pddc) )
#endif
#endif
#pragma warning(push)
#pragma warning(disable:28718)
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0029_v0_0_s_ifspec;
#ifndef __IDebugDocumentHost_INTERFACE_DEFINED__
#define __IDebugDocumentHost_INTERFACE_DEFINED__
extern const IID IID_IDebugDocumentHost;
typedef struct IDebugDocumentHostVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugDocumentHost *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugDocumentHost *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugDocumentHost *This);
	HRESULT(STDMETHODCALLTYPE *GetDeferredText) (IDebugDocumentHost *This, DWORD dwTextStartCookie, WCHAR *pcharText, SOURCE_TEXT_ATTR *pstaTextAttr, ULONG *pcNumChars, ULONG cMaxChars);
	HRESULT(STDMETHODCALLTYPE *GetScriptTextAttributes) (IDebugDocumentHost *This, LPCOLESTR pstrCode, ULONG uNumCodeChars, LPCOLESTR pstrDelimiter, DWORD dwFlags, SOURCE_TEXT_ATTR *pattr);
	HRESULT(STDMETHODCALLTYPE *OnCreateDocumentContext) (IDebugDocumentHost *This, IUnknown **ppunkOuter);
	HRESULT(STDMETHODCALLTYPE *GetPathName) (IDebugDocumentHost *This, BSTR *pbstrLongName, BOOL *pfIsOriginalFile);
	HRESULT(STDMETHODCALLTYPE *GetFileName) (IDebugDocumentHost *This, BSTR *pbstrShortName);
	HRESULT(STDMETHODCALLTYPE *NotifyChanged) (IDebugDocumentHost *This);
	END_INTERFACE
}  IDebugDocumentHostVtbl;
interface IDebugDocumentHost
{
	CONST_VTBL struct IDebugDocumentHostVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugDocumentHost_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugDocumentHost_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugDocumentHost_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugDocumentHost_GetDeferredText(This,dwTextStartCookie,pcharText,pstaTextAttr,pcNumChars,cMaxChars)    ( (This)->lpVtbl -> GetDeferredText(This,dwTextStartCookie,pcharText,pstaTextAttr,pcNumChars,cMaxChars) )
#define IDebugDocumentHost_GetScriptTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr)    ( (This)->lpVtbl -> GetScriptTextAttributes(This,pstrCode,uNumCodeChars,pstrDelimiter,dwFlags,pattr) )
#define IDebugDocumentHost_OnCreateDocumentContext(This,ppunkOuter)    ( (This)->lpVtbl -> OnCreateDocumentContext(This,ppunkOuter) )
#define IDebugDocumentHost_GetPathName(This,pbstrLongName,pfIsOriginalFile)    ( (This)->lpVtbl -> GetPathName(This,pbstrLongName,pfIsOriginalFile) )
#define IDebugDocumentHost_GetFileName(This,pbstrShortName)    ( (This)->lpVtbl -> GetFileName(This,pbstrShortName) )
#define IDebugDocumentHost_NotifyChanged(This)    ( (This)->lpVtbl -> NotifyChanged(This) )
#endif
#endif
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0030_v0_0_s_ifspec;
#ifndef __IDebugDocumentContext_INTERFACE_DEFINED__
#define __IDebugDocumentContext_INTERFACE_DEFINED__
extern const IID IID_IDebugDocumentContext;
typedef struct IDebugDocumentContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugDocumentContext *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugDocumentContext *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugDocumentContext *This);
	HRESULT(STDMETHODCALLTYPE *GetDocument) (IDebugDocumentContext *This, IDebugDocument **ppsd);
	HRESULT(STDMETHODCALLTYPE *EnumCodeContexts) (IDebugDocumentContext *This, IEnumDebugCodeContexts **ppescc);
	END_INTERFACE
}  IDebugDocumentContextVtbl;
interface IDebugDocumentContext
{
	CONST_VTBL struct IDebugDocumentContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugDocumentContext_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugDocumentContext_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugDocumentContext_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugDocumentContext_GetDocument(This,ppsd)    ( (This)->lpVtbl -> GetDocument(This,ppsd) )
#define IDebugDocumentContext_EnumCodeContexts(This,ppescc)    ( (This)->lpVtbl -> EnumCodeContexts(This,ppescc) )
#endif
#endif
#ifndef __IDebugSessionProvider_INTERFACE_DEFINED__
#define __IDebugSessionProvider_INTERFACE_DEFINED__
extern const IID IID_IDebugSessionProvider;
typedef struct IDebugSessionProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugSessionProvider *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugSessionProvider *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugSessionProvider *This);
	HRESULT(STDMETHODCALLTYPE *StartDebugSession) (IDebugSessionProvider *This, IRemoteDebugApplication *pda);
	END_INTERFACE
}  IDebugSessionProviderVtbl;
interface IDebugSessionProvider
{
	CONST_VTBL struct IDebugSessionProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugSessionProvider_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugSessionProvider_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugSessionProvider_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugSessionProvider_StartDebugSession(This,pda)    ( (This)->lpVtbl -> StartDebugSession(This,pda) )
#endif
#endif
#ifndef __IApplicationDebugger_INTERFACE_DEFINED__
#define __IApplicationDebugger_INTERFACE_DEFINED__
extern const IID IID_IApplicationDebugger;
typedef struct IApplicationDebuggerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IApplicationDebugger *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IApplicationDebugger *This);
	ULONG(STDMETHODCALLTYPE *Release) (IApplicationDebugger *This);
	HRESULT(STDMETHODCALLTYPE *QueryAlive) (IApplicationDebugger *This);
	HRESULT(STDMETHODCALLTYPE *CreateInstanceAtDebugger) (IApplicationDebugger *This, REFCLSID rclsid, IUnknown *pUnkOuter, DWORD dwClsContext, REFIID riid, IUnknown **ppvObject);
	HRESULT(STDMETHODCALLTYPE *onDebugOutput) (IApplicationDebugger *This, LPCOLESTR pstr);
	HRESULT(STDMETHODCALLTYPE *onHandleBreakPoint) (IApplicationDebugger *This, IRemoteDebugApplicationThread *prpt, BREAKREASON br, IActiveScriptErrorDebug *pError);
	HRESULT(STDMETHODCALLTYPE *onClose) (IApplicationDebugger *This);
	HRESULT(STDMETHODCALLTYPE *onDebuggerEvent) (IApplicationDebugger *This, REFIID riid, IUnknown *punk);
	END_INTERFACE
}  IApplicationDebuggerVtbl;
interface IApplicationDebugger
{
	CONST_VTBL struct IApplicationDebuggerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IApplicationDebugger_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IApplicationDebugger_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IApplicationDebugger_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IApplicationDebugger_QueryAlive(This)    ( (This)->lpVtbl -> QueryAlive(This) )
#define IApplicationDebugger_CreateInstanceAtDebugger(This,rclsid,pUnkOuter,dwClsContext,riid,ppvObject)    ( (This)->lpVtbl -> CreateInstanceAtDebugger(This,rclsid,pUnkOuter,dwClsContext,riid,ppvObject) )
#define IApplicationDebugger_onDebugOutput(This,pstr)    ( (This)->lpVtbl -> onDebugOutput(This,pstr) )
#define IApplicationDebugger_onHandleBreakPoint(This,prpt,br,pError)    ( (This)->lpVtbl -> onHandleBreakPoint(This,prpt,br,pError) )
#define IApplicationDebugger_onClose(This)    ( (This)->lpVtbl -> onClose(This) )
#define IApplicationDebugger_onDebuggerEvent(This,riid,punk)    ( (This)->lpVtbl -> onDebuggerEvent(This,riid,punk) )
#endif
#endif
#ifndef __IApplicationDebuggerUI_INTERFACE_DEFINED__
#define __IApplicationDebuggerUI_INTERFACE_DEFINED__
extern const IID IID_IApplicationDebuggerUI;
typedef struct IApplicationDebuggerUIVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IApplicationDebuggerUI *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IApplicationDebuggerUI *This);
	ULONG(STDMETHODCALLTYPE *Release) (IApplicationDebuggerUI *This);
	HRESULT(STDMETHODCALLTYPE *BringDocumentToTop) (IApplicationDebuggerUI *This, IDebugDocumentText *pddt);
	HRESULT(STDMETHODCALLTYPE *BringDocumentContextToTop) (IApplicationDebuggerUI *This, IDebugDocumentContext *pddc);
	END_INTERFACE
}  IApplicationDebuggerUIVtbl;
interface IApplicationDebuggerUI
{
	CONST_VTBL struct IApplicationDebuggerUIVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IApplicationDebuggerUI_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IApplicationDebuggerUI_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IApplicationDebuggerUI_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IApplicationDebuggerUI_BringDocumentToTop(This,pddt)    ( (This)->lpVtbl -> BringDocumentToTop(This,pddt) )
#define IApplicationDebuggerUI_BringDocumentContextToTop(This,pddc)    ( (This)->lpVtbl -> BringDocumentContextToTop(This,pddc) )
#endif
#endif
extern const CLSID CLSID_MachineDebugManager;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0034_v0_0_s_ifspec;
#ifndef __IMachineDebugManager_INTERFACE_DEFINED__
#define __IMachineDebugManager_INTERFACE_DEFINED__
extern const IID IID_IMachineDebugManager;
typedef struct IMachineDebugManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMachineDebugManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMachineDebugManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMachineDebugManager *This);
	HRESULT(STDMETHODCALLTYPE *AddApplication) (IMachineDebugManager *This, IRemoteDebugApplication *pda, DWORD *pdwAppCookie);
	HRESULT(STDMETHODCALLTYPE *RemoveApplication) (IMachineDebugManager *This, DWORD dwAppCookie);
	HRESULT(STDMETHODCALLTYPE *EnumApplications) (IMachineDebugManager *This, IEnumRemoteDebugApplications **ppeda);
	END_INTERFACE
}  IMachineDebugManagerVtbl;
interface IMachineDebugManager
{
	CONST_VTBL struct IMachineDebugManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMachineDebugManager_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMachineDebugManager_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMachineDebugManager_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMachineDebugManager_AddApplication(This,pda,pdwAppCookie)    ( (This)->lpVtbl -> AddApplication(This,pda,pdwAppCookie) )
#define IMachineDebugManager_RemoveApplication(This,dwAppCookie)    ( (This)->lpVtbl -> RemoveApplication(This,dwAppCookie) )
#define IMachineDebugManager_EnumApplications(This,ppeda)    ( (This)->lpVtbl -> EnumApplications(This,ppeda) )
#endif
#endif
#ifndef __IMachineDebugManagerCookie_INTERFACE_DEFINED__
#define __IMachineDebugManagerCookie_INTERFACE_DEFINED__
extern const IID IID_IMachineDebugManagerCookie;
typedef struct IMachineDebugManagerCookieVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMachineDebugManagerCookie *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMachineDebugManagerCookie *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMachineDebugManagerCookie *This);
	HRESULT(STDMETHODCALLTYPE *AddApplication) (IMachineDebugManagerCookie *This, IRemoteDebugApplication *pda, DWORD dwDebugAppCookie, DWORD *pdwAppCookie);
	HRESULT(STDMETHODCALLTYPE *RemoveApplication) (IMachineDebugManagerCookie *This, DWORD dwDebugAppCookie, DWORD dwAppCookie);
	HRESULT(STDMETHODCALLTYPE *EnumApplications) (IMachineDebugManagerCookie *This, IEnumRemoteDebugApplications **ppeda);
	END_INTERFACE
}  IMachineDebugManagerCookieVtbl;
interface IMachineDebugManagerCookie
{
	CONST_VTBL struct IMachineDebugManagerCookieVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMachineDebugManagerCookie_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMachineDebugManagerCookie_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMachineDebugManagerCookie_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMachineDebugManagerCookie_AddApplication(This,pda,dwDebugAppCookie,pdwAppCookie)    ( (This)->lpVtbl -> AddApplication(This,pda,dwDebugAppCookie,pdwAppCookie) )
#define IMachineDebugManagerCookie_RemoveApplication(This,dwDebugAppCookie,dwAppCookie)    ( (This)->lpVtbl -> RemoveApplication(This,dwDebugAppCookie,dwAppCookie) )
#define IMachineDebugManagerCookie_EnumApplications(This,ppeda)    ( (This)->lpVtbl -> EnumApplications(This,ppeda) )
#endif
#endif
#ifndef __IMachineDebugManagerEvents_INTERFACE_DEFINED__
#define __IMachineDebugManagerEvents_INTERFACE_DEFINED__
extern const IID IID_IMachineDebugManagerEvents;
typedef struct IMachineDebugManagerEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMachineDebugManagerEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMachineDebugManagerEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMachineDebugManagerEvents *This);
	HRESULT(STDMETHODCALLTYPE *onAddApplication) (IMachineDebugManagerEvents *This, IRemoteDebugApplication *pda, DWORD dwAppCookie);
	HRESULT(STDMETHODCALLTYPE *onRemoveApplication) (IMachineDebugManagerEvents *This, IRemoteDebugApplication *pda, DWORD dwAppCookie);
	END_INTERFACE
}  IMachineDebugManagerEventsVtbl;
interface IMachineDebugManagerEvents
{
	CONST_VTBL struct IMachineDebugManagerEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMachineDebugManagerEvents_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMachineDebugManagerEvents_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMachineDebugManagerEvents_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMachineDebugManagerEvents_onAddApplication(This,pda,dwAppCookie)    ( (This)->lpVtbl -> onAddApplication(This,pda,dwAppCookie) )
#define IMachineDebugManagerEvents_onRemoveApplication(This,pda,dwAppCookie)    ( (This)->lpVtbl -> onRemoveApplication(This,pda,dwAppCookie) )
#endif
#endif
extern const CLSID CLSID_ProcessDebugManager;
#ifndef DISABLE_ACTIVDBG_INTERFACE_WRAPPERS
#ifdef _WIN64
#define IProcessDebugManager IProcessDebugManager64
#define IID_IProcessDebugManager IID_IProcessDebugManager64
#else
#define IProcessDebugManager IProcessDebugManager32
#define IID_IProcessDebugManager IID_IProcessDebugManager32
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0037_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0037_v0_0_s_ifspec;
#ifndef __IProcessDebugManager32_INTERFACE_DEFINED__
#define __IProcessDebugManager32_INTERFACE_DEFINED__
extern const IID IID_IProcessDebugManager32;
typedef struct IProcessDebugManager32Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IProcessDebugManager32 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IProcessDebugManager32 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IProcessDebugManager32 *This);
	HRESULT(STDMETHODCALLTYPE *CreateApplication) (IProcessDebugManager32 *This, IDebugApplication32 **ppda);
	HRESULT(STDMETHODCALLTYPE *GetDefaultApplication) (IProcessDebugManager32 *This, IDebugApplication32 **ppda);
	HRESULT(STDMETHODCALLTYPE *AddApplication) (IProcessDebugManager32 *This, IDebugApplication32 *pda, DWORD *pdwAppCookie);
	HRESULT(STDMETHODCALLTYPE *RemoveApplication) (IProcessDebugManager32 *This, DWORD dwAppCookie);
	HRESULT(STDMETHODCALLTYPE *CreateDebugDocumentHelper) (IProcessDebugManager32 *This, IUnknown *punkOuter, IDebugDocumentHelper32 **pddh);
	END_INTERFACE
}  IProcessDebugManager32Vtbl;
interface IProcessDebugManager32
{
	CONST_VTBL struct IProcessDebugManager32Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProcessDebugManager32_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProcessDebugManager32_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IProcessDebugManager32_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IProcessDebugManager32_CreateApplication(This,ppda)    ( (This)->lpVtbl -> CreateApplication(This,ppda) )
#define IProcessDebugManager32_GetDefaultApplication(This,ppda)    ( (This)->lpVtbl -> GetDefaultApplication(This,ppda) )
#define IProcessDebugManager32_AddApplication(This,pda,pdwAppCookie)    ( (This)->lpVtbl -> AddApplication(This,pda,pdwAppCookie) )
#define IProcessDebugManager32_RemoveApplication(This,dwAppCookie)    ( (This)->lpVtbl -> RemoveApplication(This,dwAppCookie) )
#define IProcessDebugManager32_CreateDebugDocumentHelper(This,punkOuter,pddh)    ( (This)->lpVtbl -> CreateDebugDocumentHelper(This,punkOuter,pddh) )
#endif
#endif
#ifndef __IProcessDebugManager64_INTERFACE_DEFINED__
#define __IProcessDebugManager64_INTERFACE_DEFINED__
extern const IID IID_IProcessDebugManager64;
typedef struct IProcessDebugManager64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IProcessDebugManager64 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IProcessDebugManager64 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IProcessDebugManager64 *This);
	HRESULT(STDMETHODCALLTYPE *CreateApplication) (IProcessDebugManager64 *This, IDebugApplication64 **ppda);
	HRESULT(STDMETHODCALLTYPE *GetDefaultApplication) (IProcessDebugManager64 *This, IDebugApplication64 **ppda);
	HRESULT(STDMETHODCALLTYPE *AddApplication) (IProcessDebugManager64 *This, IDebugApplication64 *pda, DWORD *pdwAppCookie);
	HRESULT(STDMETHODCALLTYPE *RemoveApplication) (IProcessDebugManager64 *This, DWORD dwAppCookie);
	HRESULT(STDMETHODCALLTYPE *CreateDebugDocumentHelper) (IProcessDebugManager64 *This, IUnknown *punkOuter, IDebugDocumentHelper64 **pddh);
	END_INTERFACE
}  IProcessDebugManager64Vtbl;
interface IProcessDebugManager64
{
	CONST_VTBL struct IProcessDebugManager64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProcessDebugManager64_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProcessDebugManager64_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IProcessDebugManager64_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IProcessDebugManager64_CreateApplication(This,ppda)    ( (This)->lpVtbl -> CreateApplication(This,ppda) )
#define IProcessDebugManager64_GetDefaultApplication(This,ppda)    ( (This)->lpVtbl -> GetDefaultApplication(This,ppda) )
#define IProcessDebugManager64_AddApplication(This,pda,pdwAppCookie)    ( (This)->lpVtbl -> AddApplication(This,pda,pdwAppCookie) )
#define IProcessDebugManager64_RemoveApplication(This,dwAppCookie)    ( (This)->lpVtbl -> RemoveApplication(This,dwAppCookie) )
#define IProcessDebugManager64_CreateDebugDocumentHelper(This,punkOuter,pddh)    ( (This)->lpVtbl -> CreateDebugDocumentHelper(This,punkOuter,pddh) )
#endif
#endif
#ifndef __IRemoteDebugApplication_INTERFACE_DEFINED__
#define __IRemoteDebugApplication_INTERFACE_DEFINED__
extern const IID IID_IRemoteDebugApplication;
typedef struct IRemoteDebugApplicationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRemoteDebugApplication *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRemoteDebugApplication *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRemoteDebugApplication *This);
	HRESULT(STDMETHODCALLTYPE *ResumeFromBreakPoint) (IRemoteDebugApplication *This, IRemoteDebugApplicationThread *prptFocus, BREAKRESUMEACTION bra, ERRORRESUMEACTION era);
	HRESULT(STDMETHODCALLTYPE *CauseBreak) (IRemoteDebugApplication *This);
	HRESULT(STDMETHODCALLTYPE *ConnectDebugger) (IRemoteDebugApplication *This, IApplicationDebugger *pad);
	HRESULT(STDMETHODCALLTYPE *DisconnectDebugger) (IRemoteDebugApplication *This);
	HRESULT(STDMETHODCALLTYPE *GetDebugger) (IRemoteDebugApplication *This, IApplicationDebugger **pad);
	HRESULT(STDMETHODCALLTYPE *CreateInstanceAtApplication) (IRemoteDebugApplication *This, REFCLSID rclsid, IUnknown *pUnkOuter, DWORD dwClsContext, REFIID riid, IUnknown **ppvObject);
	HRESULT(STDMETHODCALLTYPE *QueryAlive) (IRemoteDebugApplication *This);
	HRESULT(STDMETHODCALLTYPE *EnumThreads) (IRemoteDebugApplication *This, IEnumRemoteDebugApplicationThreads **pperdat);
	HRESULT(STDMETHODCALLTYPE *GetName) (IRemoteDebugApplication *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *GetRootNode) (IRemoteDebugApplication *This, IDebugApplicationNode **ppdanRoot);
	HRESULT(STDMETHODCALLTYPE *EnumGlobalExpressionContexts) (IRemoteDebugApplication *This, IEnumDebugExpressionContexts **ppedec);
	END_INTERFACE
}  IRemoteDebugApplicationVtbl;
interface IRemoteDebugApplication
{
	CONST_VTBL struct IRemoteDebugApplicationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRemoteDebugApplication_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRemoteDebugApplication_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRemoteDebugApplication_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRemoteDebugApplication_ResumeFromBreakPoint(This,prptFocus,bra,era)    ( (This)->lpVtbl -> ResumeFromBreakPoint(This,prptFocus,bra,era) )
#define IRemoteDebugApplication_CauseBreak(This)    ( (This)->lpVtbl -> CauseBreak(This) )
#define IRemoteDebugApplication_ConnectDebugger(This,pad)    ( (This)->lpVtbl -> ConnectDebugger(This,pad) )
#define IRemoteDebugApplication_DisconnectDebugger(This)    ( (This)->lpVtbl -> DisconnectDebugger(This) )
#define IRemoteDebugApplication_GetDebugger(This,pad)    ( (This)->lpVtbl -> GetDebugger(This,pad) )
#define IRemoteDebugApplication_CreateInstanceAtApplication(This,rclsid,pUnkOuter,dwClsContext,riid,ppvObject)    ( (This)->lpVtbl -> CreateInstanceAtApplication(This,rclsid,pUnkOuter,dwClsContext,riid,ppvObject) )
#define IRemoteDebugApplication_QueryAlive(This)    ( (This)->lpVtbl -> QueryAlive(This) )
#define IRemoteDebugApplication_EnumThreads(This,pperdat)    ( (This)->lpVtbl -> EnumThreads(This,pperdat) )
#define IRemoteDebugApplication_GetName(This,pbstrName)    ( (This)->lpVtbl -> GetName(This,pbstrName) )
#define IRemoteDebugApplication_GetRootNode(This,ppdanRoot)    ( (This)->lpVtbl -> GetRootNode(This,ppdanRoot) )
#define IRemoteDebugApplication_EnumGlobalExpressionContexts(This,ppedec)    ( (This)->lpVtbl -> EnumGlobalExpressionContexts(This,ppedec) )
#endif
#endif
#ifndef DISABLE_ACTIVDBG_INTERFACE_WRAPPERS
#ifdef _WIN64
#define IDebugApplication IDebugApplication64
#define IID_IDebugApplication IID_IDebugApplication64
#else
#define IDebugApplication IDebugApplication32
#define IID_IDebugApplication IID_IDebugApplication32
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0040_v0_0_s_ifspec;
#ifndef __IDebugApplication32_INTERFACE_DEFINED__
#define __IDebugApplication32_INTERFACE_DEFINED__
extern const IID IID_IDebugApplication32;
typedef struct IDebugApplication32Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugApplication32 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugApplication32 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugApplication32 *This);
	HRESULT(STDMETHODCALLTYPE *ResumeFromBreakPoint) (IDebugApplication32 *This, IRemoteDebugApplicationThread *prptFocus, BREAKRESUMEACTION bra, ERRORRESUMEACTION era);
	HRESULT(STDMETHODCALLTYPE *CauseBreak) (IDebugApplication32 *This);
	HRESULT(STDMETHODCALLTYPE *ConnectDebugger) (IDebugApplication32 *This, IApplicationDebugger *pad);
	HRESULT(STDMETHODCALLTYPE *DisconnectDebugger) (IDebugApplication32 *This);
	HRESULT(STDMETHODCALLTYPE *GetDebugger) (IDebugApplication32 *This, IApplicationDebugger **pad);
	HRESULT(STDMETHODCALLTYPE *CreateInstanceAtApplication) (IDebugApplication32 *This, REFCLSID rclsid, IUnknown *pUnkOuter, DWORD dwClsContext, REFIID riid, IUnknown **ppvObject);
	HRESULT(STDMETHODCALLTYPE *QueryAlive) (IDebugApplication32 *This);
	HRESULT(STDMETHODCALLTYPE *EnumThreads) (IDebugApplication32 *This, IEnumRemoteDebugApplicationThreads **pperdat);
	HRESULT(STDMETHODCALLTYPE *GetName) (IDebugApplication32 *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *GetRootNode) (IDebugApplication32 *This, IDebugApplicationNode **ppdanRoot);
	HRESULT(STDMETHODCALLTYPE *EnumGlobalExpressionContexts) (IDebugApplication32 *This, IEnumDebugExpressionContexts **ppedec);
	HRESULT(STDMETHODCALLTYPE *SetName) (IDebugApplication32 *This, LPCOLESTR pstrName);
	HRESULT(STDMETHODCALLTYPE *StepOutComplete) (IDebugApplication32 *This);
	HRESULT(STDMETHODCALLTYPE *DebugOutput) (IDebugApplication32 *This, LPCOLESTR pstr);
	HRESULT(STDMETHODCALLTYPE *StartDebugSession) (IDebugApplication32 *This);
	HRESULT(STDMETHODCALLTYPE *HandleBreakPoint) (IDebugApplication32 *This, BREAKREASON br, BREAKRESUMEACTION *pbra);
	HRESULT(STDMETHODCALLTYPE *Close) (IDebugApplication32 *This);
	HRESULT(STDMETHODCALLTYPE *GetBreakFlags) (IDebugApplication32 *This, APPBREAKFLAGS *pabf, IRemoteDebugApplicationThread **pprdatSteppingThread);
	HRESULT(STDMETHODCALLTYPE *GetCurrentThread) (IDebugApplication32 *This, IDebugApplicationThread **pat);
	HRESULT(STDMETHODCALLTYPE *CreateAsyncDebugOperation) (IDebugApplication32 *This, IDebugSyncOperation *psdo, IDebugAsyncOperation **ppado);
	HRESULT(STDMETHODCALLTYPE *AddStackFrameSniffer) (IDebugApplication32 *This, IDebugStackFrameSniffer *pdsfs, DWORD *pdwCookie);
	HRESULT(STDMETHODCALLTYPE *RemoveStackFrameSniffer) (IDebugApplication32 *This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE *QueryCurrentThreadIsDebuggerThread) (IDebugApplication32 *This);
	HRESULT(STDMETHODCALLTYPE *SynchronousCallInDebuggerThread) (IDebugApplication32 *This, IDebugThreadCall32 *pptc, DWORD dwParam1, DWORD dwParam2, DWORD dwParam3);
	HRESULT(STDMETHODCALLTYPE *CreateApplicationNode) (IDebugApplication32 *This, IDebugApplicationNode **ppdanNew);
	HRESULT(STDMETHODCALLTYPE *FireDebuggerEvent) (IDebugApplication32 *This, REFGUID riid, IUnknown *punk);
	HRESULT(STDMETHODCALLTYPE *HandleRuntimeError) (IDebugApplication32 *This, IActiveScriptErrorDebug *pErrorDebug, IActiveScriptSite *pScriptSite, BREAKRESUMEACTION *pbra, ERRORRESUMEACTION *perra, BOOL *pfCallOnScriptError);
	BOOL(STDMETHODCALLTYPE *FCanJitDebug) (IDebugApplication32 *This);
	BOOL(STDMETHODCALLTYPE *FIsAutoJitDebugEnabled) (IDebugApplication32 *This);
	HRESULT(STDMETHODCALLTYPE *AddGlobalExpressionContextProvider) (IDebugApplication32 *This, IProvideExpressionContexts *pdsfs, DWORD *pdwCookie);
	HRESULT(STDMETHODCALLTYPE *RemoveGlobalExpressionContextProvider) (IDebugApplication32 *This, DWORD dwCookie);
	END_INTERFACE
}  IDebugApplication32Vtbl;
interface IDebugApplication32
{
	CONST_VTBL struct IDebugApplication32Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugApplication32_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugApplication32_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugApplication32_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugApplication32_ResumeFromBreakPoint(This,prptFocus,bra,era)    ( (This)->lpVtbl -> ResumeFromBreakPoint(This,prptFocus,bra,era) )
#define IDebugApplication32_CauseBreak(This)    ( (This)->lpVtbl -> CauseBreak(This) )
#define IDebugApplication32_ConnectDebugger(This,pad)    ( (This)->lpVtbl -> ConnectDebugger(This,pad) )
#define IDebugApplication32_DisconnectDebugger(This)    ( (This)->lpVtbl -> DisconnectDebugger(This) )
#define IDebugApplication32_GetDebugger(This,pad)    ( (This)->lpVtbl -> GetDebugger(This,pad) )
#define IDebugApplication32_CreateInstanceAtApplication(This,rclsid,pUnkOuter,dwClsContext,riid,ppvObject)    ( (This)->lpVtbl -> CreateInstanceAtApplication(This,rclsid,pUnkOuter,dwClsContext,riid,ppvObject) )
#define IDebugApplication32_QueryAlive(This)    ( (This)->lpVtbl -> QueryAlive(This) )
#define IDebugApplication32_EnumThreads(This,pperdat)    ( (This)->lpVtbl -> EnumThreads(This,pperdat) )
#define IDebugApplication32_GetName(This,pbstrName)    ( (This)->lpVtbl -> GetName(This,pbstrName) )
#define IDebugApplication32_GetRootNode(This,ppdanRoot)    ( (This)->lpVtbl -> GetRootNode(This,ppdanRoot) )
#define IDebugApplication32_EnumGlobalExpressionContexts(This,ppedec)    ( (This)->lpVtbl -> EnumGlobalExpressionContexts(This,ppedec) )
#define IDebugApplication32_SetName(This,pstrName)    ( (This)->lpVtbl -> SetName(This,pstrName) )
#define IDebugApplication32_StepOutComplete(This)    ( (This)->lpVtbl -> StepOutComplete(This) )
#define IDebugApplication32_DebugOutput(This,pstr)    ( (This)->lpVtbl -> DebugOutput(This,pstr) )
#define IDebugApplication32_StartDebugSession(This)    ( (This)->lpVtbl -> StartDebugSession(This) )
#define IDebugApplication32_HandleBreakPoint(This,br,pbra)    ( (This)->lpVtbl -> HandleBreakPoint(This,br,pbra) )
#define IDebugApplication32_Close(This)    ( (This)->lpVtbl -> Close(This) )
#define IDebugApplication32_GetBreakFlags(This,pabf,pprdatSteppingThread)    ( (This)->lpVtbl -> GetBreakFlags(This,pabf,pprdatSteppingThread) )
#define IDebugApplication32_GetCurrentThread(This,pat)    ( (This)->lpVtbl -> GetCurrentThread(This,pat) )
#define IDebugApplication32_CreateAsyncDebugOperation(This,psdo,ppado)    ( (This)->lpVtbl -> CreateAsyncDebugOperation(This,psdo,ppado) )
#define IDebugApplication32_AddStackFrameSniffer(This,pdsfs,pdwCookie)    ( (This)->lpVtbl -> AddStackFrameSniffer(This,pdsfs,pdwCookie) )
#define IDebugApplication32_RemoveStackFrameSniffer(This,dwCookie)    ( (This)->lpVtbl -> RemoveStackFrameSniffer(This,dwCookie) )
#define IDebugApplication32_QueryCurrentThreadIsDebuggerThread(This)    ( (This)->lpVtbl -> QueryCurrentThreadIsDebuggerThread(This) )
#define IDebugApplication32_SynchronousCallInDebuggerThread(This,pptc,dwParam1,dwParam2,dwParam3)    ( (This)->lpVtbl -> SynchronousCallInDebuggerThread(This,pptc,dwParam1,dwParam2,dwParam3) )
#define IDebugApplication32_CreateApplicationNode(This,ppdanNew)    ( (This)->lpVtbl -> CreateApplicationNode(This,ppdanNew) )
#define IDebugApplication32_FireDebuggerEvent(This,riid,punk)    ( (This)->lpVtbl -> FireDebuggerEvent(This,riid,punk) )
#define IDebugApplication32_HandleRuntimeError(This,pErrorDebug,pScriptSite,pbra,perra,pfCallOnScriptError)    ( (This)->lpVtbl -> HandleRuntimeError(This,pErrorDebug,pScriptSite,pbra,perra,pfCallOnScriptError) )
#define IDebugApplication32_FCanJitDebug(This)    ( (This)->lpVtbl -> FCanJitDebug(This) )
#define IDebugApplication32_FIsAutoJitDebugEnabled(This)    ( (This)->lpVtbl -> FIsAutoJitDebugEnabled(This) )
#define IDebugApplication32_AddGlobalExpressionContextProvider(This,pdsfs,pdwCookie)    ( (This)->lpVtbl -> AddGlobalExpressionContextProvider(This,pdsfs,pdwCookie) )
#define IDebugApplication32_RemoveGlobalExpressionContextProvider(This,dwCookie)    ( (This)->lpVtbl -> RemoveGlobalExpressionContextProvider(This,dwCookie) )
#endif
#endif
#ifndef __IDebugApplication64_INTERFACE_DEFINED__
#define __IDebugApplication64_INTERFACE_DEFINED__
extern const IID IID_IDebugApplication64;
typedef struct IDebugApplication64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugApplication64 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugApplication64 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugApplication64 *This);
	HRESULT(STDMETHODCALLTYPE *ResumeFromBreakPoint) (IDebugApplication64 *This, IRemoteDebugApplicationThread *prptFocus, BREAKRESUMEACTION bra, ERRORRESUMEACTION era);
	HRESULT(STDMETHODCALLTYPE *CauseBreak) (IDebugApplication64 *This);
	HRESULT(STDMETHODCALLTYPE *ConnectDebugger) (IDebugApplication64 *This, IApplicationDebugger *pad);
	HRESULT(STDMETHODCALLTYPE *DisconnectDebugger) (IDebugApplication64 *This);
	HRESULT(STDMETHODCALLTYPE *GetDebugger) (IDebugApplication64 *This, IApplicationDebugger **pad);
	HRESULT(STDMETHODCALLTYPE *CreateInstanceAtApplication) (IDebugApplication64 *This, REFCLSID rclsid, IUnknown *pUnkOuter, DWORD dwClsContext, REFIID riid, IUnknown **ppvObject);
	HRESULT(STDMETHODCALLTYPE *QueryAlive) (IDebugApplication64 *This);
	HRESULT(STDMETHODCALLTYPE *EnumThreads) (IDebugApplication64 *This, IEnumRemoteDebugApplicationThreads **pperdat);
	HRESULT(STDMETHODCALLTYPE *GetName) (IDebugApplication64 *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *GetRootNode) (IDebugApplication64 *This, IDebugApplicationNode **ppdanRoot);
	HRESULT(STDMETHODCALLTYPE *EnumGlobalExpressionContexts) (IDebugApplication64 *This, IEnumDebugExpressionContexts **ppedec);
	HRESULT(STDMETHODCALLTYPE *SetName) (IDebugApplication64 *This, LPCOLESTR pstrName);
	HRESULT(STDMETHODCALLTYPE *StepOutComplete) (IDebugApplication64 *This);
	HRESULT(STDMETHODCALLTYPE *DebugOutput) (IDebugApplication64 *This, LPCOLESTR pstr);
	HRESULT(STDMETHODCALLTYPE *StartDebugSession) (IDebugApplication64 *This);
	HRESULT(STDMETHODCALLTYPE *HandleBreakPoint) (IDebugApplication64 *This, BREAKREASON br, BREAKRESUMEACTION *pbra);
	HRESULT(STDMETHODCALLTYPE *Close) (IDebugApplication64 *This);
	HRESULT(STDMETHODCALLTYPE *GetBreakFlags) (IDebugApplication64 *This, APPBREAKFLAGS *pabf, IRemoteDebugApplicationThread **pprdatSteppingThread);
	HRESULT(STDMETHODCALLTYPE *GetCurrentThread) (IDebugApplication64 *This, IDebugApplicationThread **pat);
	HRESULT(STDMETHODCALLTYPE *CreateAsyncDebugOperation) (IDebugApplication64 *This, IDebugSyncOperation *psdo, IDebugAsyncOperation **ppado);
	HRESULT(STDMETHODCALLTYPE *AddStackFrameSniffer) (IDebugApplication64 *This, IDebugStackFrameSniffer *pdsfs, DWORD *pdwCookie);
	HRESULT(STDMETHODCALLTYPE *RemoveStackFrameSniffer) (IDebugApplication64 *This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE *QueryCurrentThreadIsDebuggerThread) (IDebugApplication64 *This);
	HRESULT(STDMETHODCALLTYPE *SynchronousCallInDebuggerThread) (IDebugApplication64 *This, IDebugThreadCall64 *pptc, DWORDLONG dwParam1, DWORDLONG dwParam2, DWORDLONG dwParam3);
	HRESULT(STDMETHODCALLTYPE *CreateApplicationNode) (IDebugApplication64 *This, IDebugApplicationNode **ppdanNew);
	HRESULT(STDMETHODCALLTYPE *FireDebuggerEvent) (IDebugApplication64 *This, REFGUID riid, IUnknown *punk);
	HRESULT(STDMETHODCALLTYPE *HandleRuntimeError) (IDebugApplication64 *This, IActiveScriptErrorDebug *pErrorDebug, IActiveScriptSite *pScriptSite, BREAKRESUMEACTION *pbra, ERRORRESUMEACTION *perra, BOOL *pfCallOnScriptError);
	BOOL(STDMETHODCALLTYPE *FCanJitDebug) (IDebugApplication64 *This);
	BOOL(STDMETHODCALLTYPE *FIsAutoJitDebugEnabled) (IDebugApplication64 *This);
	HRESULT(STDMETHODCALLTYPE *AddGlobalExpressionContextProvider) (IDebugApplication64 *This, IProvideExpressionContexts *pdsfs, DWORDLONG *pdwCookie);
	HRESULT(STDMETHODCALLTYPE *RemoveGlobalExpressionContextProvider) (IDebugApplication64 *This, DWORDLONG dwCookie);
	END_INTERFACE
}  IDebugApplication64Vtbl;
interface IDebugApplication64
{
	CONST_VTBL struct IDebugApplication64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugApplication64_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugApplication64_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugApplication64_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugApplication64_ResumeFromBreakPoint(This,prptFocus,bra,era)    ( (This)->lpVtbl -> ResumeFromBreakPoint(This,prptFocus,bra,era) )
#define IDebugApplication64_CauseBreak(This)    ( (This)->lpVtbl -> CauseBreak(This) )
#define IDebugApplication64_ConnectDebugger(This,pad)    ( (This)->lpVtbl -> ConnectDebugger(This,pad) )
#define IDebugApplication64_DisconnectDebugger(This)    ( (This)->lpVtbl -> DisconnectDebugger(This) )
#define IDebugApplication64_GetDebugger(This,pad)    ( (This)->lpVtbl -> GetDebugger(This,pad) )
#define IDebugApplication64_CreateInstanceAtApplication(This,rclsid,pUnkOuter,dwClsContext,riid,ppvObject)    ( (This)->lpVtbl -> CreateInstanceAtApplication(This,rclsid,pUnkOuter,dwClsContext,riid,ppvObject) )
#define IDebugApplication64_QueryAlive(This)    ( (This)->lpVtbl -> QueryAlive(This) )
#define IDebugApplication64_EnumThreads(This,pperdat)    ( (This)->lpVtbl -> EnumThreads(This,pperdat) )
#define IDebugApplication64_GetName(This,pbstrName)    ( (This)->lpVtbl -> GetName(This,pbstrName) )
#define IDebugApplication64_GetRootNode(This,ppdanRoot)    ( (This)->lpVtbl -> GetRootNode(This,ppdanRoot) )
#define IDebugApplication64_EnumGlobalExpressionContexts(This,ppedec)    ( (This)->lpVtbl -> EnumGlobalExpressionContexts(This,ppedec) )
#define IDebugApplication64_SetName(This,pstrName)    ( (This)->lpVtbl -> SetName(This,pstrName) )
#define IDebugApplication64_StepOutComplete(This)    ( (This)->lpVtbl -> StepOutComplete(This) )
#define IDebugApplication64_DebugOutput(This,pstr)    ( (This)->lpVtbl -> DebugOutput(This,pstr) )
#define IDebugApplication64_StartDebugSession(This)    ( (This)->lpVtbl -> StartDebugSession(This) )
#define IDebugApplication64_HandleBreakPoint(This,br,pbra)    ( (This)->lpVtbl -> HandleBreakPoint(This,br,pbra) )
#define IDebugApplication64_Close(This)    ( (This)->lpVtbl -> Close(This) )
#define IDebugApplication64_GetBreakFlags(This,pabf,pprdatSteppingThread)    ( (This)->lpVtbl -> GetBreakFlags(This,pabf,pprdatSteppingThread) )
#define IDebugApplication64_GetCurrentThread(This,pat)    ( (This)->lpVtbl -> GetCurrentThread(This,pat) )
#define IDebugApplication64_CreateAsyncDebugOperation(This,psdo,ppado)    ( (This)->lpVtbl -> CreateAsyncDebugOperation(This,psdo,ppado) )
#define IDebugApplication64_AddStackFrameSniffer(This,pdsfs,pdwCookie)    ( (This)->lpVtbl -> AddStackFrameSniffer(This,pdsfs,pdwCookie) )
#define IDebugApplication64_RemoveStackFrameSniffer(This,dwCookie)    ( (This)->lpVtbl -> RemoveStackFrameSniffer(This,dwCookie) )
#define IDebugApplication64_QueryCurrentThreadIsDebuggerThread(This)    ( (This)->lpVtbl -> QueryCurrentThreadIsDebuggerThread(This) )
#define IDebugApplication64_SynchronousCallInDebuggerThread(This,pptc,dwParam1,dwParam2,dwParam3)    ( (This)->lpVtbl -> SynchronousCallInDebuggerThread(This,pptc,dwParam1,dwParam2,dwParam3) )
#define IDebugApplication64_CreateApplicationNode(This,ppdanNew)    ( (This)->lpVtbl -> CreateApplicationNode(This,ppdanNew) )
#define IDebugApplication64_FireDebuggerEvent(This,riid,punk)    ( (This)->lpVtbl -> FireDebuggerEvent(This,riid,punk) )
#define IDebugApplication64_HandleRuntimeError(This,pErrorDebug,pScriptSite,pbra,perra,pfCallOnScriptError)    ( (This)->lpVtbl -> HandleRuntimeError(This,pErrorDebug,pScriptSite,pbra,perra,pfCallOnScriptError) )
#define IDebugApplication64_FCanJitDebug(This)    ( (This)->lpVtbl -> FCanJitDebug(This) )
#define IDebugApplication64_FIsAutoJitDebugEnabled(This)    ( (This)->lpVtbl -> FIsAutoJitDebugEnabled(This) )
#define IDebugApplication64_AddGlobalExpressionContextProvider(This,pdsfs,pdwCookie)    ( (This)->lpVtbl -> AddGlobalExpressionContextProvider(This,pdsfs,pdwCookie) )
#define IDebugApplication64_RemoveGlobalExpressionContextProvider(This,dwCookie)    ( (This)->lpVtbl -> RemoveGlobalExpressionContextProvider(This,dwCookie) )
#endif
#endif
#ifndef __IRemoteDebugApplicationEvents_INTERFACE_DEFINED__
#define __IRemoteDebugApplicationEvents_INTERFACE_DEFINED__
extern const IID IID_IRemoteDebugApplicationEvents;
typedef struct IRemoteDebugApplicationEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRemoteDebugApplicationEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRemoteDebugApplicationEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRemoteDebugApplicationEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnConnectDebugger) (IRemoteDebugApplicationEvents *This, IApplicationDebugger *pad);
	HRESULT(STDMETHODCALLTYPE *OnDisconnectDebugger) (IRemoteDebugApplicationEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnSetName) (IRemoteDebugApplicationEvents *This, LPCOLESTR pstrName);
	HRESULT(STDMETHODCALLTYPE *OnDebugOutput) (IRemoteDebugApplicationEvents *This, LPCOLESTR pstr);
	HRESULT(STDMETHODCALLTYPE *OnClose) (IRemoteDebugApplicationEvents *This);
	HRESULT(STDMETHODCALLTYPE *OnEnterBreakPoint) (IRemoteDebugApplicationEvents *This, IRemoteDebugApplicationThread *prdat);
	HRESULT(STDMETHODCALLTYPE *OnLeaveBreakPoint) (IRemoteDebugApplicationEvents *This, IRemoteDebugApplicationThread *prdat);
	HRESULT(STDMETHODCALLTYPE *OnCreateThread) (IRemoteDebugApplicationEvents *This, IRemoteDebugApplicationThread *prdat);
	HRESULT(STDMETHODCALLTYPE *OnDestroyThread) (IRemoteDebugApplicationEvents *This, IRemoteDebugApplicationThread *prdat);
	HRESULT(STDMETHODCALLTYPE *OnBreakFlagChange) (IRemoteDebugApplicationEvents *This, APPBREAKFLAGS abf, IRemoteDebugApplicationThread *prdatSteppingThread);
	END_INTERFACE
}  IRemoteDebugApplicationEventsVtbl;
interface IRemoteDebugApplicationEvents
{
	CONST_VTBL struct IRemoteDebugApplicationEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRemoteDebugApplicationEvents_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRemoteDebugApplicationEvents_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRemoteDebugApplicationEvents_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRemoteDebugApplicationEvents_OnConnectDebugger(This,pad)    ( (This)->lpVtbl -> OnConnectDebugger(This,pad) )
#define IRemoteDebugApplicationEvents_OnDisconnectDebugger(This)    ( (This)->lpVtbl -> OnDisconnectDebugger(This) )
#define IRemoteDebugApplicationEvents_OnSetName(This,pstrName)    ( (This)->lpVtbl -> OnSetName(This,pstrName) )
#define IRemoteDebugApplicationEvents_OnDebugOutput(This,pstr)    ( (This)->lpVtbl -> OnDebugOutput(This,pstr) )
#define IRemoteDebugApplicationEvents_OnClose(This)    ( (This)->lpVtbl -> OnClose(This) )
#define IRemoteDebugApplicationEvents_OnEnterBreakPoint(This,prdat)    ( (This)->lpVtbl -> OnEnterBreakPoint(This,prdat) )
#define IRemoteDebugApplicationEvents_OnLeaveBreakPoint(This,prdat)    ( (This)->lpVtbl -> OnLeaveBreakPoint(This,prdat) )
#define IRemoteDebugApplicationEvents_OnCreateThread(This,prdat)    ( (This)->lpVtbl -> OnCreateThread(This,prdat) )
#define IRemoteDebugApplicationEvents_OnDestroyThread(This,prdat)    ( (This)->lpVtbl -> OnDestroyThread(This,prdat) )
#define IRemoteDebugApplicationEvents_OnBreakFlagChange(This,abf,prdatSteppingThread)    ( (This)->lpVtbl -> OnBreakFlagChange(This,abf,prdatSteppingThread) )
#endif
#endif
#ifndef __IDebugApplicationNode_INTERFACE_DEFINED__
#define __IDebugApplicationNode_INTERFACE_DEFINED__
extern const IID IID_IDebugApplicationNode;
typedef struct IDebugApplicationNodeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugApplicationNode *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugApplicationNode *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugApplicationNode *This);
	HRESULT(STDMETHODCALLTYPE *GetName) (IDebugApplicationNode *This, DOCUMENTNAMETYPE dnt, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *GetDocumentClassId) (IDebugApplicationNode *This, CLSID *pclsidDocument);
	HRESULT(STDMETHODCALLTYPE *GetDocument) (IDebugApplicationNode *This, IDebugDocument **ppssd);
	HRESULT(STDMETHODCALLTYPE *EnumChildren) (IDebugApplicationNode *This, IEnumDebugApplicationNodes **pperddp);
	HRESULT(STDMETHODCALLTYPE *GetParent) (IDebugApplicationNode *This, IDebugApplicationNode **pprddp);
	HRESULT(STDMETHODCALLTYPE *SetDocumentProvider) (IDebugApplicationNode *This, IDebugDocumentProvider *pddp);
	HRESULT(STDMETHODCALLTYPE *Close) (IDebugApplicationNode *This);
	HRESULT(STDMETHODCALLTYPE *Attach) (IDebugApplicationNode *This, IDebugApplicationNode *pdanParent);
	HRESULT(STDMETHODCALLTYPE *Detach) (IDebugApplicationNode *This);
	END_INTERFACE
}  IDebugApplicationNodeVtbl;
interface IDebugApplicationNode
{
	CONST_VTBL struct IDebugApplicationNodeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugApplicationNode_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugApplicationNode_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugApplicationNode_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugApplicationNode_GetName(This,dnt,pbstrName)    ( (This)->lpVtbl -> GetName(This,dnt,pbstrName) )
#define IDebugApplicationNode_GetDocumentClassId(This,pclsidDocument)    ( (This)->lpVtbl -> GetDocumentClassId(This,pclsidDocument) )
#define IDebugApplicationNode_GetDocument(This,ppssd)    ( (This)->lpVtbl -> GetDocument(This,ppssd) )
#define IDebugApplicationNode_EnumChildren(This,pperddp)    ( (This)->lpVtbl -> EnumChildren(This,pperddp) )
#define IDebugApplicationNode_GetParent(This,pprddp)    ( (This)->lpVtbl -> GetParent(This,pprddp) )
#define IDebugApplicationNode_SetDocumentProvider(This,pddp)    ( (This)->lpVtbl -> SetDocumentProvider(This,pddp) )
#define IDebugApplicationNode_Close(This)    ( (This)->lpVtbl -> Close(This) )
#define IDebugApplicationNode_Attach(This,pdanParent)    ( (This)->lpVtbl -> Attach(This,pdanParent) )
#define IDebugApplicationNode_Detach(This)    ( (This)->lpVtbl -> Detach(This) )
#endif
#endif
#ifndef __IDebugApplicationNodeEvents_INTERFACE_DEFINED__
#define __IDebugApplicationNodeEvents_INTERFACE_DEFINED__
extern const IID IID_IDebugApplicationNodeEvents;
typedef struct IDebugApplicationNodeEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugApplicationNodeEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugApplicationNodeEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugApplicationNodeEvents *This);
	HRESULT(STDMETHODCALLTYPE *onAddChild) (IDebugApplicationNodeEvents *This, IDebugApplicationNode *prddpChild);
	HRESULT(STDMETHODCALLTYPE *onRemoveChild) (IDebugApplicationNodeEvents *This, IDebugApplicationNode *prddpChild);
	HRESULT(STDMETHODCALLTYPE *onDetach) (IDebugApplicationNodeEvents *This);
	HRESULT(STDMETHODCALLTYPE *onAttach) (IDebugApplicationNodeEvents *This, IDebugApplicationNode *prddpParent);
	END_INTERFACE
}  IDebugApplicationNodeEventsVtbl;
interface IDebugApplicationNodeEvents
{
	CONST_VTBL struct IDebugApplicationNodeEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugApplicationNodeEvents_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugApplicationNodeEvents_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugApplicationNodeEvents_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugApplicationNodeEvents_onAddChild(This,prddpChild)    ( (This)->lpVtbl -> onAddChild(This,prddpChild) )
#define IDebugApplicationNodeEvents_onRemoveChild(This,prddpChild)    ( (This)->lpVtbl -> onRemoveChild(This,prddpChild) )
#define IDebugApplicationNodeEvents_onDetach(This)    ( (This)->lpVtbl -> onDetach(This) )
#define IDebugApplicationNodeEvents_onAttach(This,prddpParent)    ( (This)->lpVtbl -> onAttach(This,prddpParent) )
#endif
#endif
#ifndef __AsyncIDebugApplicationNodeEvents_INTERFACE_DEFINED__
#define __AsyncIDebugApplicationNodeEvents_INTERFACE_DEFINED__
extern const IID IID_AsyncIDebugApplicationNodeEvents;
typedef struct AsyncIDebugApplicationNodeEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (AsyncIDebugApplicationNodeEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (AsyncIDebugApplicationNodeEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (AsyncIDebugApplicationNodeEvents *This);
	HRESULT(STDMETHODCALLTYPE *Begin_onAddChild) (AsyncIDebugApplicationNodeEvents *This, IDebugApplicationNode *prddpChild);
	HRESULT(STDMETHODCALLTYPE *Finish_onAddChild) (AsyncIDebugApplicationNodeEvents *This);
	HRESULT(STDMETHODCALLTYPE *Begin_onRemoveChild) (AsyncIDebugApplicationNodeEvents *This, IDebugApplicationNode *prddpChild);
	HRESULT(STDMETHODCALLTYPE *Finish_onRemoveChild) (AsyncIDebugApplicationNodeEvents *This);
	HRESULT(STDMETHODCALLTYPE *Begin_onDetach) (AsyncIDebugApplicationNodeEvents *This);
	HRESULT(STDMETHODCALLTYPE *Finish_onDetach) (AsyncIDebugApplicationNodeEvents *This);
	HRESULT(STDMETHODCALLTYPE *Begin_onAttach) (AsyncIDebugApplicationNodeEvents *This, IDebugApplicationNode *prddpParent);
	HRESULT(STDMETHODCALLTYPE *Finish_onAttach) (AsyncIDebugApplicationNodeEvents *This);
	END_INTERFACE
}  AsyncIDebugApplicationNodeEventsVtbl;
interface AsyncIDebugApplicationNodeEvents
{
	CONST_VTBL struct AsyncIDebugApplicationNodeEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIDebugApplicationNodeEvents_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIDebugApplicationNodeEvents_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define AsyncIDebugApplicationNodeEvents_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define AsyncIDebugApplicationNodeEvents_Begin_onAddChild(This,prddpChild)    ( (This)->lpVtbl -> Begin_onAddChild(This,prddpChild) )
#define AsyncIDebugApplicationNodeEvents_Finish_onAddChild(This)    ( (This)->lpVtbl -> Finish_onAddChild(This) )
#define AsyncIDebugApplicationNodeEvents_Begin_onRemoveChild(This,prddpChild)    ( (This)->lpVtbl -> Begin_onRemoveChild(This,prddpChild) )
#define AsyncIDebugApplicationNodeEvents_Finish_onRemoveChild(This)    ( (This)->lpVtbl -> Finish_onRemoveChild(This) )
#define AsyncIDebugApplicationNodeEvents_Begin_onDetach(This)    ( (This)->lpVtbl -> Begin_onDetach(This) )
#define AsyncIDebugApplicationNodeEvents_Finish_onDetach(This)    ( (This)->lpVtbl -> Finish_onDetach(This) )
#define AsyncIDebugApplicationNodeEvents_Begin_onAttach(This,prddpParent)    ( (This)->lpVtbl -> Begin_onAttach(This,prddpParent) )
#define AsyncIDebugApplicationNodeEvents_Finish_onAttach(This)    ( (This)->lpVtbl -> Finish_onAttach(This) )
#endif
#endif
#ifndef DISABLE_ACTIVDBG_INTERFACE_WRAPPERS
#ifdef _WIN64
#define IDebugThreadCall IDebugThreadCall64
#define IID_IDebugThreadCall IID_IDebugThreadCall64
#else
#define IDebugThreadCall IDebugThreadCall32
#define IID_IDebugThreadCall IID_IDebugThreadCall32
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0045_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0045_v0_0_s_ifspec;
#ifndef __IDebugThreadCall32_INTERFACE_DEFINED__
#define __IDebugThreadCall32_INTERFACE_DEFINED__
extern const IID IID_IDebugThreadCall32;
typedef struct IDebugThreadCall32Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugThreadCall32 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugThreadCall32 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugThreadCall32 *This);
	HRESULT(STDMETHODCALLTYPE *ThreadCallHandler) (IDebugThreadCall32 *This, DWORD dwParam1, DWORD dwParam2, DWORD dwParam3);
	END_INTERFACE
}  IDebugThreadCall32Vtbl;
interface IDebugThreadCall32
{
	CONST_VTBL struct IDebugThreadCall32Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugThreadCall32_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugThreadCall32_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugThreadCall32_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugThreadCall32_ThreadCallHandler(This,dwParam1,dwParam2,dwParam3)    ( (This)->lpVtbl -> ThreadCallHandler(This,dwParam1,dwParam2,dwParam3) )
#endif
#endif
#ifndef __IDebugThreadCall64_INTERFACE_DEFINED__
#define __IDebugThreadCall64_INTERFACE_DEFINED__
extern const IID IID_IDebugThreadCall64;
typedef struct IDebugThreadCall64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugThreadCall64 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugThreadCall64 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugThreadCall64 *This);
	HRESULT(STDMETHODCALLTYPE *ThreadCallHandler) (IDebugThreadCall64 *This, DWORDLONG dwParam1, DWORDLONG dwParam2, DWORDLONG dwParam3);
	END_INTERFACE
}  IDebugThreadCall64Vtbl;
interface IDebugThreadCall64
{
	CONST_VTBL struct IDebugThreadCall64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugThreadCall64_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugThreadCall64_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugThreadCall64_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugThreadCall64_ThreadCallHandler(This,dwParam1,dwParam2,dwParam3)    ( (This)->lpVtbl -> ThreadCallHandler(This,dwParam1,dwParam2,dwParam3) )
#endif
#endif
#ifndef __IRemoteDebugApplicationThread_INTERFACE_DEFINED__
#define __IRemoteDebugApplicationThread_INTERFACE_DEFINED__
typedef DWORD THREAD_STATE;
#define	THREAD_STATE_RUNNING	( 0x1 )
#define	THREAD_STATE_SUSPENDED	( 0x2 )
#define	THREAD_BLOCKED	( 0x4 )
#define	THREAD_OUT_OF_CONTEXT	( 0x8 )
extern const IID IID_IRemoteDebugApplicationThread;
typedef struct IRemoteDebugApplicationThreadVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRemoteDebugApplicationThread *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRemoteDebugApplicationThread *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRemoteDebugApplicationThread *This);
	HRESULT(STDMETHODCALLTYPE *GetSystemThreadId) (IRemoteDebugApplicationThread *This, DWORD *dwThreadId);
	HRESULT(STDMETHODCALLTYPE *GetApplication) (IRemoteDebugApplicationThread *This, IRemoteDebugApplication **pprda);
	HRESULT(STDMETHODCALLTYPE *EnumStackFrames) (IRemoteDebugApplicationThread *This, IEnumDebugStackFrames **ppedsf);
	HRESULT(STDMETHODCALLTYPE *GetDescription) (IRemoteDebugApplicationThread *This, BSTR *pbstrDescription, BSTR *pbstrState);
	HRESULT(STDMETHODCALLTYPE *SetNextStatement) (IRemoteDebugApplicationThread *This, IDebugStackFrame *pStackFrame, IDebugCodeContext *pCodeContext);
	HRESULT(STDMETHODCALLTYPE *GetState) (IRemoteDebugApplicationThread *This, DWORD *pState);
	HRESULT(STDMETHODCALLTYPE *Suspend) (IRemoteDebugApplicationThread *This, DWORD *pdwCount);
	HRESULT(STDMETHODCALLTYPE *Resume) (IRemoteDebugApplicationThread *This, DWORD *pdwCount);
	HRESULT(STDMETHODCALLTYPE *GetSuspendCount) (IRemoteDebugApplicationThread *This, DWORD *pdwCount);
	END_INTERFACE
}  IRemoteDebugApplicationThreadVtbl;
interface IRemoteDebugApplicationThread
{
	CONST_VTBL struct IRemoteDebugApplicationThreadVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRemoteDebugApplicationThread_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRemoteDebugApplicationThread_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRemoteDebugApplicationThread_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRemoteDebugApplicationThread_GetSystemThreadId(This,dwThreadId)    ( (This)->lpVtbl -> GetSystemThreadId(This,dwThreadId) )
#define IRemoteDebugApplicationThread_GetApplication(This,pprda)    ( (This)->lpVtbl -> GetApplication(This,pprda) )
#define IRemoteDebugApplicationThread_EnumStackFrames(This,ppedsf)    ( (This)->lpVtbl -> EnumStackFrames(This,ppedsf) )
#define IRemoteDebugApplicationThread_GetDescription(This,pbstrDescription,pbstrState)    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription,pbstrState) )
#define IRemoteDebugApplicationThread_SetNextStatement(This,pStackFrame,pCodeContext)    ( (This)->lpVtbl -> SetNextStatement(This,pStackFrame,pCodeContext) )
#define IRemoteDebugApplicationThread_GetState(This,pState)    ( (This)->lpVtbl -> GetState(This,pState) )
#define IRemoteDebugApplicationThread_Suspend(This,pdwCount)    ( (This)->lpVtbl -> Suspend(This,pdwCount) )
#define IRemoteDebugApplicationThread_Resume(This,pdwCount)    ( (This)->lpVtbl -> Resume(This,pdwCount) )
#define IRemoteDebugApplicationThread_GetSuspendCount(This,pdwCount)    ( (This)->lpVtbl -> GetSuspendCount(This,pdwCount) )
#endif
#endif
#ifndef DISABLE_ACTIVDBG_INTERFACE_WRAPPERS
#ifdef _WIN64
#define SynchronousCallIntoThread SynchronousCallIntoThread64
#else
#define SynchronousCallIntoThread SynchronousCallIntoThread32
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0048_v0_0_s_ifspec;
#ifndef __IDebugApplicationThread_INTERFACE_DEFINED__
#define __IDebugApplicationThread_INTERFACE_DEFINED__
extern const IID IID_IDebugApplicationThread;
typedef struct IDebugApplicationThreadVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugApplicationThread *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugApplicationThread *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugApplicationThread *This);
	HRESULT(STDMETHODCALLTYPE *GetSystemThreadId) (IDebugApplicationThread *This, DWORD *dwThreadId);
	HRESULT(STDMETHODCALLTYPE *GetApplication) (IDebugApplicationThread *This, IRemoteDebugApplication **pprda);
	HRESULT(STDMETHODCALLTYPE *EnumStackFrames) (IDebugApplicationThread *This, IEnumDebugStackFrames **ppedsf);
	HRESULT(STDMETHODCALLTYPE *GetDescription) (IDebugApplicationThread *This, BSTR *pbstrDescription, BSTR *pbstrState);
	HRESULT(STDMETHODCALLTYPE *SetNextStatement) (IDebugApplicationThread *This, IDebugStackFrame *pStackFrame, IDebugCodeContext *pCodeContext);
	HRESULT(STDMETHODCALLTYPE *GetState) (IDebugApplicationThread *This, DWORD *pState);
	HRESULT(STDMETHODCALLTYPE *Suspend) (IDebugApplicationThread *This, DWORD *pdwCount);
	HRESULT(STDMETHODCALLTYPE *Resume) (IDebugApplicationThread *This, DWORD *pdwCount);
	HRESULT(STDMETHODCALLTYPE *GetSuspendCount) (IDebugApplicationThread *This, DWORD *pdwCount);
	HRESULT(STDMETHODCALLTYPE *SynchronousCallIntoThread32) (IDebugApplicationThread *This, IDebugThreadCall32 *pstcb, DWORD dwParam1, DWORD dwParam2, DWORD dwParam3);
	HRESULT(STDMETHODCALLTYPE *QueryIsCurrentThread) (IDebugApplicationThread *This);
	HRESULT(STDMETHODCALLTYPE *QueryIsDebuggerThread) (IDebugApplicationThread *This);
	HRESULT(STDMETHODCALLTYPE *SetDescription) (IDebugApplicationThread *This, LPCOLESTR pstrDescription);
	HRESULT(STDMETHODCALLTYPE *SetStateString) (IDebugApplicationThread *This, LPCOLESTR pstrState);
	END_INTERFACE
}  IDebugApplicationThreadVtbl;
interface IDebugApplicationThread
{
	CONST_VTBL struct IDebugApplicationThreadVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugApplicationThread_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugApplicationThread_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugApplicationThread_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugApplicationThread_GetSystemThreadId(This,dwThreadId)    ( (This)->lpVtbl -> GetSystemThreadId(This,dwThreadId) )
#define IDebugApplicationThread_GetApplication(This,pprda)    ( (This)->lpVtbl -> GetApplication(This,pprda) )
#define IDebugApplicationThread_EnumStackFrames(This,ppedsf)    ( (This)->lpVtbl -> EnumStackFrames(This,ppedsf) )
#define IDebugApplicationThread_GetDescription(This,pbstrDescription,pbstrState)    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription,pbstrState) )
#define IDebugApplicationThread_SetNextStatement(This,pStackFrame,pCodeContext)    ( (This)->lpVtbl -> SetNextStatement(This,pStackFrame,pCodeContext) )
#define IDebugApplicationThread_GetState(This,pState)    ( (This)->lpVtbl -> GetState(This,pState) )
#define IDebugApplicationThread_Suspend(This,pdwCount)    ( (This)->lpVtbl -> Suspend(This,pdwCount) )
#define IDebugApplicationThread_Resume(This,pdwCount)    ( (This)->lpVtbl -> Resume(This,pdwCount) )
#define IDebugApplicationThread_GetSuspendCount(This,pdwCount)    ( (This)->lpVtbl -> GetSuspendCount(This,pdwCount) )
#define IDebugApplicationThread_SynchronousCallIntoThread32(This,pstcb,dwParam1,dwParam2,dwParam3)    ( (This)->lpVtbl -> SynchronousCallIntoThread32(This,pstcb,dwParam1,dwParam2,dwParam3) )
#define IDebugApplicationThread_QueryIsCurrentThread(This)    ( (This)->lpVtbl -> QueryIsCurrentThread(This) )
#define IDebugApplicationThread_QueryIsDebuggerThread(This)    ( (This)->lpVtbl -> QueryIsDebuggerThread(This) )
#define IDebugApplicationThread_SetDescription(This,pstrDescription)    ( (This)->lpVtbl -> SetDescription(This,pstrDescription) )
#define IDebugApplicationThread_SetStateString(This,pstrState)    ( (This)->lpVtbl -> SetStateString(This,pstrState) )
#endif
#endif
#ifndef __IDebugApplicationThread64_INTERFACE_DEFINED__
#define __IDebugApplicationThread64_INTERFACE_DEFINED__
extern const IID IID_IDebugApplicationThread64;
typedef struct IDebugApplicationThread64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugApplicationThread64 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugApplicationThread64 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugApplicationThread64 *This);
	HRESULT(STDMETHODCALLTYPE *GetSystemThreadId) (IDebugApplicationThread64 *This, DWORD *dwThreadId);
	HRESULT(STDMETHODCALLTYPE *GetApplication) (IDebugApplicationThread64 *This, IRemoteDebugApplication **pprda);
	HRESULT(STDMETHODCALLTYPE *EnumStackFrames) (IDebugApplicationThread64 *This, IEnumDebugStackFrames **ppedsf);
	HRESULT(STDMETHODCALLTYPE *GetDescription) (IDebugApplicationThread64 *This, BSTR *pbstrDescription, BSTR *pbstrState);
	HRESULT(STDMETHODCALLTYPE *SetNextStatement) (IDebugApplicationThread64 *This, IDebugStackFrame *pStackFrame, IDebugCodeContext *pCodeContext);
	HRESULT(STDMETHODCALLTYPE *GetState) (IDebugApplicationThread64 *This, DWORD *pState);
	HRESULT(STDMETHODCALLTYPE *Suspend) (IDebugApplicationThread64 *This, DWORD *pdwCount);
	HRESULT(STDMETHODCALLTYPE *Resume) (IDebugApplicationThread64 *This, DWORD *pdwCount);
	HRESULT(STDMETHODCALLTYPE *GetSuspendCount) (IDebugApplicationThread64 *This, DWORD *pdwCount);
	HRESULT(STDMETHODCALLTYPE *SynchronousCallIntoThread32) (IDebugApplicationThread64 *This, IDebugThreadCall32 *pstcb, DWORD dwParam1, DWORD dwParam2, DWORD dwParam3);
	HRESULT(STDMETHODCALLTYPE *QueryIsCurrentThread) (IDebugApplicationThread64 *This);
	HRESULT(STDMETHODCALLTYPE *QueryIsDebuggerThread) (IDebugApplicationThread64 *This);
	HRESULT(STDMETHODCALLTYPE *SetDescription) (IDebugApplicationThread64 *This, LPCOLESTR pstrDescription);
	HRESULT(STDMETHODCALLTYPE *SetStateString) (IDebugApplicationThread64 *This, LPCOLESTR pstrState);
	HRESULT(STDMETHODCALLTYPE *SynchronousCallIntoThread64) (IDebugApplicationThread64 *This, IDebugThreadCall64 *pstcb, DWORDLONG dwParam1, DWORDLONG dwParam2, DWORDLONG dwParam3);
	END_INTERFACE
}  IDebugApplicationThread64Vtbl;
interface IDebugApplicationThread64
{
	CONST_VTBL struct IDebugApplicationThread64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugApplicationThread64_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugApplicationThread64_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugApplicationThread64_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugApplicationThread64_GetSystemThreadId(This,dwThreadId)    ( (This)->lpVtbl -> GetSystemThreadId(This,dwThreadId) )
#define IDebugApplicationThread64_GetApplication(This,pprda)    ( (This)->lpVtbl -> GetApplication(This,pprda) )
#define IDebugApplicationThread64_EnumStackFrames(This,ppedsf)    ( (This)->lpVtbl -> EnumStackFrames(This,ppedsf) )
#define IDebugApplicationThread64_GetDescription(This,pbstrDescription,pbstrState)    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription,pbstrState) )
#define IDebugApplicationThread64_SetNextStatement(This,pStackFrame,pCodeContext)    ( (This)->lpVtbl -> SetNextStatement(This,pStackFrame,pCodeContext) )
#define IDebugApplicationThread64_GetState(This,pState)    ( (This)->lpVtbl -> GetState(This,pState) )
#define IDebugApplicationThread64_Suspend(This,pdwCount)    ( (This)->lpVtbl -> Suspend(This,pdwCount) )
#define IDebugApplicationThread64_Resume(This,pdwCount)    ( (This)->lpVtbl -> Resume(This,pdwCount) )
#define IDebugApplicationThread64_GetSuspendCount(This,pdwCount)    ( (This)->lpVtbl -> GetSuspendCount(This,pdwCount) )
#define IDebugApplicationThread64_SynchronousCallIntoThread32(This,pstcb,dwParam1,dwParam2,dwParam3)    ( (This)->lpVtbl -> SynchronousCallIntoThread32(This,pstcb,dwParam1,dwParam2,dwParam3) )
#define IDebugApplicationThread64_QueryIsCurrentThread(This)    ( (This)->lpVtbl -> QueryIsCurrentThread(This) )
#define IDebugApplicationThread64_QueryIsDebuggerThread(This)    ( (This)->lpVtbl -> QueryIsDebuggerThread(This) )
#define IDebugApplicationThread64_SetDescription(This,pstrDescription)    ( (This)->lpVtbl -> SetDescription(This,pstrDescription) )
#define IDebugApplicationThread64_SetStateString(This,pstrState)    ( (This)->lpVtbl -> SetStateString(This,pstrState) )
#define IDebugApplicationThread64_SynchronousCallIntoThread64(This,pstcb,dwParam1,dwParam2,dwParam3)    ( (This)->lpVtbl -> SynchronousCallIntoThread64(This,pstcb,dwParam1,dwParam2,dwParam3) )
#endif
#endif
#ifndef __IDebugCookie_INTERFACE_DEFINED__
#define __IDebugCookie_INTERFACE_DEFINED__
extern const IID IID_IDebugCookie;
typedef struct IDebugCookieVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugCookie *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugCookie *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugCookie *This);
	HRESULT(STDMETHODCALLTYPE *SetDebugCookie) (IDebugCookie *This, DWORD dwDebugAppCookie);
	END_INTERFACE
}  IDebugCookieVtbl;
interface IDebugCookie
{
	CONST_VTBL struct IDebugCookieVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugCookie_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugCookie_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugCookie_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugCookie_SetDebugCookie(This,dwDebugAppCookie)    ( (This)->lpVtbl -> SetDebugCookie(This,dwDebugAppCookie) )
#endif
#endif
#ifndef __IEnumDebugApplicationNodes_INTERFACE_DEFINED__
#define __IEnumDebugApplicationNodes_INTERFACE_DEFINED__
extern const IID IID_IEnumDebugApplicationNodes;
typedef struct IEnumDebugApplicationNodesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumDebugApplicationNodes *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumDebugApplicationNodes *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumDebugApplicationNodes *This);
	HRESULT(__stdcall *Next) (IEnumDebugApplicationNodes *This, ULONG celt, IDebugApplicationNode **pprddp, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumDebugApplicationNodes *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumDebugApplicationNodes *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumDebugApplicationNodes *This, IEnumDebugApplicationNodes **pperddp);
	END_INTERFACE
}  IEnumDebugApplicationNodesVtbl;
interface IEnumDebugApplicationNodes
{
	CONST_VTBL struct IEnumDebugApplicationNodesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDebugApplicationNodes_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDebugApplicationNodes_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumDebugApplicationNodes_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumDebugApplicationNodes_Next(This,celt,pprddp,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,pprddp,pceltFetched) )
#define IEnumDebugApplicationNodes_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumDebugApplicationNodes_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumDebugApplicationNodes_Clone(This,pperddp)    ( (This)->lpVtbl -> Clone(This,pperddp) )
#endif
HRESULT __stdcall IEnumDebugApplicationNodes_RemoteNext_Proxy(IEnumDebugApplicationNodes *This, ULONG celt, IDebugApplicationNode **pprddp, ULONG *pceltFetched);
void __RPC_STUB IEnumDebugApplicationNodes_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumRemoteDebugApplications_INTERFACE_DEFINED__
#define __IEnumRemoteDebugApplications_INTERFACE_DEFINED__
extern const IID IID_IEnumRemoteDebugApplications;
typedef struct IEnumRemoteDebugApplicationsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumRemoteDebugApplications *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumRemoteDebugApplications *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumRemoteDebugApplications *This);
	HRESULT(__stdcall *Next) (IEnumRemoteDebugApplications *This, ULONG celt, IRemoteDebugApplication **ppda, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumRemoteDebugApplications *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumRemoteDebugApplications *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumRemoteDebugApplications *This, IEnumRemoteDebugApplications **ppessd);
	END_INTERFACE
}  IEnumRemoteDebugApplicationsVtbl;
interface IEnumRemoteDebugApplications
{
	CONST_VTBL struct IEnumRemoteDebugApplicationsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumRemoteDebugApplications_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumRemoteDebugApplications_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumRemoteDebugApplications_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumRemoteDebugApplications_Next(This,celt,ppda,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,ppda,pceltFetched) )
#define IEnumRemoteDebugApplications_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumRemoteDebugApplications_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumRemoteDebugApplications_Clone(This,ppessd)    ( (This)->lpVtbl -> Clone(This,ppessd) )
#endif
HRESULT __stdcall IEnumRemoteDebugApplications_RemoteNext_Proxy(IEnumRemoteDebugApplications *This, ULONG celt, IRemoteDebugApplication **ppda, ULONG *pceltFetched);
void __RPC_STUB IEnumRemoteDebugApplications_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumRemoteDebugApplicationThreads_INTERFACE_DEFINED__
#define __IEnumRemoteDebugApplicationThreads_INTERFACE_DEFINED__
extern const IID IID_IEnumRemoteDebugApplicationThreads;
typedef struct IEnumRemoteDebugApplicationThreadsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumRemoteDebugApplicationThreads *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumRemoteDebugApplicationThreads *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumRemoteDebugApplicationThreads *This);
	HRESULT(__stdcall *Next) (IEnumRemoteDebugApplicationThreads *This, ULONG celt, IRemoteDebugApplicationThread **pprdat, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumRemoteDebugApplicationThreads *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumRemoteDebugApplicationThreads *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumRemoteDebugApplicationThreads *This, IEnumRemoteDebugApplicationThreads **pperdat);
	END_INTERFACE
}  IEnumRemoteDebugApplicationThreadsVtbl;
interface IEnumRemoteDebugApplicationThreads
{
	CONST_VTBL struct IEnumRemoteDebugApplicationThreadsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumRemoteDebugApplicationThreads_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumRemoteDebugApplicationThreads_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumRemoteDebugApplicationThreads_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumRemoteDebugApplicationThreads_Next(This,celt,pprdat,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,pprdat,pceltFetched) )
#define IEnumRemoteDebugApplicationThreads_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumRemoteDebugApplicationThreads_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumRemoteDebugApplicationThreads_Clone(This,pperdat)    ( (This)->lpVtbl -> Clone(This,pperdat) )
#endif
HRESULT __stdcall IEnumRemoteDebugApplicationThreads_RemoteNext_Proxy(IEnumRemoteDebugApplicationThreads *This, ULONG celt, IRemoteDebugApplicationThread **ppdat, ULONG *pceltFetched);
void __RPC_STUB IEnumRemoteDebugApplicationThreads_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IDebugFormatter_INTERFACE_DEFINED__
#define __IDebugFormatter_INTERFACE_DEFINED__
extern const IID IID_IDebugFormatter;
typedef struct IDebugFormatterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugFormatter *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugFormatter *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugFormatter *This);
	HRESULT(STDMETHODCALLTYPE *GetStringForVariant) (IDebugFormatter *This, VARIANT *pvar, ULONG nRadix, BSTR *pbstrValue);
	HRESULT(STDMETHODCALLTYPE *GetVariantForString) (IDebugFormatter *This, LPCOLESTR pwstrValue, VARIANT *pvar);
	HRESULT(STDMETHODCALLTYPE *GetStringForVarType) (IDebugFormatter *This, VARTYPE vt, TYPEDESC *ptdescArrayType, BSTR *pbstr);
	END_INTERFACE
}  IDebugFormatterVtbl;
interface IDebugFormatter
{
	CONST_VTBL struct IDebugFormatterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugFormatter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugFormatter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugFormatter_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugFormatter_GetStringForVariant(This,pvar,nRadix,pbstrValue)    ( (This)->lpVtbl -> GetStringForVariant(This,pvar,nRadix,pbstrValue) )
#define IDebugFormatter_GetVariantForString(This,pwstrValue,pvar)    ( (This)->lpVtbl -> GetVariantForString(This,pwstrValue,pvar) )
#define IDebugFormatter_GetStringForVarType(This,vt,ptdescArrayType,pbstr)    ( (This)->lpVtbl -> GetStringForVarType(This,vt,ptdescArrayType,pbstr) )
#endif
#endif
#ifndef __ISimpleConnectionPoint_INTERFACE_DEFINED__
#define __ISimpleConnectionPoint_INTERFACE_DEFINED__
extern const IID IID_ISimpleConnectionPoint;
typedef struct ISimpleConnectionPointVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISimpleConnectionPoint *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISimpleConnectionPoint *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISimpleConnectionPoint *This);
	HRESULT(STDMETHODCALLTYPE *GetEventCount) (ISimpleConnectionPoint *This, ULONG *pulCount);
	HRESULT(STDMETHODCALLTYPE *DescribeEvents) (ISimpleConnectionPoint *This, ULONG iEvent, ULONG cEvents, DISPID *prgid, BSTR *prgbstr, ULONG *pcEventsFetched);
	HRESULT(STDMETHODCALLTYPE *Advise) (ISimpleConnectionPoint *This, IDispatch *pdisp, DWORD *pdwCookie);
	HRESULT(STDMETHODCALLTYPE *Unadvise) (ISimpleConnectionPoint *This, DWORD dwCookie);
	END_INTERFACE
}  ISimpleConnectionPointVtbl;
interface ISimpleConnectionPoint
{
	CONST_VTBL struct ISimpleConnectionPointVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISimpleConnectionPoint_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISimpleConnectionPoint_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ISimpleConnectionPoint_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ISimpleConnectionPoint_GetEventCount(This,pulCount)    ( (This)->lpVtbl -> GetEventCount(This,pulCount) )
#define ISimpleConnectionPoint_DescribeEvents(This,iEvent,cEvents,prgid,prgbstr,pcEventsFetched)    ( (This)->lpVtbl -> DescribeEvents(This,iEvent,cEvents,prgid,prgbstr,pcEventsFetched) )
#define ISimpleConnectionPoint_Advise(This,pdisp,pdwCookie)    ( (This)->lpVtbl -> Advise(This,pdisp,pdwCookie) )
#define ISimpleConnectionPoint_Unadvise(This,dwCookie)    ( (This)->lpVtbl -> Unadvise(This,dwCookie) )
#endif
#endif
extern const CLSID CLSID_DebugHelper;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0056_v0_0_s_ifspec;
#ifndef __IDebugHelper_INTERFACE_DEFINED__
#define __IDebugHelper_INTERFACE_DEFINED__
extern const IID IID_IDebugHelper;
typedef struct IDebugHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDebugHelper *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDebugHelper *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDebugHelper *This);
	HRESULT(STDMETHODCALLTYPE *CreatePropertyBrowser) (IDebugHelper *This, VARIANT *pvar, LPCOLESTR bstrName, IDebugApplicationThread *pdat, IDebugProperty **ppdob);
	HRESULT(STDMETHODCALLTYPE *CreatePropertyBrowserEx) (IDebugHelper *This, VARIANT *pvar, LPCOLESTR bstrName, IDebugApplicationThread *pdat, IDebugFormatter *pdf, IDebugProperty **ppdob);
	HRESULT(STDMETHODCALLTYPE *CreateSimpleConnectionPoint) (IDebugHelper *This, IDispatch *pdisp, ISimpleConnectionPoint **ppscp);
	END_INTERFACE
}  IDebugHelperVtbl;
interface IDebugHelper
{
	CONST_VTBL struct IDebugHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDebugHelper_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDebugHelper_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDebugHelper_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDebugHelper_CreatePropertyBrowser(This,pvar,bstrName,pdat,ppdob)    ( (This)->lpVtbl -> CreatePropertyBrowser(This,pvar,bstrName,pdat,ppdob) )
#define IDebugHelper_CreatePropertyBrowserEx(This,pvar,bstrName,pdat,pdf,ppdob)    ( (This)->lpVtbl -> CreatePropertyBrowserEx(This,pvar,bstrName,pdat,pdf,ppdob) )
#define IDebugHelper_CreateSimpleConnectionPoint(This,pdisp,ppscp)    ( (This)->lpVtbl -> CreateSimpleConnectionPoint(This,pdisp,ppscp) )
#endif
#endif
#ifndef __IEnumDebugExpressionContexts_INTERFACE_DEFINED__
#define __IEnumDebugExpressionContexts_INTERFACE_DEFINED__
extern const IID IID_IEnumDebugExpressionContexts;
typedef struct IEnumDebugExpressionContextsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumDebugExpressionContexts *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumDebugExpressionContexts *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumDebugExpressionContexts *This);
	HRESULT(__stdcall *Next) (IEnumDebugExpressionContexts *This, ULONG celt, IDebugExpressionContext **ppdec, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumDebugExpressionContexts *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumDebugExpressionContexts *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumDebugExpressionContexts *This, IEnumDebugExpressionContexts **ppedec);
	END_INTERFACE
}  IEnumDebugExpressionContextsVtbl;
interface IEnumDebugExpressionContexts
{
	CONST_VTBL struct IEnumDebugExpressionContextsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDebugExpressionContexts_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDebugExpressionContexts_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumDebugExpressionContexts_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumDebugExpressionContexts_Next(This,celt,ppdec,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,ppdec,pceltFetched) )
#define IEnumDebugExpressionContexts_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumDebugExpressionContexts_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumDebugExpressionContexts_Clone(This,ppedec)    ( (This)->lpVtbl -> Clone(This,ppedec) )
#endif
HRESULT __stdcall IEnumDebugExpressionContexts_RemoteNext_Proxy(IEnumDebugExpressionContexts *This, ULONG celt, IDebugExpressionContext **pprgdec, ULONG *pceltFetched);
void __RPC_STUB IEnumDebugExpressionContexts_RemoteNext_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IProvideExpressionContexts_INTERFACE_DEFINED__
#define __IProvideExpressionContexts_INTERFACE_DEFINED__
extern const IID IID_IProvideExpressionContexts;
typedef struct IProvideExpressionContextsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IProvideExpressionContexts *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IProvideExpressionContexts *This);
	ULONG(STDMETHODCALLTYPE *Release) (IProvideExpressionContexts *This);
	HRESULT(STDMETHODCALLTYPE *EnumExpressionContexts) (IProvideExpressionContexts *This, IEnumDebugExpressionContexts **ppedec);
	END_INTERFACE
}  IProvideExpressionContextsVtbl;
interface IProvideExpressionContexts
{
	CONST_VTBL struct IProvideExpressionContextsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProvideExpressionContexts_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProvideExpressionContexts_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IProvideExpressionContexts_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IProvideExpressionContexts_EnumExpressionContexts(This,ppedec)    ( (This)->lpVtbl -> EnumExpressionContexts(This,ppedec) )
#endif
#endif
#ifndef __ProcessDebugManagerLib_LIBRARY_DEFINED__
#define __ProcessDebugManagerLib_LIBRARY_DEFINED__
extern const CLSID CLSID_CDebugDocumentHelper;
#ifdef DEBUG
#define MachineDebugManger MachineDebugManager_DEBUG
#define CLSID_MachineDebugManager CLSID_MachineDebugManager_DEBUG
#else
#define MachineDebugManger MachineDebugManager_RETAIL
#define CLSID_MachineDebugManager CLSID_MachineDebugManager_RETAIL
#endif
extern const IID LIBID_ProcessDebugManagerLib;
extern const CLSID CLSID_ProcessDebugManager;
extern const CLSID CLSID_DebugHelper;
extern const CLSID CLSID_CDebugDocumentHelper;
extern const CLSID CLSID_MachineDebugManager_RETAIL;
extern const CLSID CLSID_MachineDebugManager_DEBUG;
extern const CLSID CLSID_DefaultDebugSessionProvider;
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0059_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activdbg_0000_0059_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
HRESULT __stdcall IEnumDebugCodeContexts_Next_Proxy(IEnumDebugCodeContexts *This, ULONG celt, IDebugCodeContext **pscc, ULONG *pceltFetched);
HRESULT __stdcall IEnumDebugCodeContexts_Next_Stub(IEnumDebugCodeContexts *This, ULONG celt, IDebugCodeContext **pscc, ULONG *pceltFetched);
HRESULT __stdcall IEnumDebugStackFrames_Next_Proxy(IEnumDebugStackFrames *This, ULONG celt, DebugStackFrameDescriptor *prgdsfd, ULONG *pceltFetched);
HRESULT __stdcall IEnumDebugStackFrames_Next_Stub(IEnumDebugStackFrames *This, ULONG celt, DebugStackFrameDescriptor *prgdsfd, ULONG *pceltFetched);
HRESULT __stdcall IEnumDebugStackFrames64_Next64_Proxy(IEnumDebugStackFrames64 *This, ULONG celt, DebugStackFrameDescriptor64 *prgdsfd, ULONG *pceltFetched);
HRESULT __stdcall IEnumDebugStackFrames64_Next64_Stub(IEnumDebugStackFrames64 *This, ULONG celt, DebugStackFrameDescriptor64 *prgdsfd, ULONG *pceltFetched);
HRESULT __stdcall IEnumDebugApplicationNodes_Next_Proxy(IEnumDebugApplicationNodes *This, ULONG celt, IDebugApplicationNode **pprddp, ULONG *pceltFetched);
HRESULT __stdcall IEnumDebugApplicationNodes_Next_Stub(IEnumDebugApplicationNodes *This, ULONG celt, IDebugApplicationNode **pprddp, ULONG *pceltFetched);
HRESULT __stdcall IEnumRemoteDebugApplications_Next_Proxy(IEnumRemoteDebugApplications *This, ULONG celt, IRemoteDebugApplication **ppda, ULONG *pceltFetched);
HRESULT __stdcall IEnumRemoteDebugApplications_Next_Stub(IEnumRemoteDebugApplications *This, ULONG celt, IRemoteDebugApplication **ppda, ULONG *pceltFetched);
HRESULT __stdcall IEnumRemoteDebugApplicationThreads_Next_Proxy(IEnumRemoteDebugApplicationThreads *This, ULONG celt, IRemoteDebugApplicationThread **pprdat, ULONG *pceltFetched);
HRESULT __stdcall IEnumRemoteDebugApplicationThreads_Next_Stub(IEnumRemoteDebugApplicationThreads *This, ULONG celt, IRemoteDebugApplicationThread **ppdat, ULONG *pceltFetched);
HRESULT __stdcall IEnumDebugExpressionContexts_Next_Proxy(IEnumDebugExpressionContexts *This, ULONG celt, IDebugExpressionContext **ppdec, ULONG *pceltFetched);
HRESULT __stdcall IEnumDebugExpressionContexts_Next_Stub(IEnumDebugExpressionContexts *This, ULONG celt, IDebugExpressionContext **pprgdec, ULONG *pceltFetched);
#endif
