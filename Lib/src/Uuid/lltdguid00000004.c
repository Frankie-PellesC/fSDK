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

DEFINE_GUID(GUID_LLTD_PROP_80211MEDIUM, 0x7d5ba9f6, 0x5cc2, 0x454b, 0x86, 0xcb, 0x1e, 0xc1, 0xf2, 0x1f, 0x9d, 0x2f);

