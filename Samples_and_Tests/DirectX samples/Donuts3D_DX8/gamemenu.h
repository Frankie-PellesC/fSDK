/*+@@file@@----------------------------------------------------------------*//*!
 \file		gamemenu.h
 \par Description 
            Code for in-game menus
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 19:33:28 2016
 \date		Modified on Sun Dec  4 19:33:28 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef GAMEMENU_H
#define GAMEMENU_H

//-----------------------------------------------------------------------------
// Name: class CMenuItem
// Desc: 
//-----------------------------------------------------------------------------
typedef struct CMenuItem
{
	TCHAR				strLabel[80];
	DWORD				dwID;
	struct CMenuItem*	pParent;
	struct CMenuItem*	pChild[10];
	DWORD				dwNumChildren;
	DWORD				dwSelectedMenu;
} CMenuItem;

HRESULT CMenuItemRender( CMenuItem *this, LPDIRECT3DDEVICE8 pd3dDevice, CD3DFont* pFont );
CMenuItem* CMenuItemAdd( CMenuItem *this, CMenuItem* );
CMenuItem *CMenuItemNew( TCHAR* strLabel, DWORD dwID );
void CMenuItemDelete(CMenuItem *this);

#endif
