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

DEFINE_GUID(IID_INetFwV6Port, 0xfd695182, 0xb9ff, 0x4224, 0xb5, 0x5f, 0x67, 0x74, 0xcc, 0x4c, 0xdb, 0x38);

