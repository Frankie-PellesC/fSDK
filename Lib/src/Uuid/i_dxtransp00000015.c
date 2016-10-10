// Created file "Lib\src\Uuid\i_dxtransp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_DXTFilterCollection, 0xa7ee7f34, 0x3bd1, 0x427f, 0x92, 0x31, 0xf9, 0x41, 0xe9, 0xb7, 0xe1, 0xfe);

