/*+@@file@@----------------------------------------------------------------*//*!
 \file		ActivScp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep  9 15:11:54 2016
 \date		Modified on Fri Sep  9 15:11:54 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __activscp_h__
#define __activscp_h__
#ifndef __IActiveScriptSite_FWD_DEFINED__
#define __IActiveScriptSite_FWD_DEFINED__
typedef interface IActiveScriptSite IActiveScriptSite;
#endif
#ifndef __IActiveScriptError_FWD_DEFINED__
#define __IActiveScriptError_FWD_DEFINED__
typedef interface IActiveScriptError IActiveScriptError;
#endif
#ifndef __IActiveScriptError64_FWD_DEFINED__
#define __IActiveScriptError64_FWD_DEFINED__
typedef interface IActiveScriptError64 IActiveScriptError64;
#endif
#ifndef __IActiveScriptSiteWindow_FWD_DEFINED__
#define __IActiveScriptSiteWindow_FWD_DEFINED__
typedef interface IActiveScriptSiteWindow IActiveScriptSiteWindow;
#endif
#ifndef __IActiveScriptSiteUIControl_FWD_DEFINED__
#define __IActiveScriptSiteUIControl_FWD_DEFINED__
typedef interface IActiveScriptSiteUIControl IActiveScriptSiteUIControl;
#endif
#ifndef __IActiveScriptSiteInterruptPoll_FWD_DEFINED__
#define __IActiveScriptSiteInterruptPoll_FWD_DEFINED__
typedef interface IActiveScriptSiteInterruptPoll IActiveScriptSiteInterruptPoll;
#endif
#ifndef __IActiveScript_FWD_DEFINED__
#define __IActiveScript_FWD_DEFINED__
typedef interface IActiveScript IActiveScript;
#endif
#ifndef __IActiveScriptParse32_FWD_DEFINED__
#define __IActiveScriptParse32_FWD_DEFINED__
typedef interface IActiveScriptParse32 IActiveScriptParse32;
#endif
#ifndef __IActiveScriptParse64_FWD_DEFINED__
#define __IActiveScriptParse64_FWD_DEFINED__
typedef interface IActiveScriptParse64 IActiveScriptParse64;
#endif
#ifndef __IActiveScriptParseProcedureOld32_FWD_DEFINED__
#define __IActiveScriptParseProcedureOld32_FWD_DEFINED__
typedef interface IActiveScriptParseProcedureOld32 IActiveScriptParseProcedureOld32;
#endif
#ifndef __IActiveScriptParseProcedureOld64_FWD_DEFINED__
#define __IActiveScriptParseProcedureOld64_FWD_DEFINED__
typedef interface IActiveScriptParseProcedureOld64 IActiveScriptParseProcedureOld64;
#endif
#ifndef __IActiveScriptParseProcedure32_FWD_DEFINED__
#define __IActiveScriptParseProcedure32_FWD_DEFINED__
typedef interface IActiveScriptParseProcedure32 IActiveScriptParseProcedure32;
#endif
#ifndef __IActiveScriptParseProcedure64_FWD_DEFINED__
#define __IActiveScriptParseProcedure64_FWD_DEFINED__
typedef interface IActiveScriptParseProcedure64 IActiveScriptParseProcedure64;
#endif
#ifndef __IActiveScriptParseProcedure2_32_FWD_DEFINED__
#define __IActiveScriptParseProcedure2_32_FWD_DEFINED__
typedef interface IActiveScriptParseProcedure2_32 IActiveScriptParseProcedure2_32;
#endif
#ifndef __IActiveScriptParseProcedure2_64_FWD_DEFINED__
#define __IActiveScriptParseProcedure2_64_FWD_DEFINED__
typedef interface IActiveScriptParseProcedure2_64 IActiveScriptParseProcedure2_64;
#endif
#ifndef __IActiveScriptEncode_FWD_DEFINED__
#define __IActiveScriptEncode_FWD_DEFINED__
typedef interface IActiveScriptEncode IActiveScriptEncode;
#endif
#ifndef __IActiveScriptHostEncode_FWD_DEFINED__
#define __IActiveScriptHostEncode_FWD_DEFINED__
typedef interface IActiveScriptHostEncode IActiveScriptHostEncode;
#endif
#ifndef __IBindEventHandler_FWD_DEFINED__
#define __IBindEventHandler_FWD_DEFINED__
typedef interface IBindEventHandler IBindEventHandler;
#endif
#ifndef __IActiveScriptStats_FWD_DEFINED__
#define __IActiveScriptStats_FWD_DEFINED__
typedef interface IActiveScriptStats IActiveScriptStats;
#endif
#ifndef __IActiveScriptProperty_FWD_DEFINED__
#define __IActiveScriptProperty_FWD_DEFINED__
typedef interface IActiveScriptProperty IActiveScriptProperty;
#endif
#ifndef __ITridentEventSink_FWD_DEFINED__
#define __ITridentEventSink_FWD_DEFINED__
typedef interface ITridentEventSink ITridentEventSink;
#endif
#ifndef __IActiveScriptGarbageCollector_FWD_DEFINED__
#define __IActiveScriptGarbageCollector_FWD_DEFINED__
typedef interface IActiveScriptGarbageCollector IActiveScriptGarbageCollector;
#endif
#ifndef __IActiveScriptSIPInfo_FWD_DEFINED__
#define __IActiveScriptSIPInfo_FWD_DEFINED__
typedef interface IActiveScriptSIPInfo IActiveScriptSIPInfo;
#endif
#ifndef __IActiveScriptSiteTraceInfo_FWD_DEFINED__
#define __IActiveScriptSiteTraceInfo_FWD_DEFINED__
typedef interface IActiveScriptSiteTraceInfo IActiveScriptSiteTraceInfo;
#endif
#ifndef __IActiveScriptTraceInfo_FWD_DEFINED__
#define __IActiveScriptTraceInfo_FWD_DEFINED__
typedef interface IActiveScriptTraceInfo IActiveScriptTraceInfo;
#endif
#ifndef __IActiveScriptStringCompare_FWD_DEFINED__
#define __IActiveScriptStringCompare_FWD_DEFINED__
typedef interface IActiveScriptStringCompare IActiveScriptStringCompare;
#endif
#include <ocidl.h>
#pragma comment(lib,"uuid.lib")
#ifndef __ActivScp_h
#define __ActivScp_h
#ifndef _NO_SCRIPT_GUIDS
DEFINE_GUID(CATID_ActiveScript, 0xf0b7a1a1, 0x9847, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(CATID_ActiveScriptParse, 0xf0b7a1a2, 0x9847, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(CATID_ActiveScriptEncode, 0xf0b7a1a3, 0x9847, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScript, 0xbb1a2ae1, 0xa4f9, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScriptParse32, 0xbb1a2ae2, 0xa4f9, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScriptParse64, 0xc7ef7658, 0xe1ee, 0x480e, 0x97, 0xea, 0xd5, 0x2c, 0xb4, 0xd7, 0x6d, 0x17);
DEFINE_GUID(IID_IActiveScriptEncode, 0xbb1a2ae3, 0xa4f9, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScriptHostEncode, 0xbee9b76e, 0xcfe3, 0x11d1, 0xb7, 0x47, 0x00, 0xc0, 0x4f, 0xc2, 0xb0, 0x85);
DEFINE_GUID(IID_IActiveScriptParseProcedureOld32, 0x1cff0050, 0x6fdd, 0x11d0, 0x93, 0x28, 0x00, 0xa0, 0xc9, 0x0d, 0xca, 0xa9);
DEFINE_GUID(IID_IActiveScriptParseProcedureOld64, 0x21f57128, 0x08c9, 0x4638, 0xba, 0x12, 0x22, 0xd1, 0x5d, 0x88, 0xdc, 0x5c);
DEFINE_GUID(IID_IActiveScriptParseProcedure32, 0xaa5b6a80, 0xb834, 0x11d0, 0x93, 0x2f, 0x00, 0xa0, 0xc9, 0x0d, 0xca, 0xa9);
DEFINE_GUID(IID_IActiveScriptParseProcedure64, 0xc64713b6, 0xe029, 0x4cc5, 0x92, 0x00, 0x43, 0x8b, 0x72, 0x89, 0x0b, 0x6a);
DEFINE_GUID(IID_IActiveScriptParseProcedure2_32, 0x71ee5b20, 0xfb04, 0x11d1, 0xb3, 0xa8, 0x00, 0xa0, 0xc9, 0x11, 0xe8, 0xb2);
DEFINE_GUID(IID_IActiveScriptParseProcedure2_64, 0xfe7c4271, 0x210c, 0x448d, 0x9f, 0x54, 0x76, 0xda, 0xb7, 0x04, 0x7b, 0x28);
DEFINE_GUID(IID_IActiveScriptSite, 0xdb01a1e3, 0xa42b, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScriptSiteTraceInfo, 0x4b7272ae, 0x1955, 0x4bfe, 0x98, 0xb0, 0x78, 0x6, 0x21, 0x88, 0x85, 0x69);
DEFINE_GUID(IID_IActiveScriptSiteWindow, 0xd10f6761, 0x83e9, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScriptSiteInterruptPoll, 0x539698a0, 0xcdca, 0x11cf, 0xa5, 0xeb, 0x00, 0xaa, 0x00, 0x47, 0xa0, 0x63);
DEFINE_GUID(IID_IActiveScriptSiteUIControl, 0xaedae97e, 0xd7ee, 0x4796, 0xb9, 0x60, 0x7f, 0x9, 0x2a, 0xe8, 0x44, 0xab);
DEFINE_GUID(IID_IActiveScriptError, 0xeae1ba61, 0xa4ed, 0x11cf, 0x8f, 0x20, 0x00, 0x80, 0x5f, 0x2c, 0xd0, 0x64);
DEFINE_GUID(IID_IActiveScriptError64, 0xb21fb2a1, 0x5b8f, 0x4963, 0x8c, 0x21, 0x21, 0x45, 0x0f, 0x84, 0xed, 0x7f);
DEFINE_GUID(IID_IBindEventHandler, 0x63cdbcb0, 0xc1b1, 0x11d0, 0x93, 0x36, 0x00, 0xa0, 0xc9, 0x0d, 0xca, 0xa9);
DEFINE_GUID(IID_IActiveScriptStats, 0xb8da6310, 0xe19b, 0x11d0, 0x93, 0x3c, 0x00, 0xa0, 0xc9, 0x0d, 0xca, 0xa9);
DEFINE_GUID(IID_IActiveScriptProperty, 0x4954E0D0, 0xFBC7, 0x11D1, 0x84, 0x10, 0x00, 0x60, 0x08, 0xC3, 0xFB, 0xFC);
DEFINE_GUID(IID_ITridentEventSink, 0x1dc9ca50, 0x6ef, 0x11d2, 0x84, 0x15, 0x00, 0x60, 0x08, 0xc3, 0xfb, 0xfc);
DEFINE_GUID(IID_IActiveScriptGarbageCollector, 0x6aa2c4a0, 0x2b53, 0x11d4, 0xa2, 0xa0, 0x00, 0x10, 0x4b, 0xd3, 0x50, 0x90);
DEFINE_GUID(IID_IActiveScriptSIPInfo, 0x764651d0, 0x38de, 0x11d4, 0xa2, 0xa3, 0x00, 0x10, 0x4b, 0xd3, 0x50, 0x90);
DEFINE_GUID(IID_IActiveScriptTraceInfo, 0xC35456E7, 0xBEBF, 0x4a1b, 0x86, 0xA9, 0x24, 0xD5, 0x6B, 0xE8, 0xB3, 0x69);
DEFINE_GUID(OID_VBSSIP, 0x1629f04e, 0x2799, 0x4db5, 0x8f, 0xe5, 0xac, 0xe1, 0x0f, 0x17, 0xeb, 0xab);
DEFINE_GUID(OID_JSSIP, 0x6c9e010, 0x38ce, 0x11d4, 0xa2, 0xa3, 0x00, 0x10, 0x4b, 0xd3, 0x50, 0x90);
DEFINE_GUID(OID_WSFSIP, 0x1a610570, 0x38ce, 0x11d4, 0xa2, 0xa3, 0x00, 0x10, 0x4b, 0xd3, 0x50, 0x90);
DEFINE_GUID(IID_IActiveScriptStringCompare, 0x58562769, 0xED52, 0x42f7, 0x84, 0x03, 0x49, 0x63, 0x51, 0x4E, 0x1F, 0x11);
#endif
#define SCRIPTITEM_ISVISIBLE            0x00000002
#define SCRIPTITEM_ISSOURCE             0x00000004
#define SCRIPTITEM_GLOBALMEMBERS        0x00000008
#define SCRIPTITEM_ISPERSISTENT         0x00000040
#define SCRIPTITEM_CODEONLY             0x00000200
#define SCRIPTITEM_NOCODE               0x00000400
#define SCRIPTITEM_ALL_FLAGS            (SCRIPTITEM_ISSOURCE | SCRIPTITEM_ISVISIBLE | SCRIPTITEM_ISPERSISTENT | SCRIPTITEM_GLOBALMEMBERS | SCRIPTITEM_NOCODE | SCRIPTITEM_CODEONLY)
#define SCRIPTTYPELIB_ISCONTROL         0x00000010
#define SCRIPTTYPELIB_ISPERSISTENT      0x00000040
#define SCRIPTTYPELIB_ALL_FLAGS         (SCRIPTTYPELIB_ISCONTROL | SCRIPTTYPELIB_ISPERSISTENT)
#define SCRIPTTEXT_DELAYEXECUTION       0x00000001
#define SCRIPTTEXT_ISVISIBLE            0x00000002
#define SCRIPTTEXT_ISEXPRESSION         0x00000020
#define SCRIPTTEXT_ISPERSISTENT         0x00000040
#define SCRIPTTEXT_HOSTMANAGESSOURCE    0x00000080
#define SCRIPTTEXT_ISXDOMAIN            0x00000100
#define SCRIPTTEXT_ALL_FLAGS            (SCRIPTTEXT_DELAYEXECUTION | SCRIPTTEXT_ISVISIBLE | SCRIPTTEXT_ISEXPRESSION | SCRIPTTEXT_ISPERSISTENT | SCRIPTTEXT_HOSTMANAGESSOURCE | SCRIPTTEXT_ISXDOMAIN)
#define SCRIPTPROC_ISEXPRESSION         0x00000020
#define SCRIPTPROC_HOSTMANAGESSOURCE    0x00000080
#define SCRIPTPROC_IMPLICIT_THIS        0x00000100
#define SCRIPTPROC_IMPLICIT_PARENTS     0x00000200
#define SCRIPTPROC_ISXDOMAIN            0x00000400
#define SCRIPTPROC_ALL_FLAGS            (SCRIPTPROC_HOSTMANAGESSOURCE | SCRIPTPROC_ISEXPRESSION | SCRIPTPROC_IMPLICIT_THIS | SCRIPTPROC_IMPLICIT_PARENTS | SCRIPTPROC_ISXDOMAIN)
#define SCRIPTINFO_IUNKNOWN             0x00000001
#define SCRIPTINFO_ITYPEINFO            0x00000002
#define SCRIPTINFO_ALL_FLAGS            (SCRIPTINFO_IUNKNOWN | SCRIPTINFO_ITYPEINFO)
#define SCRIPTINTERRUPT_DEBUG           0x00000001
#define SCRIPTINTERRUPT_RAISEEXCEPTION  0x00000002
#define SCRIPTINTERRUPT_ALL_FLAGS       (SCRIPTINTERRUPT_DEBUG | SCRIPTINTERRUPT_RAISEEXCEPTION)
#define SCRIPTSTAT_STATEMENT_COUNT       1
#define SCRIPTSTAT_INSTRUCTION_COUNT     2
#define SCRIPTSTAT_INTSTRUCTION_TIME     3
#define SCRIPTSTAT_TOTAL_TIME            4
#define SCRIPT_ENCODE_SECTION         0x00000001
#define SCRIPT_ENCODE_DEFAULT_LANGUAGE        0x00000001
#define SCRIPT_ENCODE_NO_ASP_LANGUAGE         0x00000002
#define SCRIPTPROP_NAME                     0x00000000
#define SCRIPTPROP_MAJORVERSION             0x00000001
#define SCRIPTPROP_MINORVERSION             0x00000002
#define SCRIPTPROP_BUILDNUMBER              0x00000003
#define SCRIPTPROP_DELAYEDEVENTSINKING      0x00001000
#define SCRIPTPROP_CATCHEXCEPTION           0x00001001
#define SCRIPTPROP_CONVERSIONLCID           0x00001002
#define SCRIPTPROP_HOSTSTACKREQUIRED        0x00001003
#define SCRIPTPROP_DEBUGGER                 0x00001100
#define SCRIPTPROP_JITDEBUG                 0x00001101
#define SCRIPTPROP_GCCONTROLSOFTCLOSE       0x00002000
#define SCRIPTPROP_INTEGERMODE              0x00003000
#define SCRIPTPROP_STRINGCOMPAREINSTANCE    0x00003001
#define SCRIPTPROP_INVOKEVERSIONING         0x00004000
#define SCRIPTPROP_HACK_FIBERSUPPORT        0x70000000
#define SCRIPTPROP_HACK_TRIDENTEVENTSINK    0x70000001
#define SCRIPTPROP_ABBREVIATE_GLOBALNAME_RESOLUTION  0x70000002
typedef enum tagSCRIPTLANGUAGEVERSION
{
	SCRIPTLANGUAGEVERSION_DEFAULT = 0,
	SCRIPTLANGUAGEVERSION_5_7 = 1,
	SCRIPTLANGUAGEVERSION_5_8 = 2,
	SCRIPTLANGUAGEVERSION_MAX = 255
} SCRIPTLANGUAGEVERSION;
typedef enum tagSCRIPTSTATE
{
	SCRIPTSTATE_UNINITIALIZED = 0,
	SCRIPTSTATE_INITIALIZED = 5,
	SCRIPTSTATE_STARTED = 1,
	SCRIPTSTATE_CONNECTED = 2,
	SCRIPTSTATE_DISCONNECTED = 3,
	SCRIPTSTATE_CLOSED = 4
} SCRIPTSTATE;
typedef enum tagSCRIPTTRACEINFO
{
	SCRIPTTRACEINFO_SCRIPTSTART = 0,
	SCRIPTTRACEINFO_SCRIPTEND = 1,
	SCRIPTTRACEINFO_COMCALLSTART = 2,
	SCRIPTTRACEINFO_COMCALLEND = 3,
	SCRIPTTRACEINFO_CREATEOBJSTART = 4,
	SCRIPTTRACEINFO_CREATEOBJEND = 5,
	SCRIPTTRACEINFO_GETOBJSTART = 6,
	SCRIPTTRACEINFO_GETOBJEND = 7
} SCRIPTTRACEINFO;
typedef enum tagSCRIPTTHREADSTATE
{
	SCRIPTTHREADSTATE_NOTINSCRIPT = 0,
	SCRIPTTHREADSTATE_RUNNING = 1
} SCRIPTTHREADSTATE;
typedef enum tagSCRIPTGCTYPE
{
	SCRIPTGCTYPE_NORMAL = 0,
	SCRIPTGCTYPE_EXHAUSTIVE = 1
} SCRIPTGCTYPE;
typedef enum tagSCRIPTUICITEM
{
	SCRIPTUICITEM_INPUTBOX = 1,
	SCRIPTUICITEM_MSGBOX = 2
} SCRIPTUICITEM;
typedef enum tagSCRIPTUICHANDLING
{
	SCRIPTUICHANDLING_ALLOW = 0,
	SCRIPTUICHANDLING_NOUIERROR = 1,
	SCRIPTUICHANDLING_NOUIDEFAULT = 2
} SCRIPTUICHANDLING;
typedef DWORD SCRIPTTHREADID;
#define SCRIPTTHREADID_CURRENT  ((SCRIPTTHREADID)-1)
#define SCRIPTTHREADID_BASE     ((SCRIPTTHREADID)-2)
#define SCRIPTTHREADID_ALL      ((SCRIPTTHREADID)-3)
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0000_v0_0_s_ifspec;
#ifndef __IActiveScriptSite_INTERFACE_DEFINED__
#define __IActiveScriptSite_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptSite;
typedef struct IActiveScriptSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActiveScriptSite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IActiveScriptSite * This);
	ULONG(STDMETHODCALLTYPE * Release) (IActiveScriptSite * This);
	HRESULT(STDMETHODCALLTYPE * GetLCID) (IActiveScriptSite * This, LCID * plcid);
	HRESULT(STDMETHODCALLTYPE * GetItemInfo) (IActiveScriptSite * This, LPCOLESTR pstrName, DWORD dwReturnMask, IUnknown ** ppiunkItem, ITypeInfo ** ppti);
	HRESULT(STDMETHODCALLTYPE * GetDocVersionString) (IActiveScriptSite * This, BSTR * pbstrVersion);
	HRESULT(STDMETHODCALLTYPE * OnScriptTerminate) (IActiveScriptSite * This, const VARIANT * pvarResult, const EXCEPINFO * pexcepinfo);
	HRESULT(STDMETHODCALLTYPE * OnStateChange) (IActiveScriptSite * This, SCRIPTSTATE ssScriptState);
	HRESULT(STDMETHODCALLTYPE * OnScriptError) (IActiveScriptSite * This, IActiveScriptError * pscripterror);
	HRESULT(STDMETHODCALLTYPE * OnEnterScript) (IActiveScriptSite * This);
	HRESULT(STDMETHODCALLTYPE * OnLeaveScript) (IActiveScriptSite * This);
	END_INTERFACE
}  IActiveScriptSiteVtbl;
interface IActiveScriptSite
{
	CONST_VTBL struct IActiveScriptSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptSite_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptSite_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptSite_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptSite_GetLCID(This,plcid) ( (This)->lpVtbl -> GetLCID(This,plcid) )
#define IActiveScriptSite_GetItemInfo(This,pstrName,dwReturnMask,ppiunkItem,ppti) ( (This)->lpVtbl -> GetItemInfo(This,pstrName,dwReturnMask,ppiunkItem,ppti) )
#define IActiveScriptSite_GetDocVersionString(This,pbstrVersion) ( (This)->lpVtbl -> GetDocVersionString(This,pbstrVersion) )
#define IActiveScriptSite_OnScriptTerminate(This,pvarResult,pexcepinfo) ( (This)->lpVtbl -> OnScriptTerminate(This,pvarResult,pexcepinfo) )
#define IActiveScriptSite_OnStateChange(This,ssScriptState) ( (This)->lpVtbl -> OnStateChange(This,ssScriptState) )
#define IActiveScriptSite_OnScriptError(This,pscripterror) ( (This)->lpVtbl -> OnScriptError(This,pscripterror) )
#define IActiveScriptSite_OnEnterScript(This) ( (This)->lpVtbl -> OnEnterScript(This) )
#define IActiveScriptSite_OnLeaveScript(This) ( (This)->lpVtbl -> OnLeaveScript(This) )
#endif
#endif
#ifndef __IActiveScriptError_INTERFACE_DEFINED__
#define __IActiveScriptError_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptError;
typedef struct IActiveScriptErrorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IActiveScriptError * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IActiveScriptError * This);
	ULONG(STDMETHODCALLTYPE * Release) (IActiveScriptError * This);
	HRESULT(STDMETHODCALLTYPE * GetExceptionInfo) (IActiveScriptError * This, EXCEPINFO * pexcepinfo);
	HRESULT(STDMETHODCALLTYPE * GetSourcePosition) (IActiveScriptError * This, DWORD * pdwSourceContext, ULONG * pulLineNumber, LONG * plCharacterPosition);
	HRESULT(STDMETHODCALLTYPE * GetSourceLineText) (IActiveScriptError * This, BSTR * pbstrSourceLine);
	END_INTERFACE
}  IActiveScriptErrorVtbl;
interface IActiveScriptError
{
	CONST_VTBL struct IActiveScriptErrorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptError_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptError_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptError_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptError_GetExceptionInfo(This,pexcepinfo) ( (This)->lpVtbl -> GetExceptionInfo(This,pexcepinfo) )
#define IActiveScriptError_GetSourcePosition(This,pdwSourceContext,pulLineNumber,plCharacterPosition) ( (This)->lpVtbl -> GetSourcePosition(This,pdwSourceContext,pulLineNumber,plCharacterPosition) )
#define IActiveScriptError_GetSourceLineText(This,pbstrSourceLine) ( (This)->lpVtbl -> GetSourceLineText(This,pbstrSourceLine) )
#endif
HRESULT STDMETHODCALLTYPE IActiveScriptError_RemoteGetExceptionInfo_Proxy(IActiveScriptError *This, EXCEPINFO *pexcepinfo);
void __RPC_STUB IActiveScriptError_RemoteGetExceptionInfo_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IActiveScriptError64_INTERFACE_DEFINED__
#define __IActiveScriptError64_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptError64;
typedef struct IActiveScriptError64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptError64 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptError64 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptError64 *This);
	HRESULT(STDMETHODCALLTYPE *GetExceptionInfo) (IActiveScriptError64 *This, EXCEPINFO *pexcepinfo);
	HRESULT(STDMETHODCALLTYPE *GetSourcePosition) (IActiveScriptError64 *This, DWORD *pdwSourceContext, ULONG *pulLineNumber, LONG *plCharacterPosition);
	HRESULT(STDMETHODCALLTYPE *GetSourceLineText) (IActiveScriptError64 *This, BSTR *pbstrSourceLine);
	HRESULT(STDMETHODCALLTYPE *GetSourcePosition64) (IActiveScriptError64 *This, DWORDLONG *pdwSourceContext, ULONG *pulLineNumber, LONG *plCharacterPosition);
	END_INTERFACE
}  IActiveScriptError64Vtbl;
interface IActiveScriptError64
{
	CONST_VTBL struct IActiveScriptError64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptError64_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptError64_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptError64_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptError64_GetExceptionInfo(This,pexcepinfo) ( (This)->lpVtbl -> GetExceptionInfo(This,pexcepinfo) )
#define IActiveScriptError64_GetSourcePosition(This,pdwSourceContext,pulLineNumber,plCharacterPosition) ( (This)->lpVtbl -> GetSourcePosition(This,pdwSourceContext,pulLineNumber,plCharacterPosition) )
#define IActiveScriptError64_GetSourceLineText(This,pbstrSourceLine) ( (This)->lpVtbl -> GetSourceLineText(This,pbstrSourceLine) )
#define IActiveScriptError64_GetSourcePosition64(This,pdwSourceContext,pulLineNumber,plCharacterPosition) ( (This)->lpVtbl -> GetSourcePosition64(This,pdwSourceContext,pulLineNumber,plCharacterPosition) )
#endif
#endif
#ifndef __IActiveScriptSiteWindow_INTERFACE_DEFINED__
#define __IActiveScriptSiteWindow_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptSiteWindow;
typedef struct IActiveScriptSiteWindowVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptSiteWindow *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptSiteWindow *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptSiteWindow *This);
	HRESULT(STDMETHODCALLTYPE *GetWindow) (IActiveScriptSiteWindow *This, HWND *phwnd);
	HRESULT(STDMETHODCALLTYPE *EnableModeless) (IActiveScriptSiteWindow *This, BOOL fEnable);
	END_INTERFACE
}  IActiveScriptSiteWindowVtbl;
interface IActiveScriptSiteWindow
{
	CONST_VTBL struct IActiveScriptSiteWindowVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptSiteWindow_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptSiteWindow_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptSiteWindow_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptSiteWindow_GetWindow(This,phwnd) ( (This)->lpVtbl -> GetWindow(This,phwnd) )
#define IActiveScriptSiteWindow_EnableModeless(This,fEnable) ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
#endif
#endif
#ifndef __IActiveScriptSiteUIControl_INTERFACE_DEFINED__
#define __IActiveScriptSiteUIControl_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptSiteUIControl;
typedef struct IActiveScriptSiteUIControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptSiteUIControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptSiteUIControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptSiteUIControl *This);
	HRESULT(STDMETHODCALLTYPE *GetUIBehavior) (IActiveScriptSiteUIControl *This, SCRIPTUICITEM UicItem, SCRIPTUICHANDLING *pUicHandling);
	END_INTERFACE
}  IActiveScriptSiteUIControlVtbl;
interface IActiveScriptSiteUIControl
{
	CONST_VTBL struct IActiveScriptSiteUIControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptSiteUIControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptSiteUIControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptSiteUIControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptSiteUIControl_GetUIBehavior(This,UicItem,pUicHandling) ( (This)->lpVtbl -> GetUIBehavior(This,UicItem,pUicHandling) )
#endif
#endif
#ifndef __IActiveScriptSiteInterruptPoll_INTERFACE_DEFINED__
#define __IActiveScriptSiteInterruptPoll_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptSiteInterruptPoll;
typedef struct IActiveScriptSiteInterruptPollVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptSiteInterruptPoll *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptSiteInterruptPoll *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptSiteInterruptPoll *This);
	HRESULT(STDMETHODCALLTYPE *QueryContinue) (IActiveScriptSiteInterruptPoll *This);
	END_INTERFACE
}  IActiveScriptSiteInterruptPollVtbl;
interface IActiveScriptSiteInterruptPoll
{
	CONST_VTBL struct IActiveScriptSiteInterruptPollVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptSiteInterruptPoll_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptSiteInterruptPoll_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptSiteInterruptPoll_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptSiteInterruptPoll_QueryContinue(This) ( (This)->lpVtbl -> QueryContinue(This) )
#endif
#endif
#ifndef __IActiveScript_INTERFACE_DEFINED__
#define __IActiveScript_INTERFACE_DEFINED__
extern const IID IID_IActiveScript;
typedef struct IActiveScriptVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScript *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScript *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScript *This);
	HRESULT(STDMETHODCALLTYPE *SetScriptSite) (IActiveScript *This, IActiveScriptSite *pass);
	HRESULT(STDMETHODCALLTYPE *GetScriptSite) (IActiveScript *This, REFIID riid, void **ppvObject);
	HRESULT(STDMETHODCALLTYPE *SetScriptState) (IActiveScript *This, SCRIPTSTATE ss);
	HRESULT(STDMETHODCALLTYPE *GetScriptState) (IActiveScript *This, SCRIPTSTATE *pssState);
	HRESULT(STDMETHODCALLTYPE *Close) (IActiveScript *This);
	HRESULT(STDMETHODCALLTYPE *AddNamedItem) (IActiveScript *This, LPCOLESTR pstrName, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *AddTypeLib) (IActiveScript *This, REFGUID rguidTypeLib, DWORD dwMajor, DWORD dwMinor, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *GetScriptDispatch) (IActiveScript *This, LPCOLESTR pstrItemName, IDispatch **ppdisp);
	HRESULT(STDMETHODCALLTYPE *GetCurrentScriptThreadID) (IActiveScript *This, SCRIPTTHREADID *pstidThread);
	HRESULT(STDMETHODCALLTYPE *GetScriptThreadID) (IActiveScript *This, DWORD dwWin32ThreadId, SCRIPTTHREADID *pstidThread);
	HRESULT(STDMETHODCALLTYPE *GetScriptThreadState) (IActiveScript *This, SCRIPTTHREADID stidThread, SCRIPTTHREADSTATE *pstsState);
	HRESULT(STDMETHODCALLTYPE *InterruptScriptThread) (IActiveScript *This, SCRIPTTHREADID stidThread, const EXCEPINFO *pexcepinfo, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *Clone) (IActiveScript *This, IActiveScript **ppscript);
	END_INTERFACE
}  IActiveScriptVtbl;
interface IActiveScript
{
	CONST_VTBL struct IActiveScriptVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScript_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScript_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScript_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScript_SetScriptSite(This,pass) ( (This)->lpVtbl -> SetScriptSite(This,pass) )
#define IActiveScript_GetScriptSite(This,riid,ppvObject) ( (This)->lpVtbl -> GetScriptSite(This,riid,ppvObject) )
#define IActiveScript_SetScriptState(This,ss) ( (This)->lpVtbl -> SetScriptState(This,ss) )
#define IActiveScript_GetScriptState(This,pssState) ( (This)->lpVtbl -> GetScriptState(This,pssState) )
#define IActiveScript_Close(This) ( (This)->lpVtbl -> Close(This) )
#define IActiveScript_AddNamedItem(This,pstrName,dwFlags) ( (This)->lpVtbl -> AddNamedItem(This,pstrName,dwFlags) )
#define IActiveScript_AddTypeLib(This,rguidTypeLib,dwMajor,dwMinor,dwFlags) ( (This)->lpVtbl -> AddTypeLib(This,rguidTypeLib,dwMajor,dwMinor,dwFlags) )
#define IActiveScript_GetScriptDispatch(This,pstrItemName,ppdisp) ( (This)->lpVtbl -> GetScriptDispatch(This,pstrItemName,ppdisp) )
#define IActiveScript_GetCurrentScriptThreadID(This,pstidThread) ( (This)->lpVtbl -> GetCurrentScriptThreadID(This,pstidThread) )
#define IActiveScript_GetScriptThreadID(This,dwWin32ThreadId,pstidThread) ( (This)->lpVtbl -> GetScriptThreadID(This,dwWin32ThreadId,pstidThread) )
#define IActiveScript_GetScriptThreadState(This,stidThread,pstsState) ( (This)->lpVtbl -> GetScriptThreadState(This,stidThread,pstsState) )
#define IActiveScript_InterruptScriptThread(This,stidThread,pexcepinfo,dwFlags) ( (This)->lpVtbl -> InterruptScriptThread(This,stidThread,pexcepinfo,dwFlags) )
#define IActiveScript_Clone(This,ppscript) ( (This)->lpVtbl -> Clone(This,ppscript) )
#endif
#endif
#ifndef __IActiveScriptParse32_INTERFACE_DEFINED__
#define __IActiveScriptParse32_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptParse32;
typedef struct IActiveScriptParse32Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptParse32 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptParse32 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptParse32 *This);
	HRESULT(STDMETHODCALLTYPE *InitNew) (IActiveScriptParse32 *This);
	HRESULT(STDMETHODCALLTYPE *AddScriptlet) (IActiveScriptParse32 *This, LPCOLESTR pstrDefaultName, LPCOLESTR pstrCode, LPCOLESTR pstrItemName, LPCOLESTR pstrSubItemName, LPCOLESTR pstrEventName, LPCOLESTR pstrDelimiter, DWORD dwSourceContextCookie, ULONG ulStartingLineNumber, DWORD dwFlags, BSTR *pbstrName, EXCEPINFO *pexcepinfo);
	HRESULT(STDMETHODCALLTYPE *ParseScriptText) (IActiveScriptParse32 *This, LPCOLESTR pstrCode, LPCOLESTR pstrItemName, IUnknown *punkContext, LPCOLESTR pstrDelimiter, DWORD dwSourceContextCookie, ULONG ulStartingLineNumber, DWORD dwFlags, VARIANT *pvarResult, EXCEPINFO *pexcepinfo);
	END_INTERFACE
}  IActiveScriptParse32Vtbl;
interface IActiveScriptParse32
{
	CONST_VTBL struct IActiveScriptParse32Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptParse32_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptParse32_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptParse32_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptParse32_InitNew(This) ( (This)->lpVtbl -> InitNew(This) )
#define IActiveScriptParse32_AddScriptlet(This,pstrDefaultName,pstrCode,pstrItemName,pstrSubItemName,pstrEventName,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pbstrName,pexcepinfo) ( (This)->lpVtbl -> AddScriptlet(This,pstrDefaultName,pstrCode,pstrItemName,pstrSubItemName,pstrEventName,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pbstrName,pexcepinfo) )
#define IActiveScriptParse32_ParseScriptText(This,pstrCode,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pvarResult,pexcepinfo) ( (This)->lpVtbl -> ParseScriptText(This,pstrCode,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pvarResult,pexcepinfo) )
#endif
#endif
#ifndef __IActiveScriptParse64_INTERFACE_DEFINED__
#define __IActiveScriptParse64_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptParse64;
typedef struct IActiveScriptParse64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptParse64 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptParse64 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptParse64 *This);
	HRESULT(STDMETHODCALLTYPE *InitNew) (IActiveScriptParse64 *This);
	HRESULT(STDMETHODCALLTYPE *AddScriptlet) (IActiveScriptParse64 *This, LPCOLESTR pstrDefaultName, LPCOLESTR pstrCode, LPCOLESTR pstrItemName, LPCOLESTR pstrSubItemName, LPCOLESTR pstrEventName, LPCOLESTR pstrDelimiter, DWORDLONG dwSourceContextCookie, ULONG ulStartingLineNumber, DWORD dwFlags, BSTR *pbstrName, EXCEPINFO *pexcepinfo);
	HRESULT(STDMETHODCALLTYPE *ParseScriptText) (IActiveScriptParse64 *This, LPCOLESTR pstrCode, LPCOLESTR pstrItemName, IUnknown *punkContext, LPCOLESTR pstrDelimiter, DWORDLONG dwSourceContextCookie, ULONG ulStartingLineNumber, DWORD dwFlags, VARIANT *pvarResult, EXCEPINFO *pexcepinfo);
	END_INTERFACE
}  IActiveScriptParse64Vtbl;
interface IActiveScriptParse64
{
	CONST_VTBL struct IActiveScriptParse64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptParse64_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptParse64_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptParse64_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptParse64_InitNew(This) ( (This)->lpVtbl -> InitNew(This) )
#define IActiveScriptParse64_AddScriptlet(This,pstrDefaultName,pstrCode,pstrItemName,pstrSubItemName,pstrEventName,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pbstrName,pexcepinfo) ( (This)->lpVtbl -> AddScriptlet(This,pstrDefaultName,pstrCode,pstrItemName,pstrSubItemName,pstrEventName,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pbstrName,pexcepinfo) )
#define IActiveScriptParse64_ParseScriptText(This,pstrCode,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pvarResult,pexcepinfo) ( (This)->lpVtbl -> ParseScriptText(This,pstrCode,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pvarResult,pexcepinfo) )
#endif
#endif
#ifdef _WIN64
#define     IActiveScriptParse     IActiveScriptParse64
#define IID_IActiveScriptParse IID_IActiveScriptParse64
#else
#define     IActiveScriptParse     IActiveScriptParse32
#define IID_IActiveScriptParse IID_IActiveScriptParse32
#endif
typedef IActiveScriptParse *PIActiveScriptParse;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0009_v0_0_s_ifspec;
#ifndef __IActiveScriptParseProcedureOld32_INTERFACE_DEFINED__
#define __IActiveScriptParseProcedureOld32_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptParseProcedureOld32;
typedef struct IActiveScriptParseProcedureOld32Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptParseProcedureOld32 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptParseProcedureOld32 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptParseProcedureOld32 *This);
	HRESULT(STDMETHODCALLTYPE *ParseProcedureText) (IActiveScriptParseProcedureOld32 *This, LPCOLESTR pstrCode, LPCOLESTR pstrFormalParams, LPCOLESTR pstrItemName, IUnknown *punkContext, LPCOLESTR pstrDelimiter, DWORD dwSourceContextCookie, ULONG ulStartingLineNumber, DWORD dwFlags, IDispatch **ppdisp);
	END_INTERFACE
}  IActiveScriptParseProcedureOld32Vtbl;
interface IActiveScriptParseProcedureOld32
{
	CONST_VTBL struct IActiveScriptParseProcedureOld32Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptParseProcedureOld32_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptParseProcedureOld32_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptParseProcedureOld32_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptParseProcedureOld32_ParseProcedureText(This,pstrCode,pstrFormalParams,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) ( (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) )
#endif
#endif
#ifndef __IActiveScriptParseProcedureOld64_INTERFACE_DEFINED__
#define __IActiveScriptParseProcedureOld64_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptParseProcedureOld64;
typedef struct IActiveScriptParseProcedureOld64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptParseProcedureOld64 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptParseProcedureOld64 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptParseProcedureOld64 *This);
	HRESULT(STDMETHODCALLTYPE *ParseProcedureText) (IActiveScriptParseProcedureOld64 *This, LPCOLESTR pstrCode, LPCOLESTR pstrFormalParams, LPCOLESTR pstrItemName, IUnknown *punkContext, LPCOLESTR pstrDelimiter, DWORDLONG dwSourceContextCookie, ULONG ulStartingLineNumber, DWORD dwFlags, IDispatch **ppdisp);
	END_INTERFACE
}  IActiveScriptParseProcedureOld64Vtbl;
interface IActiveScriptParseProcedureOld64
{
	CONST_VTBL struct IActiveScriptParseProcedureOld64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptParseProcedureOld64_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptParseProcedureOld64_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptParseProcedureOld64_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptParseProcedureOld64_ParseProcedureText(This,pstrCode,pstrFormalParams,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) ( (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) )
#endif
#endif
#ifdef _WIN64
#define     IActiveScriptParseProcedureOld     IActiveScriptParseProcedureOld64
#define IID_IActiveScriptParseProcedureOld IID_IActiveScriptParseProcedureOld64
#else
#define     IActiveScriptParseProcedureOld     IActiveScriptParseProcedureOld32
#define IID_IActiveScriptParseProcedureOld IID_IActiveScriptParseProcedureOld32
#endif
typedef IActiveScriptParseProcedureOld *PIActiveScriptParseProcedureOld;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0011_v0_0_s_ifspec;
#ifndef __IActiveScriptParseProcedure32_INTERFACE_DEFINED__
#define __IActiveScriptParseProcedure32_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptParseProcedure32;
typedef struct IActiveScriptParseProcedure32Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptParseProcedure32 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptParseProcedure32 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptParseProcedure32 *This);
	HRESULT(STDMETHODCALLTYPE *ParseProcedureText) (IActiveScriptParseProcedure32 *This, LPCOLESTR pstrCode, LPCOLESTR pstrFormalParams, LPCOLESTR pstrProcedureName, LPCOLESTR pstrItemName, IUnknown *punkContext, LPCOLESTR pstrDelimiter, DWORD dwSourceContextCookie, ULONG ulStartingLineNumber, DWORD dwFlags, IDispatch **ppdisp);
	END_INTERFACE
}  IActiveScriptParseProcedure32Vtbl;
interface IActiveScriptParseProcedure32
{
	CONST_VTBL struct IActiveScriptParseProcedure32Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptParseProcedure32_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptParseProcedure32_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptParseProcedure32_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptParseProcedure32_ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) ( (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) )
#endif
#endif
#ifndef __IActiveScriptParseProcedure64_INTERFACE_DEFINED__
#define __IActiveScriptParseProcedure64_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptParseProcedure64;
typedef struct IActiveScriptParseProcedure64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptParseProcedure64 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptParseProcedure64 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptParseProcedure64 *This);
	HRESULT(STDMETHODCALLTYPE *ParseProcedureText) (IActiveScriptParseProcedure64 *This, LPCOLESTR pstrCode, LPCOLESTR pstrFormalParams, LPCOLESTR pstrProcedureName, LPCOLESTR pstrItemName, IUnknown *punkContext, LPCOLESTR pstrDelimiter, DWORDLONG dwSourceContextCookie, ULONG ulStartingLineNumber, DWORD dwFlags, IDispatch **ppdisp);
	END_INTERFACE
}  IActiveScriptParseProcedure64Vtbl;
interface IActiveScriptParseProcedure64
{
	CONST_VTBL struct IActiveScriptParseProcedure64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptParseProcedure64_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptParseProcedure64_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptParseProcedure64_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptParseProcedure64_ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) ( (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) )
#endif
#endif
#ifdef _WIN64
#define     IActiveScriptParseProcedure     IActiveScriptParseProcedure64
#define IID_IActiveScriptParseProcedure IID_IActiveScriptParseProcedure64
#else
#define     IActiveScriptParseProcedure     IActiveScriptParseProcedure32
#define IID_IActiveScriptParseProcedure IID_IActiveScriptParseProcedure32
#endif
typedef IActiveScriptParseProcedure *PIActiveScriptParseProcedure;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0013_v0_0_s_ifspec;
#ifndef __IActiveScriptParseProcedure2_32_INTERFACE_DEFINED__
#define __IActiveScriptParseProcedure2_32_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptParseProcedure2_32;
typedef struct IActiveScriptParseProcedure2_32Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptParseProcedure2_32 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptParseProcedure2_32 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptParseProcedure2_32 *This);
	HRESULT(STDMETHODCALLTYPE *ParseProcedureText) (IActiveScriptParseProcedure2_32 *This, LPCOLESTR pstrCode, LPCOLESTR pstrFormalParams, LPCOLESTR pstrProcedureName, LPCOLESTR pstrItemName, IUnknown *punkContext, LPCOLESTR pstrDelimiter, DWORD dwSourceContextCookie, ULONG ulStartingLineNumber, DWORD dwFlags, IDispatch **ppdisp);
	END_INTERFACE
}  IActiveScriptParseProcedure2_32Vtbl;
interface IActiveScriptParseProcedure2_32
{
	CONST_VTBL struct IActiveScriptParseProcedure2_32Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptParseProcedure2_32_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptParseProcedure2_32_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptParseProcedure2_32_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptParseProcedure2_32_ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) ( (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) )
#endif
#endif
#ifndef __IActiveScriptParseProcedure2_64_INTERFACE_DEFINED__
#define __IActiveScriptParseProcedure2_64_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptParseProcedure2_64;
typedef struct IActiveScriptParseProcedure2_64Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptParseProcedure2_64 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptParseProcedure2_64 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptParseProcedure2_64 *This);
	HRESULT(STDMETHODCALLTYPE *ParseProcedureText) (IActiveScriptParseProcedure2_64 *This, LPCOLESTR pstrCode, LPCOLESTR pstrFormalParams, LPCOLESTR pstrProcedureName, LPCOLESTR pstrItemName, IUnknown *punkContext, LPCOLESTR pstrDelimiter, DWORDLONG dwSourceContextCookie, ULONG ulStartingLineNumber, DWORD dwFlags, IDispatch **ppdisp);
	END_INTERFACE
}  IActiveScriptParseProcedure2_64Vtbl;
interface IActiveScriptParseProcedure2_64
{
	CONST_VTBL struct IActiveScriptParseProcedure2_64Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptParseProcedure2_64_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptParseProcedure2_64_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptParseProcedure2_64_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptParseProcedure2_64_ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) ( (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp) )
#endif
#endif
#ifdef _WIN64
#define     IActiveScriptParseProcedure2     IActiveScriptParseProcedure2_64
#define IID_IActiveScriptParseProcedure2 IID_IActiveScriptParseProcedure2_64
#else
#define     IActiveScriptParseProcedure2     IActiveScriptParseProcedure2_32
#define IID_IActiveScriptParseProcedure2 IID_IActiveScriptParseProcedure2_32
#endif
typedef IActiveScriptParseProcedure2 *PIActiveScriptParseProcedure2;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0015_v0_0_s_ifspec;
#ifndef __IActiveScriptEncode_INTERFACE_DEFINED__
#define __IActiveScriptEncode_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptEncode;
typedef struct IActiveScriptEncodeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptEncode *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptEncode *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptEncode *This);
	HRESULT(STDMETHODCALLTYPE *EncodeSection) (IActiveScriptEncode *This, LPCOLESTR pchIn, DWORD cchIn, LPOLESTR pchOut, DWORD cchOut, DWORD *pcchRet);
	HRESULT(STDMETHODCALLTYPE *DecodeScript) (IActiveScriptEncode *This, LPCOLESTR pchIn, DWORD cchIn, LPOLESTR pchOut, DWORD cchOut, DWORD *pcchRet);
	HRESULT(STDMETHODCALLTYPE *GetEncodeProgId) (IActiveScriptEncode *This, BSTR *pbstrOut);
	END_INTERFACE
}  IActiveScriptEncodeVtbl;
interface IActiveScriptEncode
{
	CONST_VTBL struct IActiveScriptEncodeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptEncode_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptEncode_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptEncode_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptEncode_EncodeSection(This,pchIn,cchIn,pchOut,cchOut,pcchRet) ( (This)->lpVtbl -> EncodeSection(This,pchIn,cchIn,pchOut,cchOut,pcchRet) )
#define IActiveScriptEncode_DecodeScript(This,pchIn,cchIn,pchOut,cchOut,pcchRet) ( (This)->lpVtbl -> DecodeScript(This,pchIn,cchIn,pchOut,cchOut,pcchRet) )
#define IActiveScriptEncode_GetEncodeProgId(This,pbstrOut) ( (This)->lpVtbl -> GetEncodeProgId(This,pbstrOut) )
#endif
#endif
#ifndef __IActiveScriptHostEncode_INTERFACE_DEFINED__
#define __IActiveScriptHostEncode_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptHostEncode;
typedef struct IActiveScriptHostEncodeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptHostEncode *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptHostEncode *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptHostEncode *This);
	HRESULT(STDMETHODCALLTYPE *EncodeScriptHostFile) (IActiveScriptHostEncode *This, BSTR bstrInFile, BSTR *pbstrOutFile, unsigned long cFlags, BSTR bstrDefaultLang);
	END_INTERFACE
}  IActiveScriptHostEncodeVtbl;
interface IActiveScriptHostEncode
{
	CONST_VTBL struct IActiveScriptHostEncodeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptHostEncode_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptHostEncode_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptHostEncode_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptHostEncode_EncodeScriptHostFile(This,bstrInFile,pbstrOutFile,cFlags,bstrDefaultLang) ( (This)->lpVtbl -> EncodeScriptHostFile(This,bstrInFile,pbstrOutFile,cFlags,bstrDefaultLang) )
#endif
#endif
#ifndef __IBindEventHandler_INTERFACE_DEFINED__
#define __IBindEventHandler_INTERFACE_DEFINED__
extern const IID IID_IBindEventHandler;
typedef struct IBindEventHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IBindEventHandler *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IBindEventHandler *This);
	ULONG(STDMETHODCALLTYPE *Release) (IBindEventHandler *This);
	HRESULT(STDMETHODCALLTYPE *BindHandler) (IBindEventHandler *This, LPCOLESTR pstrEvent, IDispatch *pdisp);
	END_INTERFACE
}  IBindEventHandlerVtbl;
interface IBindEventHandler
{
	CONST_VTBL struct IBindEventHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBindEventHandler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBindEventHandler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IBindEventHandler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IBindEventHandler_BindHandler(This,pstrEvent,pdisp) ( (This)->lpVtbl -> BindHandler(This,pstrEvent,pdisp) )
#endif
#endif
#ifndef __IActiveScriptStats_INTERFACE_DEFINED__
#define __IActiveScriptStats_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptStats;
typedef struct IActiveScriptStatsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptStats *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptStats *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptStats *This);
	HRESULT(STDMETHODCALLTYPE *GetStat) (IActiveScriptStats *This, DWORD stid, ULONG *pluHi, ULONG *pluLo);
	HRESULT(STDMETHODCALLTYPE *GetStatEx) (IActiveScriptStats *This, REFGUID guid, ULONG *pluHi, ULONG *pluLo);
	HRESULT(STDMETHODCALLTYPE *ResetStats) (IActiveScriptStats *This);
	END_INTERFACE
}  IActiveScriptStatsVtbl;
interface IActiveScriptStats
{
	CONST_VTBL struct IActiveScriptStatsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptStats_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptStats_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptStats_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptStats_GetStat(This,stid,pluHi,pluLo) ( (This)->lpVtbl -> GetStat(This,stid,pluHi,pluLo) )
#define IActiveScriptStats_GetStatEx(This,guid,pluHi,pluLo) ( (This)->lpVtbl -> GetStatEx(This,guid,pluHi,pluLo) )
#define IActiveScriptStats_ResetStats(This) ( (This)->lpVtbl -> ResetStats(This) )
#endif
#endif
#ifndef __IActiveScriptProperty_INTERFACE_DEFINED__
#define __IActiveScriptProperty_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptProperty;
typedef struct IActiveScriptPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptProperty *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptProperty *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptProperty *This);
	HRESULT(STDMETHODCALLTYPE *GetProperty) (IActiveScriptProperty *This, DWORD dwProperty, VARIANT *pvarIndex, VARIANT *pvarValue);
	HRESULT(STDMETHODCALLTYPE *SetProperty) (IActiveScriptProperty *This, DWORD dwProperty, VARIANT *pvarIndex, VARIANT *pvarValue);
	END_INTERFACE
}  IActiveScriptPropertyVtbl;
interface IActiveScriptProperty
{
	CONST_VTBL struct IActiveScriptPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptProperty_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptProperty_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptProperty_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptProperty_GetProperty(This,dwProperty,pvarIndex,pvarValue) ( (This)->lpVtbl -> GetProperty(This,dwProperty,pvarIndex,pvarValue) )
#define IActiveScriptProperty_SetProperty(This,dwProperty,pvarIndex,pvarValue) ( (This)->lpVtbl -> SetProperty(This,dwProperty,pvarIndex,pvarValue) )
#endif
#endif
#ifndef __ITridentEventSink_INTERFACE_DEFINED__
#define __ITridentEventSink_INTERFACE_DEFINED__
extern const IID IID_ITridentEventSink;
typedef struct ITridentEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITridentEventSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITridentEventSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITridentEventSink *This);
	HRESULT(STDMETHODCALLTYPE *FireEvent) (ITridentEventSink *This, LPCOLESTR pstrEvent, DISPPARAMS *pdp, VARIANT *pvarRes, EXCEPINFO *pei);
	END_INTERFACE
}  ITridentEventSinkVtbl;
interface ITridentEventSink
{
	CONST_VTBL struct ITridentEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITridentEventSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITridentEventSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITridentEventSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITridentEventSink_FireEvent(This,pstrEvent,pdp,pvarRes,pei) ( (This)->lpVtbl -> FireEvent(This,pstrEvent,pdp,pvarRes,pei) )
#endif
#endif
#ifndef __IActiveScriptGarbageCollector_INTERFACE_DEFINED__
#define __IActiveScriptGarbageCollector_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptGarbageCollector;
typedef struct IActiveScriptGarbageCollectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptGarbageCollector *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptGarbageCollector *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptGarbageCollector *This);
	HRESULT(STDMETHODCALLTYPE *CollectGarbage) (IActiveScriptGarbageCollector *This, SCRIPTGCTYPE scriptgctype);
	END_INTERFACE
}  IActiveScriptGarbageCollectorVtbl;
interface IActiveScriptGarbageCollector
{
	CONST_VTBL struct IActiveScriptGarbageCollectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptGarbageCollector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptGarbageCollector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptGarbageCollector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptGarbageCollector_CollectGarbage(This,scriptgctype) ( (This)->lpVtbl -> CollectGarbage(This,scriptgctype) )
#endif
#endif
#ifndef __IActiveScriptSIPInfo_INTERFACE_DEFINED__
#define __IActiveScriptSIPInfo_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptSIPInfo;
typedef struct IActiveScriptSIPInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptSIPInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptSIPInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptSIPInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetSIPOID) (IActiveScriptSIPInfo *This, GUID *poid_sip);
	END_INTERFACE
}  IActiveScriptSIPInfoVtbl;
interface IActiveScriptSIPInfo
{
	CONST_VTBL struct IActiveScriptSIPInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptSIPInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptSIPInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptSIPInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptSIPInfo_GetSIPOID(This,poid_sip) ( (This)->lpVtbl -> GetSIPOID(This,poid_sip) )
#endif
#endif
#ifndef __IActiveScriptSiteTraceInfo_INTERFACE_DEFINED__
#define __IActiveScriptSiteTraceInfo_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptSiteTraceInfo;
typedef struct IActiveScriptSiteTraceInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptSiteTraceInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptSiteTraceInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptSiteTraceInfo *This);
	HRESULT(STDMETHODCALLTYPE *SendScriptTraceInfo) (IActiveScriptSiteTraceInfo *This, SCRIPTTRACEINFO stiEventType, GUID guidContextID, DWORD dwScriptContextCookie, LONG lScriptStatementStart, LONG lScriptStatementEnd, DWORD64 dwReserved);
	END_INTERFACE
}  IActiveScriptSiteTraceInfoVtbl;
interface IActiveScriptSiteTraceInfo
{
	CONST_VTBL struct IActiveScriptSiteTraceInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptSiteTraceInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptSiteTraceInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptSiteTraceInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptSiteTraceInfo_SendScriptTraceInfo(This,stiEventType,guidContextID,dwScriptContextCookie,lScriptStatementStart,lScriptStatementEnd,dwReserved) ( (This)->lpVtbl -> SendScriptTraceInfo(This,stiEventType,guidContextID,dwScriptContextCookie,lScriptStatementStart,lScriptStatementEnd,dwReserved) )
#endif
#endif
#ifndef __IActiveScriptTraceInfo_INTERFACE_DEFINED__
#define __IActiveScriptTraceInfo_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptTraceInfo;
typedef struct IActiveScriptTraceInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptTraceInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptTraceInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptTraceInfo *This);
	HRESULT(STDMETHODCALLTYPE *StartScriptTracing) (IActiveScriptTraceInfo *This, IActiveScriptSiteTraceInfo *pSiteTraceInfo, GUID guidContextID);
	HRESULT(STDMETHODCALLTYPE *StopScriptTracing) (IActiveScriptTraceInfo *This);
	END_INTERFACE
}  IActiveScriptTraceInfoVtbl;
interface IActiveScriptTraceInfo
{
	CONST_VTBL struct IActiveScriptTraceInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptTraceInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptTraceInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptTraceInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptTraceInfo_StartScriptTracing(This,pSiteTraceInfo,guidContextID) ( (This)->lpVtbl -> StartScriptTracing(This,pSiteTraceInfo,guidContextID) )
#define IActiveScriptTraceInfo_StopScriptTracing(This) ( (This)->lpVtbl -> StopScriptTracing(This) )
#endif
#endif
#ifndef __IActiveScriptStringCompare_INTERFACE_DEFINED__
#define __IActiveScriptStringCompare_INTERFACE_DEFINED__
extern const IID IID_IActiveScriptStringCompare;
typedef struct IActiveScriptStringCompareVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IActiveScriptStringCompare *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IActiveScriptStringCompare *This);
	ULONG(STDMETHODCALLTYPE *Release) (IActiveScriptStringCompare *This);
	HRESULT(STDMETHODCALLTYPE *StrComp) (IActiveScriptStringCompare *This, BSTR bszStr1, BSTR bszStr2, LONG *iRet);
	END_INTERFACE
}  IActiveScriptStringCompareVtbl;
interface IActiveScriptStringCompare
{
	CONST_VTBL struct IActiveScriptStringCompareVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IActiveScriptStringCompare_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IActiveScriptStringCompare_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IActiveScriptStringCompare_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IActiveScriptStringCompare_StrComp(This,bszStr1,bszStr2,iRet) ( (This)->lpVtbl -> StrComp(This,bszStr1,bszStr2,iRet) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_0026_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
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
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
HRESULT STDMETHODCALLTYPE IActiveScriptError_GetExceptionInfo_Proxy(IActiveScriptError *This, EXCEPINFO *pexcepinfo);
HRESULT STDMETHODCALLTYPE IActiveScriptError_GetExceptionInfo_Stub(IActiveScriptError *This, EXCEPINFO *pexcepinfo);
#endif
