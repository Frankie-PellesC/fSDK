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

DEFINE_GUID(GUID_NDIS_STATUS_TCP_CONNECTION_OFFLOAD_CURRENT_CONFIG, 0xf8edaeff, 0x24e4, 0x4ae6, 0xa4, 0x13, 0x0b, 0x27, 0xf7, 0x6b, 0x24, 0x3d);

