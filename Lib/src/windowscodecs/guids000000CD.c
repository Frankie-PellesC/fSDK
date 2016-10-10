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

DEFINE_GUID(IID_IMILPalette, 0xca8e206f, 0xf22c, 0x4af7, 0x6f, 0xba, 0x7b, 0xed, 0x5e, 0xb1, 0xc9, 0x2f);

