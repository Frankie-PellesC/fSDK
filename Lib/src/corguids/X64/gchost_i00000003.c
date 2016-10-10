// Created file "Lib\src\corguids\X64\gchost_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IGCHost, 0xfac34f6e, 0x0dcd, 0x47b5, 0x80, 0x21, 0x53, 0x1b, 0xc5, 0xec, 0xca, 0x63);

