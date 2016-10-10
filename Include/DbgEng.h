/*+@@file@@----------------------------------------------------------------*//*!
 \file		DbgEng.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jul  5 15:56:04 2016
 \date		Modified on Tue Jul  5 15:56:04 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __DBGENG_H__
#define __DBGENG_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <stdarg.h>
#include <objbase.h>
#ifndef _WDBGEXTS_
typedef struct _WINDBG_EXTENSION_APIS32* PWINDBG_EXTENSION_APIS32;
typedef struct _WINDBG_EXTENSION_APIS64* PWINDBG_EXTENSION_APIS64;
#endif
#ifndef _CRASHLIB_
typedef struct _MEMORY_BASIC_INFORMATION64* PMEMORY_BASIC_INFORMATION64;
#endif
DEFINE_GUID(IID_IDebugAdvanced, 0xf2df5f53, 0x071f, 0x47bd, 0x9d, 0xe6, 0x57, 0x34, 0xc3, 0xfe, 0xd6, 0x89);
DEFINE_GUID(IID_IDebugAdvanced2, 0x716d14c9, 0x119b, 0x4ba5, 0xaf, 0x1f, 0x08, 0x90, 0xe6, 0x72, 0x41, 0x6a);
DEFINE_GUID(IID_IDebugAdvanced3, 0xcba4abb4, 0x84c4, 0x444d, 0x87, 0xca, 0xa0, 0x4e, 0x13, 0x28, 0x67, 0x39);
DEFINE_GUID(IID_IDebugBreakpoint, 0x5bd9d474, 0x5975, 0x423a, 0xb8, 0x8b, 0x65, 0xa8, 0xe7, 0x11, 0x0e, 0x65);
DEFINE_GUID(IID_IDebugBreakpoint2, 0x1b278d20, 0x79f2, 0x426e, 0xa3, 0xf9, 0xc1, 0xdd, 0xf3, 0x75, 0xd4, 0x8e);
DEFINE_GUID(IID_IDebugClient, 0x27fe5639, 0x8407, 0x4f47, 0x83, 0x64, 0xee, 0x11, 0x8f, 0xb0, 0x8a, 0xc8);
DEFINE_GUID(IID_IDebugClient2, 0xedbed635, 0x372e, 0x4dab, 0xbb, 0xfe, 0xed, 0x0d, 0x2f, 0x63, 0xbe, 0x81);
DEFINE_GUID(IID_IDebugClient3, 0xdd492d7f, 0x71b8, 0x4ad6, 0xa8, 0xdc, 0x1c, 0x88, 0x74, 0x79, 0xff, 0x91);
DEFINE_GUID(IID_IDebugClient4, 0xca83c3de, 0x5089, 0x4cf8, 0x93, 0xc8, 0xd8, 0x92, 0x38, 0x7f, 0x2a, 0x5e);
DEFINE_GUID(IID_IDebugClient5, 0xe3acb9d7, 0x7ec2, 0x4f0c, 0xa0, 0xda, 0xe8, 0x1e, 0x0c, 0xbb, 0xe6, 0x28);
DEFINE_GUID(IID_IDebugControl, 0x5182e668, 0x105e, 0x416e, 0xad, 0x92, 0x24, 0xef, 0x80, 0x04, 0x24, 0xba);
DEFINE_GUID(IID_IDebugControl2, 0xd4366723, 0x44df, 0x4bed, 0x8c, 0x7e, 0x4c, 0x05, 0x42, 0x4f, 0x45, 0x88);
DEFINE_GUID(IID_IDebugControl3, 0x7df74a86, 0xb03f, 0x407f, 0x90, 0xab, 0xa2, 0x0d, 0xad, 0xce, 0xad, 0x08);
DEFINE_GUID(IID_IDebugControl4, 0x94e60ce9, 0x9b41, 0x4b19, 0x9f, 0xc0, 0x6d, 0x9e, 0xb3, 0x52, 0x72, 0xb3);
DEFINE_GUID(IID_IDebugDataSpaces, 0x88f7dfab, 0x3ea7, 0x4c3a, 0xae, 0xfb, 0xc4, 0xe8, 0x10, 0x61, 0x73, 0xaa);
DEFINE_GUID(IID_IDebugDataSpaces2, 0x7a5e852f, 0x96e9, 0x468f, 0xac, 0x1b, 0x0b, 0x3a, 0xdd, 0xc4, 0xa0, 0x49);
DEFINE_GUID(IID_IDebugDataSpaces3, 0x23f79d6c, 0x8aaf, 0x4f7c, 0xa6, 0x07, 0x99, 0x95, 0xf5, 0x40, 0x7e, 0x63);
DEFINE_GUID(IID_IDebugDataSpaces4, 0xd98ada1f, 0x29e9, 0x4ef5, 0xa6, 0xc0, 0xe5, 0x33, 0x49, 0x88, 0x32, 0x12);
DEFINE_GUID(IID_IDebugEventCallbacks, 0x337be28b, 0x5036, 0x4d72, 0xb6, 0xbf, 0xc4, 0x5f, 0xbb, 0x9f, 0x2e, 0xaa);
DEFINE_GUID(IID_IDebugEventCallbacksWide, 0x0690e046, 0x9c23, 0x45ac, 0xa0, 0x4f, 0x98, 0x7a, 0xc2, 0x9a, 0xd0, 0xd3);
DEFINE_GUID(IID_IDebugInputCallbacks, 0x9f50e42c, 0xf136, 0x499e, 0x9a, 0x97, 0x73, 0x03, 0x6c, 0x94, 0xed, 0x2d);
DEFINE_GUID(IID_IDebugOutputCallbacks, 0x4bf58045, 0xd654, 0x4c40, 0xb0, 0xaf, 0x68, 0x30, 0x90, 0xf3, 0x56, 0xdc);
DEFINE_GUID(IID_IDebugOutputCallbacksWide, 0x4c7fd663, 0xc394, 0x4e26, 0x8e, 0xf1, 0x34, 0xad, 0x5e, 0xd3, 0x76, 0x4c);
DEFINE_GUID(IID_IDebugOutputCallbacks2, 0x67721fe9, 0x56d2, 0x4a44, 0xa3, 0x25, 0x2b, 0x65, 0x51, 0x3c, 0xe6, 0xeb);
DEFINE_GUID(IID_IDebugRegisters, 0xce289126, 0x9e84, 0x45a7, 0x93, 0x7e, 0x67, 0xbb, 0x18, 0x69, 0x14, 0x93);
DEFINE_GUID(IID_IDebugRegisters2, 0x1656afa9, 0x19c6, 0x4e3a, 0x97, 0xe7, 0x5d, 0xc9, 0x16, 0x0c, 0xf9, 0xc4);
DEFINE_GUID(IID_IDebugSymbolGroup, 0xf2528316, 0x0f1a, 0x4431, 0xae, 0xed, 0x11, 0xd0, 0x96, 0xe1, 0xe2, 0xab);
DEFINE_GUID(IID_IDebugSymbolGroup2, 0x6a7ccc5f, 0xfb5e, 0x4dcc, 0xb4, 0x1c, 0x6c, 0x20, 0x30, 0x7b, 0xcc, 0xc7);
DEFINE_GUID(IID_IDebugSymbols, 0x8c31e98c, 0x983a, 0x48a5, 0x90, 0x16, 0x6f, 0xe5, 0xd6, 0x67, 0xa9, 0x50);
DEFINE_GUID(IID_IDebugSymbols2, 0x3a707211, 0xafdd, 0x4495, 0xad, 0x4f, 0x56, 0xfe, 0xcd, 0xf8, 0x16, 0x3f);
DEFINE_GUID(IID_IDebugSymbols3, 0xf02fbecc, 0x50ac, 0x4f36, 0x9a, 0xd9, 0xc9, 0x75, 0xe8, 0xf3, 0x2f, 0xf8);
DEFINE_GUID(IID_IDebugSystemObjects, 0x6b86fe2c, 0x2c4f, 0x4f0c, 0x9d, 0xa2, 0x17, 0x43, 0x11, 0xac, 0xc3, 0x27);
DEFINE_GUID(IID_IDebugSystemObjects2, 0x0ae9f5ff, 0x1852, 0x4679, 0xb0, 0x55, 0x49, 0x4b, 0xee, 0x64, 0x07, 0xee);
DEFINE_GUID(IID_IDebugSystemObjects3, 0xe9676e2f, 0xe286, 0x4ea3, 0xb0, 0xf9, 0xdf, 0xe5, 0xd9, 0xfc, 0x33, 0x0e);
DEFINE_GUID(IID_IDebugSystemObjects4, 0x489468e6, 0x7d0f, 0x4af5, 0x87, 0xab, 0x25, 0x20, 0x74, 0x54, 0xd5, 0x53);
typedef interface DECLSPEC_UUID("f2df5f53-071f-47bd-9de6-5734c3fed689")	IDebugAdvanced *PDEBUG_ADVANCED;
	typedef interface DECLSPEC_UUID("716d14c9-119b-4ba5-af1f-0890e672416a")	IDebugAdvanced2 *PDEBUG_ADVANCED2;
	typedef interface DECLSPEC_UUID("cba4abb4-84c4-444d-87ca-a04e13286739")	IDebugAdvanced3 *PDEBUG_ADVANCED3;
	typedef interface DECLSPEC_UUID("5bd9d474-5975-423a-b88b-65a8e7110e65")	IDebugBreakpoint *PDEBUG_BREAKPOINT;
	typedef interface DECLSPEC_UUID("1b278d20-79f2-426e-a3f9-c1ddf375d48e")	IDebugBreakpoint2 *PDEBUG_BREAKPOINT2;
	typedef interface DECLSPEC_UUID("27fe5639-8407-4f47-8364-ee118fb08ac8")	IDebugClient *PDEBUG_CLIENT;
	typedef interface DECLSPEC_UUID("edbed635-372e-4dab-bbfe-ed0d2f63be81")	IDebugClient2 *PDEBUG_CLIENT2;
	typedef interface DECLSPEC_UUID("dd492d7f-71b8-4ad6-a8dc-1c887479ff91")	IDebugClient3 *PDEBUG_CLIENT3;
	typedef interface DECLSPEC_UUID("ca83c3de-5089-4cf8-93c8-d892387f2a5e")	IDebugClient4 *PDEBUG_CLIENT4;
	typedef interface DECLSPEC_UUID("e3acb9d7-7ec2-4f0c-a0da-e81e0cbbe628")	IDebugClient5 *PDEBUG_CLIENT5;
	typedef interface DECLSPEC_UUID("5182e668-105e-416e-ad92-24ef800424ba")	IDebugControl *PDEBUG_CONTROL;
	typedef interface DECLSPEC_UUID("d4366723-44df-4bed-8c7e-4c05424f4588")	IDebugControl2 *PDEBUG_CONTROL2;
	typedef interface DECLSPEC_UUID("7df74a86-b03f-407f-90ab-a20dadcead08")	IDebugControl3 *PDEBUG_CONTROL3;
	typedef interface DECLSPEC_UUID("94e60ce9-9b41-4b19-9fc0-6d9eb35272b3")	IDebugControl4 *PDEBUG_CONTROL4;
	typedef interface DECLSPEC_UUID("88f7dfab-3ea7-4c3a-aefb-c4e8106173aa") IDebugDataSpaces *PDEBUG_DATA_SPACES;
	typedef interface DECLSPEC_UUID("7a5e852f-96e9-468f-ac1b-0b3addc4a049")	IDebugDataSpaces2 *PDEBUG_DATA_SPACES2;
	typedef interface DECLSPEC_UUID("23f79d6c-8aaf-4f7c-a607-9995f5407e63")	IDebugDataSpaces3 *PDEBUG_DATA_SPACES3;
	typedef interface DECLSPEC_UUID("d98ada1f-29e9-4ef5-a6c0-e53349883212")	IDebugDataSpaces4 *PDEBUG_DATA_SPACES4;
	typedef interface DECLSPEC_UUID("337be28b-5036-4d72-b6bf-c45fbb9f2eaa")	IDebugEventCallbacks *PDEBUG_EVENT_CALLBACKS;
	typedef interface DECLSPEC_UUID("0690e046-9c23-45ac-a04f-987ac29ad0d3")	IDebugEventCallbacksWide *PDEBUG_EVENT_CALLBACKS_WIDE;
	typedef interface DECLSPEC_UUID("9f50e42c-f136-499e-9a97-73036c94ed2d")	IDebugInputCallbacks *PDEBUG_INPUT_CALLBACKS;
	typedef interface DECLSPEC_UUID("4bf58045-d654-4c40-b0af-683090f356dc")	IDebugOutputCallbacks *PDEBUG_OUTPUT_CALLBACKS;
	typedef interface DECLSPEC_UUID("4c7fd663-c394-4e26-8ef1-34ad5ed3764c")	IDebugOutputCallbacksWide *PDEBUG_OUTPUT_CALLBACKS_WIDE;
	typedef interface DECLSPEC_UUID("67721fe9-56d2-4a44-a325-2b65513ce6eb")	IDebugOutputCallbacks2 *PDEBUG_OUTPUT_CALLBACKS2;
	typedef interface DECLSPEC_UUID("ce289126-9e84-45a7-937e-67bb18691493")	IDebugRegisters *PDEBUG_REGISTERS;
	typedef interface DECLSPEC_UUID("1656afa9-19c6-4e3a-97e7-5dc9160cf9c4")	IDebugRegisters2 *PDEBUG_REGISTERS2;
	typedef interface DECLSPEC_UUID("f2528316-0f1a-4431-aeed-11d096e1e2ab")	IDebugSymbolGroup *PDEBUG_SYMBOL_GROUP;
	typedef interface DECLSPEC_UUID("6a7ccc5f-fb5e-4dcc-b41c-6c20307bccc7")	IDebugSymbolGroup2 *PDEBUG_SYMBOL_GROUP2;
	typedef interface DECLSPEC_UUID("8c31e98c-983a-48a5-9016-6fe5d667a950")	IDebugSymbols *PDEBUG_SYMBOLS;
	typedef interface DECLSPEC_UUID("3a707211-afdd-4495-ad4f-56fecdf8163f")	IDebugSymbols2 *PDEBUG_SYMBOLS2;
	typedef interface DECLSPEC_UUID("f02fbecc-50ac-4f36-9ad9-c975e8f32ff8")	IDebugSymbols3 *PDEBUG_SYMBOLS3;
	typedef interface DECLSPEC_UUID("6b86fe2c-2c4f-4f0c-9da2-174311acc327")	IDebugSystemObjects *PDEBUG_SYSTEM_OBJECTS;
	typedef interface DECLSPEC_UUID("0ae9f5ff-1852-4679-b055-494bee6407ee")	IDebugSystemObjects2 *PDEBUG_SYSTEM_OBJECTS2;
	typedef interface DECLSPEC_UUID("e9676e2f-e286-4ea3-b0f9-dfe5d9fc330e")	IDebugSystemObjects3 *PDEBUG_SYSTEM_OBJECTS3;
	typedef interface DECLSPEC_UUID("489468e6-7d0f-4af5-87ab-25207454d553")	IDebugSystemObjects4 *PDEBUG_SYSTEM_OBJECTS4;
#define DEBUG_EXTEND64(Addr) ((ULONG64)(LONG64)(LONG)(Addr))
STDAPI DebugConnect(PCSTR RemoteOptions, REFIID InterfaceId, PVOID *Interface);
STDAPI DebugConnectWide(PCWSTR RemoteOptions, REFIID InterfaceId, PVOID *Interface);
STDAPI DebugCreate(REFIID InterfaceId, PVOID *Interface);
typedef struct _DEBUG_OFFSET_REGION
{
	ULONG64 Base;
	ULONG64 Size;
} DEBUG_OFFSET_REGION, *PDEBUG_OFFSET_REGION;
#undef INTERFACE
#define INTERFACE IDebugAdvanced
DECLARE_INTERFACE_(IDebugAdvanced, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetThreadContext) (THIS_ PVOID Context, ULONG ContextSize);
	STDMETHOD(SetThreadContext) (THIS_ PVOID Context, ULONG ContextSize);
};
typedef struct _DEBUG_READ_USER_MINIDUMP_STREAM
{
 ULONG StreamType;
 ULONG Flags;
 ULONG64 Offset;
 PVOID Buffer;
 ULONG BufferSize;
 ULONG BufferUsed;
} DEBUG_READ_USER_MINIDUMP_STREAM, *PDEBUG_READ_USER_MINIDUMP_STREAM;
#define DEBUG_GET_TEXT_COMPLETIONS_NO_DOT_COMMANDS       0x00000001
#define DEBUG_GET_TEXT_COMPLETIONS_NO_EXTENSION_COMMANDS 0x00000002
#define DEBUG_GET_TEXT_COMPLETIONS_NO_SYMBOLS            0x00000004
typedef struct _DEBUG_GET_TEXT_COMPLETIONS_IN
{
    ULONG Flags;
    ULONG MatchCountLimit;
    ULONG64 Reserved[3];
} DEBUG_GET_TEXT_COMPLETIONS_IN, *PDEBUG_GET_TEXT_COMPLETIONS_IN;
#define DEBUG_GET_TEXT_COMPLETIONS_IS_DOT_COMMAND       0x00000001
#define DEBUG_GET_TEXT_COMPLETIONS_IS_EXTENSION_COMMAND 0x00000002
#define DEBUG_GET_TEXT_COMPLETIONS_IS_SYMBOL            0x00000004
typedef struct _DEBUG_GET_TEXT_COMPLETIONS_OUT
{
    ULONG Flags;
    ULONG ReplaceIndex;
    ULONG MatchCount;
    ULONG Reserved1;
    ULONG64 Reserved2[2];
} DEBUG_GET_TEXT_COMPLETIONS_OUT, *PDEBUG_GET_TEXT_COMPLETIONS_OUT;
typedef struct _DEBUG_CACHED_SYMBOL_INFO
{
    ULONG64 ModBase;
    ULONG64 Arg1;
    ULONG64 Arg2;
    ULONG Id;
    ULONG Arg3;
} DEBUG_CACHED_SYMBOL_INFO, *PDEBUG_CACHED_SYMBOL_INFO;
#define DEBUG_REQUEST_SOURCE_PATH_HAS_SOURCE_SERVER 0
#define DEBUG_REQUEST_TARGET_EXCEPTION_CONTEXT 1
#define DEBUG_REQUEST_TARGET_EXCEPTION_THREAD 2
#define DEBUG_REQUEST_TARGET_EXCEPTION_RECORD 3
#define DEBUG_REQUEST_GET_ADDITIONAL_CREATE_OPTIONS 4
#define DEBUG_REQUEST_SET_ADDITIONAL_CREATE_OPTIONS 5
#define DEBUG_REQUEST_GET_WIN32_MAJOR_MINOR_VERSIONS 6
#define DEBUG_REQUEST_READ_USER_MINIDUMP_STREAM 7
#define DEBUG_REQUEST_TARGET_CAN_DETACH 8
#define DEBUG_REQUEST_SET_LOCAL_IMPLICIT_COMMAND_LINE 9
#define DEBUG_REQUEST_GET_CAPTURED_EVENT_CODE_OFFSET 10
#define DEBUG_REQUEST_READ_CAPTURED_EVENT_CODE_STREAM 11
#define DEBUG_REQUEST_EXT_TYPED_DATA_ANSI 12
#define DEBUG_REQUEST_GET_EXTENSION_SEARCH_PATH_WIDE 13
#define DEBUG_REQUEST_GET_TEXT_COMPLETIONS_WIDE 14
#define DEBUG_REQUEST_GET_CACHED_SYMBOL_INFO 15
#define DEBUG_REQUEST_ADD_CACHED_SYMBOL_INFO 16
#define DEBUG_REQUEST_REMOVE_CACHED_SYMBOL_INFO 17
#define DEBUG_REQUEST_GET_TEXT_COMPLETIONS_ANSI 18
#define DEBUG_REQUEST_CURRENT_OUTPUT_CALLBACKS_ARE_DML_AWARE 19
#define DEBUG_REQUEST_GET_OFFSET_UNWIND_INFORMATION 20
#define DEBUG_REQUEST_GET_DUMP_HEADER 21
#define DEBUG_REQUEST_SET_DUMP_HEADER 22
#define DEBUG_REQUEST_MIDORI 23
#define DEBUG_REQUEST_PROCESS_DESCRIPTORS 24
#define DEBUG_REQUEST_MISC_INFORMATION 25
#define DEBUG_REQUEST_OPEN_PROCESS_TOKEN 26
#define DEBUG_REQUEST_OPEN_THREAD_TOKEN 27
#define DEBUG_REQUEST_DUPLICATE_TOKEN 28
#define DEBUG_REQUEST_QUERY_INFO_TOKEN 29
#define DEBUG_REQUEST_CLOSE_TOKEN 30
#define DEBUG_SRCFILE_SYMBOL_TOKEN 0
#define DEBUG_SRCFILE_SYMBOL_TOKEN_SOURCE_COMMAND_WIDE 1
#define DEBUG_SYMINFO_BREAKPOINT_SOURCE_LINE 0
#define DEBUG_SYMINFO_IMAGEHLP_MODULEW64 1
#define DEBUG_SYMINFO_GET_SYMBOL_NAME_BY_OFFSET_AND_TAG_WIDE 2
#define DEBUG_SYMINFO_GET_MODULE_SYMBOL_NAMES_AND_OFFSETS 3
#define DEBUG_SYSOBJINFO_THREAD_BASIC_INFORMATION 0
#define DEBUG_SYSOBJINFO_THREAD_NAME_WIDE 1
#define DEBUG_SYSOBJINFO_CURRENT_PROCESS_COOKIE 2
#define DEBUG_TBINFO_EXIT_STATUS    0x00000001
#define DEBUG_TBINFO_PRIORITY_CLASS 0x00000002
#define DEBUG_TBINFO_PRIORITY       0x00000004
#define DEBUG_TBINFO_TIMES          0x00000008
#define DEBUG_TBINFO_START_OFFSET   0x00000010
#define DEBUG_TBINFO_AFFINITY       0x00000020
#define DEBUG_TBINFO_ALL            0x0000003f
typedef struct _DEBUG_THREAD_BASIC_INFORMATION
{
    ULONG Valid;
    ULONG ExitStatus;
    ULONG PriorityClass;
    ULONG Priority;
    ULONG64 CreateTime;
    ULONG64 ExitTime;
    ULONG64 KernelTime;
    ULONG64 UserTime;
    ULONG64 StartOffset;
    ULONG64 Affinity;
} DEBUG_THREAD_BASIC_INFORMATION, *PDEBUG_THREAD_BASIC_INFORMATION;
#undef INTERFACE
#define INTERFACE IDebugAdvanced2
DECLARE_INTERFACE_(IDebugAdvanced2, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetThreadContext) (THIS_ PVOID Context, ULONG ContextSize);
	STDMETHOD(SetThreadContext) (THIS_ PVOID Context, ULONG ContextSize);
	STDMETHOD(Request) (THIS_ ULONG Request, PVOID InBuffer, ULONG InBufferSize, PVOID OutBuffer, ULONG OutBufferSize, PULONG OutSize);
	STDMETHOD(GetSourceFileInformation) (THIS_ ULONG Which, PSTR SourceFile, ULONG64 Arg64, ULONG Arg32, PVOID Buffer, ULONG BufferSize, PULONG InfoSize);
	STDMETHOD(FindSourceFileAndToken) (THIS_ ULONG StartElement, ULONG64 ModAddr, PCSTR File, ULONG Flags, PVOID FileToken, ULONG FileTokenSize, PULONG FoundElement, PSTR Buffer, ULONG BufferSize, PULONG FoundSize);
	STDMETHOD(GetSymbolInformation) (THIS_ ULONG Which, ULONG64 Arg64, ULONG Arg32, PVOID Buffer, ULONG BufferSize, PULONG InfoSize, PSTR StringBuffer, ULONG StringBufferSize, PULONG StringSize);
	STDMETHOD(GetSystemObjectInformation) (THIS_ ULONG Which, ULONG64 Arg64, ULONG Arg32, PVOID Buffer, ULONG BufferSize, PULONG InfoSize);
};
#undef INTERFACE
#define INTERFACE IDebugAdvanced3
DECLARE_INTERFACE_(IDebugAdvanced3, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetThreadContext) (THIS_ PVOID Context, ULONG ContextSize);
	STDMETHOD(SetThreadContext) (THIS_ PVOID Context, ULONG ContextSize);
	STDMETHOD(Request) (THIS_ ULONG Request, PVOID InBuffer, ULONG InBufferSize, PVOID OutBuffer, ULONG OutBufferSize, PULONG OutSize);
	STDMETHOD(GetSourceFileInformation) (THIS_ ULONG Which, PSTR SourceFile, ULONG64 Arg64, ULONG Arg32, PVOID Buffer, ULONG BufferSize, PULONG InfoSize);
	STDMETHOD(FindSourceFileAndToken) (THIS_ ULONG StartElement, ULONG64 ModAddr, PCSTR File, ULONG Flags, PVOID FileToken, ULONG FileTokenSize, PULONG FoundElement, PSTR Buffer, ULONG BufferSize, PULONG FoundSize);
	STDMETHOD(GetSymbolInformation) (THIS_ ULONG Which, ULONG64 Arg64, ULONG Arg32, PVOID Buffer, ULONG BufferSize, PULONG InfoSize, PSTR StringBuffer, ULONG StringBufferSize, PULONG StringSize);
	STDMETHOD(GetSystemObjectInformation) (THIS_ ULONG Which, ULONG64 Arg64, ULONG Arg32, PVOID Buffer, ULONG BufferSize, PULONG InfoSize);
	STDMETHOD(GetSourceFileInformationWide) (THIS_ ULONG Which, PWSTR SourceFile, ULONG64 Arg64, ULONG Arg32, PVOID Buffer, ULONG BufferSize, PULONG InfoSize);
	STDMETHOD(FindSourceFileAndTokenWide) (THIS_ ULONG StartElement, ULONG64 ModAddr, PCWSTR File, ULONG Flags, PVOID FileToken, ULONG FileTokenSize, PULONG FoundElement, PWSTR Buffer, ULONG BufferSize, PULONG FoundSize);
	STDMETHOD(GetSymbolInformationWide) (THIS_ ULONG Which, ULONG64 Arg64, ULONG Arg32, PVOID Buffer, ULONG BufferSize, PULONG InfoSize, PWSTR StringBuffer, ULONG StringBufferSize, PULONG StringSize);
};
#define DEBUG_BREAKPOINT_CODE 0
#define DEBUG_BREAKPOINT_DATA 1
#define DEBUG_BREAKPOINT_TIME 2
#define DEBUG_BREAKPOINT_GO_ONLY    0x00000001
#define DEBUG_BREAKPOINT_DEFERRED   0x00000002
#define DEBUG_BREAKPOINT_ENABLED    0x00000004
#define DEBUG_BREAKPOINT_ADDER_ONLY 0x00000008
#define DEBUG_BREAKPOINT_ONE_SHOT   0x00000010
#define DEBUG_BREAK_READ    0x00000001
#define DEBUG_BREAK_WRITE   0x00000002
#define DEBUG_BREAK_EXECUTE 0x00000004
#define DEBUG_BREAK_IO      0x00000008
typedef struct _DEBUG_BREAKPOINT_PARAMETERS
{
    ULONG64 Offset;
    ULONG Id;
    ULONG BreakType;
    ULONG ProcType;
    ULONG Flags;
    ULONG DataSize;
    ULONG DataAccessType;
    ULONG PassCount;
    ULONG CurrentPassCount;
    ULONG MatchThread;
    ULONG CommandSize;
    ULONG OffsetExpressionSize;
} DEBUG_BREAKPOINT_PARAMETERS, *PDEBUG_BREAKPOINT_PARAMETERS;
#undef INTERFACE
#define INTERFACE IDebugBreakpoint
DECLARE_INTERFACE_(IDebugBreakpoint, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetId) (THIS_ PULONG Id);
	STDMETHOD(GetType) (THIS_ PULONG BreakType, PULONG ProcType);
	STDMETHOD(GetAdder) (THIS_ PDEBUG_CLIENT * Adder);
	STDMETHOD(GetFlags) (THIS_ PULONG Flags);
	STDMETHOD(AddFlags) (THIS_ ULONG Flags);
	STDMETHOD(RemoveFlags) (THIS_ ULONG Flags);
	STDMETHOD(SetFlags) (THIS_ ULONG Flags);
	STDMETHOD(GetOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(SetOffset) (THIS_ ULONG64 Offset);
	STDMETHOD(GetDataParameters) (THIS_ PULONG Size, PULONG AccessType);
	STDMETHOD(SetDataParameters) (THIS_ ULONG Size, ULONG AccessType);
	STDMETHOD(GetPassCount) (THIS_ PULONG Count);
	STDMETHOD(SetPassCount) (THIS_ ULONG Count);
	STDMETHOD(GetCurrentPassCount) (THIS_ PULONG Count);
	STDMETHOD(GetMatchThreadId) (THIS_ PULONG Id);
	STDMETHOD(SetMatchThreadId) (THIS_ ULONG Thread);
	STDMETHOD(GetCommand) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG CommandSize);
	STDMETHOD(SetCommand) (THIS_ PCSTR Command);
	STDMETHOD(GetOffsetExpression) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG ExpressionSize);
	STDMETHOD(SetOffsetExpression) (THIS_ PCSTR Expression);
	STDMETHOD(GetParameters) (THIS_ PDEBUG_BREAKPOINT_PARAMETERS Params);
};
#undef INTERFACE
#define INTERFACE IDebugBreakpoint2
DECLARE_INTERFACE_(IDebugBreakpoint2, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetId) (THIS_ PULONG Id);
	STDMETHOD(GetType) (THIS_ PULONG BreakType, PULONG ProcType);
	STDMETHOD(GetAdder) (THIS_ PDEBUG_CLIENT * Adder);
	STDMETHOD(GetFlags) (THIS_ PULONG Flags);
	STDMETHOD(AddFlags) (THIS_ ULONG Flags);
	STDMETHOD(RemoveFlags) (THIS_ ULONG Flags);
	STDMETHOD(SetFlags) (THIS_ ULONG Flags);
	STDMETHOD(GetOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(SetOffset) (THIS_ ULONG64 Offset);
	STDMETHOD(GetDataParameters) (THIS_ PULONG Size, PULONG AccessType);
	STDMETHOD(SetDataParameters) (THIS_ ULONG Size, ULONG AccessType);
	STDMETHOD(GetPassCount) (THIS_ PULONG Count);
	STDMETHOD(SetPassCount) (THIS_ ULONG Count);
	STDMETHOD(GetCurrentPassCount) (THIS_ PULONG Count);
	STDMETHOD(GetMatchThreadId) (THIS_ PULONG Id);
	STDMETHOD(SetMatchThreadId) (THIS_ ULONG Thread);
	STDMETHOD(GetCommand) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG CommandSize);
	STDMETHOD(SetCommand) (THIS_ PCSTR Command);
	STDMETHOD(GetOffsetExpression) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG ExpressionSize);
	STDMETHOD(SetOffsetExpression) (THIS_ PCSTR Expression);
	STDMETHOD(GetParameters) (THIS_ PDEBUG_BREAKPOINT_PARAMETERS Params);
	STDMETHOD(GetCommandWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG CommandSize);
	STDMETHOD(SetCommandWide) (THIS_ PCWSTR Command);
	STDMETHOD(GetOffsetExpressionWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG ExpressionSize);
	STDMETHOD(SetOffsetExpressionWide) (THIS_ PCWSTR Expression);
};
#define DEBUG_ATTACH_KERNEL_CONNECTION 0x00000000
#define DEBUG_ATTACH_LOCAL_KERNEL      0x00000001
#define DEBUG_ATTACH_EXDI_DRIVER       0x00000002
#define DEBUG_GET_PROC_DEFAULT      0x00000000
#define DEBUG_GET_PROC_FULL_MATCH   0x00000001
#define DEBUG_GET_PROC_ONLY_MATCH   0x00000002
#define DEBUG_GET_PROC_SERVICE_NAME 0x00000004
#define DEBUG_PROC_DESC_DEFAULT         0x00000000
#define DEBUG_PROC_DESC_NO_PATHS        0x00000001
#define DEBUG_PROC_DESC_NO_SERVICES     0x00000002
#define DEBUG_PROC_DESC_NO_MTS_PACKAGES 0x00000004
#define DEBUG_PROC_DESC_NO_COMMAND_LINE 0x00000008
#define DEBUG_PROC_DESC_NO_SESSION_ID   0x00000010
#define DEBUG_PROC_DESC_NO_USER_NAME    0x00000020
#define DEBUG_ATTACH_DEFAULT                   0x00000000
#define DEBUG_ATTACH_NONINVASIVE               0x00000001
#define DEBUG_ATTACH_EXISTING                  0x00000002
#define DEBUG_ATTACH_NONINVASIVE_NO_SUSPEND    0x00000004
#define DEBUG_ATTACH_INVASIVE_NO_INITIAL_BREAK 0x00000008
#define DEBUG_ATTACH_INVASIVE_RESUME_PROCESS   0x00000010
#define DEBUG_ATTACH_NONINVASIVE_ALLOW_PARTIAL 0x00000020
#define DEBUG_CREATE_PROCESS_NO_DEBUG_HEAP CREATE_UNICODE_ENVIRONMENT
#define DEBUG_CREATE_PROCESS_THROUGH_RTL   STACK_SIZE_PARAM_IS_A_RESERVATION
#define DEBUG_ECREATE_PROCESS_DEFAULT                   0x00000000
#define DEBUG_ECREATE_PROCESS_INHERIT_HANDLES           0x00000001
#define DEBUG_ECREATE_PROCESS_USE_VERIFIER_FLAGS        0x00000002
#define DEBUG_ECREATE_PROCESS_USE_IMPLICIT_COMMAND_LINE 0x00000004
typedef struct _DEBUG_CREATE_PROCESS_OPTIONS
{
    ULONG CreateFlags;
    ULONG EngCreateFlags;
    ULONG VerifierFlags;
    ULONG Reserved;
} DEBUG_CREATE_PROCESS_OPTIONS, *PDEBUG_CREATE_PROCESS_OPTIONS;
#define DEBUG_PROCESS_DETACH_ON_EXIT    0x00000001
#define DEBUG_PROCESS_ONLY_THIS_PROCESS 0x00000002
#define DEBUG_CONNECT_SESSION_DEFAULT     0x00000000
#define DEBUG_CONNECT_SESSION_NO_VERSION  0x00000001
#define DEBUG_CONNECT_SESSION_NO_ANNOUNCE 0x00000002
#define DEBUG_SERVERS_DEBUGGER 0x00000001
#define DEBUG_SERVERS_PROCESS  0x00000002
#define DEBUG_SERVERS_ALL      0x00000003
#define DEBUG_END_PASSIVE          0x00000000
#define DEBUG_END_ACTIVE_TERMINATE 0x00000001
#define DEBUG_END_ACTIVE_DETACH    0x00000002
#define DEBUG_END_REENTRANT        0x00000003
#define DEBUG_END_DISCONNECT       0x00000004
#define DEBUG_OUTPUT_NORMAL            0x00000001
#define DEBUG_OUTPUT_ERROR             0x00000002
#define DEBUG_OUTPUT_WARNING           0x00000004
#define DEBUG_OUTPUT_VERBOSE           0x00000008
#define DEBUG_OUTPUT_PROMPT            0x00000010
#define DEBUG_OUTPUT_PROMPT_REGISTERS  0x00000020
#define DEBUG_OUTPUT_EXTENSION_WARNING 0x00000040
#define DEBUG_OUTPUT_DEBUGGEE          0x00000080
#define DEBUG_OUTPUT_DEBUGGEE_PROMPT   0x00000100
#define DEBUG_OUTPUT_SYMBOLS           0x00000200
#define DEBUG_IOUTPUT_KD_PROTOCOL      0x80000000
#define DEBUG_IOUTPUT_REMOTING         0x40000000
#define DEBUG_IOUTPUT_BREAKPOINT       0x20000000
#define DEBUG_IOUTPUT_EVENT            0x10000000
#define DEBUG_IOUTPUT_ADDR_TRANSLATE   0x08000000
#define DEBUG_OUTPUT_IDENTITY_DEFAULT 0x00000000
#undef INTERFACE
#define INTERFACE IDebugClient
DECLARE_INTERFACE_(IDebugClient, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(AttachKernel) (THIS_ ULONG Flags, PCSTR ConnectOptions);
	STDMETHOD(GetKernelConnectionOptions) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG OptionsSize);
	STDMETHOD(SetKernelConnectionOptions) (THIS_ PCSTR Options);
	STDMETHOD(StartProcessServer) (THIS_ ULONG Flags, PCSTR Options, PVOID Reserved);
	STDMETHOD(ConnectProcessServer) (THIS_ PCSTR RemoteOptions, PULONG64 Server);
	STDMETHOD(DisconnectProcessServer) (THIS_ ULONG64 Server);
	STDMETHOD(GetRunningProcessSystemIds) (THIS_ ULONG64 Server, PULONG Ids, ULONG Count, PULONG ActualCount);
	STDMETHOD(GetRunningProcessSystemIdByExecutableName) (THIS_ ULONG64 Server, PCSTR ExeName, ULONG Flags, PULONG Id);
	STDMETHOD(GetRunningProcessDescription) (THIS_ ULONG64 Server, ULONG SystemId, ULONG Flags, PSTR ExeName, ULONG ExeNameSize, PULONG ActualExeNameSize, PSTR Description, ULONG DescriptionSize, PULONG ActualDescriptionSize);
	STDMETHOD(AttachProcess) (THIS_ ULONG64 Server, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(CreateProcess) (THIS_ ULONG64 Server, PSTR CommandLine, ULONG CreateFlags);
	STDMETHOD(CreateProcessAndAttach) (THIS_ ULONG64 Server, PSTR CommandLine, ULONG CreateFlags, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(GetProcessOptions) (THIS_ PULONG Options);
	STDMETHOD(AddProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(SetProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(OpenDumpFile) (THIS_ PCSTR DumpFile);
	STDMETHOD(WriteDumpFile) (THIS_ PCSTR DumpFile, ULONG Qualifier);
	STDMETHOD(ConnectSession) (THIS_ ULONG Flags, ULONG HistoryLimit);
	STDMETHOD(StartServer) (THIS_ PCSTR Options);
	STDMETHOD(OutputServers) (THIS_ ULONG OutputControl, PCSTR Machine, ULONG Flags);
	STDMETHOD(TerminateProcesses) (THIS);
	STDMETHOD(DetachProcesses) (THIS);
	STDMETHOD(EndSession) (THIS_ ULONG Flags);
	STDMETHOD(GetExitCode) (THIS_ PULONG Code);
	STDMETHOD(DispatchCallbacks) (THIS_ ULONG Timeout);
	STDMETHOD(ExitDispatch) (THIS_ PDEBUG_CLIENT Client);
	STDMETHOD(CreateClient) (THIS_ PDEBUG_CLIENT * Client);
	STDMETHOD(GetInputCallbacks) (THIS_ PDEBUG_INPUT_CALLBACKS * Callbacks);
	STDMETHOD(SetInputCallbacks) (THIS_ PDEBUG_INPUT_CALLBACKS Callbacks);
	STDMETHOD(GetOutputCallbacks) (THIS_ PDEBUG_OUTPUT_CALLBACKS * Callbacks);
	STDMETHOD(SetOutputCallbacks) (THIS_ PDEBUG_OUTPUT_CALLBACKS Callbacks);
	STDMETHOD(GetOutputMask) (THIS_ PULONG Mask);
	STDMETHOD(SetOutputMask) (THIS_ ULONG Mask);
	STDMETHOD(GetOtherOutputMask) (THIS_ PDEBUG_CLIENT Client, PULONG Mask);
	STDMETHOD(SetOtherOutputMask) (THIS_ PDEBUG_CLIENT Client, ULONG Mask);
	STDMETHOD(GetOutputWidth) (THIS_ PULONG Columns);
	STDMETHOD(SetOutputWidth) (THIS_ ULONG Columns);
	STDMETHOD(GetOutputLinePrefix) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PrefixSize);
	STDMETHOD(SetOutputLinePrefix) (THIS_ PCSTR Prefix);
	STDMETHOD(GetIdentity) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG IdentitySize);
	STDMETHOD(OutputIdentity) (THIS_ ULONG OutputControl, ULONG Flags, PCSTR Format);
	STDMETHOD(GetEventCallbacks) (THIS_ PDEBUG_EVENT_CALLBACKS * Callbacks);
	STDMETHOD(SetEventCallbacks) (THIS_ PDEBUG_EVENT_CALLBACKS Callbacks);
	STDMETHOD(FlushCallbacks) (THIS);
};
#define DEBUG_FORMAT_DEFAULT                  0x00000000
#define DEBUG_FORMAT_CAB_SECONDARY_ALL_IMAGES 0x10000000
#define DEBUG_FORMAT_WRITE_CAB                0x20000000
#define DEBUG_FORMAT_CAB_SECONDARY_FILES      0x40000000
#define DEBUG_FORMAT_NO_OVERWRITE             0x80000000
#define DEBUG_FORMAT_USER_SMALL_FULL_MEMORY               0x00000001
#define DEBUG_FORMAT_USER_SMALL_HANDLE_DATA               0x00000002
#define DEBUG_FORMAT_USER_SMALL_UNLOADED_MODULES          0x00000004
#define DEBUG_FORMAT_USER_SMALL_INDIRECT_MEMORY           0x00000008
#define DEBUG_FORMAT_USER_SMALL_DATA_SEGMENTS             0x00000010
#define DEBUG_FORMAT_USER_SMALL_FILTER_MEMORY             0x00000020
#define DEBUG_FORMAT_USER_SMALL_FILTER_PATHS              0x00000040
#define DEBUG_FORMAT_USER_SMALL_PROCESS_THREAD_DATA       0x00000080
#define DEBUG_FORMAT_USER_SMALL_PRIVATE_READ_WRITE_MEMORY 0x00000100
#define DEBUG_FORMAT_USER_SMALL_NO_OPTIONAL_DATA          0x00000200
#define DEBUG_FORMAT_USER_SMALL_FULL_MEMORY_INFO          0x00000400
#define DEBUG_FORMAT_USER_SMALL_THREAD_INFO               0x00000800
#define DEBUG_FORMAT_USER_SMALL_CODE_SEGMENTS             0x00001000
#define DEBUG_FORMAT_USER_SMALL_NO_AUXILIARY_STATE        0x00002000
#define DEBUG_FORMAT_USER_SMALL_FULL_AUXILIARY_STATE      0x00004000
#define DEBUG_FORMAT_USER_SMALL_IGNORE_INACCESSIBLE_MEM   0x08000000
#define DEBUG_DUMP_FILE_BASE           0xffffffff
#define DEBUG_DUMP_FILE_PAGE_FILE_DUMP 0x00000000
#undef INTERFACE
#define INTERFACE IDebugClient2
DECLARE_INTERFACE_(IDebugClient2, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(AttachKernel) (THIS_ ULONG Flags, PCSTR ConnectOptions);
	STDMETHOD(GetKernelConnectionOptions) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG OptionsSize);
	STDMETHOD(SetKernelConnectionOptions) (THIS_ PCSTR Options);
	STDMETHOD(StartProcessServer) (THIS_ ULONG Flags, PCSTR Options, PVOID Reserved);
	STDMETHOD(ConnectProcessServer) (THIS_ PCSTR RemoteOptions, PULONG64 Server);
	STDMETHOD(DisconnectProcessServer) (THIS_ ULONG64 Server);
	STDMETHOD(GetRunningProcessSystemIds) (THIS_ ULONG64 Server, PULONG Ids, ULONG Count, PULONG ActualCount);
	STDMETHOD(GetRunningProcessSystemIdByExecutableName) (THIS_ ULONG64 Server, PCSTR ExeName, ULONG Flags, PULONG Id);
	STDMETHOD(GetRunningProcessDescription) (THIS_ ULONG64 Server, ULONG SystemId, ULONG Flags, PSTR ExeName, ULONG ExeNameSize, PULONG ActualExeNameSize, PSTR Description, ULONG DescriptionSize, PULONG ActualDescriptionSize);
	STDMETHOD(AttachProcess) (THIS_ ULONG64 Server, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(CreateProcess) (THIS_ ULONG64 Server, PSTR CommandLine, ULONG CreateFlags);
	STDMETHOD(CreateProcessAndAttach) (THIS_ ULONG64 Server, PSTR CommandLine, ULONG CreateFlags, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(GetProcessOptions) (THIS_ PULONG Options);
	STDMETHOD(AddProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(SetProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(OpenDumpFile) (THIS_ PCSTR DumpFile);
	STDMETHOD(WriteDumpFile) (THIS_ PCSTR DumpFile, ULONG Qualifier);
	STDMETHOD(ConnectSession) (THIS_ ULONG Flags, ULONG HistoryLimit);
	STDMETHOD(StartServer) (THIS_ PCSTR Options);
	STDMETHOD(OutputServers) (THIS_ ULONG OutputControl, PCSTR Machine, ULONG Flags);
	STDMETHOD(TerminateProcesses) (THIS);
	STDMETHOD(DetachProcesses) (THIS);
	STDMETHOD(EndSession) (THIS_ ULONG Flags);
	STDMETHOD(GetExitCode) (THIS_ PULONG Code);
	STDMETHOD(DispatchCallbacks) (THIS_ ULONG Timeout);
	STDMETHOD(ExitDispatch) (THIS_ PDEBUG_CLIENT Client);
	STDMETHOD(CreateClient) (THIS_ PDEBUG_CLIENT * Client);
	STDMETHOD(GetInputCallbacks) (THIS_ PDEBUG_INPUT_CALLBACKS * Callbacks);
	STDMETHOD(SetInputCallbacks) (THIS_ PDEBUG_INPUT_CALLBACKS Callbacks);
	STDMETHOD(GetOutputCallbacks) (THIS_ PDEBUG_OUTPUT_CALLBACKS * Callbacks);
	STDMETHOD(SetOutputCallbacks) (THIS_ PDEBUG_OUTPUT_CALLBACKS Callbacks);
	STDMETHOD(GetOutputMask) (THIS_ PULONG Mask);
	STDMETHOD(SetOutputMask) (THIS_ ULONG Mask);
	STDMETHOD(GetOtherOutputMask) (THIS_ PDEBUG_CLIENT Client, PULONG Mask);
	STDMETHOD(SetOtherOutputMask) (THIS_ PDEBUG_CLIENT Client, ULONG Mask);
	STDMETHOD(GetOutputWidth) (THIS_ PULONG Columns);
	STDMETHOD(SetOutputWidth) (THIS_ ULONG Columns);
	STDMETHOD(GetOutputLinePrefix) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PrefixSize);
	STDMETHOD(SetOutputLinePrefix) (THIS_ PCSTR Prefix);
	STDMETHOD(GetIdentity) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG IdentitySize);
	STDMETHOD(OutputIdentity) (THIS_ ULONG OutputControl, ULONG Flags, PCSTR Format);
	STDMETHOD(GetEventCallbacks) (THIS_ PDEBUG_EVENT_CALLBACKS * Callbacks);
	STDMETHOD(SetEventCallbacks) (THIS_ PDEBUG_EVENT_CALLBACKS Callbacks);
	STDMETHOD(FlushCallbacks) (THIS);
	STDMETHOD(WriteDumpFile2) (THIS_ PCSTR DumpFile, ULONG Qualifier, ULONG FormatFlags, PCSTR Comment);
	STDMETHOD(AddDumpInformationFile) (THIS_ PCSTR InfoFile, ULONG Type);
	STDMETHOD(EndProcessServer) (THIS_ ULONG64 Server);
	STDMETHOD(WaitForProcessServerEnd) (THIS_ ULONG Timeout);
	STDMETHOD(IsKernelDebuggerEnabled) (THIS);
	STDMETHOD(TerminateCurrentProcess) (THIS);
	STDMETHOD(DetachCurrentProcess) (THIS);
	STDMETHOD(AbandonCurrentProcess) (THIS);
};
#undef INTERFACE
#define INTERFACE IDebugClient3
DECLARE_INTERFACE_(IDebugClient3, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(AttachKernel) (THIS_ ULONG Flags, PCSTR ConnectOptions);
	STDMETHOD(GetKernelConnectionOptions) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG OptionsSize);
	STDMETHOD(SetKernelConnectionOptions) (THIS_ PCSTR Options);
	STDMETHOD(StartProcessServer) (THIS_ ULONG Flags, PCSTR Options, PVOID Reserved);
	STDMETHOD(ConnectProcessServer) (THIS_ PCSTR RemoteOptions, PULONG64 Server);
	STDMETHOD(DisconnectProcessServer) (THIS_ ULONG64 Server);
	STDMETHOD(GetRunningProcessSystemIds) (THIS_ ULONG64 Server, PULONG Ids, ULONG Count, PULONG ActualCount);
	STDMETHOD(GetRunningProcessSystemIdByExecutableName) (THIS_ ULONG64 Server, PCSTR ExeName, ULONG Flags, PULONG Id);
	STDMETHOD(GetRunningProcessDescription) (THIS_ ULONG64 Server, ULONG SystemId, ULONG Flags, PSTR ExeName, ULONG ExeNameSize, PULONG ActualExeNameSize, PSTR Description, ULONG DescriptionSize, PULONG ActualDescriptionSize);
	STDMETHOD(AttachProcess) (THIS_ ULONG64 Server, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(CreateProcess) (THIS_ ULONG64 Server, PSTR CommandLine, ULONG CreateFlags);
	STDMETHOD(CreateProcessAndAttach) (THIS_ ULONG64 Server, PSTR CommandLine, ULONG CreateFlags, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(GetProcessOptions) (THIS_ PULONG Options);
	STDMETHOD(AddProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(SetProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(OpenDumpFile) (THIS_ PCSTR DumpFile);
	STDMETHOD(WriteDumpFile) (THIS_ PCSTR DumpFile, ULONG Qualifier);
	STDMETHOD(ConnectSession) (THIS_ ULONG Flags, ULONG HistoryLimit);
	STDMETHOD(StartServer) (THIS_ PCSTR Options);
	STDMETHOD(OutputServers) (THIS_ ULONG OutputControl, PCSTR Machine, ULONG Flags);
	STDMETHOD(TerminateProcesses) (THIS);
	STDMETHOD(DetachProcesses) (THIS);
	STDMETHOD(EndSession) (THIS_ ULONG Flags);
	STDMETHOD(GetExitCode) (THIS_ PULONG Code);
	STDMETHOD(DispatchCallbacks) (THIS_ ULONG Timeout);
	STDMETHOD(ExitDispatch) (THIS_ PDEBUG_CLIENT Client);
	STDMETHOD(CreateClient) (THIS_ PDEBUG_CLIENT * Client);
	STDMETHOD(GetInputCallbacks) (THIS_ PDEBUG_INPUT_CALLBACKS * Callbacks);
	STDMETHOD(SetInputCallbacks) (THIS_ PDEBUG_INPUT_CALLBACKS Callbacks);
	STDMETHOD(GetOutputCallbacks) (THIS_ PDEBUG_OUTPUT_CALLBACKS * Callbacks);
	STDMETHOD(SetOutputCallbacks) (THIS_ PDEBUG_OUTPUT_CALLBACKS Callbacks);
	STDMETHOD(GetOutputMask) (THIS_ PULONG Mask);
	STDMETHOD(SetOutputMask) (THIS_ ULONG Mask);
	STDMETHOD(GetOtherOutputMask) (THIS_ PDEBUG_CLIENT Client, PULONG Mask);
	STDMETHOD(SetOtherOutputMask) (THIS_ PDEBUG_CLIENT Client, ULONG Mask);
	STDMETHOD(GetOutputWidth) (THIS_ PULONG Columns);
	STDMETHOD(SetOutputWidth) (THIS_ ULONG Columns);
	STDMETHOD(GetOutputLinePrefix) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PrefixSize);
	STDMETHOD(SetOutputLinePrefix) (THIS_ PCSTR Prefix);
	STDMETHOD(GetIdentity) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG IdentitySize);
	STDMETHOD(OutputIdentity) (THIS_ ULONG OutputControl, ULONG Flags, PCSTR Format);
	STDMETHOD(GetEventCallbacks) (THIS_ PDEBUG_EVENT_CALLBACKS * Callbacks);
	STDMETHOD(SetEventCallbacks) (THIS_ PDEBUG_EVENT_CALLBACKS Callbacks);
	STDMETHOD(FlushCallbacks) (THIS);
	STDMETHOD(WriteDumpFile2) (THIS_ PCSTR DumpFile, ULONG Qualifier, ULONG FormatFlags, PCSTR Comment);
	STDMETHOD(AddDumpInformationFile) (THIS_ PCSTR InfoFile, ULONG Type);
	STDMETHOD(EndProcessServer) (THIS_ ULONG64 Server);
	STDMETHOD(WaitForProcessServerEnd) (THIS_ ULONG Timeout);
	STDMETHOD(IsKernelDebuggerEnabled) (THIS);
	STDMETHOD(TerminateCurrentProcess) (THIS);
	STDMETHOD(DetachCurrentProcess) (THIS);
	STDMETHOD(AbandonCurrentProcess) (THIS);
	STDMETHOD(GetRunningProcessSystemIdByExecutableNameWide) (THIS_ ULONG64 Server, PCWSTR ExeName, ULONG Flags, PULONG Id);
	STDMETHOD(GetRunningProcessDescriptionWide) (THIS_ ULONG64 Server, ULONG SystemId, ULONG Flags, PWSTR ExeName, ULONG ExeNameSize, PULONG ActualExeNameSize, PWSTR Description, ULONG DescriptionSize, PULONG ActualDescriptionSize);
	STDMETHOD(CreateProcessWide) (THIS_ ULONG64 Server, PWSTR CommandLine, ULONG CreateFlags);
	STDMETHOD(CreateProcessAndAttachWide) (THIS_ ULONG64 Server, PWSTR CommandLine, ULONG CreateFlags, ULONG ProcessId, ULONG AttachFlags);
};
#define DEBUG_DUMP_FILE_LOAD_FAILED_INDEX  0xffffffff
#define DEBUG_DUMP_FILE_ORIGINAL_CAB_INDEX 0xfffffffe
#undef INTERFACE
#define INTERFACE IDebugClient4
DECLARE_INTERFACE_(IDebugClient4, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(AttachKernel) (THIS_ ULONG Flags, PCSTR ConnectOptions);
	STDMETHOD(GetKernelConnectionOptions) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG OptionsSize);
	STDMETHOD(SetKernelConnectionOptions) (THIS_ PCSTR Options);
	STDMETHOD(StartProcessServer) (THIS_ ULONG Flags, PCSTR Options, PVOID Reserved);
	STDMETHOD(ConnectProcessServer) (THIS_ PCSTR RemoteOptions, PULONG64 Server);
	STDMETHOD(DisconnectProcessServer) (THIS_ ULONG64 Server);
	STDMETHOD(GetRunningProcessSystemIds) (THIS_ ULONG64 Server, PULONG Ids, ULONG Count, PULONG ActualCount);
	STDMETHOD(GetRunningProcessSystemIdByExecutableName) (THIS_ ULONG64 Server, PCSTR ExeName, ULONG Flags, PULONG Id);
	STDMETHOD(GetRunningProcessDescription) (THIS_ ULONG64 Server, ULONG SystemId, ULONG Flags, PSTR ExeName, ULONG ExeNameSize, PULONG ActualExeNameSize, PSTR Description, ULONG DescriptionSize, PULONG ActualDescriptionSize);
	STDMETHOD(AttachProcess) (THIS_ ULONG64 Server, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(CreateProcess) (THIS_ ULONG64 Server, PSTR CommandLine, ULONG CreateFlags);
	STDMETHOD(CreateProcessAndAttach) (THIS_ ULONG64 Server, PSTR CommandLine, ULONG CreateFlags, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(GetProcessOptions) (THIS_ PULONG Options);
	STDMETHOD(AddProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(SetProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(OpenDumpFile) (THIS_ PCSTR DumpFile);
	STDMETHOD(WriteDumpFile) (THIS_ PCSTR DumpFile, ULONG Qualifier);
	STDMETHOD(ConnectSession) (THIS_ ULONG Flags, ULONG HistoryLimit);
	STDMETHOD(StartServer) (THIS_ PCSTR Options);
	STDMETHOD(OutputServers) (THIS_ ULONG OutputControl, PCSTR Machine, ULONG Flags);
	STDMETHOD(TerminateProcesses) (THIS);
	STDMETHOD(DetachProcesses) (THIS);
	STDMETHOD(EndSession) (THIS_ ULONG Flags);
	STDMETHOD(GetExitCode) (THIS_ PULONG Code);
	STDMETHOD(DispatchCallbacks) (THIS_ ULONG Timeout);
	STDMETHOD(ExitDispatch) (THIS_ PDEBUG_CLIENT Client);
	STDMETHOD(CreateClient) (THIS_ PDEBUG_CLIENT * Client);
	STDMETHOD(GetInputCallbacks) (THIS_ PDEBUG_INPUT_CALLBACKS * Callbacks);
	STDMETHOD(SetInputCallbacks) (THIS_ PDEBUG_INPUT_CALLBACKS Callbacks);
	STDMETHOD(GetOutputCallbacks) (THIS_ PDEBUG_OUTPUT_CALLBACKS * Callbacks);
	STDMETHOD(SetOutputCallbacks) (THIS_ PDEBUG_OUTPUT_CALLBACKS Callbacks);
	STDMETHOD(GetOutputMask) (THIS_ PULONG Mask);
	STDMETHOD(SetOutputMask) (THIS_ ULONG Mask);
	STDMETHOD(GetOtherOutputMask) (THIS_ PDEBUG_CLIENT Client, PULONG Mask);
	STDMETHOD(SetOtherOutputMask) (THIS_ PDEBUG_CLIENT Client, ULONG Mask);
	STDMETHOD(GetOutputWidth) (THIS_ PULONG Columns);
	STDMETHOD(SetOutputWidth) (THIS_ ULONG Columns);
	STDMETHOD(GetOutputLinePrefix) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PrefixSize);
	STDMETHOD(SetOutputLinePrefix) (THIS_ PCSTR Prefix);
	STDMETHOD(GetIdentity) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG IdentitySize);
	STDMETHOD(OutputIdentity) (THIS_ ULONG OutputControl, ULONG Flags, PCSTR Format);
	STDMETHOD(GetEventCallbacks) (THIS_ PDEBUG_EVENT_CALLBACKS * Callbacks);
	STDMETHOD(SetEventCallbacks) (THIS_ PDEBUG_EVENT_CALLBACKS Callbacks);
	STDMETHOD(FlushCallbacks) (THIS);
	STDMETHOD(WriteDumpFile2) (THIS_ PCSTR DumpFile, ULONG Qualifier, ULONG FormatFlags, PCSTR Comment);
	STDMETHOD(AddDumpInformationFile) (THIS_ PCSTR InfoFile, ULONG Type);
	STDMETHOD(EndProcessServer) (THIS_ ULONG64 Server);
	STDMETHOD(WaitForProcessServerEnd) (THIS_ ULONG Timeout);
	STDMETHOD(IsKernelDebuggerEnabled) (THIS);
	STDMETHOD(TerminateCurrentProcess) (THIS);
	STDMETHOD(DetachCurrentProcess) (THIS);
	STDMETHOD(AbandonCurrentProcess) (THIS);
	STDMETHOD(GetRunningProcessSystemIdByExecutableNameWide) (THIS_ ULONG64 Server, PCWSTR ExeName, ULONG Flags, PULONG Id);
	STDMETHOD(GetRunningProcessDescriptionWide) (THIS_ ULONG64 Server, ULONG SystemId, ULONG Flags, PWSTR ExeName, ULONG ExeNameSize, PULONG ActualExeNameSize, PWSTR Description, ULONG DescriptionSize, PULONG ActualDescriptionSize);
	STDMETHOD(CreateProcessWide) (THIS_ ULONG64 Server, PWSTR CommandLine, ULONG CreateFlags);
	STDMETHOD(CreateProcessAndAttachWide) (THIS_ ULONG64 Server, PWSTR CommandLine, ULONG CreateFlags, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(OpenDumpFileWide) (THIS_ PCWSTR FileName, ULONG64 FileHandle);
	STDMETHOD(WriteDumpFileWide) (THIS_ PCWSTR FileName, ULONG64 FileHandle, ULONG Qualifier, ULONG FormatFlags, PCWSTR Comment);
	STDMETHOD(AddDumpInformationFileWide) (THIS_ PCWSTR FileName, ULONG64 FileHandle, ULONG Type);
	STDMETHOD(GetNumberDumpFiles) (THIS_ PULONG Number);
	STDMETHOD(GetDumpFile) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG NameSize, PULONG64 Handle, PULONG Type);
	STDMETHOD(GetDumpFileWide) (THIS_ ULONG Index, PWSTR Buffer, ULONG BufferSize, PULONG NameSize, PULONG64 Handle, PULONG Type);
};
#undef INTERFACE
#define INTERFACE IDebugClient5
DECLARE_INTERFACE_(IDebugClient5, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(AttachKernel) (THIS_ ULONG Flags, PCSTR ConnectOptions);
	STDMETHOD(GetKernelConnectionOptions) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG OptionsSize);
	STDMETHOD(SetKernelConnectionOptions) (THIS_ PCSTR Options);
	STDMETHOD(StartProcessServer) (THIS_ ULONG Flags, PCSTR Options, PVOID Reserved);
	STDMETHOD(ConnectProcessServer) (THIS_ PCSTR RemoteOptions, PULONG64 Server);
	STDMETHOD(DisconnectProcessServer) (THIS_ ULONG64 Server);
	STDMETHOD(GetRunningProcessSystemIds) (THIS_ ULONG64 Server, PULONG Ids, ULONG Count, PULONG ActualCount);
	STDMETHOD(GetRunningProcessSystemIdByExecutableName) (THIS_ ULONG64 Server, PCSTR ExeName, ULONG Flags, PULONG Id);
	STDMETHOD(GetRunningProcessDescription) (THIS_ ULONG64 Server, ULONG SystemId, ULONG Flags, PSTR ExeName, ULONG ExeNameSize, PULONG ActualExeNameSize, PSTR Description, ULONG DescriptionSize, PULONG ActualDescriptionSize);
	STDMETHOD(AttachProcess) (THIS_ ULONG64 Server, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(CreateProcess) (THIS_ ULONG64 Server, PSTR CommandLine, ULONG CreateFlags);
	STDMETHOD(CreateProcessAndAttach) (THIS_ ULONG64 Server, PSTR CommandLine, ULONG CreateFlags, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(GetProcessOptions) (THIS_ PULONG Options);
	STDMETHOD(AddProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(SetProcessOptions) (THIS_ ULONG Options);
	STDMETHOD(OpenDumpFile) (THIS_ PCSTR DumpFile);
	STDMETHOD(WriteDumpFile) (THIS_ PCSTR DumpFile, ULONG Qualifier);
	STDMETHOD(ConnectSession) (THIS_ ULONG Flags, ULONG HistoryLimit);
	STDMETHOD(StartServer) (THIS_ PCSTR Options);
	STDMETHOD(OutputServers) (THIS_ ULONG OutputControl, PCSTR Machine, ULONG Flags);
	STDMETHOD(TerminateProcesses) (THIS);
	STDMETHOD(DetachProcesses) (THIS);
	STDMETHOD(EndSession) (THIS_ ULONG Flags);
	STDMETHOD(GetExitCode) (THIS_ PULONG Code);
	STDMETHOD(DispatchCallbacks) (THIS_ ULONG Timeout);
	STDMETHOD(ExitDispatch) (THIS_ PDEBUG_CLIENT Client);
	STDMETHOD(CreateClient) (THIS_ PDEBUG_CLIENT * Client);
	STDMETHOD(GetInputCallbacks) (THIS_ PDEBUG_INPUT_CALLBACKS * Callbacks);
	STDMETHOD(SetInputCallbacks) (THIS_ PDEBUG_INPUT_CALLBACKS Callbacks);
	STDMETHOD(GetOutputCallbacks) (THIS_ PDEBUG_OUTPUT_CALLBACKS * Callbacks);
	STDMETHOD(SetOutputCallbacks) (THIS_ PDEBUG_OUTPUT_CALLBACKS Callbacks);
	STDMETHOD(GetOutputMask) (THIS_ PULONG Mask);
	STDMETHOD(SetOutputMask) (THIS_ ULONG Mask);
	STDMETHOD(GetOtherOutputMask) (THIS_ PDEBUG_CLIENT Client, PULONG Mask);
	STDMETHOD(SetOtherOutputMask) (THIS_ PDEBUG_CLIENT Client, ULONG Mask);
	STDMETHOD(GetOutputWidth) (THIS_ PULONG Columns);
	STDMETHOD(SetOutputWidth) (THIS_ ULONG Columns);
	STDMETHOD(GetOutputLinePrefix) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PrefixSize);
	STDMETHOD(SetOutputLinePrefix) (THIS_ PCSTR Prefix);
	STDMETHOD(GetIdentity) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG IdentitySize);
	STDMETHOD(OutputIdentity) (THIS_ ULONG OutputControl, ULONG Flags, PCSTR Format);
	STDMETHOD(GetEventCallbacks) (THIS_ PDEBUG_EVENT_CALLBACKS * Callbacks);
	STDMETHOD(SetEventCallbacks) (THIS_ PDEBUG_EVENT_CALLBACKS Callbacks);
	STDMETHOD(FlushCallbacks) (THIS);
	STDMETHOD(WriteDumpFile2) (THIS_ PCSTR DumpFile, ULONG Qualifier, ULONG FormatFlags, PCSTR Comment);
	STDMETHOD(AddDumpInformationFile) (THIS_ PCSTR InfoFile, ULONG Type);
	STDMETHOD(EndProcessServer) (THIS_ ULONG64 Server);
	STDMETHOD(WaitForProcessServerEnd) (THIS_ ULONG Timeout);
	STDMETHOD(IsKernelDebuggerEnabled) (THIS);
	STDMETHOD(TerminateCurrentProcess) (THIS);
	STDMETHOD(DetachCurrentProcess) (THIS);
	STDMETHOD(AbandonCurrentProcess) (THIS);
	STDMETHOD(GetRunningProcessSystemIdByExecutableNameWide) (THIS_ ULONG64 Server, PCWSTR ExeName, ULONG Flags, PULONG Id);
	STDMETHOD(GetRunningProcessDescriptionWide) (THIS_ ULONG64 Server, ULONG SystemId, ULONG Flags, PWSTR ExeName, ULONG ExeNameSize, PULONG ActualExeNameSize, PWSTR Description, ULONG DescriptionSize, PULONG ActualDescriptionSize);
	STDMETHOD(CreateProcessWide) (THIS_ ULONG64 Server, PWSTR CommandLine, ULONG CreateFlags);
	STDMETHOD(CreateProcessAndAttachWide) (THIS_ ULONG64 Server, PWSTR CommandLine, ULONG CreateFlags, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(OpenDumpFileWide) (THIS_ PCWSTR FileName, ULONG64 FileHandle);
	STDMETHOD(WriteDumpFileWide) (THIS_ PCWSTR FileName, ULONG64 FileHandle, ULONG Qualifier, ULONG FormatFlags, PCWSTR Comment);
	STDMETHOD(AddDumpInformationFileWide) (THIS_ PCWSTR FileName, ULONG64 FileHandle, ULONG Type);
	STDMETHOD(GetNumberDumpFiles) (THIS_ PULONG Number);
	STDMETHOD(GetDumpFile) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG NameSize, PULONG64 Handle, PULONG Type);
	STDMETHOD(GetDumpFileWide) (THIS_ ULONG Index, PWSTR Buffer, ULONG BufferSize, PULONG NameSize, PULONG64 Handle, PULONG Type);
	STDMETHOD(AttachKernelWide) (THIS_ ULONG Flags, PCWSTR ConnectOptions);
	STDMETHOD(GetKernelConnectionOptionsWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG OptionsSize);
	STDMETHOD(SetKernelConnectionOptionsWide) (THIS_ PCWSTR Options);
	STDMETHOD(StartProcessServerWide) (THIS_ ULONG Flags, PCWSTR Options, PVOID Reserved);
	STDMETHOD(ConnectProcessServerWide) (THIS_ PCWSTR RemoteOptions, PULONG64 Server);
	STDMETHOD(StartServerWide) (THIS_ PCWSTR Options);
	STDMETHOD(OutputServersWide) (THIS_ ULONG OutputControl, PCWSTR Machine, ULONG Flags);
	STDMETHOD(GetOutputCallbacksWide) (THIS_ PDEBUG_OUTPUT_CALLBACKS_WIDE * Callbacks);
	STDMETHOD(SetOutputCallbacksWide) (THIS_ PDEBUG_OUTPUT_CALLBACKS_WIDE Callbacks);
	STDMETHOD(GetOutputLinePrefixWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG PrefixSize);
	STDMETHOD(SetOutputLinePrefixWide) (THIS_ PCWSTR Prefix);
	STDMETHOD(GetIdentityWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG IdentitySize);
	STDMETHOD(OutputIdentityWide) (THIS_ ULONG OutputControl, ULONG Flags, PCWSTR Format);
	STDMETHOD(GetEventCallbacksWide) (THIS_ PDEBUG_EVENT_CALLBACKS_WIDE * Callbacks);
	STDMETHOD(SetEventCallbacksWide) (THIS_ PDEBUG_EVENT_CALLBACKS_WIDE Callbacks);
	STDMETHOD(CreateProcess2) (THIS_ ULONG64 Server, PSTR CommandLine, PVOID OptionsBuffer, ULONG OptionsBufferSize, PCSTR InitialDirectory, PCSTR Environment);
	STDMETHOD(CreateProcess2Wide) (THIS_ ULONG64 Server, PWSTR CommandLine, PVOID OptionsBuffer, ULONG OptionsBufferSize, PCWSTR InitialDirectory, PCWSTR Environment);
	STDMETHOD(CreateProcessAndAttach2) (THIS_ ULONG64 Server, PSTR CommandLine, PVOID OptionsBuffer, ULONG OptionsBufferSize, PCSTR InitialDirectory, PCSTR Environment, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(CreateProcessAndAttach2Wide) (THIS_ ULONG64 Server, PWSTR CommandLine, PVOID OptionsBuffer, ULONG OptionsBufferSize, PCWSTR InitialDirectory, PCWSTR Environment, ULONG ProcessId, ULONG AttachFlags);
	STDMETHOD(PushOutputLinePrefix) (THIS_ PCSTR NewPrefix, PULONG64 Handle);
	STDMETHOD(PushOutputLinePrefixWide) (THIS_ PCWSTR NewPrefix, PULONG64 Handle);
	STDMETHOD(PopOutputLinePrefix) (THIS_ ULONG64 Handle);
	STDMETHOD(GetNumberInputCallbacks) (THIS_ PULONG Count);
	STDMETHOD(GetNumberOutputCallbacks) (THIS_ PULONG Count);
	STDMETHOD(GetNumberEventCallbacks) (THIS_ ULONG EventFlags, PULONG Count);
	STDMETHOD(GetQuitLockString) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG StringSize);
	STDMETHOD(SetQuitLockString) (THIS_ PCSTR String);
	STDMETHOD(GetQuitLockStringWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG StringSize);
	STDMETHOD(SetQuitLockStringWide) (THIS_ PCWSTR String);
};
#define DEBUG_STATUS_NO_CHANGE           0
#define DEBUG_STATUS_GO                  1
#define DEBUG_STATUS_GO_HANDLED          2
#define DEBUG_STATUS_GO_NOT_HANDLED      3
#define DEBUG_STATUS_STEP_OVER           4
#define DEBUG_STATUS_STEP_INTO           5
#define DEBUG_STATUS_BREAK               6
#define DEBUG_STATUS_NO_DEBUGGEE         7
#define DEBUG_STATUS_STEP_BRANCH         8
#define DEBUG_STATUS_IGNORE_EVENT        9
#define DEBUG_STATUS_RESTART_REQUESTED   10
#define DEBUG_STATUS_REVERSE_GO          11
#define DEBUG_STATUS_REVERSE_STEP_BRANCH 12
#define DEBUG_STATUS_REVERSE_STEP_OVER   13
#define DEBUG_STATUS_REVERSE_STEP_INTO   14
#define DEBUG_STATUS_MASK                0xf
#define DEBUG_STATUS_INSIDE_WAIT  0x100000000
#define DEBUG_STATUS_WAIT_TIMEOUT 0x200000000
#define DEBUG_OUTCTL_THIS_CLIENT       0x00000000
#define DEBUG_OUTCTL_ALL_CLIENTS       0x00000001
#define DEBUG_OUTCTL_ALL_OTHER_CLIENTS 0x00000002
#define DEBUG_OUTCTL_IGNORE            0x00000003
#define DEBUG_OUTCTL_LOG_ONLY          0x00000004
#define DEBUG_OUTCTL_SEND_MASK         0x00000007
#define DEBUG_OUTCTL_NOT_LOGGED        0x00000008
#define DEBUG_OUTCTL_OVERRIDE_MASK     0x00000010
#define DEBUG_OUTCTL_DML               0x00000020
#define DEBUG_OUTCTL_AMBIENT_DML       0xfffffffe
#define DEBUG_OUTCTL_AMBIENT_TEXT      0xffffffff
#define DEBUG_OUTCTL_AMBIENT           DEBUG_OUTCTL_AMBIENT_TEXT
#define DEBUG_INTERRUPT_ACTIVE  0
#define DEBUG_INTERRUPT_PASSIVE 1
#define DEBUG_INTERRUPT_EXIT    2
#define DEBUG_CURRENT_DEFAULT     0x0000000f
#define DEBUG_CURRENT_SYMBOL      0x00000001
#define DEBUG_CURRENT_DISASM      0x00000002
#define DEBUG_CURRENT_REGISTERS   0x00000004
#define DEBUG_CURRENT_SOURCE_LINE 0x00000008
#define DEBUG_DISASM_EFFECTIVE_ADDRESS  0x00000001
#define DEBUG_DISASM_MATCHING_SYMBOLS   0x00000002
#define DEBUG_DISASM_SOURCE_LINE_NUMBER 0x00000004
#define DEBUG_DISASM_SOURCE_FILE_NAME   0x00000008
#define DEBUG_LEVEL_SOURCE   0
#define DEBUG_LEVEL_ASSEMBLY 1
#define DEBUG_ENGOPT_IGNORE_DBGHELP_VERSION      0x00000001
#define DEBUG_ENGOPT_IGNORE_EXTENSION_VERSIONS   0x00000002
#define DEBUG_ENGOPT_ALLOW_NETWORK_PATHS         0x00000004
#define DEBUG_ENGOPT_DISALLOW_NETWORK_PATHS      0x00000008
#define DEBUG_ENGOPT_NETWORK_PATHS               (0x00000004 | 0x00000008)
#define DEBUG_ENGOPT_IGNORE_LOADER_EXCEPTIONS    0x00000010
#define DEBUG_ENGOPT_INITIAL_BREAK               0x00000020
#define DEBUG_ENGOPT_INITIAL_MODULE_BREAK        0x00000040
#define DEBUG_ENGOPT_FINAL_BREAK                 0x00000080
#define DEBUG_ENGOPT_NO_EXECUTE_REPEAT           0x00000100
#define DEBUG_ENGOPT_FAIL_INCOMPLETE_INFORMATION 0x00000200
#define DEBUG_ENGOPT_ALLOW_READ_ONLY_BREAKPOINTS 0x00000400
#define DEBUG_ENGOPT_SYNCHRONIZE_BREAKPOINTS     0x00000800
#define DEBUG_ENGOPT_DISALLOW_SHELL_COMMANDS     0x00001000
#define DEBUG_ENGOPT_KD_QUIET_MODE               0x00002000
#define DEBUG_ENGOPT_DISABLE_MANAGED_SUPPORT     0x00004000
#define DEBUG_ENGOPT_DISABLE_MODULE_SYMBOL_LOAD  0x00008000
#define DEBUG_ENGOPT_DISABLE_EXECUTION_COMMANDS  0x00010000
#define DEBUG_ENGOPT_DISALLOW_IMAGE_FILE_MAPPING 0x00020000
#define DEBUG_ENGOPT_PREFER_DML                  0x00040000
#define DEBUG_ENGOPT_ALL                         0x0007FFFF
#define DEBUG_ANY_ID 0xffffffff
typedef struct _DEBUG_STACK_FRAME
{
    ULONG64 InstructionOffset;
    ULONG64 ReturnOffset;
    ULONG64 FrameOffset;
    ULONG64 StackOffset;
    ULONG64 FuncTableEntry;
    ULONG64 Params[4];
    ULONG64 Reserved[6];
    BOOL    Virtual;
    ULONG   FrameNumber;
} DEBUG_STACK_FRAME, *PDEBUG_STACK_FRAME;
#define DEBUG_STACK_ARGUMENTS               0x00000001
#define DEBUG_STACK_FUNCTION_INFO           0x00000002
#define DEBUG_STACK_SOURCE_LINE             0x00000004
#define DEBUG_STACK_FRAME_ADDRESSES         0x00000008
#define DEBUG_STACK_COLUMN_NAMES            0x00000010
#define DEBUG_STACK_NONVOLATILE_REGISTERS   0x00000020
#define DEBUG_STACK_FRAME_NUMBERS           0x00000040
#define DEBUG_STACK_PARAMETERS              0x00000080
#define DEBUG_STACK_FRAME_ADDRESSES_RA_ONLY 0x00000100
#define DEBUG_STACK_FRAME_MEMORY_USAGE      0x00000200
#define DEBUG_STACK_PARAMETERS_NEWLINE      0x00000400
#define DEBUG_STACK_DML                     0x00000800
#define DEBUG_STACK_FRAME_OFFSETS           0x00001000
#define DEBUG_CLASS_UNINITIALIZED 0
#define DEBUG_CLASS_KERNEL        1
#define DEBUG_CLASS_USER_WINDOWS  2
#define DEBUG_CLASS_IMAGE_FILE    3
#define DEBUG_DUMP_SMALL      1024
#define DEBUG_DUMP_DEFAULT    1025
#define DEBUG_DUMP_FULL       1026
#define DEBUG_DUMP_IMAGE_FILE 1027
#define DEBUG_DUMP_TRACE_LOG  1028
#define DEBUG_DUMP_WINDOWS_CE 1029
#define DEBUG_KERNEL_CONNECTION  0
#define DEBUG_KERNEL_LOCAL       1
#define DEBUG_KERNEL_EXDI_DRIVER 2
#define DEBUG_KERNEL_IDNA        3
#define DEBUG_KERNEL_SMALL_DUMP  DEBUG_DUMP_SMALL
#define DEBUG_KERNEL_DUMP        DEBUG_DUMP_DEFAULT
#define DEBUG_KERNEL_FULL_DUMP   DEBUG_DUMP_FULL
#define DEBUG_KERNEL_TRACE_LOG   DEBUG_DUMP_TRACE_LOG
#define DEBUG_USER_WINDOWS_PROCESS         0
#define DEBUG_USER_WINDOWS_PROCESS_SERVER  1
#define DEBUG_USER_WINDOWS_IDNA            2
#define DEBUG_USER_WINDOWS_SMALL_DUMP      DEBUG_DUMP_SMALL
#define DEBUG_USER_WINDOWS_DUMP            DEBUG_DUMP_DEFAULT
#define DEBUG_USER_WINDOWS_DUMP_WINDOWS_CE DEBUG_DUMP_WINDOWS_CE
#define DEBUG_EXTENSION_AT_ENGINE 0x00000000
#define DEBUG_EXECUTE_DEFAULT    0x00000000
#define DEBUG_EXECUTE_ECHO       0x00000001
#define DEBUG_EXECUTE_NOT_LOGGED 0x00000002
#define DEBUG_EXECUTE_NO_REPEAT  0x00000004
#define DEBUG_FILTER_CREATE_THREAD       0x00000000
#define DEBUG_FILTER_EXIT_THREAD         0x00000001
#define DEBUG_FILTER_CREATE_PROCESS      0x00000002
#define DEBUG_FILTER_EXIT_PROCESS        0x00000003
#define DEBUG_FILTER_LOAD_MODULE         0x00000004
#define DEBUG_FILTER_UNLOAD_MODULE       0x00000005
#define DEBUG_FILTER_SYSTEM_ERROR        0x00000006
#define DEBUG_FILTER_INITIAL_BREAKPOINT  0x00000007
#define DEBUG_FILTER_INITIAL_MODULE_LOAD 0x00000008
#define DEBUG_FILTER_DEBUGGEE_OUTPUT     0x00000009
#define DEBUG_FILTER_BREAK               0x00000000
#define DEBUG_FILTER_SECOND_CHANCE_BREAK 0x00000001
#define DEBUG_FILTER_OUTPUT              0x00000002
#define DEBUG_FILTER_IGNORE              0x00000003
#define DEBUG_FILTER_REMOVE              0x00000004
#define DEBUG_FILTER_GO_HANDLED          0x00000000
#define DEBUG_FILTER_GO_NOT_HANDLED      0x00000001
typedef struct _DEBUG_SPECIFIC_FILTER_PARAMETERS
{
    ULONG ExecutionOption;
    ULONG ContinueOption;
    ULONG TextSize;
    ULONG CommandSize;
    ULONG ArgumentSize;
} DEBUG_SPECIFIC_FILTER_PARAMETERS, *PDEBUG_SPECIFIC_FILTER_PARAMETERS;
typedef struct _DEBUG_EXCEPTION_FILTER_PARAMETERS
{
    ULONG ExecutionOption;
    ULONG ContinueOption;
    ULONG TextSize;
    ULONG CommandSize;
    ULONG SecondCommandSize;
    ULONG ExceptionCode;
} DEBUG_EXCEPTION_FILTER_PARAMETERS, *PDEBUG_EXCEPTION_FILTER_PARAMETERS;
#define DEBUG_WAIT_DEFAULT 0x00000000
typedef struct _DEBUG_LAST_EVENT_INFO_BREAKPOINT
{
    ULONG Id;
} DEBUG_LAST_EVENT_INFO_BREAKPOINT, *PDEBUG_LAST_EVENT_INFO_BREAKPOINT;
typedef struct _DEBUG_LAST_EVENT_INFO_EXCEPTION
{
    EXCEPTION_RECORD64 ExceptionRecord;
    ULONG FirstChance;
} DEBUG_LAST_EVENT_INFO_EXCEPTION, *PDEBUG_LAST_EVENT_INFO_EXCEPTION;
typedef struct _DEBUG_LAST_EVENT_INFO_EXIT_THREAD
{
    ULONG ExitCode;
} DEBUG_LAST_EVENT_INFO_EXIT_THREAD, *PDEBUG_LAST_EVENT_INFO_EXIT_THREAD;
typedef struct _DEBUG_LAST_EVENT_INFO_EXIT_PROCESS
{
    ULONG ExitCode;
} DEBUG_LAST_EVENT_INFO_EXIT_PROCESS, *PDEBUG_LAST_EVENT_INFO_EXIT_PROCESS;
typedef struct _DEBUG_LAST_EVENT_INFO_LOAD_MODULE
{
    ULONG64 Base;
} DEBUG_LAST_EVENT_INFO_LOAD_MODULE, *PDEBUG_LAST_EVENT_INFO_LOAD_MODULE;
typedef struct _DEBUG_LAST_EVENT_INFO_UNLOAD_MODULE
{
    ULONG64 Base;
} DEBUG_LAST_EVENT_INFO_UNLOAD_MODULE, *PDEBUG_LAST_EVENT_INFO_UNLOAD_MODULE;
typedef struct _DEBUG_LAST_EVENT_INFO_SYSTEM_ERROR
{
    ULONG Error;
    ULONG Level;
} DEBUG_LAST_EVENT_INFO_SYSTEM_ERROR, *PDEBUG_LAST_EVENT_INFO_SYSTEM_ERROR;
#define DEBUG_VALUE_INVALID      0
#define DEBUG_VALUE_INT8         1
#define DEBUG_VALUE_INT16        2
#define DEBUG_VALUE_INT32        3
#define DEBUG_VALUE_INT64        4
#define DEBUG_VALUE_FLOAT32      5
#define DEBUG_VALUE_FLOAT64      6
#define DEBUG_VALUE_FLOAT80      7
#define DEBUG_VALUE_FLOAT82      8
#define DEBUG_VALUE_FLOAT128     9
#define DEBUG_VALUE_VECTOR64     10
#define DEBUG_VALUE_VECTOR128    11
#define DEBUG_VALUE_TYPES        12
#if defined(_MSC_VER)
#if _MSC_VER >= 800
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)
#endif
#endif
typedef struct _DEBUG_VALUE
{
    union
    {
        UCHAR I8;
        USHORT I16;
        ULONG I32;
        struct
        {
            ULONG64 I64;
            BOOL Nat;
        };
        float F32;
        double F64;
        UCHAR F80Bytes[10];
        UCHAR F82Bytes[11];
        UCHAR F128Bytes[16];
        UCHAR VI8[16];
        USHORT VI16[8];
        ULONG VI32[4];
        ULONG64 VI64[2];
        float VF32[4];
        double VF64[2];
        struct
        {
            ULONG LowPart;
            ULONG HighPart;
        } I64Parts32;
        struct
        {
            ULONG64 LowPart;
            LONG64 HighPart;
        } F128Parts64;
        UCHAR RawBytes[24];
    };
    ULONG TailOfRawBytes;
  ULONG Type;
} DEBUG_VALUE, *PDEBUG_VALUE;
#if defined(_MSC_VER)
#if _MSC_VER >= 800
#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4201)
#endif
#endif
#endif
#undef INTERFACE
#define INTERFACE IDebugControl
DECLARE_INTERFACE_(IDebugControl, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetInterrupt) (THIS);
	STDMETHOD(SetInterrupt) (THIS_ ULONG Flags);
	STDMETHOD(GetInterruptTimeout) (THIS_ PULONG Seconds);
	STDMETHOD(SetInterruptTimeout) (THIS_ ULONG Seconds);
	STDMETHOD(GetLogFile) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG FileSize, PBOOL Append);
	STDMETHOD(OpenLogFile) (THIS_ PCSTR File, BOOL Append);
	STDMETHOD(CloseLogFile) (THIS);
	STDMETHOD(GetLogMask) (THIS_ PULONG Mask);
	STDMETHOD(SetLogMask) (THIS_ ULONG Mask);
	STDMETHOD(Input) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG InputSize);
	STDMETHOD(ReturnInput) (THIS_ PCSTR Buffer);
	STDMETHODV(Output) (THIS_ ULONG Mask, PCSTR Format,...);
	STDMETHOD(OutputVaList) (THIS_ ULONG Mask, PCSTR Format, va_list Args);
	STDMETHODV(ControlledOutput) (THIS_ ULONG OutputControl, ULONG Mask, PCSTR Format,...);
	STDMETHOD(ControlledOutputVaList) (THIS_ ULONG OutputControl, ULONG Mask, PCSTR Format, va_list Args);
	STDMETHODV(OutputPrompt) (THIS_ ULONG OutputControl, PCSTR Format,...);
	STDMETHOD(OutputPromptVaList) (THIS_ ULONG OutputControl, PCSTR Format, va_list Args);
	STDMETHOD(GetPromptText) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG TextSize);
	STDMETHOD(OutputCurrentState) (THIS_ ULONG OutputControl, ULONG Flags);
	STDMETHOD(OutputVersionInformation) (THIS_ ULONG OutputControl);
	STDMETHOD(GetNotifyEventHandle) (THIS_ PULONG64 Handle);
	STDMETHOD(SetNotifyEventHandle) (THIS_ ULONG64 Handle);
	STDMETHOD(Assemble) (THIS_ ULONG64 Offset, PCSTR Instr, PULONG64 EndOffset);
	STDMETHOD(Disassemble) (THIS_ ULONG64 Offset, ULONG Flags, PSTR Buffer, ULONG BufferSize, PULONG DisassemblySize, PULONG64 EndOffset);
	STDMETHOD(GetDisassembleEffectiveOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(OutputDisassembly) (THIS_ ULONG OutputControl, ULONG64 Offset, ULONG Flags, PULONG64 EndOffset);
	STDMETHOD(OutputDisassemblyLines) (THIS_ ULONG OutputControl, ULONG PreviousLines, ULONG TotalLines, ULONG64 Offset, ULONG Flags, PULONG OffsetLine, PULONG64 StartOffset, PULONG64 EndOffset, PULONG64 LineOffsets);
	STDMETHOD(GetNearInstruction) (THIS_ ULONG64 Offset, LONG Delta, PULONG64 NearOffset);
	STDMETHOD(GetStackTrace) (THIS_ ULONG64 FrameOffset, ULONG64 StackOffset, ULONG64 InstructionOffset, PDEBUG_STACK_FRAME Frames, ULONG FramesSize, PULONG FramesFilled);
	STDMETHOD(GetReturnOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(OutputStackTrace) (THIS_ ULONG OutputControl, PDEBUG_STACK_FRAME Frames, ULONG FramesSize, ULONG Flags);
	STDMETHOD(GetDebuggeeType) (THIS_ PULONG Class, PULONG Qualifier);
	STDMETHOD(GetActualProcessorType) (THIS_ PULONG Type);
	STDMETHOD(GetExecutingProcessorType) (THIS_ PULONG Type);
	STDMETHOD(GetNumberPossibleExecutingProcessorTypes) (THIS_ PULONG Number);
	STDMETHOD(GetPossibleExecutingProcessorTypes) (THIS_ ULONG Start, ULONG Count, PULONG Types);
	STDMETHOD(GetNumberProcessors) (THIS_ PULONG Number);
	STDMETHOD(GetSystemVersion) (THIS_ PULONG PlatformId, PULONG Major, PULONG Minor, PSTR ServicePackString, ULONG ServicePackStringSize, PULONG ServicePackStringUsed, PULONG ServicePackNumber, PSTR BuildString, ULONG BuildStringSize, PULONG BuildStringUsed);
	STDMETHOD(GetPageSize) (THIS_ PULONG Size);
	STDMETHOD(IsPointer64Bit) (THIS);
	STDMETHOD(ReadBugCheckData) (THIS_ PULONG Code, PULONG64 Arg1, PULONG64 Arg2, PULONG64 Arg3, PULONG64 Arg4);
	STDMETHOD(GetNumberSupportedProcessorTypes) (THIS_ PULONG Number);
	STDMETHOD(GetSupportedProcessorTypes) (THIS_ ULONG Start, ULONG Count, PULONG Types);
	STDMETHOD(GetProcessorTypeNames) (THIS_ ULONG Type, PSTR FullNameBuffer, ULONG FullNameBufferSize, PULONG FullNameSize, PSTR AbbrevNameBuffer, ULONG AbbrevNameBufferSize, PULONG AbbrevNameSize);
	STDMETHOD(GetEffectiveProcessorType) (THIS_ PULONG Type);
	STDMETHOD(SetEffectiveProcessorType) (THIS_ ULONG Type);
	STDMETHOD(GetExecutionStatus) (THIS_ PULONG Status);
	STDMETHOD(SetExecutionStatus) (THIS_ ULONG Status);
	STDMETHOD(GetCodeLevel) (THIS_ PULONG Level);
	STDMETHOD(SetCodeLevel) (THIS_ ULONG Level);
	STDMETHOD(GetEngineOptions) (THIS_ PULONG Options);
	STDMETHOD(AddEngineOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveEngineOptions) (THIS_ ULONG Options);
	STDMETHOD(SetEngineOptions) (THIS_ ULONG Options);
	STDMETHOD(GetSystemErrorControl) (THIS_ PULONG OutputLevel, PULONG BreakLevel);
	STDMETHOD(SetSystemErrorControl) (THIS_ ULONG OutputLevel, ULONG BreakLevel);
	STDMETHOD(GetTextMacro) (THIS_ ULONG Slot, PSTR Buffer, ULONG BufferSize, PULONG MacroSize);
	STDMETHOD(SetTextMacro) (THIS_ ULONG Slot, PCSTR Macro);
	STDMETHOD(GetRadix) (THIS_ PULONG Radix);
	STDMETHOD(SetRadix) (THIS_ ULONG Radix);
	STDMETHOD(Evaluate) (THIS_ PCSTR Expression, ULONG DesiredType, PDEBUG_VALUE Value, PULONG RemainderIndex);
	STDMETHOD(CoerceValue) (THIS_ PDEBUG_VALUE In, ULONG OutType, PDEBUG_VALUE Out);
	STDMETHOD(CoerceValues) (THIS_ ULONG Count, PDEBUG_VALUE In, PULONG OutTypes, PDEBUG_VALUE Out);
	STDMETHOD(Execute) (THIS_ ULONG OutputControl, PCSTR Command, ULONG Flags);
	STDMETHOD(ExecuteCommandFile) (THIS_ ULONG OutputControl, PCSTR CommandFile, ULONG Flags);
	STDMETHOD(GetNumberBreakpoints) (THIS_ PULONG Number);
	STDMETHOD(GetBreakpointByIndex) (THIS_ ULONG Index, PDEBUG_BREAKPOINT * Bp);
	STDMETHOD(GetBreakpointById) (THIS_ ULONG Id, PDEBUG_BREAKPOINT * Bp);
	STDMETHOD(GetBreakpointParameters) (THIS_ ULONG Count, PULONG Ids, ULONG Start, PDEBUG_BREAKPOINT_PARAMETERS Params);
	STDMETHOD(AddBreakpoint) (THIS_ ULONG Type, ULONG DesiredId, PDEBUG_BREAKPOINT * Bp);
	STDMETHOD(RemoveBreakpoint) (THIS_ PDEBUG_BREAKPOINT Bp);
	STDMETHOD(AddExtension) (THIS_ PCSTR Path, ULONG Flags, PULONG64 Handle);
	STDMETHOD(RemoveExtension) (THIS_ ULONG64 Handle);
	STDMETHOD(GetExtensionByPath) (THIS_ PCSTR Path, PULONG64 Handle);
	STDMETHOD(CallExtension) (THIS_ ULONG64 Handle, PCSTR Function, PCSTR Arguments);
	STDMETHOD(GetExtensionFunction) (THIS_ ULONG64 Handle, PCSTR FuncName, FARPROC * Function);
	STDMETHOD(GetWindbgExtensionApis32) (THIS_ PWINDBG_EXTENSION_APIS32 Api);
	STDMETHOD(GetWindbgExtensionApis64) (THIS_ PWINDBG_EXTENSION_APIS64 Api);
	STDMETHOD(GetNumberEventFilters) (THIS_ PULONG SpecificEvents, PULONG SpecificExceptions, PULONG ArbitraryExceptions);
	STDMETHOD(GetEventFilterText) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG TextSize);
	STDMETHOD(GetEventFilterCommand) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG CommandSize);
	STDMETHOD(SetEventFilterCommand) (THIS_ ULONG Index, PCSTR Command);
	STDMETHOD(GetSpecificFilterParameters) (THIS_ ULONG Start, ULONG Count, PDEBUG_SPECIFIC_FILTER_PARAMETERS Params);
	STDMETHOD(SetSpecificFilterParameters) (THIS_ ULONG Start, ULONG Count, PDEBUG_SPECIFIC_FILTER_PARAMETERS Params);
	STDMETHOD(GetSpecificFilterArgument) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG ArgumentSize);
	STDMETHOD(SetSpecificFilterArgument) (THIS_ ULONG Index, PCSTR Argument);
	STDMETHOD(GetExceptionFilterParameters) (THIS_ ULONG Count, PULONG Codes, ULONG Start, PDEBUG_EXCEPTION_FILTER_PARAMETERS Params);
	STDMETHOD(SetExceptionFilterParameters) (THIS_ ULONG Count, PDEBUG_EXCEPTION_FILTER_PARAMETERS Params);
	STDMETHOD(GetExceptionFilterSecondCommand) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG CommandSize);
	STDMETHOD(SetExceptionFilterSecondCommand) (THIS_ ULONG Index, PCSTR Command);
	STDMETHOD(WaitForEvent) (THIS_ ULONG Flags, ULONG Timeout);
	STDMETHOD(GetLastEventInformation) (THIS_ PULONG Type, PULONG ProcessId, PULONG ThreadId, PVOID ExtraInformation, ULONG ExtraInformationSize, PULONG ExtraInformationUsed, PSTR Description, ULONG DescriptionSize, PULONG DescriptionUsed);
};
#define DEBUG_OUT_TEXT_REPL_DEFAULT 0x00000000
#undef INTERFACE
#define INTERFACE IDebugControl2
DECLARE_INTERFACE_(IDebugControl2, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetInterrupt) (THIS);
	STDMETHOD(SetInterrupt) (THIS_ ULONG Flags);
	STDMETHOD(GetInterruptTimeout) (THIS_ PULONG Seconds);
	STDMETHOD(SetInterruptTimeout) (THIS_ ULONG Seconds);
	STDMETHOD(GetLogFile) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG FileSize, PBOOL Append);
	STDMETHOD(OpenLogFile) (THIS_ PCSTR File, BOOL Append);
	STDMETHOD(CloseLogFile) (THIS);
	STDMETHOD(GetLogMask) (THIS_ PULONG Mask);
	STDMETHOD(SetLogMask) (THIS_ ULONG Mask);
	STDMETHOD(Input) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG InputSize);
	STDMETHOD(ReturnInput) (THIS_ PCSTR Buffer);
	STDMETHODV(Output) (THIS_ ULONG Mask, PCSTR Format,...);
	STDMETHOD(OutputVaList) (THIS_ ULONG Mask, PCSTR Format, va_list Args);
	STDMETHODV(ControlledOutput) (THIS_ ULONG OutputControl, ULONG Mask, PCSTR Format,...);
	STDMETHOD(ControlledOutputVaList) (THIS_ ULONG OutputControl, ULONG Mask, PCSTR Format, va_list Args);
	STDMETHODV(OutputPrompt) (THIS_ ULONG OutputControl, PCSTR Format,...);
	STDMETHOD(OutputPromptVaList) (THIS_ ULONG OutputControl, PCSTR Format, va_list Args);
	STDMETHOD(GetPromptText) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG TextSize);
	STDMETHOD(OutputCurrentState) (THIS_ ULONG OutputControl, ULONG Flags);
	STDMETHOD(OutputVersionInformation) (THIS_ ULONG OutputControl);
	STDMETHOD(GetNotifyEventHandle) (THIS_ PULONG64 Handle);
	STDMETHOD(SetNotifyEventHandle) (THIS_ ULONG64 Handle);
	STDMETHOD(Assemble) (THIS_ ULONG64 Offset, PCSTR Instr, PULONG64 EndOffset);
	STDMETHOD(Disassemble) (THIS_ ULONG64 Offset, ULONG Flags, PSTR Buffer, ULONG BufferSize, PULONG DisassemblySize, PULONG64 EndOffset);
	STDMETHOD(GetDisassembleEffectiveOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(OutputDisassembly) (THIS_ ULONG OutputControl, ULONG64 Offset, ULONG Flags, PULONG64 EndOffset);
	STDMETHOD(OutputDisassemblyLines) (THIS_ ULONG OutputControl, ULONG PreviousLines, ULONG TotalLines, ULONG64 Offset, ULONG Flags, PULONG OffsetLine, PULONG64 StartOffset, PULONG64 EndOffset, PULONG64 LineOffsets);
	STDMETHOD(GetNearInstruction) (THIS_ ULONG64 Offset, LONG Delta, PULONG64 NearOffset);
	STDMETHOD(GetStackTrace) (THIS_ ULONG64 FrameOffset, ULONG64 StackOffset, ULONG64 InstructionOffset, PDEBUG_STACK_FRAME Frames, ULONG FramesSize, PULONG FramesFilled);
	STDMETHOD(GetReturnOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(OutputStackTrace) (THIS_ ULONG OutputControl, PDEBUG_STACK_FRAME Frames, ULONG FramesSize, ULONG Flags);
	STDMETHOD(GetDebuggeeType) (THIS_ PULONG Class, PULONG Qualifier);
	STDMETHOD(GetActualProcessorType) (THIS_ PULONG Type);
	STDMETHOD(GetExecutingProcessorType) (THIS_ PULONG Type);
	STDMETHOD(GetNumberPossibleExecutingProcessorTypes) (THIS_ PULONG Number);
	STDMETHOD(GetPossibleExecutingProcessorTypes) (THIS_ ULONG Start, ULONG Count, PULONG Types);
	STDMETHOD(GetNumberProcessors) (THIS_ PULONG Number);
	STDMETHOD(GetSystemVersion) (THIS_ PULONG PlatformId, PULONG Major, PULONG Minor, PSTR ServicePackString, ULONG ServicePackStringSize, PULONG ServicePackStringUsed, PULONG ServicePackNumber, PSTR BuildString, ULONG BuildStringSize, PULONG BuildStringUsed);
	STDMETHOD(GetPageSize) (THIS_ PULONG Size);
	STDMETHOD(IsPointer64Bit) (THIS);
	STDMETHOD(ReadBugCheckData) (THIS_ PULONG Code, PULONG64 Arg1, PULONG64 Arg2, PULONG64 Arg3, PULONG64 Arg4);
	STDMETHOD(GetNumberSupportedProcessorTypes) (THIS_ PULONG Number);
	STDMETHOD(GetSupportedProcessorTypes) (THIS_ ULONG Start, ULONG Count, PULONG Types);
	STDMETHOD(GetProcessorTypeNames) (THIS_ ULONG Type, PSTR FullNameBuffer, ULONG FullNameBufferSize, PULONG FullNameSize, PSTR AbbrevNameBuffer, ULONG AbbrevNameBufferSize, PULONG AbbrevNameSize);
	STDMETHOD(GetEffectiveProcessorType) (THIS_ PULONG Type);
	STDMETHOD(SetEffectiveProcessorType) (THIS_ ULONG Type);
	STDMETHOD(GetExecutionStatus) (THIS_ PULONG Status);
	STDMETHOD(SetExecutionStatus) (THIS_ ULONG Status);
	STDMETHOD(GetCodeLevel) (THIS_ PULONG Level);
	STDMETHOD(SetCodeLevel) (THIS_ ULONG Level);
	STDMETHOD(GetEngineOptions) (THIS_ PULONG Options);
	STDMETHOD(AddEngineOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveEngineOptions) (THIS_ ULONG Options);
	STDMETHOD(SetEngineOptions) (THIS_ ULONG Options);
	STDMETHOD(GetSystemErrorControl) (THIS_ PULONG OutputLevel, PULONG BreakLevel);
	STDMETHOD(SetSystemErrorControl) (THIS_ ULONG OutputLevel, ULONG BreakLevel);
	STDMETHOD(GetTextMacro) (THIS_ ULONG Slot, PSTR Buffer, ULONG BufferSize, PULONG MacroSize);
	STDMETHOD(SetTextMacro) (THIS_ ULONG Slot, PCSTR Macro);
	STDMETHOD(GetRadix) (THIS_ PULONG Radix);
	STDMETHOD(SetRadix) (THIS_ ULONG Radix);
	STDMETHOD(Evaluate) (THIS_ PCSTR Expression, ULONG DesiredType, PDEBUG_VALUE Value, PULONG RemainderIndex);
	STDMETHOD(CoerceValue) (THIS_ PDEBUG_VALUE In, ULONG OutType, PDEBUG_VALUE Out);
	STDMETHOD(CoerceValues) (THIS_ ULONG Count, PDEBUG_VALUE In, PULONG OutTypes, PDEBUG_VALUE Out);
	STDMETHOD(Execute) (THIS_ ULONG OutputControl, PCSTR Command, ULONG Flags);
	STDMETHOD(ExecuteCommandFile) (THIS_ ULONG OutputControl, PCSTR CommandFile, ULONG Flags);
	STDMETHOD(GetNumberBreakpoints) (THIS_ PULONG Number);
	STDMETHOD(GetBreakpointByIndex) (THIS_ ULONG Index, PDEBUG_BREAKPOINT * Bp);
	STDMETHOD(GetBreakpointById) (THIS_ ULONG Id, PDEBUG_BREAKPOINT * Bp);
	STDMETHOD(GetBreakpointParameters) (THIS_ ULONG Count, PULONG Ids, ULONG Start, PDEBUG_BREAKPOINT_PARAMETERS Params);
	STDMETHOD(AddBreakpoint) (THIS_ ULONG Type, ULONG DesiredId, PDEBUG_BREAKPOINT * Bp);
	STDMETHOD(RemoveBreakpoint) (THIS_ PDEBUG_BREAKPOINT Bp);
	STDMETHOD(AddExtension) (THIS_ PCSTR Path, ULONG Flags, PULONG64 Handle);
	STDMETHOD(RemoveExtension) (THIS_ ULONG64 Handle);
	STDMETHOD(GetExtensionByPath) (THIS_ PCSTR Path, PULONG64 Handle);
	STDMETHOD(CallExtension) (THIS_ ULONG64 Handle, PCSTR Function, PCSTR Arguments);
	STDMETHOD(GetExtensionFunction) (THIS_ ULONG64 Handle, PCSTR FuncName, FARPROC * Function);
	STDMETHOD(GetWindbgExtensionApis32) (THIS_ PWINDBG_EXTENSION_APIS32 Api);
	STDMETHOD(GetWindbgExtensionApis64) (THIS_ PWINDBG_EXTENSION_APIS64 Api);
	STDMETHOD(GetNumberEventFilters) (THIS_ PULONG SpecificEvents, PULONG SpecificExceptions, PULONG ArbitraryExceptions);
	STDMETHOD(GetEventFilterText) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG TextSize);
	STDMETHOD(GetEventFilterCommand) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG CommandSize);
	STDMETHOD(SetEventFilterCommand) (THIS_ ULONG Index, PCSTR Command);
	STDMETHOD(GetSpecificFilterParameters) (THIS_ ULONG Start, ULONG Count, PDEBUG_SPECIFIC_FILTER_PARAMETERS Params);
	STDMETHOD(SetSpecificFilterParameters) (THIS_ ULONG Start, ULONG Count, PDEBUG_SPECIFIC_FILTER_PARAMETERS Params);
	STDMETHOD(GetSpecificFilterArgument) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG ArgumentSize);
	STDMETHOD(SetSpecificFilterArgument) (THIS_ ULONG Index, PCSTR Argument);
	STDMETHOD(GetExceptionFilterParameters) (THIS_ ULONG Count, PULONG Codes, ULONG Start, PDEBUG_EXCEPTION_FILTER_PARAMETERS Params);
	STDMETHOD(SetExceptionFilterParameters) (THIS_ ULONG Count, PDEBUG_EXCEPTION_FILTER_PARAMETERS Params);
	STDMETHOD(GetExceptionFilterSecondCommand) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG CommandSize);
	STDMETHOD(SetExceptionFilterSecondCommand) (THIS_ ULONG Index, PCSTR Command);
	STDMETHOD(WaitForEvent) (THIS_ ULONG Flags, ULONG Timeout);
	STDMETHOD(GetLastEventInformation) (THIS_ PULONG Type, PULONG ProcessId, PULONG ThreadId, PVOID ExtraInformation, ULONG ExtraInformationSize, PULONG ExtraInformationUsed, PSTR Description, ULONG DescriptionSize, PULONG DescriptionUsed);
	STDMETHOD(GetCurrentTimeDate) (THIS_ PULONG TimeDate);
	STDMETHOD(GetCurrentSystemUpTime) (THIS_ PULONG UpTime);
	STDMETHOD(GetDumpFormatFlags) (THIS_ PULONG FormatFlags);
	STDMETHOD(GetNumberTextReplacements) (THIS_ PULONG NumRepl);
	STDMETHOD(GetTextReplacement) (THIS_ PCSTR SrcText, ULONG Index, PSTR SrcBuffer, ULONG SrcBufferSize, PULONG SrcSize, PSTR DstBuffer, ULONG DstBufferSize, PULONG DstSize);
	STDMETHOD(SetTextReplacement) (THIS_ PCSTR SrcText, PCSTR DstText);
	STDMETHOD(RemoveTextReplacements) (THIS);
	STDMETHOD(OutputTextReplacements) (THIS_ ULONG OutputControl, ULONG Flags);
};
#define DEBUG_ASMOPT_DEFAULT             0x00000000
#define DEBUG_ASMOPT_VERBOSE             0x00000001
#define DEBUG_ASMOPT_NO_CODE_BYTES       0x00000002
#define DEBUG_ASMOPT_IGNORE_OUTPUT_WIDTH 0x00000004
#define DEBUG_ASMOPT_SOURCE_LINE_NUMBER  0x00000008
#define DEBUG_EXPR_MASM      0x00000000
#define DEBUG_EXPR_CPLUSPLUS 0x00000001
#define DEBUG_EINDEX_NAME 0x00000000
#define DEBUG_EINDEX_FROM_START   0x00000000
#define DEBUG_EINDEX_FROM_END     0x00000001
#define DEBUG_EINDEX_FROM_CURRENT 0x00000002
#undef INTERFACE
#define INTERFACE IDebugControl3
DECLARE_INTERFACE_(IDebugControl3, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetInterrupt) (THIS);
	STDMETHOD(SetInterrupt) (THIS_ ULONG Flags);
	STDMETHOD(GetInterruptTimeout) (THIS_ PULONG Seconds);
	STDMETHOD(SetInterruptTimeout) (THIS_ ULONG Seconds);
	STDMETHOD(GetLogFile) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG FileSize, PBOOL Append);
	STDMETHOD(OpenLogFile) (THIS_ PCSTR File, BOOL Append);
	STDMETHOD(CloseLogFile) (THIS);
	STDMETHOD(GetLogMask) (THIS_ PULONG Mask);
	STDMETHOD(SetLogMask) (THIS_ ULONG Mask);
	STDMETHOD(Input) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG InputSize);
	STDMETHOD(ReturnInput) (THIS_ PCSTR Buffer);
	STDMETHODV(Output) (THIS_ ULONG Mask, PCSTR Format,...);
	STDMETHOD(OutputVaList) (THIS_ ULONG Mask, PCSTR Format, va_list Args);
	STDMETHODV(ControlledOutput) (THIS_ ULONG OutputControl, ULONG Mask, PCSTR Format,...);
	STDMETHOD(ControlledOutputVaList) (THIS_ ULONG OutputControl, ULONG Mask, PCSTR Format, va_list Args);
	STDMETHODV(OutputPrompt) (THIS_ ULONG OutputControl, PCSTR Format,...);
	STDMETHOD(OutputPromptVaList) (THIS_ ULONG OutputControl, PCSTR Format, va_list Args);
	STDMETHOD(GetPromptText) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG TextSize);
	STDMETHOD(OutputCurrentState) (THIS_ ULONG OutputControl, ULONG Flags);
	STDMETHOD(OutputVersionInformation) (THIS_ ULONG OutputControl);
	STDMETHOD(GetNotifyEventHandle) (THIS_ PULONG64 Handle);
	STDMETHOD(SetNotifyEventHandle) (THIS_ ULONG64 Handle);
	STDMETHOD(Assemble) (THIS_ ULONG64 Offset, PCSTR Instr, PULONG64 EndOffset);
	STDMETHOD(Disassemble) (THIS_ ULONG64 Offset, ULONG Flags, PSTR Buffer, ULONG BufferSize, PULONG DisassemblySize, PULONG64 EndOffset);
	STDMETHOD(GetDisassembleEffectiveOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(OutputDisassembly) (THIS_ ULONG OutputControl, ULONG64 Offset, ULONG Flags, PULONG64 EndOffset);
	STDMETHOD(OutputDisassemblyLines) (THIS_ ULONG OutputControl, ULONG PreviousLines, ULONG TotalLines, ULONG64 Offset, ULONG Flags, PULONG OffsetLine, PULONG64 StartOffset, PULONG64 EndOffset, PULONG64 LineOffsets);
	STDMETHOD(GetNearInstruction) (THIS_ ULONG64 Offset, LONG Delta, PULONG64 NearOffset);
	STDMETHOD(GetStackTrace) (THIS_ ULONG64 FrameOffset, ULONG64 StackOffset, ULONG64 InstructionOffset, PDEBUG_STACK_FRAME Frames, ULONG FramesSize, PULONG FramesFilled);
	STDMETHOD(GetReturnOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(OutputStackTrace) (THIS_ ULONG OutputControl, PDEBUG_STACK_FRAME Frames, ULONG FramesSize, ULONG Flags);
	STDMETHOD(GetDebuggeeType) (THIS_ PULONG Class, PULONG Qualifier);
	STDMETHOD(GetActualProcessorType) (THIS_ PULONG Type);
	STDMETHOD(GetExecutingProcessorType) (THIS_ PULONG Type);
	STDMETHOD(GetNumberPossibleExecutingProcessorTypes) (THIS_ PULONG Number);
	STDMETHOD(GetPossibleExecutingProcessorTypes) (THIS_ ULONG Start, ULONG Count, PULONG Types);
	STDMETHOD(GetNumberProcessors) (THIS_ PULONG Number);
	STDMETHOD(GetSystemVersion) (THIS_ PULONG PlatformId, PULONG Major, PULONG Minor, PSTR ServicePackString, ULONG ServicePackStringSize, PULONG ServicePackStringUsed, PULONG ServicePackNumber, PSTR BuildString, ULONG BuildStringSize, PULONG BuildStringUsed);
	STDMETHOD(GetPageSize) (THIS_ PULONG Size);
	STDMETHOD(IsPointer64Bit) (THIS);
	STDMETHOD(ReadBugCheckData) (THIS_ PULONG Code, PULONG64 Arg1, PULONG64 Arg2, PULONG64 Arg3, PULONG64 Arg4);
	STDMETHOD(GetNumberSupportedProcessorTypes) (THIS_ PULONG Number);
	STDMETHOD(GetSupportedProcessorTypes) (THIS_ ULONG Start, ULONG Count, PULONG Types);
	STDMETHOD(GetProcessorTypeNames) (THIS_ ULONG Type, PSTR FullNameBuffer, ULONG FullNameBufferSize, PULONG FullNameSize, PSTR AbbrevNameBuffer, ULONG AbbrevNameBufferSize, PULONG AbbrevNameSize);
	STDMETHOD(GetEffectiveProcessorType) (THIS_ PULONG Type);
	STDMETHOD(SetEffectiveProcessorType) (THIS_ ULONG Type);
	STDMETHOD(GetExecutionStatus) (THIS_ PULONG Status);
	STDMETHOD(SetExecutionStatus) (THIS_ ULONG Status);
	STDMETHOD(GetCodeLevel) (THIS_ PULONG Level);
	STDMETHOD(SetCodeLevel) (THIS_ ULONG Level);
	STDMETHOD(GetEngineOptions) (THIS_ PULONG Options);
	STDMETHOD(AddEngineOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveEngineOptions) (THIS_ ULONG Options);
	STDMETHOD(SetEngineOptions) (THIS_ ULONG Options);
	STDMETHOD(GetSystemErrorControl) (THIS_ PULONG OutputLevel, PULONG BreakLevel);
	STDMETHOD(SetSystemErrorControl) (THIS_ ULONG OutputLevel, ULONG BreakLevel);
	STDMETHOD(GetTextMacro) (THIS_ ULONG Slot, PSTR Buffer, ULONG BufferSize, PULONG MacroSize);
	STDMETHOD(SetTextMacro) (THIS_ ULONG Slot, PCSTR Macro);
	STDMETHOD(GetRadix) (THIS_ PULONG Radix);
	STDMETHOD(SetRadix) (THIS_ ULONG Radix);
	STDMETHOD(Evaluate) (THIS_ PCSTR Expression, ULONG DesiredType, PDEBUG_VALUE Value, PULONG RemainderIndex);
	STDMETHOD(CoerceValue) (THIS_ PDEBUG_VALUE In, ULONG OutType, PDEBUG_VALUE Out);
	STDMETHOD(CoerceValues) (THIS_ ULONG Count, PDEBUG_VALUE In, PULONG OutTypes, PDEBUG_VALUE Out);
	STDMETHOD(Execute) (THIS_ ULONG OutputControl, PCSTR Command, ULONG Flags);
	STDMETHOD(ExecuteCommandFile) (THIS_ ULONG OutputControl, PCSTR CommandFile, ULONG Flags);
	STDMETHOD(GetNumberBreakpoints) (THIS_ PULONG Number);
	STDMETHOD(GetBreakpointByIndex) (THIS_ ULONG Index, PDEBUG_BREAKPOINT * Bp);
	STDMETHOD(GetBreakpointById) (THIS_ ULONG Id, PDEBUG_BREAKPOINT * Bp);
	STDMETHOD(GetBreakpointParameters) (THIS_ ULONG Count, PULONG Ids, ULONG Start, PDEBUG_BREAKPOINT_PARAMETERS Params);
	STDMETHOD(AddBreakpoint) (THIS_ ULONG Type, ULONG DesiredId, PDEBUG_BREAKPOINT * Bp);
	STDMETHOD(RemoveBreakpoint) (THIS_ PDEBUG_BREAKPOINT Bp);
	STDMETHOD(AddExtension) (THIS_ PCSTR Path, ULONG Flags, PULONG64 Handle);
	STDMETHOD(RemoveExtension) (THIS_ ULONG64 Handle);
	STDMETHOD(GetExtensionByPath) (THIS_ PCSTR Path, PULONG64 Handle);
	STDMETHOD(CallExtension) (THIS_ ULONG64 Handle, PCSTR Function, PCSTR Arguments);
	STDMETHOD(GetExtensionFunction) (THIS_ ULONG64 Handle, PCSTR FuncName, FARPROC * Function);
	STDMETHOD(GetWindbgExtensionApis32) (THIS_ PWINDBG_EXTENSION_APIS32 Api);
	STDMETHOD(GetWindbgExtensionApis64) (THIS_ PWINDBG_EXTENSION_APIS64 Api);
	STDMETHOD(GetNumberEventFilters) (THIS_ PULONG SpecificEvents, PULONG SpecificExceptions, PULONG ArbitraryExceptions);
	STDMETHOD(GetEventFilterText) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG TextSize);
	STDMETHOD(GetEventFilterCommand) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG CommandSize);
	STDMETHOD(SetEventFilterCommand) (THIS_ ULONG Index, PCSTR Command);
	STDMETHOD(GetSpecificFilterParameters) (THIS_ ULONG Start, ULONG Count, PDEBUG_SPECIFIC_FILTER_PARAMETERS Params);
	STDMETHOD(SetSpecificFilterParameters) (THIS_ ULONG Start, ULONG Count, PDEBUG_SPECIFIC_FILTER_PARAMETERS Params);
	STDMETHOD(GetSpecificFilterArgument) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG ArgumentSize);
	STDMETHOD(SetSpecificFilterArgument) (THIS_ ULONG Index, PCSTR Argument);
	STDMETHOD(GetExceptionFilterParameters) (THIS_ ULONG Count, PULONG Codes, ULONG Start, PDEBUG_EXCEPTION_FILTER_PARAMETERS Params);
	STDMETHOD(SetExceptionFilterParameters) (THIS_ ULONG Count, PDEBUG_EXCEPTION_FILTER_PARAMETERS Params);
	STDMETHOD(GetExceptionFilterSecondCommand) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG CommandSize);
	STDMETHOD(SetExceptionFilterSecondCommand) (THIS_ ULONG Index, PCSTR Command);
	STDMETHOD(WaitForEvent) (THIS_ ULONG Flags, ULONG Timeout);
	STDMETHOD(GetLastEventInformation) (THIS_ PULONG Type, PULONG ProcessId, PULONG ThreadId, PVOID ExtraInformation, ULONG ExtraInformationSize, PULONG ExtraInformationUsed, PSTR Description, ULONG DescriptionSize, PULONG DescriptionUsed);
	STDMETHOD(GetCurrentTimeDate) (THIS_ PULONG TimeDate);
	STDMETHOD(GetCurrentSystemUpTime) (THIS_ PULONG UpTime);
	STDMETHOD(GetDumpFormatFlags) (THIS_ PULONG FormatFlags);
	STDMETHOD(GetNumberTextReplacements) (THIS_ PULONG NumRepl);
	STDMETHOD(GetTextReplacement) (THIS_ PCSTR SrcText, ULONG Index, PSTR SrcBuffer, ULONG SrcBufferSize, PULONG SrcSize, PSTR DstBuffer, ULONG DstBufferSize, PULONG DstSize);
	STDMETHOD(SetTextReplacement) (THIS_ PCSTR SrcText, PCSTR DstText);
	STDMETHOD(RemoveTextReplacements) (THIS);
	STDMETHOD(OutputTextReplacements) (THIS_ ULONG OutputControl, ULONG Flags);
	STDMETHOD(GetAssemblyOptions) (THIS_ PULONG Options);
	STDMETHOD(AddAssemblyOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveAssemblyOptions) (THIS_ ULONG Options);
	STDMETHOD(SetAssemblyOptions) (THIS_ ULONG Options);
	STDMETHOD(GetExpressionSyntax) (THIS_ PULONG Flags);
	STDMETHOD(SetExpressionSyntax) (THIS_ ULONG Flags);
	STDMETHOD(SetExpressionSyntaxByName) (THIS_ PCSTR AbbrevName);
	STDMETHOD(GetNumberExpressionSyntaxes) (THIS_ PULONG Number);
	STDMETHOD(GetExpressionSyntaxNames) (THIS_ ULONG Index, PSTR FullNameBuffer, ULONG FullNameBufferSize, PULONG FullNameSize, PSTR AbbrevNameBuffer, ULONG AbbrevNameBufferSize, PULONG AbbrevNameSize);
	STDMETHOD(GetNumberEvents) (THIS_ PULONG Events);
	STDMETHOD(GetEventIndexDescription) (THIS_ ULONG Index, ULONG Which, PSTR Buffer, ULONG BufferSize, PULONG DescSize);
	STDMETHOD(GetCurrentEventIndex) (THIS_ PULONG Index);
	STDMETHOD(SetNextEventIndex) (THIS_ ULONG Relation, ULONG Value, PULONG NextIndex);
};
#define DEBUG_LOG_DEFAULT 0x00000000
#define DEBUG_LOG_APPEND  0x00000001
#define DEBUG_LOG_UNICODE 0x00000002
#define DEBUG_LOG_DML     0x00000004
#define DEBUG_SYSVERSTR_SERVICE_PACK 0x00000000
#define DEBUG_SYSVERSTR_BUILD        0x00000001
#define DEBUG_MANAGED_DISABLED   0x00000000
#define DEBUG_MANAGED_ALLOWED    0x00000001
#define DEBUG_MANAGED_DLL_LOADED 0x00000002
#define DEBUG_MANSTR_NONE               0x00000000
#define DEBUG_MANSTR_LOADED_SUPPORT_DLL 0x00000001
#define DEBUG_MANSTR_LOAD_STATUS        0x00000002
#define DEBUG_MANRESET_DEFAULT  0x00000000
#define DEBUG_MANRESET_LOAD_DLL 0x00000001
#undef INTERFACE
#define INTERFACE IDebugControl4
DECLARE_INTERFACE_(IDebugControl4, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetInterrupt) (THIS);
	STDMETHOD(SetInterrupt) (THIS_ ULONG Flags);
	STDMETHOD(GetInterruptTimeout) (THIS_ PULONG Seconds);
	STDMETHOD(SetInterruptTimeout) (THIS_ ULONG Seconds);
	STDMETHOD(GetLogFile) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG FileSize, PBOOL Append);
	STDMETHOD(OpenLogFile) (THIS_ PCSTR File, BOOL Append);
	STDMETHOD(CloseLogFile) (THIS);
	STDMETHOD(GetLogMask) (THIS_ PULONG Mask);
	STDMETHOD(SetLogMask) (THIS_ ULONG Mask);
	STDMETHOD(Input) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG InputSize);
	STDMETHOD(ReturnInput) (THIS_ PCSTR Buffer);
	STDMETHODV(Output) (THIS_ ULONG Mask, PCSTR Format,...);
	STDMETHOD(OutputVaList) (THIS_ ULONG Mask, PCSTR Format, va_list Args);
	STDMETHODV(ControlledOutput) (THIS_ ULONG OutputControl, ULONG Mask, PCSTR Format,...);
	STDMETHOD(ControlledOutputVaList) (THIS_ ULONG OutputControl, ULONG Mask, PCSTR Format, va_list Args);
	STDMETHODV(OutputPrompt) (THIS_ ULONG OutputControl, PCSTR Format,...);
	STDMETHOD(OutputPromptVaList) (THIS_ ULONG OutputControl, PCSTR Format, va_list Args);
	STDMETHOD(GetPromptText) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG TextSize);
	STDMETHOD(OutputCurrentState) (THIS_ ULONG OutputControl, ULONG Flags);
	STDMETHOD(OutputVersionInformation) (THIS_ ULONG OutputControl);
	STDMETHOD(GetNotifyEventHandle) (THIS_ PULONG64 Handle);
	STDMETHOD(SetNotifyEventHandle) (THIS_ ULONG64 Handle);
	STDMETHOD(Assemble) (THIS_ ULONG64 Offset, PCSTR Instr, PULONG64 EndOffset);
	STDMETHOD(Disassemble) (THIS_ ULONG64 Offset, ULONG Flags, PSTR Buffer, ULONG BufferSize, PULONG DisassemblySize, PULONG64 EndOffset);
	STDMETHOD(GetDisassembleEffectiveOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(OutputDisassembly) (THIS_ ULONG OutputControl, ULONG64 Offset, ULONG Flags, PULONG64 EndOffset);
	STDMETHOD(OutputDisassemblyLines) (THIS_ ULONG OutputControl, ULONG PreviousLines, ULONG TotalLines, ULONG64 Offset, ULONG Flags, PULONG OffsetLine, PULONG64 StartOffset, PULONG64 EndOffset, PULONG64 LineOffsets);
	STDMETHOD(GetNearInstruction) (THIS_ ULONG64 Offset, LONG Delta, PULONG64 NearOffset);
	STDMETHOD(GetStackTrace) (THIS_ ULONG64 FrameOffset, ULONG64 StackOffset, ULONG64 InstructionOffset, PDEBUG_STACK_FRAME Frames, ULONG FramesSize, PULONG FramesFilled);
	STDMETHOD(GetReturnOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(OutputStackTrace) (THIS_ ULONG OutputControl, PDEBUG_STACK_FRAME Frames, ULONG FramesSize, ULONG Flags);
	STDMETHOD(GetDebuggeeType) (THIS_ PULONG Class, PULONG Qualifier);
	STDMETHOD(GetActualProcessorType) (THIS_ PULONG Type);
	STDMETHOD(GetExecutingProcessorType) (THIS_ PULONG Type);
	STDMETHOD(GetNumberPossibleExecutingProcessorTypes) (THIS_ PULONG Number);
	STDMETHOD(GetPossibleExecutingProcessorTypes) (THIS_ ULONG Start, ULONG Count, PULONG Types);
	STDMETHOD(GetNumberProcessors) (THIS_ PULONG Number);
	STDMETHOD(GetSystemVersion) (THIS_ PULONG PlatformId, PULONG Major, PULONG Minor, PSTR ServicePackString, ULONG ServicePackStringSize, PULONG ServicePackStringUsed, PULONG ServicePackNumber, PSTR BuildString, ULONG BuildStringSize, PULONG BuildStringUsed);
	STDMETHOD(GetPageSize) (THIS_ PULONG Size);
	STDMETHOD(IsPointer64Bit) (THIS);
	STDMETHOD(ReadBugCheckData) (THIS_ PULONG Code, PULONG64 Arg1, PULONG64 Arg2, PULONG64 Arg3, PULONG64 Arg4);
	STDMETHOD(GetNumberSupportedProcessorTypes) (THIS_ PULONG Number);
	STDMETHOD(GetSupportedProcessorTypes) (THIS_ ULONG Start, ULONG Count, PULONG Types);
	STDMETHOD(GetProcessorTypeNames) (THIS_ ULONG Type, PSTR FullNameBuffer, ULONG FullNameBufferSize, PULONG FullNameSize, PSTR AbbrevNameBuffer, ULONG AbbrevNameBufferSize, PULONG AbbrevNameSize);
	STDMETHOD(GetEffectiveProcessorType) (THIS_ PULONG Type);
	STDMETHOD(SetEffectiveProcessorType) (THIS_ ULONG Type);
	STDMETHOD(GetExecutionStatus) (THIS_ PULONG Status);
	STDMETHOD(SetExecutionStatus) (THIS_ ULONG Status);
	STDMETHOD(GetCodeLevel) (THIS_ PULONG Level);
	STDMETHOD(SetCodeLevel) (THIS_ ULONG Level);
	STDMETHOD(GetEngineOptions) (THIS_ PULONG Options);
	STDMETHOD(AddEngineOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveEngineOptions) (THIS_ ULONG Options);
	STDMETHOD(SetEngineOptions) (THIS_ ULONG Options);
	STDMETHOD(GetSystemErrorControl) (THIS_ PULONG OutputLevel, PULONG BreakLevel);
	STDMETHOD(SetSystemErrorControl) (THIS_ ULONG OutputLevel, ULONG BreakLevel);
	STDMETHOD(GetTextMacro) (THIS_ ULONG Slot, PSTR Buffer, ULONG BufferSize, PULONG MacroSize);
	STDMETHOD(SetTextMacro) (THIS_ ULONG Slot, PCSTR Macro);
	STDMETHOD(GetRadix) (THIS_ PULONG Radix);
	STDMETHOD(SetRadix) (THIS_ ULONG Radix);
	STDMETHOD(Evaluate) (THIS_ PCSTR Expression, ULONG DesiredType, PDEBUG_VALUE Value, PULONG RemainderIndex);
	STDMETHOD(CoerceValue) (THIS_ PDEBUG_VALUE In, ULONG OutType, PDEBUG_VALUE Out);
	STDMETHOD(CoerceValues) (THIS_ ULONG Count, PDEBUG_VALUE In, PULONG OutTypes, PDEBUG_VALUE Out);
	STDMETHOD(Execute) (THIS_ ULONG OutputControl, PCSTR Command, ULONG Flags);
	STDMETHOD(ExecuteCommandFile) (THIS_ ULONG OutputControl, PCSTR CommandFile, ULONG Flags);
	STDMETHOD(GetNumberBreakpoints) (THIS_ PULONG Number);
	STDMETHOD(GetBreakpointByIndex) (THIS_ ULONG Index, PDEBUG_BREAKPOINT * Bp);
	STDMETHOD(GetBreakpointById) (THIS_ ULONG Id, PDEBUG_BREAKPOINT * Bp);
	STDMETHOD(GetBreakpointParameters) (THIS_ ULONG Count, PULONG Ids, ULONG Start, PDEBUG_BREAKPOINT_PARAMETERS Params);
	STDMETHOD(AddBreakpoint) (THIS_ ULONG Type, ULONG DesiredId, PDEBUG_BREAKPOINT * Bp);
	STDMETHOD(RemoveBreakpoint) (THIS_ PDEBUG_BREAKPOINT Bp);
	STDMETHOD(AddExtension) (THIS_ PCSTR Path, ULONG Flags, PULONG64 Handle);
	STDMETHOD(RemoveExtension) (THIS_ ULONG64 Handle);
	STDMETHOD(GetExtensionByPath) (THIS_ PCSTR Path, PULONG64 Handle);
	STDMETHOD(CallExtension) (THIS_ ULONG64 Handle, PCSTR Function, PCSTR Arguments);
	STDMETHOD(GetExtensionFunction) (THIS_ ULONG64 Handle, PCSTR FuncName, FARPROC * Function);
	STDMETHOD(GetWindbgExtensionApis32) (THIS_ PWINDBG_EXTENSION_APIS32 Api);
	STDMETHOD(GetWindbgExtensionApis64) (THIS_ PWINDBG_EXTENSION_APIS64 Api);
	STDMETHOD(GetNumberEventFilters) (THIS_ PULONG SpecificEvents, PULONG SpecificExceptions, PULONG ArbitraryExceptions);
	STDMETHOD(GetEventFilterText) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG TextSize);
	STDMETHOD(GetEventFilterCommand) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG CommandSize);
	STDMETHOD(SetEventFilterCommand) (THIS_ ULONG Index, PCSTR Command);
	STDMETHOD(GetSpecificFilterParameters) (THIS_ ULONG Start, ULONG Count, PDEBUG_SPECIFIC_FILTER_PARAMETERS Params);
	STDMETHOD(SetSpecificFilterParameters) (THIS_ ULONG Start, ULONG Count, PDEBUG_SPECIFIC_FILTER_PARAMETERS Params);
	STDMETHOD(GetSpecificFilterArgument) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG ArgumentSize);
	STDMETHOD(SetSpecificFilterArgument) (THIS_ ULONG Index, PCSTR Argument);
	STDMETHOD(GetExceptionFilterParameters) (THIS_ ULONG Count, PULONG Codes, ULONG Start, PDEBUG_EXCEPTION_FILTER_PARAMETERS Params);
	STDMETHOD(SetExceptionFilterParameters) (THIS_ ULONG Count, PDEBUG_EXCEPTION_FILTER_PARAMETERS Params);
	STDMETHOD(GetExceptionFilterSecondCommand) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG CommandSize);
	STDMETHOD(SetExceptionFilterSecondCommand) (THIS_ ULONG Index, PCSTR Command);
	STDMETHOD(WaitForEvent) (THIS_ ULONG Flags, ULONG Timeout);
	STDMETHOD(GetLastEventInformation) (THIS_ PULONG Type, PULONG ProcessId, PULONG ThreadId, PVOID ExtraInformation, ULONG ExtraInformationSize, PULONG ExtraInformationUsed, PSTR Description, ULONG DescriptionSize, PULONG DescriptionUsed);
	STDMETHOD(GetCurrentTimeDate) (THIS_ PULONG TimeDate);
	STDMETHOD(GetCurrentSystemUpTime) (THIS_ PULONG UpTime);
	STDMETHOD(GetDumpFormatFlags) (THIS_ PULONG FormatFlags);
	STDMETHOD(GetNumberTextReplacements) (THIS_ PULONG NumRepl);
	STDMETHOD(GetTextReplacement) (THIS_ PCSTR SrcText, ULONG Index, PSTR SrcBuffer, ULONG SrcBufferSize, PULONG SrcSize, PSTR DstBuffer, ULONG DstBufferSize, PULONG DstSize);
	STDMETHOD(SetTextReplacement) (THIS_ PCSTR SrcText, PCSTR DstText);
	STDMETHOD(RemoveTextReplacements) (THIS);
	STDMETHOD(OutputTextReplacements) (THIS_ ULONG OutputControl, ULONG Flags);
	STDMETHOD(GetAssemblyOptions) (THIS_ PULONG Options);
	STDMETHOD(AddAssemblyOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveAssemblyOptions) (THIS_ ULONG Options);
	STDMETHOD(SetAssemblyOptions) (THIS_ ULONG Options);
	STDMETHOD(GetExpressionSyntax) (THIS_ PULONG Flags);
	STDMETHOD(SetExpressionSyntax) (THIS_ ULONG Flags);
	STDMETHOD(SetExpressionSyntaxByName) (THIS_ PCSTR AbbrevName);
	STDMETHOD(GetNumberExpressionSyntaxes) (THIS_ PULONG Number);
	STDMETHOD(GetExpressionSyntaxNames) (THIS_ ULONG Index, PSTR FullNameBuffer, ULONG FullNameBufferSize, PULONG FullNameSize, PSTR AbbrevNameBuffer, ULONG AbbrevNameBufferSize, PULONG AbbrevNameSize);
	STDMETHOD(GetNumberEvents) (THIS_ PULONG Events);
	STDMETHOD(GetEventIndexDescription) (THIS_ ULONG Index, ULONG Which, PSTR Buffer, ULONG BufferSize, PULONG DescSize);
	STDMETHOD(GetCurrentEventIndex) (THIS_ PULONG Index);
	STDMETHOD(SetNextEventIndex) (THIS_ ULONG Relation, ULONG Value, PULONG NextIndex);
	STDMETHOD(GetLogFileWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG FileSize, PBOOL Append);
	STDMETHOD(OpenLogFileWide) (THIS_ PCWSTR File, BOOL Append);
	STDMETHOD(InputWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG InputSize);
	STDMETHOD(ReturnInputWide) (THIS_ PCWSTR Buffer);
	STDMETHODV(OutputWide) (THIS_ ULONG Mask, PCWSTR Format,...);
	STDMETHOD(OutputVaListWide) (THIS_ ULONG Mask, PCWSTR Format, va_list Args);
	STDMETHODV(ControlledOutputWide) (THIS_ ULONG OutputControl, ULONG Mask, PCWSTR Format,...);
	STDMETHOD(ControlledOutputVaListWide) (THIS_ ULONG OutputControl, ULONG Mask, PCWSTR Format, va_list Args);
	STDMETHODV(OutputPromptWide) (THIS_ ULONG OutputControl, PCWSTR Format,...);
	STDMETHOD(OutputPromptVaListWide) (THIS_ ULONG OutputControl, PCWSTR Format, va_list Args);
	STDMETHOD(GetPromptTextWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG TextSize);
	STDMETHOD(AssembleWide) (THIS_ ULONG64 Offset, PCWSTR Instr, PULONG64 EndOffset);
	STDMETHOD(DisassembleWide) (THIS_ ULONG64 Offset, ULONG Flags, PWSTR Buffer, ULONG BufferSize, PULONG DisassemblySize, PULONG64 EndOffset);
	STDMETHOD(GetProcessorTypeNamesWide) (THIS_ ULONG Type, PWSTR FullNameBuffer, ULONG FullNameBufferSize, PULONG FullNameSize, PWSTR AbbrevNameBuffer, ULONG AbbrevNameBufferSize, PULONG AbbrevNameSize);
	STDMETHOD(GetTextMacroWide) (THIS_ ULONG Slot, PWSTR Buffer, ULONG BufferSize, PULONG MacroSize);
	STDMETHOD(SetTextMacroWide) (THIS_ ULONG Slot, PCWSTR Macro);
	STDMETHOD(EvaluateWide) (THIS_ PCWSTR Expression, ULONG DesiredType, PDEBUG_VALUE Value, PULONG RemainderIndex);
	STDMETHOD(ExecuteWide) (THIS_ ULONG OutputControl, PCWSTR Command, ULONG Flags);
	STDMETHOD(ExecuteCommandFileWide) (THIS_ ULONG OutputControl, PCWSTR CommandFile, ULONG Flags);
	STDMETHOD(GetBreakpointByIndex2) (THIS_ ULONG Index, PDEBUG_BREAKPOINT2 * Bp);
	STDMETHOD(GetBreakpointById2) (THIS_ ULONG Id, PDEBUG_BREAKPOINT2 * Bp);
	STDMETHOD(AddBreakpoint2) (THIS_ ULONG Type, ULONG DesiredId, PDEBUG_BREAKPOINT2 * Bp);
	STDMETHOD(RemoveBreakpoint2) (THIS_ PDEBUG_BREAKPOINT2 Bp);
	STDMETHOD(AddExtensionWide) (THIS_ PCWSTR Path, ULONG Flags, PULONG64 Handle);
	STDMETHOD(GetExtensionByPathWide) (THIS_ PCWSTR Path, PULONG64 Handle);
	STDMETHOD(CallExtensionWide) (THIS_ ULONG64 Handle, PCWSTR Function, PCWSTR Arguments);
	STDMETHOD(GetExtensionFunctionWide) (THIS_ ULONG64 Handle, PCWSTR FuncName, FARPROC * Function);
	STDMETHOD(GetEventFilterTextWide) (THIS_ ULONG Index, PWSTR Buffer, ULONG BufferSize, PULONG TextSize);
	STDMETHOD(GetEventFilterCommandWide) (THIS_ ULONG Index, PWSTR Buffer, ULONG BufferSize, PULONG CommandSize);
	STDMETHOD(SetEventFilterCommandWide) (THIS_ ULONG Index, PCWSTR Command);
	STDMETHOD(GetSpecificFilterArgumentWide) (THIS_ ULONG Index, PWSTR Buffer, ULONG BufferSize, PULONG ArgumentSize);
	STDMETHOD(SetSpecificFilterArgumentWide) (THIS_ ULONG Index, PCWSTR Argument);
	STDMETHOD(GetExceptionFilterSecondCommandWide) (THIS_ ULONG Index, PWSTR Buffer, ULONG BufferSize, PULONG CommandSize);
	STDMETHOD(SetExceptionFilterSecondCommandWide) (THIS_ ULONG Index, PCWSTR Command);
	STDMETHOD(GetLastEventInformationWide) (THIS_ PULONG Type, PULONG ProcessId, PULONG ThreadId, PVOID ExtraInformation, ULONG ExtraInformationSize, PULONG ExtraInformationUsed, PWSTR Description, ULONG DescriptionSize, PULONG DescriptionUsed);
	STDMETHOD(GetTextReplacementWide) (THIS_ PCWSTR SrcText, ULONG Index, PWSTR SrcBuffer, ULONG SrcBufferSize, PULONG SrcSize, PWSTR DstBuffer, ULONG DstBufferSize, PULONG DstSize);
	STDMETHOD(SetTextReplacementWide) (THIS_ PCWSTR SrcText, PCWSTR DstText);
	STDMETHOD(SetExpressionSyntaxByNameWide) (THIS_ PCWSTR AbbrevName);
	STDMETHOD(GetExpressionSyntaxNamesWide) (THIS_ ULONG Index, PWSTR FullNameBuffer, ULONG FullNameBufferSize, PULONG FullNameSize, PWSTR AbbrevNameBuffer, ULONG AbbrevNameBufferSize, PULONG AbbrevNameSize);
	STDMETHOD(GetEventIndexDescriptionWide) (THIS_ ULONG Index, ULONG Which, PWSTR Buffer, ULONG BufferSize, PULONG DescSize);
	STDMETHOD(GetLogFile2) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG FileSize, PULONG Flags);
	STDMETHOD(OpenLogFile2) (THIS_ PCSTR File, ULONG Flags);
	STDMETHOD(GetLogFile2Wide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG FileSize, PULONG Flags);
	STDMETHOD(OpenLogFile2Wide) (THIS_ PCWSTR File, ULONG Flags);
	STDMETHOD(GetSystemVersionValues) (THIS_ PULONG PlatformId, PULONG Win32Major, PULONG Win32Minor, PULONG KdMajor, PULONG KdMinor);
	STDMETHOD(GetSystemVersionString) (THIS_ ULONG Which, PSTR Buffer, ULONG BufferSize, PULONG StringSize);
	STDMETHOD(GetSystemVersionStringWide) (THIS_ ULONG Which, PWSTR Buffer, ULONG BufferSize, PULONG StringSize);
	STDMETHOD(GetContextStackTrace) (THIS_ PVOID StartContext, ULONG StartContextSize, PDEBUG_STACK_FRAME Frames, ULONG FramesSize, PVOID FrameContexts, ULONG FrameContextsSize, ULONG FrameContextsEntrySize, PULONG FramesFilled);
	STDMETHOD(OutputContextStackTrace) (THIS_ ULONG OutputControl, PDEBUG_STACK_FRAME Frames, ULONG FramesSize, PVOID FrameContexts, ULONG FrameContextsSize, ULONG FrameContextsEntrySize, ULONG Flags);
	STDMETHOD(GetStoredEventInformation) (THIS_ PULONG Type, PULONG ProcessId, PULONG ThreadId, PVOID Context, ULONG ContextSize, PULONG ContextUsed, PVOID ExtraInformation, ULONG ExtraInformationSize, PULONG ExtraInformationUsed);
	STDMETHOD(GetManagedStatus) (THIS_ PULONG Flags, ULONG WhichString, PSTR String, ULONG StringSize, PULONG StringNeeded);
	STDMETHOD(GetManagedStatusWide) (THIS_ PULONG Flags, ULONG WhichString, PWSTR String, ULONG StringSize, PULONG StringNeeded);
	STDMETHOD(ResetManagedStatus) (THIS_ ULONG Flags);
};
#define DEBUG_DATA_SPACE_VIRTUAL       0
#define DEBUG_DATA_SPACE_PHYSICAL      1
#define DEBUG_DATA_SPACE_CONTROL       2
#define DEBUG_DATA_SPACE_IO            3
#define DEBUG_DATA_SPACE_MSR           4
#define DEBUG_DATA_SPACE_BUS_DATA      5
#define DEBUG_DATA_SPACE_DEBUGGER_DATA 6
#define DEBUG_DATA_SPACE_COUNT         7
#define DEBUG_DATA_KernBase                              24
#define DEBUG_DATA_BreakpointWithStatusAddr              32
#define DEBUG_DATA_SavedContextAddr                      40
#define DEBUG_DATA_KiCallUserModeAddr                    56
#define DEBUG_DATA_KeUserCallbackDispatcherAddr          64
#define DEBUG_DATA_PsLoadedModuleListAddr                72
#define DEBUG_DATA_PsActiveProcessHeadAddr               80
#define DEBUG_DATA_PspCidTableAddr                       88
#define DEBUG_DATA_ExpSystemResourcesListAddr            96
#define DEBUG_DATA_ExpPagedPoolDescriptorAddr           104
#define DEBUG_DATA_ExpNumberOfPagedPoolsAddr            112
#define DEBUG_DATA_KeTimeIncrementAddr                  120
#define DEBUG_DATA_KeBugCheckCallbackListHeadAddr       128
#define DEBUG_DATA_KiBugcheckDataAddr                   136
#define DEBUG_DATA_IopErrorLogListHeadAddr              144
#define DEBUG_DATA_ObpRootDirectoryObjectAddr           152
#define DEBUG_DATA_ObpTypeObjectTypeAddr                160
#define DEBUG_DATA_MmSystemCacheStartAddr               168
#define DEBUG_DATA_MmSystemCacheEndAddr                 176
#define DEBUG_DATA_MmSystemCacheWsAddr                  184
#define DEBUG_DATA_MmPfnDatabaseAddr                    192
#define DEBUG_DATA_MmSystemPtesStartAddr                200
#define DEBUG_DATA_MmSystemPtesEndAddr                  208
#define DEBUG_DATA_MmSubsectionBaseAddr                 216
#define DEBUG_DATA_MmNumberOfPagingFilesAddr            224
#define DEBUG_DATA_MmLowestPhysicalPageAddr             232
#define DEBUG_DATA_MmHighestPhysicalPageAddr            240
#define DEBUG_DATA_MmNumberOfPhysicalPagesAddr          248
#define DEBUG_DATA_MmMaximumNonPagedPoolInBytesAddr     256
#define DEBUG_DATA_MmNonPagedSystemStartAddr            264
#define DEBUG_DATA_MmNonPagedPoolStartAddr              272
#define DEBUG_DATA_MmNonPagedPoolEndAddr                280
#define DEBUG_DATA_MmPagedPoolStartAddr                 288
#define DEBUG_DATA_MmPagedPoolEndAddr                   296
#define DEBUG_DATA_MmPagedPoolInformationAddr           304
#define DEBUG_DATA_MmPageSize                           312
#define DEBUG_DATA_MmSizeOfPagedPoolInBytesAddr         320
#define DEBUG_DATA_MmTotalCommitLimitAddr               328
#define DEBUG_DATA_MmTotalCommittedPagesAddr            336
#define DEBUG_DATA_MmSharedCommitAddr                   344
#define DEBUG_DATA_MmDriverCommitAddr                   352
#define DEBUG_DATA_MmProcessCommitAddr                  360
#define DEBUG_DATA_MmPagedPoolCommitAddr                368
#define DEBUG_DATA_MmExtendedCommitAddr                 376
#define DEBUG_DATA_MmZeroedPageListHeadAddr             384
#define DEBUG_DATA_MmFreePageListHeadAddr               392
#define DEBUG_DATA_MmStandbyPageListHeadAddr            400
#define DEBUG_DATA_MmModifiedPageListHeadAddr           408
#define DEBUG_DATA_MmModifiedNoWritePageListHeadAddr    416
#define DEBUG_DATA_MmAvailablePagesAddr                 424
#define DEBUG_DATA_MmResidentAvailablePagesAddr         432
#define DEBUG_DATA_PoolTrackTableAddr                   440
#define DEBUG_DATA_NonPagedPoolDescriptorAddr           448
#define DEBUG_DATA_MmHighestUserAddressAddr             456
#define DEBUG_DATA_MmSystemRangeStartAddr               464
#define DEBUG_DATA_MmUserProbeAddressAddr               472
#define DEBUG_DATA_KdPrintCircularBufferAddr            480
#define DEBUG_DATA_KdPrintCircularBufferEndAddr         488
#define DEBUG_DATA_KdPrintWritePointerAddr              496
#define DEBUG_DATA_KdPrintRolloverCountAddr             504
#define DEBUG_DATA_MmLoadedUserImageListAddr            512
#define DEBUG_DATA_NtBuildLabAddr                       520
#define DEBUG_DATA_KiNormalSystemCall                   528
#define DEBUG_DATA_KiProcessorBlockAddr                 536
#define DEBUG_DATA_MmUnloadedDriversAddr                544
#define DEBUG_DATA_MmLastUnloadedDriverAddr             552
#define DEBUG_DATA_MmTriageActionTakenAddr              560
#define DEBUG_DATA_MmSpecialPoolTagAddr                 568
#define DEBUG_DATA_KernelVerifierAddr                   576
#define DEBUG_DATA_MmVerifierDataAddr                   584
#define DEBUG_DATA_MmAllocatedNonPagedPoolAddr          592
#define DEBUG_DATA_MmPeakCommitmentAddr                 600
#define DEBUG_DATA_MmTotalCommitLimitMaximumAddr        608
#define DEBUG_DATA_CmNtCSDVersionAddr                   616
#define DEBUG_DATA_MmPhysicalMemoryBlockAddr            624
#define DEBUG_DATA_MmSessionBase                        632
#define DEBUG_DATA_MmSessionSize                        640
#define DEBUG_DATA_MmSystemParentTablePage              648
#define DEBUG_DATA_MmVirtualTranslationBase             656
#define DEBUG_DATA_OffsetKThreadNextProcessor           664
#define DEBUG_DATA_OffsetKThreadTeb                     666
#define DEBUG_DATA_OffsetKThreadKernelStack             668
#define DEBUG_DATA_OffsetKThreadInitialStack            670
#define DEBUG_DATA_OffsetKThreadApcProcess              672
#define DEBUG_DATA_OffsetKThreadState                   674
#define DEBUG_DATA_OffsetKThreadBStore                  676
#define DEBUG_DATA_OffsetKThreadBStoreLimit             678
#define DEBUG_DATA_SizeEProcess                         680
#define DEBUG_DATA_OffsetEprocessPeb                    682
#define DEBUG_DATA_OffsetEprocessParentCID              684
#define DEBUG_DATA_OffsetEprocessDirectoryTableBase     686
#define DEBUG_DATA_SizePrcb                             688
#define DEBUG_DATA_OffsetPrcbDpcRoutine                 690
#define DEBUG_DATA_OffsetPrcbCurrentThread              692
#define DEBUG_DATA_OffsetPrcbMhz                        694
#define DEBUG_DATA_OffsetPrcbCpuType                    696
#define DEBUG_DATA_OffsetPrcbVendorString               698
#define DEBUG_DATA_OffsetPrcbProcessorState             700
#define DEBUG_DATA_OffsetPrcbNumber                     702
#define DEBUG_DATA_SizeEThread                          704
#define DEBUG_DATA_KdPrintCircularBufferPtrAddr         712
#define DEBUG_DATA_KdPrintBufferSizeAddr                720
#define DEBUG_DATA_MmBadPagesDetected                   800
#define DEBUG_DATA_EtwpDebuggerData                     816
#define DEBUG_DATA_PaeEnabled                        100000
#define DEBUG_DATA_SharedUserData                    100008
#define DEBUG_DATA_ProductType                       100016
#define DEBUG_DATA_SuiteMask                         100024
#define DEBUG_DATA_DumpWriterStatus                  100032
#define DEBUG_DATA_DumpFormatVersion                 100040
#define DEBUG_DATA_DumpWriterVersion                 100048
#define DEBUG_DATA_DumpPowerState                    100056
#define DEBUG_DATA_DumpMmStorage                     100064
typedef struct _DEBUG_PROCESSOR_IDENTIFICATION_ALPHA
{
    ULONG Type;
    ULONG Revision;
} DEBUG_PROCESSOR_IDENTIFICATION_ALPHA, *PDEBUG_PROCESSOR_IDENTIFICATION_ALPHA;
typedef struct _DEBUG_PROCESSOR_IDENTIFICATION_AMD64
{
    ULONG Family;
    ULONG Model;
    ULONG Stepping;
    CHAR  VendorString[16];
} DEBUG_PROCESSOR_IDENTIFICATION_AMD64, *PDEBUG_PROCESSOR_IDENTIFICATION_AMD64;
typedef struct _DEBUG_PROCESSOR_IDENTIFICATION_IA64
{
    ULONG Model;
    ULONG Revision;
    ULONG Family;
    ULONG ArchRev;
    CHAR  VendorString[16];
} DEBUG_PROCESSOR_IDENTIFICATION_IA64, *PDEBUG_PROCESSOR_IDENTIFICATION_IA64;
typedef struct _DEBUG_PROCESSOR_IDENTIFICATION_X86
{
    ULONG Family;
    ULONG Model;
    ULONG Stepping;
    CHAR  VendorString[16];
} DEBUG_PROCESSOR_IDENTIFICATION_X86, *PDEBUG_PROCESSOR_IDENTIFICATION_X86;
typedef struct _DEBUG_PROCESSOR_IDENTIFICATION_ARM
{
    ULONG Type;
    ULONG Revision;
} DEBUG_PROCESSOR_IDENTIFICATION_ARM, *PDEBUG_PROCESSOR_IDENTIFICATION_ARM;
typedef union _DEBUG_PROCESSOR_IDENTIFICATION_ALL
{
    DEBUG_PROCESSOR_IDENTIFICATION_ALPHA Alpha;
    DEBUG_PROCESSOR_IDENTIFICATION_AMD64 Amd64;
    DEBUG_PROCESSOR_IDENTIFICATION_IA64  Ia64;
    DEBUG_PROCESSOR_IDENTIFICATION_X86   X86;
    DEBUG_PROCESSOR_IDENTIFICATION_ARM   Arm;
} DEBUG_PROCESSOR_IDENTIFICATION_ALL, *PDEBUG_PROCESSOR_IDENTIFICATION_ALL;
#define DEBUG_DATA_KPCR_OFFSET                          0
#define DEBUG_DATA_KPRCB_OFFSET                         1
#define DEBUG_DATA_KTHREAD_OFFSET                       2
#define DEBUG_DATA_BASE_TRANSLATION_VIRTUAL_OFFSET      3
#define DEBUG_DATA_PROCESSOR_IDENTIFICATION             4
#define DEBUG_DATA_PROCESSOR_SPEED                      5
#undef INTERFACE
#define INTERFACE IDebugDataSpaces
DECLARE_INTERFACE_(IDebugDataSpaces, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(ReadVirtual) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteVirtual) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(SearchVirtual) (THIS_ ULONG64 Offset, ULONG64 Length, PVOID Pattern, ULONG PatternSize, ULONG PatternGranularity, PULONG64 MatchOffset);
	STDMETHOD(ReadVirtualUncached) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteVirtualUncached) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadPointersVirtual) (THIS_ ULONG Count, ULONG64 Offset, PULONG64 Ptrs);
	STDMETHOD(WritePointersVirtual) (THIS_ ULONG Count, ULONG64 Offset, PULONG64 Ptrs);
	STDMETHOD(ReadPhysical) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WritePhysical) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadControl) (THIS_ ULONG Processor, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteControl) (THIS_ ULONG Processor, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadIo) (THIS_ ULONG InterfaceType, ULONG BusNumber, ULONG AddressSpace, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteIo) (THIS_ ULONG InterfaceType, ULONG BusNumber, ULONG AddressSpace, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadMsr) (THIS_ ULONG Msr, PULONG64 Value);
	STDMETHOD(WriteMsr) (THIS_ ULONG Msr, ULONG64 Value);
	STDMETHOD(ReadBusData) (THIS_ ULONG BusDataType, ULONG BusNumber, ULONG SlotNumber, ULONG Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteBusData) (THIS_ ULONG BusDataType, ULONG BusNumber, ULONG SlotNumber, ULONG Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(CheckLowMemory) (THIS);
	STDMETHOD(ReadDebuggerData) (THIS_ ULONG Index, PVOID Buffer, ULONG BufferSize, PULONG DataSize);
	STDMETHOD(ReadProcessorSystemData) (THIS_ ULONG Processor, ULONG Index, PVOID Buffer, ULONG BufferSize, PULONG DataSize);
};
#define DEBUG_HANDLE_DATA_TYPE_BASIC                 0
#define DEBUG_HANDLE_DATA_TYPE_TYPE_NAME             1
#define DEBUG_HANDLE_DATA_TYPE_OBJECT_NAME           2
#define DEBUG_HANDLE_DATA_TYPE_HANDLE_COUNT          3
#define DEBUG_HANDLE_DATA_TYPE_TYPE_NAME_WIDE        4
#define DEBUG_HANDLE_DATA_TYPE_OBJECT_NAME_WIDE      5
#define DEBUG_HANDLE_DATA_TYPE_MINI_THREAD_1         6
#define DEBUG_HANDLE_DATA_TYPE_MINI_MUTANT_1         7
#define DEBUG_HANDLE_DATA_TYPE_MINI_MUTANT_2         8
#define DEBUG_HANDLE_DATA_TYPE_PER_HANDLE_OPERATIONS 9
#define DEBUG_HANDLE_DATA_TYPE_ALL_HANDLE_OPERATIONS 10
#define DEBUG_HANDLE_DATA_TYPE_MINI_PROCESS_1        11
#define DEBUG_HANDLE_DATA_TYPE_MINI_PROCESS_2        12
typedef struct _DEBUG_HANDLE_DATA_BASIC
{
    ULONG TypeNameSize;
    ULONG ObjectNameSize;
    ULONG Attributes;
    ULONG GrantedAccess;
    ULONG HandleCount;
    ULONG PointerCount;
} DEBUG_HANDLE_DATA_BASIC, *PDEBUG_HANDLE_DATA_BASIC;
#undef INTERFACE
#define INTERFACE IDebugDataSpaces2
DECLARE_INTERFACE_(IDebugDataSpaces2, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(ReadVirtual) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteVirtual) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(SearchVirtual) (THIS_ ULONG64 Offset, ULONG64 Length, PVOID Pattern, ULONG PatternSize, ULONG PatternGranularity, PULONG64 MatchOffset);
	STDMETHOD(ReadVirtualUncached) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteVirtualUncached) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadPointersVirtual) (THIS_ ULONG Count, ULONG64 Offset, PULONG64 Ptrs);
	STDMETHOD(WritePointersVirtual) (THIS_ ULONG Count, ULONG64 Offset, PULONG64 Ptrs);
	STDMETHOD(ReadPhysical) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WritePhysical) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadControl) (THIS_ ULONG Processor, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteControl) (THIS_ ULONG Processor, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadIo) (THIS_ ULONG InterfaceType, ULONG BusNumber, ULONG AddressSpace, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteIo) (THIS_ ULONG InterfaceType, ULONG BusNumber, ULONG AddressSpace, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadMsr) (THIS_ ULONG Msr, PULONG64 Value);
	STDMETHOD(WriteMsr) (THIS_ ULONG Msr, ULONG64 Value);
	STDMETHOD(ReadBusData) (THIS_ ULONG BusDataType, ULONG BusNumber, ULONG SlotNumber, ULONG Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteBusData) (THIS_ ULONG BusDataType, ULONG BusNumber, ULONG SlotNumber, ULONG Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(CheckLowMemory) (THIS);
	STDMETHOD(ReadDebuggerData) (THIS_ ULONG Index, PVOID Buffer, ULONG BufferSize, PULONG DataSize);
	STDMETHOD(ReadProcessorSystemData) (THIS_ ULONG Processor, ULONG Index, PVOID Buffer, ULONG BufferSize, PULONG DataSize);
	STDMETHOD(VirtualToPhysical) (THIS_ ULONG64 Virtual, PULONG64 Physical);
	STDMETHOD(GetVirtualTranslationPhysicalOffsets) (THIS_ ULONG64 Virtual, PULONG64 Offsets, ULONG OffsetsSize, PULONG Levels);
	STDMETHOD(ReadHandleData) (THIS_ ULONG64 Handle, ULONG DataType, PVOID Buffer, ULONG BufferSize, PULONG DataSize);
	STDMETHOD(FillVirtual) (THIS_ ULONG64 Start, ULONG Size, PVOID Pattern, ULONG PatternSize, PULONG Filled);
	STDMETHOD(FillPhysical) (THIS_ ULONG64 Start, ULONG Size, PVOID Pattern, ULONG PatternSize, PULONG Filled);
	STDMETHOD(QueryVirtual) (THIS_ ULONG64 Offset, PMEMORY_BASIC_INFORMATION64 Info);
};
#undef INTERFACE
#define INTERFACE IDebugDataSpaces3
DECLARE_INTERFACE_(IDebugDataSpaces3, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(ReadVirtual) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteVirtual) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(SearchVirtual) (THIS_ ULONG64 Offset, ULONG64 Length, PVOID Pattern, ULONG PatternSize, ULONG PatternGranularity, PULONG64 MatchOffset);
	STDMETHOD(ReadVirtualUncached) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteVirtualUncached) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadPointersVirtual) (THIS_ ULONG Count, ULONG64 Offset, PULONG64 Ptrs);
	STDMETHOD(WritePointersVirtual) (THIS_ ULONG Count, ULONG64 Offset, PULONG64 Ptrs);
	STDMETHOD(ReadPhysical) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WritePhysical) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadControl) (THIS_ ULONG Processor, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteControl) (THIS_ ULONG Processor, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadIo) (THIS_ ULONG InterfaceType, ULONG BusNumber, ULONG AddressSpace, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteIo) (THIS_ ULONG InterfaceType, ULONG BusNumber, ULONG AddressSpace, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadMsr) (THIS_ ULONG Msr, PULONG64 Value);
	STDMETHOD(WriteMsr) (THIS_ ULONG Msr, ULONG64 Value);
	STDMETHOD(ReadBusData) (THIS_ ULONG BusDataType, ULONG BusNumber, ULONG SlotNumber, ULONG Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteBusData) (THIS_ ULONG BusDataType, ULONG BusNumber, ULONG SlotNumber, ULONG Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(CheckLowMemory) (THIS);
	STDMETHOD(ReadDebuggerData) (THIS_ ULONG Index, PVOID Buffer, ULONG BufferSize, PULONG DataSize);
	STDMETHOD(ReadProcessorSystemData) (THIS_ ULONG Processor, ULONG Index, PVOID Buffer, ULONG BufferSize, PULONG DataSize);
	STDMETHOD(VirtualToPhysical) (THIS_ ULONG64 Virtual, PULONG64 Physical);
	STDMETHOD(GetVirtualTranslationPhysicalOffsets) (THIS_ ULONG64 Virtual, PULONG64 Offsets, ULONG OffsetsSize, PULONG Levels);
	STDMETHOD(ReadHandleData) (THIS_ ULONG64 Handle, ULONG DataType, PVOID Buffer, ULONG BufferSize, PULONG DataSize);
	STDMETHOD(FillVirtual) (THIS_ ULONG64 Start, ULONG Size, PVOID Pattern, ULONG PatternSize, PULONG Filled);
	STDMETHOD(FillPhysical) (THIS_ ULONG64 Start, ULONG Size, PVOID Pattern, ULONG PatternSize, PULONG Filled);
	STDMETHOD(QueryVirtual) (THIS_ ULONG64 Offset, PMEMORY_BASIC_INFORMATION64 Info);
	STDMETHOD(ReadImageNtHeaders) (THIS_ ULONG64 ImageBase, PIMAGE_NT_HEADERS64 Headers);
	STDMETHOD(ReadTagged) (THIS_ LPGUID Tag, ULONG Offset, PVOID Buffer, ULONG BufferSize, PULONG TotalSize);
	STDMETHOD(StartEnumTagged) (THIS_ PULONG64 Handle);
	STDMETHOD(GetNextTagged) (THIS_ ULONG64 Handle, LPGUID Tag, PULONG Size);
	STDMETHOD(EndEnumTagged) (THIS_ ULONG64 Handle);
};
#define DEBUG_OFFSINFO_VIRTUAL_SOURCE 0x00000001
#define DEBUG_VSOURCE_INVALID              0x00000000
#define DEBUG_VSOURCE_DEBUGGEE             0x00000001
#define DEBUG_VSOURCE_MAPPED_IMAGE         0x00000002
#define DEBUG_VSOURCE_DUMP_WITHOUT_MEMINFO 0x00000003
#define DEBUG_VSEARCH_DEFAULT       0x00000000
#define DEBUG_VSEARCH_WRITABLE_ONLY 0x00000001
#define DEBUG_PHYSICAL_DEFAULT        0x00000000
#define DEBUG_PHYSICAL_CACHED         0x00000001
#define DEBUG_PHYSICAL_UNCACHED       0x00000002
#define DEBUG_PHYSICAL_WRITE_COMBINED 0x00000003
#undef INTERFACE
#define INTERFACE IDebugDataSpaces4
DECLARE_INTERFACE_(IDebugDataSpaces4, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(ReadVirtual) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteVirtual) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(SearchVirtual) (THIS_ ULONG64 Offset, ULONG64 Length, PVOID Pattern, ULONG PatternSize, ULONG PatternGranularity, PULONG64 MatchOffset);
	STDMETHOD(ReadVirtualUncached) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteVirtualUncached) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadPointersVirtual) (THIS_ ULONG Count, ULONG64 Offset, PULONG64 Ptrs);
	STDMETHOD(WritePointersVirtual) (THIS_ ULONG Count, ULONG64 Offset, PULONG64 Ptrs);
	STDMETHOD(ReadPhysical) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WritePhysical) (THIS_ ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadControl) (THIS_ ULONG Processor, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteControl) (THIS_ ULONG Processor, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadIo) (THIS_ ULONG InterfaceType, ULONG BusNumber, ULONG AddressSpace, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteIo) (THIS_ ULONG InterfaceType, ULONG BusNumber, ULONG AddressSpace, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(ReadMsr) (THIS_ ULONG Msr, PULONG64 Value);
	STDMETHOD(WriteMsr) (THIS_ ULONG Msr, ULONG64 Value);
	STDMETHOD(ReadBusData) (THIS_ ULONG BusDataType, ULONG BusNumber, ULONG SlotNumber, ULONG Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteBusData) (THIS_ ULONG BusDataType, ULONG BusNumber, ULONG SlotNumber, ULONG Offset, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(CheckLowMemory) (THIS);
	STDMETHOD(ReadDebuggerData) (THIS_ ULONG Index, PVOID Buffer, ULONG BufferSize, PULONG DataSize);
	STDMETHOD(ReadProcessorSystemData) (THIS_ ULONG Processor, ULONG Index, PVOID Buffer, ULONG BufferSize, PULONG DataSize);
	STDMETHOD(VirtualToPhysical) (THIS_ ULONG64 Virtual, PULONG64 Physical);
	STDMETHOD(GetVirtualTranslationPhysicalOffsets) (THIS_ ULONG64 Virtual, PULONG64 Offsets, ULONG OffsetsSize, PULONG Levels);
	STDMETHOD(ReadHandleData) (THIS_ ULONG64 Handle, ULONG DataType, PVOID Buffer, ULONG BufferSize, PULONG DataSize);
	STDMETHOD(FillVirtual) (THIS_ ULONG64 Start, ULONG Size, PVOID Pattern, ULONG PatternSize, PULONG Filled);
	STDMETHOD(FillPhysical) (THIS_ ULONG64 Start, ULONG Size, PVOID Pattern, ULONG PatternSize, PULONG Filled);
	STDMETHOD(QueryVirtual) (THIS_ ULONG64 Offset, PMEMORY_BASIC_INFORMATION64 Info);
	STDMETHOD(ReadImageNtHeaders) (THIS_ ULONG64 ImageBase, PIMAGE_NT_HEADERS64 Headers);
	STDMETHOD(ReadTagged) (THIS_ LPGUID Tag, ULONG Offset, PVOID Buffer, ULONG BufferSize, PULONG TotalSize);
	STDMETHOD(StartEnumTagged) (THIS_ PULONG64 Handle);
	STDMETHOD(GetNextTagged) (THIS_ ULONG64 Handle, LPGUID Tag, PULONG Size);
	STDMETHOD(EndEnumTagged) (THIS_ ULONG64 Handle);
	STDMETHOD(GetOffsetInformation) (THIS_ ULONG Space, ULONG Which, ULONG64 Offset, PVOID Buffer, ULONG BufferSize, PULONG InfoSize);
	STDMETHOD(GetNextDifferentlyValidOffsetVirtual) (THIS_ ULONG64 Offset, PULONG64 NextOffset);
	STDMETHOD(GetValidRegionVirtual) (THIS_ ULONG64 Base, ULONG Size, PULONG64 ValidBase, PULONG ValidSize);
	STDMETHOD(SearchVirtual2) (THIS_ ULONG64 Offset, ULONG64 Length, ULONG Flags, PVOID Pattern, ULONG PatternSize, ULONG PatternGranularity, PULONG64 MatchOffset);
	STDMETHOD(ReadMultiByteStringVirtual) (THIS_ ULONG64 Offset, ULONG MaxBytes, PSTR Buffer, ULONG BufferSize, PULONG StringBytes);
	STDMETHOD(ReadMultiByteStringVirtualWide) (THIS_ ULONG64 Offset, ULONG MaxBytes, ULONG CodePage, PWSTR Buffer, ULONG BufferSize, PULONG StringBytes);
	STDMETHOD(ReadUnicodeStringVirtual) (THIS_ ULONG64 Offset, ULONG MaxBytes, ULONG CodePage, PSTR Buffer, ULONG BufferSize, PULONG StringBytes);
	STDMETHOD(ReadUnicodeStringVirtualWide) (THIS_ ULONG64 Offset, ULONG MaxBytes, PWSTR Buffer, ULONG BufferSize, PULONG StringBytes);
	STDMETHOD(ReadPhysical2) (THIS_ ULONG64 Offset, ULONG Flags, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WritePhysical2) (THIS_ ULONG64 Offset, ULONG Flags, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
};
#define DEBUG_EVENT_BREAKPOINT              0x00000001
#define DEBUG_EVENT_EXCEPTION               0x00000002
#define DEBUG_EVENT_CREATE_THREAD           0x00000004
#define DEBUG_EVENT_EXIT_THREAD             0x00000008
#define DEBUG_EVENT_CREATE_PROCESS          0x00000010
#define DEBUG_EVENT_EXIT_PROCESS            0x00000020
#define DEBUG_EVENT_LOAD_MODULE             0x00000040
#define DEBUG_EVENT_UNLOAD_MODULE           0x00000080
#define DEBUG_EVENT_SYSTEM_ERROR            0x00000100
#define DEBUG_EVENT_SESSION_STATUS          0x00000200
#define DEBUG_EVENT_CHANGE_DEBUGGEE_STATE   0x00000400
#define DEBUG_EVENT_CHANGE_ENGINE_STATE     0x00000800
#define DEBUG_EVENT_CHANGE_SYMBOL_STATE     0x00001000
#define DEBUG_SESSION_ACTIVE                       0x00000000
#define DEBUG_SESSION_END_SESSION_ACTIVE_TERMINATE 0x00000001
#define DEBUG_SESSION_END_SESSION_ACTIVE_DETACH    0x00000002
#define DEBUG_SESSION_END_SESSION_PASSIVE          0x00000003
#define DEBUG_SESSION_END                          0x00000004
#define DEBUG_SESSION_REBOOT                       0x00000005
#define DEBUG_SESSION_HIBERNATE                    0x00000006
#define DEBUG_SESSION_FAILURE                      0x00000007
#define DEBUG_CDS_ALL       0xffffffff
#define DEBUG_CDS_REGISTERS 0x00000001
#define DEBUG_CDS_DATA      0x00000002
#define DEBUG_CES_ALL                 0xffffffff
#define DEBUG_CES_CURRENT_THREAD      0x00000001
#define DEBUG_CES_EFFECTIVE_PROCESSOR 0x00000002
#define DEBUG_CES_BREAKPOINTS         0x00000004
#define DEBUG_CES_CODE_LEVEL          0x00000008
#define DEBUG_CES_EXECUTION_STATUS    0x00000010
#define DEBUG_CES_ENGINE_OPTIONS      0x00000020
#define DEBUG_CES_LOG_FILE            0x00000040
#define DEBUG_CES_RADIX               0x00000080
#define DEBUG_CES_EVENT_FILTERS       0x00000100
#define DEBUG_CES_PROCESS_OPTIONS     0x00000200
#define DEBUG_CES_EXTENSIONS          0x00000400
#define DEBUG_CES_SYSTEMS             0x00000800
#define DEBUG_CES_ASSEMBLY_OPTIONS    0x00001000
#define DEBUG_CES_EXPRESSION_SYNTAX   0x00002000
#define DEBUG_CES_TEXT_REPLACEMENTS   0x00004000
#define DEBUG_CSS_ALL            0xffffffff
#define DEBUG_CSS_LOADS          0x00000001
#define DEBUG_CSS_UNLOADS        0x00000002
#define DEBUG_CSS_SCOPE          0x00000004
#define DEBUG_CSS_PATHS          0x00000008
#define DEBUG_CSS_SYMBOL_OPTIONS 0x00000010
#define DEBUG_CSS_TYPE_OPTIONS   0x00000020
#undef INTERFACE
#define INTERFACE IDebugEventCallbacks
DECLARE_INTERFACE_(IDebugEventCallbacks, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetInterestMask) (THIS_ PULONG Mask);
	STDMETHOD(Breakpoint) (THIS_ PDEBUG_BREAKPOINT Bp);
	STDMETHOD(Exception) (THIS_ PEXCEPTION_RECORD64 Exception, ULONG FirstChance);
	STDMETHOD(CreateThread) (THIS_ ULONG64 Handle, ULONG64 DataOffset, ULONG64 StartOffset);
	STDMETHOD(ExitThread) (THIS_ ULONG ExitCode);
	STDMETHOD(CreateProcess) (THIS_ ULONG64 ImageFileHandle, ULONG64 Handle, ULONG64 BaseOffset, ULONG ModuleSize, PCSTR ModuleName, PCSTR ImageName, ULONG CheckSum, ULONG TimeDateStamp, ULONG64 InitialThreadHandle, ULONG64 ThreadDataOffset, ULONG64 StartOffset);
	STDMETHOD(ExitProcess) (THIS_ ULONG ExitCode);
	STDMETHOD(LoadModule) (THIS_ ULONG64 ImageFileHandle, ULONG64 BaseOffset, ULONG ModuleSize, PCSTR ModuleName, PCSTR ImageName, ULONG CheckSum, ULONG TimeDateStamp);
	STDMETHOD(UnloadModule) (THIS_ PCSTR ImageBaseName, ULONG64 BaseOffset);
	STDMETHOD(SystemError) (THIS_ ULONG Error, ULONG Level);
	STDMETHOD(SessionStatus) (THIS_ ULONG Status);
	STDMETHOD(ChangeDebuggeeState) (THIS_ ULONG Flags, ULONG64 Argument);
	STDMETHOD(ChangeEngineState) (THIS_ ULONG Flags, ULONG64 Argument);
	STDMETHOD(ChangeSymbolState) (THIS_ ULONG Flags, ULONG64 Argument);
};
#undef INTERFACE
#define INTERFACE IDebugEventCallbacksWide
DECLARE_INTERFACE_(IDebugEventCallbacksWide, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetInterestMask) (THIS_ PULONG Mask);
	STDMETHOD(Breakpoint) (THIS_ PDEBUG_BREAKPOINT2 Bp);
	STDMETHOD(Exception) (THIS_ PEXCEPTION_RECORD64 Exception, ULONG FirstChance);
	STDMETHOD(CreateThread) (THIS_ ULONG64 Handle, ULONG64 DataOffset, ULONG64 StartOffset);
	STDMETHOD(ExitThread) (THIS_ ULONG ExitCode);
	STDMETHOD(CreateProcess) (THIS_ ULONG64 ImageFileHandle, ULONG64 Handle, ULONG64 BaseOffset, ULONG ModuleSize, PCWSTR ModuleName, PCWSTR ImageName, ULONG CheckSum, ULONG TimeDateStamp, ULONG64 InitialThreadHandle, ULONG64 ThreadDataOffset, ULONG64 StartOffset);
	STDMETHOD(ExitProcess) (THIS_ ULONG ExitCode);
	STDMETHOD(LoadModule) (THIS_ ULONG64 ImageFileHandle, ULONG64 BaseOffset, ULONG ModuleSize, PCWSTR ModuleName, PCWSTR ImageName, ULONG CheckSum, ULONG TimeDateStamp);
	STDMETHOD(UnloadModule) (THIS_ PCWSTR ImageBaseName, ULONG64 BaseOffset);
	STDMETHOD(SystemError) (THIS_ ULONG Error, ULONG Level);
	STDMETHOD(SessionStatus) (THIS_ ULONG Status);
	STDMETHOD(ChangeDebuggeeState) (THIS_ ULONG Flags, ULONG64 Argument);
	STDMETHOD(ChangeEngineState) (THIS_ ULONG Flags, ULONG64 Argument);
	STDMETHOD(ChangeSymbolState) (THIS_ ULONG Flags, ULONG64 Argument);
};
#undef INTERFACE
#define INTERFACE IDebugInputCallbacks
DECLARE_INTERFACE_(IDebugInputCallbacks, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(StartInput) (THIS_ ULONG BufferSize);
	STDMETHOD(EndInput) (THIS);
};
#undef INTERFACE
#define INTERFACE IDebugOutputCallbacks
DECLARE_INTERFACE_(IDebugOutputCallbacks, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Output) (THIS_ ULONG Mask, PCSTR Text);
};
#undef INTERFACE
#define INTERFACE IDebugOutputCallbacksWide
DECLARE_INTERFACE_(IDebugOutputCallbacksWide, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Output) (THIS_ ULONG Mask, PCWSTR Text);
};
#define DEBUG_OUTCBI_EXPLICIT_FLUSH 0x00000001
#define DEBUG_OUTCBI_TEXT           0x00000002
#define DEBUG_OUTCBI_DML            0x00000004
#define DEBUG_OUTCBI_ANY_FORMAT     0x00000006
#define DEBUG_OUTCB_TEXT           0
#define DEBUG_OUTCB_DML            1
#define DEBUG_OUTCB_EXPLICIT_FLUSH 2
#define DEBUG_OUTCBF_COMBINED_EXPLICIT_FLUSH    0x00000001
#define DEBUG_OUTCBF_DML_HAS_TAGS               0x00000002
#define DEBUG_OUTCBF_DML_HAS_SPECIAL_CHARACTERS 0x00000004
#undef INTERFACE
#define INTERFACE IDebugOutputCallbacks2
DECLARE_INTERFACE_(IDebugOutputCallbacks2, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Output) (THIS_ ULONG Mask, PCSTR Text);
	STDMETHOD(GetInterestMask) (THIS_ PULONG Mask);
	STDMETHOD(Output2) (THIS_ ULONG Which, ULONG Flags, ULONG64 Arg, PCWSTR Text);
};
#define DEBUG_REGISTERS_DEFAULT 0x00000000
#define DEBUG_REGISTERS_INT32   0x00000001
#define DEBUG_REGISTERS_INT64   0x00000002
#define DEBUG_REGISTERS_FLOAT   0x00000004
#define DEBUG_REGISTERS_ALL     0x00000007
#define DEBUG_REGISTER_SUB_REGISTER 0x00000001
typedef struct _DEBUG_REGISTER_DESCRIPTION
{
    ULONG Type;
    ULONG Flags;
    ULONG SubregMaster;
    ULONG SubregLength;
    ULONG64 SubregMask;
    ULONG SubregShift;
    ULONG Reserved0;
} DEBUG_REGISTER_DESCRIPTION, *PDEBUG_REGISTER_DESCRIPTION;
#undef INTERFACE
#define INTERFACE IDebugRegisters
DECLARE_INTERFACE_(IDebugRegisters, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetNumberRegisters) (THIS_ PULONG Number);
	STDMETHOD(GetDescription) (THIS_ ULONG Register, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize, PDEBUG_REGISTER_DESCRIPTION Desc);
	STDMETHOD(GetIndexByName) (THIS_ PCSTR Name, PULONG Index);
	STDMETHOD(GetValue) (THIS_ ULONG Register, PDEBUG_VALUE Value);
	STDMETHOD(SetValue) (THIS_ ULONG Register, PDEBUG_VALUE Value);
	STDMETHOD(GetValues) (THIS_ ULONG Count, PULONG Indices, ULONG Start, PDEBUG_VALUE Values);
	STDMETHOD(SetValues) (THIS_ ULONG Count, PULONG Indices, ULONG Start, PDEBUG_VALUE Values);
	STDMETHOD(OutputRegisters) (THIS_ ULONG OutputControl, ULONG Flags);
	STDMETHOD(GetInstructionOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(GetStackOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(GetFrameOffset) (THIS_ PULONG64 Offset);
};
#define DEBUG_REGSRC_DEBUGGEE 0x00000000
#define DEBUG_REGSRC_EXPLICIT 0x00000001
#define DEBUG_REGSRC_FRAME    0x00000002
#undef INTERFACE
#define INTERFACE IDebugRegisters2
DECLARE_INTERFACE_(IDebugRegisters2, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetNumberRegisters) (THIS_ PULONG Number);
	STDMETHOD(GetDescription) (THIS_ ULONG Register, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize, PDEBUG_REGISTER_DESCRIPTION Desc);
	STDMETHOD(GetIndexByName) (THIS_ PCSTR Name, PULONG Index);
	STDMETHOD(GetValue) (THIS_ ULONG Register, PDEBUG_VALUE Value);
	STDMETHOD(SetValue) (THIS_ ULONG Register, PDEBUG_VALUE Value);
	STDMETHOD(GetValues) (THIS_ ULONG Count, PULONG Indices, ULONG Start, PDEBUG_VALUE Values);
	STDMETHOD(SetValues) (THIS_ ULONG Count, PULONG Indices, ULONG Start, PDEBUG_VALUE Values);
	STDMETHOD(OutputRegisters) (THIS_ ULONG OutputControl, ULONG Flags);
	STDMETHOD(GetInstructionOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(GetStackOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(GetFrameOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(GetDescriptionWide) (THIS_ ULONG Register, PWSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize, PDEBUG_REGISTER_DESCRIPTION Desc);
	STDMETHOD(GetIndexByNameWide) (THIS_ PCWSTR Name, PULONG Index);
	STDMETHOD(GetNumberPseudoRegisters) (THIS_ PULONG Number);
	STDMETHOD(GetPseudoDescription) (THIS_ ULONG Register, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize, PULONG64 TypeModule, PULONG TypeId);
	STDMETHOD(GetPseudoDescriptionWide) (THIS_ ULONG Register, PWSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize, PULONG64 TypeModule, PULONG TypeId);
	STDMETHOD(GetPseudoIndexByName) (THIS_ PCSTR Name, PULONG Index);
	STDMETHOD(GetPseudoIndexByNameWide) (THIS_ PCWSTR Name, PULONG Index);
	STDMETHOD(GetPseudoValues) (THIS_ ULONG Source, ULONG Count, PULONG Indices, ULONG Start, PDEBUG_VALUE Values);
	STDMETHOD(SetPseudoValues) (THIS_ ULONG Source, ULONG Count, PULONG Indices, ULONG Start, PDEBUG_VALUE Values);
	STDMETHOD(GetValues2) (THIS_ ULONG Source, ULONG Count, PULONG Indices, ULONG Start, PDEBUG_VALUE Values);
	STDMETHOD(SetValues2) (THIS_ ULONG Source, ULONG Count, PULONG Indices, ULONG Start, PDEBUG_VALUE Values);
	STDMETHOD(OutputRegisters2) (THIS_ ULONG OutputControl, ULONG Source, ULONG Flags);
	STDMETHOD(GetInstructionOffset2) (THIS_ ULONG Source, PULONG64 Offset);
	STDMETHOD(GetStackOffset2) (THIS_ ULONG Source, PULONG64 Offset);
	STDMETHOD(GetFrameOffset2) (THIS_ ULONG Source, PULONG64 Offset);
};
#define DEBUG_OUTPUT_SYMBOLS_DEFAULT    0x00000000
#define DEBUG_OUTPUT_SYMBOLS_NO_NAMES   0x00000001
#define DEBUG_OUTPUT_SYMBOLS_NO_OFFSETS 0x00000002
#define DEBUG_OUTPUT_SYMBOLS_NO_VALUES  0x00000004
#define DEBUG_OUTPUT_SYMBOLS_NO_TYPES   0x00000010
#define DEBUG_OUTPUT_NAME_END           "**NAME**"
#define DEBUG_OUTPUT_OFFSET_END         "**OFF**"
#define DEBUG_OUTPUT_VALUE_END          "**VALUE**"
#define DEBUG_OUTPUT_TYPE_END           "**TYPE**"
#define DEBUG_OUTPUT_NAME_END_WIDE      L"**NAME**"
#define DEBUG_OUTPUT_OFFSET_END_WIDE    L"**OFF**"
#define DEBUG_OUTPUT_VALUE_END_WIDE     L"**VALUE**"
#define DEBUG_OUTPUT_TYPE_END_WIDE      L"**TYPE**"
#ifdef UNICODE
#define DEBUG_OUTPUT_NAME_END_T DEBUG_OUTPUT_NAME_END_WIDE
#define DEBUG_OUTPUT_OFFSET_END_T DEBUG_OUTPUT_OFFSET_END_WIDE
#define DEBUG_OUTPUT_VALUE_END_T DEBUG_OUTPUT_VALUE_END_WIDE
#define DEBUG_OUTPUT_TYPE_END_T DEBUG_OUTPUT_TYPE_END_WIDE
#else
#define DEBUG_OUTPUT_NAME_END_T DEBUG_OUTPUT_NAME_END
#define DEBUG_OUTPUT_OFFSET_END_T DEBUG_OUTPUT_OFFSET_END
#define DEBUG_OUTPUT_VALUE_END_T DEBUG_OUTPUT_VALUE_END
#define DEBUG_OUTPUT_TYPE_END_T DEBUG_OUTPUT_TYPE_END
#endif
#define DEBUG_SYMBOL_EXPANSION_LEVEL_MASK 0x0000000f
#define DEBUG_SYMBOL_EXPANDED             0x00000010
#define DEBUG_SYMBOL_READ_ONLY            0x00000020
#define DEBUG_SYMBOL_IS_ARRAY             0x00000040
#define DEBUG_SYMBOL_IS_FLOAT             0x00000080
#define DEBUG_SYMBOL_IS_ARGUMENT          0x00000100
#define DEBUG_SYMBOL_IS_LOCAL             0x00000200
typedef struct _DEBUG_SYMBOL_PARAMETERS
{
    ULONG64 Module;
    ULONG TypeId;
    ULONG ParentSymbol;
    ULONG SubElements;
    ULONG Flags;
    ULONG64 Reserved;
} DEBUG_SYMBOL_PARAMETERS, *PDEBUG_SYMBOL_PARAMETERS;
#undef INTERFACE
#define INTERFACE IDebugSymbolGroup
DECLARE_INTERFACE_(IDebugSymbolGroup, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetNumberSymbols) (THIS_ PULONG Number);
	STDMETHOD(AddSymbol) (THIS_ PCSTR Name, PULONG Index);
	STDMETHOD(RemoveSymbolByName) (THIS_ PCSTR Name);
	STDMETHOD(RemoveSymbolByIndex) (THIS_ ULONG Index);
	STDMETHOD(GetSymbolName) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG NameSize);
	STDMETHOD(GetSymbolParameters) (THIS_ ULONG Start, ULONG Count, PDEBUG_SYMBOL_PARAMETERS Params);
	STDMETHOD(ExpandSymbol) (THIS_ ULONG Index, BOOL Expand);
	STDMETHOD(OutputSymbols) (THIS_ ULONG OutputControl, ULONG Flags, ULONG Start, ULONG Count);
	STDMETHOD(WriteSymbol) (THIS_ ULONG Index, PCSTR Value);
	STDMETHOD(OutputAsType) (THIS_ ULONG Index, PCSTR Type);
};
#define DEBUG_SYMENT_IS_CODE      0x00000001
#define DEBUG_SYMENT_IS_DATA      0x00000002
#define DEBUG_SYMENT_IS_PARAMETER 0x00000004
#define DEBUG_SYMENT_IS_LOCAL     0x00000008
#define DEBUG_SYMENT_IS_MANAGED   0x00000010
#define DEBUG_SYMENT_IS_SYNTHETIC 0x00000020
typedef struct _DEBUG_SYMBOL_ENTRY
{
    ULONG64 ModuleBase;
    ULONG64 Offset;
    ULONG64 Id;
    ULONG64 Arg64;
    ULONG Size;
    ULONG Flags;
    ULONG TypeId;
    ULONG NameSize;
    ULONG Token;
    ULONG Tag;
    ULONG Arg32;
    ULONG Reserved;
} DEBUG_SYMBOL_ENTRY, *PDEBUG_SYMBOL_ENTRY;
#undef INTERFACE
#define INTERFACE IDebugSymbolGroup2
DECLARE_INTERFACE_(IDebugSymbolGroup2, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetNumberSymbols) (THIS_ PULONG Number);
	STDMETHOD(AddSymbol) (THIS_ PCSTR Name, PULONG Index);
	STDMETHOD(RemoveSymbolByName) (THIS_ PCSTR Name);
	STDMETHOD(RemoveSymbolByIndex) (THIS_ ULONG Index);
	STDMETHOD(GetSymbolName) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG NameSize);
	STDMETHOD(GetSymbolParameters) (THIS_ ULONG Start, ULONG Count, PDEBUG_SYMBOL_PARAMETERS Params);
	STDMETHOD(ExpandSymbol) (THIS_ ULONG Index, BOOL Expand);
	STDMETHOD(OutputSymbols) (THIS_ ULONG OutputControl, ULONG Flags, ULONG Start, ULONG Count);
	STDMETHOD(WriteSymbol) (THIS_ ULONG Index, PCSTR Value);
	STDMETHOD(OutputAsType) (THIS_ ULONG Index, PCSTR Type);
	STDMETHOD(AddSymbolWide) (THIS_ PCWSTR Name, PULONG Index);
	STDMETHOD(RemoveSymbolByNameWide) (THIS_ PCWSTR Name);
	STDMETHOD(GetSymbolNameWide) (THIS_ ULONG Index, PWSTR Buffer, ULONG BufferSize, PULONG NameSize);
	STDMETHOD(WriteSymbolWide) (THIS_ ULONG Index, PCWSTR Value);
	STDMETHOD(OutputAsTypeWide) (THIS_ ULONG Index, PCWSTR Type);
	STDMETHOD(GetSymbolTypeName) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG NameSize);
	STDMETHOD(GetSymbolTypeNameWide) (THIS_ ULONG Index, PWSTR Buffer, ULONG BufferSize, PULONG NameSize);
	STDMETHOD(GetSymbolSize) (THIS_ ULONG Index, PULONG Size);
	STDMETHOD(GetSymbolOffset) (THIS_ ULONG Index, PULONG64 Offset);
	STDMETHOD(GetSymbolRegister) (THIS_ ULONG Index, PULONG Register);
	STDMETHOD(GetSymbolValueText) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG NameSize);
	STDMETHOD(GetSymbolValueTextWide) (THIS_ ULONG Index, PWSTR Buffer, ULONG BufferSize, PULONG NameSize);
	STDMETHOD(GetSymbolEntryInformation) (THIS_ ULONG Index, PDEBUG_SYMBOL_ENTRY Entry);
};
#define DEBUG_MODULE_LOADED            0x00000000
#define DEBUG_MODULE_UNLOADED          0x00000001
#define DEBUG_MODULE_USER_MODE         0x00000002
#define DEBUG_MODULE_EXE_MODULE        0x00000004
#define DEBUG_MODULE_EXPLICIT          0x00000008
#define DEBUG_MODULE_SECONDARY         0x00000010
#define DEBUG_MODULE_SYNTHETIC         0x00000020
#define DEBUG_MODULE_SYM_BAD_CHECKSUM  0x00010000
#define DEBUG_SYMTYPE_NONE     0
#define DEBUG_SYMTYPE_COFF     1
#define DEBUG_SYMTYPE_CODEVIEW 2
#define DEBUG_SYMTYPE_PDB      3
#define DEBUG_SYMTYPE_EXPORT   4
#define DEBUG_SYMTYPE_DEFERRED 5
#define DEBUG_SYMTYPE_SYM      6
#define DEBUG_SYMTYPE_DIA      7
typedef struct _DEBUG_MODULE_PARAMETERS
{
    ULONG64 Base;
    ULONG Size;
    ULONG TimeDateStamp;
    ULONG Checksum;
    ULONG Flags;
    ULONG SymbolType;
    ULONG ImageNameSize;
    ULONG ModuleNameSize;
    ULONG LoadedImageNameSize;
    ULONG SymbolFileNameSize;
    ULONG MappedImageNameSize;
    ULONG64 Reserved[2];
} DEBUG_MODULE_PARAMETERS, *PDEBUG_MODULE_PARAMETERS;
#define DEBUG_SCOPE_GROUP_ARGUMENTS 0x00000001
#define DEBUG_SCOPE_GROUP_LOCALS    0x00000002
#define DEBUG_SCOPE_GROUP_ALL       0x00000003
#define DEBUG_OUTTYPE_DEFAULT              0x00000000
#define DEBUG_OUTTYPE_NO_INDENT            0x00000001
#define DEBUG_OUTTYPE_NO_OFFSET            0x00000002
#define DEBUG_OUTTYPE_VERBOSE              0x00000004
#define DEBUG_OUTTYPE_COMPACT_OUTPUT       0x00000008
#define DEBUG_OUTTYPE_RECURSION_LEVEL(Max) (((Max) & 0xf) << 4)
#define DEBUG_OUTTYPE_ADDRESS_OF_FIELD     0x00010000
#define DEBUG_OUTTYPE_ADDRESS_AT_END       0x00020000
#define DEBUG_OUTTYPE_BLOCK_RECURSE        0x00200000
#define DEBUG_FIND_SOURCE_DEFAULT      0x00000000
#define DEBUG_FIND_SOURCE_FULL_PATH    0x00000001
#define DEBUG_FIND_SOURCE_BEST_MATCH   0x00000002
#define DEBUG_FIND_SOURCE_NO_SRCSRV    0x00000004
#define DEBUG_FIND_SOURCE_TOKEN_LOOKUP 0x00000008
#define DEBUG_INVALID_OFFSET ((ULONG64)-1)
#define MODULE_ORDERS_MASK       0xF0000000
#define MODULE_ORDERS_LOADTIME   0x10000000
#define MODULE_ORDERS_MODULENAME 0x20000000
#undef INTERFACE
#define INTERFACE IDebugSymbols
DECLARE_INTERFACE_(IDebugSymbols, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetSymbolOptions) (THIS_ PULONG Options);
	STDMETHOD(AddSymbolOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveSymbolOptions) (THIS_ ULONG Options);
	STDMETHOD(SetSymbolOptions) (THIS_ ULONG Options);
	STDMETHOD(GetNameByOffset) (THIS_ ULONG64 Offset, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize, PULONG64 Displacement);
	STDMETHOD(GetOffsetByName) (THIS_ PCSTR Symbol, PULONG64 Offset);
	STDMETHOD(GetNearNameByOffset) (THIS_ ULONG64 Offset, LONG Delta, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize, PULONG64 Displacement);
	STDMETHOD(GetLineByOffset) (THIS_ ULONG64 Offset, PULONG Line, PSTR FileBuffer, ULONG FileBufferSize, PULONG FileSize, PULONG64 Displacement);
	STDMETHOD(GetOffsetByLine) (THIS_ ULONG Line, PCSTR File, PULONG64 Offset);
	STDMETHOD(GetNumberModules) (THIS_ PULONG Loaded, PULONG Unloaded);
	STDMETHOD(GetModuleByIndex) (THIS_ ULONG Index, PULONG64 Base);
	STDMETHOD(GetModuleByModuleName) (THIS_ PCSTR Name, ULONG StartIndex, PULONG Index, PULONG64 Base);
	STDMETHOD(GetModuleByOffset) (THIS_ ULONG64 Offset, ULONG StartIndex, PULONG Index, PULONG64 Base);
	STDMETHOD(GetModuleNames) (THIS_ ULONG Index, ULONG64 Base, PSTR ImageNameBuffer, ULONG ImageNameBufferSize, PULONG ImageNameSize, PSTR ModuleNameBuffer, ULONG ModuleNameBufferSize, PULONG ModuleNameSize, PSTR LoadedImageNameBuffer, ULONG LoadedImageNameBufferSize, PULONG LoadedImageNameSize);
	STDMETHOD(GetModuleParameters) (THIS_ ULONG Count, PULONG64 Bases, ULONG Start, PDEBUG_MODULE_PARAMETERS Params);
	STDMETHOD(GetSymbolModule) (THIS_ PCSTR Symbol, PULONG64 Base);
	STDMETHOD(GetTypeName) (THIS_ ULONG64 Module, ULONG TypeId, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize);
	STDMETHOD(GetTypeId) (THIS_ ULONG64 Module, PCSTR Name, PULONG TypeId);
	STDMETHOD(GetTypeSize) (THIS_ ULONG64 Module, ULONG TypeId, PULONG Size);
	STDMETHOD(GetFieldOffset) (THIS_ ULONG64 Module, ULONG TypeId, PCSTR Field, PULONG Offset);
	STDMETHOD(GetSymbolTypeId) (THIS_ PCSTR Symbol, PULONG TypeId, PULONG64 Module);
	STDMETHOD(GetOffsetTypeId) (THIS_ ULONG64 Offset, PULONG TypeId, PULONG64 Module);
	STDMETHOD(ReadTypedDataVirtual) (THIS_ ULONG64 Offset, ULONG64 Module, ULONG TypeId, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteTypedDataVirtual) (THIS_ ULONG64 Offset, ULONG64 Module, ULONG TypeId, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(OutputTypedDataVirtual) (THIS_ ULONG OutputControl, ULONG64 Offset, ULONG64 Module, ULONG TypeId, ULONG Flags);
	STDMETHOD(ReadTypedDataPhysical) (THIS_ ULONG64 Offset, ULONG64 Module, ULONG TypeId, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteTypedDataPhysical) (THIS_ ULONG64 Offset, ULONG64 Module, ULONG TypeId, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(OutputTypedDataPhysical) (THIS_ ULONG OutputControl, ULONG64 Offset, ULONG64 Module, ULONG TypeId, ULONG Flags);
	STDMETHOD(GetScope) (THIS_ PULONG64 InstructionOffset, PDEBUG_STACK_FRAME ScopeFrame, PVOID ScopeContext, ULONG ScopeContextSize);
	STDMETHOD(SetScope) (THIS_ ULONG64 InstructionOffset, PDEBUG_STACK_FRAME ScopeFrame, PVOID ScopeContext, ULONG ScopeContextSize);
	STDMETHOD(ResetScope) (THIS);
	STDMETHOD(GetScopeSymbolGroup) (THIS_ ULONG Flags, PDEBUG_SYMBOL_GROUP Update, PDEBUG_SYMBOL_GROUP * Symbols);
	STDMETHOD(CreateSymbolGroup) (THIS_ PDEBUG_SYMBOL_GROUP * Group);
	STDMETHOD(StartSymbolMatch) (THIS_ PCSTR Pattern, PULONG64 Handle);
	STDMETHOD(GetNextSymbolMatch) (THIS_ ULONG64 Handle, PSTR Buffer, ULONG BufferSize, PULONG MatchSize, PULONG64 Offset);
	STDMETHOD(EndSymbolMatch) (THIS_ ULONG64 Handle);
	STDMETHOD(Reload) (THIS_ PCSTR Module);
	STDMETHOD(GetSymbolPath) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PathSize);
	STDMETHOD(SetSymbolPath) (THIS_ PCSTR Path);
	STDMETHOD(AppendSymbolPath) (THIS_ PCSTR Addition);
	STDMETHOD(GetImagePath) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PathSize);
	STDMETHOD(SetImagePath) (THIS_ PCSTR Path);
	STDMETHOD(AppendImagePath) (THIS_ PCSTR Addition);
	STDMETHOD(GetSourcePath) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PathSize);
	STDMETHOD(GetSourcePathElement) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG ElementSize);
	STDMETHOD(SetSourcePath) (THIS_ PCSTR Path);
	STDMETHOD(AppendSourcePath) (THIS_ PCSTR Addition);
	STDMETHOD(FindSourceFile) (THIS_ ULONG StartElement, PCSTR File, ULONG Flags, PULONG FoundElement, PSTR Buffer, ULONG BufferSize, PULONG FoundSize);
	STDMETHOD(GetSourceFileLineOffsets) (THIS_ PCSTR File, PULONG64 Buffer, ULONG BufferLines, PULONG FileLines);
};
#define DEBUG_MODNAME_IMAGE        0x00000000
#define DEBUG_MODNAME_MODULE       0x00000001
#define DEBUG_MODNAME_LOADED_IMAGE 0x00000002
#define DEBUG_MODNAME_SYMBOL_FILE  0x00000003
#define DEBUG_MODNAME_MAPPED_IMAGE 0x00000004
#define DEBUG_TYPEOPTS_UNICODE_DISPLAY    0x00000001
#define DEBUG_TYPEOPTS_LONGSTATUS_DISPLAY 0x00000002
#define DEBUG_TYPEOPTS_FORCERADIX_OUTPUT  0x00000004
#define DEBUG_TYPEOPTS_MATCH_MAXSIZE      0x00000008
#undef INTERFACE
#define INTERFACE IDebugSymbols2
DECLARE_INTERFACE_(IDebugSymbols2, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetSymbolOptions) (THIS_ PULONG Options);
	STDMETHOD(AddSymbolOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveSymbolOptions) (THIS_ ULONG Options);
	STDMETHOD(SetSymbolOptions) (THIS_ ULONG Options);
	STDMETHOD(GetNameByOffset) (THIS_ ULONG64 Offset, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize, PULONG64 Displacement);
	STDMETHOD(GetOffsetByName) (THIS_ PCSTR Symbol, PULONG64 Offset);
	STDMETHOD(GetNearNameByOffset) (THIS_ ULONG64 Offset, LONG Delta, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize, PULONG64 Displacement);
	STDMETHOD(GetLineByOffset) (THIS_ ULONG64 Offset, PULONG Line, PSTR FileBuffer, ULONG FileBufferSize, PULONG FileSize, PULONG64 Displacement);
	STDMETHOD(GetOffsetByLine) (THIS_ ULONG Line, PCSTR File, PULONG64 Offset);
	STDMETHOD(GetNumberModules) (THIS_ PULONG Loaded, PULONG Unloaded);
	STDMETHOD(GetModuleByIndex) (THIS_ ULONG Index, PULONG64 Base);
	STDMETHOD(GetModuleByModuleName) (THIS_ PCSTR Name, ULONG StartIndex, PULONG Index, PULONG64 Base);
	STDMETHOD(GetModuleByOffset) (THIS_ ULONG64 Offset, ULONG StartIndex, PULONG Index, PULONG64 Base);
	STDMETHOD(GetModuleNames) (THIS_ ULONG Index, ULONG64 Base, PSTR ImageNameBuffer, ULONG ImageNameBufferSize, PULONG ImageNameSize, PSTR ModuleNameBuffer, ULONG ModuleNameBufferSize, PULONG ModuleNameSize, PSTR LoadedImageNameBuffer, ULONG LoadedImageNameBufferSize, PULONG LoadedImageNameSize);
	STDMETHOD(GetModuleParameters) (THIS_ ULONG Count, PULONG64 Bases, ULONG Start, PDEBUG_MODULE_PARAMETERS Params);
	STDMETHOD(GetSymbolModule) (THIS_ PCSTR Symbol, PULONG64 Base);
	STDMETHOD(GetTypeName) (THIS_ ULONG64 Module, ULONG TypeId, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize);
	STDMETHOD(GetTypeId) (THIS_ ULONG64 Module, PCSTR Name, PULONG TypeId);
	STDMETHOD(GetTypeSize) (THIS_ ULONG64 Module, ULONG TypeId, PULONG Size);
	STDMETHOD(GetFieldOffset) (THIS_ ULONG64 Module, ULONG TypeId, PCSTR Field, PULONG Offset);
	STDMETHOD(GetSymbolTypeId) (THIS_ PCSTR Symbol, PULONG TypeId, PULONG64 Module);
	STDMETHOD(GetOffsetTypeId) (THIS_ ULONG64 Offset, PULONG TypeId, PULONG64 Module);
	STDMETHOD(ReadTypedDataVirtual) (THIS_ ULONG64 Offset, ULONG64 Module, ULONG TypeId, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteTypedDataVirtual) (THIS_ ULONG64 Offset, ULONG64 Module, ULONG TypeId, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(OutputTypedDataVirtual) (THIS_ ULONG OutputControl, ULONG64 Offset, ULONG64 Module, ULONG TypeId, ULONG Flags);
	STDMETHOD(ReadTypedDataPhysical) (THIS_ ULONG64 Offset, ULONG64 Module, ULONG TypeId, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteTypedDataPhysical) (THIS_ ULONG64 Offset, ULONG64 Module, ULONG TypeId, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(OutputTypedDataPhysical) (THIS_ ULONG OutputControl, ULONG64 Offset, ULONG64 Module, ULONG TypeId, ULONG Flags);
	STDMETHOD(GetScope) (THIS_ PULONG64 InstructionOffset, PDEBUG_STACK_FRAME ScopeFrame, PVOID ScopeContext, ULONG ScopeContextSize);
	STDMETHOD(SetScope) (THIS_ ULONG64 InstructionOffset, PDEBUG_STACK_FRAME ScopeFrame, PVOID ScopeContext, ULONG ScopeContextSize);
	STDMETHOD(ResetScope) (THIS);
	STDMETHOD(GetScopeSymbolGroup) (THIS_ ULONG Flags, PDEBUG_SYMBOL_GROUP Update, PDEBUG_SYMBOL_GROUP * Symbols);
	STDMETHOD(CreateSymbolGroup) (THIS_ PDEBUG_SYMBOL_GROUP * Group);
	STDMETHOD(StartSymbolMatch) (THIS_ PCSTR Pattern, PULONG64 Handle);
	STDMETHOD(GetNextSymbolMatch) (THIS_ ULONG64 Handle, PSTR Buffer, ULONG BufferSize, PULONG MatchSize, PULONG64 Offset);
	STDMETHOD(EndSymbolMatch) (THIS_ ULONG64 Handle);
	STDMETHOD(Reload) (THIS_ PCSTR Module);
	STDMETHOD(GetSymbolPath) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PathSize);
	STDMETHOD(SetSymbolPath) (THIS_ PCSTR Path);
	STDMETHOD(AppendSymbolPath) (THIS_ PCSTR Addition);
	STDMETHOD(GetImagePath) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PathSize);
	STDMETHOD(SetImagePath) (THIS_ PCSTR Path);
	STDMETHOD(AppendImagePath) (THIS_ PCSTR Addition);
	STDMETHOD(GetSourcePath) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PathSize);
	STDMETHOD(GetSourcePathElement) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG ElementSize);
	STDMETHOD(SetSourcePath) (THIS_ PCSTR Path);
	STDMETHOD(AppendSourcePath) (THIS_ PCSTR Addition);
	STDMETHOD(FindSourceFile) (THIS_ ULONG StartElement, PCSTR File, ULONG Flags, PULONG FoundElement, PSTR Buffer, ULONG BufferSize, PULONG FoundSize);
	STDMETHOD(GetSourceFileLineOffsets) (THIS_ PCSTR File, PULONG64 Buffer, ULONG BufferLines, PULONG FileLines);
	STDMETHOD(GetModuleVersionInformation) (THIS_ ULONG Index, ULONG64 Base, PCSTR Item, PVOID Buffer, ULONG BufferSize, PULONG VerInfoSize);
	STDMETHOD(GetModuleNameString) (THIS_ ULONG Which, ULONG Index, ULONG64 Base, PSTR Buffer, ULONG BufferSize, PULONG NameSize);
	STDMETHOD(GetConstantName) (THIS_ ULONG64 Module, ULONG TypeId, ULONG64 Value, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize);
	STDMETHOD(GetFieldName) (THIS_ ULONG64 Module, ULONG TypeId, ULONG FieldIndex, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize);
	STDMETHOD(GetTypeOptions) (THIS_ PULONG Options);
	STDMETHOD(AddTypeOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveTypeOptions) (THIS_ ULONG Options);
	STDMETHOD(SetTypeOptions) (THIS_ ULONG Options);
};
#define DEBUG_GETMOD_DEFAULT             0x00000000
#define DEBUG_GETMOD_NO_LOADED_MODULES   0x00000001
#define DEBUG_GETMOD_NO_UNLOADED_MODULES 0x00000002
#define DEBUG_ADDSYNTHMOD_DEFAULT 0x00000000
#define DEBUG_ADDSYNTHSYM_DEFAULT 0x00000000
#define DEBUG_OUTSYM_DEFAULT            0x00000000
#define DEBUG_OUTSYM_FORCE_OFFSET       0x00000001
#define DEBUG_OUTSYM_SOURCE_LINE        0x00000002
#define DEBUG_OUTSYM_ALLOW_DISPLACEMENT 0x00000004
#define DEBUG_GETFNENT_DEFAULT        0x00000000
#define DEBUG_GETFNENT_RAW_ENTRY_ONLY 0x00000001
typedef struct _DEBUG_MODULE_AND_ID
{
    ULONG64 ModuleBase;
    ULONG64 Id;
} DEBUG_MODULE_AND_ID, *PDEBUG_MODULE_AND_ID;
#define DEBUG_SOURCE_IS_STATEMENT 0x00000001
#define DEBUG_GSEL_DEFAULT         0x00000000
#define DEBUG_GSEL_NO_SYMBOL_LOADS 0x00000001
#define DEBUG_GSEL_ALLOW_LOWER     0x00000002
#define DEBUG_GSEL_ALLOW_HIGHER    0x00000004
#define DEBUG_GSEL_NEAREST_ONLY    0x00000008
typedef struct _DEBUG_SYMBOL_SOURCE_ENTRY
{
    ULONG64 ModuleBase;
    ULONG64 Offset;
    ULONG64 FileNameId;
    ULONG64 EngineInternal;
    ULONG Size;
    ULONG Flags;
    ULONG FileNameSize;
    ULONG StartLine;
    ULONG EndLine;
    ULONG StartColumn;
    ULONG EndColumn;
    ULONG Reserved;
} DEBUG_SYMBOL_SOURCE_ENTRY, *PDEBUG_SYMBOL_SOURCE_ENTRY;
#undef INTERFACE
#define INTERFACE IDebugSymbols3
DECLARE_INTERFACE_(IDebugSymbols3, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetSymbolOptions) (THIS_ PULONG Options);
	STDMETHOD(AddSymbolOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveSymbolOptions) (THIS_ ULONG Options);
	STDMETHOD(SetSymbolOptions) (THIS_ ULONG Options);
	STDMETHOD(GetNameByOffset) (THIS_ ULONG64 Offset, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize, PULONG64 Displacement);
	STDMETHOD(GetOffsetByName) (THIS_ PCSTR Symbol, PULONG64 Offset);
	STDMETHOD(GetNearNameByOffset) (THIS_ ULONG64 Offset, LONG Delta, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize, PULONG64 Displacement);
	STDMETHOD(GetLineByOffset) (THIS_ ULONG64 Offset, PULONG Line, PSTR FileBuffer, ULONG FileBufferSize, PULONG FileSize, PULONG64 Displacement);
	STDMETHOD(GetOffsetByLine) (THIS_ ULONG Line, PCSTR File, PULONG64 Offset);
	STDMETHOD(GetNumberModules) (THIS_ PULONG Loaded, PULONG Unloaded);
	STDMETHOD(GetModuleByIndex) (THIS_ ULONG Index, PULONG64 Base);
	STDMETHOD(GetModuleByModuleName) (THIS_ PCSTR Name, ULONG StartIndex, PULONG Index, PULONG64 Base);
	STDMETHOD(GetModuleByOffset) (THIS_ ULONG64 Offset, ULONG StartIndex, PULONG Index, PULONG64 Base);
	STDMETHOD(GetModuleNames) (THIS_ ULONG Index, ULONG64 Base, PSTR ImageNameBuffer, ULONG ImageNameBufferSize, PULONG ImageNameSize, PSTR ModuleNameBuffer, ULONG ModuleNameBufferSize, PULONG ModuleNameSize, PSTR LoadedImageNameBuffer, ULONG LoadedImageNameBufferSize, PULONG LoadedImageNameSize);
	STDMETHOD(GetModuleParameters) (THIS_ ULONG Count, PULONG64 Bases, ULONG Start, PDEBUG_MODULE_PARAMETERS Params);
	STDMETHOD(GetSymbolModule) (THIS_ PCSTR Symbol, PULONG64 Base);
	STDMETHOD(GetTypeName) (THIS_ ULONG64 Module, ULONG TypeId, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize);
	STDMETHOD(GetTypeId) (THIS_ ULONG64 Module, PCSTR Name, PULONG TypeId);
	STDMETHOD(GetTypeSize) (THIS_ ULONG64 Module, ULONG TypeId, PULONG Size);
	STDMETHOD(GetFieldOffset) (THIS_ ULONG64 Module, ULONG TypeId, PCSTR Field, PULONG Offset);
	STDMETHOD(GetSymbolTypeId) (THIS_ PCSTR Symbol, PULONG TypeId, PULONG64 Module);
	STDMETHOD(GetOffsetTypeId) (THIS_ ULONG64 Offset, PULONG TypeId, PULONG64 Module);
	STDMETHOD(ReadTypedDataVirtual) (THIS_ ULONG64 Offset, ULONG64 Module, ULONG TypeId, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteTypedDataVirtual) (THIS_ ULONG64 Offset, ULONG64 Module, ULONG TypeId, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(OutputTypedDataVirtual) (THIS_ ULONG OutputControl, ULONG64 Offset, ULONG64 Module, ULONG TypeId, ULONG Flags);
	STDMETHOD(ReadTypedDataPhysical) (THIS_ ULONG64 Offset, ULONG64 Module, ULONG TypeId, PVOID Buffer, ULONG BufferSize, PULONG BytesRead);
	STDMETHOD(WriteTypedDataPhysical) (THIS_ ULONG64 Offset, ULONG64 Module, ULONG TypeId, PVOID Buffer, ULONG BufferSize, PULONG BytesWritten);
	STDMETHOD(OutputTypedDataPhysical) (THIS_ ULONG OutputControl, ULONG64 Offset, ULONG64 Module, ULONG TypeId, ULONG Flags);
	STDMETHOD(GetScope) (THIS_ PULONG64 InstructionOffset, PDEBUG_STACK_FRAME ScopeFrame, PVOID ScopeContext, ULONG ScopeContextSize);
	STDMETHOD(SetScope) (THIS_ ULONG64 InstructionOffset, PDEBUG_STACK_FRAME ScopeFrame, PVOID ScopeContext, ULONG ScopeContextSize);
	STDMETHOD(ResetScope) (THIS);
	STDMETHOD(GetScopeSymbolGroup) (THIS_ ULONG Flags, PDEBUG_SYMBOL_GROUP Update, PDEBUG_SYMBOL_GROUP * Symbols);
	STDMETHOD(CreateSymbolGroup) (THIS_ PDEBUG_SYMBOL_GROUP * Group);
	STDMETHOD(StartSymbolMatch) (THIS_ PCSTR Pattern, PULONG64 Handle);
	STDMETHOD(GetNextSymbolMatch) (THIS_ ULONG64 Handle, PSTR Buffer, ULONG BufferSize, PULONG MatchSize, PULONG64 Offset);
	STDMETHOD(EndSymbolMatch) (THIS_ ULONG64 Handle);
	STDMETHOD(Reload) (THIS_ PCSTR Module);
	STDMETHOD(GetSymbolPath) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PathSize);
	STDMETHOD(SetSymbolPath) (THIS_ PCSTR Path);
	STDMETHOD(AppendSymbolPath) (THIS_ PCSTR Addition);
	STDMETHOD(GetImagePath) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PathSize);
	STDMETHOD(SetImagePath) (THIS_ PCSTR Path);
	STDMETHOD(AppendImagePath) (THIS_ PCSTR Addition);
	STDMETHOD(GetSourcePath) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG PathSize);
	STDMETHOD(GetSourcePathElement) (THIS_ ULONG Index, PSTR Buffer, ULONG BufferSize, PULONG ElementSize);
	STDMETHOD(SetSourcePath) (THIS_ PCSTR Path);
	STDMETHOD(AppendSourcePath) (THIS_ PCSTR Addition);
	STDMETHOD(FindSourceFile) (THIS_ ULONG StartElement, PCSTR File, ULONG Flags, PULONG FoundElement, PSTR Buffer, ULONG BufferSize, PULONG FoundSize);
	STDMETHOD(GetSourceFileLineOffsets) (THIS_ PCSTR File, PULONG64 Buffer, ULONG BufferLines, PULONG FileLines);
	STDMETHOD(GetModuleVersionInformation) (THIS_ ULONG Index, ULONG64 Base, PCSTR Item, PVOID Buffer, ULONG BufferSize, PULONG VerInfoSize);
	STDMETHOD(GetModuleNameString) (THIS_ ULONG Which, ULONG Index, ULONG64 Base, PSTR Buffer, ULONG BufferSize, PULONG NameSize);
	STDMETHOD(GetConstantName) (THIS_ ULONG64 Module, ULONG TypeId, ULONG64 Value, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize);
	STDMETHOD(GetFieldName) (THIS_ ULONG64 Module, ULONG TypeId, ULONG FieldIndex, PSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize);
	STDMETHOD(GetTypeOptions) (THIS_ PULONG Options);
	STDMETHOD(AddTypeOptions) (THIS_ ULONG Options);
	STDMETHOD(RemoveTypeOptions) (THIS_ ULONG Options);
	STDMETHOD(SetTypeOptions) (THIS_ ULONG Options);
	STDMETHOD(GetNameByOffsetWide) (THIS_ ULONG64 Offset, PWSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize, PULONG64 Displacement);
	STDMETHOD(GetOffsetByNameWide) (THIS_ PCWSTR Symbol, PULONG64 Offset);
	STDMETHOD(GetNearNameByOffsetWide) (THIS_ ULONG64 Offset, LONG Delta, PWSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize, PULONG64 Displacement);
	STDMETHOD(GetLineByOffsetWide) (THIS_ ULONG64 Offset, PULONG Line, PWSTR FileBuffer, ULONG FileBufferSize, PULONG FileSize, PULONG64 Displacement);
	STDMETHOD(GetOffsetByLineWide) (THIS_ ULONG Line, PCWSTR File, PULONG64 Offset);
	STDMETHOD(GetModuleByModuleNameWide) (THIS_ PCWSTR Name, ULONG StartIndex, PULONG Index, PULONG64 Base);
	STDMETHOD(GetSymbolModuleWide) (THIS_ PCWSTR Symbol, PULONG64 Base);
	STDMETHOD(GetTypeNameWide) (THIS_ ULONG64 Module, ULONG TypeId, PWSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize);
	STDMETHOD(GetTypeIdWide) (THIS_ ULONG64 Module, PCWSTR Name, PULONG TypeId);
	STDMETHOD(GetFieldOffsetWide) (THIS_ ULONG64 Module, ULONG TypeId, PCWSTR Field, PULONG Offset);
	STDMETHOD(GetSymbolTypeIdWide) (THIS_ PCWSTR Symbol, PULONG TypeId, PULONG64 Module);
	STDMETHOD(GetScopeSymbolGroup2) (THIS_ ULONG Flags, PDEBUG_SYMBOL_GROUP2 Update, PDEBUG_SYMBOL_GROUP2 * Symbols);
	STDMETHOD(CreateSymbolGroup2) (THIS_ PDEBUG_SYMBOL_GROUP2 * Group);
	STDMETHOD(StartSymbolMatchWide) (THIS_ PCWSTR Pattern, PULONG64 Handle);
	STDMETHOD(GetNextSymbolMatchWide) (THIS_ ULONG64 Handle, PWSTR Buffer, ULONG BufferSize, PULONG MatchSize, PULONG64 Offset);
	STDMETHOD(ReloadWide) (THIS_ PCWSTR Module);
	STDMETHOD(GetSymbolPathWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG PathSize);
	STDMETHOD(SetSymbolPathWide) (THIS_ PCWSTR Path);
	STDMETHOD(AppendSymbolPathWide) (THIS_ PCWSTR Addition);
	STDMETHOD(GetImagePathWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG PathSize);
	STDMETHOD(SetImagePathWide) (THIS_ PCWSTR Path);
	STDMETHOD(AppendImagePathWide) (THIS_ PCWSTR Addition);
	STDMETHOD(GetSourcePathWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG PathSize);
	STDMETHOD(GetSourcePathElementWide) (THIS_ ULONG Index, PWSTR Buffer, ULONG BufferSize, PULONG ElementSize);
	STDMETHOD(SetSourcePathWide) (THIS_ PCWSTR Path);
	STDMETHOD(AppendSourcePathWide) (THIS_ PCWSTR Addition);
	STDMETHOD(FindSourceFileWide) (THIS_ ULONG StartElement, PCWSTR File, ULONG Flags, PULONG FoundElement, PWSTR Buffer, ULONG BufferSize, PULONG FoundSize);
	STDMETHOD(GetSourceFileLineOffsetsWide) (THIS_ PCWSTR File, PULONG64 Buffer, ULONG BufferLines, PULONG FileLines);
	STDMETHOD(GetModuleVersionInformationWide) (THIS_ ULONG Index, ULONG64 Base, PCWSTR Item, PVOID Buffer, ULONG BufferSize, PULONG VerInfoSize);
	STDMETHOD(GetModuleNameStringWide) (THIS_ ULONG Which, ULONG Index, ULONG64 Base, PWSTR Buffer, ULONG BufferSize, PULONG NameSize);
	STDMETHOD(GetConstantNameWide) (THIS_ ULONG64 Module, ULONG TypeId, ULONG64 Value, PWSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize);
	STDMETHOD(GetFieldNameWide) (THIS_ ULONG64 Module, ULONG TypeId, ULONG FieldIndex, PWSTR NameBuffer, ULONG NameBufferSize, PULONG NameSize);
	STDMETHOD(IsManagedModule) (THIS_ ULONG Index, ULONG64 Base);
	STDMETHOD(GetModuleByModuleName2) (THIS_ PCSTR Name, ULONG StartIndex, ULONG Flags, PULONG Index, PULONG64 Base);
	STDMETHOD(GetModuleByModuleName2Wide) (THIS_ PCWSTR Name, ULONG StartIndex, ULONG Flags, PULONG Index, PULONG64 Base);
	STDMETHOD(GetModuleByOffset2) (THIS_ ULONG64 Offset, ULONG StartIndex, ULONG Flags, PULONG Index, PULONG64 Base);
	STDMETHOD(AddSyntheticModule) (THIS_ ULONG64 Base, ULONG Size, PCSTR ImagePath, PCSTR ModuleName, ULONG Flags);
	STDMETHOD(AddSyntheticModuleWide) (THIS_ ULONG64 Base, ULONG Size, PCWSTR ImagePath, PCWSTR ModuleName, ULONG Flags);
	STDMETHOD(RemoveSyntheticModule) (THIS_ ULONG64 Base);
	STDMETHOD(GetCurrentScopeFrameIndex) (THIS_ PULONG Index);
	STDMETHOD(SetScopeFrameByIndex) (THIS_ ULONG Index);
	STDMETHOD(SetScopeFromJitDebugInfo) (THIS_ ULONG OutputControl, ULONG64 InfoOffset);
	STDMETHOD(SetScopeFromStoredEvent) (THIS);
	STDMETHOD(OutputSymbolByOffset) (THIS_ ULONG OutputControl, ULONG Flags, ULONG64 Offset);
	STDMETHOD(GetFunctionEntryByOffset) (THIS_ ULONG64 Offset, ULONG Flags, PVOID Buffer, ULONG BufferSize, PULONG BufferNeeded);
	STDMETHOD(GetFieldTypeAndOffset) (THIS_ ULONG64 Module, ULONG ContainerTypeId, PCSTR Field, PULONG FieldTypeId, PULONG Offset);
	STDMETHOD(GetFieldTypeAndOffsetWide) (THIS_ ULONG64 Module, ULONG ContainerTypeId, PCWSTR Field, PULONG FieldTypeId, PULONG Offset);
	STDMETHOD(AddSyntheticSymbol) (THIS_ ULONG64 Offset, ULONG Size, PCSTR Name, ULONG Flags, PDEBUG_MODULE_AND_ID Id);
	STDMETHOD(AddSyntheticSymbolWide) (THIS_ ULONG64 Offset, ULONG Size, PCWSTR Name, ULONG Flags, PDEBUG_MODULE_AND_ID Id);
	STDMETHOD(RemoveSyntheticSymbol) (THIS_ PDEBUG_MODULE_AND_ID Id);
	STDMETHOD(GetSymbolEntriesByOffset) (THIS_ ULONG64 Offset, ULONG Flags, PDEBUG_MODULE_AND_ID Ids, PULONG64 Displacements, ULONG IdsCount, PULONG Entries);
	STDMETHOD(GetSymbolEntriesByName) (THIS_ PCSTR Symbol, ULONG Flags, PDEBUG_MODULE_AND_ID Ids, ULONG IdsCount, PULONG Entries);
	STDMETHOD(GetSymbolEntriesByNameWide) (THIS_ PCWSTR Symbol, ULONG Flags, PDEBUG_MODULE_AND_ID Ids, ULONG IdsCount, PULONG Entries);
	STDMETHOD(GetSymbolEntryByToken) (THIS_ ULONG64 ModuleBase, ULONG Token, PDEBUG_MODULE_AND_ID Id);
	STDMETHOD(GetSymbolEntryInformation) (THIS_ PDEBUG_MODULE_AND_ID Id, PDEBUG_SYMBOL_ENTRY Info);
	STDMETHOD(GetSymbolEntryString) (THIS_ PDEBUG_MODULE_AND_ID Id, ULONG Which, PSTR Buffer, ULONG BufferSize, PULONG StringSize);
	STDMETHOD(GetSymbolEntryStringWide) (THIS_ PDEBUG_MODULE_AND_ID Id, ULONG Which, PWSTR Buffer, ULONG BufferSize, PULONG StringSize);
	STDMETHOD(GetSymbolEntryOffsetRegions) (THIS_ PDEBUG_MODULE_AND_ID Id, ULONG Flags, PDEBUG_OFFSET_REGION Regions, ULONG RegionsCount, PULONG RegionsAvail);
	STDMETHOD(GetSymbolEntryBySymbolEntry) (THIS_ PDEBUG_MODULE_AND_ID FromId, ULONG Flags, PDEBUG_MODULE_AND_ID ToId);
	STDMETHOD(GetSourceEntriesByOffset) (THIS_ ULONG64 Offset, ULONG Flags, PDEBUG_SYMBOL_SOURCE_ENTRY Entries, ULONG EntriesCount, PULONG EntriesAvail);
	STDMETHOD(GetSourceEntriesByLine) (THIS_ ULONG Line, PCSTR File, ULONG Flags, PDEBUG_SYMBOL_SOURCE_ENTRY Entries, ULONG EntriesCount, PULONG EntriesAvail);
	STDMETHOD(GetSourceEntriesByLineWide) (THIS_ ULONG Line, PCWSTR File, ULONG Flags, PDEBUG_SYMBOL_SOURCE_ENTRY Entries, ULONG EntriesCount, PULONG EntriesAvail);
	STDMETHOD(GetSourceEntryString) (THIS_ PDEBUG_SYMBOL_SOURCE_ENTRY Entry, ULONG Which, PSTR Buffer, ULONG BufferSize, PULONG StringSize);
	STDMETHOD(GetSourceEntryStringWide) (THIS_ PDEBUG_SYMBOL_SOURCE_ENTRY Entry, ULONG Which, PWSTR Buffer, ULONG BufferSize, PULONG StringSize);
	STDMETHOD(GetSourceEntryOffsetRegions) (THIS_ PDEBUG_SYMBOL_SOURCE_ENTRY Entry, ULONG Flags, PDEBUG_OFFSET_REGION Regions, ULONG RegionsCount, PULONG RegionsAvail);
	STDMETHOD(GetSourceEntryBySourceEntry) (THIS_ PDEBUG_SYMBOL_SOURCE_ENTRY FromEntry, ULONG Flags, PDEBUG_SYMBOL_SOURCE_ENTRY ToEntry);
};
#undef INTERFACE
#define INTERFACE IDebugSystemObjects
DECLARE_INTERFACE_(IDebugSystemObjects, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetEventThread) (THIS_ PULONG Id);
	STDMETHOD(GetEventProcess) (THIS_ PULONG Id);
	STDMETHOD(GetCurrentThreadId) (THIS_ PULONG Id);
	STDMETHOD(SetCurrentThreadId) (THIS_ ULONG Id);
	STDMETHOD(GetCurrentProcessId) (THIS_ PULONG Id);
	STDMETHOD(SetCurrentProcessId) (THIS_ ULONG Id);
	STDMETHOD(GetNumberThreads) (THIS_ PULONG Number);
	STDMETHOD(GetTotalNumberThreads) (THIS_ PULONG Total, PULONG LargestProcess);
	STDMETHOD(GetThreadIdsByIndex) (THIS_ ULONG Start, ULONG Count, PULONG Ids, PULONG SysIds);
	STDMETHOD(GetThreadIdByProcessor) (THIS_ ULONG Processor, PULONG Id);
	STDMETHOD(GetCurrentThreadDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(GetThreadIdByDataOffset) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentThreadTeb) (THIS_ PULONG64 Offset);
	STDMETHOD(GetThreadIdByTeb) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentThreadSystemId) (THIS_ PULONG SysId);
	STDMETHOD(GetThreadIdBySystemId) (THIS_ ULONG SysId, PULONG Id);
	STDMETHOD(GetCurrentThreadHandle) (THIS_ PULONG64 Handle);
	STDMETHOD(GetThreadIdByHandle) (THIS_ ULONG64 Handle, PULONG Id);
	STDMETHOD(GetNumberProcesses) (THIS_ PULONG Number);
	STDMETHOD(GetProcessIdsByIndex) (THIS_ ULONG Start, ULONG Count, PULONG Ids, PULONG SysIds);
	STDMETHOD(GetCurrentProcessDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(GetProcessIdByDataOffset) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentProcessPeb) (THIS_ PULONG64 Offset);
	STDMETHOD(GetProcessIdByPeb) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentProcessSystemId) (THIS_ PULONG SysId);
	STDMETHOD(GetProcessIdBySystemId) (THIS_ ULONG SysId, PULONG Id);
	STDMETHOD(GetCurrentProcessHandle) (THIS_ PULONG64 Handle);
	STDMETHOD(GetProcessIdByHandle) (THIS_ ULONG64 Handle, PULONG Id);
	STDMETHOD(GetCurrentProcessExecutableName) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG ExeSize);
};
#undef INTERFACE
#define INTERFACE IDebugSystemObjects2
DECLARE_INTERFACE_(IDebugSystemObjects2, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetEventThread) (THIS_ PULONG Id);
	STDMETHOD(GetEventProcess) (THIS_ PULONG Id);
	STDMETHOD(GetCurrentThreadId) (THIS_ PULONG Id);
	STDMETHOD(SetCurrentThreadId) (THIS_ ULONG Id);
	STDMETHOD(GetCurrentProcessId) (THIS_ PULONG Id);
	STDMETHOD(SetCurrentProcessId) (THIS_ ULONG Id);
	STDMETHOD(GetNumberThreads) (THIS_ PULONG Number);
	STDMETHOD(GetTotalNumberThreads) (THIS_ PULONG Total, PULONG LargestProcess);
	STDMETHOD(GetThreadIdsByIndex) (THIS_ ULONG Start, ULONG Count, PULONG Ids, PULONG SysIds);
	STDMETHOD(GetThreadIdByProcessor) (THIS_ ULONG Processor, PULONG Id);
	STDMETHOD(GetCurrentThreadDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(GetThreadIdByDataOffset) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentThreadTeb) (THIS_ PULONG64 Offset);
	STDMETHOD(GetThreadIdByTeb) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentThreadSystemId) (THIS_ PULONG SysId);
	STDMETHOD(GetThreadIdBySystemId) (THIS_ ULONG SysId, PULONG Id);
	STDMETHOD(GetCurrentThreadHandle) (THIS_ PULONG64 Handle);
	STDMETHOD(GetThreadIdByHandle) (THIS_ ULONG64 Handle, PULONG Id);
	STDMETHOD(GetNumberProcesses) (THIS_ PULONG Number);
	STDMETHOD(GetProcessIdsByIndex) (THIS_ ULONG Start, ULONG Count, PULONG Ids, PULONG SysIds);
	STDMETHOD(GetCurrentProcessDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(GetProcessIdByDataOffset) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentProcessPeb) (THIS_ PULONG64 Offset);
	STDMETHOD(GetProcessIdByPeb) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentProcessSystemId) (THIS_ PULONG SysId);
	STDMETHOD(GetProcessIdBySystemId) (THIS_ ULONG SysId, PULONG Id);
	STDMETHOD(GetCurrentProcessHandle) (THIS_ PULONG64 Handle);
	STDMETHOD(GetProcessIdByHandle) (THIS_ ULONG64 Handle, PULONG Id);
	STDMETHOD(GetCurrentProcessExecutableName) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG ExeSize);
	STDMETHOD(GetCurrentProcessUpTime) (THIS_ PULONG UpTime);
	STDMETHOD(GetImplicitThreadDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(SetImplicitThreadDataOffset) (THIS_ ULONG64 Offset);
	STDMETHOD(GetImplicitProcessDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(SetImplicitProcessDataOffset) (THIS_ ULONG64 Offset);
};
#undef INTERFACE
#define INTERFACE IDebugSystemObjects3
DECLARE_INTERFACE_(IDebugSystemObjects3, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetEventThread) (THIS_ PULONG Id);
	STDMETHOD(GetEventProcess) (THIS_ PULONG Id);
	STDMETHOD(GetCurrentThreadId) (THIS_ PULONG Id);
	STDMETHOD(SetCurrentThreadId) (THIS_ ULONG Id);
	STDMETHOD(GetCurrentProcessId) (THIS_ PULONG Id);
	STDMETHOD(SetCurrentProcessId) (THIS_ ULONG Id);
	STDMETHOD(GetNumberThreads) (THIS_ PULONG Number);
	STDMETHOD(GetTotalNumberThreads) (THIS_ PULONG Total, PULONG LargestProcess);
	STDMETHOD(GetThreadIdsByIndex) (THIS_ ULONG Start, ULONG Count, PULONG Ids, PULONG SysIds);
	STDMETHOD(GetThreadIdByProcessor) (THIS_ ULONG Processor, PULONG Id);
	STDMETHOD(GetCurrentThreadDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(GetThreadIdByDataOffset) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentThreadTeb) (THIS_ PULONG64 Offset);
	STDMETHOD(GetThreadIdByTeb) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentThreadSystemId) (THIS_ PULONG SysId);
	STDMETHOD(GetThreadIdBySystemId) (THIS_ ULONG SysId, PULONG Id);
	STDMETHOD(GetCurrentThreadHandle) (THIS_ PULONG64 Handle);
	STDMETHOD(GetThreadIdByHandle) (THIS_ ULONG64 Handle, PULONG Id);
	STDMETHOD(GetNumberProcesses) (THIS_ PULONG Number);
	STDMETHOD(GetProcessIdsByIndex) (THIS_ ULONG Start, ULONG Count, PULONG Ids, PULONG SysIds);
	STDMETHOD(GetCurrentProcessDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(GetProcessIdByDataOffset) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentProcessPeb) (THIS_ PULONG64 Offset);
	STDMETHOD(GetProcessIdByPeb) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentProcessSystemId) (THIS_ PULONG SysId);
	STDMETHOD(GetProcessIdBySystemId) (THIS_ ULONG SysId, PULONG Id);
	STDMETHOD(GetCurrentProcessHandle) (THIS_ PULONG64 Handle);
	STDMETHOD(GetProcessIdByHandle) (THIS_ ULONG64 Handle, PULONG Id);
	STDMETHOD(GetCurrentProcessExecutableName) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG ExeSize);
	STDMETHOD(GetCurrentProcessUpTime) (THIS_ PULONG UpTime);
	STDMETHOD(GetImplicitThreadDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(SetImplicitThreadDataOffset) (THIS_ ULONG64 Offset);
	STDMETHOD(GetImplicitProcessDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(SetImplicitProcessDataOffset) (THIS_ ULONG64 Offset);
	STDMETHOD(GetEventSystem) (THIS_ PULONG Id);
	STDMETHOD(GetCurrentSystemId) (THIS_ PULONG Id);
	STDMETHOD(SetCurrentSystemId) (THIS_ ULONG Id);
	STDMETHOD(GetNumberSystems) (THIS_ PULONG Number);
	STDMETHOD(GetSystemIdsByIndex) (THIS_ ULONG Start, ULONG Count, PULONG Ids);
	STDMETHOD(GetTotalNumberThreadsAndProcesses) (THIS_ PULONG TotalThreads, PULONG TotalProcesses, PULONG LargestProcessThreads, PULONG LargestSystemThreads, PULONG LargestSystemProcesses);
	STDMETHOD(GetCurrentSystemServer) (THIS_ PULONG64 Server);
	STDMETHOD(GetSystemByServer) (THIS_ ULONG64 Server, PULONG Id);
	STDMETHOD(GetCurrentSystemServerName) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG NameSize);
};
#undef INTERFACE
#define INTERFACE IDebugSystemObjects4
DECLARE_INTERFACE_(IDebugSystemObjects4, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID InterfaceId, PVOID * Interface);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetEventThread) (THIS_ PULONG Id);
	STDMETHOD(GetEventProcess) (THIS_ PULONG Id);
	STDMETHOD(GetCurrentThreadId) (THIS_ PULONG Id);
	STDMETHOD(SetCurrentThreadId) (THIS_ ULONG Id);
	STDMETHOD(GetCurrentProcessId) (THIS_ PULONG Id);
	STDMETHOD(SetCurrentProcessId) (THIS_ ULONG Id);
	STDMETHOD(GetNumberThreads) (THIS_ PULONG Number);
	STDMETHOD(GetTotalNumberThreads) (THIS_ PULONG Total, PULONG LargestProcess);
	STDMETHOD(GetThreadIdsByIndex) (THIS_ ULONG Start, ULONG Count, PULONG Ids, PULONG SysIds);
	STDMETHOD(GetThreadIdByProcessor) (THIS_ ULONG Processor, PULONG Id);
	STDMETHOD(GetCurrentThreadDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(GetThreadIdByDataOffset) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentThreadTeb) (THIS_ PULONG64 Offset);
	STDMETHOD(GetThreadIdByTeb) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentThreadSystemId) (THIS_ PULONG SysId);
	STDMETHOD(GetThreadIdBySystemId) (THIS_ ULONG SysId, PULONG Id);
	STDMETHOD(GetCurrentThreadHandle) (THIS_ PULONG64 Handle);
	STDMETHOD(GetThreadIdByHandle) (THIS_ ULONG64 Handle, PULONG Id);
	STDMETHOD(GetNumberProcesses) (THIS_ PULONG Number);
	STDMETHOD(GetProcessIdsByIndex) (THIS_ ULONG Start, ULONG Count, PULONG Ids, PULONG SysIds);
	STDMETHOD(GetCurrentProcessDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(GetProcessIdByDataOffset) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentProcessPeb) (THIS_ PULONG64 Offset);
	STDMETHOD(GetProcessIdByPeb) (THIS_ ULONG64 Offset, PULONG Id);
	STDMETHOD(GetCurrentProcessSystemId) (THIS_ PULONG SysId);
	STDMETHOD(GetProcessIdBySystemId) (THIS_ ULONG SysId, PULONG Id);
	STDMETHOD(GetCurrentProcessHandle) (THIS_ PULONG64 Handle);
	STDMETHOD(GetProcessIdByHandle) (THIS_ ULONG64 Handle, PULONG Id);
	STDMETHOD(GetCurrentProcessExecutableName) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG ExeSize);
	STDMETHOD(GetCurrentProcessUpTime) (THIS_ PULONG UpTime);
	STDMETHOD(GetImplicitThreadDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(SetImplicitThreadDataOffset) (THIS_ ULONG64 Offset);
	STDMETHOD(GetImplicitProcessDataOffset) (THIS_ PULONG64 Offset);
	STDMETHOD(SetImplicitProcessDataOffset) (THIS_ ULONG64 Offset);
	STDMETHOD(GetEventSystem) (THIS_ PULONG Id);
	STDMETHOD(GetCurrentSystemId) (THIS_ PULONG Id);
	STDMETHOD(SetCurrentSystemId) (THIS_ ULONG Id);
	STDMETHOD(GetNumberSystems) (THIS_ PULONG Number);
	STDMETHOD(GetSystemIdsByIndex) (THIS_ ULONG Start, ULONG Count, PULONG Ids);
	STDMETHOD(GetTotalNumberThreadsAndProcesses) (THIS_ PULONG TotalThreads, PULONG TotalProcesses, PULONG LargestProcessThreads, PULONG LargestSystemThreads, PULONG LargestSystemProcesses);
	STDMETHOD(GetCurrentSystemServer) (THIS_ PULONG64 Server);
	STDMETHOD(GetSystemByServer) (THIS_ ULONG64 Server, PULONG Id);
	STDMETHOD(GetCurrentSystemServerName) (THIS_ PSTR Buffer, ULONG BufferSize, PULONG NameSize);
	STDMETHOD(GetCurrentProcessExecutableNameWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG ExeSize);
	STDMETHOD(GetCurrentSystemServerNameWide) (THIS_ PWSTR Buffer, ULONG BufferSize, PULONG NameSize);
};
#define DEBUG_COMMAND_EXCEPTION_ID 0xdbe00dbe
#define DEBUG_CMDEX_INVALID             0x00000000
#define DEBUG_CMDEX_ADD_EVENT_STRING    0x00000001
#define DEBUG_CMDEX_RESET_EVENT_STRINGS 0x00000002
#ifndef DEBUG_NO_IMPLEMENTATION
FORCEINLINE void DebugCommandException(ULONG Command, ULONG ArgSize, PVOID Arg)
{
	ULONG_PTR ExArgs[4];
	ExArgs[0] = DEBUG_COMMAND_EXCEPTION_ID;
	ExArgs[1] = Command;
	ExArgs[2] = ArgSize;
	ExArgs[3] = (ULONG_PTR)Arg;
	RaiseException(DBG_COMMAND_EXCEPTION, 0, 4, ExArgs);
}
#endif
#define DEBUG_EXTENSION_VERSION(Major, Minor)	((((Major) & 0xffff) << 16) | ((Minor) & 0xffff))
#define DEBUG_EXTINIT_HAS_COMMAND_HELP 0x00000001
typedef HRESULT(CALLBACK *PDEBUG_EXTENSION_INITIALIZE) (PULONG Version, PULONG Flags);
typedef void (CALLBACK *PDEBUG_EXTENSION_UNINITIALIZE) (void);
#define DEBUG_NOTIFY_SESSION_ACTIVE       0x00000000
#define DEBUG_NOTIFY_SESSION_INACTIVE     0x00000001
#define DEBUG_NOTIFY_SESSION_ACCESSIBLE   0x00000002
#define DEBUG_NOTIFY_SESSION_INACCESSIBLE 0x00000003
typedef void (CALLBACK * PDEBUG_EXTENSION_NOTIFY) (ULONG Notify, ULONG64 Argument);
#define DEBUG_EXTENSION_CONTINUE_SEARCH		HRESULT_FROM_NT(0xC0000271L)
#define DEBUG_EXTENSION_RELOAD_EXTENSION	HRESULT_FROM_NT(0xC00000EEL)
typedef HRESULT(CALLBACK *PDEBUG_EXTENSION_CALL) (PDEBUG_CLIENT Client, PCSTR Args);
#define DEBUG_KNOWN_STRUCT_GET_NAMES              1
#define DEBUG_KNOWN_STRUCT_GET_SINGLE_LINE_OUTPUT 2
#define DEBUG_KNOWN_STRUCT_SUPPRESS_TYPE_NAME     3
typedef HRESULT(CALLBACK *PDEBUG_EXTENSION_KNOWN_STRUCT) (ULONG Flags, ULONG64 Offset, PSTR TypeName, PSTR Buffer, PULONG BufferChars);
typedef HRESULT(CALLBACK *PDEBUG_EXTENSION_KNOWN_STRUCT_EX) (PDEBUG_CLIENT Client, ULONG Flags, ULONG64 Offset, PCSTR TypeName, PSTR Buffer, PULONG BufferChars);
typedef PDEBUG_EXTENSION_KNOWN_STRUCT PDEBUG_ENTENSION_KNOWNSTRUCT;
#define DEBUG_EXT_QVALUE_DEFAULT 0x00000000
typedef HRESULT(CALLBACK *PDEBUG_EXTENSION_QUERY_VALUE_NAMES) (PDEBUG_CLIENT Client, ULONG Flags, PWSTR Buffer, ULONG BufferChars, PULONG BufferNeeded);
#define DEBUG_EXT_PVALUE_DEFAULT 0x00000000
#define DEBUG_EXT_PVTYPE_IS_VALUE   0x00000000
#define DEBUG_EXT_PVTYPE_IS_POINTER 0x00000001
typedef HRESULT(CALLBACK *PDEBUG_EXTENSION_PROVIDE_VALUE) (PDEBUG_CLIENT Client, ULONG Flags, PCWSTR Name, PULONG64 Value, PULONG64 TypeModBase, PULONG TypeId, PULONG TypeFlags);
#endif
