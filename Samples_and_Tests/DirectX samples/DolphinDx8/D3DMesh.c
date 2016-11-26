// D3DMesh.c

#define DIRECT3D_VERSION 0x800
#include "D3DMesh.h"
#include "D3DXUtils.h"
#include <d3dx8mesh.h>

typedef struct _D3DXMATERIAL {
	D3DMATERIAL8 MatD3D;
	LPSTR pTextureFilename;
}
D3DXMATERIAL;

HRESULT D3DMesh_InvalidateDeviceObjects(CD3DMesh *m)
{
	//-----------------------------------------------------------------------------
	// Name: D3DMesh_InvalidateDeviceObjects
	// Desc:
	//-----------------------------------------------------------------------------

	SAFE_RELEASE(m->pLocalMesh);

	return S_OK;
}

HRESULT D3DMesh_Destroy(CD3DMesh *m)
{
	//-----------------------------------------------------------------------------
	// Name: D3DMesh_Destroy
	// Desc:
	//-----------------------------------------------------------------------------

	unsigned long int i;

	D3DMesh_InvalidateDeviceObjects(m);

	for (i = 0; i < m->dwNumMaterials; i++)
	{
		SAFE_RELEASE(m->pTextures[i]);
	}

	SAFE_DELETE_MEM(m->pTextures);

	SAFE_DELETE_MEM(m->pMaterials);

	SAFE_RELEASE(m->pSysMemMesh)m->dwNumMaterials = 0;

	return S_OK;

}

HRESULT D3DMesh_CreateFromFile(CD3DMesh *m, D3DAPP *g, char *strFilename)
{
	//-----------------------------------------------------------------------------
	// Name: D3DMesh_CreateFromFile
	// Desc:
	//-----------------------------------------------------------------------------
	unsigned long int i;
	int p;
	char strPath[MAX_PATH] = { 0 };

	m->pD3DDevice = (LPDIRECT3DTEXTURE8)g->pD3DDevice;	// Make local copy of device

	LPD3DXBUFFER pMtrlBuffer;
	HRESULT hr;

	// Load the mesh from the specified file
	hr = D3DXLoadMeshFromX(strFilename, D3DXMESH_SYSTEMMEM, g->pD3DDevice, 0, &pMtrlBuffer, &m->dwNumMaterials, &m->pSysMemMesh);

	if (hr != S_OK)
	{
		MessageBox(0, D3DUtil_GetErrorString(hr), "D3DXLoadMeshFromX Failed", MB_OK);
		return E_FAIL;
	}

//  D3DMATERIAL8 * pMaterials;
//  LPDIRECT3DTEXTURE8 pTextures;

	// Get material info for the mesh
	// Get the array of materials out of the buffer
	if (pMtrlBuffer && m->dwNumMaterials > 0)
	{

		// Allocate memory for the materials and textures
		D3DXMATERIAL *d3dxMtrls = (D3DXMATERIAL *)pMtrlBuffer->lpVtbl->GetBufferPointer(pMtrlBuffer);
		m->pMaterials = calloc(m->dwNumMaterials, sizeof(D3DMATERIAL8));
		m->pTextures = calloc(m->dwNumMaterials, sizeof(LPDIRECT3DTEXTURE8));

		// Allocate local memory for the arrays m->pMaterials & m->pTextures
		for (i = 0; i < m->dwNumMaterials; i++)
		{

			// Copy the material
			m->pMaterials[i] = d3dxMtrls[i].MatD3D;
			m->pMaterials[i].Ambient = m->pMaterials[i].Diffuse;
			m->pTextures[i] = NULL;

			if (d3dxMtrls[i].pTextureFilename)
			{

				char *pPath = strrchr(strFilename, '/');
				if (pPath)
				{	// we have a slash;
					p = pPath - strFilename + 1;
					strncpy(strPath, strFilename, p);
				}
				else
				{
					strcpy(strPath, strFilename);
				}
				// Create the texture
				strcat(strPath, d3dxMtrls[i].pTextureFilename);
				hr = D3DXCreateTextureFromFile(g->pD3DDevice, strPath, &m->pTextures[i]);

				if (hr != S_OK)
				{
					m->pTextures[i] = NULL;
				}
			}
		}
	}

	SAFE_RELEASE(pMtrlBuffer);

	return S_OK;

}

