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

DEFINE_GUID(GUID_BATTERY_DISCHARGE_ACTION_3, 0x80472613, 0x9780, 0x455e, 0xb3, 0x08, 0x72, 0xd3, 0x00, 0x3c, 0xf2, 0xf8);

