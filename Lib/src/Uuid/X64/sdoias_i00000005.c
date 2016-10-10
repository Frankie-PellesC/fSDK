// Created file "Lib\src\Uuid\X64\sdoias_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISdoMachine2, 0x518e5ffe, 0xd8ce, 0x4f7e, 0xa5, 0xdb, 0xb4, 0x0a, 0x35, 0x41, 0x9d, 0x3b);

