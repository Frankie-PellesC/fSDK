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

DEFINE_GUID(IID_IStringTablePrivate, 0x461a6010, 0x0f9e, 0x11d2, 0xa6, 0xa1, 0x00, 0x00, 0xf8, 0x75, 0xa9, 0xce);

