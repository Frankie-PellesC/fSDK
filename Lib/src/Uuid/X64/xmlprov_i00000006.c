// Created file "Lib\src\Uuid\X64\xmlprov_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXmlProviderEventNotification, 0xa4886eff, 0x60b4, 0x11d7, 0xae, 0x0a, 0x00, 0x10, 0x4b, 0xc5, 0x41, 0x17);

