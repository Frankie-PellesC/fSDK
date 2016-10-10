// Created file "Lib\src\Uuid\netprov_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_NETPROVLib, 0x789ed9b3, 0x4873, 0x49b9, 0x87, 0xe0, 0x55, 0xf5, 0x1f, 0xcd, 0x54, 0x20);

