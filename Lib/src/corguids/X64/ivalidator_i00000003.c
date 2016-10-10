// Created file "Lib\src\corguids\X64\ivalidator_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IValidator, 0x63df8730, 0xdc81, 0x4062, 0x84, 0xa2, 0x1f, 0xf9, 0x43, 0xf5, 0x9f, 0xac);

DEFINE_GUID(IID_ICLRValidator, 0x63df8730, 0xdc81, 0x4062, 0x84, 0xa2, 0x1f, 0xf9, 0x43, 0xf5, 0x9f, 0xdd);

