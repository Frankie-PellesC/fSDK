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

DEFINE_GUID(CLSID_CPK_DS_AC3Decoder, 0x6c9c69d6, 0x0ffc, 0x4481, 0xaf, 0xdb, 0xcd, 0xf1, 0xc7, 0x9c, 0x6f, 0x3e);

