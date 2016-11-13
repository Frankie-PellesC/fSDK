// Created file "Lib\src\dxguid\d3dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(D3DCRYPTOTYPE_PROPRIETARY, 0xab4e9afd, 0x1d1c, 0x46e6, 0xa7, 0x2f, 0x08, 0x69, 0x91, 0x7b, 0x0d, 0xe8);

