// Created file "Lib\src\dxguid\X64\d3dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DXFILEOBJ_PMAttributeRange, 0x917e0427, 0xc61e, 0x4a14, 0x9c, 0x64, 0xaf, 0xe6, 0x5f, 0x9e, 0x98, 0x44);

