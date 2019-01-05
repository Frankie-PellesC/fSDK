/*+@@file@@----------------------------------------------------------------*//*!
 \file		WinBase.Inl
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Thu Sep  8 18:34:12 2016
 \date		Modified on Thu Sep  8 18:34:12 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#if !defined(RC_INVOKED)
#if defined(ISOLATION_AWARE_ENABLED) && (ISOLATION_AWARE_ENABLED != 0)
#if !defined(ISOLATION_AWARE_USE_STATIC_LIBRARY)
#define ISOLATION_AWARE_USE_STATIC_LIBRARY 0
#endif
#if !defined(ISOLATION_AWARE_BUILD_STATIC_LIBRARY)
#define ISOLATION_AWARE_BUILD_STATIC_LIBRARY 0
#endif
#if !defined(ISOLATION_AWARE_INLINE)
#if ISOLATION_AWARE_BUILD_STATIC_LIBRARY
#define ISOLATION_AWARE_INLINE
#else
#define ISOLATION_AWARE_INLINE __inline
#endif
#endif
#if !ISOLATION_AWARE_USE_STATIC_LIBRARY
#define IsolationAwarePrivatenCv WINAPI
#ifdef _M_IX86
ISOLATION_AWARE_INLINE HMODULE IsolationAwarePrivatenCv IsolationAwarePrivatezlybNQyVOeNeln(PCSTR s)
{
	return LoadLibraryA(s);
}
ISOLATION_AWARE_INLINE HMODULE IsolationAwarePrivatenCv IsolationAwarePrivatezltRgzbQhYRuNaQYRn(PCSTR s)
{
	return GetModuleHandleA(s);
}
#endif
ISOLATION_AWARE_INLINE HMODULE IsolationAwarePrivatenCv IsolationAwarePrivatezlybNQyVOeNelJ(PCWSTR s)
{
	return LoadLibraryW(s);
}
ISOLATION_AWARE_INLINE HMODULE IsolationAwarePrivatenCv IsolationAwarePrivatezltRgzbQhYRuNaQYRJ(PCWSTR s)
{
	return GetModuleHandleW(s);
}
BOOL IsolationAwarePrivatenCv IsolationAwarePrivatenPgViNgRzlnPgpgk(ULONG_PTR *pulpCookie);
	HANDLE WinbaseIsolationAwarePrivateT_UnPgpgk = INVALID_HANDLE_VALUE;
#ifdef _M_IX86
	BOOL IsolationAwarePrivateT_SqbjaYRiRY = FALSE;
#endif
	BOOL WinbaseIsolationAwarePrivateT_SpeRNgRQnPgpgk = FALSE;
	BOOL WinbaseIsolationAwarePrivateT_SpYRNahcpNYYRQ = FALSE;
	FARPROC IsolationAwarePrivatenCv WinbaseIsolationAwarePrivatetRgCebPnQQeRff_xReaRYQP_QYY(LPCSTR pszProcName);
#endif
	HMODULE IsolationAwarePrivatenCv IsolationAwareLoadLibraryA(LPCSTR lpLibFileName);
	HMODULE IsolationAwarePrivatenCv IsolationAwareLoadLibraryW(LPCWSTR lpLibFileName);
	HMODULE IsolationAwarePrivatenCv IsolationAwareLoadLibraryExA(LPCSTR lpLibFileName, HANDLE hFile, DWORD dwFlags);
	HMODULE IsolationAwarePrivatenCv IsolationAwareLoadLibraryExW(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags);
	HANDLE IsolationAwarePrivatenCv IsolationAwareCreateActCtxW(PCACTCTXW pActCtx);
	void IsolationAwarePrivatenCv IsolationAwareReleaseActCtx(HANDLE hActCtx);
	BOOL IsolationAwarePrivatenCv IsolationAwareActivateActCtx(HANDLE hActCtx, ULONG_PTR * lpCookie);
	BOOL IsolationAwarePrivatenCv IsolationAwareDeactivateActCtx(DWORD dwFlags, ULONG_PTR ulCookie);
	BOOL IsolationAwarePrivatenCv IsolationAwareFindActCtxSectionStringW(DWORD dwFlags, const GUID * lpExtensionGuid, ULONG ulSectionId, LPCWSTR lpStringToFind, PACTCTX_SECTION_KEYED_DATA ReturnedData);
	BOOL IsolationAwarePrivatenCv IsolationAwareQueryActCtxW(DWORD dwFlags, HANDLE hActCtx, PVOID pvSubInstance, ULONG ulInfoClass, PVOID pvBuffer, SIZE_T cbBuffer, SIZE_T * pcbWrittenOrRequired);
#if defined(UNICODE)
#define IsolationAwareLoadLibrary IsolationAwareLoadLibraryW
#define IsolationAwareLoadLibraryEx IsolationAwareLoadLibraryExW
#else
#define IsolationAwareLoadLibrary IsolationAwareLoadLibraryA
#define IsolationAwareLoadLibraryEx IsolationAwareLoadLibraryExA
#endif
#if !ISOLATION_AWARE_USE_STATIC_LIBRARY
	ISOLATION_AWARE_INLINE HMODULE IsolationAwarePrivatenCv IsolationAwareLoadLibraryA(LPCSTR lpLibFileName)
{
	HMODULE result = NULL;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return result;
	__try
	{
		result = LoadLibraryA(lpLibFileName);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (result == NULL);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return result;
}
ISOLATION_AWARE_INLINE HMODULE IsolationAwarePrivatenCv IsolationAwareLoadLibraryW(LPCWSTR lpLibFileName)
{
	HMODULE result = NULL;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return result;
	__try
	{
		result = LoadLibraryW(lpLibFileName);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (result == NULL);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return result;
}
ISOLATION_AWARE_INLINE HMODULE IsolationAwarePrivatenCv IsolationAwareLoadLibraryExA(LPCSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)
{
	HMODULE result = NULL;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return result;
	__try
	{
		result = LoadLibraryExA(lpLibFileName, hFile, dwFlags);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (result == NULL);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return result;
}
ISOLATION_AWARE_INLINE HMODULE IsolationAwarePrivatenCv IsolationAwareLoadLibraryExW(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)
{
	HMODULE result = NULL;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return result;
	__try
	{
		result = LoadLibraryExW(lpLibFileName, hFile, dwFlags);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (result == NULL);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return result;
}
ISOLATION_AWARE_INLINE HANDLE IsolationAwarePrivatenCv IsolationAwareCreateActCtxW(PCACTCTXW pActCtx)
{
#ifdef _WIN64
	return CreateActCtxW(pActCtx);
#else
	HANDLE result = INVALID_HANDLE_VALUE;
	typedef HANDLE(WINAPI *PFN) (PCACTCTXW pActCtx);
	static PFN s_pfn;
	PFN __IsolationAware_pfn = s_pfn;
	if (__IsolationAware_pfn == NULL)
	{
		__IsolationAware_pfn = (PFN)WinbaseIsolationAwarePrivatetRgCebPnQQeRff_xReaRYQP_QYY("CreateActCtxW");
		if (__IsolationAware_pfn == NULL)
			return result;
		s_pfn = __IsolationAware_pfn;
	}
	result = __IsolationAware_pfn(pActCtx);
	return result;
#endif
}
ISOLATION_AWARE_INLINE void IsolationAwarePrivatenCv IsolationAwareReleaseActCtx(HANDLE hActCtx)
{
#ifdef _WIN64
	ReleaseActCtx(hActCtx);
#else
	typedef void (WINAPI *PFN) (HANDLE hActCtx);
	static PFN s_pfn;
	PFN __IsolationAware_pfn = s_pfn;
	if (__IsolationAware_pfn == NULL)
	{
		__IsolationAware_pfn = (PFN)WinbaseIsolationAwarePrivatetRgCebPnQQeRff_xReaRYQP_QYY("ReleaseActCtx");
		if (__IsolationAware_pfn == NULL)
			return;
		s_pfn = __IsolationAware_pfn;
	}
	__IsolationAware_pfn(hActCtx);
	return;
#endif
}
ISOLATION_AWARE_INLINE BOOL IsolationAwarePrivatenCv IsolationAwareActivateActCtx(HANDLE hActCtx, ULONG_PTR *lpCookie)
{
#ifdef _WIN64
	return ActivateActCtx(hActCtx, lpCookie);
#else
	BOOL fResult = FALSE;
	typedef BOOL(WINAPI *PFN) (HANDLE hActCtx, ULONG_PTR *lpCookie);
	static PFN s_pfn;
	PFN __IsolationAware_pfn = s_pfn;
	if (__IsolationAware_pfn == NULL)
	{
		__IsolationAware_pfn = (PFN)WinbaseIsolationAwarePrivatetRgCebPnQQeRff_xReaRYQP_QYY("ActivateActCtx");
		if (__IsolationAware_pfn == NULL)
			return fResult;
		s_pfn = __IsolationAware_pfn;
	}
	fResult = __IsolationAware_pfn(hActCtx, lpCookie);
	return fResult;
#endif
}
ISOLATION_AWARE_INLINE BOOL IsolationAwarePrivatenCv IsolationAwareDeactivateActCtx(DWORD dwFlags, ULONG_PTR ulCookie)
{
#ifdef _WIN64
	return DeactivateActCtx(dwFlags, ulCookie);
#else
	BOOL fResult = FALSE;
	typedef BOOL(WINAPI *PFN) (DWORD dwFlags, ULONG_PTR ulCookie);
	static PFN s_pfn;
	PFN __IsolationAware_pfn = s_pfn;
	if (__IsolationAware_pfn == NULL)
	{
		__IsolationAware_pfn = (PFN)WinbaseIsolationAwarePrivatetRgCebPnQQeRff_xReaRYQP_QYY("DeactivateActCtx");
		if (__IsolationAware_pfn == NULL)
			return fResult;
		s_pfn = __IsolationAware_pfn;
	}
	fResult = __IsolationAware_pfn(dwFlags, ulCookie);
	return fResult;
#endif
}
ISOLATION_AWARE_INLINE BOOL IsolationAwarePrivatenCv IsolationAwareFindActCtxSectionStringW(DWORD dwFlags, const GUID *lpExtensionGuid, ULONG ulSectionId, LPCWSTR lpStringToFind, PACTCTX_SECTION_KEYED_DATA ReturnedData)
{
#ifdef _WIN64
	return FindActCtxSectionStringW(dwFlags, lpExtensionGuid, ulSectionId, lpStringToFind, ReturnedData);
#else
	BOOL fResult = FALSE;
	typedef BOOL(WINAPI *PFN) (DWORD dwFlags, const GUID *lpExtensionGuid, ULONG ulSectionId, LPCWSTR lpStringToFind, PACTCTX_SECTION_KEYED_DATA ReturnedData);
	static PFN s_pfn;
	PFN __IsolationAware_pfn = s_pfn;
	if (__IsolationAware_pfn == NULL)
	{
		__IsolationAware_pfn = (PFN)WinbaseIsolationAwarePrivatetRgCebPnQQeRff_xReaRYQP_QYY("FindActCtxSectionStringW");
		if (__IsolationAware_pfn == NULL)
			return fResult;
		s_pfn = __IsolationAware_pfn;
	}
	fResult = __IsolationAware_pfn(dwFlags, lpExtensionGuid, ulSectionId, lpStringToFind, ReturnedData);
	return fResult;
#endif
}
ISOLATION_AWARE_INLINE BOOL IsolationAwarePrivatenCv IsolationAwareQueryActCtxW(DWORD dwFlags, HANDLE hActCtx, PVOID pvSubInstance, ULONG ulInfoClass, PVOID pvBuffer, SIZE_T cbBuffer, SIZE_T *pcbWrittenOrRequired)
{
#ifdef _WIN64
	return QueryActCtxW(dwFlags, hActCtx, pvSubInstance, ulInfoClass, pvBuffer, cbBuffer, pcbWrittenOrRequired);
#else
	BOOL fResult = FALSE;
	typedef BOOL(WINAPI *PFN) (DWORD dwFlags, HANDLE hActCtx, PVOID pvSubInstance, ULONG ulInfoClass, PVOID pvBuffer, SIZE_T cbBuffer, SIZE_T *pcbWrittenOrRequired);
	static PFN s_pfn;
	PFN __IsolationAware_pfn = s_pfn;
	if (__IsolationAware_pfn == NULL)
	{
		__IsolationAware_pfn = (PFN)WinbaseIsolationAwarePrivatetRgCebPnQQeRff_xReaRYQP_QYY("QueryActCtxW");
		if (__IsolationAware_pfn == NULL)
			return fResult;
		s_pfn = __IsolationAware_pfn;
	}
	fResult = __IsolationAware_pfn(dwFlags, hActCtx, pvSubInstance, ulInfoClass, pvBuffer, cbBuffer, pcbWrittenOrRequired);
	return fResult;
#endif
}
#define WINBASE_NUMBER_OF(x) (sizeof(x) / sizeof((x)[0]))
typedef struct IsolationAwarePrivate_pBAFGnAG_zBqHyr_vAsB {
	HMODULE(IsolationAwarePrivatenCv *WinbaseIsolationAwarePrivateybNQJ) (PCWSTR w);
	PCWSTR WinbaseIsolationAwarePrivateANZRJ;
#ifdef _M_IX86
	       HMODULE(IsolationAwarePrivatenCv *WinbaseIsolationAwarePrivateybNQn) (PCSTR w);
	PCSTR WinbaseIsolationAwarePrivateANZRn;
#endif
} IsolationAwarePrivatepBAFGnAG_zBqHyr_vAsB;
typedef const IsolationAwarePrivatepBAFGnAG_zBqHyr_vAsB *IsolationAwarePrivateCpBAFGnAG_zBqHyr_vAsB;
typedef struct IsolationAwarePrivate_zHGnoyr_zBqHyr_vAsB {
	HMODULE WinbaseIsolationAwarePrivateybNQRQzbQhYR;
} IsolationAwarePrivatezHGnoyr_zBqHyr_vAsB, *IsolationAwarePrivateCzHGnoyr_zBqHyr_vAsB;
ISOLATION_AWARE_INLINE FARPROC IsolationAwarePrivatenCv IsolationAwarePrivatezltRgCebPnQQeRff(IsolationAwarePrivateCpBAFGnAG_zBqHyr_vAsB c, IsolationAwarePrivateCzHGnoyr_zBqHyr_vAsB m, PCSTR ProcName)
{
	FARPROC Proc = NULL;
	HMODULE hModule;
#ifdef _M_IX86
	static HMODULE s_moduleUnicows;
	static BOOL s_fUnicowsInitialized;
	if (!s_fUnicowsInitialized)
	{
		if ((GetVersion() & 0x80000000) != 0)
		{
			GetFileAttributesW(L"???.???");
			s_moduleUnicows = GetModuleHandleA("Unicows.dll");
		}
		s_fUnicowsInitialized = TRUE;
	}
	if (s_moduleUnicows != NULL)
	{
		Proc = GetProcAddress(s_moduleUnicows, ProcName);
		if (Proc != NULL)
			goto Exit;
	}
#endif
	hModule = m->WinbaseIsolationAwarePrivateybNQRQzbQhYR;
	if (hModule == NULL)
	{
#ifdef _M_IX86
		hModule = (((GetVersion() & 0x80000000) != 0) ? (*c->WinbaseIsolationAwarePrivateybNQn) (c->WinbaseIsolationAwarePrivateANZRn) : (*c->WinbaseIsolationAwarePrivateybNQJ) (c->WinbaseIsolationAwarePrivateANZRJ));
#else
		hModule = (*c->WinbaseIsolationAwarePrivateybNQJ) (c->WinbaseIsolationAwarePrivateANZRJ);
#endif
		if (hModule == NULL)
			goto Exit;
		m->WinbaseIsolationAwarePrivateybNQRQzbQhYR = hModule;
	}
	Proc = GetProcAddress(hModule, ProcName);
	Exit: return Proc;
}
ISOLATION_AWARE_INLINE BOOL IsolationAwarePrivatenCv WinbaseIsolationAwarePrivatetRgzlnPgpgk(void)
{
	BOOL fResult = FALSE;
	ACTIVATION_CONTEXT_BASIC_INFORMATION actCtxBasicInfo;
	ULONG_PTR ulpCookie = 0;
#ifdef _M_IX86
	if (IsolationAwarePrivateT_SqbjaYRiRY)
	{
		fResult = TRUE;
		goto Exit;
	}
#endif
	if (WinbaseIsolationAwarePrivateT_UnPgpgk != INVALID_HANDLE_VALUE)
	{
		fResult = TRUE;
		goto Exit;
	}
	if (!IsolationAwareQueryActCtxW(QUERY_ACTCTX_FLAG_ACTCTX_IS_ADDRESS | QUERY_ACTCTX_FLAG_NO_ADDREF, &WinbaseIsolationAwarePrivateT_UnPgpgk, NULL, ActivationContextBasicInformation, &actCtxBasicInfo, sizeof(actCtxBasicInfo), NULL))
		goto Exit;
	if (actCtxBasicInfo.hActCtx == NULL)
	{
		ACTCTXW actCtx;
		WCHAR rgchFullModulePath[MAX_PATH + 2];
		DWORD dw;
		HMODULE hmodSelf;
#ifdef _M_IX86
		PGET_MODULE_HANDLE_EXW pfnGetModuleHandleExW = (PGET_MODULE_HANDLE_EXW)WinbaseIsolationAwarePrivatetRgCebPnQQeRff_xReaRYQP_QYY("GetModuleHandleExW");
		if (pfnGetModuleHandleExW == NULL)
			goto Exit;
#endif
		if (!
#ifdef _M_IX86
			(*pfnGetModuleHandleExW)
#else
			GetModuleHandleExW
#endif
			(GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT | GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS, (LPCWSTR) & WinbaseIsolationAwarePrivateT_UnPgpgk, &hmodSelf))
			goto Exit;
		rgchFullModulePath[WINBASE_NUMBER_OF(rgchFullModulePath) - 1] = 0;
		rgchFullModulePath[WINBASE_NUMBER_OF(rgchFullModulePath) - 2] = 0;
		dw = GetModuleFileNameW(hmodSelf, rgchFullModulePath, WINBASE_NUMBER_OF(rgchFullModulePath) - 1);
		if (dw == 0)
			goto Exit;
		if (rgchFullModulePath[WINBASE_NUMBER_OF(rgchFullModulePath) - 2] != 0)
		{
			SetLastError(ERROR_BUFFER_OVERFLOW);
			goto Exit;
		}
		actCtx.cbSize = sizeof(actCtx);
		actCtx.dwFlags = ACTCTX_FLAG_RESOURCE_NAME_VALID | ACTCTX_FLAG_HMODULE_VALID;
		actCtx.lpSource = rgchFullModulePath;
		actCtx.lpResourceName = (LPCWSTR) (ULONG_PTR)3;
		actCtx.hModule = hmodSelf;
		actCtxBasicInfo.hActCtx = IsolationAwareCreateActCtxW(&actCtx);
		if (actCtxBasicInfo.hActCtx == INVALID_HANDLE_VALUE)
		{
			const DWORD dwLastError = GetLastError();
			if ((dwLastError != ERROR_RESOURCE_DATA_NOT_FOUND) && (dwLastError != ERROR_RESOURCE_TYPE_NOT_FOUND) && (dwLastError != ERROR_RESOURCE_LANG_NOT_FOUND) && (dwLastError != ERROR_RESOURCE_NAME_NOT_FOUND))
				goto Exit;
			actCtxBasicInfo.hActCtx = NULL;
		}
		WinbaseIsolationAwarePrivateT_SpeRNgRQnPgpgk = TRUE;
	}
	WinbaseIsolationAwarePrivateT_UnPgpgk = actCtxBasicInfo.hActCtx;
#define ACTIVATION_CONTEXT_SECTION_DLL_REDIRECTION              (2)
	if (IsolationAwareActivateActCtx(actCtxBasicInfo.hActCtx, &ulpCookie))
	{
		__try
		{
			ACTCTX_SECTION_KEYED_DATA actCtxSectionKeyedData;
			actCtxSectionKeyedData.cbSize = sizeof(actCtxSectionKeyedData);
			if (IsolationAwareFindActCtxSectionStringW(0, NULL, ACTIVATION_CONTEXT_SECTION_DLL_REDIRECTION, L"Comctl32.dll", &actCtxSectionKeyedData))
			{
				LoadLibraryW(L"Comctl32.dll");
			}
		}
		__finally
		{
			IsolationAwareDeactivateActCtx(0, ulpCookie);
		}
	}
	fResult = TRUE;
	Exit: return fResult;
}
ISOLATION_AWARE_INLINE BOOL IsolationAwarePrivatenCv IsolationAwareInit(void)
{
	return WinbaseIsolationAwarePrivatetRgzlnPgpgk();
}
ISOLATION_AWARE_INLINE void IsolationAwarePrivatenCv IsolationAwareCleanup(void)
{
	HANDLE hActCtx;
	if (WinbaseIsolationAwarePrivateT_SpYRNahcpNYYRQ)
		return;
	WinbaseIsolationAwarePrivateT_SpYRNahcpNYYRQ = TRUE;
	if (!WinbaseIsolationAwarePrivateT_SpeRNgRQnPgpgk)
		return;
	hActCtx = WinbaseIsolationAwarePrivateT_UnPgpgk;
	WinbaseIsolationAwarePrivateT_UnPgpgk = NULL;
	if (hActCtx == INVALID_HANDLE_VALUE)
		return;
	if (hActCtx == NULL)
		return;
	IsolationAwareReleaseActCtx(hActCtx);
}
ISOLATION_AWARE_INLINE BOOL IsolationAwarePrivatenCv IsolationAwarePrivatenPgViNgRzlnPgpgk(ULONG_PTR *pulpCookie)
{
	BOOL fResult = FALSE;
	if (WinbaseIsolationAwarePrivateT_SpYRNahcpNYYRQ)
	{
		const static char debugString[] = "IsolationAware function called after IsolationAwareCleanup\n";
		OutputDebugStringA(debugString);
	}
#ifdef _M_IX86
	if (IsolationAwarePrivateT_SqbjaYRiRY)
	{
		fResult = TRUE;
		goto Exit;
	}
#endif
	if (!WinbaseIsolationAwarePrivateT_SpYRNahcpNYYRQ)
	{
		if (!WinbaseIsolationAwarePrivatetRgzlnPgpgk())
			goto Exit;
	}
	if (!IsolationAwareActivateActCtx(WinbaseIsolationAwarePrivateT_UnPgpgk, pulpCookie))
		goto Exit;
	fResult = TRUE;
	Exit:
#ifdef _M_IX86
		if (!fResult)
	{
		const DWORD dwLastError = GetLastError();
		if (dwLastError == ERROR_PROC_NOT_FOUND || dwLastError == ERROR_MOD_NOT_FOUND || dwLastError == ERROR_CALL_NOT_IMPLEMENTED)
		{
			IsolationAwarePrivateT_SqbjaYRiRY = TRUE;
			fResult = TRUE;
		}
	}
#endif
	return fResult;
}
#undef WINBASE_NUMBER_OF
ISOLATION_AWARE_INLINE FARPROC IsolationAwarePrivatenCv WinbaseIsolationAwarePrivatetRgCebPnQQeRff_xReaRYQP_QYY(LPCSTR pszProcName)
{
	static HMODULE s_module;
	const static IsolationAwarePrivatepBAFGnAG_zBqHyr_vAsB c = { IsolationAwarePrivatezltRgzbQhYRuNaQYRJ, L"Kernel32.dll"
#ifdef _M_IX86
			, IsolationAwarePrivatezltRgzbQhYRuNaQYRn, "Kernel32.dll"
#endif
	};
	static IsolationAwarePrivatezHGnoyr_zBqHyr_vAsB m;
	return IsolationAwarePrivatezltRgCebPnQQeRff(&c, &m, pszProcName);
}
#endif
#define ActivateActCtx IsolationAwareActivateActCtx
#define CreateActCtxW IsolationAwareCreateActCtxW
#define DeactivateActCtx IsolationAwareDeactivateActCtx
#define FindActCtxSectionStringW IsolationAwareFindActCtxSectionStringW
#define LoadLibraryA IsolationAwareLoadLibraryA
#define LoadLibraryExA IsolationAwareLoadLibraryExA
#define LoadLibraryExW IsolationAwareLoadLibraryExW
#define LoadLibraryW IsolationAwareLoadLibraryW
#define QueryActCtxW IsolationAwareQueryActCtxW
#define ReleaseActCtx IsolationAwareReleaseActCtx
#endif
#endif
