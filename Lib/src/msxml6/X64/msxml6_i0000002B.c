// Created file "Lib\src\msxml6\X64\msxml6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IVBSAXEntityResolver, 0x0c05d096, 0xf45b, 0x4aca, 0xad, 0x1a, 0xaa, 0x0b, 0xc2, 0x55, 0x18, 0xdc);

