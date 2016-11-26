/*+@@file@@----------------------------------------------------------------*//*!
 \file		TxtHelper.h
 \par Description 
            Sample showing how to use D3D9Ex advanced features.
 \par  Status: 
            
 \par Project: 
            fSDK
 \date		Created  on Sun Nov 13 12:40:36 2016
 \date		Modified on Sun Nov 13 12:40:36 2016
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/
typedef struct
{
    ID3DXFont*   m_pFont;
    ID3DXSprite* m_pSprite;
    COLORREF     m_clr;
    POINT        m_pt;
    int          m_nLineHeight;
} CTextHelper;

CTextHelper    *CTextHelperCreate( ID3DXFont* pFont, ID3DXSprite* pSprite, int nLineHeight );
void            CTextHelperSetInsertionPos(CTextHelper *this, int x, int y);
void            CTextHelperSetForegroundColor(CTextHelper *this, COLORREF clr);
HRESULT __cdecl CTextHelperDrawFormattedTextLine( CTextHelper *this, const WCHAR* strMsg, ... );
HRESULT         CTextHelperDrawTextLine( CTextHelper *this, const WCHAR* strMsg );
HRESULT __cdecl CTextHelperDrawFormattedTextLineEx( CTextHelper *this, RECT *rc, DWORD dwFlags, const WCHAR* strMsg, ... );
HRESULT         CTextHelperDrawTextLineEx( CTextHelper *this, RECT *rc, DWORD dwFlags, const WCHAR* strMsg );
void            CTextHelperBegin(CTextHelper *this);
void            CTextHelperEnd(CTextHelper *this);
