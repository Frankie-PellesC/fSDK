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

DEFINE_GUID(IID_IXFeedItem2, 0x6cda2dc7, 0x9013, 0x4522, 0x99, 0x70, 0x2a, 0x9d, 0xd9, 0xea, 0xd5, 0xa3);

