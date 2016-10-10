// Created file "Lib\src\CertIdl\X64\certadmd_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICertAdminD, 0xd99e6e71, 0xfc88, 0x11d0, 0xb4, 0x98, 0x00, 0xa0, 0xc9, 0x03, 0x12, 0xf3);

DEFINE_GUID(IID_ICertAdminD2, 0x7fe0d935, 0xdda6, 0x443f, 0x85, 0xd0, 0x1c, 0xfb, 0x58, 0xfe, 0x41, 0xdd);

