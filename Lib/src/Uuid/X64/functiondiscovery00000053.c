// Created file "Lib\src\Uuid\X64\functiondiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_DECREASE_THRESHOLD, 0x68dd2f27, 0xa4ce, 0x4e11, 0x84, 0x87, 0x37, 0x94, 0xe4, 0x13, 0x5d, 0xfa);

