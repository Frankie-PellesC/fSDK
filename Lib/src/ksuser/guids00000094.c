// Created file "Lib\src\ksuser\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(KSCATEGORY_REALTIME, 0xeb115ffc, 0x10c8, 0x4964, 0x83, 0x1d, 0x6d, 0xcb, 0x02, 0xe6, 0xf2, 0x3f);

