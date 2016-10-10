// Created file "Lib\src\Uuid\X64\alg_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDataChannel, 0xad42d12a, 0x4ad0, 0x4856, 0x91, 0x9e, 0xe8, 0x54, 0xc9, 0x1d, 0x18, 0x56);

