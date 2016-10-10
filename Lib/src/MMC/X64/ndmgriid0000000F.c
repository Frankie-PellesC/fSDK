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

DEFINE_GUID(CLSID_HHCollectionWrapper, 0x06a03425, 0xc9eb, 0x11d2, 0x8c, 0xaa, 0x00, 0x80, 0xc7, 0x39, 0xe3, 0xe0);

