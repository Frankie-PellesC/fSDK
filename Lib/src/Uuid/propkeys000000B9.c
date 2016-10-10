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

DEFINE_GUID(PKEY_Contact_GenderValue, 0x3c8cee58, 0xd4f0, 0x4cf9, 0xb7, 0x56, 0x4e, 0x5d, 0x24, 0x44, 0x7b, 0xcd);

