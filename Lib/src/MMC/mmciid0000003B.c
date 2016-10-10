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

DEFINE_GUID(IID__EventConnector, 0xc0bccd30, 0xde44, 0x4528, 0x84, 0x03, 0xa0, 0x5a, 0x6a, 0x1c, 0xc8, 0xea);

