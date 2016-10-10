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

DEFINE_GUID(IID_ITitleView, 0xdca68d28, 0xeeb3, 0x11d2, 0x88, 0x3e, 0x00, 0xc0, 0x4f, 0x72, 0xc7, 0x17);

