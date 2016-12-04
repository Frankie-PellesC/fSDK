/*+@@file@@----------------------------------------------------------------*//*!
 \file		dxutil.c
 \par Description 
            Shortcut macros and functions for using DX objects
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 19:05:27 2016
 \date		Modified on Sun Dec  4 19:05:27 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#define STRICT
#include <windows.h>
#include <mmsystem.h>
#include <tchar.h>
#include <stdio.h>
#include <stdarg.h>
#include "DXUtil.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_GetDXSDKMediaPath
 \details	Returns the DirectX SDK media path
 \date		Created  on Sun Dec  4 19:05:59 2016
 \date		Modified on Sun Dec  4 19:05:59 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
const TCHAR *DXUtil_GetDXSDKMediaPath(void)
{
	static TCHAR strNull[2] = _T("");
	static TCHAR strPath[MAX_PATH];
	DWORD dwType;
	DWORD dwSize = MAX_PATH;
	HKEY hKey;

	// Open the appropriate registry key
	LONG lResult = RegOpenKeyEx(HKEY_LOCAL_MACHINE,
		_T("Software\\Microsoft\\DirectX SDK"),
		0, KEY_READ, &hKey);
	if (ERROR_SUCCESS != lResult)
		return strNull;

	lResult = RegQueryValueEx(hKey, _T("DX81SDK Samples Path"), NULL, &dwType, (BYTE *)strPath, &dwSize);
	RegCloseKey(hKey);

	if (ERROR_SUCCESS != lResult)
		return strNull;

	_tcscat(strPath, _T("\\Media\\"));

	return strPath;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_FindMediaFile
 \details	Returns a valid path to a DXSDK media file
 \date		Created  on Sun Dec  4 19:06:13 2016
 \date		Modified on Sun Dec  4 19:06:13 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT DXUtil_FindMediaFile(TCHAR *strPath, TCHAR *strFilename)
{
	HANDLE file;
	TCHAR strFullPath[1024];
	TCHAR *strShortName;
	DWORD cchPath;

	if (NULL == strFilename || NULL == strPath)
		return E_INVALIDARG;

	// Build full path name from strFileName (strShortName will be just the leaf filename)
	cchPath = GetFullPathName(strFilename, sizeof(strFullPath) / sizeof(TCHAR), strFullPath, &strShortName);
	if ((cchPath == 0) || (sizeof(strFullPath) / sizeof(TCHAR) <= cchPath))
		return E_FAIL;

	// first try to find the filename given a full path
	file = CreateFile(strFullPath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
	if (INVALID_HANDLE_VALUE != file)
	{
		_tcscpy(strPath, strFullPath);
		CloseHandle(file);
		return S_OK;
	}

	// next try to find the filename in the current working directory (path stripped)
	file = CreateFile(strShortName, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
	if (INVALID_HANDLE_VALUE != file)
	{
		_tcscpy(strPath, strShortName);
		CloseHandle(file);
		return S_OK;
	}

	// last, check if the file exists in the media directory
	_stprintf(strPath, sizeof(strPath), _T("%ls%ls"), DXUtil_GetDXSDKMediaPath(), strShortName);

	file = CreateFile(strPath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
	if (INVALID_HANDLE_VALUE != file)
	{
		CloseHandle(file);
		return S_OK;
	}

	// On failure, just return the file as the path
	_tcscpy(strPath, strFilename);
	return E_FAIL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_ReadStringRegKey
 \details	Helper function to read a registry key string
 \date		Created  on Sun Dec  4 19:06:23 2016
 \date		Modified on Sun Dec  4 19:06:23 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT DXUtil_ReadStringRegKey(HKEY hKey, TCHAR *strRegName, TCHAR *strValue, DWORD dwLength, TCHAR *strDefault)
{
	DWORD dwType;

	if (ERROR_SUCCESS != RegQueryValueEx(hKey, strRegName, 0, &dwType, (BYTE *)strValue, &dwLength))
	{
		_tcscpy(strValue, strDefault);
	}

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_WriteStringRegKey
 \details	Helper function to write a registry key string
 \date		Created  on Sun Dec  4 19:06:39 2016
 \date		Modified on Sun Dec  4 19:06:39 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT DXUtil_WriteStringRegKey(HKEY hKey, TCHAR *strRegName, TCHAR *strValue)
{
	if (ERROR_SUCCESS != RegSetValueEx(hKey, strRegName, 0, REG_SZ, (BYTE *)strValue, (_tcslen(strValue) + 1) * sizeof(TCHAR)))
		return E_FAIL;

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_ReadIntRegKey
 \details	Helper function to read a registry key int
 \date		Created  on Sun Dec  4 19:06:54 2016
 \date		Modified on Sun Dec  4 19:06:54 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT DXUtil_ReadIntRegKey(HKEY hKey, TCHAR *strRegName, DWORD *pdwValue, DWORD dwDefault)
{
	DWORD dwType;
	DWORD dwLength = sizeof(DWORD);

	if (ERROR_SUCCESS != RegQueryValueEx(hKey, strRegName, 0, &dwType, (BYTE *)pdwValue, &dwLength))
	{
		*pdwValue = dwDefault;
	}

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_WriteIntRegKey
 \details	Helper function to write a registry key int
 \date		Created  on Sun Dec  4 19:07:07 2016
 \date		Modified on Sun Dec  4 19:07:07 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT DXUtil_WriteIntRegKey(HKEY hKey, TCHAR *strRegName, DWORD dwValue)
{
	if (ERROR_SUCCESS != RegSetValueEx(hKey, strRegName, 0, REG_DWORD, (BYTE *) & dwValue, sizeof(DWORD)))
		return E_FAIL;

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_ReadBoolRegKey
 \details	Helper function to read a registry key BOOL
 \date		Created  on Sun Dec  4 19:07:21 2016
 \date		Modified on Sun Dec  4 19:07:21 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT DXUtil_ReadBoolRegKey(HKEY hKey, TCHAR *strRegName, BOOL *pbValue, BOOL bDefault)
{
	DWORD dwType;
	DWORD dwLength = sizeof(BOOL);

	if (ERROR_SUCCESS != RegQueryValueEx(hKey, strRegName, 0, &dwType, (BYTE *)pbValue, &dwLength))
	{
		*pbValue = bDefault;
	}

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_WriteBoolRegKey
 \details	Helper function to write a registry key BOOL
 \date		Created  on Sun Dec  4 19:07:33 2016
 \date		Modified on Sun Dec  4 19:07:33 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT DXUtil_WriteBoolRegKey(HKEY hKey, TCHAR *strRegName, BOOL bValue)
{
	if (ERROR_SUCCESS != RegSetValueEx(hKey, strRegName, 0, REG_DWORD, (BYTE *) & bValue, sizeof(BOOL)))
		return E_FAIL;

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_ReadGuidRegKey
 \details	Helper function to read a registry key guid
 \date		Created  on Sun Dec  4 19:07:51 2016
 \date		Modified on Sun Dec  4 19:07:51 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT DXUtil_ReadGuidRegKey(HKEY hKey, TCHAR *strRegName, GUID *pGuidValue, GUID *guidDefault)
{
	DWORD dwType;
	DWORD dwLength = sizeof(GUID);

	if (ERROR_SUCCESS != RegQueryValueEx(hKey, strRegName, 0, &dwType, (LPBYTE)pGuidValue, &dwLength))
	{
		*pGuidValue = *guidDefault;
	}

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_WriteGuidRegKey
 \details	Helper function to write a registry key guid
 \date		Created  on Sun Dec  4 19:08:08 2016
 \date		Modified on Sun Dec  4 19:08:08 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT DXUtil_WriteGuidRegKey(HKEY hKey, TCHAR *strRegName, GUID guidValue)
{
	if (ERROR_SUCCESS != RegSetValueEx(hKey, strRegName, 0, REG_BINARY, (BYTE *) & guidValue, sizeof(GUID)))
		return E_FAIL;

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_Timer
 \details	Performs timer opertations.
            Use the following commands:
            TIMER_RESET to reset the timer
            TIMER_START to start the timer
            TIMER_STOP to stop (or pause) the timer
            TIMER_ADVANCE to advance the timer by 0.1 seconds
            TIMER_GETABSOLUTETIME to get the absolute system time
            TIMER_GETAPPTIME to get the current time
            TIMER_GETELAPSEDTIME to get the time that elapsed between
            TIMER_GETELAPSEDTIME calls
 \date		Created  on Sun Dec  4 19:11:22 2016
 \date		Modified on Sun Dec  4 19:11:22 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
FLOAT __stdcall DXUtil_Timer(TIMER_COMMAND command)
{
	static BOOL m_bTimerInitialized = FALSE;
	static BOOL m_bUsingQPF = FALSE;
	static BOOL m_bTimerStopped = TRUE;
	static LONGLONG m_llQPFTicksPerSec = 0;

	// Initialize the timer
	if (FALSE == m_bTimerInitialized)
	{
		m_bTimerInitialized = TRUE;

		// Use QueryPerformanceFrequency() to get frequency of timer.  If QPF is
		// not supported, we will timeGetTime() which returns milliseconds.
		LARGE_INTEGER qwTicksPerSec;
		m_bUsingQPF = QueryPerformanceFrequency(&qwTicksPerSec);
		if (m_bUsingQPF)
			m_llQPFTicksPerSec = qwTicksPerSec.QuadPart;
	}

	if (m_bUsingQPF)
	{
		static LONGLONG m_llStopTime = 0;
		static LONGLONG m_llLastElapsedTime = 0;
		static LONGLONG m_llBaseTime = 0;
		double fTime;
		double fElapsedTime;
		LARGE_INTEGER qwTime;

		// Get either the current time or the stop time, depending
		// on whether we're stopped and what command was sent
		if (m_llStopTime != 0 && command != TIMER_START && command != TIMER_GETABSOLUTETIME)
			qwTime.QuadPart = m_llStopTime;
		else
			QueryPerformanceCounter(&qwTime);

		// Return the elapsed time
		if (command == TIMER_GETELAPSEDTIME)
		{
			fElapsedTime = (double)(qwTime.QuadPart - m_llLastElapsedTime) / (double)m_llQPFTicksPerSec;
			m_llLastElapsedTime = qwTime.QuadPart;
			return (FLOAT)fElapsedTime;
		}

		// Return the current time
		if (command == TIMER_GETAPPTIME)
		{
			double fAppTime = (double)(qwTime.QuadPart - m_llBaseTime) / (double)m_llQPFTicksPerSec;
			return (FLOAT)fAppTime;
		}

		// Reset the timer
		if (command == TIMER_RESET)
		{
			m_llBaseTime = qwTime.QuadPart;
			m_llLastElapsedTime = qwTime.QuadPart;
			m_llStopTime = 0;
			m_bTimerStopped = FALSE;
			return 0.0f;
		}

		// Start the timer
		if (command == TIMER_START)
		{
			if (m_bTimerStopped)
				m_llBaseTime += qwTime.QuadPart - m_llStopTime;
			m_llStopTime = 0;
			m_llLastElapsedTime = qwTime.QuadPart;
			m_bTimerStopped = FALSE;
			return 0.0f;
		}

		// Stop the timer
		if (command == TIMER_STOP)
		{
			m_llStopTime = qwTime.QuadPart;
			m_llLastElapsedTime = qwTime.QuadPart;
			m_bTimerStopped = TRUE;
			return 0.0f;
		}

		// Advance the timer by 1/10th second
		if (command == TIMER_ADVANCE)
		{
			m_llStopTime += m_llQPFTicksPerSec / 10;
			return 0.0f;
		}

		if (command == TIMER_GETABSOLUTETIME)
		{
			fTime = qwTime.QuadPart / (double)m_llQPFTicksPerSec;
			return (FLOAT)fTime;
		}

		return -1.0f;	// Invalid command specified
	}
	else
	{
		// Get the time using timeGetTime()
		static double m_fLastElapsedTime = 0.0;
		static double m_fBaseTime = 0.0;
		static double m_fStopTime = 0.0;
		double fTime;
		double fElapsedTime;

		// Get either the current time or the stop time, depending
		// on whether we're stopped and what command was sent
		if (m_fStopTime != 0.0 && command != TIMER_START && command != TIMER_GETABSOLUTETIME)
			fTime = m_fStopTime;
		else
			fTime = timeGetTime() * 0.001;

		// Return the elapsed time
		if (command == TIMER_GETELAPSEDTIME)
		{
			fElapsedTime = (double)(fTime - m_fLastElapsedTime);
			m_fLastElapsedTime = fTime;
			return (FLOAT)fElapsedTime;
		}

		// Return the current time
		if (command == TIMER_GETAPPTIME)
		{
			return (FLOAT) (fTime - m_fBaseTime);
		}

		// Reset the timer
		if (command == TIMER_RESET)
		{
			m_fBaseTime = fTime;
			m_fLastElapsedTime = fTime;
			m_fStopTime = 0;
			m_bTimerStopped = FALSE;
			return 0.0f;
		}

		// Start the timer
		if (command == TIMER_START)
		{
			if (m_bTimerStopped)
				m_fBaseTime += fTime - m_fStopTime;
			m_fStopTime = 0.0f;
			m_fLastElapsedTime = fTime;
			m_bTimerStopped = FALSE;
			return 0.0f;
		}

		// Stop the timer
		if (command == TIMER_STOP)
		{
			m_fStopTime = fTime;
			m_fLastElapsedTime = fTime;
			m_bTimerStopped = TRUE;
			return 0.0f;
		}

		// Advance the timer by 1/10th second
		if (command == TIMER_ADVANCE)
		{
			m_fStopTime += 0.1f;
			return 0.0f;
		}

		if (command == TIMER_GETABSOLUTETIME)
		{
			return (FLOAT)fTime;
		}

		return -1.0f;	// Invalid command specified
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_ConvertAnsiStringToWide
 \details	This is a UNICODE conversion utility to convert a CHAR string 
            into a WCHAR string. cchDestChar defaults -1 which means it 
            assumes strDest is large enough to store strSource
 \date		Created  on Sun Dec  4 19:12:34 2016
 \date		Modified on Sun Dec  4 19:12:34 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DXUtil_ConvertAnsiStringToWide(WCHAR *wstrDestination, const CHAR *strSource, int cchDestChar)
{
	if (wstrDestination == NULL || strSource == NULL)
		return;

	if (cchDestChar == -1)
		cchDestChar = strlen(strSource) + 1;

	MultiByteToWideChar(CP_ACP, 0, strSource, -1, wstrDestination, cchDestChar - 1);

	wstrDestination[cchDestChar - 1] = 0;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_ConvertWideStringToAnsi
 \details	This is a UNICODE conversion utility to convert a WCHAR string 
            into a CHAR string. cchDestChar defaults -1 which means it 
            assumes strDest is large enough to store strSource
 \date		Created  on Sun Dec  4 19:12:56 2016
 \date		Modified on Sun Dec  4 19:12:56 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DXUtil_ConvertWideStringToAnsi(CHAR *strDestination, const WCHAR *wstrSource, int cchDestChar)
{
	if (strDestination == NULL || wstrSource == NULL)
		return;

	if (cchDestChar == -1)
		cchDestChar = wcslen(wstrSource) + 1;

	WideCharToMultiByte(CP_ACP, 0, wstrSource, -1, strDestination, cchDestChar - 1, NULL, NULL);

	strDestination[cchDestChar - 1] = 0;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_ConvertGenericStringToAnsi
 \details	This is a UNICODE conversion utility to convert a TCHAR string 
            into a CHAR string. cchDestChar defaults -1 which means it 
            assumes strDest is large enough to store strSource
 \date		Created  on Sun Dec  4 19:13:19 2016
 \date		Modified on Sun Dec  4 19:13:19 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DXUtil_ConvertGenericStringToAnsi(CHAR *strDestination, const TCHAR *tstrSource, int cchDestChar)
{
	if (strDestination == NULL || tstrSource == NULL || cchDestChar == 0)
		return;

#ifdef _UNICODE
	DXUtil_ConvertWideStringToAnsi(strDestination, tstrSource, cchDestChar);
#else
	if (cchDestChar == -1)
	{
		strcpy(strDestination, tstrSource);
	}
	else
	{
		strncpy(strDestination, tstrSource, cchDestChar);
		strDestination[cchDestChar - 1] = '\0';
	}
#endif
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_ConvertGenericStringToWide
 \details	This is a UNICODE conversion utility to convert a TCHAR string 
            into a WCHAR string. cchDestChar defaults -1 which means it 
            assumes strDest is large enough to store strSource
 \date		Created  on Sun Dec  4 19:13:46 2016
 \date		Modified on Sun Dec  4 19:13:46 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DXUtil_ConvertGenericStringToWide(WCHAR *wstrDestination, const TCHAR *tstrSource, int cchDestChar)
{
	if (wstrDestination == NULL || tstrSource == NULL || cchDestChar == 0)
		return;

#ifdef _UNICODE
	if (cchDestChar == -1)
	{
		wcscpy(wstrDestination, tstrSource);
	}
	else
	{
		wcsncpy(wstrDestination, tstrSource, cchDestChar);
		wstrDestination[cchDestChar - 1] = L'\0';
	}
#else
	DXUtil_ConvertAnsiStringToWide(wstrDestination, tstrSource, cchDestChar);
#endif
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_ConvertAnsiStringToGeneric
 \details	This is a UNICODE conversion utility to convert a CHAR string 
            into a TCHAR string. cchDestChar defaults -1 which means it 
            assumes strDest is large enough to store strSource
 \date		Created  on Sun Dec  4 19:14:11 2016
 \date		Modified on Sun Dec  4 19:14:11 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DXUtil_ConvertAnsiStringToGeneric(TCHAR *tstrDestination, const CHAR *strSource, int cchDestChar)
{
	if (tstrDestination == NULL || strSource == NULL || cchDestChar == 0)
		return;

#ifdef _UNICODE
	DXUtil_ConvertAnsiStringToWide(tstrDestination, strSource, cchDestChar);
#else
	if (cchDestChar == -1)
	{
		strcpy(tstrDestination, strSource);
	}
	else
	{
		strncpy(tstrDestination, strSource, cchDestChar);
		tstrDestination[cchDestChar - 1] = '\0';
	}
#endif
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_ConvertWideStringToGeneric
 \details	This is a UNICODE conversion utility to convert a WCHAR string 
            into a TCHAR string. cchDestChar defaults -1 which means it 
            assumes strDest is large enough to store strSource
 \date		Created  on Sun Dec  4 19:14:33 2016
 \date		Modified on Sun Dec  4 19:14:33 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DXUtil_ConvertWideStringToGeneric(TCHAR *tstrDestination, const WCHAR *wstrSource, int cchDestChar)
{
	if (tstrDestination == NULL || wstrSource == NULL || cchDestChar == 0)
		return;

#ifdef _UNICODE
	if (cchDestChar == -1)
	{
		wcscpy(tstrDestination, wstrSource);
	}
	else
	{
		wcsncpy(tstrDestination, wstrSource, cchDestChar);
		tstrDestination[cchDestChar - 1] = L'\0';
	}
#else
	DXUtil_ConvertWideStringToAnsi(tstrDestination, wstrSource, cchDestChar);
#endif
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_DbgOut
 \details	Outputs a message to the debug stream
 \date		Created  on Sun Dec  4 19:14:50 2016
 \date		Modified on Sun Dec  4 19:14:50 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT _DbgOut(TCHAR *strFile, DWORD dwLine, HRESULT hr, TCHAR *strMsg)
{
	TCHAR buffer[256];
	wsprintf(buffer, _T("%s(%ld): "), strFile, dwLine);
	OutputDebugString(buffer);
	OutputDebugString(strMsg);

	if (hr)
	{
		wsprintf(buffer, _T("(hr=%08lx)\n"), hr);
		OutputDebugString(buffer);
	}

	OutputDebugString(_T("\n"));

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_Trace
 \details	Outputs to the debug stream a formatted string with a 
            variable-argument list.
 \date		Created  on Sun Dec  4 19:15:13 2016
 \date		Modified on Sun Dec  4 19:15:13 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DXUtil_Trace(TCHAR *strMsg, ...)
{
#if defined(DEBUG) | defined(_DEBUG)
	TCHAR strBuffer[512];

	va_list args;
	va_start(args, strMsg);
	_vsntprintf(strBuffer, 512, strMsg, args);
	va_end(args);

	OutputDebugString(strBuffer);
#else
	UNREFERENCED_PARAMETER(strMsg);
#endif
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_ConvertStringToGUID
 \details	Converts a string to a GUID
 \date		Created  on Sun Dec  4 19:15:32 2016
 \date		Modified on Sun Dec  4 19:15:32 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL DXUtil_ConvertStringToGUID(const TCHAR *strIn, GUID *pGuidOut)
{
	UINT aiTmp[10];

	if (_stscanf(strIn, TEXT("{%8X-%4X-%4X-%2X%2X-%2X%2X%2X%2X%2X%2X}"),
			&pGuidOut->Data1, &aiTmp[0], &aiTmp[1], &aiTmp[2], &aiTmp[3],
							&aiTmp[4], &aiTmp[5], &aiTmp[6], &aiTmp[7], &aiTmp[8], &aiTmp[9]) != 11)
	{
		ZeroMemory(pGuidOut, sizeof(GUID));
		return FALSE;
	}
	else
	{
		pGuidOut->Data2 = (USHORT)aiTmp[0];
		pGuidOut->Data3 = (USHORT)aiTmp[1];
		pGuidOut->Data4[0] = (BYTE)aiTmp[2];
		pGuidOut->Data4[1] = (BYTE)aiTmp[3];
		pGuidOut->Data4[2] = (BYTE)aiTmp[4];
		pGuidOut->Data4[3] = (BYTE)aiTmp[5];
		pGuidOut->Data4[4] = (BYTE)aiTmp[6];
		pGuidOut->Data4[5] = (BYTE)aiTmp[7];
		pGuidOut->Data4[6] = (BYTE)aiTmp[8];
		pGuidOut->Data4[7] = (BYTE)aiTmp[9];
		return TRUE;
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DXUtil_ConvertGUIDToString
 \details	Converts a GUID to a string
 \date		Created  on Sun Dec  4 19:15:44 2016
 \date		Modified on Sun Dec  4 19:15:44 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID DXUtil_ConvertGUIDToString(const GUID *pGuidIn, TCHAR *strOut)
{
	_stprintf(strOut, 80, TEXT("{%0.8X-%0.4X-%0.4X-%0.2X%0.2X-%0.2X%0.2X%0.2X%0.2X%0.2X%0.2X}"),
						pGuidIn->Data1, pGuidIn->Data2, pGuidIn->Data3,
						pGuidIn->Data4[0], pGuidIn->Data4[1], pGuidIn->Data4[2], pGuidIn->Data4[3],
						pGuidIn->Data4[4], pGuidIn->Data4[5], pGuidIn->Data4[6], pGuidIn->Data4[7]);
}
