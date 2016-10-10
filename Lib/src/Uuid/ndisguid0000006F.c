// Created file "Lib\src\Uuid\ndisguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_NDIS_802_3_XMIT_ONE_COLLISION, 0x44795705, 0xa61b, 0x11d0, 0x8d, 0xd4, 0x00, 0xc0, 0x4f, 0xc3, 0x35, 0x8c);

