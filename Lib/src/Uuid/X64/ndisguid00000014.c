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

DEFINE_GUID(GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX, 0x4159353c, 0x5cd7, 0x42ce, 0x8f, 0xe4, 0xa4, 0x5a, 0x23, 0x80, 0xcc, 0x4f);

