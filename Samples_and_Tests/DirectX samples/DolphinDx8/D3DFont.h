// d3dfont.h

#ifndef D3DFONT_H
#define D3DFONT_H

#include "dolphin.h"

typedef struct _D3DFont
{
	char strFontName[80];
	int  dwFontHeight;
	DWORD dwFontFlags;
	LPDIRECT3DDEVICE8 pD3DDevice;
	LPDIRECT3DTEXTURE8 pTexture;
	LPDIRECT3DVERTEXBUFFER8 pVB;
	DWORD dwTexWidth;
	DWORD dwTexHeight;
	float fTextScale;
	float fTexCoords[128-32][4];
	DWORD dwSavedStateBlock;
	DWORD dwDrawTextStateBlock;
}D3DFONT;

// Font creation flags
#define D3DFONT_BOLD         0x0001
#define D3DFONT_ITALIC       0x0002

// Font rendering flags
#define D3DFONT_CENTERED     0x0001
#define D3DFONT_TWOSIDED     0x0002
#define D3DFONT_FILTERED     0x0004

#define NONANTIALIASED_QUALITY  3
#define ANTIALIASED_QUALITY     4

//-----------------------------------------------------------------------------
// Custom vertex types for rendering text
//-----------------------------------------------------------------------------
#define MAX_NUM_VERTICES 50*6

typedef struct _FONT2DVERTEX { D3DXVECTOR4 p;   DWORD color;     FLOAT tu, tv; }FONT2DVERTEX;
typedef struct _FONT3DVERTEX { D3DXVECTOR3 p;   D3DXVECTOR3 n;   FLOAT tu, tv; }FONT3DVERTEX;

#define D3DFVF_FONT2DVERTEX (D3DFVF_XYZRHW|D3DFVF_DIFFUSE|D3DFVF_TEX1)
#define D3DFVF_FONT3DVERTEX (D3DFVF_XYZ|D3DFVF_NORMAL|D3DFVF_TEX1)

HRESULT D3DFont_InitDeviceObjects(D3DFONT * f, LPDIRECT3DDEVICE8 pD3DDevice);
int D3DFont_InvalidateDeviceObjects(D3DFONT * f);
int D3DFont_DeleteDeviceObjects(D3DFONT * f);
void D3DFont_Create(D3DFONT * f , char * FtName, int fHeight, DWORD dwFlags);
void D3DFont_Destroy(D3DFONT * f);
HRESULT D3DFont_RestoreDeviceObjects(D3DFONT * f);
HRESULT D3DFont_DrawText(D3DFONT * f, float sx, float sy, DWORD dwColor, char * strText, DWORD dwFlags );

#endif //D3DFONT_H

