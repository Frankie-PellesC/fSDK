// Created file "Lib\src\Uuid\X64\propkeys"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_BATTERY_DISCHARGE_LEVEL_2, 0x07a07ca2, 0xadaf, 0x40d7, 0xb0, 0x77, 0x53, 0x3a, 0xad, 0xed, 0x1b, 0xfa);

