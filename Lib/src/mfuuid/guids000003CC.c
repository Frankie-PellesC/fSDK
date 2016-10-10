// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_MFNETCHFAC_SUPPORT_UNRELIABLE_DELIVERY, 0x6525e7cc, 0x229c, 0x44e3, 0xbc, 0x8d, 0x2d, 0x47, 0x3c, 0x79, 0x2b, 0xb7);

