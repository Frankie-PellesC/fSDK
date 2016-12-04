/*+@@file@@----------------------------------------------------------------*//*!
 \file		gamemenu.c
 \par Description 
            Code for in-game menus
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 19:17:11 2016
 \date		Modified on Sun Dec  4 19:17:11 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#define STRICT
#define D3D_OVERLOADS
#include <D3D8.h>
#include <D3DX8Math.h>
#include <mmsystem.h>
#include "D3DFont.h"
#include "D3DUtil.h"
#include "GameMenu.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMenuItemNew
 \date		Created  on Sun Dec  4 19:17:29 2016
 \date		Modified on Sun Dec  4 19:17:29 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CMenuItem *CMenuItemNew( TCHAR* strNewLabel, DWORD dwNewID )
{
	CMenuItem *this = malloc(sizeof(CMenuItem));
	if (!this)
		return NULL;

	_tcscpy( this->strLabel, strNewLabel );
	this->dwID           = dwNewID;
	this->pParent        = NULL;
	this->dwNumChildren  = 0L;
	this->dwSelectedMenu = 0L;

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMenuItemDelete
 \date		Created  on Sun Dec  4 19:17:36 2016
 \date		Modified on Sun Dec  4 19:17:36 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void CMenuItemDelete(CMenuItem *this)
{
	while( this->dwNumChildren )
		CMenuItemDelete(this->pChild[--(this->dwNumChildren)]);
	free(this);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMenuItemAdd
 \date		Created  on Sun Dec  4 19:17:43 2016
 \date		Modified on Sun Dec  4 19:17:43 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CMenuItem* CMenuItemAdd( CMenuItem *this, CMenuItem* pNewChild )
{
	this->pChild[(this->dwNumChildren)++] = pNewChild;
	pNewChild->pParent = this;

	return pNewChild;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CMenuItemRender
 \date		Created  on Sun Dec  4 19:17:51 2016
 \date		Modified on Sun Dec  4 19:17:51 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CMenuItemRender( CMenuItem *this, LPDIRECT3DDEVICE8 pd3dDevice, CD3DFont* pFont )
{
	// Check parameters
	if( NULL==pd3dDevice || NULL==pFont )
		return E_INVALIDARG;

	// Save current matrices
	D3DXMATRIX matViewSaved, matProjSaved;
	pd3dDevice->lpVtbl->GetTransform( pd3dDevice, D3DTS_VIEW,       &matViewSaved );
	pd3dDevice->lpVtbl->GetTransform( pd3dDevice, D3DTS_PROJECTION, &matProjSaved );

	// Setup new view and proj matrices for head-on viewing
	D3DXMATRIX matView, matProj;
	D3DXMatrixLookAtLH( &matView, &((D3DXVECTOR3){0.0f,0.0f,-30.0f}),
								  &((D3DXVECTOR3){0.0f,0.0f,  0.0f}),
				 				  &((D3DXVECTOR3){0.0f,1.0f,  0.0f}) );
	D3DXMatrixPerspectiveFovLH( &matProj, D3DX_PI/4, 1.0f, 1.0f, 100.0f );
	pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_VIEW,       &matView );
	pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_PROJECTION, &matProj );

	// Establish colors for selected vs. normal menu items
	D3DMATERIAL8 mtrlNormal, mtrlSelected, mtrlTitle;
	D3DUtil_InitMaterial( &mtrlTitle,    1.0f, 0.0f, 0.0f, 1.0f );
	D3DUtil_InitMaterial( &mtrlNormal,   1.0f, 1.0f, 1.0f, 0.5f );
	D3DUtil_InitMaterial( &mtrlSelected, 1.0f, 1.0f, 0.0f, 1.0f );

	pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_LIGHTING, TRUE );
	pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_AMBIENT,  0xffffffff );

	// Translate the menuitem into place
	D3DXMATRIX matWorld;
	D3DXMatrixScaling( &matWorld, 0.4f, 0.4f, 0.4f );
	matWorld._42 = (this->dwNumChildren*1.0f) + 2.0f;
	pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_WORLD, &matWorld );

	pd3dDevice->lpVtbl->SetMaterial( pd3dDevice, &mtrlTitle );

	// Render the menuitem's label
	CD3DFontRender3DText( pFont, this->strLabel, D3DFONT_CENTERED|D3DFONT_TWOSIDED );

	// Loop through and render all menuitem lables
	for( DWORD i=0; i<this->dwNumChildren; i++ )
	{
		D3DXMATRIX matWorld;
		D3DXMatrixScaling( &matWorld, 0.3f, 0.3f, 0.3f );
		pd3dDevice->lpVtbl->SetMaterial( pd3dDevice, &mtrlNormal );

		// Give a different effect for selected items
		if( this->dwSelectedMenu == i )
		{
			D3DXMATRIX matRotate;
			D3DXMatrixRotationY( &matRotate, (D3DX_PI/3)*sinf(timeGetTime()/200.0f) );
			D3DXMatrixMultiply( &matWorld, &matWorld, &matRotate );
			pd3dDevice->lpVtbl->SetMaterial( pd3dDevice, &mtrlSelected );
		}

		// Translate the menuitem into place
		matWorld._42 = (this->dwNumChildren*1.0f) - (i*2.0f);
		pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_WORLD, &matWorld );

		// Render the menuitem's label
		CD3DFontRender3DText( pFont, this->pChild[i]->strLabel, 
						     D3DFONT_CENTERED|D3DFONT_TWOSIDED );
	}

	// Restore matrices
	pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_VIEW,       &matViewSaved );
	pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_PROJECTION, &matProjSaved );

	return S_OK;
}
