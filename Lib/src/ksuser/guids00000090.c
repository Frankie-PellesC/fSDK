// Created file "Lib\src\ksuser\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PINNAME_DISPLAYPORT_OUT, 0x21fbb329, 0x1a4a, 0x48da, 0xa0, 0x76, 0x23, 0x18, 0xa3, 0xc5, 0x9b, 0x26);

