// Created file "Lib\src\windowscodecs\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ID3D10EffectDepthStencilVariable, 0xaf482368, 0x330a, 0x46a5, 0x9a, 0x5c, 0x01, 0xc7, 0x1a, 0xf2, 0x4c, 0x8d);

