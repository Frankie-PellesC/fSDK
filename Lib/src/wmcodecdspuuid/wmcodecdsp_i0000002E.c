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

DEFINE_GUID(CLSID_CWMTEncMediaObject, 0x60b67652, 0xe46b, 0x4e44, 0x86, 0x09, 0xf7, 0x4b, 0xff, 0xdc, 0x08, 0x3c);

