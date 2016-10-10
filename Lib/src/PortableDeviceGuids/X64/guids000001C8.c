// Created file "Lib\src\PortableDeviceGuids\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WPD_NETWORK_ASSOCIATION_X509V3SEQUENCE, 0xe4c93c1f, 0xb203, 0x43f1, 0xa1, 0x00, 0x5a, 0x07, 0xd1, 0x1b, 0x02, 0x74);

