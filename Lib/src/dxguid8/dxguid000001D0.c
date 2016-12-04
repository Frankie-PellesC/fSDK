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

DEFINE_GUID(IID_ID3DXBaseMesh, 0xa69ba991, 0x1f7d, 0x11d3, 0xb9, 0x29, 0x00, 0xc0, 0x4f, 0x68, 0xdc, 0x23);

