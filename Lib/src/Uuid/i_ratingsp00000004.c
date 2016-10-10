// Created file "Lib\src\Uuid\i_ratingsp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICustomRatingHelper, 0xd0d9842d, 0xe211, 0x4b2c, 0x88, 0xdc, 0xbc, 0x72, 0x93, 0x42, 0xdf, 0xcb);

