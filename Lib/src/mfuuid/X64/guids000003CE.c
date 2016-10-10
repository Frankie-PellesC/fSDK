// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_MFNETCHFAC_ESTIMATED_BANDWIDTH_KBPS, 0x55a1091c, 0xd981, 0x4229, 0x93, 0x19, 0x3e, 0x0b, 0x37, 0xd9, 0x30, 0xb4);

