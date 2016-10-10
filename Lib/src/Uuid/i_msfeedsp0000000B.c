// Created file "Lib\src\Uuid\i_msfeedsp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFeedRequestCallback, 0xf847e090, 0x32df, 0x464a, 0x8c, 0x03, 0xde, 0xcb, 0xa6, 0xad, 0x67, 0xaf);

