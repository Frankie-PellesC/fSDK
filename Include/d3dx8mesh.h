/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx8mesh.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Nov 25 21:59:40 2016
 \date		Modified on Fri Nov 25 21:59:40 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#include <d3dx8.h>
#ifndef __D3DX8MESH_H__
#define __D3DX8MESH_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <dxfile.h>
DEFINE_GUID(IID_ID3DXBaseMesh, 0x2a835771, 0xbf4d, 0x43f4, 0x8e, 0x14, 0x82, 0xa8, 0x09, 0xf1, 0x7d, 0x8a);
DEFINE_GUID(IID_ID3DXMesh,     0xccae5c3b, 0x4dd1, 0x4d0f, 0x99, 0x7e, 0x46, 0x84, 0xca, 0x64, 0x55, 0x7f);
DEFINE_GUID(IID_ID3DXPMesh,    0x19fbe386, 0xc282, 0x4659, 0x97, 0xbd, 0xcb, 0x86, 0x9b, 0x08, 0x4a, 0x6c);
DEFINE_GUID(IID_ID3DXSPMesh,   0x4e3ca05c, 0xd4ff, 0x4d11, 0x8a, 0x02, 0x16, 0x45, 0x9e, 0x08, 0xf6, 0xf4);
DEFINE_GUID(IID_ID3DXSkinMesh, 0x8db06ecc, 0xebfc, 0x408a, 0x94, 0x04, 0x30, 0x74, 0xb4, 0x77, 0x35, 0x15);
enum _D3DXMESH
{
    D3DXMESH_32BIT                  = 0x001,
    D3DXMESH_DONOTCLIP              = 0x002,
    D3DXMESH_POINTS                 = 0x004,
    D3DXMESH_RTPATCHES              = 0x008,
    D3DXMESH_NPATCHES               = 0x4000,
    D3DXMESH_VB_SYSTEMMEM           = 0x010,
    D3DXMESH_VB_MANAGED             = 0x020,
    D3DXMESH_VB_WRITEONLY           = 0x040,
    D3DXMESH_VB_DYNAMIC             = 0x080,
    D3DXMESH_VB_SOFTWAREPROCESSING  = 0x8000,
    D3DXMESH_IB_SYSTEMMEM           = 0x100,
    D3DXMESH_IB_MANAGED             = 0x200,
    D3DXMESH_IB_WRITEONLY           = 0x400,
    D3DXMESH_IB_DYNAMIC             = 0x800,
    D3DXMESH_IB_SOFTWAREPROCESSING  = 0x10000,
    D3DXMESH_VB_SHARE               = 0x1000,
    D3DXMESH_USEHWONLY              = 0x2000,
    D3DXMESH_SYSTEMMEM              = 0x110,
    D3DXMESH_MANAGED                = 0x220,
    D3DXMESH_WRITEONLY              = 0x440,
    D3DXMESH_DYNAMIC                = 0x880,
    D3DXMESH_SOFTWAREPROCESSING     = 0x18000,
};
enum _D3DXMESHSIMP
{
    D3DXMESHSIMP_VERTEX   = 0x1,
    D3DXMESHSIMP_FACE     = 0x2,
};
enum _MAX_FVF_DECL_SIZE
{
    MAX_FVF_DECL_SIZE = 20
};
typedef struct ID3DXBaseMesh *LPD3DXBASEMESH;
typedef struct ID3DXMesh *LPD3DXMESH;
typedef struct ID3DXPMesh *LPD3DXPMESH;
typedef struct ID3DXSPMesh *LPD3DXSPMESH;
typedef struct ID3DXSkinMesh *LPD3DXSKINMESH;
typedef struct _D3DXATTRIBUTERANGE
{
    DWORD AttribId;
    DWORD FaceStart;
    DWORD FaceCount;
    DWORD VertexStart;
    DWORD VertexCount;
} D3DXATTRIBUTERANGE;
typedef D3DXATTRIBUTERANGE* LPD3DXATTRIBUTERANGE;
typedef struct D3DXMATERIAL
{
    D3DMATERIAL8  MatD3D;
    LPSTR         pTextureFilename;
} D3DXMATERIAL;
typedef struct D3DXMATERIAL *LPD3DXMATERIAL;
typedef struct _D3DXATTRIBUTEWEIGHTS
{
    FLOAT Position;
    FLOAT Boundary;
    FLOAT Normal;
    FLOAT Diffuse;
    FLOAT Specular;
    FLOAT Tex[8];
} D3DXATTRIBUTEWEIGHTS;
typedef D3DXATTRIBUTEWEIGHTS* LPD3DXATTRIBUTEWEIGHTS;
enum _D3DXWELDEPSILONSFLAGS
{
    D3DXWELDEPSILONS_WELDALL             = 0x1,
    D3DXWELDEPSILONS_WELDPARTIALMATCHES  = 0x2,
    D3DXWELDEPSILONS_DONOTREMOVEVERTICES = 0x4,
};
typedef struct _D3DXWELDEPSILONS
{
    FLOAT SkinWeights;
    FLOAT Normal;
    FLOAT Tex[8];
    DWORD Flags;
} D3DXWELDEPSILONS;
typedef D3DXWELDEPSILONS* LPD3DXWELDEPSILONS;
#undef INTERFACE
#define INTERFACE ID3DXBaseMesh
DECLARE_INTERFACE_(ID3DXBaseMesh, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(DrawSubset) (THIS_ DWORD AttribId);
	STDMETHOD_(DWORD, GetNumFaces) (THIS);
	STDMETHOD_(DWORD, GetNumVertices) (THIS);
	STDMETHOD_(DWORD, GetFVF) (THIS);
	STDMETHOD(GetDeclaration) (THIS_ DWORD Declaration[MAX_FVF_DECL_SIZE]);
	STDMETHOD_(DWORD, GetOptions) (THIS);
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE8 * ppDevice);
	STDMETHOD(CloneMeshFVF) (THIS_ DWORD Options, DWORD FVF, LPDIRECT3DDEVICE8 pD3DDevice, LPD3DXMESH * ppCloneMesh);
	STDMETHOD(CloneMesh) (THIS_ DWORD Options, CONST DWORD * pDeclaration, LPDIRECT3DDEVICE8 pD3DDevice, LPD3DXMESH * ppCloneMesh);
	STDMETHOD(GetVertexBuffer) (THIS_ LPDIRECT3DVERTEXBUFFER8 * ppVB);
	STDMETHOD(GetIndexBuffer) (THIS_ LPDIRECT3DINDEXBUFFER8 * ppIB);
	STDMETHOD(LockVertexBuffer) (THIS_ DWORD Flags, BYTE ** ppData);
	STDMETHOD(UnlockVertexBuffer) (THIS);
	STDMETHOD(LockIndexBuffer) (THIS_ DWORD Flags, BYTE ** ppData);
	STDMETHOD(UnlockIndexBuffer) (THIS);
	STDMETHOD(GetAttributeTable) (THIS_ D3DXATTRIBUTERANGE * pAttribTable, DWORD * pAttribTableSize);
	STDMETHOD(ConvertPointRepsToAdjacency) (THIS_ CONST DWORD * pPRep, DWORD * pAdjacency);
	STDMETHOD(ConvertAdjacencyToPointReps) (THIS_ CONST DWORD * pAdjacency, DWORD * pPRep);
	STDMETHOD(GenerateAdjacency) (THIS_ FLOAT Epsilon, DWORD * pAdjacency);
};
#undef INTERFACE
#define INTERFACE ID3DXMesh
DECLARE_INTERFACE_(ID3DXMesh, ID3DXBaseMesh)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(DrawSubset) (THIS_ DWORD AttribId);
	STDMETHOD_(DWORD, GetNumFaces) (THIS);
	STDMETHOD_(DWORD, GetNumVertices) (THIS);
	STDMETHOD_(DWORD, GetFVF) (THIS);
	STDMETHOD(GetDeclaration) (THIS_ DWORD Declaration[MAX_FVF_DECL_SIZE]);
	STDMETHOD_(DWORD, GetOptions) (THIS);
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE8 * ppDevice);
	STDMETHOD(CloneMeshFVF) (THIS_ DWORD Options, DWORD FVF, LPDIRECT3DDEVICE8 pD3DDevice, LPD3DXMESH * ppCloneMesh);
	STDMETHOD(CloneMesh) (THIS_ DWORD Options, CONST DWORD * pDeclaration, LPDIRECT3DDEVICE8 pD3DDevice, LPD3DXMESH * ppCloneMesh);
	STDMETHOD(GetVertexBuffer) (THIS_ LPDIRECT3DVERTEXBUFFER8 * ppVB);
	STDMETHOD(GetIndexBuffer) (THIS_ LPDIRECT3DINDEXBUFFER8 * ppIB);
	STDMETHOD(LockVertexBuffer) (THIS_ DWORD Flags, BYTE ** ppData);
	STDMETHOD(UnlockVertexBuffer) (THIS);
	STDMETHOD(LockIndexBuffer) (THIS_ DWORD Flags, BYTE ** ppData);
	STDMETHOD(UnlockIndexBuffer) (THIS);
	STDMETHOD(GetAttributeTable) (THIS_ D3DXATTRIBUTERANGE * pAttribTable, DWORD * pAttribTableSize);
	STDMETHOD(ConvertPointRepsToAdjacency) (THIS_ CONST DWORD * pPRep, DWORD * pAdjacency);
	STDMETHOD(ConvertAdjacencyToPointReps) (THIS_ CONST DWORD * pAdjacency, DWORD * pPRep);
	STDMETHOD(GenerateAdjacency) (THIS_ FLOAT Epsilon, DWORD * pAdjacency);
	STDMETHOD(LockAttributeBuffer) (THIS_ DWORD Flags, DWORD ** ppData);
	STDMETHOD(UnlockAttributeBuffer) (THIS);
	STDMETHOD(Optimize) (THIS_ DWORD Flags, CONST DWORD * pAdjacencyIn, DWORD * pAdjacencyOut, DWORD * pFaceRemap, LPD3DXBUFFER * ppVertexRemap, LPD3DXMESH * ppOptMesh);
	STDMETHOD(OptimizeInplace) (THIS_ DWORD Flags, CONST DWORD * pAdjacencyIn, DWORD * pAdjacencyOut, DWORD * pFaceRemap, LPD3DXBUFFER * ppVertexRemap);
};
#undef INTERFACE
#define INTERFACE ID3DXPMesh
DECLARE_INTERFACE_(ID3DXPMesh, ID3DXBaseMesh)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(DrawSubset) (THIS_ DWORD AttribId);
	STDMETHOD_(DWORD, GetNumFaces) (THIS);
	STDMETHOD_(DWORD, GetNumVertices) (THIS);
	STDMETHOD_(DWORD, GetFVF) (THIS);
	STDMETHOD(GetDeclaration) (THIS_ DWORD Declaration[MAX_FVF_DECL_SIZE]);
	STDMETHOD_(DWORD, GetOptions) (THIS);
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE8 * ppDevice);
	STDMETHOD(CloneMeshFVF) (THIS_ DWORD Options, DWORD FVF, LPDIRECT3DDEVICE8 pD3DDevice, LPD3DXMESH * ppCloneMesh);
	STDMETHOD(CloneMesh) (THIS_ DWORD Options, CONST DWORD * pDeclaration, LPDIRECT3DDEVICE8 pD3DDevice, LPD3DXMESH * ppCloneMesh);
	STDMETHOD(GetVertexBuffer) (THIS_ LPDIRECT3DVERTEXBUFFER8 * ppVB);
	STDMETHOD(GetIndexBuffer) (THIS_ LPDIRECT3DINDEXBUFFER8 * ppIB);
	STDMETHOD(LockVertexBuffer) (THIS_ DWORD Flags, BYTE ** ppData);
	STDMETHOD(UnlockVertexBuffer) (THIS);
	STDMETHOD(LockIndexBuffer) (THIS_ DWORD Flags, BYTE ** ppData);
	STDMETHOD(UnlockIndexBuffer) (THIS);
	STDMETHOD(GetAttributeTable) (THIS_ D3DXATTRIBUTERANGE * pAttribTable, DWORD * pAttribTableSize);
	STDMETHOD(ConvertPointRepsToAdjacency) (THIS_ CONST DWORD * pPRep, DWORD * pAdjacency);
	STDMETHOD(ConvertAdjacencyToPointReps) (THIS_ CONST DWORD * pAdjacency, DWORD * pPRep);
	STDMETHOD(GenerateAdjacency) (THIS_ FLOAT Epsilon, DWORD * pAdjacency);
	STDMETHOD(ClonePMeshFVF) (THIS_ DWORD Options, DWORD FVF, LPDIRECT3DDEVICE8 pD3D, LPD3DXPMESH * ppCloneMesh);
	STDMETHOD(ClonePMesh) (THIS_ DWORD Options, CONST DWORD * pDeclaration, LPDIRECT3DDEVICE8 pD3D, LPD3DXPMESH * ppCloneMesh);
	STDMETHOD(SetNumFaces) (THIS_ DWORD Faces);
	STDMETHOD(SetNumVertices) (THIS_ DWORD Vertices);
	STDMETHOD_(DWORD, GetMaxFaces) (THIS);
	STDMETHOD_(DWORD, GetMinFaces) (THIS);
	STDMETHOD_(DWORD, GetMaxVertices) (THIS);
	STDMETHOD_(DWORD, GetMinVertices) (THIS);
	STDMETHOD(Save) (THIS_ IStream * pStream, LPD3DXMATERIAL pMaterials, DWORD NumMaterials);
	STDMETHOD(Optimize) (THIS_ DWORD Flags, DWORD * pAdjacencyOut, DWORD * pFaceRemap, LPD3DXBUFFER * ppVertexRemap, LPD3DXMESH * ppOptMesh);
	STDMETHOD(OptimizeBaseLOD) (THIS_ DWORD Flags, DWORD * pFaceRemap);
	STDMETHOD(TrimByFaces) (THIS_ DWORD NewFacesMin, DWORD NewFacesMax, DWORD * rgiFaceRemap, DWORD * rgiVertRemap);
	STDMETHOD(TrimByVertices) (THIS_ DWORD NewVerticesMin, DWORD NewVerticesMax, DWORD * rgiFaceRemap, DWORD * rgiVertRemap);
	STDMETHOD(GetAdjacency) (THIS_ DWORD * pAdjacency);
};
#undef INTERFACE
#define INTERFACE ID3DXSPMesh
DECLARE_INTERFACE_(ID3DXSPMesh, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD_(DWORD, GetNumFaces) (THIS);
	STDMETHOD_(DWORD, GetNumVertices) (THIS);
	STDMETHOD_(DWORD, GetFVF) (THIS);
	STDMETHOD(GetDeclaration) (THIS_ DWORD Declaration[MAX_FVF_DECL_SIZE]);
	STDMETHOD_(DWORD, GetOptions) (THIS);
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE8 * ppDevice);
	STDMETHOD(CloneMeshFVF) (THIS_ DWORD Options, DWORD FVF, LPDIRECT3DDEVICE8 pD3D, DWORD * pAdjacencyOut, DWORD * pVertexRemapOut, LPD3DXMESH * ppCloneMesh);
	STDMETHOD(CloneMesh) (THIS_ DWORD Options, CONST DWORD * pDeclaration, LPDIRECT3DDEVICE8 pD3DDevice, DWORD * pAdjacencyOut, DWORD * pVertexRemapOut, LPD3DXMESH * ppCloneMesh);
	STDMETHOD(ClonePMeshFVF) (THIS_ DWORD Options, DWORD FVF, LPDIRECT3DDEVICE8 pD3D, DWORD * pVertexRemapOut, LPD3DXPMESH * ppCloneMesh);
	STDMETHOD(ClonePMesh) (THIS_ DWORD Options, CONST DWORD * pDeclaration, LPDIRECT3DDEVICE8 pD3D, DWORD * pVertexRemapOut, LPD3DXPMESH * ppCloneMesh);
	STDMETHOD(ReduceFaces) (THIS_ DWORD Faces);
	STDMETHOD(ReduceVertices) (THIS_ DWORD Vertices);
	STDMETHOD_(DWORD, GetMaxFaces) (THIS);
	STDMETHOD_(DWORD, GetMaxVertices) (THIS);
	STDMETHOD(GetVertexAttributeWeights) (THIS_ LPD3DXATTRIBUTEWEIGHTS pVertexAttributeWeights);
	STDMETHOD(GetVertexWeights) (THIS_ FLOAT * pVertexWeights);
};
#define UNUSED16 (0xffff)
#define UNUSED32 (0xffffffff)
enum _D3DXMESHOPT
{
    D3DXMESHOPT_COMPACT       = 0x01000000,
    D3DXMESHOPT_ATTRSORT      = 0x02000000,
    D3DXMESHOPT_VERTEXCACHE   = 0x04000000,
    D3DXMESHOPT_STRIPREORDER  = 0x08000000,
    D3DXMESHOPT_IGNOREVERTS   = 0x10000000,
    D3DXMESHOPT_SHAREVB       =     0x1000,
};
typedef struct _D3DXBONECOMBINATION
{
    DWORD AttribId;
    DWORD FaceStart;
    DWORD FaceCount;
    DWORD VertexStart;
    DWORD VertexCount;
    DWORD* BoneId;
} D3DXBONECOMBINATION, *LPD3DXBONECOMBINATION;
#undef INTERFACE
#define INTERFACE ID3DXSkinMesh
DECLARE_INTERFACE_(ID3DXSkinMesh, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD_(DWORD, GetNumFaces) (THIS);
	STDMETHOD_(DWORD, GetNumVertices) (THIS);
	STDMETHOD_(DWORD, GetFVF) (THIS);
	STDMETHOD(GetDeclaration) (THIS_ DWORD Declaration[MAX_FVF_DECL_SIZE]);
	STDMETHOD_(DWORD, GetOptions) (THIS);
	STDMETHOD(GetDevice) (THIS_ LPDIRECT3DDEVICE8 * ppDevice);
	STDMETHOD(GetVertexBuffer) (THIS_ LPDIRECT3DVERTEXBUFFER8 * ppVB);
	STDMETHOD(GetIndexBuffer) (THIS_ LPDIRECT3DINDEXBUFFER8 * ppIB);
	STDMETHOD(LockVertexBuffer) (THIS_ DWORD flags, BYTE ** ppData);
	STDMETHOD(UnlockVertexBuffer) (THIS);
	STDMETHOD(LockIndexBuffer) (THIS_ DWORD flags, BYTE ** ppData);
	STDMETHOD(UnlockIndexBuffer) (THIS);
	STDMETHOD(LockAttributeBuffer) (THIS_ DWORD flags, DWORD ** ppData);
	STDMETHOD(UnlockAttributeBuffer) (THIS);
	STDMETHOD_(DWORD, GetNumBones) (THIS);
	STDMETHOD(GetOriginalMesh) (THIS_ LPD3DXMESH * ppMesh);
	STDMETHOD(SetBoneInfluence) (THIS_ DWORD bone, DWORD numInfluences, CONST DWORD * vertices, CONST FLOAT * weights);
	STDMETHOD_(DWORD, GetNumBoneInfluences) (THIS_ DWORD bone);
	STDMETHOD(GetBoneInfluence) (THIS_ DWORD bone, DWORD * vertices, FLOAT * weights);
	STDMETHOD(GetMaxVertexInfluences) (THIS_ DWORD * maxVertexInfluences);
	STDMETHOD(GetMaxFaceInfluences) (THIS_ DWORD * maxFaceInfluences);
	STDMETHOD(ConvertToBlendedMesh) (THIS_ DWORD Options, CONST LPDWORD pAdjacencyIn, LPDWORD pAdjacencyOut, DWORD * pNumBoneCombinations, LPD3DXBUFFER * ppBoneCombinationTable, DWORD * pFaceRemap, LPD3DXBUFFER * ppVertexRemap, LPD3DXMESH * ppMesh);
	STDMETHOD(ConvertToIndexedBlendedMesh) (THIS_ DWORD Options, CONST LPDWORD pAdjacencyIn, DWORD paletteSize, LPDWORD pAdjacencyOut, DWORD * pNumBoneCombinations, LPD3DXBUFFER * ppBoneCombinationTable, DWORD * pFaceRemap, LPD3DXBUFFER * ppVertexRemap, LPD3DXMESH * ppMesh);
	STDMETHOD(GenerateSkinnedMesh) (THIS_ DWORD Options, FLOAT minWeight, CONST LPDWORD pAdjacencyIn, LPDWORD pAdjacencyOut, DWORD * pFaceRemap, LPD3DXBUFFER * ppVertexRemap, LPD3DXMESH * ppMesh);
	STDMETHOD(UpdateSkinnedMesh) (THIS_ CONST D3DXMATRIX * pBoneTransforms, CONST D3DXMATRIX * pBoneInvTransforms, LPD3DXMESH pMesh);
};
HRESULT WINAPI D3DXCreateMesh(DWORD NumFaces, DWORD NumVertices, DWORD Options, CONST DWORD *pDeclaration, LPDIRECT3DDEVICE8 pD3D, LPD3DXMESH *ppMesh);
HRESULT WINAPI D3DXCreateMeshFVF(DWORD NumFaces, DWORD NumVertices, DWORD Options, DWORD FVF, LPDIRECT3DDEVICE8 pD3D, LPD3DXMESH *ppMesh);
HRESULT WINAPI D3DXCreateSPMesh(LPD3DXMESH pMesh, CONST DWORD *pAdjacency, CONST LPD3DXATTRIBUTEWEIGHTS pVertexAttributeWeights, CONST FLOAT *pVertexWeights, LPD3DXSPMESH *ppSMesh);
HRESULT WINAPI D3DXCleanMesh(LPD3DXMESH pMeshIn, CONST DWORD *pAdjacencyIn, LPD3DXMESH *ppMeshOut, DWORD *pAdjacencyOut, LPD3DXBUFFER *ppErrorsAndWarnings);
HRESULT WINAPI D3DXValidMesh(LPD3DXMESH pMeshIn, CONST DWORD *pAdjacency, LPD3DXBUFFER *ppErrorsAndWarnings);
HRESULT WINAPI D3DXGeneratePMesh(LPD3DXMESH pMesh, CONST DWORD *pAdjacency, CONST LPD3DXATTRIBUTEWEIGHTS pVertexAttributeWeights, CONST FLOAT *pVertexWeights, DWORD MinValue, DWORD Options, LPD3DXPMESH *ppPMesh);
HRESULT WINAPI D3DXSimplifyMesh(LPD3DXMESH pMesh, CONST DWORD *pAdjacency, CONST LPD3DXATTRIBUTEWEIGHTS pVertexAttributeWeights, CONST FLOAT *pVertexWeights, DWORD MinValue, DWORD Options, LPD3DXMESH *ppMesh);
HRESULT WINAPI D3DXComputeBoundingSphere(PVOID pPointsFVF, DWORD NumVertices, DWORD FVF, D3DXVECTOR3 *pCenter, FLOAT *pRadius);
HRESULT WINAPI D3DXComputeBoundingBox(PVOID pPointsFVF, DWORD NumVertices, DWORD FVF, D3DXVECTOR3 *pMin, D3DXVECTOR3 *pMax);
HRESULT WINAPI D3DXComputeNormals(LPD3DXBASEMESH pMesh, CONST DWORD *pAdjacency);
HRESULT WINAPI D3DXCreateBuffer(DWORD NumBytes, LPD3DXBUFFER *ppBuffer);
HRESULT WINAPI D3DXLoadMeshFromX(LPSTR pFilename, DWORD Options, LPDIRECT3DDEVICE8 pD3D, LPD3DXBUFFER *ppAdjacency, LPD3DXBUFFER *ppMaterials, DWORD *pNumMaterials, LPD3DXMESH *ppMesh);
HRESULT WINAPI D3DXLoadMeshFromXInMemory(PBYTE Memory, DWORD SizeOfMemory, DWORD Options, LPDIRECT3DDEVICE8 pD3D, LPD3DXBUFFER *ppAdjacency, LPD3DXBUFFER *ppMaterials, DWORD *pNumMaterials, LPD3DXMESH *ppMesh);
HRESULT WINAPI D3DXLoadMeshFromXResource(HMODULE Module, LPCTSTR Name, LPCTSTR Type, DWORD Options, LPDIRECT3DDEVICE8 pD3D, LPD3DXBUFFER *ppAdjacency, LPD3DXBUFFER *ppMaterials, DWORD *pNumMaterials, LPD3DXMESH *ppMesh);
HRESULT WINAPI D3DXSaveMeshToX(LPSTR pFilename, LPD3DXMESH pMesh, CONST DWORD *pAdjacency, CONST LPD3DXMATERIAL pMaterials, DWORD NumMaterials, DWORD Format);
HRESULT WINAPI D3DXCreatePMeshFromStream(IStream *pStream, DWORD Options, LPDIRECT3DDEVICE8 pD3DDevice, LPD3DXBUFFER *ppMaterials, DWORD *pNumMaterials, LPD3DXPMESH *ppPMesh);
HRESULT WINAPI D3DXCreateSkinMesh(DWORD NumFaces, DWORD NumVertices, DWORD NumBones, DWORD Options, CONST DWORD *pDeclaration, LPDIRECT3DDEVICE8 pD3D, LPD3DXSKINMESH *ppSkinMesh);
HRESULT WINAPI D3DXCreateSkinMeshFVF(DWORD NumFaces, DWORD NumVertices, DWORD NumBones, DWORD Options, DWORD FVF, LPDIRECT3DDEVICE8 pD3D, LPD3DXSKINMESH *ppSkinMesh);
HRESULT WINAPI D3DXCreateSkinMeshFromMesh(LPD3DXMESH pMesh, DWORD numBones, LPD3DXSKINMESH *ppSkinMesh);
HRESULT WINAPI D3DXLoadMeshFromXof(LPDIRECTXFILEDATA pXofObjMesh, DWORD Options, LPDIRECT3DDEVICE8 pD3DDevice, LPD3DXBUFFER *ppAdjacency, LPD3DXBUFFER *ppMaterials, DWORD *pNumMaterials, LPD3DXMESH *ppMesh);
HRESULT WINAPI D3DXLoadSkinMeshFromXof(LPDIRECTXFILEDATA pxofobjMesh, DWORD Options, LPDIRECT3DDEVICE8 pD3D, LPD3DXBUFFER *ppAdjacency, LPD3DXBUFFER *ppMaterials, DWORD *pMatOut, LPD3DXBUFFER *ppBoneNames, LPD3DXBUFFER *ppBoneTransforms, LPD3DXSKINMESH *ppMesh);
HRESULT WINAPI D3DXTessellateNPatches(LPD3DXMESH pMeshIn, CONST DWORD *pAdjacencyIn, FLOAT NumSegs, BOOL QuadraticInterpNormals, LPD3DXMESH *ppMeshOut, LPD3DXBUFFER *ppAdjacencyOut);
UINT    WINAPI D3DXGetFVFVertexSize(DWORD FVF);
HRESULT WINAPI D3DXDeclaratorFromFVF(DWORD FVF, DWORD Declaration[MAX_FVF_DECL_SIZE]);
HRESULT WINAPI D3DXFVFFromDeclarator(CONST DWORD *pDeclarator, DWORD *pFVF);
HRESULT WINAPI D3DXWeldVertices(CONST LPD3DXMESH pMesh, LPD3DXWELDEPSILONS pEpsilons, CONST DWORD *pAdjacencyIn, DWORD *pAdjacencyOut, DWORD *pFaceRemap, LPD3DXBUFFER *ppVertexRemap);
typedef struct _D3DXINTERSECTINFO
{
    DWORD FaceIndex;
    FLOAT U;
    FLOAT V;
    FLOAT Dist;
} D3DXINTERSECTINFO, *LPD3DXINTERSECTINFO;
HRESULT WINAPI D3DXIntersect(LPD3DXBASEMESH pMesh, CONST D3DXVECTOR3 *pRayPos, CONST D3DXVECTOR3 *pRayDir, BOOL *pHit, DWORD *pFaceIndex, FLOAT *pU, FLOAT *pV, FLOAT *pDist, LPD3DXBUFFER *ppAllHits, DWORD *pCountOfHits);
HRESULT WINAPI D3DXIntersectSubset(LPD3DXBASEMESH pMesh, DWORD AttribId, CONST D3DXVECTOR3 *pRayPos, CONST D3DXVECTOR3 *pRayDir, BOOL *pHit, DWORD *pFaceIndex, FLOAT *pU, FLOAT *pV, FLOAT *pDist, LPD3DXBUFFER *ppAllHits, DWORD *pCountOfHits);
HRESULT WINAPI D3DXSplitMesh(CONST LPD3DXMESH pMeshIn, CONST DWORD *pAdjacencyIn, CONST DWORD MaxSize, CONST DWORD Options, DWORD *pMeshesOut, LPD3DXBUFFER *ppMeshArrayOut, LPD3DXBUFFER *ppAdjacencyArrayOut, LPD3DXBUFFER *ppFaceRemapArrayOut, LPD3DXBUFFER *ppVertRemapArrayOut);
BOOL           D3DXIntersectTri(CONST D3DXVECTOR3 *p0, CONST D3DXVECTOR3 *p1, CONST D3DXVECTOR3 *p2, CONST D3DXVECTOR3 *pRayPos, CONST D3DXVECTOR3 *pRayDir, FLOAT *pU, FLOAT *pV, FLOAT *pDist);
BOOL    WINAPI D3DXSphereBoundProbe(CONST D3DXVECTOR3 *pCenter, FLOAT Radius, CONST D3DXVECTOR3 *pRayPosition, CONST D3DXVECTOR3 *pRayDirection);
BOOL    WINAPI D3DXBoxBoundProbe(CONST D3DXVECTOR3 *pMin, CONST D3DXVECTOR3 *pMax, CONST D3DXVECTOR3 *pRayPosition, CONST D3DXVECTOR3 *pRayDirection);
enum _D3DXERR
{
    D3DXERR_CANNOTMODIFYINDEXBUFFER     = MAKE_DDHRESULT(2900),
    D3DXERR_INVALIDMESH                 = MAKE_DDHRESULT(2901),
    D3DXERR_CANNOTATTRSORT              = MAKE_DDHRESULT(2902),
    D3DXERR_SKINNINGNOTSUPPORTED        = MAKE_DDHRESULT(2903),
    D3DXERR_TOOMANYINFLUENCES           = MAKE_DDHRESULT(2904),
    D3DXERR_INVALIDDATA                 = MAKE_DDHRESULT(2905),
    D3DXERR_LOADEDMESHASNODATA          = MAKE_DDHRESULT(2906),
};
#define D3DX_COMP_TANGENT_NONE 0xFFFFFFFF
HRESULT WINAPI D3DXComputeTangent(LPD3DXMESH InMesh, DWORD TexStage, LPD3DXMESH OutMesh, DWORD TexStageUVec, DWORD TexStageVVec, DWORD Wrap, DWORD * Adjacency);
HRESULT WINAPI D3DXConvertMeshSubsetToSingleStrip(LPD3DXBASEMESH MeshIn, DWORD AttribId, DWORD IBOptions, LPDIRECT3DINDEXBUFFER8 * ppIndexBuffer, DWORD * pNumIndices);
HRESULT WINAPI D3DXConvertMeshSubsetToStrips(LPD3DXBASEMESH MeshIn, DWORD AttribId, DWORD IBOptions, LPDIRECT3DINDEXBUFFER8 * ppIndexBuffer, DWORD * pNumIndices, LPD3DXBUFFER * ppStripLengths, DWORD * pNumStrips);
#endif
