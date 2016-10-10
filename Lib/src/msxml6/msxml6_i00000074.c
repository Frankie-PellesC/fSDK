// Created file "Lib\src\msxml6\msxml6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_MXXMLWriter, 0xfc220ad8, 0xa72a, 0x4ee8, 0x92, 0x6e, 0x0b, 0x7a, 0xd1, 0x52, 0xa0, 0x20);

