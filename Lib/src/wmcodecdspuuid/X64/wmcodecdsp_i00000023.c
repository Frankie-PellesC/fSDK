// Created file "Lib\src\wmcodecdspuuid\X64\wmcodecdsp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CMpeg4sEncMediaObject, 0x6ec5a7be, 0xd81e, 0x4f9e, 0xad, 0xa3, 0xcd, 0x1b, 0xf2, 0x62, 0xb6, 0xd8);

