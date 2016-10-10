// Created file "Lib\src\Uuid\i_msfeeds"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFeed2, 0x33f2ea09, 0x1398, 0x4ab9, 0xb6, 0xa4, 0xf9, 0x4b, 0x49, 0xd0, 0xa4, 0x2e);

