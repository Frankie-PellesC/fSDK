/*+@@file@@----------------------------------------------------------------*//*!
 \file		WinUser.Inl
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Thu Sep  8 18:38:52 2016
 \date		Modified on Thu Sep  8 18:38:52 2016
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
#endif
ATOM IsolationAwarePrivatenCv IsolationAwareRegisterClassA(const WNDCLASSA *lpWndClass);
ATOM IsolationAwarePrivatenCv IsolationAwareRegisterClassW(const WNDCLASSW *lpWndClass);
BOOL IsolationAwarePrivatenCv IsolationAwareUnregisterClassA(LPCSTR lpClassName, HINSTANCE hInstance);
BOOL IsolationAwarePrivatenCv IsolationAwareUnregisterClassW(LPCWSTR lpClassName, HINSTANCE hInstance);
BOOL IsolationAwarePrivatenCv IsolationAwareGetClassInfoA(HINSTANCE hInstance, LPCSTR lpClassName, LPWNDCLASSA lpWndClass);
BOOL IsolationAwarePrivatenCv IsolationAwareGetClassInfoW(HINSTANCE hInstance, LPCWSTR lpClassName, LPWNDCLASSW lpWndClass);
ATOM IsolationAwarePrivatenCv IsolationAwareRegisterClassExA(const WNDCLASSEXA *unnamed1);
ATOM IsolationAwarePrivatenCv IsolationAwareRegisterClassExW(const WNDCLASSEXW *unnamed1);
BOOL IsolationAwarePrivatenCv IsolationAwareGetClassInfoExA(HINSTANCE hInstance, LPCSTR lpszClass, LPWNDCLASSEXA lpwcx);
BOOL IsolationAwarePrivatenCv IsolationAwareGetClassInfoExW(HINSTANCE hInstance, LPCWSTR lpszClass, LPWNDCLASSEXW lpwcx);
HWND IsolationAwarePrivatenCv IsolationAwareCreateWindowExA(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam);
HWND IsolationAwarePrivatenCv IsolationAwareCreateWindowExW(DWORD dwExStyle, LPCWSTR lpClassName, LPCWSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam);
HWND IsolationAwarePrivatenCv IsolationAwareCreateDialogParamA(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);
HWND IsolationAwarePrivatenCv IsolationAwareCreateDialogParamW(HINSTANCE hInstance, LPCWSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);
HWND IsolationAwarePrivatenCv IsolationAwareCreateDialogIndirectParamA(HINSTANCE hInstance, LPCDLGTEMPLATEA lpTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);
HWND IsolationAwarePrivatenCv IsolationAwareCreateDialogIndirectParamW(HINSTANCE hInstance, LPCDLGTEMPLATEW lpTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);
INT_PTR IsolationAwarePrivatenCv IsolationAwareDialogBoxParamA(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);
INT_PTR IsolationAwarePrivatenCv IsolationAwareDialogBoxParamW(HINSTANCE hInstance, LPCWSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);
INT_PTR IsolationAwarePrivatenCv IsolationAwareDialogBoxIndirectParamA(HINSTANCE hInstance, LPCDLGTEMPLATEA hDialogTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);
INT_PTR IsolationAwarePrivatenCv IsolationAwareDialogBoxIndirectParamW(HINSTANCE hInstance, LPCDLGTEMPLATEW hDialogTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam);
int IsolationAwarePrivatenCv IsolationAwareMessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType);
int IsolationAwarePrivatenCv IsolationAwareMessageBoxW(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType);
int IsolationAwarePrivatenCv IsolationAwareMessageBoxExA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType, WORD wLanguageId);
int IsolationAwarePrivatenCv IsolationAwareMessageBoxExW(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType, WORD wLanguageId);
int IsolationAwarePrivatenCv IsolationAwareMessageBoxIndirectA(const MSGBOXPARAMSA *lpmbp);
int IsolationAwarePrivatenCv IsolationAwareMessageBoxIndirectW(const MSGBOXPARAMSW *lpmbp);
#if defined(UNICODE)
#define IsolationAwareCreateDialogIndirectParam IsolationAwareCreateDialogIndirectParamW
#define IsolationAwareCreateDialogParam IsolationAwareCreateDialogParamW
#define IsolationAwareCreateWindowEx IsolationAwareCreateWindowExW
#define IsolationAwareDialogBoxIndirectParam IsolationAwareDialogBoxIndirectParamW
#define IsolationAwareDialogBoxParam IsolationAwareDialogBoxParamW
#define IsolationAwareGetClassInfo IsolationAwareGetClassInfoW
#define IsolationAwareGetClassInfoEx IsolationAwareGetClassInfoExW
#define IsolationAwareMessageBox IsolationAwareMessageBoxW
#define IsolationAwareMessageBoxEx IsolationAwareMessageBoxExW
#define IsolationAwareMessageBoxIndirect IsolationAwareMessageBoxIndirectW
#define IsolationAwareRegisterClass IsolationAwareRegisterClassW
#define IsolationAwareRegisterClassEx IsolationAwareRegisterClassExW
#define IsolationAwareUnregisterClass IsolationAwareUnregisterClassW
#else
#define IsolationAwareCreateDialogIndirectParam IsolationAwareCreateDialogIndirectParamA
#define IsolationAwareCreateDialogParam IsolationAwareCreateDialogParamA
#define IsolationAwareCreateWindowEx IsolationAwareCreateWindowExA
#define IsolationAwareDialogBoxIndirectParam IsolationAwareDialogBoxIndirectParamA
#define IsolationAwareDialogBoxParam IsolationAwareDialogBoxParamA
#define IsolationAwareGetClassInfo IsolationAwareGetClassInfoA
#define IsolationAwareGetClassInfoEx IsolationAwareGetClassInfoExA
#define IsolationAwareMessageBox IsolationAwareMessageBoxA
#define IsolationAwareMessageBoxEx IsolationAwareMessageBoxExA
#define IsolationAwareMessageBoxIndirect IsolationAwareMessageBoxIndirectA
#define IsolationAwareRegisterClass IsolationAwareRegisterClassA
#define IsolationAwareRegisterClassEx IsolationAwareRegisterClassExA
#define IsolationAwareUnregisterClass IsolationAwareUnregisterClassA
#endif
#if !ISOLATION_AWARE_USE_STATIC_LIBRARY
ISOLATION_AWARE_INLINE ATOM IsolationAwarePrivatenCv IsolationAwareRegisterClassA(const WNDCLASSA *lpWndClass)
{
	ATOM result = 0;
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
		result = RegisterClassA(lpWndClass);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (result == 0);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return result;
}
ISOLATION_AWARE_INLINE ATOM IsolationAwarePrivatenCv IsolationAwareRegisterClassW(const WNDCLASSW *lpWndClass)
{
	ATOM result = 0;
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
		result = RegisterClassW(lpWndClass);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (result == 0);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return result;
}
ISOLATION_AWARE_INLINE BOOL IsolationAwarePrivatenCv IsolationAwareUnregisterClassA(LPCSTR lpClassName, HINSTANCE hInstance)
{
	BOOL fResult = FALSE;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return fResult;
	__try
	{
		fResult = UnregisterClassA(lpClassName, hInstance);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (fResult == FALSE);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return fResult;
}
ISOLATION_AWARE_INLINE BOOL IsolationAwarePrivatenCv IsolationAwareUnregisterClassW(LPCWSTR lpClassName, HINSTANCE hInstance)
{
	BOOL fResult = FALSE;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return fResult;
	__try
	{
		fResult = UnregisterClassW(lpClassName, hInstance);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (fResult == FALSE);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return fResult;
}
ISOLATION_AWARE_INLINE BOOL IsolationAwarePrivatenCv IsolationAwareGetClassInfoA(HINSTANCE hInstance, LPCSTR lpClassName, LPWNDCLASSA lpWndClass)
{
	BOOL fResult = FALSE;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return fResult;
	__try
	{
		fResult = GetClassInfoA(hInstance, lpClassName, lpWndClass);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (fResult == FALSE);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return fResult;
}
ISOLATION_AWARE_INLINE BOOL IsolationAwarePrivatenCv IsolationAwareGetClassInfoW(HINSTANCE hInstance, LPCWSTR lpClassName, LPWNDCLASSW lpWndClass)
{
	BOOL fResult = FALSE;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return fResult;
	__try
	{
		fResult = GetClassInfoW(hInstance, lpClassName, lpWndClass);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (fResult == FALSE);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return fResult;
}
ISOLATION_AWARE_INLINE ATOM IsolationAwarePrivatenCv IsolationAwareRegisterClassExA(const WNDCLASSEXA *unnamed1)
{
	ATOM result = 0;
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
		result = RegisterClassExA(unnamed1);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (result == 0);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return result;
}
ISOLATION_AWARE_INLINE ATOM IsolationAwarePrivatenCv IsolationAwareRegisterClassExW(const WNDCLASSEXW *unnamed1)
{
	ATOM result = 0;
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
		result = RegisterClassExW(unnamed1);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (result == 0);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return result;
}
ISOLATION_AWARE_INLINE BOOL IsolationAwarePrivatenCv IsolationAwareGetClassInfoExA(HINSTANCE hInstance, LPCSTR lpszClass, LPWNDCLASSEXA lpwcx)
{
	BOOL fResult = FALSE;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return fResult;
	__try
	{
		fResult = GetClassInfoExA(hInstance, lpszClass, lpwcx);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (fResult == FALSE);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return fResult;
}
ISOLATION_AWARE_INLINE BOOL IsolationAwarePrivatenCv IsolationAwareGetClassInfoExW(HINSTANCE hInstance, LPCWSTR lpszClass, LPWNDCLASSEXW lpwcx)
{
	BOOL fResult = FALSE;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return fResult;
	__try
	{
		fResult = GetClassInfoExW(hInstance, lpszClass, lpwcx);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (fResult == FALSE);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return fResult;
}
ISOLATION_AWARE_INLINE HWND IsolationAwarePrivatenCv IsolationAwareCreateWindowExA(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam)
{
	HWND windowResult = NULL;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return windowResult;
	__try
	{
		windowResult = CreateWindowExA(dwExStyle, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (windowResult == NULL);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return windowResult;
}
ISOLATION_AWARE_INLINE HWND IsolationAwarePrivatenCv IsolationAwareCreateWindowExW(DWORD dwExStyle, LPCWSTR lpClassName, LPCWSTR lpWindowName, DWORD dwStyle, int X, int Y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam)
{
	HWND windowResult = NULL;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return windowResult;
	__try
	{
		windowResult = CreateWindowExW(dwExStyle, lpClassName, lpWindowName, dwStyle, X, Y, nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (windowResult == NULL);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return windowResult;
}
ISOLATION_AWARE_INLINE HWND IsolationAwarePrivatenCv IsolationAwareCreateDialogParamA(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)
{
	HWND windowResult = NULL;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return windowResult;
	__try
	{
		windowResult = CreateDialogParamA(hInstance, lpTemplateName, hWndParent, lpDialogFunc, dwInitParam);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (windowResult == NULL);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return windowResult;
}
ISOLATION_AWARE_INLINE HWND IsolationAwarePrivatenCv IsolationAwareCreateDialogParamW(HINSTANCE hInstance, LPCWSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)
{
	HWND windowResult = NULL;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return windowResult;
	__try
	{
		windowResult = CreateDialogParamW(hInstance, lpTemplateName, hWndParent, lpDialogFunc, dwInitParam);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (windowResult == NULL);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return windowResult;
}
ISOLATION_AWARE_INLINE HWND IsolationAwarePrivatenCv IsolationAwareCreateDialogIndirectParamA(HINSTANCE hInstance, LPCDLGTEMPLATEA lpTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)
{
	HWND windowResult = NULL;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return windowResult;
	__try
	{
		windowResult = CreateDialogIndirectParamA(hInstance, lpTemplate, hWndParent, lpDialogFunc, dwInitParam);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (windowResult == NULL);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return windowResult;
}
ISOLATION_AWARE_INLINE HWND IsolationAwarePrivatenCv IsolationAwareCreateDialogIndirectParamW(HINSTANCE hInstance, LPCDLGTEMPLATEW lpTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)
{
	HWND windowResult = NULL;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return windowResult;
	__try
	{
		windowResult = CreateDialogIndirectParamW(hInstance, lpTemplate, hWndParent, lpDialogFunc, dwInitParam);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (windowResult == NULL);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return windowResult;
}
ISOLATION_AWARE_INLINE INT_PTR IsolationAwarePrivatenCv IsolationAwareDialogBoxParamA(HINSTANCE hInstance, LPCSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)
{
	INT_PTR nResult = -1;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return nResult;
	__try
	{
		nResult = DialogBoxParamA(hInstance, lpTemplateName, hWndParent, lpDialogFunc, dwInitParam);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (nResult == -1);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return nResult;
}
ISOLATION_AWARE_INLINE INT_PTR IsolationAwarePrivatenCv IsolationAwareDialogBoxParamW(HINSTANCE hInstance, LPCWSTR lpTemplateName, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)
{
	INT_PTR nResult = -1;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return nResult;
	__try
	{
		nResult = DialogBoxParamW(hInstance, lpTemplateName, hWndParent, lpDialogFunc, dwInitParam);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (nResult == -1);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return nResult;
}
ISOLATION_AWARE_INLINE INT_PTR IsolationAwarePrivatenCv IsolationAwareDialogBoxIndirectParamA(HINSTANCE hInstance, LPCDLGTEMPLATEA hDialogTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)
{
	INT_PTR nResult = -1;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return nResult;
	__try
	{
		nResult = DialogBoxIndirectParamA(hInstance, hDialogTemplate, hWndParent, lpDialogFunc, dwInitParam);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (nResult == -1);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return nResult;
}
ISOLATION_AWARE_INLINE INT_PTR IsolationAwarePrivatenCv IsolationAwareDialogBoxIndirectParamW(HINSTANCE hInstance, LPCDLGTEMPLATEW hDialogTemplate, HWND hWndParent, DLGPROC lpDialogFunc, LPARAM dwInitParam)
{
	INT_PTR nResult = -1;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return nResult;
	__try
	{
		nResult = DialogBoxIndirectParamW(hInstance, hDialogTemplate, hWndParent, lpDialogFunc, dwInitParam);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (nResult == -1);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return nResult;
}
ISOLATION_AWARE_INLINE int IsolationAwarePrivatenCv IsolationAwareMessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType)
{
	int nResult = 0;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return nResult;
	__try
	{
		nResult = MessageBoxA(hWnd, lpText, lpCaption, uType);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (nResult == 0);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return nResult;
}
ISOLATION_AWARE_INLINE int IsolationAwarePrivatenCv IsolationAwareMessageBoxW(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType)
{
	int nResult = 0;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return nResult;
	__try
	{
		nResult = MessageBoxW(hWnd, lpText, lpCaption, uType);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (nResult == 0);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return nResult;
}
ISOLATION_AWARE_INLINE int IsolationAwarePrivatenCv IsolationAwareMessageBoxExA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType, WORD wLanguageId)
{
	int nResult = 0;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return nResult;
	__try
	{
		nResult = MessageBoxExA(hWnd, lpText, lpCaption, uType, wLanguageId);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (nResult == 0);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return nResult;
}
ISOLATION_AWARE_INLINE int IsolationAwarePrivatenCv IsolationAwareMessageBoxExW(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType, WORD wLanguageId)
{
	int nResult = 0;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return nResult;
	__try
	{
		nResult = MessageBoxExW(hWnd, lpText, lpCaption, uType, wLanguageId);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (nResult == 0);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return nResult;
}
ISOLATION_AWARE_INLINE int IsolationAwarePrivatenCv IsolationAwareMessageBoxIndirectA(const MSGBOXPARAMSA *lpmbp)
{
	int nResult = 0;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return nResult;
	__try
	{
		nResult = MessageBoxIndirectA(lpmbp);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (nResult == 0);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return nResult;
}
ISOLATION_AWARE_INLINE int IsolationAwarePrivatenCv IsolationAwareMessageBoxIndirectW(const MSGBOXPARAMSW *lpmbp)
{
	int nResult = 0;
	ULONG_PTR ulpCookie = 0;
	const BOOL fActivateActCtxSuccess =
#ifdef _M_IX86
		IsolationAwarePrivateT_SqbjaYRiRY ||
#endif
		IsolationAwarePrivatenPgViNgRzlnPgpgk(&ulpCookie);
	if (!fActivateActCtxSuccess)
		return nResult;
	__try
	{
		nResult = MessageBoxIndirectW(lpmbp);
	}
	__finally
	{
#ifdef _M_IX86
		if (!IsolationAwarePrivateT_SqbjaYRiRY)
#endif
		{
			const BOOL fPreserveLastError = (nResult == 0);
			const DWORD dwLastError = fPreserveLastError ? GetLastError() : NO_ERROR;
			(void)IsolationAwareDeactivateActCtx(0, ulpCookie);
			if (fPreserveLastError)
				SetLastError(dwLastError);
		}
	}
	return nResult;
}
ISOLATION_AWARE_INLINE FARPROC IsolationAwarePrivatenCv WinuserIsolationAwarePrivatetRgCebPnQQeRff_HfReQP_QYY(LPCSTR pszProcName)
{
	static HMODULE s_module;
	const static IsolationAwarePrivatepBAFGnAG_zBqHyr_vAsB c = { IsolationAwarePrivatezlybNQyVOeNelJ, L"User32.dll"
#ifdef _M_IX86
			, IsolationAwarePrivatezlybNQyVOeNeln, "User32.dll"
#endif
	};
	static IsolationAwarePrivatezHGnoyr_zBqHyr_vAsB m;
	return IsolationAwarePrivatezltRgCebPnQQeRff(&c, &m, pszProcName);
}
#endif
#define CreateDialogIndirectParamA IsolationAwareCreateDialogIndirectParamA
#define CreateDialogIndirectParamW IsolationAwareCreateDialogIndirectParamW
#define CreateDialogParamA IsolationAwareCreateDialogParamA
#define CreateDialogParamW IsolationAwareCreateDialogParamW
#define CreateWindowExA IsolationAwareCreateWindowExA
#define CreateWindowExW IsolationAwareCreateWindowExW
#define DialogBoxIndirectParamA IsolationAwareDialogBoxIndirectParamA
#define DialogBoxIndirectParamW IsolationAwareDialogBoxIndirectParamW
#define DialogBoxParamA IsolationAwareDialogBoxParamA
#define DialogBoxParamW IsolationAwareDialogBoxParamW
#define GetClassInfoExA IsolationAwareGetClassInfoExA
#define GetClassInfoExW IsolationAwareGetClassInfoExW
#define MessageBoxExA IsolationAwareMessageBoxExA
#define MessageBoxExW IsolationAwareMessageBoxExW
#define MessageBoxIndirectA IsolationAwareMessageBoxIndirectA
#define MessageBoxIndirectW IsolationAwareMessageBoxIndirectW
#define RegisterClassA IsolationAwareRegisterClassA
#define RegisterClassExA IsolationAwareRegisterClassExA
#define RegisterClassExW IsolationAwareRegisterClassExW
#define RegisterClassW IsolationAwareRegisterClassW
#define UnregisterClassA IsolationAwareUnregisterClassA
#define UnregisterClassW IsolationAwareUnregisterClassW
#endif
#endif
