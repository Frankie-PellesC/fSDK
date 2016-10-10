// Created file "Lib\src\Uuid\X64\msnpiid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(NPI_NETWORK_LAYER_ID, 0x2227e802, 0x8d8b, 0x11d4, 0xab, 0xad, 0x00, 0x90, 0x27, 0x71, 0x9e, 0x09);

