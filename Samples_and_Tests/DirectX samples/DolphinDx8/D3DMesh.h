// D3DMesh.h

#ifndef D3DMESH_H
#define D3DMESH_H

#include "dolphin.h"

typedef struct _CD3DMesh
{
    char strName[512];
    LPD3DXMESH pSysMemMesh;  // () SysMem mesh, lives through resize
    LPD3DXMESH pLocalMesh;   // () Local mesh, rebuilt on resize
    DWORD dwNumMaterials;   // Materials for the mesh
    D3DMATERIAL8 * pMaterials;
    LPDIRECT3DTEXTURE8 * pTextures;
    BOOL bUseMaterials;
    LPDIRECT3DTEXTURE8 pD3DDevice;
}CD3DMesh;


HRESULT D3DMesh_SetFVF(CD3DMesh * m, DWORD dwFVF);
HRESULT D3DMesh_CreateFromFileObject(CD3DMesh * m, D3DAPP * g, LPDIRECTXFILEDATA pFileData);
HRESULT D3DMesh_CreateFromFile(CD3DMesh * m, D3DAPP * g, char *strFilename);
HRESULT D3DMesh_Destroy(CD3DMesh * m);

#endif //D3DMESH_H
