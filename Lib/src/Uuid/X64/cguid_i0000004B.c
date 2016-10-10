// Created file "Lib\src\Uuid\X64\cguid_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_XSIZE, 0x66504308, 0xbe0f, 0x101a, 0x8b, 0xbb, 0x00, 0xaa, 0x00, 0x30, 0x0c, 0xab);

