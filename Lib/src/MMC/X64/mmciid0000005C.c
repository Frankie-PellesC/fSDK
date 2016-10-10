// Created file "Lib\src\MMC\X64\mmciid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFormViewAccessibility, 0x0e693927, 0xc23f, 0x41b0, 0x95, 0x19, 0xd9, 0x30, 0x57, 0x25, 0x47, 0xb2);

