// Created file "Lib\src\ksuser\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(KSEVENTSETID_PinCapsChange, 0xdd4f192e, 0x3b78, 0x49ad, 0xa5, 0x34, 0x2c, 0x31, 0x5b, 0x82, 0x20, 0x00);

