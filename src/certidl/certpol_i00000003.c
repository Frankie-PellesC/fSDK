// Created file "Lib\src\certidl\certpol_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICertPolicy, 0x38bb5a00, 0x7636, 0x11d0, 0xb4, 0x13, 0x00, 0xa0, 0xc9, 0x1b, 0xbf, 0x8c);

DEFINE_GUID(IID_ICertPolicy2, 0x3db4910e, 0x8001, 0x4bf1, 0xaa, 0x1b, 0xf4, 0x3a, 0x80, 0x83, 0x17, 0xa0);

