// Created file "Lib\src\mbnapi_uuid\mbnapi_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_MbnConnectionManager, 0xbdfee05c, 0x4418, 0x11dd, 0x90, 0xed, 0x00, 0x1c, 0x25, 0x7c, 0xcf, 0xf1);

