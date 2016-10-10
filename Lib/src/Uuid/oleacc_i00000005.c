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

DEFINE_GUID(IID_IAccIdentity, 0x7852b78d, 0x1cfd, 0x41c1, 0xa6, 0x15, 0x9c, 0x0c, 0x85, 0x96, 0x0b, 0x5f);

