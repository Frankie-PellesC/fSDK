// Created file "Lib\src\Uuid\ciintf_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICiCDocNameToWorkidTranslatorEx, 0x7bba76e6, 0xa0e3, 0x11d2, 0xbc, 0x5d, 0x00, 0xc0, 0x4f, 0xa3, 0x54, 0xba);

