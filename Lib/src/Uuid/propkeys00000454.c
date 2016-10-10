// Created file "Lib\src\Uuid\propkeys"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Software_RegisteredCompany, 0x841e4f90, 0xff59, 0x4d16, 0x89, 0x47, 0xe8, 0x1b, 0xbf, 0xfa, 0xb3, 0x6d);

