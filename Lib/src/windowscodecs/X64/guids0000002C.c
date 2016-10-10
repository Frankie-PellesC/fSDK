// Created file "Lib\src\windowscodecs\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ID3D10Effect, 0x51b0ca8b, 0xec0b, 0x4519, 0x87, 0x0d, 0x8e, 0xe1, 0xcb, 0x50, 0x17, 0xc7);

