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

DEFINE_GUID(GUID_NDIS_TCP_CONNECTION_OFFLOAD_CURRENT_CONFIG, 0x2ee6aef1, 0x0851, 0x458b, 0xbf, 0x0d, 0x79, 0x23, 0x43, 0xd1, 0xcd, 0xe1);

