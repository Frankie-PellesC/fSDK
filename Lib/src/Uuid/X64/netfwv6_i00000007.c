// Created file "Lib\src\Uuid\X64\netfwv6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IEnumNetFwV6Ports, 0x1901ccc7, 0xa8ce, 0x4207, 0xbe, 0x51, 0xe3, 0x43, 0x41, 0x9d, 0xef, 0x19);

