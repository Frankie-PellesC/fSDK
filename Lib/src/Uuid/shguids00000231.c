// Created file "Lib\src\Uuid\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IInitializeWithItemArrayAndGPSFlags, 0x8c59322f, 0xf915, 0x4757, 0x99, 0x25, 0x4f, 0xb4, 0xdf, 0x1d, 0xd7, 0xd7);

