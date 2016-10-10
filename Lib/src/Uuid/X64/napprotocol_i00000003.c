// Created file "Lib\src\Uuid\X64\napprotocol_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INapSoHConstructor, 0x35298344, 0x96a6, 0x45e7, 0x9b, 0x6b, 0x62, 0xec, 0xc6, 0xe0, 0x99, 0x20);

