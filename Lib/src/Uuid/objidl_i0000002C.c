// Created file "Lib\src\Uuid\objidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRpcProxyBuffer, 0xd5f56a34, 0x593b, 0x101a, 0xb5, 0x69, 0x08, 0x00, 0x2b, 0x2d, 0xbf, 0x7a);

