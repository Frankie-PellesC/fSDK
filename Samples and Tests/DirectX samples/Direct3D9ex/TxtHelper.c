/*+@@file@@----------------------------------------------------------------*//*!
 \file		TxtHelper.c
 \par Description 
            Sample showing how to use D3D9Ex advanced features.
 \par  Status: 
            
 \par Project: 
            fSDK
 \date		Created  on Sun Nov 13 12:40:36 2016
 \date		Modified on Sun Nov 13 12:40:36 2016
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/
#include <windows.h>
#include <strsafe.h>
#include <d3d9.h>
#include <d3dx9.h>
#include "TxtHelper.h"

CTextHelper *CTextHelperCreate( ID3DXFont* pFont, ID3DXSprite* pSprite, int nLineHeight )
{
	CTextHelper *this = malloc(sizeof(CTextHelper));
	if (!this)
		return NULL;

    this->m_pFont = pFont;
    this->m_pSprite = pSprite;
    this->m_clr = 0x010101;
    this->m_pt.x = 0; 
    this->m_pt.y = 0; 
    this->m_nLineHeight = nLineHeight;

	return this;
}

void CTextHelperSetInsertionPos(CTextHelper *this, int x, int y)
{
	this->m_pt.x = x;
	this->m_pt.y = y;
}

void CTextHelperSetForegroundColor(CTextHelper *this, COLORREF clr)
{
	this->m_clr = clr;
}

#pragma warn(push)
#pragma warn(disable:2154)
HRESULT __cdecl CTextHelperDrawFormattedTextLine(  CTextHelper *this, const WCHAR* strMsg, ... )
{
    WCHAR strBuffer[512];
    
    va_list args;
    va_start(args, strMsg);
    StringCchVPrintf( strBuffer, 512, strMsg, args );
    strBuffer[511] = L'\0';
    va_end(args);

    return CTextHelperDrawTextLine( this, strBuffer );
}

HRESULT __cdecl CTextHelperDrawFormattedTextLineEx( CTextHelper *this, RECT *rc, DWORD dwFlags, const WCHAR* strMsg, ... )
{
    WCHAR strBuffer[512];
    
    va_list args;
    va_start(args, strMsg);
    StringCchVPrintf( strBuffer, 512, strMsg, args );
    strBuffer[511] = L'\0';
    va_end(args);

    return CTextHelperDrawTextLineEx( this, rc, dwFlags, strBuffer );
}
#pragma warn(pop)

HRESULT CTextHelperDrawTextLine( CTextHelper *this, const WCHAR* strMsg )
{
    if( NULL == this->m_pFont ) 
        return E_INVALIDARG;

    HRESULT hr;
    RECT rc;
    SetRect( &rc, this->m_pt.x, this->m_pt.y, 0, 0 ); 
    hr = this->m_pFont->lpVtbl->DrawText( this->m_pFont, this->m_pSprite, strMsg, -1, &rc, DT_NOCLIP, this->m_clr );
    if( FAILED(hr) )
        return hr;

    this->m_pt.y += this->m_nLineHeight;

    return S_OK;
}

HRESULT CTextHelperDrawTextLineEx( CTextHelper *this, RECT *rc, DWORD dwFlags, const WCHAR* strMsg )
{
    if( NULL == this->m_pFont ) 
        return E_INVALIDARG;

    HRESULT hr;
    hr = this->m_pFont->lpVtbl->DrawText( this->m_pFont, this->m_pSprite, strMsg, -1, rc, dwFlags, this->m_clr );
    if( FAILED(hr) )
        return hr;

    this->m_pt.y += this->m_nLineHeight;

    return S_OK;
}

void CTextHelperBegin(CTextHelper *this)
{
    if( this->m_pSprite )
        this->m_pSprite->lpVtbl->Begin( this->m_pSprite, D3DXSPRITE_ALPHABLEND | D3DXSPRITE_SORT_TEXTURE );
}

void CTextHelperEnd(CTextHelper *this)
{
    if( this->m_pSprite )
        this->m_pSprite->lpVtbl->End(this->m_pSprite);
}
