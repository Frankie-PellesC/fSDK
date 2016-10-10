// Created file "Lib\src\Uuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_FUNCTIONAL_CATEGORY_NETWORK_CONFIGURATION, 0x48f4db72, 0x7c6a, 0x4ab0, 0x9e, 0x1a, 0x47, 0x0e, 0x3c, 0xdb, 0xf2, 0x6a);

