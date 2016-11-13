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

DEFINE_GUID(DXFILEOBJ_CompressedAnimationSet, 0x7f9b00b3, 0xf125, 0x4890, 0x87, 0x6e, 0x1c, 0x42, 0xbf, 0x69, 0x7c, 0x4d);

