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

DEFINE_GUID(PINNAME_SPDIF_OUT, 0x3a264481, 0xe52c, 0x4b82, 0x8e, 0x7a, 0xc8, 0xe2, 0xf9, 0x1d, 0xc3, 0x80);

