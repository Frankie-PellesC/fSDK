// Created file "Lib\src\Uuid\natupnp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INATExternalIPAddressCallback, 0x9c416740, 0xa34e, 0x446f, 0xba, 0x06, 0xab, 0xd0, 0x4c, 0x31, 0x49, 0xae);

