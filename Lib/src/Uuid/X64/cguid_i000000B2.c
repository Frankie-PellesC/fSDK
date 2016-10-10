// Created file "Lib\src\Uuid\X64\cguid_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DEVCLASS_FSFILTER_SECURITYENHANCER, 0xd02bc3da, 0x0c8e, 0x4945, 0x9b, 0xd5, 0xf1, 0x88, 0x3c, 0x22, 0x6c, 0x8c);

