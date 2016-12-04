// Created file "tmp\src\dxguid\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CDirect3DRMMeshInterpolator, 0x0de9eaa3, 0x3b84, 0x11d0, 0x9b, 0x6d, 0x00, 0x00, 0xc0, 0x78, 0x1b, 0xc3);

