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

DEFINE_GUID(GUID_DEVCLASS_FSFILTER_OPENFILEBACKUP, 0xf8ecafa6, 0x66d1, 0x41a5, 0x89, 0x9b, 0x66, 0x58, 0x5d, 0x72, 0x16, 0xb7);

