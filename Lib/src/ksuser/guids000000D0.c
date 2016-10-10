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

DEFINE_GUID(KSNODETYPE_PROLOGIC_ENCODER, 0x8074c5b2, 0x3c66, 0x11d2, 0xb4, 0x5a, 0x30, 0x78, 0x30, 0x2c, 0x20, 0x30);

