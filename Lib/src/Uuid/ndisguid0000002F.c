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

DEFINE_GUID(GUID_NDIS_TCP_OFFLOAD_HARDWARE_CAPABILITIES, 0xcd5f1102, 0x590f, 0x4ada, 0xab, 0x65, 0x5b, 0x31, 0xb1, 0xdc, 0x01, 0x72);

