// Created file "Lib\src\Uuid\X64\tapi3if_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITTerminalSupport2, 0xf3eb39bc, 0x1b1f, 0x4e99, 0xa0, 0xc0, 0x56, 0x30, 0x5c, 0x4d, 0xd5, 0x91);

