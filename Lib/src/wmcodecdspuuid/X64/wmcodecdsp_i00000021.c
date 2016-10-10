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

DEFINE_GUID(CLSID_CZuneM4S2DecMediaObject, 0xc56fc25c, 0x0fc6, 0x404a, 0x95, 0x03, 0xb1, 0x0b, 0xf5, 0x1a, 0x8a, 0xb9);

