// Created file "Lib\src\PortableDeviceGuids\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DEVINTERFACE_STORAGEPORT, 0x2accfe60, 0xc130, 0x11d2, 0xb0, 0x82, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);

