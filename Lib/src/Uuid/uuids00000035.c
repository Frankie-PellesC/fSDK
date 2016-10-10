// Created file "Lib\src\Uuid\uuids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_BATTERY_DISCHARGE_ACTION_1, 0xd8742dcb, 0x3e6a, 0x4b3c, 0xb3, 0xfe, 0x37, 0x46, 0x23, 0xcd, 0xcf, 0x06);

