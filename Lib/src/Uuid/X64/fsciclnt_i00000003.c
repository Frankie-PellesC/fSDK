// Created file "Lib\src\Uuid\X64\fsciclnt_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFsCiAdmin, 0x75398c30, 0x7a26, 0x11d0, 0xa8, 0x0a, 0x00, 0xa0, 0xc9, 0x06, 0x24, 0x1a);

