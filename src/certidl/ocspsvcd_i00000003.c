// Created file "Lib\src\certidl\ocspsvcd_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_OCSPServerLib, 0x982c40b5, 0x4fdd, 0x4756, 0x9c, 0xed, 0x69, 0x5a, 0xe2, 0xbe, 0xd9, 0x8f);

DEFINE_GUID(CLSID_OCSPRequestD, 0x3ab092c4, 0xde6a, 0x4dc4, 0xbe, 0x9e, 0xfd, 0xac, 0xbb, 0x05, 0x75, 0x9c);

DEFINE_GUID(CLSID_OCSPAdminD, 0x6d5ad135, 0x1730, 0x4f19, 0xa4, 0xeb, 0x3f, 0x78, 0xe7, 0xc9, 0x76, 0xbb);

