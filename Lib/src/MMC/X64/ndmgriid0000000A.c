// Created file "Lib\src\MMC\X64\ndmgriid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_TaskSymbol, 0x44f9a03b, 0xa3ec, 0x4f3b, 0x93, 0x64, 0x08, 0xe0, 0x00, 0x7f, 0x21, 0xdf);

