// Created file "Lib\src\Uuid\vss_iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IVssEnumObject, 0xae1c7110, 0x2f60, 0x11d3, 0x8a, 0x39, 0x00, 0xc0, 0x4f, 0x72, 0xd8, 0xe3);

DEFINE_GUID(IID_IVssAsync, 0x507c37b4, 0xcf5b, 0x4e95, 0xb0, 0xaf, 0x14, 0xeb, 0x97, 0x67, 0x46, 0x7e);

