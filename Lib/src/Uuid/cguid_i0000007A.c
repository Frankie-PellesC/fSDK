// Created file "Lib\src\Uuid\cguid_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DEVCLASS_GPS, 0x6bdd1fc3, 0x810f, 0x11d0, 0xbe, 0xc7, 0x08, 0x00, 0x2b, 0xe2, 0x09, 0x2f);

