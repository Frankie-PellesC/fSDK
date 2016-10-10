// Created file "Lib\src\Uuid\X64\natupnp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUPnPNAT, 0xb171c812, 0xcc76, 0x485a, 0x94, 0xd8, 0xb6, 0xb3, 0xa2, 0x79, 0x4e, 0x99);

