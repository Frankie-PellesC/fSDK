// Created file "Lib\src\format\X64\format"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_Cor, 0xbee00010, 0xee77, 0x11d0, 0xa0, 0x15, 0x00, 0xc0, 0x4f, 0xbb, 0xb8, 0x84);

