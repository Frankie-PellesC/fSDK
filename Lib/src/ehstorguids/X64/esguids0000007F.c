// Created file "Lib\src\ehstorguids\X64\esguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FIREWALL_PORT_CLOSE_GUID, 0xa144ed38, 0x8e12, 0x4de4, 0x9d, 0x96, 0xe6, 0x47, 0x40, 0xb1, 0xa5, 0x24);

