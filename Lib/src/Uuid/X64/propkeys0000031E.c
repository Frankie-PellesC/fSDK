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

DEFINE_GUID(PKEY_ActiveDirectory_Type, 0x817a4013, 0x3f04, 0x4d5c, 0xbd, 0xc7, 0x0e, 0x8e, 0x07, 0x88, 0x89, 0xf4);

