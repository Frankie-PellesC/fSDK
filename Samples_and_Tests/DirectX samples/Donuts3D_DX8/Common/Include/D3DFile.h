/*+@@file@@----------------------------------------------------------------*//*!
 \file		D3DFile.h
 \par Description 
            Support code for loading DirectX .X files.
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 19:23:59 2016
 \date		Modified on Sun Dec  4 19:23:59 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef D3DFILE_H
#define D3DFILE_H
#include <tchar.h>
#include <d3d8.h>
#include <d3dx8.h>

//-----------------------------------------------------------------------------
// Name: class CD3DMesh
// Desc: Class for loading and rendering file-based meshes
//-----------------------------------------------------------------------------
typedef struct CD3DMesh
{
    TCHAR               m_strName[512];

    LPD3DXMESH          m_pSysMemMesh;    // SysMem mesh, lives through resize
    LPD3DXMESH          m_pLocalMesh;     // Local mesh, rebuilt on resize
    
    DWORD               m_dwNumMaterials; // Materials for the mesh
    D3DMATERIAL8*       m_pMaterials;
    LPDIRECT3DTEXTURE8* m_pTextures;
    BOOL                m_bUseMaterials;
} CD3DMesh;

// Rendering
HRESULT CD3DMeshRender(CD3DMesh *, LPDIRECT3DDEVICE8 pd3dDevice, BOOL bDrawOpaqueSubsets /*= TRUE*/, BOOL bDrawAlphaSubsets /*= TRUE*/);

// Mesh access
LPD3DXMESH __forceinline CD3DMeshGetSysMemMesh(CD3DMesh *this)
{
	return this->m_pSysMemMesh;
}
LPD3DXMESH __forceinline CD3DMeshGetLocalMesh(CD3DMesh *this)
{
	return this->m_pLocalMesh;
}

// Rendering options
VOID __forceinline CD3DMeshUseMeshMaterials(CD3DMesh *this, BOOL bFlag)
{
	this->m_bUseMaterials = bFlag;
}

HRESULT CD3DMeshSetFVF(CD3DMesh *this, LPDIRECT3DDEVICE8 pd3dDevice, DWORD dwFVF);

// Initializing
HRESULT CD3DMeshRestoreDeviceObjects(CD3DMesh *this, LPDIRECT3DDEVICE8 pd3dDevice);
HRESULT CD3DMeshInvalidateDeviceObjects(CD3DMesh *this);

// Creation/destruction
HRESULT CD3DMeshCreate(CD3DMesh *this, LPDIRECT3DDEVICE8 pd3dDevice, TCHAR *strFilename);
HRESULT CD3DMeshCreate1(CD3DMesh *this, LPDIRECT3DDEVICE8 pd3dDevice, LPDIRECTXFILEDATA pFileData);
HRESULT CD3DMeshDestroy(CD3DMesh *this);

CD3DMesh *CD3DMeshNew(TCHAR *strName /*= _T("CD3DFile_Mesh")*/);
void CD3DMeshDelete(CD3DMesh *);

//-----------------------------------------------------------------------------
// Name: class CD3DFrame
// Desc: Class for loading and rendering file-based meshes
//-----------------------------------------------------------------------------
typedef struct CD3DFrame
{
    TCHAR      m_strName[512];
    D3DXMATRIX m_mat;
    CD3DMesh*  m_pMesh;
    TCHAR      m_strMeshName[512];

    struct CD3DFrame* m_pNext;
    struct CD3DFrame* m_pChild;
} CD3DFrame;

// Matrix access
VOID __forceinline CD3DFrameSetMatrix(CD3DFrame *this, D3DXMATRIX *pmat)
{
	this->m_mat = *pmat;
}
D3DXMATRIX __forceinline *CD3DFrameGetMatrix(CD3DFrame *this)
{
	return &this->m_mat;
}

CD3DMesh *CD3DFrameFindMesh(CD3DFrame *this, TCHAR *strMeshName);
CD3DFrame *CD3DFrameFindFrame(CD3DFrame *this, TCHAR *strFrameName);
BOOL CD3DFrameEnumMeshes(CD3DFrame *this, BOOL(*EnumMeshCB)(CD3DMesh *, VOID *), VOID *pContext);

HRESULT CD3DFrameDestroy(CD3DFrame *this);
HRESULT CD3DFrameRestoreDeviceObjects(CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice);
HRESULT CD3DFrameInvalidateDeviceObjects(CD3DFrame *this);
HRESULT CD3DFrameRender(CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice, BOOL bDrawOpaqueSubsets /*= TRUE*/, BOOL bDrawAlphaSubsets /*= TRUE*/, D3DXMATRIX * pmatWorldMartix /*= NULL*/);

CD3DFrame *CD3DFrameNew(TCHAR *strName /*= _T("CD3DFile_Frame")*/);
void CD3DFrameDelete(CD3DFrame *this);

//-----------------------------------------------------------------------------
// Name: class CD3DFile
// Desc: Class for loading and rendering file-based meshes
//-----------------------------------------------------------------------------
HRESULT CD3DFileLoadMesh(CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice, LPDIRECTXFILEDATA pFileData, CD3DFrame *pParentFrame);
HRESULT CD3DFileLoadFrame(CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice, LPDIRECTXFILEDATA pFileData, CD3DFrame *pParentFrame);
HRESULT CD3DFileCreate(CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice, TCHAR *strFilename);
HRESULT CD3DFileCreateFromResource(CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice, TCHAR *strResource, TCHAR *strType);
// For pure devices, specify the world transform. If the world transform is not
// specified on pure devices, this function will fail.
HRESULT CD3DFileRender(CD3DFrame *this, LPDIRECT3DDEVICE8 pd3dDevice, D3DXMATRIX *pmatWorldMatrix /*= NULL*/);
#endif
