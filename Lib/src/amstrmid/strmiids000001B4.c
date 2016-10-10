// Created file "Lib\src\amstrmid\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_DVBCNetworkProvider, 0xdc0c0fe7, 0x0485, 0x4266, 0xb9, 0x3f, 0x68, 0xfb, 0xf8, 0x0e, 0xd8, 0x34);

