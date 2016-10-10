// Created file "Lib\src\Uuid\upnpp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUPnPPrivateServiceHelper2, 0x340f4076, 0x6856, 0x48f9, 0xb3, 0xc4, 0x97, 0xb9, 0x1b, 0x68, 0xd7, 0x7e);

