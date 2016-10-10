// Created file "Lib\src\certidl\certexit_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICertExit, 0xe19ae1a0, 0x7364, 0x11d0, 0x88, 0x16, 0x00, 0xa0, 0xc9, 0x03, 0xb8, 0x3c);

DEFINE_GUID(IID_ICertExit2, 0x0abf484b, 0xd049, 0x464d, 0xa7, 0xed, 0x55, 0x2e, 0x75, 0x29, 0xb0, 0xff);

