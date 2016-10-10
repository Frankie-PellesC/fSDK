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

DEFINE_GUID(IID_IContextMenuPrivate, 0xd71d1f2a, 0x1ba2, 0x11d0, 0xa2, 0x9b, 0x00, 0xc0, 0x4f, 0xd9, 0x09, 0xee);

