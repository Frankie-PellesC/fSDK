// Created file "Lib\src\Uuid\oleacc_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IAccPropServer, 0x76c0dbbb, 0x15e0, 0x4e7b, 0xb6, 0x1b, 0x20, 0xee, 0xea, 0x20, 0x01, 0xe0);

