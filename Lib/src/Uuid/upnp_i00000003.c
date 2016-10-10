// Created file "Lib\src\Uuid\upnp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUPnPDeviceFinder, 0xadda3d55, 0x6f72, 0x4319, 0xbf, 0xf9, 0x18, 0x60, 0x0a, 0x53, 0x9b, 0x10);

