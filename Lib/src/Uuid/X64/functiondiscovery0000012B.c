// Created file "Lib\src\Uuid\X64\functiondiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Device_BIOSVersion, 0xeaee7f1d, 0x6a33, 0x44d1, 0x94, 0x41, 0x5f, 0x46, 0xde, 0xf2, 0x31, 0x98);

