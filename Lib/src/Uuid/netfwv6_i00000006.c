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

DEFINE_GUID(IID_IEnumNetFwV6Connections, 0x05a800ca, 0x317f, 0x4608, 0x92, 0x74, 0x43, 0xd9, 0x7d, 0x39, 0x24, 0xf5);

