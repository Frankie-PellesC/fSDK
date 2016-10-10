// Created file "Lib\src\Uuid\functiondiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_VIDEO_POWERDOWN_TIMEOUT, 0x3c0bc021, 0xc8a8, 0x4e07, 0xa9, 0x73, 0x6b, 0x14, 0xcb, 0xcb, 0x2b, 0x7e);

