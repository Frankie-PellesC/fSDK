// Created file "Lib\src\Uuid\X64\i_msfeeds"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXFeed, 0xa44179a4, 0xe0f6, 0x403b, 0xaf, 0x8d, 0xd0, 0x80, 0xf4, 0x25, 0xa4, 0x51);

