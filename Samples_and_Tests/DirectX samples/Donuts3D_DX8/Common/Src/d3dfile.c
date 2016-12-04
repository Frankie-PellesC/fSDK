/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dfile.c
 \par Description 
            Support code for loading DirectX .X files.
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 18:30:30 2016
 \date		Modified on Sun Dec  4 18:30:30 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#define STRICT
#include <tchar.h>
#include <stdio.h>
#include <d3d8.h>
#include <d3dx8.h>
#include <dxfile.h>
#include <rmxfguid.h>
#include <rmxftmpl.h>
#include "D3DFile.h"
#include "DXUtil.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DMeshNew
 \date		Created  on Sun Dec  4 18:30:50 2016
 \date		Modified on Sun Dec  4 18:30:50 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CD3DMesh *CD3DMeshNew( TCHAR* strName )
{
	CD3DMesh *this = malloc(sizeof(CD3DMesh));
	if (!this)
		return NULL;

    _tcscpy( this->m_strName, strName );
    this->m_pSysMemMesh        = NULL;
    this->m_pLocalMesh         = NULL;
    this->m_dwNumMaterials     = 0L;
    this->m_pMaterials         = NULL;
    this->m_pTextures          = NULL;
    this->m_bUseMaterials      = TRUE;

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DMeshDelete
 \date		Created  on Sun Dec  4 18:30:58 2016
 \date		Modified on Sun Dec  4 18:30:58 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void CD3DMeshDelete(CD3DMesh *this)
{
    CD3DMeshDestroy(this);
	free(this);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DMeshCreate
 \date		Created  on Sun Dec  4 18:31:05 2016
 \date		Modified on Sun Dec  4 18:31:05 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DMeshCreate( CD3DMesh *this, LPDIRECT3DDEVICE8 pd3dDevice, TCHAR* strFilename )
{
    TCHAR        strPath[MAX_PATH];
    CHAR         strPathANSI[MAX_PATH];
    LPD3DXBUFFER pAdjacencyBuffer = NULL;
    LPD3DXBUFFER pMtrlBuffer      = NULL;
    HRESULT      hr;

    // Find the path for the file, and convert it to ANSI (for the D3DX API)
    DXUtil_FindMediaFile( strPath, strFilename );
    DXUtil_ConvertGenericStringToAnsi( strPathANSI, strPath, -1 );

    // Load the mesh
    if( FAILED( hr = D3DXLoadMeshFromX( strPathANSI, D3DXMESH_SYSTEMMEM, pd3dDevice, 
                                        &pAdjacencyBuffer, &pMtrlBuffer, 
                                        &this->m_dwNumMaterials, &this->m_pSysMemMesh ) ) )
    {
        return hr;
    }

    // Optimize the mesh for performance
    //if( FAILED( hr = this->m_pSysMemMesh->lpVtbl->OptimizeInplace(this->m_pSysMemMesh,
                        //D3DXMESHOPT_COMPACT | D3DXMESHOPT_ATTRSORT | D3DXMESHOPT_VERTEXCACHE,
                        //(DWORD*)pAdjacencyBuffer->lpVtbl->GetBufferPointer(pAdjacencyBuffer), NULL, NULL, NULL ) ) )
    //{
//Error1:
		//this->m_dwNumMaterials = 0;
        //SAFE_RELEASE( pAdjacencyBuffer );
        //SAFE_RELEASE( pMtrlBuffer );
        //return hr;
    //}

    hr = this->m_pSysMemMesh->lpVtbl->OptimizeInplace(this->m_pSysMemMesh,
                        D3DXMESHOPT_COMPACT | D3DXMESHOPT_ATTRSORT | D3DXMESHOPT_VERTEXCACHE,
                        (DWORD*)pAdjacencyBuffer->lpVtbl->GetBufferPointer(pAdjacencyBuffer), NULL, NULL, NULL );

    // Get material info for the mesh
    // Get the array of materials out of the buffer
    if( pMtrlBuffer && this->m_dwNumMaterials > 0 )
    {
        // Allocate memory for the materials and textures
        D3DXMATERIAL* d3dxMtrls = (D3DXMATERIAL*)pMtrlBuffer->lpVtbl->GetBufferPointer(pMtrlBuffer);
        this->m_pMaterials = malloc( sizeof(D3DMATERIAL8) * this->m_dwNumMaterials);
        this->m_pTextures  = malloc( sizeof(LPDIRECT3DTEXTURE8) * this->m_dwNumMaterials );
		if (!this->m_pMaterials || !this->m_pTextures)
		{
			hr = E_OUTOFMEMORY;
			//goto Error1;
			this->m_dwNumMaterials = 0;
	        SAFE_RELEASE( pAdjacencyBuffer );
	        SAFE_RELEASE( pMtrlBuffer );
	        return hr;
		}

        // Copy each material and create its texture
        for( DWORD i=0; i<this->m_dwNumMaterials; i++ )
        {
            // Copy the material
            this->m_pMaterials[i]         = d3dxMtrls[i].MatD3D;
            this->m_pMaterials[i].Ambient = this->m_pMaterials[i].Diffuse;
            this->m_pTextures[i]          = NULL;

            // Create a texture
            if( d3dxMtrls[i].pTextureFilename )
            {
                TCHAR strTexture[MAX_PATH];
                TCHAR strTextureTemp[MAX_PATH];
                DXUtil_ConvertAnsiStringToGeneric( strTextureTemp, d3dxMtrls[i].pTextureFilename, -1 );
                DXUtil_FindMediaFile( strTexture, strTextureTemp );

                if( FAILED( D3DXCreateTextureFromFile( pd3dDevice, strTexture, 
                                                       &this->m_pTextures[i] ) ) )
                    this->m_pTextures[i] = NULL;
            }
        }
    }

    SAFE_RELEASE( pAdjacencyBuffer );
    SAFE_RELEASE( pMtrlBuffer );

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DMeshCreate1
 \date		Created  on Sun Dec  4 18:31:14 2016
 \date		Modified on Sun Dec  4 18:31:14 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DMeshCreate1( CD3DMesh *this, LPDIRECT3DDEVICE8 pd3dDevice, LPDIRECTXFILEDATA pFileData )
{
    LPD3DXBUFFER pMtrlBuffer = NULL;
    LPD3DXBUFFER pAdjacencyBuffer = NULL;
    HRESULT      hr;

    // Load the mesh from the DXFILEDATA object
    if( FAILED( hr = D3DXLoadMeshFromXof( pFileData, D3DXMESH_SYSTEMMEM, pd3dDevice,
                                          &pAdjacencyBuffer, &pMtrlBuffer, 
                                          &this->m_dwNumMaterials, &this->m_pSysMemMesh ) ) )
    {
        return hr;
    }

    // Optimize the mesh for performance
    if( FAILED( hr = this->m_pSysMemMesh->lpVtbl->OptimizeInplace(this->m_pSysMemMesh,
                        D3DXMESHOPT_COMPACT | D3DXMESHOPT_ATTRSORT | D3DXMESHOPT_VERTEXCACHE,
                        (DWORD*)pAdjacencyBuffer->lpVtbl->GetBufferPointer(pAdjacencyBuffer), NULL, NULL, NULL ) ) )
    {
Error1:
        SAFE_RELEASE( pAdjacencyBuffer );
        SAFE_RELEASE( pMtrlBuffer );
        return hr;
    }

    // Get material info for the mesh
    // Get the array of materials out of the buffer
    if( pMtrlBuffer && this->m_dwNumMaterials > 0 )
    {
        // Allocate memory for the materials and textures
        D3DXMATERIAL* d3dxMtrls = (D3DXMATERIAL*)pMtrlBuffer->lpVtbl->GetBufferPointer(pMtrlBuffer);
        this->m_pMaterials = malloc( sizeof(D3DMATERIAL8) * this->m_dwNumMaterials);
        this->m_pTextures  = malloc( sizeof(LPDIRECT3DTEXTURE8) * this->m_dwNumMaterials );
		if (!this->m_pMaterials || !this->m_pTextures)
		{
			hr = E_OUTOFMEMORY;
			goto Error1;
		}

        // Copy each material and create its texture
        for( DWORD i=0; i<this->m_dwNumMaterials; i++ )
        {
            // Copy the material
            this->m_pMaterials[i]         = d3dxMtrls[i].MatD3D;
            this->m_pMaterials[i].Ambient = this->m_pMaterials[i].Diffuse;
            this->m_pTextures[i]          = NULL;

            // Create a texture
            if( d3dxMtrls[i].pTextureFilename )
            {
                TCHAR strTexture[MAX_PATH];
                TCHAR strTextureTemp[MAX_PATH];
                DXUtil_ConvertAnsiStringToGeneric( strTextureTemp, d3dxMtrls[i].pTextureFilename, -1 );
                DXUtil_FindMediaFile( strTexture, strTextureTemp );

                if( FAILED( D3DXCreateTextureFromFile( pd3dDevice, strTexture, 
                                                       &this->m_pTextures[i] ) ) )
                    this->m_pTextures[i] = NULL;
            }
        }
    }

    SAFE_RELEASE( pAdjacencyBuffer );
    SAFE_RELEASE( pMtrlBuffer );

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DMeshSetFVF
 \date		Created  on Sun Dec  4 18:31:23 2016
 \date		Modified on Sun Dec  4 18:31:23 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DMeshSetFVF( CD3DMesh *this, LPDIRECT3DDEVICE8 pd3dDevice, DWORD dwFVF )
{
    LPD3DXMESH pTempSysMemMesh = NULL;
    LPD3DXMESH pTempLocalMesh  = NULL;

    if( this->m_pSysMemMesh )
    {
        if( FAILED( this->m_pSysMemMesh->lpVtbl->CloneMeshFVF( this->m_pSysMemMesh, D3DXMESH_SYSTEMMEM, dwFVF,
                                                 pd3dDevice, &pTempSysMemMesh ) ) )
            return E_FAIL;
    }
    if( this->m_pLocalMesh )
    {
        if( FAILED( this->m_pLocalMesh->lpVtbl->CloneMeshFVF( this->m_pLocalMesh, 0L, dwFVF, pd3dDevice,
                                                &pTempLocalMesh ) ) )
        {
            SAFE_RELEASE( pTempSysMemMesh );
            return E_FAIL;
        }
    }

    SAFE_RELEASE( this->m_pSysMemMesh );
    SAFE_RELEASE( this->m_pLocalMesh );

    if( pTempSysMemMesh ) this->m_pSysMemMesh = pTempSysMemMesh;
    if( pTempLocalMesh )  this->m_pLocalMesh  = pTempLocalMesh;

    // Compute normals in case the meshes have them
    if( this->m_pSysMemMesh )
        D3DXComputeNormals( (LPD3DXBASEMESH)this->m_pSysMemMesh, NULL );
    if( this->m_pLocalMesh )
        D3DXComputeNormals( (LPD3DXBASEMESH)this->m_pLocalMesh, NULL );

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DMeshRestoreDeviceObjects
 \date		Created  on Sun Dec  4 18:31:30 2016
 \date		Modified on Sun Dec  4 18:31:30 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DMeshRestoreDeviceObjects( CD3DMesh *this, LPDIRECT3DDEVICE8 pd3dDevice )
{
    if( NULL == this->m_pSysMemMesh )
        return E_FAIL;

    // Make a local memory version of the mesh. Note: because we are passing in
    // no flags, the default behavior is to clone into local memory.
    if( FAILED( this->m_pSysMemMesh->lpVtbl->CloneMeshFVF( this->m_pSysMemMesh, 0L,
									this->m_pSysMemMesh->lpVtbl->GetFVF(this->m_pSysMemMesh), pd3dDevice, &this->m_pLocalMesh ) ) )
        return E_FAIL;

    return S_OK;

}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DMeshInvalidateDeviceObjects
 \date		Created  on Sun Dec  4 18:31:41 2016
 \date		Modified on Sun Dec  4 18:31:41 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DMeshInvalidateDeviceObjects(CD3DMesh *this)
{
    SAFE_RELEASE( this->m_pLocalMesh );

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DMeshDestroy
 \date		Created  on Sun Dec  4 18:31:48 2016
 \date		Modified on Sun Dec  4 18:31:48 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DMeshDestroy(CD3DMesh *this)
{
    CD3DMeshInvalidateDeviceObjects(this);
    for( UINT i=0; i<this->m_dwNumMaterials; i++ )
        SAFE_RELEASE( this->m_pTextures[i] );
    SAFE_DELETE_ARRAY( this->m_pTextures );
    SAFE_DELETE_ARRAY( this->m_pMaterials );

    SAFE_RELEASE( this->m_pSysMemMesh );

    this->m_dwNumMaterials = 0L;

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DMeshRender
 \date		Created  on Sun Dec  4 18:31:55 2016
 \date		Modified on Sun Dec  4 18:31:55 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DMeshRender( CD3DMesh *this, LPDIRECT3DDEVICE8 pd3dDevice, BOOL bDrawOpaqueSubsets, BOOL bDrawAlphaSubsets )
{
    if( NULL == this->m_pLocalMesh )
        return E_FAIL;

    // Frist, draw the subsets without alpha
    if( bDrawOpaqueSubsets )
    {
        for( DWORD i=0; i<this->m_dwNumMaterials; i++ )
        {
            if( this->m_bUseMaterials )
            {
                if( this->m_pMaterials[i].Diffuse.a < 1.0f )
                    continue;
                pd3dDevice->lpVtbl->SetMaterial( pd3dDevice, &this->m_pMaterials[i] );
                pd3dDevice->lpVtbl->SetTexture( pd3dDevice, 0, (IDirect3DBaseTexture8 *)this->m_pTextures[i] );
            }
            this->m_pLocalMesh->lpVtbl->DrawSubset( this->m_pLocalMesh, i );
        }
    }

    // Then, draw the subsets with alpha
    if( bDrawAlphaSubsets && this->m_bUseMaterials )
    {
        for( DWORD i=0; i<this->m_dwNumMaterials; i++ )
        {
            if( this->m_pMaterials[i].Diffuse.a == 1.0f )
                continue;

            // Set the material and texture
            pd3dDevice->lpVtbl->SetMaterial( pd3dDevice, &this->m_pMaterials[i] );
            pd3dDevice->lpVtbl->SetTexture( pd3dDevice, 0, (IDirect3DBaseTexture8 *)this->m_pTextures[i] );
            this->m_pLocalMesh->lpVtbl->DrawSubset( this->m_pLocalMesh, i );
        }
    }

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFrameNew
 \date		Created  on Sun Dec  4 18:32:04 2016
 \date		Modified on Sun Dec  4 18:32:04 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CD3DFrame *CD3DFrameNew( TCHAR* strName )
{
	CD3DFrame *this = malloc(sizeof(CD3DFrame));
	if (!this)
		return NULL;

    _tcscpy( this->m_strName, strName );
    D3DXMatrixIdentity( &this->m_mat );
    this->m_pMesh  = NULL;

    this->m_pChild = NULL;
    this->m_pNext  = NULL;

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFrameDelete
 \date		Created  on Sun Dec  4 18:32:14 2016
 \date		Modified on Sun Dec  4 18:32:14 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void CD3DFrameDelete(CD3DFrame *this)
{
    CD3DFrameDelete( this->m_pChild );
    CD3DFrameDelete( this->m_pNext );
	SAFE_DELETE(this);
}

//-----------------------------------------------------------------------------
// Name:
// Desc:
//-----------------------------------------------------------------------------
BOOL CD3DFrameEnumMeshes( CD3DFrame *this, BOOL (*EnumMeshCB)(CD3DMesh*,VOID*), VOID* pContext )
{
    if( this->m_pMesh )
        EnumMeshCB( this->m_pMesh, pContext );
    if( this->m_pChild )
        CD3DFrameEnumMeshes( this->m_pChild, EnumMeshCB, pContext );
    if( this->m_pNext )
        CD3DFrameEnumMeshes( this->m_pNext, EnumMeshCB, pContext );

    return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFrameFindMesh
 \date		Created  on Sun Dec  4 18:32:24 2016
 \date		Modified on Sun Dec  4 18:32:24 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CD3DMesh* CD3DFrameFindMesh( CD3DFrame *this, TCHAR* strMeshName )
{
    CD3DMesh* pMesh;

    if( this->m_pMesh )
        if( !lstrcmpi( this->m_pMesh->m_strName, strMeshName ) )
            return this->m_pMesh;

    if( this->m_pChild )
        if( NULL != ( pMesh = CD3DFrameFindMesh( this->m_pChild, strMeshName ) ) )
            return pMesh;

    if( this->m_pNext )
        if( NULL != ( pMesh = CD3DFrameFindMesh( this->m_pNext, strMeshName ) ) )
            return pMesh;

    return NULL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFrameFindFrame
 \date		Created  on Sun Dec  4 18:32:34 2016
 \date		Modified on Sun Dec  4 18:32:34 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CD3DFrame* CD3DFrameFindFrame( CD3DFrame *this, TCHAR* strFrameName )
{
    CD3DFrame* pFrame;

    if( !lstrcmpi( this->m_strName, strFrameName ) )
        return this;

    if( this->m_pChild )
        if( NULL != ( pFrame = CD3DFrameFindFrame( this->m_pChild, strFrameName ) ) )
            return pFrame;

    if( this->m_pNext )
        if( NULL != ( pFrame = CD3DFrameFindFrame( this->m_pNext, strFrameName ) ) )
            return pFrame;

    return NULL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFrameDestroy
 \date		Created  on Sun Dec  4 18:32:41 2016
 \date		Modified on Sun Dec  4 18:32:41 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFrameDestroy(CD3DFrame *this)
{
    if( this->m_pMesh )  CD3DMeshDestroy(this->m_pMesh);
    if( this->m_pChild ) CD3DFrameDestroy(this->m_pChild);
    if( this->m_pNext )  CD3DFrameDestroy(this->m_pNext);

    SAFE_DELETE( this->m_pMesh );
    SAFE_DELETE( this->m_pNext );
    SAFE_DELETE( this->m_pChild );

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFrameRestoreDeviceObjects
 \date		Created  on Sun Dec  4 18:32:49 2016
 \date		Modified on Sun Dec  4 18:32:49 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFrameRestoreDeviceObjects( CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice )
{
    if( this->m_pMesh )  CD3DMeshRestoreDeviceObjects( this->m_pMesh, pd3dDevice );
    if( this->m_pChild ) CD3DFrameRestoreDeviceObjects( this->m_pChild, pd3dDevice );
    if( this->m_pNext )  CD3DFrameRestoreDeviceObjects( this->m_pNext, pd3dDevice );
    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFrameInvalidateDeviceObjects
 \date		Created  on Sun Dec  4 18:32:55 2016
 \date		Modified on Sun Dec  4 18:32:55 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFrameInvalidateDeviceObjects(CD3DFrame *this)
{
    if( this->m_pMesh )  CD3DMeshInvalidateDeviceObjects(this->m_pMesh);
    if( this->m_pChild ) CD3DFrameInvalidateDeviceObjects(this->m_pChild);
    if( this->m_pNext )  CD3DFrameInvalidateDeviceObjects(this->m_pNext);
    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFrameRender
 \date		Created  on Sun Dec  4 18:33:05 2016
 \date		Modified on Sun Dec  4 18:33:05 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFrameRender( CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice, BOOL bDrawOpaqueSubsets,
                           BOOL bDrawAlphaSubsets, D3DXMATRIX* pmatWorldMatrix )
{
    // For pure devices, specify the world transform. If the world transform is not
    // specified on pure devices, this function will fail.

    D3DXMATRIX matSavedWorld, matWorld;

    if ( NULL == pmatWorldMatrix )
        pd3dDevice->lpVtbl->GetTransform( pd3dDevice, D3DTS_WORLD, &matSavedWorld );
    else
        matSavedWorld = *pmatWorldMatrix;

    D3DXMatrixMultiply( &matWorld, &this->m_mat, &matSavedWorld );
    pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_WORLD, &matWorld );

    if( this->m_pMesh )
        CD3DMeshRender( this->m_pMesh, pd3dDevice, bDrawOpaqueSubsets, bDrawAlphaSubsets );

    if( this->m_pChild )
        CD3DFrameRender( this->m_pChild, pd3dDevice, bDrawOpaqueSubsets, bDrawAlphaSubsets, &matWorld );

    pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_WORLD, &matSavedWorld );

    if( this->m_pNext )
        CD3DFrameRender( this->m_pNext, pd3dDevice, bDrawOpaqueSubsets, bDrawAlphaSubsets, &matSavedWorld );

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFileLoadFrame
 \date		Created  on Sun Dec  4 18:33:21 2016
 \date		Modified on Sun Dec  4 18:33:21 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFileLoadFrame( CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice, LPDIRECTXFILEDATA pFileData, CD3DFrame* pParentFrame )
{
    LPDIRECTXFILEDATA   pChildData = NULL;
    LPDIRECTXFILEOBJECT pChildObj = NULL;
    const GUID* pGUID;
    DWORD       cbSize;
    CD3DFrame*  pCurrentFrame;
    HRESULT     hr;

    // Get the type of the object
    if( FAILED( hr = pFileData->lpVtbl->GetType( pFileData, &pGUID ) ) )
        return hr;

    if( IsEqualGUID(pGUID, &TID_D3DRMMesh) )
    {
        hr = CD3DFileLoadMesh( this, pd3dDevice, pFileData, pParentFrame );
        if( FAILED(hr) )
            return hr;
    }
    if( IsEqualGUID(pGUID, &TID_D3DRMFrameTransformMatrix) )
    {
        D3DXMATRIX* pmatMatrix;
        hr = pFileData->lpVtbl->GetData( pFileData, NULL, &cbSize, (VOID**)&pmatMatrix );
        if( FAILED(hr) )
            return hr;

        // Update the parent's matrix with the new one
        CD3DFrameSetMatrix( pParentFrame, pmatMatrix );
    }
    if( IsEqualGUID(pGUID, &TID_D3DRMFrame) )
    {
        // Get the frame name
        CHAR  strAnsiName[512] = "";
        TCHAR strName[MAX_PATH];
        DWORD dwNameLength;
        pFileData->lpVtbl->GetName( pFileData, NULL, &dwNameLength );
        if( dwNameLength > 0 )
            pFileData->lpVtbl->GetName( pFileData, strAnsiName, &dwNameLength );
        DXUtil_ConvertAnsiStringToGeneric( strName, strAnsiName, -1);

        // Create the frame
        pCurrentFrame = CD3DFrameNew( strName );

        pCurrentFrame->m_pNext = pParentFrame->m_pChild;
        pParentFrame->m_pChild = pCurrentFrame;

        // Enumerate child objects
        while( SUCCEEDED( pFileData->lpVtbl->GetNextObject( pFileData, &pChildObj ) ) )
        {
            // Query the child for its FileData
            hr = pChildObj->lpVtbl->QueryInterface( pChildObj, &IID_IDirectXFileData,
                                            (VOID**)&pChildData );
            if( SUCCEEDED(hr) )
            {
                hr = CD3DFileLoadFrame( this, pd3dDevice, pChildData, pCurrentFrame );
                pChildData->lpVtbl->Release(pChildData);
            }

            pChildObj->lpVtbl->Release(pChildObj);

            if( FAILED(hr) )
                return hr;
        }
    }

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFileLoadMesh
 \date		Created  on Sun Dec  4 18:33:32 2016
 \date		Modified on Sun Dec  4 18:33:32 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFileLoadMesh(CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice, LPDIRECTXFILEDATA pFileData, CD3DFrame *pParentFrame)
{
    // Currently only allowing one mesh per frame
    if( pParentFrame->m_pMesh )
        return E_FAIL;

    // Get the mesh name
    CHAR  strAnsiName[512] = {0};
    TCHAR strName[MAX_PATH];
    DWORD dwNameLength;
    pFileData->lpVtbl->GetName( pFileData, NULL, &dwNameLength );
    if( dwNameLength > 0 )
        pFileData->lpVtbl->GetName( pFileData, strAnsiName, &dwNameLength );
    DXUtil_ConvertAnsiStringToGeneric( strName, strAnsiName, -1 );

    // Create the mesh
    pParentFrame->m_pMesh = CD3DMeshNew( strName );
    CD3DMeshCreate1( pParentFrame->m_pMesh, pd3dDevice, pFileData );

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFileCreateFromResource
 \date		Created  on Sun Dec  4 18:34:21 2016
 \date		Modified on Sun Dec  4 18:34:21 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFileCreateFromResource( CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice, TCHAR* strResource, TCHAR* strType )
{
    LPDIRECTXFILE           pDXFile   = NULL;
    LPDIRECTXFILEENUMOBJECT pEnumObj  = NULL;
    LPDIRECTXFILEDATA       pFileData = NULL;
    HRESULT hr;

    // Create a x file object
    if( FAILED( hr = DirectXFileCreate( &pDXFile ) ) )
        return E_FAIL;

    // Register templates for d3drm and patch extensions.
    if( FAILED( hr = pDXFile->lpVtbl->RegisterTemplates( pDXFile, (VOID*)D3DRM_XTEMPLATES,
                                                 D3DRM_XTEMPLATE_BYTES ) ) )
    {
        pDXFile->lpVtbl->Release(pDXFile);
        return E_FAIL;
    }
    
    CHAR strTypeAnsi[MAX_PATH];
    DXUtil_ConvertGenericStringToAnsi( strTypeAnsi, strType, -1 );

    DXFILELOADRESOURCE dxlr;
    dxlr.hModule = NULL;
    dxlr.lpName = strResource;
    dxlr.lpType = (TCHAR*) strTypeAnsi;

    // Create enum object
    hr = pDXFile->lpVtbl->CreateEnumObject( pDXFile, (VOID*)&dxlr, DXFILELOAD_FROMRESOURCE, &pEnumObj );
    if( FAILED(hr) )
    {
        pDXFile->lpVtbl->Release(pDXFile);
        return hr;
    }

    // Enumerate top level objects (which are always frames)
    while( SUCCEEDED( pEnumObj->lpVtbl->GetNextDataObject( pEnumObj, &pFileData ) ) )
    {
        hr = CD3DFileLoadFrame( this, pd3dDevice, pFileData, this );
        pFileData->lpVtbl->Release(pFileData);
        if( FAILED(hr) )
        {
            pEnumObj->lpVtbl->Release(pEnumObj);
            pDXFile->lpVtbl->Release(pDXFile);
            return E_FAIL;
        }
    }

    SAFE_RELEASE( pFileData );
    SAFE_RELEASE( pEnumObj );
    SAFE_RELEASE( pDXFile );

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFileCreate
 \date		Created  on Sun Dec  4 18:34:17 2016
 \date		Modified on Sun Dec  4 18:34:17 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFileCreate(CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice, TCHAR *strFilename)
{
	LPDIRECTXFILE pDXFile = NULL;
	LPDIRECTXFILEENUMOBJECT pEnumObj = NULL;
	LPDIRECTXFILEDATA pFileData = NULL;
	HRESULT hr;

	// Create a x file object
	if (FAILED(hr = DirectXFileCreate(&pDXFile)))
		return E_FAIL;

	// Register templates for d3drm and patch extensions.
	if (FAILED(hr = pDXFile->lpVtbl->RegisterTemplates(pDXFile, (VOID *)D3DRM_XTEMPLATES, D3DRM_XTEMPLATE_BYTES)))
	{
		pDXFile->lpVtbl->Release(pDXFile);
		return E_FAIL;
	}

	// Find the path to the file, and convert it to ANSI (for the D3DXOF API)
	TCHAR strPath[MAX_PATH];
	CHAR strPathANSI[MAX_PATH];
	DXUtil_FindMediaFile(strPath, strFilename);
	DXUtil_ConvertGenericStringToAnsi(strPathANSI, strPath, -1);

	// Create enum object
	hr = pDXFile->lpVtbl->CreateEnumObject(pDXFile, (VOID *)strPathANSI, DXFILELOAD_FROMFILE, &pEnumObj);
	if (FAILED(hr))
	{
		pDXFile->lpVtbl->Release(pDXFile);
		return hr;
	}

	// Enumerate top level objects (which are always frames)
	while (SUCCEEDED(pEnumObj->lpVtbl->GetNextDataObject(pEnumObj, &pFileData)))
	{
		hr = CD3DFileLoadFrame(this, pd3dDevice, pFileData, this);
		pFileData->lpVtbl->Release(pFileData);
		if (FAILED(hr))
		{
			pEnumObj->lpVtbl->Release(pEnumObj);
			pDXFile->lpVtbl->Release(pDXFile);
			return E_FAIL;
		}
	}

	SAFE_RELEASE(pFileData);
	SAFE_RELEASE(pEnumObj);
	SAFE_RELEASE(pDXFile);

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CD3DFileRender
 \date		Created  on Sun Dec  4 18:34:34 2016
 \date		Modified on Sun Dec  4 18:34:34 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CD3DFileRender( CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice, D3DXMATRIX* pmatWorldMatrix )
{

    // For pure devices, specify the world transform. If the world transform is not
    // specified on pure devices, this function will fail.

    // Set up the world transformation
    D3DXMATRIX matSavedWorld, matWorld;

    if ( NULL == pmatWorldMatrix )
        pd3dDevice->lpVtbl->GetTransform( pd3dDevice, D3DTS_WORLD, &matSavedWorld );
    else
        matSavedWorld = *pmatWorldMatrix;

    D3DXMatrixMultiply( &matWorld, &matSavedWorld, &this->m_mat );
    pd3dDevice->lpVtbl->SetTransform( pd3dDevice, D3DTS_WORLD, &matWorld );

    // Render opaque subsets in the meshes
    if( this->m_pChild )
        CD3DFrameRender( this->m_pChild, pd3dDevice, TRUE, FALSE, &matWorld );

    // Enable alpha blending
    pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ALPHABLENDENABLE, TRUE );
    pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_SRCBLEND,  D3DBLEND_SRCALPHA );
    pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_DESTBLEND, D3DBLEND_INVSRCALPHA );

    // Render alpha subsets in the meshes
    if( this->m_pChild )
        CD3DFrameRender( this->m_pChild, pd3dDevice, FALSE, TRUE, &matWorld );

    // Restore state
    pd3dDevice->lpVtbl->SetRenderState( pd3dDevice, D3DRS_ALPHABLENDENABLE, FALSE );
    pd3dDevice->lpVtbl->SetTransform  ( pd3dDevice, D3DTS_WORLD, &matSavedWorld );

    return S_OK;
}
