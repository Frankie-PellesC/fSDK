// Created file "Lib\src\Uuid\X64\propkeys"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_StructuredQuery_Virtual_MessageSize, 0xe9edd392, 0x0b4c, 0x4cf2, 0x82, 0xc0, 0xb0, 0xd1, 0x39, 0x66, 0x62, 0x45);

