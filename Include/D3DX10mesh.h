/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx10mesh.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 12 16:23:22 2016
 \date		Modified on Sun Jun 12 16:23:22 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#include <d3dx10.h>
#ifndef __D3DX10MESH_H__
#define __D3DX10MESH_H__
#if __POCC__ >= 500
#pragma once
#endif
DEFINE_GUID(IID_ID3DX10BaseMesh, 0x7ed943dd, 0x52e8, 0x40b5, 0xa8, 0xd8, 0x76, 0x68, 0x5c, 0x40, 0x63, 0x30);
DEFINE_GUID(IID_ID3DX10MeshBuffer, 0x4b0d117, 0x1041, 0x46b1, 0xaa, 0x8a, 0x39, 0x52, 0x84, 0x8b, 0xa2, 0x2e);
DEFINE_GUID(IID_ID3DX10Mesh, 0x4020e5c2, 0x1403, 0x4929, 0x88, 0x3f, 0xe2, 0xe8, 0x49, 0xfa, 0xc1, 0x95);
DEFINE_GUID(IID_ID3DX10PMesh, 0x8875769a, 0xd579, 0x4088, 0xaa, 0xeb, 0x53, 0x4d, 0x1a, 0xd8, 0x4e, 0x96);
DEFINE_GUID(IID_ID3DX10SPMesh, 0x667ea4c7, 0xf1cd, 0x4386, 0xb5, 0x23, 0x7c, 0x2, 0x90, 0xb8, 0x3c, 0xc5);
DEFINE_GUID(IID_ID3DX10PatchMesh, 0x3ce6cc22, 0xdbf2, 0x44f4, 0x89, 0x4d, 0xf9, 0xc3, 0x4a, 0x33, 0x71, 0x39);
enum _D3DX10_MESH
{
	D3DX10_MESH_32_BIT = 0x001,
	D3DX10_MESH_GS_ADJACENCY = 0x004,
};
typedef struct _D3DX10_ATTRIBUTE_RANGE
{
	UINT AttribId;
	UINT FaceStart;
	UINT FaceCount;
	UINT VertexStart;
	UINT VertexCount;
} D3DX10_ATTRIBUTE_RANGE;
typedef D3DX10_ATTRIBUTE_RANGE *LPD3DX10_ATTRIBUTE_RANGE;
typedef enum _D3DX10_MESH_DISCARD_FLAGS
{
	D3DX10_MESH_DISCARD_ATTRIBUTE_BUFFER = 0x01,
	D3DX10_MESH_DISCARD_ATTRIBUTE_TABLE = 0x02,
	D3DX10_MESH_DISCARD_POINTREPS = 0x04,
	D3DX10_MESH_DISCARD_ADJACENCY = 0x08,
	D3DX10_MESH_DISCARD_DEVICE_BUFFERS = 0x10,
} D3DX10_MESH_DISCARD_FLAGS;
typedef struct _D3DX10_WELD_EPSILONS
{
	FLOAT Position;
	FLOAT BlendWeights;
	FLOAT Normal;
	FLOAT PSize;
	FLOAT Specular;
	FLOAT Diffuse;
	FLOAT Texcoord[8];
	FLOAT Tangent;
	FLOAT Binormal;
	FLOAT TessFactor;
} D3DX10_WELD_EPSILONS;
typedef D3DX10_WELD_EPSILONS *LPD3DX10_WELD_EPSILONS;
typedef struct _D3DX10_INTERSECT_INFO
{
	UINT FaceIndex;
	FLOAT U;
	FLOAT V;
	FLOAT Dist;
} D3DX10_INTERSECT_INFO, *LPD3DX10_INTERSECT_INFO;
#undef INTERFACE
#define INTERFACE ID3DX10MeshBuffer
DECLARE_INTERFACE_(ID3DX10MeshBuffer, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Map) (THIS_ void **ppData, SIZE_T * pSize);
	STDMETHOD(Unmap) (THIS);
	STDMETHOD_(SIZE_T, GetSize) (THIS);
};
#undef INTERFACE
#define INTERFACE ID3DX10Mesh
DECLARE_INTERFACE_(ID3DX10Mesh, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD_(UINT, GetFaceCount) (THIS);
	STDMETHOD_(UINT, GetVertexCount) (THIS);
	STDMETHOD_(UINT, GetVertexBufferCount) (THIS);
	STDMETHOD_(UINT, GetFlags) (THIS);
	STDMETHOD(GetVertexDescription) (THIS_ CONST D3D10_INPUT_ELEMENT_DESC ** ppDesc, UINT * pDeclCount);
	STDMETHOD(SetVertexData) (THIS_ UINT iBuffer, CONST void *pData);
	STDMETHOD(GetVertexBuffer) (THIS_ UINT iBuffer, ID3DX10MeshBuffer ** ppVertexBuffer);
	STDMETHOD(SetIndexData) (THIS_ CONST void *pData, UINT cIndices);
	STDMETHOD(GetIndexBuffer) (THIS_ ID3DX10MeshBuffer ** ppIndexBuffer);
	STDMETHOD(SetAttributeData) (THIS_ CONST UINT * pData);
	STDMETHOD(GetAttributeBuffer) (THIS_ ID3DX10MeshBuffer ** ppAttributeBuffer);
	STDMETHOD(SetAttributeTable) (THIS_ CONST D3DX10_ATTRIBUTE_RANGE * pAttribTable, UINT cAttribTableSize);
	STDMETHOD(GetAttributeTable) (THIS_ D3DX10_ATTRIBUTE_RANGE * pAttribTable, UINT * pAttribTableSize);
	STDMETHOD(GenerateAdjacencyAndPointReps) (THIS_ FLOAT Epsilon);
	STDMETHOD(GenerateGSAdjacency) (THIS);
	STDMETHOD(SetAdjacencyData) (THIS_ CONST UINT * pAdjacency);
	STDMETHOD(GetAdjacencyBuffer) (THIS_ ID3DX10MeshBuffer ** ppAdjacency);
	STDMETHOD(SetPointRepData) (THIS_ CONST UINT * pPointReps);
	STDMETHOD(GetPointRepBuffer) (THIS_ ID3DX10MeshBuffer ** ppPointReps);
	STDMETHOD(Discard) (THIS_ D3DX10_MESH_DISCARD_FLAGS dwDiscard);
	STDMETHOD(CloneMesh) (THIS_ UINT Flags, LPCSTR pPosSemantic, CONST D3D10_INPUT_ELEMENT_DESC * pDesc, UINT DeclCount, ID3DX10Mesh ** ppCloneMesh);
	STDMETHOD(Optimize) (THIS_ UINT Flags, UINT * pFaceRemap, LPD3D10BLOB * ppVertexRemap);
	STDMETHOD(GenerateAttributeBufferFromTable) (THIS);
	STDMETHOD(Intersect) (THIS_ D3DXVECTOR3 * pRayPos, D3DXVECTOR3 * pRayDir, UINT * pHitCount, UINT * pFaceIndex, float *pU, float *pV, float *pDist, ID3D10Blob ** ppAllHits);
	STDMETHOD(IntersectSubset) (THIS_ UINT AttribId, D3DXVECTOR3 * pRayPos, D3DXVECTOR3 * pRayDir, UINT * pHitCount, UINT * pFaceIndex, float *pU, float *pV, float *pDist, ID3D10Blob ** ppAllHits);
	STDMETHOD(CommitToDevice) (THIS);
	STDMETHOD(DrawSubset) (THIS_ UINT AttribId);
	STDMETHOD(DrawSubsetInstanced) (THIS_ UINT AttribId, UINT InstanceCount, UINT StartInstanceLocation);
	STDMETHOD(GetDeviceVertexBuffer) (THIS_ UINT iBuffer, ID3D10Buffer ** ppVertexBuffer);
	STDMETHOD(GetDeviceIndexBuffer) (THIS_ ID3D10Buffer ** ppIndexBuffer);
};
HRESULT WINAPI D3DX10CreateMesh(ID3D10Device *pDevice, CONST D3D10_INPUT_ELEMENT_DESC *pDeclaration, UINT DeclCount, LPCSTR pPositionSemantic, UINT VertexCount, UINT FaceCount, UINT Options, ID3DX10Mesh **ppMesh);
enum _D3DX10_MESHOPT
{
	D3DX10_MESHOPT_COMPACT = 0x01000000,
	D3DX10_MESHOPT_ATTR_SORT = 0x02000000,
	D3DX10_MESHOPT_VERTEX_CACHE = 0x04000000,
	D3DX10_MESHOPT_STRIP_REORDER = 0x08000000,
	D3DX10_MESHOPT_IGNORE_VERTS = 0x10000000,
	D3DX10_MESHOPT_DO_NOT_SPLIT = 0x20000000,
	D3DX10_MESHOPT_DEVICE_INDEPENDENT = 0x00400000,
};
DEFINE_GUID(IID_ID3DX10SkinInfo, 0x420bd604, 0x1c76, 0x4a34, 0xa4, 0x66, 0xe4, 0x5d, 0x6, 0x58, 0xa3, 0x2c);
#define D3DX10_SKININFO_NO_SCALING 0
#define D3DX10_SKININFO_SCALE_TO_1 1
#define D3DX10_SKININFO_SCALE_TO_TOTAL 2
typedef struct _D3DX10_SKINNING_CHANNEL
{
	UINT SrcOffset;
	UINT DestOffset;
	BOOL IsNormal;
} D3DX10_SKINNING_CHANNEL;
#undef INTERFACE
#define INTERFACE ID3DX10SkinInfo
typedef struct ID3DX10SkinInfo *LPD3DX10SKININFO;
DECLARE_INTERFACE_(ID3DX10SkinInfo, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD_(UINT, GetNumVertices) (THIS);
	STDMETHOD_(UINT, GetNumBones) (THIS);
	STDMETHOD_(UINT, GetMaxBoneInfluences) (THIS);
	STDMETHOD(AddVertices) (THIS_ UINT Count);
	STDMETHOD(RemapVertices) (THIS_ UINT NewVertexCount, UINT * pVertexRemap);
	STDMETHOD(AddBones) (THIS_ UINT Count);
	STDMETHOD(RemoveBone) (THIS_ UINT Index);
	STDMETHOD(RemapBones) (THIS_ UINT NewBoneCount, UINT * pBoneRemap);
	STDMETHOD(AddBoneInfluences) (THIS_ UINT BoneIndex, UINT InfluenceCount, UINT * pIndices, float *pWeights);
	STDMETHOD(ClearBoneInfluences) (THIS_ UINT BoneIndex);
	STDMETHOD_(UINT, GetBoneInfluenceCount) (THIS_ UINT BoneIndex);
	STDMETHOD(GetBoneInfluences) (THIS_ UINT BoneIndex, UINT Offset, UINT Count, UINT * pDestIndices, float *pDestWeights);
	STDMETHOD(FindBoneInfluenceIndex) (THIS_ UINT BoneIndex, UINT VertexIndex, UINT * pInfluenceIndex);
	STDMETHOD(SetBoneInfluence) (THIS_ UINT BoneIndex, UINT InfluenceIndex, float Weight);
	STDMETHOD(GetBoneInfluence) (THIS_ UINT BoneIndex, UINT InfluenceIndex, float *pWeight);
	STDMETHOD(Compact) (THIS_ UINT MaxPerVertexInfluences, UINT ScaleMode, float MinWeight);
	STDMETHOD(DoSoftwareSkinning) (UINT StartVertex, UINT VertexCount, void *pSrcVertices, UINT SrcStride, void *pDestVertices, UINT DestStride, D3DXMATRIX * pBoneMatrices, D3DXMATRIX * pInverseTransposeBoneMatrices, D3DX10_SKINNING_CHANNEL * pChannelDescs, UINT NumChannels);
};
typedef struct _D3DX10_ATTRIBUTE_WEIGHTS
{
	FLOAT Position;
	FLOAT Boundary;
	FLOAT Normal;
	FLOAT Diffuse;
	FLOAT Specular;
	FLOAT Texcoord[8];
	FLOAT Tangent;
	FLOAT Binormal;
} D3DX10_ATTRIBUTE_WEIGHTS, *LPD3DX10_ATTRIBUTE_WEIGHTS;
#endif
