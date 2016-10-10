// Created file "Lib\src\Uuid\X64\sdoias_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_SdoMachine, 0xe9218ae7, 0x9e91, 0x11d1, 0xbf, 0x60, 0x00, 0x80, 0xc7, 0x84, 0x6b, 0xc0);

