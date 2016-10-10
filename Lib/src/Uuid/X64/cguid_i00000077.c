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

DEFINE_GUID(GUID_DEVCLASS_ENUM1394, 0xc459df55, 0xdb08, 0x11d1, 0xb0, 0x09, 0x00, 0xa0, 0xc9, 0x08, 0x1f, 0xf6);

