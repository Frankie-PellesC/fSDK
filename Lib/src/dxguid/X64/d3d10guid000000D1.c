// Created file "Lib\src\dxguid\X64\d3d10guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ID3DX10SPMesh, 0x667ea4c7, 0xf1cd, 0x4386, 0xb5, 0x23, 0x7c, 0x02, 0x90, 0xb8, 0x3c, 0xc5);

