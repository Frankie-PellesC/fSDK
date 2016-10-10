// Created file "Lib\src\format\format"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MetaDataLinkerOptions, 0x47e099b6, 0xae7c, 0x4797, 0x83, 0x17, 0xb4, 0x8a, 0xa6, 0x45, 0xb8, 0xf9);

