// Created file "Lib\src\Uuid\iaccess_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAccessControl, 0xeedd23e0, 0x8410, 0x11ce, 0xa1, 0xc3, 0x08, 0x00, 0x2b, 0x2b, 0x8d, 0x8f);

