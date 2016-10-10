/*+@@file@@----------------------------------------------------------------*//*!
 \file		httpserv.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul 15 18:18:05 2016
 \date		Modified on Fri Jul 15 18:18:05 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _HTTPSERV_H_
#define _HTTPSERV_H_
#if __POCC__ >= 500
#pragma once
#endif
#if (!defined(_WIN64) && !defined(WIN32))
#error httpserv.h is only supported on WIN32 or WIN64 platforms
#endif
#include <ahadmin.h>
#include <http.h>
#define RQ_BEGIN_REQUEST               0x00000001
#define RQ_AUTHENTICATE_REQUEST        0x00000002
#define RQ_AUTHORIZE_REQUEST           0x00000004
#define RQ_RESOLVE_REQUEST_CACHE       0x00000008
#define RQ_MAP_REQUEST_HANDLER         0x00000010
#define RQ_ACQUIRE_REQUEST_STATE       0x00000020
#define RQ_PRE_EXECUTE_REQUEST_HANDLER 0x00000040
#define RQ_EXECUTE_REQUEST_HANDLER     0x00000080
#define RQ_RELEASE_REQUEST_STATE       0x00000100
#define RQ_UPDATE_REQUEST_CACHE        0x00000200
#define RQ_LOG_REQUEST                 0x00000400
#define RQ_END_REQUEST                 0x00000800
#define RQ_CUSTOM_NOTIFICATION         0x10000000
#define RQ_SEND_RESPONSE               0x20000000
#define RQ_READ_ENTITY                 0x40000000
#define RQ_MAP_PATH                    0x80000000
#define GL_STOP_LISTENING               0x00000002
#define GL_CACHE_CLEANUP                0x00000004
#define GL_CACHE_OPERATION              0x00000010
#define GL_HEALTH_CHECK                 0x00000020
#define GL_CONFIGURATION_CHANGE         0x00000040
#define GL_FILE_CHANGE                  0x00000080
#define GL_PRE_BEGIN_REQUEST            0x00000100
#define GL_APPLICATION_START            0x00000200
#define GL_APPLICATION_RESOLVE_MODULES  0x00000400
#define GL_APPLICATION_STOP             0x00000800
#define GL_RSCA_QUERY                   0x00001000
#define GL_TRACE_EVENT                  0x00002000
#define GL_CUSTOM_NOTIFICATION          0x00004000
#define GL_THREAD_CLEANUP               0x00008000
#define GL_APPLICATION_PRELOAD          0x00010000
typedef enum REQUEST_NOTIFICATION_STATUS
{
    RQ_NOTIFICATION_CONTINUE,
    RQ_NOTIFICATION_PENDING,
    RQ_NOTIFICATION_FINISH_REQUEST
} REQUEST_NOTIFICATION_STATUS;
typedef enum GLOBAL_NOTIFICATION_STATUS
{
    GL_NOTIFICATION_CONTINUE,
    GL_NOTIFICATION_HANDLED
} GLOBAL_NOTIFICATION_STATUS;
#define PRIORITY_ALIAS_FIRST              L"FIRST"
#define PRIORITY_ALIAS_HIGH               L"HIGH"
#define PRIORITY_ALIAS_MEDIUM             L"MEDIUM"
#define PRIORITY_ALIAS_LOW                L"LOW"
#define PRIORITY_ALIAS_LAST               L"LAST"
typedef enum CACHE_OPERATION
{
    CACHE_OPERATION_RETRIEVE,
    CACHE_OPERATION_ADD,
    CACHE_OPERATION_DELETE,
    CACHE_OPERATION_FLUSH_PREFIX,
    CACHE_OPERATION_ENUM
} CACHE_OPERATION;
typedef VOID*            HTTP_MODULE_ID;
#define CLONE_FLAG_BASICS              0x01
#define CLONE_FLAG_HEADERS             0x02
#define CLONE_FLAG_ENTITY              0x04
#define CLONE_FLAG_NO_PRECONDITION     0x08
#define CLONE_FLAG_NO_DAV              0x10
#define EXECUTE_FLAG_NO_HEADERS                     0x01
#define EXECUTE_FLAG_IGNORE_CURRENT_INTERCEPTOR     0x02
#define EXECUTE_FLAG_IGNORE_APPPOOL                 0x04
#define EXECUTE_FLAG_DISABLE_CUSTOM_ERROR           0x08
#define EXECUTE_FLAG_SAME_URL                       0x10
#define EXECUTE_FLAG_BUFFER_RESPONSE                0x20
#define EXECUTE_FLAG_HTTP_CACHE_ELIGIBLE            0x40
struct HTTP_TRACE_CONFIGURATION;
struct HTTP_TRACE_EVENT;
#pragma message ("This module should be used only in C++!")
typedef struct IHttpModuleRegistrationInfo IHttpModuleRegistrationInfo;
typedef struct IHttpServer IHttpServer;
#if 0
class IWorkerProcessFramework;
class IWpfSettings;
class IHttpTraceContext;
class __declspec(uuid("f1927f76-790e-4ccb-a72e-396bdfdae05d")) IHttpStoredContext
{
	public virtual VOID CleanupStoredContext(VOID) = 0;
};
class __declspec(uuid("d7fad7c9-aa27-4ab9-bd60-e55ccba3f5dc")) IHttpModuleContextContainer
{
	public virtual IHttpStoredContext *GetModuleContext(HTTP_MODULE_ID moduleId) = 0;
	virtual HRESULT SetModuleContext(IHttpStoredContext *ppStoredContext, HTTP_MODULE_ID moduleId) = 0;
};
class __declspec(uuid("2ae49359-95dd-4e48-ae20-c0cb9d0bc03a")) IDispensedHttpModuleContextContainer:public IHttpModuleContextContainer
{
	public virtual VOID ReleaseContainer(VOID) = 0;
};
class __declspec(uuid("bdfc4c4a-12a4-4744-87d8-765eb320c59f")) IHttpPerfCounterInfo
{
	public virtual VOID IncrementCounter(DWORD dwCounterIndex, DWORD dwValue = 1) = 0;
	virtual VOID DecrementCounter(DWORD dwCounterIndex, DWORD dwValue = 1) = 0;
};
class __declspec(uuid("3f75d9e6-1075-422c-ad89-93a85f2d7bdc")) IHttpApplication
{
	public virtual PCWSTR GetApplicationPhysicalPath(VOID)const = 0;
	virtual PCWSTR GetApplicationId(VOID)const = 0;
	virtual PCWSTR GetAppConfigPath(VOID)const = 0;
	virtual IHttpModuleContextContainer *GetModuleContextContainer(VOID) = 0;
};
class __declspec(uuid("7e0e6167-0094-49a1-8287-ecf6dc6e73a6")) IHttpUrlInfo
{
	public virtual IHttpModuleContextContainer *GetModuleContextContainer(VOID) = 0;
	virtual BOOL IsFrequentlyHit(VOID)const = 0;
};
class __declspec(uuid("d7fe3d77-68bc-4d4a-851f-eec9fb68017c")) IScriptMapInfo
{
	public virtual PCWSTR GetPath(VOID)const = 0;
	virtual PCSTR GetAllowedVerbs(VOID)const = 0;
	virtual PCWSTR GetModules(DWORD *pcchModules = NULL)const = 0;
	virtual PCWSTR GetScriptProcessor(DWORD *pcchScriptProcessor = NULL)const = 0;
	virtual PCWSTR GetManagedType(DWORD *pcchManagedType = NULL)const = 0;
	virtual BOOL GetAllowPathInfoForScriptMappings(VOID)const = 0;
	virtual DWORD GetRequiredAccess(VOID)const = 0;
	virtual DWORD GetResourceType(VOID)const = 0;
	virtual BOOL GetIsStarScriptMap(VOID)const = 0;
	virtual DWORD GetResponseBufferLimit(VOID)const = 0;
	virtual PCWSTR GetName(VOID)const = 0;
};
class __declspec(uuid("fd86e6de-fb0e-47dd-820a-e0da12be46e9")) IHttpTokenEntry;
	class __declspec(uuid("48b10633-825d-495e-93b0-225380053e8e")) IMetadataInfo
{
	public virtual PCWSTR GetMetaPath(VOID)const = 0;
	virtual PCWSTR GetVrPath(VOID)const = 0;
	virtual IHttpTokenEntry *GetVrToken(VOID) = 0;
	virtual IHttpModuleContextContainer *GetModuleContextContainer(VOID) = 0;
};
class __declspec(uuid("3fc5c336-9ad7-45ea-af2f-31b59302c9fe")) IReferencedMetadataInfo:public IMetadataInfo
{
	public virtual VOID ReferenceMetadata(VOID) = 0;
	virtual VOID DereferenceMetadata(VOID) = 0;
};
class __declspec(uuid("e8698f7e-576e-4cac-a309-67435355faef")) IHttpRequest
{
	public virtual HTTP_REQUEST *GetRawHttpRequest(VOID) = 0;
	virtual const HTTP_REQUEST *GetRawHttpRequest(VOID)const = 0;
	virtual PCSTR GetHeader(PCSTR pszHeaderName, USHORT *pcchHeaderValue = NULL)const = 0;
	virtual PCSTR GetHeader(HTTP_HEADER_ID ulHeaderIndex, USHORT *pcchHeaderValue = NULL)const = 0;
	virtual HRESULT SetHeader(PCSTR pszHeaderName, PCSTR pszHeaderValue, USHORT cchHeaderValue, BOOL fReplace) = 0;
	virtual HRESULT SetHeader(HTTP_HEADER_ID ulHeaderIndex, PCSTR pszHeaderValue, USHORT cchHeaderValue, BOOL fReplace) = 0;
	virtual HRESULT DeleteHeader(PCSTR pszHeaderName) = 0;
	virtual HRESULT DeleteHeader(HTTP_HEADER_ID ulHeaderIndex) = 0;
	virtual PCSTR GetHttpMethod(VOID)const = 0;
	virtual HRESULT SetHttpMethod(PCSTR pszHttpMethod) = 0;
	virtual HRESULT SetUrl(PCWSTR pszUrl, DWORD cchUrl, BOOL fResetQueryString) = 0;
	virtual HRESULT SetUrl(PCSTR pszUrl, DWORD cchUrl, BOOL fResetQueryString) = 0;
	virtual BOOL GetUrlChanged(VOID)const = 0;
	virtual PCWSTR GetForwardedUrl(VOID)const = 0;
	virtual PSOCKADDR GetLocalAddress(VOID)const = 0;
	virtual PSOCKADDR GetRemoteAddress(VOID)const = 0;
	virtual HRESULT ReadEntityBody(VOID *pvBuffer, DWORD cbBuffer, BOOL fAsync, DWORD *pcbBytesReceived, BOOL *pfCompletionPending = NULL) = 0;
	virtual HRESULT InsertEntityBody(VOID *pvBuffer, DWORD cbBuffer) = 0;
	virtual DWORD GetRemainingEntityBytes(VOID) = 0;
	virtual VOID GetHttpVersion(USHORT *pMajorVersion, USHORT *pMinorVersion)const = 0;
	virtual HRESULT GetClientCertificate(HTTP_SSL_CLIENT_CERT_INFO **ppClientCertInfo, BOOL *pfClientCertNegotiated) = 0;
	virtual HRESULT NegotiateClientCertificate(BOOL fAsync, BOOL *pfCompletionPending = NULL) = 0;
	virtual DWORD GetSiteId(VOID)const = 0;
	virtual HRESULT GetHeaderChanges(DWORD dwOldChangeNumber, DWORD *pdwNewChangeNumber, PCSTR knownHeaderSnapshot[HttpHeaderRequestMaximum], DWORD *pdwUnknownHeaderSnapshot, PCSTR **ppUnknownHeaderNameSnapshot, PCSTR **ppUnknownHeaderValueSnapshot, DWORD diffedKnownHeaderIndices[HttpHeaderRequestMaximum + 1], DWORD *pdwDiffedUnknownHeaders, DWORD **ppDiffedUnknownHeaderIndices) = 0;
};
class __declspec(uuid("d9244ae1-51f8-4aa1-a66d-19277c33e610")) IHttpRequest2:public IHttpRequest
{
	public virtual HRESULT GetChannelBindingToken(__deref_out_bcount_part(*pTokenSize, *pTokenSize)PBYTE *ppToken, DWORD *pTokenSize) = 0;
};
class __declspec(uuid("cb1c40ca-70f2-41a0-add2-881f5ef57388")) IHttpCachePolicy
{
	public virtual HTTP_CACHE_POLICY *GetKernelCachePolicy(VOID) = 0;
	virtual VOID SetKernelCacheInvalidatorSet(VOID) = 0;
	virtual HTTP_CACHE_POLICY *GetUserCachePolicy(VOID) = 0;
	virtual HRESULT AppendVaryByHeader(PCSTR pszHeader) = 0;
	virtual PCSTR GetVaryByHeaders(VOID)const = 0;
	virtual HRESULT AppendVaryByQueryString(PCSTR pszParam) = 0;
	virtual PCSTR GetVaryByQueryStrings(VOID)const = 0;
	virtual HRESULT SetVaryByValue(PCSTR pszValue) = 0;
	virtual PCSTR GetVaryByValue(VOID)const = 0;
	virtual BOOL IsUserCacheEnabled(VOID)const = 0;
	virtual VOID DisableUserCache(VOID) = 0;
	virtual BOOL IsCached(VOID)const = 0;
	virtual VOID SetIsCached(VOID) = 0;
	virtual BOOL GetKernelCacheInvalidatorSet(VOID)const = 0;
};
class __declspec(uuid("9f4ba807-050e-4495-ae55-8870f7e9194a")) IHttpCachePolicy2:public IHttpCachePolicy
{
	public virtual BOOL IsForceUpdateSet(VOID)const = 0;
	virtual VOID SetForceUpdate(VOID) = 0;
};
class __declspec(uuid("7e1c6b38-628f-4e6c-95dc-41237eb7f95e")) IHttpResponse
{
	public virtual HTTP_RESPONSE *GetRawHttpResponse(VOID) = 0;
	virtual const HTTP_RESPONSE *GetRawHttpResponse(VOID)const = 0;
	virtual IHttpCachePolicy *GetCachePolicy(VOID) = 0;
	virtual HRESULT SetStatus(USHORT statusCode, PCSTR pszReason, USHORT uSubStatus = 0, HRESULT hrErrorToReport = S_OK, IAppHostConfigException * pException = NULL, BOOL fTrySkipCustomErrors = FALSE) = 0;
	virtual HRESULT SetHeader(PCSTR pszHeaderName, PCSTR pszHeaderValue, USHORT cchHeaderValue, BOOL fReplace) = 0;
	virtual HRESULT SetHeader(HTTP_HEADER_ID ulHeaderIndex, PCSTR pszHeaderValue, USHORT cchHeaderValue, BOOL fReplace) = 0;
	virtual HRESULT DeleteHeader(PCSTR pszHeaderName) = 0;
	virtual HRESULT DeleteHeader(HTTP_HEADER_ID ulHeaderIndex) = 0;
	virtual PCSTR GetHeader(PCSTR pszHeaderName, USHORT *pcchHeaderValue = NULL)const = 0;
	virtual PCSTR GetHeader(HTTP_HEADER_ID ulHeaderIndex, USHORT *pcchHeaderValue = NULL)const = 0;
	virtual VOID Clear(VOID) = 0;
	virtual VOID ClearHeaders(VOID) = 0;
	virtual VOID SetNeedDisconnect(VOID) = 0;
	virtual VOID ResetConnection(VOID) = 0;
	virtual VOID DisableKernelCache(ULONG reason = 9) = 0;
	virtual BOOL GetKernelCacheEnabled(VOID)const = 0;
	virtual VOID SuppressHeaders(VOID) = 0;
	virtual BOOL GetHeadersSuppressed(VOID)const = 0;
	virtual HRESULT Flush(BOOL fAsync, BOOL fMoreData, DWORD *pcbSent, BOOL *pfCompletionExpected = NULL) = 0;
	virtual HRESULT Redirect(PCSTR pszUrl, BOOL fResetStatusCode = TRUE, BOOL fIncludeParameters = FALSE) = 0;
	virtual HRESULT WriteEntityChunkByReference(HTTP_DATA_CHUNK *pDataChunk, LONG lInsertPosition = -1) = 0;
	virtual HRESULT WriteEntityChunks(HTTP_DATA_CHUNK *pDataChunks, DWORD nChunks, BOOL fAsync, BOOL fMoreData, DWORD *pcbSent, BOOL *pfCompletionExpected = NULL) = 0;
	virtual VOID DisableBuffering(VOID) = 0;
	virtual VOID GetStatus(USHORT *pStatusCode, USHORT *pSubStatus = NULL, PCSTR * ppszReason = NULL, USHORT * pcchReason = NULL, HRESULT * phrErrorToReport = NULL, PCWSTR * ppszModule = NULL, DWORD * pdwNotification = NULL, IAppHostConfigException ** ppException = NULL, BOOL * pfTrySkipCustomErrors = NULL) = 0;
	virtual HRESULT SetErrorDescription(PCWSTR pszDescription, DWORD cchDescription, BOOL fHtmlEncode = TRUE) = 0;
	virtual PCWSTR GetErrorDescription(DWORD *pcchDescription = NULL) = 0;
	virtual HRESULT GetHeaderChanges(DWORD dwOldChangeNumber, DWORD *pdwNewChangeNumber, PCSTR knownHeaderSnapshot[HttpHeaderResponseMaximum], DWORD *pdwUnknownHeaderSnapshot, PCSTR **ppUnknownHeaderNameSnapshot, PCSTR **ppUnknownHeaderValueSnapshot, DWORD diffedKnownHeaderIndices[HttpHeaderResponseMaximum + 1], DWORD *pdwDiffedUnknownHeaders, DWORD **ppDiffedUnknownHeaderIndices) = 0;
	virtual VOID CloseConnection(VOID) = 0;
};
class __declspec(uuid("8059e6f8-10ce-4d61-b47e-5a1d8d9a8b67")) IHttpUser
{
	public virtual PCWSTR GetRemoteUserName(VOID) = 0;
	virtual PCWSTR GetUserName(VOID) = 0;
	virtual PCWSTR GetAuthenticationType(VOID) = 0;
	virtual PCWSTR GetPassword(VOID) = 0;
	virtual HANDLE GetImpersonationToken(VOID) = 0;
	virtual HANDLE GetPrimaryToken(VOID) = 0;
	virtual VOID ReferenceUser(VOID) = 0;
	virtual VOID DereferenceUser(VOID) = 0;
	virtual BOOL SupportsIsInRole(VOID) = 0;
	virtual HRESULT IsInRole(PCWSTR pszRoleName, BOOL *pfInRole) = 0;
	virtual PVOID GetUserVariable(PCSTR pszVariableName) = 0;
};
#define HTTP_USER_VARIABLE_SID              "SID"
#define HTTP_USER_VARIABLE_CTXT_HANDLE      "CtxtHandle"
#define HTTP_USER_VARIABLE_CRED_HANDLE      "CredHandle"
class __declspec(uuid("841d9a71-75f4-4626-8b97-66046ca7e45b")) IHttpConnectionStoredContext:public IHttpStoredContext
{
	public virtual VOID NotifyDisconnect(VOID) = 0;
};
class __declspec(uuid("f3dd2fb3-4d11-4295-b8ab-4cb667add1fe")) IHttpConnectionModuleContextContainer:public IHttpModuleContextContainer
{
	public virtual IHttpConnectionStoredContext *GetConnectionModuleContext(HTTP_MODULE_ID moduleId) = 0;
	virtual HRESULT SetConnectionModuleContext(IHttpConnectionStoredContext *ppStoredContext, HTTP_MODULE_ID moduleId) = 0;
};
class __declspec(uuid("d9a5de00-3346-4599-9826-fe88565e1226")) IHttpConnection
{
	public virtual BOOL IsConnected(VOID)const = 0;
	virtual VOID *AllocateMemory(DWORD cbAllocation) = 0;
	virtual IHttpConnectionModuleContextContainer *GetModuleContextContainer(VOID) = 0;
};
class __declspec(uuid("71e95595-8c74-44d9-88a9-f5112d5f5900")) IHttpFileInfo;
	class __declspec(uuid("eb16a6ec-ba5d-436f-bf24-3ede13906450")) IHttpSite;
	class __declspec(uuid("671e6d34-9380-4df4-b453-91129df02b24")) ICustomNotificationProvider;
	class __declspec(uuid("6f3f657d-2fb8-43c6-a096-5064b41f0580")) IHttpEventProvider;
	class CHttpModule;
	enum HTTP_CONTEXT_INTERFACE_VERSION {
	};
	class __declspec(uuid("424c1b8c-a1ba-44d7-ac98-9f8f457701a5")) IHttpContext
{
	public virtual IHttpSite *GetSite(VOID) = 0;
	virtual IHttpApplication *GetApplication(VOID) = 0;
	virtual IHttpConnection *GetConnection(VOID) = 0;
	virtual IHttpRequest *GetRequest(VOID) = 0;
	virtual IHttpResponse *GetResponse(VOID) = 0;
	virtual BOOL GetResponseHeadersSent(VOID)const = 0;
	virtual IHttpUser *GetUser(VOID)const = 0;
	virtual IHttpModuleContextContainer *GetModuleContextContainer(VOID) = 0;
	virtual VOID IndicateCompletion(REQUEST_NOTIFICATION_STATUS notificationStatus) = 0;
	virtual HRESULT PostCompletion(DWORD cbBytes) = 0;
	virtual VOID DisableNotifications(DWORD dwNotifications, DWORD dwPostNotifications) = 0;
	virtual BOOL GetNextNotification(REQUEST_NOTIFICATION_STATUS status, DWORD *pdwNotification, BOOL *pfIsPostNotification, CHttpModule **ppModuleInfo, IHttpEventProvider **ppRequestOutput) = 0;
	virtual BOOL GetIsLastNotification(REQUEST_NOTIFICATION_STATUS status) = 0;
	virtual HRESULT ExecuteRequest(BOOL fAsync, IHttpContext *pHttpContext, DWORD dwExecuteFlags, IHttpUser *pHttpUser, BOOL *pfCompletionExpected = NULL) = 0;
	virtual DWORD GetExecuteFlags(VOID)const = 0;
	virtual HRESULT GetServerVariable(PCSTR pszVariableName, PCWSTR *ppszValue, DWORD *pcchValueLength) = 0;
	virtual HRESULT GetServerVariable(PCSTR pszVariableName, PCSTR *ppszValue, DWORD *pcchValueLength) = 0;
	virtual HRESULT SetServerVariable(PCSTR pszVariableName, PCWSTR pszVariableValue) = 0;
	virtual VOID *AllocateRequestMemory(DWORD cbAllocation) = 0;
	virtual IHttpUrlInfo *GetUrlInfo(VOID) = 0;
	virtual IMetadataInfo *GetMetadata(VOID) = 0;
	virtual PCWSTR GetPhysicalPath(DWORD *pcchPhysicalPath = NULL) = 0;
	virtual PCWSTR GetScriptName(DWORD *pcchScriptName = NULL)const = 0;
	virtual PCWSTR GetScriptTranslated(DWORD *pcchScriptTranslated = NULL) = 0;
	virtual IScriptMapInfo *GetScriptMap(VOID)const = 0;
	virtual VOID SetRequestHandled(VOID) = 0;
	virtual IHttpFileInfo *GetFileInfo(VOID)const = 0;
	virtual HRESULT MapPath(PCWSTR pszUrl, PWSTR pszPhysicalPath, DWORD *pcbPhysicalPath) = 0;
	virtual HRESULT NotifyCustomNotification(ICustomNotificationProvider *pCustomOutput, BOOL *pfCompletionExpected) = 0;
	virtual IHttpContext *GetParentContext(VOID)const = 0;
	virtual IHttpContext *GetRootContext(VOID)const = 0;
	virtual HRESULT CloneContext(DWORD dwCloneFlags, IHttpContext **ppHttpContext) = 0;
	virtual HRESULT ReleaseClonedContext(VOID) = 0;
	virtual HRESULT GetCurrentExecutionStats(DWORD *pdwNotification, DWORD *pdwNotificationStartTickCount = NULL, PCWSTR * ppszModule = NULL, DWORD * pdwModuleStartTickCount = NULL, DWORD * pdwAsyncNotification = NULL, DWORD * pdwAsyncNotificationStartTickCount = NULL)const = 0;
	virtual IHttpTraceContext *GetTraceContext(VOID)const = 0;
	virtual HRESULT GetServerVarChanges(DWORD dwOldChangeNumber, DWORD *pdwNewChangeNumber, DWORD *pdwVariableSnapshot, PCSTR **ppVariableNameSnapshot, PCWSTR **ppVariableValueSnapshot, DWORD *pdwDiffedVariables, DWORD **ppDiffedVariableIndices) = 0;
	virtual HRESULT CancelIo(VOID) = 0;
	virtual HRESULT MapHandler(DWORD dwSiteId, PCWSTR pszSiteName, PCWSTR pszUrl, PCSTR pszVerb, IScriptMapInfo **ppScriptMap, BOOL fIgnoreWildcardMappings = FALSE) = 0;
	__declspec(deprecated("This method is deprecated. Use the HttpGetExtendedInterface helper function instead."))virtual HRESULT GetExtendedInterface(HTTP_CONTEXT_INTERFACE_VERSION version, PVOID *ppInterface) = 0;
};
class __declspec(uuid("c986182c-cf4a-4482-8205-0dbbc1fd6cee")) IHttpContext2:public IHttpContext
{
	public virtual IHttpUser *GetOriginalUser(VOID)const = 0;
};
class __declspec(uuid("9f9098d5-915c-4294-a52e-66532a232bc9")) IHttpTraceContext
{
	public virtual HRESULT GetTraceConfiguration(HTTP_TRACE_CONFIGURATION *pHttpTraceConfiguration) = 0;

	virtual HRESULT SetTraceConfiguration(HTTP_MODULE_ID moduleId, HTTP_TRACE_CONFIGURATION *pHttpTraceConfiguration, DWORD cHttpTraceConfiguration = 1) = 0;
	virtual HRESULT RaiseTraceEvent(HTTP_TRACE_EVENT *pTraceEvent) = 0;
	virtual LPCGUID GetTraceActivityId() = 0;
	virtual HRESULT QuickTrace(PCWSTR pszData1, PCWSTR pszData2 = NULL, HRESULT hrLastError = S_OK, UCHAR Level = 4) = 0;
};
class __declspec(uuid("37776aff-852e-4eec-93a5-b85a285a95b8")) IHttpCacheSpecificData;
	class __declspec(uuid("cdef2aad-20b3-4512-b1b1-094b3844aeb2")) IHttpCacheKey
{
	public virtual DWORD GetHash(VOID)const = 0;
	virtual PCWSTR GetCacheName(VOID)const = 0;
	virtual bool GetIsEqual(IHttpCacheKey *pCacheCompareKey)const = 0;
	virtual bool GetIsPrefix(IHttpCacheKey *pCacheCompareKey)const = 0;
	virtual VOID Enum(IHttpCacheSpecificData *) = 0;
};
class __declspec(uuid("37776aff-852e-4eec-93a5-b85a285a95b8")) IHttpCacheSpecificData
{
	public virtual IHttpCacheKey *GetCacheKey(VOID)const = 0;
	virtual VOID ReferenceCacheData(VOID) = 0;
	virtual VOID DereferenceCacheData(VOID) = 0;
	virtual VOID ResetTTL(VOID) = 0;
	virtual VOID DecrementTTL(BOOL *pfTTLExpired) = 0;
	virtual VOID SetFlushed(VOID) = 0;
	virtual BOOL GetFlushed(VOID)const = 0;
};
class __declspec(uuid("eb16a6ec-ba5d-436f-bf24-3ede13906450")) IHttpSite
{
	public virtual DWORD GetSiteId(VOID)const = 0;
	virtual PCWSTR GetSiteName(VOID)const = 0;
	virtual IHttpModuleContextContainer *GetModuleContextContainer(VOID) = 0;
	virtual IHttpPerfCounterInfo *GetPerfCounterInfo(VOID) = 0;
};
class __declspec(uuid("985422da-b0cf-473b-ba9e-8148ceb3e240")) IHttpFileMonitor
{
	public virtual IHttpModuleContextContainer *GetModuleContextContainer(VOID) = 0;
	virtual VOID DereferenceFileMonitor(VOID) = 0;
};
class __declspec(uuid("71e95595-8c74-44d9-88a9-f5112d5f5900")) IHttpFileInfo:public IHttpCacheSpecificData
{
	public virtual DWORD GetAttributes(VOID)const = 0;
	virtual VOID GetSize(ULARGE_INTEGER *pliSize)const = 0;
	virtual const BYTE *GetFileBuffer(VOID)const = 0;
	virtual HANDLE GetFileHandle(VOID)const = 0;
	virtual PCWSTR GetFilePath(VOID)const = 0;
	virtual PCSTR GetETag(USHORT *pcchETag = NULL)const = 0;
	virtual VOID GetLastModifiedTime(FILETIME *pFileTime)const = 0;
	virtual PCSTR GetLastModifiedString(VOID)const = 0;
	virtual BOOL GetHttpCacheAllowed(DWORD *pSecondsToLive)const = 0;
	virtual HRESULT AccessCheck(HANDLE hUserToken, PSID pUserSid) = 0;
	virtual HANDLE GetVrToken(VOID)const = 0;
	virtual PCWSTR GetVrPath(VOID)const = 0;
	virtual IHttpModuleContextContainer *GetModuleContextContainer(VOID) = 0;
	virtual BOOL CheckIfFileHasChanged(HANDLE hUserToken) = 0;
};
class __declspec(uuid("fd86e6de-fb0e-47dd-820a-e0da12be46e9")) IHttpTokenEntry:public IHttpCacheSpecificData
{
	public virtual HANDLE GetImpersonationToken(VOID) = 0;
	virtual HANDLE GetPrimaryToken(VOID) = 0;
	virtual PSID GetSid(VOID) = 0;
};
enum HTTP_SERVER_INTERFACE_VERSION {
	HTTP_SERVER_INTERFACE_V2
};
class __declspec(uuid("eda2a40f-fb92-4d6d-b52b-c8c207380b4e")) IHttpServer
{
	public virtual BOOL IsCommandLineLaunch(VOID)const = 0;
	virtual PCWSTR GetAppPoolName(VOID)const = 0;
	virtual HRESULT AssociateWithThreadPool(HANDLE hHandle, LPOVERLAPPED_COMPLETION_ROUTINE completionRoutine) = 0;
	virtual VOID IncrementThreadCount(VOID) = 0;
	virtual VOID DecrementThreadCount(VOID) = 0;
	virtual VOID ReportUnhealthy(PCWSTR pszReasonString, HRESULT hrReason) = 0;
	virtual VOID RecycleProcess(PCWSTR pszReason) = 0;
	virtual IAppHostAdminManager *GetAdminManager(VOID)const = 0;
	virtual HRESULT GetFileInfo(PCWSTR pszPhysicalPath, HANDLE hUserToken, PSID pSid, PCWSTR pszChangeNotificationPath, HANDLE hChangeNotificationToken, BOOL fCache, IHttpFileInfo **ppFileInfo, IHttpTraceContext *pHttpTraceContext = NULL) = 0;
	virtual HRESULT FlushKernelCache(PCWSTR pszUrl) = 0;
	virtual HRESULT DoCacheOperation(CACHE_OPERATION cacheOperation, IHttpCacheKey *pCacheKey, IHttpCacheSpecificData **ppCacheSpecificData, IHttpTraceContext *pHttpTraceContext = NULL) = 0;
	virtual GLOBAL_NOTIFICATION_STATUS NotifyCustomNotification(ICustomNotificationProvider *pCustomOutput) = 0;
	virtual IHttpPerfCounterInfo *GetPerfCounterInfo(VOID) = 0;
	virtual VOID RecycleApplication(PCWSTR pszAppConfigPath) = 0;
	virtual VOID NotifyConfigurationChange(PCWSTR pszPath) = 0;
	virtual VOID NotifyFileChange(PCWSTR pszFileName) = 0;
	virtual IDispensedHttpModuleContextContainer *DispenseContainer(VOID) = 0;
	virtual HRESULT AddFragmentToCache(HTTP_DATA_CHUNK *pDataChunk, PCWSTR pszFragmentName) = 0;
	virtual HRESULT ReadFragmentFromCache(PCWSTR pszFragmentName, BYTE *pvBuffer, DWORD cbSize, DWORD *pcbCopied) = 0;
	virtual HRESULT RemoveFragmentFromCache(PCWSTR pszFragmentName) = 0;
	virtual HRESULT GetWorkerProcessSettings(IWpfSettings **ppWorkerProcessSettings) = 0;
	virtual HRESULT GetProtocolManagerCustomInterface(PCWSTR pProtocolManagerDll, PCWSTR pProtocolManagerDllInitFunction, DWORD dwCustomInterfaceId, PVOID *ppCustomInterface) = 0;
	virtual BOOL SatisfiesPrecondition(PCWSTR pszPrecondition, BOOL *pfUnknownPrecondition = NULL)const = 0;
	virtual IHttpTraceContext *GetTraceContext(VOID)const = 0;
	virtual HRESULT RegisterFileChangeMonitor(PCWSTR pszPath, HANDLE hToken, IHttpFileMonitor **ppFileMonitor) = 0;
	virtual HRESULT GetExtendedInterface(HTTP_SERVER_INTERFACE_VERSION version, PVOID *ppInterface) = 0;
};
class __declspec(uuid("34af637e-afe8-4556-bcc1-767f8e0b4a4e")) IHttpServer2:public IHttpServer
{
	public virtual HRESULT GetToken(PCWSTR pszUserName, PCWSTR pszPassword, DWORD dwLogonMethod, IHttpTokenEntry **ppTokenEntry, PCWSTR pszDefaultDomain = NULL, PSOCKADDR pSockAddr = NULL, IHttpTraceContext * pHttpTraceContext = NULL) = 0;
	virtual PCWSTR GetAppPoolConfigFile(DWORD *pcchConfigFilePath = NULL)const = 0;
	virtual HRESULT GetExtendedInterface(const GUID & Version1, PVOID pInput, const GUID & Version2, PVOID *ppOutput) = 0;
	virtual HRESULT GetMetadata(PCWSTR pszSiteName, PCWSTR pszUrl, IReferencedMetadataInfo **ppMetadataInfo) = 0;
	virtual HRESULT GetWorkerProcessFramework(IWorkerProcessFramework **ppWorkerProcessFramework) = 0;
};
template < class HttpType1, class HttpType2 > HRESULT HttpGetExtendedInterface(IHttpServer * pHttpServer, HttpType1 * pInput, HttpType2 ** ppOutput)
{
	HRESULT hr;
	IHttpServer2 *pHttpServer2;
	hr = pHttpServer->GetExtendedInterface(HTTP_SERVER_INTERFACE_V2, reinterpret_cast < void **>(&pHttpServer2));
	if (SUCCEEDED(hr))
	{
		hr = pHttpServer2->GetExtendedInterface(__uuidof(HttpType1), pInput, __uuidof(HttpType2), reinterpret_cast < void **>(ppOutput));
	}
	return hr;
}
class __declspec(uuid("6f3f657d-2fb8-43c6-a096-5064b41f0580")) IHttpEventProvider
{
	public virtual VOID SetErrorStatus(HRESULT hrError) = 0;
};
class __declspec(uuid("49dd20e3-d9c0-463c-8821-f3413b55cc00")) IHttpCompletionInfo
{
	public virtual DWORD GetCompletionBytes(VOID)const = 0;
	virtual HRESULT GetCompletionStatus(VOID)const = 0;
};
class __declspec(uuid("671e6d34-9380-4df4-b453-91129df02b24")) ICustomNotificationProvider:public IHttpEventProvider
{
	public virtual PCWSTR QueryNotificationType(VOID) = 0;
};
class __declspec(uuid("304d51d0-0307-45ed-83fd-dd3fc032fdfc")) IAuthenticationProvider:public IHttpEventProvider
{
	public virtual VOID SetUser(IHttpUser *pUser) = 0;
};
class __declspec(uuid("fea3ce6b-e346-47e7-b2a6-ad265baeff2c")) IMapHandlerProvider:public IHttpEventProvider
{
	public virtual HRESULT SetScriptName(PCWSTR pszScriptName, DWORD cchScriptName) = 0;
	virtual VOID SetScriptMap(IScriptMapInfo *pScriptMap) = 0;
	virtual VOID SetFileInfo(IHttpFileInfo *pFileInfo) = 0;
};
class __declspec(uuid("8efdf557-a8f1-4bc9-b462-6df3b038a59a")) IMapPathProvider:public IHttpEventProvider
{
	public virtual PCWSTR GetUrl()const = 0;
	virtual PCWSTR GetPhysicalPath()const = 0;
	virtual HRESULT SetPhysicalPath(PCWSTR pszPhysicalPath, DWORD cchPhysicalPath) = 0;
};
class __declspec(uuid("57f2e7bc-0bcf-4a9f-94a4-10e55c6e5b51")) ISendResponseProvider:public IHttpEventProvider
{
	public virtual BOOL GetHeadersBeingSent(VOID)const = 0;
	virtual DWORD GetFlags(VOID)const = 0;
	virtual VOID SetFlags(DWORD dwFlags) = 0;
	virtual HTTP_LOG_DATA *GetLogData(VOID)const = 0;
	virtual HRESULT SetLogData(HTTP_LOG_DATA *pLogData) = 0;
	virtual BOOL GetReadyToLogData(VOID)const = 0;
};
class __declspec(uuid("fe6d905a-99b8-49fd-b389-cfc809562b81")) IReadEntityProvider:public IHttpEventProvider
{
	public virtual VOID GetEntity(PVOID *ppBuffer, DWORD *pcbData, DWORD *pcbBuffer) = 0;
	virtual VOID SetEntity(PVOID pBuffer, DWORD cbData, DWORD cbBuffer) = 0;
};
class __declspec(uuid("fb715d26-aff9-476a-8fc0-6b1acb3d1098")) IPreBeginRequestProvider:public IHttpEventProvider
{
	public virtual IHttpContext *GetHttpContext(VOID) = 0;
};
class __declspec(uuid("1de2c71c-c126-4512-aed3-f4f885e14997")) IHttpApplicationProvider:public IHttpEventProvider
{
	public virtual IHttpApplication *GetApplication(VOID) = 0;
};
typedef IHttpApplicationProvider IHttpApplicationStartProvider;
class __declspec(uuid("ba32d330-9ea8-4b9e-89f1-8c76a323277f")) IHttpModuleFactory;
	class __declspec(uuid("0617d9b9-e20f-4a9f-94f9-35403b3be01e")) IHttpApplicationResolveModulesProvider:public IHttpApplicationProvider
{
	public virtual HRESULT RegisterModule(HTTP_MODULE_ID parentModuleId, IHttpModuleFactory *pModuleFactory, PCWSTR pszModuleName, PCWSTR pszModuleType, PCWSTR pszModulePreCondition, DWORD dwRequestNotifications, DWORD dwPostRequestNotifications) = 0;
	virtual HRESULT SetPriorityForRequestNotification(PCWSTR pszModuleName, DWORD dwRequestNotification, PCWSTR pszPriorityAlias) = 0;
};
typedef IHttpApplicationProvider IHttpApplicationStopProvider;
class __declspec(uuid("63fdc43f-934a-4ee5-bcd8-7e7b50b75605")) IGlobalRSCAQueryProvider:public IHttpEventProvider
{
	public virtual PCWSTR GetFunctionName(VOID)const = 0;
	virtual PCWSTR GetFunctionParameters(VOID)const = 0;
	virtual HRESULT GetOutputBuffer(DWORD cbBuffer, BYTE **ppbBuffer) = 0;
	virtual HRESULT ResizeOutputBuffer(DWORD cbNewBuffer, DWORD cbBytesToCopy, BYTE **ppbBuffer) = 0;
	virtual VOID SetResult(DWORD cbData, HRESULT hr) = 0;
};
class __declspec(uuid("41f9a601-e25d-4ac8-8a1f-635698a30ab9")) IGlobalStopListeningProvider:public IHttpEventProvider
{
	public virtual BOOL DrainRequestsGracefully(VOID)const = 0;
};
class __declspec(uuid("58925fb9-7c5e-4684-833b-4a04e1286690")) ICacheProvider:public IHttpEventProvider
{
	public virtual CACHE_OPERATION GetCacheOperation(VOID)const = 0;
	virtual IHttpCacheKey *GetCacheKey(VOID)const = 0;
	virtual IHttpCacheSpecificData *GetCacheRecord(VOID)const = 0;
	virtual VOID SetCacheRecord(IHttpCacheSpecificData *pCacheRecord) = 0;
	virtual IHttpTraceContext *GetTraceContext(VOID)const = 0;
};
class __declspec(uuid("3405f3b4-b3d6-4b73-b5f5-4d8a3cc642ce")) IGlobalConfigurationChangeProvider:public IHttpEventProvider
{
	public virtual PCWSTR GetChangePath(VOID)const = 0;
};
class __declspec(uuid("ece31ee5-0486-4fb0-a875-6739a2d7daf5")) IGlobalFileChangeProvider:public IHttpEventProvider
{
	public virtual PCWSTR GetFileName(VOID)const = 0;
	virtual IHttpFileMonitor *GetFileMonitor(VOID) = 0;
};
class __declspec(uuid("7c6bb150-0310-4718-a01f-6faceb62dc1d")) IGlobalTraceEventProvider:public IHttpEventProvider
{
	public virtual HRESULT GetTraceEvent(HTTP_TRACE_EVENT **ppTraceEvent) = 0;
	virtual BOOL CheckSubscription(HTTP_MODULE_ID ModuleId) = 0;
	virtual HRESULT GetCurrentHttpRequestContext(IHttpContext **ppHttpContext) = 0;
};
class __declspec(uuid("6b36a149-8620-45a0-8197-00814a706e2e")) IGlobalThreadCleanupProvider:public IHttpEventProvider
{
	public virtual IHttpApplication *GetApplication(VOID) = 0;
};
class __declspec(uuid("2111f8d6-0c41-4ff7-bd45-5c04c7e91a73")) IGlobalApplicationPreloadProvider:public IHttpEventProvider
{
	public virtual HRESULT CreateContext(IHttpContext **ppHttpContext) = 0;
	virtual HRESULT ExecuteRequest(IHttpContext *pHttpContext, IHttpUser *pHttpUser) = 0;
};
class CHttpModule {
	public virtual REQUEST_NOTIFICATION_STATUS OnBeginRequest(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnPostBeginRequest(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnAuthenticateRequest(IHttpContext *pHttpContext, IAuthenticationProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnPostAuthenticateRequest(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnAuthorizeRequest(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnPostAuthorizeRequest(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnResolveRequestCache(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnPostResolveRequestCache(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnMapRequestHandler(IHttpContext *pHttpContext, IMapHandlerProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnPostMapRequestHandler(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnAcquireRequestState(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnPostAcquireRequestState(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnPreExecuteRequestHandler(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnPostPreExecuteRequestHandler(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnExecuteRequestHandler(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnPostExecuteRequestHandler(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnReleaseRequestState(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnPostReleaseRequestState(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnUpdateRequestCache(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnPostUpdateRequestCache(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnLogRequest(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnPostLogRequest(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnEndRequest(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnPostEndRequest(IHttpContext *pHttpContext, IHttpEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnSendResponse(IHttpContext *pHttpContext, ISendResponseProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnMapPath(IHttpContext *pHttpContext, IMapPathProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnReadEntity(IHttpContext *pHttpContext, IReadEntityProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnCustomRequestNotification(IHttpContext *pHttpContext, ICustomNotificationProvider *pProvider) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual REQUEST_NOTIFICATION_STATUS OnAsyncCompletion(IHttpContext *pHttpContext, DWORD dwNotification, BOOL fPostNotification, IHttpEventProvider *pProvider, IHttpCompletionInfo *pCompletionInfo) {
		UNREFERENCED_PARAMETER(pHttpContext);
		UNREFERENCED_PARAMETER(dwNotification);
		UNREFERENCED_PARAMETER(fPostNotification);
		UNREFERENCED_PARAMETER(pProvider);
		UNREFERENCED_PARAMETER(pCompletionInfo);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CHttpModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();

		return RQ_NOTIFICATION_CONTINUE;
	}
	virtual VOID Dispose(VOID) {
		delete this;
	}
	protected CHttpModule() {
	}
	virtual ~ CHttpModule()
	{
	}
};
class CGlobalModule {
	public virtual GLOBAL_NOTIFICATION_STATUS OnGlobalStopListening(IGlobalStopListeningProvider *pProvider) {
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}
	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalCacheCleanup(VOID) {
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}

	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalCacheOperation(ICacheProvider *pProvider) {
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}

	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalHealthCheck(VOID) {
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}

	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalConfigurationChange(IGlobalConfigurationChangeProvider *pProvider) {
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}

	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalFileChange(IGlobalFileChangeProvider *pProvider) {
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}

	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalPreBeginRequest(IPreBeginRequestProvider *pProvider) {
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}

	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalApplicationStart(IHttpApplicationStartProvider *pProvider) {
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}

	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalApplicationResolveModules(IHttpApplicationResolveModulesProvider *pProvider) {
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}
	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalApplicationStop(IHttpApplicationStopProvider *pProvider) {
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}

	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalRSCAQuery(IGlobalRSCAQueryProvider *pProvider) {
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}

	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalTraceEvent(IGlobalTraceEventProvider *pProvider) {
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}

	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalCustomNotification(ICustomNotificationProvider *pProvider) {
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}
	virtual VOID Terminate(VOID) = 0;

	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalThreadCleanup(IGlobalThreadCleanupProvider *pProvider) {
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}

	virtual GLOBAL_NOTIFICATION_STATUS OnGlobalApplicationPreload(IGlobalApplicationPreloadProvider *pProvider) {
		UNREFERENCED_PARAMETER(pProvider);
		OutputDebugStringA("This module subscribed to event " __FUNCTION__ " but did not override the method in its CGlobalModule implementation." "  Please check the method signature to make sure it matches the corresponding method.\n");
		DebugBreak();
		return GL_NOTIFICATION_CONTINUE;
	}
};
class __declspec(uuid("85c1679c-0b21-491c-afb5-c7b5c86464c4")) IModuleAllocator
{
	public virtual VOID *AllocateMemory(DWORD cbAllocation) = 0;
};
class __declspec(uuid("ba32d330-9ea8-4b9e-89f1-8c76a323277f")) IHttpModuleFactory
{
	public virtual HRESULT GetHttpModule(CHttpModule **ppModule, IModuleAllocator *pAllocator) = 0;
	virtual VOID Terminate(VOID) = 0;
};
class __declspec(uuid("07e5beb3-b798-459d-a98a-e6c485b2b3bc")) IHttpModuleRegistrationInfo
{
	public virtual PCWSTR GetName(VOID)const = 0;
	virtual HTTP_MODULE_ID GetId(VOID)const = 0;
	virtual HRESULT SetRequestNotifications(IHttpModuleFactory *pModuleFactory, DWORD dwRequestNotifications, DWORD dwPostRequestNotifications) = 0;
	virtual HRESULT SetGlobalNotifications(CGlobalModule *pGlobalModule, DWORD dwGlobalNotifications) = 0;
	virtual HRESULT SetPriorityForRequestNotification(DWORD dwRequestNotification, PCWSTR pszPriority) = 0;
	virtual HRESULT SetPriorityForGlobalNotification(DWORD dwGlobalNotification, PCWSTR pszPriority) = 0;
};
#endif
typedef HRESULT(WINAPI *PFN_REGISTERMODULE) (DWORD dwServerVersion, IHttpModuleRegistrationInfo *pModuleInfo, IHttpServer *pGlobalInfo);
#define MODULE_REGISTERMODULE   "RegisterModule"
#endif


