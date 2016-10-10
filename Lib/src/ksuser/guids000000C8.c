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

DEFINE_GUID(KSNODETYPE_PARAMETRIC_EQUALIZER, 0x19bb3a6a, 0xce2b, 0x4442, 0x87, 0xec, 0x67, 0x27, 0xc3, 0xca, 0xb4, 0x77);

