// Created file "Lib\src\Uuid\X64\nduuid_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INDFPropertyBag, 0x91880d0a, 0xa54a, 0x49fd, 0xb2, 0x32, 0x00, 0x64, 0xa8, 0x85, 0xc7, 0xbf);

