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

DEFINE_GUID(IID_ITAMMediaFormat, 0x0364eb00, 0x4a77, 0x11d1, 0xa6, 0x71, 0x00, 0x60, 0x97, 0xc9, 0xa2, 0xe8);

