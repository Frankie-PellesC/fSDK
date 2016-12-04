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

DEFINE_GUID(KSDATAFORMAT_SUBTYPE_DIRECTMUSIC, 0x1a82f8bc, 0x3f8b, 0x11d2, 0xb7, 0x74, 0x00, 0x60, 0x08, 0x33, 0x16, 0xc1);

