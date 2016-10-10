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

DEFINE_GUID(GUID_NDIS_TCP_CONNECTION_OFFLOAD_HARDWARE_CAPABILITIES, 0x8ce71f2c, 0xd63a, 0x4390, 0xa4, 0x87, 0x18, 0xfa, 0x47, 0x26, 0x2c, 0xeb);