HRESULT D3DMesh_CreateFromFileObject(CD3DMesh *mCD3DMesh, D3DAPP *g, LPDIRECTXFILEDATA pFileData)
{
	//-----------------------------------------------------------------------------
	// Name:
	// Desc:
	//-----------------------------------------------------------------------------

	unsigned long int i;
	LPD3DXBUFFER pMtrlBuffer;
	HRESULT hr;

	if (g->bReady == FALSE)
	{
		return E_FAIL;
	}

	mCD3DMesh->pD3DDevice = (LPDIRECT3DTEXTURE8)g->pD3DDevice;	// Make local copy of device

	// Load the mesh from the DXFILEDATA object
	hr = D3DXLoadMeshFromXof(pFileData, D3DXMESH_SYSTEMMEM, (LPDIRECT3DDEVICE8)mCD3DMesh->pD3DDevice, NULL, &pMtrlBuffer, &mCD3DMesh->dwNumMaterials, &mCD3DMesh->pSysMemMesh);

	if (hr != D3D_OK)
	{
		MessageBox(0, D3DUtil_GetErrorString(hr), "D3DXLoadMeshFromXof Failed", MB_OK);
		return E_FAIL;
	}

//  D3DMATERIAL8 * pMaterials;
//  LPDIRECT3DTEXTURE8 pTextures;

	// Get the array of materials out of the buffer
	if (pMtrlBuffer && mCD3DMesh->dwNumMaterials > 0)
	{

		// Allocate memory for the materials and textures
		D3DXMATERIAL *d3dxMtrls = pMtrlBuffer->lpVtbl->GetBufferPointer(pMtrlBuffer);
		mCD3DMesh->pMaterials = calloc(mCD3DMesh->dwNumMaterials, sizeof(D3DMATERIAL8));
		mCD3DMesh->pTextures = calloc(mCD3DMesh->dwNumMaterials, 4);

		for (i = 0; i < mCD3DMesh->dwNumMaterials; i++)
		{
			mCD3DMesh->pMaterials[i] = d3dxMtrls[i].MatD3D;
			mCD3DMesh->pMaterials[i].Ambient = mCD3DMesh->pMaterials[i].Diffuse;
			mCD3DMesh->pTextures[i] = NULL;

			if (d3dxMtrls[i].pTextureFilename)
			{
				// Create the texture
				hr = D3DXCreateTextureFromFile((LPDIRECT3DDEVICE8)mCD3DMesh->pD3DDevice, d3dxMtrls[i].pTextureFilename, &mCD3DMesh->pTextures[i]);

				//if ( hr != S_OK ){
				//  pTextures = 0;
				//}
			}
		}
	}

	SAFE_RELEASE(pMtrlBuffer);

	return S_OK;

}

HRESULT D3DMesh_SetFVF(CD3DMesh *m, DWORD dwFVF)
{
	//-----------------------------------------------------------------------------
	// Name: D3DMesh_SetFVF
	// Desc:
	//-----------------------------------------------------------------------------
	LPD3DXMESH pTempSysMemMesh = NULL;
	LPD3DXMESH pTempLocalMesh = NULL;

	if (m->pSysMemMesh)
	{
		if (FAILED(m->pSysMemMesh->lpVtbl->CloneMeshFVF(m->pSysMemMesh, D3DXMESH_SYSTEMMEM, dwFVF, (LPDIRECT3DDEVICE8)m->pD3DDevice, &pTempSysMemMesh)))
			return E_FAIL;
	}
	if (m->pLocalMesh)
	{
		if (FAILED(m->pLocalMesh->lpVtbl->CloneMeshFVF(m->pLocalMesh, 0L, dwFVF, (LPDIRECT3DDEVICE8)m->pD3DDevice, &pTempLocalMesh)))
		{
			SAFE_RELEASE(pTempSysMemMesh);
			return E_FAIL;
		}
	}

	SAFE_RELEASE(m->pSysMemMesh);
	SAFE_RELEASE(m->pLocalMesh);

	if (pTempSysMemMesh)
		m->pSysMemMesh = pTempSysMemMesh;
	if (pTempLocalMesh)
		m->pLocalMesh = pTempLocalMesh;

	// Compute normals in case the meshes have them
	if (m->pSysMemMesh)
	{
		//D3DXComputeNormals( m->pSysMemMesh );
		// use this one for DX8.1 and above. you will also need
		// to change various files. Look in DX8.1Stuff in the zip.
		// Read the readme.txt in that folder.
		D3DXComputeNormals((LPD3DXBASEMESH)m->pSysMemMesh, NULL);
	}
	if (m->pLocalMesh)
	{
		//D3DXComputeNormals( m->pLocalMesh );
		D3DXComputeNormals((LPD3DXBASEMESH)m->pLocalMesh, NULL);	// use for DX8.1 and above
	}

	return S_OK;

}
