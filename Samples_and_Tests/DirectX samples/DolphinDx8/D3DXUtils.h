// D3DXUtils.h
#ifndef D3DUTILS_H
#define D3DUTILS_H
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "dolphin.h"

#define TIMER_RESET 0
#define TIMER_START 1
#define TIMER_STOP  2
#define TIMER_ADVANCE 3
#define TIMER_GETABSOLUTETIME 4
#define TIMER_GETAPPTIME 5
#define TIMER_GETELAPSEDTIME 6

#define SAFE_RELEASE(p)  { if(p) { (p)->lpVtbl->Release(p); (p)=0; 	} }
#define SAFE_DELETE_MEM(p) { if(p) { free(p); (p)=0; } }

float _stdcall D3DUtil_Timer( int command );
HRESULT D3DUtil_CreateVertexShader(LPDIRECT3DDEVICE8 pd3dDevice, char * strFilename, DWORD * pdwVertexDecl, DWORD * pdwVertexShader);
HRESULT D3DUtil_CreateTexture( LPDIRECT3DDEVICE8 pd3dDevice, char * strTexture, LPDIRECT3DTEXTURE8 * ppTexture, D3DFORMAT d3dFormat );
D3DXVECTOR3 D3DVec3(float x, float y, float z);
char * D3DUtil_GetErrorString(long code);
HRESULT D3DUtil_SetDeviceCursor( LPDIRECT3DDEVICE8 pd3dDevice, HCURSOR hCursor );

#endif //D3DUTILS_H
