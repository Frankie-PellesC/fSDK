// Created file "Lib\src\locationapi\X64\locationapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_BATTERY_DISCHARGE_ACTION_2, 0x421cba38, 0x1a8e, 0x4881, 0xac, 0x89, 0xe3, 0x3a, 0x8b, 0x04, 0xec, 0xe4);

