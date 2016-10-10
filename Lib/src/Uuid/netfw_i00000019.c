// Created file "Lib\src\Uuid\netfw_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_NetFwPolicy2, 0xe2b3c97f, 0x6ae1, 0x41ac, 0x81, 0x7a, 0xf6, 0xf9, 0x21, 0x66, 0xd7, 0xdd);

