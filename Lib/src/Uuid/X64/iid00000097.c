// Created file "Lib\src\Uuid\X64\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IServiceTransactionConfig, 0x59f4c2a3, 0xd3d7, 0x4a31, 0xb6, 0xe4, 0x6a, 0xb3, 0x17, 0x7c, 0x50, 0xb9);

