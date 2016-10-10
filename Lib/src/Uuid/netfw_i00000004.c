// Created file "Lib\src\Uuid\netfw_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetFwIcmpSettings, 0xa6207b2e, 0x7cdd, 0x426a, 0x95, 0x1e, 0x5e, 0x1c, 0xbc, 0x5a, 0xfe, 0xad);

