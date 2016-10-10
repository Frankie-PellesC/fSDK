/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3d9types.h
 \par Description 
            D3D9 types definitions
 \par  Status: 
            
 \par Project: 
            PellesC Headers Extension
 \date		Created  on Sun Mar 15 19:13:02 2015
 \date		Modified on Sun Mar 15 19:13:02 2015
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _d3d9TYPES_H_
#define _d3d9TYPES_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef DIRECT3D_VERSION
#define DIRECT3D_VERSION         0x0900
#endif
#if(DIRECT3D_VERSION >= 0x0900)
#include <float.h>
#if defined(_X86_) || defined(_IA64_)
#pragma pack(4)
#endif
#ifndef D3DCOLOR_DEFINED
typedef DWORD D3DCOLOR;
#define D3DCOLOR_DEFINED
#endif
#define D3DCOLOR_ARGB(a,r,g,b)	((D3DCOLOR)((((a)&0xff)<<24)|(((r)&0xff)<<16)|(((g)&0xff)<<8)|((b)&0xff)))
#define D3DCOLOR_RGBA(r,g,b,a) D3DCOLOR_ARGB(a,r,g,b)
#define D3DCOLOR_XRGB(r,g,b)   D3DCOLOR_ARGB(0xff,r,g,b)
#define D3DCOLOR_XYUV(y,u,v)   D3DCOLOR_ARGB(0xff,y,u,v)
#define D3DCOLOR_AYUV(a,y,u,v) D3DCOLOR_ARGB(a,y,u,v)
#define D3DCOLOR_COLORVALUE(r,g,b,a)	D3DCOLOR_RGBA((DWORD)((r)*255.f),(DWORD)((g)*255.f),(DWORD)((b)*255.f),(DWORD)((a)*255.f))
#ifndef D3DVECTOR_DEFINED
typedef struct _D3DVECTOR
{
    float x;
    float y;
    float z;
} D3DVECTOR;
#define D3DVECTOR_DEFINED
#endif
#ifndef D3DCOLORVALUE_DEFINED
typedef struct _D3DCOLORVALUE
{
    float r;
    float g;
    float b;
    float a;
} D3DCOLORVALUE;
#define D3DCOLORVALUE_DEFINED
#endif
#ifndef D3DRECT_DEFINED
typedef struct _D3DRECT
{
    LONG x1;
    LONG y1;
    LONG x2;
    LONG y2;
} D3DRECT;
#define D3DRECT_DEFINED
#endif
#ifndef D3DMATRIX_DEFINED
typedef struct _D3DMATRIX
{
	union
	{
		struct
		{
		    float	_11, _12, _13, _14;
		    float	_21, _22, _23, _24;
		    float	_31, _32, _33, _34;
		    float	_41, _42, _43, _44;
		};
		float m[4][4];
	};
} D3DMATRIX;
#define D3DMATRIX_DEFINED
#endif
typedef struct _D3DVIEWPORT9
{
    DWORD       X;
    DWORD       Y;
    DWORD       Width;
    DWORD       Height;
    float       MinZ;
    float       MaxZ;
} D3DVIEWPORT9;
#define D3DMAXUSERCLIPPLANES 32
#define D3DCLIPPLANE0 (1 << 0)
#define D3DCLIPPLANE1 (1 << 1)
#define D3DCLIPPLANE2 (1 << 2)
#define D3DCLIPPLANE3 (1 << 3)
#define D3DCLIPPLANE4 (1 << 4)
#define D3DCLIPPLANE5 (1 << 5)
#define D3DCS_LEFT        0x00000001L
#define D3DCS_RIGHT       0x00000002L
#define D3DCS_TOP         0x00000004L
#define D3DCS_BOTTOM      0x00000008L
#define D3DCS_FRONT       0x00000010L
#define D3DCS_BACK        0x00000020L
#define D3DCS_PLANE0      0x00000040L
#define D3DCS_PLANE1      0x00000080L
#define D3DCS_PLANE2      0x00000100L
#define D3DCS_PLANE3      0x00000200L
#define D3DCS_PLANE4      0x00000400L
#define D3DCS_PLANE5      0x00000800L
#define D3DCS_ALL (D3DCS_LEFT|D3DCS_RIGHT|D3DCS_TOP|D3DCS_BOTTOM|D3DCS_FRONT|D3DCS_BACK|D3DCS_PLANE0|D3DCS_PLANE1|D3DCS_PLANE2|D3DCS_PLANE3|D3DCS_PLANE4|D3DCS_PLANE5)
typedef struct _D3DCLIPSTATUS9
{
    DWORD ClipUnion;
    DWORD ClipIntersection;
} D3DCLIPSTATUS9;
typedef struct _D3DMATERIAL9
{
    D3DCOLORVALUE   Diffuse;
    D3DCOLORVALUE   Ambient;
    D3DCOLORVALUE   Specular;
    D3DCOLORVALUE   Emissive;
    float           Power;
} D3DMATERIAL9;
typedef enum _D3DLIGHTTYPE
{
    D3DLIGHT_POINT          = 1,
    D3DLIGHT_SPOT           = 2,
    D3DLIGHT_DIRECTIONAL    = 3,
    D3DLIGHT_FORCE_DWORD    = 0x7fffffff,
} D3DLIGHTTYPE;
typedef struct _D3DLIGHT9
{
    D3DLIGHTTYPE    Type;
    D3DCOLORVALUE   Diffuse;
    D3DCOLORVALUE   Specular;
    D3DCOLORVALUE   Ambient;
    D3DVECTOR       Position;
    D3DVECTOR       Direction;
    float           Range;
    float           Falloff;
    float           Attenuation0;
    float           Attenuation1;
    float           Attenuation2;
    float           Theta;
    float           Phi;
} D3DLIGHT9;
#define D3DCLEAR_TARGET            0x00000001l
#define D3DCLEAR_ZBUFFER           0x00000002l
#define D3DCLEAR_STENCIL           0x00000004l
typedef enum _D3DSHADEMODE
{
    D3DSHADE_FLAT               = 1,
    D3DSHADE_GOURAUD            = 2,
    D3DSHADE_PHONG              = 3,
    D3DSHADE_FORCE_DWORD        = 0x7fffffff,
} D3DSHADEMODE;
typedef enum _D3DFILLMODE
{
    D3DFILL_POINT               = 1,
    D3DFILL_WIREFRAME           = 2,
    D3DFILL_SOLID               = 3,
    D3DFILL_FORCE_DWORD         = 0x7fffffff,
} D3DFILLMODE;
typedef enum _D3DBLEND
{
    D3DBLEND_ZERO               = 1,
    D3DBLEND_ONE                = 2,
    D3DBLEND_SRCCOLOR           = 3,
    D3DBLEND_INVSRCCOLOR        = 4,
    D3DBLEND_SRCALPHA           = 5,
    D3DBLEND_INVSRCALPHA        = 6,
    D3DBLEND_DESTALPHA          = 7,
    D3DBLEND_INVDESTALPHA       = 8,
    D3DBLEND_DESTCOLOR          = 9,
    D3DBLEND_INVDESTCOLOR       = 10,
    D3DBLEND_SRCALPHASAT        = 11,
    D3DBLEND_BOTHSRCALPHA       = 12,
    D3DBLEND_BOTHINVSRCALPHA    = 13,
    D3DBLEND_BLENDFACTOR        = 14,
    D3DBLEND_INVBLENDFACTOR     = 15,
#if !defined(D3D_DISABLE_9EX)
    D3DBLEND_SRCCOLOR2          = 16,
    D3DBLEND_INVSRCCOLOR2       = 17,
#endif
    D3DBLEND_FORCE_DWORD        = 0x7fffffff,
} D3DBLEND;
typedef enum _D3DBLENDOP
{
    D3DBLENDOP_ADD              = 1,
    D3DBLENDOP_SUBTRACT         = 2,
    D3DBLENDOP_REVSUBTRACT      = 3,
    D3DBLENDOP_MIN              = 4,
    D3DBLENDOP_MAX              = 5,
    D3DBLENDOP_FORCE_DWORD      = 0x7fffffff,
} D3DBLENDOP;
typedef enum _D3DTEXTUREADDRESS
{
    D3DTADDRESS_WRAP            = 1,
    D3DTADDRESS_MIRROR          = 2,
    D3DTADDRESS_CLAMP           = 3,
    D3DTADDRESS_BORDER          = 4,
    D3DTADDRESS_MIRRORONCE      = 5,
    D3DTADDRESS_FORCE_DWORD     = 0x7fffffff,
} D3DTEXTUREADDRESS;
typedef enum _D3DCULL
{
    D3DCULL_NONE                = 1,
    D3DCULL_CW                  = 2,
    D3DCULL_CCW                 = 3,
    D3DCULL_FORCE_DWORD         = 0x7fffffff,
} D3DCULL;
typedef enum _D3DCMPFUNC
{
    D3DCMP_NEVER                = 1,
    D3DCMP_LESS                 = 2,
    D3DCMP_EQUAL                = 3,
    D3DCMP_LESSEQUAL            = 4,
    D3DCMP_GREATER              = 5,
    D3DCMP_NOTEQUAL             = 6,
    D3DCMP_GREATEREQUAL         = 7,
    D3DCMP_ALWAYS               = 8,
    D3DCMP_FORCE_DWORD          = 0x7fffffff,
} D3DCMPFUNC;
typedef enum _D3DSTENCILOP
{
    D3DSTENCILOP_KEEP           = 1,
    D3DSTENCILOP_ZERO           = 2,
    D3DSTENCILOP_REPLACE        = 3,
    D3DSTENCILOP_INCRSAT        = 4,
    D3DSTENCILOP_DECRSAT        = 5,
    D3DSTENCILOP_INVERT         = 6,
    D3DSTENCILOP_INCR           = 7,
    D3DSTENCILOP_DECR           = 8,
    D3DSTENCILOP_FORCE_DWORD    = 0x7fffffff,
} D3DSTENCILOP;
typedef enum _D3DFOGMODE
{
    D3DFOG_NONE                 = 0,
    D3DFOG_EXP                  = 1,
    D3DFOG_EXP2                 = 2,
    D3DFOG_LINEAR               = 3,
    D3DFOG_FORCE_DWORD          = 0x7fffffff,
} D3DFOGMODE;
typedef enum _D3DZBUFFERTYPE
{
    D3DZB_FALSE                 = 0,
    D3DZB_TRUE                  = 1,
    D3DZB_USEW                  = 2,
    D3DZB_FORCE_DWORD           = 0x7fffffff,
} D3DZBUFFERTYPE;
typedef enum _D3DPRIMITIVETYPE
{
    D3DPT_POINTLIST             = 1,
    D3DPT_LINELIST              = 2,
    D3DPT_LINESTRIP             = 3,
    D3DPT_TRIANGLELIST          = 4,
    D3DPT_TRIANGLESTRIP         = 5,
    D3DPT_TRIANGLEFAN           = 6,
    D3DPT_FORCE_DWORD           = 0x7fffffff,
} D3DPRIMITIVETYPE;
typedef enum _D3DTRANSFORMSTATETYPE
{
    D3DTS_VIEW          = 2,
    D3DTS_PROJECTION    = 3,
    D3DTS_TEXTURE0      = 16,
    D3DTS_TEXTURE1      = 17,
    D3DTS_TEXTURE2      = 18,
    D3DTS_TEXTURE3      = 19,
    D3DTS_TEXTURE4      = 20,
    D3DTS_TEXTURE5      = 21,
    D3DTS_TEXTURE6      = 22,
    D3DTS_TEXTURE7      = 23,
    D3DTS_FORCE_DWORD     = 0x7fffffff,
} D3DTRANSFORMSTATETYPE;
#define D3DTS_WORLDMATRIX(index) (D3DTRANSFORMSTATETYPE)(index + 256)
#define D3DTS_WORLD  D3DTS_WORLDMATRIX(0)
#define D3DTS_WORLD1 D3DTS_WORLDMATRIX(1)
#define D3DTS_WORLD2 D3DTS_WORLDMATRIX(2)
#define D3DTS_WORLD3 D3DTS_WORLDMATRIX(3)
typedef enum _D3DRENDERSTATETYPE
{
    D3DRS_ZENABLE                   = 7,
    D3DRS_FILLMODE                  = 8,
    D3DRS_SHADEMODE                 = 9,
    D3DRS_ZWRITEENABLE              = 14,
    D3DRS_ALPHATESTENABLE           = 15,
    D3DRS_LASTPIXEL                 = 16,
    D3DRS_SRCBLEND                  = 19,
    D3DRS_DESTBLEND                 = 20,
    D3DRS_CULLMODE                  = 22,
    D3DRS_ZFUNC                     = 23,
    D3DRS_ALPHAREF                  = 24,
    D3DRS_ALPHAFUNC                 = 25,
    D3DRS_DITHERENABLE              = 26,
    D3DRS_ALPHABLENDENABLE          = 27,
    D3DRS_FOGENABLE                 = 28,
    D3DRS_SPECULARENABLE            = 29,
    D3DRS_FOGCOLOR                  = 34,
    D3DRS_FOGTABLEMODE              = 35,
    D3DRS_FOGSTART                  = 36,
    D3DRS_FOGEND                    = 37,
    D3DRS_FOGDENSITY                = 38,
    D3DRS_RANGEFOGENABLE            = 48,
    D3DRS_STENCILENABLE             = 52,
    D3DRS_STENCILFAIL               = 53,
    D3DRS_STENCILZFAIL              = 54,
    D3DRS_STENCILPASS               = 55,
    D3DRS_STENCILFUNC               = 56,
    D3DRS_STENCILREF                = 57,
    D3DRS_STENCILMASK               = 58,
    D3DRS_STENCILWRITEMASK          = 59,
    D3DRS_TEXTUREFACTOR             = 60,
    D3DRS_WRAP0                     = 128,
    D3DRS_WRAP1                     = 129,
    D3DRS_WRAP2                     = 130,
    D3DRS_WRAP3                     = 131,
    D3DRS_WRAP4                     = 132,
    D3DRS_WRAP5                     = 133,
    D3DRS_WRAP6                     = 134,
    D3DRS_WRAP7                     = 135,
    D3DRS_CLIPPING                  = 136,
    D3DRS_LIGHTING                  = 137,
    D3DRS_AMBIENT                   = 139,
    D3DRS_FOGVERTEXMODE             = 140,
    D3DRS_COLORVERTEX               = 141,
    D3DRS_LOCALVIEWER               = 142,
    D3DRS_NORMALIZENORMALS          = 143,
    D3DRS_DIFFUSEMATERIALSOURCE     = 145,
    D3DRS_SPECULARMATERIALSOURCE    = 146,
    D3DRS_AMBIENTMATERIALSOURCE     = 147,
    D3DRS_EMISSIVEMATERIALSOURCE    = 148,
    D3DRS_VERTEXBLEND               = 151,
    D3DRS_CLIPPLANEENABLE           = 152,
    D3DRS_POINTSIZE                 = 154,
    D3DRS_POINTSIZE_MIN             = 155,
    D3DRS_POINTSPRITEENABLE         = 156,
    D3DRS_POINTSCALEENABLE          = 157,
    D3DRS_POINTSCALE_A              = 158,
    D3DRS_POINTSCALE_B              = 159,
    D3DRS_POINTSCALE_C              = 160,
    D3DRS_MULTISAMPLEANTIALIAS      = 161,
    D3DRS_MULTISAMPLEMASK           = 162,
    D3DRS_PATCHEDGESTYLE            = 163,
    D3DRS_DEBUGMONITORTOKEN         = 165,
    D3DRS_POINTSIZE_MAX             = 166,
    D3DRS_INDEXEDVERTEXBLENDENABLE  = 167,
    D3DRS_COLORWRITEENABLE          = 168,
    D3DRS_TWEENFACTOR               = 170,
    D3DRS_BLENDOP                   = 171,
    D3DRS_POSITIONDEGREE            = 172,
    D3DRS_NORMALDEGREE              = 173,
    D3DRS_SCISSORTESTENABLE         = 174,
    D3DRS_SLOPESCALEDEPTHBIAS       = 175,
    D3DRS_ANTIALIASEDLINEENABLE     = 176,
    D3DRS_MINTESSELLATIONLEVEL      = 178,
    D3DRS_MAXTESSELLATIONLEVEL      = 179,
    D3DRS_ADAPTIVETESS_X            = 180,
    D3DRS_ADAPTIVETESS_Y            = 181,
    D3DRS_ADAPTIVETESS_Z            = 182,
    D3DRS_ADAPTIVETESS_W            = 183,
    D3DRS_ENABLEADAPTIVETESSELLATION = 184,
    D3DRS_TWOSIDEDSTENCILMODE       = 185,
    D3DRS_CCW_STENCILFAIL           = 186,
    D3DRS_CCW_STENCILZFAIL          = 187,
    D3DRS_CCW_STENCILPASS           = 188,
    D3DRS_CCW_STENCILFUNC           = 189,
    D3DRS_COLORWRITEENABLE1         = 190,
    D3DRS_COLORWRITEENABLE2         = 191,
    D3DRS_COLORWRITEENABLE3         = 192,
    D3DRS_BLENDFACTOR               = 193,
    D3DRS_SRGBWRITEENABLE           = 194,
    D3DRS_DEPTHBIAS                 = 195,
    D3DRS_WRAP8                     = 198,
    D3DRS_WRAP9                     = 199,
    D3DRS_WRAP10                    = 200,
    D3DRS_WRAP11                    = 201,
    D3DRS_WRAP12                    = 202,
    D3DRS_WRAP13                    = 203,
    D3DRS_WRAP14                    = 204,
    D3DRS_WRAP15                    = 205,
    D3DRS_SEPARATEALPHABLENDENABLE  = 206,
    D3DRS_SRCBLENDALPHA             = 207,
    D3DRS_DESTBLENDALPHA            = 208,
    D3DRS_BLENDOPALPHA              = 209,
    D3DRS_FORCE_DWORD               = 0x7fffffff,
} D3DRENDERSTATETYPE;
#define D3D_MAX_SIMULTANEOUS_RENDERTARGETS 4
typedef enum _D3DMATERIALCOLORSOURCE
{
    D3DMCS_MATERIAL         = 0,
    D3DMCS_COLOR1           = 1,
    D3DMCS_COLOR2           = 2,
    D3DMCS_FORCE_DWORD      = 0x7fffffff,
} D3DMATERIALCOLORSOURCE;
#define D3DRENDERSTATE_WRAPBIAS                 128UL
#define D3DWRAP_U   0x00000001L
#define D3DWRAP_V   0x00000002L
#define D3DWRAP_W   0x00000004L
#define D3DWRAPCOORD_0   0x00000001L
#define D3DWRAPCOORD_1   0x00000002L
#define D3DWRAPCOORD_2   0x00000004L
#define D3DWRAPCOORD_3   0x00000008L
#define D3DCOLORWRITEENABLE_RED     (1L<<0)
#define D3DCOLORWRITEENABLE_GREEN   (1L<<1)
#define D3DCOLORWRITEENABLE_BLUE    (1L<<2)
#define D3DCOLORWRITEENABLE_ALPHA   (1L<<3)
typedef enum _D3DTEXTURESTAGESTATETYPE
{
    D3DTSS_COLOROP        =  1,
    D3DTSS_COLORARG1      =  2,
    D3DTSS_COLORARG2      =  3,
    D3DTSS_ALPHAOP        =  4,
    D3DTSS_ALPHAARG1      =  5,
    D3DTSS_ALPHAARG2      =  6,
    D3DTSS_BUMPENVMAT00   =  7,
    D3DTSS_BUMPENVMAT01   =  8,
    D3DTSS_BUMPENVMAT10   =  9,
    D3DTSS_BUMPENVMAT11   = 10,
    D3DTSS_TEXCOORDINDEX  = 11,
    D3DTSS_BUMPENVLSCALE  = 22,
    D3DTSS_BUMPENVLOFFSET = 23,
    D3DTSS_TEXTURETRANSFORMFLAGS = 24,
    D3DTSS_COLORARG0      = 26,
    D3DTSS_ALPHAARG0      = 27,
    D3DTSS_RESULTARG      = 28,
    D3DTSS_CONSTANT       = 32,
    D3DTSS_FORCE_DWORD   = 0x7fffffff,
} D3DTEXTURESTAGESTATETYPE;
typedef enum _D3DSAMPLERSTATETYPE
{
    D3DSAMP_ADDRESSU       = 1,
    D3DSAMP_ADDRESSV       = 2,
    D3DSAMP_ADDRESSW       = 3,
    D3DSAMP_BORDERCOLOR    = 4,
    D3DSAMP_MAGFILTER      = 5,
    D3DSAMP_MINFILTER      = 6,
    D3DSAMP_MIPFILTER      = 7,
    D3DSAMP_MIPMAPLODBIAS  = 8,
    D3DSAMP_MAXMIPLEVEL    = 9,
    D3DSAMP_MAXANISOTROPY  = 10,
    D3DSAMP_SRGBTEXTURE    = 11,
    D3DSAMP_ELEMENTINDEX   = 12,
    D3DSAMP_DMAPOFFSET     = 13,
    D3DSAMP_FORCE_DWORD   = 0x7fffffff,
} D3DSAMPLERSTATETYPE;
#define D3DDMAPSAMPLER 256
#define D3DVERTEXTEXTURESAMPLER0 (D3DDMAPSAMPLER+1)
#define D3DVERTEXTEXTURESAMPLER1 (D3DDMAPSAMPLER+2)
#define D3DVERTEXTEXTURESAMPLER2 (D3DDMAPSAMPLER+3)
#define D3DVERTEXTEXTURESAMPLER3 (D3DDMAPSAMPLER+4)
#define D3DTSS_TCI_PASSTHRU                             0x00000000
#define D3DTSS_TCI_CAMERASPACENORMAL                    0x00010000
#define D3DTSS_TCI_CAMERASPACEPOSITION                  0x00020000
#define D3DTSS_TCI_CAMERASPACEREFLECTIONVECTOR          0x00030000
#define D3DTSS_TCI_SPHEREMAP                            0x00040000
typedef enum _D3DTEXTUREOP
{
    D3DTOP_DISABLE              = 1,
    D3DTOP_SELECTARG1           = 2,
    D3DTOP_SELECTARG2           = 3,
    D3DTOP_MODULATE             = 4,
    D3DTOP_MODULATE2X           = 5,
    D3DTOP_MODULATE4X           = 6,
    D3DTOP_ADD                  =  7,
    D3DTOP_ADDSIGNED            =  8,
    D3DTOP_ADDSIGNED2X          =  9,
    D3DTOP_SUBTRACT             = 10,
    D3DTOP_ADDSMOOTH            = 11,
    D3DTOP_BLENDDIFFUSEALPHA    = 12,
    D3DTOP_BLENDTEXTUREALPHA    = 13,
    D3DTOP_BLENDFACTORALPHA     = 14,
    D3DTOP_BLENDTEXTUREALPHAPM  = 15,
    D3DTOP_BLENDCURRENTALPHA    = 16,
    D3DTOP_PREMODULATE            = 17,
    D3DTOP_MODULATEALPHA_ADDCOLOR = 18,
    D3DTOP_MODULATECOLOR_ADDALPHA = 19,
    D3DTOP_MODULATEINVALPHA_ADDCOLOR = 20,
    D3DTOP_MODULATEINVCOLOR_ADDALPHA = 21,
    D3DTOP_BUMPENVMAP           = 22,
    D3DTOP_BUMPENVMAPLUMINANCE  = 23,
    D3DTOP_DOTPRODUCT3          = 24,
    D3DTOP_MULTIPLYADD          = 25,
    D3DTOP_LERP                 = 26,
    D3DTOP_FORCE_DWORD = 0x7fffffff,
} D3DTEXTUREOP;
#define D3DTA_SELECTMASK        0x0000000f
#define D3DTA_DIFFUSE           0x00000000
#define D3DTA_CURRENT           0x00000001
#define D3DTA_TEXTURE           0x00000002
#define D3DTA_TFACTOR           0x00000003
#define D3DTA_SPECULAR          0x00000004
#define D3DTA_TEMP              0x00000005
#define D3DTA_CONSTANT          0x00000006
#define D3DTA_COMPLEMENT        0x00000010
#define D3DTA_ALPHAREPLICATE    0x00000020
typedef enum _D3DTEXTUREFILTERTYPE
{
    D3DTEXF_NONE            = 0,
    D3DTEXF_POINT           = 1,
    D3DTEXF_LINEAR          = 2,
    D3DTEXF_ANISOTROPIC     = 3,
    D3DTEXF_PYRAMIDALQUAD   = 6,
    D3DTEXF_GAUSSIANQUAD    = 7,
#if !defined(D3D_DISABLE_9EX)
    D3DTEXF_CONVOLUTIONMONO = 8,
#endif
    D3DTEXF_FORCE_DWORD     = 0x7fffffff,
} D3DTEXTUREFILTERTYPE;
#define D3DPV_DONOTCOPYDATA     (1 << 0)
#define D3DFVF_RESERVED0        0x001
#define D3DFVF_POSITION_MASK    0x400E
#define D3DFVF_XYZ              0x002
#define D3DFVF_XYZRHW           0x004
#define D3DFVF_XYZB1            0x006
#define D3DFVF_XYZB2            0x008
#define D3DFVF_XYZB3            0x00a
#define D3DFVF_XYZB4            0x00c
#define D3DFVF_XYZB5            0x00e
#define D3DFVF_XYZW             0x4002
#define D3DFVF_NORMAL           0x010
#define D3DFVF_PSIZE            0x020
#define D3DFVF_DIFFUSE          0x040
#define D3DFVF_SPECULAR         0x080
#define D3DFVF_TEXCOUNT_MASK    0xf00
#define D3DFVF_TEXCOUNT_SHIFT   8
#define D3DFVF_TEX0             0x000
#define D3DFVF_TEX1             0x100
#define D3DFVF_TEX2             0x200
#define D3DFVF_TEX3             0x300
#define D3DFVF_TEX4             0x400
#define D3DFVF_TEX5             0x500
#define D3DFVF_TEX6             0x600
#define D3DFVF_TEX7             0x700
#define D3DFVF_TEX8             0x800
#define D3DFVF_LASTBETA_UBYTE4   0x1000
#define D3DFVF_LASTBETA_D3DCOLOR 0x8000
#define D3DFVF_RESERVED2         0x6000
typedef enum _D3DDECLUSAGE
{
    D3DDECLUSAGE_POSITION = 0,
    D3DDECLUSAGE_BLENDWEIGHT,
    D3DDECLUSAGE_BLENDINDICES,
    D3DDECLUSAGE_NORMAL,
    D3DDECLUSAGE_PSIZE,
    D3DDECLUSAGE_TEXCOORD,
    D3DDECLUSAGE_TANGENT,
    D3DDECLUSAGE_BINORMAL,
    D3DDECLUSAGE_TESSFACTOR,
    D3DDECLUSAGE_POSITIONT,
    D3DDECLUSAGE_COLOR,
    D3DDECLUSAGE_FOG,
    D3DDECLUSAGE_DEPTH,
    D3DDECLUSAGE_SAMPLE,
} D3DDECLUSAGE;
#define MAXD3DDECLUSAGE         D3DDECLUSAGE_SAMPLE
#define MAXD3DDECLUSAGEINDEX    15
#define MAXD3DDECLLENGTH        64
typedef enum _D3DDECLMETHOD
{
    D3DDECLMETHOD_DEFAULT = 0,
    D3DDECLMETHOD_PARTIALU,
    D3DDECLMETHOD_PARTIALV,
    D3DDECLMETHOD_CROSSUV,
    D3DDECLMETHOD_UV,
    D3DDECLMETHOD_LOOKUP,
    D3DDECLMETHOD_LOOKUPPRESAMPLED,
} D3DDECLMETHOD;
#define MAXD3DDECLMETHOD D3DDECLMETHOD_LOOKUPPRESAMPLED
typedef enum _D3DDECLTYPE
{
    D3DDECLTYPE_FLOAT1    =  0,
    D3DDECLTYPE_FLOAT2    =  1,
    D3DDECLTYPE_FLOAT3    =  2,
    D3DDECLTYPE_FLOAT4    =  3,
    D3DDECLTYPE_D3DCOLOR  =  4,
    D3DDECLTYPE_UBYTE4    =  5,
    D3DDECLTYPE_SHORT2    =  6,
    D3DDECLTYPE_SHORT4    =  7,
    D3DDECLTYPE_UBYTE4N   =  8,
    D3DDECLTYPE_SHORT2N   =  9,
    D3DDECLTYPE_SHORT4N   = 10,
    D3DDECLTYPE_USHORT2N  = 11,
    D3DDECLTYPE_USHORT4N  = 12,
    D3DDECLTYPE_UDEC3     = 13,
    D3DDECLTYPE_DEC3N     = 14,
    D3DDECLTYPE_FLOAT16_2 = 15,
    D3DDECLTYPE_FLOAT16_4 = 16,
    D3DDECLTYPE_UNUSED    = 17,
} D3DDECLTYPE;
#define MAXD3DDECLTYPE      D3DDECLTYPE_UNUSED
typedef struct _D3DVERTEXELEMENT9
{
    WORD    Stream;
    WORD    Offset;
    BYTE    Type;
    BYTE    Method;
    BYTE    Usage;
    BYTE    UsageIndex;
} D3DVERTEXELEMENT9, *LPD3DVERTEXELEMENT9;
#define D3DDECL_END() {0xFF,0,D3DDECLTYPE_UNUSED,0,0,0}
#define D3DDP_MAXTEXCOORD   8
#define D3DSTREAMSOURCE_INDEXEDDATA  (1<<30)
#define D3DSTREAMSOURCE_INSTANCEDATA (2<<30)
#define D3DSI_OPCODE_MASK       0x0000FFFF
#define D3DSI_INSTLENGTH_MASK   0x0F000000
#define D3DSI_INSTLENGTH_SHIFT  24
typedef enum _D3DSHADER_INSTRUCTION_OPCODE_TYPE
{
    D3DSIO_NOP          = 0,
    D3DSIO_MOV          ,
    D3DSIO_ADD          ,
    D3DSIO_SUB          ,
    D3DSIO_MAD          ,
    D3DSIO_MUL          ,
    D3DSIO_RCP          ,
    D3DSIO_RSQ          ,
    D3DSIO_DP3          ,
    D3DSIO_DP4          ,
    D3DSIO_MIN          ,
    D3DSIO_MAX          ,
    D3DSIO_SLT          ,
    D3DSIO_SGE          ,
    D3DSIO_EXP          ,
    D3DSIO_LOG          ,
    D3DSIO_LIT          ,
    D3DSIO_DST          ,
    D3DSIO_LRP          ,
    D3DSIO_FRC          ,
    D3DSIO_M4x4         ,
    D3DSIO_M4x3         ,
    D3DSIO_M3x4         ,
    D3DSIO_M3x3         ,
    D3DSIO_M3x2         ,
    D3DSIO_CALL         ,
    D3DSIO_CALLNZ       ,
    D3DSIO_LOOP         ,
    D3DSIO_RET          ,
    D3DSIO_ENDLOOP      ,
    D3DSIO_LABEL        ,
    D3DSIO_DCL          ,
    D3DSIO_POW          ,
    D3DSIO_CRS          ,
    D3DSIO_SGN          ,
    D3DSIO_ABS          ,
    D3DSIO_NRM          ,
    D3DSIO_SINCOS       ,
    D3DSIO_REP          ,
    D3DSIO_ENDREP       ,
    D3DSIO_IF           ,
    D3DSIO_IFC          ,
    D3DSIO_ELSE         ,
    D3DSIO_ENDIF        ,
    D3DSIO_BREAK        ,
    D3DSIO_BREAKC       ,
    D3DSIO_MOVA         ,
    D3DSIO_DEFB         ,
    D3DSIO_DEFI         ,
    D3DSIO_TEXCOORD     = 64,
    D3DSIO_TEXKILL      ,
    D3DSIO_TEX          ,
    D3DSIO_TEXBEM       ,
    D3DSIO_TEXBEML      ,
    D3DSIO_TEXREG2AR    ,
    D3DSIO_TEXREG2GB    ,
    D3DSIO_TEXM3x2PAD   ,
    D3DSIO_TEXM3x2TEX   ,
    D3DSIO_TEXM3x3PAD   ,
    D3DSIO_TEXM3x3TEX   ,
    D3DSIO_RESERVED0    ,
    D3DSIO_TEXM3x3SPEC  ,
    D3DSIO_TEXM3x3VSPEC ,
    D3DSIO_EXPP         ,
    D3DSIO_LOGP         ,
    D3DSIO_CND          ,
    D3DSIO_DEF          ,
    D3DSIO_TEXREG2RGB   ,
    D3DSIO_TEXDP3TEX    ,
    D3DSIO_TEXM3x2DEPTH ,
    D3DSIO_TEXDP3       ,
    D3DSIO_TEXM3x3      ,
    D3DSIO_TEXDEPTH     ,
    D3DSIO_CMP          ,
    D3DSIO_BEM          ,
    D3DSIO_DP2ADD       ,
    D3DSIO_DSX          ,
    D3DSIO_DSY          ,
    D3DSIO_TEXLDD       ,
    D3DSIO_SETP         ,
    D3DSIO_TEXLDL       ,
    D3DSIO_BREAKP       ,
    D3DSIO_PHASE        = 0xFFFD,
    D3DSIO_COMMENT      = 0xFFFE,
    D3DSIO_END          = 0xFFFF,
    D3DSIO_FORCE_DWORD  = 0x7fffffff,
} D3DSHADER_INSTRUCTION_OPCODE_TYPE;
#define D3DSINCOSCONST1 -1.5500992e-006f, -2.1701389e-005f,  0.0026041667f, 0.00026041668f
#define D3DSINCOSCONST2 -0.020833334f, -0.12500000f, 1.0f, 0.50000000f
#define D3DSI_COISSUE           0x40000000
#define D3DSP_OPCODESPECIFICCONTROL_MASK  0x00ff0000
#define D3DSP_OPCODESPECIFICCONTROL_SHIFT 16
#define D3DSI_TEXLD_PROJECT (0x01 << D3DSP_OPCODESPECIFICCONTROL_SHIFT)
#define D3DSI_TEXLD_BIAS    (0x02 << D3DSP_OPCODESPECIFICCONTROL_SHIFT)
typedef enum _D3DSHADER_COMPARISON
{
    D3DSPC_RESERVED0= 0,
    D3DSPC_GT       = 1,
    D3DSPC_EQ       = 2,
    D3DSPC_GE       = 3,
    D3DSPC_LT       = 4,
    D3DSPC_NE       = 5,
    D3DSPC_LE       = 6,
    D3DSPC_RESERVED1= 7
} D3DSHADER_COMPARISON;
#define D3DSHADER_COMPARISON_SHIFT D3DSP_OPCODESPECIFICCONTROL_SHIFT
#define D3DSHADER_COMPARISON_MASK  (0x7<<D3DSHADER_COMPARISON_SHIFT)
#define D3DSHADER_INSTRUCTION_PREDICATED    (0x1 << 28)
#define D3DSP_DCL_USAGE_SHIFT 0
#define D3DSP_DCL_USAGE_MASK  0x0000000f
#define D3DSP_DCL_USAGEINDEX_SHIFT 16
#define D3DSP_DCL_USAGEINDEX_MASK  0x000f0000
#define D3DSP_TEXTURETYPE_SHIFT 27
#define D3DSP_TEXTURETYPE_MASK  0x78000000
typedef enum _D3DSAMPLER_TEXTURE_TYPE
{
    D3DSTT_UNKNOWN = 0<<D3DSP_TEXTURETYPE_SHIFT,
    D3DSTT_2D      = 2<<D3DSP_TEXTURETYPE_SHIFT,
    D3DSTT_CUBE    = 3<<D3DSP_TEXTURETYPE_SHIFT,
    D3DSTT_VOLUME  = 4<<D3DSP_TEXTURETYPE_SHIFT,
    D3DSTT_FORCE_DWORD  = 0x7fffffff,
} D3DSAMPLER_TEXTURE_TYPE;
#define D3DSP_REGNUM_MASK       0x000007FF
#define D3DSP_WRITEMASK_0       0x00010000
#define D3DSP_WRITEMASK_1       0x00020000
#define D3DSP_WRITEMASK_2       0x00040000
#define D3DSP_WRITEMASK_3       0x00080000
#define D3DSP_WRITEMASK_ALL     0x000F0000
#define D3DSP_DSTMOD_SHIFT      20
#define D3DSP_DSTMOD_MASK       0x00F00000
#define    D3DSPDM_NONE                 (0<<D3DSP_DSTMOD_SHIFT)
#define    D3DSPDM_SATURATE             (1<<D3DSP_DSTMOD_SHIFT)
#define    D3DSPDM_PARTIALPRECISION     (2<<D3DSP_DSTMOD_SHIFT)
#define    D3DSPDM_MSAMPCENTROID        (4<<D3DSP_DSTMOD_SHIFT)
#define D3DSP_DSTSHIFT_SHIFT    24
#define D3DSP_DSTSHIFT_MASK     0x0F000000
#define D3DSP_REGTYPE_SHIFT     28
#define D3DSP_REGTYPE_SHIFT2    8
#define D3DSP_REGTYPE_MASK      0x70000000
#define D3DSP_REGTYPE_MASK2     0x00001800
typedef enum _D3DSHADER_PARAM_REGISTER_TYPE
{
    D3DSPR_TEMP           =  0,
    D3DSPR_INPUT          =  1,
    D3DSPR_CONST          =  2,
    D3DSPR_ADDR           =  3,
    D3DSPR_TEXTURE        =  3,
    D3DSPR_RASTOUT        =  4,
    D3DSPR_ATTROUT        =  5,
    D3DSPR_TEXCRDOUT      =  6,
    D3DSPR_OUTPUT         =  6,
    D3DSPR_CONSTINT       =  7,
    D3DSPR_COLOROUT       =  8,
    D3DSPR_DEPTHOUT       =  9,
    D3DSPR_SAMPLER        = 10,
    D3DSPR_CONST2         = 11,
    D3DSPR_CONST3         = 12,
    D3DSPR_CONST4         = 13,
    D3DSPR_CONSTBOOL      = 14,
    D3DSPR_LOOP           = 15,
    D3DSPR_TEMPFLOAT16    = 16,
    D3DSPR_MISCTYPE       = 17,
    D3DSPR_LABEL          = 18,
    D3DSPR_PREDICATE      = 19,
    D3DSPR_FORCE_DWORD  = 0x7fffffff,
} D3DSHADER_PARAM_REGISTER_TYPE;
typedef enum _D3DSHADER_MISCTYPE_OFFSETS
{
    D3DSMO_POSITION   = 0,
    D3DSMO_FACE   = 1,
} D3DSHADER_MISCTYPE_OFFSETS;
typedef enum _D3DVS_RASTOUT_OFFSETS
{
    D3DSRO_POSITION = 0,
    D3DSRO_FOG,
    D3DSRO_POINT_SIZE,
    D3DSRO_FORCE_DWORD  = 0x7fffffff,
} D3DVS_RASTOUT_OFFSETS;
#define D3DVS_ADDRESSMODE_SHIFT 13
#define D3DVS_ADDRESSMODE_MASK  (1 << D3DVS_ADDRESSMODE_SHIFT)
typedef enum _D3DVS_ADDRESSMODE_TYPE
{
    D3DVS_ADDRMODE_ABSOLUTE  = (0 << D3DVS_ADDRESSMODE_SHIFT),
    D3DVS_ADDRMODE_RELATIVE  = (1 << D3DVS_ADDRESSMODE_SHIFT),
    D3DVS_ADDRMODE_FORCE_DWORD = 0x7fffffff,
} D3DVS_ADDRESSMODE_TYPE;
#define D3DSHADER_ADDRESSMODE_SHIFT 13
#define D3DSHADER_ADDRESSMODE_MASK  (1 << D3DSHADER_ADDRESSMODE_SHIFT)
typedef enum _D3DSHADER_ADDRESSMODE_TYPE
{
    D3DSHADER_ADDRMODE_ABSOLUTE  = (0 << D3DSHADER_ADDRESSMODE_SHIFT),
    D3DSHADER_ADDRMODE_RELATIVE  = (1 << D3DSHADER_ADDRESSMODE_SHIFT),
    D3DSHADER_ADDRMODE_FORCE_DWORD = 0x7fffffff,
} D3DSHADER_ADDRESSMODE_TYPE;
#define D3DVS_SWIZZLE_SHIFT     16
#define D3DVS_SWIZZLE_MASK      0x00FF0000
#define D3DVS_X_X       (0 << D3DVS_SWIZZLE_SHIFT)
#define D3DVS_X_Y       (1 << D3DVS_SWIZZLE_SHIFT)
#define D3DVS_X_Z       (2 << D3DVS_SWIZZLE_SHIFT)
#define D3DVS_X_W       (3 << D3DVS_SWIZZLE_SHIFT)
#define D3DVS_Y_X       (0 << (D3DVS_SWIZZLE_SHIFT + 2))
#define D3DVS_Y_Y       (1 << (D3DVS_SWIZZLE_SHIFT + 2))
#define D3DVS_Y_Z       (2 << (D3DVS_SWIZZLE_SHIFT + 2))
#define D3DVS_Y_W       (3 << (D3DVS_SWIZZLE_SHIFT + 2))
#define D3DVS_Z_X       (0 << (D3DVS_SWIZZLE_SHIFT + 4))
#define D3DVS_Z_Y       (1 << (D3DVS_SWIZZLE_SHIFT + 4))
#define D3DVS_Z_Z       (2 << (D3DVS_SWIZZLE_SHIFT + 4))
#define D3DVS_Z_W       (3 << (D3DVS_SWIZZLE_SHIFT + 4))
#define D3DVS_W_X       (0 << (D3DVS_SWIZZLE_SHIFT + 6))
#define D3DVS_W_Y       (1 << (D3DVS_SWIZZLE_SHIFT + 6))
#define D3DVS_W_Z       (2 << (D3DVS_SWIZZLE_SHIFT + 6))
#define D3DVS_W_W       (3 << (D3DVS_SWIZZLE_SHIFT + 6))
#define D3DVS_NOSWIZZLE (D3DVS_X_X | D3DVS_Y_Y | D3DVS_Z_Z | D3DVS_W_W)
#define D3DSP_SWIZZLE_SHIFT     16
#define D3DSP_SWIZZLE_MASK      0x00FF0000
#define D3DSP_NOSWIZZLE			( (0 << (D3DSP_SWIZZLE_SHIFT + 0)) | (1 << (D3DSP_SWIZZLE_SHIFT + 2)) | (2 << (D3DSP_SWIZZLE_SHIFT + 4)) | (3 << (D3DSP_SWIZZLE_SHIFT + 6)) )
#define D3DSP_REPLICATERED		( (0 << (D3DSP_SWIZZLE_SHIFT + 0)) | (0 << (D3DSP_SWIZZLE_SHIFT + 2)) | (0 << (D3DSP_SWIZZLE_SHIFT + 4)) | (0 << (D3DSP_SWIZZLE_SHIFT + 6)) )
#define D3DSP_REPLICATEGREEN	( (1 << (D3DSP_SWIZZLE_SHIFT + 0)) | (1 << (D3DSP_SWIZZLE_SHIFT + 2)) | (1 << (D3DSP_SWIZZLE_SHIFT + 4)) | (1 << (D3DSP_SWIZZLE_SHIFT + 6)) )
#define D3DSP_REPLICATEBLUE		( (2 << (D3DSP_SWIZZLE_SHIFT + 0)) | (2 << (D3DSP_SWIZZLE_SHIFT + 2)) | (2 << (D3DSP_SWIZZLE_SHIFT + 4)) | (2 << (D3DSP_SWIZZLE_SHIFT + 6)) )
#define D3DSP_REPLICATEALPHA	( (3 << (D3DSP_SWIZZLE_SHIFT + 0)) | (3 << (D3DSP_SWIZZLE_SHIFT + 2)) | (3 << (D3DSP_SWIZZLE_SHIFT + 4)) | (3 << (D3DSP_SWIZZLE_SHIFT + 6)) )
#define D3DSP_SRCMOD_SHIFT      24
#define D3DSP_SRCMOD_MASK       0x0F000000
typedef enum _D3DSHADER_PARAM_SRCMOD_TYPE
{
    D3DSPSM_NONE    = 0<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_NEG     = 1<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_BIAS    = 2<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_BIASNEG = 3<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_SIGN    = 4<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_SIGNNEG = 5<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_COMP    = 6<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_X2      = 7<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_X2NEG   = 8<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_DZ      = 9<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_DW      = 10<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_ABS     = 11<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_ABSNEG  = 12<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_NOT     = 13<<D3DSP_SRCMOD_SHIFT,
    D3DSPSM_FORCE_DWORD = 0x7fffffff,
} D3DSHADER_PARAM_SRCMOD_TYPE;
#define D3DPS_VERSION(_Major,_Minor) (0xFFFF0000|((_Major)<<8)|(_Minor))
#define D3DVS_VERSION(_Major,_Minor) (0xFFFE0000|((_Major)<<8)|(_Minor))
#define D3DSHADER_VERSION_MAJOR(_Version) (((_Version)>>8)&0xFF)
#define D3DSHADER_VERSION_MINOR(_Version) (((_Version)>>0)&0xFF)
#define D3DSI_COMMENTSIZE_SHIFT     16
#define D3DSI_COMMENTSIZE_MASK      0x7FFF0000
#define D3DSHADER_COMMENT(_DWordSize)	((((_DWordSize)<<D3DSI_COMMENTSIZE_SHIFT)&D3DSI_COMMENTSIZE_MASK)|D3DSIO_COMMENT)
#define D3DPS_END()  0x0000FFFF
#define D3DVS_END()  0x0000FFFF
typedef enum _D3DBASISTYPE
{
   D3DBASIS_BEZIER      = 0,
   D3DBASIS_BSPLINE     = 1,
   D3DBASIS_CATMULL_ROM = 2,
   D3DBASIS_FORCE_DWORD = 0x7fffffff,
} D3DBASISTYPE;
typedef enum _D3DDEGREETYPE
{
   D3DDEGREE_LINEAR      = 1,
   D3DDEGREE_QUADRATIC   = 2,
   D3DDEGREE_CUBIC       = 3,
   D3DDEGREE_QUINTIC     = 5,
   D3DDEGREE_FORCE_DWORD = 0x7fffffff,
} D3DDEGREETYPE;
typedef enum _D3DPATCHEDGESTYLE
{
   D3DPATCHEDGE_DISCRETE    = 0,
   D3DPATCHEDGE_CONTINUOUS  = 1,
   D3DPATCHEDGE_FORCE_DWORD = 0x7fffffff,
} D3DPATCHEDGESTYLE;
typedef enum _D3DSTATEBLOCKTYPE
{
    D3DSBT_ALL           = 1,
    D3DSBT_PIXELSTATE    = 2,
    D3DSBT_VERTEXSTATE   = 3,
    D3DSBT_FORCE_DWORD   = 0x7fffffff,
} D3DSTATEBLOCKTYPE;
typedef enum _D3DVERTEXBLENDFLAGS
{
    D3DVBF_DISABLE  = 0,
    D3DVBF_1WEIGHTS = 1,
    D3DVBF_2WEIGHTS = 2,
    D3DVBF_3WEIGHTS = 3,
    D3DVBF_TWEENING = 255,
    D3DVBF_0WEIGHTS = 256,
    D3DVBF_FORCE_DWORD = 0x7fffffff,
} D3DVERTEXBLENDFLAGS;
typedef enum _D3DTEXTURETRANSFORMFLAGS
{
    D3DTTFF_DISABLE         = 0,
    D3DTTFF_COUNT1          = 1,
    D3DTTFF_COUNT2          = 2,
    D3DTTFF_COUNT3          = 3,
    D3DTTFF_COUNT4          = 4,
    D3DTTFF_PROJECTED       = 256,
    D3DTTFF_FORCE_DWORD     = 0x7fffffff,
} D3DTEXTURETRANSFORMFLAGS;
#define D3DFVF_TEXTUREFORMAT2 0
#define D3DFVF_TEXTUREFORMAT1 3
#define D3DFVF_TEXTUREFORMAT3 1
#define D3DFVF_TEXTUREFORMAT4 2
#define D3DFVF_TEXCOORDSIZE3(CoordIndex) (D3DFVF_TEXTUREFORMAT3 << (CoordIndex*2 + 16))
#define D3DFVF_TEXCOORDSIZE2(CoordIndex) (D3DFVF_TEXTUREFORMAT2)
#define D3DFVF_TEXCOORDSIZE4(CoordIndex) (D3DFVF_TEXTUREFORMAT4 << (CoordIndex*2 + 16))
#define D3DFVF_TEXCOORDSIZE1(CoordIndex) (D3DFVF_TEXTUREFORMAT1 << (CoordIndex*2 + 16))
typedef enum _D3DDEVTYPE
{
    D3DDEVTYPE_HAL         = 1,
    D3DDEVTYPE_REF         = 2,
    D3DDEVTYPE_SW          = 3,
    D3DDEVTYPE_NULLREF     = 4,
    D3DDEVTYPE_FORCE_DWORD  = 0x7fffffff
} D3DDEVTYPE;
typedef enum _D3DMULTISAMPLE_TYPE
{
    D3DMULTISAMPLE_NONE            =  0,
    D3DMULTISAMPLE_NONMASKABLE     =  1,
    D3DMULTISAMPLE_2_SAMPLES       =  2,
    D3DMULTISAMPLE_3_SAMPLES       =  3,
    D3DMULTISAMPLE_4_SAMPLES       =  4,
    D3DMULTISAMPLE_5_SAMPLES       =  5,
    D3DMULTISAMPLE_6_SAMPLES       =  6,
    D3DMULTISAMPLE_7_SAMPLES       =  7,
    D3DMULTISAMPLE_8_SAMPLES       =  8,
    D3DMULTISAMPLE_9_SAMPLES       =  9,
    D3DMULTISAMPLE_10_SAMPLES      = 10,
    D3DMULTISAMPLE_11_SAMPLES      = 11,
    D3DMULTISAMPLE_12_SAMPLES      = 12,
    D3DMULTISAMPLE_13_SAMPLES      = 13,
    D3DMULTISAMPLE_14_SAMPLES      = 14,
    D3DMULTISAMPLE_15_SAMPLES      = 15,
    D3DMULTISAMPLE_16_SAMPLES      = 16,
    D3DMULTISAMPLE_FORCE_DWORD     = 0x7fffffff
} D3DMULTISAMPLE_TYPE;
#ifndef MAKEFOURCC
    #define MAKEFOURCC(ch0, ch1, ch2, ch3)                              \
                ((DWORD)(BYTE)(ch0) | ((DWORD)(BYTE)(ch1) << 8) |       \
                ((DWORD)(BYTE)(ch2) << 16) | ((DWORD)(BYTE)(ch3) << 24 ))
