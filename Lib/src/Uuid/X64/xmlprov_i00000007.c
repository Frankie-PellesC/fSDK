// Created file "Lib\src\Uuid\X64\xmlprov_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_XMLPROVLib, 0x8ac32abb, 0xb8cd, 0x4c1e, 0xbc, 0x55, 0x0f, 0x15, 0x33, 0x68, 0xec, 0xaf);

