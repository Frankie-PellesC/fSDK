// Created file "Lib\src\Uuid\X64\netcfgp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetCfgComponentReadOnly, 0xbb4b43cb, 0x7ee8, 0x46d2, 0xa6, 0xef, 0x22, 0x48, 0x8c, 0x29, 0x39, 0xe4);

