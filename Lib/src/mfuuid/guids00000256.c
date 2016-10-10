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

DEFINE_GUID(MF_PD_NET_SLOWEST_SPEED, 0xb13f98f4, 0xa3e1, 0x4714, 0x83, 0xc7, 0x0e, 0x3e, 0xfa, 0x39, 0xa1, 0x8a);

