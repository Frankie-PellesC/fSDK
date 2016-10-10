// Created file "Lib\src\wmcodecdspuuid\wmcodecdsp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CMSSCEncMediaObject2, 0xf7ffe0a0, 0xa4f5, 0x44b5, 0x94, 0x9e, 0x15, 0xed, 0x2b, 0xc6, 0x6f, 0x9d);