#endif
typedef enum _D3DFORMAT
{
    D3DFMT_UNKNOWN              =  0,
    D3DFMT_R8G8B8               = 20,
    D3DFMT_A8R8G8B8             = 21,
    D3DFMT_X8R8G8B8             = 22,
    D3DFMT_R5G6B5               = 23,
    D3DFMT_X1R5G5B5             = 24,
    D3DFMT_A1R5G5B5             = 25,
    D3DFMT_A4R4G4B4             = 26,
    D3DFMT_R3G3B2               = 27,
    D3DFMT_A8                   = 28,
    D3DFMT_A8R3G3B2             = 29,
    D3DFMT_X4R4G4B4             = 30,
    D3DFMT_A2B10G10R10          = 31,
    D3DFMT_A8B8G8R8             = 32,
    D3DFMT_X8B8G8R8             = 33,
    D3DFMT_G16R16               = 34,
    D3DFMT_A2R10G10B10          = 35,
    D3DFMT_A16B16G16R16         = 36,
    D3DFMT_A8P8                 = 40,
    D3DFMT_P8                   = 41,
    D3DFMT_L8                   = 50,
    D3DFMT_A8L8                 = 51,
    D3DFMT_A4L4                 = 52,
    D3DFMT_V8U8                 = 60,
    D3DFMT_L6V5U5               = 61,
    D3DFMT_X8L8V8U8             = 62,
    D3DFMT_Q8W8V8U8             = 63,
    D3DFMT_V16U16               = 64,
    D3DFMT_A2W10V10U10          = 67,
    D3DFMT_UYVY                 = MAKEFOURCC('U', 'Y', 'V', 'Y'),
    D3DFMT_R8G8_B8G8            = MAKEFOURCC('R', 'G', 'B', 'G'),
    D3DFMT_YUY2                 = MAKEFOURCC('Y', 'U', 'Y', '2'),
    D3DFMT_G8R8_G8B8            = MAKEFOURCC('G', 'R', 'G', 'B'),
    D3DFMT_DXT1                 = MAKEFOURCC('D', 'X', 'T', '1'),
    D3DFMT_DXT2                 = MAKEFOURCC('D', 'X', 'T', '2'),
    D3DFMT_DXT3                 = MAKEFOURCC('D', 'X', 'T', '3'),
    D3DFMT_DXT4                 = MAKEFOURCC('D', 'X', 'T', '4'),
    D3DFMT_DXT5                 = MAKEFOURCC('D', 'X', 'T', '5'),
    D3DFMT_D16_LOCKABLE         = 70,
    D3DFMT_D32                  = 71,
    D3DFMT_D15S1                = 73,
    D3DFMT_D24S8                = 75,
    D3DFMT_D24X8                = 77,
    D3DFMT_D24X4S4              = 79,
    D3DFMT_D16                  = 80,
    D3DFMT_D32F_LOCKABLE        = 82,
    D3DFMT_D24FS8               = 83,
#if !defined(D3D_DISABLE_9EX)
    D3DFMT_D32_LOCKABLE         = 84,
    D3DFMT_S8_LOCKABLE          = 85,
#endif
    D3DFMT_L16                  = 81,
    D3DFMT_VERTEXDATA           =100,
    D3DFMT_INDEX16              =101,
    D3DFMT_INDEX32              =102,
    D3DFMT_Q16W16V16U16         =110,
    D3DFMT_MULTI2_ARGB8         = MAKEFOURCC('M','E','T','1'),
    D3DFMT_R16F                 = 111,
    D3DFMT_G16R16F              = 112,
    D3DFMT_A16B16G16R16F        = 113,
    D3DFMT_R32F                 = 114,
    D3DFMT_G32R32F              = 115,
    D3DFMT_A32B32G32R32F        = 116,
    D3DFMT_CxV8U8               = 117,
#if !defined(D3D_DISABLE_9EX)
    D3DFMT_A1                   = 118,
    D3DFMT_A2B10G10R10_XR_BIAS  = 119,
    D3DFMT_BINARYBUFFER         = 199,
#endif
    D3DFMT_FORCE_DWORD          =0x7fffffff
} D3DFORMAT;
typedef struct _D3DDISPLAYMODE
{
    UINT            Width;
    UINT            Height;
    UINT            RefreshRate;
    D3DFORMAT       Format;
} D3DDISPLAYMODE;
typedef struct _D3DDEVICE_CREATION_PARAMETERS
{
    UINT            AdapterOrdinal;
    D3DDEVTYPE      DeviceType;
    HWND            hFocusWindow;
    DWORD           BehaviorFlags;
} D3DDEVICE_CREATION_PARAMETERS;
typedef enum _D3DSWAPEFFECT
{
    D3DSWAPEFFECT_DISCARD           = 1,
    D3DSWAPEFFECT_FLIP              = 2,
    D3DSWAPEFFECT_COPY              = 3,
    D3DSWAPEFFECT_OVERLAY           = 4,
    D3DSWAPEFFECT_FLIPEX            = 5,
    D3DSWAPEFFECT_FORCE_DWORD       = 0x7fffffff
} D3DSWAPEFFECT;
typedef enum _D3DPOOL {
    D3DPOOL_DEFAULT                 = 0,
    D3DPOOL_MANAGED                 = 1,
    D3DPOOL_SYSTEMMEM               = 2,
    D3DPOOL_SCRATCH                 = 3,
    D3DPOOL_FORCE_DWORD             = 0x7fffffff
} D3DPOOL;
#define D3DPRESENT_RATE_DEFAULT         0x00000000
typedef struct _D3DPRESENT_PARAMETERS_
{
    UINT                BackBufferWidth;
    UINT                BackBufferHeight;
    D3DFORMAT           BackBufferFormat;
    UINT                BackBufferCount;
    D3DMULTISAMPLE_TYPE MultiSampleType;
    DWORD               MultiSampleQuality;
    D3DSWAPEFFECT       SwapEffect;
    HWND                hDeviceWindow;
    BOOL                Windowed;
    BOOL                EnableAutoDepthStencil;
    D3DFORMAT           AutoDepthStencilFormat;
    DWORD               Flags;
    UINT                FullScreen_RefreshRateInHz;
    UINT                PresentationInterval;
} D3DPRESENT_PARAMETERS;
#define D3DPRESENTFLAG_LOCKABLE_BACKBUFFER      0x00000001
#define D3DPRESENTFLAG_DISCARD_DEPTHSTENCIL     0x00000002
#define D3DPRESENTFLAG_DEVICECLIP               0x00000004
#define D3DPRESENTFLAG_VIDEO                    0x00000010
#if !defined(D3D_DISABLE_9EX)
#define D3DPRESENTFLAG_NOAUTOROTATE                    0x00000020
#define D3DPRESENTFLAG_UNPRUNEDMODE                    0x00000040
#define D3DPRESENTFLAG_OVERLAY_LIMITEDRGB              0x00000080
#define D3DPRESENTFLAG_OVERLAY_YCbCr_BT709             0x00000100
#define D3DPRESENTFLAG_OVERLAY_YCbCr_xvYCC             0x00000200
#define D3DPRESENTFLAG_RESTRICTED_CONTENT              0x00000400
#define D3DPRESENTFLAG_RESTRICT_SHARED_RESOURCE_DRIVER 0x00000800
#endif
typedef struct _D3DGAMMARAMP
{
    WORD                red  [256];
    WORD                green[256];
    WORD                blue [256];
} D3DGAMMARAMP;
typedef enum _D3DBACKBUFFER_TYPE
{
    D3DBACKBUFFER_TYPE_MONO         = 0,
    D3DBACKBUFFER_TYPE_LEFT         = 1,
    D3DBACKBUFFER_TYPE_RIGHT        = 2,
    D3DBACKBUFFER_TYPE_FORCE_DWORD  = 0x7fffffff
} D3DBACKBUFFER_TYPE;
typedef enum _D3DRESOURCETYPE {
    D3DRTYPE_SURFACE                =  1,
    D3DRTYPE_VOLUME                 =  2,
    D3DRTYPE_TEXTURE                =  3,
    D3DRTYPE_VOLUMETEXTURE          =  4,
    D3DRTYPE_CUBETEXTURE            =  5,
    D3DRTYPE_VERTEXBUFFER           =  6,
    D3DRTYPE_INDEXBUFFER            =  7,
    D3DRTYPE_FORCE_DWORD            = 0x7fffffff
} D3DRESOURCETYPE;
#define D3DUSAGE_RENDERTARGET       (0x00000001L)
#define D3DUSAGE_DEPTHSTENCIL       (0x00000002L)
#define D3DUSAGE_DYNAMIC            (0x00000200L)
#if !defined(D3D_DISABLE_9EX)
#define D3DUSAGE_NONSECURE          (0x00800000L)
#endif
#define D3DUSAGE_AUTOGENMIPMAP      (0x00000400L)
#define D3DUSAGE_DMAP               (0x00004000L)
#define D3DUSAGE_QUERY_LEGACYBUMPMAP            (0x00008000L)
#define D3DUSAGE_QUERY_SRGBREAD                 (0x00010000L)
#define D3DUSAGE_QUERY_FILTER                   (0x00020000L)
#define D3DUSAGE_QUERY_SRGBWRITE                (0x00040000L)
#define D3DUSAGE_QUERY_POSTPIXELSHADER_BLENDING (0x00080000L)
#define D3DUSAGE_QUERY_VERTEXTEXTURE            (0x00100000L)
#define D3DUSAGE_QUERY_WRAPANDMIP	            (0x00200000L)
#define D3DUSAGE_WRITEONLY          (0x00000008L)
#define D3DUSAGE_SOFTWAREPROCESSING (0x00000010L)
#define D3DUSAGE_DONOTCLIP          (0x00000020L)
#define D3DUSAGE_POINTS             (0x00000040L)
#define D3DUSAGE_RTPATCHES          (0x00000080L)
#define D3DUSAGE_NPATCHES           (0x00000100L)
#if !defined(D3D_DISABLE_9EX)
#define D3DUSAGE_TEXTAPI                         (0x10000000L)
#define D3DUSAGE_RESTRICTED_CONTENT              (0x00000800L)
#define D3DUSAGE_RESTRICT_SHARED_RESOURCE        (0x00002000L)
#define D3DUSAGE_RESTRICT_SHARED_RESOURCE_DRIVER (0x00001000L)
#endif
typedef enum _D3DCUBEMAP_FACES
{
    D3DCUBEMAP_FACE_POSITIVE_X     = 0,
    D3DCUBEMAP_FACE_NEGATIVE_X     = 1,
    D3DCUBEMAP_FACE_POSITIVE_Y     = 2,
    D3DCUBEMAP_FACE_NEGATIVE_Y     = 3,
    D3DCUBEMAP_FACE_POSITIVE_Z     = 4,
    D3DCUBEMAP_FACE_NEGATIVE_Z     = 5,
    D3DCUBEMAP_FACE_FORCE_DWORD    = 0x7fffffff
} D3DCUBEMAP_FACES;
#define D3DLOCK_READONLY           0x00000010L
#define D3DLOCK_DISCARD            0x00002000L
#define D3DLOCK_NOOVERWRITE        0x00001000L
#define D3DLOCK_NOSYSLOCK          0x00000800L
#define D3DLOCK_DONOTWAIT          0x00004000L
#define D3DLOCK_NO_DIRTY_UPDATE     0x00008000L
typedef struct _D3DVERTEXBUFFER_DESC
{
    D3DFORMAT           Format;
    D3DRESOURCETYPE     Type;
    DWORD               Usage;
    D3DPOOL             Pool;
    UINT                Size;
    DWORD               FVF;
} D3DVERTEXBUFFER_DESC;
typedef struct _D3DINDEXBUFFER_DESC
{
    D3DFORMAT           Format;
    D3DRESOURCETYPE     Type;
    DWORD               Usage;
    D3DPOOL             Pool;
    UINT                Size;
} D3DINDEXBUFFER_DESC;
typedef struct _D3DSURFACE_DESC
{
    D3DFORMAT           Format;
    D3DRESOURCETYPE     Type;
    DWORD               Usage;
    D3DPOOL             Pool;
    D3DMULTISAMPLE_TYPE MultiSampleType;
    DWORD               MultiSampleQuality;
    UINT                Width;
    UINT                Height;
} D3DSURFACE_DESC;
typedef struct _D3DVOLUME_DESC
{
    D3DFORMAT           Format;
    D3DRESOURCETYPE     Type;
    DWORD               Usage;
    D3DPOOL             Pool;
    UINT                Width;
    UINT                Height;
    UINT                Depth;
} D3DVOLUME_DESC;
typedef struct _D3DLOCKED_RECT
{
    INT                 Pitch;
    void*               pBits;
} D3DLOCKED_RECT;
typedef struct _D3DBOX
{
    UINT                Left;
    UINT                Top;
    UINT                Right;
    UINT                Bottom;
    UINT                Front;
    UINT                Back;
} D3DBOX;
typedef struct _D3DLOCKED_BOX
{
    INT                 RowPitch;
    INT                 SlicePitch;
    void*               pBits;
} D3DLOCKED_BOX;
typedef struct _D3DRANGE
{
    UINT                Offset;
    UINT                Size;
} D3DRANGE;
typedef struct _D3DRECTPATCH_INFO
{
    UINT                StartVertexOffsetWidth;
    UINT                StartVertexOffsetHeight;
    UINT                Width;
    UINT                Height;
    UINT                Stride;
    D3DBASISTYPE        Basis;
    D3DDEGREETYPE       Degree;
} D3DRECTPATCH_INFO;
typedef struct _D3DTRIPATCH_INFO
{
    UINT                StartVertexOffset;
    UINT                NumVertices;
    D3DBASISTYPE        Basis;
    D3DDEGREETYPE       Degree;
} D3DTRIPATCH_INFO;
#define MAX_DEVICE_IDENTIFIER_STRING        512
typedef struct _D3DADAPTER_IDENTIFIER9
{
    char            Driver[MAX_DEVICE_IDENTIFIER_STRING];
    char            Description[MAX_DEVICE_IDENTIFIER_STRING];
    char            DeviceName[32];
#ifdef _WIN32
    LARGE_INTEGER   DriverVersion;
#else
    DWORD           DriverVersionLowPart;
    DWORD           DriverVersionHighPart;
#endif
    DWORD           VendorId;
    DWORD           DeviceId;
    DWORD           SubSysId;
    DWORD           Revision;
    GUID            DeviceIdentifier;
    DWORD           WHQLLevel;
} D3DADAPTER_IDENTIFIER9;
typedef struct _D3DRASTER_STATUS
{
    BOOL            InVBlank;
    UINT            ScanLine;
} D3DRASTER_STATUS;
typedef enum _D3DDEBUGMONITORTOKENS
{
    D3DDMT_ENABLE            = 0,
    D3DDMT_DISABLE           = 1,
    D3DDMT_FORCE_DWORD     = 0x7fffffff,
} D3DDEBUGMONITORTOKENS;
typedef enum _D3DQUERYTYPE
{
    D3DQUERYTYPE_VCACHE                 = 4,
    D3DQUERYTYPE_RESOURCEMANAGER        = 5,
    D3DQUERYTYPE_VERTEXSTATS            = 6,
    D3DQUERYTYPE_EVENT                  = 8,
    D3DQUERYTYPE_OCCLUSION              = 9,
    D3DQUERYTYPE_TIMESTAMP              = 10,
    D3DQUERYTYPE_TIMESTAMPDISJOINT      = 11,
    D3DQUERYTYPE_TIMESTAMPFREQ          = 12,
    D3DQUERYTYPE_PIPELINETIMINGS        = 13,
    D3DQUERYTYPE_INTERFACETIMINGS       = 14,
    D3DQUERYTYPE_VERTEXTIMINGS          = 15,
    D3DQUERYTYPE_PIXELTIMINGS           = 16,
    D3DQUERYTYPE_BANDWIDTHTIMINGS       = 17,
    D3DQUERYTYPE_CACHEUTILIZATION       = 18,
#if !defined(D3D_DISABLE_9EX)
    D3DQUERYTYPE_MEMORYPRESSURE         = 19,
#endif
} D3DQUERYTYPE;
#define D3DISSUE_END (1 << 0)
#define D3DISSUE_BEGIN (1 << 1)
#define D3DGETDATA_FLUSH (1 << 0)
typedef struct _D3DRESOURCESTATS
{
    BOOL    bThrashing;
    DWORD   ApproxBytesDownloaded;
    DWORD   NumEvicts;
    DWORD   NumVidCreates;
    DWORD   LastPri;
    DWORD   NumUsed;
    DWORD   NumUsedInVidMem;
    DWORD   WorkingSet;
    DWORD   WorkingSetBytes;
    DWORD   TotalManaged;
    DWORD   TotalBytes;
} D3DRESOURCESTATS;
#define D3DRTYPECOUNT (D3DRTYPE_INDEXBUFFER+1)
typedef struct _D3DDEVINFO_RESOURCEMANAGER
{
#ifndef WOW64_ENUM_WORKAROUND
    D3DRESOURCESTATS    stats[D3DRTYPECOUNT];
#else
    D3DRESOURCESTATS    stats[8];
#endif
} D3DDEVINFO_RESOURCEMANAGER, *LPD3DDEVINFO_RESOURCEMANAGER;
typedef struct _D3DDEVINFO_D3DVERTEXSTATS
{
    DWORD   NumRenderedTriangles;
    DWORD   NumExtraClippingTriangles;
} D3DDEVINFO_D3DVERTEXSTATS, *LPD3DDEVINFO_D3DVERTEXSTATS;
typedef struct _D3DDEVINFO_VCACHE {
    DWORD   Pattern;
    DWORD   OptMethod;
    DWORD   CacheSize;
    DWORD   MagicNumber;
} D3DDEVINFO_VCACHE, *LPD3DDEVINFO_VCACHE;
typedef struct _D3DDEVINFO_D3D9PIPELINETIMINGS
{
    FLOAT VertexProcessingTimePercent;
    FLOAT PixelProcessingTimePercent;
    FLOAT OtherGPUProcessingTimePercent;
    FLOAT GPUIdleTimePercent;
} D3DDEVINFO_D3D9PIPELINETIMINGS;
typedef struct _D3DDEVINFO_D3D9INTERFACETIMINGS
{
    FLOAT WaitingForGPUToUseApplicationResourceTimePercent;
    FLOAT WaitingForGPUToAcceptMoreCommandsTimePercent;
    FLOAT WaitingForGPUToStayWithinLatencyTimePercent;
    FLOAT WaitingForGPUExclusiveResourceTimePercent;
    FLOAT WaitingForGPUOtherTimePercent;
} D3DDEVINFO_D3D9INTERFACETIMINGS;
typedef struct _D3DDEVINFO_D3D9STAGETIMINGS
{
    FLOAT MemoryProcessingPercent;
    FLOAT ComputationProcessingPercent;
} D3DDEVINFO_D3D9STAGETIMINGS;
typedef struct _D3DDEVINFO_D3D9BANDWIDTHTIMINGS
{
    FLOAT MaxBandwidthUtilized;
    FLOAT FrontEndUploadMemoryUtilizedPercent;
    FLOAT VertexRateUtilizedPercent;
    FLOAT TriangleSetupRateUtilizedPercent;
    FLOAT FillRateUtilizedPercent;
} D3DDEVINFO_D3D9BANDWIDTHTIMINGS;
typedef struct _D3DDEVINFO_D3D9CACHEUTILIZATION
{
    FLOAT TextureCacheHitRate;
    FLOAT PostTransformVertexCacheHitRate;
} D3DDEVINFO_D3D9CACHEUTILIZATION;
#if !defined(D3D_DISABLE_9EX)
typedef struct _D3DMEMORYPRESSURE
{
    UINT64  BytesEvictedFromProcess;
    UINT64  SizeOfInefficientAllocation;
    DWORD   LevelOfEfficiency;
} D3DMEMORYPRESSURE;
#endif
#if !defined(D3D_DISABLE_9EX)
typedef enum _D3DCOMPOSERECTSOP{
    D3DCOMPOSERECTS_COPY     = 1,
    D3DCOMPOSERECTS_OR       = 2,
    D3DCOMPOSERECTS_AND      = 3,
    D3DCOMPOSERECTS_NEG      = 4,
    D3DCOMPOSERECTS_FORCE_DWORD    = 0x7fffffff,
} D3DCOMPOSERECTSOP;
typedef struct _D3DCOMPOSERECTDESC
{
    USHORT  X, Y;
    USHORT  Width, Height;
} D3DCOMPOSERECTDESC;
typedef struct _D3DCOMPOSERECTDESTINATION
{
    USHORT SrcRectIndex;
    USHORT Reserved;
    SHORT  X, Y;
} D3DCOMPOSERECTDESTINATION;
#define D3DCOMPOSERECTS_MAXNUMRECTS 0xFFFF
#define D3DCONVOLUTIONMONO_MAXWIDTH  7
#define D3DCONVOLUTIONMONO_MAXHEIGHT D3DCONVOLUTIONMONO_MAXWIDTH
#define D3DFMT_A1_SURFACE_MAXWIDTH  8192
#define D3DFMT_A1_SURFACE_MAXHEIGHT 2048
typedef struct _D3DPRESENTSTATS {
    UINT PresentCount;
    UINT PresentRefreshCount;
    UINT SyncRefreshCount;
    LARGE_INTEGER SyncQPCTime;
    LARGE_INTEGER SyncGPUTime;
} D3DPRESENTSTATS;
typedef enum D3DSCANLINEORDERING
{
    D3DSCANLINEORDERING_UNKNOWN                    = 0,
    D3DSCANLINEORDERING_PROGRESSIVE                = 1,
    D3DSCANLINEORDERING_INTERLACED                 = 2,
} D3DSCANLINEORDERING;
typedef struct D3DDISPLAYMODEEX
{
    UINT                    Size;
    UINT                    Width;
    UINT                    Height;
    UINT                    RefreshRate;
    D3DFORMAT               Format;
    D3DSCANLINEORDERING     ScanLineOrdering;
} D3DDISPLAYMODEEX;
typedef struct D3DDISPLAYMODEFILTER
{
    UINT                    Size;
    D3DFORMAT               Format;
    D3DSCANLINEORDERING     ScanLineOrdering;
} D3DDISPLAYMODEFILTER;
typedef enum D3DDISPLAYROTATION
{
    D3DDISPLAYROTATION_IDENTITY = 1,
    D3DDISPLAYROTATION_90       = 2,
    D3DDISPLAYROTATION_180      = 3,
    D3DDISPLAYROTATION_270      = 4
} D3DDISPLAYROTATION;
#define D3D9_RESOURCE_PRIORITY_MINIMUM       0x28000000
#define D3D9_RESOURCE_PRIORITY_LOW           0x50000000
#define D3D9_RESOURCE_PRIORITY_NORMAL        0x78000000
#define D3D9_RESOURCE_PRIORITY_HIGH          0xa0000000
#define D3D9_RESOURCE_PRIORITY_MAXIMUM       0xc8000000
#define D3D_OMAC_SIZE    16
typedef struct _D3D_OMAC
{
    BYTE Omac[D3D_OMAC_SIZE];
} D3D_OMAC;
typedef enum _D3DAUTHENTICATEDCHANNELTYPE
{
    D3DAUTHENTICATEDCHANNEL_D3D9            = 1,
    D3DAUTHENTICATEDCHANNEL_DRIVER_SOFTWARE = 2,
    D3DAUTHENTICATEDCHANNEL_DRIVER_HARDWARE = 3,
} D3DAUTHENTICATEDCHANNELTYPE;
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERY_INPUT
{
    GUID                               QueryType;
    HANDLE                             hChannel;
    UINT                               SequenceNumber;
} D3DAUTHENTICATEDCHANNEL_QUERY_INPUT;
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT
{
    D3D_OMAC                           omac;
    GUID                               QueryType;
    HANDLE                             hChannel;
    UINT                               SequenceNumber;
    HRESULT                            ReturnCode;
} D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDQUERY_PROTECTION, 0xa84eb584, 0xc495, 0x48aa, 0xb9, 0x4d, 0x8b, 0xd2, 0xd6, 0xfb, 0xce, 0x5);
typedef struct _D3DAUTHENTICATEDCHANNEL_PROTECTION_FLAGS
{
    union
    {
        struct
        {
            UINT ProtectionEnabled			: 1;
            UINT OverlayOrFullscreenRequired: 1;
            UINT Reserved					: 30;
        };
        UINT  Value;
    };
} D3DAUTHENTICATEDCHANNEL_PROTECTION_FLAGS;
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYPROTECTION_OUTPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT Output;
    D3DAUTHENTICATEDCHANNEL_PROTECTION_FLAGS ProtectionFlags;
} D3DAUTHENTICATEDCHANNEL_QUERYPROTECTION_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDQUERY_CHANNELTYPE, 0xbc1b18a5, 0xb1fb, 0x42ab, 0xbd, 0x94, 0xb5, 0x82, 0x8b, 0x4b, 0xf7, 0xbe);
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYCHANNELTYPE_OUTPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT Output;
    D3DAUTHENTICATEDCHANNELTYPE ChannelType;
} D3DAUTHENTICATEDCHANNEL_QUERYCHANNELTYPE_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDQUERY_DEVICEHANDLE, 0xec1c539d, 0x8cff, 0x4e2a, 0xbc, 0xc4, 0xf5, 0x69, 0x2f, 0x99, 0xf4, 0x80);
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYDEVICEHANDLE_OUTPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT Output;
    HANDLE   DeviceHandle;
} D3DAUTHENTICATEDCHANNEL_QUERYDEVICEHANDLE_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDQUERY_CRYPTOSESSION, 0x2634499e, 0xd018, 0x4d74, 0xac, 0x17, 0x7f, 0x72, 0x40, 0x59, 0x52, 0x8d);
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYCRYPTOSESSION_INPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_INPUT Input;
    HANDLE   DXVA2DecodeHandle;
} D3DAUTHENTICATEDCHANNEL_QUERYCRYPTOSESSION_INPUT;
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYCRYPTOSESSION_OUTPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT Output;
    HANDLE   DXVA2DecodeHandle;
    HANDLE   CryptoSessionHandle;
    HANDLE   DeviceHandle;
} D3DAUTHENTICATEDCHANNEL_QUERYCRYPTOSESSION_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDQUERY_RESTRICTEDSHAREDRESOURCEPROCESSCOUNT, 0xdb207b3, 0x9450, 0x46a6, 0x82, 0xde, 0x1b, 0x96, 0xd4, 0x4f, 0x9c, 0xf2);
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYRESTRICTEDSHAREDRESOURCEPROCESSCOUNT_OUTPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT Output;
    UINT   NumRestrictedSharedResourceProcesses;
} D3DAUTHENTICATEDCHANNEL_QUERYRESTRICTEDSHAREDRESOURCEPROCESSCOUNT_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDQUERY_RESTRICTEDSHAREDRESOURCEPROCESS, 0x649bbadb, 0xf0f4, 0x4639, 0xa1, 0x5b, 0x24, 0x39, 0x3f, 0xc3, 0xab, 0xac);
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYRESTRICTEDSHAREDRESOURCEPROCESS_INPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_INPUT Input;
    UINT     ProcessIndex;
} D3DAUTHENTICATEDCHANNEL_QUERYRESTRICTEDSHAREDRESOURCEPROCESS_INPUT;
typedef enum _D3DAUTHENTICATEDCHANNEL_PROCESSIDENTIFIERTYPE
{
    PROCESSIDTYPE_UNKNOWN  = 0,
    PROCESSIDTYPE_DWM      = 1,
    PROCESSIDTYPE_HANDLE   = 2
} D3DAUTHENTICATEDCHANNEL_PROCESSIDENTIFIERTYPE;
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYRESTRICTEDSHAREDRESOURCEPROCESS_OUTPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT Output;
    UINT                                          ProcessIndex;
    D3DAUTHENTICATEDCHANNEL_PROCESSIDENTIFIERTYPE ProcessIdentifer;
    HANDLE                                        ProcessHandle;
} D3DAUTHENTICATEDCHANNEL_QUERYRESTRICTEDSHAREDRESOURCEPROCESS_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDQUERY_UNRESTRICTEDPROTECTEDSHAREDRESOURCECOUNT, 0x12f0bd6, 0xe662, 0x4474, 0xbe, 0xfd, 0xaa, 0x53, 0xe5, 0x14, 0x3c, 0x6d);
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYUNRESTRICTEDPROTECTEDSHAREDRESOURCECOUNT_OUTPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT Output;
    UINT   NumUnrestrictedProtectedSharedResources;
} D3DAUTHENTICATEDCHANNEL_QUERYUNRESTRICTEDPROTECTEDSHAREDRESOURCECOUNT_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDQUERY_OUTPUTIDCOUNT, 0x2c042b5e, 0x8c07, 0x46d5, 0xaa, 0xbe, 0x8f, 0x75, 0xcb, 0xad, 0x4c, 0x31);
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYOUTPUTIDCOUNT_INPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_INPUT Input;
    HANDLE  DeviceHandle;
    HANDLE  CryptoSessionHandle;
} D3DAUTHENTICATEDCHANNEL_QUERYOUTPUTIDCOUNT_INPUT;
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYOUTPUTIDCOUNT_OUTPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT Output;
    HANDLE  DeviceHandle;
    HANDLE  CryptoSessionHandle;
    UINT    NumOutputIDs;
} D3DAUTHENTICATEDCHANNEL_QUERYOUTPUTIDCOUNT_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDQUERY_OUTPUTID, 0x839ddca3, 0x9b4e, 0x41e4, 0xb0, 0x53, 0x89, 0x2b, 0xd2, 0xa1, 0x1e, 0xe7);
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYOUTPUTID_INPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_INPUT Input;
    HANDLE  DeviceHandle;
    HANDLE  CryptoSessionHandle;
    UINT    OutputIDIndex;
} D3DAUTHENTICATEDCHANNEL_QUERYOUTPUTID_INPUT;
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYOUTPUTID_OUTPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT Output;
    HANDLE  DeviceHandle;
    HANDLE  CryptoSessionHandle;
    UINT    OutputIDIndex;
    UINT64  OutputID;
} D3DAUTHENTICATEDCHANNEL_QUERYOUTPUTID_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDQUERY_ACCESSIBILITYATTRIBUTES, 0x6214d9d2, 0x432c, 0x4abb, 0x9f, 0xce, 0x21, 0x6e, 0xea, 0x26, 0x9e, 0x3b);
typedef enum _D3DBUSTYPE
{
    D3DBUSTYPE_OTHER                                     = 0x00000000,
    D3DBUSTYPE_PCI                                       = 0x00000001,
    D3DBUSTYPE_PCIX                                      = 0x00000002,
    D3DBUSTYPE_PCIEXPRESS                                = 0x00000003,
    D3DBUSTYPE_AGP                                       = 0x00000004,
    D3DBUSIMPL_MODIFIER_INSIDE_OF_CHIPSET                = 0x00010000,
    D3DBUSIMPL_MODIFIER_TRACKS_ON_MOTHER_BOARD_TO_CHIP   = 0x00020000,
    D3DBUSIMPL_MODIFIER_TRACKS_ON_MOTHER_BOARD_TO_SOCKET = 0x00030000,
    D3DBUSIMPL_MODIFIER_DAUGHTER_BOARD_CONNECTOR         = 0x00040000,
    D3DBUSIMPL_MODIFIER_DAUGHTER_BOARD_CONNECTOR_INSIDE_OF_NUAE = 0x00050000,
    D3DBUSIMPL_MODIFIER_NON_STANDARD                     = 0x80000000,
} D3DBUSTYPE;
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYINFOBUSTYPE_OUTPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT Output;
    D3DBUSTYPE BusType;
    BOOL bAccessibleInContiguousBlocks;
    BOOL bAccessibleInNonContiguousBlocks;
} D3DAUTHENTICATEDCHANNEL_QUERYINFOBUSTYPE_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDQUERY_ENCRYPTIONWHENACCESSIBLEGUIDCOUNT, 0xb30f7066, 0x203c, 0x4b07, 0x93, 0xfc, 0xce, 0xaa, 0xfd, 0x61, 0x24, 0x1e);
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYEVICTIONENCRYPTIONGUIDCOUNT_OUTPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT Output;
    UINT   NumEncryptionGuids;
} D3DAUTHENTICATEDCHANNEL_QUERYEVICTIONENCRYPTIONGUIDCOUNT_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDQUERY_ENCRYPTIONWHENACCESSIBLEGUID, 0xf83a5958, 0xe986, 0x4bda, 0xbe, 0xb0, 0x41, 0x1f, 0x6a, 0x7a, 0x1, 0xb7);
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYEVICTIONENCRYPTIONGUID_INPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_INPUT Input;
    UINT EncryptionGuidIndex;
} D3DAUTHENTICATEDCHANNEL_QUERYEVICTIONENCRYPTIONGUID_INPUT;
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYEVICTIONENCRYPTIONGUID_OUTPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT Output;
    UINT       EncryptionGuidIndex;
    GUID       EncryptionGuid;
} D3DAUTHENTICATEDCHANNEL_QUERYEVICTIONENCRYPTIONGUID_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDQUERY_CURRENTENCRYPTIONWHENACCESSIBLE, 0xec1791c7, 0xdad3, 0x4f15, 0x9e, 0xc3, 0xfa, 0xa9, 0x3d, 0x60, 0xd4, 0xf0);
typedef struct _D3DAUTHENTICATEDCHANNEL_QUERYUNCOMPRESSEDENCRYPTIONLEVEL_OUTPUT
{
    D3DAUTHENTICATEDCHANNEL_QUERY_OUTPUT Output;
    GUID       EncryptionGuid;
} D3DAUTHENTICATEDCHANNEL_QUERYUNCOMPRESSEDENCRYPTIONLEVEL_OUTPUT;
typedef struct _D3DAUTHENTICATEDCHANNEL_CONFIGURE_INPUT
{
	D3D_OMAC omac;
	GUID ConfigureType;
	HANDLE hChannel;
	UINT SequenceNumber;
} D3DAUTHENTICATEDCHANNEL_CONFIGURE_INPUT;
typedef struct _D3DAUTHENTICATEDCHANNEL_CONFIGURE_OUTPUT
{
	D3D_OMAC omac;
	GUID ConfigureType;
	HANDLE hChannel;
	UINT SequenceNumber;
	HRESULT ReturnCode;
} D3DAUTHENTICATEDCHANNEL_CONFIGURE_OUTPUT;
DEFINE_GUID(D3DAUTHENTICATEDCONFIGURE_INITIALIZE, 0x6114bdb, 0x3523, 0x470a, 0x8d, 0xca, 0xfb, 0xc2, 0x84, 0x51, 0x54, 0xf0);
typedef struct _D3DAUTHENTICATEDCHANNEL_CONFIGUREINITIALIZE
{
    D3DAUTHENTICATEDCHANNEL_CONFIGURE_INPUT   Parameters;
    UINT   StartSequenceQuery;
    UINT   StartSequenceConfigure;
} D3DAUTHENTICATEDCHANNEL_CONFIGUREINITIALIZE;
DEFINE_GUID(D3DAUTHENTICATEDCONFIGURE_PROTECTION, 0x50455658, 0x3f47, 0x4362, 0xbf, 0x99, 0xbf, 0xdf, 0xcd, 0xe9, 0xed, 0x29);
typedef struct _D3DAUTHENTICATEDCHANNEL_CONFIGUREPROTECTION
{
    D3DAUTHENTICATEDCHANNEL_CONFIGURE_INPUT   Parameters;
    D3DAUTHENTICATEDCHANNEL_PROTECTION_FLAGS Protections;
} D3DAUTHENTICATEDCHANNEL_CONFIGUREPROTECTION;
DEFINE_GUID(D3DAUTHENTICATEDCONFIGURE_CRYPTOSESSION, 0x6346cc54, 0x2cfc, 0x4ad4, 0x82, 0x24, 0xd1, 0x58, 0x37, 0xde, 0x77, 0x0);
typedef struct _D3DAUTHENTICATEDCHANNEL_CONFIGURECRYPTOSESSION
{
    D3DAUTHENTICATEDCHANNEL_CONFIGURE_INPUT   Parameters;
    HANDLE      DXVA2DecodeHandle;
    HANDLE      CryptoSessionHandle;
    HANDLE      DeviceHandle;
} D3DAUTHENTICATEDCHANNEL_CONFIGURECRYPTOSESSION;
DEFINE_GUID(D3DAUTHENTICATEDCONFIGURE_SHAREDRESOURCE, 0x772d047, 0x1b40, 0x48e8, 0x9c, 0xa6, 0xb5, 0xf5, 0x10, 0xde, 0x9f, 0x1);
typedef struct _D3DAUTHENTICATEDCHANNEL_CONFIGURESHAREDRESOURCE
{
    D3DAUTHENTICATEDCHANNEL_CONFIGURE_INPUT       Parameters;
    D3DAUTHENTICATEDCHANNEL_PROCESSIDENTIFIERTYPE ProcessIdentiferType;
    HANDLE                                        ProcessHandle;
    BOOL                                          AllowAccess;
} D3DAUTHENTICATEDCHANNEL_CONFIGURESHAREDRESOURCE;
DEFINE_GUID(D3DAUTHENTICATEDCONFIGURE_ENCRYPTIONWHENACCESSIBLE, 0x41fff286, 0x6ae0, 0x4d43, 0x9d, 0x55, 0xa4, 0x6e, 0x9e, 0xfd, 0x15, 0x8a);
typedef struct _D3DAUTHENTICATEDCHANNEL_CONFIGUREUNCOMPRESSEDENCRYPTION
{
    D3DAUTHENTICATEDCHANNEL_CONFIGURE_INPUT   Parameters;
    GUID                                      EncryptionGuid;
} D3DAUTHENTICATEDCHANNEL_CONFIGUREUNCOMPRESSEDENCRYPTION;
typedef struct _D3DENCRYPTED_BLOCK_INFO
{
    UINT NumEncryptedBytesAtBeginning;
    UINT NumBytesInSkipPattern;
    UINT NumBytesInEncryptPattern;
} D3DENCRYPTED_BLOCK_INFO;
typedef struct _D3DAES_CTR_IV
{
    UINT64   IV;
    UINT64   Count;
} D3DAES_CTR_IV;
#endif
#pragma pack()
#endif
#endif
