// Created file "Lib\src\Uuid\sdoias_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITemplateSdo, 0x8aa85302, 0xd2e2, 0x4e20, 0x8b, 0x1f, 0xa5, 0x71, 0xe4, 0x37, 0xd6, 0xc9);

