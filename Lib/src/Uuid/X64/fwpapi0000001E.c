// Created file "Lib\src\Uuid\X64\fwpapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FWPM_LAYER_DATAGRAM_DATA_V6_DISCARD, 0x09d1dfe1, 0x9b86, 0x4a42, 0xbe, 0x9d, 0x8c, 0x31, 0x5b, 0x92, 0xa5, 0xd0);

