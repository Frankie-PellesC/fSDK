// Created file "Lib\src\MMC\ndmgrpriv"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IScopeDataPrivate, 0x60bd2fe0, 0xf7c5, 0x11cf, 0x8a, 0xfd, 0x00, 0xaa, 0x00, 0x3c, 0xa9, 0xf6);

