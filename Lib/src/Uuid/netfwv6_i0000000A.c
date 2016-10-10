// Created file "Lib\src\Uuid\netfwv6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetFwV6PortsCollection, 0x43287ac8, 0xf5ab, 0x498b, 0xa4, 0x55, 0x74, 0xdc, 0x84, 0x75, 0x0c, 0x49);

