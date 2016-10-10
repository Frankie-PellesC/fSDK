// Created file "Lib\src\Uuid\X64\napsystemhealthvalidator_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_AsyncINapSystemHealthValidator, 0x2516031a, 0xa391, 0x454d, 0xb5, 0x3d, 0xc5, 0xdc, 0x84, 0xc7, 0xf2, 0xdb);

