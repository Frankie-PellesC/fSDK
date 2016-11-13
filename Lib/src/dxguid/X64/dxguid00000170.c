// Created file "Lib\src\dxguid\X64\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_6a93130e_1d53_41d1_a9cf_e758800bb179, 0x6a93130e, 0x1d53, 0x41d1, 0xa9, 0xcf, 0xe7, 0x58, 0x80, 0x0b, 0xb1, 0x79);

