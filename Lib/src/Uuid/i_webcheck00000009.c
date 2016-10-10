// Created file "Lib\src\Uuid\i_webcheck"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_WebCheck, 0xef4d1e1a, 0x1c87, 0x4aa8, 0x89, 0x34, 0xe6, 0x8e, 0x43, 0x67, 0x46, 0x8d);

