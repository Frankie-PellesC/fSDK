// Created file "Lib\src\Uuid\netfw_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_NetFwAuthorizedApplication, 0xec9846b3, 0x2762, 0x4a6b, 0xa2, 0x14, 0x6a, 0xcb, 0x60, 0x34, 0x62, 0xd2);

