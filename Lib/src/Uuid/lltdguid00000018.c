// Created file "Lib\src\Uuid\lltdguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_LLTD_PROP_WIRELESSMODE, 0x7d0b1df1, 0xdde1, 0x4f21, 0xa2, 0x45, 0xd3, 0x8b, 0x29, 0x5b, 0x69, 0xae);

