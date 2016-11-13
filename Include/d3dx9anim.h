/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx9anim.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Nov 11 16:31:10 2016
 \date		Modified on Fri Nov 11 16:31:10 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __D3DX9ANIM_H__
#define __D3DX9ANIM_H__
#if __POCC__ >= 500
#pragma once
#endif
DEFINE_GUID(IID_ID3DXAnimationSet, 0x698cfb3f, 0x9289, 0x4d95, 0x9a, 0x57, 0x33, 0xa9, 0x4b, 0x5a, 0x65, 0xf9);
DEFINE_GUID(IID_ID3DXKeyframedAnimationSet, 0xfa4e8e3a, 0x9786, 0x407d, 0x8b, 0x4c, 0x59, 0x95, 0x89, 0x37, 0x64, 0xaf);
DEFINE_GUID(IID_ID3DXCompressedAnimationSet, 0x6cc2480d, 0x3808, 0x4739, 0x9f, 0x88, 0xde, 0x49, 0xfa, 0xcd, 0x8d, 0x4c);
DEFINE_GUID(IID_ID3DXAnimationController, 0xac8948ec, 0xf86d, 0x43e2, 0x96, 0xde, 0x31, 0xfc, 0x35, 0xf9, 0x6d, 0x9e);
typedef enum _D3DXMESHDATATYPE
{
	D3DXMESHTYPE_MESH = 0x001,
	D3DXMESHTYPE_PMESH = 0x002,
	D3DXMESHTYPE_PATCHMESH = 0x003,
	D3DXMESHTYPE_FORCE_DWORD = 0x7fffffff,
} D3DXMESHDATATYPE;
typedef struct _D3DXMESHDATA
{
	D3DXMESHDATATYPE Type;
	union
{
		LPD3DXMESH pMesh;
		LPD3DXPMESH pPMesh;
		LPD3DXPATCHMESH pPatchMesh;
	};
} D3DXMESHDATA, *LPD3DXMESHDATA;
typedef struct _D3DXMESHCONTAINER
{
	LPSTR Name;
	D3DXMESHDATA MeshData;
	LPD3DXMATERIAL pMaterials;
	LPD3DXEFFECTINSTANCE pEffects;
	DWORD NumMaterials;
	DWORD *pAdjacency;
	LPD3DXSKININFO pSkinInfo;
	struct _D3DXMESHCONTAINER *pNextMeshContainer;
} D3DXMESHCONTAINER, *LPD3DXMESHCONTAINER;
typedef struct _D3DXFRAME
{
	LPSTR Name;
	D3DXMATRIX TransformationMatrix;
	LPD3DXMESHCONTAINER pMeshContainer;
	struct _D3DXFRAME *pFrameSibling;
	struct _D3DXFRAME *pFrameFirstChild;
} D3DXFRAME, *LPD3DXFRAME;
typedef interface ID3DXAllocateHierarchy ID3DXAllocateHierarchy;
typedef interface ID3DXAllocateHierarchy *LPD3DXALLOCATEHIERARCHY;
#undef INTERFACE
#define INTERFACE ID3DXAllocateHierarchy
DECLARE_INTERFACE(ID3DXAllocateHierarchy)
{
	STDMETHOD(CreateFrame) (THIS_ LPCSTR Name, LPD3DXFRAME * ppNewFrame)PURE;
	STDMETHOD(CreateMeshContainer) (THIS_ LPCSTR Name, CONST D3DXMESHDATA * pMeshData, CONST D3DXMATERIAL * pMaterials, CONST D3DXEFFECTINSTANCE * pEffectInstances, DWORD NumMaterials, CONST DWORD * pAdjacency, LPD3DXSKININFO pSkinInfo, LPD3DXMESHCONTAINER * ppNewMeshContainer)PURE;
	STDMETHOD(DestroyFrame) (THIS_ LPD3DXFRAME pFrameToFree)PURE;
	STDMETHOD(DestroyMeshContainer) (THIS_ LPD3DXMESHCONTAINER pMeshContainerToFree)PURE;
};
typedef interface ID3DXLoadUserData ID3DXLoadUserData;
typedef interface ID3DXLoadUserData *LPD3DXLOADUSERDATA;
#undef INTERFACE
#define INTERFACE ID3DXLoadUserData
DECLARE_INTERFACE(ID3DXLoadUserData)
{
	STDMETHOD(LoadTopLevelData) (LPD3DXFILEDATA pXofChildData)PURE;
	STDMETHOD(LoadFrameChildData) (LPD3DXFRAME pFrame, LPD3DXFILEDATA pXofChildData)PURE;
	STDMETHOD(LoadMeshChildData) (LPD3DXMESHCONTAINER pMeshContainer, LPD3DXFILEDATA pXofChildData)PURE;
};
typedef interface ID3DXSaveUserData ID3DXSaveUserData;
typedef interface ID3DXSaveUserData *LPD3DXSAVEUSERDATA;
#undef INTERFACE
#define INTERFACE ID3DXSaveUserData
DECLARE_INTERFACE(ID3DXSaveUserData)
{
	STDMETHOD(AddFrameChildData) (CONST D3DXFRAME * pFrame, LPD3DXFILESAVEOBJECT pXofSave, LPD3DXFILESAVEDATA pXofFrameData)PURE;
	STDMETHOD(AddMeshChildData) (CONST D3DXMESHCONTAINER * pMeshContainer, LPD3DXFILESAVEOBJECT pXofSave, LPD3DXFILESAVEDATA pXofMeshData)PURE;
	STDMETHOD(AddTopLevelDataObjectsPre) (LPD3DXFILESAVEOBJECT pXofSave)PURE;
	STDMETHOD(AddTopLevelDataObjectsPost) (LPD3DXFILESAVEOBJECT pXofSave)PURE;
	STDMETHOD(RegisterTemplates) (LPD3DXFILE pXFileApi)PURE;
	STDMETHOD(SaveTemplates) (LPD3DXFILESAVEOBJECT pXofSave)PURE;
};
typedef enum _D3DXCALLBACK_SEARCH_FLAGS
{
	D3DXCALLBACK_SEARCH_EXCLUDING_INITIAL_POSITION = 0x01,
	D3DXCALLBACK_SEARCH_BEHIND_INITIAL_POSITION = 0x02,
	D3DXCALLBACK_SEARCH_FORCE_DWORD = 0x7fffffff,
} D3DXCALLBACK_SEARCH_FLAGS;
typedef interface ID3DXAnimationSet ID3DXAnimationSet;
typedef interface ID3DXAnimationSet *LPD3DXANIMATIONSET;
#undef INTERFACE
#define INTERFACE ID3DXAnimationSet
DECLARE_INTERFACE_(ID3DXAnimationSet, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD_(LPCSTR, GetName) (THIS)PURE;
	STDMETHOD_(DOUBLE, GetPeriod) (THIS)PURE;
	STDMETHOD_(DOUBLE, GetPeriodicPosition) (THIS_ DOUBLE Position)PURE;
	STDMETHOD_(UINT, GetNumAnimations) (THIS)PURE;
	STDMETHOD(GetAnimationNameByIndex) (THIS_ UINT Index, LPCSTR * ppName)PURE;
	STDMETHOD(GetAnimationIndexByName) (THIS_ LPCSTR pName, UINT * pIndex)PURE;
	STDMETHOD(GetSRT) (THIS_ DOUBLE PeriodicPosition, UINT Animation, D3DXVECTOR3 * pScale, D3DXQUATERNION * pRotation, D3DXVECTOR3 * pTranslation)PURE;
	STDMETHOD(GetCallback) (THIS_ DOUBLE Position, DWORD Flags, DOUBLE * pCallbackPosition, LPVOID * ppCallbackData)PURE;
};
typedef enum _D3DXPLAYBACK_TYPE
{
	D3DXPLAY_LOOP = 0,
	D3DXPLAY_ONCE = 1,
	D3DXPLAY_PINGPONG = 2,
	D3DXPLAY_FORCE_DWORD = 0x7fffffff,
} D3DXPLAYBACK_TYPE;
typedef struct _D3DXKEY_VECTOR3
{
	FLOAT Time;
	D3DXVECTOR3 Value;
} D3DXKEY_VECTOR3, *LPD3DXKEY_VECTOR3;
typedef struct _D3DXKEY_QUATERNION
{
	FLOAT Time;
	D3DXQUATERNION Value;
} D3DXKEY_QUATERNION, *LPD3DXKEY_QUATERNION;
typedef struct _D3DXKEY_CALLBACK
{
	FLOAT Time;
	LPVOID pCallbackData;
} D3DXKEY_CALLBACK, *LPD3DXKEY_CALLBACK;
typedef enum _D3DXCOMPRESSION_FLAGS
{
	D3DXCOMPRESS_DEFAULT = 0x00,
	D3DXCOMPRESS_FORCE_DWORD = 0x7fffffff,
} D3DXCOMPRESSION_FLAGS;
typedef interface ID3DXKeyframedAnimationSet ID3DXKeyframedAnimationSet;
typedef interface ID3DXKeyframedAnimationSet *LPD3DXKEYFRAMEDANIMATIONSET;
#undef INTERFACE
#define INTERFACE ID3DXKeyframedAnimationSet
DECLARE_INTERFACE_(ID3DXKeyframedAnimationSet, ID3DXAnimationSet)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD_(LPCSTR, GetName) (THIS)PURE;
	STDMETHOD_(DOUBLE, GetPeriod) (THIS)PURE;
	STDMETHOD_(DOUBLE, GetPeriodicPosition) (THIS_ DOUBLE Position)PURE;
	STDMETHOD_(UINT, GetNumAnimations) (THIS)PURE;
	STDMETHOD(GetAnimationNameByIndex) (THIS_ UINT Index, LPCSTR * ppName)PURE;
	STDMETHOD(GetAnimationIndexByName) (THIS_ LPCSTR pName, UINT * pIndex)PURE;
	STDMETHOD(GetSRT) (THIS_ DOUBLE PeriodicPosition, UINT Animation, D3DXVECTOR3 * pScale, D3DXQUATERNION * pRotation, D3DXVECTOR3 * pTranslation)PURE;
	STDMETHOD(GetCallback) (THIS_ DOUBLE Position, DWORD Flags, DOUBLE * pCallbackPosition, LPVOID * ppCallbackData)PURE;
	STDMETHOD_(D3DXPLAYBACK_TYPE, GetPlaybackType) (THIS)PURE;
	STDMETHOD_(DOUBLE, GetSourceTicksPerSecond) (THIS)PURE;
	STDMETHOD_(UINT, GetNumScaleKeys) (THIS_ UINT Animation)PURE;
	STDMETHOD(GetScaleKeys) (THIS_ UINT Animation, LPD3DXKEY_VECTOR3 pScaleKeys)PURE;
	STDMETHOD(GetScaleKey) (THIS_ UINT Animation, UINT Key, LPD3DXKEY_VECTOR3 pScaleKey)PURE;
	STDMETHOD(SetScaleKey) (THIS_ UINT Animation, UINT Key, LPD3DXKEY_VECTOR3 pScaleKey)PURE;
	STDMETHOD_(UINT, GetNumRotationKeys) (THIS_ UINT Animation)PURE;
	STDMETHOD(GetRotationKeys) (THIS_ UINT Animation, LPD3DXKEY_QUATERNION pRotationKeys)PURE;
	STDMETHOD(GetRotationKey) (THIS_ UINT Animation, UINT Key, LPD3DXKEY_QUATERNION pRotationKey)PURE;
	STDMETHOD(SetRotationKey) (THIS_ UINT Animation, UINT Key, LPD3DXKEY_QUATERNION pRotationKey)PURE;
	STDMETHOD_(UINT, GetNumTranslationKeys) (THIS_ UINT Animation)PURE;
	STDMETHOD(GetTranslationKeys) (THIS_ UINT Animation, LPD3DXKEY_VECTOR3 pTranslationKeys)PURE;
	STDMETHOD(GetTranslationKey) (THIS_ UINT Animation, UINT Key, LPD3DXKEY_VECTOR3 pTranslationKey)PURE;
	STDMETHOD(SetTranslationKey) (THIS_ UINT Animation, UINT Key, LPD3DXKEY_VECTOR3 pTranslationKey)PURE;
	STDMETHOD_(UINT, GetNumCallbackKeys) (THIS)PURE;
	STDMETHOD(GetCallbackKeys) (THIS_ LPD3DXKEY_CALLBACK pCallbackKeys)PURE;
	STDMETHOD(GetCallbackKey) (THIS_ UINT Key, LPD3DXKEY_CALLBACK pCallbackKey)PURE;
	STDMETHOD(SetCallbackKey) (THIS_ UINT Key, LPD3DXKEY_CALLBACK pCallbackKey)PURE;
	STDMETHOD(UnregisterScaleKey) (THIS_ UINT Animation, UINT Key)PURE;
	STDMETHOD(UnregisterRotationKey) (THIS_ UINT Animation, UINT Key)PURE;
	STDMETHOD(UnregisterTranslationKey) (THIS_ UINT Animation, UINT Key)PURE;
	STDMETHOD(RegisterAnimationSRTKeys) (THIS_ LPCSTR pName, UINT NumScaleKeys, UINT NumRotationKeys, UINT NumTranslationKeys, CONST D3DXKEY_VECTOR3 * pScaleKeys, CONST D3DXKEY_QUATERNION * pRotationKeys, CONST D3DXKEY_VECTOR3 * pTranslationKeys, DWORD * pAnimationIndex)PURE;
	STDMETHOD(Compress) (THIS_ DWORD Flags, FLOAT Lossiness, LPD3DXFRAME pHierarchy, LPD3DXBUFFER * ppCompressedData)PURE;
	STDMETHOD(UnregisterAnimation) (THIS_ UINT Index)PURE;
};
typedef interface ID3DXCompressedAnimationSet ID3DXCompressedAnimationSet;
typedef interface ID3DXCompressedAnimationSet *LPD3DXCOMPRESSEDANIMATIONSET;
#undef INTERFACE
#define INTERFACE ID3DXCompressedAnimationSet
DECLARE_INTERFACE_(ID3DXCompressedAnimationSet, ID3DXAnimationSet)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD_(LPCSTR, GetName) (THIS)PURE;
	STDMETHOD_(DOUBLE, GetPeriod) (THIS)PURE;
	STDMETHOD_(DOUBLE, GetPeriodicPosition) (THIS_ DOUBLE Position)PURE;
	STDMETHOD_(UINT, GetNumAnimations) (THIS)PURE;
	STDMETHOD(GetAnimationNameByIndex) (THIS_ UINT Index, LPCSTR * ppName)PURE;
	STDMETHOD(GetAnimationIndexByName) (THIS_ LPCSTR pName, UINT * pIndex)PURE;
	STDMETHOD(GetSRT) (THIS_ DOUBLE PeriodicPosition, UINT Animation, D3DXVECTOR3 * pScale, D3DXQUATERNION * pRotation, D3DXVECTOR3 * pTranslation)PURE;
	STDMETHOD(GetCallback) (THIS_ DOUBLE Position, DWORD Flags, DOUBLE * pCallbackPosition, LPVOID * ppCallbackData)PURE;
	STDMETHOD_(D3DXPLAYBACK_TYPE, GetPlaybackType) (THIS)PURE;
	STDMETHOD_(DOUBLE, GetSourceTicksPerSecond) (THIS)PURE;
	STDMETHOD(GetCompressedData) (THIS_ LPD3DXBUFFER * ppCompressedData)PURE;
	STDMETHOD_(UINT, GetNumCallbackKeys) (THIS)PURE;
	STDMETHOD(GetCallbackKeys) (THIS_ LPD3DXKEY_CALLBACK pCallbackKeys)PURE;
};
typedef enum _D3DXPRIORITY_TYPE
{
	D3DXPRIORITY_LOW = 0,
	D3DXPRIORITY_HIGH = 1,
	D3DXPRIORITY_FORCE_DWORD = 0x7fffffff,
} D3DXPRIORITY_TYPE;
typedef struct _D3DXTRACK_DESC
{
	D3DXPRIORITY_TYPE Priority;
	FLOAT Weight;
	FLOAT Speed;
	DOUBLE Position;
	BOOL Enable;
} D3DXTRACK_DESC, *LPD3DXTRACK_DESC;
typedef enum _D3DXEVENT_TYPE
{
	D3DXEVENT_TRACKSPEED = 0,
	D3DXEVENT_TRACKWEIGHT = 1,
	D3DXEVENT_TRACKPOSITION = 2,
	D3DXEVENT_TRACKENABLE = 3,
	D3DXEVENT_PRIORITYBLEND = 4,
	D3DXEVENT_FORCE_DWORD = 0x7fffffff,
} D3DXEVENT_TYPE;
typedef enum _D3DXTRANSITION_TYPE
{
	D3DXTRANSITION_LINEAR = 0x000,
	D3DXTRANSITION_EASEINEASEOUT = 0x001,
	D3DXTRANSITION_FORCE_DWORD = 0x7fffffff,
} D3DXTRANSITION_TYPE;
typedef struct _D3DXEVENT_DESC
{
	D3DXEVENT_TYPE Type;
	UINT Track;
	DOUBLE StartTime;
	DOUBLE Duration;
	D3DXTRANSITION_TYPE Transition;
	union
{
		FLOAT Weight;
		FLOAT Speed;
		DOUBLE Position;
		BOOL Enable;
	};
} D3DXEVENT_DESC, *LPD3DXEVENT_DESC;
typedef DWORD D3DXEVENTHANDLE;
typedef D3DXEVENTHANDLE *LPD3DXEVENTHANDLE;
typedef interface ID3DXAnimationCallbackHandler ID3DXAnimationCallbackHandler;
typedef interface ID3DXAnimationCallbackHandler *LPD3DXANIMATIONCALLBACKHANDLER;
#undef INTERFACE
#define INTERFACE ID3DXAnimationCallbackHandler
DECLARE_INTERFACE(ID3DXAnimationCallbackHandler)
{
	STDMETHOD(HandleCallback) (THIS_ UINT Track, LPVOID pCallbackData)PURE;
};
typedef interface ID3DXAnimationController ID3DXAnimationController;
typedef interface ID3DXAnimationController *LPD3DXANIMATIONCONTROLLER;
#undef INTERFACE
#define INTERFACE ID3DXAnimationController
DECLARE_INTERFACE_(ID3DXAnimationController, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD_(UINT, GetMaxNumAnimationOutputs) (THIS)PURE;
	STDMETHOD_(UINT, GetMaxNumAnimationSets) (THIS)PURE;
	STDMETHOD_(UINT, GetMaxNumTracks) (THIS)PURE;
	STDMETHOD_(UINT, GetMaxNumEvents) (THIS)PURE;
	STDMETHOD(RegisterAnimationOutput) (THIS_ LPCSTR pName, D3DXMATRIX * pMatrix, D3DXVECTOR3 * pScale, D3DXQUATERNION * pRotation, D3DXVECTOR3 * pTranslation)PURE;
	STDMETHOD(RegisterAnimationSet) (THIS_ LPD3DXANIMATIONSET pAnimSet)PURE;
	STDMETHOD(UnregisterAnimationSet) (THIS_ LPD3DXANIMATIONSET pAnimSet)PURE;
	STDMETHOD_(UINT, GetNumAnimationSets) (THIS)PURE;
	STDMETHOD(GetAnimationSet) (THIS_ UINT Index, LPD3DXANIMATIONSET * ppAnimationSet)PURE;
	STDMETHOD(GetAnimationSetByName) (THIS_ LPCSTR szName, LPD3DXANIMATIONSET * ppAnimationSet)PURE;
	STDMETHOD(AdvanceTime) (THIS_ DOUBLE TimeDelta, LPD3DXANIMATIONCALLBACKHANDLER pCallbackHandler)PURE;
	STDMETHOD(ResetTime) (THIS)PURE;
	STDMETHOD_(DOUBLE, GetTime) (THIS)PURE;
	STDMETHOD(SetTrackAnimationSet) (THIS_ UINT Track, LPD3DXANIMATIONSET pAnimSet)PURE;
	STDMETHOD(GetTrackAnimationSet) (THIS_ UINT Track, LPD3DXANIMATIONSET * ppAnimSet)PURE;
	STDMETHOD(SetTrackPriority) (THIS_ UINT Track, D3DXPRIORITY_TYPE Priority)PURE;
	STDMETHOD(SetTrackSpeed) (THIS_ UINT Track, FLOAT Speed)PURE;
	STDMETHOD(SetTrackWeight) (THIS_ UINT Track, FLOAT Weight)PURE;
	STDMETHOD(SetTrackPosition) (THIS_ UINT Track, DOUBLE Position)PURE;
	STDMETHOD(SetTrackEnable) (THIS_ UINT Track, BOOL Enable)PURE;
	STDMETHOD(SetTrackDesc) (THIS_ UINT Track, LPD3DXTRACK_DESC pDesc)PURE;
	STDMETHOD(GetTrackDesc) (THIS_ UINT Track, LPD3DXTRACK_DESC pDesc)PURE;
	STDMETHOD(SetPriorityBlend) (THIS_ FLOAT BlendWeight)PURE;
	STDMETHOD_(FLOAT, GetPriorityBlend) (THIS)PURE;
	STDMETHOD_(D3DXEVENTHANDLE, KeyTrackSpeed) (THIS_ UINT Track, FLOAT NewSpeed, DOUBLE StartTime, DOUBLE Duration, D3DXTRANSITION_TYPE Transition)PURE;
	STDMETHOD_(D3DXEVENTHANDLE, KeyTrackWeight) (THIS_ UINT Track, FLOAT NewWeight, DOUBLE StartTime, DOUBLE Duration, D3DXTRANSITION_TYPE Transition)PURE;
	STDMETHOD_(D3DXEVENTHANDLE, KeyTrackPosition) (THIS_ UINT Track, DOUBLE NewPosition, DOUBLE StartTime)PURE;
	STDMETHOD_(D3DXEVENTHANDLE, KeyTrackEnable) (THIS_ UINT Track, BOOL NewEnable, DOUBLE StartTime)PURE;
	STDMETHOD_(D3DXEVENTHANDLE, KeyPriorityBlend) (THIS_ FLOAT NewBlendWeight, DOUBLE StartTime, DOUBLE Duration, D3DXTRANSITION_TYPE Transition)PURE;
	STDMETHOD(UnkeyEvent) (THIS_ D3DXEVENTHANDLE hEvent)PURE;
	STDMETHOD(UnkeyAllTrackEvents) (THIS_ UINT Track)PURE;
	STDMETHOD(UnkeyAllPriorityBlends) (THIS)PURE;
	STDMETHOD_(D3DXEVENTHANDLE, GetCurrentTrackEvent) (THIS_ UINT Track, D3DXEVENT_TYPE EventType)PURE;
	STDMETHOD_(D3DXEVENTHANDLE, GetCurrentPriorityBlend) (THIS)PURE;
	STDMETHOD_(D3DXEVENTHANDLE, GetUpcomingTrackEvent) (THIS_ UINT Track, D3DXEVENTHANDLE hEvent)PURE;
	STDMETHOD_(D3DXEVENTHANDLE, GetUpcomingPriorityBlend) (THIS_ D3DXEVENTHANDLE hEvent)PURE;
	STDMETHOD(ValidateEvent) (THIS_ D3DXEVENTHANDLE hEvent)PURE;
	STDMETHOD(GetEventDesc) (THIS_ D3DXEVENTHANDLE hEvent, LPD3DXEVENT_DESC pDesc)PURE;
	STDMETHOD(CloneAnimationController) (THIS_ UINT MaxNumAnimationOutputs, UINT MaxNumAnimationSets, UINT MaxNumTracks, UINT MaxNumEvents, LPD3DXANIMATIONCONTROLLER * ppAnimController)PURE;
};
HRESULT WINAPI D3DXLoadMeshHierarchyFromXA(LPCSTR Filename, DWORD MeshOptions, LPDIRECT3DDEVICE9 pD3DDevice, LPD3DXALLOCATEHIERARCHY pAlloc, LPD3DXLOADUSERDATA pUserDataLoader, LPD3DXFRAME *ppFrameHierarchy, LPD3DXANIMATIONCONTROLLER *ppAnimController);
HRESULT WINAPI D3DXLoadMeshHierarchyFromXW(LPCWSTR Filename, DWORD MeshOptions, LPDIRECT3DDEVICE9 pD3DDevice, LPD3DXALLOCATEHIERARCHY pAlloc, LPD3DXLOADUSERDATA pUserDataLoader, LPD3DXFRAME *ppFrameHierarchy, LPD3DXANIMATIONCONTROLLER *ppAnimController);
#ifdef UNICODE
#define D3DXLoadMeshHierarchyFromX D3DXLoadMeshHierarchyFromXW
#else
#define D3DXLoadMeshHierarchyFromX D3DXLoadMeshHierarchyFromXA
#endif
HRESULT WINAPI D3DXLoadMeshHierarchyFromXInMemory(LPCVOID Memory, DWORD SizeOfMemory, DWORD MeshOptions, LPDIRECT3DDEVICE9 pD3DDevice, LPD3DXALLOCATEHIERARCHY pAlloc, LPD3DXLOADUSERDATA pUserDataLoader, LPD3DXFRAME *ppFrameHierarchy, LPD3DXANIMATIONCONTROLLER *ppAnimController);
HRESULT WINAPI D3DXSaveMeshHierarchyToFileA(LPCSTR Filename, DWORD XFormat, CONST D3DXFRAME *pFrameRoot, LPD3DXANIMATIONCONTROLLER pAnimcontroller, LPD3DXSAVEUSERDATA pUserDataSaver);
HRESULT WINAPI D3DXSaveMeshHierarchyToFileW(LPCWSTR Filename, DWORD XFormat, CONST D3DXFRAME *pFrameRoot, LPD3DXANIMATIONCONTROLLER pAnimController, LPD3DXSAVEUSERDATA pUserDataSaver);
#ifdef UNICODE
#define D3DXSaveMeshHierarchyToFile D3DXSaveMeshHierarchyToFileW
#else
#define D3DXSaveMeshHierarchyToFile D3DXSaveMeshHierarchyToFileA
#endif
HRESULT WINAPI D3DXFrameDestroy(LPD3DXFRAME pFrameRoot, LPD3DXALLOCATEHIERARCHY pAlloc);
HRESULT WINAPI D3DXFrameAppendChild(LPD3DXFRAME pFrameParent, CONST D3DXFRAME *pFrameChild);
LPD3DXFRAME WINAPI D3DXFrameFind(CONST D3DXFRAME *pFrameRoot, LPCSTR Name);
HRESULT WINAPI D3DXFrameRegisterNamedMatrices(LPD3DXFRAME pFrameRoot, LPD3DXANIMATIONCONTROLLER pAnimController);
UINT WINAPI D3DXFrameNumNamedMatrices(CONST D3DXFRAME *pFrameRoot);
HRESULT WINAPI D3DXFrameCalculateBoundingSphere(CONST D3DXFRAME *pFrameRoot, LPD3DXVECTOR3 pObjectCenter, FLOAT *pObjectRadius);
HRESULT WINAPI D3DXCreateKeyframedAnimationSet(LPCSTR pName, DOUBLE TicksPerSecond, D3DXPLAYBACK_TYPE Playback, UINT NumAnimations, UINT NumCallbackKeys, CONST D3DXKEY_CALLBACK *pCallbackKeys, LPD3DXKEYFRAMEDANIMATIONSET *ppAnimationSet);
HRESULT WINAPI D3DXCreateCompressedAnimationSet(LPCSTR pName, DOUBLE TicksPerSecond, D3DXPLAYBACK_TYPE Playback, LPD3DXBUFFER pCompressedData, UINT NumCallbackKeys, CONST D3DXKEY_CALLBACK *pCallbackKeys, LPD3DXCOMPRESSEDANIMATIONSET *ppAnimationSet);
HRESULT WINAPI D3DXCreateAnimationController(UINT MaxNumMatrices, UINT MaxNumAnimationSets, UINT MaxNumTracks, UINT MaxNumEvents, LPD3DXANIMATIONCONTROLLER *ppAnimController);
#endif
