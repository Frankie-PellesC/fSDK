// Created file "Lib\src\Uuid\alg_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IApplicationGateway, 0x5134842b, 0xfdce, 0x485d, 0x93, 0xcd, 0xde, 0x16, 0x40, 0x64, 0x3b, 0xbe);

