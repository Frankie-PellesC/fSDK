// Created file "Lib\src\Uuid\ddores_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDDOResourceInfo, 0x03e05342, 0x07f2, 0x4dee, 0x98, 0xf7, 0xc4, 0xec, 0x68, 0x37, 0x0c, 0xf4);

DEFINE_GUID(LIBID_DDOResLib, 0x587a4d7d, 0x27eb, 0x44e7, 0x8e, 0xe4, 0x1e, 0xf5, 0x5c, 0xfa, 0x00, 0x11);

DEFINE_GUID(CLSID_DDOResources, 0xd2e86c4f, 0xea06, 0x4a89, 0xbf, 0x00, 0xb4, 0x97, 0x06, 0xdb, 0x46, 0xe6);

