// Created file "Lib\src\Svcguid\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITxProxyHolder, 0x13d86f31, 0x0139, 0x41af, 0xbc, 0xad, 0xc7, 0xd5, 0x04, 0x35, 0xfe, 0x9f);

