// Created file "Lib\src\WS2_32\X64\indef"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(in4addr_alligmpv3routersonlink, 0x160000e0, 0x00e0, 0xfd00, 0xa9, 0xfe, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00);

