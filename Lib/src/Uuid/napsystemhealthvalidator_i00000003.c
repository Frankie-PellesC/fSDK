// Created file "Lib\src\Uuid\napsystemhealthvalidator_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapSystemHealthValidator, 0xef43d87c, 0x5b6d, 0x4820, 0x86, 0x20, 0x86, 0x89, 0x07, 0xfe, 0x07, 0xd3);

