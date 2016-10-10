// Created file "Lib\src\MMC\mmciid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_ExecutivePlatform, 0xb3fd5602, 0xeb0f, 0x415e, 0x9f, 0x32, 0x75, 0xda, 0x39, 0x1d, 0x6b, 0xf9);

