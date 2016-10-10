// Created file "Lib\src\Uuid\rtccore_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRTCSessionPortManagement, 0xa072f1d6, 0x0286, 0x4e1f, 0x85, 0xf2, 0x17, 0xa2, 0x94, 0x84, 0x56, 0xec);

