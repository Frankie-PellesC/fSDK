// Created file "Lib\src\Uuid\trkadm_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_TrkForceOwnership, 0xa2531f45, 0xc67d, 0x11d0, 0x8c, 0xb1, 0x00, 0xc0, 0x4f, 0xd9, 0x0f, 0x85);

