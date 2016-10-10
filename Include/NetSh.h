/*+@@file@@----------------------------------------------------------------*//*!
 \file		NetSh.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:45:10 2016
 \date		Modified on Sun Sep 11 22:45:10 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _NETSH_H_
#define _NETSH_H_
#if __POCC__ >= 500
#pragma once
#endif
#define NETSH_ERROR_BASE                        15000
#define ERROR_NO_ENTRIES                        (NETSH_ERROR_BASE + 0)
#define ERROR_INVALID_SYNTAX                    (NETSH_ERROR_BASE + 1)
#define ERROR_PROTOCOL_NOT_IN_TRANSPORT         (NETSH_ERROR_BASE + 2)
#define ERROR_NO_CHANGE                         (NETSH_ERROR_BASE + 3)
#define ERROR_CMD_NOT_FOUND                     (NETSH_ERROR_BASE + 4)
#define ERROR_ENTRY_PT_NOT_FOUND                (NETSH_ERROR_BASE + 5)
#define ERROR_DLL_LOAD_FAILED                   (NETSH_ERROR_BASE + 6)
#define ERROR_INIT_DISPLAY                      (NETSH_ERROR_BASE + 7)
#define ERROR_TAG_ALREADY_PRESENT               (NETSH_ERROR_BASE + 8)
#define ERROR_INVALID_OPTION_TAG                (NETSH_ERROR_BASE + 9)
#define ERROR_NO_TAG                            (NETSH_ERROR_BASE + 10)
#define ERROR_MISSING_OPTION                    (NETSH_ERROR_BASE + 11)
#define ERROR_TRANSPORT_NOT_PRESENT             (NETSH_ERROR_BASE + 12)
#define ERROR_SHOW_USAGE                        (NETSH_ERROR_BASE + 13)
#define ERROR_INVALID_OPTION_VALUE              (NETSH_ERROR_BASE + 14)
#define ERROR_OKAY                              (NETSH_ERROR_BASE + 15)
#define ERROR_CONTINUE_IN_PARENT_CONTEXT        (NETSH_ERROR_BASE + 16)
#define ERROR_SUPPRESS_OUTPUT                   (NETSH_ERROR_BASE + 17)
#define ERROR_HELPER_ALREADY_REGISTERED         (NETSH_ERROR_BASE + 18)
#define ERROR_CONTEXT_ALREADY_REGISTERED        (NETSH_ERROR_BASE + 19)
#define ERROR_PARSING_FAILURE                   (NETSH_ERROR_BASE + 20) 
#define NETSH_ERROR_END                ERROR_CONTEXT_ALREADY_REGISTERED
enum NS_CMD_FLAGS
{
    CMD_FLAG_PRIVATE     = 0x01,
    CMD_FLAG_INTERACTIVE = 0x02,
    CMD_FLAG_LOCAL       = 0x08,
    CMD_FLAG_ONLINE      = 0x10,
    CMD_FLAG_HIDDEN      = 0x20,
    CMD_FLAG_LIMIT_MASK  = 0xffff,
    CMD_FLAG_PRIORITY    = 0x80000000
};
typedef enum _NS_REQS
{
    NS_REQ_ZERO           = 0,
    NS_REQ_PRESENT        = 1,
    NS_REQ_ALLOW_MULTIPLE = 2,
    NS_REQ_ONE_OR_MORE    = 3
} NS_REQS;
enum NS_EVENTS
{
    NS_EVENT_LOOP       = 0x00010000,
    NS_EVENT_LAST_N     = 0x00000001,
    NS_EVENT_LAST_SECS  = 0x00000002,
    NS_EVENT_FROM_N     = 0x00000004,
    NS_EVENT_FROM_START = 0x00000008
};
enum NS_MODE_CHANGE
{
    NETSH_COMMIT                   = 0,
    NETSH_UNCOMMIT                 = 1,
    NETSH_FLUSH                    = 2,
    NETSH_COMMIT_STATE             = 3,
    NETSH_SAVE                     = 4
};
#define NS_GET_EVENT_IDS_FN_NAME    "GetEventIds"
#define MAX_NAME_LEN                    MAX_DLL_NAME
#define NETSH_VERSION_50                0x0005000
#define NETSH_ARG_DELIMITER             L"="
#define NETSH_CMD_DELIMITER             L" "
#define NETSH_MAX_TOKEN_LENGTH          64
#define NETSH_MAX_CMD_TOKEN_LENGTH      128
#define NETSH_ROOT_GUID { 0, 0, 0, { 0, 0, 0, 0, 0, 0, 0, 0 } }
#define DEFAULT_CONTEXT_PRIORITY 100
typedef struct _TOKEN_VALUE
{
    LPCWSTR  pwszToken;
    DWORD    dwValue;
} TOKEN_VALUE, *PTOKEN_VALUE;
#define CREATE_CMD_ENTRY(t,f)            {CMD_##t, f, HLP_##t, HLP_##t##_EX, CMD_FLAG_PRIVATE, NULL}
#define CREATE_CMD_ENTRY_EX(t,f,i)       {CMD_##t, f, HLP_##t, HLP_##t##_EX, i, NULL}
#define CREATE_CMD_ENTRY_EX_VER(t,f,i,v) {CMD_##t, f, HLP_##t, HLP_##t##_EX, i, v}
#define CREATE_CMD_GROUP_ENTRY(t,s)            {CMD_##t, HLP_##t, sizeof(s)/sizeof(CMD_ENTRY), 0, s, NULL }
#define CREATE_CMD_GROUP_ENTRY_EX(t,s,i)       {CMD_##t, HLP_##t, sizeof(s)/sizeof(CMD_ENTRY), i, s, NULL }
#define CREATE_CMD_GROUP_ENTRY_EX_VER(t,s,i,v) {CMD_##t, HLP_##t, sizeof(s)/sizeof(CMD_ENTRY), i, s, v }
#define NUM_TOKENS_IN_TABLE(TokenArray) sizeof(TokenArray)/sizeof(TOKEN_VALUE)
#define NUM_TAGS_IN_TABLE(TagsArray)    sizeof(TagsArray)/sizeof(TAG_TYPE)
#define GET_RESOURCE_STRING_FN_NAME    "GetResourceString"
typedef DWORD(WINAPI GET_RESOURCE_STRING_FN) (DWORD dwMsgID, LPWSTR lpBuffer, DWORD nBufferMax);
typedef GET_RESOURCE_STRING_FN *PGET_RESOURCE_STRING_FN;
typedef DWORD(WINAPI NS_CONTEXT_COMMIT_FN) (DWORD dwAction);
typedef NS_CONTEXT_COMMIT_FN *PNS_CONTEXT_COMMIT_FN;
typedef DWORD(WINAPI NS_CONTEXT_CONNECT_FN) (LPCWSTR pwszMachine);
typedef NS_CONTEXT_CONNECT_FN *PNS_CONTEXT_CONNECT_FN;
typedef struct _NS_CONTEXT_ATTRIBUTES NS_CONTEXT_ATTRIBUTES;
typedef DWORD(WINAPI NS_CONTEXT_DUMP_FN) (LPCWSTR pwszRouter, LPWSTR *ppwcArguments, DWORD dwArgCount, LPCVOID pvData);
typedef NS_CONTEXT_DUMP_FN *PNS_CONTEXT_DUMP_FN;
typedef DWORD(WINAPI NS_DLL_STOP_FN) (DWORD dwReserved);
typedef NS_DLL_STOP_FN *PNS_DLL_STOP_FN;
typedef DWORD(WINAPI NS_HELPER_START_FN) (CONST GUID *pguidParent, DWORD dwVersion);
typedef NS_HELPER_START_FN *PNS_HELPER_START_FN;
typedef DWORD(WINAPI NS_HELPER_STOP_FN) (DWORD dwReserved);
typedef NS_HELPER_STOP_FN *PNS_HELPER_STOP_FN;
typedef DWORD(FN_HANDLE_CMD) (LPCWSTR pwszMachine, LPWSTR *ppwcArguments, DWORD dwCurrentIndex, DWORD dwArgCount, DWORD dwFlags, LPCVOID pvData, BOOL *pbDone);
typedef FN_HANDLE_CMD *PFN_HANDLE_CMD;
typedef BOOL(WINAPI NS_OSVERSIONCHECK) (UINT CIMOSType, UINT CIMOSProductSuite, LPCWSTR CIMOSVersion, LPCWSTR CIMOSBuildNumber, LPCWSTR CIMServicePackMajorVersion, LPCWSTR CIMServicePackMinorVersion, UINT uiReserved, DWORD dwReserved);
typedef NS_OSVERSIONCHECK *PNS_OSVERSIONCHECK;
typedef struct _NS_HELPER_ATTRIBUTES
{
    union
    {
        struct
        {
            DWORD       dwVersion;
            DWORD       dwReserved;
        };
        ULONGLONG       _ullAlign;
    };
    GUID                      guidHelper;
    PNS_HELPER_START_FN       pfnStart;
    PNS_HELPER_STOP_FN        pfnStop;
} NS_HELPER_ATTRIBUTES, *PNS_HELPER_ATTRIBUTES;
typedef struct _CMD_ENTRY
{
    LPCWSTR             pwszCmdToken;
    PFN_HANDLE_CMD      pfnCmdHandler;
    DWORD               dwShortCmdHelpToken;
    DWORD               dwCmdHlpToken;
    DWORD               dwFlags;
    PNS_OSVERSIONCHECK  pOsVersionCheck;
} CMD_ENTRY, *PCMD_ENTRY;
typedef struct _CMD_GROUP_ENTRY
{
    LPCWSTR         pwszCmdGroupToken;
    DWORD           dwShortCmdHelpToken;
    ULONG           ulCmdGroupSize;
    DWORD           dwFlags;
    PCMD_ENTRY      pCmdGroup;
    PNS_OSVERSIONCHECK  pOsVersionCheck;
} CMD_GROUP_ENTRY, *PCMD_GROUP_ENTRY;
typedef struct _NS_CONTEXT_ATTRIBUTES
{
    union
    {
        struct
        {
            DWORD       dwVersion;
            DWORD       dwReserved;
        };
        ULONGLONG       _ullAlign;
    };
    LPWSTR                   pwszContext;
    GUID                     guidHelper;
    DWORD                    dwFlags;
    ULONG                    ulPriority;
    ULONG                    ulNumTopCmds;
    struct _CMD_ENTRY        (*pTopCmds)[];
    ULONG                    ulNumGroups;
    struct _CMD_GROUP_ENTRY  (*pCmdGroups)[];
    PNS_CONTEXT_COMMIT_FN    pfnCommitFn;
    PNS_CONTEXT_DUMP_FN      pfnDumpFn;
    PNS_CONTEXT_CONNECT_FN   pfnConnectFn;
    PVOID                    pReserved;
    PNS_OSVERSIONCHECK       pfnOsVersionCheck;
} NS_CONTEXT_ATTRIBUTES, *PNS_CONTEXT_ATTRIBUTES;
typedef CONST struct _NS_CONTEXT_ATTRIBUTES * PCNS_CONTEXT_ATTRIBUTES;
typedef struct _TAG_TYPE
{
    LPCWSTR  pwszTag;
    DWORD    dwRequired;
    BOOL     bPresent;
} TAG_TYPE, *PTAG_TYPE;
typedef DWORD(NS_DLL_INIT_FN) (DWORD dwNetshVersion, PVOID pReserved);
typedef NS_DLL_INIT_FN *PNS_DLL_INIT_FN;
DWORD WINAPI MatchEnumTag(HANDLE hModule, LPCWSTR pwcArg, DWORD dwNumArg, CONST TOKEN_VALUE *pEnumTable, PDWORD pdwValue);
BOOL WINAPI MatchToken(LPCWSTR pwszUserToken, LPCWSTR pwszCmdToken);
DWORD WINAPI PreprocessCommand(HANDLE hModule, LPWSTR *ppwcArguments, DWORD dwCurrentIndex, DWORD dwArgCount, TAG_TYPE *pttTags, DWORD dwTagCount, DWORD dwMinArgs, DWORD dwMaxArgs, DWORD *pdwTagType);
DWORD __cdecl PrintError(HANDLE hModule, DWORD dwErrId, ...);
DWORD __cdecl PrintMessageFromModule(HANDLE hModule, DWORD dwMsgId, ...);
DWORD __cdecl PrintMessage(LPCWSTR pwszFormat, ...);
DWORD WINAPI RegisterContext(CONST NS_CONTEXT_ATTRIBUTES *pChildContext);
DWORD WINAPI RegisterHelper(CONST GUID *pguidParentContext, CONST NS_HELPER_ATTRIBUTES *pfnRegisterSubContext);
#endif
