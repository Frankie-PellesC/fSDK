// Created file "Lib\src\Uuid\X64\napclsids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_NapSoHProcessor, 0xaa160628, 0x8775, 0x46e3, 0x83, 0x7c, 0xf7, 0xa2, 0xae, 0x66, 0xe2, 0xf5);

