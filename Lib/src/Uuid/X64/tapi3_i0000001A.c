// Created file "Lib\src\Uuid\X64\tapi3_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_TAPI, 0x21d6d48e, 0xa88b, 0x11d0, 0x83, 0xdd, 0x00, 0xaa, 0x00, 0x3c, 0xca, 0xbd);

