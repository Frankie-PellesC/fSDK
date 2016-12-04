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

DEFINE_GUID(TID_D3DRMMeshFaceWraps, 0xed1ec5c0, 0xc0a8, 0x11d0, 0x94, 0x1c, 0x00, 0x80, 0xc8, 0x0c, 0xfa, 0x7b);

