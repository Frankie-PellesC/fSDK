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

DEFINE_GUID(CLSID_MMCDocConfig, 0xf1e752c3, 0xfd72, 0x11d0, 0xae, 0xf6, 0x00, 0xc0, 0x4f, 0xb6, 0xdd, 0x2c);

