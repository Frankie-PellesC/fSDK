// Created file "Lib\src\Uuid\cguid_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DEVCLASS_FSFILTER_REPLICATION, 0x48d3ebc4, 0x4cf8, 0x48ff, 0xb8, 0x69, 0x9c, 0x68, 0xad, 0x42, 0xeb, 0x9f);

