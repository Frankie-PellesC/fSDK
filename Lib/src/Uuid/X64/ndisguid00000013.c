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

DEFINE_GUID(GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX, 0x2b440188, 0x92ac, 0x4f60, 0x9b, 0x2d, 0x20, 0xa3, 0x0c, 0xbb, 0x6b, 0xbe);

