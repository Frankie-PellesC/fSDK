// Created file "Lib\src\Uuid\functiondiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_DeviceClass_UpperFilters, 0x4321918b, 0xf69e, 0x470d, 0xa5, 0xde, 0x4d, 0x88, 0xc7, 0x5a, 0xd2, 0x4b);

