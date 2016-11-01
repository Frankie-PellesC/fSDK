/*+@@file@@----------------------------------------------------------------*//*!
 \file		RichEditMng.c
 \par Description 
            RichEditMng.h/c implement the utility functions that are used 
            for interacting with the RichEdit control.
 \par  Status: 
 \par Project: 
 \date		Created  on Mon Oct 31 01:03:20 2016
 \date		Modified on Mon Oct 31 01:03:20 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "RichEditMng.h"
#include "PropertyStore.h"
#include <strsafe.h>
#include "resource.h"
#pragma warn(disable:2154)

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		FCSampleAppRichEditManagerCreate
 \date		Created  on Mon Oct 31 01:03:39 2016
 \date		Modified on Mon Oct 31 01:03:39 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
FCSampleAppRichEditManager *FCSampleAppRichEditManagerCreate(HWND hWnd, HINSTANCE hInst)
{
	FCSampleAppRichEditManager *this = malloc(sizeof(FCSampleAppRichEditManager));
	if (!this)
		return NULL;

	this->m_hwnd     = hWnd;
	this->m_hInst    = hInst;
	this->m_uHeight  = 0;
	this->m_hWndEdit = NULL;

	ZeroMemory(&this->m_charDefaultFormat, sizeof(this->m_charDefaultFormat));
	this->m_charDefaultFormat.cbSize = sizeof(CHARFORMAT2);

	// Don't change these properties
	this->m_charDefaultFormat.dwMask = CFM_BOLD | CFM_ITALIC | CFM_UNDERLINE | CFM_STRIKEOUT | CFM_SUPERSCRIPT | CFM_SUBSCRIPT;

	// Change these.
	this->m_charDefaultFormat.dwMask |= CFM_FACE | CFM_SIZE | CFM_COLOR | CFM_BACKCOLOR;
	this->m_charDefaultFormat.dwEffects |= CFE_AUTOCOLOR | CFE_AUTOBACKCOLOR;

	WCHAR wszDefaultFont[MAX_LOADSTRING] = { 0 };
	LoadString(this->m_hInst, IDS_DEFAULTTEXTFONT, wszDefaultFont, MAX_LOADSTRING);

	StringCchCopyW(this->m_charDefaultFormat.szFaceName, ARRAYSIZE(this->m_charDefaultFormat.szFaceName), wszDefaultFont);
	this->m_charDefaultFormat.yHeight = (LONG) (24 * TWIPS_PER_POINT);

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		FCSampleAppRichEditManagerGetRichEditWnd
 \date		Created  on Mon Oct 31 01:17:57 2016
 \date		Modified on Mon Oct 31 01:17:57 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HWND FCSampleAppRichEditManagerGetRichEditWnd(FCSampleAppRichEditManager * this)
{
	return this->m_hWndEdit;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		FCSampleAppRichEditManagerSetHeight
 \details	Set current height of the ribbon.
 \date		Created  on Mon Oct 31 01:03:55 2016
 \date		Modified on Mon Oct 31 01:03:55 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT FCSampleAppRichEditManagerSetHeight(FCSampleAppRichEditManager *this, UINT uHeight)
{
	this->m_uHeight = uHeight;

	// Resize the RichEdit control.
	return FCSampleAppRichEditManagerResize(this);
}

// Create RichEdit control for text formatting.
static HRESULT _CreateRichEdit(FCSampleAppRichEditManager *this)
{
	HRESULT hr = E_FAIL;
	HMODULE hModule = LoadLibrary(L"Riched20.dll");
	if (NULL != hModule)
	{
		RECT rc;
		GetClientRect(this->m_hwnd, &rc);

		this->m_hWndEdit = CreateWindowEx(0, RICHEDIT_CLASS, L"", ES_MULTILINE | WS_VISIBLE | WS_CHILD | WS_BORDER | WS_TABSTOP, 0, this->m_uHeight, rc.right, rc.bottom - this->m_uHeight, this->m_hwnd, NULL, this->m_hInst, NULL);
		if (this->m_hWndEdit)
		{
			SendMessage(this->m_hWndEdit, (UINT)EM_SETEVENTMASK, 0, (LPARAM)ENM_SELCHANGE);
			SendMessage(this->m_hWndEdit, (UINT)EM_SETCHARFORMAT, (WPARAM)SCF_SELECTION, (LPARAM) & this->m_charDefaultFormat);

			hr = S_OK;
		}
		else
		{
			FreeLibrary(hModule);
		}
	}

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		FCSampleAppRichEditManagerResize
 \details	Resize the RichEdit control.
 \date		Created  on Mon Oct 31 01:06:37 2016
 \date		Modified on Mon Oct 31 01:06:37 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT FCSampleAppRichEditManagerResize(FCSampleAppRichEditManager *this)
{
	HRESULT hr = S_OK;
	if (this->m_uHeight != 0)
	{
		// Make sure the RichEdit control covers the client area left by the ribbon.
		RECT rc;
		GetClientRect(this->m_hwnd, &rc);
		if (this->m_hWndEdit == NULL)
		{
			// Control hasn't been created yet so create it using the height.
			hr = _CreateRichEdit(this);
		}
		else
		{
			// Resize the control.
			if (!SetWindowPos(this->m_hWndEdit, 0, 0, this->m_uHeight, rc.right, rc.bottom - this->m_uHeight, SWP_NOREPOSITION | SWP_NOACTIVATE | SWP_NOZORDER))
			{
				hr = E_FAIL;
			}
		}
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		FCSampleAppRichEditManagerSetValues
 \details	Set the values for the font to use for the selection in the 
            RichEdit control.
 \date		Created  on Mon Oct 31 01:08:49 2016
 \date		Modified on Mon Oct 31 01:08:49 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void FCSampleAppRichEditManagerSetValues(FCSampleAppRichEditManager *this, IPropertyStore *pps)
{
	if (this->m_hWndEdit)
	{
		CHARFORMAT2 charFormat;
		GetCharFormat2FromIPropertyStore(pps, &charFormat);

		SendMessage(this->m_hWndEdit, (UINT)EM_SETCHARFORMAT, (WPARAM)SCF_SELECTION, (LPARAM) & charFormat);
	}
	else
	{
		GetCharFormat2FromIPropertyStore(pps, &this->m_charDefaultFormat);
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		FCSampleAppRichEditManagerGetValues
 \details	Get the values for the font used for the selection in the 
            RichEdit control.
 \date		Created  on Mon Oct 31 01:09:26 2016
 \date		Modified on Mon Oct 31 01:09:26 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void FCSampleAppRichEditManagerGetValues(FCSampleAppRichEditManager *this, IPropertyStore *pps)
{
	if (this->m_hWndEdit)
	{
		CHARFORMAT2 charFormat;
		ZeroMemory(&charFormat, sizeof(charFormat));
		charFormat.cbSize = sizeof(CHARFORMAT2);
		SendMessage(this->m_hWndEdit, (UINT)EM_GETCHARFORMAT, (WPARAM)SCF_SELECTION, (LPARAM) & charFormat);
		GetIPropStoreFromCharFormat2(&charFormat, pps);
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		FCSampleAppRichEditManagerSetPreviewValues
 \details	Preview the given font values for the selection in the RichEdit 
            control.
 \date		Created  on Mon Oct 31 01:10:30 2016
 \date		Modified on Mon Oct 31 01:10:30 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void FCSampleAppRichEditManagerSetPreviewValues(FCSampleAppRichEditManager *this, IPropertyStore *pps)
{
	CHARFORMAT2 charFormat;
	GetCharFormat2FromIPropertyStore(pps, &charFormat);

	SendMessage(this->m_hWndEdit, (UINT)EM_SETCHARFORMAT, (WPARAM)SCF_SELECTION, (LPARAM) & charFormat);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		FCSampleAppRichEditManagerCancelPreview
 \details	Cancel preview for the selection in the RichEdit control.
 \date		Created  on Mon Oct 31 01:11:59 2016
 \date		Modified on Mon Oct 31 01:11:59 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void FCSampleAppRichEditManagerCancelPreview(FCSampleAppRichEditManager *this, IPropertyStore *pps)
{
	FCSampleAppRichEditManagerSetPreviewValues(this, pps);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		FCSampleAppRichEditManagerShowSelection
 \details	Show the selection of text.
 \date		Created  on Mon Oct 31 01:12:27 2016
 \date		Modified on Mon Oct 31 01:12:27 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void FCSampleAppRichEditManagerShowSelection(FCSampleAppRichEditManager *this)
{
	SendMessage(this->m_hWndEdit, (UINT)EM_HIDESELECTION, (WPARAM)0, 0);
}
