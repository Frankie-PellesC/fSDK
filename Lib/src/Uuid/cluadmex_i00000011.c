// Created file "Lib\src\Uuid\cluadmex_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWEInvokeCommand, 0x97dede66, 0xfc6b, 0x11cf, 0xb5, 0xf5, 0x00, 0xa0, 0xc9, 0x0a, 0xb5, 0x05);

