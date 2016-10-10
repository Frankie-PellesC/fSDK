// Created file "Lib\src\Uuid\X64\rtccore_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRTCBuddy2, 0x102f9588, 0x23e7, 0x40e3, 0x95, 0x4d, 0xcd, 0x7a, 0x1d, 0x5c, 0x03, 0x61);

