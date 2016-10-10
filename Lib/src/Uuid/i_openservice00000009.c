// Created file "Lib\src\Uuid\i_openservice"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_OpenServiceActivityManager, 0xc5efd803, 0x50f8, 0x43cd, 0x9a, 0xb8, 0xaa, 0xfc, 0x13, 0x94, 0xc9, 0xe0);

