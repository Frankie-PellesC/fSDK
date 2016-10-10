// Created file "Lib\src\dmoguids\dmoguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_BATTERY_DISCHARGE_ACTION_0, 0x637ea02f, 0xbbcb, 0x4015, 0x8e, 0x2c, 0xa1, 0xc7, 0xb9, 0xc0, 0xb5, 0x46);

