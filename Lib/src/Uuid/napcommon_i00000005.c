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

DEFINE_GUID(IID_INapComponentConfig2, 0x47cbdb9e, 0x1972, 0x4f5e, 0xbd, 0x3c, 0x5e, 0xb6, 0x23, 0x06, 0x14, 0xb5);

