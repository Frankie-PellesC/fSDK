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

DEFINE_GUID(IID_IUPnPDeviceFinderCallback, 0x415a984a, 0x88b3, 0x49f3, 0x92, 0xaf, 0x05, 0x08, 0xbe, 0xdf, 0x0d, 0x6c);

