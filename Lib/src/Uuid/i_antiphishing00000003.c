// Created file "Lib\src\Uuid\i_antiphishing"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAntiPhishingResult, 0x1ec4f3c6, 0x2fec, 0x4f6e, 0xb4, 0xc2, 0x72, 0x76, 0x68, 0x52, 0x2c, 0x3a);

