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

DEFINE_GUID(SID_FunctionDiscoveryProviderRefresh, 0x2b4cbdc9, 0x31c4, 0x40d4, 0xa6, 0x2d, 0x77, 0x2a, 0xa1, 0x74, 0xed, 0x52);

