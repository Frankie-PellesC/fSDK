// Created file "Lib\src\MMC\ndmgriid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_MMCProtocol, 0x3c5f432a, 0xef40, 0x4669, 0x99, 0x74, 0x96, 0x71, 0xd4, 0xfc, 0x2e, 0x12);

