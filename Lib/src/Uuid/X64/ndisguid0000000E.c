// Created file "Lib\src\Uuid\X64\ndisguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY, 0xa14f1c97, 0x8839, 0x4f8a, 0x99, 0x96, 0xa2, 0x89, 0x96, 0xeb, 0xbf, 0x1d);

