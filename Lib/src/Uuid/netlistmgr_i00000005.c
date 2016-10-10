// Created file "Lib\src\Uuid\netlistmgr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetwork, 0xdcb00002, 0x570f, 0x4a9b, 0x8d, 0x69, 0x19, 0x9f, 0xdb, 0xa5, 0x72, 0x3b);

