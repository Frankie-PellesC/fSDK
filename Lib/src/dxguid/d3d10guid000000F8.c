// Created file "Lib\src\dxguid\d3d10guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ID3D11ShaderReflectionVariable, 0x51f23923, 0xf3e5, 0x4bd1, 0x91, 0xcb, 0x60, 0x61, 0x77, 0xd8, 0xdb, 0x4c);

