// Created file "Lib\src\ADSIid\guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IADsResource, 0x34a05b20, 0x4aab, 0x11cf, 0xae, 0x2c, 0x00, 0xaa, 0x00, 0x6e, 0xbf, 0xb9);

