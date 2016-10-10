// Created file "Lib\src\Uuid\X64\upnp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUPnPDevice, 0x3d44d0d1, 0x98c9, 0x4889, 0xac, 0xd1, 0xf9, 0xd6, 0x74, 0xbf, 0x22, 0x21);

