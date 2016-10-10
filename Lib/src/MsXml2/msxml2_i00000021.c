// Created file "Lib\src\MsXml2\msxml2_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISAXEntityResolver, 0x99bca7bd, 0xe8c4, 0x4d5f, 0xa0, 0xcf, 0x6d, 0x90, 0x79, 0x01, 0xff, 0x07);

