// Created file "Lib\src\Uuid\propkeys"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Computer_Workgroup, 0x5cde9f0e, 0x1de4, 0x4453, 0x96, 0xa9, 0x56, 0xe8, 0x83, 0x2e, 0xfa, 0x3d);

