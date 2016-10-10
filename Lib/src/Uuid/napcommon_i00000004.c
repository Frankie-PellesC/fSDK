// Created file "Lib\src\Uuid\napcommon_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapComponentConfig, 0xa9e0af1a, 0x3713, 0x478e, 0xae, 0x03, 0x8e, 0xdd, 0x27, 0x2d, 0x21, 0xfa);

