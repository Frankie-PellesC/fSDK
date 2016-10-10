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

DEFINE_GUID(IID_ID3D10ShaderReflectionConstantBuffer, 0x66c66a94, 0xdddd, 0x4b62, 0xa6, 0x6a, 0xf0, 0xda, 0x33, 0xc2, 0xb4, 0xd0);

