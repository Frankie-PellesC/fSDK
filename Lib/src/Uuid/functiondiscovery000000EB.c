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

DEFINE_GUID(PKEY_DeviceInterfaceClass_DefaultInterface, 0x14c83a99, 0x0b3f, 0x44b7, 0xbe, 0x4c, 0xa1, 0x78, 0xd3, 0x99, 0x05, 0x64);

