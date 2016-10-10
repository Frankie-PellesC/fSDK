// Created file "Lib\src\CertIdl\X64\certif_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICertServerPolicy, 0xaa000922, 0xffbe, 0x11cf, 0x88, 0x00, 0x00, 0xa0, 0xc9, 0x03, 0xb8, 0x3c);

DEFINE_GUID(IID_ICertServerExit, 0x4ba9eb90, 0x732c, 0x11d0, 0x88, 0x16, 0x00, 0xa0, 0xc9, 0x03, 0xb8, 0x3c);

