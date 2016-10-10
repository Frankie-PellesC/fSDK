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

DEFINE_GUID(CLSID_NetFirewallV6Manager, 0x03707315, 0x53e9, 0x4b84, 0x82, 0xb2, 0xf0, 0x90, 0x25, 0xca, 0xd2, 0x07);

